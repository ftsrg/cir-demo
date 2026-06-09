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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[12] = "Test string";
char _str_1[21] = "str.capacity() >= 11";
char _str_2[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_capacity_2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[4] = ": x";
char _str_4[21] = "str.capacity() >= 13";
char _str_5[25] = "basic_string::_M_replace";
char _str_6[24] = "basic_string::_M_create";
char _str_7[21] = "basic_string::append";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
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
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
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

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v70) {
bb71:
  struct std____new_allocator_char_* this72;
  unsigned long __retval73;
  this72 = v70;
  struct std____new_allocator_char_* t74 = this72;
  unsigned long c75 = 9223372036854775807;
  unsigned long c76 = 1;
  unsigned long b77 = c75 / c76;
  __retval73 = b77;
  unsigned long t78 = __retval73;
  return t78;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v79, unsigned long v80, void* v81) {
bb82:
  struct std____new_allocator_char_* this83;
  unsigned long __n84;
  void* unnamed85;
  char* __retval86;
  this83 = v79;
  __n84 = v80;
  unnamed85 = v81;
  struct std____new_allocator_char_* t87 = this83;
    unsigned long t88 = __n84;
    unsigned long r89 = std____new_allocator_char____M_max_size___const(t87);
    _Bool c90 = ((t88 > r89)) ? 1 : 0;
    if (c90) {
        unsigned long t91 = __n84;
        unsigned long c92 = -1;
        unsigned long c93 = 1;
        unsigned long b94 = c92 / c93;
        _Bool c95 = ((t91 > b94)) ? 1 : 0;
        if (c95) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c96 = 1;
    unsigned long c97 = 16;
    _Bool c98 = ((c96 > c97)) ? 1 : 0;
    if (c98) {
      unsigned long __al99;
      unsigned long c100 = 1;
      __al99 = c100;
      unsigned long t101 = __n84;
      unsigned long c102 = 1;
      unsigned long b103 = t101 * c102;
      unsigned long t104 = __al99;
      void* r105 = operator_new_2(b103, t104);
      char* cast106 = (char*)r105;
      __retval86 = cast106;
      char* t107 = __retval86;
      return t107;
    }
  unsigned long t108 = __n84;
  unsigned long c109 = 1;
  unsigned long b110 = t108 * c109;
  void* r111 = operator_new(b110);
  char* cast112 = (char*)r111;
  __retval86 = cast112;
  char* t113 = __retval86;
  return t113;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v114, unsigned long v115) {
bb116:
  struct std__allocator_char_* this117;
  unsigned long __n118;
  char* __retval119;
  this117 = v114;
  __n118 = v115;
  struct std__allocator_char_* t120 = this117;
    _Bool r121 = std____is_constant_evaluated();
    if (r121) {
        unsigned long t122 = __n118;
        unsigned long c123 = 1;
        unsigned long ovr124;
        _Bool ovf125 = __builtin_mul_overflow(t122, c123, &ovr124);
        __n118 = ovr124;
        if (ovf125) {
          std____throw_bad_array_new_length();
        }
      unsigned long t126 = __n118;
      void* r127 = operator_new(t126);
      char* cast128 = (char*)r127;
      __retval119 = cast128;
      char* t129 = __retval119;
      return t129;
    }
  struct std____new_allocator_char_* base130 = (struct std____new_allocator_char_*)((char *)t120 + 0);
  unsigned long t131 = __n118;
  void* c132 = ((void*)0);
  char* r133 = std____new_allocator_char___allocate(base130, t131, c132);
  __retval119 = r133;
  char* t134 = __retval119;
  return t134;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v135, unsigned long v136) {
bb137:
  struct std__allocator_char_* __a138;
  unsigned long __n139;
  char* __retval140;
  __a138 = v135;
  __n139 = v136;
  struct std__allocator_char_* t141 = __a138;
  unsigned long t142 = __n139;
  char* r143 = std__allocator_char___allocate(t141, t142);
  __retval140 = r143;
  char* t144 = __retval140;
  return t144;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v145, unsigned long v146) {
bb147:
  struct std__allocator_char_* __a148;
  unsigned long __n149;
  char* __retval150;
  char* __p151;
  __a148 = v145;
  __n149 = v146;
  struct std__allocator_char_* t152 = __a148;
  unsigned long t153 = __n149;
  char* r154 = std__allocator_traits_std__allocator_char_____allocate(t152, t153);
  __p151 = r154;
  char* t155 = __p151;
  __retval150 = t155;
  char* t156 = __retval150;
  return t156;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v157) {
bb158:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this159;
  struct std__allocator_char_* __retval160;
  this159 = v157;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t161 = this159;
  struct std__allocator_char_* base162 = (struct std__allocator_char_*)((char *)&(t161->_M_dataplus) + 0);
  __retval160 = base162;
  struct std__allocator_char_* t163 = __retval160;
  return t163;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v164, char* v165, unsigned long v166) {
bb167:
  char* __s1168;
  char* __s2169;
  unsigned long __n170;
  char* __retval171;
  __s1168 = v164;
  __s2169 = v165;
  __n170 = v166;
    unsigned long t172 = __n170;
    unsigned long c173 = 0;
    _Bool c174 = ((t172 == c173)) ? 1 : 0;
    if (c174) {
      char* t175 = __s1168;
      __retval171 = t175;
      char* t176 = __retval171;
      return t176;
    }
    _Bool r177 = std____is_constant_evaluated();
    if (r177) {
        unsigned long __i178;
        unsigned long c179 = 0;
        __i178 = c179;
        while (1) {
          unsigned long t181 = __i178;
          unsigned long t182 = __n170;
          _Bool c183 = ((t181 < t182)) ? 1 : 0;
          if (!c183) break;
          char* t184 = __s1168;
          unsigned long t185 = __i178;
          char* ptr186 = &(t184)[t185];
          unsigned long t187 = __i178;
          char* t188 = __s2169;
          char* ptr189 = &(t188)[t187];
          char* r190 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr186, ptr189);
        for_step180: ;
          unsigned long t191 = __i178;
          unsigned long u192 = t191 + 1;
          __i178 = u192;
        }
      char* t193 = __s1168;
      __retval171 = t193;
      char* t194 = __retval171;
      return t194;
    }
  char* t195 = __s1168;
  void* cast196 = (void*)t195;
  char* t197 = __s2169;
  void* cast198 = (void*)t197;
  unsigned long t199 = __n170;
  unsigned long c200 = 1;
  unsigned long b201 = t199 * c200;
  void* r202 = memcpy(cast196, cast198, b201);
  char* t203 = __s1168;
  __retval171 = t203;
  char* t204 = __retval171;
  return t204;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v205, char* v206, unsigned long v207) {
bb208:
  char* __s1209;
  char* __s2210;
  unsigned long __n211;
  char* __retval212;
  __s1209 = v205;
  __s2210 = v206;
  __n211 = v207;
    unsigned long t213 = __n211;
    unsigned long c214 = 0;
    _Bool c215 = ((t213 == c214)) ? 1 : 0;
    if (c215) {
      char* t216 = __s1209;
      __retval212 = t216;
      char* t217 = __retval212;
      return t217;
    }
    _Bool r218 = std____is_constant_evaluated();
    if (r218) {
      char* t219 = __s1209;
      char* t220 = __s2210;
      unsigned long t221 = __n211;
      char* r222 = __gnu_cxx__char_traits_char___copy(t219, t220, t221);
      __retval212 = r222;
      char* t223 = __retval212;
      return t223;
    }
  char* t224 = __s1209;
  void* cast225 = (void*)t224;
  char* t226 = __s2210;
  void* cast227 = (void*)t226;
  unsigned long t228 = __n211;
  void* r229 = memcpy(cast225, cast227, t228);
  char* cast230 = (char*)r229;
  __retval212 = cast230;
  char* t231 = __retval212;
  return t231;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v232, char* v233, unsigned long v234) {
bb235:
  char* __d236;
  char* __s237;
  unsigned long __n238;
  __d236 = v232;
  __s237 = v233;
  __n238 = v234;
    unsigned long t239 = __n238;
    unsigned long c240 = 1;
    _Bool c241 = ((t239 == c240)) ? 1 : 0;
    if (c241) {
      char* t242 = __d236;
      char* t243 = __s237;
      std__char_traits_char___assign(t242, t243);
    } else {
      char* t244 = __d236;
      char* t245 = __s237;
      unsigned long t246 = __n238;
      char* r247 = std__char_traits_char___copy(t244, t245, t246);
    }
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v248, char* v249, unsigned long v250) {
bb251:
  struct std____new_allocator_char_* this252;
  char* __p253;
  unsigned long __n254;
  this252 = v248;
  __p253 = v249;
  __n254 = v250;
  struct std____new_allocator_char_* t255 = this252;
    unsigned long c256 = 1;
    unsigned long c257 = 16;
    _Bool c258 = ((c256 > c257)) ? 1 : 0;
    if (c258) {
      char* t259 = __p253;
      void* cast260 = (void*)t259;
      unsigned long t261 = __n254;
      unsigned long c262 = 1;
      unsigned long b263 = t261 * c262;
      unsigned long c264 = 1;
      operator_delete_3(cast260, b263, c264);
      return;
    }
  char* t265 = __p253;
  void* cast266 = (void*)t265;
  unsigned long t267 = __n254;
  unsigned long c268 = 1;
  unsigned long b269 = t267 * c268;
  operator_delete_2(cast266, b269);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v270, char* v271, unsigned long v272) {
bb273:
  struct std__allocator_char_* this274;
  char* __p275;
  unsigned long __n276;
  this274 = v270;
  __p275 = v271;
  __n276 = v272;
  struct std__allocator_char_* t277 = this274;
    _Bool r278 = std____is_constant_evaluated();
    if (r278) {
      char* t279 = __p275;
      void* cast280 = (void*)t279;
      operator_delete(cast280);
      return;
    }
  struct std____new_allocator_char_* base281 = (struct std____new_allocator_char_*)((char *)t277 + 0);
  char* t282 = __p275;
  unsigned long t283 = __n276;
  std____new_allocator_char___deallocate(base281, t282, t283);
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v284, char* v285, char* v286) {
bb287:
  struct std__less_const_char___* this288;
  char* __x289;
  char* __y290;
  _Bool __retval291;
  this288 = v284;
  __x289 = v285;
  __y290 = v286;
  struct std__less_const_char___* t292 = this288;
    _Bool r293 = std____is_constant_evaluated();
    if (r293) {
      char* t294 = __x289;
      char* t295 = __y290;
      _Bool c296 = ((t294 < t295)) ? 1 : 0;
      __retval291 = c296;
      _Bool t297 = __retval291;
      return t297;
    }
  char* t298 = __x289;
  unsigned long cast299 = (unsigned long)t298;
  char* t300 = __y290;
  unsigned long cast301 = (unsigned long)t300;
  _Bool c302 = ((cast299 < cast301)) ? 1 : 0;
  __retval291 = c302;
  _Bool t303 = __retval291;
  return t303;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v304, char* v305) {
bb306:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this307;
  char* __s308;
  _Bool __retval309;
  struct std__less_const_char___ ref_tmp0310;
  this307 = v304;
  __s308 = v305;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t311 = this307;
  char* t312 = __s308;
  char* r313 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t311);
  _Bool r314 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0310, t312, r313);
  _Bool ternary315;
  if (r314) {
    _Bool c316 = 1;
    ternary315 = (_Bool)c316;
  } else {
    struct std__less_const_char___ ref_tmp1317;
    char* r318 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t311);
    unsigned long r319 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t311);
    char* ptr320 = &(r318)[r319];
    char* t321 = __s308;
    _Bool r322 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1317, ptr320, t321);
    ternary315 = (_Bool)r322;
  }
  __retval309 = ternary315;
  _Bool t323 = __retval309;
  return t323;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v324, char* v325) {
bb326:
  char* __c1327;
  char* __c2328;
  __c1327 = v324;
  __c2328 = v325;
    _Bool r329 = std____is_constant_evaluated();
    if (r329) {
      char* t330 = __c1327;
      char* t331 = __c2328;
      char* r332 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t330, t331);
    } else {
      char* t333 = __c2328;
      char t334 = *t333;
      char* t335 = __c1327;
      *t335 = t334;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v336, char* v337, unsigned long v338) {
bb339:
  char* __s1340;
  char* __s2341;
  unsigned long __n342;
  char* __retval343;
  __s1340 = v336;
  __s2341 = v337;
  __n342 = v338;
    unsigned long t344 = __n342;
    unsigned long c345 = 0;
    _Bool c346 = ((t344 == c345)) ? 1 : 0;
    if (c346) {
      char* t347 = __s1340;
      __retval343 = t347;
      char* t348 = __retval343;
      return t348;
    }
    _Bool r349 = std____is_constant_evaluated();
    if (r349) {
        char* t350 = __s2341;
        char* t351 = __s1340;
        _Bool c352 = ((t350 < t351)) ? 1 : 0;
        _Bool isconst353 = 0;
        _Bool ternary354;
        if (isconst353) {
          char* t355 = __s1340;
          char* t356 = __s2341;
          _Bool c357 = ((t355 > t356)) ? 1 : 0;
          ternary354 = (_Bool)c357;
        } else {
          _Bool c358 = 0;
          ternary354 = (_Bool)c358;
        }
        _Bool ternary359;
        if (ternary354) {
          char* t360 = __s1340;
          char* t361 = __s2341;
          unsigned long t362 = __n342;
          char* ptr363 = &(t361)[t362];
          _Bool c364 = ((t360 < ptr363)) ? 1 : 0;
          ternary359 = (_Bool)c364;
        } else {
          _Bool c365 = 0;
          ternary359 = (_Bool)c365;
        }
        if (ternary359) {
            do {
                unsigned long t366 = __n342;
                unsigned long u367 = t366 - 1;
                __n342 = u367;
                unsigned long t368 = __n342;
                char* t369 = __s1340;
                char* ptr370 = &(t369)[t368];
                unsigned long t371 = __n342;
                char* t372 = __s2341;
                char* ptr373 = &(t372)[t371];
                __gnu_cxx__char_traits_char___assign(ptr370, ptr373);
              unsigned long t374 = __n342;
              unsigned long c375 = 0;
              _Bool c376 = ((t374 > c375)) ? 1 : 0;
              if (!c376) break;
            } while (1);
        } else {
          char* t377 = __s1340;
          char* t378 = __s2341;
          unsigned long t379 = __n342;
          char* r380 = __gnu_cxx__char_traits_char___copy(t377, t378, t379);
        }
      char* t381 = __s1340;
      __retval343 = t381;
      char* t382 = __retval343;
      return t382;
    }
  char* t383 = __s1340;
  void* cast384 = (void*)t383;
  char* t385 = __s2341;
  void* cast386 = (void*)t385;
  unsigned long t387 = __n342;
  unsigned long c388 = 1;
  unsigned long b389 = t387 * c388;
  void* r390 = memmove(cast384, cast386, b389);
  char* t391 = __s1340;
  __retval343 = t391;
  char* t392 = __retval343;
  return t392;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v393, char* v394, unsigned long v395) {
bb396:
  char* __s1397;
  char* __s2398;
  unsigned long __n399;
  char* __retval400;
  __s1397 = v393;
  __s2398 = v394;
  __n399 = v395;
    unsigned long t401 = __n399;
    unsigned long c402 = 0;
    _Bool c403 = ((t401 == c402)) ? 1 : 0;
    if (c403) {
      char* t404 = __s1397;
      __retval400 = t404;
      char* t405 = __retval400;
      return t405;
    }
    _Bool r406 = std____is_constant_evaluated();
    if (r406) {
      char* t407 = __s1397;
      char* t408 = __s2398;
      unsigned long t409 = __n399;
      char* r410 = __gnu_cxx__char_traits_char___move(t407, t408, t409);
      __retval400 = r410;
      char* t411 = __retval400;
      return t411;
    }
  char* t412 = __s1397;
  void* cast413 = (void*)t412;
  char* t414 = __s2398;
  void* cast415 = (void*)t414;
  unsigned long t416 = __n399;
  void* r417 = memmove(cast413, cast415, t416);
  char* cast418 = (char*)r417;
  __retval400 = cast418;
  char* t419 = __retval400;
  return t419;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v420, char* v421, unsigned long v422) {
bb423:
  char* __d424;
  char* __s425;
  unsigned long __n426;
  __d424 = v420;
  __s425 = v421;
  __n426 = v422;
    unsigned long t427 = __n426;
    unsigned long c428 = 1;
    _Bool c429 = ((t427 == c428)) ? 1 : 0;
    if (c429) {
      char* t430 = __d424;
      char* t431 = __s425;
      std__char_traits_char___assign(t430, t431);
    } else {
      char* t432 = __d424;
      char* t433 = __s425;
      unsigned long t434 = __n426;
      char* r435 = std__char_traits_char___move(t432, t433, t434);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v436, char* v437, unsigned long v438, char* v439, unsigned long v440, unsigned long v441) {
bb442:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this443;
  char* __p444;
  unsigned long __len1445;
  char* __s446;
  unsigned long __len2447;
  unsigned long __how_much448;
  this443 = v436;
  __p444 = v437;
  __len1445 = v438;
  __s446 = v439;
  __len2447 = v440;
  __how_much448 = v441;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t449 = this443;
    unsigned long t450 = __len2447;
    _Bool cast451 = (_Bool)t450;
    _Bool ternary452;
    if (cast451) {
      unsigned long t453 = __len2447;
      unsigned long t454 = __len1445;
      _Bool c455 = ((t453 <= t454)) ? 1 : 0;
      ternary452 = (_Bool)c455;
    } else {
      _Bool c456 = 0;
      ternary452 = (_Bool)c456;
    }
    if (ternary452) {
      char* t457 = __p444;
      char* t458 = __s446;
      unsigned long t459 = __len2447;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t457, t458, t459);
    }
    unsigned long t460 = __how_much448;
    _Bool cast461 = (_Bool)t460;
    _Bool ternary462;
    if (cast461) {
      unsigned long t463 = __len1445;
      unsigned long t464 = __len2447;
      _Bool c465 = ((t463 != t464)) ? 1 : 0;
      ternary462 = (_Bool)c465;
    } else {
      _Bool c466 = 0;
      ternary462 = (_Bool)c466;
    }
    if (ternary462) {
      char* t467 = __p444;
      unsigned long t468 = __len2447;
      char* ptr469 = &(t467)[t468];
      char* t470 = __p444;
      unsigned long t471 = __len1445;
      char* ptr472 = &(t470)[t471];
      unsigned long t473 = __how_much448;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr469, ptr472, t473);
    }
    unsigned long t474 = __len2447;
    unsigned long t475 = __len1445;
    _Bool c476 = ((t474 > t475)) ? 1 : 0;
    if (c476) {
        char* t477 = __s446;
        unsigned long t478 = __len2447;
        char* ptr479 = &(t477)[t478];
        char* t480 = __p444;
        unsigned long t481 = __len1445;
        char* ptr482 = &(t480)[t481];
        _Bool c483 = ((ptr479 <= ptr482)) ? 1 : 0;
        if (c483) {
          char* t484 = __p444;
          char* t485 = __s446;
          unsigned long t486 = __len2447;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t484, t485, t486);
        } else {
            char* t487 = __s446;
            char* t488 = __p444;
            unsigned long t489 = __len1445;
            char* ptr490 = &(t488)[t489];
            _Bool c491 = ((t487 >= ptr490)) ? 1 : 0;
            if (c491) {
              unsigned long __poff492;
              char* t493 = __s446;
              char* t494 = __p444;
              long diff495 = t493 - t494;
              unsigned long cast496 = (unsigned long)diff495;
              unsigned long t497 = __len2447;
              unsigned long t498 = __len1445;
              unsigned long b499 = t497 - t498;
              unsigned long b500 = cast496 + b499;
              __poff492 = b500;
              char* t501 = __p444;
              char* t502 = __p444;
              unsigned long t503 = __poff492;
              char* ptr504 = &(t502)[t503];
              unsigned long t505 = __len2447;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t501, ptr504, t505);
            } else {
              unsigned long __nleft506;
              char* t507 = __p444;
              unsigned long t508 = __len1445;
              char* ptr509 = &(t507)[t508];
              char* t510 = __s446;
              long diff511 = ptr509 - t510;
              unsigned long cast512 = (unsigned long)diff511;
              __nleft506 = cast512;
              char* t513 = __p444;
              char* t514 = __s446;
              unsigned long t515 = __nleft506;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t513, t514, t515);
              char* t516 = __p444;
              unsigned long t517 = __nleft506;
              char* ptr518 = &(t516)[t517];
              char* t519 = __p444;
              unsigned long t520 = __len2447;
              char* ptr521 = &(t519)[t520];
              unsigned long t522 = __len2447;
              unsigned long t523 = __nleft506;
              unsigned long b524 = t522 - t523;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr518, ptr521, b524);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v525) {
bb526:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this527;
  unsigned long __retval528;
  this527 = v525;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t529 = this527;
  unsigned long r530 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t529);
  __retval528 = r530;
  unsigned long t531 = __retval528;
  return t531;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v532, unsigned long* v533, unsigned long v534) {
bb535:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this536;
  unsigned long* __capacity537;
  unsigned long __old_capacity538;
  char* __retval539;
  this536 = v532;
  __capacity537 = v533;
  __old_capacity538 = v534;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t540 = this536;
    unsigned long* t541 = __capacity537;
    unsigned long t542 = *t541;
    unsigned long r543 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t540);
    _Bool c544 = ((t542 > r543)) ? 1 : 0;
    if (c544) {
      char* cast545 = (char*)&(_str_6);
      std____throw_length_error(cast545);
    }
    unsigned long* t546 = __capacity537;
    unsigned long t547 = *t546;
    unsigned long t548 = __old_capacity538;
    _Bool c549 = ((t547 > t548)) ? 1 : 0;
    _Bool ternary550;
    if (c549) {
      unsigned long* t551 = __capacity537;
      unsigned long t552 = *t551;
      unsigned long c553 = 2;
      unsigned long t554 = __old_capacity538;
      unsigned long b555 = c553 * t554;
      _Bool c556 = ((t552 < b555)) ? 1 : 0;
      ternary550 = (_Bool)c556;
    } else {
      _Bool c557 = 0;
      ternary550 = (_Bool)c557;
    }
    if (ternary550) {
      unsigned long c558 = 2;
      unsigned long t559 = __old_capacity538;
      unsigned long b560 = c558 * t559;
      unsigned long* t561 = __capacity537;
      *t561 = b560;
        unsigned long* t562 = __capacity537;
        unsigned long t563 = *t562;
        unsigned long r564 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t540);
        _Bool c565 = ((t563 > r564)) ? 1 : 0;
        if (c565) {
          unsigned long r566 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t540);
          unsigned long* t567 = __capacity537;
          *t567 = r566;
        }
    }
  struct std__allocator_char_* r568 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t540);
  unsigned long* t569 = __capacity537;
  unsigned long t570 = *t569;
  unsigned long c571 = 1;
  unsigned long b572 = t570 + c571;
  char* r573 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r568, b572);
  __retval539 = r573;
  char* t574 = __retval539;
  return t574;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v575) {
bb576:
  char* __r577;
  char* __retval578;
  __r577 = v575;
  char* t579 = __r577;
  __retval578 = t579;
  char* t580 = __retval578;
  return t580;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v581) {
bb582:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this583;
  char* __retval584;
  this583 = v581;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t585 = this583;
  char* cast586 = (char*)&(t585->field2._M_local_buf);
  char* r587 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast586);
  __retval584 = r587;
  char* t588 = __retval584;
  return t588;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v589) {
bb590:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this591;
  _Bool __retval592;
  this591 = v589;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t593 = this591;
    char* r594 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t593);
    char* r595 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t593);
    _Bool c596 = ((r594 == r595)) ? 1 : 0;
    if (c596) {
        unsigned long t597 = t593->_M_string_length;
        unsigned long c598 = 15;
        _Bool c599 = ((t597 > c598)) ? 1 : 0;
        if (c599) {
          __builtin_unreachable();
        }
      _Bool c600 = 1;
      __retval592 = c600;
      _Bool t601 = __retval592;
      return t601;
    }
  _Bool c602 = 0;
  __retval592 = c602;
  _Bool t603 = __retval592;
  return t603;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v604, char* v605, unsigned long v606) {
bb607:
  struct std__allocator_char_* __a608;
  char* __p609;
  unsigned long __n610;
  __a608 = v604;
  __p609 = v605;
  __n610 = v606;
  struct std__allocator_char_* t611 = __a608;
  char* t612 = __p609;
  unsigned long t613 = __n610;
  std__allocator_char___deallocate(t611, t612, t613);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v614, unsigned long v615) {
bb616:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this617;
  unsigned long __size618;
  this617 = v614;
  __size618 = v615;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t619 = this617;
  struct std__allocator_char_* r620 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t619);
  char* r621 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t619);
  unsigned long t622 = __size618;
  unsigned long c623 = 1;
  unsigned long b624 = t622 + c623;
  std__allocator_traits_std__allocator_char_____deallocate(r620, r621, b624);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v625) {
bb626:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this627;
  this627 = v625;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t628 = this627;
    _Bool r629 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t628);
    _Bool u630 = !r629;
    if (u630) {
      unsigned long t631 = t628->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t628, t631);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v632, char* v633) {
bb634:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this635;
  char* __p636;
  this635 = v632;
  __p636 = v633;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t637 = this635;
  char* t638 = __p636;
  t637->_M_dataplus._M_p = t638;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v639, unsigned long v640) {
bb641:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this642;
  unsigned long __capacity643;
  this642 = v639;
  __capacity643 = v640;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t644 = this642;
  unsigned long t645 = __capacity643;
  t644->field2._M_allocated_capacity = t645;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v646, unsigned long v647, unsigned long v648, char* v649, unsigned long v650) {
bb651:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this652;
  unsigned long __pos653;
  unsigned long __len1654;
  char* __s655;
  unsigned long __len2656;
  unsigned long __how_much657;
  unsigned long __new_capacity658;
  char* __r659;
  this652 = v646;
  __pos653 = v647;
  __len1654 = v648;
  __s655 = v649;
  __len2656 = v650;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t660 = this652;
  unsigned long r661 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t660);
  unsigned long t662 = __pos653;
  unsigned long b663 = r661 - t662;
  unsigned long t664 = __len1654;
  unsigned long b665 = b663 - t664;
  __how_much657 = b665;
  unsigned long r666 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t660);
  unsigned long t667 = __len2656;
  unsigned long b668 = r666 + t667;
  unsigned long t669 = __len1654;
  unsigned long b670 = b668 - t669;
  __new_capacity658 = b670;
  unsigned long r671 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t660);
  char* r672 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t660, &__new_capacity658, r671);
  __r659 = r672;
    unsigned long t673 = __pos653;
    _Bool cast674 = (_Bool)t673;
    if (cast674) {
      char* t675 = __r659;
      char* r676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t660);
      unsigned long t677 = __pos653;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t675, r676, t677);
    }
    char* t678 = __s655;
    _Bool cast679 = (_Bool)t678;
    _Bool ternary680;
    if (cast679) {
      unsigned long t681 = __len2656;
      _Bool cast682 = (_Bool)t681;
      ternary680 = (_Bool)cast682;
    } else {
      _Bool c683 = 0;
      ternary680 = (_Bool)c683;
    }
    if (ternary680) {
      char* t684 = __r659;
      unsigned long t685 = __pos653;
      char* ptr686 = &(t684)[t685];
      char* t687 = __s655;
      unsigned long t688 = __len2656;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr686, t687, t688);
    }
    unsigned long t689 = __how_much657;
    _Bool cast690 = (_Bool)t689;
    if (cast690) {
      char* t691 = __r659;
      unsigned long t692 = __pos653;
      char* ptr693 = &(t691)[t692];
      unsigned long t694 = __len2656;
      char* ptr695 = &(ptr693)[t694];
      char* r696 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t660);
      unsigned long t697 = __pos653;
      char* ptr698 = &(r696)[t697];
      unsigned long t699 = __len1654;
      char* ptr700 = &(ptr698)[t699];
      unsigned long t701 = __how_much657;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr695, ptr700, t701);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t660);
  char* t702 = __r659;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t660, t702);
  unsigned long t703 = __new_capacity658;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t660, t703);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v704, unsigned long v705, unsigned long v706, char* v707, unsigned long v708) {
bb709:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this710;
  unsigned long __pos711;
  unsigned long __len1712;
  char* __s713;
  unsigned long __len2714;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval715;
  unsigned long __old_size716;
  unsigned long __new_size717;
  this710 = v704;
  __pos711 = v705;
  __len1712 = v706;
  __s713 = v707;
  __len2714 = v708;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t718 = this710;
  unsigned long t719 = __len1712;
  unsigned long t720 = __len2714;
  char* cast721 = (char*)&(_str_5);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t718, t719, t720, cast721);
  unsigned long r722 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t718);
  __old_size716 = r722;
  unsigned long t723 = __old_size716;
  unsigned long t724 = __len2714;
  unsigned long b725 = t723 + t724;
  unsigned long t726 = __len1712;
  unsigned long b727 = b725 - t726;
  __new_size717 = b727;
    unsigned long t728 = __new_size717;
    unsigned long r729 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t718);
    _Bool c730 = ((t728 <= r729)) ? 1 : 0;
    if (c730) {
      char* __p731;
      unsigned long __how_much732;
      char* r733 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t718);
      unsigned long t734 = __pos711;
      char* ptr735 = &(r733)[t734];
      __p731 = ptr735;
      unsigned long t736 = __old_size716;
      unsigned long t737 = __pos711;
      unsigned long b738 = t736 - t737;
      unsigned long t739 = __len1712;
      unsigned long b740 = b738 - t739;
      __how_much732 = b740;
        _Bool r741 = std__is_constant_evaluated();
        if (r741) {
          char* __newp742;
          struct std__allocator_char_* r743 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t718);
          unsigned long t744 = __new_size717;
          char* r745 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r743, t744);
          __newp742 = r745;
          char* t746 = __newp742;
          char* r747 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t718);
          unsigned long t748 = __pos711;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t746, r747, t748);
          char* t749 = __newp742;
          unsigned long t750 = __pos711;
          char* ptr751 = &(t749)[t750];
          char* t752 = __s713;
          unsigned long t753 = __len2714;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr751, t752, t753);
          char* t754 = __newp742;
          unsigned long t755 = __pos711;
          char* ptr756 = &(t754)[t755];
          unsigned long t757 = __len2714;
          char* ptr758 = &(ptr756)[t757];
          char* t759 = __p731;
          unsigned long t760 = __len1712;
          char* ptr761 = &(t759)[t760];
          unsigned long t762 = __how_much732;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr758, ptr761, t762);
          char* r763 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t718);
          char* t764 = __newp742;
          unsigned long t765 = __new_size717;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r763, t764, t765);
          struct std__allocator_char_* r766 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t718);
          char* t767 = __newp742;
          unsigned long t768 = __new_size717;
          std__allocator_char___deallocate(r766, t767, t768);
        } else {
            char* t769 = __s713;
            _Bool r770 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t718, t769);
            if (r770) {
                unsigned long t771 = __how_much732;
                _Bool cast772 = (_Bool)t771;
                _Bool ternary773;
                if (cast772) {
                  unsigned long t774 = __len1712;
                  unsigned long t775 = __len2714;
                  _Bool c776 = ((t774 != t775)) ? 1 : 0;
                  ternary773 = (_Bool)c776;
                } else {
                  _Bool c777 = 0;
                  ternary773 = (_Bool)c777;
                }
                if (ternary773) {
                  char* t778 = __p731;
                  unsigned long t779 = __len2714;
                  char* ptr780 = &(t778)[t779];
                  char* t781 = __p731;
                  unsigned long t782 = __len1712;
                  char* ptr783 = &(t781)[t782];
                  unsigned long t784 = __how_much732;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr780, ptr783, t784);
                }
                unsigned long t785 = __len2714;
                _Bool cast786 = (_Bool)t785;
                if (cast786) {
                  char* t787 = __p731;
                  char* t788 = __s713;
                  unsigned long t789 = __len2714;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t787, t788, t789);
                }
            } else {
              char* t790 = __p731;
              unsigned long t791 = __len1712;
              char* t792 = __s713;
              unsigned long t793 = __len2714;
              unsigned long t794 = __how_much732;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t718, t790, t791, t792, t793, t794);
            }
        }
    } else {
      unsigned long t795 = __pos711;
      unsigned long t796 = __len1712;
      char* t797 = __s713;
      unsigned long t798 = __len2714;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t718, t795, t796, t797, t798);
    }
  unsigned long t799 = __new_size717;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t718, t799);
  __retval715 = t718;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t800 = __retval715;
  return t800;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v801) {
bb802:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this803;
  unsigned long __retval804;
  unsigned long __sz805;
  this803 = v801;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t806 = this803;
  unsigned long t807 = t806->_M_string_length;
  __sz805 = t807;
    unsigned long t808 = __sz805;
    unsigned long r809 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t806);
    _Bool c810 = ((t808 > r809)) ? 1 : 0;
    if (c810) {
      __builtin_unreachable();
    }
  unsigned long t811 = __sz805;
  __retval804 = t811;
  unsigned long t812 = __retval804;
  return t812;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v813, char* v814) {
bb815:
  char* __c1816;
  char* __c2817;
  _Bool __retval818;
  __c1816 = v813;
  __c2817 = v814;
  char* t819 = __c1816;
  char t820 = *t819;
  int cast821 = (int)t820;
  char* t822 = __c2817;
  char t823 = *t822;
  int cast824 = (int)t823;
  _Bool c825 = ((cast821 == cast824)) ? 1 : 0;
  __retval818 = c825;
  _Bool t826 = __retval818;
  return t826;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v827) {
bb828:
  char* __p829;
  unsigned long __retval830;
  unsigned long __i831;
  __p829 = v827;
  unsigned long c832 = 0;
  __i831 = c832;
    char ref_tmp0833;
    while (1) {
      unsigned long t834 = __i831;
      char* t835 = __p829;
      char* ptr836 = &(t835)[t834];
      char c837 = 0;
      ref_tmp0833 = c837;
      _Bool r838 = __gnu_cxx__char_traits_char___eq(ptr836, &ref_tmp0833);
      _Bool u839 = !r838;
      if (!u839) break;
      unsigned long t840 = __i831;
      unsigned long u841 = t840 + 1;
      __i831 = u841;
    }
  unsigned long t842 = __i831;
  __retval830 = t842;
  unsigned long t843 = __retval830;
  return t843;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v844) {
bb845:
  char* __s846;
  unsigned long __retval847;
  __s846 = v844;
    _Bool r848 = std____is_constant_evaluated();
    if (r848) {
      char* t849 = __s846;
      unsigned long r850 = __gnu_cxx__char_traits_char___length(t849);
      __retval847 = r850;
      unsigned long t851 = __retval847;
      return t851;
    }
  char* t852 = __s846;
  unsigned long r853 = strlen(t852);
  __retval847 = r853;
  unsigned long t854 = __retval847;
  return t854;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v855, char* v856) {
bb857:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this858;
  char* __s859;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval860;
  this858 = v855;
  __s859 = v856;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t861 = this858;
  unsigned long c862 = 0;
  unsigned long r863 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t861);
  char* t864 = __s859;
  char* t865 = __s859;
  unsigned long r866 = std__char_traits_char___length(t865);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r867 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t861, c862, r863, t864, r866);
  __retval860 = r867;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t868 = __retval860;
  return t868;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v869, char* v870) {
bb871:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this872;
  char* __s873;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval874;
  this872 = v869;
  __s873 = v870;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t875 = this872;
  char* t876 = __s873;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r877 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t875, t876);
  __retval874 = r877;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t878 = __retval874;
  return t878;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v879) {
bb880:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this881;
  unsigned long __retval882;
  unsigned long __sz883;
  this881 = v879;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t884 = this881;
  _Bool r885 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t884);
  unsigned long ternary886;
  if (r885) {
    unsigned long c887 = 15;
    ternary886 = (unsigned long)c887;
  } else {
    unsigned long t888 = t884->field2._M_allocated_capacity;
    ternary886 = (unsigned long)t888;
  }
  __sz883 = ternary886;
    unsigned long t889 = __sz883;
    unsigned long c890 = 15;
    _Bool c891 = ((t889 < c890)) ? 1 : 0;
    _Bool ternary892;
    if (c891) {
      _Bool c893 = 1;
      ternary892 = (_Bool)c893;
    } else {
      unsigned long t894 = __sz883;
      unsigned long r895 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t884);
      _Bool c896 = ((t894 > r895)) ? 1 : 0;
      ternary892 = (_Bool)c896;
    }
    if (ternary892) {
      __builtin_unreachable();
    }
  unsigned long t897 = __sz883;
  __retval882 = t897;
  unsigned long t898 = __retval882;
  return t898;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v899, unsigned long v900) {
bb901:
  struct std__basic_ostream_char__std__char_traits_char__* this902;
  unsigned long __n903;
  struct std__basic_ostream_char__std__char_traits_char__* __retval904;
  this902 = v899;
  __n903 = v900;
  struct std__basic_ostream_char__std__char_traits_char__* t905 = this902;
  unsigned long t906 = __n903;
  struct std__basic_ostream_char__std__char_traits_char__* r907 = std__ostream__std__ostream___M_insert_unsigned_long_(t905, t906);
  __retval904 = r907;
  struct std__basic_ostream_char__std__char_traits_char__* t908 = __retval904;
  return t908;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v909, char* v910, unsigned long v911) {
bb912:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this913;
  char* __s914;
  unsigned long __n915;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval916;
  unsigned long __len917;
  this913 = v909;
  __s914 = v910;
  __n915 = v911;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t918 = this913;
  unsigned long t919 = __n915;
  unsigned long r920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t918);
  unsigned long b921 = t919 + r920;
  __len917 = b921;
    unsigned long t922 = __len917;
    unsigned long r923 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t918);
    _Bool c924 = ((t922 <= r923)) ? 1 : 0;
    if (c924) {
        unsigned long t925 = __n915;
        _Bool cast926 = (_Bool)t925;
        if (cast926) {
          char* r927 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t918);
          unsigned long r928 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t918);
          char* ptr929 = &(r927)[r928];
          char* t930 = __s914;
          unsigned long t931 = __n915;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr929, t930, t931);
        }
    } else {
      unsigned long r932 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t918);
      unsigned long c933 = 0;
      char* t934 = __s914;
      unsigned long t935 = __n915;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t918, r932, c933, t934, t935);
    }
  unsigned long t936 = __len917;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t918, t936);
  __retval916 = t918;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t937 = __retval916;
  return t937;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v938, char* v939) {
bb940:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this941;
  char* __s942;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval943;
  unsigned long __n944;
  this941 = v938;
  __s942 = v939;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t945 = this941;
  char* t946 = __s942;
  unsigned long r947 = std__char_traits_char___length(t946);
  __n944 = r947;
  unsigned long c948 = 0;
  unsigned long t949 = __n944;
  char* cast950 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t945, c948, t949, cast950);
  char* t951 = __s942;
  unsigned long t952 = __n944;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r953 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t945, t951, t952);
  __retval943 = r953;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t954 = __retval943;
  return t954;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v955, char* v956) {
bb957:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this958;
  char* __s959;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval960;
  this958 = v955;
  __s959 = v956;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t961 = this958;
  char* t962 = __s959;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r963 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t961, t962);
  __retval960 = r963;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t964 = __retval960;
  return t964;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v965) {
bb966:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this967;
  this967 = v965;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t968 = this967;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t968);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t968->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb969:
  int __retval970;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str971;
  int c972 = 0;
  __retval970 = c972;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str971);
    char* cast973 = (char*)&(_str);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r974 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str971, cast973);
    unsigned long r975 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(&str971);
    unsigned long c976 = 11;
    _Bool c977 = ((r975 >= c976)) ? 1 : 0;
    if (c977) {
    } else {
      char* cast978 = (char*)&(_str_1);
      char* c979 = _str_2;
      unsigned int c980 = 17;
      char* cast981 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast978, c979, c980, cast981);
    }
    unsigned long r982 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(&str971);
    struct std__basic_ostream_char__std__char_traits_char__* r983 = std__ostream__operator__(&_ZSt4cout, r982);
    char* cast984 = (char*)&(_str_3);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r985 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str971, cast984);
    unsigned long r986 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(&str971);
    unsigned long c987 = 13;
    _Bool c988 = ((r986 >= c987)) ? 1 : 0;
    if (c988) {
    } else {
      char* cast989 = (char*)&(_str_4);
      char* c990 = _str_2;
      unsigned int c991 = 20;
      char* cast992 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast989, c990, c991, cast992);
    }
    unsigned long r993 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(&str971);
    struct std__basic_ostream_char__std__char_traits_char__* r994 = std__ostream__operator__(&_ZSt4cout, r993);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str971);
  }
  int t995 = __retval970;
  return t995;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v996) {
bb997:
  char* __r998;
  char* __retval999;
  __r998 = v996;
  char* t1000 = __r998;
  __retval999 = t1000;
  char* t1001 = __retval999;
  return t1001;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1002) {
bb1003:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1004;
  char* __retval1005;
  this1004 = v1002;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1006 = this1004;
  char* cast1007 = (char*)&(t1006->field2._M_local_buf);
  char* r1008 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1007);
  __retval1005 = r1008;
  char* t1009 = __retval1005;
  return t1009;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1010) {
bb1011:
  struct std__allocator_char_* this1012;
  this1012 = v1010;
  struct std__allocator_char_* t1013 = this1012;
  struct std____new_allocator_char_* base1014 = (struct std____new_allocator_char_*)((char *)t1013 + 0);
  std____new_allocator_char_____new_allocator_2(base1014);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1015, char* v1016, struct std__allocator_char_* v1017) {
bb1018:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1019;
  char* __dat1020;
  struct std__allocator_char_* __a1021;
  this1019 = v1015;
  __dat1020 = v1016;
  __a1021 = v1017;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1022 = this1019;
  struct std__allocator_char_* base1023 = (struct std__allocator_char_*)((char *)t1022 + 0);
  struct std__allocator_char_* t1024 = __a1021;
  std__allocator_char___allocator(base1023, t1024);
    char* t1025 = __dat1020;
    t1022->_M_p = t1025;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1026) {
bb1027:
  struct std__allocator_char_* this1028;
  this1028 = v1026;
  struct std__allocator_char_* t1029 = this1028;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1030:
  _Bool __retval1031;
    _Bool c1032 = 0;
    __retval1031 = c1032;
    _Bool t1033 = __retval1031;
    return t1033;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1034) {
bb1035:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1036;
  this1036 = v1034;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1037 = this1036;
    _Bool r1038 = std__is_constant_evaluated();
    if (r1038) {
        unsigned long __i1039;
        unsigned long c1040 = 0;
        __i1039 = c1040;
        while (1) {
          unsigned long t1042 = __i1039;
          unsigned long c1043 = 15;
          _Bool c1044 = ((t1042 <= c1043)) ? 1 : 0;
          if (!c1044) break;
          char c1045 = 0;
          unsigned long t1046 = __i1039;
          t1037->field2._M_local_buf[t1046] = c1045;
        for_step1041: ;
          unsigned long t1047 = __i1039;
          unsigned long u1048 = t1047 + 1;
          __i1039 = u1048;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1049, unsigned long v1050) {
bb1051:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1052;
  unsigned long __length1053;
  this1052 = v1049;
  __length1053 = v1050;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1054 = this1052;
  unsigned long t1055 = __length1053;
  t1054->_M_string_length = t1055;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1056:
  _Bool __retval1057;
    _Bool c1058 = 0;
    __retval1057 = c1058;
    _Bool t1059 = __retval1057;
    return t1059;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1060, char* v1061) {
bb1062:
  char* __location1063;
  char* __args1064;
  char* __retval1065;
  void* __loc1066;
  __location1063 = v1060;
  __args1064 = v1061;
  char* t1067 = __location1063;
  void* cast1068 = (void*)t1067;
  __loc1066 = cast1068;
    void* t1069 = __loc1066;
    char* cast1070 = (char*)t1069;
    char* t1071 = __args1064;
    char t1072 = *t1071;
    *cast1070 = t1072;
    __retval1065 = cast1070;
    char* t1073 = __retval1065;
    return t1073;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1074, char* v1075) {
bb1076:
  char* __c11077;
  char* __c21078;
  __c11077 = v1074;
  __c21078 = v1075;
    _Bool r1079 = std____is_constant_evaluated();
    if (r1079) {
      char* t1080 = __c11077;
      char* t1081 = __c21078;
      char* r1082 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1080, t1081);
    } else {
      char* t1083 = __c21078;
      char t1084 = *t1083;
      char* t1085 = __c11077;
      *t1085 = t1084;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1086) {
bb1087:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1088;
  char* __retval1089;
  this1088 = v1086;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1090 = this1088;
  char* t1091 = t1090->_M_dataplus._M_p;
  __retval1089 = t1091;
  char* t1092 = __retval1089;
  return t1092;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1093, unsigned long v1094) {
bb1095:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1096;
  unsigned long __n1097;
  char ref_tmp01098;
  this1096 = v1093;
  __n1097 = v1094;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1099 = this1096;
  unsigned long t1100 = __n1097;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1099, t1100);
  unsigned long t1101 = __n1097;
  char* r1102 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1099);
  char* ptr1103 = &(r1102)[t1101];
  char c1104 = 0;
  ref_tmp01098 = c1104;
  std__char_traits_char___assign(ptr1103, &ref_tmp01098);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1105) {
bb1106:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1107;
  this1107 = v1105;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1108 = this1107;
  {
    struct std__allocator_char_* base1109 = (struct std__allocator_char_*)((char *)t1108 + 0);
    std__allocator_char____allocator(base1109);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1110) {
bb1111:
  struct std____new_allocator_char_* this1112;
  this1112 = v1110;
  struct std____new_allocator_char_* t1113 = this1112;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1114, struct std____new_allocator_char_* v1115) {
bb1116:
  struct std____new_allocator_char_* this1117;
  struct std____new_allocator_char_* unnamed1118;
  this1117 = v1114;
  unnamed1118 = v1115;
  struct std____new_allocator_char_* t1119 = this1117;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1120, struct std__allocator_char_* v1121) {
bb1122:
  struct std__allocator_char_* this1123;
  struct std__allocator_char_* __a1124;
  this1123 = v1120;
  __a1124 = v1121;
  struct std__allocator_char_* t1125 = this1123;
  struct std____new_allocator_char_* base1126 = (struct std____new_allocator_char_*)((char *)t1125 + 0);
  struct std__allocator_char_* t1127 = __a1124;
  struct std____new_allocator_char_* base1128 = (struct std____new_allocator_char_*)((char *)t1127 + 0);
  std____new_allocator_char_____new_allocator(base1126, base1128);
  return;
}

