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
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[8] = "Testing";
char _str_1[4] = "Tes";
char _str_2[7] = "T == S";
char _str_3[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_constructor_4/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
char _str_6[25] = "basic_string::_M_replace";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, struct std__allocator_char_* p3);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
_Bool std____is_constant_evaluated();
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
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1:
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EPKcmRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, unsigned long v7, struct std__allocator_char_* v8) {
bb9:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this10;
  char* __s11;
  unsigned long __n12;
  struct std__allocator_char_* __a13;
  struct std__forward_iterator_tag agg_tmp014;
  this10 = v5;
  __s11 = v6;
  __n12 = v7;
  __a13 = v8;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t15 = this10;
  char* r16 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t15);
  struct std__allocator_char_* t17 = __a13;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t15->_M_dataplus, r16, t17);
      char* t18 = __s11;
      char* c19 = ((void*)0);
      _Bool c20 = ((t18 == c19)) ? 1 : 0;
      _Bool ternary21;
      if (c20) {
        unsigned long t22 = __n12;
        unsigned long c23 = 0;
        _Bool c24 = ((t22 > c23)) ? 1 : 0;
        ternary21 = (_Bool)c24;
      } else {
        _Bool c25 = 0;
        ternary21 = (_Bool)c25;
      }
      if (ternary21) {
        char* cast26 = (char*)&(_str_4);
        std____throw_logic_error(cast26);
      }
    char* t27 = __s11;
    char* t28 = __s11;
    unsigned long t29 = __n12;
    char* ptr30 = &(t28)[t29];
    struct std__forward_iterator_tag t31 = agg_tmp014;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t15, t27, ptr30, t31);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v32) {
bb33:
  struct std__allocator_char_* this34;
  this34 = v32;
  struct std__allocator_char_* t35 = this34;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v36) {
bb37:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this38;
  struct std__allocator_char_ ref_tmp039;
  this38 = v36;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t40 = this38;
  char* r41 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t40);
  std__allocator_char___allocator_2(&ref_tmp039);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t40->_M_dataplus, r41, &ref_tmp039);
  {
    std__allocator_char____allocator(&ref_tmp039);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t40);
    unsigned long c42 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t40, c42);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v43, unsigned long v44, unsigned long v45, char* v46) {
bb47:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this48;
  unsigned long __n149;
  unsigned long __n250;
  char* __s51;
  this48 = v43;
  __n149 = v44;
  __n250 = v45;
  __s51 = v46;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t52 = this48;
    unsigned long r53 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t52);
    unsigned long r54 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t52);
    unsigned long t55 = __n149;
    unsigned long b56 = r54 - t55;
    unsigned long b57 = r53 - b56;
    unsigned long t58 = __n250;
    _Bool c59 = ((b57 < t58)) ? 1 : 0;
    if (c59) {
      char* t60 = __s51;
      std____throw_length_error(t60);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v61) {
bb62:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this63;
  unsigned long __retval64;
  unsigned long __sz65;
  this63 = v61;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t66 = this63;
  _Bool r67 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t66);
  unsigned long ternary68;
  if (r67) {
    unsigned long c69 = 15;
    ternary68 = (unsigned long)c69;
  } else {
    unsigned long t70 = t66->field2._M_allocated_capacity;
    ternary68 = (unsigned long)t70;
  }
  __sz65 = ternary68;
    unsigned long t71 = __sz65;
    unsigned long c72 = 15;
    _Bool c73 = ((t71 < c72)) ? 1 : 0;
    _Bool ternary74;
    if (c73) {
      _Bool c75 = 1;
      ternary74 = (_Bool)c75;
    } else {
      unsigned long t76 = __sz65;
      unsigned long r77 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t66);
      _Bool c78 = ((t76 > r77)) ? 1 : 0;
      ternary74 = (_Bool)c78;
    }
    if (ternary74) {
      __builtin_unreachable();
    }
  unsigned long t79 = __sz65;
  __retval64 = t79;
  unsigned long t80 = __retval64;
  return t80;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v81, char* v82, char* v83) {
bb84:
  struct std__less_const_char___* this85;
  char* __x86;
  char* __y87;
  _Bool __retval88;
  this85 = v81;
  __x86 = v82;
  __y87 = v83;
  struct std__less_const_char___* t89 = this85;
    _Bool r90 = std____is_constant_evaluated();
    if (r90) {
      char* t91 = __x86;
      char* t92 = __y87;
      _Bool c93 = ((t91 < t92)) ? 1 : 0;
      __retval88 = c93;
      _Bool t94 = __retval88;
      return t94;
    }
  char* t95 = __x86;
  unsigned long cast96 = (unsigned long)t95;
  char* t97 = __y87;
  unsigned long cast98 = (unsigned long)t97;
  _Bool c99 = ((cast96 < cast98)) ? 1 : 0;
  __retval88 = c99;
  _Bool t100 = __retval88;
  return t100;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v101, char* v102) {
bb103:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this104;
  char* __s105;
  _Bool __retval106;
  struct std__less_const_char___ ref_tmp0107;
  this104 = v101;
  __s105 = v102;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t108 = this104;
  char* t109 = __s105;
  char* r110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t108);
  _Bool r111 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0107, t109, r110);
  _Bool ternary112;
  if (r111) {
    _Bool c113 = 1;
    ternary112 = (_Bool)c113;
  } else {
    struct std__less_const_char___ ref_tmp1114;
    char* r115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t108);
    unsigned long r116 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t108);
    char* ptr117 = &(r115)[r116];
    char* t118 = __s105;
    _Bool r119 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1114, ptr117, t118);
    ternary112 = (_Bool)r119;
  }
  __retval106 = ternary112;
  _Bool t120 = __retval106;
  return t120;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v121, char* v122) {
bb123:
  char* __c1124;
  char* __c2125;
  __c1124 = v121;
  __c2125 = v122;
    _Bool r126 = std____is_constant_evaluated();
    if (r126) {
      char* t127 = __c1124;
      char* t128 = __c2125;
      char* r129 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t127, t128);
    } else {
      char* t130 = __c2125;
      char t131 = *t130;
      char* t132 = __c1124;
      *t132 = t131;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v133, char* v134, unsigned long v135) {
bb136:
  char* __s1137;
  char* __s2138;
  unsigned long __n139;
  char* __retval140;
  __s1137 = v133;
  __s2138 = v134;
  __n139 = v135;
    unsigned long t141 = __n139;
    unsigned long c142 = 0;
    _Bool c143 = ((t141 == c142)) ? 1 : 0;
    if (c143) {
      char* t144 = __s1137;
      __retval140 = t144;
      char* t145 = __retval140;
      return t145;
    }
    _Bool r146 = std____is_constant_evaluated();
    if (r146) {
        char* t147 = __s2138;
        char* t148 = __s1137;
        _Bool c149 = ((t147 < t148)) ? 1 : 0;
        _Bool isconst150 = 0;
        _Bool ternary151;
        if (isconst150) {
          char* t152 = __s1137;
          char* t153 = __s2138;
          _Bool c154 = ((t152 > t153)) ? 1 : 0;
          ternary151 = (_Bool)c154;
        } else {
          _Bool c155 = 0;
          ternary151 = (_Bool)c155;
        }
        _Bool ternary156;
        if (ternary151) {
          char* t157 = __s1137;
          char* t158 = __s2138;
          unsigned long t159 = __n139;
          char* ptr160 = &(t158)[t159];
          _Bool c161 = ((t157 < ptr160)) ? 1 : 0;
          ternary156 = (_Bool)c161;
        } else {
          _Bool c162 = 0;
          ternary156 = (_Bool)c162;
        }
        if (ternary156) {
            do {
                unsigned long t163 = __n139;
                unsigned long u164 = t163 - 1;
                __n139 = u164;
                unsigned long t165 = __n139;
                char* t166 = __s1137;
                char* ptr167 = &(t166)[t165];
                unsigned long t168 = __n139;
                char* t169 = __s2138;
                char* ptr170 = &(t169)[t168];
                __gnu_cxx__char_traits_char___assign(ptr167, ptr170);
              unsigned long t171 = __n139;
              unsigned long c172 = 0;
              _Bool c173 = ((t171 > c172)) ? 1 : 0;
              if (!c173) break;
            } while (1);
        } else {
          char* t174 = __s1137;
          char* t175 = __s2138;
          unsigned long t176 = __n139;
          char* r177 = __gnu_cxx__char_traits_char___copy(t174, t175, t176);
        }
      char* t178 = __s1137;
      __retval140 = t178;
      char* t179 = __retval140;
      return t179;
    }
  char* t180 = __s1137;
  void* cast181 = (void*)t180;
  char* t182 = __s2138;
  void* cast183 = (void*)t182;
  unsigned long t184 = __n139;
  unsigned long c185 = 1;
  unsigned long b186 = t184 * c185;
  void* r187 = memmove(cast181, cast183, b186);
  char* t188 = __s1137;
  __retval140 = t188;
  char* t189 = __retval140;
  return t189;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v190, char* v191, unsigned long v192) {
bb193:
  char* __s1194;
  char* __s2195;
  unsigned long __n196;
  char* __retval197;
  __s1194 = v190;
  __s2195 = v191;
  __n196 = v192;
    unsigned long t198 = __n196;
    unsigned long c199 = 0;
    _Bool c200 = ((t198 == c199)) ? 1 : 0;
    if (c200) {
      char* t201 = __s1194;
      __retval197 = t201;
      char* t202 = __retval197;
      return t202;
    }
    _Bool r203 = std____is_constant_evaluated();
    if (r203) {
      char* t204 = __s1194;
      char* t205 = __s2195;
      unsigned long t206 = __n196;
      char* r207 = __gnu_cxx__char_traits_char___move(t204, t205, t206);
      __retval197 = r207;
      char* t208 = __retval197;
      return t208;
    }
  char* t209 = __s1194;
  void* cast210 = (void*)t209;
  char* t211 = __s2195;
  void* cast212 = (void*)t211;
  unsigned long t213 = __n196;
  void* r214 = memmove(cast210, cast212, t213);
  char* cast215 = (char*)r214;
  __retval197 = cast215;
  char* t216 = __retval197;
  return t216;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v217, char* v218, unsigned long v219) {
bb220:
  char* __d221;
  char* __s222;
  unsigned long __n223;
  __d221 = v217;
  __s222 = v218;
  __n223 = v219;
    unsigned long t224 = __n223;
    unsigned long c225 = 1;
    _Bool c226 = ((t224 == c225)) ? 1 : 0;
    if (c226) {
      char* t227 = __d221;
      char* t228 = __s222;
      std__char_traits_char___assign(t227, t228);
    } else {
      char* t229 = __d221;
      char* t230 = __s222;
      unsigned long t231 = __n223;
      char* r232 = std__char_traits_char___move(t229, t230, t231);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v233, char* v234, unsigned long v235, char* v236, unsigned long v237, unsigned long v238) {
bb239:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this240;
  char* __p241;
  unsigned long __len1242;
  char* __s243;
  unsigned long __len2244;
  unsigned long __how_much245;
  this240 = v233;
  __p241 = v234;
  __len1242 = v235;
  __s243 = v236;
  __len2244 = v237;
  __how_much245 = v238;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t246 = this240;
    unsigned long t247 = __len2244;
    _Bool cast248 = (_Bool)t247;
    _Bool ternary249;
    if (cast248) {
      unsigned long t250 = __len2244;
      unsigned long t251 = __len1242;
      _Bool c252 = ((t250 <= t251)) ? 1 : 0;
      ternary249 = (_Bool)c252;
    } else {
      _Bool c253 = 0;
      ternary249 = (_Bool)c253;
    }
    if (ternary249) {
      char* t254 = __p241;
      char* t255 = __s243;
      unsigned long t256 = __len2244;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t254, t255, t256);
    }
    unsigned long t257 = __how_much245;
    _Bool cast258 = (_Bool)t257;
    _Bool ternary259;
    if (cast258) {
      unsigned long t260 = __len1242;
      unsigned long t261 = __len2244;
      _Bool c262 = ((t260 != t261)) ? 1 : 0;
      ternary259 = (_Bool)c262;
    } else {
      _Bool c263 = 0;
      ternary259 = (_Bool)c263;
    }
    if (ternary259) {
      char* t264 = __p241;
      unsigned long t265 = __len2244;
      char* ptr266 = &(t264)[t265];
      char* t267 = __p241;
      unsigned long t268 = __len1242;
      char* ptr269 = &(t267)[t268];
      unsigned long t270 = __how_much245;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr266, ptr269, t270);
    }
    unsigned long t271 = __len2244;
    unsigned long t272 = __len1242;
    _Bool c273 = ((t271 > t272)) ? 1 : 0;
    if (c273) {
        char* t274 = __s243;
        unsigned long t275 = __len2244;
        char* ptr276 = &(t274)[t275];
        char* t277 = __p241;
        unsigned long t278 = __len1242;
        char* ptr279 = &(t277)[t278];
        _Bool c280 = ((ptr276 <= ptr279)) ? 1 : 0;
        if (c280) {
          char* t281 = __p241;
          char* t282 = __s243;
          unsigned long t283 = __len2244;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t281, t282, t283);
        } else {
            char* t284 = __s243;
            char* t285 = __p241;
            unsigned long t286 = __len1242;
            char* ptr287 = &(t285)[t286];
            _Bool c288 = ((t284 >= ptr287)) ? 1 : 0;
            if (c288) {
              unsigned long __poff289;
              char* t290 = __s243;
              char* t291 = __p241;
              long diff292 = t290 - t291;
              unsigned long cast293 = (unsigned long)diff292;
              unsigned long t294 = __len2244;
              unsigned long t295 = __len1242;
              unsigned long b296 = t294 - t295;
              unsigned long b297 = cast293 + b296;
              __poff289 = b297;
              char* t298 = __p241;
              char* t299 = __p241;
              unsigned long t300 = __poff289;
              char* ptr301 = &(t299)[t300];
              unsigned long t302 = __len2244;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t298, ptr301, t302);
            } else {
              unsigned long __nleft303;
              char* t304 = __p241;
              unsigned long t305 = __len1242;
              char* ptr306 = &(t304)[t305];
              char* t307 = __s243;
              long diff308 = ptr306 - t307;
              unsigned long cast309 = (unsigned long)diff308;
              __nleft303 = cast309;
              char* t310 = __p241;
              char* t311 = __s243;
              unsigned long t312 = __nleft303;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t310, t311, t312);
              char* t313 = __p241;
              unsigned long t314 = __nleft303;
              char* ptr315 = &(t313)[t314];
              char* t316 = __p241;
              unsigned long t317 = __len2244;
              char* ptr318 = &(t316)[t317];
              unsigned long t319 = __len2244;
              unsigned long t320 = __nleft303;
              unsigned long b321 = t319 - t320;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr315, ptr318, b321);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v322) {
bb323:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this324;
  unsigned long __retval325;
  this324 = v322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t326 = this324;
  unsigned long r327 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t326);
  __retval325 = r327;
  unsigned long t328 = __retval325;
  return t328;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v329, unsigned long v330, unsigned long v331, char* v332, unsigned long v333) {
bb334:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this335;
  unsigned long __pos336;
  unsigned long __len1337;
  char* __s338;
  unsigned long __len2339;
  unsigned long __how_much340;
  unsigned long __new_capacity341;
  char* __r342;
  this335 = v329;
  __pos336 = v330;
  __len1337 = v331;
  __s338 = v332;
  __len2339 = v333;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t343 = this335;
  unsigned long r344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t343);
  unsigned long t345 = __pos336;
  unsigned long b346 = r344 - t345;
  unsigned long t347 = __len1337;
  unsigned long b348 = b346 - t347;
  __how_much340 = b348;
  unsigned long r349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t343);
  unsigned long t350 = __len2339;
  unsigned long b351 = r349 + t350;
  unsigned long t352 = __len1337;
  unsigned long b353 = b351 - t352;
  __new_capacity341 = b353;
  unsigned long r354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t343);
  char* r355 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t343, &__new_capacity341, r354);
  __r342 = r355;
    unsigned long t356 = __pos336;
    _Bool cast357 = (_Bool)t356;
    if (cast357) {
      char* t358 = __r342;
      char* r359 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t343);
      unsigned long t360 = __pos336;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t358, r359, t360);
    }
    char* t361 = __s338;
    _Bool cast362 = (_Bool)t361;
    _Bool ternary363;
    if (cast362) {
      unsigned long t364 = __len2339;
      _Bool cast365 = (_Bool)t364;
      ternary363 = (_Bool)cast365;
    } else {
      _Bool c366 = 0;
      ternary363 = (_Bool)c366;
    }
    if (ternary363) {
      char* t367 = __r342;
      unsigned long t368 = __pos336;
      char* ptr369 = &(t367)[t368];
      char* t370 = __s338;
      unsigned long t371 = __len2339;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr369, t370, t371);
    }
    unsigned long t372 = __how_much340;
    _Bool cast373 = (_Bool)t372;
    if (cast373) {
      char* t374 = __r342;
      unsigned long t375 = __pos336;
      char* ptr376 = &(t374)[t375];
      unsigned long t377 = __len2339;
      char* ptr378 = &(ptr376)[t377];
      char* r379 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t343);
      unsigned long t380 = __pos336;
      char* ptr381 = &(r379)[t380];
      unsigned long t382 = __len1337;
      char* ptr383 = &(ptr381)[t382];
      unsigned long t384 = __how_much340;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr378, ptr383, t384);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t343);
  char* t385 = __r342;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t343, t385);
  unsigned long t386 = __new_capacity341;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t343, t386);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v387, unsigned long v388, unsigned long v389, char* v390, unsigned long v391) {
bb392:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this393;
  unsigned long __pos394;
  unsigned long __len1395;
  char* __s396;
  unsigned long __len2397;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval398;
  unsigned long __old_size399;
  unsigned long __new_size400;
  this393 = v387;
  __pos394 = v388;
  __len1395 = v389;
  __s396 = v390;
  __len2397 = v391;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t401 = this393;
  unsigned long t402 = __len1395;
  unsigned long t403 = __len2397;
  char* cast404 = (char*)&(_str_6);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t401, t402, t403, cast404);
  unsigned long r405 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t401);
  __old_size399 = r405;
  unsigned long t406 = __old_size399;
  unsigned long t407 = __len2397;
  unsigned long b408 = t406 + t407;
  unsigned long t409 = __len1395;
  unsigned long b410 = b408 - t409;
  __new_size400 = b410;
    unsigned long t411 = __new_size400;
    unsigned long r412 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t401);
    _Bool c413 = ((t411 <= r412)) ? 1 : 0;
    if (c413) {
      char* __p414;
      unsigned long __how_much415;
      char* r416 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t401);
      unsigned long t417 = __pos394;
      char* ptr418 = &(r416)[t417];
      __p414 = ptr418;
      unsigned long t419 = __old_size399;
      unsigned long t420 = __pos394;
      unsigned long b421 = t419 - t420;
      unsigned long t422 = __len1395;
      unsigned long b423 = b421 - t422;
      __how_much415 = b423;
        _Bool r424 = std__is_constant_evaluated();
        if (r424) {
          char* __newp425;
          struct std__allocator_char_* r426 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t401);
          unsigned long t427 = __new_size400;
          char* r428 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r426, t427);
          __newp425 = r428;
          char* t429 = __newp425;
          char* r430 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t401);
          unsigned long t431 = __pos394;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t429, r430, t431);
          char* t432 = __newp425;
          unsigned long t433 = __pos394;
          char* ptr434 = &(t432)[t433];
          char* t435 = __s396;
          unsigned long t436 = __len2397;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr434, t435, t436);
          char* t437 = __newp425;
          unsigned long t438 = __pos394;
          char* ptr439 = &(t437)[t438];
          unsigned long t440 = __len2397;
          char* ptr441 = &(ptr439)[t440];
          char* t442 = __p414;
          unsigned long t443 = __len1395;
          char* ptr444 = &(t442)[t443];
          unsigned long t445 = __how_much415;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr441, ptr444, t445);
          char* r446 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t401);
          char* t447 = __newp425;
          unsigned long t448 = __new_size400;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r446, t447, t448);
          struct std__allocator_char_* r449 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t401);
          char* t450 = __newp425;
          unsigned long t451 = __new_size400;
          std__allocator_char___deallocate(r449, t450, t451);
        } else {
            char* t452 = __s396;
            _Bool r453 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t401, t452);
            if (r453) {
                unsigned long t454 = __how_much415;
                _Bool cast455 = (_Bool)t454;
                _Bool ternary456;
                if (cast455) {
                  unsigned long t457 = __len1395;
                  unsigned long t458 = __len2397;
                  _Bool c459 = ((t457 != t458)) ? 1 : 0;
                  ternary456 = (_Bool)c459;
                } else {
                  _Bool c460 = 0;
                  ternary456 = (_Bool)c460;
                }
                if (ternary456) {
                  char* t461 = __p414;
                  unsigned long t462 = __len2397;
                  char* ptr463 = &(t461)[t462];
                  char* t464 = __p414;
                  unsigned long t465 = __len1395;
                  char* ptr466 = &(t464)[t465];
                  unsigned long t467 = __how_much415;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr463, ptr466, t467);
                }
                unsigned long t468 = __len2397;
                _Bool cast469 = (_Bool)t468;
                if (cast469) {
                  char* t470 = __p414;
                  char* t471 = __s396;
                  unsigned long t472 = __len2397;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t470, t471, t472);
                }
            } else {
              char* t473 = __p414;
              unsigned long t474 = __len1395;
              char* t475 = __s396;
              unsigned long t476 = __len2397;
              unsigned long t477 = __how_much415;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t401, t473, t474, t475, t476, t477);
            }
        }
    } else {
      unsigned long t478 = __pos394;
      unsigned long t479 = __len1395;
      char* t480 = __s396;
      unsigned long t481 = __len2397;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t401, t478, t479, t480, t481);
    }
  unsigned long t482 = __new_size400;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t401, t482);
  __retval398 = t401;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t483 = __retval398;
  return t483;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v484) {
bb485:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this486;
  unsigned long __retval487;
  unsigned long __sz488;
  this486 = v484;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t489 = this486;
  unsigned long t490 = t489->_M_string_length;
  __sz488 = t490;
    unsigned long t491 = __sz488;
    unsigned long r492 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t489);
    _Bool c493 = ((t491 > r492)) ? 1 : 0;
    if (c493) {
      __builtin_unreachable();
    }
  unsigned long t494 = __sz488;
  __retval487 = t494;
  unsigned long t495 = __retval487;
  return t495;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v496, char* v497) {
bb498:
  char* __c1499;
  char* __c2500;
  _Bool __retval501;
  __c1499 = v496;
  __c2500 = v497;
  char* t502 = __c1499;
  char t503 = *t502;
  int cast504 = (int)t503;
  char* t505 = __c2500;
  char t506 = *t505;
  int cast507 = (int)t506;
  _Bool c508 = ((cast504 == cast507)) ? 1 : 0;
  __retval501 = c508;
  _Bool t509 = __retval501;
  return t509;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v510) {
bb511:
  char* __p512;
  unsigned long __retval513;
  unsigned long __i514;
  __p512 = v510;
  unsigned long c515 = 0;
  __i514 = c515;
    char ref_tmp0516;
    while (1) {
      unsigned long t517 = __i514;
      char* t518 = __p512;
      char* ptr519 = &(t518)[t517];
      char c520 = 0;
      ref_tmp0516 = c520;
      _Bool r521 = __gnu_cxx__char_traits_char___eq(ptr519, &ref_tmp0516);
      _Bool u522 = !r521;
      if (!u522) break;
      unsigned long t523 = __i514;
      unsigned long u524 = t523 + 1;
      __i514 = u524;
    }
  unsigned long t525 = __i514;
  __retval513 = t525;
  unsigned long t526 = __retval513;
  return t526;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v527) {
bb528:
  char* __s529;
  unsigned long __retval530;
  __s529 = v527;
    _Bool r531 = std____is_constant_evaluated();
    if (r531) {
      char* t532 = __s529;
      unsigned long r533 = __gnu_cxx__char_traits_char___length(t532);
      __retval530 = r533;
      unsigned long t534 = __retval530;
      return t534;
    }
  char* t535 = __s529;
  unsigned long r536 = strlen(t535);
  __retval530 = r536;
  unsigned long t537 = __retval530;
  return t537;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v538, char* v539) {
bb540:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this541;
  char* __s542;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval543;
  this541 = v538;
  __s542 = v539;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t544 = this541;
  unsigned long c545 = 0;
  unsigned long r546 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t544);
  char* t547 = __s542;
  char* t548 = __s542;
  unsigned long r549 = std__char_traits_char___length(t548);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r550 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t544, c545, r546, t547, r549);
  __retval543 = r550;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t551 = __retval543;
  return t551;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v552, char* v553) {
bb554:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this555;
  char* __s556;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval557;
  this555 = v552;
  __s556 = v553;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t558 = this555;
  char* t559 = __s556;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r560 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t558, t559);
  __retval557 = r560;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t561 = __retval557;
  return t561;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v562, char* v563) {
bb564:
  char* __c1565;
  char* __c2566;
  _Bool __retval567;
  __c1565 = v562;
  __c2566 = v563;
  char* t568 = __c1565;
  char t569 = *t568;
  unsigned char cast570 = (unsigned char)t569;
  int cast571 = (int)cast570;
  char* t572 = __c2566;
  char t573 = *t572;
  unsigned char cast574 = (unsigned char)t573;
  int cast575 = (int)cast574;
  _Bool c576 = ((cast571 < cast575)) ? 1 : 0;
  __retval567 = c576;
  _Bool t577 = __retval567;
  return t577;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v578, char* v579, unsigned long v580) {
bb581:
  char* __s1582;
  char* __s2583;
  unsigned long __n584;
  int __retval585;
  __s1582 = v578;
  __s2583 = v579;
  __n584 = v580;
    unsigned long t586 = __n584;
    unsigned long c587 = 0;
    _Bool c588 = ((t586 == c587)) ? 1 : 0;
    if (c588) {
      int c589 = 0;
      __retval585 = c589;
      int t590 = __retval585;
      return t590;
    }
    _Bool r591 = std____is_constant_evaluated();
    if (r591) {
        unsigned long __i592;
        unsigned long c593 = 0;
        __i592 = c593;
        while (1) {
          unsigned long t595 = __i592;
          unsigned long t596 = __n584;
          _Bool c597 = ((t595 < t596)) ? 1 : 0;
          if (!c597) break;
            unsigned long t598 = __i592;
            char* t599 = __s1582;
            char* ptr600 = &(t599)[t598];
            unsigned long t601 = __i592;
            char* t602 = __s2583;
            char* ptr603 = &(t602)[t601];
            _Bool r604 = std__char_traits_char___lt(ptr600, ptr603);
            if (r604) {
              int c605 = -1;
              __retval585 = c605;
              int t606 = __retval585;
              int ret_val607 = t606;
              return ret_val607;
            } else {
                unsigned long t608 = __i592;
                char* t609 = __s2583;
                char* ptr610 = &(t609)[t608];
                unsigned long t611 = __i592;
                char* t612 = __s1582;
                char* ptr613 = &(t612)[t611];
                _Bool r614 = std__char_traits_char___lt(ptr610, ptr613);
                if (r614) {
                  int c615 = 1;
                  __retval585 = c615;
                  int t616 = __retval585;
                  int ret_val617 = t616;
                  return ret_val617;
                }
            }
        for_step594: ;
          unsigned long t618 = __i592;
          unsigned long u619 = t618 + 1;
          __i592 = u619;
        }
      int c620 = 0;
      __retval585 = c620;
      int t621 = __retval585;
      return t621;
    }
  char* t622 = __s1582;
  void* cast623 = (void*)t622;
  char* t624 = __s2583;
  void* cast625 = (void*)t624;
  unsigned long t626 = __n584;
  int r627 = memcmp(cast623, cast625, t626);
  __retval585 = r627;
  int t628 = __retval585;
  return t628;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v629) {
bb630:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this631;
  char* __retval632;
  this631 = v629;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t633 = this631;
  char* r634 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t633);
  __retval632 = r634;
  char* t635 = __retval632;
  return t635;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v636, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v637) {
bb638:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs639;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs640;
  _Bool __retval641;
  __lhs639 = v636;
  __rhs640 = v637;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t642 = __lhs639;
  unsigned long r643 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t642);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t644 = __rhs640;
  unsigned long r645 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t644);
  _Bool c646 = ((r643 == r645)) ? 1 : 0;
  _Bool ternary647;
  if (c646) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t648 = __lhs639;
    char* r649 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t648);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = __rhs640;
    char* r651 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t650);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t652 = __lhs639;
    unsigned long r653 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t652);
    int r654 = std__char_traits_char___compare(r649, r651, r653);
    _Bool cast655 = (_Bool)r654;
    _Bool u656 = !cast655;
    ternary647 = (_Bool)u656;
  } else {
    _Bool c657 = 0;
    ternary647 = (_Bool)c657;
  }
  __retval641 = ternary647;
  _Bool t658 = __retval641;
  return t658;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v659) {
bb660:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this661;
  this661 = v659;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t662 = this661;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t662);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t662->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb663:
  int __retval664;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ S665;
  struct std__allocator_char_ ref_tmp0666;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ T667;
  int c668 = 0;
  __retval664 = c668;
  char* cast669 = (char*)&(_str);
  unsigned long c670 = 3;
  std__allocator_char___allocator_2(&ref_tmp0666);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&S665, cast669, c670, &ref_tmp0666);
  {
    std__allocator_char____allocator(&ref_tmp0666);
  }
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&T667);
      char* cast671 = (char*)&(_str_1);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r672 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&T667, cast671);
      _Bool r673 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&T667, &S665);
      if (r673) {
      } else {
        char* cast674 = (char*)&(_str_2);
        char* c675 = _str_3;
        unsigned int c676 = 17;
        char* cast677 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast674, c675, c676, cast677);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&T667);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&S665);
  }
  int t678 = __retval664;
  return t678;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v679) {
bb680:
  struct std____new_allocator_char_* this681;
  this681 = v679;
  struct std____new_allocator_char_* t682 = this681;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v683) {
bb684:
  char* __r685;
  char* __retval686;
  __r685 = v683;
  char* t687 = __r685;
  __retval686 = t687;
  char* t688 = __retval686;
  return t688;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v689) {
bb690:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this691;
  char* __retval692;
  this691 = v689;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t693 = this691;
  char* cast694 = (char*)&(t693->field2._M_local_buf);
  char* r695 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast694);
  __retval692 = r695;
  char* t696 = __retval692;
  return t696;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v697, char* v698, struct std__allocator_char_* v699) {
bb700:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this701;
  char* __dat702;
  struct std__allocator_char_* __a703;
  this701 = v697;
  __dat702 = v698;
  __a703 = v699;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t704 = this701;
  struct std__allocator_char_* base705 = (struct std__allocator_char_*)((char *)t704 + 0);
  struct std__allocator_char_* t706 = __a703;
  std__allocator_char___allocator(base705, t706);
    char* t707 = __dat702;
    t704->_M_p = t707;
  return;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v708, char* v709, struct std__random_access_iterator_tag v710) {
bb711:
  char* __first712;
  char* __last713;
  struct std__random_access_iterator_tag unnamed714;
  long __retval715;
  __first712 = v708;
  __last713 = v709;
  unnamed714 = v710;
  char* t716 = __last713;
  char* t717 = __first712;
  long diff718 = t716 - t717;
  __retval715 = diff718;
  long t719 = __retval715;
  return t719;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v720) {
bb721:
  char** unnamed722;
  struct std__random_access_iterator_tag __retval723;
  unnamed722 = v720;
  struct std__random_access_iterator_tag t724 = __retval723;
  return t724;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v725, char* v726) {
bb727:
  char* __first728;
  char* __last729;
  long __retval730;
  struct std__random_access_iterator_tag agg_tmp0731;
  __first728 = v725;
  __last729 = v726;
  char* t732 = __first728;
  char* t733 = __last729;
  struct std__random_access_iterator_tag r734 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first728);
  agg_tmp0731 = r734;
  struct std__random_access_iterator_tag t735 = agg_tmp0731;
  long r736 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t732, t733, t735);
  __retval730 = r736;
  long t737 = __retval730;
  return t737;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v738, char* v739) {
bb740:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this741;
  char* __p742;
  this741 = v738;
  __p742 = v739;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t743 = this741;
  char* t744 = __p742;
  t743->_M_dataplus._M_p = t744;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v745) {
bb746:
  struct std__allocator_char_* __a747;
  unsigned long __retval748;
  __a747 = v745;
  unsigned long c749 = -1;
  unsigned long c750 = 1;
  unsigned long b751 = c749 / c750;
  __retval748 = b751;
  unsigned long t752 = __retval748;
  return t752;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v753) {
bb754:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this755;
  struct std__allocator_char_* __retval756;
  this755 = v753;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t757 = this755;
  struct std__allocator_char_* base758 = (struct std__allocator_char_*)((char *)&(t757->_M_dataplus) + 0);
  __retval756 = base758;
  struct std__allocator_char_* t759 = __retval756;
  return t759;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v760, unsigned long* v761) {
bb762:
  unsigned long* __a763;
  unsigned long* __b764;
  unsigned long* __retval765;
  __a763 = v760;
  __b764 = v761;
    unsigned long* t766 = __b764;
    unsigned long t767 = *t766;
    unsigned long* t768 = __a763;
    unsigned long t769 = *t768;
    _Bool c770 = ((t767 < t769)) ? 1 : 0;
    if (c770) {
      unsigned long* t771 = __b764;
      __retval765 = t771;
      unsigned long* t772 = __retval765;
      return t772;
    }
  unsigned long* t773 = __a763;
  __retval765 = t773;
  unsigned long* t774 = __retval765;
  return t774;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v775) {
bb776:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this777;
  unsigned long __retval778;
  unsigned long __diffmax779;
  unsigned long __allocmax780;
  this777 = v775;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t781 = this777;
  unsigned long c782 = 9223372036854775807;
  __diffmax779 = c782;
  struct std__allocator_char_* r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t781);
  unsigned long r784 = std__allocator_traits_std__allocator_char_____max_size(r783);
  __allocmax780 = r784;
  unsigned long* r785 = unsigned_long_const__std__min_unsigned_long_(&__diffmax779, &__allocmax780);
  unsigned long t786 = *r785;
  unsigned long c787 = 1;
  unsigned long b788 = t786 - c787;
  __retval778 = b788;
  unsigned long t789 = __retval778;
  return t789;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb790:
  _Bool __retval791;
    _Bool c792 = 0;
    __retval791 = c792;
    _Bool t793 = __retval791;
    return t793;
  abort();
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v794) {
bb795:
  struct std____new_allocator_char_* this796;
  unsigned long __retval797;
  this796 = v794;
  struct std____new_allocator_char_* t798 = this796;
  unsigned long c799 = 9223372036854775807;
  unsigned long c800 = 1;
  unsigned long b801 = c799 / c800;
  __retval797 = b801;
  unsigned long t802 = __retval797;
  return t802;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v803, unsigned long v804, void* v805) {
bb806:
  struct std____new_allocator_char_* this807;
  unsigned long __n808;
  void* unnamed809;
  char* __retval810;
  this807 = v803;
  __n808 = v804;
  unnamed809 = v805;
  struct std____new_allocator_char_* t811 = this807;
    unsigned long t812 = __n808;
    unsigned long r813 = std____new_allocator_char____M_max_size___const(t811);
    _Bool c814 = ((t812 > r813)) ? 1 : 0;
    if (c814) {
        unsigned long t815 = __n808;
        unsigned long c816 = -1;
        unsigned long c817 = 1;
        unsigned long b818 = c816 / c817;
        _Bool c819 = ((t815 > b818)) ? 1 : 0;
        if (c819) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c820 = 1;
    unsigned long c821 = 16;
    _Bool c822 = ((c820 > c821)) ? 1 : 0;
    if (c822) {
      unsigned long __al823;
      unsigned long c824 = 1;
      __al823 = c824;
      unsigned long t825 = __n808;
      unsigned long c826 = 1;
      unsigned long b827 = t825 * c826;
      unsigned long t828 = __al823;
      void* r829 = operator_new_2(b827, t828);
      char* cast830 = (char*)r829;
      __retval810 = cast830;
      char* t831 = __retval810;
      return t831;
    }
  unsigned long t832 = __n808;
  unsigned long c833 = 1;
  unsigned long b834 = t832 * c833;
  void* r835 = operator_new(b834);
  char* cast836 = (char*)r835;
  __retval810 = cast836;
  char* t837 = __retval810;
  return t837;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v838, unsigned long v839) {
bb840:
  struct std__allocator_char_* this841;
  unsigned long __n842;
  char* __retval843;
  this841 = v838;
  __n842 = v839;
  struct std__allocator_char_* t844 = this841;
    _Bool r845 = std____is_constant_evaluated();
    if (r845) {
        unsigned long t846 = __n842;
        unsigned long c847 = 1;
        unsigned long ovr848;
        _Bool ovf849 = __builtin_mul_overflow(t846, c847, &ovr848);
        __n842 = ovr848;
        if (ovf849) {
          std____throw_bad_array_new_length();
        }
      unsigned long t850 = __n842;
      void* r851 = operator_new(t850);
      char* cast852 = (char*)r851;
      __retval843 = cast852;
      char* t853 = __retval843;
      return t853;
    }
  struct std____new_allocator_char_* base854 = (struct std____new_allocator_char_*)((char *)t844 + 0);
  unsigned long t855 = __n842;
  void* c856 = ((void*)0);
  char* r857 = std____new_allocator_char___allocate(base854, t855, c856);
  __retval843 = r857;
  char* t858 = __retval843;
  return t858;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v859, unsigned long v860) {
bb861:
  struct std__allocator_char_* __a862;
  unsigned long __n863;
  char* __retval864;
  __a862 = v859;
  __n863 = v860;
  struct std__allocator_char_* t865 = __a862;
  unsigned long t866 = __n863;
  char* r867 = std__allocator_char___allocate(t865, t866);
  __retval864 = r867;
  char* t868 = __retval864;
  return t868;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v869, unsigned long v870) {
bb871:
  struct std__allocator_char_* __a872;
  unsigned long __n873;
  char* __retval874;
  char* __p875;
  __a872 = v869;
  __n873 = v870;
  struct std__allocator_char_* t876 = __a872;
  unsigned long t877 = __n873;
  char* r878 = std__allocator_traits_std__allocator_char_____allocate(t876, t877);
  __p875 = r878;
  char* t879 = __p875;
  __retval874 = t879;
  char* t880 = __retval874;
  return t880;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v881) {
bb882:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this883;
  struct std__allocator_char_* __retval884;
  this883 = v881;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t885 = this883;
  struct std__allocator_char_* base886 = (struct std__allocator_char_*)((char *)&(t885->_M_dataplus) + 0);
  __retval884 = base886;
  struct std__allocator_char_* t887 = __retval884;
  return t887;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v888, unsigned long* v889, unsigned long v890) {
bb891:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this892;
  unsigned long* __capacity893;
  unsigned long __old_capacity894;
  char* __retval895;
  this892 = v888;
  __capacity893 = v889;
  __old_capacity894 = v890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t896 = this892;
    unsigned long* t897 = __capacity893;
    unsigned long t898 = *t897;
    unsigned long r899 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t896);
    _Bool c900 = ((t898 > r899)) ? 1 : 0;
    if (c900) {
      char* cast901 = (char*)&(_str_5);
      std____throw_length_error(cast901);
    }
    unsigned long* t902 = __capacity893;
    unsigned long t903 = *t902;
    unsigned long t904 = __old_capacity894;
    _Bool c905 = ((t903 > t904)) ? 1 : 0;
    _Bool ternary906;
    if (c905) {
      unsigned long* t907 = __capacity893;
      unsigned long t908 = *t907;
      unsigned long c909 = 2;
      unsigned long t910 = __old_capacity894;
      unsigned long b911 = c909 * t910;
      _Bool c912 = ((t908 < b911)) ? 1 : 0;
      ternary906 = (_Bool)c912;
    } else {
      _Bool c913 = 0;
      ternary906 = (_Bool)c913;
    }
    if (ternary906) {
      unsigned long c914 = 2;
      unsigned long t915 = __old_capacity894;
      unsigned long b916 = c914 * t915;
      unsigned long* t917 = __capacity893;
      *t917 = b916;
        unsigned long* t918 = __capacity893;
        unsigned long t919 = *t918;
        unsigned long r920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t896);
        _Bool c921 = ((t919 > r920)) ? 1 : 0;
        if (c921) {
          unsigned long r922 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t896);
          unsigned long* t923 = __capacity893;
          *t923 = r922;
        }
    }
  struct std__allocator_char_* r924 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t896);
  unsigned long* t925 = __capacity893;
  unsigned long t926 = *t925;
  unsigned long c927 = 1;
  unsigned long b928 = t926 + c927;
  char* r929 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r924, b928);
  __retval895 = r929;
  char* t930 = __retval895;
  return t930;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v931, unsigned long v932) {
bb933:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this934;
  unsigned long __capacity935;
  this934 = v931;
  __capacity935 = v932;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t936 = this934;
  unsigned long t937 = __capacity935;
  t936->field2._M_allocated_capacity = t937;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb938:
  _Bool __retval939;
    _Bool c940 = 0;
    __retval939 = c940;
    _Bool t941 = __retval939;
    return t941;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v942) {
bb943:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this944;
  this944 = v942;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t945 = this944;
    _Bool r946 = std__is_constant_evaluated();
    if (r946) {
        unsigned long __i947;
        unsigned long c948 = 0;
        __i947 = c948;
        while (1) {
          unsigned long t950 = __i947;
          unsigned long c951 = 15;
          _Bool c952 = ((t950 <= c951)) ? 1 : 0;
          if (!c952) break;
          char c953 = 0;
          unsigned long t954 = __i947;
          t945->field2._M_local_buf[t954] = c953;
        for_step949: ;
          unsigned long t955 = __i947;
          unsigned long u956 = t955 + 1;
          __i947 = u956;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v957, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v958) {
bb959:
  struct _Guard* this960;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s961;
  this960 = v957;
  __s961 = v958;
  struct _Guard* t962 = this960;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t963 = __s961;
  t962->_M_guarded = t963;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v964, char* v965) {
bb966:
  char* __location967;
  char* __args968;
  char* __retval969;
  void* __loc970;
  __location967 = v964;
  __args968 = v965;
  char* t971 = __location967;
  void* cast972 = (void*)t971;
  __loc970 = cast972;
    void* t973 = __loc970;
    char* cast974 = (char*)t973;
    char* t975 = __args968;
    char t976 = *t975;
    *cast974 = t976;
    __retval969 = cast974;
    char* t977 = __retval969;
    return t977;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v978, char* v979) {
bb980:
  char* __c1981;
  char* __c2982;
  __c1981 = v978;
  __c2982 = v979;
    _Bool r983 = std____is_constant_evaluated();
    if (r983) {
      char* t984 = __c1981;
      char* t985 = __c2982;
      char* r986 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t984, t985);
    } else {
      char* t987 = __c2982;
      char t988 = *t987;
      char* t989 = __c1981;
      *t989 = t988;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v990, char* v991, unsigned long v992) {
bb993:
  char* __s1994;
  char* __s2995;
  unsigned long __n996;
  char* __retval997;
  __s1994 = v990;
  __s2995 = v991;
  __n996 = v992;
    unsigned long t998 = __n996;
    unsigned long c999 = 0;
    _Bool c1000 = ((t998 == c999)) ? 1 : 0;
    if (c1000) {
      char* t1001 = __s1994;
      __retval997 = t1001;
      char* t1002 = __retval997;
      return t1002;
    }
    _Bool r1003 = std____is_constant_evaluated();
    if (r1003) {
        unsigned long __i1004;
        unsigned long c1005 = 0;
        __i1004 = c1005;
        while (1) {
          unsigned long t1007 = __i1004;
          unsigned long t1008 = __n996;
          _Bool c1009 = ((t1007 < t1008)) ? 1 : 0;
          if (!c1009) break;
          char* t1010 = __s1994;
          unsigned long t1011 = __i1004;
          char* ptr1012 = &(t1010)[t1011];
          unsigned long t1013 = __i1004;
          char* t1014 = __s2995;
          char* ptr1015 = &(t1014)[t1013];
          char* r1016 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1012, ptr1015);
        for_step1006: ;
          unsigned long t1017 = __i1004;
          unsigned long u1018 = t1017 + 1;
          __i1004 = u1018;
        }
      char* t1019 = __s1994;
      __retval997 = t1019;
      char* t1020 = __retval997;
      return t1020;
    }
  char* t1021 = __s1994;
  void* cast1022 = (void*)t1021;
  char* t1023 = __s2995;
  void* cast1024 = (void*)t1023;
  unsigned long t1025 = __n996;
  unsigned long c1026 = 1;
  unsigned long b1027 = t1025 * c1026;
  void* r1028 = memcpy(cast1022, cast1024, b1027);
  char* t1029 = __s1994;
  __retval997 = t1029;
  char* t1030 = __retval997;
  return t1030;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1031, char* v1032, unsigned long v1033) {
bb1034:
  char* __s11035;
  char* __s21036;
  unsigned long __n1037;
  char* __retval1038;
  __s11035 = v1031;
  __s21036 = v1032;
  __n1037 = v1033;
    unsigned long t1039 = __n1037;
    unsigned long c1040 = 0;
    _Bool c1041 = ((t1039 == c1040)) ? 1 : 0;
    if (c1041) {
      char* t1042 = __s11035;
      __retval1038 = t1042;
      char* t1043 = __retval1038;
      return t1043;
    }
    _Bool r1044 = std____is_constant_evaluated();
    if (r1044) {
      char* t1045 = __s11035;
      char* t1046 = __s21036;
      unsigned long t1047 = __n1037;
      char* r1048 = __gnu_cxx__char_traits_char___copy(t1045, t1046, t1047);
      __retval1038 = r1048;
      char* t1049 = __retval1038;
      return t1049;
    }
  char* t1050 = __s11035;
  void* cast1051 = (void*)t1050;
  char* t1052 = __s21036;
  void* cast1053 = (void*)t1052;
  unsigned long t1054 = __n1037;
  void* r1055 = memcpy(cast1051, cast1053, t1054);
  char* cast1056 = (char*)r1055;
  __retval1038 = cast1056;
  char* t1057 = __retval1038;
  return t1057;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1058, char* v1059, unsigned long v1060) {
bb1061:
  char* __d1062;
  char* __s1063;
  unsigned long __n1064;
  __d1062 = v1058;
  __s1063 = v1059;
  __n1064 = v1060;
    unsigned long t1065 = __n1064;
    unsigned long c1066 = 1;
    _Bool c1067 = ((t1065 == c1066)) ? 1 : 0;
    if (c1067) {
      char* t1068 = __d1062;
      char* t1069 = __s1063;
      std__char_traits_char___assign(t1068, t1069);
    } else {
      char* t1070 = __d1062;
      char* t1071 = __s1063;
      unsigned long t1072 = __n1064;
      char* r1073 = std__char_traits_char___copy(t1070, t1071, t1072);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1074) {
bb1075:
  char* __it1076;
  char* __retval1077;
  __it1076 = v1074;
  char* t1078 = __it1076;
  __retval1077 = t1078;
  char* t1079 = __retval1077;
  return t1079;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1080, char* v1081, char* v1082) {
bb1083:
  char* __p1084;
  char* __k11085;
  char* __k21086;
  __p1084 = v1080;
  __k11085 = v1081;
  __k21086 = v1082;
    char* t1087 = __p1084;
    char* t1088 = __k11085;
    char* r1089 = char_const__std____niter_base_char_const__(t1088);
    char* t1090 = __k21086;
    char* t1091 = __k11085;
    long diff1092 = t1090 - t1091;
    unsigned long cast1093 = (unsigned long)diff1092;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1087, r1089, cast1093);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1094) {
bb1095:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1096;
  char* __retval1097;
  this1096 = v1094;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1098 = this1096;
  char* t1099 = t1098->_M_dataplus._M_p;
  __retval1097 = t1099;
  char* t1100 = __retval1097;
  return t1100;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1101, unsigned long v1102) {
bb1103:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1104;
  unsigned long __length1105;
  this1104 = v1101;
  __length1105 = v1102;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1106 = this1104;
  unsigned long t1107 = __length1105;
  t1106->_M_string_length = t1107;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1108, unsigned long v1109) {
bb1110:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1111;
  unsigned long __n1112;
  char ref_tmp01113;
  this1111 = v1108;
  __n1112 = v1109;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1114 = this1111;
  unsigned long t1115 = __n1112;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1114, t1115);
  unsigned long t1116 = __n1112;
  char* r1117 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1114);
  char* ptr1118 = &(r1117)[t1116];
  char c1119 = 0;
  ref_tmp01113 = c1119;
  std__char_traits_char___assign(ptr1118, &ref_tmp01113);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1120) {
bb1121:
  struct _Guard* this1122;
  this1122 = v1120;
  struct _Guard* t1123 = this1122;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1124 = t1123->_M_guarded;
    _Bool cast1125 = (_Bool)t1124;
    if (cast1125) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1126 = t1123->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1126);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1127, char* v1128, char* v1129, struct std__forward_iterator_tag v1130) {
bb1131:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1132;
  char* __beg1133;
  char* __end1134;
  struct std__forward_iterator_tag unnamed1135;
  unsigned long __dnew1136;
  struct _Guard __guard1137;
  this1132 = v1127;
  __beg1133 = v1128;
  __end1134 = v1129;
  unnamed1135 = v1130;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1138 = this1132;
  char* t1139 = __beg1133;
  char* t1140 = __end1134;
  long r1141 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1139, t1140);
  unsigned long cast1142 = (unsigned long)r1141;
  __dnew1136 = cast1142;
    unsigned long t1143 = __dnew1136;
    unsigned long c1144 = 15;
    _Bool c1145 = ((t1143 > c1144)) ? 1 : 0;
    if (c1145) {
      unsigned long c1146 = 0;
      char* r1147 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1138, &__dnew1136, c1146);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1138, r1147);
      unsigned long t1148 = __dnew1136;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1138, t1148);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1138);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1137, t1138);
    char* r1149 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1138);
    char* t1150 = __beg1133;
    char* t1151 = __end1134;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1149, t1150, t1151);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1152 = ((void*)0);
    __guard1137._M_guarded = c1152;
    unsigned long t1153 = __dnew1136;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1138, t1153);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1137);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1154) {
bb1155:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1156;
  this1156 = v1154;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1157 = this1156;
  {
    struct std__allocator_char_* base1158 = (struct std__allocator_char_*)((char *)t1157 + 0);
    std__allocator_char____allocator(base1158);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1159, struct std____new_allocator_char_* v1160) {
bb1161:
  struct std____new_allocator_char_* this1162;
  struct std____new_allocator_char_* unnamed1163;
  this1162 = v1159;
  unnamed1163 = v1160;
  struct std____new_allocator_char_* t1164 = this1162;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1165, struct std__allocator_char_* v1166) {
bb1167:
  struct std__allocator_char_* this1168;
  struct std__allocator_char_* __a1169;
  this1168 = v1165;
  __a1169 = v1166;
  struct std__allocator_char_* t1170 = this1168;
  struct std____new_allocator_char_* base1171 = (struct std____new_allocator_char_*)((char *)t1170 + 0);
  struct std__allocator_char_* t1172 = __a1169;
  struct std____new_allocator_char_* base1173 = (struct std____new_allocator_char_*)((char *)t1172 + 0);
  std____new_allocator_char_____new_allocator(base1171, base1173);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1174) {
bb1175:
  char* __r1176;
  char* __retval1177;
  __r1176 = v1174;
  char* t1178 = __r1176;
  __retval1177 = t1178;
  char* t1179 = __retval1177;
  return t1179;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1180) {
bb1181:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1182;
  char* __retval1183;
  this1182 = v1180;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1184 = this1182;
  char* cast1185 = (char*)&(t1184->field2._M_local_buf);
  char* r1186 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1185);
  __retval1183 = r1186;
  char* t1187 = __retval1183;
  return t1187;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1188) {
bb1189:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1190;
  _Bool __retval1191;
  this1190 = v1188;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1192 = this1190;
    char* r1193 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1192);
    char* r1194 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1192);
    _Bool c1195 = ((r1193 == r1194)) ? 1 : 0;
    if (c1195) {
        unsigned long t1196 = t1192->_M_string_length;
        unsigned long c1197 = 15;
        _Bool c1198 = ((t1196 > c1197)) ? 1 : 0;
        if (c1198) {
          __builtin_unreachable();
        }
      _Bool c1199 = 1;
      __retval1191 = c1199;
      _Bool t1200 = __retval1191;
      return t1200;
    }
  _Bool c1201 = 0;
  __retval1191 = c1201;
  _Bool t1202 = __retval1191;
  return t1202;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1203, char* v1204, unsigned long v1205) {
bb1206:
  struct std____new_allocator_char_* this1207;
  char* __p1208;
  unsigned long __n1209;
  this1207 = v1203;
  __p1208 = v1204;
  __n1209 = v1205;
  struct std____new_allocator_char_* t1210 = this1207;
    unsigned long c1211 = 1;
    unsigned long c1212 = 16;
    _Bool c1213 = ((c1211 > c1212)) ? 1 : 0;
    if (c1213) {
      char* t1214 = __p1208;
      void* cast1215 = (void*)t1214;
      unsigned long t1216 = __n1209;
      unsigned long c1217 = 1;
      unsigned long b1218 = t1216 * c1217;
      unsigned long c1219 = 1;
      operator_delete_3(cast1215, b1218, c1219);
      return;
    }
  char* t1220 = __p1208;
  void* cast1221 = (void*)t1220;
  unsigned long t1222 = __n1209;
  unsigned long c1223 = 1;
  unsigned long b1224 = t1222 * c1223;
  operator_delete_2(cast1221, b1224);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1225, char* v1226, unsigned long v1227) {
bb1228:
  struct std__allocator_char_* this1229;
  char* __p1230;
  unsigned long __n1231;
  this1229 = v1225;
  __p1230 = v1226;
  __n1231 = v1227;
  struct std__allocator_char_* t1232 = this1229;
    _Bool r1233 = std____is_constant_evaluated();
    if (r1233) {
      char* t1234 = __p1230;
      void* cast1235 = (void*)t1234;
      operator_delete(cast1235);
      return;
    }
  struct std____new_allocator_char_* base1236 = (struct std____new_allocator_char_*)((char *)t1232 + 0);
  char* t1237 = __p1230;
  unsigned long t1238 = __n1231;
  std____new_allocator_char___deallocate(base1236, t1237, t1238);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1239, char* v1240, unsigned long v1241) {
bb1242:
  struct std__allocator_char_* __a1243;
  char* __p1244;
  unsigned long __n1245;
  __a1243 = v1239;
  __p1244 = v1240;
  __n1245 = v1241;
  struct std__allocator_char_* t1246 = __a1243;
  char* t1247 = __p1244;
  unsigned long t1248 = __n1245;
  std__allocator_char___deallocate(t1246, t1247, t1248);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1249, unsigned long v1250) {
bb1251:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1252;
  unsigned long __size1253;
  this1252 = v1249;
  __size1253 = v1250;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1254 = this1252;
  struct std__allocator_char_* r1255 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1254);
  char* r1256 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1254);
  unsigned long t1257 = __size1253;
  unsigned long c1258 = 1;
  unsigned long b1259 = t1257 + c1258;
  std__allocator_traits_std__allocator_char_____deallocate(r1255, r1256, b1259);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1260) {
bb1261:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1262;
  this1262 = v1260;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1263 = this1262;
    _Bool r1264 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1263);
    _Bool u1265 = !r1264;
    if (u1265) {
      unsigned long t1266 = t1263->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1263, t1266);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1267, char* v1268, struct std__allocator_char_* v1269) {
bb1270:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1271;
  char* __dat1272;
  struct std__allocator_char_* __a1273;
  this1271 = v1267;
  __dat1272 = v1268;
  __a1273 = v1269;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1274 = this1271;
  struct std__allocator_char_* base1275 = (struct std__allocator_char_*)((char *)t1274 + 0);
  struct std__allocator_char_* t1276 = __a1273;
  std__allocator_char___allocator(base1275, t1276);
    char* t1277 = __dat1272;
    t1274->_M_p = t1277;
  return;
}

