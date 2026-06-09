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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
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
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains ";
char _str_1[14] = " odd values.\n";
char _str_2[26] = "vector::_M_realloc_append";
_Bool IsOdd(int p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
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
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
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
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_pred_bool_____int__ p2);
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* p0);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
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
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = ((b6 == c7)) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v10) {
bb11:
  struct std__vector_int__std__allocator_int__* this12;
  this12 = v10;
  struct std__vector_int__std__allocator_int__* t13 = this12;
  struct std___Vector_base_int__std__allocator_int__* base14 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t13 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base14);
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v15, int* v16) {
bb17:
  int* __location18;
  int* __args19;
  int* __retval20;
  void* __loc21;
  __location18 = v15;
  __args19 = v16;
  int* t22 = __location18;
  void* cast23 = (void*)t22;
  __loc21 = cast23;
    void* t24 = __loc21;
    int* cast25 = (int*)t24;
    int* t26 = __args19;
    int t27 = *t26;
    *cast25 = t27;
    __retval20 = cast25;
    int* t28 = __retval20;
    return t28;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v29, int* v30, int* v31) {
bb32:
  struct std__allocator_int_* __a33;
  int* __p34;
  int* __args35;
  __a33 = v29;
  __p34 = v30;
  __args35 = v31;
  int* t36 = __p34;
  int* t37 = __args35;
  int* r38 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t36, t37);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v39, unsigned long* v40) {
bb41:
  unsigned long* __a42;
  unsigned long* __b43;
  unsigned long* __retval44;
  __a42 = v39;
  __b43 = v40;
    unsigned long* t45 = __b43;
    unsigned long t46 = *t45;
    unsigned long* t47 = __a42;
    unsigned long t48 = *t47;
    _Bool c49 = ((t46 < t48)) ? 1 : 0;
    if (c49) {
      unsigned long* t50 = __b43;
      __retval44 = t50;
      unsigned long* t51 = __retval44;
      return t51;
    }
  unsigned long* t52 = __a42;
  __retval44 = t52;
  unsigned long* t53 = __retval44;
  return t53;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v54) {
bb55:
  struct std__allocator_int_* __a56;
  unsigned long __retval57;
  unsigned long __diffmax58;
  unsigned long __allocmax59;
  __a56 = v54;
  unsigned long c60 = 2305843009213693951;
  __diffmax58 = c60;
  unsigned long c61 = 4611686018427387903;
  __allocmax59 = c61;
  unsigned long* r62 = unsigned_long_const__std__min_unsigned_long_(&__diffmax58, &__allocmax59);
  unsigned long t63 = *r62;
  __retval57 = t63;
  unsigned long t64 = __retval57;
  return t64;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v65) {
bb66:
  struct std___Vector_base_int__std__allocator_int__* this67;
  struct std__allocator_int_* __retval68;
  this67 = v65;
  struct std___Vector_base_int__std__allocator_int__* t69 = this67;
  struct std__allocator_int_* base70 = (struct std__allocator_int_*)((char *)&(t69->_M_impl) + 0);
  __retval68 = base70;
  struct std__allocator_int_* t71 = __retval68;
  return t71;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v72) {
bb73:
  struct std__vector_int__std__allocator_int__* this74;
  unsigned long __retval75;
  this74 = v72;
  struct std__vector_int__std__allocator_int__* t76 = this74;
  struct std___Vector_base_int__std__allocator_int__* base77 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std__allocator_int_* r78 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base77);
  unsigned long r79 = std__vector_int__std__allocator_int______S_max_size(r78);
  __retval75 = r79;
  unsigned long t80 = __retval75;
  return t80;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v81) {
bb82:
  struct std__vector_int__std__allocator_int__* this83;
  unsigned long __retval84;
  long __dif85;
  this83 = v81;
  struct std__vector_int__std__allocator_int__* t86 = this83;
  struct std___Vector_base_int__std__allocator_int__* base87 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t86 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base88 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base87->_M_impl) + 0);
  int* t89 = base88->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base90 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t86 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base91 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base90->_M_impl) + 0);
  int* t92 = base91->_M_start;
  long diff93 = t89 - t92;
  __dif85 = diff93;
    long t94 = __dif85;
    long c95 = 0;
    _Bool c96 = ((t94 < c95)) ? 1 : 0;
    if (c96) {
      __builtin_unreachable();
    }
  long t97 = __dif85;
  unsigned long cast98 = (unsigned long)t97;
  __retval84 = cast98;
  unsigned long t99 = __retval84;
  return t99;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v100, unsigned long* v101) {
bb102:
  unsigned long* __a103;
  unsigned long* __b104;
  unsigned long* __retval105;
  __a103 = v100;
  __b104 = v101;
    unsigned long* t106 = __a103;
    unsigned long t107 = *t106;
    unsigned long* t108 = __b104;
    unsigned long t109 = *t108;
    _Bool c110 = ((t107 < t109)) ? 1 : 0;
    if (c110) {
      unsigned long* t111 = __b104;
      __retval105 = t111;
      unsigned long* t112 = __retval105;
      return t112;
    }
  unsigned long* t113 = __a103;
  __retval105 = t113;
  unsigned long* t114 = __retval105;
  return t114;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v115, unsigned long v116, char* v117) {
bb118:
  struct std__vector_int__std__allocator_int__* this119;
  unsigned long __n120;
  char* __s121;
  unsigned long __retval122;
  unsigned long __len123;
  unsigned long ref_tmp0124;
  this119 = v115;
  __n120 = v116;
  __s121 = v117;
  struct std__vector_int__std__allocator_int__* t125 = this119;
    unsigned long r126 = std__vector_int__std__allocator_int_____max_size___const(t125);
    unsigned long r127 = std__vector_int__std__allocator_int_____size___const(t125);
    unsigned long b128 = r126 - r127;
    unsigned long t129 = __n120;
    _Bool c130 = ((b128 < t129)) ? 1 : 0;
    if (c130) {
      char* t131 = __s121;
      std____throw_length_error(t131);
    }
  unsigned long r132 = std__vector_int__std__allocator_int_____size___const(t125);
  unsigned long r133 = std__vector_int__std__allocator_int_____size___const(t125);
  ref_tmp0124 = r133;
  unsigned long* r134 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0124, &__n120);
  unsigned long t135 = *r134;
  unsigned long b136 = r132 + t135;
  __len123 = b136;
  unsigned long t137 = __len123;
  unsigned long r138 = std__vector_int__std__allocator_int_____size___const(t125);
  _Bool c139 = ((t137 < r138)) ? 1 : 0;
  _Bool ternary140;
  if (c139) {
    _Bool c141 = 1;
    ternary140 = (_Bool)c141;
  } else {
    unsigned long t142 = __len123;
    unsigned long r143 = std__vector_int__std__allocator_int_____max_size___const(t125);
    _Bool c144 = ((t142 > r143)) ? 1 : 0;
    ternary140 = (_Bool)c144;
  }
  unsigned long ternary145;
  if (ternary140) {
    unsigned long r146 = std__vector_int__std__allocator_int_____max_size___const(t125);
    ternary145 = (unsigned long)r146;
  } else {
    unsigned long t147 = __len123;
    ternary145 = (unsigned long)t147;
  }
  __retval122 = ternary145;
  unsigned long t148 = __retval122;
  return t148;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v149) {
bb150:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this151;
  int** __retval152;
  this151 = v149;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t153 = this151;
  __retval152 = &t153->_M_current;
  int** t154 = __retval152;
  return t154;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v155, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v156) {
bb157:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs158;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs159;
  long __retval160;
  __lhs158 = v155;
  __rhs159 = v156;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t161 = __lhs158;
  int** r162 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t161);
  int* t163 = *r162;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t164 = __rhs159;
  int** r165 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t164);
  int* t166 = *r165;
  long diff167 = t163 - t166;
  __retval160 = diff167;
  long t168 = __retval160;
  return t168;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v169) {
bb170:
  struct std____new_allocator_int_* this171;
  unsigned long __retval172;
  this171 = v169;
  struct std____new_allocator_int_* t173 = this171;
  unsigned long c174 = 9223372036854775807;
  unsigned long c175 = 4;
  unsigned long b176 = c174 / c175;
  __retval172 = b176;
  unsigned long t177 = __retval172;
  return t177;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v178, unsigned long v179, void* v180) {
bb181:
  struct std____new_allocator_int_* this182;
  unsigned long __n183;
  void* unnamed184;
  int* __retval185;
  this182 = v178;
  __n183 = v179;
  unnamed184 = v180;
  struct std____new_allocator_int_* t186 = this182;
    unsigned long t187 = __n183;
    unsigned long r188 = std____new_allocator_int____M_max_size___const(t186);
    _Bool c189 = ((t187 > r188)) ? 1 : 0;
    if (c189) {
        unsigned long t190 = __n183;
        unsigned long c191 = -1;
        unsigned long c192 = 4;
        unsigned long b193 = c191 / c192;
        _Bool c194 = ((t190 > b193)) ? 1 : 0;
        if (c194) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c195 = 4;
    unsigned long c196 = 16;
    _Bool c197 = ((c195 > c196)) ? 1 : 0;
    if (c197) {
      unsigned long __al198;
      unsigned long c199 = 4;
      __al198 = c199;
      unsigned long t200 = __n183;
      unsigned long c201 = 4;
      unsigned long b202 = t200 * c201;
      unsigned long t203 = __al198;
      void* r204 = operator_new_2(b202, t203);
      int* cast205 = (int*)r204;
      __retval185 = cast205;
      int* t206 = __retval185;
      return t206;
    }
  unsigned long t207 = __n183;
  unsigned long c208 = 4;
  unsigned long b209 = t207 * c208;
  void* r210 = operator_new(b209);
  int* cast211 = (int*)r210;
  __retval185 = cast211;
  int* t212 = __retval185;
  return t212;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v213, unsigned long v214) {
bb215:
  struct std__allocator_int_* this216;
  unsigned long __n217;
  int* __retval218;
  this216 = v213;
  __n217 = v214;
  struct std__allocator_int_* t219 = this216;
    _Bool r220 = std____is_constant_evaluated();
    if (r220) {
        unsigned long t221 = __n217;
        unsigned long c222 = 4;
        unsigned long ovr223;
        _Bool ovf224 = __builtin_mul_overflow(t221, c222, &ovr223);
        __n217 = ovr223;
        if (ovf224) {
          std____throw_bad_array_new_length();
        }
      unsigned long t225 = __n217;
      void* r226 = operator_new(t225);
      int* cast227 = (int*)r226;
      __retval218 = cast227;
      int* t228 = __retval218;
      return t228;
    }
  struct std____new_allocator_int_* base229 = (struct std____new_allocator_int_*)((char *)t219 + 0);
  unsigned long t230 = __n217;
  void* c231 = ((void*)0);
  int* r232 = std____new_allocator_int___allocate(base229, t230, c231);
  __retval218 = r232;
  int* t233 = __retval218;
  return t233;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v234, unsigned long v235) {
bb236:
  struct std__allocator_int_* __a237;
  unsigned long __n238;
  int* __retval239;
  __a237 = v234;
  __n238 = v235;
  struct std__allocator_int_* t240 = __a237;
  unsigned long t241 = __n238;
  int* r242 = std__allocator_int___allocate(t240, t241);
  __retval239 = r242;
  int* t243 = __retval239;
  return t243;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v244, unsigned long v245) {
bb246:
  struct std___Vector_base_int__std__allocator_int__* this247;
  unsigned long __n248;
  int* __retval249;
  this247 = v244;
  __n248 = v245;
  struct std___Vector_base_int__std__allocator_int__* t250 = this247;
  unsigned long t251 = __n248;
  unsigned long c252 = 0;
  _Bool c253 = ((t251 != c252)) ? 1 : 0;
  int* ternary254;
  if (c253) {
    struct std__allocator_int_* base255 = (struct std__allocator_int_*)((char *)&(t250->_M_impl) + 0);
    unsigned long t256 = __n248;
    int* r257 = std__allocator_traits_std__allocator_int_____allocate(base255, t256);
    ternary254 = (int*)r257;
  } else {
    int* c258 = ((void*)0);
    ternary254 = (int*)c258;
  }
  __retval249 = ternary254;
  int* t259 = __retval249;
  return t259;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v260, int* v261, unsigned long v262, struct std___Vector_base_int__std__allocator_int__* v263) {
bb264:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this265;
  int* __s266;
  unsigned long __l267;
  struct std___Vector_base_int__std__allocator_int__* __vect268;
  this265 = v260;
  __s266 = v261;
  __l267 = v262;
  __vect268 = v263;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t269 = this265;
  int* t270 = __s266;
  t269->_M_storage = t270;
  unsigned long t271 = __l267;
  t269->_M_len = t271;
  struct std___Vector_base_int__std__allocator_int__* t272 = __vect268;
  t269->_M_vect = t272;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v273) {
bb274:
  int* __ptr275;
  int* __retval276;
  __ptr275 = v273;
  int* t277 = __ptr275;
  __retval276 = t277;
  int* t278 = __retval276;
  return t278;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v279) {
bb280:
  int** __ptr281;
  int* __retval282;
  __ptr281 = v279;
  int** t283 = __ptr281;
  int* t284 = *t283;
  int* r285 = int__std__to_address_int_(t284);
  __retval282 = r285;
  int* t286 = __retval282;
  return t286;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb287:
  _Bool __retval288;
    _Bool c289 = 0;
    __retval288 = c289;
    _Bool t290 = __retval288;
    return t290;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v291, int** v292) {
bb293:
  struct __gnu_cxx____normal_iterator_int____void_* this294;
  int** __i295;
  this294 = v291;
  __i295 = v292;
  struct __gnu_cxx____normal_iterator_int____void_* t296 = this294;
  int** t297 = __i295;
  int* t298 = *t297;
  t296->_M_current = t298;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v299, int* v300) {
bb301:
  int* __location302;
  int* __args303;
  int* __retval304;
  void* __loc305;
  __location302 = v299;
  __args303 = v300;
  int* t306 = __location302;
  void* cast307 = (void*)t306;
  __loc305 = cast307;
    void* t308 = __loc305;
    int* cast309 = (int*)t308;
    int* t310 = __args303;
    int t311 = *t310;
    *cast309 = t311;
    __retval304 = cast309;
    int* t312 = __retval304;
    return t312;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v313, int* v314, int* v315) {
bb316:
  struct std__allocator_int_* __a317;
  int* __p318;
  int* __args319;
  __a317 = v313;
  __p318 = v314;
  __args319 = v315;
  int* t320 = __p318;
  int* t321 = __args319;
  int* r322 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t320, t321);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v323) {
bb324:
  int* __location325;
  __location325 = v323;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v326, int* v327) {
bb328:
  struct std__allocator_int_* __a329;
  int* __p330;
  __a329 = v326;
  __p330 = v327;
  int* t331 = __p330;
  void_std__destroy_at_int_(t331);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v332, int* v333, struct std__allocator_int_* v334) {
bb335:
  int* __dest336;
  int* __orig337;
  struct std__allocator_int_* __alloc338;
  __dest336 = v332;
  __orig337 = v333;
  __alloc338 = v334;
  struct std__allocator_int_* t339 = __alloc338;
  int* t340 = __dest336;
  int* t341 = __orig337;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t339, t340, t341);
  struct std__allocator_int_* t342 = __alloc338;
  int* t343 = __orig337;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t342, t343);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v344) {
bb345:
  struct __gnu_cxx____normal_iterator_int____void_* this346;
  int* __retval347;
  this346 = v344;
  struct __gnu_cxx____normal_iterator_int____void_* t348 = this346;
  int* t349 = t348->_M_current;
  __retval347 = t349;
  int* t350 = __retval347;
  return t350;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v351) {
bb352:
  struct __gnu_cxx____normal_iterator_int____void_* this353;
  struct __gnu_cxx____normal_iterator_int____void_* __retval354;
  this353 = v351;
  struct __gnu_cxx____normal_iterator_int____void_* t355 = this353;
  int* t356 = t355->_M_current;
  int c357 = 1;
  int* ptr358 = &(t356)[c357];
  t355->_M_current = ptr358;
  __retval354 = t355;
  struct __gnu_cxx____normal_iterator_int____void_* t359 = __retval354;
  return t359;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v360, int* v361, struct __gnu_cxx____normal_iterator_int____void_ v362, struct std__allocator_int_* v363) {
bb364:
  int* __first365;
  int* __last366;
  struct __gnu_cxx____normal_iterator_int____void_ __result367;
  struct std__allocator_int_* __alloc368;
  struct __gnu_cxx____normal_iterator_int____void_ __retval369;
  __first365 = v360;
  __last366 = v361;
  __result367 = v362;
  __alloc368 = v363;
  __retval369 = __result367; // copy
    while (1) {
      int* t371 = __first365;
      int* t372 = __last366;
      _Bool c373 = ((t371 != t372)) ? 1 : 0;
      if (!c373) break;
      int* r374 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval369);
      int* t375 = __first365;
      struct std__allocator_int_* t376 = __alloc368;
      void_std____relocate_object_a_int__int__std__allocator_int___(r374, t375, t376);
    for_step370: ;
      int* t377 = __first365;
      int c378 = 1;
      int* ptr379 = &(t377)[c378];
      __first365 = ptr379;
      struct __gnu_cxx____normal_iterator_int____void_* r380 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval369);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t381 = __retval369;
  return t381;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v382, struct __gnu_cxx____normal_iterator_int____void_* v383) {
bb384:
  struct __gnu_cxx____normal_iterator_int____void_* this385;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed386;
  struct __gnu_cxx____normal_iterator_int____void_* __retval387;
  this385 = v382;
  unnamed386 = v383;
  struct __gnu_cxx____normal_iterator_int____void_* t388 = this385;
  struct __gnu_cxx____normal_iterator_int____void_* t389 = unnamed386;
  int* t390 = t389->_M_current;
  t388->_M_current = t390;
  __retval387 = t388;
  struct __gnu_cxx____normal_iterator_int____void_* t391 = __retval387;
  return t391;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v392) {
bb393:
  struct __gnu_cxx____normal_iterator_int____void_* this394;
  int** __retval395;
  this394 = v392;
  struct __gnu_cxx____normal_iterator_int____void_* t396 = this394;
  __retval395 = &t396->_M_current;
  int** t397 = __retval395;
  return t397;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v398, int* v399, int* v400, struct std__allocator_int_* v401) {
bb402:
  int* __first403;
  int* __last404;
  int* __result405;
  struct std__allocator_int_* __alloc406;
  int* __retval407;
  long __count408;
  __first403 = v398;
  __last404 = v399;
  __result405 = v400;
  __alloc406 = v401;
  int* t409 = __last404;
  int* t410 = __first403;
  long diff411 = t409 - t410;
  __count408 = diff411;
    long t412 = __count408;
    long c413 = 0;
    _Bool c414 = ((t412 > c413)) ? 1 : 0;
    if (c414) {
        _Bool r415 = std__is_constant_evaluated();
        if (r415) {
          struct __gnu_cxx____normal_iterator_int____void_ __out416;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0417;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0418;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out416, &__result405);
          int* t419 = __first403;
          int* t420 = __last404;
          agg_tmp0418 = __out416; // copy
          struct std__allocator_int_* t421 = __alloc406;
          struct __gnu_cxx____normal_iterator_int____void_ t422 = agg_tmp0418;
          struct __gnu_cxx____normal_iterator_int____void_ r423 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t419, t420, t422, t421);
          ref_tmp0417 = r423;
          struct __gnu_cxx____normal_iterator_int____void_* r424 = __gnu_cxx____normal_iterator_int___void___operator_(&__out416, &ref_tmp0417);
          int** r425 = __gnu_cxx____normal_iterator_int___void___base___const(&__out416);
          int* t426 = *r425;
          __retval407 = t426;
          int* t427 = __retval407;
          return t427;
        }
      int* t428 = __result405;
      void* cast429 = (void*)t428;
      int* t430 = __first403;
      void* cast431 = (void*)t430;
      long t432 = __count408;
      unsigned long cast433 = (unsigned long)t432;
      unsigned long c434 = 4;
      unsigned long b435 = cast433 * c434;
      void* r436 = memcpy(cast429, cast431, b435);
    }
  int* t437 = __result405;
  long t438 = __count408;
  int* ptr439 = &(t437)[t438];
  __retval407 = ptr439;
  int* t440 = __retval407;
  return t440;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v441) {
bb442:
  int* __it443;
  int* __retval444;
  __it443 = v441;
  int* t445 = __it443;
  __retval444 = t445;
  int* t446 = __retval444;
  return t446;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v447, int* v448, int* v449, struct std__allocator_int_* v450) {
bb451:
  int* __first452;
  int* __last453;
  int* __result454;
  struct std__allocator_int_* __alloc455;
  int* __retval456;
  __first452 = v447;
  __last453 = v448;
  __result454 = v449;
  __alloc455 = v450;
  int* t457 = __first452;
  int* r458 = int__std____niter_base_int__(t457);
  int* t459 = __last453;
  int* r460 = int__std____niter_base_int__(t459);
  int* t461 = __result454;
  int* r462 = int__std____niter_base_int__(t461);
  struct std__allocator_int_* t463 = __alloc455;
  int* r464 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r458, r460, r462, t463);
  __retval456 = r464;
  int* t465 = __retval456;
  return t465;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v466, int* v467, int* v468, struct std__allocator_int_* v469) {
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
  int* t477 = __last472;
  int* t478 = __result473;
  struct std__allocator_int_* t479 = __alloc474;
  int* r480 = int__std____relocate_a_int___int___std__allocator_int___(t476, t477, t478, t479);
  __retval475 = r480;
  int* t481 = __retval475;
  return t481;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v482) {
bb483:
  struct std___Vector_base_int__std__allocator_int__* this484;
  struct std__allocator_int_* __retval485;
  this484 = v482;
  struct std___Vector_base_int__std__allocator_int__* t486 = this484;
  struct std__allocator_int_* base487 = (struct std__allocator_int_*)((char *)&(t486->_M_impl) + 0);
  __retval485 = base487;
  struct std__allocator_int_* t488 = __retval485;
  return t488;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v489) {
bb490:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this491;
  this491 = v489;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t492 = this491;
    int* t493 = t492->_M_storage;
    _Bool cast494 = (_Bool)t493;
    if (cast494) {
      struct std___Vector_base_int__std__allocator_int__* t495 = t492->_M_vect;
      int* t496 = t492->_M_storage;
      unsigned long t497 = t492->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t495, t496, t497);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v498, int* v499) {
bb500:
  struct std__vector_int__std__allocator_int__* this501;
  int* __args502;
  unsigned long __len503;
  int* __old_start504;
  int* __old_finish505;
  unsigned long __elems506;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0507;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1508;
  int* __new_start509;
  int* __new_finish510;
  this501 = v498;
  __args502 = v499;
  struct std__vector_int__std__allocator_int__* t511 = this501;
  unsigned long c512 = 1;
  char* cast513 = (char*)&(_str_2);
  unsigned long r514 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t511, c512, cast513);
  __len503 = r514;
    unsigned long t515 = __len503;
    unsigned long c516 = 0;
    _Bool c517 = ((t515 <= c516)) ? 1 : 0;
    if (c517) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base518 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t511 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base519 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base518->_M_impl) + 0);
  int* t520 = base519->_M_start;
  __old_start504 = t520;
  struct std___Vector_base_int__std__allocator_int__* base521 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t511 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base522 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base521->_M_impl) + 0);
  int* t523 = base522->_M_finish;
  __old_finish505 = t523;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r524 = std__vector_int__std__allocator_int_____end(t511);
  ref_tmp0507 = r524;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r525 = std__vector_int__std__allocator_int_____begin(t511);
  ref_tmp1508 = r525;
  long r526 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0507, &ref_tmp1508);
  unsigned long cast527 = (unsigned long)r526;
  __elems506 = cast527;
  struct std___Vector_base_int__std__allocator_int__* base528 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t511 + 0);
  unsigned long t529 = __len503;
  int* r530 = std___Vector_base_int__std__allocator_int______M_allocate(base528, t529);
  __new_start509 = r530;
  int* t531 = __new_start509;
  __new_finish510 = t531;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard532;
    int* ref_tmp2533;
    int* t534 = __new_start509;
    unsigned long t535 = __len503;
    struct std___Vector_base_int__std__allocator_int__* base536 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t511 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard532, t534, t535, base536);
      struct std___Vector_base_int__std__allocator_int__* base537 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t511 + 0);
      struct std__allocator_int_* base538 = (struct std__allocator_int_*)((char *)&(base537->_M_impl) + 0);
      int* t539 = __new_start509;
      unsigned long t540 = __elems506;
      int* ptr541 = &(t539)[t540];
      ref_tmp2533 = ptr541;
      int* r542 = auto_std____to_address_int__(&ref_tmp2533);
      int* t543 = __args502;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base538, r542, t543);
        int* t544 = __old_start504;
        int* t545 = __old_finish505;
        int* t546 = __new_start509;
        struct std___Vector_base_int__std__allocator_int__* base547 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t511 + 0);
        struct std__allocator_int_* r548 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base547);
        int* r549 = std__vector_int__std__allocator_int______S_relocate(t544, t545, t546, r548);
        __new_finish510 = r549;
        int* t550 = __new_finish510;
        int c551 = 1;
        int* ptr552 = &(t550)[c551];
        __new_finish510 = ptr552;
      int* t553 = __old_start504;
      __guard532._M_storage = t553;
      struct std___Vector_base_int__std__allocator_int__* base554 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t511 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base555 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base554->_M_impl) + 0);
      int* t556 = base555->_M_end_of_storage;
      int* t557 = __old_start504;
      long diff558 = t556 - t557;
      unsigned long cast559 = (unsigned long)diff558;
      __guard532._M_len = cast559;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard532);
    }
  int* t560 = __new_start509;
  struct std___Vector_base_int__std__allocator_int__* base561 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t511 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base562 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base561->_M_impl) + 0);
  base562->_M_start = t560;
  int* t563 = __new_finish510;
  struct std___Vector_base_int__std__allocator_int__* base564 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t511 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base565 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base564->_M_impl) + 0);
  base565->_M_finish = t563;
  int* t566 = __new_start509;
  unsigned long t567 = __len503;
  int* ptr568 = &(t566)[t567];
  struct std___Vector_base_int__std__allocator_int__* base569 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t511 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base570 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base569->_M_impl) + 0);
  base570->_M_end_of_storage = ptr568;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v571, int* v572) {
bb573:
  struct std__vector_int__std__allocator_int__* this574;
  int* __x575;
  this574 = v571;
  __x575 = v572;
  struct std__vector_int__std__allocator_int__* t576 = this574;
    struct std___Vector_base_int__std__allocator_int__* base577 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t576 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base578 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base577->_M_impl) + 0);
    int* t579 = base578->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base580 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t576 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base581 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base580->_M_impl) + 0);
    int* t582 = base581->_M_end_of_storage;
    _Bool c583 = ((t579 != t582)) ? 1 : 0;
    if (c583) {
      struct std___Vector_base_int__std__allocator_int__* base584 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t576 + 0);
      struct std__allocator_int_* base585 = (struct std__allocator_int_*)((char *)&(base584->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base586 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t576 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base587 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base586->_M_impl) + 0);
      int* t588 = base587->_M_finish;
      int* t589 = __x575;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base585, t588, t589);
      struct std___Vector_base_int__std__allocator_int__* base590 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t576 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base591 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base590->_M_impl) + 0);
      int* t592 = base591->_M_finish;
      int c593 = 1;
      int* ptr594 = &(t592)[c593];
      base591->_M_finish = ptr594;
    } else {
      int* t595 = __x575;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t576, t595);
    }
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v596, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v597) {
bb598:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs599;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs600;
  _Bool __retval601;
  __lhs599 = v596;
  __rhs600 = v597;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t602 = __lhs599;
  int** r603 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t602);
  int* t604 = *r603;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t605 = __rhs600;
  int** r606 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t605);
  int* t607 = *r606;
  _Bool c608 = ((t604 == t607)) ? 1 : 0;
  __retval601 = c608;
  _Bool t609 = __retval601;
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

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbT_
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v617, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v618) {
bb619:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this620;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it621;
  _Bool __retval622;
  this620 = v617;
  __it621 = v618;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t623 = this620;
  void* t624 = t623->_M_pred;
  int* r625 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it621);
  int t626 = *r625;
  _Bool r627 = ((_Bool (*)(int))t624)(t626);
  __retval622 = r627;
  _Bool t628 = __retval622;
  return t628;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v629) {
bb630:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this631;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval632;
  this631 = v629;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t633 = this631;
  int* t634 = t633->_M_current;
  int c635 = 1;
  int* ptr636 = &(t634)[c635];
  t633->_M_current = ptr636;
  __retval632 = t633;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t637 = __retval632;
  return t637;
}

