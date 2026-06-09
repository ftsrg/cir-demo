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
struct std__random_access_iterator_tag { unsigned char __field0; };
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
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

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
  struct std__allocator_int_* t17 = __a11;
  std___Vector_base_int__std__allocator_int______Vector_base(base13, r16, t17);
    unsigned long t18 = __n10;
    std__vector_int__std__allocator_int______M_default_initialize(t12, t18);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v19) {
bb20:
  struct std__allocator_int_* this21;
  this21 = v19;
  struct std__allocator_int_* t22 = this21;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v23) {
bb24:
  struct std__vector_int__std__allocator_int__* this25;
  unsigned long __retval26;
  long __dif27;
  this25 = v23;
  struct std__vector_int__std__allocator_int__* t28 = this25;
  struct std___Vector_base_int__std__allocator_int__* base29 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t28 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base30 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base29->_M_impl) + 0);
  int* t31 = base30->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base32 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t28 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base33 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base32->_M_impl) + 0);
  int* t34 = base33->_M_start;
  long diff35 = t31 - t34;
  __dif27 = diff35;
    long t36 = __dif27;
    long c37 = 0;
    _Bool c38 = ((t36 < c37)) ? 1 : 0;
    if (c38) {
      __builtin_unreachable();
    }
  long t39 = __dif27;
  unsigned long cast40 = (unsigned long)t39;
  __retval26 = cast40;
  unsigned long t41 = __retval26;
  return t41;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v42, unsigned long v43) {
bb44:
  struct std__vector_int__std__allocator_int__* this45;
  unsigned long __n46;
  int* __retval47;
  this45 = v42;
  __n46 = v43;
  struct std__vector_int__std__allocator_int__* t48 = this45;
    do {
          unsigned long t49 = __n46;
          unsigned long r50 = std__vector_int__std__allocator_int_____size___const(t48);
          _Bool c51 = ((t49 < r50)) ? 1 : 0;
          _Bool u52 = !c51;
          if (u52) {
            char* cast53 = (char*)&(_str_3);
            int c54 = 1263;
            char* cast55 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast56 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast53, c54, cast55, cast56);
          }
      _Bool c57 = 0;
      if (!c57) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base58 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t48 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base59 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base58->_M_impl) + 0);
  int* t60 = base59->_M_start;
  unsigned long t61 = __n46;
  int* ptr62 = &(t60)[t61];
  __retval47 = ptr62;
  int* t63 = __retval47;
  return t63;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v64, int v65) {
bb66:
  int __a67;
  int __b68;
  int __retval69;
  __a67 = v64;
  __b68 = v65;
  int t70 = __a67;
  int t71 = __b68;
  int b72 = t70 | t71;
  __retval69 = b72;
  int t73 = __retval69;
  return t73;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v74) {
bb75:
  struct std__basic_ios_char__std__char_traits_char__* this76;
  int __retval77;
  this76 = v74;
  struct std__basic_ios_char__std__char_traits_char__* t78 = this76;
  struct std__ios_base* base79 = (struct std__ios_base*)((char *)t78 + 0);
  int t80 = base79->_M_streambuf_state;
  __retval77 = t80;
  int t81 = __retval77;
  return t81;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v82, int v83) {
bb84:
  struct std__basic_ios_char__std__char_traits_char__* this85;
  int __state86;
  this85 = v82;
  __state86 = v83;
  struct std__basic_ios_char__std__char_traits_char__* t87 = this85;
  int r88 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t87);
  int t89 = __state86;
  int r90 = std__operator_(r88, t89);
  std__basic_ios_char__std__char_traits_char_____clear(t87, r90);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v91, char* v92) {
bb93:
  char* __c194;
  char* __c295;
  _Bool __retval96;
  __c194 = v91;
  __c295 = v92;
  char* t97 = __c194;
  char t98 = *t97;
  int cast99 = (int)t98;
  char* t100 = __c295;
  char t101 = *t100;
  int cast102 = (int)t101;
  _Bool c103 = ((cast99 == cast102)) ? 1 : 0;
  __retval96 = c103;
  _Bool t104 = __retval96;
  return t104;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v105) {
bb106:
  char* __p107;
  unsigned long __retval108;
  unsigned long __i109;
  __p107 = v105;
  unsigned long c110 = 0;
  __i109 = c110;
    char ref_tmp0111;
    while (1) {
      unsigned long t112 = __i109;
      char* t113 = __p107;
      char* ptr114 = &(t113)[t112];
      char c115 = 0;
      ref_tmp0111 = c115;
      _Bool r116 = __gnu_cxx__char_traits_char___eq(ptr114, &ref_tmp0111);
      _Bool u117 = !r116;
      if (!u117) break;
      unsigned long t118 = __i109;
      unsigned long u119 = t118 + 1;
      __i109 = u119;
    }
  unsigned long t120 = __i109;
  __retval108 = t120;
  unsigned long t121 = __retval108;
  return t121;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v122) {
bb123:
  char* __s124;
  unsigned long __retval125;
  __s124 = v122;
    _Bool r126 = std____is_constant_evaluated();
    if (r126) {
      char* t127 = __s124;
      unsigned long r128 = __gnu_cxx__char_traits_char___length(t127);
      __retval125 = r128;
      unsigned long t129 = __retval125;
      return t129;
    }
  char* t130 = __s124;
  unsigned long r131 = strlen(t130);
  __retval125 = r131;
  unsigned long t132 = __retval125;
  return t132;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v133, char* v134) {
bb135:
  struct std__basic_ostream_char__std__char_traits_char__* __out136;
  char* __s137;
  struct std__basic_ostream_char__std__char_traits_char__* __retval138;
  __out136 = v133;
  __s137 = v134;
    char* t139 = __s137;
    _Bool cast140 = (_Bool)t139;
    _Bool u141 = !cast140;
    if (u141) {
      struct std__basic_ostream_char__std__char_traits_char__* t142 = __out136;
      void** v143 = (void**)t142;
      void* v144 = *((void**)v143);
      unsigned char* cast145 = (unsigned char*)v144;
      long c146 = -24;
      unsigned char* ptr147 = &(cast145)[c146];
      long* cast148 = (long*)ptr147;
      long t149 = *cast148;
      unsigned char* cast150 = (unsigned char*)t142;
      unsigned char* ptr151 = &(cast150)[t149];
      struct std__basic_ostream_char__std__char_traits_char__* cast152 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr151;
      struct std__basic_ios_char__std__char_traits_char__* cast153 = (struct std__basic_ios_char__std__char_traits_char__*)cast152;
      int t154 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast153, t154);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t155 = __out136;
      char* t156 = __s137;
      char* t157 = __s137;
      unsigned long r158 = std__char_traits_char___length(t157);
      long cast159 = (long)r158;
      struct std__basic_ostream_char__std__char_traits_char__* r160 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t155, t156, cast159);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t161 = __out136;
  __retval138 = t161;
  struct std__basic_ostream_char__std__char_traits_char__* t162 = __retval138;
  return t162;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v163, void* v164) {
bb165:
  struct std__basic_ostream_char__std__char_traits_char__* this166;
  void* __pf167;
  struct std__basic_ostream_char__std__char_traits_char__* __retval168;
  this166 = v163;
  __pf167 = v164;
  struct std__basic_ostream_char__std__char_traits_char__* t169 = this166;
  void* t170 = __pf167;
  struct std__basic_ostream_char__std__char_traits_char__* r171 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t170)(t169);
  __retval168 = r171;
  struct std__basic_ostream_char__std__char_traits_char__* t172 = __retval168;
  return t172;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v173) {
bb174:
  struct std__basic_ostream_char__std__char_traits_char__* __os175;
  struct std__basic_ostream_char__std__char_traits_char__* __retval176;
  __os175 = v173;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __os175;
  struct std__basic_ostream_char__std__char_traits_char__* r178 = std__ostream__flush(t177);
  __retval176 = r178;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __retval176;
  return t179;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v180) {
bb181:
  struct std__ctype_char_* __f182;
  struct std__ctype_char_* __retval183;
  __f182 = v180;
    struct std__ctype_char_* t184 = __f182;
    _Bool cast185 = (_Bool)t184;
    _Bool u186 = !cast185;
    if (u186) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t187 = __f182;
  __retval183 = t187;
  struct std__ctype_char_* t188 = __retval183;
  return t188;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v189, char v190) {
bb191:
  struct std__ctype_char_* this192;
  char __c193;
  char __retval194;
  this192 = v189;
  __c193 = v190;
  struct std__ctype_char_* t195 = this192;
    char t196 = t195->_M_widen_ok;
    _Bool cast197 = (_Bool)t196;
    if (cast197) {
      char t198 = __c193;
      unsigned char cast199 = (unsigned char)t198;
      unsigned long cast200 = (unsigned long)cast199;
      char t201 = t195->_M_widen[cast200];
      __retval194 = t201;
      char t202 = __retval194;
      return t202;
    }
  std__ctype_char____M_widen_init___const(t195);
  char t203 = __c193;
  void** v204 = (void**)t195;
  void* v205 = *((void**)v204);
  char vcall208 = (char)__VERIFIER_virtual_call_char_char(t195, 6, t203);
  __retval194 = vcall208;
  char t209 = __retval194;
  return t209;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v210, char v211) {
bb212:
  struct std__basic_ios_char__std__char_traits_char__* this213;
  char __c214;
  char __retval215;
  this213 = v210;
  __c214 = v211;
  struct std__basic_ios_char__std__char_traits_char__* t216 = this213;
  struct std__ctype_char_* t217 = t216->_M_ctype;
  struct std__ctype_char_* r218 = std__ctype_char__const__std____check_facet_std__ctype_char___(t217);
  char t219 = __c214;
  char r220 = std__ctype_char___widen_char__const(r218, t219);
  __retval215 = r220;
  char t221 = __retval215;
  return t221;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v222) {
bb223:
  struct std__basic_ostream_char__std__char_traits_char__* __os224;
  struct std__basic_ostream_char__std__char_traits_char__* __retval225;
  __os224 = v222;
  struct std__basic_ostream_char__std__char_traits_char__* t226 = __os224;
  struct std__basic_ostream_char__std__char_traits_char__* t227 = __os224;
  void** v228 = (void**)t227;
  void* v229 = *((void**)v228);
  unsigned char* cast230 = (unsigned char*)v229;
  long c231 = -24;
  unsigned char* ptr232 = &(cast230)[c231];
  long* cast233 = (long*)ptr232;
  long t234 = *cast233;
  unsigned char* cast235 = (unsigned char*)t227;
  unsigned char* ptr236 = &(cast235)[t234];
  struct std__basic_ostream_char__std__char_traits_char__* cast237 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr236;
  struct std__basic_ios_char__std__char_traits_char__* cast238 = (struct std__basic_ios_char__std__char_traits_char__*)cast237;
  char c239 = 10;
  char r240 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast238, c239);
  struct std__basic_ostream_char__std__char_traits_char__* r241 = std__ostream__put(t226, r240);
  struct std__basic_ostream_char__std__char_traits_char__* r242 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r241);
  __retval225 = r242;
  struct std__basic_ostream_char__std__char_traits_char__* t243 = __retval225;
  return t243;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v244) {
bb245:
  struct std__vector_int__std__allocator_int__* this246;
  this246 = v244;
  struct std__vector_int__std__allocator_int__* t247 = this246;
    struct std___Vector_base_int__std__allocator_int__* base248 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t247 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base249 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base248->_M_impl) + 0);
    int* t250 = base249->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base251 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t247 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base252 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base251->_M_impl) + 0);
    int* t253 = base252->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base254 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t247 + 0);
    struct std__allocator_int_* r255 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base254);
    void_std___Destroy_int___int_(t250, t253, r255);
  {
    struct std___Vector_base_int__std__allocator_int__* base256 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t247 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base256);
  }
  return;
}

