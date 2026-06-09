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
char _str_1[9] = "TestTest";
char _str_2[2] = " ";
char _str_3[12] = "TeTestTest ";
char _str_4[22] = "str3 != \"TeTestTest \"";
char _str_5[120] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_neq_8_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
char _str_8[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, struct std__allocator_char_* p3);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, unsigned long v7, struct std__allocator_char_* v8) {
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
        char* cast26 = (char*)&(_str_6);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v36, char* v37, struct std__allocator_char_* v38) {
bb39:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this40;
  char* __s41;
  struct std__allocator_char_* __a42;
  char* __end43;
  struct std__forward_iterator_tag agg_tmp044;
  this40 = v36;
  __s41 = v37;
  __a42 = v38;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t45 = this40;
  char* r46 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t45);
  struct std__allocator_char_* t47 = __a42;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t45->_M_dataplus, r46, t47);
      char* t48 = __s41;
      char* c49 = ((void*)0);
      _Bool c50 = ((t48 == c49)) ? 1 : 0;
      if (c50) {
        char* cast51 = (char*)&(_str_6);
        std____throw_logic_error(cast51);
      }
    char* t52 = __s41;
    char* t53 = __s41;
    unsigned long r54 = std__char_traits_char___length(t53);
    char* ptr55 = &(t52)[r54];
    __end43 = ptr55;
    char* t56 = __s41;
    char* t57 = __end43;
    struct std__forward_iterator_tag t58 = agg_tmp044;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t45, t56, t57, t58);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v59) {
bb60:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this61;
  struct std__allocator_char_ ref_tmp062;
  this61 = v59;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t63 = this61;
  char* r64 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t63);
  std__allocator_char___allocator_2(&ref_tmp062);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t63->_M_dataplus, r64, &ref_tmp062);
  {
    std__allocator_char____allocator(&ref_tmp062);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t63);
    unsigned long c65 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t63, c65);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v66, unsigned long v67, unsigned long v68, char* v69) {
bb70:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this71;
  unsigned long __n172;
  unsigned long __n273;
  char* __s74;
  this71 = v66;
  __n172 = v67;
  __n273 = v68;
  __s74 = v69;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t75 = this71;
    unsigned long r76 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t75);
    unsigned long r77 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t75);
    unsigned long t78 = __n172;
    unsigned long b79 = r77 - t78;
    unsigned long b80 = r76 - b79;
    unsigned long t81 = __n273;
    _Bool c82 = ((b80 < t81)) ? 1 : 0;
    if (c82) {
      char* t83 = __s74;
      std____throw_length_error(t83);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v84) {
bb85:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this86;
  unsigned long __retval87;
  unsigned long __sz88;
  this86 = v84;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t89 = this86;
  _Bool r90 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t89);
  unsigned long ternary91;
  if (r90) {
    unsigned long c92 = 15;
    ternary91 = (unsigned long)c92;
  } else {
    unsigned long t93 = t89->field2._M_allocated_capacity;
    ternary91 = (unsigned long)t93;
  }
  __sz88 = ternary91;
    unsigned long t94 = __sz88;
    unsigned long c95 = 15;
    _Bool c96 = ((t94 < c95)) ? 1 : 0;
    _Bool ternary97;
    if (c96) {
      _Bool c98 = 1;
      ternary97 = (_Bool)c98;
    } else {
      unsigned long t99 = __sz88;
      unsigned long r100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t89);
      _Bool c101 = ((t99 > r100)) ? 1 : 0;
      ternary97 = (_Bool)c101;
    }
    if (ternary97) {
      __builtin_unreachable();
    }
  unsigned long t102 = __sz88;
  __retval87 = t102;
  unsigned long t103 = __retval87;
  return t103;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v104) {
bb105:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this106;
  unsigned long __retval107;
  this106 = v104;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t108 = this106;
  unsigned long r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t108);
  __retval107 = r109;
  unsigned long t110 = __retval107;
  return t110;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v111, unsigned long v112, unsigned long v113, char* v114, unsigned long v115) {
bb116:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this117;
  unsigned long __pos118;
  unsigned long __len1119;
  char* __s120;
  unsigned long __len2121;
  unsigned long __how_much122;
  unsigned long __new_capacity123;
  char* __r124;
  this117 = v111;
  __pos118 = v112;
  __len1119 = v113;
  __s120 = v114;
  __len2121 = v115;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t125 = this117;
  unsigned long r126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t125);
  unsigned long t127 = __pos118;
  unsigned long b128 = r126 - t127;
  unsigned long t129 = __len1119;
  unsigned long b130 = b128 - t129;
  __how_much122 = b130;
  unsigned long r131 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t125);
  unsigned long t132 = __len2121;
  unsigned long b133 = r131 + t132;
  unsigned long t134 = __len1119;
  unsigned long b135 = b133 - t134;
  __new_capacity123 = b135;
  unsigned long r136 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t125);
  char* r137 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t125, &__new_capacity123, r136);
  __r124 = r137;
    unsigned long t138 = __pos118;
    _Bool cast139 = (_Bool)t138;
    if (cast139) {
      char* t140 = __r124;
      char* r141 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t125);
      unsigned long t142 = __pos118;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t140, r141, t142);
    }
    char* t143 = __s120;
    _Bool cast144 = (_Bool)t143;
    _Bool ternary145;
    if (cast144) {
      unsigned long t146 = __len2121;
      _Bool cast147 = (_Bool)t146;
      ternary145 = (_Bool)cast147;
    } else {
      _Bool c148 = 0;
      ternary145 = (_Bool)c148;
    }
    if (ternary145) {
      char* t149 = __r124;
      unsigned long t150 = __pos118;
      char* ptr151 = &(t149)[t150];
      char* t152 = __s120;
      unsigned long t153 = __len2121;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr151, t152, t153);
    }
    unsigned long t154 = __how_much122;
    _Bool cast155 = (_Bool)t154;
    if (cast155) {
      char* t156 = __r124;
      unsigned long t157 = __pos118;
      char* ptr158 = &(t156)[t157];
      unsigned long t159 = __len2121;
      char* ptr160 = &(ptr158)[t159];
      char* r161 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t125);
      unsigned long t162 = __pos118;
      char* ptr163 = &(r161)[t162];
      unsigned long t164 = __len1119;
      char* ptr165 = &(ptr163)[t164];
      unsigned long t166 = __how_much122;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr160, ptr165, t166);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t125);
  char* t167 = __r124;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t125, t167);
  unsigned long t168 = __new_capacity123;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t125, t168);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v169, char* v170, unsigned long v171) {
bb172:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this173;
  char* __s174;
  unsigned long __n175;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval176;
  unsigned long __len177;
  this173 = v169;
  __s174 = v170;
  __n175 = v171;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t178 = this173;
  unsigned long t179 = __n175;
  unsigned long r180 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t178);
  unsigned long b181 = t179 + r180;
  __len177 = b181;
    unsigned long t182 = __len177;
    unsigned long r183 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t178);
    _Bool c184 = ((t182 <= r183)) ? 1 : 0;
    if (c184) {
        unsigned long t185 = __n175;
        _Bool cast186 = (_Bool)t185;
        if (cast186) {
          char* r187 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t178);
          unsigned long r188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t178);
          char* ptr189 = &(r187)[r188];
          char* t190 = __s174;
          unsigned long t191 = __n175;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr189, t190, t191);
        }
    } else {
      unsigned long r192 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t178);
      unsigned long c193 = 0;
      char* t194 = __s174;
      unsigned long t195 = __n175;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t178, r192, c193, t194, t195);
    }
  unsigned long t196 = __len177;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t178, t196);
  __retval176 = t178;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t197 = __retval176;
  return t197;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v198, char* v199, unsigned long v200) {
bb201:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this202;
  char* __s203;
  unsigned long __n204;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval205;
  this202 = v198;
  __s203 = v199;
  __n204 = v200;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t206 = this202;
  unsigned long c207 = 0;
  unsigned long t208 = __n204;
  char* cast209 = (char*)&(_str_8);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t206, c207, t208, cast209);
  char* t210 = __s203;
  unsigned long t211 = __n204;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r212 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t206, t210, t211);
  __retval205 = r212;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t213 = __retval205;
  return t213;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v214) {
bb215:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this216;
  unsigned long __retval217;
  unsigned long __sz218;
  this216 = v214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t219 = this216;
  unsigned long t220 = t219->_M_string_length;
  __sz218 = t220;
    unsigned long t221 = __sz218;
    unsigned long r222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t219);
    _Bool c223 = ((t221 > r222)) ? 1 : 0;
    if (c223) {
      __builtin_unreachable();
    }
  unsigned long t224 = __sz218;
  __retval217 = t224;
  unsigned long t225 = __retval217;
  return t225;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v226, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v227) {
bb228:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this229;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str230;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval231;
  this229 = v226;
  __str230 = v227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t232 = this229;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t233 = __str230;
  char* r234 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t233);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t235 = __str230;
  unsigned long r236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t235);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r237 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t232, r234, r236);
  __retval231 = r237;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t238 = __retval231;
  return t238;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EOS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v239, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v240) {
bb241:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this242;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str243;
  this242 = v239;
  __str243 = v240;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t244 = this242;
  char* r245 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t244);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t246 = __str243;
  struct std__allocator_char_* r247 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t246);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t244->_M_dataplus, r245, r247);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t248 = __str243;
      _Bool r249 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t248);
      if (r249) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t244);
        char* cast250 = (char*)&(t244->field2._M_local_buf);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t251 = __str243;
        char* cast252 = (char*)&(t251->field2._M_local_buf);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t253 = __str243;
        unsigned long r254 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t253);
        unsigned long c255 = 1;
        unsigned long b256 = r254 + c255;
        char* r257 = std__char_traits_char___copy(cast250, cast252, b256);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t258 = __str243;
        char* r259 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t258);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t244, r259);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t260 = __str243;
        unsigned long t261 = t260->field2._M_allocated_capacity;
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t244, t261);
      }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t262 = __str243;
    unsigned long r263 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t262);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t244, r263);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t264 = __str243;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t265 = __str243;
    char* r266 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t265);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t264, r266);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t267 = __str243;
    unsigned long c268 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t267, c268);
  return;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_RKS8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v269, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v270) {
bb271:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs272;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs273;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval274;
  __lhs272 = v269;
  __rhs273 = v270;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t275 = __lhs272;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t276 = __rhs273;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r277 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(t275, t276);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval274, r277);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t278 = __retval274;
  return t278;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v279, struct std__allocator_char_* v280) {
bb281:
  struct std__allocator_char_* this282;
  struct std__allocator_char_* __a283;
  this282 = v279;
  __a283 = v280;
  struct std__allocator_char_* t284 = this282;
  struct std____new_allocator_char_* base285 = (struct std____new_allocator_char_*)((char *)t284 + 0);
  struct std__allocator_char_* t286 = __a283;
  struct std____new_allocator_char_* base287 = (struct std____new_allocator_char_*)((char *)t286 + 0);
  std____new_allocator_char_____new_allocator(base285, base287);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v288) {
bb289:
  struct std__allocator_char_* __rhs290;
  struct std__allocator_char_ __retval291;
  __rhs290 = v288;
  struct std__allocator_char_* t292 = __rhs290;
  std__allocator_char___allocator(&__retval291, t292);
  struct std__allocator_char_ t293 = __retval291;
  return t293;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v294) {
bb295:
  struct std__allocator_char_* __a296;
  struct std__allocator_char_ __retval297;
  __a296 = v294;
  struct std__allocator_char_* t298 = __a296;
  struct std__allocator_char_ r299 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t298);
  __retval297 = r299;
  struct std__allocator_char_ t300 = __retval297;
  return t300;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v301, struct std__allocator_char_* v302) {
bb303:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this304;
  struct std__allocator_char_* __a305;
  this304 = v301;
  __a305 = v302;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t306 = this304;
  char* r307 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t306);
  struct std__allocator_char_* t308 = __a305;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t306->_M_dataplus, r307, t308);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t306);
    unsigned long c309 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t306, c309);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v310, unsigned long v311) {
bb312:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this313;
  unsigned long __res314;
  unsigned long __capacity315;
  char* __tmp316;
  this313 = v310;
  __res314 = v311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t317 = this313;
  unsigned long r318 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t317);
  __capacity315 = r318;
    unsigned long t319 = __res314;
    unsigned long t320 = __capacity315;
    _Bool c321 = ((t319 <= t320)) ? 1 : 0;
    if (c321) {
      return;
    }
  unsigned long t322 = __capacity315;
  char* r323 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t317, &__res314, t322);
  __tmp316 = r323;
  char* t324 = __tmp316;
  char* r325 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t317);
  unsigned long r326 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t317);
  unsigned long c327 = 1;
  unsigned long b328 = r326 + c327;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t324, r325, b328);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t317);
  char* t329 = __tmp316;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t317, t329);
  unsigned long t330 = __res314;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t317, t330);
  return;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v331, unsigned long v332, char* v333, unsigned long v334, struct std__allocator_char_* v335) {
bb336:
  char* __lhs337;
  unsigned long __lhs_len338;
  char* __rhs339;
  unsigned long __rhs_len340;
  struct std__allocator_char_* __a341;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval342;
  _Bool nrvo343;
  struct std__allocator_char_ ref_tmp0344;
  __lhs337 = v331;
  __lhs_len338 = v332;
  __rhs339 = v333;
  __rhs_len340 = v334;
  __a341 = v335;
  _Bool c345 = 0;
  nrvo343 = c345;
  struct std__allocator_char_* t346 = __a341;
  struct std__allocator_char_ r347 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t346);
  ref_tmp0344 = r347;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(&__retval342, &ref_tmp0344);
  {
    std__allocator_char____allocator(&ref_tmp0344);
  }
    unsigned long t348 = __lhs_len338;
    unsigned long t349 = __rhs_len340;
    unsigned long b350 = t348 + t349;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval342, b350);
    char* t351 = __lhs337;
    unsigned long t352 = __lhs_len338;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval342, t351, t352);
    char* t354 = __rhs339;
    unsigned long t355 = __rhs_len340;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r356 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval342, t354, t355);
    _Bool c357 = 1;
    nrvo343 = c357;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t358 = __retval342;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val359 = t358;
    {
      _Bool t360 = nrvo343;
      _Bool u361 = !t360;
      if (u361) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval342);
      }
    }
    return ret_val359;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v362) {
bb363:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this364;
  char* __retval365;
  this364 = v362;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t366 = this364;
  char* r367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t366);
  __retval365 = r367;
  char* t368 = __retval365;
  return t368;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v369) {
bb370:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this371;
  struct std__allocator_char_ __retval372;
  this371 = v369;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t373 = this371;
  struct std__allocator_char_* r374 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t373);
  std__allocator_char___allocator(&__retval372, r374);
  struct std__allocator_char_ t375 = __retval372;
  return t375;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v376, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v377) {
bb378:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs379;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs380;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval381;
  struct std__allocator_char_ ref_tmp0382;
  __lhs379 = v376;
  __rhs380 = v377;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t383 = __lhs379;
  char* r384 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t383);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t385 = __lhs379;
  unsigned long r386 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t385);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t387 = __rhs380;
  char* r388 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t387);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t389 = __rhs380;
  unsigned long r390 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t389);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t391 = __lhs379;
  struct std__allocator_char_ r392 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t391);
  ref_tmp0382 = r392;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r393 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r384, r386, r388, r390, &ref_tmp0382);
    __retval381 = r393;
  {
    std__allocator_char____allocator(&ref_tmp0382);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t394 = __retval381;
  return t394;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb395:
  _Bool __retval396;
  _Bool t397 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval396 = t397;
  _Bool t398 = __retval396;
  return t398;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v399, struct std____new_allocator_char_* v400) {
bb401:
  struct std____new_allocator_char_* this402;
  struct std____new_allocator_char_* unnamed403;
  struct std____new_allocator_char_* __retval404;
  this402 = v399;
  unnamed403 = v400;
  struct std____new_allocator_char_* t405 = this402;
  __retval404 = t405;
  struct std____new_allocator_char_* t406 = __retval404;
  return t406;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v407, struct std__allocator_char_* v408) {
bb409:
  struct std__allocator_char_* this410;
  struct std__allocator_char_* unnamed411;
  struct std__allocator_char_* __retval412;
  this410 = v407;
  unnamed411 = v408;
  struct std__allocator_char_* t413 = this410;
  struct std____new_allocator_char_* base414 = (struct std____new_allocator_char_*)((char *)t413 + 0);
  struct std__allocator_char_* t415 = unnamed411;
  struct std____new_allocator_char_* base416 = (struct std____new_allocator_char_*)((char *)t415 + 0);
  struct std____new_allocator_char_* r417 = std____new_allocator_char___operator_(base414, base416);
  __retval412 = t413;
  struct std__allocator_char_* t418 = __retval412;
  return t418;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v419, struct std__allocator_char_* v420) {
bb421:
  struct std__allocator_char_* __one422;
  struct std__allocator_char_* __two423;
  __one422 = v419;
  __two423 = v420;
    struct std__allocator_char_* t424 = __two423;
    struct std__allocator_char_* t425 = __one422;
    struct std__allocator_char_* r426 = std__allocator_char___operator_(t425, t424);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v427, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v428) {
bb429:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this430;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str431;
  this430 = v427;
  __str431 = v428;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t432 = this430;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t433 = __str431;
    _Bool c434 = ((t432 != t433)) ? 1 : 0;
    if (c434) {
      unsigned long __rsize435;
      unsigned long __capacity436;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t437 = __str431;
      unsigned long r438 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t437);
      __rsize435 = r438;
      unsigned long r439 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t432);
      __capacity436 = r439;
        unsigned long t440 = __rsize435;
        unsigned long t441 = __capacity436;
        _Bool c442 = ((t440 > t441)) ? 1 : 0;
        if (c442) {
          unsigned long __new_capacity443;
          char* __tmp444;
          unsigned long t445 = __rsize435;
          __new_capacity443 = t445;
          unsigned long t446 = __capacity436;
          char* r447 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t432, &__new_capacity443, t446);
          __tmp444 = r447;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t432);
          char* t448 = __tmp444;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t432, t448);
          unsigned long t449 = __new_capacity443;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t432, t449);
        }
        unsigned long t450 = __rsize435;
        _Bool cast451 = (_Bool)t450;
        if (cast451) {
          char* r452 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t432);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t453 = __str431;
          char* r454 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t453);
          unsigned long t455 = __rsize435;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r452, r454, t455);
        }
      unsigned long t456 = __rsize435;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t432, t456);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v457) {
bb458:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this459;
  this459 = v457;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t460 = this459;
  unsigned long c461 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t460, c461);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v462, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v463) {
bb464:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this465;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str466;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval467;
  _Bool __equal_allocs468;
  this465 = v462;
  __str466 = v463;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t469 = this465;
  _Bool c470 = 1;
  __equal_allocs468 = c470;
    _Bool r471 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t469);
    _Bool u472 = !r471;
    _Bool ternary473;
    if (u472) {
      _Bool r474 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary473 = (_Bool)r474;
    } else {
      _Bool c475 = 0;
      ternary473 = (_Bool)c475;
    }
    _Bool ternary476;
    if (ternary473) {
      _Bool t477 = __equal_allocs468;
      _Bool u478 = !t477;
      ternary476 = (_Bool)u478;
    } else {
      _Bool c479 = 0;
      ternary476 = (_Bool)c479;
    }
    if (ternary476) {
      unsigned long t480 = t469->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t469, t480);
      char* r481 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t469);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t469, r481);
      unsigned long c482 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t469, c482);
    }
  struct std__allocator_char_* r483 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t469);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t484 = __str466;
  struct std__allocator_char_* r485 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t484);
  void_std____alloc_on_move_std__allocator_char___(r483, r485);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t486 = __str466;
    _Bool r487 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t486);
    if (r487) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t488 = __str466;
        _Bool c489 = ((t488 != t469)) ? 1 : 0;
        if (c489) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t490 = __str466;
            unsigned long r491 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t490);
            _Bool cast492 = (_Bool)r491;
            if (cast492) {
              char* r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t469);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t494 = __str466;
              char* r495 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t494);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t496 = __str466;
              unsigned long r497 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t496);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r493, r495, r497);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = __str466;
          unsigned long r499 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t498);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t469, r499);
        }
    } else {
        _Bool r500 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary501;
        if (r500) {
          _Bool c502 = 1;
          ternary501 = (_Bool)c502;
        } else {
          _Bool t503 = __equal_allocs468;
          ternary501 = (_Bool)t503;
        }
        if (ternary501) {
          char* __data504;
          unsigned long __capacity505;
          char* c506 = ((void*)0);
          __data504 = c506;
            _Bool r507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t469);
            _Bool u508 = !r507;
            if (u508) {
                _Bool t509 = __equal_allocs468;
                if (t509) {
                  char* r510 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t469);
                  __data504 = r510;
                  unsigned long t511 = t469->field2._M_allocated_capacity;
                  __capacity505 = t511;
                } else {
                  unsigned long t512 = t469->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t469, t512);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t513 = __str466;
          char* r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t513);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t469, r514);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t515 = __str466;
          unsigned long r516 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t515);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t469, r516);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t517 = __str466;
          unsigned long t518 = t517->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t469, t518);
            char* t519 = __data504;
            _Bool cast520 = (_Bool)t519;
            if (cast520) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t521 = __str466;
              char* t522 = __data504;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t521, t522);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t523 = __str466;
              unsigned long t524 = __capacity505;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t523, t524);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t525 = __str466;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t526 = __str466;
              char* r527 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t526);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t525, r527);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t528 = __str466;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t469, t528);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t529 = __str466;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t529);
  __retval467 = t469;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t530 = __retval467;
  return t530;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v531) {
bb532:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this533;
  this533 = v531;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t534 = this533;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t534);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t534->_M_dataplus);
  }
  return;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v535, char* v536) {
bb537:
  char* __c1538;
  char* __c2539;
  _Bool __retval540;
  __c1538 = v535;
  __c2539 = v536;
  char* t541 = __c1538;
  char t542 = *t541;
  unsigned char cast543 = (unsigned char)t542;
  int cast544 = (int)cast543;
  char* t545 = __c2539;
  char t546 = *t545;
  unsigned char cast547 = (unsigned char)t546;
  int cast548 = (int)cast547;
  _Bool c549 = ((cast544 < cast548)) ? 1 : 0;
  __retval540 = c549;
  _Bool t550 = __retval540;
  return t550;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v551, char* v552, unsigned long v553) {
bb554:
  char* __s1555;
  char* __s2556;
  unsigned long __n557;
  int __retval558;
  __s1555 = v551;
  __s2556 = v552;
  __n557 = v553;
    unsigned long t559 = __n557;
    unsigned long c560 = 0;
    _Bool c561 = ((t559 == c560)) ? 1 : 0;
    if (c561) {
      int c562 = 0;
      __retval558 = c562;
      int t563 = __retval558;
      return t563;
    }
    _Bool r564 = std____is_constant_evaluated();
    if (r564) {
        unsigned long __i565;
        unsigned long c566 = 0;
        __i565 = c566;
        while (1) {
          unsigned long t568 = __i565;
          unsigned long t569 = __n557;
          _Bool c570 = ((t568 < t569)) ? 1 : 0;
          if (!c570) break;
            unsigned long t571 = __i565;
            char* t572 = __s1555;
            char* ptr573 = &(t572)[t571];
            unsigned long t574 = __i565;
            char* t575 = __s2556;
            char* ptr576 = &(t575)[t574];
            _Bool r577 = std__char_traits_char___lt(ptr573, ptr576);
            if (r577) {
              int c578 = -1;
              __retval558 = c578;
              int t579 = __retval558;
              int ret_val580 = t579;
              return ret_val580;
            } else {
                unsigned long t581 = __i565;
                char* t582 = __s2556;
                char* ptr583 = &(t582)[t581];
                unsigned long t584 = __i565;
                char* t585 = __s1555;
                char* ptr586 = &(t585)[t584];
                _Bool r587 = std__char_traits_char___lt(ptr583, ptr586);
                if (r587) {
                  int c588 = 1;
                  __retval558 = c588;
                  int t589 = __retval558;
                  int ret_val590 = t589;
                  return ret_val590;
                }
            }
        for_step567: ;
          unsigned long t591 = __i565;
          unsigned long u592 = t591 + 1;
          __i565 = u592;
        }
      int c593 = 0;
      __retval558 = c593;
      int t594 = __retval558;
      return t594;
    }
  char* t595 = __s1555;
  void* cast596 = (void*)t595;
  char* t597 = __s2556;
  void* cast598 = (void*)t597;
  unsigned long t599 = __n557;
  int r600 = memcmp(cast596, cast598, t599);
  __retval558 = r600;
  int t601 = __retval558;
  return t601;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v602) {
bb603:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this604;
  char* __retval605;
  this604 = v602;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t606 = this604;
  char* r607 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t606);
  __retval605 = r607;
  char* t608 = __retval605;
  return t608;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v609, char* v610) {
bb611:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs612;
  char* __rhs613;
  _Bool __retval614;
  __lhs612 = v609;
  __rhs613 = v610;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t615 = __lhs612;
  unsigned long r616 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t615);
  char* t617 = __rhs613;
  unsigned long r618 = std__char_traits_char___length(t617);
  _Bool c619 = ((r616 == r618)) ? 1 : 0;
  _Bool ternary620;
  if (c619) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t621 = __lhs612;
    char* r622 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t621);
    char* t623 = __rhs613;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t624 = __lhs612;
    unsigned long r625 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t624);
    int r626 = std__char_traits_char___compare(r622, t623, r625);
    _Bool cast627 = (_Bool)r626;
    _Bool u628 = !cast627;
    ternary620 = (_Bool)u628;
  } else {
    _Bool c629 = 0;
    ternary620 = (_Bool)c629;
  }
  __retval614 = ternary620;
  _Bool t630 = __retval614;
  return t630;
}

