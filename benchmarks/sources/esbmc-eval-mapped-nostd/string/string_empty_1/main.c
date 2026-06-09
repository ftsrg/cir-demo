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
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[13] = "str1.empty()";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_empty_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_2[24] = "basic_string::_M_create";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____empty___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v7) {
bb8:
  char* __r9;
  char* __retval10;
  __r9 = v7;
  char* t11 = __r9;
  __retval10 = t11;
  char* t12 = __retval10;
  return t12;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v13) {
bb14:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this15;
  char* __retval16;
  this15 = v13;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t17 = this15;
  char* cast18 = (char*)&(t17->field2._M_local_buf);
  char* r19 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast18);
  __retval16 = r19;
  char* t20 = __retval16;
  return t20;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v21) {
bb22:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this23;
  _Bool __retval24;
  this23 = v21;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t25 = this23;
    char* r26 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t25);
    char* r27 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t25);
    _Bool c28 = ((r26 == r27)) ? 1 : 0;
    if (c28) {
        unsigned long t29 = t25->_M_string_length;
        unsigned long c30 = 15;
        _Bool c31 = ((t29 > c30)) ? 1 : 0;
        if (c31) {
          __builtin_unreachable();
        }
      _Bool c32 = 1;
      __retval24 = c32;
      _Bool t33 = __retval24;
      return t33;
    }
  _Bool c34 = 0;
  __retval24 = c34;
  _Bool t35 = __retval24;
  return t35;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb36:
  _Bool __retval37;
  _Bool t38 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval37 = t38;
  _Bool t39 = __retval37;
  return t39;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v40, char* v41, unsigned long v42) {
bb43:
  struct std____new_allocator_char_* this44;
  char* __p45;
  unsigned long __n46;
  this44 = v40;
  __p45 = v41;
  __n46 = v42;
  struct std____new_allocator_char_* t47 = this44;
    unsigned long c48 = 1;
    unsigned long c49 = 16;
    _Bool c50 = ((c48 > c49)) ? 1 : 0;
    if (c50) {
      char* t51 = __p45;
      void* cast52 = (void*)t51;
      unsigned long t53 = __n46;
      unsigned long c54 = 1;
      unsigned long b55 = t53 * c54;
      unsigned long c56 = 1;
      operator_delete_3(cast52, b55, c56);
      return;
    }
  char* t57 = __p45;
  void* cast58 = (void*)t57;
  unsigned long t59 = __n46;
  unsigned long c60 = 1;
  unsigned long b61 = t59 * c60;
  operator_delete_2(cast58, b61);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v62, char* v63, unsigned long v64) {
bb65:
  struct std__allocator_char_* this66;
  char* __p67;
  unsigned long __n68;
  this66 = v62;
  __p67 = v63;
  __n68 = v64;
  struct std__allocator_char_* t69 = this66;
    _Bool r70 = std____is_constant_evaluated();
    if (r70) {
      char* t71 = __p67;
      void* cast72 = (void*)t71;
      operator_delete(cast72);
      return;
    }
  struct std____new_allocator_char_* base73 = (struct std____new_allocator_char_*)((char *)t69 + 0);
  char* t74 = __p67;
  unsigned long t75 = __n68;
  std____new_allocator_char___deallocate(base73, t74, t75);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v76, char* v77, unsigned long v78) {
bb79:
  struct std__allocator_char_* __a80;
  char* __p81;
  unsigned long __n82;
  __a80 = v76;
  __p81 = v77;
  __n82 = v78;
  struct std__allocator_char_* t83 = __a80;
  char* t84 = __p81;
  unsigned long t85 = __n82;
  std__allocator_char___deallocate(t83, t84, t85);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v86, unsigned long v87) {
bb88:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this89;
  unsigned long __size90;
  this89 = v86;
  __size90 = v87;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t91 = this89;
  struct std__allocator_char_* r92 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t91);
  char* r93 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t91);
  unsigned long t94 = __size90;
  unsigned long c95 = 1;
  unsigned long b96 = t94 + c95;
  std__allocator_traits_std__allocator_char_____deallocate(r92, r93, b96);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v97, char* v98) {
bb99:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this100;
  char* __p101;
  this100 = v97;
  __p101 = v98;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t102 = this100;
  char* t103 = __p101;
  t102->_M_dataplus._M_p = t103;
  return;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v104, struct std____new_allocator_char_* v105) {
bb106:
  struct std____new_allocator_char_* this107;
  struct std____new_allocator_char_* unnamed108;
  struct std____new_allocator_char_* __retval109;
  this107 = v104;
  unnamed108 = v105;
  struct std____new_allocator_char_* t110 = this107;
  __retval109 = t110;
  struct std____new_allocator_char_* t111 = __retval109;
  return t111;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v112, struct std__allocator_char_* v113) {
bb114:
  struct std__allocator_char_* this115;
  struct std__allocator_char_* unnamed116;
  struct std__allocator_char_* __retval117;
  this115 = v112;
  unnamed116 = v113;
  struct std__allocator_char_* t118 = this115;
  struct std____new_allocator_char_* base119 = (struct std____new_allocator_char_*)((char *)t118 + 0);
  struct std__allocator_char_* t120 = unnamed116;
  struct std____new_allocator_char_* base121 = (struct std____new_allocator_char_*)((char *)t120 + 0);
  struct std____new_allocator_char_* r122 = std____new_allocator_char___operator_(base119, base121);
  __retval117 = t118;
  struct std__allocator_char_* t123 = __retval117;
  return t123;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v124, struct std__allocator_char_* v125) {
bb126:
  struct std__allocator_char_* __one127;
  struct std__allocator_char_* __two128;
  __one127 = v124;
  __two128 = v125;
    struct std__allocator_char_* t129 = __two128;
    struct std__allocator_char_* t130 = __one127;
    struct std__allocator_char_* r131 = std__allocator_char___operator_(t130, t129);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v132) {
bb133:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this134;
  struct std__allocator_char_* __retval135;
  this134 = v132;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t136 = this134;
  struct std__allocator_char_* base137 = (struct std__allocator_char_*)((char *)&(t136->_M_dataplus) + 0);
  __retval135 = base137;
  struct std__allocator_char_* t138 = __retval135;
  return t138;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v139) {
bb140:
  struct std__allocator_char_* __a141;
  unsigned long __retval142;
  __a141 = v139;
  unsigned long c143 = -1;
  unsigned long c144 = 1;
  unsigned long b145 = c143 / c144;
  __retval142 = b145;
  unsigned long t146 = __retval142;
  return t146;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v147) {
bb148:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this149;
  struct std__allocator_char_* __retval150;
  this149 = v147;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t151 = this149;
  struct std__allocator_char_* base152 = (struct std__allocator_char_*)((char *)&(t151->_M_dataplus) + 0);
  __retval150 = base152;
  struct std__allocator_char_* t153 = __retval150;
  return t153;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v154, unsigned long* v155) {
bb156:
  unsigned long* __a157;
  unsigned long* __b158;
  unsigned long* __retval159;
  __a157 = v154;
  __b158 = v155;
    unsigned long* t160 = __b158;
    unsigned long t161 = *t160;
    unsigned long* t162 = __a157;
    unsigned long t163 = *t162;
    _Bool c164 = ((t161 < t163)) ? 1 : 0;
    if (c164) {
      unsigned long* t165 = __b158;
      __retval159 = t165;
      unsigned long* t166 = __retval159;
      return t166;
    }
  unsigned long* t167 = __a157;
  __retval159 = t167;
  unsigned long* t168 = __retval159;
  return t168;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v169) {
bb170:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this171;
  unsigned long __retval172;
  unsigned long __diffmax173;
  unsigned long __allocmax174;
  this171 = v169;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t175 = this171;
  unsigned long c176 = 9223372036854775807;
  __diffmax173 = c176;
  struct std__allocator_char_* r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t175);
  unsigned long r178 = std__allocator_traits_std__allocator_char_____max_size(r177);
  __allocmax174 = r178;
  unsigned long* r179 = unsigned_long_const__std__min_unsigned_long_(&__diffmax173, &__allocmax174);
  unsigned long t180 = *r179;
  unsigned long c181 = 1;
  unsigned long b182 = t180 - c181;
  __retval172 = b182;
  unsigned long t183 = __retval172;
  return t183;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v184) {
bb185:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this186;
  unsigned long __retval187;
  unsigned long __sz188;
  this186 = v184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = this186;
  unsigned long t190 = t189->_M_string_length;
  __sz188 = t190;
    unsigned long t191 = __sz188;
    unsigned long r192 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t189);
    _Bool c193 = ((t191 > r192)) ? 1 : 0;
    if (c193) {
      __builtin_unreachable();
    }
  unsigned long t194 = __sz188;
  __retval187 = t194;
  unsigned long t195 = __retval187;
  return t195;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v196, char* v197, unsigned long v198) {
bb199:
  char* __s1200;
  char* __s2201;
  unsigned long __n202;
  char* __retval203;
  __s1200 = v196;
  __s2201 = v197;
  __n202 = v198;
    unsigned long t204 = __n202;
    unsigned long c205 = 0;
    _Bool c206 = ((t204 == c205)) ? 1 : 0;
    if (c206) {
      char* t207 = __s1200;
      __retval203 = t207;
      char* t208 = __retval203;
      return t208;
    }
    _Bool r209 = std____is_constant_evaluated();
    if (r209) {
        unsigned long __i210;
        unsigned long c211 = 0;
        __i210 = c211;
        while (1) {
          unsigned long t213 = __i210;
          unsigned long t214 = __n202;
          _Bool c215 = ((t213 < t214)) ? 1 : 0;
          if (!c215) break;
          char* t216 = __s1200;
          unsigned long t217 = __i210;
          char* ptr218 = &(t216)[t217];
          unsigned long t219 = __i210;
          char* t220 = __s2201;
          char* ptr221 = &(t220)[t219];
          char* r222 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr218, ptr221);
        for_step212: ;
          unsigned long t223 = __i210;
          unsigned long u224 = t223 + 1;
          __i210 = u224;
        }
      char* t225 = __s1200;
      __retval203 = t225;
      char* t226 = __retval203;
      return t226;
    }
  char* t227 = __s1200;
  void* cast228 = (void*)t227;
  char* t229 = __s2201;
  void* cast230 = (void*)t229;
  unsigned long t231 = __n202;
  unsigned long c232 = 1;
  unsigned long b233 = t231 * c232;
  void* r234 = memcpy(cast228, cast230, b233);
  char* t235 = __s1200;
  __retval203 = t235;
  char* t236 = __retval203;
  return t236;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v237, char* v238, unsigned long v239) {
bb240:
  char* __s1241;
  char* __s2242;
  unsigned long __n243;
  char* __retval244;
  __s1241 = v237;
  __s2242 = v238;
  __n243 = v239;
    unsigned long t245 = __n243;
    unsigned long c246 = 0;
    _Bool c247 = ((t245 == c246)) ? 1 : 0;
    if (c247) {
      char* t248 = __s1241;
      __retval244 = t248;
      char* t249 = __retval244;
      return t249;
    }
    _Bool r250 = std____is_constant_evaluated();
    if (r250) {
      char* t251 = __s1241;
      char* t252 = __s2242;
      unsigned long t253 = __n243;
      char* r254 = __gnu_cxx__char_traits_char___copy(t251, t252, t253);
      __retval244 = r254;
      char* t255 = __retval244;
      return t255;
    }
  char* t256 = __s1241;
  void* cast257 = (void*)t256;
  char* t258 = __s2242;
  void* cast259 = (void*)t258;
  unsigned long t260 = __n243;
  void* r261 = memcpy(cast257, cast259, t260);
  char* cast262 = (char*)r261;
  __retval244 = cast262;
  char* t263 = __retval244;
  return t263;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v264, char* v265, unsigned long v266) {
bb267:
  char* __d268;
  char* __s269;
  unsigned long __n270;
  __d268 = v264;
  __s269 = v265;
  __n270 = v266;
    unsigned long t271 = __n270;
    unsigned long c272 = 1;
    _Bool c273 = ((t271 == c272)) ? 1 : 0;
    if (c273) {
      char* t274 = __d268;
      char* t275 = __s269;
      std__char_traits_char___assign(t274, t275);
    } else {
      char* t276 = __d268;
      char* t277 = __s269;
      unsigned long t278 = __n270;
      char* r279 = std__char_traits_char___copy(t276, t277, t278);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v280) {
bb281:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this282;
  unsigned long __retval283;
  this282 = v280;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t284 = this282;
  unsigned long r285 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t284);
  __retval283 = r285;
  unsigned long t286 = __retval283;
  return t286;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v287, unsigned long v288) {
bb289:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this290;
  unsigned long __capacity291;
  this290 = v287;
  __capacity291 = v288;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t292 = this290;
  unsigned long t293 = __capacity291;
  t292->field2._M_allocated_capacity = t293;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v294) {
bb295:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this296;
  char* __retval297;
  this296 = v294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t298 = this296;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t298);
  char* r299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t298);
  __retval297 = r299;
  char* t300 = __retval297;
  return t300;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v301) {
bb302:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this303;
  unsigned long __retval304;
  unsigned long __sz305;
  this303 = v301;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t306 = this303;
  _Bool r307 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t306);
  unsigned long ternary308;
  if (r307) {
    unsigned long c309 = 15;
    ternary308 = (unsigned long)c309;
  } else {
    unsigned long t310 = t306->field2._M_allocated_capacity;
    ternary308 = (unsigned long)t310;
  }
  __sz305 = ternary308;
    unsigned long t311 = __sz305;
    unsigned long c312 = 15;
    _Bool c313 = ((t311 < c312)) ? 1 : 0;
    _Bool ternary314;
    if (c313) {
      _Bool c315 = 1;
      ternary314 = (_Bool)c315;
    } else {
      unsigned long t316 = __sz305;
      unsigned long r317 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t306);
      _Bool c318 = ((t316 > r317)) ? 1 : 0;
      ternary314 = (_Bool)c318;
    }
    if (ternary314) {
      __builtin_unreachable();
    }
  unsigned long t319 = __sz305;
  __retval304 = t319;
  unsigned long t320 = __retval304;
  return t320;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v321) {
bb322:
  struct std____new_allocator_char_* this323;
  unsigned long __retval324;
  this323 = v321;
  struct std____new_allocator_char_* t325 = this323;
  unsigned long c326 = 9223372036854775807;
  unsigned long c327 = 1;
  unsigned long b328 = c326 / c327;
  __retval324 = b328;
  unsigned long t329 = __retval324;
  return t329;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v330, unsigned long v331, void* v332) {
bb333:
  struct std____new_allocator_char_* this334;
  unsigned long __n335;
  void* unnamed336;
  char* __retval337;
  this334 = v330;
  __n335 = v331;
  unnamed336 = v332;
  struct std____new_allocator_char_* t338 = this334;
    unsigned long t339 = __n335;
    unsigned long r340 = std____new_allocator_char____M_max_size___const(t338);
    _Bool c341 = ((t339 > r340)) ? 1 : 0;
    if (c341) {
        unsigned long t342 = __n335;
        unsigned long c343 = -1;
        unsigned long c344 = 1;
        unsigned long b345 = c343 / c344;
        _Bool c346 = ((t342 > b345)) ? 1 : 0;
        if (c346) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c347 = 1;
    unsigned long c348 = 16;
    _Bool c349 = ((c347 > c348)) ? 1 : 0;
    if (c349) {
      unsigned long __al350;
      unsigned long c351 = 1;
      __al350 = c351;
      unsigned long t352 = __n335;
      unsigned long c353 = 1;
      unsigned long b354 = t352 * c353;
      unsigned long t355 = __al350;
      void* r356 = operator_new_2(b354, t355);
      char* cast357 = (char*)r356;
      __retval337 = cast357;
      char* t358 = __retval337;
      return t358;
    }
  unsigned long t359 = __n335;
  unsigned long c360 = 1;
  unsigned long b361 = t359 * c360;
  void* r362 = operator_new(b361);
  char* cast363 = (char*)r362;
  __retval337 = cast363;
  char* t364 = __retval337;
  return t364;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v365, unsigned long v366) {
bb367:
  struct std__allocator_char_* this368;
  unsigned long __n369;
  char* __retval370;
  this368 = v365;
  __n369 = v366;
  struct std__allocator_char_* t371 = this368;
    _Bool r372 = std____is_constant_evaluated();
    if (r372) {
        unsigned long t373 = __n369;
        unsigned long c374 = 1;
        unsigned long ovr375;
        _Bool ovf376 = __builtin_mul_overflow(t373, c374, &ovr375);
        __n369 = ovr375;
        if (ovf376) {
          std____throw_bad_array_new_length();
        }
      unsigned long t377 = __n369;
      void* r378 = operator_new(t377);
      char* cast379 = (char*)r378;
      __retval370 = cast379;
      char* t380 = __retval370;
      return t380;
    }
  struct std____new_allocator_char_* base381 = (struct std____new_allocator_char_*)((char *)t371 + 0);
  unsigned long t382 = __n369;
  void* c383 = ((void*)0);
  char* r384 = std____new_allocator_char___allocate(base381, t382, c383);
  __retval370 = r384;
  char* t385 = __retval370;
  return t385;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v386, unsigned long v387) {
bb388:
  struct std__allocator_char_* __a389;
  unsigned long __n390;
  char* __retval391;
  __a389 = v386;
  __n390 = v387;
  struct std__allocator_char_* t392 = __a389;
  unsigned long t393 = __n390;
  char* r394 = std__allocator_char___allocate(t392, t393);
  __retval391 = r394;
  char* t395 = __retval391;
  return t395;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v396, unsigned long v397) {
bb398:
  struct std__allocator_char_* __a399;
  unsigned long __n400;
  char* __retval401;
  char* __p402;
  __a399 = v396;
  __n400 = v397;
  struct std__allocator_char_* t403 = __a399;
  unsigned long t404 = __n400;
  char* r405 = std__allocator_traits_std__allocator_char_____allocate(t403, t404);
  __p402 = r405;
  char* t406 = __p402;
  __retval401 = t406;
  char* t407 = __retval401;
  return t407;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v408, unsigned long* v409, unsigned long v410) {
bb411:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this412;
  unsigned long* __capacity413;
  unsigned long __old_capacity414;
  char* __retval415;
  this412 = v408;
  __capacity413 = v409;
  __old_capacity414 = v410;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t416 = this412;
    unsigned long* t417 = __capacity413;
    unsigned long t418 = *t417;
    unsigned long r419 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t416);
    _Bool c420 = ((t418 > r419)) ? 1 : 0;
    if (c420) {
      char* cast421 = (char*)&(_str_2);
      std____throw_length_error(cast421);
    }
    unsigned long* t422 = __capacity413;
    unsigned long t423 = *t422;
    unsigned long t424 = __old_capacity414;
    _Bool c425 = ((t423 > t424)) ? 1 : 0;
    _Bool ternary426;
    if (c425) {
      unsigned long* t427 = __capacity413;
      unsigned long t428 = *t427;
      unsigned long c429 = 2;
      unsigned long t430 = __old_capacity414;
      unsigned long b431 = c429 * t430;
      _Bool c432 = ((t428 < b431)) ? 1 : 0;
      ternary426 = (_Bool)c432;
    } else {
      _Bool c433 = 0;
      ternary426 = (_Bool)c433;
    }
    if (ternary426) {
      unsigned long c434 = 2;
      unsigned long t435 = __old_capacity414;
      unsigned long b436 = c434 * t435;
      unsigned long* t437 = __capacity413;
      *t437 = b436;
        unsigned long* t438 = __capacity413;
        unsigned long t439 = *t438;
        unsigned long r440 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t416);
        _Bool c441 = ((t439 > r440)) ? 1 : 0;
        if (c441) {
          unsigned long r442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t416);
          unsigned long* t443 = __capacity413;
          *t443 = r442;
        }
    }
  struct std__allocator_char_* r444 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t416);
  unsigned long* t445 = __capacity413;
  unsigned long t446 = *t445;
  unsigned long c447 = 1;
  unsigned long b448 = t446 + c447;
  char* r449 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r444, b448);
  __retval415 = r449;
  char* t450 = __retval415;
  return t450;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v451) {
bb452:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this453;
  this453 = v451;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t454 = this453;
    _Bool r455 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t454);
    _Bool u456 = !r455;
    if (u456) {
      unsigned long t457 = t454->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t454, t457);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v458, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v459) {
bb460:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this461;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str462;
  this461 = v458;
  __str462 = v459;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t463 = this461;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t464 = __str462;
    _Bool c465 = ((t463 != t464)) ? 1 : 0;
    if (c465) {
      unsigned long __rsize466;
      unsigned long __capacity467;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t468 = __str462;
      unsigned long r469 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t468);
      __rsize466 = r469;
      unsigned long r470 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t463);
      __capacity467 = r470;
        unsigned long t471 = __rsize466;
        unsigned long t472 = __capacity467;
        _Bool c473 = ((t471 > t472)) ? 1 : 0;
        if (c473) {
          unsigned long __new_capacity474;
          char* __tmp475;
          unsigned long t476 = __rsize466;
          __new_capacity474 = t476;
          unsigned long t477 = __capacity467;
          char* r478 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t463, &__new_capacity474, t477);
          __tmp475 = r478;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t463);
          char* t479 = __tmp475;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t463, t479);
          unsigned long t480 = __new_capacity474;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t463, t480);
        }
        unsigned long t481 = __rsize466;
        _Bool cast482 = (_Bool)t481;
        if (cast482) {
          char* r483 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t463);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t484 = __str462;
          char* r485 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t484);
          unsigned long t486 = __rsize466;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r483, r485, t486);
        }
      unsigned long t487 = __rsize466;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t463, t487);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v488) {
bb489:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this490;
  this490 = v488;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t491 = this490;
  unsigned long c492 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t491, c492);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v493, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v494) {
bb495:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this496;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str497;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval498;
  _Bool __equal_allocs499;
  this496 = v493;
  __str497 = v494;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t500 = this496;
  _Bool c501 = 1;
  __equal_allocs499 = c501;
    _Bool r502 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t500);
    _Bool u503 = !r502;
    _Bool ternary504;
    if (u503) {
      _Bool r505 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary504 = (_Bool)r505;
    } else {
      _Bool c506 = 0;
      ternary504 = (_Bool)c506;
    }
    _Bool ternary507;
    if (ternary504) {
      _Bool t508 = __equal_allocs499;
      _Bool u509 = !t508;
      ternary507 = (_Bool)u509;
    } else {
      _Bool c510 = 0;
      ternary507 = (_Bool)c510;
    }
    if (ternary507) {
      unsigned long t511 = t500->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t500, t511);
      char* r512 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t500);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t500, r512);
      unsigned long c513 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t500, c513);
    }
  struct std__allocator_char_* r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t500);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t515 = __str497;
  struct std__allocator_char_* r516 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t515);
  void_std____alloc_on_move_std__allocator_char___(r514, r516);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t517 = __str497;
    _Bool r518 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t517);
    if (r518) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t519 = __str497;
        _Bool c520 = ((t519 != t500)) ? 1 : 0;
        if (c520) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t521 = __str497;
            unsigned long r522 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t521);
            _Bool cast523 = (_Bool)r522;
            if (cast523) {
              char* r524 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t500);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t525 = __str497;
              char* r526 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t525);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t527 = __str497;
              unsigned long r528 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t527);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r524, r526, r528);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t529 = __str497;
          unsigned long r530 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t529);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t500, r530);
        }
    } else {
        _Bool r531 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary532;
        if (r531) {
          _Bool c533 = 1;
          ternary532 = (_Bool)c533;
        } else {
          _Bool t534 = __equal_allocs499;
          ternary532 = (_Bool)t534;
        }
        if (ternary532) {
          char* __data535;
          unsigned long __capacity536;
          char* c537 = ((void*)0);
          __data535 = c537;
            _Bool r538 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t500);
            _Bool u539 = !r538;
            if (u539) {
                _Bool t540 = __equal_allocs499;
                if (t540) {
                  char* r541 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t500);
                  __data535 = r541;
                  unsigned long t542 = t500->field2._M_allocated_capacity;
                  __capacity536 = t542;
                } else {
                  unsigned long t543 = t500->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t500, t543);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t544 = __str497;
          char* r545 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t544);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t500, r545);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t546 = __str497;
          unsigned long r547 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t546);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t500, r547);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t548 = __str497;
          unsigned long t549 = t548->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t500, t549);
            char* t550 = __data535;
            _Bool cast551 = (_Bool)t550;
            if (cast551) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t552 = __str497;
              char* t553 = __data535;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t552, t553);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t554 = __str497;
              unsigned long t555 = __capacity536;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t554, t555);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t556 = __str497;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t557 = __str497;
              char* r558 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t557);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t556, r558);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t559 = __str497;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t500, t559);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t560 = __str497;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t560);
  __retval498 = t500;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t561 = __retval498;
  return t561;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v562) {
bb563:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this564;
  this564 = v562;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t565 = this564;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t565);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t565->_M_dataplus);
  }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5emptyEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____empty___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v566) {
bb567:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this568;
  _Bool __retval569;
  this568 = v566;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t570 = this568;
  unsigned long t571 = t570->_M_string_length;
  unsigned long c572 = 0;
  _Bool c573 = ((t571 == c572)) ? 1 : 0;
  __retval569 = c573;
  _Bool t574 = __retval569;
  return t574;
}

