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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__less_int_ { unsigned char __field0; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_b[3] = {3, 6, 9};
char _str[20] = "myset.count(3) != 1";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-count-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find_int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____count_int_const___const(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* p0);
int main();
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1);
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* p0);
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
int* std___Identity_int___operator___int___const(struct std___Identity_int_* p0, int* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* p0, unsigned long p1, void* p2);
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* p0, unsigned long p1);
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* p0, unsigned long p1);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern int __gxx_personality_v0();
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
extern void std___Rb_tree_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);

// function: _ZNSt3setIiSt4lessIiESaIiEEC2IPiEET_S6_
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* v0, int* v1, int* v2) {
bb3:
  struct std__set_int__std__less_int___std__allocator_int__* this4;
  int* __first5;
  int* __last6;
  this4 = v0;
  __first5 = v1;
  __last6 = v2;
  struct std__set_int__std__less_int___std__allocator_int__* t7 = this4;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ c8 = {0};
  t7->_M_t = c8;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t7->_M_t);
    int* t9 = __first5;
    int* t10 = __last6;
    std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(&t7->_M_t, t9, t10);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t7->_M_t);
      }
      return;
    }
  return;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v11, struct std___Rb_tree_const_iterator_int_* v12) {
bb13:
  struct std___Rb_tree_const_iterator_int_* __x14;
  struct std___Rb_tree_const_iterator_int_* __y15;
  _Bool __retval16;
  __x14 = v11;
  __y15 = v12;
  struct std___Rb_tree_const_iterator_int_* t17 = __x14;
  struct std___Rb_tree_node_base* t18 = t17->_M_node;
  struct std___Rb_tree_const_iterator_int_* t19 = __y15;
  struct std___Rb_tree_node_base* t20 = t19->_M_node;
  _Bool c21 = ((t18 == t20)) ? 1 : 0;
  __retval16 = c21;
  _Bool t22 = __retval16;
  return t22;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v23, struct std___Rb_tree_node_base* v24, struct std___Rb_tree_node_base* v25, int* v26) {
bb27:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this28;
  struct std___Rb_tree_node_base* __x29;
  struct std___Rb_tree_node_base* __y30;
  int* __k31;
  struct std___Rb_tree_node_base* __retval32;
  this28 = v23;
  __x29 = v24;
  __y30 = v25;
  __k31 = v26;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t33 = this28;
    while (1) {
      struct std___Rb_tree_node_base* t34 = __x29;
      _Bool cast35 = (_Bool)t34;
      if (!cast35) break;
        struct std___Rb_tree_key_compare_std__less_int__* base36 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t33->_M_impl) + 0);
        struct std__less_int_* cast37 = (struct std__less_int_*)base36;
        struct std___Rb_tree_node_base* t38 = __x29;
        int* r39 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t38);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t40 = __k31;
        _Bool r41 = std__less_int___operator___int_const___int_const___const(cast37, r39, t40);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u42 = !r41;
        if (u42) {
          struct std___Rb_tree_node_base* t43 = __x29;
          __y30 = t43;
          struct std___Rb_tree_node_base* t44 = __x29;
          struct std___Rb_tree_node_base* r45 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t44);
          __x29 = r45;
        } else {
          struct std___Rb_tree_node_base* t46 = __x29;
          struct std___Rb_tree_node_base* r47 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t46);
          __x29 = r47;
        }
    }
  struct std___Rb_tree_node_base* t48 = __y30;
  __retval32 = t48;
  struct std___Rb_tree_node_base* t49 = __retval32;
  return t49;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v50, struct std___Rb_tree_node_base* v51) {
bb52:
  struct std___Rb_tree_const_iterator_int_* this53;
  struct std___Rb_tree_node_base* __x54;
  this53 = v50;
  __x54 = v51;
  struct std___Rb_tree_const_iterator_int_* t55 = this53;
  struct std___Rb_tree_node_base* t56 = __x54;
  t55->_M_node = t56;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4findERKi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find_int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v57, int* v58) {
bb59:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this60;
  int* __k61;
  struct std___Rb_tree_const_iterator_int_ __retval62;
  struct std___Rb_tree_const_iterator_int_ __j63;
  struct std___Rb_tree_const_iterator_int_ ref_tmp064;
  this60 = v57;
  __k61 = v58;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t65 = this60;
  struct std___Rb_tree_node_base* r66 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t65);
  struct std___Rb_tree_node_base* r67 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t65);
  int* t68 = __k61;
  struct std___Rb_tree_node_base* r69 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t65, r66, r67, t68);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__j63, r69);
  struct std___Rb_tree_const_iterator_int_ r70 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(t65);
  ref_tmp064 = r70;
  _Bool r71 = std__operator___2(&__j63, &ref_tmp064);
  _Bool ternary72;
  if (r71) {
    _Bool c73 = 1;
    ternary72 = (_Bool)c73;
  } else {
    struct std___Rb_tree_key_compare_std__less_int__* base74 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t65->_M_impl) + 0);
    struct std__less_int_* cast75 = (struct std__less_int_*)base74;
    int* t76 = __k61;
    struct std___Rb_tree_node_base* t77 = __j63._M_node;
    int* r78 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t77);
    if (__cir_exc_active) {
      struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r79 = std__less_int___operator___int_const___int_const___const(cast75, t76, r78);
    if (__cir_exc_active) {
      struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary72 = (_Bool)r79;
  }
  if (ternary72) {
    struct std___Rb_tree_const_iterator_int_ r80 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(t65);
    __retval62 = r80;
  } else {
    __retval62 = __j63; // copy
  }
  struct std___Rb_tree_const_iterator_int_ t81 = __retval62;
  return t81;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v82) {
bb83:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this84;
  struct std___Rb_tree_const_iterator_int_ __retval85;
  this84 = v82;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t86 = this84;
  struct std___Rb_tree_node_base* r87 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t86);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval85, r87);
  struct std___Rb_tree_const_iterator_int_ t88 = __retval85;
  return t88;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5countERKi
unsigned long std__set_int__std__less_int___std__allocator_int_____count_int_const___const(struct std__set_int__std__less_int___std__allocator_int__* v89, int* v90) {
bb91:
  struct std__set_int__std__less_int___std__allocator_int__* this92;
  int* __x93;
  unsigned long __retval94;
  struct std___Rb_tree_const_iterator_int_ ref_tmp095;
  struct std___Rb_tree_const_iterator_int_ ref_tmp196;
  this92 = v89;
  __x93 = v90;
  struct std__set_int__std__less_int___std__allocator_int__* t97 = this92;
  int* t98 = __x93;
  struct std___Rb_tree_const_iterator_int_ r99 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find_int_const___const(&t97->_M_t, t98);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  ref_tmp095 = r99;
  struct std___Rb_tree_const_iterator_int_ r100 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t97->_M_t);
  ref_tmp196 = r100;
  _Bool r101 = std__operator___2(&ref_tmp095, &ref_tmp196);
  int c102 = 0;
  int c103 = 1;
  int sel104 = r101 ? c102 : c103;
  unsigned long cast105 = (unsigned long)sel104;
  __retval94 = cast105;
  unsigned long t106 = __retval94;
  return t106;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v107) {
bb108:
  struct std__set_int__std__less_int___std__allocator_int__* this109;
  this109 = v107;
  struct std__set_int__std__less_int___std__allocator_int__* t110 = this109;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t110->_M_t);
  }
  return;
}

