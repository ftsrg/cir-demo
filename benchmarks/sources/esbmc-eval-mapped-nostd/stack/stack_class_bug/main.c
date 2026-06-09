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
struct A_bool_ { _Bool a; };
struct std___Deque_iterator_A_bool___A_bool_____A_bool____ { struct A_bool_* _M_cur; struct A_bool_* _M_first; struct A_bool_* _M_last; struct A_bool_** _M_node; };
struct std____new_allocator_A_bool__ { unsigned char __field0; };
struct std____new_allocator_A_bool____ { unsigned char __field0; };
struct std__allocator_A_bool__ { unsigned char __field0; };
struct std__allocator_A_bool____ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data { struct A_bool_** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_A_bool___A_bool_____A_bool____ _M_start; struct std___Deque_iterator_A_bool___A_bool_____A_bool____ _M_finish; };
struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl { struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data __field0; };
struct std___Deque_base_A_bool___std__allocator_A_bool___ { struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl _M_impl; };
struct std__deque_A_bool___std__allocator_A_bool___ { struct std___Deque_base_A_bool___std__allocator_A_bool___ __field0; };
struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____ { struct std__deque_A_bool___std__allocator_A_bool___ c; };

char _str[17] = "!(first.empty())";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stack/stack_class_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "(first.top()).get()";
char _str_3[18] = "first.size() == 2";
char _str_4[48] = "cannot create std::deque larger than max_size()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEE3popEv[81] = "void std::stack<A<bool>>::pop() [_Tp = A<bool>, _Sequence = std::deque<A<bool>>]";
char _str_6[15] = "!this->empty()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeI1AIbESaIS1_EE8pop_backEv[87] = "void std::deque<A<bool>>::pop_back() [_Tp = A<bool>, _Alloc = std::allocator<A<bool>>]";
char __PRETTY_FUNCTION____ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEE3topEv[86] = "reference std::stack<A<bool>>::top() [_Tp = A<bool>, _Sequence = std::deque<A<bool>>]";
char __PRETTY_FUNCTION____ZNSt5dequeI1AIbESaIS1_EE4backEv[88] = "reference std::deque<A<bool>>::back() [_Tp = A<bool>, _Alloc = std::allocator<A<bool>>]";
_Bool A_bool___get(struct A_bool_* p0);
_Bool operator___2(struct A_bool_ p0, struct A_bool_ p1);
_Bool operator__(struct A_bool_ p0, struct A_bool_ p1);
_Bool operator_(struct A_bool_ p0, struct A_bool_ p1);
void std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________stack_std__deque_A_bool___std__allocator_A_bool_______void_(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* p0);
void A_bool___A(struct A_bool_* p0);
struct A_bool_* _ZSt12construct_atI1AIbEJRKS1_EQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S4_pispclsr3stdE7declvalIT0_EEEEEPS4_S7_DpOS6_(struct A_bool_* p0, struct A_bool_* p1);
void void_std__allocator_traits_std__allocator_A_bool_______construct_A_bool___A_bool__const__(struct std__allocator_A_bool__* p0, struct A_bool_* p1, struct A_bool_* p2);
long std__operator_(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* p0, struct std___Deque_iterator_A_bool___A_bool_____A_bool____* p1);
unsigned long std__deque_A_bool___std__allocator_A_bool_______size___const(struct std__deque_A_bool___std__allocator_A_bool___* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_A_bool___std__allocator_A_bool________S_max_size(struct std__allocator_A_bool__* p0);
unsigned long std__deque_A_bool___std__allocator_A_bool_______max_size___const(struct std__deque_A_bool___std__allocator_A_bool___* p0);
extern void std____throw_length_error(char* p0);
struct A_bool_** A_bool____std____niter_wrap_A_bool____(struct A_bool_*** p0, struct A_bool_** p1);
long std__iterator_traits_A_bool______difference_type_std____distance_A_bool____(struct A_bool_** p0, struct A_bool_** p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_A_bool______iterator_category_std____iterator_category_A_bool____(struct A_bool_*** p0);
long std__iterator_traits_A_bool______difference_type_std__distance_A_bool____(struct A_bool_** p0, struct A_bool_** p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__A_bool_____A_bool____(struct A_bool_*** p0, struct A_bool_*** p1);
struct A_bool_** A_bool____std____copy_move_a2_false__A_bool_____A_bool_____A_bool____(struct A_bool_** p0, struct A_bool_** p1, struct A_bool_** p2);
struct A_bool_** A_bool____std____copy_move_a1_false__A_bool_____A_bool____(struct A_bool_** p0, struct A_bool_** p1, struct A_bool_** p2);
struct A_bool_** A_bool____std____niter_base_A_bool____(struct A_bool_** p0);
struct A_bool_** A_bool____std____copy_move_a_false__A_bool_____A_bool____(struct A_bool_** p0, struct A_bool_** p1, struct A_bool_** p2);
struct A_bool_** A_bool____std____miter_base_A_bool____(struct A_bool_** p0);
struct A_bool_** A_bool____std__copy_A_bool_____A_bool____(struct A_bool_** p0, struct A_bool_** p1, struct A_bool_** p2);
_Bool std__is_constant_evaluated();
void void_std____advance_A_bool_____long_(struct A_bool_*** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_A_bool_____long_(struct A_bool_*** p0, long p1);
struct A_bool_** A_bool____std____copy_move_backward_a2_false__A_bool_____A_bool____(struct A_bool_** p0, struct A_bool_** p1, struct A_bool_** p2);
struct A_bool_** A_bool____std____copy_move_backward_a1_false__A_bool_____A_bool____(struct A_bool_** p0, struct A_bool_** p1, struct A_bool_** p2);
struct A_bool_** A_bool____std____copy_move_backward_a_false__A_bool_____A_bool____(struct A_bool_** p0, struct A_bool_** p1, struct A_bool_** p2);
struct A_bool_** A_bool____std__copy_backward_A_bool_____A_bool____(struct A_bool_** p0, struct A_bool_** p1, struct A_bool_** p2);
void std__deque_A_bool___std__allocator_A_bool________M_reallocate_map(struct std__deque_A_bool___std__allocator_A_bool___* p0, unsigned long p1, _Bool p2);
void std__deque_A_bool___std__allocator_A_bool________M_reserve_map_at_back(struct std__deque_A_bool___std__allocator_A_bool___* p0, unsigned long p1);
void void_std__deque_A_bool___std__allocator_A_bool________M_push_back_aux_A_bool__const__(struct std__deque_A_bool___std__allocator_A_bool___* p0, struct A_bool_* p1);
void std__deque_A_bool___std__allocator_A_bool_______push_back(struct std__deque_A_bool___std__allocator_A_bool___* p0, struct A_bool_* p1);
void std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________push(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* p0, struct A_bool_* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
_Bool std__operator__(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* p0, struct std___Deque_iterator_A_bool___A_bool_____A_bool____* p1);
_Bool std__deque_A_bool___std__allocator_A_bool_______empty___const(struct std__deque_A_bool___std__allocator_A_bool___* p0);
void void_std__allocator_traits_std__allocator_A_bool_______destroy_A_bool___(struct std__allocator_A_bool__* p0, struct A_bool_* p1);
void std__deque_A_bool___std__allocator_A_bool________M_pop_back_aux(struct std__deque_A_bool___std__allocator_A_bool___* p0);
void std__deque_A_bool___std__allocator_A_bool_______pop_back(struct std__deque_A_bool___std__allocator_A_bool___* p0);
void std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________pop(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* p0);
struct std___Deque_iterator_A_bool___A_bool_____A_bool____* std___Deque_iterator_A_bool___A_bool____A_bool_____operator__(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* p0);
struct A_bool_* std___Deque_iterator_A_bool___A_bool____A_bool_____operator____const(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* p0);
struct A_bool_* std__deque_A_bool___std__allocator_A_bool_______back(struct std__deque_A_bool___std__allocator_A_bool___* p0);
struct A_bool_* std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________top(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* p0);
void A_bool___set(struct A_bool_* p0, _Bool p1);
_Bool std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________empty___const(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
unsigned long std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________size___const(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* p0);
void std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* p0);
int main();
void std__deque_A_bool___std__allocator_A_bool________deque(struct std__deque_A_bool___std__allocator_A_bool___* p0);
_Bool std____is_constant_evaluated();
void void_std__destroy_at_A_bool___(struct A_bool_* p0);
void void_std___Destroy_A_bool___(struct A_bool_* p0, struct A_bool_* p1);
void void_std___Destroy_A_bool____A_bool___(struct A_bool_* p0, struct A_bool_* p1, struct std__allocator_A_bool__* p2);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long std__deque_A_bool___std__allocator_A_bool________S_buffer_size();
void std__deque_A_bool___std__allocator_A_bool________M_destroy_data_aux(struct std__deque_A_bool___std__allocator_A_bool___* p0, struct std___Deque_iterator_A_bool___A_bool_____A_bool____ p1, struct std___Deque_iterator_A_bool___A_bool_____A_bool____ p2);
void std___Deque_iterator_A_bool___A_bool____A_bool______Deque_iterator(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* p0, struct std___Deque_iterator_A_bool___A_bool_____A_bool____* p1);
void std__deque_A_bool___std__allocator_A_bool________M_destroy_data(struct std__deque_A_bool___std__allocator_A_bool___* p0, struct std___Deque_iterator_A_bool___A_bool_____A_bool____ p1, struct std___Deque_iterator_A_bool___A_bool_____A_bool____ p2, struct std__allocator_A_bool__* p3);
struct std___Deque_iterator_A_bool___A_bool_____A_bool____ std__deque_A_bool___std__allocator_A_bool_______begin(struct std__deque_A_bool___std__allocator_A_bool___* p0);
struct std___Deque_iterator_A_bool___A_bool_____A_bool____ std__deque_A_bool___std__allocator_A_bool_______end(struct std__deque_A_bool___std__allocator_A_bool___* p0);
struct std__allocator_A_bool__* std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_A_bool_____deallocate(struct std____new_allocator_A_bool__* p0, struct A_bool_* p1, unsigned long p2);
void std__allocator_A_bool_____deallocate(struct std__allocator_A_bool__* p0, struct A_bool_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_A_bool_______deallocate(struct std__allocator_A_bool__* p0, struct A_bool_* p1, unsigned long p2);
void std___Deque_base_A_bool___std__allocator_A_bool________M_deallocate_node(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0, struct A_bool_* p1);
void std___Deque_base_A_bool___std__allocator_A_bool________M_destroy_nodes(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0, struct A_bool_** p1, struct A_bool_** p2);
struct std__allocator_A_bool__* std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator___const(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0);
void std__allocator_A_bool_____allocator_A_bool___(struct std__allocator_A_bool____* p0, struct std__allocator_A_bool__* p1);
struct std__allocator_A_bool____ std___Deque_base_A_bool___std__allocator_A_bool________M_get_map_allocator___const(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0);
void std____new_allocator_A_bool_____deallocate_2(struct std____new_allocator_A_bool____* p0, struct A_bool_** p1, unsigned long p2);
void std__allocator_A_bool_____deallocate_2(struct std__allocator_A_bool____* p0, struct A_bool_** p1, unsigned long p2);
void std__allocator_traits_std__allocator_A_bool_______deallocate_2(struct std__allocator_A_bool____* p0, struct A_bool_** p1, unsigned long p2);
void std___Deque_base_A_bool___std__allocator_A_bool________M_deallocate_map(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0, struct A_bool_** p1, unsigned long p2);
void std___Deque_base_A_bool___std__allocator_A_bool________Deque_impl____Deque_impl(struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl* p0);
void std___Deque_base_A_bool___std__allocator_A_bool_________Deque_base(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0);
void std____new_allocator_A_bool_______new_allocator_2(struct std____new_allocator_A_bool____* p0);
void std__allocator_A_bool______allocator(struct std__allocator_A_bool__* p0);
void std__deque_A_bool___std__allocator_A_bool_______deque(struct std__deque_A_bool___std__allocator_A_bool___* p0);
void std___Deque_base_A_bool___std__allocator_A_bool________Deque_impl___Deque_impl(struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_A_bool______M_max_size___const_2(struct std____new_allocator_A_bool____* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct A_bool_** std____new_allocator_A_bool_____allocate_2(struct std____new_allocator_A_bool____* p0, unsigned long p1, void* p2);
struct A_bool_** std__allocator_A_bool_____allocate_2(struct std__allocator_A_bool____* p0, unsigned long p1);
struct A_bool_** std__allocator_traits_std__allocator_A_bool_______allocate_2(struct std__allocator_A_bool____* p0, unsigned long p1);
struct A_bool_** std___Deque_base_A_bool___std__allocator_A_bool________M_allocate_map(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0, unsigned long p1);
extern int __gxx_personality_v0();
unsigned long std____new_allocator_A_bool______M_max_size___const(struct std____new_allocator_A_bool__* p0);
struct A_bool_* std____new_allocator_A_bool_____allocate(struct std____new_allocator_A_bool__* p0, unsigned long p1, void* p2);
struct A_bool_* std__allocator_A_bool_____allocate(struct std__allocator_A_bool__* p0, unsigned long p1);
struct A_bool_* std__allocator_traits_std__allocator_A_bool_______allocate(struct std__allocator_A_bool__* p0, unsigned long p1);
struct A_bool_* std___Deque_base_A_bool___std__allocator_A_bool________M_allocate_node(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0);
void std___Deque_base_A_bool___std__allocator_A_bool________M_create_nodes(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0, struct A_bool_** p1, struct A_bool_** p2);
unsigned long std___Deque_iterator_A_bool___A_bool____A_bool______S_buffer_size();
void std___Deque_iterator_A_bool___A_bool____A_bool______M_set_node(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* p0, struct A_bool_** p1);
void std___Deque_base_A_bool___std__allocator_A_bool________M_initialize_map(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0, unsigned long p1);
void std___Deque_base_A_bool___std__allocator_A_bool________Deque_base(struct std___Deque_base_A_bool___std__allocator_A_bool___* p0);
void std____new_allocator_A_bool_______new_allocator(struct std____new_allocator_A_bool__* p0);
void std__allocator_A_bool_____allocator(struct std__allocator_A_bool__* p0);
void std___Deque_iterator_A_bool___A_bool____A_bool______Deque_iterator_2(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* p0);
void std___Deque_base_A_bool___std__allocator_A_bool________Deque_impl_data___Deque_impl_data(struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* p0);

// function: _ZN1AIbE3getEv
_Bool A_bool___get(struct A_bool_* v0) {
bb1:
  struct A_bool_* this2;
  _Bool __retval3;
  this2 = v0;
  struct A_bool_* t4 = this2;
  _Bool t5 = t4->a;
  __retval3 = t5;
  _Bool t6 = __retval3;
  return t6;
}

// function: _Zne1AIbES0_
_Bool operator___2(struct A_bool_ v7, struct A_bool_ v8) {
bb9:
  struct A_bool_ x10;
  struct A_bool_ y11;
  _Bool __retval12;
  x10 = v7;
  y11 = v8;
    _Bool r13 = A_bool___get(&x10);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    int cast14 = (int)r13;
    _Bool r15 = A_bool___get(&y11);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    int cast16 = (int)r15;
    _Bool c17 = ((cast14 != cast16)) ? 1 : 0;
    if (c17) {
      _Bool c18 = 1;
      __retval12 = c18;
      _Bool t19 = __retval12;
      return t19;
    }
  _Bool c20 = 0;
  __retval12 = c20;
  _Bool t21 = __retval12;
  return t21;
}

// function: _Zeq1AIbES0_
_Bool operator__(struct A_bool_ v22, struct A_bool_ v23) {
bb24:
  struct A_bool_ x25;
  struct A_bool_ y26;
  _Bool __retval27;
  x25 = v22;
  y26 = v23;
    _Bool r28 = A_bool___get(&x25);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    int cast29 = (int)r28;
    _Bool r30 = A_bool___get(&y26);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    int cast31 = (int)r30;
    _Bool c32 = ((cast29 == cast31)) ? 1 : 0;
    if (c32) {
      _Bool c33 = 1;
      __retval27 = c33;
      _Bool t34 = __retval27;
      return t34;
    }
  _Bool c35 = 0;
  __retval27 = c35;
  _Bool t36 = __retval27;
  return t36;
}

// function: _Zlt1AIbES0_
_Bool operator_(struct A_bool_ v37, struct A_bool_ v38) {
bb39:
  struct A_bool_ x40;
  struct A_bool_ y41;
  _Bool __retval42;
  x40 = v37;
  y41 = v38;
  _Bool c43 = 0;
  __retval42 = c43;
  _Bool t44 = __retval42;
  return t44;
}

// function: _ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEEC2IS4_vEEv
void std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________stack_std__deque_A_bool___std__allocator_A_bool_______void_(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* v45) {
bb46:
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* this47;
  this47 = v45;
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* t48 = this47;
  struct std__deque_A_bool___std__allocator_A_bool___ c49 = {0};
  t48->c = c49;
  std__deque_A_bool___std__allocator_A_bool_______deque(&t48->c);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN1AIbEC2Ev
void A_bool___A(struct A_bool_* v50) {
bb51:
  struct A_bool_* this52;
  this52 = v50;
  struct A_bool_* t53 = this52;
  _Bool c54 = 1;
  t53->a = c54;
  return;
}

// function: _ZSt12construct_atI1AIbEJRKS1_EQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S4_pispclsr3stdE7declvalIT0_EEEEEPS4_S7_DpOS6_
struct A_bool_* _ZSt12construct_atI1AIbEJRKS1_EQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S4_pispclsr3stdE7declvalIT0_EEEEEPS4_S7_DpOS6_(struct A_bool_* v55, struct A_bool_* v56) {
bb57:
  struct A_bool_* __location58;
  struct A_bool_* __args59;
  struct A_bool_* __retval60;
  void* __loc61;
  __location58 = v55;
  __args59 = v56;
  struct A_bool_* t62 = __location58;
  void* cast63 = (void*)t62;
  __loc61 = cast63;
    void* t64 = __loc61;
    struct A_bool_* cast65 = (struct A_bool_*)t64;
    struct A_bool_* t66 = __args59;
    *cast65 = *t66; // copy
    __retval60 = cast65;
    struct A_bool_* t67 = __retval60;
    return t67;
  abort();
}

// function: _ZNSt16allocator_traitsISaI1AIbEEE9constructIS1_JRKS1_EEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_A_bool_______construct_A_bool___A_bool__const__(struct std__allocator_A_bool__* v68, struct A_bool_* v69, struct A_bool_* v70) {
bb71:
  struct std__allocator_A_bool__* __a72;
  struct A_bool_* __p73;
  struct A_bool_* __args74;
  __a72 = v68;
  __p73 = v69;
  __args74 = v70;
  struct A_bool_* t75 = __p73;
  struct A_bool_* t76 = __args74;
  struct A_bool_* r77 = _ZSt12construct_atI1AIbEJRKS1_EQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S4_pispclsr3stdE7declvalIT0_EEEEEPS4_S7_DpOS6_(t75, t76);
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorI1AIbERS1_PS1_ES6_
long std__operator_(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* v78, struct std___Deque_iterator_A_bool___A_bool_____A_bool____* v79) {
bb80:
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* __x81;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* __y82;
  long __retval83;
  __x81 = v78;
  __y82 = v79;
  unsigned long r84 = std___Deque_iterator_A_bool___A_bool____A_bool______S_buffer_size();
  long cast85 = (long)r84;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t86 = __x81;
  struct A_bool_** t87 = t86->_M_node;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t88 = __y82;
  struct A_bool_** t89 = t88->_M_node;
  long diff90 = t87 - t89;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t91 = __x81;
  struct A_bool_** t92 = t91->_M_node;
  _Bool cast93 = (_Bool)t92;
  long cast94 = (long)cast93;
  long b95 = diff90 - cast94;
  long b96 = cast85 * b95;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t97 = __x81;
  struct A_bool_* t98 = t97->_M_cur;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t99 = __x81;
  struct A_bool_* t100 = t99->_M_first;
  long diff101 = t98 - t100;
  long b102 = b96 + diff101;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t103 = __y82;
  struct A_bool_* t104 = t103->_M_last;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t105 = __y82;
  struct A_bool_* t106 = t105->_M_cur;
  long diff107 = t104 - t106;
  long b108 = b102 + diff107;
  __retval83 = b108;
  long t109 = __retval83;
  return t109;
}

// function: _ZNKSt5dequeI1AIbESaIS1_EE4sizeEv
unsigned long std__deque_A_bool___std__allocator_A_bool_______size___const(struct std__deque_A_bool___std__allocator_A_bool___* v110) {
bb111:
  struct std__deque_A_bool___std__allocator_A_bool___* this112;
  unsigned long __retval113;
  unsigned long __sz114;
  this112 = v110;
  struct std__deque_A_bool___std__allocator_A_bool___* t115 = this112;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base116 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t115 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base117 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base116->_M_impl) + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base118 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t115 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base119 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base118->_M_impl) + 0);
  long r120 = std__operator_(&base117->_M_finish, &base119->_M_start);
  unsigned long cast121 = (unsigned long)r120;
  __sz114 = cast121;
    unsigned long t122 = __sz114;
    unsigned long r123 = std__deque_A_bool___std__allocator_A_bool_______max_size___const(t115);
    _Bool c124 = ((t122 > r123)) ? 1 : 0;
    if (c124) {
      __builtin_unreachable();
    }
  unsigned long t125 = __sz114;
  __retval113 = t125;
  unsigned long t126 = __retval113;
  return t126;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v127, unsigned long* v128) {
bb129:
  unsigned long* __a130;
  unsigned long* __b131;
  unsigned long* __retval132;
  __a130 = v127;
  __b131 = v128;
    unsigned long* t133 = __b131;
    unsigned long t134 = *t133;
    unsigned long* t135 = __a130;
    unsigned long t136 = *t135;
    _Bool c137 = ((t134 < t136)) ? 1 : 0;
    if (c137) {
      unsigned long* t138 = __b131;
      __retval132 = t138;
      unsigned long* t139 = __retval132;
      return t139;
    }
  unsigned long* t140 = __a130;
  __retval132 = t140;
  unsigned long* t141 = __retval132;
  return t141;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE11_S_max_sizeERKS2_
unsigned long std__deque_A_bool___std__allocator_A_bool________S_max_size(struct std__allocator_A_bool__* v142) {
bb143:
  struct std__allocator_A_bool__* __a144;
  unsigned long __retval145;
  unsigned long __diffmax146;
  unsigned long __allocmax147;
  __a144 = v142;
  unsigned long c148 = 9223372036854775807;
  __diffmax146 = c148;
  unsigned long c149 = -1;
  __allocmax147 = c149;
  unsigned long* r150 = unsigned_long_const__std__min_unsigned_long_(&__diffmax146, &__allocmax147);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t151 = *r150;
  __retval145 = t151;
  unsigned long t152 = __retval145;
  return t152;
}

// function: _ZNKSt5dequeI1AIbESaIS1_EE8max_sizeEv
unsigned long std__deque_A_bool___std__allocator_A_bool_______max_size___const(struct std__deque_A_bool___std__allocator_A_bool___* v153) {
bb154:
  struct std__deque_A_bool___std__allocator_A_bool___* this155;
  unsigned long __retval156;
  this155 = v153;
  struct std__deque_A_bool___std__allocator_A_bool___* t157 = this155;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base158 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t157 + 0);
  struct std__allocator_A_bool__* r159 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator___const(base158);
  unsigned long r160 = std__deque_A_bool___std__allocator_A_bool________S_max_size(r159);
  __retval156 = r160;
  unsigned long t161 = __retval156;
  return t161;
}

// function: _ZSt12__niter_wrapIPP1AIbEET_RKS4_S4_
struct A_bool_** A_bool____std____niter_wrap_A_bool____(struct A_bool_*** v162, struct A_bool_** v163) {
bb164:
  struct A_bool_*** unnamed165;
  struct A_bool_** __res166;
  struct A_bool_** __retval167;
  unnamed165 = v162;
  __res166 = v163;
  struct A_bool_** t168 = __res166;
  __retval167 = t168;
  struct A_bool_** t169 = __retval167;
  return t169;
}

// function: _ZSt10__distanceIPP1AIbEENSt15iterator_traitsIT_E15difference_typeES5_S5_St26random_access_iterator_tag
long std__iterator_traits_A_bool______difference_type_std____distance_A_bool____(struct A_bool_** v170, struct A_bool_** v171, struct std__random_access_iterator_tag v172) {
bb173:
  struct A_bool_** __first174;
  struct A_bool_** __last175;
  struct std__random_access_iterator_tag unnamed176;
  long __retval177;
  __first174 = v170;
  __last175 = v171;
  unnamed176 = v172;
  struct A_bool_** t178 = __last175;
  struct A_bool_** t179 = __first174;
  long diff180 = t178 - t179;
  __retval177 = diff180;
  long t181 = __retval177;
  return t181;
}

// function: _ZSt19__iterator_categoryIPP1AIbEENSt15iterator_traitsIT_E17iterator_categoryERKS5_
struct std__random_access_iterator_tag std__iterator_traits_A_bool______iterator_category_std____iterator_category_A_bool____(struct A_bool_*** v182) {
bb183:
  struct A_bool_*** unnamed184;
  struct std__random_access_iterator_tag __retval185;
  unnamed184 = v182;
  struct std__random_access_iterator_tag t186 = __retval185;
  return t186;
}

// function: _ZSt8distanceIPP1AIbEENSt15iterator_traitsIT_E15difference_typeES5_S5_
long std__iterator_traits_A_bool______difference_type_std__distance_A_bool____(struct A_bool_** v187, struct A_bool_** v188) {
bb189:
  struct A_bool_** __first190;
  struct A_bool_** __last191;
  long __retval192;
  struct std__random_access_iterator_tag agg_tmp0193;
  __first190 = v187;
  __last191 = v188;
  struct A_bool_** t194 = __first190;
  struct A_bool_** t195 = __last191;
  struct std__random_access_iterator_tag r196 = std__iterator_traits_A_bool______iterator_category_std____iterator_category_A_bool____(&__first190);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0193 = r196;
  struct std__random_access_iterator_tag t197 = agg_tmp0193;
  long r198 = std__iterator_traits_A_bool______difference_type_std____distance_A_bool____(t194, t195, t197);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval192 = r198;
  long t199 = __retval192;
  return t199;
}

// function: _ZSt12__assign_oneILb0EPP1AIbES3_EvRT0_RT1_
void void_std____assign_one_false__A_bool_____A_bool____(struct A_bool_*** v200, struct A_bool_*** v201) {
bb202:
  struct A_bool_*** __out203;
  struct A_bool_*** __in204;
  __out203 = v200;
  __in204 = v201;
    struct A_bool_*** t205 = __in204;
    struct A_bool_** t206 = *t205;
    struct A_bool_* t207 = *t206;
    struct A_bool_*** t208 = __out203;
    struct A_bool_** t209 = *t208;
    *t209 = t207;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPP1AIbES3_S3_ET2_T0_T1_S4_
struct A_bool_** A_bool____std____copy_move_a2_false__A_bool_____A_bool_____A_bool____(struct A_bool_** v210, struct A_bool_** v211, struct A_bool_** v212) {
bb213:
  struct A_bool_** __first214;
  struct A_bool_** __last215;
  struct A_bool_** __result216;
  struct A_bool_** __retval217;
  __first214 = v210;
  __last215 = v211;
  __result216 = v212;
      _Bool r218 = std____is_constant_evaluated();
      if (r218) {
      } else {
          long __n219;
          struct A_bool_** t220 = __first214;
          struct A_bool_** t221 = __last215;
          long r222 = std__iterator_traits_A_bool______difference_type_std__distance_A_bool____(t220, t221);
          if (__cir_exc_active) {
            struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
            return __cir_eh_ret;
          }
          __n219 = r222;
            long t223 = __n219;
            long c224 = 1;
            _Bool c225 = ((t223 > c224)) ? 1 : 0;
            if (c225) {
              struct A_bool_** t226 = __result216;
              void* cast227 = (void*)t226;
              struct A_bool_** t228 = __first214;
              void* cast229 = (void*)t228;
              long t230 = __n219;
              unsigned long cast231 = (unsigned long)t230;
              unsigned long c232 = 8;
              unsigned long b233 = cast231 * c232;
              void* r234 = memmove(cast227, cast229, b233);
              long t235 = __n219;
              struct A_bool_** t236 = __result216;
              struct A_bool_** ptr237 = &(t236)[t235];
              __result216 = ptr237;
            } else {
                long t238 = __n219;
                long c239 = 1;
                _Bool c240 = ((t238 == c239)) ? 1 : 0;
                if (c240) {
                  void_std____assign_one_false__A_bool_____A_bool____(&__result216, &__first214);
                  if (__cir_exc_active) {
                    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
                    return __cir_eh_ret;
                  }
                  struct A_bool_** t241 = __result216;
                  int c242 = 1;
                  struct A_bool_** ptr243 = &(t241)[c242];
                  __result216 = ptr243;
                }
            }
          struct A_bool_** t244 = __result216;
          __retval217 = t244;
          struct A_bool_** t245 = __retval217;
          return t245;
      }
    while (1) {
      struct A_bool_** t247 = __first214;
      struct A_bool_** t248 = __last215;
      _Bool c249 = ((t247 != t248)) ? 1 : 0;
      if (!c249) break;
      void_std____assign_one_false__A_bool_____A_bool____(&__result216, &__first214);
      if (__cir_exc_active) {
        struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
        return __cir_eh_ret;
      }
    for_step246: ;
      struct A_bool_** t250 = __result216;
      int c251 = 1;
      struct A_bool_** ptr252 = &(t250)[c251];
      __result216 = ptr252;
      struct A_bool_** t253 = __first214;
      int c254 = 1;
      struct A_bool_** ptr255 = &(t253)[c254];
      __first214 = ptr255;
    }
  struct A_bool_** t256 = __result216;
  __retval217 = t256;
  struct A_bool_** t257 = __retval217;
  return t257;
}

// function: _ZSt14__copy_move_a1ILb0EPP1AIbES3_ET1_T0_S5_S4_
struct A_bool_** A_bool____std____copy_move_a1_false__A_bool_____A_bool____(struct A_bool_** v258, struct A_bool_** v259, struct A_bool_** v260) {
bb261:
  struct A_bool_** __first262;
  struct A_bool_** __last263;
  struct A_bool_** __result264;
  struct A_bool_** __retval265;
  __first262 = v258;
  __last263 = v259;
  __result264 = v260;
  struct A_bool_** t266 = __first262;
  struct A_bool_** t267 = __last263;
  struct A_bool_** t268 = __result264;
  struct A_bool_** r269 = A_bool____std____copy_move_a2_false__A_bool_____A_bool_____A_bool____(t266, t267, t268);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  __retval265 = r269;
  struct A_bool_** t270 = __retval265;
  return t270;
}

// function: _ZSt12__niter_baseIPP1AIbEET_S4_
struct A_bool_** A_bool____std____niter_base_A_bool____(struct A_bool_** v271) {
bb272:
  struct A_bool_** __it273;
  struct A_bool_** __retval274;
  __it273 = v271;
  struct A_bool_** t275 = __it273;
  __retval274 = t275;
  struct A_bool_** t276 = __retval274;
  return t276;
}

// function: _ZSt13__copy_move_aILb0EPP1AIbES3_ET1_T0_S5_S4_
struct A_bool_** A_bool____std____copy_move_a_false__A_bool_____A_bool____(struct A_bool_** v277, struct A_bool_** v278, struct A_bool_** v279) {
bb280:
  struct A_bool_** __first281;
  struct A_bool_** __last282;
  struct A_bool_** __result283;
  struct A_bool_** __retval284;
  __first281 = v277;
  __last282 = v278;
  __result283 = v279;
  struct A_bool_** t285 = __first281;
  struct A_bool_** r286 = A_bool____std____niter_base_A_bool____(t285);
  struct A_bool_** t287 = __last282;
  struct A_bool_** r288 = A_bool____std____niter_base_A_bool____(t287);
  struct A_bool_** t289 = __result283;
  struct A_bool_** r290 = A_bool____std____niter_base_A_bool____(t289);
  struct A_bool_** r291 = A_bool____std____copy_move_a1_false__A_bool_____A_bool____(r286, r288, r290);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  struct A_bool_** r292 = A_bool____std____niter_wrap_A_bool____(&__result283, r291);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  __retval284 = r292;
  struct A_bool_** t293 = __retval284;
  return t293;
}

// function: _ZSt12__miter_baseIPP1AIbEET_S4_
struct A_bool_** A_bool____std____miter_base_A_bool____(struct A_bool_** v294) {
bb295:
  struct A_bool_** __it296;
  struct A_bool_** __retval297;
  __it296 = v294;
  struct A_bool_** t298 = __it296;
  __retval297 = t298;
  struct A_bool_** t299 = __retval297;
  return t299;
}

// function: _ZSt4copyIPP1AIbES3_ET0_T_S5_S4_
struct A_bool_** A_bool____std__copy_A_bool_____A_bool____(struct A_bool_** v300, struct A_bool_** v301, struct A_bool_** v302) {
bb303:
  struct A_bool_** __first304;
  struct A_bool_** __last305;
  struct A_bool_** __result306;
  struct A_bool_** __retval307;
  __first304 = v300;
  __last305 = v301;
  __result306 = v302;
  struct A_bool_** t308 = __first304;
  struct A_bool_** r309 = A_bool____std____miter_base_A_bool____(t308);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  struct A_bool_** t310 = __last305;
  struct A_bool_** r311 = A_bool____std____miter_base_A_bool____(t310);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  struct A_bool_** t312 = __result306;
  struct A_bool_** r313 = A_bool____std____copy_move_a_false__A_bool_____A_bool____(r309, r311, t312);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  __retval307 = r313;
  struct A_bool_** t314 = __retval307;
  return t314;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb315:
  _Bool __retval316;
    _Bool c317 = 0;
    __retval316 = c317;
    _Bool t318 = __retval316;
    return t318;
  abort();
}

// function: _ZSt9__advanceIPP1AIbElEvRT_T0_St26random_access_iterator_tag
void void_std____advance_A_bool_____long_(struct A_bool_*** v319, long v320, struct std__random_access_iterator_tag v321) {
bb322:
  struct A_bool_*** __i323;
  long __n324;
  struct std__random_access_iterator_tag unnamed325;
  __i323 = v319;
  __n324 = v320;
  unnamed325 = v321;
    long t326 = __n324;
    _Bool isconst327 = 0;
    _Bool ternary328;
    if (isconst327) {
      long t329 = __n324;
      long c330 = 1;
      _Bool c331 = ((t329 == c330)) ? 1 : 0;
      ternary328 = (_Bool)c331;
    } else {
      _Bool c332 = 0;
      ternary328 = (_Bool)c332;
    }
    if (ternary328) {
      struct A_bool_*** t333 = __i323;
      struct A_bool_** t334 = *t333;
      int c335 = 1;
      struct A_bool_** ptr336 = &(t334)[c335];
      *t333 = ptr336;
    } else {
        long t337 = __n324;
        _Bool isconst338 = 0;
        _Bool ternary339;
        if (isconst338) {
          long t340 = __n324;
          long c341 = -1;
          _Bool c342 = ((t340 == c341)) ? 1 : 0;
          ternary339 = (_Bool)c342;
        } else {
          _Bool c343 = 0;
          ternary339 = (_Bool)c343;
        }
        if (ternary339) {
          struct A_bool_*** t344 = __i323;
          struct A_bool_** t345 = *t344;
          int c346 = -1;
          struct A_bool_** ptr347 = &(t345)[c346];
          *t344 = ptr347;
        } else {
          long t348 = __n324;
          struct A_bool_*** t349 = __i323;
          struct A_bool_** t350 = *t349;
          struct A_bool_** ptr351 = &(t350)[t348];
          *t349 = ptr351;
        }
    }
  return;
}

// function: _ZSt7advanceIPP1AIbElEvRT_T0_
void void_std__advance_A_bool_____long_(struct A_bool_*** v352, long v353) {
bb354:
  struct A_bool_*** __i355;
  long __n356;
  long __d357;
  struct std__random_access_iterator_tag agg_tmp0358;
  __i355 = v352;
  __n356 = v353;
  long t359 = __n356;
  __d357 = t359;
  struct A_bool_*** t360 = __i355;
  long t361 = __d357;
  struct A_bool_*** t362 = __i355;
  struct std__random_access_iterator_tag r363 = std__iterator_traits_A_bool______iterator_category_std____iterator_category_A_bool____(t362);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0358 = r363;
  struct std__random_access_iterator_tag t364 = agg_tmp0358;
  void_std____advance_A_bool_____long_(t360, t361, t364);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPP1AIbES3_ET1_T0_S5_S4_
struct A_bool_** A_bool____std____copy_move_backward_a2_false__A_bool_____A_bool____(struct A_bool_** v365, struct A_bool_** v366, struct A_bool_** v367) {
bb368:
  struct A_bool_** __first369;
  struct A_bool_** __last370;
  struct A_bool_** __result371;
  struct A_bool_** __retval372;
  __first369 = v365;
  __last370 = v366;
  __result371 = v367;
      _Bool r373 = std__is_constant_evaluated();
      if (r373) {
      } else {
          long __n374;
          struct A_bool_** t375 = __first369;
          struct A_bool_** t376 = __last370;
          long r377 = std__iterator_traits_A_bool______difference_type_std__distance_A_bool____(t375, t376);
          if (__cir_exc_active) {
            struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
            return __cir_eh_ret;
          }
          __n374 = r377;
          long t378 = __n374;
          long u379 = -t378;
          void_std__advance_A_bool_____long_(&__result371, u379);
          if (__cir_exc_active) {
            struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
            return __cir_eh_ret;
          }
            long t380 = __n374;
            long c381 = 1;
            _Bool c382 = ((t380 > c381)) ? 1 : 0;
            if (c382) {
              struct A_bool_** t383 = __result371;
              void* cast384 = (void*)t383;
              struct A_bool_** t385 = __first369;
              void* cast386 = (void*)t385;
              long t387 = __n374;
              unsigned long cast388 = (unsigned long)t387;
              unsigned long c389 = 8;
              unsigned long b390 = cast388 * c389;
              void* r391 = memmove(cast384, cast386, b390);
            } else {
                long t392 = __n374;
                long c393 = 1;
                _Bool c394 = ((t392 == c393)) ? 1 : 0;
                if (c394) {
                  void_std____assign_one_false__A_bool_____A_bool____(&__result371, &__first369);
                  if (__cir_exc_active) {
                    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          struct A_bool_** t395 = __result371;
          __retval372 = t395;
          struct A_bool_** t396 = __retval372;
          return t396;
      }
    while (1) {
      struct A_bool_** t397 = __first369;
      struct A_bool_** t398 = __last370;
      _Bool c399 = ((t397 != t398)) ? 1 : 0;
      if (!c399) break;
        struct A_bool_** t400 = __last370;
        int c401 = -1;
        struct A_bool_** ptr402 = &(t400)[c401];
        __last370 = ptr402;
        struct A_bool_** t403 = __result371;
        int c404 = -1;
        struct A_bool_** ptr405 = &(t403)[c404];
        __result371 = ptr405;
        void_std____assign_one_false__A_bool_____A_bool____(&__result371, &__last370);
        if (__cir_exc_active) {
          struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
          return __cir_eh_ret;
        }
    }
  struct A_bool_** t406 = __result371;
  __retval372 = t406;
  struct A_bool_** t407 = __retval372;
  return t407;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPP1AIbES3_ET1_T0_S5_S4_
struct A_bool_** A_bool____std____copy_move_backward_a1_false__A_bool_____A_bool____(struct A_bool_** v408, struct A_bool_** v409, struct A_bool_** v410) {
bb411:
  struct A_bool_** __first412;
  struct A_bool_** __last413;
  struct A_bool_** __result414;
  struct A_bool_** __retval415;
  __first412 = v408;
  __last413 = v409;
  __result414 = v410;
  struct A_bool_** t416 = __first412;
  struct A_bool_** t417 = __last413;
  struct A_bool_** t418 = __result414;
  struct A_bool_** r419 = A_bool____std____copy_move_backward_a2_false__A_bool_____A_bool____(t416, t417, t418);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  __retval415 = r419;
  struct A_bool_** t420 = __retval415;
  return t420;
}

// function: _ZSt22__copy_move_backward_aILb0EPP1AIbES3_ET1_T0_S5_S4_
struct A_bool_** A_bool____std____copy_move_backward_a_false__A_bool_____A_bool____(struct A_bool_** v421, struct A_bool_** v422, struct A_bool_** v423) {
bb424:
  struct A_bool_** __first425;
  struct A_bool_** __last426;
  struct A_bool_** __result427;
  struct A_bool_** __retval428;
  __first425 = v421;
  __last426 = v422;
  __result427 = v423;
  struct A_bool_** t429 = __first425;
  struct A_bool_** r430 = A_bool____std____niter_base_A_bool____(t429);
  struct A_bool_** t431 = __last426;
  struct A_bool_** r432 = A_bool____std____niter_base_A_bool____(t431);
  struct A_bool_** t433 = __result427;
  struct A_bool_** r434 = A_bool____std____niter_base_A_bool____(t433);
  struct A_bool_** r435 = A_bool____std____copy_move_backward_a1_false__A_bool_____A_bool____(r430, r432, r434);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  struct A_bool_** r436 = A_bool____std____niter_wrap_A_bool____(&__result427, r435);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  __retval428 = r436;
  struct A_bool_** t437 = __retval428;
  return t437;
}

// function: _ZSt13copy_backwardIPP1AIbES3_ET0_T_S5_S4_
struct A_bool_** A_bool____std__copy_backward_A_bool_____A_bool____(struct A_bool_** v438, struct A_bool_** v439, struct A_bool_** v440) {
bb441:
  struct A_bool_** __first442;
  struct A_bool_** __last443;
  struct A_bool_** __result444;
  struct A_bool_** __retval445;
  __first442 = v438;
  __last443 = v439;
  __result444 = v440;
  struct A_bool_** t446 = __first442;
  struct A_bool_** r447 = A_bool____std____miter_base_A_bool____(t446);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  struct A_bool_** t448 = __last443;
  struct A_bool_** r449 = A_bool____std____miter_base_A_bool____(t448);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  struct A_bool_** t450 = __result444;
  struct A_bool_** r451 = A_bool____std____copy_move_backward_a_false__A_bool_____A_bool____(r447, r449, t450);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  __retval445 = r451;
  struct A_bool_** t452 = __retval445;
  return t452;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE17_M_reallocate_mapEmb
void std__deque_A_bool___std__allocator_A_bool________M_reallocate_map(struct std__deque_A_bool___std__allocator_A_bool___* v453, unsigned long v454, _Bool v455) {
bb456:
  struct std__deque_A_bool___std__allocator_A_bool___* this457;
  unsigned long __nodes_to_add458;
  _Bool __add_at_front459;
  unsigned long __old_num_nodes460;
  unsigned long __new_num_nodes461;
  struct A_bool_** __new_nstart462;
  this457 = v453;
  __nodes_to_add458 = v454;
  __add_at_front459 = v455;
  struct std__deque_A_bool___std__allocator_A_bool___* t463 = this457;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base464 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base465 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base464->_M_impl) + 0);
  struct A_bool_** t466 = base465->_M_finish._M_node;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base467 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base468 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base467->_M_impl) + 0);
  struct A_bool_** t469 = base468->_M_start._M_node;
  long diff470 = t466 - t469;
  long c471 = 1;
  long b472 = diff470 + c471;
  unsigned long cast473 = (unsigned long)b472;
  __old_num_nodes460 = cast473;
  unsigned long t474 = __old_num_nodes460;
  unsigned long t475 = __nodes_to_add458;
  unsigned long b476 = t474 + t475;
  __new_num_nodes461 = b476;
    struct std___Deque_base_A_bool___std__allocator_A_bool___* base477 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
    struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base478 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base477->_M_impl) + 0);
    unsigned long t479 = base478->_M_map_size;
    unsigned long c480 = 2;
    unsigned long t481 = __new_num_nodes461;
    unsigned long b482 = c480 * t481;
    _Bool c483 = ((t479 > b482)) ? 1 : 0;
    if (c483) {
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base484 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base485 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base484->_M_impl) + 0);
      struct A_bool_** t486 = base485->_M_map;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base487 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base488 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base487->_M_impl) + 0);
      unsigned long t489 = base488->_M_map_size;
      unsigned long t490 = __new_num_nodes461;
      unsigned long b491 = t489 - t490;
      unsigned long c492 = 2;
      unsigned long b493 = b491 / c492;
      struct A_bool_** ptr494 = &(t486)[b493];
      _Bool t495 = __add_at_front459;
      unsigned long ternary496;
      if (t495) {
        unsigned long t497 = __nodes_to_add458;
        ternary496 = (unsigned long)t497;
      } else {
        unsigned long c498 = 0;
        ternary496 = (unsigned long)c498;
      }
      struct A_bool_** ptr499 = &(ptr494)[ternary496];
      __new_nstart462 = ptr499;
        struct A_bool_** t500 = __new_nstart462;
        struct std___Deque_base_A_bool___std__allocator_A_bool___* base501 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
        struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base502 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base501->_M_impl) + 0);
        struct A_bool_** t503 = base502->_M_start._M_node;
        _Bool c504 = ((t500 < t503)) ? 1 : 0;
        if (c504) {
          struct std___Deque_base_A_bool___std__allocator_A_bool___* base505 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
          struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base506 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base505->_M_impl) + 0);
          struct A_bool_** t507 = base506->_M_start._M_node;
          struct std___Deque_base_A_bool___std__allocator_A_bool___* base508 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
          struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base509 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base508->_M_impl) + 0);
          struct A_bool_** t510 = base509->_M_finish._M_node;
          int c511 = 1;
          struct A_bool_** ptr512 = &(t510)[c511];
          struct A_bool_** t513 = __new_nstart462;
          struct A_bool_** r514 = A_bool____std__copy_A_bool_____A_bool____(t507, ptr512, t513);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_A_bool___std__allocator_A_bool___* base515 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
          struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base516 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base515->_M_impl) + 0);
          struct A_bool_** t517 = base516->_M_start._M_node;
          struct std___Deque_base_A_bool___std__allocator_A_bool___* base518 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
          struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base519 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base518->_M_impl) + 0);
          struct A_bool_** t520 = base519->_M_finish._M_node;
          int c521 = 1;
          struct A_bool_** ptr522 = &(t520)[c521];
          struct A_bool_** t523 = __new_nstart462;
          unsigned long t524 = __old_num_nodes460;
          struct A_bool_** ptr525 = &(t523)[t524];
          struct A_bool_** r526 = A_bool____std__copy_backward_A_bool_____A_bool____(t517, ptr522, ptr525);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size527;
      unsigned long __bufsz528;
      struct A_bool_** __new_map529;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base530 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base531 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base530->_M_impl) + 0);
      unsigned long t532 = base531->_M_map_size;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base533 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base534 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base533->_M_impl) + 0);
      unsigned long* r535 = unsigned_long_const__std__max_unsigned_long_(&base534->_M_map_size, &__nodes_to_add458);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t536 = *r535;
      unsigned long b537 = t532 + t536;
      unsigned long c538 = 2;
      unsigned long b539 = b537 + c538;
      __new_map_size527 = b539;
      unsigned long c540 = 512;
      __bufsz528 = c540;
        unsigned long t541 = __new_map_size527;
        unsigned long r542 = std__deque_A_bool___std__allocator_A_bool_______max_size___const(t463);
        unsigned long t543 = __bufsz528;
        unsigned long b544 = r542 + t543;
        unsigned long c545 = 1;
        unsigned long b546 = b544 - c545;
        unsigned long t547 = __bufsz528;
        unsigned long b548 = b546 / t547;
        unsigned long c549 = 2;
        unsigned long b550 = b548 * c549;
        _Bool c551 = ((t541 > b550)) ? 1 : 0;
        if (c551) {
          __builtin_unreachable();
        }
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base552 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      unsigned long t553 = __new_map_size527;
      struct A_bool_** r554 = std___Deque_base_A_bool___std__allocator_A_bool________M_allocate_map(base552, t553);
      if (__cir_exc_active) {
        return;
      }
      __new_map529 = r554;
      struct A_bool_** t555 = __new_map529;
      unsigned long t556 = __new_map_size527;
      unsigned long t557 = __new_num_nodes461;
      unsigned long b558 = t556 - t557;
      unsigned long c559 = 2;
      unsigned long b560 = b558 / c559;
      struct A_bool_** ptr561 = &(t555)[b560];
      _Bool t562 = __add_at_front459;
      unsigned long ternary563;
      if (t562) {
        unsigned long t564 = __nodes_to_add458;
        ternary563 = (unsigned long)t564;
      } else {
        unsigned long c565 = 0;
        ternary563 = (unsigned long)c565;
      }
      struct A_bool_** ptr566 = &(ptr561)[ternary563];
      __new_nstart462 = ptr566;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base567 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base568 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base567->_M_impl) + 0);
      struct A_bool_** t569 = base568->_M_start._M_node;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base570 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base571 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base570->_M_impl) + 0);
      struct A_bool_** t572 = base571->_M_finish._M_node;
      int c573 = 1;
      struct A_bool_** ptr574 = &(t572)[c573];
      struct A_bool_** t575 = __new_nstart462;
      struct A_bool_** r576 = A_bool____std__copy_A_bool_____A_bool____(t569, ptr574, t575);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base577 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base578 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base579 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base578->_M_impl) + 0);
      struct A_bool_** t580 = base579->_M_map;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base581 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base582 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base581->_M_impl) + 0);
      unsigned long t583 = base582->_M_map_size;
      std___Deque_base_A_bool___std__allocator_A_bool________M_deallocate_map(base577, t580, t583);
      struct A_bool_** t584 = __new_map529;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base585 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base586 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base585->_M_impl) + 0);
      base586->_M_map = t584;
      unsigned long t587 = __new_map_size527;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base588 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base589 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base588->_M_impl) + 0);
      base589->_M_map_size = t587;
    }
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base590 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base591 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base590->_M_impl) + 0);
  struct A_bool_** t592 = __new_nstart462;
  std___Deque_iterator_A_bool___A_bool____A_bool______M_set_node(&base591->_M_start, t592);
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base593 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t463 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base594 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base593->_M_impl) + 0);
  struct A_bool_** t595 = __new_nstart462;
  unsigned long t596 = __old_num_nodes460;
  struct A_bool_** ptr597 = &(t595)[t596];
  int c598 = -1;
  struct A_bool_** ptr599 = &(ptr597)[c598];
  std___Deque_iterator_A_bool___A_bool____A_bool______M_set_node(&base594->_M_finish, ptr599);
  return;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE22_M_reserve_map_at_backEm