// function: _ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops10_Iter_predIPFbiEEEENSt15iterator_traitsIT_E15difference_typeESD_SD_T0_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v638, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v639, struct __gnu_cxx____ops___Iter_pred_bool_____int__ v640) {
bb641:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first642;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last643;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __pred644;
  long __retval645;
  long __n646;
  __first642 = v638;
  __last643 = v639;
  __pred644 = v640;
  long c647 = 0;
  __n646 = c647;
    while (1) {
      _Bool r649 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first642, &__last643);
      _Bool u650 = !r649;
      if (!u650) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0651;
        agg_tmp0651 = __first642; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t652 = agg_tmp0651;
        _Bool r653 = bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred644, t652);
        if (r653) {
          long t654 = __n646;
          long u655 = t654 + 1;
          __n646 = u655;
        }
    for_step648: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r656 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first642);
    }
  long t657 = __n646;
  __retval645 = t657;
  long t658 = __retval645;
  return t658;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEC2ES3_
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v659, void* v660) {
bb661:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this662;
  void* __pred663;
  this662 = v659;
  __pred663 = v660;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t664 = this662;
  void* t665 = __pred663;
  t664->_M_pred = t665;
  return;
}

// function: _ZN9__gnu_cxx5__ops11__pred_iterIPFbiEEENS0_10_Iter_predIT_EES5_
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* v666) {
bb667:
  void* __pred668;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __retval669;
  __pred668 = v666;
  void* t670 = __pred668;
  __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(&__retval669, t670);
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t671 = __retval669;
  return t671;
}