// function: main
int main() {
bb575:
  int __retval576;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1577;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0578;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup579;
  int c580 = 0;
  __retval576 = c580;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str1577);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&ref_tmp0578);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r581 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str1577, &ref_tmp0578);
      tmp_exprcleanup579 = r581;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0578);
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t582 = tmp_exprcleanup579;
    _Bool r583 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____empty___const(&str1577);
    if (r583) {
    } else {
      char* cast584 = (char*)&(_str);
      char* c585 = _str_1;
      unsigned int c586 = 15;
      char* cast587 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast584, c585, c586, cast587);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1577);
  }
  int t588 = __retval576;
  return t588;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v589) {
bb590:
  char* __r591;
  char* __retval592;
  __r591 = v589;
  char* t593 = __r591;
  __retval592 = t593;
  char* t594 = __retval592;
  return t594;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v595) {
bb596:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this597;
  char* __retval598;
  this597 = v595;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t599 = this597;
  char* cast600 = (char*)&(t599->field2._M_local_buf);
  char* r601 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast600);
  __retval598 = r601;
  char* t602 = __retval598;
  return t602;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v603) {
bb604:
  struct std__allocator_char_* this605;
  this605 = v603;
  struct std__allocator_char_* t606 = this605;
  struct std____new_allocator_char_* base607 = (struct std____new_allocator_char_*)((char *)t606 + 0);
  std____new_allocator_char_____new_allocator_2(base607);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v608, char* v609, struct std__allocator_char_* v610) {
bb611:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this612;
  char* __dat613;
  struct std__allocator_char_* __a614;
  this612 = v608;
  __dat613 = v609;
  __a614 = v610;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t615 = this612;
  struct std__allocator_char_* base616 = (struct std__allocator_char_*)((char *)t615 + 0);
  struct std__allocator_char_* t617 = __a614;
  std__allocator_char___allocator(base616, t617);
    char* t618 = __dat613;
    t615->_M_p = t618;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v619) {
bb620:
  struct std__allocator_char_* this621;
  this621 = v619;
  struct std__allocator_char_* t622 = this621;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb623:
  _Bool __retval624;
    _Bool c625 = 0;
    __retval624 = c625;
    _Bool t626 = __retval624;
    return t626;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v627) {
bb628:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this629;
  this629 = v627;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t630 = this629;
    _Bool r631 = std__is_constant_evaluated();
    if (r631) {
        unsigned long __i632;
        unsigned long c633 = 0;
        __i632 = c633;
        while (1) {
          unsigned long t635 = __i632;
          unsigned long c636 = 15;
          _Bool c637 = ((t635 <= c636)) ? 1 : 0;
          if (!c637) break;
          char c638 = 0;
          unsigned long t639 = __i632;
          t630->field2._M_local_buf[t639] = c638;
        for_step634: ;
          unsigned long t640 = __i632;
          unsigned long u641 = t640 + 1;
          __i632 = u641;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v642, unsigned long v643) {
bb644:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this645;
  unsigned long __length646;
  this645 = v642;
  __length646 = v643;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t647 = this645;
  unsigned long t648 = __length646;
  t647->_M_string_length = t648;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb649:
  _Bool __retval650;
    _Bool c651 = 0;
    __retval650 = c651;
    _Bool t652 = __retval650;
    return t652;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v653, char* v654) {
bb655:
  char* __location656;
  char* __args657;
  char* __retval658;
  void* __loc659;
  __location656 = v653;
  __args657 = v654;
  char* t660 = __location656;
  void* cast661 = (void*)t660;
  __loc659 = cast661;
    void* t662 = __loc659;
    char* cast663 = (char*)t662;
    char* t664 = __args657;
    char t665 = *t664;
    *cast663 = t665;
    __retval658 = cast663;
    char* t666 = __retval658;
    return t666;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v667, char* v668) {
bb669:
  char* __c1670;
  char* __c2671;
  __c1670 = v667;
  __c2671 = v668;
    _Bool r672 = std____is_constant_evaluated();
    if (r672) {
      char* t673 = __c1670;
      char* t674 = __c2671;
      char* r675 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t673, t674);
    } else {
      char* t676 = __c2671;
      char t677 = *t676;
      char* t678 = __c1670;
      *t678 = t677;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v679) {
bb680:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this681;
  char* __retval682;
  this681 = v679;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t683 = this681;
  char* t684 = t683->_M_dataplus._M_p;
  __retval682 = t684;
  char* t685 = __retval682;
  return t685;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v686, unsigned long v687) {
bb688:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this689;
  unsigned long __n690;
  char ref_tmp0691;
  this689 = v686;
  __n690 = v687;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t692 = this689;
  unsigned long t693 = __n690;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t692, t693);
  unsigned long t694 = __n690;
  char* r695 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t692);
  char* ptr696 = &(r695)[t694];
  char c697 = 0;
  ref_tmp0691 = c697;
  std__char_traits_char___assign(ptr696, &ref_tmp0691);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v698) {
bb699:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this700;
  this700 = v698;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t701 = this700;
  {
    struct std__allocator_char_* base702 = (struct std__allocator_char_*)((char *)t701 + 0);
    std__allocator_char____allocator(base702);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v703) {
bb704:
  struct std____new_allocator_char_* this705;
  this705 = v703;
  struct std____new_allocator_char_* t706 = this705;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v707, struct std____new_allocator_char_* v708) {
bb709:
  struct std____new_allocator_char_* this710;
  struct std____new_allocator_char_* unnamed711;
  this710 = v707;
  unnamed711 = v708;
  struct std____new_allocator_char_* t712 = this710;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v713, struct std__allocator_char_* v714) {
bb715:
  struct std__allocator_char_* this716;
  struct std__allocator_char_* __a717;
  this716 = v713;
  __a717 = v714;
  struct std__allocator_char_* t718 = this716;
  struct std____new_allocator_char_* base719 = (struct std____new_allocator_char_*)((char *)t718 + 0);
  struct std__allocator_char_* t720 = __a717;
  struct std____new_allocator_char_* base721 = (struct std____new_allocator_char_*)((char *)t720 + 0);
  std____new_allocator_char_____new_allocator(base719, base721);
  return;
}