void std__deque_A_bool___std__allocator_A_bool________M_reserve_map_at_back(struct std__deque_A_bool___std__allocator_A_bool___* v600, unsigned long v601) {
bb602:
  struct std__deque_A_bool___std__allocator_A_bool___* this603;
  unsigned long __nodes_to_add604;
  this603 = v600;
  __nodes_to_add604 = v601;
  struct std__deque_A_bool___std__allocator_A_bool___* t605 = this603;
    unsigned long t606 = __nodes_to_add604;
    unsigned long c607 = 1;
    unsigned long b608 = t606 + c607;
    struct std___Deque_base_A_bool___std__allocator_A_bool___* base609 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t605 + 0);
    struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base610 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base609->_M_impl) + 0);
    unsigned long t611 = base610->_M_map_size;
    struct std___Deque_base_A_bool___std__allocator_A_bool___* base612 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t605 + 0);
    struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base613 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base612->_M_impl) + 0);
    struct A_bool_** t614 = base613->_M_finish._M_node;
    struct std___Deque_base_A_bool___std__allocator_A_bool___* base615 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t605 + 0);
    struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base616 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base615->_M_impl) + 0);
    struct A_bool_** t617 = base616->_M_map;
    long diff618 = t614 - t617;
    unsigned long cast619 = (unsigned long)diff618;
    unsigned long b620 = t611 - cast619;
    _Bool c621 = ((b608 > b620)) ? 1 : 0;
    if (c621) {
      unsigned long t622 = __nodes_to_add604;
      _Bool c623 = 0;
      std__deque_A_bool___std__allocator_A_bool________M_reallocate_map(t605, t622, c623);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE16_M_push_back_auxIJRKS1_EEEvDpOT_
void void_std__deque_A_bool___std__allocator_A_bool________M_push_back_aux_A_bool__const__(struct std__deque_A_bool___std__allocator_A_bool___* v624, struct A_bool_* v625) {
bb626:
  struct std__deque_A_bool___std__allocator_A_bool___* this627;
  struct A_bool_* __args628;
  this627 = v624;
  __args628 = v625;
  struct std__deque_A_bool___std__allocator_A_bool___* t629 = this627;
    unsigned long r630 = std__deque_A_bool___std__allocator_A_bool_______size___const(t629);
    unsigned long r631 = std__deque_A_bool___std__allocator_A_bool_______max_size___const(t629);
    _Bool c632 = ((r630 == r631)) ? 1 : 0;
    if (c632) {
      char* cast633 = (char*)&(_str_4);
      std____throw_length_error(cast633);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c634 = 1;
  std__deque_A_bool___std__allocator_A_bool________M_reserve_map_at_back(t629, c634);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base635 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t629 + 0);
  struct A_bool_* r636 = std___Deque_base_A_bool___std__allocator_A_bool________M_allocate_node(base635);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base637 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t629 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base638 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base637->_M_impl) + 0);
  struct A_bool_** t639 = base638->_M_finish._M_node;
  int c640 = 1;
  struct A_bool_** ptr641 = &(t639)[c640];
  *ptr641 = r636;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base643 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t629 + 0);
      struct std__allocator_A_bool__* base644 = (struct std__allocator_A_bool__*)((char *)&(base643->_M_impl) + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base645 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t629 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base646 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base645->_M_impl) + 0);
      struct A_bool_* t647 = base646->_M_finish._M_cur;
      struct A_bool_* t648 = __args628;
      void_std__allocator_traits_std__allocator_A_bool_______construct_A_bool___A_bool__const__(base644, t647, t648);
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base649 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t629 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base650 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base649->_M_impl) + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base651 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t629 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base652 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base651->_M_impl) + 0);
      struct A_bool_** t653 = base652->_M_finish._M_node;
      int c654 = 1;
      struct A_bool_** ptr655 = &(t653)[c654];
      std___Deque_iterator_A_bool___A_bool____A_bool______M_set_node(&base650->_M_finish, ptr655);
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base656 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t629 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base657 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base656->_M_impl) + 0);
      struct A_bool_* t658 = base657->_M_finish._M_first;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base659 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t629 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base660 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base659->_M_impl) + 0);
      base660->_M_finish._M_cur = t658;
    cir_try_dispatch642: ;
    if (__cir_exc_active) {
    {
      int ca_tok661 = 0;
      void* ca_exn662 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_A_bool___std__allocator_A_bool___* base663 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t629 + 0);
        struct std___Deque_base_A_bool___std__allocator_A_bool___* base664 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t629 + 0);
        struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base665 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base664->_M_impl) + 0);
        struct A_bool_** t666 = base665->_M_finish._M_node;
        int c667 = 1;
        struct A_bool_** ptr668 = &(t666)[c667];
        struct A_bool_* t669 = *ptr668;
        std___Deque_base_A_bool___std__allocator_A_bool________M_deallocate_node(base663, t669);
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

