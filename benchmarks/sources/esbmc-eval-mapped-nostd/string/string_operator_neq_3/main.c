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

char _str[5] = "Test";
char _str_1[13] = "str1 != str2";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_neq_3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
char _str_5[21] = "basic_string::append";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v32, struct std__allocator_char_* v33) {
bb34:
  struct std__allocator_char_* this35;
  struct std__allocator_char_* __a36;
  this35 = v32;
  __a36 = v33;
  struct std__allocator_char_* t37 = this35;
  struct std____new_allocator_char_* base38 = (struct std____new_allocator_char_*)((char *)t37 + 0);
  struct std__allocator_char_* t39 = __a36;
  struct std____new_allocator_char_* base40 = (struct std____new_allocator_char_*)((char *)t39 + 0);
  std____new_allocator_char_____new_allocator(base38, base40);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v41) {
bb42:
  struct std__allocator_char_* __rhs43;
  struct std__allocator_char_ __retval44;
  __rhs43 = v41;
  struct std__allocator_char_* t45 = __rhs43;
  std__allocator_char___allocator(&__retval44, t45);
  struct std__allocator_char_ t46 = __retval44;
  return t46;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v47) {
bb48:
  struct std__allocator_char_* __a49;
  struct std__allocator_char_ __retval50;
  __a49 = v47;
  struct std__allocator_char_* t51 = __a49;
  struct std__allocator_char_ r52 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t51);
  __retval50 = r52;
  struct std__allocator_char_ t53 = __retval50;
  return t53;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v54, struct std__allocator_char_* v55) {
bb56:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  struct std__allocator_char_* __a58;
  this57 = v54;
  __a58 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t59 = this57;
  char* r60 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t59);
  struct std__allocator_char_* t61 = __a58;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t59->_M_dataplus, r60, t61);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t59);
    unsigned long c62 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t59, c62);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v63) {
bb64:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this65;
  unsigned long __retval66;
  unsigned long __sz67;
  this65 = v63;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t68 = this65;
  _Bool r69 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t68);
  unsigned long ternary70;
  if (r69) {
    unsigned long c71 = 15;
    ternary70 = (unsigned long)c71;
  } else {
    unsigned long t72 = t68->field2._M_allocated_capacity;
    ternary70 = (unsigned long)t72;
  }
  __sz67 = ternary70;
    unsigned long t73 = __sz67;
    unsigned long c74 = 15;
    _Bool c75 = ((t73 < c74)) ? 1 : 0;
    _Bool ternary76;
    if (c75) {
      _Bool c77 = 1;
      ternary76 = (_Bool)c77;
    } else {
      unsigned long t78 = __sz67;
      unsigned long r79 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t68);
      _Bool c80 = ((t78 > r79)) ? 1 : 0;
      ternary76 = (_Bool)c80;
    }
    if (ternary76) {
      __builtin_unreachable();
    }
  unsigned long t81 = __sz67;
  __retval66 = t81;
  unsigned long t82 = __retval66;
  return t82;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v83) {
bb84:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this85;
  unsigned long __retval86;
  this85 = v83;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t87 = this85;
  unsigned long r88 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t87);
  __retval86 = r88;
  unsigned long t89 = __retval86;
  return t89;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v90, unsigned long v91) {
bb92:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this93;
  unsigned long __res94;
  unsigned long __capacity95;
  char* __tmp96;
  this93 = v90;
  __res94 = v91;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t97 = this93;
  unsigned long r98 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t97);
  __capacity95 = r98;
    unsigned long t99 = __res94;
    unsigned long t100 = __capacity95;
    _Bool c101 = ((t99 <= t100)) ? 1 : 0;
    if (c101) {
      return;
    }
  unsigned long t102 = __capacity95;
  char* r103 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t97, &__res94, t102);
  __tmp96 = r103;
  char* t104 = __tmp96;
  char* r105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t97);
  unsigned long r106 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t97);
  unsigned long c107 = 1;
  unsigned long b108 = r106 + c107;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t104, r105, b108);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t97);
  char* t109 = __tmp96;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t97, t109);
  unsigned long t110 = __res94;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t97, t110);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v111, unsigned long v112, unsigned long v113, char* v114) {
bb115:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this116;
  unsigned long __n1117;
  unsigned long __n2118;
  char* __s119;
  this116 = v111;
  __n1117 = v112;
  __n2118 = v113;
  __s119 = v114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t120 = this116;
    unsigned long r121 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t120);
    unsigned long r122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t120);
    unsigned long t123 = __n1117;
    unsigned long b124 = r122 - t123;
    unsigned long b125 = r121 - b124;
    unsigned long t126 = __n2118;
    _Bool c127 = ((b125 < t126)) ? 1 : 0;
    if (c127) {
      char* t128 = __s119;
      std____throw_length_error(t128);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v129, unsigned long v130, unsigned long v131, char* v132, unsigned long v133) {
bb134:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this135;
  unsigned long __pos136;
  unsigned long __len1137;
  char* __s138;
  unsigned long __len2139;
  unsigned long __how_much140;
  unsigned long __new_capacity141;
  char* __r142;
  this135 = v129;
  __pos136 = v130;
  __len1137 = v131;
  __s138 = v132;
  __len2139 = v133;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t143 = this135;
  unsigned long r144 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t143);
  unsigned long t145 = __pos136;
  unsigned long b146 = r144 - t145;
  unsigned long t147 = __len1137;
  unsigned long b148 = b146 - t147;
  __how_much140 = b148;
  unsigned long r149 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t143);
  unsigned long t150 = __len2139;
  unsigned long b151 = r149 + t150;
  unsigned long t152 = __len1137;
  unsigned long b153 = b151 - t152;
  __new_capacity141 = b153;
  unsigned long r154 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t143);
  char* r155 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t143, &__new_capacity141, r154);
  __r142 = r155;
    unsigned long t156 = __pos136;
    _Bool cast157 = (_Bool)t156;
    if (cast157) {
      char* t158 = __r142;
      char* r159 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t143);
      unsigned long t160 = __pos136;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t158, r159, t160);
    }
    char* t161 = __s138;
    _Bool cast162 = (_Bool)t161;
    _Bool ternary163;
    if (cast162) {
      unsigned long t164 = __len2139;
      _Bool cast165 = (_Bool)t164;
      ternary163 = (_Bool)cast165;
    } else {
      _Bool c166 = 0;
      ternary163 = (_Bool)c166;
    }
    if (ternary163) {
      char* t167 = __r142;
      unsigned long t168 = __pos136;
      char* ptr169 = &(t167)[t168];
      char* t170 = __s138;
      unsigned long t171 = __len2139;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr169, t170, t171);
    }
    unsigned long t172 = __how_much140;
    _Bool cast173 = (_Bool)t172;
    if (cast173) {
      char* t174 = __r142;
      unsigned long t175 = __pos136;
      char* ptr176 = &(t174)[t175];
      unsigned long t177 = __len2139;
      char* ptr178 = &(ptr176)[t177];
      char* r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t143);
      unsigned long t180 = __pos136;
      char* ptr181 = &(r179)[t180];
      unsigned long t182 = __len1137;
      char* ptr183 = &(ptr181)[t182];
      unsigned long t184 = __how_much140;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr178, ptr183, t184);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t143);
  char* t185 = __r142;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t143, t185);
  unsigned long t186 = __new_capacity141;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t143, t186);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v187, char* v188, unsigned long v189) {
bb190:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this191;
  char* __s192;
  unsigned long __n193;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval194;
  unsigned long __len195;
  this191 = v187;
  __s192 = v188;
  __n193 = v189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t196 = this191;
  unsigned long t197 = __n193;
  unsigned long r198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t196);
  unsigned long b199 = t197 + r198;
  __len195 = b199;
    unsigned long t200 = __len195;
    unsigned long r201 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t196);
    _Bool c202 = ((t200 <= r201)) ? 1 : 0;
    if (c202) {
        unsigned long t203 = __n193;
        _Bool cast204 = (_Bool)t203;
        if (cast204) {
          char* r205 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t196);
          unsigned long r206 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t196);
          char* ptr207 = &(r205)[r206];
          char* t208 = __s192;
          unsigned long t209 = __n193;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr207, t208, t209);
        }
    } else {
      unsigned long r210 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t196);
      unsigned long c211 = 0;
      char* t212 = __s192;
      unsigned long t213 = __n193;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t196, r210, c211, t212, t213);
    }
  unsigned long t214 = __len195;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t196, t214);
  __retval194 = t196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t215 = __retval194;
  return t215;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v216, char* v217, unsigned long v218) {
bb219:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this220;
  char* __s221;
  unsigned long __n222;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval223;
  this220 = v216;
  __s221 = v217;
  __n222 = v218;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t224 = this220;
  unsigned long c225 = 0;
  unsigned long t226 = __n222;
  char* cast227 = (char*)&(_str_5);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t224, c225, t226, cast227);
  char* t228 = __s221;
  unsigned long t229 = __n222;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r230 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t224, t228, t229);
  __retval223 = r230;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t231 = __retval223;
  return t231;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v232, unsigned long v233, char* v234, unsigned long v235, struct std__allocator_char_* v236) {
bb237:
  char* __lhs238;
  unsigned long __lhs_len239;
  char* __rhs240;
  unsigned long __rhs_len241;
  struct std__allocator_char_* __a242;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval243;
  _Bool nrvo244;
  struct std__allocator_char_ ref_tmp0245;
  __lhs238 = v232;
  __lhs_len239 = v233;
  __rhs240 = v234;
  __rhs_len241 = v235;
  __a242 = v236;
  _Bool c246 = 0;
  nrvo244 = c246;
  struct std__allocator_char_* t247 = __a242;
  struct std__allocator_char_ r248 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t247);
  ref_tmp0245 = r248;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval243, &ref_tmp0245);
  {
    std__allocator_char____allocator(&ref_tmp0245);
  }
    unsigned long t249 = __lhs_len239;
    unsigned long t250 = __rhs_len241;
    unsigned long b251 = t249 + t250;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval243, b251);
    char* t252 = __lhs238;
    unsigned long t253 = __lhs_len239;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r254 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval243, t252, t253);
    char* t255 = __rhs240;
    unsigned long t256 = __rhs_len241;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r257 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval243, t255, t256);
    _Bool c258 = 1;
    nrvo244 = c258;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t259 = __retval243;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val260 = t259;
    {
      _Bool t261 = nrvo244;
      _Bool u262 = !t261;
      if (u262) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval243);
      }
    }
    return ret_val260;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v263) {
bb264:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this265;
  char* __retval266;
  this265 = v263;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t267 = this265;
  char* r268 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t267);
  __retval266 = r268;
  char* t269 = __retval266;
  return t269;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v270) {
bb271:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this272;
  unsigned long __retval273;
  unsigned long __sz274;
  this272 = v270;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t275 = this272;
  unsigned long t276 = t275->_M_string_length;
  __sz274 = t276;
    unsigned long t277 = __sz274;
    unsigned long r278 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t275);
    _Bool c279 = ((t277 > r278)) ? 1 : 0;
    if (c279) {
      __builtin_unreachable();
    }
  unsigned long t280 = __sz274;
  __retval273 = t280;
  unsigned long t281 = __retval273;
  return t281;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v282) {
bb283:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this284;
  struct std__allocator_char_ __retval285;
  this284 = v282;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t286 = this284;
  struct std__allocator_char_* r287 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t286);
  std__allocator_char___allocator(&__retval285, r287);
  struct std__allocator_char_ t288 = __retval285;
  return t288;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v289, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v290) {
bb291:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs292;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs293;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval294;
  struct std__allocator_char_ ref_tmp0295;
  __lhs292 = v289;
  __rhs293 = v290;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t296 = __lhs292;
  char* r297 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t296);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t298 = __lhs292;
  unsigned long r299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t298);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t300 = __rhs293;
  char* r301 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t300);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t302 = __rhs293;
  unsigned long r303 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t302);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t304 = __lhs292;
  struct std__allocator_char_ r305 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t304);
  ref_tmp0295 = r305;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r306 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r297, r299, r301, r303, &ref_tmp0295);
    __retval294 = r306;
  {
    std__allocator_char____allocator(&ref_tmp0295);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t307 = __retval294;
  return t307;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v308, char* v309) {
bb310:
  char* __c1311;
  char* __c2312;
  _Bool __retval313;
  __c1311 = v308;
  __c2312 = v309;
  char* t314 = __c1311;
  char t315 = *t314;
  unsigned char cast316 = (unsigned char)t315;
  int cast317 = (int)cast316;
  char* t318 = __c2312;
  char t319 = *t318;
  unsigned char cast320 = (unsigned char)t319;
  int cast321 = (int)cast320;
  _Bool c322 = ((cast317 < cast321)) ? 1 : 0;
  __retval313 = c322;
  _Bool t323 = __retval313;
  return t323;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v324, char* v325, unsigned long v326) {
bb327:
  char* __s1328;
  char* __s2329;
  unsigned long __n330;
  int __retval331;
  __s1328 = v324;
  __s2329 = v325;
  __n330 = v326;
    unsigned long t332 = __n330;
    unsigned long c333 = 0;
    _Bool c334 = ((t332 == c333)) ? 1 : 0;
    if (c334) {
      int c335 = 0;
      __retval331 = c335;
      int t336 = __retval331;
      return t336;
    }
    _Bool r337 = std____is_constant_evaluated();
    if (r337) {
        unsigned long __i338;
        unsigned long c339 = 0;
        __i338 = c339;
        while (1) {
          unsigned long t341 = __i338;
          unsigned long t342 = __n330;
          _Bool c343 = ((t341 < t342)) ? 1 : 0;
          if (!c343) break;
            unsigned long t344 = __i338;
            char* t345 = __s1328;
            char* ptr346 = &(t345)[t344];
            unsigned long t347 = __i338;
            char* t348 = __s2329;
            char* ptr349 = &(t348)[t347];
            _Bool r350 = std__char_traits_char___lt(ptr346, ptr349);
            if (r350) {
              int c351 = -1;
              __retval331 = c351;
              int t352 = __retval331;
              int ret_val353 = t352;
              return ret_val353;
            } else {
                unsigned long t354 = __i338;
                char* t355 = __s2329;
                char* ptr356 = &(t355)[t354];
                unsigned long t357 = __i338;
                char* t358 = __s1328;
                char* ptr359 = &(t358)[t357];
                _Bool r360 = std__char_traits_char___lt(ptr356, ptr359);
                if (r360) {
                  int c361 = 1;
                  __retval331 = c361;
                  int t362 = __retval331;
                  int ret_val363 = t362;
                  return ret_val363;
                }
            }
        for_step340: ;
          unsigned long t364 = __i338;
          unsigned long u365 = t364 + 1;
          __i338 = u365;
        }
      int c366 = 0;
      __retval331 = c366;
      int t367 = __retval331;
      return t367;
    }
  char* t368 = __s1328;
  void* cast369 = (void*)t368;
  char* t370 = __s2329;
  void* cast371 = (void*)t370;
  unsigned long t372 = __n330;
  int r373 = memcmp(cast369, cast371, t372);
  __retval331 = r373;
  int t374 = __retval331;
  return t374;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v375) {
bb376:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this377;
  char* __retval378;
  this377 = v375;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t379 = this377;
  char* r380 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t379);
  __retval378 = r380;
  char* t381 = __retval378;
  return t381;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v382, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v383) {
bb384:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs385;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs386;
  _Bool __retval387;
  __lhs385 = v382;
  __rhs386 = v383;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t388 = __lhs385;
  unsigned long r389 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t388);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t390 = __rhs386;
  unsigned long r391 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t390);
  _Bool c392 = ((r389 == r391)) ? 1 : 0;
  _Bool ternary393;
  if (c392) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t394 = __lhs385;
    char* r395 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t394);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t396 = __rhs386;
    char* r397 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t396);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t398 = __lhs385;
    unsigned long r399 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t398);
    int r400 = std__char_traits_char___compare(r395, r397, r399);
    _Bool cast401 = (_Bool)r400;
    _Bool u402 = !cast401;
    ternary393 = (_Bool)u402;
  } else {
    _Bool c403 = 0;
    ternary393 = (_Bool)c403;
  }
  __retval387 = ternary393;
  _Bool t404 = __retval387;
  return t404;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v405) {
bb406:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this407;
  this407 = v405;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t408 = this407;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t408);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t408->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb409:
  int __retval410;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2411;
  struct std__allocator_char_ ref_tmp0412;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1413;
  int c414 = 0;
  __retval410 = c414;
  char* cast415 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0412);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2411, cast415, &ref_tmp0412);
  {
    std__allocator_char____allocator(&ref_tmp0412);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r416 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&str2411, &str2411);
    str1413 = r416;
      _Bool r417 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1413, &str2411);
      _Bool u418 = !r417;
      if (u418) {
      } else {
        char* cast419 = (char*)&(_str_1);
        char* c420 = _str_2;
        unsigned int c421 = 16;
        char* cast422 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast419, c420, c421, cast422);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1413);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2411);
  }
  int t423 = __retval410;
  return t423;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v424) {
bb425:
  struct std____new_allocator_char_* this426;
  this426 = v424;
  struct std____new_allocator_char_* t427 = this426;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v428) {
bb429:
  char* __r430;
  char* __retval431;
  __r430 = v428;
  char* t432 = __r430;
  __retval431 = t432;
  char* t433 = __retval431;
  return t433;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v434) {
bb435:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this436;
  char* __retval437;
  this436 = v434;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t438 = this436;
  char* cast439 = (char*)&(t438->field2._M_local_buf);
  char* r440 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast439);
  __retval437 = r440;
  char* t441 = __retval437;
  return t441;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v442, char* v443, struct std__allocator_char_* v444) {
bb445:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this446;
  char* __dat447;
  struct std__allocator_char_* __a448;
  this446 = v442;
  __dat447 = v443;
  __a448 = v444;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t449 = this446;
  struct std__allocator_char_* base450 = (struct std__allocator_char_*)((char *)t449 + 0);
  struct std__allocator_char_* t451 = __a448;
  std__allocator_char___allocator(base450, t451);
    char* t452 = __dat447;
    t449->_M_p = t452;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb453:
  _Bool __retval454;
    _Bool c455 = 0;
    __retval454 = c455;
    _Bool t456 = __retval454;
    return t456;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v457, char* v458) {
bb459:
  char* __c1460;
  char* __c2461;
  _Bool __retval462;
  __c1460 = v457;
  __c2461 = v458;
  char* t463 = __c1460;
  char t464 = *t463;
  int cast465 = (int)t464;
  char* t466 = __c2461;
  char t467 = *t466;
  int cast468 = (int)t467;
  _Bool c469 = ((cast465 == cast468)) ? 1 : 0;
  __retval462 = c469;
  _Bool t470 = __retval462;
  return t470;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v471) {
bb472:
  char* __p473;
  unsigned long __retval474;
  unsigned long __i475;
  __p473 = v471;
  unsigned long c476 = 0;
  __i475 = c476;
    char ref_tmp0477;
    while (1) {
      unsigned long t478 = __i475;
      char* t479 = __p473;
      char* ptr480 = &(t479)[t478];
      char c481 = 0;
      ref_tmp0477 = c481;
      _Bool r482 = __gnu_cxx__char_traits_char___eq(ptr480, &ref_tmp0477);
      _Bool u483 = !r482;
      if (!u483) break;
      unsigned long t484 = __i475;
      unsigned long u485 = t484 + 1;
      __i475 = u485;
    }
  unsigned long t486 = __i475;
  __retval474 = t486;
  unsigned long t487 = __retval474;
  return t487;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v488) {
bb489:
  char* __s490;
  unsigned long __retval491;
  __s490 = v488;
    _Bool r492 = std____is_constant_evaluated();
    if (r492) {
      char* t493 = __s490;
      unsigned long r494 = __gnu_cxx__char_traits_char___length(t493);
      __retval491 = r494;
      unsigned long t495 = __retval491;
      return t495;
    }
  char* t496 = __s490;
  unsigned long r497 = strlen(t496);
  __retval491 = r497;
  unsigned long t498 = __retval491;
  return t498;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v499, char* v500, struct std__random_access_iterator_tag v501) {
bb502:
  char* __first503;
  char* __last504;
  struct std__random_access_iterator_tag unnamed505;
  long __retval506;
  __first503 = v499;
  __last504 = v500;
  unnamed505 = v501;
  char* t507 = __last504;
  char* t508 = __first503;
  long diff509 = t507 - t508;
  __retval506 = diff509;
  long t510 = __retval506;
  return t510;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v511) {
bb512:
  char** unnamed513;
  struct std__random_access_iterator_tag __retval514;
  unnamed513 = v511;
  struct std__random_access_iterator_tag t515 = __retval514;
  return t515;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v516, char* v517) {
bb518:
  char* __first519;
  char* __last520;
  long __retval521;
  struct std__random_access_iterator_tag agg_tmp0522;
  __first519 = v516;
  __last520 = v517;
  char* t523 = __first519;
  char* t524 = __last520;
  struct std__random_access_iterator_tag r525 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first519);
  agg_tmp0522 = r525;
  struct std__random_access_iterator_tag t526 = agg_tmp0522;
  long r527 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t523, t524, t526);
  __retval521 = r527;
  long t528 = __retval521;
  return t528;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v529, char* v530) {
bb531:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this532;
  char* __p533;
  this532 = v529;
  __p533 = v530;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t534 = this532;
  char* t535 = __p533;
  t534->_M_dataplus._M_p = t535;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v536) {
bb537:
  struct std__allocator_char_* __a538;
  unsigned long __retval539;
  __a538 = v536;
  unsigned long c540 = -1;
  unsigned long c541 = 1;
  unsigned long b542 = c540 / c541;
  __retval539 = b542;
  unsigned long t543 = __retval539;
  return t543;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v544) {
bb545:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this546;
  struct std__allocator_char_* __retval547;
  this546 = v544;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t548 = this546;
  struct std__allocator_char_* base549 = (struct std__allocator_char_*)((char *)&(t548->_M_dataplus) + 0);
  __retval547 = base549;
  struct std__allocator_char_* t550 = __retval547;
  return t550;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v551, unsigned long* v552) {
bb553:
  unsigned long* __a554;
  unsigned long* __b555;
  unsigned long* __retval556;
  __a554 = v551;
  __b555 = v552;
    unsigned long* t557 = __b555;
    unsigned long t558 = *t557;
    unsigned long* t559 = __a554;
    unsigned long t560 = *t559;
    _Bool c561 = ((t558 < t560)) ? 1 : 0;
    if (c561) {
      unsigned long* t562 = __b555;
      __retval556 = t562;
      unsigned long* t563 = __retval556;
      return t563;
    }
  unsigned long* t564 = __a554;
  __retval556 = t564;
  unsigned long* t565 = __retval556;
  return t565;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v566) {
bb567:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this568;
  unsigned long __retval569;
  unsigned long __diffmax570;
  unsigned long __allocmax571;
  this568 = v566;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t572 = this568;
  unsigned long c573 = 9223372036854775807;
  __diffmax570 = c573;
  struct std__allocator_char_* r574 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t572);
  unsigned long r575 = std__allocator_traits_std__allocator_char_____max_size(r574);
  __allocmax571 = r575;
  unsigned long* r576 = unsigned_long_const__std__min_unsigned_long_(&__diffmax570, &__allocmax571);
  unsigned long t577 = *r576;
  unsigned long c578 = 1;
  unsigned long b579 = t577 - c578;
  __retval569 = b579;
  unsigned long t580 = __retval569;
  return t580;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v581) {
bb582:
  struct std____new_allocator_char_* this583;
  unsigned long __retval584;
  this583 = v581;
  struct std____new_allocator_char_* t585 = this583;
  unsigned long c586 = 9223372036854775807;
  unsigned long c587 = 1;
  unsigned long b588 = c586 / c587;
  __retval584 = b588;
  unsigned long t589 = __retval584;
  return t589;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v590, unsigned long v591, void* v592) {
bb593:
  struct std____new_allocator_char_* this594;
  unsigned long __n595;
  void* unnamed596;
  char* __retval597;
  this594 = v590;
  __n595 = v591;
  unnamed596 = v592;
  struct std____new_allocator_char_* t598 = this594;
    unsigned long t599 = __n595;
    unsigned long r600 = std____new_allocator_char____M_max_size___const(t598);
    _Bool c601 = ((t599 > r600)) ? 1 : 0;
    if (c601) {
        unsigned long t602 = __n595;
        unsigned long c603 = -1;
        unsigned long c604 = 1;
        unsigned long b605 = c603 / c604;
        _Bool c606 = ((t602 > b605)) ? 1 : 0;
        if (c606) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c607 = 1;
    unsigned long c608 = 16;
    _Bool c609 = ((c607 > c608)) ? 1 : 0;
    if (c609) {
      unsigned long __al610;
      unsigned long c611 = 1;
      __al610 = c611;
      unsigned long t612 = __n595;
      unsigned long c613 = 1;
      unsigned long b614 = t612 * c613;
      unsigned long t615 = __al610;
      void* r616 = operator_new_2(b614, t615);
      char* cast617 = (char*)r616;
      __retval597 = cast617;
      char* t618 = __retval597;
      return t618;
    }
  unsigned long t619 = __n595;
  unsigned long c620 = 1;
  unsigned long b621 = t619 * c620;
  void* r622 = operator_new(b621);
  char* cast623 = (char*)r622;
  __retval597 = cast623;
  char* t624 = __retval597;
  return t624;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v625, unsigned long v626) {
bb627:
  struct std__allocator_char_* this628;
  unsigned long __n629;
  char* __retval630;
  this628 = v625;
  __n629 = v626;
  struct std__allocator_char_* t631 = this628;
    _Bool r632 = std____is_constant_evaluated();
    if (r632) {
        unsigned long t633 = __n629;
        unsigned long c634 = 1;
        unsigned long ovr635;
        _Bool ovf636 = __builtin_mul_overflow(t633, c634, &ovr635);
        __n629 = ovr635;
        if (ovf636) {
          std____throw_bad_array_new_length();
        }
      unsigned long t637 = __n629;
      void* r638 = operator_new(t637);
      char* cast639 = (char*)r638;
      __retval630 = cast639;
      char* t640 = __retval630;
      return t640;
    }
  struct std____new_allocator_char_* base641 = (struct std____new_allocator_char_*)((char *)t631 + 0);
  unsigned long t642 = __n629;
  void* c643 = ((void*)0);
  char* r644 = std____new_allocator_char___allocate(base641, t642, c643);
  __retval630 = r644;
  char* t645 = __retval630;
  return t645;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v646, unsigned long v647) {
bb648:
  struct std__allocator_char_* __a649;
  unsigned long __n650;
  char* __retval651;
  __a649 = v646;
  __n650 = v647;
  struct std__allocator_char_* t652 = __a649;
  unsigned long t653 = __n650;
  char* r654 = std__allocator_char___allocate(t652, t653);
  __retval651 = r654;
  char* t655 = __retval651;
  return t655;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v656, unsigned long v657) {
bb658:
  struct std__allocator_char_* __a659;
  unsigned long __n660;
  char* __retval661;
  char* __p662;
  __a659 = v656;
  __n660 = v657;
  struct std__allocator_char_* t663 = __a659;
  unsigned long t664 = __n660;
  char* r665 = std__allocator_traits_std__allocator_char_____allocate(t663, t664);
  __p662 = r665;
  char* t666 = __p662;
  __retval661 = t666;
  char* t667 = __retval661;
  return t667;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v668) {
bb669:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this670;
  struct std__allocator_char_* __retval671;
  this670 = v668;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t672 = this670;
  struct std__allocator_char_* base673 = (struct std__allocator_char_*)((char *)&(t672->_M_dataplus) + 0);
  __retval671 = base673;
  struct std__allocator_char_* t674 = __retval671;
  return t674;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v675, unsigned long* v676, unsigned long v677) {
bb678:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this679;
  unsigned long* __capacity680;
  unsigned long __old_capacity681;
  char* __retval682;
  this679 = v675;
  __capacity680 = v676;
  __old_capacity681 = v677;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t683 = this679;
    unsigned long* t684 = __capacity680;
    unsigned long t685 = *t684;
    unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t683);
    _Bool c687 = ((t685 > r686)) ? 1 : 0;
    if (c687) {
      char* cast688 = (char*)&(_str_4);
      std____throw_length_error(cast688);
    }
    unsigned long* t689 = __capacity680;
    unsigned long t690 = *t689;
    unsigned long t691 = __old_capacity681;
    _Bool c692 = ((t690 > t691)) ? 1 : 0;
    _Bool ternary693;
    if (c692) {
      unsigned long* t694 = __capacity680;
      unsigned long t695 = *t694;
      unsigned long c696 = 2;
      unsigned long t697 = __old_capacity681;
      unsigned long b698 = c696 * t697;
      _Bool c699 = ((t695 < b698)) ? 1 : 0;
      ternary693 = (_Bool)c699;
    } else {
      _Bool c700 = 0;
      ternary693 = (_Bool)c700;
    }
    if (ternary693) {
      unsigned long c701 = 2;
      unsigned long t702 = __old_capacity681;
      unsigned long b703 = c701 * t702;
      unsigned long* t704 = __capacity680;
      *t704 = b703;
        unsigned long* t705 = __capacity680;
        unsigned long t706 = *t705;
        unsigned long r707 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t683);
        _Bool c708 = ((t706 > r707)) ? 1 : 0;
        if (c708) {
          unsigned long r709 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t683);
          unsigned long* t710 = __capacity680;
          *t710 = r709;
        }
    }
  struct std__allocator_char_* r711 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t683);
  unsigned long* t712 = __capacity680;
  unsigned long t713 = *t712;
  unsigned long c714 = 1;
  unsigned long b715 = t713 + c714;
  char* r716 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r711, b715);
  __retval682 = r716;
  char* t717 = __retval682;
  return t717;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v718, unsigned long v719) {
bb720:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this721;
  unsigned long __capacity722;
  this721 = v718;
  __capacity722 = v719;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t723 = this721;
  unsigned long t724 = __capacity722;
  t723->field2._M_allocated_capacity = t724;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb725:
  _Bool __retval726;
    _Bool c727 = 0;
    __retval726 = c727;
    _Bool t728 = __retval726;
    return t728;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v729) {
bb730:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this731;
  this731 = v729;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t732 = this731;
    _Bool r733 = std__is_constant_evaluated();
    if (r733) {
        unsigned long __i734;
        unsigned long c735 = 0;
        __i734 = c735;
        while (1) {
          unsigned long t737 = __i734;
          unsigned long c738 = 15;
          _Bool c739 = ((t737 <= c738)) ? 1 : 0;
          if (!c739) break;
          char c740 = 0;
          unsigned long t741 = __i734;
          t732->field2._M_local_buf[t741] = c740;
        for_step736: ;
          unsigned long t742 = __i734;
          unsigned long u743 = t742 + 1;
          __i734 = u743;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v744, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v745) {
bb746:
  struct _Guard* this747;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s748;
  this747 = v744;
  __s748 = v745;
  struct _Guard* t749 = this747;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t750 = __s748;
  t749->_M_guarded = t750;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v751, char* v752) {
bb753:
  char* __location754;
  char* __args755;
  char* __retval756;
  void* __loc757;
  __location754 = v751;
  __args755 = v752;
  char* t758 = __location754;
  void* cast759 = (void*)t758;
  __loc757 = cast759;
    void* t760 = __loc757;
    char* cast761 = (char*)t760;
    char* t762 = __args755;
    char t763 = *t762;
    *cast761 = t763;
    __retval756 = cast761;
    char* t764 = __retval756;
    return t764;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v765, char* v766) {
bb767:
  char* __c1768;
  char* __c2769;
  __c1768 = v765;
  __c2769 = v766;
    _Bool r770 = std____is_constant_evaluated();
    if (r770) {
      char* t771 = __c1768;
      char* t772 = __c2769;
      char* r773 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t771, t772);
    } else {
      char* t774 = __c2769;
      char t775 = *t774;
      char* t776 = __c1768;
      *t776 = t775;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v777, char* v778, unsigned long v779) {
bb780:
  char* __s1781;
  char* __s2782;
  unsigned long __n783;
  char* __retval784;
  __s1781 = v777;
  __s2782 = v778;
  __n783 = v779;
    unsigned long t785 = __n783;
    unsigned long c786 = 0;
    _Bool c787 = ((t785 == c786)) ? 1 : 0;
    if (c787) {
      char* t788 = __s1781;
      __retval784 = t788;
      char* t789 = __retval784;
      return t789;
    }
    _Bool r790 = std____is_constant_evaluated();
    if (r790) {
        unsigned long __i791;
        unsigned long c792 = 0;
        __i791 = c792;
        while (1) {
          unsigned long t794 = __i791;
          unsigned long t795 = __n783;
          _Bool c796 = ((t794 < t795)) ? 1 : 0;
          if (!c796) break;
          char* t797 = __s1781;
          unsigned long t798 = __i791;
          char* ptr799 = &(t797)[t798];
          unsigned long t800 = __i791;
          char* t801 = __s2782;
          char* ptr802 = &(t801)[t800];
          char* r803 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr799, ptr802);
        for_step793: ;
          unsigned long t804 = __i791;
          unsigned long u805 = t804 + 1;
          __i791 = u805;
        }
      char* t806 = __s1781;
      __retval784 = t806;
      char* t807 = __retval784;
      return t807;
    }
  char* t808 = __s1781;
  void* cast809 = (void*)t808;
  char* t810 = __s2782;
  void* cast811 = (void*)t810;
  unsigned long t812 = __n783;
  unsigned long c813 = 1;
  unsigned long b814 = t812 * c813;
  void* r815 = memcpy(cast809, cast811, b814);
  char* t816 = __s1781;
  __retval784 = t816;
  char* t817 = __retval784;
  return t817;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v818, char* v819, unsigned long v820) {
bb821:
  char* __s1822;
  char* __s2823;
  unsigned long __n824;
  char* __retval825;
  __s1822 = v818;
  __s2823 = v819;
  __n824 = v820;
    unsigned long t826 = __n824;
    unsigned long c827 = 0;
    _Bool c828 = ((t826 == c827)) ? 1 : 0;
    if (c828) {
      char* t829 = __s1822;
      __retval825 = t829;
      char* t830 = __retval825;
      return t830;
    }
    _Bool r831 = std____is_constant_evaluated();
    if (r831) {
      char* t832 = __s1822;
      char* t833 = __s2823;
      unsigned long t834 = __n824;
      char* r835 = __gnu_cxx__char_traits_char___copy(t832, t833, t834);
      __retval825 = r835;
      char* t836 = __retval825;
      return t836;
    }
  char* t837 = __s1822;
  void* cast838 = (void*)t837;
  char* t839 = __s2823;
  void* cast840 = (void*)t839;
  unsigned long t841 = __n824;
  void* r842 = memcpy(cast838, cast840, t841);
  char* cast843 = (char*)r842;
  __retval825 = cast843;
  char* t844 = __retval825;
  return t844;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v845, char* v846, unsigned long v847) {
bb848:
  char* __d849;
  char* __s850;
  unsigned long __n851;
  __d849 = v845;
  __s850 = v846;
  __n851 = v847;
    unsigned long t852 = __n851;
    unsigned long c853 = 1;
    _Bool c854 = ((t852 == c853)) ? 1 : 0;
    if (c854) {
      char* t855 = __d849;
      char* t856 = __s850;
      std__char_traits_char___assign(t855, t856);
    } else {
      char* t857 = __d849;
      char* t858 = __s850;
      unsigned long t859 = __n851;
      char* r860 = std__char_traits_char___copy(t857, t858, t859);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v861) {
bb862:
  char* __it863;
  char* __retval864;
  __it863 = v861;
  char* t865 = __it863;
  __retval864 = t865;
  char* t866 = __retval864;
  return t866;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v867, char* v868, char* v869) {
bb870:
  char* __p871;
  char* __k1872;
  char* __k2873;
  __p871 = v867;
  __k1872 = v868;
  __k2873 = v869;
    char* t874 = __p871;
    char* t875 = __k1872;
    char* r876 = char_const__std____niter_base_char_const__(t875);
    char* t877 = __k2873;
    char* t878 = __k1872;
    long diff879 = t877 - t878;
    unsigned long cast880 = (unsigned long)diff879;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t874, r876, cast880);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v881) {
bb882:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this883;
  char* __retval884;
  this883 = v881;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t885 = this883;
  char* t886 = t885->_M_dataplus._M_p;
  __retval884 = t886;
  char* t887 = __retval884;
  return t887;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v888, unsigned long v889) {
bb890:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this891;
  unsigned long __length892;
  this891 = v888;
  __length892 = v889;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t893 = this891;
  unsigned long t894 = __length892;
  t893->_M_string_length = t894;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v895, unsigned long v896) {
bb897:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this898;
  unsigned long __n899;
  char ref_tmp0900;
  this898 = v895;
  __n899 = v896;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t901 = this898;
  unsigned long t902 = __n899;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t901, t902);
  unsigned long t903 = __n899;
  char* r904 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t901);
  char* ptr905 = &(r904)[t903];
  char c906 = 0;
  ref_tmp0900 = c906;
  std__char_traits_char___assign(ptr905, &ref_tmp0900);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v907) {
bb908:
  struct _Guard* this909;
  this909 = v907;
  struct _Guard* t910 = this909;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t911 = t910->_M_guarded;
    _Bool cast912 = (_Bool)t911;
    if (cast912) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t913 = t910->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t913);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v914, char* v915, char* v916, struct std__forward_iterator_tag v917) {
bb918:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this919;
  char* __beg920;
  char* __end921;
  struct std__forward_iterator_tag unnamed922;
  unsigned long __dnew923;
  struct _Guard __guard924;
  this919 = v914;
  __beg920 = v915;
  __end921 = v916;
  unnamed922 = v917;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t925 = this919;
  char* t926 = __beg920;
  char* t927 = __end921;
  long r928 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t926, t927);
  unsigned long cast929 = (unsigned long)r928;
  __dnew923 = cast929;
    unsigned long t930 = __dnew923;
    unsigned long c931 = 15;
    _Bool c932 = ((t930 > c931)) ? 1 : 0;
    if (c932) {
      unsigned long c933 = 0;
      char* r934 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t925, &__dnew923, c933);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t925, r934);
      unsigned long t935 = __dnew923;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t925, t935);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t925);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard924, t925);
    char* r936 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t925);
    char* t937 = __beg920;
    char* t938 = __end921;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r936, t937, t938);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c939 = ((void*)0);
    __guard924._M_guarded = c939;
    unsigned long t940 = __dnew923;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t925, t940);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard924);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v941) {
bb942:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this943;
  this943 = v941;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t944 = this943;
  {
    struct std__allocator_char_* base945 = (struct std__allocator_char_*)((char *)t944 + 0);
    std__allocator_char____allocator(base945);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v946, struct std____new_allocator_char_* v947) {
bb948:
  struct std____new_allocator_char_* this949;
  struct std____new_allocator_char_* unnamed950;
  this949 = v946;
  unnamed950 = v947;
  struct std____new_allocator_char_* t951 = this949;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v952) {
bb953:
  char* __r954;
  char* __retval955;
  __r954 = v952;
  char* t956 = __r954;
  __retval955 = t956;
  char* t957 = __retval955;
  return t957;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v958) {
bb959:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this960;
  char* __retval961;
  this960 = v958;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t962 = this960;
  char* cast963 = (char*)&(t962->field2._M_local_buf);
  char* r964 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast963);
  __retval961 = r964;
  char* t965 = __retval961;
  return t965;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v966) {
bb967:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this968;
  _Bool __retval969;
  this968 = v966;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t970 = this968;
    char* r971 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t970);
    char* r972 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t970);
    _Bool c973 = ((r971 == r972)) ? 1 : 0;
    if (c973) {
        unsigned long t974 = t970->_M_string_length;
        unsigned long c975 = 15;
        _Bool c976 = ((t974 > c975)) ? 1 : 0;
        if (c976) {
          __builtin_unreachable();
        }
      _Bool c977 = 1;
      __retval969 = c977;
      _Bool t978 = __retval969;
      return t978;
    }
  _Bool c979 = 0;
  __retval969 = c979;
  _Bool t980 = __retval969;
  return t980;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v981, char* v982, unsigned long v983) {
bb984:
  struct std____new_allocator_char_* this985;
  char* __p986;
  unsigned long __n987;
  this985 = v981;
  __p986 = v982;
  __n987 = v983;
  struct std____new_allocator_char_* t988 = this985;
    unsigned long c989 = 1;
    unsigned long c990 = 16;
    _Bool c991 = ((c989 > c990)) ? 1 : 0;
    if (c991) {
      char* t992 = __p986;
      void* cast993 = (void*)t992;
      unsigned long t994 = __n987;
      unsigned long c995 = 1;
      unsigned long b996 = t994 * c995;
      unsigned long c997 = 1;
      operator_delete_3(cast993, b996, c997);
      return;
    }
  char* t998 = __p986;
  void* cast999 = (void*)t998;
  unsigned long t1000 = __n987;
  unsigned long c1001 = 1;
  unsigned long b1002 = t1000 * c1001;
  operator_delete_2(cast999, b1002);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1003, char* v1004, unsigned long v1005) {
bb1006:
  struct std__allocator_char_* this1007;
  char* __p1008;
  unsigned long __n1009;
  this1007 = v1003;
  __p1008 = v1004;
  __n1009 = v1005;
  struct std__allocator_char_* t1010 = this1007;
    _Bool r1011 = std____is_constant_evaluated();
    if (r1011) {
      char* t1012 = __p1008;
      void* cast1013 = (void*)t1012;
      operator_delete(cast1013);
      return;
    }
  struct std____new_allocator_char_* base1014 = (struct std____new_allocator_char_*)((char *)t1010 + 0);
  char* t1015 = __p1008;
  unsigned long t1016 = __n1009;
  std____new_allocator_char___deallocate(base1014, t1015, t1016);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1017, char* v1018, unsigned long v1019) {
bb1020:
  struct std__allocator_char_* __a1021;
  char* __p1022;
  unsigned long __n1023;
  __a1021 = v1017;
  __p1022 = v1018;
  __n1023 = v1019;
  struct std__allocator_char_* t1024 = __a1021;
  char* t1025 = __p1022;
  unsigned long t1026 = __n1023;
  std__allocator_char___deallocate(t1024, t1025, t1026);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1027, unsigned long v1028) {
bb1029:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1030;
  unsigned long __size1031;
  this1030 = v1027;
  __size1031 = v1028;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1032 = this1030;
  struct std__allocator_char_* r1033 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1032);
  char* r1034 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1032);
  unsigned long t1035 = __size1031;
  unsigned long c1036 = 1;
  unsigned long b1037 = t1035 + c1036;
  std__allocator_traits_std__allocator_char_____deallocate(r1033, r1034, b1037);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1038) {
bb1039:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1040;
  this1040 = v1038;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1041 = this1040;
    _Bool r1042 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1041);
    _Bool u1043 = !r1042;
    if (u1043) {
      unsigned long t1044 = t1041->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1041, t1044);
    }
  return;
}