// function: main
int main() {
bb631:
  int __retval632;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1633;
  struct std__allocator_char_ ref_tmp0634;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2635;
  struct std__allocator_char_ ref_tmp1636;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3637;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ strN638;
  struct std__allocator_char_ ref_tmp2639;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp3640;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp4641;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup642;
  int c643 = 0;
  __retval632 = c643;
  char* cast644 = (char*)&(_str);
  unsigned long c645 = 2;
  std__allocator_char___allocator_2(&ref_tmp0634);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(&str1633, cast644, c645, &ref_tmp0634);
  {
    std__allocator_char____allocator(&ref_tmp0634);
  }
    char* cast646 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1636);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2635, cast646, &ref_tmp1636);
    {
      std__allocator_char____allocator(&ref_tmp1636);
    }
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str3637);
        char* cast647 = (char*)&(_str_2);
        std__allocator_char___allocator_2(&ref_tmp2639);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&strN638, cast647, &ref_tmp2639);
        {
          std__allocator_char____allocator(&ref_tmp2639);
        }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r648 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(&str1633, &str2635);
          ref_tmp4641 = r648;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r649 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&ref_tmp4641, &strN638);
            ref_tmp3640 = r649;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r650 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str3637, &ref_tmp3640);
              tmp_exprcleanup642 = r650;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp3640);
            }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp4641);
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t651 = tmp_exprcleanup642;
          char* cast652 = (char*)&(_str_3);
          _Bool r653 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str3637, cast652);
          _Bool u654 = !r653;
          if (u654) {
          } else {
            char* cast655 = (char*)&(_str_4);
            char* c656 = _str_5;
            unsigned int c657 = 19;
            char* cast658 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast655, c656, c657, cast658);
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&strN638);
        }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3637);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2635);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1633);
  }
  int t659 = __retval632;
  return t659;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v660) {
bb661:
  struct std____new_allocator_char_* this662;
  this662 = v660;
  struct std____new_allocator_char_* t663 = this662;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v664) {
bb665:
  char* __r666;
  char* __retval667;
  __r666 = v664;
  char* t668 = __r666;
  __retval667 = t668;
  char* t669 = __retval667;
  return t669;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v670) {
bb671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  char* __retval673;
  this672 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t674 = this672;
  char* cast675 = (char*)&(t674->field2._M_local_buf);
  char* r676 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast675);
  __retval673 = r676;
  char* t677 = __retval673;
  return t677;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v678, char* v679, struct std__allocator_char_* v680) {
bb681:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this682;
  char* __dat683;
  struct std__allocator_char_* __a684;
  this682 = v678;
  __dat683 = v679;
  __a684 = v680;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t685 = this682;
  struct std__allocator_char_* base686 = (struct std__allocator_char_*)((char *)t685 + 0);
  struct std__allocator_char_* t687 = __a684;
  std__allocator_char___allocator(base686, t687);
    char* t688 = __dat683;
    t685->_M_p = t688;
  return;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v689, char* v690, struct std__random_access_iterator_tag v691) {
bb692:
  char* __first693;
  char* __last694;
  struct std__random_access_iterator_tag unnamed695;
  long __retval696;
  __first693 = v689;
  __last694 = v690;
  unnamed695 = v691;
  char* t697 = __last694;
  char* t698 = __first693;
  long diff699 = t697 - t698;
  __retval696 = diff699;
  long t700 = __retval696;
  return t700;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v701) {
bb702:
  char** unnamed703;
  struct std__random_access_iterator_tag __retval704;
  unnamed703 = v701;
  struct std__random_access_iterator_tag t705 = __retval704;
  return t705;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v706, char* v707) {
bb708:
  char* __first709;
  char* __last710;
  long __retval711;
  struct std__random_access_iterator_tag agg_tmp0712;
  __first709 = v706;
  __last710 = v707;
  char* t713 = __first709;
  char* t714 = __last710;
  struct std__random_access_iterator_tag r715 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first709);
  agg_tmp0712 = r715;
  struct std__random_access_iterator_tag t716 = agg_tmp0712;
  long r717 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t713, t714, t716);
  __retval711 = r717;
  long t718 = __retval711;
  return t718;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v719, char* v720) {
bb721:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this722;
  char* __p723;
  this722 = v719;
  __p723 = v720;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t724 = this722;
  char* t725 = __p723;
  t724->_M_dataplus._M_p = t725;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v726) {
bb727:
  struct std__allocator_char_* __a728;
  unsigned long __retval729;
  __a728 = v726;
  unsigned long c730 = -1;
  unsigned long c731 = 1;
  unsigned long b732 = c730 / c731;
  __retval729 = b732;
  unsigned long t733 = __retval729;
  return t733;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v734) {
bb735:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this736;
  struct std__allocator_char_* __retval737;
  this736 = v734;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t738 = this736;
  struct std__allocator_char_* base739 = (struct std__allocator_char_*)((char *)&(t738->_M_dataplus) + 0);
  __retval737 = base739;
  struct std__allocator_char_* t740 = __retval737;
  return t740;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v741, unsigned long* v742) {
bb743:
  unsigned long* __a744;
  unsigned long* __b745;
  unsigned long* __retval746;
  __a744 = v741;
  __b745 = v742;
    unsigned long* t747 = __b745;
    unsigned long t748 = *t747;
    unsigned long* t749 = __a744;
    unsigned long t750 = *t749;
    _Bool c751 = ((t748 < t750)) ? 1 : 0;
    if (c751) {
      unsigned long* t752 = __b745;
      __retval746 = t752;
      unsigned long* t753 = __retval746;
      return t753;
    }
  unsigned long* t754 = __a744;
  __retval746 = t754;
  unsigned long* t755 = __retval746;
  return t755;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v756) {
bb757:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this758;
  unsigned long __retval759;
  unsigned long __diffmax760;
  unsigned long __allocmax761;
  this758 = v756;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t762 = this758;
  unsigned long c763 = 9223372036854775807;
  __diffmax760 = c763;
  struct std__allocator_char_* r764 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t762);
  unsigned long r765 = std__allocator_traits_std__allocator_char_____max_size(r764);
  __allocmax761 = r765;
  unsigned long* r766 = unsigned_long_const__std__min_unsigned_long_(&__diffmax760, &__allocmax761);
  unsigned long t767 = *r766;
  unsigned long c768 = 1;
  unsigned long b769 = t767 - c768;
  __retval759 = b769;
  unsigned long t770 = __retval759;
  return t770;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb771:
  _Bool __retval772;
    _Bool c773 = 0;
    __retval772 = c773;
    _Bool t774 = __retval772;
    return t774;
  abort();
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v775) {
bb776:
  struct std____new_allocator_char_* this777;
  unsigned long __retval778;
  this777 = v775;
  struct std____new_allocator_char_* t779 = this777;
  unsigned long c780 = 9223372036854775807;
  unsigned long c781 = 1;
  unsigned long b782 = c780 / c781;
  __retval778 = b782;
  unsigned long t783 = __retval778;
  return t783;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v784, unsigned long v785, void* v786) {
bb787:
  struct std____new_allocator_char_* this788;
  unsigned long __n789;
  void* unnamed790;
  char* __retval791;
  this788 = v784;
  __n789 = v785;
  unnamed790 = v786;
  struct std____new_allocator_char_* t792 = this788;
    unsigned long t793 = __n789;
    unsigned long r794 = std____new_allocator_char____M_max_size___const(t792);
    _Bool c795 = ((t793 > r794)) ? 1 : 0;
    if (c795) {
        unsigned long t796 = __n789;
        unsigned long c797 = -1;
        unsigned long c798 = 1;
        unsigned long b799 = c797 / c798;
        _Bool c800 = ((t796 > b799)) ? 1 : 0;
        if (c800) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c801 = 1;
    unsigned long c802 = 16;
    _Bool c803 = ((c801 > c802)) ? 1 : 0;
    if (c803) {
      unsigned long __al804;
      unsigned long c805 = 1;
      __al804 = c805;
      unsigned long t806 = __n789;
      unsigned long c807 = 1;
      unsigned long b808 = t806 * c807;
      unsigned long t809 = __al804;
      void* r810 = operator_new_2(b808, t809);
      char* cast811 = (char*)r810;
      __retval791 = cast811;
      char* t812 = __retval791;
      return t812;
    }
  unsigned long t813 = __n789;
  unsigned long c814 = 1;
  unsigned long b815 = t813 * c814;
  void* r816 = operator_new(b815);
  char* cast817 = (char*)r816;
  __retval791 = cast817;
  char* t818 = __retval791;
  return t818;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v819, unsigned long v820) {
bb821:
  struct std__allocator_char_* this822;
  unsigned long __n823;
  char* __retval824;
  this822 = v819;
  __n823 = v820;
  struct std__allocator_char_* t825 = this822;
    _Bool r826 = std____is_constant_evaluated();
    if (r826) {
        unsigned long t827 = __n823;
        unsigned long c828 = 1;
        unsigned long ovr829;
        _Bool ovf830 = __builtin_mul_overflow(t827, c828, &ovr829);
        __n823 = ovr829;
        if (ovf830) {
          std____throw_bad_array_new_length();
        }
      unsigned long t831 = __n823;
      void* r832 = operator_new(t831);
      char* cast833 = (char*)r832;
      __retval824 = cast833;
      char* t834 = __retval824;
      return t834;
    }
  struct std____new_allocator_char_* base835 = (struct std____new_allocator_char_*)((char *)t825 + 0);
  unsigned long t836 = __n823;
  void* c837 = ((void*)0);
  char* r838 = std____new_allocator_char___allocate(base835, t836, c837);
  __retval824 = r838;
  char* t839 = __retval824;
  return t839;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v840, unsigned long v841) {
bb842:
  struct std__allocator_char_* __a843;
  unsigned long __n844;
  char* __retval845;
  __a843 = v840;
  __n844 = v841;
  struct std__allocator_char_* t846 = __a843;
  unsigned long t847 = __n844;
  char* r848 = std__allocator_char___allocate(t846, t847);
  __retval845 = r848;
  char* t849 = __retval845;
  return t849;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v850, unsigned long v851) {
bb852:
  struct std__allocator_char_* __a853;
  unsigned long __n854;
  char* __retval855;
  char* __p856;
  __a853 = v850;
  __n854 = v851;
  struct std__allocator_char_* t857 = __a853;
  unsigned long t858 = __n854;
  char* r859 = std__allocator_traits_std__allocator_char_____allocate(t857, t858);
  __p856 = r859;
  char* t860 = __p856;
  __retval855 = t860;
  char* t861 = __retval855;
  return t861;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v862) {
bb863:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this864;
  struct std__allocator_char_* __retval865;
  this864 = v862;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t866 = this864;
  struct std__allocator_char_* base867 = (struct std__allocator_char_*)((char *)&(t866->_M_dataplus) + 0);
  __retval865 = base867;
  struct std__allocator_char_* t868 = __retval865;
  return t868;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v869, unsigned long* v870, unsigned long v871) {
bb872:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this873;
  unsigned long* __capacity874;
  unsigned long __old_capacity875;
  char* __retval876;
  this873 = v869;
  __capacity874 = v870;
  __old_capacity875 = v871;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t877 = this873;
    unsigned long* t878 = __capacity874;
    unsigned long t879 = *t878;
    unsigned long r880 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t877);
    _Bool c881 = ((t879 > r880)) ? 1 : 0;
    if (c881) {
      char* cast882 = (char*)&(_str_7);
      std____throw_length_error(cast882);
    }
    unsigned long* t883 = __capacity874;
    unsigned long t884 = *t883;
    unsigned long t885 = __old_capacity875;
    _Bool c886 = ((t884 > t885)) ? 1 : 0;
    _Bool ternary887;
    if (c886) {
      unsigned long* t888 = __capacity874;
      unsigned long t889 = *t888;
      unsigned long c890 = 2;
      unsigned long t891 = __old_capacity875;
      unsigned long b892 = c890 * t891;
      _Bool c893 = ((t889 < b892)) ? 1 : 0;
      ternary887 = (_Bool)c893;
    } else {
      _Bool c894 = 0;
      ternary887 = (_Bool)c894;
    }
    if (ternary887) {
      unsigned long c895 = 2;
      unsigned long t896 = __old_capacity875;
      unsigned long b897 = c895 * t896;
      unsigned long* t898 = __capacity874;
      *t898 = b897;
        unsigned long* t899 = __capacity874;
        unsigned long t900 = *t899;
        unsigned long r901 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t877);
        _Bool c902 = ((t900 > r901)) ? 1 : 0;
        if (c902) {
          unsigned long r903 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t877);
          unsigned long* t904 = __capacity874;
          *t904 = r903;
        }
    }
  struct std__allocator_char_* r905 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t877);
  unsigned long* t906 = __capacity874;
  unsigned long t907 = *t906;
  unsigned long c908 = 1;
  unsigned long b909 = t907 + c908;
  char* r910 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r905, b909);
  __retval876 = r910;
  char* t911 = __retval876;
  return t911;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v912, unsigned long v913) {
bb914:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this915;
  unsigned long __capacity916;
  this915 = v912;
  __capacity916 = v913;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t917 = this915;
  unsigned long t918 = __capacity916;
  t917->field2._M_allocated_capacity = t918;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb919:
  _Bool __retval920;
    _Bool c921 = 0;
    __retval920 = c921;
    _Bool t922 = __retval920;
    return t922;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v923) {
bb924:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this925;
  this925 = v923;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t926 = this925;
    _Bool r927 = std__is_constant_evaluated();
    if (r927) {
        unsigned long __i928;
        unsigned long c929 = 0;
        __i928 = c929;
        while (1) {
          unsigned long t931 = __i928;
          unsigned long c932 = 15;
          _Bool c933 = ((t931 <= c932)) ? 1 : 0;
          if (!c933) break;
          char c934 = 0;
          unsigned long t935 = __i928;
          t926->field2._M_local_buf[t935] = c934;
        for_step930: ;
          unsigned long t936 = __i928;
          unsigned long u937 = t936 + 1;
          __i928 = u937;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v938, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v939) {
bb940:
  struct _Guard* this941;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s942;
  this941 = v938;
  __s942 = v939;
  struct _Guard* t943 = this941;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t944 = __s942;
  t943->_M_guarded = t944;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v945, char* v946) {
bb947:
  char* __location948;
  char* __args949;
  char* __retval950;
  void* __loc951;
  __location948 = v945;
  __args949 = v946;
  char* t952 = __location948;
  void* cast953 = (void*)t952;
  __loc951 = cast953;
    void* t954 = __loc951;
    char* cast955 = (char*)t954;
    char* t956 = __args949;
    char t957 = *t956;
    *cast955 = t957;
    __retval950 = cast955;
    char* t958 = __retval950;
    return t958;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v959, char* v960) {
bb961:
  char* __c1962;
  char* __c2963;
  __c1962 = v959;
  __c2963 = v960;
    _Bool r964 = std____is_constant_evaluated();
    if (r964) {
      char* t965 = __c1962;
      char* t966 = __c2963;
      char* r967 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t965, t966);
    } else {
      char* t968 = __c2963;
      char t969 = *t968;
      char* t970 = __c1962;
      *t970 = t969;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v971, char* v972, unsigned long v973) {
bb974:
  char* __s1975;
  char* __s2976;
  unsigned long __n977;
  char* __retval978;
  __s1975 = v971;
  __s2976 = v972;
  __n977 = v973;
    unsigned long t979 = __n977;
    unsigned long c980 = 0;
    _Bool c981 = ((t979 == c980)) ? 1 : 0;
    if (c981) {
      char* t982 = __s1975;
      __retval978 = t982;
      char* t983 = __retval978;
      return t983;
    }
    _Bool r984 = std____is_constant_evaluated();
    if (r984) {
        unsigned long __i985;
        unsigned long c986 = 0;
        __i985 = c986;
        while (1) {
          unsigned long t988 = __i985;
          unsigned long t989 = __n977;
          _Bool c990 = ((t988 < t989)) ? 1 : 0;
          if (!c990) break;
          char* t991 = __s1975;
          unsigned long t992 = __i985;
          char* ptr993 = &(t991)[t992];
          unsigned long t994 = __i985;
          char* t995 = __s2976;
          char* ptr996 = &(t995)[t994];
          char* r997 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr993, ptr996);
        for_step987: ;
          unsigned long t998 = __i985;
          unsigned long u999 = t998 + 1;
          __i985 = u999;
        }
      char* t1000 = __s1975;
      __retval978 = t1000;
      char* t1001 = __retval978;
      return t1001;
    }
  char* t1002 = __s1975;
  void* cast1003 = (void*)t1002;
  char* t1004 = __s2976;
  void* cast1005 = (void*)t1004;
  unsigned long t1006 = __n977;
  unsigned long c1007 = 1;
  unsigned long b1008 = t1006 * c1007;
  void* r1009 = memcpy(cast1003, cast1005, b1008);
  char* t1010 = __s1975;
  __retval978 = t1010;
  char* t1011 = __retval978;
  return t1011;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1012, char* v1013, unsigned long v1014) {
bb1015:
  char* __s11016;
  char* __s21017;
  unsigned long __n1018;
  char* __retval1019;
  __s11016 = v1012;
  __s21017 = v1013;
  __n1018 = v1014;
    unsigned long t1020 = __n1018;
    unsigned long c1021 = 0;
    _Bool c1022 = ((t1020 == c1021)) ? 1 : 0;
    if (c1022) {
      char* t1023 = __s11016;
      __retval1019 = t1023;
      char* t1024 = __retval1019;
      return t1024;
    }
    _Bool r1025 = std____is_constant_evaluated();
    if (r1025) {
      char* t1026 = __s11016;
      char* t1027 = __s21017;
      unsigned long t1028 = __n1018;
      char* r1029 = __gnu_cxx__char_traits_char___copy(t1026, t1027, t1028);
      __retval1019 = r1029;
      char* t1030 = __retval1019;
      return t1030;
    }
  char* t1031 = __s11016;
  void* cast1032 = (void*)t1031;
  char* t1033 = __s21017;
  void* cast1034 = (void*)t1033;
  unsigned long t1035 = __n1018;
  void* r1036 = memcpy(cast1032, cast1034, t1035);
  char* cast1037 = (char*)r1036;
  __retval1019 = cast1037;
  char* t1038 = __retval1019;
  return t1038;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1039, char* v1040, unsigned long v1041) {
bb1042:
  char* __d1043;
  char* __s1044;
  unsigned long __n1045;
  __d1043 = v1039;
  __s1044 = v1040;
  __n1045 = v1041;
    unsigned long t1046 = __n1045;
    unsigned long c1047 = 1;
    _Bool c1048 = ((t1046 == c1047)) ? 1 : 0;
    if (c1048) {
      char* t1049 = __d1043;
      char* t1050 = __s1044;
      std__char_traits_char___assign(t1049, t1050);
    } else {
      char* t1051 = __d1043;
      char* t1052 = __s1044;
      unsigned long t1053 = __n1045;
      char* r1054 = std__char_traits_char___copy(t1051, t1052, t1053);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1055) {
bb1056:
  char* __it1057;
  char* __retval1058;
  __it1057 = v1055;
  char* t1059 = __it1057;
  __retval1058 = t1059;
  char* t1060 = __retval1058;
  return t1060;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1061, char* v1062, char* v1063) {
bb1064:
  char* __p1065;
  char* __k11066;
  char* __k21067;
  __p1065 = v1061;
  __k11066 = v1062;
  __k21067 = v1063;
    char* t1068 = __p1065;
    char* t1069 = __k11066;
    char* r1070 = char_const__std____niter_base_char_const__(t1069);
    char* t1071 = __k21067;
    char* t1072 = __k11066;
    long diff1073 = t1071 - t1072;
    unsigned long cast1074 = (unsigned long)diff1073;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1068, r1070, cast1074);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1075) {
bb1076:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1077;
  char* __retval1078;
  this1077 = v1075;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1079 = this1077;
  char* t1080 = t1079->_M_dataplus._M_p;
  __retval1078 = t1080;
  char* t1081 = __retval1078;
  return t1081;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1082, unsigned long v1083) {
bb1084:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1085;
  unsigned long __length1086;
  this1085 = v1082;
  __length1086 = v1083;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1087 = this1085;
  unsigned long t1088 = __length1086;
  t1087->_M_string_length = t1088;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1089, unsigned long v1090) {
bb1091:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1092;
  unsigned long __n1093;
  char ref_tmp01094;
  this1092 = v1089;
  __n1093 = v1090;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1095 = this1092;
  unsigned long t1096 = __n1093;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1095, t1096);
  unsigned long t1097 = __n1093;
  char* r1098 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1095);
  char* ptr1099 = &(r1098)[t1097];
  char c1100 = 0;
  ref_tmp01094 = c1100;
  std__char_traits_char___assign(ptr1099, &ref_tmp01094);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1101) {
bb1102:
  struct _Guard* this1103;
  this1103 = v1101;
  struct _Guard* t1104 = this1103;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1105 = t1104->_M_guarded;
    _Bool cast1106 = (_Bool)t1105;
    if (cast1106) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1107 = t1104->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1107);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1108, char* v1109, char* v1110, struct std__forward_iterator_tag v1111) {
bb1112:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1113;
  char* __beg1114;
  char* __end1115;
  struct std__forward_iterator_tag unnamed1116;
  unsigned long __dnew1117;
  struct _Guard __guard1118;
  this1113 = v1108;
  __beg1114 = v1109;
  __end1115 = v1110;
  unnamed1116 = v1111;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1119 = this1113;
  char* t1120 = __beg1114;
  char* t1121 = __end1115;
  long r1122 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1120, t1121);
  unsigned long cast1123 = (unsigned long)r1122;
  __dnew1117 = cast1123;
    unsigned long t1124 = __dnew1117;
    unsigned long c1125 = 15;
    _Bool c1126 = ((t1124 > c1125)) ? 1 : 0;
    if (c1126) {
      unsigned long c1127 = 0;
      char* r1128 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1119, &__dnew1117, c1127);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1119, r1128);
      unsigned long t1129 = __dnew1117;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1119, t1129);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1119);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1118, t1119);
    char* r1130 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1119);
    char* t1131 = __beg1114;
    char* t1132 = __end1115;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1130, t1131, t1132);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1133 = ((void*)0);
    __guard1118._M_guarded = c1133;
    unsigned long t1134 = __dnew1117;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1119, t1134);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1118);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1135) {
bb1136:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1137;
  this1137 = v1135;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1138 = this1137;
  {
    struct std__allocator_char_* base1139 = (struct std__allocator_char_*)((char *)t1138 + 0);
    std__allocator_char____allocator(base1139);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1140, struct std____new_allocator_char_* v1141) {
bb1142:
  struct std____new_allocator_char_* this1143;
  struct std____new_allocator_char_* unnamed1144;
  this1143 = v1140;
  unnamed1144 = v1141;
  struct std____new_allocator_char_* t1145 = this1143;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1146) {
bb1147:
  char* __r1148;
  char* __retval1149;
  __r1148 = v1146;
  char* t1150 = __r1148;
  __retval1149 = t1150;
  char* t1151 = __retval1149;
  return t1151;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1152) {
bb1153:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1154;
  char* __retval1155;
  this1154 = v1152;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1156 = this1154;
  char* cast1157 = (char*)&(t1156->field2._M_local_buf);
  char* r1158 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1157);
  __retval1155 = r1158;
  char* t1159 = __retval1155;
  return t1159;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1160) {
bb1161:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1162;
  _Bool __retval1163;
  this1162 = v1160;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1164 = this1162;
    char* r1165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1164);
    char* r1166 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1164);
    _Bool c1167 = ((r1165 == r1166)) ? 1 : 0;
    if (c1167) {
        unsigned long t1168 = t1164->_M_string_length;
        unsigned long c1169 = 15;
        _Bool c1170 = ((t1168 > c1169)) ? 1 : 0;
        if (c1170) {
          __builtin_unreachable();
        }
      _Bool c1171 = 1;
      __retval1163 = c1171;
      _Bool t1172 = __retval1163;
      return t1172;
    }
  _Bool c1173 = 0;
  __retval1163 = c1173;
  _Bool t1174 = __retval1163;
  return t1174;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1175, char* v1176, unsigned long v1177) {
bb1178:
  struct std____new_allocator_char_* this1179;
  char* __p1180;
  unsigned long __n1181;
  this1179 = v1175;
  __p1180 = v1176;
  __n1181 = v1177;
  struct std____new_allocator_char_* t1182 = this1179;
    unsigned long c1183 = 1;
    unsigned long c1184 = 16;
    _Bool c1185 = ((c1183 > c1184)) ? 1 : 0;
    if (c1185) {
      char* t1186 = __p1180;
      void* cast1187 = (void*)t1186;
      unsigned long t1188 = __n1181;
      unsigned long c1189 = 1;
      unsigned long b1190 = t1188 * c1189;
      unsigned long c1191 = 1;
      operator_delete_3(cast1187, b1190, c1191);
      return;
    }
  char* t1192 = __p1180;
  void* cast1193 = (void*)t1192;
  unsigned long t1194 = __n1181;
  unsigned long c1195 = 1;
  unsigned long b1196 = t1194 * c1195;
  operator_delete_2(cast1193, b1196);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1197, char* v1198, unsigned long v1199) {
bb1200:
  struct std__allocator_char_* this1201;
  char* __p1202;
  unsigned long __n1203;
  this1201 = v1197;
  __p1202 = v1198;
  __n1203 = v1199;
  struct std__allocator_char_* t1204 = this1201;
    _Bool r1205 = std____is_constant_evaluated();
    if (r1205) {
      char* t1206 = __p1202;
      void* cast1207 = (void*)t1206;
      operator_delete(cast1207);
      return;
    }
  struct std____new_allocator_char_* base1208 = (struct std____new_allocator_char_*)((char *)t1204 + 0);
  char* t1209 = __p1202;
  unsigned long t1210 = __n1203;
  std____new_allocator_char___deallocate(base1208, t1209, t1210);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1211, char* v1212, unsigned long v1213) {
bb1214:
  struct std__allocator_char_* __a1215;
  char* __p1216;
  unsigned long __n1217;
  __a1215 = v1211;
  __p1216 = v1212;
  __n1217 = v1213;
  struct std__allocator_char_* t1218 = __a1215;
  char* t1219 = __p1216;
  unsigned long t1220 = __n1217;
  std__allocator_char___deallocate(t1218, t1219, t1220);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1221, unsigned long v1222) {
bb1223:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1224;
  unsigned long __size1225;
  this1224 = v1221;
  __size1225 = v1222;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1226 = this1224;
  struct std__allocator_char_* r1227 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1226);
  char* r1228 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1226);
  unsigned long t1229 = __size1225;
  unsigned long c1230 = 1;
  unsigned long b1231 = t1229 + c1230;
  std__allocator_traits_std__allocator_char_____deallocate(r1227, r1228, b1231);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1232) {
bb1233:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1234;
  this1234 = v1232;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1235 = this1234;
    _Bool r1236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1235);
    _Bool u1237 = !r1236;
    if (u1237) {
      unsigned long t1238 = t1235->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1235, t1238);
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1239, char* v1240) {
bb1241:
  char* __c11242;
  char* __c21243;
  _Bool __retval1244;
  __c11242 = v1239;
  __c21243 = v1240;
  char* t1245 = __c11242;
  char t1246 = *t1245;
  int cast1247 = (int)t1246;
  char* t1248 = __c21243;
  char t1249 = *t1248;
  int cast1250 = (int)t1249;
  _Bool c1251 = ((cast1247 == cast1250)) ? 1 : 0;
  __retval1244 = c1251;
  _Bool t1252 = __retval1244;
  return t1252;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1253) {
bb1254:
  char* __p1255;
  unsigned long __retval1256;
  unsigned long __i1257;
  __p1255 = v1253;
  unsigned long c1258 = 0;
  __i1257 = c1258;
    char ref_tmp01259;
    while (1) {
      unsigned long t1260 = __i1257;
      char* t1261 = __p1255;
      char* ptr1262 = &(t1261)[t1260];
      char c1263 = 0;
      ref_tmp01259 = c1263;
      _Bool r1264 = __gnu_cxx__char_traits_char___eq(ptr1262, &ref_tmp01259);
      _Bool u1265 = !r1264;
      if (!u1265) break;
      unsigned long t1266 = __i1257;
      unsigned long u1267 = t1266 + 1;
      __i1257 = u1267;
    }
  unsigned long t1268 = __i1257;
  __retval1256 = t1268;
  unsigned long t1269 = __retval1256;
  return t1269;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1270) {
bb1271:
  char* __s1272;
  unsigned long __retval1273;
  __s1272 = v1270;
    _Bool r1274 = std____is_constant_evaluated();
    if (r1274) {
      char* t1275 = __s1272;
      unsigned long r1276 = __gnu_cxx__char_traits_char___length(t1275);
      __retval1273 = r1276;
      unsigned long t1277 = __retval1273;
      return t1277;
    }
  char* t1278 = __s1272;
  unsigned long r1279 = strlen(t1278);
  __retval1273 = r1279;
  unsigned long t1280 = __retval1273;
  return t1280;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1281, char* v1282, struct std__allocator_char_* v1283) {
bb1284:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1285;
  char* __dat1286;
  struct std__allocator_char_* __a1287;
  this1285 = v1281;
  __dat1286 = v1282;
  __a1287 = v1283;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1288 = this1285;
  struct std__allocator_char_* base1289 = (struct std__allocator_char_*)((char *)t1288 + 0);
  struct std__allocator_char_* t1290 = __a1287;
  std__allocator_char___allocator(base1289, t1290);
    char* t1291 = __dat1286;
    t1288->_M_p = t1291;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1292) {
bb1293:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1294;
  char* __retval1295;
  this1294 = v1292;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1296 = this1294;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1296);
  char* r1297 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1296);
  __retval1295 = r1297;
  char* t1298 = __retval1295;
  return t1298;
}