// function: _ZNSt5dequeI1AIbESaIS1_EE9push_backERKS1_
void std__deque_A_bool___std__allocator_A_bool_______push_back(struct std__deque_A_bool___std__allocator_A_bool___* v670, struct A_bool_* v671) {
bb672:
  struct std__deque_A_bool___std__allocator_A_bool___* this673;
  struct A_bool_* __x674;
  this673 = v670;
  __x674 = v671;
  struct std__deque_A_bool___std__allocator_A_bool___* t675 = this673;
    struct std___Deque_base_A_bool___std__allocator_A_bool___* base676 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t675 + 0);
    struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base677 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base676->_M_impl) + 0);
    struct A_bool_* t678 = base677->_M_finish._M_cur;
    struct std___Deque_base_A_bool___std__allocator_A_bool___* base679 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t675 + 0);
    struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base680 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base679->_M_impl) + 0);
    struct A_bool_* t681 = base680->_M_finish._M_last;
    int c682 = -1;
    struct A_bool_* ptr683 = &(t681)[c682];
    _Bool c684 = ((t678 != ptr683)) ? 1 : 0;
    if (c684) {
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base685 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t675 + 0);
      struct std__allocator_A_bool__* base686 = (struct std__allocator_A_bool__*)((char *)&(base685->_M_impl) + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base687 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t675 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base688 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base687->_M_impl) + 0);
      struct A_bool_* t689 = base688->_M_finish._M_cur;
      struct A_bool_* t690 = __x674;
      void_std__allocator_traits_std__allocator_A_bool_______construct_A_bool___A_bool__const__(base686, t689, t690);
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base691 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t675 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base692 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base691->_M_impl) + 0);
      struct A_bool_* t693 = base692->_M_finish._M_cur;
      int c694 = 1;
      struct A_bool_* ptr695 = &(t693)[c694];
      base692->_M_finish._M_cur = ptr695;
    } else {
      struct A_bool_* t696 = __x674;
      void_std__deque_A_bool___std__allocator_A_bool________M_push_back_aux_A_bool__const__(t675, t696);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEE4pushERKS1_
void std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________push(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* v697, struct A_bool_* v698) {
bb699:
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* this700;
  struct A_bool_* __x701;
  this700 = v697;
  __x701 = v698;
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* t702 = this700;
  struct A_bool_* t703 = __x701;
  std__deque_A_bool___std__allocator_A_bool_______push_back(&t702->c, t703);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorI1AIbERS1_PS1_ES6_
_Bool std__operator__(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* v704, struct std___Deque_iterator_A_bool___A_bool_____A_bool____* v705) {
bb706:
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* __x707;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* __y708;
  _Bool __retval709;
  __x707 = v704;
  __y708 = v705;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t710 = __x707;
  struct A_bool_* t711 = t710->_M_cur;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t712 = __y708;
  struct A_bool_* t713 = t712->_M_cur;
  _Bool c714 = ((t711 == t713)) ? 1 : 0;
  __retval709 = c714;
  _Bool t715 = __retval709;
  return t715;
}

// function: _ZNKSt5dequeI1AIbESaIS1_EE5emptyEv
_Bool std__deque_A_bool___std__allocator_A_bool_______empty___const(struct std__deque_A_bool___std__allocator_A_bool___* v716) {
bb717:
  struct std__deque_A_bool___std__allocator_A_bool___* this718;
  _Bool __retval719;
  this718 = v716;
  struct std__deque_A_bool___std__allocator_A_bool___* t720 = this718;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base721 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t720 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base722 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base721->_M_impl) + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base723 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t720 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base724 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base723->_M_impl) + 0);
  _Bool r725 = std__operator__(&base722->_M_finish, &base724->_M_start);
  __retval719 = r725;
  _Bool t726 = __retval719;
  return t726;
}