// function: main
int main() {
bb257:
  int __retval258;
  struct std__vector_int__std__allocator_int__ myvector259;
  struct std__allocator_int_ ref_tmp0260;
  unsigned int i261;
  unsigned long sz262;
  int c263 = 0;
  __retval258 = c263;
  unsigned long c264 = 10;
  std__allocator_int___allocator_2(&ref_tmp0260);
    std__vector_int__std__allocator_int_____vector(&myvector259, c264, &ref_tmp0260);
  {
    std__allocator_int____allocator(&ref_tmp0260);
  }
    unsigned long r265 = std__vector_int__std__allocator_int_____size___const(&myvector259);
    sz262 = r265;
      unsigned int c266 = 0;
      i261 = c266;
      while (1) {
        unsigned int t268 = i261;
        unsigned long cast269 = (unsigned long)t268;
        unsigned long t270 = sz262;
        _Bool c271 = ((cast269 < t270)) ? 1 : 0;
        if (!c271) break;
        unsigned int t272 = i261;
        int cast273 = (int)t272;
        unsigned int t274 = i261;
        unsigned long cast275 = (unsigned long)t274;
        int* r276 = std__vector_int__std__allocator_int_____operator__(&myvector259, cast275);
        *r276 = cast273;
      for_step267: ;
        unsigned int t277 = i261;
        unsigned int u278 = t277 + 1;
        i261 = u278;
      }
      unsigned int c279 = 0;
      i261 = c279;
      while (1) {
        unsigned int t281 = i261;
        unsigned long cast282 = (unsigned long)t281;
        unsigned long t283 = sz262;
        unsigned long c284 = 2;
        unsigned long b285 = t283 / c284;
        _Bool c286 = ((cast282 < b285)) ? 1 : 0;
        if (!c286) break;
          int temp287;
          unsigned long t288 = sz262;
          unsigned long c289 = 1;
          unsigned long b290 = t288 - c289;
          unsigned int t291 = i261;
          unsigned long cast292 = (unsigned long)t291;
          unsigned long b293 = b290 - cast292;
          int* r294 = std__vector_int__std__allocator_int_____operator__(&myvector259, b293);
          int t295 = *r294;
          temp287 = t295;
          unsigned int t296 = i261;
          unsigned long cast297 = (unsigned long)t296;
          int* r298 = std__vector_int__std__allocator_int_____operator__(&myvector259, cast297);
          int t299 = *r298;
          unsigned long t300 = sz262;
          unsigned long c301 = 1;
          unsigned long b302 = t300 - c301;
          unsigned int t303 = i261;
          unsigned long cast304 = (unsigned long)t303;
          unsigned long b305 = b302 - cast304;
          int* r306 = std__vector_int__std__allocator_int_____operator__(&myvector259, b305);
          *r306 = t299;
          int t307 = temp287;
          unsigned int t308 = i261;
          unsigned long cast309 = (unsigned long)t308;
          int* r310 = std__vector_int__std__allocator_int_____operator__(&myvector259, cast309);
          *r310 = t307;
      for_step280: ;
        unsigned int t311 = i261;
        unsigned int u312 = t311 + 1;
        i261 = u312;
      }
    char* cast313 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r314 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast313);
      unsigned int c315 = 0;
      i261 = c315;
      while (1) {
        unsigned int t317 = i261;
        unsigned long cast318 = (unsigned long)t317;
        unsigned long t319 = sz262;
        _Bool c320 = ((cast318 < t319)) ? 1 : 0;
        if (!c320) break;
        char* cast321 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r322 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast321);
        unsigned int t323 = i261;
        unsigned long cast324 = (unsigned long)t323;
        int* r325 = std__vector_int__std__allocator_int_____operator__(&myvector259, cast324);
        int t326 = *r325;
        struct std__basic_ostream_char__std__char_traits_char__* r327 = std__ostream__operator__(r322, t326);
      for_step316: ;
        unsigned int t328 = i261;
        unsigned int u329 = t328 + 1;
        i261 = u329;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r330 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c331 = 0;
    __retval258 = c331;
    int t332 = __retval258;
    int ret_val333 = t332;
    {
      std__vector_int__std__allocator_int______vector(&myvector259);
    }
    return ret_val333;
  int t334 = __retval258;
  return t334;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v335) {
bb336:
  struct std____new_allocator_int_* this337;
  this337 = v335;
  struct std____new_allocator_int_* t338 = this337;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v339, unsigned long* v340) {
bb341:
  unsigned long* __a342;
  unsigned long* __b343;
  unsigned long* __retval344;
  __a342 = v339;
  __b343 = v340;
    unsigned long* t345 = __b343;
    unsigned long t346 = *t345;
    unsigned long* t347 = __a342;
    unsigned long t348 = *t347;
    _Bool c349 = ((t346 < t348)) ? 1 : 0;
    if (c349) {
      unsigned long* t350 = __b343;
      __retval344 = t350;
      unsigned long* t351 = __retval344;
      return t351;
    }
  unsigned long* t352 = __a342;
  __retval344 = t352;
  unsigned long* t353 = __retval344;
  return t353;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v354) {
bb355:
  struct std__allocator_int_* __a356;
  unsigned long __retval357;
  unsigned long __diffmax358;
  unsigned long __allocmax359;
  __a356 = v354;
  unsigned long c360 = 2305843009213693951;
  __diffmax358 = c360;
  unsigned long c361 = 4611686018427387903;
  __allocmax359 = c361;
  unsigned long* r362 = unsigned_long_const__std__min_unsigned_long_(&__diffmax358, &__allocmax359);
  unsigned long t363 = *r362;
  __retval357 = t363;
  unsigned long t364 = __retval357;
  return t364;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v365, struct std__allocator_int_* v366) {
bb367:
  struct std__allocator_int_* this368;
  struct std__allocator_int_* __a369;
  this368 = v365;
  __a369 = v366;
  struct std__allocator_int_* t370 = this368;
  struct std____new_allocator_int_* base371 = (struct std____new_allocator_int_*)((char *)t370 + 0);
  struct std__allocator_int_* t372 = __a369;
  struct std____new_allocator_int_* base373 = (struct std____new_allocator_int_*)((char *)t372 + 0);
  std____new_allocator_int_____new_allocator(base371, base373);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v374, struct std__allocator_int_* v375) {
bb376:
  unsigned long __n377;
  struct std__allocator_int_* __a378;
  unsigned long __retval379;
  __n377 = v374;
  __a378 = v375;
    struct std__allocator_int_ ref_tmp0380;
    _Bool tmp_exprcleanup381;
    unsigned long t382 = __n377;
    struct std__allocator_int_* t383 = __a378;
    std__allocator_int___allocator(&ref_tmp0380, t383);
      unsigned long r384 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0380);
      _Bool c385 = ((t382 > r384)) ? 1 : 0;
      tmp_exprcleanup381 = c385;
    {
      std__allocator_int____allocator(&ref_tmp0380);
    }
    _Bool t386 = tmp_exprcleanup381;
    if (t386) {
      char* cast387 = (char*)&(_str_2);
      std____throw_length_error(cast387);
    }
  unsigned long t388 = __n377;
  __retval379 = t388;
  unsigned long t389 = __retval379;
  return t389;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v390, struct std__allocator_int_* v391) {
bb392:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this393;
  struct std__allocator_int_* __a394;
  this393 = v390;
  __a394 = v391;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t395 = this393;
  struct std__allocator_int_* base396 = (struct std__allocator_int_*)((char *)t395 + 0);
  struct std__allocator_int_* t397 = __a394;
  std__allocator_int___allocator(base396, t397);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base398 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t395 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base398);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb399:
  _Bool __retval400;
    _Bool c401 = 0;
    __retval400 = c401;
    _Bool t402 = __retval400;
    return t402;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v403) {
bb404:
  struct std____new_allocator_int_* this405;
  unsigned long __retval406;
  this405 = v403;
  struct std____new_allocator_int_* t407 = this405;
  unsigned long c408 = 9223372036854775807;
  unsigned long c409 = 4;
  unsigned long b410 = c408 / c409;
  __retval406 = b410;
  unsigned long t411 = __retval406;
  return t411;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v412, unsigned long v413, void* v414) {
bb415:
  struct std____new_allocator_int_* this416;
  unsigned long __n417;
  void* unnamed418;
  int* __retval419;
  this416 = v412;
  __n417 = v413;
  unnamed418 = v414;
  struct std____new_allocator_int_* t420 = this416;
    unsigned long t421 = __n417;
    unsigned long r422 = std____new_allocator_int____M_max_size___const(t420);
    _Bool c423 = ((t421 > r422)) ? 1 : 0;
    if (c423) {
        unsigned long t424 = __n417;
        unsigned long c425 = -1;
        unsigned long c426 = 4;
        unsigned long b427 = c425 / c426;
        _Bool c428 = ((t424 > b427)) ? 1 : 0;
        if (c428) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c429 = 4;
    unsigned long c430 = 16;
    _Bool c431 = ((c429 > c430)) ? 1 : 0;
    if (c431) {
      unsigned long __al432;
      unsigned long c433 = 4;
      __al432 = c433;
      unsigned long t434 = __n417;
      unsigned long c435 = 4;
      unsigned long b436 = t434 * c435;
      unsigned long t437 = __al432;
      void* r438 = operator_new_2(b436, t437);
      int* cast439 = (int*)r438;
      __retval419 = cast439;
      int* t440 = __retval419;
      return t440;
    }
  unsigned long t441 = __n417;
  unsigned long c442 = 4;
  unsigned long b443 = t441 * c442;
  void* r444 = operator_new(b443);
  int* cast445 = (int*)r444;
  __retval419 = cast445;
  int* t446 = __retval419;
  return t446;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v447, unsigned long v448) {
bb449:
  struct std__allocator_int_* this450;
  unsigned long __n451;
  int* __retval452;
  this450 = v447;
  __n451 = v448;
  struct std__allocator_int_* t453 = this450;
    _Bool r454 = std____is_constant_evaluated();
    if (r454) {
        unsigned long t455 = __n451;
        unsigned long c456 = 4;
        unsigned long ovr457;
        _Bool ovf458 = __builtin_mul_overflow(t455, c456, &ovr457);
        __n451 = ovr457;
        if (ovf458) {
          std____throw_bad_array_new_length();
        }
      unsigned long t459 = __n451;
      void* r460 = operator_new(t459);
      int* cast461 = (int*)r460;
      __retval452 = cast461;
      int* t462 = __retval452;
      return t462;
    }
  struct std____new_allocator_int_* base463 = (struct std____new_allocator_int_*)((char *)t453 + 0);
  unsigned long t464 = __n451;
  void* c465 = ((void*)0);
  int* r466 = std____new_allocator_int___allocate(base463, t464, c465);
  __retval452 = r466;
  int* t467 = __retval452;
  return t467;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v468, unsigned long v469) {
bb470:
  struct std__allocator_int_* __a471;
  unsigned long __n472;
  int* __retval473;
  __a471 = v468;
  __n472 = v469;
  struct std__allocator_int_* t474 = __a471;
  unsigned long t475 = __n472;
  int* r476 = std__allocator_int___allocate(t474, t475);
  __retval473 = r476;
  int* t477 = __retval473;
  return t477;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v478, unsigned long v479) {
bb480:
  struct std___Vector_base_int__std__allocator_int__* this481;
  unsigned long __n482;
  int* __retval483;
  this481 = v478;
  __n482 = v479;
  struct std___Vector_base_int__std__allocator_int__* t484 = this481;
  unsigned long t485 = __n482;
  unsigned long c486 = 0;
  _Bool c487 = ((t485 != c486)) ? 1 : 0;
  int* ternary488;
  if (c487) {
    struct std__allocator_int_* base489 = (struct std__allocator_int_*)((char *)&(t484->_M_impl) + 0);
    unsigned long t490 = __n482;
    int* r491 = std__allocator_traits_std__allocator_int_____allocate(base489, t490);
    ternary488 = (int*)r491;
  } else {
    int* c492 = ((void*)0);
    ternary488 = (int*)c492;
  }
  __retval483 = ternary488;
  int* t493 = __retval483;
  return t493;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v494, unsigned long v495) {
bb496:
  struct std___Vector_base_int__std__allocator_int__* this497;
  unsigned long __n498;
  this497 = v494;
  __n498 = v495;
  struct std___Vector_base_int__std__allocator_int__* t499 = this497;
  unsigned long t500 = __n498;
  int* r501 = std___Vector_base_int__std__allocator_int______M_allocate(t499, t500);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base502 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t499->_M_impl) + 0);
  base502->_M_start = r501;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base503 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t499->_M_impl) + 0);
  int* t504 = base503->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base505 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t499->_M_impl) + 0);
  base505->_M_finish = t504;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base506 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t499->_M_impl) + 0);
  int* t507 = base506->_M_start;
  unsigned long t508 = __n498;
  int* ptr509 = &(t507)[t508];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base510 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t499->_M_impl) + 0);
  base510->_M_end_of_storage = ptr509;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v511) {
bb512:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this513;
  this513 = v511;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t514 = this513;
  {
    struct std__allocator_int_* base515 = (struct std__allocator_int_*)((char *)t514 + 0);
    std__allocator_int____allocator(base515);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v516, unsigned long v517, struct std__allocator_int_* v518) {
bb519:
  struct std___Vector_base_int__std__allocator_int__* this520;
  unsigned long __n521;
  struct std__allocator_int_* __a522;
  this520 = v516;
  __n521 = v517;
  __a522 = v518;
  struct std___Vector_base_int__std__allocator_int__* t523 = this520;
  struct std__allocator_int_* t524 = __a522;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t523->_M_impl, t524);
    unsigned long t525 = __n521;
    std___Vector_base_int__std__allocator_int______M_create_storage(t523, t525);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb526:
  _Bool __retval527;
    _Bool c528 = 0;
    __retval527 = c528;
    _Bool t529 = __retval527;
    return t529;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v530, int** v531) {
bb532:
  struct std___UninitDestroyGuard_int____void_* this533;
  int** __first534;
  this533 = v530;
  __first534 = v531;
  struct std___UninitDestroyGuard_int____void_* t535 = this533;
  int** t536 = __first534;
  int* t537 = *t536;
  t535->_M_first = t537;
  int** t538 = __first534;
  t535->_M_cur = t538;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v539) {
bb540:
  int* __location541;
  int* __retval542;
  void* __loc543;
  __location541 = v539;
  int* t544 = __location541;
  void* cast545 = (void*)t544;
  __loc543 = cast545;
    void* t546 = __loc543;
    int* cast547 = (int*)t546;
    int c548 = 0;
    *cast547 = c548;
    __retval542 = cast547;
    int* t549 = __retval542;
    return t549;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v550) {
bb551:
  int* __p552;
  __p552 = v550;
    _Bool r553 = std____is_constant_evaluated();
    if (r553) {
      int* t554 = __p552;
      int* r555 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t554);
      return;
    }
  int* t556 = __p552;
  void* cast557 = (void*)t556;
  int* cast558 = (int*)cast557;
  int c559 = 0;
  *cast558 = c559;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v560) {
bb561:
  struct std___UninitDestroyGuard_int____void_* this562;
  this562 = v560;
  struct std___UninitDestroyGuard_int____void_* t563 = this562;
  int** c564 = ((void*)0);
  t563->_M_cur = c564;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v565) {
bb566:
  struct std___UninitDestroyGuard_int____void_* this567;
  this567 = v565;
  struct std___UninitDestroyGuard_int____void_* t568 = this567;
    int** t569 = t568->_M_cur;
    int** c570 = ((void*)0);
    _Bool c571 = ((t569 != c570)) ? 1 : 0;
    if (c571) {
      int* t572 = t568->_M_first;
      int** t573 = t568->_M_cur;
      int* t574 = *t573;
      void_std___Destroy_int__(t572, t574);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v575, unsigned long v576) {
bb577:
  int* __first578;
  unsigned long __n579;
  int* __retval580;
  struct std___UninitDestroyGuard_int____void_ __guard581;
  __first578 = v575;
  __n579 = v576;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard581, &__first578);
      while (1) {
        unsigned long t583 = __n579;
        unsigned long c584 = 0;
        _Bool c585 = ((t583 > c584)) ? 1 : 0;
        if (!c585) break;
        int* t586 = __first578;
        void_std___Construct_int_(t586);
      for_step582: ;
        unsigned long t587 = __n579;
        unsigned long u588 = t587 - 1;
        __n579 = u588;
        int* t589 = __first578;
        int c590 = 1;
        int* ptr591 = &(t589)[c590];
        __first578 = ptr591;
      }
    std___UninitDestroyGuard_int___void___release(&__guard581);
    int* t592 = __first578;
    __retval580 = t592;
    int* t593 = __retval580;
    int* ret_val594 = t593;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard581);
    }
    return ret_val594;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v595, int* v596, int* v597) {
bb598:
  int* __first599;
  int* __last600;
  int* __value601;
  _Bool __load_outside_loop602;
  int __val603;
  __first599 = v595;
  __last600 = v596;
  __value601 = v597;
  _Bool c604 = 1;
  __load_outside_loop602 = c604;
  int* t605 = __value601;
  int t606 = *t605;
  __val603 = t606;
    while (1) {
      int* t608 = __first599;
      int* t609 = __last600;
      _Bool c610 = ((t608 != t609)) ? 1 : 0;
      if (!c610) break;
      int t611 = __val603;
      int* t612 = __first599;
      *t612 = t611;
    for_step607: ;
      int* t613 = __first599;
      int c614 = 1;
      int* ptr615 = &(t613)[c614];
      __first599 = ptr615;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v616, int* v617, int* v618) {
bb619:
  int* __first620;
  int* __last621;
  int* __value622;
  __first620 = v616;
  __last621 = v617;
  __value622 = v618;
  int* t623 = __first620;
  int* t624 = __last621;
  int* t625 = __value622;
  void_std____fill_a1_int___int_(t623, t624, t625);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v626, unsigned long v627, int* v628, struct std__random_access_iterator_tag v629) {
bb630:
  int* __first631;
  unsigned long __n632;
  int* __value633;
  struct std__random_access_iterator_tag unnamed634;
  int* __retval635;
  __first631 = v626;
  __n632 = v627;
  __value633 = v628;
  unnamed634 = v629;
    unsigned long t636 = __n632;
    unsigned long c637 = 0;
    _Bool c638 = ((t636 <= c637)) ? 1 : 0;
    if (c638) {
      int* t639 = __first631;
      __retval635 = t639;
      int* t640 = __retval635;
      return t640;
    }
  int* t641 = __first631;
  int* t642 = __first631;
  unsigned long t643 = __n632;
  int* ptr644 = &(t642)[t643];
  int* t645 = __value633;
  void_std____fill_a_int___int_(t641, ptr644, t645);
  int* t646 = __first631;
  unsigned long t647 = __n632;
  int* ptr648 = &(t646)[t647];
  __retval635 = ptr648;
  int* t649 = __retval635;
  return t649;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v650) {
bb651:
  unsigned long __n652;
  unsigned long __retval653;
  __n652 = v650;
  unsigned long t654 = __n652;
  __retval653 = t654;
  unsigned long t655 = __retval653;
  return t655;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v656) {
bb657:
  int** unnamed658;
  struct std__random_access_iterator_tag __retval659;
  unnamed658 = v656;
  struct std__random_access_iterator_tag t660 = __retval659;
  return t660;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v661, unsigned long v662, int* v663) {
bb664:
  int* __first665;
  unsigned long __n666;
  int* __value667;
  int* __retval668;
  struct std__random_access_iterator_tag agg_tmp0669;
  __first665 = v661;
  __n666 = v662;
  __value667 = v663;
  int* t670 = __first665;
  unsigned long t671 = __n666;
  unsigned long r672 = std____size_to_integer(t671);
  int* t673 = __value667;
  struct std__random_access_iterator_tag r674 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first665);
  agg_tmp0669 = r674;
  struct std__random_access_iterator_tag t675 = agg_tmp0669;
  int* r676 = int__std____fill_n_a_int___unsigned_long__int_(t670, r672, t673, t675);
  __retval668 = r676;
  int* t677 = __retval668;
  return t677;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v678, unsigned long v679) {
bb680:
  int* __first681;
  unsigned long __n682;
  int* __retval683;
  __first681 = v678;
  __n682 = v679;
    unsigned long t684 = __n682;
    unsigned long c685 = 0;
    _Bool c686 = ((t684 > c685)) ? 1 : 0;
    if (c686) {
      int* __val687;
      int* t688 = __first681;
      __val687 = t688;
      int* t689 = __val687;
      void_std___Construct_int_(t689);
      int* t690 = __first681;
      int c691 = 1;
      int* ptr692 = &(t690)[c691];
      __first681 = ptr692;
      int* t693 = __first681;
      unsigned long t694 = __n682;
      unsigned long c695 = 1;
      unsigned long b696 = t694 - c695;
      int* t697 = __val687;
      int* r698 = int__std__fill_n_int___unsigned_long__int_(t693, b696, t697);
      __first681 = r698;
    }
  int* t699 = __first681;
  __retval683 = t699;
  int* t700 = __retval683;
  return t700;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v701, unsigned long v702) {
bb703:
  int* __first704;
  unsigned long __n705;
  int* __retval706;
  _Bool __can_fill707;
  __first704 = v701;
  __n705 = v702;
    _Bool r708 = std__is_constant_evaluated();
    if (r708) {
      int* t709 = __first704;
      unsigned long t710 = __n705;
      int* r711 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t709, t710);
      __retval706 = r711;
      int* t712 = __retval706;
      return t712;
    }
  _Bool c713 = 1;
  __can_fill707 = c713;
  int* t714 = __first704;
  unsigned long t715 = __n705;
  int* r716 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t714, t715);
  __retval706 = r716;
  int* t717 = __retval706;
  return t717;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v718, unsigned long v719, struct std__allocator_int_* v720) {
bb721:
  int* __first722;
  unsigned long __n723;
  struct std__allocator_int_* unnamed724;
  int* __retval725;
  __first722 = v718;
  __n723 = v719;
  unnamed724 = v720;
  int* t726 = __first722;
  unsigned long t727 = __n723;
  int* r728 = int__std____uninitialized_default_n_int___unsigned_long_(t726, t727);
  __retval725 = r728;
  int* t729 = __retval725;
  return t729;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v730) {
bb731:
  struct std___Vector_base_int__std__allocator_int__* this732;
  struct std__allocator_int_* __retval733;
  this732 = v730;
  struct std___Vector_base_int__std__allocator_int__* t734 = this732;
  struct std__allocator_int_* base735 = (struct std__allocator_int_*)((char *)&(t734->_M_impl) + 0);
  __retval733 = base735;
  struct std__allocator_int_* t736 = __retval733;
  return t736;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v737, unsigned long v738) {
bb739:
  struct std__vector_int__std__allocator_int__* this740;
  unsigned long __n741;
  this740 = v737;
  __n741 = v738;
  struct std__vector_int__std__allocator_int__* t742 = this740;
  struct std___Vector_base_int__std__allocator_int__* base743 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t742 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base744 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base743->_M_impl) + 0);
  int* t745 = base744->_M_start;
  unsigned long t746 = __n741;
  struct std___Vector_base_int__std__allocator_int__* base747 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t742 + 0);
  struct std__allocator_int_* r748 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base747);
  int* r749 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t745, t746, r748);
  struct std___Vector_base_int__std__allocator_int__* base750 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t742 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base751 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base750->_M_impl) + 0);
  base751->_M_finish = r749;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v752, int* v753, unsigned long v754) {
bb755:
  struct std____new_allocator_int_* this756;
  int* __p757;
  unsigned long __n758;
  this756 = v752;
  __p757 = v753;
  __n758 = v754;
  struct std____new_allocator_int_* t759 = this756;
    unsigned long c760 = 4;
    unsigned long c761 = 16;
    _Bool c762 = ((c760 > c761)) ? 1 : 0;
    if (c762) {
      int* t763 = __p757;
      void* cast764 = (void*)t763;
      unsigned long t765 = __n758;
      unsigned long c766 = 4;
      unsigned long b767 = t765 * c766;
      unsigned long c768 = 4;
      operator_delete_3(cast764, b767, c768);
      return;
    }
  int* t769 = __p757;
  void* cast770 = (void*)t769;
  unsigned long t771 = __n758;
  unsigned long c772 = 4;
  unsigned long b773 = t771 * c772;
  operator_delete_2(cast770, b773);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v774, int* v775, unsigned long v776) {
bb777:
  struct std__allocator_int_* this778;
  int* __p779;
  unsigned long __n780;
  this778 = v774;
  __p779 = v775;
  __n780 = v776;
  struct std__allocator_int_* t781 = this778;
    _Bool r782 = std____is_constant_evaluated();
    if (r782) {
      int* t783 = __p779;
      void* cast784 = (void*)t783;
      operator_delete(cast784);
      return;
    }
  struct std____new_allocator_int_* base785 = (struct std____new_allocator_int_*)((char *)t781 + 0);
  int* t786 = __p779;
  unsigned long t787 = __n780;
  std____new_allocator_int___deallocate(base785, t786, t787);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v788, int* v789, unsigned long v790) {
bb791:
  struct std__allocator_int_* __a792;
  int* __p793;
  unsigned long __n794;
  __a792 = v788;
  __p793 = v789;
  __n794 = v790;
  struct std__allocator_int_* t795 = __a792;
  int* t796 = __p793;
  unsigned long t797 = __n794;
  std__allocator_int___deallocate(t795, t796, t797);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v798, int* v799, unsigned long v800) {
bb801:
  struct std___Vector_base_int__std__allocator_int__* this802;
  int* __p803;
  unsigned long __n804;
  this802 = v798;
  __p803 = v799;
  __n804 = v800;
  struct std___Vector_base_int__std__allocator_int__* t805 = this802;
    int* t806 = __p803;
    _Bool cast807 = (_Bool)t806;
    if (cast807) {
      struct std__allocator_int_* base808 = (struct std__allocator_int_*)((char *)&(t805->_M_impl) + 0);
      int* t809 = __p803;
      unsigned long t810 = __n804;
      std__allocator_traits_std__allocator_int_____deallocate(base808, t809, t810);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v811) {
bb812:
  struct std___Vector_base_int__std__allocator_int__* this813;
  this813 = v811;
  struct std___Vector_base_int__std__allocator_int__* t814 = this813;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base815 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t814->_M_impl) + 0);
    int* t816 = base815->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base817 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t814->_M_impl) + 0);
    int* t818 = base817->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base819 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t814->_M_impl) + 0);
    int* t820 = base819->_M_start;
    long diff821 = t818 - t820;
    unsigned long cast822 = (unsigned long)diff821;
    std___Vector_base_int__std__allocator_int______M_deallocate(t814, t816, cast822);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t814->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v823, struct std____new_allocator_int_* v824) {
bb825:
  struct std____new_allocator_int_* this826;
  struct std____new_allocator_int_* unnamed827;
  this826 = v823;
  unnamed827 = v824;
  struct std____new_allocator_int_* t828 = this826;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v829) {
bb830:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this831;
  this831 = v829;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t832 = this831;
  int* c833 = ((void*)0);
  t832->_M_start = c833;
  int* c834 = ((void*)0);
  t832->_M_finish = c834;
  int* c835 = ((void*)0);
  t832->_M_end_of_storage = c835;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v836) {
bb837:
  int* __location838;
  __location838 = v836;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v839, int* v840) {
bb841:
  int* __first842;
  int* __last843;
  __first842 = v839;
  __last843 = v840;
      _Bool r844 = std____is_constant_evaluated();
      if (r844) {
          while (1) {
            int* t846 = __first842;
            int* t847 = __last843;
            _Bool c848 = ((t846 != t847)) ? 1 : 0;
            if (!c848) break;
            int* t849 = __first842;
            void_std__destroy_at_int_(t849);
          for_step845: ;
            int* t850 = __first842;
            int c851 = 1;
            int* ptr852 = &(t850)[c851];
            __first842 = ptr852;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v853, int* v854, struct std__allocator_int_* v855) {
bb856:
  int* __first857;
  int* __last858;
  struct std__allocator_int_* unnamed859;
  __first857 = v853;
  __last858 = v854;
  unnamed859 = v855;
  int* t860 = __first857;
  int* t861 = __last858;
  void_std___Destroy_int__(t860, t861);
  return;
}

