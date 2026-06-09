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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[10] = "1. size: ";
char _str_2[26] = "vector::_M_realloc_append";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
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
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  int t30 = __state27;
  int r31 = std__operator_(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v32, char* v33) {
bb34:
  char* __c135;
  char* __c236;
  _Bool __retval37;
  __c135 = v32;
  __c236 = v33;
  char* t38 = __c135;
  char t39 = *t38;
  int cast40 = (int)t39;
  char* t41 = __c236;
  char t42 = *t41;
  int cast43 = (int)t42;
  _Bool c44 = ((cast40 == cast43)) ? 1 : 0;
  __retval37 = c44;
  _Bool t45 = __retval37;
  return t45;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v46) {
bb47:
  char* __p48;
  unsigned long __retval49;
  unsigned long __i50;
  __p48 = v46;
  unsigned long c51 = 0;
  __i50 = c51;
    char ref_tmp052;
    while (1) {
      unsigned long t53 = __i50;
      char* t54 = __p48;
      char* ptr55 = &(t54)[t53];
      char c56 = 0;
      ref_tmp052 = c56;
      _Bool r57 = __gnu_cxx__char_traits_char___eq(ptr55, &ref_tmp052);
      _Bool u58 = !r57;
      if (!u58) break;
      unsigned long t59 = __i50;
      unsigned long u60 = t59 + 1;
      __i50 = u60;
    }
  unsigned long t61 = __i50;
  __retval49 = t61;
  unsigned long t62 = __retval49;
  return t62;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v63) {
bb64:
  char* __s65;
  unsigned long __retval66;
  __s65 = v63;
    _Bool r67 = std____is_constant_evaluated();
    if (r67) {
      char* t68 = __s65;
      unsigned long r69 = __gnu_cxx__char_traits_char___length(t68);
      __retval66 = r69;
      unsigned long t70 = __retval66;
      return t70;
    }
  char* t71 = __s65;
  unsigned long r72 = strlen(t71);
  __retval66 = r72;
  unsigned long t73 = __retval66;
  return t73;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76:
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v104) {
bb105:
  struct std__vector_int__std__allocator_int__* this106;
  unsigned long __retval107;
  long __dif108;
  this106 = v104;
  struct std__vector_int__std__allocator_int__* t109 = this106;
  struct std___Vector_base_int__std__allocator_int__* base110 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t109 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base111 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base110->_M_impl) + 0);
  int* t112 = base111->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base113 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t109 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base114 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base113->_M_impl) + 0);
  int* t115 = base114->_M_start;
  long diff116 = t112 - t115;
  __dif108 = diff116;
    long t117 = __dif108;
    long c118 = 0;
    _Bool c119 = ((t117 < c118)) ? 1 : 0;
    if (c119) {
      __builtin_unreachable();
    }
  long t120 = __dif108;
  unsigned long cast121 = (unsigned long)t120;
  __retval107 = cast121;
  unsigned long t122 = __retval107;
  return t122;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v123, void* v124) {
bb125:
  struct std__basic_ostream_char__std__char_traits_char__* this126;
  void* __pf127;
  struct std__basic_ostream_char__std__char_traits_char__* __retval128;
  this126 = v123;
  __pf127 = v124;
  struct std__basic_ostream_char__std__char_traits_char__* t129 = this126;
  void* t130 = __pf127;
  struct std__basic_ostream_char__std__char_traits_char__* r131 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t130)(t129);
  __retval128 = r131;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = __retval128;
  return t132;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v133) {
bb134:
  struct std__basic_ostream_char__std__char_traits_char__* __os135;
  struct std__basic_ostream_char__std__char_traits_char__* __retval136;
  __os135 = v133;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __os135;
  struct std__basic_ostream_char__std__char_traits_char__* r138 = std__ostream__flush(t137);
  __retval136 = r138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval136;
  return t139;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v140) {
bb141:
  struct std__ctype_char_* __f142;
  struct std__ctype_char_* __retval143;
  __f142 = v140;
    struct std__ctype_char_* t144 = __f142;
    _Bool cast145 = (_Bool)t144;
    _Bool u146 = !cast145;
    if (u146) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t147 = __f142;
  __retval143 = t147;
  struct std__ctype_char_* t148 = __retval143;
  return t148;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v149, char v150) {
bb151:
  struct std__ctype_char_* this152;
  char __c153;
  char __retval154;
  this152 = v149;
  __c153 = v150;
  struct std__ctype_char_* t155 = this152;
    char t156 = t155->_M_widen_ok;
    _Bool cast157 = (_Bool)t156;
    if (cast157) {
      char t158 = __c153;
      unsigned char cast159 = (unsigned char)t158;
      unsigned long cast160 = (unsigned long)cast159;
      char t161 = t155->_M_widen[cast160];
      __retval154 = t161;
      char t162 = __retval154;
      return t162;
    }
  std__ctype_char____M_widen_init___const(t155);
  char t163 = __c153;
  void** v164 = (void**)t155;
  void* v165 = *((void**)v164);
  char vcall168 = (char)__VERIFIER_virtual_call_char_char(t155, 6, t163);
  __retval154 = vcall168;
  char t169 = __retval154;
  return t169;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v170, char v171) {
bb172:
  struct std__basic_ios_char__std__char_traits_char__* this173;
  char __c174;
  char __retval175;
  this173 = v170;
  __c174 = v171;
  struct std__basic_ios_char__std__char_traits_char__* t176 = this173;
  struct std__ctype_char_* t177 = t176->_M_ctype;
  struct std__ctype_char_* r178 = std__ctype_char__const__std____check_facet_std__ctype_char___(t177);
  char t179 = __c174;
  char r180 = std__ctype_char___widen_char__const(r178, t179);
  __retval175 = r180;
  char t181 = __retval175;
  return t181;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v182) {
bb183:
  struct std__basic_ostream_char__std__char_traits_char__* __os184;
  struct std__basic_ostream_char__std__char_traits_char__* __retval185;
  __os184 = v182;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __os184;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __os184;
  void** v188 = (void**)t187;
  void* v189 = *((void**)v188);
  unsigned char* cast190 = (unsigned char*)v189;
  long c191 = -24;
  unsigned char* ptr192 = &(cast190)[c191];
  long* cast193 = (long*)ptr192;
  long t194 = *cast193;
  unsigned char* cast195 = (unsigned char*)t187;
  unsigned char* ptr196 = &(cast195)[t194];
  struct std__basic_ostream_char__std__char_traits_char__* cast197 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr196;
  struct std__basic_ios_char__std__char_traits_char__* cast198 = (struct std__basic_ios_char__std__char_traits_char__*)cast197;
  char c199 = 10;
  char r200 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast198, c199);
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__ostream__put(t186, r200);
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r201);
  __retval185 = r202;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __retval185;
  return t203;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v204, int* v205) {
bb206:
  int* __location207;
  int* __args208;
  int* __retval209;
  void* __loc210;
  __location207 = v204;
  __args208 = v205;
  int* t211 = __location207;
  void* cast212 = (void*)t211;
  __loc210 = cast212;
    void* t213 = __loc210;
    int* cast214 = (int*)t213;
    int* t215 = __args208;
    int t216 = *t215;
    *cast214 = t216;
    __retval209 = cast214;
    int* t217 = __retval209;
    return t217;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v218, int* v219, int* v220) {
bb221:
  struct std__allocator_int_* __a222;
  int* __p223;
  int* __args224;
  __a222 = v218;
  __p223 = v219;
  __args224 = v220;
  int* t225 = __p223;
  int* t226 = __args224;
  int* r227 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t225, t226);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v228, unsigned long* v229) {
bb230:
  unsigned long* __a231;
  unsigned long* __b232;
  unsigned long* __retval233;
  __a231 = v228;
  __b232 = v229;
    unsigned long* t234 = __b232;
    unsigned long t235 = *t234;
    unsigned long* t236 = __a231;
    unsigned long t237 = *t236;
    _Bool c238 = ((t235 < t237)) ? 1 : 0;
    if (c238) {
      unsigned long* t239 = __b232;
      __retval233 = t239;
      unsigned long* t240 = __retval233;
      return t240;
    }
  unsigned long* t241 = __a231;
  __retval233 = t241;
  unsigned long* t242 = __retval233;
  return t242;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v243) {
bb244:
  struct std__allocator_int_* __a245;
  unsigned long __retval246;
  unsigned long __diffmax247;
  unsigned long __allocmax248;
  __a245 = v243;
  unsigned long c249 = 2305843009213693951;
  __diffmax247 = c249;
  unsigned long c250 = 4611686018427387903;
  __allocmax248 = c250;
  unsigned long* r251 = unsigned_long_const__std__min_unsigned_long_(&__diffmax247, &__allocmax248);
  unsigned long t252 = *r251;
  __retval246 = t252;
  unsigned long t253 = __retval246;
  return t253;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v254) {
bb255:
  struct std___Vector_base_int__std__allocator_int__* this256;
  struct std__allocator_int_* __retval257;
  this256 = v254;
  struct std___Vector_base_int__std__allocator_int__* t258 = this256;
  struct std__allocator_int_* base259 = (struct std__allocator_int_*)((char *)&(t258->_M_impl) + 0);
  __retval257 = base259;
  struct std__allocator_int_* t260 = __retval257;
  return t260;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v261) {
bb262:
  struct std__vector_int__std__allocator_int__* this263;
  unsigned long __retval264;
  this263 = v261;
  struct std__vector_int__std__allocator_int__* t265 = this263;
  struct std___Vector_base_int__std__allocator_int__* base266 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t265 + 0);
  struct std__allocator_int_* r267 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base266);
  unsigned long r268 = std__vector_int__std__allocator_int______S_max_size(r267);
  __retval264 = r268;
  unsigned long t269 = __retval264;
  return t269;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v270, unsigned long* v271) {
bb272:
  unsigned long* __a273;
  unsigned long* __b274;
  unsigned long* __retval275;
  __a273 = v270;
  __b274 = v271;
    unsigned long* t276 = __a273;
    unsigned long t277 = *t276;
    unsigned long* t278 = __b274;
    unsigned long t279 = *t278;
    _Bool c280 = ((t277 < t279)) ? 1 : 0;
    if (c280) {
      unsigned long* t281 = __b274;
      __retval275 = t281;
      unsigned long* t282 = __retval275;
      return t282;
    }
  unsigned long* t283 = __a273;
  __retval275 = t283;
  unsigned long* t284 = __retval275;
  return t284;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v285, unsigned long v286, char* v287) {
bb288:
  struct std__vector_int__std__allocator_int__* this289;
  unsigned long __n290;
  char* __s291;
  unsigned long __retval292;
  unsigned long __len293;
  unsigned long ref_tmp0294;
  this289 = v285;
  __n290 = v286;
  __s291 = v287;
  struct std__vector_int__std__allocator_int__* t295 = this289;
    unsigned long r296 = std__vector_int__std__allocator_int_____max_size___const(t295);
    unsigned long r297 = std__vector_int__std__allocator_int_____size___const(t295);
    unsigned long b298 = r296 - r297;
    unsigned long t299 = __n290;
    _Bool c300 = ((b298 < t299)) ? 1 : 0;
    if (c300) {
      char* t301 = __s291;
      std____throw_length_error(t301);
    }
  unsigned long r302 = std__vector_int__std__allocator_int_____size___const(t295);
  unsigned long r303 = std__vector_int__std__allocator_int_____size___const(t295);
  ref_tmp0294 = r303;
  unsigned long* r304 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0294, &__n290);
  unsigned long t305 = *r304;
  unsigned long b306 = r302 + t305;
  __len293 = b306;
  unsigned long t307 = __len293;
  unsigned long r308 = std__vector_int__std__allocator_int_____size___const(t295);
  _Bool c309 = ((t307 < r308)) ? 1 : 0;
  _Bool ternary310;
  if (c309) {
    _Bool c311 = 1;
    ternary310 = (_Bool)c311;
  } else {
    unsigned long t312 = __len293;
    unsigned long r313 = std__vector_int__std__allocator_int_____max_size___const(t295);
    _Bool c314 = ((t312 > r313)) ? 1 : 0;
    ternary310 = (_Bool)c314;
  }
  unsigned long ternary315;
  if (ternary310) {
    unsigned long r316 = std__vector_int__std__allocator_int_____max_size___const(t295);
    ternary315 = (unsigned long)r316;
  } else {
    unsigned long t317 = __len293;
    ternary315 = (unsigned long)t317;
  }
  __retval292 = ternary315;
  unsigned long t318 = __retval292;
  return t318;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v319) {
bb320:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this321;
  int** __retval322;
  this321 = v319;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t323 = this321;
  __retval322 = &t323->_M_current;
  int** t324 = __retval322;
  return t324;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v325, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v326) {
bb327:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs328;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs329;
  long __retval330;
  __lhs328 = v325;
  __rhs329 = v326;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t331 = __lhs328;
  int** r332 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t331);
  int* t333 = *r332;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t334 = __rhs329;
  int** r335 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t334);
  int* t336 = *r335;
  long diff337 = t333 - t336;
  __retval330 = diff337;
  long t338 = __retval330;
  return t338;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v339, int** v340) {
bb341:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this342;
  int** __i343;
  this342 = v339;
  __i343 = v340;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t344 = this342;
  int** t345 = __i343;
  int* t346 = *t345;
  t344->_M_current = t346;
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v347) {
bb348:
  struct std__vector_int__std__allocator_int__* this349;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval350;
  this349 = v347;
  struct std__vector_int__std__allocator_int__* t351 = this349;
  struct std___Vector_base_int__std__allocator_int__* base352 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t351 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base353 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base352->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval350, &base353->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t354 = __retval350;
  return t354;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v355) {
bb356:
  struct std__vector_int__std__allocator_int__* this357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval358;
  this357 = v355;
  struct std__vector_int__std__allocator_int__* t359 = this357;
  struct std___Vector_base_int__std__allocator_int__* base360 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t359 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base361 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base360->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval358, &base361->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t362 = __retval358;
  return t362;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v363) {
bb364:
  struct std____new_allocator_int_* this365;
  unsigned long __retval366;
  this365 = v363;
  struct std____new_allocator_int_* t367 = this365;
  unsigned long c368 = 9223372036854775807;
  unsigned long c369 = 4;
  unsigned long b370 = c368 / c369;
  __retval366 = b370;
  unsigned long t371 = __retval366;
  return t371;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v372, unsigned long v373, void* v374) {
bb375:
  struct std____new_allocator_int_* this376;
  unsigned long __n377;
  void* unnamed378;
  int* __retval379;
  this376 = v372;
  __n377 = v373;
  unnamed378 = v374;
  struct std____new_allocator_int_* t380 = this376;
    unsigned long t381 = __n377;
    unsigned long r382 = std____new_allocator_int____M_max_size___const(t380);
    _Bool c383 = ((t381 > r382)) ? 1 : 0;
    if (c383) {
        unsigned long t384 = __n377;
        unsigned long c385 = -1;
        unsigned long c386 = 4;
        unsigned long b387 = c385 / c386;
        _Bool c388 = ((t384 > b387)) ? 1 : 0;
        if (c388) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c389 = 4;
    unsigned long c390 = 16;
    _Bool c391 = ((c389 > c390)) ? 1 : 0;
    if (c391) {
      unsigned long __al392;
      unsigned long c393 = 4;
      __al392 = c393;
      unsigned long t394 = __n377;
      unsigned long c395 = 4;
      unsigned long b396 = t394 * c395;
      unsigned long t397 = __al392;
      void* r398 = operator_new_2(b396, t397);
      int* cast399 = (int*)r398;
      __retval379 = cast399;
      int* t400 = __retval379;
      return t400;
    }
  unsigned long t401 = __n377;
  unsigned long c402 = 4;
  unsigned long b403 = t401 * c402;
  void* r404 = operator_new(b403);
  int* cast405 = (int*)r404;
  __retval379 = cast405;
  int* t406 = __retval379;
  return t406;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v407, unsigned long v408) {
bb409:
  struct std__allocator_int_* this410;
  unsigned long __n411;
  int* __retval412;
  this410 = v407;
  __n411 = v408;
  struct std__allocator_int_* t413 = this410;
    _Bool r414 = std____is_constant_evaluated();
    if (r414) {
        unsigned long t415 = __n411;
        unsigned long c416 = 4;
        unsigned long ovr417;
        _Bool ovf418 = __builtin_mul_overflow(t415, c416, &ovr417);
        __n411 = ovr417;
        if (ovf418) {
          std____throw_bad_array_new_length();
        }
      unsigned long t419 = __n411;
      void* r420 = operator_new(t419);
      int* cast421 = (int*)r420;
      __retval412 = cast421;
      int* t422 = __retval412;
      return t422;
    }
  struct std____new_allocator_int_* base423 = (struct std____new_allocator_int_*)((char *)t413 + 0);
  unsigned long t424 = __n411;
  void* c425 = ((void*)0);
  int* r426 = std____new_allocator_int___allocate(base423, t424, c425);
  __retval412 = r426;
  int* t427 = __retval412;
  return t427;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v428, unsigned long v429) {
bb430:
  struct std__allocator_int_* __a431;
  unsigned long __n432;
  int* __retval433;
  __a431 = v428;
  __n432 = v429;
  struct std__allocator_int_* t434 = __a431;
  unsigned long t435 = __n432;
  int* r436 = std__allocator_int___allocate(t434, t435);
  __retval433 = r436;
  int* t437 = __retval433;
  return t437;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v438, unsigned long v439) {
bb440:
  struct std___Vector_base_int__std__allocator_int__* this441;
  unsigned long __n442;
  int* __retval443;
  this441 = v438;
  __n442 = v439;
  struct std___Vector_base_int__std__allocator_int__* t444 = this441;
  unsigned long t445 = __n442;
  unsigned long c446 = 0;
  _Bool c447 = ((t445 != c446)) ? 1 : 0;
  int* ternary448;
  if (c447) {
    struct std__allocator_int_* base449 = (struct std__allocator_int_*)((char *)&(t444->_M_impl) + 0);
    unsigned long t450 = __n442;
    int* r451 = std__allocator_traits_std__allocator_int_____allocate(base449, t450);
    ternary448 = (int*)r451;
  } else {
    int* c452 = ((void*)0);
    ternary448 = (int*)c452;
  }
  __retval443 = ternary448;
  int* t453 = __retval443;
  return t453;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v454, int* v455, unsigned long v456, struct std___Vector_base_int__std__allocator_int__* v457) {
bb458:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this459;
  int* __s460;
  unsigned long __l461;
  struct std___Vector_base_int__std__allocator_int__* __vect462;
  this459 = v454;
  __s460 = v455;
  __l461 = v456;
  __vect462 = v457;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t463 = this459;
  int* t464 = __s460;
  t463->_M_storage = t464;
  unsigned long t465 = __l461;
  t463->_M_len = t465;
  struct std___Vector_base_int__std__allocator_int__* t466 = __vect462;
  t463->_M_vect = t466;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v467) {
bb468:
  int* __ptr469;
  int* __retval470;
  __ptr469 = v467;
  int* t471 = __ptr469;
  __retval470 = t471;
  int* t472 = __retval470;
  return t472;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v473) {
bb474:
  int** __ptr475;
  int* __retval476;
  __ptr475 = v473;
  int** t477 = __ptr475;
  int* t478 = *t477;
  int* r479 = int__std__to_address_int_(t478);
  __retval476 = r479;
  int* t480 = __retval476;
  return t480;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb481:
  _Bool __retval482;
    _Bool c483 = 0;
    __retval482 = c483;
    _Bool t484 = __retval482;
    return t484;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v485, int** v486) {
bb487:
  struct __gnu_cxx____normal_iterator_int____void_* this488;
  int** __i489;
  this488 = v485;
  __i489 = v486;
  struct __gnu_cxx____normal_iterator_int____void_* t490 = this488;
  int** t491 = __i489;
  int* t492 = *t491;
  t490->_M_current = t492;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v493, int* v494) {
bb495:
  int* __location496;
  int* __args497;
  int* __retval498;
  void* __loc499;
  __location496 = v493;
  __args497 = v494;
  int* t500 = __location496;
  void* cast501 = (void*)t500;
  __loc499 = cast501;
    void* t502 = __loc499;
    int* cast503 = (int*)t502;
    int* t504 = __args497;
    int t505 = *t504;
    *cast503 = t505;
    __retval498 = cast503;
    int* t506 = __retval498;
    return t506;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v507, int* v508, int* v509) {
bb510:
  struct std__allocator_int_* __a511;
  int* __p512;
  int* __args513;
  __a511 = v507;
  __p512 = v508;
  __args513 = v509;
  int* t514 = __p512;
  int* t515 = __args513;
  int* r516 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t514, t515);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v517) {
bb518:
  int* __location519;
  __location519 = v517;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v520, int* v521) {
bb522:
  struct std__allocator_int_* __a523;
  int* __p524;
  __a523 = v520;
  __p524 = v521;
  int* t525 = __p524;
  void_std__destroy_at_int_(t525);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v526, int* v527, struct std__allocator_int_* v528) {
bb529:
  int* __dest530;
  int* __orig531;
  struct std__allocator_int_* __alloc532;
  __dest530 = v526;
  __orig531 = v527;
  __alloc532 = v528;
  struct std__allocator_int_* t533 = __alloc532;
  int* t534 = __dest530;
  int* t535 = __orig531;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t533, t534, t535);
  struct std__allocator_int_* t536 = __alloc532;
  int* t537 = __orig531;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t536, t537);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v538) {
bb539:
  struct __gnu_cxx____normal_iterator_int____void_* this540;
  int* __retval541;
  this540 = v538;
  struct __gnu_cxx____normal_iterator_int____void_* t542 = this540;
  int* t543 = t542->_M_current;
  __retval541 = t543;
  int* t544 = __retval541;
  return t544;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v545) {
bb546:
  struct __gnu_cxx____normal_iterator_int____void_* this547;
  struct __gnu_cxx____normal_iterator_int____void_* __retval548;
  this547 = v545;
  struct __gnu_cxx____normal_iterator_int____void_* t549 = this547;
  int* t550 = t549->_M_current;
  int c551 = 1;
  int* ptr552 = &(t550)[c551];
  t549->_M_current = ptr552;
  __retval548 = t549;
  struct __gnu_cxx____normal_iterator_int____void_* t553 = __retval548;
  return t553;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v554, int* v555, struct __gnu_cxx____normal_iterator_int____void_ v556, struct std__allocator_int_* v557) {
bb558:
  int* __first559;
  int* __last560;
  struct __gnu_cxx____normal_iterator_int____void_ __result561;
  struct std__allocator_int_* __alloc562;
  struct __gnu_cxx____normal_iterator_int____void_ __retval563;
  __first559 = v554;
  __last560 = v555;
  __result561 = v556;
  __alloc562 = v557;
  __retval563 = __result561; // copy
    while (1) {
      int* t565 = __first559;
      int* t566 = __last560;
      _Bool c567 = ((t565 != t566)) ? 1 : 0;
      if (!c567) break;
      int* r568 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval563);
      int* t569 = __first559;
      struct std__allocator_int_* t570 = __alloc562;
      void_std____relocate_object_a_int__int__std__allocator_int___(r568, t569, t570);
    for_step564: ;
      int* t571 = __first559;
      int c572 = 1;
      int* ptr573 = &(t571)[c572];
      __first559 = ptr573;
      struct __gnu_cxx____normal_iterator_int____void_* r574 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval563);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t575 = __retval563;
  return t575;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v576, struct __gnu_cxx____normal_iterator_int____void_* v577) {
bb578:
  struct __gnu_cxx____normal_iterator_int____void_* this579;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed580;
  struct __gnu_cxx____normal_iterator_int____void_* __retval581;
  this579 = v576;
  unnamed580 = v577;
  struct __gnu_cxx____normal_iterator_int____void_* t582 = this579;
  struct __gnu_cxx____normal_iterator_int____void_* t583 = unnamed580;
  int* t584 = t583->_M_current;
  t582->_M_current = t584;
  __retval581 = t582;
  struct __gnu_cxx____normal_iterator_int____void_* t585 = __retval581;
  return t585;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v586) {
bb587:
  struct __gnu_cxx____normal_iterator_int____void_* this588;
  int** __retval589;
  this588 = v586;
  struct __gnu_cxx____normal_iterator_int____void_* t590 = this588;
  __retval589 = &t590->_M_current;
  int** t591 = __retval589;
  return t591;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v592, int* v593, int* v594, struct std__allocator_int_* v595) {
bb596:
  int* __first597;
  int* __last598;
  int* __result599;
  struct std__allocator_int_* __alloc600;
  int* __retval601;
  long __count602;
  __first597 = v592;
  __last598 = v593;
  __result599 = v594;
  __alloc600 = v595;
  int* t603 = __last598;
  int* t604 = __first597;
  long diff605 = t603 - t604;
  __count602 = diff605;
    long t606 = __count602;
    long c607 = 0;
    _Bool c608 = ((t606 > c607)) ? 1 : 0;
    if (c608) {
        _Bool r609 = std__is_constant_evaluated();
        if (r609) {
          struct __gnu_cxx____normal_iterator_int____void_ __out610;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0611;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0612;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out610, &__result599);
          int* t613 = __first597;
          int* t614 = __last598;
          agg_tmp0612 = __out610; // copy
          struct std__allocator_int_* t615 = __alloc600;
          struct __gnu_cxx____normal_iterator_int____void_ t616 = agg_tmp0612;
          struct __gnu_cxx____normal_iterator_int____void_ r617 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t613, t614, t616, t615);
          ref_tmp0611 = r617;
          struct __gnu_cxx____normal_iterator_int____void_* r618 = __gnu_cxx____normal_iterator_int___void___operator_(&__out610, &ref_tmp0611);
          int** r619 = __gnu_cxx____normal_iterator_int___void___base___const(&__out610);
          int* t620 = *r619;
          __retval601 = t620;
          int* t621 = __retval601;
          return t621;
        }
      int* t622 = __result599;
      void* cast623 = (void*)t622;
      int* t624 = __first597;
      void* cast625 = (void*)t624;
      long t626 = __count602;
      unsigned long cast627 = (unsigned long)t626;
      unsigned long c628 = 4;
      unsigned long b629 = cast627 * c628;
      void* r630 = memcpy(cast623, cast625, b629);
    }
  int* t631 = __result599;
  long t632 = __count602;
  int* ptr633 = &(t631)[t632];
  __retval601 = ptr633;
  int* t634 = __retval601;
  return t634;
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

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v641, int* v642, int* v643, struct std__allocator_int_* v644) {
bb645:
  int* __first646;
  int* __last647;
  int* __result648;
  struct std__allocator_int_* __alloc649;
  int* __retval650;
  __first646 = v641;
  __last647 = v642;
  __result648 = v643;
  __alloc649 = v644;
  int* t651 = __first646;
  int* r652 = int__std____niter_base_int__(t651);
  int* t653 = __last647;
  int* r654 = int__std____niter_base_int__(t653);
  int* t655 = __result648;
  int* r656 = int__std____niter_base_int__(t655);
  struct std__allocator_int_* t657 = __alloc649;
  int* r658 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r652, r654, r656, t657);
  __retval650 = r658;
  int* t659 = __retval650;
  return t659;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v660, int* v661, int* v662, struct std__allocator_int_* v663) {
bb664:
  int* __first665;
  int* __last666;
  int* __result667;
  struct std__allocator_int_* __alloc668;
  int* __retval669;
  __first665 = v660;
  __last666 = v661;
  __result667 = v662;
  __alloc668 = v663;
  int* t670 = __first665;
  int* t671 = __last666;
  int* t672 = __result667;
  struct std__allocator_int_* t673 = __alloc668;
  int* r674 = int__std____relocate_a_int___int___std__allocator_int___(t670, t671, t672, t673);
  __retval669 = r674;
  int* t675 = __retval669;
  return t675;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v676) {
bb677:
  struct std___Vector_base_int__std__allocator_int__* this678;
  struct std__allocator_int_* __retval679;
  this678 = v676;
  struct std___Vector_base_int__std__allocator_int__* t680 = this678;
  struct std__allocator_int_* base681 = (struct std__allocator_int_*)((char *)&(t680->_M_impl) + 0);
  __retval679 = base681;
  struct std__allocator_int_* t682 = __retval679;
  return t682;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v683) {
bb684:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this685;
  this685 = v683;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t686 = this685;
    int* t687 = t686->_M_storage;
    _Bool cast688 = (_Bool)t687;
    if (cast688) {
      struct std___Vector_base_int__std__allocator_int__* t689 = t686->_M_vect;
      int* t690 = t686->_M_storage;
      unsigned long t691 = t686->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t689, t690, t691);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v692, int* v693) {
bb694:
  struct std__vector_int__std__allocator_int__* this695;
  int* __args696;
  unsigned long __len697;
  int* __old_start698;
  int* __old_finish699;
  unsigned long __elems700;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0701;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1702;
  int* __new_start703;
  int* __new_finish704;
  this695 = v692;
  __args696 = v693;
  struct std__vector_int__std__allocator_int__* t705 = this695;
  unsigned long c706 = 1;
  char* cast707 = (char*)&(_str_2);
  unsigned long r708 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t705, c706, cast707);
  __len697 = r708;
    unsigned long t709 = __len697;
    unsigned long c710 = 0;
    _Bool c711 = ((t709 <= c710)) ? 1 : 0;
    if (c711) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base712 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t705 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base713 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base712->_M_impl) + 0);
  int* t714 = base713->_M_start;
  __old_start698 = t714;
  struct std___Vector_base_int__std__allocator_int__* base715 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t705 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base716 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base715->_M_impl) + 0);
  int* t717 = base716->_M_finish;
  __old_finish699 = t717;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r718 = std__vector_int__std__allocator_int_____end(t705);
  ref_tmp0701 = r718;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r719 = std__vector_int__std__allocator_int_____begin(t705);
  ref_tmp1702 = r719;
  long r720 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0701, &ref_tmp1702);
  unsigned long cast721 = (unsigned long)r720;
  __elems700 = cast721;
  struct std___Vector_base_int__std__allocator_int__* base722 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t705 + 0);
  unsigned long t723 = __len697;
  int* r724 = std___Vector_base_int__std__allocator_int______M_allocate(base722, t723);
  __new_start703 = r724;
  int* t725 = __new_start703;
  __new_finish704 = t725;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard726;
    int* ref_tmp2727;
    int* t728 = __new_start703;
    unsigned long t729 = __len697;
    struct std___Vector_base_int__std__allocator_int__* base730 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t705 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard726, t728, t729, base730);
      struct std___Vector_base_int__std__allocator_int__* base731 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t705 + 0);
      struct std__allocator_int_* base732 = (struct std__allocator_int_*)((char *)&(base731->_M_impl) + 0);
      int* t733 = __new_start703;
      unsigned long t734 = __elems700;
      int* ptr735 = &(t733)[t734];
      ref_tmp2727 = ptr735;
      int* r736 = auto_std____to_address_int__(&ref_tmp2727);
      int* t737 = __args696;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base732, r736, t737);
        int* t738 = __old_start698;
        int* t739 = __old_finish699;
        int* t740 = __new_start703;
        struct std___Vector_base_int__std__allocator_int__* base741 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t705 + 0);
        struct std__allocator_int_* r742 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base741);
        int* r743 = std__vector_int__std__allocator_int______S_relocate(t738, t739, t740, r742);
        __new_finish704 = r743;
        int* t744 = __new_finish704;
        int c745 = 1;
        int* ptr746 = &(t744)[c745];
        __new_finish704 = ptr746;
      int* t747 = __old_start698;
      __guard726._M_storage = t747;
      struct std___Vector_base_int__std__allocator_int__* base748 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t705 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base749 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base748->_M_impl) + 0);
      int* t750 = base749->_M_end_of_storage;
      int* t751 = __old_start698;
      long diff752 = t750 - t751;
      unsigned long cast753 = (unsigned long)diff752;
      __guard726._M_len = cast753;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard726);
    }
  int* t754 = __new_start703;
  struct std___Vector_base_int__std__allocator_int__* base755 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t705 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base756 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base755->_M_impl) + 0);
  base756->_M_start = t754;
  int* t757 = __new_finish704;
  struct std___Vector_base_int__std__allocator_int__* base758 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t705 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base759 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base758->_M_impl) + 0);
  base759->_M_finish = t757;
  int* t760 = __new_start703;
  unsigned long t761 = __len697;
  int* ptr762 = &(t760)[t761];
  struct std___Vector_base_int__std__allocator_int__* base763 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t705 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base764 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base763->_M_impl) + 0);
  base764->_M_end_of_storage = ptr762;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v765, int* v766) {
bb767:
  struct std__vector_int__std__allocator_int__* this768;
  int* __x769;
  this768 = v765;
  __x769 = v766;
  struct std__vector_int__std__allocator_int__* t770 = this768;
    struct std___Vector_base_int__std__allocator_int__* base771 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t770 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base772 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base771->_M_impl) + 0);
    int* t773 = base772->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base774 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t770 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base775 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base774->_M_impl) + 0);
    int* t776 = base775->_M_end_of_storage;
    _Bool c777 = ((t773 != t776)) ? 1 : 0;
    if (c777) {
      struct std___Vector_base_int__std__allocator_int__* base778 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t770 + 0);
      struct std__allocator_int_* base779 = (struct std__allocator_int_*)((char *)&(base778->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base780 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t770 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base781 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base780->_M_impl) + 0);
      int* t782 = base781->_M_finish;
      int* t783 = __x769;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base779, t782, t783);
      struct std___Vector_base_int__std__allocator_int__* base784 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t770 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base785 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base784->_M_impl) + 0);
      int* t786 = base785->_M_finish;
      int c787 = 1;
      int* ptr788 = &(t786)[c787];
      base785->_M_finish = ptr788;
    } else {
      int* t789 = __x769;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t770, t789);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v790) {
bb791:
  struct std__vector_int__std__allocator_int__* this792;
  this792 = v790;
  struct std__vector_int__std__allocator_int__* t793 = this792;
    struct std___Vector_base_int__std__allocator_int__* base794 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t793 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base795 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base794->_M_impl) + 0);
    int* t796 = base795->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base797 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t793 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base798 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base797->_M_impl) + 0);
    int* t799 = base798->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base800 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t793 + 0);
    struct std__allocator_int_* r801 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base800);
    void_std___Destroy_int___int_(t796, t799, r801);
  {
    struct std___Vector_base_int__std__allocator_int__* base802 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t793 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base802);
  }
  return;
}