// function: _ZNSt16allocator_traitsISaI1AIbEEE7destroyIS1_EEvRS2_PT_
void void_std__allocator_traits_std__allocator_A_bool_______destroy_A_bool___(struct std__allocator_A_bool__* v727, struct A_bool_* v728) {
bb729:
  struct std__allocator_A_bool__* __a730;
  struct A_bool_* __p731;
  __a730 = v727;
  __p731 = v728;
  struct A_bool_* t732 = __p731;
  void_std__destroy_at_A_bool___(t732);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE15_M_pop_back_auxEv
void std__deque_A_bool___std__allocator_A_bool________M_pop_back_aux(struct std__deque_A_bool___std__allocator_A_bool___* v733) {
bb734:
  struct std__deque_A_bool___std__allocator_A_bool___* this735;
  this735 = v733;
  struct std__deque_A_bool___std__allocator_A_bool___* t736 = this735;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base737 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t736 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base738 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t736 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base739 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base738->_M_impl) + 0);
  struct A_bool_* t740 = base739->_M_finish._M_first;
  std___Deque_base_A_bool___std__allocator_A_bool________M_deallocate_node(base737, t740);
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base741 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t736 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base742 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base741->_M_impl) + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base743 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t736 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base744 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base743->_M_impl) + 0);
  struct A_bool_** t745 = base744->_M_finish._M_node;
  int c746 = -1;
  struct A_bool_** ptr747 = &(t745)[c746];
  std___Deque_iterator_A_bool___A_bool____A_bool______M_set_node(&base742->_M_finish, ptr747);
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base748 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t736 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base749 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base748->_M_impl) + 0);
  struct A_bool_* t750 = base749->_M_finish._M_last;
  int c751 = -1;
  struct A_bool_* ptr752 = &(t750)[c751];
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base753 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t736 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base754 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base753->_M_impl) + 0);
  base754->_M_finish._M_cur = ptr752;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base755 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t736 + 0);
  struct std__allocator_A_bool__* r756 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator(base755);
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base757 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t736 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base758 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base757->_M_impl) + 0);
  struct A_bool_* t759 = base758->_M_finish._M_cur;
  void_std__allocator_traits_std__allocator_A_bool_______destroy_A_bool___(r756, t759);
  return;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE8pop_backEv
