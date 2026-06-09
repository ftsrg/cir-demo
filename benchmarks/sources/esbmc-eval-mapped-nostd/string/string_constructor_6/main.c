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
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[8] = "Testing";
char _str_1[7] = "T == S";
char _str_2[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_constructor_6/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, struct std__allocator_char_* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this9;
  char* __s10;
  struct std__allocator_char_* __a11;
  char* __end12;
  struct std__forward_iterator_tag agg_tmp013;
  this9 = v5;
  __s10 = v6;
  __a11 = v7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = this9;
  char* r15 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t14);
  struct std__allocator_char_* t16 = __a11;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_3);
        std____throw_logic_error(cast20);
      }
    char* t21 = __s10;
    char* t22 = __s10;
    unsigned long r23 = std__char_traits_char___length(t22);
    char* ptr24 = &(t21)[r23];
    __end12 = ptr24;
    char* t25 = __s10;
    char* t26 = __end12;
    struct std__forward_iterator_tag t27 = agg_tmp013;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t14, t25, t26, t27);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v28) {
bb29:
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EPKcmRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32, char* v33, unsigned long v34, struct std__allocator_char_* v35) {
bb36:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this37;
  char* __s38;
  unsigned long __n39;
  struct std__allocator_char_* __a40;
  struct std__forward_iterator_tag agg_tmp041;
  this37 = v32;
  __s38 = v33;
  __n39 = v34;
  __a40 = v35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t42 = this37;
  char* r43 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t42);
  struct std__allocator_char_* t44 = __a40;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t42->_M_dataplus, r43, t44);
      char* t45 = __s38;
      char* c46 = ((void*)0);
      _Bool c47 = ((t45 == c46)) ? 1 : 0;
      _Bool ternary48;
      if (c47) {
        unsigned long t49 = __n39;
        unsigned long c50 = 0;
        _Bool c51 = ((t49 > c50)) ? 1 : 0;
        ternary48 = (_Bool)c51;
      } else {
        _Bool c52 = 0;
        ternary48 = (_Bool)c52;
      }
      if (ternary48) {
        char* cast53 = (char*)&(_str_3);
        std____throw_logic_error(cast53);
      }
    char* t54 = __s38;
    char* t55 = __s38;
    unsigned long t56 = __n39;
    char* ptr57 = &(t55)[t56];
    struct std__forward_iterator_tag t58 = agg_tmp041;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t42, t54, ptr57, t58);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v59) {
bb60:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this61;
  unsigned long __retval62;
  unsigned long __sz63;
  this61 = v59;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t64 = this61;
  unsigned long t65 = t64->_M_string_length;
  __sz63 = t65;
    unsigned long t66 = __sz63;
    unsigned long r67 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t64);
    _Bool c68 = ((t66 > r67)) ? 1 : 0;
    if (c68) {
      __builtin_unreachable();
    }
  unsigned long t69 = __sz63;
  __retval62 = t69;
  unsigned long t70 = __retval62;
  return t70;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v71, char* v72) {
bb73:
  char* __c174;
  char* __c275;
  _Bool __retval76;
  __c174 = v71;
  __c275 = v72;
  char* t77 = __c174;
  char t78 = *t77;
  unsigned char cast79 = (unsigned char)t78;
  int cast80 = (int)cast79;
  char* t81 = __c275;
  char t82 = *t81;
  unsigned char cast83 = (unsigned char)t82;
  int cast84 = (int)cast83;
  _Bool c85 = ((cast80 < cast84)) ? 1 : 0;
  __retval76 = c85;
  _Bool t86 = __retval76;
  return t86;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v87, char* v88, unsigned long v89) {
bb90:
  char* __s191;
  char* __s292;
  unsigned long __n93;
  int __retval94;
  __s191 = v87;
  __s292 = v88;
  __n93 = v89;
    unsigned long t95 = __n93;
    unsigned long c96 = 0;
    _Bool c97 = ((t95 == c96)) ? 1 : 0;
    if (c97) {
      int c98 = 0;
      __retval94 = c98;
      int t99 = __retval94;
      return t99;
    }
    _Bool r100 = std____is_constant_evaluated();
    if (r100) {
        unsigned long __i101;
        unsigned long c102 = 0;
        __i101 = c102;
        while (1) {
          unsigned long t104 = __i101;
          unsigned long t105 = __n93;
          _Bool c106 = ((t104 < t105)) ? 1 : 0;
          if (!c106) break;
            unsigned long t107 = __i101;
            char* t108 = __s191;
            char* ptr109 = &(t108)[t107];
            unsigned long t110 = __i101;
            char* t111 = __s292;
            char* ptr112 = &(t111)[t110];
            _Bool r113 = std__char_traits_char___lt(ptr109, ptr112);
            if (r113) {
              int c114 = -1;
              __retval94 = c114;
              int t115 = __retval94;
              int ret_val116 = t115;
              return ret_val116;
            } else {
                unsigned long t117 = __i101;
                char* t118 = __s292;
                char* ptr119 = &(t118)[t117];
                unsigned long t120 = __i101;
                char* t121 = __s191;
                char* ptr122 = &(t121)[t120];
                _Bool r123 = std__char_traits_char___lt(ptr119, ptr122);
                if (r123) {
                  int c124 = 1;
                  __retval94 = c124;
                  int t125 = __retval94;
                  int ret_val126 = t125;
                  return ret_val126;
                }
            }
        for_step103: ;
          unsigned long t127 = __i101;
          unsigned long u128 = t127 + 1;
          __i101 = u128;
        }
      int c129 = 0;
      __retval94 = c129;
      int t130 = __retval94;
      return t130;
    }
  char* t131 = __s191;
  void* cast132 = (void*)t131;
  char* t133 = __s292;
  void* cast134 = (void*)t133;
  unsigned long t135 = __n93;
  int r136 = memcmp(cast132, cast134, t135);
  __retval94 = r136;
  int t137 = __retval94;
  return t137;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v138) {
bb139:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this140;
  char* __retval141;
  this140 = v138;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t142 = this140;
  char* r143 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t142);
  __retval141 = r143;
  char* t144 = __retval141;
  return t144;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v145, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v146) {
bb147:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs149;
  _Bool __retval150;
  __lhs148 = v145;
  __rhs149 = v146;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t151 = __lhs148;
  unsigned long r152 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t151);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t153 = __rhs149;
  unsigned long r154 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t153);
  _Bool c155 = ((r152 == r154)) ? 1 : 0;
  _Bool ternary156;
  if (c155) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t157 = __lhs148;
    char* r158 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t157);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t159 = __rhs149;
    char* r160 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t159);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t161 = __lhs148;
    unsigned long r162 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t161);
    int r163 = std__char_traits_char___compare(r158, r160, r162);
    _Bool cast164 = (_Bool)r163;
    _Bool u165 = !cast164;
    ternary156 = (_Bool)u165;
  } else {
    _Bool c166 = 0;
    ternary156 = (_Bool)c166;
  }
  __retval150 = ternary156;
  _Bool t167 = __retval150;
  return t167;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v168) {
bb169:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this170;
  this170 = v168;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t171 = this170;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t171);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t171->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb172:
  int __retval173;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ S174;
  struct std__allocator_char_ ref_tmp0175;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ T176;
  struct std__allocator_char_ ref_tmp1177;
  int c178 = 0;
  __retval173 = c178;
  char* cast179 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0175);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&S174, cast179, &ref_tmp0175);
  {
    std__allocator_char____allocator(&ref_tmp0175);
  }
    char* cast180 = (char*)&(_str);
    unsigned long c181 = 1;
    std__allocator_char___allocator_2(&ref_tmp1177);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&T176, cast180, c181, &ref_tmp1177);
    {
      std__allocator_char____allocator(&ref_tmp1177);
    }
      _Bool r182 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&T176, &S174);
      if (r182) {
      } else {
        char* cast183 = (char*)&(_str_1);
        char* c184 = _str_2;
        unsigned int c185 = 17;
        char* cast186 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast183, c184, c185, cast186);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&T176);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&S174);
  }
  int t187 = __retval173;
  return t187;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v188) {
bb189:
  struct std____new_allocator_char_* this190;
  this190 = v188;
  struct std____new_allocator_char_* t191 = this190;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v192) {
bb193:
  char* __r194;
  char* __retval195;
  __r194 = v192;
  char* t196 = __r194;
  __retval195 = t196;
  char* t197 = __retval195;
  return t197;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v198) {
bb199:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this200;
  char* __retval201;
  this200 = v198;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t202 = this200;
  char* cast203 = (char*)&(t202->field2._M_local_buf);
  char* r204 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast203);
  __retval201 = r204;
  char* t205 = __retval201;
  return t205;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v206, char* v207, struct std__allocator_char_* v208) {
bb209:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this210;
  char* __dat211;
  struct std__allocator_char_* __a212;
  this210 = v206;
  __dat211 = v207;
  __a212 = v208;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t213 = this210;
  struct std__allocator_char_* base214 = (struct std__allocator_char_*)((char *)t213 + 0);
  struct std__allocator_char_* t215 = __a212;
  std__allocator_char___allocator(base214, t215);
    char* t216 = __dat211;
    t213->_M_p = t216;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb217:
  _Bool __retval218;
    _Bool c219 = 0;
    __retval218 = c219;
    _Bool t220 = __retval218;
    return t220;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v221, char* v222) {
bb223:
  char* __c1224;
  char* __c2225;
  _Bool __retval226;
  __c1224 = v221;
  __c2225 = v222;
  char* t227 = __c1224;
  char t228 = *t227;
  int cast229 = (int)t228;
  char* t230 = __c2225;
  char t231 = *t230;
  int cast232 = (int)t231;
  _Bool c233 = ((cast229 == cast232)) ? 1 : 0;
  __retval226 = c233;
  _Bool t234 = __retval226;
  return t234;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v235) {
bb236:
  char* __p237;
  unsigned long __retval238;
  unsigned long __i239;
  __p237 = v235;
  unsigned long c240 = 0;
  __i239 = c240;
    char ref_tmp0241;
    while (1) {
      unsigned long t242 = __i239;
      char* t243 = __p237;
      char* ptr244 = &(t243)[t242];
      char c245 = 0;
      ref_tmp0241 = c245;
      _Bool r246 = __gnu_cxx__char_traits_char___eq(ptr244, &ref_tmp0241);
      _Bool u247 = !r246;
      if (!u247) break;
      unsigned long t248 = __i239;
      unsigned long u249 = t248 + 1;
      __i239 = u249;
    }
  unsigned long t250 = __i239;
  __retval238 = t250;
  unsigned long t251 = __retval238;
  return t251;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v252) {
bb253:
  char* __s254;
  unsigned long __retval255;
  __s254 = v252;
    _Bool r256 = std____is_constant_evaluated();
    if (r256) {
      char* t257 = __s254;
      unsigned long r258 = __gnu_cxx__char_traits_char___length(t257);
      __retval255 = r258;
      unsigned long t259 = __retval255;
      return t259;
    }
  char* t260 = __s254;
  unsigned long r261 = strlen(t260);
  __retval255 = r261;
  unsigned long t262 = __retval255;
  return t262;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v263, char* v264, struct std__random_access_iterator_tag v265) {
bb266:
  char* __first267;
  char* __last268;
  struct std__random_access_iterator_tag unnamed269;
  long __retval270;
  __first267 = v263;
  __last268 = v264;
  unnamed269 = v265;
  char* t271 = __last268;
  char* t272 = __first267;
  long diff273 = t271 - t272;
  __retval270 = diff273;
  long t274 = __retval270;
  return t274;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v275) {
bb276:
  char** unnamed277;
  struct std__random_access_iterator_tag __retval278;
  unnamed277 = v275;
  struct std__random_access_iterator_tag t279 = __retval278;
  return t279;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v280, char* v281) {
bb282:
  char* __first283;
  char* __last284;
  long __retval285;
  struct std__random_access_iterator_tag agg_tmp0286;
  __first283 = v280;
  __last284 = v281;
  char* t287 = __first283;
  char* t288 = __last284;
  struct std__random_access_iterator_tag r289 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first283);
  agg_tmp0286 = r289;
  struct std__random_access_iterator_tag t290 = agg_tmp0286;
  long r291 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t287, t288, t290);
  __retval285 = r291;
  long t292 = __retval285;
  return t292;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v293, char* v294) {
bb295:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this296;
  char* __p297;
  this296 = v293;
  __p297 = v294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t298 = this296;
  char* t299 = __p297;
  t298->_M_dataplus._M_p = t299;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v300) {
bb301:
  struct std__allocator_char_* __a302;
  unsigned long __retval303;
  __a302 = v300;
  unsigned long c304 = -1;
  unsigned long c305 = 1;
  unsigned long b306 = c304 / c305;
  __retval303 = b306;
  unsigned long t307 = __retval303;
  return t307;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v308) {
bb309:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this310;
  struct std__allocator_char_* __retval311;
  this310 = v308;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t312 = this310;
  struct std__allocator_char_* base313 = (struct std__allocator_char_*)((char *)&(t312->_M_dataplus) + 0);
  __retval311 = base313;
  struct std__allocator_char_* t314 = __retval311;
  return t314;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v315, unsigned long* v316) {
bb317:
  unsigned long* __a318;
  unsigned long* __b319;
  unsigned long* __retval320;
  __a318 = v315;
  __b319 = v316;
    unsigned long* t321 = __b319;
    unsigned long t322 = *t321;
    unsigned long* t323 = __a318;
    unsigned long t324 = *t323;
    _Bool c325 = ((t322 < t324)) ? 1 : 0;
    if (c325) {
      unsigned long* t326 = __b319;
      __retval320 = t326;
      unsigned long* t327 = __retval320;
      return t327;
    }
  unsigned long* t328 = __a318;
  __retval320 = t328;
  unsigned long* t329 = __retval320;
  return t329;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v330) {
bb331:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this332;
  unsigned long __retval333;
  unsigned long __diffmax334;
  unsigned long __allocmax335;
  this332 = v330;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t336 = this332;
  unsigned long c337 = 9223372036854775807;
  __diffmax334 = c337;
  struct std__allocator_char_* r338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t336);
  unsigned long r339 = std__allocator_traits_std__allocator_char_____max_size(r338);
  __allocmax335 = r339;
  unsigned long* r340 = unsigned_long_const__std__min_unsigned_long_(&__diffmax334, &__allocmax335);
  unsigned long t341 = *r340;
  unsigned long c342 = 1;
  unsigned long b343 = t341 - c342;
  __retval333 = b343;
  unsigned long t344 = __retval333;
  return t344;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v345) {
bb346:
  struct std____new_allocator_char_* this347;
  unsigned long __retval348;
  this347 = v345;
  struct std____new_allocator_char_* t349 = this347;
  unsigned long c350 = 9223372036854775807;
  unsigned long c351 = 1;
  unsigned long b352 = c350 / c351;
  __retval348 = b352;
  unsigned long t353 = __retval348;
  return t353;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v354, unsigned long v355, void* v356) {
bb357:
  struct std____new_allocator_char_* this358;
  unsigned long __n359;
  void* unnamed360;
  char* __retval361;
  this358 = v354;
  __n359 = v355;
  unnamed360 = v356;
  struct std____new_allocator_char_* t362 = this358;
    unsigned long t363 = __n359;
    unsigned long r364 = std____new_allocator_char____M_max_size___const(t362);
    _Bool c365 = ((t363 > r364)) ? 1 : 0;
    if (c365) {
        unsigned long t366 = __n359;
        unsigned long c367 = -1;
        unsigned long c368 = 1;
        unsigned long b369 = c367 / c368;
        _Bool c370 = ((t366 > b369)) ? 1 : 0;
        if (c370) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c371 = 1;
    unsigned long c372 = 16;
    _Bool c373 = ((c371 > c372)) ? 1 : 0;
    if (c373) {
      unsigned long __al374;
      unsigned long c375 = 1;
      __al374 = c375;
      unsigned long t376 = __n359;
      unsigned long c377 = 1;
      unsigned long b378 = t376 * c377;
      unsigned long t379 = __al374;
      void* r380 = operator_new_2(b378, t379);
      char* cast381 = (char*)r380;
      __retval361 = cast381;
      char* t382 = __retval361;
      return t382;
    }
  unsigned long t383 = __n359;
  unsigned long c384 = 1;
  unsigned long b385 = t383 * c384;
  void* r386 = operator_new(b385);
  char* cast387 = (char*)r386;
  __retval361 = cast387;
  char* t388 = __retval361;
  return t388;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v389, unsigned long v390) {
bb391:
  struct std__allocator_char_* this392;
  unsigned long __n393;
  char* __retval394;
  this392 = v389;
  __n393 = v390;
  struct std__allocator_char_* t395 = this392;
    _Bool r396 = std____is_constant_evaluated();
    if (r396) {
        unsigned long t397 = __n393;
        unsigned long c398 = 1;
        unsigned long ovr399;
        _Bool ovf400 = __builtin_mul_overflow(t397, c398, &ovr399);
        __n393 = ovr399;
        if (ovf400) {
          std____throw_bad_array_new_length();
        }
      unsigned long t401 = __n393;
      void* r402 = operator_new(t401);
      char* cast403 = (char*)r402;
      __retval394 = cast403;
      char* t404 = __retval394;
      return t404;
    }
  struct std____new_allocator_char_* base405 = (struct std____new_allocator_char_*)((char *)t395 + 0);
  unsigned long t406 = __n393;
  void* c407 = ((void*)0);
  char* r408 = std____new_allocator_char___allocate(base405, t406, c407);
  __retval394 = r408;
  char* t409 = __retval394;
  return t409;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v410, unsigned long v411) {
bb412:
  struct std__allocator_char_* __a413;
  unsigned long __n414;
  char* __retval415;
  __a413 = v410;
  __n414 = v411;
  struct std__allocator_char_* t416 = __a413;
  unsigned long t417 = __n414;
  char* r418 = std__allocator_char___allocate(t416, t417);
  __retval415 = r418;
  char* t419 = __retval415;
  return t419;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v420, unsigned long v421) {
bb422:
  struct std__allocator_char_* __a423;
  unsigned long __n424;
  char* __retval425;
  char* __p426;
  __a423 = v420;
  __n424 = v421;
  struct std__allocator_char_* t427 = __a423;
  unsigned long t428 = __n424;
  char* r429 = std__allocator_traits_std__allocator_char_____allocate(t427, t428);
  __p426 = r429;
  char* t430 = __p426;
  __retval425 = t430;
  char* t431 = __retval425;
  return t431;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v432) {
bb433:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this434;
  struct std__allocator_char_* __retval435;
  this434 = v432;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t436 = this434;
  struct std__allocator_char_* base437 = (struct std__allocator_char_*)((char *)&(t436->_M_dataplus) + 0);
  __retval435 = base437;
  struct std__allocator_char_* t438 = __retval435;
  return t438;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v439, unsigned long* v440, unsigned long v441) {
bb442:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this443;
  unsigned long* __capacity444;
  unsigned long __old_capacity445;
  char* __retval446;
  this443 = v439;
  __capacity444 = v440;
  __old_capacity445 = v441;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t447 = this443;
    unsigned long* t448 = __capacity444;
    unsigned long t449 = *t448;
    unsigned long r450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t447);
    _Bool c451 = ((t449 > r450)) ? 1 : 0;
    if (c451) {
      char* cast452 = (char*)&(_str_4);
      std____throw_length_error(cast452);
    }
    unsigned long* t453 = __capacity444;
    unsigned long t454 = *t453;
    unsigned long t455 = __old_capacity445;
    _Bool c456 = ((t454 > t455)) ? 1 : 0;
    _Bool ternary457;
    if (c456) {
      unsigned long* t458 = __capacity444;
      unsigned long t459 = *t458;
      unsigned long c460 = 2;
      unsigned long t461 = __old_capacity445;
      unsigned long b462 = c460 * t461;
      _Bool c463 = ((t459 < b462)) ? 1 : 0;
      ternary457 = (_Bool)c463;
    } else {
      _Bool c464 = 0;
      ternary457 = (_Bool)c464;
    }
    if (ternary457) {
      unsigned long c465 = 2;
      unsigned long t466 = __old_capacity445;
      unsigned long b467 = c465 * t466;
      unsigned long* t468 = __capacity444;
      *t468 = b467;
        unsigned long* t469 = __capacity444;
        unsigned long t470 = *t469;
        unsigned long r471 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t447);
        _Bool c472 = ((t470 > r471)) ? 1 : 0;
        if (c472) {
          unsigned long r473 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t447);
          unsigned long* t474 = __capacity444;
          *t474 = r473;
        }
    }
  struct std__allocator_char_* r475 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t447);
  unsigned long* t476 = __capacity444;
  unsigned long t477 = *t476;
  unsigned long c478 = 1;
  unsigned long b479 = t477 + c478;
  char* r480 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r475, b479);
  __retval446 = r480;
  char* t481 = __retval446;
  return t481;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v482, unsigned long v483) {
bb484:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this485;
  unsigned long __capacity486;
  this485 = v482;
  __capacity486 = v483;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t487 = this485;
  unsigned long t488 = __capacity486;
  t487->field2._M_allocated_capacity = t488;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb489:
  _Bool __retval490;
    _Bool c491 = 0;
    __retval490 = c491;
    _Bool t492 = __retval490;
    return t492;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v493) {
bb494:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this495;
  this495 = v493;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t496 = this495;
    _Bool r497 = std__is_constant_evaluated();
    if (r497) {
        unsigned long __i498;
        unsigned long c499 = 0;
        __i498 = c499;
        while (1) {
          unsigned long t501 = __i498;
          unsigned long c502 = 15;
          _Bool c503 = ((t501 <= c502)) ? 1 : 0;
          if (!c503) break;
          char c504 = 0;
          unsigned long t505 = __i498;
          t496->field2._M_local_buf[t505] = c504;
        for_step500: ;
          unsigned long t506 = __i498;
          unsigned long u507 = t506 + 1;
          __i498 = u507;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v508, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v509) {
bb510:
  struct _Guard* this511;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s512;
  this511 = v508;
  __s512 = v509;
  struct _Guard* t513 = this511;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t514 = __s512;
  t513->_M_guarded = t514;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v515, char* v516) {
bb517:
  char* __location518;
  char* __args519;
  char* __retval520;
  void* __loc521;
  __location518 = v515;
  __args519 = v516;
  char* t522 = __location518;
  void* cast523 = (void*)t522;
  __loc521 = cast523;
    void* t524 = __loc521;
    char* cast525 = (char*)t524;
    char* t526 = __args519;
    char t527 = *t526;
    *cast525 = t527;
    __retval520 = cast525;
    char* t528 = __retval520;
    return t528;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v529, char* v530) {
bb531:
  char* __c1532;
  char* __c2533;
  __c1532 = v529;
  __c2533 = v530;
    _Bool r534 = std____is_constant_evaluated();
    if (r534) {
      char* t535 = __c1532;
      char* t536 = __c2533;
      char* r537 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t535, t536);
    } else {
      char* t538 = __c2533;
      char t539 = *t538;
      char* t540 = __c1532;
      *t540 = t539;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v541, char* v542, unsigned long v543) {
bb544:
  char* __s1545;
  char* __s2546;
  unsigned long __n547;
  char* __retval548;
  __s1545 = v541;
  __s2546 = v542;
  __n547 = v543;
    unsigned long t549 = __n547;
    unsigned long c550 = 0;
    _Bool c551 = ((t549 == c550)) ? 1 : 0;
    if (c551) {
      char* t552 = __s1545;
      __retval548 = t552;
      char* t553 = __retval548;
      return t553;
    }
    _Bool r554 = std____is_constant_evaluated();
    if (r554) {
        unsigned long __i555;
        unsigned long c556 = 0;
        __i555 = c556;
        while (1) {
          unsigned long t558 = __i555;
          unsigned long t559 = __n547;
          _Bool c560 = ((t558 < t559)) ? 1 : 0;
          if (!c560) break;
          char* t561 = __s1545;
          unsigned long t562 = __i555;
          char* ptr563 = &(t561)[t562];
          unsigned long t564 = __i555;
          char* t565 = __s2546;
          char* ptr566 = &(t565)[t564];
          char* r567 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr563, ptr566);
        for_step557: ;
          unsigned long t568 = __i555;
          unsigned long u569 = t568 + 1;
          __i555 = u569;
        }
      char* t570 = __s1545;
      __retval548 = t570;
      char* t571 = __retval548;
      return t571;
    }
  char* t572 = __s1545;
  void* cast573 = (void*)t572;
  char* t574 = __s2546;
  void* cast575 = (void*)t574;
  unsigned long t576 = __n547;
  unsigned long c577 = 1;
  unsigned long b578 = t576 * c577;
  void* r579 = memcpy(cast573, cast575, b578);
  char* t580 = __s1545;
  __retval548 = t580;
  char* t581 = __retval548;
  return t581;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v582, char* v583, unsigned long v584) {
bb585:
  char* __s1586;
  char* __s2587;
  unsigned long __n588;
  char* __retval589;
  __s1586 = v582;
  __s2587 = v583;
  __n588 = v584;
    unsigned long t590 = __n588;
    unsigned long c591 = 0;
    _Bool c592 = ((t590 == c591)) ? 1 : 0;
    if (c592) {
      char* t593 = __s1586;
      __retval589 = t593;
      char* t594 = __retval589;
      return t594;
    }
    _Bool r595 = std____is_constant_evaluated();
    if (r595) {
      char* t596 = __s1586;
      char* t597 = __s2587;
      unsigned long t598 = __n588;
      char* r599 = __gnu_cxx__char_traits_char___copy(t596, t597, t598);
      __retval589 = r599;
      char* t600 = __retval589;
      return t600;
    }
  char* t601 = __s1586;
  void* cast602 = (void*)t601;
  char* t603 = __s2587;
  void* cast604 = (void*)t603;
  unsigned long t605 = __n588;
  void* r606 = memcpy(cast602, cast604, t605);
  char* cast607 = (char*)r606;
  __retval589 = cast607;
  char* t608 = __retval589;
  return t608;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v609, char* v610, unsigned long v611) {
bb612:
  char* __d613;
  char* __s614;
  unsigned long __n615;
  __d613 = v609;
  __s614 = v610;
  __n615 = v611;
    unsigned long t616 = __n615;
    unsigned long c617 = 1;
    _Bool c618 = ((t616 == c617)) ? 1 : 0;
    if (c618) {
      char* t619 = __d613;
      char* t620 = __s614;
      std__char_traits_char___assign(t619, t620);
    } else {
      char* t621 = __d613;
      char* t622 = __s614;
      unsigned long t623 = __n615;
      char* r624 = std__char_traits_char___copy(t621, t622, t623);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v625) {
bb626:
  char* __it627;
  char* __retval628;
  __it627 = v625;
  char* t629 = __it627;
  __retval628 = t629;
  char* t630 = __retval628;
  return t630;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v631, char* v632, char* v633) {
bb634:
  char* __p635;
  char* __k1636;
  char* __k2637;
  __p635 = v631;
  __k1636 = v632;
  __k2637 = v633;
    char* t638 = __p635;
    char* t639 = __k1636;
    char* r640 = char_const__std____niter_base_char_const__(t639);
    char* t641 = __k2637;
    char* t642 = __k1636;
    long diff643 = t641 - t642;
    unsigned long cast644 = (unsigned long)diff643;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t638, r640, cast644);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v645) {
bb646:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this647;
  char* __retval648;
  this647 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t649 = this647;
  char* t650 = t649->_M_dataplus._M_p;
  __retval648 = t650;
  char* t651 = __retval648;
  return t651;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v652, unsigned long v653) {
bb654:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this655;
  unsigned long __length656;
  this655 = v652;
  __length656 = v653;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t657 = this655;
  unsigned long t658 = __length656;
  t657->_M_string_length = t658;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v659, unsigned long v660) {
bb661:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this662;
  unsigned long __n663;
  char ref_tmp0664;
  this662 = v659;
  __n663 = v660;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t665 = this662;
  unsigned long t666 = __n663;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t665, t666);
  unsigned long t667 = __n663;
  char* r668 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t665);
  char* ptr669 = &(r668)[t667];
  char c670 = 0;
  ref_tmp0664 = c670;
  std__char_traits_char___assign(ptr669, &ref_tmp0664);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v671) {
bb672:
  struct _Guard* this673;
  this673 = v671;
  struct _Guard* t674 = this673;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t675 = t674->_M_guarded;
    _Bool cast676 = (_Bool)t675;
    if (cast676) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t677 = t674->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t677);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v678, char* v679, char* v680, struct std__forward_iterator_tag v681) {
bb682:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this683;
  char* __beg684;
  char* __end685;
  struct std__forward_iterator_tag unnamed686;
  unsigned long __dnew687;
  struct _Guard __guard688;
  this683 = v678;
  __beg684 = v679;
  __end685 = v680;
  unnamed686 = v681;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t689 = this683;
  char* t690 = __beg684;
  char* t691 = __end685;
  long r692 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t690, t691);
  unsigned long cast693 = (unsigned long)r692;
  __dnew687 = cast693;
    unsigned long t694 = __dnew687;
    unsigned long c695 = 15;
    _Bool c696 = ((t694 > c695)) ? 1 : 0;
    if (c696) {
      unsigned long c697 = 0;
      char* r698 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t689, &__dnew687, c697);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t689, r698);
      unsigned long t699 = __dnew687;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t689, t699);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t689);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard688, t689);
    char* r700 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t689);
    char* t701 = __beg684;
    char* t702 = __end685;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r700, t701, t702);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c703 = ((void*)0);
    __guard688._M_guarded = c703;
    unsigned long t704 = __dnew687;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t689, t704);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard688);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v705) {
bb706:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this707;
  this707 = v705;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t708 = this707;
  {
    struct std__allocator_char_* base709 = (struct std__allocator_char_*)((char *)t708 + 0);
    std__allocator_char____allocator(base709);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v710, struct std____new_allocator_char_* v711) {
bb712:
  struct std____new_allocator_char_* this713;
  struct std____new_allocator_char_* unnamed714;
  this713 = v710;
  unnamed714 = v711;
  struct std____new_allocator_char_* t715 = this713;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v716, struct std__allocator_char_* v717) {
bb718:
  struct std__allocator_char_* this719;
  struct std__allocator_char_* __a720;
  this719 = v716;
  __a720 = v717;
  struct std__allocator_char_* t721 = this719;
  struct std____new_allocator_char_* base722 = (struct std____new_allocator_char_*)((char *)t721 + 0);
  struct std__allocator_char_* t723 = __a720;
  struct std____new_allocator_char_* base724 = (struct std____new_allocator_char_*)((char *)t723 + 0);
  std____new_allocator_char_____new_allocator(base722, base724);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v725) {
bb726:
  char* __r727;
  char* __retval728;
  __r727 = v725;
  char* t729 = __r727;
  __retval728 = t729;
  char* t730 = __retval728;
  return t730;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v731) {
bb732:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this733;
  char* __retval734;
  this733 = v731;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t735 = this733;
  char* cast736 = (char*)&(t735->field2._M_local_buf);
  char* r737 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast736);
  __retval734 = r737;
  char* t738 = __retval734;
  return t738;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v739) {
bb740:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this741;
  _Bool __retval742;
  this741 = v739;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t743 = this741;
    char* r744 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t743);
    char* r745 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t743);
    _Bool c746 = ((r744 == r745)) ? 1 : 0;
    if (c746) {
        unsigned long t747 = t743->_M_string_length;
        unsigned long c748 = 15;
        _Bool c749 = ((t747 > c748)) ? 1 : 0;
        if (c749) {
          __builtin_unreachable();
        }
      _Bool c750 = 1;
      __retval742 = c750;
      _Bool t751 = __retval742;
      return t751;
    }
  _Bool c752 = 0;
  __retval742 = c752;
  _Bool t753 = __retval742;
  return t753;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v754, char* v755, unsigned long v756) {
bb757:
  struct std____new_allocator_char_* this758;
  char* __p759;
  unsigned long __n760;
  this758 = v754;
  __p759 = v755;
  __n760 = v756;
  struct std____new_allocator_char_* t761 = this758;
    unsigned long c762 = 1;
    unsigned long c763 = 16;
    _Bool c764 = ((c762 > c763)) ? 1 : 0;
    if (c764) {
      char* t765 = __p759;
      void* cast766 = (void*)t765;
      unsigned long t767 = __n760;
      unsigned long c768 = 1;
      unsigned long b769 = t767 * c768;
      unsigned long c770 = 1;
      operator_delete_3(cast766, b769, c770);
      return;
    }
  char* t771 = __p759;
  void* cast772 = (void*)t771;
  unsigned long t773 = __n760;
  unsigned long c774 = 1;
  unsigned long b775 = t773 * c774;
  operator_delete_2(cast772, b775);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v776, char* v777, unsigned long v778) {
bb779:
  struct std__allocator_char_* this780;
  char* __p781;
  unsigned long __n782;
  this780 = v776;
  __p781 = v777;
  __n782 = v778;
  struct std__allocator_char_* t783 = this780;
    _Bool r784 = std____is_constant_evaluated();
    if (r784) {
      char* t785 = __p781;
      void* cast786 = (void*)t785;
      operator_delete(cast786);
      return;
    }
  struct std____new_allocator_char_* base787 = (struct std____new_allocator_char_*)((char *)t783 + 0);
  char* t788 = __p781;
  unsigned long t789 = __n782;
  std____new_allocator_char___deallocate(base787, t788, t789);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v790, char* v791, unsigned long v792) {
bb793:
  struct std__allocator_char_* __a794;
  char* __p795;
  unsigned long __n796;
  __a794 = v790;
  __p795 = v791;
  __n796 = v792;
  struct std__allocator_char_* t797 = __a794;
  char* t798 = __p795;
  unsigned long t799 = __n796;
  std__allocator_char___deallocate(t797, t798, t799);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v800, unsigned long v801) {
bb802:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this803;
  unsigned long __size804;
  this803 = v800;
  __size804 = v801;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t805 = this803;
  struct std__allocator_char_* r806 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t805);
  char* r807 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t805);
  unsigned long t808 = __size804;
  unsigned long c809 = 1;
  unsigned long b810 = t808 + c809;
  std__allocator_traits_std__allocator_char_____deallocate(r806, r807, b810);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v811) {
bb812:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this813;
  this813 = v811;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t814 = this813;
    _Bool r815 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t814);
    _Bool u816 = !r815;
    if (u816) {
      unsigned long t817 = t814->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t814, t817);
    }
  return;
}