// function: main
int main() {
bb803:
  int __retval804;
  struct std__vector_int__std__allocator_int__ myints805;
  int c806 = 0;
  __retval804 = c806;
  std__vector_int__std__allocator_int_____vector(&myints805);
    char* cast807 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r808 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast807);
    unsigned long r809 = std__vector_int__std__allocator_int_____size___const(&myints805);
    int cast810 = (int)r809;
    struct std__basic_ostream_char__std__char_traits_char__* r811 = std__ostream__operator__(r808, cast810);
    struct std__basic_ostream_char__std__char_traits_char__* r812 = std__ostream__operator___std__ostream_____(r811, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int i813;
      int c814 = 0;
      i813 = c814;
      while (1) {
        int t816 = i813;
        int c817 = 10;
        _Bool c818 = ((t816 < c817)) ? 1 : 0;
        if (!c818) break;
        std__vector_int__std__allocator_int_____push_back(&myints805, &i813);
      for_step815: ;
        int t819 = i813;
        int u820 = t819 + 1;
        i813 = u820;
      }
    char* cast821 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r822 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast821);
    unsigned long r823 = std__vector_int__std__allocator_int_____size___const(&myints805);
    int cast824 = (int)r823;
    struct std__basic_ostream_char__std__char_traits_char__* r825 = std__ostream__operator__(r822, cast824);
    struct std__basic_ostream_char__std__char_traits_char__* r826 = std__ostream__operator___std__ostream_____(r825, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c827 = 0;
    __retval804 = c827;
    int t828 = __retval804;
    int ret_val829 = t828;
    {
      std__vector_int__std__allocator_int______vector(&myints805);
    }
    return ret_val829;
  int t830 = __retval804;
  return t830;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v831) {
bb832:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this833;
  this833 = v831;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t834 = this833;
  struct std__allocator_int_* base835 = (struct std__allocator_int_*)((char *)t834 + 0);
  std__allocator_int___allocator(base835);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base836 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t834 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base836);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v837) {
bb838:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this839;
  this839 = v837;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t840 = this839;
  {
    struct std__allocator_int_* base841 = (struct std__allocator_int_*)((char *)t840 + 0);
    std__allocator_int____allocator(base841);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v842) {
bb843:
  struct std___Vector_base_int__std__allocator_int__* this844;
  this844 = v842;
  struct std___Vector_base_int__std__allocator_int__* t845 = this844;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t845->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb846:
  _Bool __retval847;
    _Bool c848 = 0;
    __retval847 = c848;
    _Bool t849 = __retval847;
    return t849;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v850, int* v851, unsigned long v852) {
bb853:
  struct std____new_allocator_int_* this854;
  int* __p855;
  unsigned long __n856;
  this854 = v850;
  __p855 = v851;
  __n856 = v852;
  struct std____new_allocator_int_* t857 = this854;
    unsigned long c858 = 4;
    unsigned long c859 = 16;
    _Bool c860 = ((c858 > c859)) ? 1 : 0;
    if (c860) {
      int* t861 = __p855;
      void* cast862 = (void*)t861;
      unsigned long t863 = __n856;
      unsigned long c864 = 4;
      unsigned long b865 = t863 * c864;
      unsigned long c866 = 4;
      operator_delete_3(cast862, b865, c866);
      return;
    }
  int* t867 = __p855;
  void* cast868 = (void*)t867;
  unsigned long t869 = __n856;
  unsigned long c870 = 4;
  unsigned long b871 = t869 * c870;
  operator_delete_2(cast868, b871);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v872, int* v873, unsigned long v874) {
bb875:
  struct std__allocator_int_* this876;
  int* __p877;
  unsigned long __n878;
  this876 = v872;
  __p877 = v873;
  __n878 = v874;
  struct std__allocator_int_* t879 = this876;
    _Bool r880 = std____is_constant_evaluated();
    if (r880) {
      int* t881 = __p877;
      void* cast882 = (void*)t881;
      operator_delete(cast882);
      return;
    }
  struct std____new_allocator_int_* base883 = (struct std____new_allocator_int_*)((char *)t879 + 0);
  int* t884 = __p877;
  unsigned long t885 = __n878;
  std____new_allocator_int___deallocate(base883, t884, t885);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v886, int* v887, unsigned long v888) {
bb889:
  struct std__allocator_int_* __a890;
  int* __p891;
  unsigned long __n892;
  __a890 = v886;
  __p891 = v887;
  __n892 = v888;
  struct std__allocator_int_* t893 = __a890;
  int* t894 = __p891;
  unsigned long t895 = __n892;
  std__allocator_int___deallocate(t893, t894, t895);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v896, int* v897, unsigned long v898) {
bb899:
  struct std___Vector_base_int__std__allocator_int__* this900;
  int* __p901;
  unsigned long __n902;
  this900 = v896;
  __p901 = v897;
  __n902 = v898;
  struct std___Vector_base_int__std__allocator_int__* t903 = this900;
    int* t904 = __p901;
    _Bool cast905 = (_Bool)t904;
    if (cast905) {
      struct std__allocator_int_* base906 = (struct std__allocator_int_*)((char *)&(t903->_M_impl) + 0);
      int* t907 = __p901;
      unsigned long t908 = __n902;
      std__allocator_traits_std__allocator_int_____deallocate(base906, t907, t908);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v909) {
bb910:
  struct std___Vector_base_int__std__allocator_int__* this911;
  this911 = v909;
  struct std___Vector_base_int__std__allocator_int__* t912 = this911;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base913 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t912->_M_impl) + 0);
    int* t914 = base913->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base915 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t912->_M_impl) + 0);
    int* t916 = base915->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base917 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t912->_M_impl) + 0);
    int* t918 = base917->_M_start;
    long diff919 = t916 - t918;
    unsigned long cast920 = (unsigned long)diff919;
    std___Vector_base_int__std__allocator_int______M_deallocate(t912, t914, cast920);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t912->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v921) {
bb922:
  struct std____new_allocator_int_* this923;
  this923 = v921;
  struct std____new_allocator_int_* t924 = this923;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v925) {
bb926:
  struct std__allocator_int_* this927;
  this927 = v925;
  struct std__allocator_int_* t928 = this927;
  struct std____new_allocator_int_* base929 = (struct std____new_allocator_int_*)((char *)t928 + 0);
  std____new_allocator_int_____new_allocator(base929);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v930) {
bb931:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this932;
  this932 = v930;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t933 = this932;
  int* c934 = ((void*)0);
  t933->_M_start = c934;
  int* c935 = ((void*)0);
  t933->_M_finish = c935;
  int* c936 = ((void*)0);
  t933->_M_end_of_storage = c936;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v937) {
bb938:
  struct std__allocator_int_* this939;
  this939 = v937;
  struct std__allocator_int_* t940 = this939;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v941, int* v942) {
bb943:
  int* __first944;
  int* __last945;
  __first944 = v941;
  __last945 = v942;
      _Bool r946 = std____is_constant_evaluated();
      if (r946) {
          while (1) {
            int* t948 = __first944;
            int* t949 = __last945;
            _Bool c950 = ((t948 != t949)) ? 1 : 0;
            if (!c950) break;
            int* t951 = __first944;
            void_std__destroy_at_int_(t951);
          for_step947: ;
            int* t952 = __first944;
            int c953 = 1;
            int* ptr954 = &(t952)[c953];
            __first944 = ptr954;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v955, int* v956, struct std__allocator_int_* v957) {
bb958:
  int* __first959;
  int* __last960;
  struct std__allocator_int_* unnamed961;
  __first959 = v955;
  __last960 = v956;
  unnamed961 = v957;
  int* t962 = __first959;
  int* t963 = __last960;
  void_std___Destroy_int__(t962, t963);
  return;
}