void std__deque_A_bool___std__allocator_A_bool_______pop_back(struct std__deque_A_bool___std__allocator_A_bool___* v760) {
bb761:
  struct std__deque_A_bool___std__allocator_A_bool___* this762;
  this762 = v760;
  struct std__deque_A_bool___std__allocator_A_bool___* t763 = this762;
    do {
          _Bool r764 = std__deque_A_bool___std__allocator_A_bool_______empty___const(t763);
          if (r764) {
            char* cast765 = (char*)&(_str_7);
            int c766 = 1666;
            char* cast767 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeI1AIbESaIS1_EE8pop_backEv);
            char* cast768 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast765, c766, cast767, cast768);
          }
      _Bool c769 = 0;
      if (!c769) break;
    } while (1);
    struct std___Deque_base_A_bool___std__allocator_A_bool___* base770 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t763 + 0);
    struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base771 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base770->_M_impl) + 0);
    struct A_bool_* t772 = base771->_M_finish._M_cur;
    struct std___Deque_base_A_bool___std__allocator_A_bool___* base773 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t763 + 0);
    struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base774 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base773->_M_impl) + 0);
    struct A_bool_* t775 = base774->_M_finish._M_first;
    _Bool c776 = ((t772 != t775)) ? 1 : 0;
    if (c776) {
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base777 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t763 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base778 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base777->_M_impl) + 0);
      struct A_bool_* t779 = base778->_M_finish._M_cur;
      int c780 = -1;
      struct A_bool_* ptr781 = &(t779)[c780];
      base778->_M_finish._M_cur = ptr781;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base782 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t763 + 0);
      struct std__allocator_A_bool__* r783 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator(base782);
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base784 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t763 + 0);
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base785 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base784->_M_impl) + 0);
      struct A_bool_* t786 = base785->_M_finish._M_cur;
      void_std__allocator_traits_std__allocator_A_bool_______destroy_A_bool___(r783, t786);
    } else {
      std__deque_A_bool___std__allocator_A_bool________M_pop_back_aux(t763);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEE3popEv
void std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________pop(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* v787) {
bb788:
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* this789;
  this789 = v787;
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* t790 = this789;
    do {
          _Bool r791 = std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________empty___const(t790);
          if (__cir_exc_active) {
            return;
          }
          if (r791) {
            char* cast792 = (char*)&(_str_5);
            int c793 = 333;
            char* cast794 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEE3popEv);
            char* cast795 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast792, c793, cast794, cast795);
          }
      _Bool c796 = 0;
      if (!c796) break;
    } while (1);
  std__deque_A_bool___std__allocator_A_bool_______pop_back(&t790->c);
  return;
}

// function: _ZNSt15_Deque_iteratorI1AIbERS1_PS1_EmmEv
struct std___Deque_iterator_A_bool___A_bool_____A_bool____* std___Deque_iterator_A_bool___A_bool____A_bool_____operator__(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* v797) {
bb798:
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* this799;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* __retval800;
  this799 = v797;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t801 = this799;
    struct A_bool_* t802 = t801->_M_cur;
    struct A_bool_* t803 = t801->_M_first;
    _Bool c804 = ((t802 == t803)) ? 1 : 0;
    if (c804) {
      struct A_bool_** t805 = t801->_M_node;
      int c806 = -1;
      struct A_bool_** ptr807 = &(t805)[c806];
      std___Deque_iterator_A_bool___A_bool____A_bool______M_set_node(t801, ptr807);
      struct A_bool_* t808 = t801->_M_last;
      t801->_M_cur = t808;
    }
  struct A_bool_* t809 = t801->_M_cur;
  int c810 = -1;
  struct A_bool_* ptr811 = &(t809)[c810];
  t801->_M_cur = ptr811;
  __retval800 = t801;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t812 = __retval800;
  return t812;
}

// function: _ZNKSt15_Deque_iteratorI1AIbERS1_PS1_EdeEv
struct A_bool_* std___Deque_iterator_A_bool___A_bool____A_bool_____operator____const(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* v813) {
bb814:
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* this815;
  struct A_bool_* __retval816;
  this815 = v813;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t817 = this815;
  struct A_bool_* t818 = t817->_M_cur;
  __retval816 = t818;
  struct A_bool_* t819 = __retval816;
  return t819;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE4backEv
struct A_bool_* std__deque_A_bool___std__allocator_A_bool_______back(struct std__deque_A_bool___std__allocator_A_bool___* v820) {
bb821:
  struct std__deque_A_bool___std__allocator_A_bool___* this822;
  struct A_bool_* __retval823;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ __tmp824;
  this822 = v820;
  struct std__deque_A_bool___std__allocator_A_bool___* t825 = this822;
    do {
          _Bool r826 = std__deque_A_bool___std__allocator_A_bool_______empty___const(t825);
          if (r826) {
            char* cast827 = (char*)&(_str_7);
            int c828 = 1537;
            char* cast829 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeI1AIbESaIS1_EE4backEv);
            char* cast830 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast827, c828, cast829, cast830);
          }
      _Bool c831 = 0;
      if (!c831) break;
    } while (1);
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ r832 = std__deque_A_bool___std__allocator_A_bool_______end(t825);
  __tmp824 = r832;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* r833 = std___Deque_iterator_A_bool___A_bool____A_bool_____operator__(&__tmp824);
  struct A_bool_* r834 = std___Deque_iterator_A_bool___A_bool____A_bool_____operator____const(&__tmp824);
  __retval823 = r834;
  struct A_bool_* t835 = __retval823;
  return t835;
}

// function: _ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEE3topEv
struct A_bool_* std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________top(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* v836) {
bb837:
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* this838;
  struct A_bool_* __retval839;
  this838 = v836;
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* t840 = this838;
    do {
          _Bool r841 = std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________empty___const(t840);
          if (__cir_exc_active) {
            struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
            return __cir_eh_ret;
          }
          if (r841) {
            char* cast842 = (char*)&(_str_5);
            int c843 = 260;
            char* cast844 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEE3topEv);
            char* cast845 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast842, c843, cast844, cast845);
          }
      _Bool c846 = 0;
      if (!c846) break;
    } while (1);
  struct A_bool_* r847 = std__deque_A_bool___std__allocator_A_bool_______back(&t840->c);
  __retval839 = r847;
  struct A_bool_* t848 = __retval839;
  return t848;
}

// function: _ZN1AIbE3setEb
void A_bool___set(struct A_bool_* v849, _Bool v850) {
bb851:
  struct A_bool_* this852;
  _Bool x853;
  this852 = v849;
  x853 = v850;
  struct A_bool_* t854 = this852;
  _Bool t855 = x853;
  t854->a = t855;
  return;
}

// function: _ZNKSt5stackI1AIbESt5dequeIS1_SaIS1_EEE5emptyEv
_Bool std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________empty___const(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* v856) {
bb857:
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* this858;
  _Bool __retval859;
  this858 = v856;
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* t860 = this858;
  _Bool r861 = std__deque_A_bool___std__allocator_A_bool_______empty___const(&t860->c);
  __retval859 = r861;
  _Bool t862 = __retval859;
  return t862;
}

// function: _ZNKSt5stackI1AIbESt5dequeIS1_SaIS1_EEE4sizeEv
unsigned long std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________size___const(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* v863) {
bb864:
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* this865;
  unsigned long __retval866;
  this865 = v863;
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* t867 = this865;
  unsigned long r868 = std__deque_A_bool___std__allocator_A_bool_______size___const(&t867->c);
  __retval866 = r868;
  unsigned long t869 = __retval866;
  return t869;
}

// function: _ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEED2Ev
void std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* v870) {
bb871:
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* this872;
  this872 = v870;
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____* t873 = this872;
  {
    std__deque_A_bool___std__allocator_A_bool________deque(&t873->c);
  }
  return;
}

// function: main
int main() {
bb874:
  int __retval875;
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____ first876;
  struct A_bool_ x877;
  struct A_bool_ y878;
  struct A_bool_ z879;
  int c880 = 0;
  __retval875 = c880;
  std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________stack_std__deque_A_bool___std__allocator_A_bool_______void_(&first876);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    A_bool___A(&x877);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    A_bool___A(&y878);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    A_bool___A(&z879);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________push(&first876, &x877);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________push(&first876, &y878);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________push(&first876, &z879);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________pop(&first876);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct A_bool_* r881 = std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________top(&first876);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool c882 = 0;
    A_bool___set(r881, c882);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool r883 = std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________empty___const(&first876);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool u884 = !r883;
    if (u884) {
    } else {
      char* cast885 = (char*)&(_str);
      char* c886 = _str_1;
      unsigned int c887 = 57;
      char* cast888 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast885, c886, c887, cast888);
    }
    struct A_bool_* r889 = std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________top(&first876);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool r890 = A_bool___get(r889);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    if (r890) {
    } else {
      char* cast891 = (char*)&(_str_2);
      char* c892 = _str_1;
      unsigned int c893 = 58;
      char* cast894 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast891, c892, c893, cast894);
    }
    unsigned long r895 = std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool_________size___const(&first876);
    if (__cir_exc_active) {
      {
        std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c896 = 2;
    _Bool c897 = ((r895 == c896)) ? 1 : 0;
    if (c897) {
    } else {
      char* cast898 = (char*)&(_str_3);
      char* c899 = _str_1;
      unsigned int c900 = 59;
      char* cast901 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast898, c899, c900, cast901);
    }
    int c902 = 0;
    __retval875 = c902;
    int t903 = __retval875;
    int ret_val904 = t903;
    {
      std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool__________stack(&first876);
    }
    return ret_val904;
  int t905 = __retval875;
  return t905;
}

// function: _ZNSt5dequeI1AIbESaIS1_EED2Ev
void std__deque_A_bool___std__allocator_A_bool________deque(struct std__deque_A_bool___std__allocator_A_bool___* v906) {
bb907:
  struct std__deque_A_bool___std__allocator_A_bool___* this908;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ agg_tmp0909;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ agg_tmp1910;
  this908 = v906;
  struct std__deque_A_bool___std__allocator_A_bool___* t911 = this908;
    struct std___Deque_iterator_A_bool___A_bool_____A_bool____ r912 = std__deque_A_bool___std__allocator_A_bool_______begin(t911);
    agg_tmp0909 = r912;
    struct std___Deque_iterator_A_bool___A_bool_____A_bool____ r913 = std__deque_A_bool___std__allocator_A_bool_______end(t911);
    agg_tmp1910 = r913;
    struct std___Deque_base_A_bool___std__allocator_A_bool___* base914 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t911 + 0);
    struct std__allocator_A_bool__* r915 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator(base914);
    struct std___Deque_iterator_A_bool___A_bool_____A_bool____ t916 = agg_tmp0909;
    struct std___Deque_iterator_A_bool___A_bool_____A_bool____ t917 = agg_tmp1910;
    std__deque_A_bool___std__allocator_A_bool________M_destroy_data(t911, t916, t917, r915);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_A_bool___std__allocator_A_bool___* base918 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t911 + 0);
        std___Deque_base_A_bool___std__allocator_A_bool_________Deque_base(base918);
      }
      return;
    }
  {
    struct std___Deque_base_A_bool___std__allocator_A_bool___* base919 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t911 + 0);
    std___Deque_base_A_bool___std__allocator_A_bool_________Deque_base(base919);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb920:
  _Bool __retval921;
    _Bool c922 = 0;
    __retval921 = c922;
    _Bool t923 = __retval921;
    return t923;
  abort();
}

// function: _ZSt10destroy_atI1AIbEEvPT_
void void_std__destroy_at_A_bool___(struct A_bool_* v924) {
bb925:
  struct A_bool_* __location926;
  __location926 = v924;
  return;
}

// function: _ZSt8_DestroyIP1AIbEEvT_S3_
void void_std___Destroy_A_bool___(struct A_bool_* v927, struct A_bool_* v928) {
bb929:
  struct A_bool_* __first930;
  struct A_bool_* __last931;
  __first930 = v927;
  __last931 = v928;
      _Bool r932 = std____is_constant_evaluated();
      if (r932) {
          while (1) {
            struct A_bool_* t934 = __first930;
            struct A_bool_* t935 = __last931;
            _Bool c936 = ((t934 != t935)) ? 1 : 0;
            if (!c936) break;
            struct A_bool_* t937 = __first930;
            void_std__destroy_at_A_bool___(t937);
            if (__cir_exc_active) {
              return;
            }
          for_step933: ;
            struct A_bool_* t938 = __first930;
            int c939 = 1;
            struct A_bool_* ptr940 = &(t938)[c939];
            __first930 = ptr940;
          }
      }
  return;
}