// function: _ZSt8count_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFbiEENSt15iterator_traitsIT_E15difference_typeESA_SA_T0_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v672, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v673, void* v674) {
bb675:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first676;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last677;
  void* __pred678;
  long __retval679;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0680;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1681;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ agg_tmp2682;
  __first676 = v672;
  __last677 = v673;
  __pred678 = v674;
  agg_tmp0680 = __first676; // copy
  agg_tmp1681 = __last677; // copy
  void* t683 = __pred678;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ r684 = __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(t683);
  agg_tmp2682 = r684;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t685 = agg_tmp0680;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t686 = agg_tmp1681;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t687 = agg_tmp2682;
  long r688 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(t685, t686, t687);
  __retval679 = r688;
  long t689 = __retval679;
  return t689;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v690, int** v691) {
bb692:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this693;
  int** __i694;
  this693 = v690;
  __i694 = v691;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t695 = this693;
  int** t696 = __i694;
  int* t697 = *t696;
  t695->_M_current = t697;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v698) {
bb699:
  struct std__vector_int__std__allocator_int__* this700;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval701;
  this700 = v698;
  struct std__vector_int__std__allocator_int__* t702 = this700;
  struct std___Vector_base_int__std__allocator_int__* base703 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t702 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base704 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base703->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval701, &base704->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t705 = __retval701;
  return t705;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v706) {
bb707:
  struct std__vector_int__std__allocator_int__* this708;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval709;
  this708 = v706;
  struct std__vector_int__std__allocator_int__* t710 = this708;
  struct std___Vector_base_int__std__allocator_int__* base711 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t710 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base712 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base711->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval709, &base712->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t713 = __retval709;
  return t713;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v714, int v715) {
bb716:
  int __a717;
  int __b718;
  int __retval719;
  __a717 = v714;
  __b718 = v715;
  int t720 = __a717;
  int t721 = __b718;
  int b722 = t720 | t721;
  __retval719 = b722;
  int t723 = __retval719;
  return t723;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v724) {
bb725:
  struct std__basic_ios_char__std__char_traits_char__* this726;
  int __retval727;
  this726 = v724;
  struct std__basic_ios_char__std__char_traits_char__* t728 = this726;
  struct std__ios_base* base729 = (struct std__ios_base*)((char *)t728 + 0);
  int t730 = base729->_M_streambuf_state;
  __retval727 = t730;
  int t731 = __retval727;
  return t731;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v732, int v733) {
bb734:
  struct std__basic_ios_char__std__char_traits_char__* this735;
  int __state736;
  this735 = v732;
  __state736 = v733;
  struct std__basic_ios_char__std__char_traits_char__* t737 = this735;
  int r738 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t737);
  int t739 = __state736;
  int r740 = std__operator_(r738, t739);
  std__basic_ios_char__std__char_traits_char_____clear(t737, r740);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v741, char* v742) {
bb743:
  char* __c1744;
  char* __c2745;
  _Bool __retval746;
  __c1744 = v741;
  __c2745 = v742;
  char* t747 = __c1744;
  char t748 = *t747;
  int cast749 = (int)t748;
  char* t750 = __c2745;
  char t751 = *t750;
  int cast752 = (int)t751;
  _Bool c753 = ((cast749 == cast752)) ? 1 : 0;
  __retval746 = c753;
  _Bool t754 = __retval746;
  return t754;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v755) {
bb756:
  char* __p757;
  unsigned long __retval758;
  unsigned long __i759;
  __p757 = v755;
  unsigned long c760 = 0;
  __i759 = c760;
    char ref_tmp0761;
    while (1) {
      unsigned long t762 = __i759;
      char* t763 = __p757;
      char* ptr764 = &(t763)[t762];
      char c765 = 0;
      ref_tmp0761 = c765;
      _Bool r766 = __gnu_cxx__char_traits_char___eq(ptr764, &ref_tmp0761);
      _Bool u767 = !r766;
      if (!u767) break;
      unsigned long t768 = __i759;
      unsigned long u769 = t768 + 1;
      __i759 = u769;
    }
  unsigned long t770 = __i759;
  __retval758 = t770;
  unsigned long t771 = __retval758;
  return t771;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v772) {
bb773:
  char* __s774;
  unsigned long __retval775;
  __s774 = v772;
    _Bool r776 = std____is_constant_evaluated();
    if (r776) {
      char* t777 = __s774;
      unsigned long r778 = __gnu_cxx__char_traits_char___length(t777);
      __retval775 = r778;
      unsigned long t779 = __retval775;
      return t779;
    }
  char* t780 = __s774;
  unsigned long r781 = strlen(t780);
  __retval775 = r781;
  unsigned long t782 = __retval775;
  return t782;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v783, char* v784) {
bb785:
  struct std__basic_ostream_char__std__char_traits_char__* __out786;
  char* __s787;
  struct std__basic_ostream_char__std__char_traits_char__* __retval788;
  __out786 = v783;
  __s787 = v784;
    char* t789 = __s787;
    _Bool cast790 = (_Bool)t789;
    _Bool u791 = !cast790;
    if (u791) {
      struct std__basic_ostream_char__std__char_traits_char__* t792 = __out786;
      void** v793 = (void**)t792;
      void* v794 = *((void**)v793);
      unsigned char* cast795 = (unsigned char*)v794;
      long c796 = -24;
      unsigned char* ptr797 = &(cast795)[c796];
      long* cast798 = (long*)ptr797;
      long t799 = *cast798;
      unsigned char* cast800 = (unsigned char*)t792;
      unsigned char* ptr801 = &(cast800)[t799];
      struct std__basic_ostream_char__std__char_traits_char__* cast802 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr801;
      struct std__basic_ios_char__std__char_traits_char__* cast803 = (struct std__basic_ios_char__std__char_traits_char__*)cast802;
      int t804 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast803, t804);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t805 = __out786;
      char* t806 = __s787;
      char* t807 = __s787;
      unsigned long r808 = std__char_traits_char___length(t807);
      long cast809 = (long)r808;
      struct std__basic_ostream_char__std__char_traits_char__* r810 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t805, t806, cast809);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t811 = __out786;
  __retval788 = t811;
  struct std__basic_ostream_char__std__char_traits_char__* t812 = __retval788;
  return t812;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v813) {
bb814:
  struct std__vector_int__std__allocator_int__* this815;
  this815 = v813;
  struct std__vector_int__std__allocator_int__* t816 = this815;
    struct std___Vector_base_int__std__allocator_int__* base817 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t816 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base818 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base817->_M_impl) + 0);
    int* t819 = base818->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base820 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t816 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base821 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base820->_M_impl) + 0);
    int* t822 = base821->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base823 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t816 + 0);
    struct std__allocator_int_* r824 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base823);
    void_std___Destroy_int___int_(t819, t822, r824);
  {
    struct std___Vector_base_int__std__allocator_int__* base825 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t816 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base825);
  }
  return;
}

