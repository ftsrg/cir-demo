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

char _str[7] = "Tested";
char _str_1[8] = "Testing";
char _str_2[7] = "T != S";
char _str_3[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_constructor_7/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
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
        char* cast20 = (char*)&(_str_4);
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
        char* cast53 = (char*)&(_str_4);
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
    char* cast180 = (char*)&(_str_1);
    unsigned long c181 = 1;
    std__allocator_char___allocator_2(&ref_tmp1177);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&T176, cast180, c181, &ref_tmp1177);
    {
      std__allocator_char____allocator(&ref_tmp1177);
    }
      _Bool r182 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&T176, &S174);
      _Bool u183 = !r182;
      if (u183) {
      } else {
        char* cast184 = (char*)&(_str_2);
        char* c185 = _str_3;
        unsigned int c186 = 17;
        char* cast187 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast184, c185, c186, cast187);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&T176);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&S174);
  }
  int t188 = __retval173;
  return t188;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v189) {
bb190:
  struct std____new_allocator_char_* this191;
  this191 = v189;
  struct std____new_allocator_char_* t192 = this191;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v193) {
bb194:
  char* __r195;
  char* __retval196;
  __r195 = v193;
  char* t197 = __r195;
  __retval196 = t197;
  char* t198 = __retval196;
  return t198;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v199) {
bb200:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this201;
  char* __retval202;
  this201 = v199;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t203 = this201;
  char* cast204 = (char*)&(t203->field2._M_local_buf);
  char* r205 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast204);
  __retval202 = r205;
  char* t206 = __retval202;
  return t206;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v207, char* v208, struct std__allocator_char_* v209) {
bb210:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this211;
  char* __dat212;
  struct std__allocator_char_* __a213;
  this211 = v207;
  __dat212 = v208;
  __a213 = v209;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t214 = this211;
  struct std__allocator_char_* base215 = (struct std__allocator_char_*)((char *)t214 + 0);
  struct std__allocator_char_* t216 = __a213;
  std__allocator_char___allocator(base215, t216);
    char* t217 = __dat212;
    t214->_M_p = t217;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb218:
  _Bool __retval219;
    _Bool c220 = 0;
    __retval219 = c220;
    _Bool t221 = __retval219;
    return t221;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v222, char* v223) {
bb224:
  char* __c1225;
  char* __c2226;
  _Bool __retval227;
  __c1225 = v222;
  __c2226 = v223;
  char* t228 = __c1225;
  char t229 = *t228;
  int cast230 = (int)t229;
  char* t231 = __c2226;
  char t232 = *t231;
  int cast233 = (int)t232;
  _Bool c234 = ((cast230 == cast233)) ? 1 : 0;
  __retval227 = c234;
  _Bool t235 = __retval227;
  return t235;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v236) {
bb237:
  char* __p238;
  unsigned long __retval239;
  unsigned long __i240;
  __p238 = v236;
  unsigned long c241 = 0;
  __i240 = c241;
    char ref_tmp0242;
    while (1) {
      unsigned long t243 = __i240;
      char* t244 = __p238;
      char* ptr245 = &(t244)[t243];
      char c246 = 0;
      ref_tmp0242 = c246;
      _Bool r247 = __gnu_cxx__char_traits_char___eq(ptr245, &ref_tmp0242);
      _Bool u248 = !r247;
      if (!u248) break;
      unsigned long t249 = __i240;
      unsigned long u250 = t249 + 1;
      __i240 = u250;
    }
  unsigned long t251 = __i240;
  __retval239 = t251;
  unsigned long t252 = __retval239;
  return t252;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v253) {
bb254:
  char* __s255;
  unsigned long __retval256;
  __s255 = v253;
    _Bool r257 = std____is_constant_evaluated();
    if (r257) {
      char* t258 = __s255;
      unsigned long r259 = __gnu_cxx__char_traits_char___length(t258);
      __retval256 = r259;
      unsigned long t260 = __retval256;
      return t260;
    }
  char* t261 = __s255;
  unsigned long r262 = strlen(t261);
  __retval256 = r262;
  unsigned long t263 = __retval256;
  return t263;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v264, char* v265, struct std__random_access_iterator_tag v266) {
bb267:
  char* __first268;
  char* __last269;
  struct std__random_access_iterator_tag unnamed270;
  long __retval271;
  __first268 = v264;
  __last269 = v265;
  unnamed270 = v266;
  char* t272 = __last269;
  char* t273 = __first268;
  long diff274 = t272 - t273;
  __retval271 = diff274;
  long t275 = __retval271;
  return t275;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v276) {
bb277:
  char** unnamed278;
  struct std__random_access_iterator_tag __retval279;
  unnamed278 = v276;
  struct std__random_access_iterator_tag t280 = __retval279;
  return t280;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v281, char* v282) {
bb283:
  char* __first284;
  char* __last285;
  long __retval286;
  struct std__random_access_iterator_tag agg_tmp0287;
  __first284 = v281;
  __last285 = v282;
  char* t288 = __first284;
  char* t289 = __last285;
  struct std__random_access_iterator_tag r290 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first284);
  agg_tmp0287 = r290;
  struct std__random_access_iterator_tag t291 = agg_tmp0287;
  long r292 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t288, t289, t291);
  __retval286 = r292;
  long t293 = __retval286;
  return t293;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v294, char* v295) {
bb296:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this297;
  char* __p298;
  this297 = v294;
  __p298 = v295;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t299 = this297;
  char* t300 = __p298;
  t299->_M_dataplus._M_p = t300;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v301) {
bb302:
  struct std__allocator_char_* __a303;
  unsigned long __retval304;
  __a303 = v301;
  unsigned long c305 = -1;
  unsigned long c306 = 1;
  unsigned long b307 = c305 / c306;
  __retval304 = b307;
  unsigned long t308 = __retval304;
  return t308;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v309) {
bb310:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this311;
  struct std__allocator_char_* __retval312;
  this311 = v309;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t313 = this311;
  struct std__allocator_char_* base314 = (struct std__allocator_char_*)((char *)&(t313->_M_dataplus) + 0);
  __retval312 = base314;
  struct std__allocator_char_* t315 = __retval312;
  return t315;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v316, unsigned long* v317) {
bb318:
  unsigned long* __a319;
  unsigned long* __b320;
  unsigned long* __retval321;
  __a319 = v316;
  __b320 = v317;
    unsigned long* t322 = __b320;
    unsigned long t323 = *t322;
    unsigned long* t324 = __a319;
    unsigned long t325 = *t324;
    _Bool c326 = ((t323 < t325)) ? 1 : 0;
    if (c326) {
      unsigned long* t327 = __b320;
      __retval321 = t327;
      unsigned long* t328 = __retval321;
      return t328;
    }
  unsigned long* t329 = __a319;
  __retval321 = t329;
  unsigned long* t330 = __retval321;
  return t330;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v331) {
bb332:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this333;
  unsigned long __retval334;
  unsigned long __diffmax335;
  unsigned long __allocmax336;
  this333 = v331;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t337 = this333;
  unsigned long c338 = 9223372036854775807;
  __diffmax335 = c338;
  struct std__allocator_char_* r339 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t337);
  unsigned long r340 = std__allocator_traits_std__allocator_char_____max_size(r339);
  __allocmax336 = r340;
  unsigned long* r341 = unsigned_long_const__std__min_unsigned_long_(&__diffmax335, &__allocmax336);
  unsigned long t342 = *r341;
  unsigned long c343 = 1;
  unsigned long b344 = t342 - c343;
  __retval334 = b344;
  unsigned long t345 = __retval334;
  return t345;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v346) {
bb347:
  struct std____new_allocator_char_* this348;
  unsigned long __retval349;
  this348 = v346;
  struct std____new_allocator_char_* t350 = this348;
  unsigned long c351 = 9223372036854775807;
  unsigned long c352 = 1;
  unsigned long b353 = c351 / c352;
  __retval349 = b353;
  unsigned long t354 = __retval349;
  return t354;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v355, unsigned long v356, void* v357) {
bb358:
  struct std____new_allocator_char_* this359;
  unsigned long __n360;
  void* unnamed361;
  char* __retval362;
  this359 = v355;
  __n360 = v356;
  unnamed361 = v357;
  struct std____new_allocator_char_* t363 = this359;
    unsigned long t364 = __n360;
    unsigned long r365 = std____new_allocator_char____M_max_size___const(t363);
    _Bool c366 = ((t364 > r365)) ? 1 : 0;
    if (c366) {
        unsigned long t367 = __n360;
        unsigned long c368 = -1;
        unsigned long c369 = 1;
        unsigned long b370 = c368 / c369;
        _Bool c371 = ((t367 > b370)) ? 1 : 0;
        if (c371) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c372 = 1;
    unsigned long c373 = 16;
    _Bool c374 = ((c372 > c373)) ? 1 : 0;
    if (c374) {
      unsigned long __al375;
      unsigned long c376 = 1;
      __al375 = c376;
      unsigned long t377 = __n360;
      unsigned long c378 = 1;
      unsigned long b379 = t377 * c378;
      unsigned long t380 = __al375;
      void* r381 = operator_new_2(b379, t380);
      char* cast382 = (char*)r381;
      __retval362 = cast382;
      char* t383 = __retval362;
      return t383;
    }
  unsigned long t384 = __n360;
  unsigned long c385 = 1;
  unsigned long b386 = t384 * c385;
  void* r387 = operator_new(b386);
  char* cast388 = (char*)r387;
  __retval362 = cast388;
  char* t389 = __retval362;
  return t389;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v390, unsigned long v391) {
bb392:
  struct std__allocator_char_* this393;
  unsigned long __n394;
  char* __retval395;
  this393 = v390;
  __n394 = v391;
  struct std__allocator_char_* t396 = this393;
    _Bool r397 = std____is_constant_evaluated();
    if (r397) {
        unsigned long t398 = __n394;
        unsigned long c399 = 1;
        unsigned long ovr400;
        _Bool ovf401 = __builtin_mul_overflow(t398, c399, &ovr400);
        __n394 = ovr400;
        if (ovf401) {
          std____throw_bad_array_new_length();
        }
      unsigned long t402 = __n394;
      void* r403 = operator_new(t402);
      char* cast404 = (char*)r403;
      __retval395 = cast404;
      char* t405 = __retval395;
      return t405;
    }
  struct std____new_allocator_char_* base406 = (struct std____new_allocator_char_*)((char *)t396 + 0);
  unsigned long t407 = __n394;
  void* c408 = ((void*)0);
  char* r409 = std____new_allocator_char___allocate(base406, t407, c408);
  __retval395 = r409;
  char* t410 = __retval395;
  return t410;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v411, unsigned long v412) {
bb413:
  struct std__allocator_char_* __a414;
  unsigned long __n415;
  char* __retval416;
  __a414 = v411;
  __n415 = v412;
  struct std__allocator_char_* t417 = __a414;
  unsigned long t418 = __n415;
  char* r419 = std__allocator_char___allocate(t417, t418);
  __retval416 = r419;
  char* t420 = __retval416;
  return t420;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v421, unsigned long v422) {
bb423:
  struct std__allocator_char_* __a424;
  unsigned long __n425;
  char* __retval426;
  char* __p427;
  __a424 = v421;
  __n425 = v422;
  struct std__allocator_char_* t428 = __a424;
  unsigned long t429 = __n425;
  char* r430 = std__allocator_traits_std__allocator_char_____allocate(t428, t429);
  __p427 = r430;
  char* t431 = __p427;
  __retval426 = t431;
  char* t432 = __retval426;
  return t432;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v433) {
bb434:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this435;
  struct std__allocator_char_* __retval436;
  this435 = v433;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t437 = this435;
  struct std__allocator_char_* base438 = (struct std__allocator_char_*)((char *)&(t437->_M_dataplus) + 0);
  __retval436 = base438;
  struct std__allocator_char_* t439 = __retval436;
  return t439;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v440, unsigned long* v441, unsigned long v442) {
bb443:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this444;
  unsigned long* __capacity445;
  unsigned long __old_capacity446;
  char* __retval447;
  this444 = v440;
  __capacity445 = v441;
  __old_capacity446 = v442;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t448 = this444;
    unsigned long* t449 = __capacity445;
    unsigned long t450 = *t449;
    unsigned long r451 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t448);
    _Bool c452 = ((t450 > r451)) ? 1 : 0;
    if (c452) {
      char* cast453 = (char*)&(_str_5);
      std____throw_length_error(cast453);
    }
    unsigned long* t454 = __capacity445;
    unsigned long t455 = *t454;
    unsigned long t456 = __old_capacity446;
    _Bool c457 = ((t455 > t456)) ? 1 : 0;
    _Bool ternary458;
    if (c457) {
      unsigned long* t459 = __capacity445;
      unsigned long t460 = *t459;
      unsigned long c461 = 2;
      unsigned long t462 = __old_capacity446;
      unsigned long b463 = c461 * t462;
      _Bool c464 = ((t460 < b463)) ? 1 : 0;
      ternary458 = (_Bool)c464;
    } else {
      _Bool c465 = 0;
      ternary458 = (_Bool)c465;
    }
    if (ternary458) {
      unsigned long c466 = 2;
      unsigned long t467 = __old_capacity446;
      unsigned long b468 = c466 * t467;
      unsigned long* t469 = __capacity445;
      *t469 = b468;
        unsigned long* t470 = __capacity445;
        unsigned long t471 = *t470;
        unsigned long r472 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t448);
        _Bool c473 = ((t471 > r472)) ? 1 : 0;
        if (c473) {
          unsigned long r474 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t448);
          unsigned long* t475 = __capacity445;
          *t475 = r474;
        }
    }
  struct std__allocator_char_* r476 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t448);
  unsigned long* t477 = __capacity445;
  unsigned long t478 = *t477;
  unsigned long c479 = 1;
  unsigned long b480 = t478 + c479;
  char* r481 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r476, b480);
  __retval447 = r481;
  char* t482 = __retval447;
  return t482;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v483, unsigned long v484) {
bb485:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this486;
  unsigned long __capacity487;
  this486 = v483;
  __capacity487 = v484;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t488 = this486;
  unsigned long t489 = __capacity487;
  t488->field2._M_allocated_capacity = t489;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb490:
  _Bool __retval491;
    _Bool c492 = 0;
    __retval491 = c492;
    _Bool t493 = __retval491;
    return t493;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v494) {
bb495:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this496;
  this496 = v494;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t497 = this496;
    _Bool r498 = std__is_constant_evaluated();
    if (r498) {
        unsigned long __i499;
        unsigned long c500 = 0;
        __i499 = c500;
        while (1) {
          unsigned long t502 = __i499;
          unsigned long c503 = 15;
          _Bool c504 = ((t502 <= c503)) ? 1 : 0;
          if (!c504) break;
          char c505 = 0;
          unsigned long t506 = __i499;
          t497->field2._M_local_buf[t506] = c505;
        for_step501: ;
          unsigned long t507 = __i499;
          unsigned long u508 = t507 + 1;
          __i499 = u508;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v509, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v510) {
bb511:
  struct _Guard* this512;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s513;
  this512 = v509;
  __s513 = v510;
  struct _Guard* t514 = this512;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t515 = __s513;
  t514->_M_guarded = t515;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v516, char* v517) {
bb518:
  char* __location519;
  char* __args520;
  char* __retval521;
  void* __loc522;
  __location519 = v516;
  __args520 = v517;
  char* t523 = __location519;
  void* cast524 = (void*)t523;
  __loc522 = cast524;
    void* t525 = __loc522;
    char* cast526 = (char*)t525;
    char* t527 = __args520;
    char t528 = *t527;
    *cast526 = t528;
    __retval521 = cast526;
    char* t529 = __retval521;
    return t529;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v530, char* v531) {
bb532:
  char* __c1533;
  char* __c2534;
  __c1533 = v530;
  __c2534 = v531;
    _Bool r535 = std____is_constant_evaluated();
    if (r535) {
      char* t536 = __c1533;
      char* t537 = __c2534;
      char* r538 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t536, t537);
    } else {
      char* t539 = __c2534;
      char t540 = *t539;
      char* t541 = __c1533;
      *t541 = t540;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v542, char* v543, unsigned long v544) {
bb545:
  char* __s1546;
  char* __s2547;
  unsigned long __n548;
  char* __retval549;
  __s1546 = v542;
  __s2547 = v543;
  __n548 = v544;
    unsigned long t550 = __n548;
    unsigned long c551 = 0;
    _Bool c552 = ((t550 == c551)) ? 1 : 0;
    if (c552) {
      char* t553 = __s1546;
      __retval549 = t553;
      char* t554 = __retval549;
      return t554;
    }
    _Bool r555 = std____is_constant_evaluated();
    if (r555) {
        unsigned long __i556;
        unsigned long c557 = 0;
        __i556 = c557;
        while (1) {
          unsigned long t559 = __i556;
          unsigned long t560 = __n548;
          _Bool c561 = ((t559 < t560)) ? 1 : 0;
          if (!c561) break;
          char* t562 = __s1546;
          unsigned long t563 = __i556;
          char* ptr564 = &(t562)[t563];
          unsigned long t565 = __i556;
          char* t566 = __s2547;
          char* ptr567 = &(t566)[t565];
          char* r568 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr564, ptr567);
        for_step558: ;
          unsigned long t569 = __i556;
          unsigned long u570 = t569 + 1;
          __i556 = u570;
        }
      char* t571 = __s1546;
      __retval549 = t571;
      char* t572 = __retval549;
      return t572;
    }
  char* t573 = __s1546;
  void* cast574 = (void*)t573;
  char* t575 = __s2547;
  void* cast576 = (void*)t575;
  unsigned long t577 = __n548;
  unsigned long c578 = 1;
  unsigned long b579 = t577 * c578;
  void* r580 = memcpy(cast574, cast576, b579);
  char* t581 = __s1546;
  __retval549 = t581;
  char* t582 = __retval549;
  return t582;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v583, char* v584, unsigned long v585) {
bb586:
  char* __s1587;
  char* __s2588;
  unsigned long __n589;
  char* __retval590;
  __s1587 = v583;
  __s2588 = v584;
  __n589 = v585;
    unsigned long t591 = __n589;
    unsigned long c592 = 0;
    _Bool c593 = ((t591 == c592)) ? 1 : 0;
    if (c593) {
      char* t594 = __s1587;
      __retval590 = t594;
      char* t595 = __retval590;
      return t595;
    }
    _Bool r596 = std____is_constant_evaluated();
    if (r596) {
      char* t597 = __s1587;
      char* t598 = __s2588;
      unsigned long t599 = __n589;
      char* r600 = __gnu_cxx__char_traits_char___copy(t597, t598, t599);
      __retval590 = r600;
      char* t601 = __retval590;
      return t601;
    }
  char* t602 = __s1587;
  void* cast603 = (void*)t602;
  char* t604 = __s2588;
  void* cast605 = (void*)t604;
  unsigned long t606 = __n589;
  void* r607 = memcpy(cast603, cast605, t606);
  char* cast608 = (char*)r607;
  __retval590 = cast608;
  char* t609 = __retval590;
  return t609;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v610, char* v611, unsigned long v612) {
bb613:
  char* __d614;
  char* __s615;
  unsigned long __n616;
  __d614 = v610;
  __s615 = v611;
  __n616 = v612;
    unsigned long t617 = __n616;
    unsigned long c618 = 1;
    _Bool c619 = ((t617 == c618)) ? 1 : 0;
    if (c619) {
      char* t620 = __d614;
      char* t621 = __s615;
      std__char_traits_char___assign(t620, t621);
    } else {
      char* t622 = __d614;
      char* t623 = __s615;
      unsigned long t624 = __n616;
      char* r625 = std__char_traits_char___copy(t622, t623, t624);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v626) {
bb627:
  char* __it628;
  char* __retval629;
  __it628 = v626;
  char* t630 = __it628;
  __retval629 = t630;
  char* t631 = __retval629;
  return t631;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v632, char* v633, char* v634) {
bb635:
  char* __p636;
  char* __k1637;
  char* __k2638;
  __p636 = v632;
  __k1637 = v633;
  __k2638 = v634;
    char* t639 = __p636;
    char* t640 = __k1637;
    char* r641 = char_const__std____niter_base_char_const__(t640);
    char* t642 = __k2638;
    char* t643 = __k1637;
    long diff644 = t642 - t643;
    unsigned long cast645 = (unsigned long)diff644;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t639, r641, cast645);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v646) {
bb647:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this648;
  char* __retval649;
  this648 = v646;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = this648;
  char* t651 = t650->_M_dataplus._M_p;
  __retval649 = t651;
  char* t652 = __retval649;
  return t652;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v653, unsigned long v654) {
bb655:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this656;
  unsigned long __length657;
  this656 = v653;
  __length657 = v654;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t658 = this656;
  unsigned long t659 = __length657;
  t658->_M_string_length = t659;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v660, unsigned long v661) {
bb662:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this663;
  unsigned long __n664;
  char ref_tmp0665;
  this663 = v660;
  __n664 = v661;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t666 = this663;
  unsigned long t667 = __n664;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t666, t667);
  unsigned long t668 = __n664;
  char* r669 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t666);
  char* ptr670 = &(r669)[t668];
  char c671 = 0;
  ref_tmp0665 = c671;
  std__char_traits_char___assign(ptr670, &ref_tmp0665);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v672) {
bb673:
  struct _Guard* this674;
  this674 = v672;
  struct _Guard* t675 = this674;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t676 = t675->_M_guarded;
    _Bool cast677 = (_Bool)t676;
    if (cast677) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t678 = t675->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t678);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v679, char* v680, char* v681, struct std__forward_iterator_tag v682) {
bb683:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this684;
  char* __beg685;
  char* __end686;
  struct std__forward_iterator_tag unnamed687;
  unsigned long __dnew688;
  struct _Guard __guard689;
  this684 = v679;
  __beg685 = v680;
  __end686 = v681;
  unnamed687 = v682;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t690 = this684;
  char* t691 = __beg685;
  char* t692 = __end686;
  long r693 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t691, t692);
  unsigned long cast694 = (unsigned long)r693;
  __dnew688 = cast694;
    unsigned long t695 = __dnew688;
    unsigned long c696 = 15;
    _Bool c697 = ((t695 > c696)) ? 1 : 0;
    if (c697) {
      unsigned long c698 = 0;
      char* r699 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t690, &__dnew688, c698);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t690, r699);
      unsigned long t700 = __dnew688;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t690, t700);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t690);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard689, t690);
    char* r701 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t690);
    char* t702 = __beg685;
    char* t703 = __end686;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r701, t702, t703);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c704 = ((void*)0);
    __guard689._M_guarded = c704;
    unsigned long t705 = __dnew688;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t690, t705);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard689);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v706) {
bb707:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this708;
  this708 = v706;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t709 = this708;
  {
    struct std__allocator_char_* base710 = (struct std__allocator_char_*)((char *)t709 + 0);
    std__allocator_char____allocator(base710);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v711, struct std____new_allocator_char_* v712) {
bb713:
  struct std____new_allocator_char_* this714;
  struct std____new_allocator_char_* unnamed715;
  this714 = v711;
  unnamed715 = v712;
  struct std____new_allocator_char_* t716 = this714;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v717, struct std__allocator_char_* v718) {
bb719:
  struct std__allocator_char_* this720;
  struct std__allocator_char_* __a721;
  this720 = v717;
  __a721 = v718;
  struct std__allocator_char_* t722 = this720;
  struct std____new_allocator_char_* base723 = (struct std____new_allocator_char_*)((char *)t722 + 0);
  struct std__allocator_char_* t724 = __a721;
  struct std____new_allocator_char_* base725 = (struct std____new_allocator_char_*)((char *)t724 + 0);
  std____new_allocator_char_____new_allocator(base723, base725);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v726) {
bb727:
  char* __r728;
  char* __retval729;
  __r728 = v726;
  char* t730 = __r728;
  __retval729 = t730;
  char* t731 = __retval729;
  return t731;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v732) {
bb733:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this734;
  char* __retval735;
  this734 = v732;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t736 = this734;
  char* cast737 = (char*)&(t736->field2._M_local_buf);
  char* r738 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast737);
  __retval735 = r738;
  char* t739 = __retval735;
  return t739;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v740) {
bb741:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this742;
  _Bool __retval743;
  this742 = v740;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t744 = this742;
    char* r745 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t744);
    char* r746 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t744);
    _Bool c747 = ((r745 == r746)) ? 1 : 0;
    if (c747) {
        unsigned long t748 = t744->_M_string_length;
        unsigned long c749 = 15;
        _Bool c750 = ((t748 > c749)) ? 1 : 0;
        if (c750) {
          __builtin_unreachable();
        }
      _Bool c751 = 1;
      __retval743 = c751;
      _Bool t752 = __retval743;
      return t752;
    }
  _Bool c753 = 0;
  __retval743 = c753;
  _Bool t754 = __retval743;
  return t754;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v755, char* v756, unsigned long v757) {
bb758:
  struct std____new_allocator_char_* this759;
  char* __p760;
  unsigned long __n761;
  this759 = v755;
  __p760 = v756;
  __n761 = v757;
  struct std____new_allocator_char_* t762 = this759;
    unsigned long c763 = 1;
    unsigned long c764 = 16;
    _Bool c765 = ((c763 > c764)) ? 1 : 0;
    if (c765) {
      char* t766 = __p760;
      void* cast767 = (void*)t766;
      unsigned long t768 = __n761;
      unsigned long c769 = 1;
      unsigned long b770 = t768 * c769;
      unsigned long c771 = 1;
      operator_delete_3(cast767, b770, c771);
      return;
    }
  char* t772 = __p760;
  void* cast773 = (void*)t772;
  unsigned long t774 = __n761;
  unsigned long c775 = 1;
  unsigned long b776 = t774 * c775;
  operator_delete_2(cast773, b776);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v777, char* v778, unsigned long v779) {
bb780:
  struct std__allocator_char_* this781;
  char* __p782;
  unsigned long __n783;
  this781 = v777;
  __p782 = v778;
  __n783 = v779;
  struct std__allocator_char_* t784 = this781;
    _Bool r785 = std____is_constant_evaluated();
    if (r785) {
      char* t786 = __p782;
      void* cast787 = (void*)t786;
      operator_delete(cast787);
      return;
    }
  struct std____new_allocator_char_* base788 = (struct std____new_allocator_char_*)((char *)t784 + 0);
  char* t789 = __p782;
  unsigned long t790 = __n783;
  std____new_allocator_char___deallocate(base788, t789, t790);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v791, char* v792, unsigned long v793) {
bb794:
  struct std__allocator_char_* __a795;
  char* __p796;
  unsigned long __n797;
  __a795 = v791;
  __p796 = v792;
  __n797 = v793;
  struct std__allocator_char_* t798 = __a795;
  char* t799 = __p796;
  unsigned long t800 = __n797;
  std__allocator_char___deallocate(t798, t799, t800);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v801, unsigned long v802) {
bb803:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this804;
  unsigned long __size805;
  this804 = v801;
  __size805 = v802;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t806 = this804;
  struct std__allocator_char_* r807 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t806);
  char* r808 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t806);
  unsigned long t809 = __size805;
  unsigned long c810 = 1;
  unsigned long b811 = t809 + c810;
  std__allocator_traits_std__allocator_char_____deallocate(r807, r808, b811);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v812) {
bb813:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this814;
  this814 = v812;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t815 = this814;
    _Bool r816 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t815);
    _Bool u817 = !r816;
    if (u817) {
      unsigned long t818 = t815->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t815, t818);
    }
  return;
}