// function: _ZSt8_DestroyIP1AIbES1_EvT_S3_RSaIT0_E
void void_std___Destroy_A_bool____A_bool___(struct A_bool_* v941, struct A_bool_* v942, struct std__allocator_A_bool__* v943) {
bb944:
  struct A_bool_* __first945;
  struct A_bool_* __last946;
  struct std__allocator_A_bool__* unnamed947;
  __first945 = v941;
  __last946 = v942;
  unnamed947 = v943;
  struct A_bool_* t948 = __first945;
  struct A_bool_* t949 = __last946;
  void_std___Destroy_A_bool___(t948, t949);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v950) {
bb951:
  unsigned long __size952;
  unsigned long __retval953;
  __size952 = v950;
  unsigned long t954 = __size952;
  unsigned long c955 = 512;
  _Bool c956 = ((t954 < c955)) ? 1 : 0;
  unsigned long ternary957;
  if (c956) {
    unsigned long c958 = 512;
    unsigned long t959 = __size952;
    unsigned long b960 = c958 / t959;
    ternary957 = (unsigned long)b960;
  } else {
    unsigned long c961 = 1;
    ternary957 = (unsigned long)c961;
  }
  __retval953 = ternary957;
  unsigned long t962 = __retval953;
  return t962;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE14_S_buffer_sizeEv
unsigned long std__deque_A_bool___std__allocator_A_bool________S_buffer_size() {
bb963:
  unsigned long __retval964;
  unsigned long c965 = 1;
  unsigned long r966 = std____deque_buf_size(c965);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval964 = r966;
  unsigned long t967 = __retval964;
  return t967;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE19_M_destroy_data_auxESt15_Deque_iteratorIS1_RS1_PS1_ES7_
void std__deque_A_bool___std__allocator_A_bool________M_destroy_data_aux(struct std__deque_A_bool___std__allocator_A_bool___* v968, struct std___Deque_iterator_A_bool___A_bool_____A_bool____ v969, struct std___Deque_iterator_A_bool___A_bool_____A_bool____ v970) {
bb971:
  struct std__deque_A_bool___std__allocator_A_bool___* this972;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ __first973;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ __last974;
  this972 = v968;
  __first973 = v969;
  __last974 = v970;
  struct std__deque_A_bool___std__allocator_A_bool___* t975 = this972;
    struct A_bool_** __node976;
    struct A_bool_** t977 = __first973._M_node;
    int c978 = 1;
    struct A_bool_** ptr979 = &(t977)[c978];
    __node976 = ptr979;
    while (1) {
      struct A_bool_** t981 = __node976;
      struct A_bool_** t982 = __last974._M_node;
      _Bool c983 = ((t981 < t982)) ? 1 : 0;
      if (!c983) break;
      struct A_bool_** t984 = __node976;
      struct A_bool_* t985 = *t984;
      struct A_bool_** t986 = __node976;
      struct A_bool_* t987 = *t986;
      unsigned long r988 = std__deque_A_bool___std__allocator_A_bool________S_buffer_size();
      struct A_bool_* ptr989 = &(t987)[r988];
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base990 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t975 + 0);
      struct std__allocator_A_bool__* r991 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator(base990);
      void_std___Destroy_A_bool____A_bool___(t985, ptr989, r991);
      if (__cir_exc_active) {
        return;
      }
    for_step980: ;
      struct A_bool_** t992 = __node976;
      int c993 = 1;
      struct A_bool_** ptr994 = &(t992)[c993];
      __node976 = ptr994;
    }
    struct A_bool_** t995 = __first973._M_node;
    struct A_bool_** t996 = __last974._M_node;
    _Bool c997 = ((t995 != t996)) ? 1 : 0;
    if (c997) {
      struct A_bool_* t998 = __first973._M_cur;
      struct A_bool_* t999 = __first973._M_last;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base1000 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t975 + 0);
      struct std__allocator_A_bool__* r1001 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator(base1000);
      void_std___Destroy_A_bool____A_bool___(t998, t999, r1001);
      if (__cir_exc_active) {
        return;
      }
      struct A_bool_* t1002 = __last974._M_first;
      struct A_bool_* t1003 = __last974._M_cur;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base1004 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t975 + 0);
      struct std__allocator_A_bool__* r1005 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator(base1004);
      void_std___Destroy_A_bool____A_bool___(t1002, t1003, r1005);
      if (__cir_exc_active) {
        return;
      }
    } else {
      struct A_bool_* t1006 = __first973._M_cur;
      struct A_bool_* t1007 = __last974._M_cur;
      struct std___Deque_base_A_bool___std__allocator_A_bool___* base1008 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t975 + 0);
      struct std__allocator_A_bool__* r1009 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator(base1008);
      void_std___Destroy_A_bool____A_bool___(t1006, t1007, r1009);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorI1AIbERS1_PS1_EC2ERKS4_
void std___Deque_iterator_A_bool___A_bool____A_bool______Deque_iterator(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* v1010, struct std___Deque_iterator_A_bool___A_bool_____A_bool____* v1011) {
bb1012:
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* this1013;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* __x1014;
  this1013 = v1010;
  __x1014 = v1011;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t1015 = this1013;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t1016 = __x1014;
  struct A_bool_* t1017 = t1016->_M_cur;
  t1015->_M_cur = t1017;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t1018 = __x1014;
  struct A_bool_* t1019 = t1018->_M_first;
  t1015->_M_first = t1019;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t1020 = __x1014;
  struct A_bool_* t1021 = t1020->_M_last;
  t1015->_M_last = t1021;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t1022 = __x1014;
  struct A_bool_** t1023 = t1022->_M_node;
  t1015->_M_node = t1023;
  return;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE15_M_destroy_dataESt15_Deque_iteratorIS1_RS1_PS1_ES7_RKS2_
void std__deque_A_bool___std__allocator_A_bool________M_destroy_data(struct std__deque_A_bool___std__allocator_A_bool___* v1024, struct std___Deque_iterator_A_bool___A_bool_____A_bool____ v1025, struct std___Deque_iterator_A_bool___A_bool_____A_bool____ v1026, struct std__allocator_A_bool__* v1027) {
bb1028:
  struct std__deque_A_bool___std__allocator_A_bool___* this1029;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ __first1030;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ __last1031;
  struct std__allocator_A_bool__* unnamed1032;
  this1029 = v1024;
  __first1030 = v1025;
  __last1031 = v1026;
  unnamed1032 = v1027;
  struct std__deque_A_bool___std__allocator_A_bool___* t1033 = this1029;
    _Bool c1034 = 0;
    if (c1034) {
      struct std___Deque_iterator_A_bool___A_bool_____A_bool____ agg_tmp01035;
      struct std___Deque_iterator_A_bool___A_bool_____A_bool____ agg_tmp11036;
      std___Deque_iterator_A_bool___A_bool____A_bool______Deque_iterator(&agg_tmp01035, &__first1030);
      std___Deque_iterator_A_bool___A_bool____A_bool______Deque_iterator(&agg_tmp11036, &__last1031);
      struct std___Deque_iterator_A_bool___A_bool_____A_bool____ t1037 = agg_tmp01035;
      struct std___Deque_iterator_A_bool___A_bool_____A_bool____ t1038 = agg_tmp11036;
      std__deque_A_bool___std__allocator_A_bool________M_destroy_data_aux(t1033, t1037, t1038);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE5beginEv
struct std___Deque_iterator_A_bool___A_bool_____A_bool____ std__deque_A_bool___std__allocator_A_bool_______begin(struct std__deque_A_bool___std__allocator_A_bool___* v1039) {
bb1040:
  struct std__deque_A_bool___std__allocator_A_bool___* this1041;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ __retval1042;
  this1041 = v1039;
  struct std__deque_A_bool___std__allocator_A_bool___* t1043 = this1041;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base1044 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t1043 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1045 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base1044->_M_impl) + 0);
  std___Deque_iterator_A_bool___A_bool____A_bool______Deque_iterator(&__retval1042, &base1045->_M_start);
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ t1046 = __retval1042;
  return t1046;
}

// function: _ZNSt5dequeI1AIbESaIS1_EE3endEv
struct std___Deque_iterator_A_bool___A_bool_____A_bool____ std__deque_A_bool___std__allocator_A_bool_______end(struct std__deque_A_bool___std__allocator_A_bool___* v1047) {
bb1048:
  struct std__deque_A_bool___std__allocator_A_bool___* this1049;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ __retval1050;
  this1049 = v1047;
  struct std__deque_A_bool___std__allocator_A_bool___* t1051 = this1049;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base1052 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t1051 + 0);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1053 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(base1052->_M_impl) + 0);
  std___Deque_iterator_A_bool___A_bool____A_bool______Deque_iterator(&__retval1050, &base1053->_M_finish);
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____ t1054 = __retval1050;
  return t1054;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE19_M_get_Tp_allocatorEv
struct std__allocator_A_bool__* std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1055) {
bb1056:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1057;
  struct std__allocator_A_bool__* __retval1058;
  this1057 = v1055;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1059 = this1057;
  struct std__allocator_A_bool__* base1060 = (struct std__allocator_A_bool__*)((char *)&(t1059->_M_impl) + 0);
  __retval1058 = base1060;
  struct std__allocator_A_bool__* t1061 = __retval1058;
  return t1061;
}

// function: _ZNSt15__new_allocatorI1AIbEE10deallocateEPS1_m
void std____new_allocator_A_bool_____deallocate(struct std____new_allocator_A_bool__* v1062, struct A_bool_* v1063, unsigned long v1064) {
bb1065:
  struct std____new_allocator_A_bool__* this1066;
  struct A_bool_* __p1067;
  unsigned long __n1068;
  this1066 = v1062;
  __p1067 = v1063;
  __n1068 = v1064;
  struct std____new_allocator_A_bool__* t1069 = this1066;
    unsigned long c1070 = 1;
    unsigned long c1071 = 16;
    _Bool c1072 = ((c1070 > c1071)) ? 1 : 0;
    if (c1072) {
      struct A_bool_* t1073 = __p1067;
      void* cast1074 = (void*)t1073;
      unsigned long t1075 = __n1068;
      unsigned long c1076 = 1;
      unsigned long b1077 = t1075 * c1076;
      unsigned long c1078 = 1;
      operator_delete_3(cast1074, b1077, c1078);
      return;
    }
  struct A_bool_* t1079 = __p1067;
  void* cast1080 = (void*)t1079;
  unsigned long t1081 = __n1068;
  unsigned long c1082 = 1;
  unsigned long b1083 = t1081 * c1082;
  operator_delete_2(cast1080, b1083);
  return;
}