// function: main
int main() {
bb826:
  int __retval827;
  int mycount828;
  struct std__vector_int__std__allocator_int__ myvector829;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0830;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1831;
  int c832 = 0;
  __retval827 = c832;
  std__vector_int__std__allocator_int_____vector(&myvector829);
      int i833;
      int c834 = 1;
      i833 = c834;
      while (1) {
        int t836 = i833;
        int c837 = 10;
        _Bool c838 = ((t836 < c837)) ? 1 : 0;
        if (!c838) break;
        std__vector_int__std__allocator_int_____push_back(&myvector829, &i833);
      for_step835: ;
        int t839 = i833;
        int u840 = t839 + 1;
        i833 = u840;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r841 = std__vector_int__std__allocator_int_____begin(&myvector829);
    agg_tmp0830 = r841;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r842 = std__vector_int__std__allocator_int_____end(&myvector829);
    agg_tmp1831 = r842;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t843 = agg_tmp0830;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t844 = agg_tmp1831;
    long r845 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t843, t844, &IsOdd);
    int cast846 = (int)r845;
    mycount828 = cast846;
    char* cast847 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r848 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast847);
    int t849 = mycount828;
    struct std__basic_ostream_char__std__char_traits_char__* r850 = std__ostream__operator__(r848, t849);
    char* cast851 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r852 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r850, cast851);
    int c853 = 0;
    __retval827 = c853;
    int t854 = __retval827;
    int ret_val855 = t854;
    {
      std__vector_int__std__allocator_int______vector(&myvector829);
    }
    return ret_val855;
  int t856 = __retval827;
  return t856;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v857) {
bb858:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this859;
  this859 = v857;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t860 = this859;
  struct std__allocator_int_* base861 = (struct std__allocator_int_*)((char *)t860 + 0);
  std__allocator_int___allocator(base861);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base862 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t860 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base862);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v863) {
bb864:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this865;
  this865 = v863;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t866 = this865;
  {
    struct std__allocator_int_* base867 = (struct std__allocator_int_*)((char *)t866 + 0);
    std__allocator_int____allocator(base867);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v868) {
bb869:
  struct std___Vector_base_int__std__allocator_int__* this870;
  this870 = v868;
  struct std___Vector_base_int__std__allocator_int__* t871 = this870;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t871->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb872:
  _Bool __retval873;
    _Bool c874 = 0;
    __retval873 = c874;
    _Bool t875 = __retval873;
    return t875;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v876, int* v877, unsigned long v878) {
bb879:
  struct std____new_allocator_int_* this880;
  int* __p881;
  unsigned long __n882;
  this880 = v876;
  __p881 = v877;
  __n882 = v878;
  struct std____new_allocator_int_* t883 = this880;
    unsigned long c884 = 4;
    unsigned long c885 = 16;
    _Bool c886 = ((c884 > c885)) ? 1 : 0;
    if (c886) {
      int* t887 = __p881;
      void* cast888 = (void*)t887;
      unsigned long t889 = __n882;
      unsigned long c890 = 4;
      unsigned long b891 = t889 * c890;
      unsigned long c892 = 4;
      operator_delete_3(cast888, b891, c892);
      return;
    }
  int* t893 = __p881;
  void* cast894 = (void*)t893;
  unsigned long t895 = __n882;
  unsigned long c896 = 4;
  unsigned long b897 = t895 * c896;
  operator_delete_2(cast894, b897);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v898, int* v899, unsigned long v900) {
bb901:
  struct std__allocator_int_* this902;
  int* __p903;
  unsigned long __n904;
  this902 = v898;
  __p903 = v899;
  __n904 = v900;
  struct std__allocator_int_* t905 = this902;
    _Bool r906 = std____is_constant_evaluated();
    if (r906) {
      int* t907 = __p903;
      void* cast908 = (void*)t907;
      operator_delete(cast908);
      return;
    }
  struct std____new_allocator_int_* base909 = (struct std____new_allocator_int_*)((char *)t905 + 0);
  int* t910 = __p903;
  unsigned long t911 = __n904;
  std____new_allocator_int___deallocate(base909, t910, t911);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v912, int* v913, unsigned long v914) {
bb915:
  struct std__allocator_int_* __a916;
  int* __p917;
  unsigned long __n918;
  __a916 = v912;
  __p917 = v913;
  __n918 = v914;
  struct std__allocator_int_* t919 = __a916;
  int* t920 = __p917;
  unsigned long t921 = __n918;
  std__allocator_int___deallocate(t919, t920, t921);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v922, int* v923, unsigned long v924) {
bb925:
  struct std___Vector_base_int__std__allocator_int__* this926;
  int* __p927;
  unsigned long __n928;
  this926 = v922;
  __p927 = v923;
  __n928 = v924;
  struct std___Vector_base_int__std__allocator_int__* t929 = this926;
    int* t930 = __p927;
    _Bool cast931 = (_Bool)t930;
    if (cast931) {
      struct std__allocator_int_* base932 = (struct std__allocator_int_*)((char *)&(t929->_M_impl) + 0);
      int* t933 = __p927;
      unsigned long t934 = __n928;
      std__allocator_traits_std__allocator_int_____deallocate(base932, t933, t934);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v935) {
bb936:
  struct std___Vector_base_int__std__allocator_int__* this937;
  this937 = v935;
  struct std___Vector_base_int__std__allocator_int__* t938 = this937;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base939 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t938->_M_impl) + 0);
    int* t940 = base939->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base941 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t938->_M_impl) + 0);
    int* t942 = base941->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base943 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t938->_M_impl) + 0);
    int* t944 = base943->_M_start;
    long diff945 = t942 - t944;
    unsigned long cast946 = (unsigned long)diff945;
    std___Vector_base_int__std__allocator_int______M_deallocate(t938, t940, cast946);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t938->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v947) {
bb948:
  struct std____new_allocator_int_* this949;
  this949 = v947;
  struct std____new_allocator_int_* t950 = this949;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v951) {
bb952:
  struct std__allocator_int_* this953;
  this953 = v951;
  struct std__allocator_int_* t954 = this953;
  struct std____new_allocator_int_* base955 = (struct std____new_allocator_int_*)((char *)t954 + 0);
  std____new_allocator_int_____new_allocator(base955);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v956) {
bb957:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this958;
  this958 = v956;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t959 = this958;
  int* c960 = ((void*)0);
  t959->_M_start = c960;
  int* c961 = ((void*)0);
  t959->_M_finish = c961;
  int* c962 = ((void*)0);
  t959->_M_end_of_storage = c962;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v963) {
bb964:
  struct std__allocator_int_* this965;
  this965 = v963;
  struct std__allocator_int_* t966 = this965;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v967, int* v968) {
bb969:
  int* __first970;
  int* __last971;
  __first970 = v967;
  __last971 = v968;
      _Bool r972 = std____is_constant_evaluated();
      if (r972) {
          while (1) {
            int* t974 = __first970;
            int* t975 = __last971;
            _Bool c976 = ((t974 != t975)) ? 1 : 0;
            if (!c976) break;
            int* t977 = __first970;
            void_std__destroy_at_int_(t977);
          for_step973: ;
            int* t978 = __first970;
            int c979 = 1;
            int* ptr980 = &(t978)[c979];
            __first970 = ptr980;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v981, int* v982, struct std__allocator_int_* v983) {
bb984:
  int* __first985;
  int* __last986;
  struct std__allocator_int_* unnamed987;
  __first985 = v981;
  __last986 = v982;
  unnamed987 = v983;
  int* t988 = __first985;
  int* t989 = __last986;
  void_std___Destroy_int__(t988, t989);
  return;
}