// function: main
int main() {
bb111:
  int __retval112;
  int b113[3];
  struct std__set_int__std__less_int___std__allocator_int__ myset114;
  int ref_tmp0115;
  int c116 = 0;
  __retval112 = c116;
  // array copy
  __builtin_memcpy(b113, __const_main_b, (unsigned long)3 * sizeof(__const_main_b[0]));
  int* cast117 = (int*)&(b113);
  int* cast118 = (int*)&(b113);
  int c119 = 3;
  int* ptr120 = &(cast118)[c119];
  std__set_int__std__less_int___std__allocator_int_____set_int__(&myset114, cast117, ptr120);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c121 = 3;
    ref_tmp0115 = c121;
    unsigned long r122 = std__set_int__std__less_int___std__allocator_int_____count_int_const___const(&myset114, &ref_tmp0115);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset114);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c123 = 1;
    _Bool c124 = ((r122 != c123)) ? 1 : 0;
    if (c124) {
    } else {
      char* cast125 = (char*)&(_str);
      char* c126 = _str_1;
      unsigned int c127 = 21;
      char* cast128 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast125, c126, c127, cast128);
    }
    int c129 = 0;
    __retval112 = c129;
    int t130 = __retval112;
    int ret_val131 = t130;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset114);
    }
    return ret_val131;
  int t132 = __retval112;
  return t132;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v133) {
bb134:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this135;
  this135 = v133;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t136 = this135;
    struct std___Rb_tree_node_int_* r137 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t136);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t136, r137);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t136->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t136->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v138) {
bb139:
  struct std___Rb_tree_node_int_* this140;
  struct std___Rb_tree_node_int_* __retval141;
  this140 = v138;
  struct std___Rb_tree_node_int_* t142 = this140;
  __retval141 = t142;
  struct std___Rb_tree_node_int_* t143 = __retval141;
  return t143;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v144) {
bb145:
  struct std___Rb_tree_node_int_* __x146;
  struct std___Rb_tree_node_int_* __retval147;
  __x146 = v144;
  struct std___Rb_tree_node_int_* t148 = __x146;
  struct std___Rb_tree_node_base* base149 = (struct std___Rb_tree_node_base*)((char *)t148 + 0);
  struct std___Rb_tree_node_base* t150 = base149->_M_right;
  _Bool cast151 = (_Bool)t150;
  struct std___Rb_tree_node_int_* ternary152;
  if (cast151) {
    struct std___Rb_tree_node_int_* t153 = __x146;
    struct std___Rb_tree_node_base* base154 = (struct std___Rb_tree_node_base*)((char *)t153 + 0);
    struct std___Rb_tree_node_base* t155 = base154->_M_right;
    struct std___Rb_tree_node_int_* derived156 = (struct std___Rb_tree_node_int_*)((char *)t155 - 0);
    struct std___Rb_tree_node_int_* r157 = std___Rb_tree_node_int____M_node_ptr(derived156);
    ternary152 = (struct std___Rb_tree_node_int_*)r157;
  } else {
    struct std___Rb_tree_node_int_* c158 = ((void*)0);
    ternary152 = (struct std___Rb_tree_node_int_*)c158;
  }
  __retval147 = ternary152;
  struct std___Rb_tree_node_int_* t159 = __retval147;
  return t159;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v160) {
bb161:
  struct std___Rb_tree_node_int_* __x162;
  struct std___Rb_tree_node_int_* __retval163;
  __x162 = v160;
  struct std___Rb_tree_node_int_* t164 = __x162;
  struct std___Rb_tree_node_base* base165 = (struct std___Rb_tree_node_base*)((char *)t164 + 0);
  struct std___Rb_tree_node_base* t166 = base165->_M_left;
  _Bool cast167 = (_Bool)t166;
  struct std___Rb_tree_node_int_* ternary168;
  if (cast167) {
    struct std___Rb_tree_node_int_* t169 = __x162;
    struct std___Rb_tree_node_base* base170 = (struct std___Rb_tree_node_base*)((char *)t169 + 0);
    struct std___Rb_tree_node_base* t171 = base170->_M_left;
    struct std___Rb_tree_node_int_* derived172 = (struct std___Rb_tree_node_int_*)((char *)t171 - 0);
    struct std___Rb_tree_node_int_* r173 = std___Rb_tree_node_int____M_node_ptr(derived172);
    ternary168 = (struct std___Rb_tree_node_int_*)r173;
  } else {
    struct std___Rb_tree_node_int_* c174 = ((void*)0);
    ternary168 = (struct std___Rb_tree_node_int_*)c174;
  }
  __retval163 = ternary168;
  struct std___Rb_tree_node_int_* t175 = __retval163;
  return t175;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v176) {
bb177:
  int* __location178;
  __location178 = v176;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v179, int* v180) {
bb181:
  struct std__allocator_std___Rb_tree_node_int__* __a182;
  int* __p183;
  __a182 = v179;
  __p183 = v180;
  int* t184 = __p183;
  void_std__destroy_at_int_(t184);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v185) {
bb186:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this187;
  struct std__allocator_std___Rb_tree_node_int__* __retval188;
  this187 = v185;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t189 = this187;
  struct std__allocator_std___Rb_tree_node_int__* base190 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t189->_M_impl) + 0);
  __retval188 = base190;
  struct std__allocator_std___Rb_tree_node_int__* t191 = __retval188;
  return t191;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v192) {
bb193:
  struct __gnu_cxx____aligned_membuf_int_* this194;
  void* __retval195;
  this194 = v192;
  struct __gnu_cxx____aligned_membuf_int_* t196 = this194;
  void* cast197 = (void*)&(t196->_M_storage);
  __retval195 = cast197;
  void* t198 = __retval195;
  return t198;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v199) {
bb200:
  struct __gnu_cxx____aligned_membuf_int_* this201;
  int* __retval202;
  this201 = v199;
  struct __gnu_cxx____aligned_membuf_int_* t203 = this201;
  void* r204 = __gnu_cxx____aligned_membuf_int____M_addr(t203);
  int* cast205 = (int*)r204;
  __retval202 = cast205;
  int* t206 = __retval202;
  return t206;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v207) {
bb208:
  struct std___Rb_tree_node_int_* this209;
  int* __retval210;
  this209 = v207;
  struct std___Rb_tree_node_int_* t211 = this209;
  int* r212 = __gnu_cxx____aligned_membuf_int____M_ptr(&t211->_M_storage);
  __retval210 = r212;
  int* t213 = __retval210;
  return t213;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v214, struct std___Rb_tree_node_int_* v215) {
bb216:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this217;
  struct std___Rb_tree_node_int_* __p218;
  this217 = v214;
  __p218 = v215;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t219 = this217;
  struct std__allocator_std___Rb_tree_node_int__* r220 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t219);
  struct std___Rb_tree_node_int_* t221 = __p218;
  int* r222 = std___Rb_tree_node_int____M_valptr(t221);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r220, r222);
  struct std___Rb_tree_node_int_* t223 = __p218;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb224:
  _Bool __retval225;
    _Bool c226 = 0;
    __retval225 = c226;
    _Bool t227 = __retval225;
    return t227;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v228, struct std___Rb_tree_node_int_* v229, unsigned long v230) {
bb231:
  struct std____new_allocator_std___Rb_tree_node_int__* this232;
  struct std___Rb_tree_node_int_* __p233;
  unsigned long __n234;
  this232 = v228;
  __p233 = v229;
  __n234 = v230;
  struct std____new_allocator_std___Rb_tree_node_int__* t235 = this232;
    unsigned long c236 = 8;
    unsigned long c237 = 16;
    _Bool c238 = ((c236 > c237)) ? 1 : 0;
    if (c238) {
      struct std___Rb_tree_node_int_* t239 = __p233;
      void* cast240 = (void*)t239;
      unsigned long t241 = __n234;
      unsigned long c242 = 40;
      unsigned long b243 = t241 * c242;
      unsigned long c244 = 8;
      operator_delete_3(cast240, b243, c244);
      return;
    }
  struct std___Rb_tree_node_int_* t245 = __p233;
  void* cast246 = (void*)t245;
  unsigned long t247 = __n234;
  unsigned long c248 = 40;
  unsigned long b249 = t247 * c248;
  operator_delete_2(cast246, b249);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v250, struct std___Rb_tree_node_int_* v251, unsigned long v252) {
bb253:
  struct std__allocator_std___Rb_tree_node_int__* this254;
  struct std___Rb_tree_node_int_* __p255;
  unsigned long __n256;
  this254 = v250;
  __p255 = v251;
  __n256 = v252;
  struct std__allocator_std___Rb_tree_node_int__* t257 = this254;
    _Bool r258 = std____is_constant_evaluated();
    if (r258) {
      struct std___Rb_tree_node_int_* t259 = __p255;
      void* cast260 = (void*)t259;
      operator_delete(cast260);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base261 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t257 + 0);
  struct std___Rb_tree_node_int_* t262 = __p255;
  unsigned long t263 = __n256;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base261, t262, t263);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v264, struct std___Rb_tree_node_int_* v265, unsigned long v266) {
bb267:
  struct std__allocator_std___Rb_tree_node_int__* __a268;
  struct std___Rb_tree_node_int_* __p269;
  unsigned long __n270;
  __a268 = v264;
  __p269 = v265;
  __n270 = v266;
  struct std__allocator_std___Rb_tree_node_int__* t271 = __a268;
  struct std___Rb_tree_node_int_* t272 = __p269;
  unsigned long t273 = __n270;
  std__allocator_std___Rb_tree_node_int_____deallocate(t271, t272, t273);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v274, struct std___Rb_tree_node_int_* v275) {
bb276:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this277;
  struct std___Rb_tree_node_int_* __p278;
  this277 = v274;
  __p278 = v275;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t279 = this277;
  struct std__allocator_std___Rb_tree_node_int__* r280 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t279);
  struct std___Rb_tree_node_int_* t281 = __p278;
  unsigned long c282 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r280, t281, c282);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v283, struct std___Rb_tree_node_int_* v284) {
bb285:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this286;
  struct std___Rb_tree_node_int_* __p287;
  this286 = v283;
  __p287 = v284;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t288 = this286;
  struct std___Rb_tree_node_int_* t289 = __p287;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t288, t289);
  struct std___Rb_tree_node_int_* t290 = __p287;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t288, t290);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v291, struct std___Rb_tree_node_int_* v292) {
bb293:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this294;
  struct std___Rb_tree_node_int_* __x295;
  this294 = v291;
  __x295 = v292;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t296 = this294;
    while (1) {
      struct std___Rb_tree_node_int_* t297 = __x295;
      _Bool cast298 = (_Bool)t297;
      if (!cast298) break;
        struct std___Rb_tree_node_int_* __y299;
        struct std___Rb_tree_node_int_* t300 = __x295;
        struct std___Rb_tree_node_int_* r301 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t300);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t296, r301);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t302 = __x295;
        struct std___Rb_tree_node_int_* r303 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t302);
        if (__cir_exc_active) {
          return;
        }
        __y299 = r303;
        struct std___Rb_tree_node_int_* t304 = __x295;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t296, t304);
        struct std___Rb_tree_node_int_* t305 = __y299;
        __x295 = t305;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v306) {
bb307:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this308;
  struct std___Rb_tree_node_int_* __retval309;
  struct std___Rb_tree_node_base* __begin310;
  this308 = v306;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t311 = this308;
  struct std___Rb_tree_header* base312 = (struct std___Rb_tree_header*)((char *)&(t311->_M_impl) + 8);
  struct std___Rb_tree_node_base* t313 = base312->_M_header._M_parent;
  __begin310 = t313;
  struct std___Rb_tree_node_base* t314 = __begin310;
  _Bool cast315 = (_Bool)t314;
  struct std___Rb_tree_node_int_* ternary316;
  if (cast315) {
    struct std___Rb_tree_node_base* t317 = __begin310;
    struct std___Rb_tree_node_int_* derived318 = (struct std___Rb_tree_node_int_*)((char *)t317 - 0);
    struct std___Rb_tree_node_int_* r319 = std___Rb_tree_node_int____M_node_ptr(derived318);
    ternary316 = (struct std___Rb_tree_node_int_*)r319;
  } else {
    struct std___Rb_tree_node_int_* c320 = ((void*)0);
    ternary316 = (struct std___Rb_tree_node_int_*)c320;
  }
  __retval309 = ternary316;
  struct std___Rb_tree_node_int_* t321 = __retval309;
  return t321;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v322) {
bb323:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this324;
  this324 = v322;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t325 = this324;
  {
    struct std__allocator_std___Rb_tree_node_int__* base326 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t325 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base326);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v327) {
bb328:
  struct std__allocator_std___Rb_tree_node_int__* this329;
  this329 = v327;
  struct std__allocator_std___Rb_tree_node_int__* t330 = this329;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v331) {
bb332:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this333;
  this333 = v331;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t334 = this333;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t334->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v335, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v336) {
bb337:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this338;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t339;
  this338 = v335;
  __t339 = v336;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t340 = this338;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t341 = __t339;
  t340->_M_t = t341;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v342) {
bb343:
  struct std___Rb_tree_node_base* this344;
  struct std___Rb_tree_node_base* __retval345;
  this344 = v342;
  struct std___Rb_tree_node_base* t346 = this344;
  __retval345 = t346;
  struct std___Rb_tree_node_base* t347 = __retval345;
  return t347;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v348) {
bb349:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this350;
  struct std___Rb_tree_node_base* __retval351;
  this350 = v348;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t352 = this350;
  struct std___Rb_tree_header* base353 = (struct std___Rb_tree_header*)((char *)&(t352->_M_impl) + 8);
  struct std___Rb_tree_node_base* r354 = std___Rb_tree_node_base___M_base_ptr___const(&base353->_M_header);
  __retval351 = r354;
  struct std___Rb_tree_node_base* t355 = __retval351;
  return t355;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v356) {
bb357:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this358;
  unsigned long __retval359;
  this358 = v356;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t360 = this358;
  struct std___Rb_tree_header* base361 = (struct std___Rb_tree_header*)((char *)&(t360->_M_impl) + 8);
  unsigned long t362 = base361->_M_node_count;
  __retval359 = t362;
  unsigned long t363 = __retval359;
  return t363;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v364, int* v365, int* v366) {
bb367:
  struct std__less_int_* this368;
  int* __x369;
  int* __y370;
  _Bool __retval371;
  this368 = v364;
  __x369 = v365;
  __y370 = v366;
  struct std__less_int_* t372 = this368;
  int* t373 = __x369;
  int t374 = *t373;
  int* t375 = __y370;
  int t376 = *t375;
  _Bool c377 = ((t374 < t376)) ? 1 : 0;
  __retval371 = c377;
  _Bool t378 = __retval371;
  return t378;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v379, int* v380) {
bb381:
  struct std___Identity_int_* this382;
  int* __x383;
  int* __retval384;
  this382 = v379;
  __x383 = v380;
  struct std___Identity_int_* t385 = this382;
  int* t386 = __x383;
  __retval384 = t386;
  int* t387 = __retval384;
  return t387;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v388) {
bb389:
  struct __gnu_cxx____aligned_membuf_int_* this390;
  void* __retval391;
  this390 = v388;
  struct __gnu_cxx____aligned_membuf_int_* t392 = this390;
  void* cast393 = (void*)&(t392->_M_storage);
  __retval391 = cast393;
  void* t394 = __retval391;
  return t394;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v395) {
bb396:
  struct __gnu_cxx____aligned_membuf_int_* this397;
  int* __retval398;
  this397 = v395;
  struct __gnu_cxx____aligned_membuf_int_* t399 = this397;
  void* r400 = __gnu_cxx____aligned_membuf_int____M_addr___const(t399);
  int* cast401 = (int*)r400;
  __retval398 = cast401;
  int* t402 = __retval398;
  return t402;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v403) {
bb404:
  struct std___Rb_tree_node_int_* this405;
  int* __retval406;
  this405 = v403;
  struct std___Rb_tree_node_int_* t407 = this405;
  int* r408 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t407->_M_storage);
  __retval406 = r408;
  int* t409 = __retval406;
  return t409;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v410) {
bb411:
  struct std___Rb_tree_node_int_* __node412;
  int* __retval413;
  struct std___Identity_int_ ref_tmp0414;
  __node412 = v410;
  struct std___Rb_tree_node_int_* t415 = __node412;
  int* r416 = std___Rb_tree_node_int____M_valptr___const(t415);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r417 = std___Identity_int___operator___int_const___const(&ref_tmp0414, r416);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval413 = r417;
  int* t418 = __retval413;
  return t418;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v419) {
bb420:
  struct std___Rb_tree_node_base* __x421;
  int* __retval422;
  __x421 = v419;
  struct std___Rb_tree_node_base* t423 = __x421;
  struct std___Rb_tree_node_int_* derived424 = (struct std___Rb_tree_node_int_*)((char *)t423 - 0);
  int* r425 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived424);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval422 = r425;
  int* t426 = __retval422;
  return t426;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v427) {
bb428:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this429;
  struct std___Rb_tree_node_base** __retval430;
  this429 = v427;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t431 = this429;
  struct std___Rb_tree_header* base432 = (struct std___Rb_tree_header*)((char *)&(t431->_M_impl) + 8);
  __retval430 = &base432->_M_header._M_right;
  struct std___Rb_tree_node_base** t433 = __retval430;
  return t433;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v434, struct std___Rb_tree_node_base** v435, struct std___Rb_tree_node_base** v436) {
bb437:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this438;
  struct std___Rb_tree_node_base** __x439;
  struct std___Rb_tree_node_base** __y440;
  this438 = v434;
  __x439 = v435;
  __y440 = v436;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t441 = this438;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base442 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t441 + 0);
  struct std___Rb_tree_node_base** t443 = __x439;
  struct std___Rb_tree_node_base* t444 = *t443;
  t441->first = t444;
  struct std___Rb_tree_node_base** t445 = __y440;
  struct std___Rb_tree_node_base* t446 = *t445;
  t441->second = t446;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v447) {
bb448:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this449;
  struct std___Rb_tree_node_base* __retval450;
  this449 = v447;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t451 = this449;
  struct std___Rb_tree_header* base452 = (struct std___Rb_tree_header*)((char *)&(t451->_M_impl) + 8);
  struct std___Rb_tree_node_base* t453 = base452->_M_header._M_parent;
  __retval450 = t453;
  struct std___Rb_tree_node_base* t454 = __retval450;
  return t454;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v455) {
bb456:
  struct std___Rb_tree_node_base* __x457;
  struct std___Rb_tree_node_base* __retval458;
  __x457 = v455;
  struct std___Rb_tree_node_base* t459 = __x457;
  struct std___Rb_tree_node_base* t460 = t459->_M_left;
  __retval458 = t460;
  struct std___Rb_tree_node_base* t461 = __retval458;
  return t461;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v462, struct std___Rb_tree_iterator_int_* v463) {
bb464:
  struct std___Rb_tree_iterator_int_* __x465;
  struct std___Rb_tree_iterator_int_* __y466;
  _Bool __retval467;
  __x465 = v462;
  __y466 = v463;
  struct std___Rb_tree_iterator_int_* t468 = __x465;
  struct std___Rb_tree_node_base* t469 = t468->_M_node;
  struct std___Rb_tree_iterator_int_* t470 = __y466;
  struct std___Rb_tree_node_base* t471 = t470->_M_node;
  _Bool c472 = ((t469 == t471)) ? 1 : 0;
  __retval467 = c472;
  _Bool t473 = __retval467;
  return t473;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v474) {
bb475:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this476;
  struct std___Rb_tree_iterator_int_ __retval477;
  this476 = v474;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t478 = this476;
  struct std___Rb_tree_header* base479 = (struct std___Rb_tree_header*)((char *)&(t478->_M_impl) + 8);
  struct std___Rb_tree_node_base* t480 = base479->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval477, t480);
  struct std___Rb_tree_iterator_int_ t481 = __retval477;
  return t481;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v482, int* v483) {
bb484:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this485;
  int* __k486;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval487;
  struct std___Rb_tree_node_base* __x488;
  struct std___Rb_tree_node_base* __y489;
  _Bool __comp490;
  struct std___Rb_tree_iterator_int_ __j491;
  struct std___Rb_tree_node_base* ref_tmp1492;
  this485 = v482;
  __k486 = v483;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t493 = this485;
  struct std___Rb_tree_node_base* r494 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t493);
  __x488 = r494;
  struct std___Rb_tree_node_base* r495 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t493);
  __y489 = r495;
  _Bool c496 = 1;
  __comp490 = c496;
    while (1) {
      struct std___Rb_tree_node_base* t497 = __x488;
      _Bool cast498 = (_Bool)t497;
      if (!cast498) break;
        struct std___Rb_tree_node_base* t499 = __x488;
        __y489 = t499;
        struct std___Rb_tree_key_compare_std__less_int__* base500 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t493->_M_impl) + 0);
        struct std__less_int_* cast501 = (struct std__less_int_*)base500;
        int* t502 = __k486;
        struct std___Rb_tree_node_base* t503 = __x488;
        int* r504 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t503);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r505 = std__less_int___operator___int_const___int_const___const(cast501, t502, r504);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp490 = r505;
        _Bool t506 = __comp490;
        struct std___Rb_tree_node_base* ternary507;
        if (t506) {
          struct std___Rb_tree_node_base* t508 = __x488;
          struct std___Rb_tree_node_base* r509 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t508);
          ternary507 = (struct std___Rb_tree_node_base*)r509;
        } else {
          struct std___Rb_tree_node_base* t510 = __x488;
          struct std___Rb_tree_node_base* r511 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t510);
          ternary507 = (struct std___Rb_tree_node_base*)r511;
        }
        __x488 = ternary507;
    }
  struct std___Rb_tree_node_base* t512 = __y489;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j491, t512);
    _Bool t513 = __comp490;
    if (t513) {
        struct std___Rb_tree_iterator_int_ ref_tmp0514;
        struct std___Rb_tree_iterator_int_ r515 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t493);
        ref_tmp0514 = r515;
        _Bool r516 = std__operator__(&__j491, &ref_tmp0514);
        if (r516) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval487, &__x488, &__y489);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t517 = __retval487;
          return t517;
        } else {
          struct std___Rb_tree_iterator_int_* r518 = std___Rb_tree_iterator_int___operator__(&__j491);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base519 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t493->_M_impl) + 0);
    struct std__less_int_* cast520 = (struct std__less_int_*)base519;
    struct std___Rb_tree_node_base* t521 = __j491._M_node;
    int* r522 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t521);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t523 = __k486;
    _Bool r524 = std__less_int___operator___int_const___int_const___const(cast520, r522, t523);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r524) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval487, &__x488, &__y489);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t525 = __retval487;
      return t525;
    }
  struct std___Rb_tree_node_base* c526 = ((void*)0);
  ref_tmp1492 = c526;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval487, &__j491._M_node, &ref_tmp1492);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t527 = __retval487;
  return t527;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v528) {
bb529:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this530;
  struct std___Rb_tree_node_base** __retval531;
  this530 = v528;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t532 = this530;
  struct std___Rb_tree_header* base533 = (struct std___Rb_tree_header*)((char *)&(t532->_M_impl) + 8);
  __retval531 = &base533->_M_header._M_left;
  struct std___Rb_tree_node_base** t534 = __retval531;
  return t534;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v535, struct std___Rb_tree_node_base** v536, struct std___Rb_tree_node_base** v537) {
bb538:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this539;
  struct std___Rb_tree_node_base** __x540;
  struct std___Rb_tree_node_base** __y541;
  this539 = v535;
  __x540 = v536;
  __y541 = v537;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t542 = this539;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base543 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t542 + 0);
  struct std___Rb_tree_node_base** t544 = __x540;
  struct std___Rb_tree_node_base* t545 = *t544;
  t542->first = t545;
  struct std___Rb_tree_node_base** t546 = __y541;
  struct std___Rb_tree_node_base* t547 = *t546;
  t542->second = t547;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v548) {
bb549:
  struct std___Rb_tree_iterator_int_* this550;
  struct std___Rb_tree_iterator_int_* __retval551;
  this550 = v548;
  struct std___Rb_tree_iterator_int_* t552 = this550;
  struct std___Rb_tree_node_base* t553 = t552->_M_node;
  struct std___Rb_tree_node_base* r554 = std___Rb_tree_decrement(t553);
  t552->_M_node = r554;
  __retval551 = t552;
  struct std___Rb_tree_iterator_int_* t555 = __retval551;
  return t555;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v556) {
bb557:
  struct std___Rb_tree_node_base* __x558;
  struct std___Rb_tree_node_base* __retval559;
  __x558 = v556;
  struct std___Rb_tree_node_base* t560 = __x558;
  struct std___Rb_tree_node_base* t561 = t560->_M_right;
  __retval559 = t561;
  struct std___Rb_tree_node_base* t562 = __retval559;
  return t562;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v563) {
bb564:
  struct std___Rb_tree_iterator_int_* this565;
  struct std___Rb_tree_iterator_int_* __retval566;
  this565 = v563;
  struct std___Rb_tree_iterator_int_* t567 = this565;
  struct std___Rb_tree_node_base* t568 = t567->_M_node;
  struct std___Rb_tree_node_base* r569 = std___Rb_tree_increment(t568);
  t567->_M_node = r569;
  __retval566 = t567;
  struct std___Rb_tree_iterator_int_* t570 = __retval566;
  return t570;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v571, struct std___Rb_tree_node_base** v572, struct std___Rb_tree_node_base** v573) {
bb574:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this575;
  struct std___Rb_tree_node_base** __x576;
  struct std___Rb_tree_node_base** __y577;
  this575 = v571;
  __x576 = v572;
  __y577 = v573;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t578 = this575;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base579 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t578 + 0);
  struct std___Rb_tree_node_base** t580 = __x576;
  struct std___Rb_tree_node_base* t581 = *t580;
  t578->first = t581;
  struct std___Rb_tree_node_base** t582 = __y577;
  struct std___Rb_tree_node_base* t583 = *t582;
  t578->second = t583;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v584, struct std___Rb_tree_const_iterator_int_ v585, int* v586) {
bb587:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this588;
  struct std___Rb_tree_const_iterator_int_ __position589;
  int* __k590;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval591;
  this588 = v584;
  __position589 = v585;
  __k590 = v586;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t592 = this588;
    struct std___Rb_tree_node_base* t593 = __position589._M_node;
    struct std___Rb_tree_node_base* r594 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t592);
    _Bool c595 = ((t593 == r594)) ? 1 : 0;
    if (c595) {
        unsigned long r596 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t592);
        unsigned long c597 = 0;
        _Bool c598 = ((r596 > c597)) ? 1 : 0;
        _Bool ternary599;
        if (c598) {
          struct std___Rb_tree_key_compare_std__less_int__* base600 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t592->_M_impl) + 0);
          struct std__less_int_* cast601 = (struct std__less_int_*)base600;
          struct std___Rb_tree_node_base** r602 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t592);
          struct std___Rb_tree_node_base* t603 = *r602;
          int* r604 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t603);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t605 = __k590;
          _Bool r606 = std__less_int___operator___int_const___int_const___const(cast601, r604, t605);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary599 = (_Bool)r606;
        } else {
          _Bool c607 = 0;
          ternary599 = (_Bool)c607;
        }
        if (ternary599) {
          struct std___Rb_tree_node_base* ref_tmp0608;
          struct std___Rb_tree_node_base* c609 = ((void*)0);
          ref_tmp0608 = c609;
          struct std___Rb_tree_node_base** r610 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t592);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval591, &ref_tmp0608, r610);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t611 = __retval591;
          return t611;
        } else {
          int* t612 = __k590;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r613 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t592, t612);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval591 = r613;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t614 = __retval591;
          return t614;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base615 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t592->_M_impl) + 0);
        struct std__less_int_* cast616 = (struct std__less_int_*)base615;
        int* t617 = __k590;
        struct std___Rb_tree_node_base* t618 = __position589._M_node;
        int* r619 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t618);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r620 = std__less_int___operator___int_const___int_const___const(cast616, t617, r619);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r620) {
          struct std___Rb_tree_iterator_int_ __before621;
          struct std___Rb_tree_node_base* t622 = __position589._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before621, t622);
            struct std___Rb_tree_node_base* t623 = __position589._M_node;
            struct std___Rb_tree_node_base** r624 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t592);
            struct std___Rb_tree_node_base* t625 = *r624;
            _Bool c626 = ((t623 == t625)) ? 1 : 0;
            if (c626) {
              struct std___Rb_tree_node_base** r627 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t592);
              struct std___Rb_tree_node_base** r628 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t592);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval591, r627, r628);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t629 = __retval591;
              return t629;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base630 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t592->_M_impl) + 0);
                struct std__less_int_* cast631 = (struct std__less_int_*)base630;
                struct std___Rb_tree_iterator_int_* r632 = std___Rb_tree_iterator_int___operator__(&__before621);
                struct std___Rb_tree_node_base* t633 = r632->_M_node;
                int* r634 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t633);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t635 = __k590;
                _Bool r636 = std__less_int___operator___int_const___int_const___const(cast631, r634, t635);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r636) {
                    struct std___Rb_tree_node_base* t637 = __before621._M_node;
                    struct std___Rb_tree_node_base* r638 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t637);
                    _Bool cast639 = (_Bool)r638;
                    _Bool u640 = !cast639;
                    if (u640) {
                      struct std___Rb_tree_node_base* ref_tmp1641;
                      struct std___Rb_tree_node_base* c642 = ((void*)0);
                      ref_tmp1641 = c642;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval591, &ref_tmp1641, &__before621._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t643 = __retval591;
                      return t643;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval591, &__position589._M_node, &__position589._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t644 = __retval591;
                      return t644;
                    }
                } else {
                  int* t645 = __k590;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r646 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t592, t645);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval591 = r646;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t647 = __retval591;
                  return t647;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base648 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t592->_M_impl) + 0);
            struct std__less_int_* cast649 = (struct std__less_int_*)base648;
            struct std___Rb_tree_node_base* t650 = __position589._M_node;
            int* r651 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t650);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t652 = __k590;
            _Bool r653 = std__less_int___operator___int_const___int_const___const(cast649, r651, t652);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r653) {
              struct std___Rb_tree_iterator_int_ __after654;
              struct std___Rb_tree_node_base* t655 = __position589._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after654, t655);
                struct std___Rb_tree_node_base* t656 = __position589._M_node;
                struct std___Rb_tree_node_base** r657 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t592);
                struct std___Rb_tree_node_base* t658 = *r657;
                _Bool c659 = ((t656 == t658)) ? 1 : 0;
                if (c659) {
                  struct std___Rb_tree_node_base* ref_tmp2660;
                  struct std___Rb_tree_node_base* c661 = ((void*)0);
                  ref_tmp2660 = c661;
                  struct std___Rb_tree_node_base** r662 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t592);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval591, &ref_tmp2660, r662);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t663 = __retval591;
                  return t663;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base664 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t592->_M_impl) + 0);
                    struct std__less_int_* cast665 = (struct std__less_int_*)base664;
                    int* t666 = __k590;
                    struct std___Rb_tree_iterator_int_* r667 = std___Rb_tree_iterator_int___operator___2(&__after654);
                    struct std___Rb_tree_node_base* t668 = r667->_M_node;
                    int* r669 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t668);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r670 = std__less_int___operator___int_const___int_const___const(cast665, t666, r669);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r670) {
                        struct std___Rb_tree_node_base* t671 = __position589._M_node;
                        struct std___Rb_tree_node_base* r672 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t671);
                        _Bool cast673 = (_Bool)r672;
                        _Bool u674 = !cast673;
                        if (u674) {
                          struct std___Rb_tree_node_base* ref_tmp3675;
                          struct std___Rb_tree_node_base* c676 = ((void*)0);
                          ref_tmp3675 = c676;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval591, &ref_tmp3675, &__position589._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t677 = __retval591;
                          return t677;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval591, &__after654._M_node, &__after654._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t678 = __retval591;
                          return t678;
                        }
                    } else {
                      int* t679 = __k590;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r680 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t592, t679);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval591 = r680;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t681 = __retval591;
                      return t681;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp4682;
              struct std___Rb_tree_node_base* c683 = ((void*)0);
              ref_tmp4682 = c683;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval591, &__position589._M_node, &ref_tmp4682);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t684 = __retval591;
              return t684;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v685, int* v686) {
bb687:
  struct std___Identity_int_* this688;
  int* __x689;
  int* __retval690;
  this688 = v685;
  __x689 = v686;
  struct std___Identity_int_* t691 = this688;
  int* t692 = __x689;
  __retval690 = t692;
  int* t693 = __retval690;
  return t693;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v694) {
bb695:
  struct std____new_allocator_std___Rb_tree_node_int__* this696;
  unsigned long __retval697;
  this696 = v694;
  struct std____new_allocator_std___Rb_tree_node_int__* t698 = this696;
  unsigned long c699 = 9223372036854775807;
  unsigned long c700 = 40;
  unsigned long b701 = c699 / c700;
  __retval697 = b701;
  unsigned long t702 = __retval697;
  return t702;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v703, unsigned long v704, void* v705) {
bb706:
  struct std____new_allocator_std___Rb_tree_node_int__* this707;
  unsigned long __n708;
  void* unnamed709;
  struct std___Rb_tree_node_int_* __retval710;
  this707 = v703;
  __n708 = v704;
  unnamed709 = v705;
  struct std____new_allocator_std___Rb_tree_node_int__* t711 = this707;
    unsigned long t712 = __n708;
    unsigned long r713 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t711);
    _Bool c714 = ((t712 > r713)) ? 1 : 0;
    if (c714) {
        unsigned long t715 = __n708;
        unsigned long c716 = -1;
        unsigned long c717 = 40;
        unsigned long b718 = c716 / c717;
        _Bool c719 = ((t715 > b718)) ? 1 : 0;
        if (c719) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c720 = 8;
    unsigned long c721 = 16;
    _Bool c722 = ((c720 > c721)) ? 1 : 0;
    if (c722) {
      unsigned long __al723;
      unsigned long c724 = 8;
      __al723 = c724;
      unsigned long t725 = __n708;
      unsigned long c726 = 40;
      unsigned long b727 = t725 * c726;
      unsigned long t728 = __al723;
      void* r729 = operator_new_2(b727, t728);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast730 = (struct std___Rb_tree_node_int_*)r729;
      __retval710 = cast730;
      struct std___Rb_tree_node_int_* t731 = __retval710;
      return t731;
    }
  unsigned long t732 = __n708;
  unsigned long c733 = 40;
  unsigned long b734 = t732 * c733;
  void* r735 = operator_new(b734);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast736 = (struct std___Rb_tree_node_int_*)r735;
  __retval710 = cast736;
  struct std___Rb_tree_node_int_* t737 = __retval710;
  return t737;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v738, unsigned long v739) {
bb740:
  struct std__allocator_std___Rb_tree_node_int__* this741;
  unsigned long __n742;
  struct std___Rb_tree_node_int_* __retval743;
  this741 = v738;
  __n742 = v739;
  struct std__allocator_std___Rb_tree_node_int__* t744 = this741;
    _Bool r745 = std____is_constant_evaluated();
    if (r745) {
        unsigned long t746 = __n742;
        unsigned long c747 = 40;
        unsigned long ovr748;
        _Bool ovf749 = __builtin_mul_overflow(t746, c747, &ovr748);
        __n742 = ovr748;
        if (ovf749) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t750 = __n742;
      void* r751 = operator_new(t750);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast752 = (struct std___Rb_tree_node_int_*)r751;
      __retval743 = cast752;
      struct std___Rb_tree_node_int_* t753 = __retval743;
      return t753;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base754 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t744 + 0);
  unsigned long t755 = __n742;
  void* c756 = ((void*)0);
  struct std___Rb_tree_node_int_* r757 = std____new_allocator_std___Rb_tree_node_int_____allocate(base754, t755, c756);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval743 = r757;
  struct std___Rb_tree_node_int_* t758 = __retval743;
  return t758;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v759, unsigned long v760) {
bb761:
  struct std__allocator_std___Rb_tree_node_int__* __a762;
  unsigned long __n763;
  struct std___Rb_tree_node_int_* __retval764;
  __a762 = v759;
  __n763 = v760;
  struct std__allocator_std___Rb_tree_node_int__* t765 = __a762;
  unsigned long t766 = __n763;
  struct std___Rb_tree_node_int_* r767 = std__allocator_std___Rb_tree_node_int_____allocate(t765, t766);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval764 = r767;
  struct std___Rb_tree_node_int_* t768 = __retval764;
  return t768;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v769) {
bb770:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this771;
  struct std___Rb_tree_node_int_* __retval772;
  this771 = v769;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t773 = this771;
  struct std__allocator_std___Rb_tree_node_int__* r774 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t773);
  unsigned long c775 = 1;
  struct std___Rb_tree_node_int_* r776 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r774, c775);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval772 = r776;
  struct std___Rb_tree_node_int_* t777 = __retval772;
  return t777;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v778, int* v779) {
bb780:
  int* __location781;
  int* __args782;
  int* __retval783;
  void* __loc784;
  __location781 = v778;
  __args782 = v779;
  int* t785 = __location781;
  void* cast786 = (void*)t785;
  __loc784 = cast786;
    void* t787 = __loc784;
    int* cast788 = (int*)t787;
    int* t789 = __args782;
    int t790 = *t789;
    *cast788 = t790;
    __retval783 = cast788;
    int* t791 = __retval783;
    return t791;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v792, int* v793, int* v794) {
bb795:
  struct std__allocator_std___Rb_tree_node_int__* __a796;
  int* __p797;
  int* __args798;
  __a796 = v792;
  __p797 = v793;
  __args798 = v794;
  int* t799 = __p797;
  int* t800 = __args798;
  int* r801 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t799, t800);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v802, struct std___Rb_tree_node_int_* v803, int* v804) {
bb805:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this806;
  struct std___Rb_tree_node_int_* __node807;
  int* __args808;
  this806 = v802;
  __node807 = v803;
  __args808 = v804;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t809 = this806;
      struct std__allocator_std___Rb_tree_node_int__* r811 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t809);
      struct std___Rb_tree_node_int_* t812 = __node807;
      int* r813 = std___Rb_tree_node_int____M_valptr(t812);
      if (__cir_exc_active) {
        goto cir_try_dispatch810;
      }
      int* t814 = __args808;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r811, r813, t814);
    cir_try_dispatch810: ;
    if (__cir_exc_active) {
    {
      int ca_tok815 = 0;
      void* ca_exn816 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t817 = __node807;
        struct std___Rb_tree_node_int_* t818 = __node807;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t809, t818);
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_create_nodeIJRiEEEPSt13_Rb_tree_nodeIiEDpOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v819, int* v820) {
bb821:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this822;
  int* __args823;
  struct std___Rb_tree_node_int_* __retval824;
  struct std___Rb_tree_node_int_* __tmp825;
  this822 = v819;
  __args823 = v820;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t826 = this822;
  struct std___Rb_tree_node_int_* r827 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t826);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp825 = r827;
  struct std___Rb_tree_node_int_* t828 = __tmp825;
  int* t829 = __args823;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t826, t828, t829);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t830 = __tmp825;
  __retval824 = t830;
  struct std___Rb_tree_node_int_* t831 = __retval824;
  return t831;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v832, int* v833) {
bb834:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this835;
  int* __arg836;
  struct std___Rb_tree_node_int_* __retval837;
  this835 = v832;
  __arg836 = v833;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t838 = this835;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t839 = t838->_M_t;
  int* t840 = __arg836;
  struct std___Rb_tree_node_int_* r841 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t839, t840);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval837 = r841;
  struct std___Rb_tree_node_int_* t842 = __retval837;
  return t842;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v843, struct std___Rb_tree_node_base* v844, struct std___Rb_tree_node_base* v845, struct std___Rb_tree_node_base* v846) {
bb847:
  _Bool __insert_left848;
  struct std___Rb_tree_node_base* __x849;
  struct std___Rb_tree_node_base* __p850;
  struct std___Rb_tree_node_base* __header851;
  __insert_left848 = v843;
  __x849 = v844;
  __p850 = v845;
  __header851 = v846;
  _Bool t852 = __insert_left848;
  struct std___Rb_tree_node_base* t853 = __x849;
  struct std___Rb_tree_node_base* t854 = __p850;
  struct std___Rb_tree_node_base* t855 = __header851;
  std___Rb_tree_insert_and_rebalance(t852, t853, t854, t855);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v856, struct std___Rb_tree_node_base* v857, struct std___Rb_tree_node_base* v858, int* v859, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v860) {
bb861:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this862;
  struct std___Rb_tree_node_base* __x863;
  struct std___Rb_tree_node_base* __p864;
  int* __v865;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen866;
  struct std___Rb_tree_iterator_int_ __retval867;
  _Bool __insert_left868;
  struct std___Rb_tree_node_base* __z869;
  this862 = v856;
  __x863 = v857;
  __p864 = v858;
  __v865 = v859;
  __node_gen866 = v860;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t870 = this862;
  struct std___Rb_tree_node_base* t871 = __x863;
  _Bool cast872 = (_Bool)t871;
  _Bool ternary873;
  if (cast872) {
    _Bool c874 = 1;
    ternary873 = (_Bool)c874;
  } else {
    struct std___Rb_tree_node_base* t875 = __p864;
    struct std___Rb_tree_node_base* r876 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t870);
    _Bool c877 = ((t875 == r876)) ? 1 : 0;
    ternary873 = (_Bool)c877;
  }
  _Bool ternary878;
  if (ternary873) {
    _Bool c879 = 1;
    ternary878 = (_Bool)c879;
  } else {
    struct std___Identity_int_ ref_tmp0880;
    struct std___Rb_tree_key_compare_std__less_int__* base881 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t870->_M_impl) + 0);
    struct std__less_int_* cast882 = (struct std__less_int_*)base881;
    int* t883 = __v865;
    int* r884 = std___Identity_int___operator___int___const(&ref_tmp0880, t883);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t885 = __p864;
    int* r886 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t885);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r887 = std__less_int___operator___int_const___int_const___const(cast882, r884, r886);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary878 = (_Bool)r887;
  }
  __insert_left868 = ternary878;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t888 = __node_gen866;
  int* t889 = __v865;
  struct std___Rb_tree_node_int_* r890 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t888, t889);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base891 = (struct std___Rb_tree_node_base*)((char *)r890 + 0);
  struct std___Rb_tree_node_base* r892 = std___Rb_tree_node_base___M_base_ptr___const(base891);
  __z869 = r892;
  _Bool t893 = __insert_left868;
  struct std___Rb_tree_node_base* t894 = __z869;
  struct std___Rb_tree_node_base* t895 = __p864;
  struct std___Rb_tree_header* base896 = (struct std___Rb_tree_header*)((char *)&(t870->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t893, t894, t895, &base896->_M_header);
  struct std___Rb_tree_header* base897 = (struct std___Rb_tree_header*)((char *)&(t870->_M_impl) + 8);
  unsigned long t898 = base897->_M_node_count;
  unsigned long u899 = t898 + 1;
  base897->_M_node_count = u899;
  struct std___Rb_tree_node_base* t900 = __z869;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval867, t900);
  struct std___Rb_tree_iterator_int_ t901 = __retval867;
  return t901;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v902, struct std___Rb_tree_node_base* v903) {
bb904:
  struct std___Rb_tree_iterator_int_* this905;
  struct std___Rb_tree_node_base* __x906;
  this905 = v902;
  __x906 = v903;
  struct std___Rb_tree_iterator_int_* t907 = this905;
  struct std___Rb_tree_node_base* t908 = __x906;
  t907->_M_node = t908;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v909, struct std___Rb_tree_const_iterator_int_ v910, int* v911, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v912) {
bb913:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this914;
  struct std___Rb_tree_const_iterator_int_ __position915;
  int* __v916;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen917;
  struct std___Rb_tree_iterator_int_ __retval918;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res919;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0920;
  struct std___Identity_int_ ref_tmp0921;
  this914 = v909;
  __position915 = v910;
  __v916 = v911;
  __node_gen917 = v912;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t922 = this914;
  agg_tmp0920 = __position915; // copy
  int* t923 = __v916;
  int* r924 = std___Identity_int___operator___int___const(&ref_tmp0921, t923);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t925 = agg_tmp0920;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r926 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t922, t925, r924);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res919 = r926;
    struct std___Rb_tree_node_base* t927 = __res919.second;
    _Bool cast928 = (_Bool)t927;
    if (cast928) {
      struct std___Rb_tree_node_base* t929 = __res919.first;
      struct std___Rb_tree_node_base* t930 = __res919.second;
      int* t931 = __v916;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t932 = __node_gen917;
      struct std___Rb_tree_iterator_int_ r933 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t922, t929, t930, t931, t932);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval918 = r933;
      struct std___Rb_tree_iterator_int_ t934 = __retval918;
      return t934;
    }
  struct std___Rb_tree_node_base* t935 = __res919.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval918, t935);
  struct std___Rb_tree_iterator_int_ t936 = __retval918;
  return t936;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v937) {
bb938:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this939;
  struct std___Rb_tree_iterator_int_ __retval940;
  this939 = v937;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t941 = this939;
  struct std___Rb_tree_node_base* r942 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t941);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval940, r942);
  struct std___Rb_tree_iterator_int_ t943 = __retval940;
  return t943;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v944, struct std___Rb_tree_iterator_int_* v945) {
bb946:
  struct std___Rb_tree_const_iterator_int_* this947;
  struct std___Rb_tree_iterator_int_* __it948;
  this947 = v944;
  __it948 = v945;
  struct std___Rb_tree_const_iterator_int_* t949 = this947;
  struct std___Rb_tree_iterator_int_* t950 = __it948;
  struct std___Rb_tree_node_base* t951 = t950->_M_node;
  t949->_M_node = t951;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v952, int* v953, int* v954) {
bb955:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this956;
  int* __first957;
  int* __last958;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an959;
  this956 = v952;
  __first957 = v953;
  __last958 = v954;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t960 = this956;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an959, t960);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp0961;
    struct std___Rb_tree_iterator_int_ ref_tmp0962;
    struct std___Rb_tree_iterator_int_ agg_tmp1963;
    while (1) {
      int* t965 = __first957;
      int* t966 = __last958;
      _Bool c967 = ((t965 != t966)) ? 1 : 0;
      if (!c967) break;
      struct std___Rb_tree_iterator_int_ r968 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t960);
      ref_tmp0962 = r968;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp0961, &ref_tmp0962);
      int* t969 = __first957;
      struct std___Rb_tree_const_iterator_int_ t970 = agg_tmp0961;
      struct std___Rb_tree_iterator_int_ r971 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t960, t970, t969, &__an959);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp1963 = r971;
    for_step964: ;
      int* t972 = __first957;
      int c973 = 1;
      int* ptr974 = &(t972)[c973];
      __first957 = ptr974;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v975) {
bb976:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this977;
  this977 = v975;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t978 = this977;
  struct std__allocator_std___Rb_tree_node_int__* base979 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t978 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base979);
    struct std___Rb_tree_key_compare_std__less_int__* base980 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t978 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base980);
    struct std___Rb_tree_header* base981 = (struct std___Rb_tree_header*)((char *)t978 + 8);
    std___Rb_tree_header___Rb_tree_header(base981);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v982) {
bb983:
  struct std____new_allocator_std___Rb_tree_node_int__* this984;
  this984 = v982;
  struct std____new_allocator_std___Rb_tree_node_int__* t985 = this984;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v986) {
bb987:
  struct std__allocator_std___Rb_tree_node_int__* this988;
  this988 = v986;
  struct std__allocator_std___Rb_tree_node_int__* t989 = this988;
  struct std____new_allocator_std___Rb_tree_node_int__* base990 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t989 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base990);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v991) {
bb992:
  struct std___Rb_tree_key_compare_std__less_int__* this993;
  this993 = v991;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v994) {
bb995:
  struct std___Rb_tree_header* this996;
  this996 = v994;
  struct std___Rb_tree_header* t997 = this996;
  struct std___Rb_tree_node_base* c998 = ((void*)0);
  t997->_M_header._M_parent = c998;
  t997->_M_header._M_left = &t997->_M_header;
  t997->_M_header._M_right = &t997->_M_header;
  unsigned long c999 = 0;
  t997->_M_node_count = c999;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1000) {
bb1001:
  struct std___Rb_tree_header* this1002;
  this1002 = v1000;
  struct std___Rb_tree_header* t1003 = this1002;
  unsigned int c1004 = 0;
  t1003->_M_header._M_color = c1004;
  std___Rb_tree_header___M_reset(t1003);
  if (__cir_exc_active) {
    return;
  }
  return;
}