// function: _ZNSaI1AIbEE10deallocateEPS0_m
void std__allocator_A_bool_____deallocate(struct std__allocator_A_bool__* v1084, struct A_bool_* v1085, unsigned long v1086) {
bb1087:
  struct std__allocator_A_bool__* this1088;
  struct A_bool_* __p1089;
  unsigned long __n1090;
  this1088 = v1084;
  __p1089 = v1085;
  __n1090 = v1086;
  struct std__allocator_A_bool__* t1091 = this1088;
    _Bool r1092 = std____is_constant_evaluated();
    if (r1092) {
      struct A_bool_* t1093 = __p1089;
      void* cast1094 = (void*)t1093;
      operator_delete(cast1094);
      return;
    }
  struct std____new_allocator_A_bool__* base1095 = (struct std____new_allocator_A_bool__*)((char *)t1091 + 0);
  struct A_bool_* t1096 = __p1089;
  unsigned long t1097 = __n1090;
  std____new_allocator_A_bool_____deallocate(base1095, t1096, t1097);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaI1AIbEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_A_bool_______deallocate(struct std__allocator_A_bool__* v1098, struct A_bool_* v1099, unsigned long v1100) {
bb1101:
  struct std__allocator_A_bool__* __a1102;
  struct A_bool_* __p1103;
  unsigned long __n1104;
  __a1102 = v1098;
  __p1103 = v1099;
  __n1104 = v1100;
  struct std__allocator_A_bool__* t1105 = __a1102;
  struct A_bool_* t1106 = __p1103;
  unsigned long t1107 = __n1104;
  std__allocator_A_bool_____deallocate(t1105, t1106, t1107);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE18_M_deallocate_nodeEPS1_
void std___Deque_base_A_bool___std__allocator_A_bool________M_deallocate_node(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1108, struct A_bool_* v1109) {
bb1110:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1111;
  struct A_bool_* __p1112;
  this1111 = v1108;
  __p1112 = v1109;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1113 = this1111;
  struct std__allocator_A_bool__* base1114 = (struct std__allocator_A_bool__*)((char *)&(t1113->_M_impl) + 0);
  struct A_bool_* t1115 = __p1112;
  unsigned long c1116 = 1;
  unsigned long r1117 = std____deque_buf_size(c1116);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_A_bool_______deallocate(base1114, t1115, r1117);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE16_M_destroy_nodesEPPS1_S5_
void std___Deque_base_A_bool___std__allocator_A_bool________M_destroy_nodes(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1118, struct A_bool_** v1119, struct A_bool_** v1120) {
bb1121:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1122;
  struct A_bool_** __nstart1123;
  struct A_bool_** __nfinish1124;
  this1122 = v1118;
  __nstart1123 = v1119;
  __nfinish1124 = v1120;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1125 = this1122;
    struct A_bool_** __n1126;
    struct A_bool_** t1127 = __nstart1123;
    __n1126 = t1127;
    while (1) {
      struct A_bool_** t1129 = __n1126;
      struct A_bool_** t1130 = __nfinish1124;
      _Bool c1131 = ((t1129 < t1130)) ? 1 : 0;
      if (!c1131) break;
      struct A_bool_** t1132 = __n1126;
      struct A_bool_* t1133 = *t1132;
      std___Deque_base_A_bool___std__allocator_A_bool________M_deallocate_node(t1125, t1133);
    for_step1128: ;
      struct A_bool_** t1134 = __n1126;
      int c1135 = 1;
      struct A_bool_** ptr1136 = &(t1134)[c1135];
      __n1126 = ptr1136;
    }
  return;
}

// function: _ZNKSt11_Deque_baseI1AIbESaIS1_EE19_M_get_Tp_allocatorEv
struct std__allocator_A_bool__* std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator___const(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1137) {
bb1138:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1139;
  struct std__allocator_A_bool__* __retval1140;
  this1139 = v1137;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1141 = this1139;
  struct std__allocator_A_bool__* base1142 = (struct std__allocator_A_bool__*)((char *)&(t1141->_M_impl) + 0);
  __retval1140 = base1142;
  struct std__allocator_A_bool__* t1143 = __retval1140;
  return t1143;
}

// function: _ZNSaIP1AIbEEC2IS0_EERKSaIT_E
void std__allocator_A_bool_____allocator_A_bool___(struct std__allocator_A_bool____* v1144, struct std__allocator_A_bool__* v1145) {
bb1146:
  struct std__allocator_A_bool____* this1147;
  struct std__allocator_A_bool__* unnamed1148;
  this1147 = v1144;
  unnamed1148 = v1145;
  struct std__allocator_A_bool____* t1149 = this1147;
  struct std____new_allocator_A_bool____* base1150 = (struct std____new_allocator_A_bool____*)((char *)t1149 + 0);
  std____new_allocator_A_bool_______new_allocator_2(base1150);
  return;
}

// function: _ZNKSt11_Deque_baseI1AIbESaIS1_EE20_M_get_map_allocatorEv
struct std__allocator_A_bool____ std___Deque_base_A_bool___std__allocator_A_bool________M_get_map_allocator___const(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1151) {
bb1152:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1153;
  struct std__allocator_A_bool____ __retval1154;
  this1153 = v1151;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1155 = this1153;
  struct std__allocator_A_bool__* r1156 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_Tp_allocator___const(t1155);
  std__allocator_A_bool_____allocator_A_bool___(&__retval1154, r1156);
  struct std__allocator_A_bool____ t1157 = __retval1154;
  return t1157;
}

// function: _ZNSt15__new_allocatorIP1AIbEE10deallocateEPS2_m
void std____new_allocator_A_bool_____deallocate_2(struct std____new_allocator_A_bool____* v1158, struct A_bool_** v1159, unsigned long v1160) {
bb1161:
  struct std____new_allocator_A_bool____* this1162;
  struct A_bool_** __p1163;
  unsigned long __n1164;
  this1162 = v1158;
  __p1163 = v1159;
  __n1164 = v1160;
  struct std____new_allocator_A_bool____* t1165 = this1162;
    unsigned long c1166 = 8;
    unsigned long c1167 = 16;
    _Bool c1168 = ((c1166 > c1167)) ? 1 : 0;
    if (c1168) {
      struct A_bool_** t1169 = __p1163;
      void* cast1170 = (void*)t1169;
      unsigned long t1171 = __n1164;
      unsigned long c1172 = 8;
      unsigned long b1173 = t1171 * c1172;
      unsigned long c1174 = 8;
      operator_delete_3(cast1170, b1173, c1174);
      return;
    }
  struct A_bool_** t1175 = __p1163;
  void* cast1176 = (void*)t1175;
  unsigned long t1177 = __n1164;
  unsigned long c1178 = 8;
  unsigned long b1179 = t1177 * c1178;
  operator_delete_2(cast1176, b1179);
  return;
}

// function: _ZNSaIP1AIbEE10deallocateEPS1_m
void std__allocator_A_bool_____deallocate_2(struct std__allocator_A_bool____* v1180, struct A_bool_** v1181, unsigned long v1182) {
bb1183:
  struct std__allocator_A_bool____* this1184;
  struct A_bool_** __p1185;
  unsigned long __n1186;
  this1184 = v1180;
  __p1185 = v1181;
  __n1186 = v1182;
  struct std__allocator_A_bool____* t1187 = this1184;
    _Bool r1188 = std____is_constant_evaluated();
    if (r1188) {
      struct A_bool_** t1189 = __p1185;
      void* cast1190 = (void*)t1189;
      operator_delete(cast1190);
      return;
    }
  struct std____new_allocator_A_bool____* base1191 = (struct std____new_allocator_A_bool____*)((char *)t1187 + 0);
  struct A_bool_** t1192 = __p1185;
  unsigned long t1193 = __n1186;
  std____new_allocator_A_bool_____deallocate_2(base1191, t1192, t1193);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIP1AIbEEE10deallocateERS3_PS2_m
void std__allocator_traits_std__allocator_A_bool_______deallocate_2(struct std__allocator_A_bool____* v1194, struct A_bool_** v1195, unsigned long v1196) {
bb1197:
  struct std__allocator_A_bool____* __a1198;
  struct A_bool_** __p1199;
  unsigned long __n1200;
  __a1198 = v1194;
  __p1199 = v1195;
  __n1200 = v1196;
  struct std__allocator_A_bool____* t1201 = __a1198;
  struct A_bool_** t1202 = __p1199;
  unsigned long t1203 = __n1200;
  std__allocator_A_bool_____deallocate_2(t1201, t1202, t1203);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE17_M_deallocate_mapEPPS1_m
void std___Deque_base_A_bool___std__allocator_A_bool________M_deallocate_map(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1204, struct A_bool_** v1205, unsigned long v1206) {
bb1207:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1208;
  struct A_bool_** __p1209;
  unsigned long __n1210;
  struct std__allocator_A_bool____ __map_alloc1211;
  this1208 = v1204;
  __p1209 = v1205;
  __n1210 = v1206;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1212 = this1208;
  struct std__allocator_A_bool____ r1213 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_map_allocator___const(t1212);
  __map_alloc1211 = r1213;
  struct A_bool_** t1214 = __p1209;
  unsigned long t1215 = __n1210;
  std__allocator_traits_std__allocator_A_bool_______deallocate_2(&__map_alloc1211, t1214, t1215);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE11_Deque_implD2Ev
void std___Deque_base_A_bool___std__allocator_A_bool________Deque_impl____Deque_impl(struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl* v1216) {
bb1217:
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl* this1218;
  this1218 = v1216;
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl* t1219 = this1218;
  {
    struct std__allocator_A_bool__* base1220 = (struct std__allocator_A_bool__*)((char *)t1219 + 0);
    std__allocator_A_bool______allocator(base1220);
  }
  return;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EED2Ev
void std___Deque_base_A_bool___std__allocator_A_bool_________Deque_base(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1221) {
bb1222:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1223;
  this1223 = v1221;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1224 = this1223;
      struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1225 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1224->_M_impl) + 0);
      struct A_bool_** t1226 = base1225->_M_map;
      _Bool cast1227 = (_Bool)t1226;
      if (cast1227) {
        struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1228 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1224->_M_impl) + 0);
        struct A_bool_** t1229 = base1228->_M_start._M_node;
        struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1230 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1224->_M_impl) + 0);
        struct A_bool_** t1231 = base1230->_M_finish._M_node;
        int c1232 = 1;
        struct A_bool_** ptr1233 = &(t1231)[c1232];
        std___Deque_base_A_bool___std__allocator_A_bool________M_destroy_nodes(t1224, t1229, ptr1233);
        struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1234 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1224->_M_impl) + 0);
        struct A_bool_** t1235 = base1234->_M_map;
        struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1236 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1224->_M_impl) + 0);
        unsigned long t1237 = base1236->_M_map_size;
        std___Deque_base_A_bool___std__allocator_A_bool________M_deallocate_map(t1224, t1235, t1237);
      }
  {
    std___Deque_base_A_bool___std__allocator_A_bool________Deque_impl____Deque_impl(&t1224->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIP1AIbEEC2Ev
void std____new_allocator_A_bool_______new_allocator_2(struct std____new_allocator_A_bool____* v1238) {
bb1239:
  struct std____new_allocator_A_bool____* this1240;
  this1240 = v1238;
  struct std____new_allocator_A_bool____* t1241 = this1240;
  return;
}

// function: _ZNSaI1AIbEED2Ev
void std__allocator_A_bool______allocator(struct std__allocator_A_bool__* v1242) {
bb1243:
  struct std__allocator_A_bool__* this1244;
  this1244 = v1242;
  struct std__allocator_A_bool__* t1245 = this1244;
  return;
}

// function: _ZNSt5dequeI1AIbESaIS1_EEC2Ev
void std__deque_A_bool___std__allocator_A_bool_______deque(struct std__deque_A_bool___std__allocator_A_bool___* v1246) {
bb1247:
  struct std__deque_A_bool___std__allocator_A_bool___* this1248;
  this1248 = v1246;
  struct std__deque_A_bool___std__allocator_A_bool___* t1249 = this1248;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* base1250 = (struct std___Deque_base_A_bool___std__allocator_A_bool___*)((char *)t1249 + 0);
  std___Deque_base_A_bool___std__allocator_A_bool________Deque_base(base1250);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE11_Deque_implC2Ev
void std___Deque_base_A_bool___std__allocator_A_bool________Deque_impl___Deque_impl(struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl* v1251) {
bb1252:
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl* this1253;
  this1253 = v1251;
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl* t1254 = this1253;
  struct std__allocator_A_bool__* base1255 = (struct std__allocator_A_bool__*)((char *)t1254 + 0);
  std__allocator_A_bool_____allocator(base1255);
    struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1256 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)t1254 + 0);
    std___Deque_base_A_bool___std__allocator_A_bool________Deque_impl_data___Deque_impl_data(base1256);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1257, unsigned long* v1258) {
bb1259:
  unsigned long* __a1260;
  unsigned long* __b1261;
  unsigned long* __retval1262;
  __a1260 = v1257;
  __b1261 = v1258;
    unsigned long* t1263 = __a1260;
    unsigned long t1264 = *t1263;
    unsigned long* t1265 = __b1261;
    unsigned long t1266 = *t1265;
    _Bool c1267 = ((t1264 < t1266)) ? 1 : 0;
    if (c1267) {
      unsigned long* t1268 = __b1261;
      __retval1262 = t1268;
      unsigned long* t1269 = __retval1262;
      return t1269;
    }
  unsigned long* t1270 = __a1260;
  __retval1262 = t1270;
  unsigned long* t1271 = __retval1262;
  return t1271;
}

// function: _ZNKSt15__new_allocatorIP1AIbEE11_M_max_sizeEv
unsigned long std____new_allocator_A_bool______M_max_size___const_2(struct std____new_allocator_A_bool____* v1272) {
bb1273:
  struct std____new_allocator_A_bool____* this1274;
  unsigned long __retval1275;
  this1274 = v1272;
  struct std____new_allocator_A_bool____* t1276 = this1274;
  unsigned long c1277 = 9223372036854775807;
  unsigned long c1278 = 8;
  unsigned long b1279 = c1277 / c1278;
  __retval1275 = b1279;
  unsigned long t1280 = __retval1275;
  return t1280;
}

// function: _ZNSt15__new_allocatorIP1AIbEE8allocateEmPKv
struct A_bool_** std____new_allocator_A_bool_____allocate_2(struct std____new_allocator_A_bool____* v1281, unsigned long v1282, void* v1283) {
bb1284:
  struct std____new_allocator_A_bool____* this1285;
  unsigned long __n1286;
  void* unnamed1287;
  struct A_bool_** __retval1288;
  this1285 = v1281;
  __n1286 = v1282;
  unnamed1287 = v1283;
  struct std____new_allocator_A_bool____* t1289 = this1285;
    unsigned long t1290 = __n1286;
    unsigned long r1291 = std____new_allocator_A_bool______M_max_size___const_2(t1289);
    _Bool c1292 = ((t1290 > r1291)) ? 1 : 0;
    if (c1292) {
        unsigned long t1293 = __n1286;
        unsigned long c1294 = -1;
        unsigned long c1295 = 8;
        unsigned long b1296 = c1294 / c1295;
        _Bool c1297 = ((t1293 > b1296)) ? 1 : 0;
        if (c1297) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1298 = 8;
    unsigned long c1299 = 16;
    _Bool c1300 = ((c1298 > c1299)) ? 1 : 0;
    if (c1300) {
      unsigned long __al1301;
      unsigned long c1302 = 8;
      __al1301 = c1302;
      unsigned long t1303 = __n1286;
      unsigned long c1304 = 8;
      unsigned long b1305 = t1303 * c1304;
      unsigned long t1306 = __al1301;
      void* r1307 = operator_new_2(b1305, t1306);
      if (__cir_exc_active) {
        struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
        return __cir_eh_ret;
      }
      struct A_bool_** cast1308 = (struct A_bool_**)r1307;
      __retval1288 = cast1308;
      struct A_bool_** t1309 = __retval1288;
      return t1309;
    }
  unsigned long t1310 = __n1286;
  unsigned long c1311 = 8;
  unsigned long b1312 = t1310 * c1311;
  void* r1313 = operator_new(b1312);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  struct A_bool_** cast1314 = (struct A_bool_**)r1313;
  __retval1288 = cast1314;
  struct A_bool_** t1315 = __retval1288;
  return t1315;
}

// function: _ZNSaIP1AIbEE8allocateEm
struct A_bool_** std__allocator_A_bool_____allocate_2(struct std__allocator_A_bool____* v1316, unsigned long v1317) {
bb1318:
  struct std__allocator_A_bool____* this1319;
  unsigned long __n1320;
  struct A_bool_** __retval1321;
  this1319 = v1316;
  __n1320 = v1317;
  struct std__allocator_A_bool____* t1322 = this1319;
    _Bool r1323 = std____is_constant_evaluated();
    if (r1323) {
        unsigned long t1324 = __n1320;
        unsigned long c1325 = 8;
        unsigned long ovr1326;
        _Bool ovf1327 = __builtin_mul_overflow(t1324, c1325, &ovr1326);
        __n1320 = ovr1326;
        if (ovf1327) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1328 = __n1320;
      void* r1329 = operator_new(t1328);
      if (__cir_exc_active) {
        struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
        return __cir_eh_ret;
      }
      struct A_bool_** cast1330 = (struct A_bool_**)r1329;
      __retval1321 = cast1330;
      struct A_bool_** t1331 = __retval1321;
      return t1331;
    }
  struct std____new_allocator_A_bool____* base1332 = (struct std____new_allocator_A_bool____*)((char *)t1322 + 0);
  unsigned long t1333 = __n1320;
  void* c1334 = ((void*)0);
  struct A_bool_** r1335 = std____new_allocator_A_bool_____allocate_2(base1332, t1333, c1334);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  __retval1321 = r1335;
  struct A_bool_** t1336 = __retval1321;
  return t1336;
}

// function: _ZNSt16allocator_traitsISaIP1AIbEEE8allocateERS3_m
struct A_bool_** std__allocator_traits_std__allocator_A_bool_______allocate_2(struct std__allocator_A_bool____* v1337, unsigned long v1338) {
bb1339:
  struct std__allocator_A_bool____* __a1340;
  unsigned long __n1341;
  struct A_bool_** __retval1342;
  __a1340 = v1337;
  __n1341 = v1338;
  struct std__allocator_A_bool____* t1343 = __a1340;
  unsigned long t1344 = __n1341;
  struct A_bool_** r1345 = std__allocator_A_bool_____allocate_2(t1343, t1344);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  __retval1342 = r1345;
  struct A_bool_** t1346 = __retval1342;
  return t1346;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE15_M_allocate_mapEm
struct A_bool_** std___Deque_base_A_bool___std__allocator_A_bool________M_allocate_map(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1347, unsigned long v1348) {
bb1349:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1350;
  unsigned long __n1351;
  struct A_bool_** __retval1352;
  struct std__allocator_A_bool____ __map_alloc1353;
  this1350 = v1347;
  __n1351 = v1348;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1354 = this1350;
  struct std__allocator_A_bool____ r1355 = std___Deque_base_A_bool___std__allocator_A_bool________M_get_map_allocator___const(t1354);
  __map_alloc1353 = r1355;
  unsigned long t1356 = __n1351;
  struct A_bool_** r1357 = std__allocator_traits_std__allocator_A_bool_______allocate_2(&__map_alloc1353, t1356);
  if (__cir_exc_active) {
    struct A_bool_** __cir_eh_ret = (struct A_bool_**)0;
    return __cir_eh_ret;
  }
  __retval1352 = r1357;
  struct A_bool_** t1358 = __retval1352;
  return t1358;
}

// function: _ZNKSt15__new_allocatorI1AIbEE11_M_max_sizeEv
unsigned long std____new_allocator_A_bool______M_max_size___const(struct std____new_allocator_A_bool__* v1359) {
bb1360:
  struct std____new_allocator_A_bool__* this1361;
  unsigned long __retval1362;
  this1361 = v1359;
  struct std____new_allocator_A_bool__* t1363 = this1361;
  unsigned long c1364 = 9223372036854775807;
  unsigned long c1365 = 1;
  unsigned long b1366 = c1364 / c1365;
  __retval1362 = b1366;
  unsigned long t1367 = __retval1362;
  return t1367;
}

// function: _ZNSt15__new_allocatorI1AIbEE8allocateEmPKv
struct A_bool_* std____new_allocator_A_bool_____allocate(struct std____new_allocator_A_bool__* v1368, unsigned long v1369, void* v1370) {
bb1371:
  struct std____new_allocator_A_bool__* this1372;
  unsigned long __n1373;
  void* unnamed1374;
  struct A_bool_* __retval1375;
  this1372 = v1368;
  __n1373 = v1369;
  unnamed1374 = v1370;
  struct std____new_allocator_A_bool__* t1376 = this1372;
    unsigned long t1377 = __n1373;
    unsigned long r1378 = std____new_allocator_A_bool______M_max_size___const(t1376);
    _Bool c1379 = ((t1377 > r1378)) ? 1 : 0;
    if (c1379) {
        unsigned long t1380 = __n1373;
        unsigned long c1381 = -1;
        unsigned long c1382 = 1;
        unsigned long b1383 = c1381 / c1382;
        _Bool c1384 = ((t1380 > b1383)) ? 1 : 0;
        if (c1384) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1385 = 1;
    unsigned long c1386 = 16;
    _Bool c1387 = ((c1385 > c1386)) ? 1 : 0;
    if (c1387) {
      unsigned long __al1388;
      unsigned long c1389 = 1;
      __al1388 = c1389;
      unsigned long t1390 = __n1373;
      unsigned long c1391 = 1;
      unsigned long b1392 = t1390 * c1391;
      unsigned long t1393 = __al1388;
      void* r1394 = operator_new_2(b1392, t1393);
      if (__cir_exc_active) {
        struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
        return __cir_eh_ret;
      }
      struct A_bool_* cast1395 = (struct A_bool_*)r1394;
      __retval1375 = cast1395;
      struct A_bool_* t1396 = __retval1375;
      return t1396;
    }
  unsigned long t1397 = __n1373;
  unsigned long c1398 = 1;
  unsigned long b1399 = t1397 * c1398;
  void* r1400 = operator_new(b1399);
  if (__cir_exc_active) {
    struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
    return __cir_eh_ret;
  }
  struct A_bool_* cast1401 = (struct A_bool_*)r1400;
  __retval1375 = cast1401;
  struct A_bool_* t1402 = __retval1375;
  return t1402;
}

// function: _ZNSaI1AIbEE8allocateEm
struct A_bool_* std__allocator_A_bool_____allocate(struct std__allocator_A_bool__* v1403, unsigned long v1404) {
bb1405:
  struct std__allocator_A_bool__* this1406;
  unsigned long __n1407;
  struct A_bool_* __retval1408;
  this1406 = v1403;
  __n1407 = v1404;
  struct std__allocator_A_bool__* t1409 = this1406;
    _Bool r1410 = std____is_constant_evaluated();
    if (r1410) {
        unsigned long t1411 = __n1407;
        unsigned long c1412 = 1;
        unsigned long ovr1413;
        _Bool ovf1414 = __builtin_mul_overflow(t1411, c1412, &ovr1413);
        __n1407 = ovr1413;
        if (ovf1414) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1415 = __n1407;
      void* r1416 = operator_new(t1415);
      if (__cir_exc_active) {
        struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
        return __cir_eh_ret;
      }
      struct A_bool_* cast1417 = (struct A_bool_*)r1416;
      __retval1408 = cast1417;
      struct A_bool_* t1418 = __retval1408;
      return t1418;
    }
  struct std____new_allocator_A_bool__* base1419 = (struct std____new_allocator_A_bool__*)((char *)t1409 + 0);
  unsigned long t1420 = __n1407;
  void* c1421 = ((void*)0);
  struct A_bool_* r1422 = std____new_allocator_A_bool_____allocate(base1419, t1420, c1421);
  if (__cir_exc_active) {
    struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
    return __cir_eh_ret;
  }
  __retval1408 = r1422;
  struct A_bool_* t1423 = __retval1408;
  return t1423;
}

// function: _ZNSt16allocator_traitsISaI1AIbEEE8allocateERS2_m
struct A_bool_* std__allocator_traits_std__allocator_A_bool_______allocate(struct std__allocator_A_bool__* v1424, unsigned long v1425) {
bb1426:
  struct std__allocator_A_bool__* __a1427;
  unsigned long __n1428;
  struct A_bool_* __retval1429;
  __a1427 = v1424;
  __n1428 = v1425;
  struct std__allocator_A_bool__* t1430 = __a1427;
  unsigned long t1431 = __n1428;
  struct A_bool_* r1432 = std__allocator_A_bool_____allocate(t1430, t1431);
  if (__cir_exc_active) {
    struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
    return __cir_eh_ret;
  }
  __retval1429 = r1432;
  struct A_bool_* t1433 = __retval1429;
  return t1433;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE16_M_allocate_nodeEv
struct A_bool_* std___Deque_base_A_bool___std__allocator_A_bool________M_allocate_node(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1434) {
bb1435:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1436;
  struct A_bool_* __retval1437;
  this1436 = v1434;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1438 = this1436;
  struct std__allocator_A_bool__* base1439 = (struct std__allocator_A_bool__*)((char *)&(t1438->_M_impl) + 0);
  unsigned long c1440 = 1;
  unsigned long r1441 = std____deque_buf_size(c1440);
  if (__cir_exc_active) {
    struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
    return __cir_eh_ret;
  }
  struct A_bool_* r1442 = std__allocator_traits_std__allocator_A_bool_______allocate(base1439, r1441);
  if (__cir_exc_active) {
    struct A_bool_* __cir_eh_ret = (struct A_bool_*)0;
    return __cir_eh_ret;
  }
  __retval1437 = r1442;
  struct A_bool_* t1443 = __retval1437;
  return t1443;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE15_M_create_nodesEPPS1_S5_
void std___Deque_base_A_bool___std__allocator_A_bool________M_create_nodes(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1444, struct A_bool_** v1445, struct A_bool_** v1446) {
bb1447:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1448;
  struct A_bool_** __nstart1449;
  struct A_bool_** __nfinish1450;
  struct A_bool_** __cur1451;
  this1448 = v1444;
  __nstart1449 = v1445;
  __nfinish1450 = v1446;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1452 = this1448;
        struct A_bool_** t1454 = __nstart1449;
        __cur1451 = t1454;
        while (1) {
          struct A_bool_** t1456 = __cur1451;
          struct A_bool_** t1457 = __nfinish1450;
          _Bool c1458 = ((t1456 < t1457)) ? 1 : 0;
          if (!c1458) break;
          struct A_bool_* r1459 = std___Deque_base_A_bool___std__allocator_A_bool________M_allocate_node(t1452);
          if (__cir_exc_active) {
            goto cir_try_dispatch1453;
          }
          struct A_bool_** t1460 = __cur1451;
          *t1460 = r1459;
        for_step1455: ;
          struct A_bool_** t1461 = __cur1451;
          int c1462 = 1;
          struct A_bool_** ptr1463 = &(t1461)[c1462];
          __cur1451 = ptr1463;
        }
    cir_try_dispatch1453: ;
    if (__cir_exc_active) {
    {
      int ca_tok1464 = 0;
      void* ca_exn1465 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct A_bool_** t1466 = __nstart1449;
        struct A_bool_** t1467 = __cur1451;
        std___Deque_base_A_bool___std__allocator_A_bool________M_destroy_nodes(t1452, t1466, t1467);
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

// function: _ZNSt15_Deque_iteratorI1AIbERS1_PS1_E14_S_buffer_sizeEv
unsigned long std___Deque_iterator_A_bool___A_bool____A_bool______S_buffer_size() {
bb1468:
  unsigned long __retval1469;
  unsigned long c1470 = 1;
  unsigned long r1471 = std____deque_buf_size(c1470);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1469 = r1471;
  unsigned long t1472 = __retval1469;
  return t1472;
}

// function: _ZNSt15_Deque_iteratorI1AIbERS1_PS1_E11_M_set_nodeEPS3_
void std___Deque_iterator_A_bool___A_bool____A_bool______M_set_node(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* v1473, struct A_bool_** v1474) {
bb1475:
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* this1476;
  struct A_bool_** __new_node1477;
  this1476 = v1473;
  __new_node1477 = v1474;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t1478 = this1476;
  struct A_bool_** t1479 = __new_node1477;
  t1478->_M_node = t1479;
  struct A_bool_** t1480 = __new_node1477;
  struct A_bool_* t1481 = *t1480;
  t1478->_M_first = t1481;
  struct A_bool_* t1482 = t1478->_M_first;
  unsigned long r1483 = std___Deque_iterator_A_bool___A_bool____A_bool______S_buffer_size();
  long cast1484 = (long)r1483;
  struct A_bool_* ptr1485 = &(t1482)[cast1484];
  t1478->_M_last = ptr1485;
  return;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE17_M_initialize_mapEm
void std___Deque_base_A_bool___std__allocator_A_bool________M_initialize_map(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1486, unsigned long v1487) {
bb1488:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1489;
  unsigned long __num_elements1490;
  unsigned long __num_nodes1491;
  unsigned long ref_tmp01492;
  unsigned long ref_tmp11493;
  struct A_bool_** __nstart1494;
  struct A_bool_** __nfinish1495;
  this1489 = v1486;
  __num_elements1490 = v1487;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1496 = this1489;
  unsigned long t1497 = __num_elements1490;
  unsigned long c1498 = 1;
  unsigned long r1499 = std____deque_buf_size(c1498);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1500 = t1497 / r1499;
  unsigned long c1501 = 1;
  unsigned long b1502 = b1500 + c1501;
  __num_nodes1491 = b1502;
  unsigned long c1503 = 8;
  ref_tmp01492 = c1503;
  unsigned long t1504 = __num_nodes1491;
  unsigned long c1505 = 2;
  unsigned long b1506 = t1504 + c1505;
  ref_tmp11493 = b1506;
  unsigned long* r1507 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01492, &ref_tmp11493);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1508 = *r1507;
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1509 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  base1509->_M_map_size = t1508;
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1510 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  unsigned long t1511 = base1510->_M_map_size;
  struct A_bool_** r1512 = std___Deque_base_A_bool___std__allocator_A_bool________M_allocate_map(t1496, t1511);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1513 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  base1513->_M_map = r1512;
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1514 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  struct A_bool_** t1515 = base1514->_M_map;
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1516 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  unsigned long t1517 = base1516->_M_map_size;
  unsigned long t1518 = __num_nodes1491;
  unsigned long b1519 = t1517 - t1518;
  unsigned long c1520 = 2;
  unsigned long b1521 = b1519 / c1520;
  struct A_bool_** ptr1522 = &(t1515)[b1521];
  __nstart1494 = ptr1522;
  struct A_bool_** t1523 = __nstart1494;
  unsigned long t1524 = __num_nodes1491;
  struct A_bool_** ptr1525 = &(t1523)[t1524];
  __nfinish1495 = ptr1525;
      struct A_bool_** t1527 = __nstart1494;
      struct A_bool_** t1528 = __nfinish1495;
      std___Deque_base_A_bool___std__allocator_A_bool________M_create_nodes(t1496, t1527, t1528);
      if (__cir_exc_active) {
        goto cir_try_dispatch1526;
      }
    cir_try_dispatch1526: ;
    if (__cir_exc_active) {
    {
      int ca_tok1529 = 0;
      void* ca_exn1530 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1531 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
        struct A_bool_** t1532 = base1531->_M_map;
        struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1533 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
        unsigned long t1534 = base1533->_M_map_size;
        std___Deque_base_A_bool___std__allocator_A_bool________M_deallocate_map(t1496, t1532, t1534);
        struct A_bool_** c1535 = ((void*)0);
        struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1536 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
        base1536->_M_map = c1535;
        unsigned long c1537 = 0;
        struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1538 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
        base1538->_M_map_size = c1537;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1539 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  struct A_bool_** t1540 = __nstart1494;
  std___Deque_iterator_A_bool___A_bool____A_bool______M_set_node(&base1539->_M_start, t1540);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1541 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  struct A_bool_** t1542 = __nfinish1495;
  int c1543 = -1;
  struct A_bool_** ptr1544 = &(t1542)[c1543];
  std___Deque_iterator_A_bool___A_bool____A_bool______M_set_node(&base1541->_M_finish, ptr1544);
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1545 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  struct A_bool_* t1546 = base1545->_M_start._M_first;
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1547 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  base1547->_M_start._M_cur = t1546;
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1548 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  struct A_bool_* t1549 = base1548->_M_finish._M_first;
  unsigned long t1550 = __num_elements1490;
  unsigned long c1551 = 1;
  unsigned long r1552 = std____deque_buf_size(c1551);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1553 = t1550 % r1552;
  struct A_bool_* ptr1554 = &(t1549)[b1553];
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* base1555 = (struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data*)((char *)&(t1496->_M_impl) + 0);
  base1555->_M_finish._M_cur = ptr1554;
  return;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EEC2Ev
void std___Deque_base_A_bool___std__allocator_A_bool________Deque_base(struct std___Deque_base_A_bool___std__allocator_A_bool___* v1556) {
bb1557:
  struct std___Deque_base_A_bool___std__allocator_A_bool___* this1558;
  this1558 = v1556;
  struct std___Deque_base_A_bool___std__allocator_A_bool___* t1559 = this1558;
  std___Deque_base_A_bool___std__allocator_A_bool________Deque_impl___Deque_impl(&t1559->_M_impl);
    unsigned long c1560 = 0;
    std___Deque_base_A_bool___std__allocator_A_bool________M_initialize_map(t1559, c1560);
    if (__cir_exc_active) {
      {
        std___Deque_base_A_bool___std__allocator_A_bool________Deque_impl____Deque_impl(&t1559->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorI1AIbEEC2Ev
void std____new_allocator_A_bool_______new_allocator(struct std____new_allocator_A_bool__* v1561) {
bb1562:
  struct std____new_allocator_A_bool__* this1563;
  this1563 = v1561;
  struct std____new_allocator_A_bool__* t1564 = this1563;
  return;
}

// function: _ZNSaI1AIbEEC2Ev
void std__allocator_A_bool_____allocator(struct std__allocator_A_bool__* v1565) {
bb1566:
  struct std__allocator_A_bool__* this1567;
  this1567 = v1565;
  struct std__allocator_A_bool__* t1568 = this1567;
  struct std____new_allocator_A_bool__* base1569 = (struct std____new_allocator_A_bool__*)((char *)t1568 + 0);
  std____new_allocator_A_bool_______new_allocator(base1569);
  return;
}

// function: _ZNSt15_Deque_iteratorI1AIbERS1_PS1_EC2Ev
void std___Deque_iterator_A_bool___A_bool____A_bool______Deque_iterator_2(struct std___Deque_iterator_A_bool___A_bool_____A_bool____* v1570) {
bb1571:
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* this1572;
  this1572 = v1570;
  struct std___Deque_iterator_A_bool___A_bool_____A_bool____* t1573 = this1572;
  struct A_bool_* c1574 = ((void*)0);
  t1573->_M_cur = c1574;
  struct A_bool_* c1575 = ((void*)0);
  t1573->_M_first = c1575;
  struct A_bool_* c1576 = ((void*)0);
  t1573->_M_last = c1576;
  struct A_bool_** c1577 = ((void*)0);
  t1573->_M_node = c1577;
  return;
}

// function: _ZNSt11_Deque_baseI1AIbESaIS1_EE16_Deque_impl_dataC2Ev
void std___Deque_base_A_bool___std__allocator_A_bool________Deque_impl_data___Deque_impl_data(struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* v1578) {
bb1579:
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* this1580;
  this1580 = v1578;
  struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data* t1581 = this1580;
  struct A_bool_** c1582 = ((void*)0);
  t1581->_M_map = c1582;
  unsigned long c1583 = 0;
  t1581->_M_map_size = c1583;
  std___Deque_iterator_A_bool___A_bool____A_bool______Deque_iterator_2(&t1581->_M_start);
  std___Deque_iterator_A_bool___A_bool____A_bool______Deque_iterator_2(&t1581->_M_finish);
  return;
}

