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
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[12] = "Test string";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[25] = "basic_string::_M_replace";
char _str_2[24] = "basic_string::_M_create";
char _str_3[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_4[16] = "__pos <= size()";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0) {
bb1:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2;
  struct std__allocator_char_ ref_tmp03;
  this2 = v0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t4 = this2;
  char* r5 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t4);
  std__allocator_char___allocator_2(&ref_tmp03);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t4->_M_dataplus, r5, &ref_tmp03);
  {
    std__allocator_char____allocator(&ref_tmp03);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t4);
    unsigned long c6 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t4, c6);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v7) {
bb8:
  struct std__allocator_char_* __a9;
  unsigned long __retval10;
  __a9 = v7;
  unsigned long c11 = -1;
  unsigned long c12 = 1;
  unsigned long b13 = c11 / c12;
  __retval10 = b13;
  unsigned long t14 = __retval10;
  return t14;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v15) {
bb16:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this17;
  struct std__allocator_char_* __retval18;
  this17 = v15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t19 = this17;
  struct std__allocator_char_* base20 = (struct std__allocator_char_*)((char *)&(t19->_M_dataplus) + 0);
  __retval18 = base20;
  struct std__allocator_char_* t21 = __retval18;
  return t21;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v22, unsigned long* v23) {
bb24:
  unsigned long* __a25;
  unsigned long* __b26;
  unsigned long* __retval27;
  __a25 = v22;
  __b26 = v23;
    unsigned long* t28 = __b26;
    unsigned long t29 = *t28;
    unsigned long* t30 = __a25;
    unsigned long t31 = *t30;
    _Bool c32 = ((t29 < t31)) ? 1 : 0;
    if (c32) {
      unsigned long* t33 = __b26;
      __retval27 = t33;
      unsigned long* t34 = __retval27;
      return t34;
    }
  unsigned long* t35 = __a25;
  __retval27 = t35;
  unsigned long* t36 = __retval27;
  return t36;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37) {
bb38:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this39;
  unsigned long __retval40;
  unsigned long __diffmax41;
  unsigned long __allocmax42;
  this39 = v37;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t43 = this39;
  unsigned long c44 = 9223372036854775807;
  __diffmax41 = c44;
  struct std__allocator_char_* r45 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t43);
  unsigned long r46 = std__allocator_traits_std__allocator_char_____max_size(r45);
  __allocmax42 = r46;
  unsigned long* r47 = unsigned_long_const__std__min_unsigned_long_(&__diffmax41, &__allocmax42);
  unsigned long t48 = *r47;
  unsigned long c49 = 1;
  unsigned long b50 = t48 - c49;
  __retval40 = b50;
  unsigned long t51 = __retval40;
  return t51;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v52, unsigned long v53, unsigned long v54, char* v55) {
bb56:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __n158;
  unsigned long __n259;
  char* __s60;
  this57 = v52;
  __n158 = v53;
  __n259 = v54;
  __s60 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t61 = this57;
    unsigned long r62 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t61);
    unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t61);
    unsigned long t64 = __n158;
    unsigned long b65 = r63 - t64;
    unsigned long b66 = r62 - b65;
    unsigned long t67 = __n259;
    _Bool c68 = ((b66 < t67)) ? 1 : 0;
    if (c68) {
      char* t69 = __s60;
      std____throw_length_error(t69);
    }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v70) {
bb71:
  char* __r72;
  char* __retval73;
  __r72 = v70;
  char* t74 = __r72;
  __retval73 = t74;
  char* t75 = __retval73;
  return t75;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v76) {
bb77:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this78;
  char* __retval79;
  this78 = v76;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t80 = this78;
  char* cast81 = (char*)&(t80->field2._M_local_buf);
  char* r82 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast81);
  __retval79 = r82;
  char* t83 = __retval79;
  return t83;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v84) {
bb85:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this86;
  _Bool __retval87;
  this86 = v84;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t88 = this86;
    char* r89 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t88);
    char* r90 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t88);
    _Bool c91 = ((r89 == r90)) ? 1 : 0;
    if (c91) {
        unsigned long t92 = t88->_M_string_length;
        unsigned long c93 = 15;
        _Bool c94 = ((t92 > c93)) ? 1 : 0;
        if (c94) {
          __builtin_unreachable();
        }
      _Bool c95 = 1;
      __retval87 = c95;
      _Bool t96 = __retval87;
      return t96;
    }
  _Bool c97 = 0;
  __retval87 = c97;
  _Bool t98 = __retval87;
  return t98;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v99) {
bb100:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this101;
  unsigned long __retval102;
  unsigned long __sz103;
  this101 = v99;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t104 = this101;
  _Bool r105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t104);
  unsigned long ternary106;
  if (r105) {
    unsigned long c107 = 15;
    ternary106 = (unsigned long)c107;
  } else {
    unsigned long t108 = t104->field2._M_allocated_capacity;
    ternary106 = (unsigned long)t108;
  }
  __sz103 = ternary106;
    unsigned long t109 = __sz103;
    unsigned long c110 = 15;
    _Bool c111 = ((t109 < c110)) ? 1 : 0;
    _Bool ternary112;
    if (c111) {
      _Bool c113 = 1;
      ternary112 = (_Bool)c113;
    } else {
      unsigned long t114 = __sz103;
      unsigned long r115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t104);
      _Bool c116 = ((t114 > r115)) ? 1 : 0;
      ternary112 = (_Bool)c116;
    }
    if (ternary112) {
      __builtin_unreachable();
    }
  unsigned long t117 = __sz103;
  __retval102 = t117;
  unsigned long t118 = __retval102;
  return t118;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v119) {
bb120:
  struct std____new_allocator_char_* this121;
  unsigned long __retval122;
  this121 = v119;
  struct std____new_allocator_char_* t123 = this121;
  unsigned long c124 = 9223372036854775807;
  unsigned long c125 = 1;
  unsigned long b126 = c124 / c125;
  __retval122 = b126;
  unsigned long t127 = __retval122;
  return t127;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v128, unsigned long v129, void* v130) {
bb131:
  struct std____new_allocator_char_* this132;
  unsigned long __n133;
  void* unnamed134;
  char* __retval135;
  this132 = v128;
  __n133 = v129;
  unnamed134 = v130;
  struct std____new_allocator_char_* t136 = this132;
    unsigned long t137 = __n133;
    unsigned long r138 = std____new_allocator_char____M_max_size___const(t136);
    _Bool c139 = ((t137 > r138)) ? 1 : 0;
    if (c139) {
        unsigned long t140 = __n133;
        unsigned long c141 = -1;
        unsigned long c142 = 1;
        unsigned long b143 = c141 / c142;
        _Bool c144 = ((t140 > b143)) ? 1 : 0;
        if (c144) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c145 = 1;
    unsigned long c146 = 16;
    _Bool c147 = ((c145 > c146)) ? 1 : 0;
    if (c147) {
      unsigned long __al148;
      unsigned long c149 = 1;
      __al148 = c149;
      unsigned long t150 = __n133;
      unsigned long c151 = 1;
      unsigned long b152 = t150 * c151;
      unsigned long t153 = __al148;
      void* r154 = operator_new_2(b152, t153);
      char* cast155 = (char*)r154;
      __retval135 = cast155;
      char* t156 = __retval135;
      return t156;
    }
  unsigned long t157 = __n133;
  unsigned long c158 = 1;
  unsigned long b159 = t157 * c158;
  void* r160 = operator_new(b159);
  char* cast161 = (char*)r160;
  __retval135 = cast161;
  char* t162 = __retval135;
  return t162;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v163, unsigned long v164) {
bb165:
  struct std__allocator_char_* this166;
  unsigned long __n167;
  char* __retval168;
  this166 = v163;
  __n167 = v164;
  struct std__allocator_char_* t169 = this166;
    _Bool r170 = std____is_constant_evaluated();
    if (r170) {
        unsigned long t171 = __n167;
        unsigned long c172 = 1;
        unsigned long ovr173;
        _Bool ovf174 = __builtin_mul_overflow(t171, c172, &ovr173);
        __n167 = ovr173;
        if (ovf174) {
          std____throw_bad_array_new_length();
        }
      unsigned long t175 = __n167;
      void* r176 = operator_new(t175);
      char* cast177 = (char*)r176;
      __retval168 = cast177;
      char* t178 = __retval168;
      return t178;
    }
  struct std____new_allocator_char_* base179 = (struct std____new_allocator_char_*)((char *)t169 + 0);
  unsigned long t180 = __n167;
  void* c181 = ((void*)0);
  char* r182 = std____new_allocator_char___allocate(base179, t180, c181);
  __retval168 = r182;
  char* t183 = __retval168;
  return t183;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v184, unsigned long v185) {
bb186:
  struct std__allocator_char_* __a187;
  unsigned long __n188;
  char* __retval189;
  __a187 = v184;
  __n188 = v185;
  struct std__allocator_char_* t190 = __a187;
  unsigned long t191 = __n188;
  char* r192 = std__allocator_char___allocate(t190, t191);
  __retval189 = r192;
  char* t193 = __retval189;
  return t193;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v194, unsigned long v195) {
bb196:
  struct std__allocator_char_* __a197;
  unsigned long __n198;
  char* __retval199;
  char* __p200;
  __a197 = v194;
  __n198 = v195;
  struct std__allocator_char_* t201 = __a197;
  unsigned long t202 = __n198;
  char* r203 = std__allocator_traits_std__allocator_char_____allocate(t201, t202);
  __p200 = r203;
  char* t204 = __p200;
  __retval199 = t204;
  char* t205 = __retval199;
  return t205;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v206) {
bb207:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this208;
  struct std__allocator_char_* __retval209;
  this208 = v206;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t210 = this208;
  struct std__allocator_char_* base211 = (struct std__allocator_char_*)((char *)&(t210->_M_dataplus) + 0);
  __retval209 = base211;
  struct std__allocator_char_* t212 = __retval209;
  return t212;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v213, char* v214, unsigned long v215) {
bb216:
  char* __s1217;
  char* __s2218;
  unsigned long __n219;
  char* __retval220;
  __s1217 = v213;
  __s2218 = v214;
  __n219 = v215;
    unsigned long t221 = __n219;
    unsigned long c222 = 0;
    _Bool c223 = ((t221 == c222)) ? 1 : 0;
    if (c223) {
      char* t224 = __s1217;
      __retval220 = t224;
      char* t225 = __retval220;
      return t225;
    }
    _Bool r226 = std____is_constant_evaluated();
    if (r226) {
        unsigned long __i227;
        unsigned long c228 = 0;
        __i227 = c228;
        while (1) {
          unsigned long t230 = __i227;
          unsigned long t231 = __n219;
          _Bool c232 = ((t230 < t231)) ? 1 : 0;
          if (!c232) break;
          char* t233 = __s1217;
          unsigned long t234 = __i227;
          char* ptr235 = &(t233)[t234];
          unsigned long t236 = __i227;
          char* t237 = __s2218;
          char* ptr238 = &(t237)[t236];
          char* r239 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr235, ptr238);
        for_step229: ;
          unsigned long t240 = __i227;
          unsigned long u241 = t240 + 1;
          __i227 = u241;
        }
      char* t242 = __s1217;
      __retval220 = t242;
      char* t243 = __retval220;
      return t243;
    }
  char* t244 = __s1217;
  void* cast245 = (void*)t244;
  char* t246 = __s2218;
  void* cast247 = (void*)t246;
  unsigned long t248 = __n219;
  unsigned long c249 = 1;
  unsigned long b250 = t248 * c249;
  void* r251 = memcpy(cast245, cast247, b250);
  char* t252 = __s1217;
  __retval220 = t252;
  char* t253 = __retval220;
  return t253;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v254, char* v255, unsigned long v256) {
bb257:
  char* __s1258;
  char* __s2259;
  unsigned long __n260;
  char* __retval261;
  __s1258 = v254;
  __s2259 = v255;
  __n260 = v256;
    unsigned long t262 = __n260;
    unsigned long c263 = 0;
    _Bool c264 = ((t262 == c263)) ? 1 : 0;
    if (c264) {
      char* t265 = __s1258;
      __retval261 = t265;
      char* t266 = __retval261;
      return t266;
    }
    _Bool r267 = std____is_constant_evaluated();
    if (r267) {
      char* t268 = __s1258;
      char* t269 = __s2259;
      unsigned long t270 = __n260;
      char* r271 = __gnu_cxx__char_traits_char___copy(t268, t269, t270);
      __retval261 = r271;
      char* t272 = __retval261;
      return t272;
    }
  char* t273 = __s1258;
  void* cast274 = (void*)t273;
  char* t275 = __s2259;
  void* cast276 = (void*)t275;
  unsigned long t277 = __n260;
  void* r278 = memcpy(cast274, cast276, t277);
  char* cast279 = (char*)r278;
  __retval261 = cast279;
  char* t280 = __retval261;
  return t280;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v281, char* v282, unsigned long v283) {
bb284:
  char* __d285;
  char* __s286;
  unsigned long __n287;
  __d285 = v281;
  __s286 = v282;
  __n287 = v283;
    unsigned long t288 = __n287;
    unsigned long c289 = 1;
    _Bool c290 = ((t288 == c289)) ? 1 : 0;
    if (c290) {
      char* t291 = __d285;
      char* t292 = __s286;
      std__char_traits_char___assign(t291, t292);
    } else {
      char* t293 = __d285;
      char* t294 = __s286;
      unsigned long t295 = __n287;
      char* r296 = std__char_traits_char___copy(t293, t294, t295);
    }
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v297, char* v298, unsigned long v299) {
bb300:
  struct std____new_allocator_char_* this301;
  char* __p302;
  unsigned long __n303;
  this301 = v297;
  __p302 = v298;
  __n303 = v299;
  struct std____new_allocator_char_* t304 = this301;
    unsigned long c305 = 1;
    unsigned long c306 = 16;
    _Bool c307 = ((c305 > c306)) ? 1 : 0;
    if (c307) {
      char* t308 = __p302;
      void* cast309 = (void*)t308;
      unsigned long t310 = __n303;
      unsigned long c311 = 1;
      unsigned long b312 = t310 * c311;
      unsigned long c313 = 1;
      operator_delete_3(cast309, b312, c313);
      return;
    }
  char* t314 = __p302;
  void* cast315 = (void*)t314;
  unsigned long t316 = __n303;
  unsigned long c317 = 1;
  unsigned long b318 = t316 * c317;
  operator_delete_2(cast315, b318);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v319, char* v320, unsigned long v321) {
bb322:
  struct std__allocator_char_* this323;
  char* __p324;
  unsigned long __n325;
  this323 = v319;
  __p324 = v320;
  __n325 = v321;
  struct std__allocator_char_* t326 = this323;
    _Bool r327 = std____is_constant_evaluated();
    if (r327) {
      char* t328 = __p324;
      void* cast329 = (void*)t328;
      operator_delete(cast329);
      return;
    }
  struct std____new_allocator_char_* base330 = (struct std____new_allocator_char_*)((char *)t326 + 0);
  char* t331 = __p324;
  unsigned long t332 = __n325;
  std____new_allocator_char___deallocate(base330, t331, t332);
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v333, char* v334, char* v335) {
bb336:
  struct std__less_const_char___* this337;
  char* __x338;
  char* __y339;
  _Bool __retval340;
  this337 = v333;
  __x338 = v334;
  __y339 = v335;
  struct std__less_const_char___* t341 = this337;
    _Bool r342 = std____is_constant_evaluated();
    if (r342) {
      char* t343 = __x338;
      char* t344 = __y339;
      _Bool c345 = ((t343 < t344)) ? 1 : 0;
      __retval340 = c345;
      _Bool t346 = __retval340;
      return t346;
    }
  char* t347 = __x338;
  unsigned long cast348 = (unsigned long)t347;
  char* t349 = __y339;
  unsigned long cast350 = (unsigned long)t349;
  _Bool c351 = ((cast348 < cast350)) ? 1 : 0;
  __retval340 = c351;
  _Bool t352 = __retval340;
  return t352;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v353, char* v354) {
bb355:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this356;
  char* __s357;
  _Bool __retval358;
  struct std__less_const_char___ ref_tmp0359;
  this356 = v353;
  __s357 = v354;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t360 = this356;
  char* t361 = __s357;
  char* r362 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t360);
  _Bool r363 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0359, t361, r362);
  _Bool ternary364;
  if (r363) {
    _Bool c365 = 1;
    ternary364 = (_Bool)c365;
  } else {
    struct std__less_const_char___ ref_tmp1366;
    char* r367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t360);
    unsigned long r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t360);
    char* ptr369 = &(r367)[r368];
    char* t370 = __s357;
    _Bool r371 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1366, ptr369, t370);
    ternary364 = (_Bool)r371;
  }
  __retval358 = ternary364;
  _Bool t372 = __retval358;
  return t372;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v373, char* v374) {
bb375:
  char* __c1376;
  char* __c2377;
  __c1376 = v373;
  __c2377 = v374;
    _Bool r378 = std____is_constant_evaluated();
    if (r378) {
      char* t379 = __c1376;
      char* t380 = __c2377;
      char* r381 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t379, t380);
    } else {
      char* t382 = __c2377;
      char t383 = *t382;
      char* t384 = __c1376;
      *t384 = t383;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v385, char* v386, unsigned long v387) {
bb388:
  char* __s1389;
  char* __s2390;
  unsigned long __n391;
  char* __retval392;
  __s1389 = v385;
  __s2390 = v386;
  __n391 = v387;
    unsigned long t393 = __n391;
    unsigned long c394 = 0;
    _Bool c395 = ((t393 == c394)) ? 1 : 0;
    if (c395) {
      char* t396 = __s1389;
      __retval392 = t396;
      char* t397 = __retval392;
      return t397;
    }
    _Bool r398 = std____is_constant_evaluated();
    if (r398) {
        char* t399 = __s2390;
        char* t400 = __s1389;
        _Bool c401 = ((t399 < t400)) ? 1 : 0;
        _Bool isconst402 = 0;
        _Bool ternary403;
        if (isconst402) {
          char* t404 = __s1389;
          char* t405 = __s2390;
          _Bool c406 = ((t404 > t405)) ? 1 : 0;
          ternary403 = (_Bool)c406;
        } else {
          _Bool c407 = 0;
          ternary403 = (_Bool)c407;
        }
        _Bool ternary408;
        if (ternary403) {
          char* t409 = __s1389;
          char* t410 = __s2390;
          unsigned long t411 = __n391;
          char* ptr412 = &(t410)[t411];
          _Bool c413 = ((t409 < ptr412)) ? 1 : 0;
          ternary408 = (_Bool)c413;
        } else {
          _Bool c414 = 0;
          ternary408 = (_Bool)c414;
        }
        if (ternary408) {
            do {
                unsigned long t415 = __n391;
                unsigned long u416 = t415 - 1;
                __n391 = u416;
                unsigned long t417 = __n391;
                char* t418 = __s1389;
                char* ptr419 = &(t418)[t417];
                unsigned long t420 = __n391;
                char* t421 = __s2390;
                char* ptr422 = &(t421)[t420];
                __gnu_cxx__char_traits_char___assign(ptr419, ptr422);
              unsigned long t423 = __n391;
              unsigned long c424 = 0;
              _Bool c425 = ((t423 > c424)) ? 1 : 0;
              if (!c425) break;
            } while (1);
        } else {
          char* t426 = __s1389;
          char* t427 = __s2390;
          unsigned long t428 = __n391;
          char* r429 = __gnu_cxx__char_traits_char___copy(t426, t427, t428);
        }
      char* t430 = __s1389;
      __retval392 = t430;
      char* t431 = __retval392;
      return t431;
    }
  char* t432 = __s1389;
  void* cast433 = (void*)t432;
  char* t434 = __s2390;
  void* cast435 = (void*)t434;
  unsigned long t436 = __n391;
  unsigned long c437 = 1;
  unsigned long b438 = t436 * c437;
  void* r439 = memmove(cast433, cast435, b438);
  char* t440 = __s1389;
  __retval392 = t440;
  char* t441 = __retval392;
  return t441;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v442, char* v443, unsigned long v444) {
bb445:
  char* __s1446;
  char* __s2447;
  unsigned long __n448;
  char* __retval449;
  __s1446 = v442;
  __s2447 = v443;
  __n448 = v444;
    unsigned long t450 = __n448;
    unsigned long c451 = 0;
    _Bool c452 = ((t450 == c451)) ? 1 : 0;
    if (c452) {
      char* t453 = __s1446;
      __retval449 = t453;
      char* t454 = __retval449;
      return t454;
    }
    _Bool r455 = std____is_constant_evaluated();
    if (r455) {
      char* t456 = __s1446;
      char* t457 = __s2447;
      unsigned long t458 = __n448;
      char* r459 = __gnu_cxx__char_traits_char___move(t456, t457, t458);
      __retval449 = r459;
      char* t460 = __retval449;
      return t460;
    }
  char* t461 = __s1446;
  void* cast462 = (void*)t461;
  char* t463 = __s2447;
  void* cast464 = (void*)t463;
  unsigned long t465 = __n448;
  void* r466 = memmove(cast462, cast464, t465);
  char* cast467 = (char*)r466;
  __retval449 = cast467;
  char* t468 = __retval449;
  return t468;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v469, char* v470, unsigned long v471) {
bb472:
  char* __d473;
  char* __s474;
  unsigned long __n475;
  __d473 = v469;
  __s474 = v470;
  __n475 = v471;
    unsigned long t476 = __n475;
    unsigned long c477 = 1;
    _Bool c478 = ((t476 == c477)) ? 1 : 0;
    if (c478) {
      char* t479 = __d473;
      char* t480 = __s474;
      std__char_traits_char___assign(t479, t480);
    } else {
      char* t481 = __d473;
      char* t482 = __s474;
      unsigned long t483 = __n475;
      char* r484 = std__char_traits_char___move(t481, t482, t483);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v485, char* v486, unsigned long v487, char* v488, unsigned long v489, unsigned long v490) {
bb491:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this492;
  char* __p493;
  unsigned long __len1494;
  char* __s495;
  unsigned long __len2496;
  unsigned long __how_much497;
  this492 = v485;
  __p493 = v486;
  __len1494 = v487;
  __s495 = v488;
  __len2496 = v489;
  __how_much497 = v490;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = this492;
    unsigned long t499 = __len2496;
    _Bool cast500 = (_Bool)t499;
    _Bool ternary501;
    if (cast500) {
      unsigned long t502 = __len2496;
      unsigned long t503 = __len1494;
      _Bool c504 = ((t502 <= t503)) ? 1 : 0;
      ternary501 = (_Bool)c504;
    } else {
      _Bool c505 = 0;
      ternary501 = (_Bool)c505;
    }
    if (ternary501) {
      char* t506 = __p493;
      char* t507 = __s495;
      unsigned long t508 = __len2496;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t506, t507, t508);
    }
    unsigned long t509 = __how_much497;
    _Bool cast510 = (_Bool)t509;
    _Bool ternary511;
    if (cast510) {
      unsigned long t512 = __len1494;
      unsigned long t513 = __len2496;
      _Bool c514 = ((t512 != t513)) ? 1 : 0;
      ternary511 = (_Bool)c514;
    } else {
      _Bool c515 = 0;
      ternary511 = (_Bool)c515;
    }
    if (ternary511) {
      char* t516 = __p493;
      unsigned long t517 = __len2496;
      char* ptr518 = &(t516)[t517];
      char* t519 = __p493;
      unsigned long t520 = __len1494;
      char* ptr521 = &(t519)[t520];
      unsigned long t522 = __how_much497;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr518, ptr521, t522);
    }
    unsigned long t523 = __len2496;
    unsigned long t524 = __len1494;
    _Bool c525 = ((t523 > t524)) ? 1 : 0;
    if (c525) {
        char* t526 = __s495;
        unsigned long t527 = __len2496;
        char* ptr528 = &(t526)[t527];
        char* t529 = __p493;
        unsigned long t530 = __len1494;
        char* ptr531 = &(t529)[t530];
        _Bool c532 = ((ptr528 <= ptr531)) ? 1 : 0;
        if (c532) {
          char* t533 = __p493;
          char* t534 = __s495;
          unsigned long t535 = __len2496;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t533, t534, t535);
        } else {
            char* t536 = __s495;
            char* t537 = __p493;
            unsigned long t538 = __len1494;
            char* ptr539 = &(t537)[t538];
            _Bool c540 = ((t536 >= ptr539)) ? 1 : 0;
            if (c540) {
              unsigned long __poff541;
              char* t542 = __s495;
              char* t543 = __p493;
              long diff544 = t542 - t543;
              unsigned long cast545 = (unsigned long)diff544;
              unsigned long t546 = __len2496;
              unsigned long t547 = __len1494;
              unsigned long b548 = t546 - t547;
              unsigned long b549 = cast545 + b548;
              __poff541 = b549;
              char* t550 = __p493;
              char* t551 = __p493;
              unsigned long t552 = __poff541;
              char* ptr553 = &(t551)[t552];
              unsigned long t554 = __len2496;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t550, ptr553, t554);
            } else {
              unsigned long __nleft555;
              char* t556 = __p493;
              unsigned long t557 = __len1494;
              char* ptr558 = &(t556)[t557];
              char* t559 = __s495;
              long diff560 = ptr558 - t559;
              unsigned long cast561 = (unsigned long)diff560;
              __nleft555 = cast561;
              char* t562 = __p493;
              char* t563 = __s495;
              unsigned long t564 = __nleft555;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t562, t563, t564);
              char* t565 = __p493;
              unsigned long t566 = __nleft555;
              char* ptr567 = &(t565)[t566];
              char* t568 = __p493;
              unsigned long t569 = __len2496;
              char* ptr570 = &(t568)[t569];
              unsigned long t571 = __len2496;
              unsigned long t572 = __nleft555;
              unsigned long b573 = t571 - t572;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr567, ptr570, b573);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v574) {
bb575:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this576;
  unsigned long __retval577;
  this576 = v574;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t578 = this576;
  unsigned long r579 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t578);
  __retval577 = r579;
  unsigned long t580 = __retval577;
  return t580;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v581, unsigned long* v582, unsigned long v583) {
bb584:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this585;
  unsigned long* __capacity586;
  unsigned long __old_capacity587;
  char* __retval588;
  this585 = v581;
  __capacity586 = v582;
  __old_capacity587 = v583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t589 = this585;
    unsigned long* t590 = __capacity586;
    unsigned long t591 = *t590;
    unsigned long r592 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
    _Bool c593 = ((t591 > r592)) ? 1 : 0;
    if (c593) {
      char* cast594 = (char*)&(_str_2);
      std____throw_length_error(cast594);
    }
    unsigned long* t595 = __capacity586;
    unsigned long t596 = *t595;
    unsigned long t597 = __old_capacity587;
    _Bool c598 = ((t596 > t597)) ? 1 : 0;
    _Bool ternary599;
    if (c598) {
      unsigned long* t600 = __capacity586;
      unsigned long t601 = *t600;
      unsigned long c602 = 2;
      unsigned long t603 = __old_capacity587;
      unsigned long b604 = c602 * t603;
      _Bool c605 = ((t601 < b604)) ? 1 : 0;
      ternary599 = (_Bool)c605;
    } else {
      _Bool c606 = 0;
      ternary599 = (_Bool)c606;
    }
    if (ternary599) {
      unsigned long c607 = 2;
      unsigned long t608 = __old_capacity587;
      unsigned long b609 = c607 * t608;
      unsigned long* t610 = __capacity586;
      *t610 = b609;
        unsigned long* t611 = __capacity586;
        unsigned long t612 = *t611;
        unsigned long r613 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
        _Bool c614 = ((t612 > r613)) ? 1 : 0;
        if (c614) {
          unsigned long r615 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
          unsigned long* t616 = __capacity586;
          *t616 = r615;
        }
    }
  struct std__allocator_char_* r617 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t589);
  unsigned long* t618 = __capacity586;
  unsigned long t619 = *t618;
  unsigned long c620 = 1;
  unsigned long b621 = t619 + c620;
  char* r622 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r617, b621);
  __retval588 = r622;
  char* t623 = __retval588;
  return t623;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v624, char* v625, unsigned long v626) {
bb627:
  struct std__allocator_char_* __a628;
  char* __p629;
  unsigned long __n630;
  __a628 = v624;
  __p629 = v625;
  __n630 = v626;
  struct std__allocator_char_* t631 = __a628;
  char* t632 = __p629;
  unsigned long t633 = __n630;
  std__allocator_char___deallocate(t631, t632, t633);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v634, unsigned long v635) {
bb636:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this637;
  unsigned long __size638;
  this637 = v634;
  __size638 = v635;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t639 = this637;
  struct std__allocator_char_* r640 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t639);
  char* r641 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t639);
  unsigned long t642 = __size638;
  unsigned long c643 = 1;
  unsigned long b644 = t642 + c643;
  std__allocator_traits_std__allocator_char_____deallocate(r640, r641, b644);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v645) {
bb646:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this647;
  this647 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t648 = this647;
    _Bool r649 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t648);
    _Bool u650 = !r649;
    if (u650) {
      unsigned long t651 = t648->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t648, t651);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v652, char* v653) {
bb654:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this655;
  char* __p656;
  this655 = v652;
  __p656 = v653;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t657 = this655;
  char* t658 = __p656;
  t657->_M_dataplus._M_p = t658;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v659, unsigned long v660) {
bb661:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this662;
  unsigned long __capacity663;
  this662 = v659;
  __capacity663 = v660;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t664 = this662;
  unsigned long t665 = __capacity663;
  t664->field2._M_allocated_capacity = t665;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, unsigned long v668, char* v669, unsigned long v670) {
bb671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  unsigned long __pos673;
  unsigned long __len1674;
  char* __s675;
  unsigned long __len2676;
  unsigned long __how_much677;
  unsigned long __new_capacity678;
  char* __r679;
  this672 = v666;
  __pos673 = v667;
  __len1674 = v668;
  __s675 = v669;
  __len2676 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t680 = this672;
  unsigned long r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t680);
  unsigned long t682 = __pos673;
  unsigned long b683 = r681 - t682;
  unsigned long t684 = __len1674;
  unsigned long b685 = b683 - t684;
  __how_much677 = b685;
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t680);
  unsigned long t687 = __len2676;
  unsigned long b688 = r686 + t687;
  unsigned long t689 = __len1674;
  unsigned long b690 = b688 - t689;
  __new_capacity678 = b690;
  unsigned long r691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t680);
  char* r692 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t680, &__new_capacity678, r691);
  __r679 = r692;
    unsigned long t693 = __pos673;
    _Bool cast694 = (_Bool)t693;
    if (cast694) {
      char* t695 = __r679;
      char* r696 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t680);
      unsigned long t697 = __pos673;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t695, r696, t697);
    }
    char* t698 = __s675;
    _Bool cast699 = (_Bool)t698;
    _Bool ternary700;
    if (cast699) {
      unsigned long t701 = __len2676;
      _Bool cast702 = (_Bool)t701;
      ternary700 = (_Bool)cast702;
    } else {
      _Bool c703 = 0;
      ternary700 = (_Bool)c703;
    }
    if (ternary700) {
      char* t704 = __r679;
      unsigned long t705 = __pos673;
      char* ptr706 = &(t704)[t705];
      char* t707 = __s675;
      unsigned long t708 = __len2676;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr706, t707, t708);
    }
    unsigned long t709 = __how_much677;
    _Bool cast710 = (_Bool)t709;
    if (cast710) {
      char* t711 = __r679;
      unsigned long t712 = __pos673;
      char* ptr713 = &(t711)[t712];
      unsigned long t714 = __len2676;
      char* ptr715 = &(ptr713)[t714];
      char* r716 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t680);
      unsigned long t717 = __pos673;
      char* ptr718 = &(r716)[t717];
      unsigned long t719 = __len1674;
      char* ptr720 = &(ptr718)[t719];
      unsigned long t721 = __how_much677;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr715, ptr720, t721);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t680);
  char* t722 = __r679;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t680, t722);
  unsigned long t723 = __new_capacity678;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t680, t723);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v724, unsigned long v725, unsigned long v726, char* v727, unsigned long v728) {
bb729:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this730;
  unsigned long __pos731;
  unsigned long __len1732;
  char* __s733;
  unsigned long __len2734;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval735;
  unsigned long __old_size736;
  unsigned long __new_size737;
  this730 = v724;
  __pos731 = v725;
  __len1732 = v726;
  __s733 = v727;
  __len2734 = v728;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t738 = this730;
  unsigned long t739 = __len1732;
  unsigned long t740 = __len2734;
  char* cast741 = (char*)&(_str_1);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t738, t739, t740, cast741);
  unsigned long r742 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t738);
  __old_size736 = r742;
  unsigned long t743 = __old_size736;
  unsigned long t744 = __len2734;
  unsigned long b745 = t743 + t744;
  unsigned long t746 = __len1732;
  unsigned long b747 = b745 - t746;
  __new_size737 = b747;
    unsigned long t748 = __new_size737;
    unsigned long r749 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t738);
    _Bool c750 = ((t748 <= r749)) ? 1 : 0;
    if (c750) {
      char* __p751;
      unsigned long __how_much752;
      char* r753 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
      unsigned long t754 = __pos731;
      char* ptr755 = &(r753)[t754];
      __p751 = ptr755;
      unsigned long t756 = __old_size736;
      unsigned long t757 = __pos731;
      unsigned long b758 = t756 - t757;
      unsigned long t759 = __len1732;
      unsigned long b760 = b758 - t759;
      __how_much752 = b760;
        _Bool r761 = std__is_constant_evaluated();
        if (r761) {
          char* __newp762;
          struct std__allocator_char_* r763 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t738);
          unsigned long t764 = __new_size737;
          char* r765 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r763, t764);
          __newp762 = r765;
          char* t766 = __newp762;
          char* r767 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
          unsigned long t768 = __pos731;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t766, r767, t768);
          char* t769 = __newp762;
          unsigned long t770 = __pos731;
          char* ptr771 = &(t769)[t770];
          char* t772 = __s733;
          unsigned long t773 = __len2734;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr771, t772, t773);
          char* t774 = __newp762;
          unsigned long t775 = __pos731;
          char* ptr776 = &(t774)[t775];
          unsigned long t777 = __len2734;
          char* ptr778 = &(ptr776)[t777];
          char* t779 = __p751;
          unsigned long t780 = __len1732;
          char* ptr781 = &(t779)[t780];
          unsigned long t782 = __how_much752;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr778, ptr781, t782);
          char* r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
          char* t784 = __newp762;
          unsigned long t785 = __new_size737;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r783, t784, t785);
          struct std__allocator_char_* r786 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t738);
          char* t787 = __newp762;
          unsigned long t788 = __new_size737;
          std__allocator_char___deallocate(r786, t787, t788);
        } else {
            char* t789 = __s733;
            _Bool r790 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t738, t789);
            if (r790) {
                unsigned long t791 = __how_much752;
                _Bool cast792 = (_Bool)t791;
                _Bool ternary793;
                if (cast792) {
                  unsigned long t794 = __len1732;
                  unsigned long t795 = __len2734;
                  _Bool c796 = ((t794 != t795)) ? 1 : 0;
                  ternary793 = (_Bool)c796;
                } else {
                  _Bool c797 = 0;
                  ternary793 = (_Bool)c797;
                }
                if (ternary793) {
                  char* t798 = __p751;
                  unsigned long t799 = __len2734;
                  char* ptr800 = &(t798)[t799];
                  char* t801 = __p751;
                  unsigned long t802 = __len1732;
                  char* ptr803 = &(t801)[t802];
                  unsigned long t804 = __how_much752;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr800, ptr803, t804);
                }
                unsigned long t805 = __len2734;
                _Bool cast806 = (_Bool)t805;
                if (cast806) {
                  char* t807 = __p751;
                  char* t808 = __s733;
                  unsigned long t809 = __len2734;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t807, t808, t809);
                }
            } else {
              char* t810 = __p751;
              unsigned long t811 = __len1732;
              char* t812 = __s733;
              unsigned long t813 = __len2734;
              unsigned long t814 = __how_much752;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t738, t810, t811, t812, t813, t814);
            }
        }
    } else {
      unsigned long t815 = __pos731;
      unsigned long t816 = __len1732;
      char* t817 = __s733;
      unsigned long t818 = __len2734;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t738, t815, t816, t817, t818);
    }
  unsigned long t819 = __new_size737;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t738, t819);
  __retval735 = t738;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t820 = __retval735;
  return t820;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v821) {
bb822:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this823;
  unsigned long __retval824;
  unsigned long __sz825;
  this823 = v821;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t826 = this823;
  unsigned long t827 = t826->_M_string_length;
  __sz825 = t827;
    unsigned long t828 = __sz825;
    unsigned long r829 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t826);
    _Bool c830 = ((t828 > r829)) ? 1 : 0;
    if (c830) {
      __builtin_unreachable();
    }
  unsigned long t831 = __sz825;
  __retval824 = t831;
  unsigned long t832 = __retval824;
  return t832;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v833, char* v834) {
bb835:
  char* __c1836;
  char* __c2837;
  _Bool __retval838;
  __c1836 = v833;
  __c2837 = v834;
  char* t839 = __c1836;
  char t840 = *t839;
  int cast841 = (int)t840;
  char* t842 = __c2837;
  char t843 = *t842;
  int cast844 = (int)t843;
  _Bool c845 = ((cast841 == cast844)) ? 1 : 0;
  __retval838 = c845;
  _Bool t846 = __retval838;
  return t846;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v847) {
bb848:
  char* __p849;
  unsigned long __retval850;
  unsigned long __i851;
  __p849 = v847;
  unsigned long c852 = 0;
  __i851 = c852;
    char ref_tmp0853;
    while (1) {
      unsigned long t854 = __i851;
      char* t855 = __p849;
      char* ptr856 = &(t855)[t854];
      char c857 = 0;
      ref_tmp0853 = c857;
      _Bool r858 = __gnu_cxx__char_traits_char___eq(ptr856, &ref_tmp0853);
      _Bool u859 = !r858;
      if (!u859) break;
      unsigned long t860 = __i851;
      unsigned long u861 = t860 + 1;
      __i851 = u861;
    }
  unsigned long t862 = __i851;
  __retval850 = t862;
  unsigned long t863 = __retval850;
  return t863;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v864) {
bb865:
  char* __s866;
  unsigned long __retval867;
  __s866 = v864;
    _Bool r868 = std____is_constant_evaluated();
    if (r868) {
      char* t869 = __s866;
      unsigned long r870 = __gnu_cxx__char_traits_char___length(t869);
      __retval867 = r870;
      unsigned long t871 = __retval867;
      return t871;
    }
  char* t872 = __s866;
  unsigned long r873 = strlen(t872);
  __retval867 = r873;
  unsigned long t874 = __retval867;
  return t874;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v875, char* v876) {
bb877:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this878;
  char* __s879;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval880;
  this878 = v875;
  __s879 = v876;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t881 = this878;
  unsigned long c882 = 0;
  unsigned long r883 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t881);
  char* t884 = __s879;
  char* t885 = __s879;
  unsigned long r886 = std__char_traits_char___length(t885);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r887 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t881, c882, r883, t884, r886);
  __retval880 = r887;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t888 = __retval880;
  return t888;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v889, char* v890) {
bb891:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this892;
  char* __s893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval894;
  this892 = v889;
  __s893 = v890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t895 = this892;
  char* t896 = __s893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r897 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t895, t896);
  __retval894 = r897;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t898 = __retval894;
  return t898;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v899) {
bb900:
  struct std__ios_base* this901;
  long __retval902;
  this901 = v899;
  struct std__ios_base* t903 = this901;
  long t904 = t903->_M_width;
  __retval902 = t904;
  long t905 = __retval902;
  return t905;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v906, char v907) {
bb908:
  struct std__basic_ostream_char__std__char_traits_char__* __out909;
  char __c910;
  struct std__basic_ostream_char__std__char_traits_char__* __retval911;
  __out909 = v906;
  __c910 = v907;
    struct std__basic_ostream_char__std__char_traits_char__* t912 = __out909;
    void** v913 = (void**)t912;
    void* v914 = *((void**)v913);
    unsigned char* cast915 = (unsigned char*)v914;
    long c916 = -24;
    unsigned char* ptr917 = &(cast915)[c916];
    long* cast918 = (long*)ptr917;
    long t919 = *cast918;
    unsigned char* cast920 = (unsigned char*)t912;
    unsigned char* ptr921 = &(cast920)[t919];
    struct std__basic_ostream_char__std__char_traits_char__* cast922 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr921;
    struct std__ios_base* cast923 = (struct std__ios_base*)cast922;
    long r924 = std__ios_base__width___const(cast923);
    long c925 = 0;
    _Bool c926 = ((r924 != c925)) ? 1 : 0;
    if (c926) {
      struct std__basic_ostream_char__std__char_traits_char__* t927 = __out909;
      long c928 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r929 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t927, &__c910, c928);
      __retval911 = r929;
      struct std__basic_ostream_char__std__char_traits_char__* t930 = __retval911;
      return t930;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t931 = __out909;
  char t932 = __c910;
  struct std__basic_ostream_char__std__char_traits_char__* r933 = std__ostream__put(t931, t932);
  struct std__basic_ostream_char__std__char_traits_char__* t934 = __out909;
  __retval911 = t934;
  struct std__basic_ostream_char__std__char_traits_char__* t935 = __retval911;
  return t935;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v936, unsigned long v937) {
bb938:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this939;
  unsigned long __pos940;
  char* __retval941;
  this939 = v936;
  __pos940 = v937;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t942 = this939;
    do {
          unsigned long t943 = __pos940;
          unsigned long r944 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t942);
          _Bool c945 = ((t943 <= r944)) ? 1 : 0;
          _Bool u946 = !c945;
          if (u946) {
            char* cast947 = (char*)&(_str_3);
            int c948 = 1369;
            char* cast949 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm);
            char* cast950 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast947, c948, cast949, cast950);
          }
      _Bool c951 = 0;
      if (!c951) break;
    } while (1);
  unsigned long t952 = __pos940;
  char* r953 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t942);
  char* ptr954 = &(r953)[t952];
  __retval941 = ptr954;
  char* t955 = __retval941;
  return t955;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v956, void* v957) {
bb958:
  struct std__basic_ostream_char__std__char_traits_char__* this959;
  void* __pf960;
  struct std__basic_ostream_char__std__char_traits_char__* __retval961;
  this959 = v956;
  __pf960 = v957;
  struct std__basic_ostream_char__std__char_traits_char__* t962 = this959;
  void* t963 = __pf960;
  struct std__basic_ostream_char__std__char_traits_char__* r964 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t963)(t962);
  __retval961 = r964;
  struct std__basic_ostream_char__std__char_traits_char__* t965 = __retval961;
  return t965;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v966) {
bb967:
  struct std__basic_ostream_char__std__char_traits_char__* __os968;
  struct std__basic_ostream_char__std__char_traits_char__* __retval969;
  __os968 = v966;
  struct std__basic_ostream_char__std__char_traits_char__* t970 = __os968;
  struct std__basic_ostream_char__std__char_traits_char__* r971 = std__ostream__flush(t970);
  __retval969 = r971;
  struct std__basic_ostream_char__std__char_traits_char__* t972 = __retval969;
  return t972;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v973) {
bb974:
  struct std__ctype_char_* __f975;
  struct std__ctype_char_* __retval976;
  __f975 = v973;
    struct std__ctype_char_* t977 = __f975;
    _Bool cast978 = (_Bool)t977;
    _Bool u979 = !cast978;
    if (u979) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t980 = __f975;
  __retval976 = t980;
  struct std__ctype_char_* t981 = __retval976;
  return t981;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v982, char v983) {
bb984:
  struct std__ctype_char_* this985;
  char __c986;
  char __retval987;
  this985 = v982;
  __c986 = v983;
  struct std__ctype_char_* t988 = this985;
    char t989 = t988->_M_widen_ok;
    _Bool cast990 = (_Bool)t989;
    if (cast990) {
      char t991 = __c986;
      unsigned char cast992 = (unsigned char)t991;
      unsigned long cast993 = (unsigned long)cast992;
      char t994 = t988->_M_widen[cast993];
      __retval987 = t994;
      char t995 = __retval987;
      return t995;
    }
  std__ctype_char____M_widen_init___const(t988);
  char t996 = __c986;
  void** v997 = (void**)t988;
  void* v998 = *((void**)v997);
  char vcall1001 = (char)__VERIFIER_virtual_call_char_char(t988, 6, t996);
  __retval987 = vcall1001;
  char t1002 = __retval987;
  return t1002;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1003, char v1004) {
bb1005:
  struct std__basic_ios_char__std__char_traits_char__* this1006;
  char __c1007;
  char __retval1008;
  this1006 = v1003;
  __c1007 = v1004;
  struct std__basic_ios_char__std__char_traits_char__* t1009 = this1006;
  struct std__ctype_char_* t1010 = t1009->_M_ctype;
  struct std__ctype_char_* r1011 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1010);
  char t1012 = __c1007;
  char r1013 = std__ctype_char___widen_char__const(r1011, t1012);
  __retval1008 = r1013;
  char t1014 = __retval1008;
  return t1014;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1015) {
bb1016:
  struct std__basic_ostream_char__std__char_traits_char__* __os1017;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1018;
  __os1017 = v1015;
  struct std__basic_ostream_char__std__char_traits_char__* t1019 = __os1017;
  struct std__basic_ostream_char__std__char_traits_char__* t1020 = __os1017;
  void** v1021 = (void**)t1020;
  void* v1022 = *((void**)v1021);
  unsigned char* cast1023 = (unsigned char*)v1022;
  long c1024 = -24;
  unsigned char* ptr1025 = &(cast1023)[c1024];
  long* cast1026 = (long*)ptr1025;
  long t1027 = *cast1026;
  unsigned char* cast1028 = (unsigned char*)t1020;
  unsigned char* ptr1029 = &(cast1028)[t1027];
  struct std__basic_ostream_char__std__char_traits_char__* cast1030 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1029;
  struct std__basic_ios_char__std__char_traits_char__* cast1031 = (struct std__basic_ios_char__std__char_traits_char__*)cast1030;
  char c1032 = 10;
  char r1033 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1031, c1032);
  struct std__basic_ostream_char__std__char_traits_char__* r1034 = std__ostream__put(t1019, r1033);
  struct std__basic_ostream_char__std__char_traits_char__* r1035 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1034);
  __retval1018 = r1035;
  struct std__basic_ostream_char__std__char_traits_char__* t1036 = __retval1018;
  return t1036;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1037) {
bb1038:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1039;
  this1039 = v1037;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1040 = this1039;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1040);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1040->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1041:
  int __retval1042;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str11043;
  int c1044 = 0;
  __retval1042 = c1044;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str11043);
    char* cast1045 = (char*)&(_str);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1046 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str11043, cast1045);
    unsigned long c1047 = 13;
    char* r1048 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str11043, c1047);
    char t1049 = *r1048;
    struct std__basic_ostream_char__std__char_traits_char__* r1050 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, t1049);
    struct std__basic_ostream_char__std__char_traits_char__* r1051 = std__ostream__operator___std__ostream_____(r1050, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str11043);
  }
  int t1052 = __retval1042;
  return t1052;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1053) {
bb1054:
  char* __r1055;
  char* __retval1056;
  __r1055 = v1053;
  char* t1057 = __r1055;
  __retval1056 = t1057;
  char* t1058 = __retval1056;
  return t1058;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1059) {
bb1060:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1061;
  char* __retval1062;
  this1061 = v1059;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1063 = this1061;
  char* cast1064 = (char*)&(t1063->field2._M_local_buf);
  char* r1065 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1064);
  __retval1062 = r1065;
  char* t1066 = __retval1062;
  return t1066;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1067) {
bb1068:
  struct std__allocator_char_* this1069;
  this1069 = v1067;
  struct std__allocator_char_* t1070 = this1069;
  struct std____new_allocator_char_* base1071 = (struct std____new_allocator_char_*)((char *)t1070 + 0);
  std____new_allocator_char_____new_allocator_2(base1071);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1072, char* v1073, struct std__allocator_char_* v1074) {
bb1075:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1076;
  char* __dat1077;
  struct std__allocator_char_* __a1078;
  this1076 = v1072;
  __dat1077 = v1073;
  __a1078 = v1074;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1079 = this1076;
  struct std__allocator_char_* base1080 = (struct std__allocator_char_*)((char *)t1079 + 0);
  struct std__allocator_char_* t1081 = __a1078;
  std__allocator_char___allocator(base1080, t1081);
    char* t1082 = __dat1077;
    t1079->_M_p = t1082;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1083) {
bb1084:
  struct std__allocator_char_* this1085;
  this1085 = v1083;
  struct std__allocator_char_* t1086 = this1085;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1087:
  _Bool __retval1088;
    _Bool c1089 = 0;
    __retval1088 = c1089;
    _Bool t1090 = __retval1088;
    return t1090;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1091) {
bb1092:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1093;
  this1093 = v1091;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1094 = this1093;
    _Bool r1095 = std__is_constant_evaluated();
    if (r1095) {
        unsigned long __i1096;
        unsigned long c1097 = 0;
        __i1096 = c1097;
        while (1) {
          unsigned long t1099 = __i1096;
          unsigned long c1100 = 15;
          _Bool c1101 = ((t1099 <= c1100)) ? 1 : 0;
          if (!c1101) break;
          char c1102 = 0;
          unsigned long t1103 = __i1096;
          t1094->field2._M_local_buf[t1103] = c1102;
        for_step1098: ;
          unsigned long t1104 = __i1096;
          unsigned long u1105 = t1104 + 1;
          __i1096 = u1105;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1106, unsigned long v1107) {
bb1108:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1109;
  unsigned long __length1110;
  this1109 = v1106;
  __length1110 = v1107;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1111 = this1109;
  unsigned long t1112 = __length1110;
  t1111->_M_string_length = t1112;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1113:
  _Bool __retval1114;
    _Bool c1115 = 0;
    __retval1114 = c1115;
    _Bool t1116 = __retval1114;
    return t1116;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1117, char* v1118) {
bb1119:
  char* __location1120;
  char* __args1121;
  char* __retval1122;
  void* __loc1123;
  __location1120 = v1117;
  __args1121 = v1118;
  char* t1124 = __location1120;
  void* cast1125 = (void*)t1124;
  __loc1123 = cast1125;
    void* t1126 = __loc1123;
    char* cast1127 = (char*)t1126;
    char* t1128 = __args1121;
    char t1129 = *t1128;
    *cast1127 = t1129;
    __retval1122 = cast1127;
    char* t1130 = __retval1122;
    return t1130;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1131, char* v1132) {
bb1133:
  char* __c11134;
  char* __c21135;
  __c11134 = v1131;
  __c21135 = v1132;
    _Bool r1136 = std____is_constant_evaluated();
    if (r1136) {
      char* t1137 = __c11134;
      char* t1138 = __c21135;
      char* r1139 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1137, t1138);
    } else {
      char* t1140 = __c21135;
      char t1141 = *t1140;
      char* t1142 = __c11134;
      *t1142 = t1141;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1143) {
bb1144:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1145;
  char* __retval1146;
  this1145 = v1143;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1147 = this1145;
  char* t1148 = t1147->_M_dataplus._M_p;
  __retval1146 = t1148;
  char* t1149 = __retval1146;
  return t1149;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1150, unsigned long v1151) {
bb1152:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1153;
  unsigned long __n1154;
  char ref_tmp01155;
  this1153 = v1150;
  __n1154 = v1151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1156 = this1153;
  unsigned long t1157 = __n1154;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1156, t1157);
  unsigned long t1158 = __n1154;
  char* r1159 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1156);
  char* ptr1160 = &(r1159)[t1158];
  char c1161 = 0;
  ref_tmp01155 = c1161;
  std__char_traits_char___assign(ptr1160, &ref_tmp01155);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1162) {
bb1163:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1164;
  this1164 = v1162;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1165 = this1164;
  {
    struct std__allocator_char_* base1166 = (struct std__allocator_char_*)((char *)t1165 + 0);
    std__allocator_char____allocator(base1166);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1167) {
bb1168:
  struct std____new_allocator_char_* this1169;
  this1169 = v1167;
  struct std____new_allocator_char_* t1170 = this1169;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1171, struct std____new_allocator_char_* v1172) {
bb1173:
  struct std____new_allocator_char_* this1174;
  struct std____new_allocator_char_* unnamed1175;
  this1174 = v1171;
  unnamed1175 = v1172;
  struct std____new_allocator_char_* t1176 = this1174;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1177, struct std__allocator_char_* v1178) {
bb1179:
  struct std__allocator_char_* this1180;
  struct std__allocator_char_* __a1181;
  this1180 = v1177;
  __a1181 = v1178;
  struct std__allocator_char_* t1182 = this1180;
  struct std____new_allocator_char_* base1183 = (struct std____new_allocator_char_*)((char *)t1182 + 0);
  struct std__allocator_char_* t1184 = __a1181;
  struct std____new_allocator_char_* base1185 = (struct std____new_allocator_char_*)((char *)t1184 + 0);
  std____new_allocator_char_____new_allocator(base1183, base1185);
  return;
}

