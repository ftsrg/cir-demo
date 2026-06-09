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
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

char _str[13] = "s.top() == i";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_stack-test/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[48] = "cannot create std::deque larger than max_size()";
char _str_3[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv[74] = "reference std::stack<int>::top() [_Tp = int, _Sequence = std::deque<int>]";
char _str_4[15] = "!this->empty()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv[69] = "void std::stack<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
int** int___std____niter_wrap_int___(int*** p0, int** p1);
long std__iterator_traits_int_____difference_type_std____distance_int___(int** p0, int** p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** p0);
long std__iterator_traits_int_____difference_type_std__distance_int___(int** p0, int** p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int____int___(int*** p0, int*** p1);
int** int___std____copy_move_a2_false__int____int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_a1_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____niter_base_int___(int** p0);
int** int___std____copy_move_a_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____miter_base_int___(int** p0);
int** int___std__copy_int____int___(int** p0, int** p1, int** p2);
_Bool std__is_constant_evaluated();
void void_std____advance_int____long_(int*** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int____long_(int*** p0, long p1);
int** int___std____copy_move_backward_a2_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_backward_a1_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_backward_a_false__int____int___(int** p0, int** p1, int** p2);
int** int___std__copy_backward_int____int___(int** p0, int** p1, int** p2);
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* p0, unsigned long p1, _Bool p2);
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__stack_int__std__deque_int__std__allocator_int_______push(struct std__stack_int__std__deque_int__std__allocator_int___* p0, int* p1);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
_Bool std__stack_int__std__deque_int__std__allocator_int_______empty___const(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* p0);
int* std__stack_int__std__deque_int__std__allocator_int_______top(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void std__deque_int__std__allocator_int______M_pop_back_aux(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____pop_back(struct std__deque_int__std__allocator_int__* p0);
void std__stack_int__std__deque_int__std__allocator_int_______pop(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
void std__stack_int__std__deque_int__std__allocator_int________stack(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
int main();
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator_int_(struct std__allocator_int___* p0, struct std__allocator_int_* p1);
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_int____deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* p0, unsigned long p1, void* p2);
int** std__allocator_int____allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
extern int __gxx_personality_v0();
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size();
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* p0, int** p1);
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);

// function: _ZNSt5stackIiSt5dequeIiSaIiEEEC2IS2_vEEv
void std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(struct std__stack_int__std__deque_int__std__allocator_int___* v0) {
bb1:
  struct std__stack_int__std__deque_int__std__allocator_int___* this2;
  this2 = v0;
  struct std__stack_int__std__deque_int__std__allocator_int___* t3 = this2;
  struct std__deque_int__std__allocator_int__ c4 = {0};
  t3->c = c4;
  std__deque_int__std__allocator_int_____deque(&t3->c);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v5, int* v6) {
bb7:
  int* __location8;
  int* __args9;
  int* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  int* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    int* cast15 = (int*)t14;
    int* t16 = __args9;
    int t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    int* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22:
  struct std__allocator_int_* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  int* t26 = __p24;
  int* t27 = __args25;
  int* r28 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t26, t27);
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v29, struct std___Deque_iterator_int__int____int___* v30) {
bb31:
  struct std___Deque_iterator_int__int____int___* __x32;
  struct std___Deque_iterator_int__int____int___* __y33;
  long __retval34;
  __x32 = v29;
  __y33 = v30;
  unsigned long r35 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast36 = (long)r35;
  struct std___Deque_iterator_int__int____int___* t37 = __x32;
  int** t38 = t37->_M_node;
  struct std___Deque_iterator_int__int____int___* t39 = __y33;
  int** t40 = t39->_M_node;
  long diff41 = t38 - t40;
  struct std___Deque_iterator_int__int____int___* t42 = __x32;
  int** t43 = t42->_M_node;
  _Bool cast44 = (_Bool)t43;
  long cast45 = (long)cast44;
  long b46 = diff41 - cast45;
  long b47 = cast36 * b46;
  struct std___Deque_iterator_int__int____int___* t48 = __x32;
  int* t49 = t48->_M_cur;
  struct std___Deque_iterator_int__int____int___* t50 = __x32;
  int* t51 = t50->_M_first;
  long diff52 = t49 - t51;
  long b53 = b47 + diff52;
  struct std___Deque_iterator_int__int____int___* t54 = __y33;
  int* t55 = t54->_M_last;
  struct std___Deque_iterator_int__int____int___* t56 = __y33;
  int* t57 = t56->_M_cur;
  long diff58 = t55 - t57;
  long b59 = b53 + diff58;
  __retval34 = b59;
  long t60 = __retval34;
  return t60;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v61) {
bb62:
  struct std__deque_int__std__allocator_int__* this63;
  unsigned long __retval64;
  unsigned long __sz65;
  this63 = v61;
  struct std__deque_int__std__allocator_int__* t66 = this63;
  struct std___Deque_base_int__std__allocator_int__* base67 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base68 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base67->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base69 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base70 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base69->_M_impl) + 0);
  long r71 = std__operator_(&base68->_M_finish, &base70->_M_start);
  unsigned long cast72 = (unsigned long)r71;
  __sz65 = cast72;
    unsigned long t73 = __sz65;
    unsigned long r74 = std__deque_int__std__allocator_int_____max_size___const(t66);
    _Bool c75 = ((t73 > r74)) ? 1 : 0;
    if (c75) {
      __builtin_unreachable();
    }
  unsigned long t76 = __sz65;
  __retval64 = t76;
  unsigned long t77 = __retval64;
  return t77;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v78, unsigned long* v79) {
bb80:
  unsigned long* __a81;
  unsigned long* __b82;
  unsigned long* __retval83;
  __a81 = v78;
  __b82 = v79;
    unsigned long* t84 = __b82;
    unsigned long t85 = *t84;
    unsigned long* t86 = __a81;
    unsigned long t87 = *t86;
    _Bool c88 = ((t85 < t87)) ? 1 : 0;
    if (c88) {
      unsigned long* t89 = __b82;
      __retval83 = t89;
      unsigned long* t90 = __retval83;
      return t90;
    }
  unsigned long* t91 = __a81;
  __retval83 = t91;
  unsigned long* t92 = __retval83;
  return t92;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v93) {
bb94:
  struct std__allocator_int_* __a95;
  unsigned long __retval96;
  unsigned long __diffmax97;
  unsigned long __allocmax98;
  __a95 = v93;
  unsigned long c99 = 9223372036854775807;
  __diffmax97 = c99;
  unsigned long c100 = 4611686018427387903;
  __allocmax98 = c100;
  unsigned long* r101 = unsigned_long_const__std__min_unsigned_long_(&__diffmax97, &__allocmax98);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t102 = *r101;
  __retval96 = t102;
  unsigned long t103 = __retval96;
  return t103;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v104) {
bb105:
  struct std__deque_int__std__allocator_int__* this106;
  unsigned long __retval107;
  this106 = v104;
  struct std__deque_int__std__allocator_int__* t108 = this106;
  struct std___Deque_base_int__std__allocator_int__* base109 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t108 + 0);
  struct std__allocator_int_* r110 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base109);
  unsigned long r111 = std__deque_int__std__allocator_int______S_max_size(r110);
  __retval107 = r111;
  unsigned long t112 = __retval107;
  return t112;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v113, int** v114) {
bb115:
  int*** unnamed116;
  int** __res117;
  int** __retval118;
  unnamed116 = v113;
  __res117 = v114;
  int** t119 = __res117;
  __retval118 = t119;
  int** t120 = __retval118;
  return t120;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v121, int** v122, struct std__random_access_iterator_tag v123) {
bb124:
  int** __first125;
  int** __last126;
  struct std__random_access_iterator_tag unnamed127;
  long __retval128;
  __first125 = v121;
  __last126 = v122;
  unnamed127 = v123;
  int** t129 = __last126;
  int** t130 = __first125;
  long diff131 = t129 - t130;
  __retval128 = diff131;
  long t132 = __retval128;
  return t132;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v133) {
bb134:
  int*** unnamed135;
  struct std__random_access_iterator_tag __retval136;
  unnamed135 = v133;
  struct std__random_access_iterator_tag t137 = __retval136;
  return t137;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v138, int** v139) {
bb140:
  int** __first141;
  int** __last142;
  long __retval143;
  struct std__random_access_iterator_tag agg_tmp0144;
  __first141 = v138;
  __last142 = v139;
  int** t145 = __first141;
  int** t146 = __last142;
  struct std__random_access_iterator_tag r147 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first141);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0144 = r147;
  struct std__random_access_iterator_tag t148 = agg_tmp0144;
  long r149 = std__iterator_traits_int_____difference_type_std____distance_int___(t145, t146, t148);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval143 = r149;
  long t150 = __retval143;
  return t150;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v151, int*** v152) {
bb153:
  int*** __out154;
  int*** __in155;
  __out154 = v151;
  __in155 = v152;
    int*** t156 = __in155;
    int** t157 = *t156;
    int* t158 = *t157;
    int*** t159 = __out154;
    int** t160 = *t159;
    *t160 = t158;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v161, int** v162, int** v163) {
bb164:
  int** __first165;
  int** __last166;
  int** __result167;
  int** __retval168;
  __first165 = v161;
  __last166 = v162;
  __result167 = v163;
      _Bool r169 = std____is_constant_evaluated();
      if (r169) {
      } else {
          long __n170;
          int** t171 = __first165;
          int** t172 = __last166;
          long r173 = std__iterator_traits_int_____difference_type_std__distance_int___(t171, t172);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n170 = r173;
            long t174 = __n170;
            long c175 = 1;
            _Bool c176 = ((t174 > c175)) ? 1 : 0;
            if (c176) {
              int** t177 = __result167;
              void* cast178 = (void*)t177;
              int** t179 = __first165;
              void* cast180 = (void*)t179;
              long t181 = __n170;
              unsigned long cast182 = (unsigned long)t181;
              unsigned long c183 = 8;
              unsigned long b184 = cast182 * c183;
              void* r185 = memmove(cast178, cast180, b184);
              long t186 = __n170;
              int** t187 = __result167;
              int** ptr188 = &(t187)[t186];
              __result167 = ptr188;
            } else {
                long t189 = __n170;
                long c190 = 1;
                _Bool c191 = ((t189 == c190)) ? 1 : 0;
                if (c191) {
                  void_std____assign_one_false__int____int___(&__result167, &__first165);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t192 = __result167;
                  int c193 = 1;
                  int** ptr194 = &(t192)[c193];
                  __result167 = ptr194;
                }
            }
          int** t195 = __result167;
          __retval168 = t195;
          int** t196 = __retval168;
          return t196;
      }
    while (1) {
      int** t198 = __first165;
      int** t199 = __last166;
      _Bool c200 = ((t198 != t199)) ? 1 : 0;
      if (!c200) break;
      void_std____assign_one_false__int____int___(&__result167, &__first165);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step197: ;
      int** t201 = __result167;
      int c202 = 1;
      int** ptr203 = &(t201)[c202];
      __result167 = ptr203;
      int** t204 = __first165;
      int c205 = 1;
      int** ptr206 = &(t204)[c205];
      __first165 = ptr206;
    }
  int** t207 = __result167;
  __retval168 = t207;
  int** t208 = __retval168;
  return t208;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v209, int** v210, int** v211) {
bb212:
  int** __first213;
  int** __last214;
  int** __result215;
  int** __retval216;
  __first213 = v209;
  __last214 = v210;
  __result215 = v211;
  int** t217 = __first213;
  int** t218 = __last214;
  int** t219 = __result215;
  int** r220 = int___std____copy_move_a2_false__int____int____int___(t217, t218, t219);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval216 = r220;
  int** t221 = __retval216;
  return t221;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v222) {
bb223:
  int** __it224;
  int** __retval225;
  __it224 = v222;
  int** t226 = __it224;
  __retval225 = t226;
  int** t227 = __retval225;
  return t227;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v228, int** v229, int** v230) {
bb231:
  int** __first232;
  int** __last233;
  int** __result234;
  int** __retval235;
  __first232 = v228;
  __last233 = v229;
  __result234 = v230;
  int** t236 = __first232;
  int** r237 = int___std____niter_base_int___(t236);
  int** t238 = __last233;
  int** r239 = int___std____niter_base_int___(t238);
  int** t240 = __result234;
  int** r241 = int___std____niter_base_int___(t240);
  int** r242 = int___std____copy_move_a1_false__int____int___(r237, r239, r241);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r243 = int___std____niter_wrap_int___(&__result234, r242);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval235 = r243;
  int** t244 = __retval235;
  return t244;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v245) {
bb246:
  int** __it247;
  int** __retval248;
  __it247 = v245;
  int** t249 = __it247;
  __retval248 = t249;
  int** t250 = __retval248;
  return t250;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v251, int** v252, int** v253) {
bb254:
  int** __first255;
  int** __last256;
  int** __result257;
  int** __retval258;
  __first255 = v251;
  __last256 = v252;
  __result257 = v253;
  int** t259 = __first255;
  int** r260 = int___std____miter_base_int___(t259);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t261 = __last256;
  int** r262 = int___std____miter_base_int___(t261);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t263 = __result257;
  int** r264 = int___std____copy_move_a_false__int____int___(r260, r262, t263);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval258 = r264;
  int** t265 = __retval258;
  return t265;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb266:
  _Bool __retval267;
    _Bool c268 = 0;
    __retval267 = c268;
    _Bool t269 = __retval267;
    return t269;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v270, long v271, struct std__random_access_iterator_tag v272) {
bb273:
  int*** __i274;
  long __n275;
  struct std__random_access_iterator_tag unnamed276;
  __i274 = v270;
  __n275 = v271;
  unnamed276 = v272;
    long t277 = __n275;
    _Bool isconst278 = 0;
    _Bool ternary279;
    if (isconst278) {
      long t280 = __n275;
      long c281 = 1;
      _Bool c282 = ((t280 == c281)) ? 1 : 0;
      ternary279 = (_Bool)c282;
    } else {
      _Bool c283 = 0;
      ternary279 = (_Bool)c283;
    }
    if (ternary279) {
      int*** t284 = __i274;
      int** t285 = *t284;
      int c286 = 1;
      int** ptr287 = &(t285)[c286];
      *t284 = ptr287;
    } else {
        long t288 = __n275;
        _Bool isconst289 = 0;
        _Bool ternary290;
        if (isconst289) {
          long t291 = __n275;
          long c292 = -1;
          _Bool c293 = ((t291 == c292)) ? 1 : 0;
          ternary290 = (_Bool)c293;
        } else {
          _Bool c294 = 0;
          ternary290 = (_Bool)c294;
        }
        if (ternary290) {
          int*** t295 = __i274;
          int** t296 = *t295;
          int c297 = -1;
          int** ptr298 = &(t296)[c297];
          *t295 = ptr298;
        } else {
          long t299 = __n275;
          int*** t300 = __i274;
          int** t301 = *t300;
          int** ptr302 = &(t301)[t299];
          *t300 = ptr302;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v303, long v304) {
bb305:
  int*** __i306;
  long __n307;
  long __d308;
  struct std__random_access_iterator_tag agg_tmp0309;
  __i306 = v303;
  __n307 = v304;
  long t310 = __n307;
  __d308 = t310;
  int*** t311 = __i306;
  long t312 = __d308;
  int*** t313 = __i306;
  struct std__random_access_iterator_tag r314 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t313);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0309 = r314;
  struct std__random_access_iterator_tag t315 = agg_tmp0309;
  void_std____advance_int____long_(t311, t312, t315);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v316, int** v317, int** v318) {
bb319:
  int** __first320;
  int** __last321;
  int** __result322;
  int** __retval323;
  __first320 = v316;
  __last321 = v317;
  __result322 = v318;
      _Bool r324 = std__is_constant_evaluated();
      if (r324) {
      } else {
          long __n325;
          int** t326 = __first320;
          int** t327 = __last321;
          long r328 = std__iterator_traits_int_____difference_type_std__distance_int___(t326, t327);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n325 = r328;
          long t329 = __n325;
          long u330 = -t329;
          void_std__advance_int____long_(&__result322, u330);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t331 = __n325;
            long c332 = 1;
            _Bool c333 = ((t331 > c332)) ? 1 : 0;
            if (c333) {
              int** t334 = __result322;
              void* cast335 = (void*)t334;
              int** t336 = __first320;
              void* cast337 = (void*)t336;
              long t338 = __n325;
              unsigned long cast339 = (unsigned long)t338;
              unsigned long c340 = 8;
              unsigned long b341 = cast339 * c340;
              void* r342 = memmove(cast335, cast337, b341);
            } else {
                long t343 = __n325;
                long c344 = 1;
                _Bool c345 = ((t343 == c344)) ? 1 : 0;
                if (c345) {
                  void_std____assign_one_false__int____int___(&__result322, &__first320);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t346 = __result322;
          __retval323 = t346;
          int** t347 = __retval323;
          return t347;
      }
    while (1) {
      int** t348 = __first320;
      int** t349 = __last321;
      _Bool c350 = ((t348 != t349)) ? 1 : 0;
      if (!c350) break;
        int** t351 = __last321;
        int c352 = -1;
        int** ptr353 = &(t351)[c352];
        __last321 = ptr353;
        int** t354 = __result322;
        int c355 = -1;
        int** ptr356 = &(t354)[c355];
        __result322 = ptr356;
        void_std____assign_one_false__int____int___(&__result322, &__last321);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t357 = __result322;
  __retval323 = t357;
  int** t358 = __retval323;
  return t358;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v359, int** v360, int** v361) {
bb362:
  int** __first363;
  int** __last364;
  int** __result365;
  int** __retval366;
  __first363 = v359;
  __last364 = v360;
  __result365 = v361;
  int** t367 = __first363;
  int** t368 = __last364;
  int** t369 = __result365;
  int** r370 = int___std____copy_move_backward_a2_false__int____int___(t367, t368, t369);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval366 = r370;
  int** t371 = __retval366;
  return t371;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v372, int** v373, int** v374) {
bb375:
  int** __first376;
  int** __last377;
  int** __result378;
  int** __retval379;
  __first376 = v372;
  __last377 = v373;
  __result378 = v374;
  int** t380 = __first376;
  int** r381 = int___std____niter_base_int___(t380);
  int** t382 = __last377;
  int** r383 = int___std____niter_base_int___(t382);
  int** t384 = __result378;
  int** r385 = int___std____niter_base_int___(t384);
  int** r386 = int___std____copy_move_backward_a1_false__int____int___(r381, r383, r385);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r387 = int___std____niter_wrap_int___(&__result378, r386);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval379 = r387;
  int** t388 = __retval379;
  return t388;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v389, int** v390, int** v391) {
bb392:
  int** __first393;
  int** __last394;
  int** __result395;
  int** __retval396;
  __first393 = v389;
  __last394 = v390;
  __result395 = v391;
  int** t397 = __first393;
  int** r398 = int___std____miter_base_int___(t397);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t399 = __last394;
  int** r400 = int___std____miter_base_int___(t399);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t401 = __result395;
  int** r402 = int___std____copy_move_backward_a_false__int____int___(r398, r400, t401);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval396 = r402;
  int** t403 = __retval396;
  return t403;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v404, unsigned long v405, _Bool v406) {
bb407:
  struct std__deque_int__std__allocator_int__* this408;
  unsigned long __nodes_to_add409;
  _Bool __add_at_front410;
  unsigned long __old_num_nodes411;
  unsigned long __new_num_nodes412;
  int** __new_nstart413;
  this408 = v404;
  __nodes_to_add409 = v405;
  __add_at_front410 = v406;
  struct std__deque_int__std__allocator_int__* t414 = this408;
  struct std___Deque_base_int__std__allocator_int__* base415 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base416 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base415->_M_impl) + 0);
  int** t417 = base416->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base418 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base419 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base418->_M_impl) + 0);
  int** t420 = base419->_M_start._M_node;
  long diff421 = t417 - t420;
  long c422 = 1;
  long b423 = diff421 + c422;
  unsigned long cast424 = (unsigned long)b423;
  __old_num_nodes411 = cast424;
  unsigned long t425 = __old_num_nodes411;
  unsigned long t426 = __nodes_to_add409;
  unsigned long b427 = t425 + t426;
  __new_num_nodes412 = b427;
    struct std___Deque_base_int__std__allocator_int__* base428 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base429 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base428->_M_impl) + 0);
    unsigned long t430 = base429->_M_map_size;
    unsigned long c431 = 2;
    unsigned long t432 = __new_num_nodes412;
    unsigned long b433 = c431 * t432;
    _Bool c434 = ((t430 > b433)) ? 1 : 0;
    if (c434) {
      struct std___Deque_base_int__std__allocator_int__* base435 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base436 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base435->_M_impl) + 0);
      int** t437 = base436->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base438 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base439 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base438->_M_impl) + 0);
      unsigned long t440 = base439->_M_map_size;
      unsigned long t441 = __new_num_nodes412;
      unsigned long b442 = t440 - t441;
      unsigned long c443 = 2;
      unsigned long b444 = b442 / c443;
      int** ptr445 = &(t437)[b444];
      _Bool t446 = __add_at_front410;
      unsigned long ternary447;
      if (t446) {
        unsigned long t448 = __nodes_to_add409;
        ternary447 = (unsigned long)t448;
      } else {
        unsigned long c449 = 0;
        ternary447 = (unsigned long)c449;
      }
      int** ptr450 = &(ptr445)[ternary447];
      __new_nstart413 = ptr450;
        int** t451 = __new_nstart413;
        struct std___Deque_base_int__std__allocator_int__* base452 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base453 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base452->_M_impl) + 0);
        int** t454 = base453->_M_start._M_node;
        _Bool c455 = ((t451 < t454)) ? 1 : 0;
        if (c455) {
          struct std___Deque_base_int__std__allocator_int__* base456 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base457 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base456->_M_impl) + 0);
          int** t458 = base457->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base459 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base460 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base459->_M_impl) + 0);
          int** t461 = base460->_M_finish._M_node;
          int c462 = 1;
          int** ptr463 = &(t461)[c462];
          int** t464 = __new_nstart413;
          int** r465 = int___std__copy_int____int___(t458, ptr463, t464);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base466 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base467 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base466->_M_impl) + 0);
          int** t468 = base467->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base469 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base470 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base469->_M_impl) + 0);
          int** t471 = base470->_M_finish._M_node;
          int c472 = 1;
          int** ptr473 = &(t471)[c472];
          int** t474 = __new_nstart413;
          unsigned long t475 = __old_num_nodes411;
          int** ptr476 = &(t474)[t475];
          int** r477 = int___std__copy_backward_int____int___(t468, ptr473, ptr476);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size478;
      unsigned long __bufsz479;
      int** __new_map480;
      struct std___Deque_base_int__std__allocator_int__* base481 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base482 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base481->_M_impl) + 0);
      unsigned long t483 = base482->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base484 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base485 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base484->_M_impl) + 0);
      unsigned long* r486 = unsigned_long_const__std__max_unsigned_long_(&base485->_M_map_size, &__nodes_to_add409);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t487 = *r486;
      unsigned long b488 = t483 + t487;
      unsigned long c489 = 2;
      unsigned long b490 = b488 + c489;
      __new_map_size478 = b490;
      unsigned long c491 = 128;
      __bufsz479 = c491;
        unsigned long t492 = __new_map_size478;
        unsigned long r493 = std__deque_int__std__allocator_int_____max_size___const(t414);
        unsigned long t494 = __bufsz479;
        unsigned long b495 = r493 + t494;
        unsigned long c496 = 1;
        unsigned long b497 = b495 - c496;
        unsigned long t498 = __bufsz479;
        unsigned long b499 = b497 / t498;
        unsigned long c500 = 2;
        unsigned long b501 = b499 * c500;
        _Bool c502 = ((t492 > b501)) ? 1 : 0;
        if (c502) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base503 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      unsigned long t504 = __new_map_size478;
      int** r505 = std___Deque_base_int__std__allocator_int______M_allocate_map(base503, t504);
      if (__cir_exc_active) {
        return;
      }
      __new_map480 = r505;
      int** t506 = __new_map480;
      unsigned long t507 = __new_map_size478;
      unsigned long t508 = __new_num_nodes412;
      unsigned long b509 = t507 - t508;
      unsigned long c510 = 2;
      unsigned long b511 = b509 / c510;
      int** ptr512 = &(t506)[b511];
      _Bool t513 = __add_at_front410;
      unsigned long ternary514;
      if (t513) {
        unsigned long t515 = __nodes_to_add409;
        ternary514 = (unsigned long)t515;
      } else {
        unsigned long c516 = 0;
        ternary514 = (unsigned long)c516;
      }
      int** ptr517 = &(ptr512)[ternary514];
      __new_nstart413 = ptr517;
      struct std___Deque_base_int__std__allocator_int__* base518 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base519 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base518->_M_impl) + 0);
      int** t520 = base519->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base521 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base522 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base521->_M_impl) + 0);
      int** t523 = base522->_M_finish._M_node;
      int c524 = 1;
      int** ptr525 = &(t523)[c524];
      int** t526 = __new_nstart413;
      int** r527 = int___std__copy_int____int___(t520, ptr525, t526);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base528 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int__* base529 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base530 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base529->_M_impl) + 0);
      int** t531 = base530->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base532 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base533 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base532->_M_impl) + 0);
      unsigned long t534 = base533->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base528, t531, t534);
      int** t535 = __new_map480;
      struct std___Deque_base_int__std__allocator_int__* base536 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base537 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base536->_M_impl) + 0);
      base537->_M_map = t535;
      unsigned long t538 = __new_map_size478;
      struct std___Deque_base_int__std__allocator_int__* base539 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base540 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base539->_M_impl) + 0);
      base540->_M_map_size = t538;
    }
  struct std___Deque_base_int__std__allocator_int__* base541 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base542 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base541->_M_impl) + 0);
  int** t543 = __new_nstart413;
  std___Deque_iterator_int__int___int_____M_set_node(&base542->_M_start, t543);
  struct std___Deque_base_int__std__allocator_int__* base544 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t414 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base545 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base544->_M_impl) + 0);
  int** t546 = __new_nstart413;
  unsigned long t547 = __old_num_nodes411;
  int** ptr548 = &(t546)[t547];
  int c549 = -1;
  int** ptr550 = &(ptr548)[c549];
  std___Deque_iterator_int__int___int_____M_set_node(&base545->_M_finish, ptr550);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v551, unsigned long v552) {
bb553:
  struct std__deque_int__std__allocator_int__* this554;
  unsigned long __nodes_to_add555;
  this554 = v551;
  __nodes_to_add555 = v552;
  struct std__deque_int__std__allocator_int__* t556 = this554;
    unsigned long t557 = __nodes_to_add555;
    unsigned long c558 = 1;
    unsigned long b559 = t557 + c558;
    struct std___Deque_base_int__std__allocator_int__* base560 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t556 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base561 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base560->_M_impl) + 0);
    unsigned long t562 = base561->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base563 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t556 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base564 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base563->_M_impl) + 0);
    int** t565 = base564->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base566 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t556 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base567 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base566->_M_impl) + 0);
    int** t568 = base567->_M_map;
    long diff569 = t565 - t568;
    unsigned long cast570 = (unsigned long)diff569;
    unsigned long b571 = t562 - cast570;
    _Bool c572 = ((b559 > b571)) ? 1 : 0;
    if (c572) {
      unsigned long t573 = __nodes_to_add555;
      _Bool c574 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t556, t573, c574);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v575, int* v576) {
bb577:
  struct std__deque_int__std__allocator_int__* this578;
  int* __args579;
  this578 = v575;
  __args579 = v576;
  struct std__deque_int__std__allocator_int__* t580 = this578;
    unsigned long r581 = std__deque_int__std__allocator_int_____size___const(t580);
    unsigned long r582 = std__deque_int__std__allocator_int_____max_size___const(t580);
    _Bool c583 = ((r581 == r582)) ? 1 : 0;
    if (c583) {
      char* cast584 = (char*)&(_str_2);
      std____throw_length_error(cast584);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c585 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t580, c585);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base586 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
  int* r587 = std___Deque_base_int__std__allocator_int______M_allocate_node(base586);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base588 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base589 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base588->_M_impl) + 0);
  int** t590 = base589->_M_finish._M_node;
  int c591 = 1;
  int** ptr592 = &(t590)[c591];
  *ptr592 = r587;
      struct std___Deque_base_int__std__allocator_int__* base594 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std__allocator_int_* base595 = (struct std__allocator_int_*)((char *)&(base594->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base596 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base597 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base596->_M_impl) + 0);
      int* t598 = base597->_M_finish._M_cur;
      int* t599 = __args579;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base595, t598, t599);
      struct std___Deque_base_int__std__allocator_int__* base600 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base601 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base600->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base602 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base603 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base602->_M_impl) + 0);
      int** t604 = base603->_M_finish._M_node;
      int c605 = 1;
      int** ptr606 = &(t604)[c605];
      std___Deque_iterator_int__int___int_____M_set_node(&base601->_M_finish, ptr606);
      struct std___Deque_base_int__std__allocator_int__* base607 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base608 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base607->_M_impl) + 0);
      int* t609 = base608->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base610 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base611 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base610->_M_impl) + 0);
      base611->_M_finish._M_cur = t609;
    cir_try_dispatch593: ;
    if (__cir_exc_active) {
    {
      int ca_tok612 = 0;
      void* ca_exn613 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base614 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
        struct std___Deque_base_int__std__allocator_int__* base615 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t580 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base616 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base615->_M_impl) + 0);
        int** t617 = base616->_M_finish._M_node;
        int c618 = 1;
        int** ptr619 = &(t617)[c618];
        int* t620 = *ptr619;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base614, t620);
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

// function: _ZNSt5dequeIiSaIiEE9push_backERKi
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v621, int* v622) {
bb623:
  struct std__deque_int__std__allocator_int__* this624;
  int* __x625;
  this624 = v621;
  __x625 = v622;
  struct std__deque_int__std__allocator_int__* t626 = this624;
    struct std___Deque_base_int__std__allocator_int__* base627 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t626 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base628 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base627->_M_impl) + 0);
    int* t629 = base628->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base630 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t626 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base631 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base630->_M_impl) + 0);
    int* t632 = base631->_M_finish._M_last;
    int c633 = -1;
    int* ptr634 = &(t632)[c633];
    _Bool c635 = ((t629 != ptr634)) ? 1 : 0;
    if (c635) {
      struct std___Deque_base_int__std__allocator_int__* base636 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t626 + 0);
      struct std__allocator_int_* base637 = (struct std__allocator_int_*)((char *)&(base636->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base638 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t626 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base639 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base638->_M_impl) + 0);
      int* t640 = base639->_M_finish._M_cur;
      int* t641 = __x625;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base637, t640, t641);
      struct std___Deque_base_int__std__allocator_int__* base642 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t626 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base643 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base642->_M_impl) + 0);
      int* t644 = base643->_M_finish._M_cur;
      int c645 = 1;
      int* ptr646 = &(t644)[c645];
      base643->_M_finish._M_cur = ptr646;
    } else {
      int* t647 = __x625;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t626, t647);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE4pushERKi
void std__stack_int__std__deque_int__std__allocator_int_______push(struct std__stack_int__std__deque_int__std__allocator_int___* v648, int* v649) {
bb650:
  struct std__stack_int__std__deque_int__std__allocator_int___* this651;
  int* __x652;
  this651 = v648;
  __x652 = v649;
  struct std__stack_int__std__deque_int__std__allocator_int___* t653 = this651;
  int* t654 = __x652;
  std__deque_int__std__allocator_int_____push_back(&t653->c, t654);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v655, struct std___Deque_iterator_int__int____int___* v656) {
bb657:
  struct std___Deque_iterator_int__int____int___* __x658;
  struct std___Deque_iterator_int__int____int___* __y659;
  _Bool __retval660;
  __x658 = v655;
  __y659 = v656;
  struct std___Deque_iterator_int__int____int___* t661 = __x658;
  int* t662 = t661->_M_cur;
  struct std___Deque_iterator_int__int____int___* t663 = __y659;
  int* t664 = t663->_M_cur;
  _Bool c665 = ((t662 == t664)) ? 1 : 0;
  __retval660 = c665;
  _Bool t666 = __retval660;
  return t666;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v667) {
bb668:
  struct std__deque_int__std__allocator_int__* this669;
  _Bool __retval670;
  this669 = v667;
  struct std__deque_int__std__allocator_int__* t671 = this669;
  struct std___Deque_base_int__std__allocator_int__* base672 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base673 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base672->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base674 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base675 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base674->_M_impl) + 0);
  _Bool r676 = std__operator__(&base673->_M_finish, &base675->_M_start);
  __retval670 = r676;
  _Bool t677 = __retval670;
  return t677;
}

// function: _ZNKSt5stackIiSt5dequeIiSaIiEEE5emptyEv
_Bool std__stack_int__std__deque_int__std__allocator_int_______empty___const(struct std__stack_int__std__deque_int__std__allocator_int___* v678) {
bb679:
  struct std__stack_int__std__deque_int__std__allocator_int___* this680;
  _Bool __retval681;
  this680 = v678;
  struct std__stack_int__std__deque_int__std__allocator_int___* t682 = this680;
  _Bool r683 = std__deque_int__std__allocator_int_____empty___const(&t682->c);
  __retval681 = r683;
  _Bool t684 = __retval681;
  return t684;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v685) {
bb686:
  struct std___Deque_iterator_int__int____int___* this687;
  struct std___Deque_iterator_int__int____int___* __retval688;
  this687 = v685;
  struct std___Deque_iterator_int__int____int___* t689 = this687;
    int* t690 = t689->_M_cur;
    int* t691 = t689->_M_first;
    _Bool c692 = ((t690 == t691)) ? 1 : 0;
    if (c692) {
      int** t693 = t689->_M_node;
      int c694 = -1;
      int** ptr695 = &(t693)[c694];
      std___Deque_iterator_int__int___int_____M_set_node(t689, ptr695);
      int* t696 = t689->_M_last;
      t689->_M_cur = t696;
    }
  int* t697 = t689->_M_cur;
  int c698 = -1;
  int* ptr699 = &(t697)[c698];
  t689->_M_cur = ptr699;
  __retval688 = t689;
  struct std___Deque_iterator_int__int____int___* t700 = __retval688;
  return t700;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v701) {
bb702:
  struct std___Deque_iterator_int__int____int___* this703;
  int* __retval704;
  this703 = v701;
  struct std___Deque_iterator_int__int____int___* t705 = this703;
  int* t706 = t705->_M_cur;
  __retval704 = t706;
  int* t707 = __retval704;
  return t707;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v708) {
bb709:
  struct std__deque_int__std__allocator_int__* this710;
  int* __retval711;
  struct std___Deque_iterator_int__int____int___ __tmp712;
  this710 = v708;
  struct std__deque_int__std__allocator_int__* t713 = this710;
    do {
          _Bool r714 = std__deque_int__std__allocator_int_____empty___const(t713);
          if (r714) {
            char* cast715 = (char*)&(_str_5);
            int c716 = 1537;
            char* cast717 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast718 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast715, c716, cast717, cast718);
          }
      _Bool c719 = 0;
      if (!c719) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r720 = std__deque_int__std__allocator_int_____end(t713);
  __tmp712 = r720;
  struct std___Deque_iterator_int__int____int___* r721 = std___Deque_iterator_int__int___int____operator__(&__tmp712);
  int* r722 = std___Deque_iterator_int__int___int____operator____const(&__tmp712);
  __retval711 = r722;
  int* t723 = __retval711;
  return t723;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE3topEv
int* std__stack_int__std__deque_int__std__allocator_int_______top(struct std__stack_int__std__deque_int__std__allocator_int___* v724) {
bb725:
  struct std__stack_int__std__deque_int__std__allocator_int___* this726;
  int* __retval727;
  this726 = v724;
  struct std__stack_int__std__deque_int__std__allocator_int___* t728 = this726;
    do {
          _Bool r729 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(t728);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r729) {
            char* cast730 = (char*)&(_str_3);
            int c731 = 260;
            char* cast732 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv);
            char* cast733 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast730, c731, cast732, cast733);
          }
      _Bool c734 = 0;
      if (!c734) break;
    } while (1);
  int* r735 = std__deque_int__std__allocator_int_____back(&t728->c);
  __retval727 = r735;
  int* t736 = __retval727;
  return t736;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v737, int* v738) {
bb739:
  struct std__allocator_int_* __a740;
  int* __p741;
  __a740 = v737;
  __p741 = v738;
  int* t742 = __p741;
  void_std__destroy_at_int_(t742);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_pop_back_auxEv
void std__deque_int__std__allocator_int______M_pop_back_aux(struct std__deque_int__std__allocator_int__* v743) {
bb744:
  struct std__deque_int__std__allocator_int__* this745;
  this745 = v743;
  struct std__deque_int__std__allocator_int__* t746 = this745;
  struct std___Deque_base_int__std__allocator_int__* base747 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int__* base748 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base749 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base748->_M_impl) + 0);
  int* t750 = base749->_M_finish._M_first;
  std___Deque_base_int__std__allocator_int______M_deallocate_node(base747, t750);
  struct std___Deque_base_int__std__allocator_int__* base751 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base752 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base751->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base753 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base754 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base753->_M_impl) + 0);
  int** t755 = base754->_M_finish._M_node;
  int c756 = -1;
  int** ptr757 = &(t755)[c756];
  std___Deque_iterator_int__int___int_____M_set_node(&base752->_M_finish, ptr757);
  struct std___Deque_base_int__std__allocator_int__* base758 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base759 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base758->_M_impl) + 0);
  int* t760 = base759->_M_finish._M_last;
  int c761 = -1;
  int* ptr762 = &(t760)[c761];
  struct std___Deque_base_int__std__allocator_int__* base763 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base764 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base763->_M_impl) + 0);
  base764->_M_finish._M_cur = ptr762;
  struct std___Deque_base_int__std__allocator_int__* base765 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std__allocator_int_* r766 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base765);
  struct std___Deque_base_int__std__allocator_int__* base767 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t746 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base768 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base767->_M_impl) + 0);
  int* t769 = base768->_M_finish._M_cur;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(r766, t769);
  return;
}

// function: _ZNSt5dequeIiSaIiEE8pop_backEv
void std__deque_int__std__allocator_int_____pop_back(struct std__deque_int__std__allocator_int__* v770) {
bb771:
  struct std__deque_int__std__allocator_int__* this772;
  this772 = v770;
  struct std__deque_int__std__allocator_int__* t773 = this772;
    do {
          _Bool r774 = std__deque_int__std__allocator_int_____empty___const(t773);
          if (r774) {
            char* cast775 = (char*)&(_str_5);
            int c776 = 1666;
            char* cast777 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv);
            char* cast778 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast775, c776, cast777, cast778);
          }
      _Bool c779 = 0;
      if (!c779) break;
    } while (1);
    struct std___Deque_base_int__std__allocator_int__* base780 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t773 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base781 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base780->_M_impl) + 0);
    int* t782 = base781->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base783 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t773 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base784 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base783->_M_impl) + 0);
    int* t785 = base784->_M_finish._M_first;
    _Bool c786 = ((t782 != t785)) ? 1 : 0;
    if (c786) {
      struct std___Deque_base_int__std__allocator_int__* base787 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t773 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base788 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base787->_M_impl) + 0);
      int* t789 = base788->_M_finish._M_cur;
      int c790 = -1;
      int* ptr791 = &(t789)[c790];
      base788->_M_finish._M_cur = ptr791;
      struct std___Deque_base_int__std__allocator_int__* base792 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t773 + 0);
      struct std__allocator_int_* r793 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base792);
      struct std___Deque_base_int__std__allocator_int__* base794 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t773 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base795 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base794->_M_impl) + 0);
      int* t796 = base795->_M_finish._M_cur;
      void_std__allocator_traits_std__allocator_int_____destroy_int_(r793, t796);
    } else {
      std__deque_int__std__allocator_int______M_pop_back_aux(t773);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE3popEv
void std__stack_int__std__deque_int__std__allocator_int_______pop(struct std__stack_int__std__deque_int__std__allocator_int___* v797) {
bb798:
  struct std__stack_int__std__deque_int__std__allocator_int___* this799;
  this799 = v797;
  struct std__stack_int__std__deque_int__std__allocator_int___* t800 = this799;
    do {
          _Bool r801 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(t800);
          if (__cir_exc_active) {
            return;
          }
          if (r801) {
            char* cast802 = (char*)&(_str_3);
            int c803 = 333;
            char* cast804 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv);
            char* cast805 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast802, c803, cast804, cast805);
          }
      _Bool c806 = 0;
      if (!c806) break;
    } while (1);
  std__deque_int__std__allocator_int_____pop_back(&t800->c);
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEED2Ev
void std__stack_int__std__deque_int__std__allocator_int________stack(struct std__stack_int__std__deque_int__std__allocator_int___* v807) {
bb808:
  struct std__stack_int__std__deque_int__std__allocator_int___* this809;
  this809 = v807;
  struct std__stack_int__std__deque_int__std__allocator_int___* t810 = this809;
  {
    std__deque_int__std__allocator_int______deque(&t810->c);
  }
  return;
}

// function: main
int main() {
bb811:
  int __retval812;
  struct std__stack_int__std__deque_int__std__allocator_int___ s813;
  int c814 = 0;
  __retval812 = c814;
  std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(&s813);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      int i815;
      int c816 = 0;
      i815 = c816;
      while (1) {
        int t818 = i815;
        int c819 = 10;
        _Bool c820 = ((t818 < c819)) ? 1 : 0;
        if (!c820) break;
          std__stack_int__std__deque_int__std__allocator_int_______push(&s813, &i815);
          if (__cir_exc_active) {
            {
              std__stack_int__std__deque_int__std__allocator_int________stack(&s813);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      for_step817: ;
        int t821 = i815;
        int u822 = t821 + 1;
        i815 = u822;
      }
      int i823;
      int c824 = 9;
      i823 = c824;
      while (1) {
        int t826 = i823;
        int c827 = 0;
        _Bool c828 = ((t826 >= c827)) ? 1 : 0;
        if (!c828) break;
          int* r829 = std__stack_int__std__deque_int__std__allocator_int_______top(&s813);
          if (__cir_exc_active) {
            {
              std__stack_int__std__deque_int__std__allocator_int________stack(&s813);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t830 = *r829;
          int t831 = i823;
          _Bool c832 = ((t830 == t831)) ? 1 : 0;
          if (c832) {
          } else {
            char* cast833 = (char*)&(_str);
            char* c834 = _str_1;
            unsigned int c835 = 19;
            char* cast836 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast833, c834, c835, cast836);
          }
          std__stack_int__std__deque_int__std__allocator_int_______pop(&s813);
          if (__cir_exc_active) {
            {
              std__stack_int__std__deque_int__std__allocator_int________stack(&s813);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      for_step825: ;
        int t837 = i823;
        int u838 = t837 - 1;
        i823 = u838;
      }
    int c839 = 0;
    __retval812 = c839;
    int t840 = __retval812;
    int ret_val841 = t840;
    {
      std__stack_int__std__deque_int__std__allocator_int________stack(&s813);
    }
    return ret_val841;
  int t842 = __retval812;
  return t842;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v843) {
bb844:
  struct std__deque_int__std__allocator_int__* this845;
  struct std___Deque_iterator_int__int____int___ agg_tmp0846;
  struct std___Deque_iterator_int__int____int___ agg_tmp1847;
  this845 = v843;
  struct std__deque_int__std__allocator_int__* t848 = this845;
    struct std___Deque_iterator_int__int____int___ r849 = std__deque_int__std__allocator_int_____begin(t848);
    agg_tmp0846 = r849;
    struct std___Deque_iterator_int__int____int___ r850 = std__deque_int__std__allocator_int_____end(t848);
    agg_tmp1847 = r850;
    struct std___Deque_base_int__std__allocator_int__* base851 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t848 + 0);
    struct std__allocator_int_* r852 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base851);
    struct std___Deque_iterator_int__int____int___ t853 = agg_tmp0846;
    struct std___Deque_iterator_int__int____int___ t854 = agg_tmp1847;
    std__deque_int__std__allocator_int______M_destroy_data(t848, t853, t854, r852);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base855 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t848 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base855);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base856 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t848 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base856);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb857:
  _Bool __retval858;
    _Bool c859 = 0;
    __retval858 = c859;
    _Bool t860 = __retval858;
    return t860;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v861) {
bb862:
  int* __location863;
  __location863 = v861;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v864, int* v865) {
bb866:
  int* __first867;
  int* __last868;
  __first867 = v864;
  __last868 = v865;
      _Bool r869 = std____is_constant_evaluated();
      if (r869) {
          while (1) {
            int* t871 = __first867;
            int* t872 = __last868;
            _Bool c873 = ((t871 != t872)) ? 1 : 0;
            if (!c873) break;
            int* t874 = __first867;
            void_std__destroy_at_int_(t874);
            if (__cir_exc_active) {
              return;
            }
          for_step870: ;
            int* t875 = __first867;
            int c876 = 1;
            int* ptr877 = &(t875)[c876];
            __first867 = ptr877;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v878, int* v879, struct std__allocator_int_* v880) {
bb881:
  int* __first882;
  int* __last883;
  struct std__allocator_int_* unnamed884;
  __first882 = v878;
  __last883 = v879;
  unnamed884 = v880;
  int* t885 = __first882;
  int* t886 = __last883;
  void_std___Destroy_int__(t885, t886);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v887) {
bb888:
  unsigned long __size889;
  unsigned long __retval890;
  __size889 = v887;
  unsigned long t891 = __size889;
  unsigned long c892 = 512;
  _Bool c893 = ((t891 < c892)) ? 1 : 0;
  unsigned long ternary894;
  if (c893) {
    unsigned long c895 = 512;
    unsigned long t896 = __size889;
    unsigned long b897 = c895 / t896;
    ternary894 = (unsigned long)b897;
  } else {
    unsigned long c898 = 1;
    ternary894 = (unsigned long)c898;
  }
  __retval890 = ternary894;
  unsigned long t899 = __retval890;
  return t899;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb900:
  unsigned long __retval901;
  unsigned long c902 = 4;
  unsigned long r903 = std____deque_buf_size(c902);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval901 = r903;
  unsigned long t904 = __retval901;
  return t904;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v905, struct std___Deque_iterator_int__int____int___ v906, struct std___Deque_iterator_int__int____int___ v907) {
bb908:
  struct std__deque_int__std__allocator_int__* this909;
  struct std___Deque_iterator_int__int____int___ __first910;
  struct std___Deque_iterator_int__int____int___ __last911;
  this909 = v905;
  __first910 = v906;
  __last911 = v907;
  struct std__deque_int__std__allocator_int__* t912 = this909;
    int** __node913;
    int** t914 = __first910._M_node;
    int c915 = 1;
    int** ptr916 = &(t914)[c915];
    __node913 = ptr916;
    while (1) {
      int** t918 = __node913;
      int** t919 = __last911._M_node;
      _Bool c920 = ((t918 < t919)) ? 1 : 0;
      if (!c920) break;
      int** t921 = __node913;
      int* t922 = *t921;
      int** t923 = __node913;
      int* t924 = *t923;
      unsigned long r925 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr926 = &(t924)[r925];
      struct std___Deque_base_int__std__allocator_int__* base927 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t912 + 0);
      struct std__allocator_int_* r928 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base927);
      void_std___Destroy_int___int_(t922, ptr926, r928);
      if (__cir_exc_active) {
        return;
      }
    for_step917: ;
      int** t929 = __node913;
      int c930 = 1;
      int** ptr931 = &(t929)[c930];
      __node913 = ptr931;
    }
    int** t932 = __first910._M_node;
    int** t933 = __last911._M_node;
    _Bool c934 = ((t932 != t933)) ? 1 : 0;
    if (c934) {
      int* t935 = __first910._M_cur;
      int* t936 = __first910._M_last;
      struct std___Deque_base_int__std__allocator_int__* base937 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t912 + 0);
      struct std__allocator_int_* r938 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base937);
      void_std___Destroy_int___int_(t935, t936, r938);
      if (__cir_exc_active) {
        return;
      }
      int* t939 = __last911._M_first;
      int* t940 = __last911._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base941 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t912 + 0);
      struct std__allocator_int_* r942 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base941);
      void_std___Destroy_int___int_(t939, t940, r942);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t943 = __first910._M_cur;
      int* t944 = __last911._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base945 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t912 + 0);
      struct std__allocator_int_* r946 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base945);
      void_std___Destroy_int___int_(t943, t944, r946);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v947, struct std___Deque_iterator_int__int____int___* v948) {
bb949:
  struct std___Deque_iterator_int__int____int___* this950;
  struct std___Deque_iterator_int__int____int___* __x951;
  this950 = v947;
  __x951 = v948;
  struct std___Deque_iterator_int__int____int___* t952 = this950;
  struct std___Deque_iterator_int__int____int___* t953 = __x951;
  int* t954 = t953->_M_cur;
  t952->_M_cur = t954;
  struct std___Deque_iterator_int__int____int___* t955 = __x951;
  int* t956 = t955->_M_first;
  t952->_M_first = t956;
  struct std___Deque_iterator_int__int____int___* t957 = __x951;
  int* t958 = t957->_M_last;
  t952->_M_last = t958;
  struct std___Deque_iterator_int__int____int___* t959 = __x951;
  int** t960 = t959->_M_node;
  t952->_M_node = t960;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v961, struct std___Deque_iterator_int__int____int___ v962, struct std___Deque_iterator_int__int____int___ v963, struct std__allocator_int_* v964) {
bb965:
  struct std__deque_int__std__allocator_int__* this966;
  struct std___Deque_iterator_int__int____int___ __first967;
  struct std___Deque_iterator_int__int____int___ __last968;
  struct std__allocator_int_* unnamed969;
  this966 = v961;
  __first967 = v962;
  __last968 = v963;
  unnamed969 = v964;
  struct std__deque_int__std__allocator_int__* t970 = this966;
    _Bool c971 = 0;
    if (c971) {
      struct std___Deque_iterator_int__int____int___ agg_tmp0972;
      struct std___Deque_iterator_int__int____int___ agg_tmp1973;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0972, &__first967);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp1973, &__last968);
      struct std___Deque_iterator_int__int____int___ t974 = agg_tmp0972;
      struct std___Deque_iterator_int__int____int___ t975 = agg_tmp1973;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t970, t974, t975);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v976) {
bb977:
  struct std__deque_int__std__allocator_int__* this978;
  struct std___Deque_iterator_int__int____int___ __retval979;
  this978 = v976;
  struct std__deque_int__std__allocator_int__* t980 = this978;
  struct std___Deque_base_int__std__allocator_int__* base981 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t980 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base982 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base981->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval979, &base982->_M_start);
  struct std___Deque_iterator_int__int____int___ t983 = __retval979;
  return t983;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v984) {
bb985:
  struct std__deque_int__std__allocator_int__* this986;
  struct std___Deque_iterator_int__int____int___ __retval987;
  this986 = v984;
  struct std__deque_int__std__allocator_int__* t988 = this986;
  struct std___Deque_base_int__std__allocator_int__* base989 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t988 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base990 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base989->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval987, &base990->_M_finish);
  struct std___Deque_iterator_int__int____int___ t991 = __retval987;
  return t991;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v992) {
bb993:
  struct std___Deque_base_int__std__allocator_int__* this994;
  struct std__allocator_int_* __retval995;
  this994 = v992;
  struct std___Deque_base_int__std__allocator_int__* t996 = this994;
  struct std__allocator_int_* base997 = (struct std__allocator_int_*)((char *)&(t996->_M_impl) + 0);
  __retval995 = base997;
  struct std__allocator_int_* t998 = __retval995;
  return t998;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v999, int* v1000, unsigned long v1001) {
bb1002:
  struct std____new_allocator_int_* this1003;
  int* __p1004;
  unsigned long __n1005;
  this1003 = v999;
  __p1004 = v1000;
  __n1005 = v1001;
  struct std____new_allocator_int_* t1006 = this1003;
    unsigned long c1007 = 4;
    unsigned long c1008 = 16;
    _Bool c1009 = ((c1007 > c1008)) ? 1 : 0;
    if (c1009) {
      int* t1010 = __p1004;
      void* cast1011 = (void*)t1010;
      unsigned long t1012 = __n1005;
      unsigned long c1013 = 4;
      unsigned long b1014 = t1012 * c1013;
      unsigned long c1015 = 4;
      operator_delete_3(cast1011, b1014, c1015);
      return;
    }
  int* t1016 = __p1004;
  void* cast1017 = (void*)t1016;
  unsigned long t1018 = __n1005;
  unsigned long c1019 = 4;
  unsigned long b1020 = t1018 * c1019;
  operator_delete_2(cast1017, b1020);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1021, int* v1022, unsigned long v1023) {
bb1024:
  struct std__allocator_int_* this1025;
  int* __p1026;
  unsigned long __n1027;
  this1025 = v1021;
  __p1026 = v1022;
  __n1027 = v1023;
  struct std__allocator_int_* t1028 = this1025;
    _Bool r1029 = std____is_constant_evaluated();
    if (r1029) {
      int* t1030 = __p1026;
      void* cast1031 = (void*)t1030;
      operator_delete(cast1031);
      return;
    }
  struct std____new_allocator_int_* base1032 = (struct std____new_allocator_int_*)((char *)t1028 + 0);
  int* t1033 = __p1026;
  unsigned long t1034 = __n1027;
  std____new_allocator_int___deallocate(base1032, t1033, t1034);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1035, int* v1036, unsigned long v1037) {
bb1038:
  struct std__allocator_int_* __a1039;
  int* __p1040;
  unsigned long __n1041;
  __a1039 = v1035;
  __p1040 = v1036;
  __n1041 = v1037;
  struct std__allocator_int_* t1042 = __a1039;
  int* t1043 = __p1040;
  unsigned long t1044 = __n1041;
  std__allocator_int___deallocate(t1042, t1043, t1044);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1045, int* v1046) {
bb1047:
  struct std___Deque_base_int__std__allocator_int__* this1048;
  int* __p1049;
  this1048 = v1045;
  __p1049 = v1046;
  struct std___Deque_base_int__std__allocator_int__* t1050 = this1048;
  struct std__allocator_int_* base1051 = (struct std__allocator_int_*)((char *)&(t1050->_M_impl) + 0);
  int* t1052 = __p1049;
  unsigned long c1053 = 4;
  unsigned long r1054 = std____deque_buf_size(c1053);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1051, t1052, r1054);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1055, int** v1056, int** v1057) {
bb1058:
  struct std___Deque_base_int__std__allocator_int__* this1059;
  int** __nstart1060;
  int** __nfinish1061;
  this1059 = v1055;
  __nstart1060 = v1056;
  __nfinish1061 = v1057;
  struct std___Deque_base_int__std__allocator_int__* t1062 = this1059;
    int** __n1063;
    int** t1064 = __nstart1060;
    __n1063 = t1064;
    while (1) {
      int** t1066 = __n1063;
      int** t1067 = __nfinish1061;
      _Bool c1068 = ((t1066 < t1067)) ? 1 : 0;
      if (!c1068) break;
      int** t1069 = __n1063;
      int* t1070 = *t1069;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1062, t1070);
    for_step1065: ;
      int** t1071 = __n1063;
      int c1072 = 1;
      int** ptr1073 = &(t1071)[c1072];
      __n1063 = ptr1073;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1074) {
bb1075:
  struct std___Deque_base_int__std__allocator_int__* this1076;
  struct std__allocator_int_* __retval1077;
  this1076 = v1074;
  struct std___Deque_base_int__std__allocator_int__* t1078 = this1076;
  struct std__allocator_int_* base1079 = (struct std__allocator_int_*)((char *)&(t1078->_M_impl) + 0);
  __retval1077 = base1079;
  struct std__allocator_int_* t1080 = __retval1077;
  return t1080;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1081, struct std__allocator_int_* v1082) {
bb1083:
  struct std__allocator_int___* this1084;
  struct std__allocator_int_* unnamed1085;
  this1084 = v1081;
  unnamed1085 = v1082;
  struct std__allocator_int___* t1086 = this1084;
  struct std____new_allocator_int___* base1087 = (struct std____new_allocator_int___*)((char *)t1086 + 0);
  std____new_allocator_int______new_allocator(base1087);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1088) {
bb1089:
  struct std___Deque_base_int__std__allocator_int__* this1090;
  struct std__allocator_int___ __retval1091;
  this1090 = v1088;
  struct std___Deque_base_int__std__allocator_int__* t1092 = this1090;
  struct std__allocator_int_* r1093 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1092);
  std__allocator_int____allocator_int_(&__retval1091, r1093);
  struct std__allocator_int___ t1094 = __retval1091;
  return t1094;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1095, int** v1096, unsigned long v1097) {
bb1098:
  struct std____new_allocator_int___* this1099;
  int** __p1100;
  unsigned long __n1101;
  this1099 = v1095;
  __p1100 = v1096;
  __n1101 = v1097;
  struct std____new_allocator_int___* t1102 = this1099;
    unsigned long c1103 = 8;
    unsigned long c1104 = 16;
    _Bool c1105 = ((c1103 > c1104)) ? 1 : 0;
    if (c1105) {
      int** t1106 = __p1100;
      void* cast1107 = (void*)t1106;
      unsigned long t1108 = __n1101;
      unsigned long c1109 = 8;
      unsigned long b1110 = t1108 * c1109;
      unsigned long c1111 = 8;
      operator_delete_3(cast1107, b1110, c1111);
      return;
    }
  int** t1112 = __p1100;
  void* cast1113 = (void*)t1112;
  unsigned long t1114 = __n1101;
  unsigned long c1115 = 8;
  unsigned long b1116 = t1114 * c1115;
  operator_delete_2(cast1113, b1116);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1117, int** v1118, unsigned long v1119) {
bb1120:
  struct std__allocator_int___* this1121;
  int** __p1122;
  unsigned long __n1123;
  this1121 = v1117;
  __p1122 = v1118;
  __n1123 = v1119;
  struct std__allocator_int___* t1124 = this1121;
    _Bool r1125 = std____is_constant_evaluated();
    if (r1125) {
      int** t1126 = __p1122;
      void* cast1127 = (void*)t1126;
      operator_delete(cast1127);
      return;
    }
  struct std____new_allocator_int___* base1128 = (struct std____new_allocator_int___*)((char *)t1124 + 0);
  int** t1129 = __p1122;
  unsigned long t1130 = __n1123;
  std____new_allocator_int____deallocate(base1128, t1129, t1130);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1131, int** v1132, unsigned long v1133) {
bb1134:
  struct std__allocator_int___* __a1135;
  int** __p1136;
  unsigned long __n1137;
  __a1135 = v1131;
  __p1136 = v1132;
  __n1137 = v1133;
  struct std__allocator_int___* t1138 = __a1135;
  int** t1139 = __p1136;
  unsigned long t1140 = __n1137;
  std__allocator_int____deallocate(t1138, t1139, t1140);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1141, int** v1142, unsigned long v1143) {
bb1144:
  struct std___Deque_base_int__std__allocator_int__* this1145;
  int** __p1146;
  unsigned long __n1147;
  struct std__allocator_int___ __map_alloc1148;
  this1145 = v1141;
  __p1146 = v1142;
  __n1147 = v1143;
  struct std___Deque_base_int__std__allocator_int__* t1149 = this1145;
  struct std__allocator_int___ r1150 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1149);
  __map_alloc1148 = r1150;
  int** t1151 = __p1146;
  unsigned long t1152 = __n1147;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1148, t1151, t1152);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1153) {
bb1154:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1155;
  this1155 = v1153;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1156 = this1155;
  {
    struct std__allocator_int_* base1157 = (struct std__allocator_int_*)((char *)t1156 + 0);
    std__allocator_int____allocator(base1157);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1158) {
bb1159:
  struct std___Deque_base_int__std__allocator_int__* this1160;
  this1160 = v1158;
  struct std___Deque_base_int__std__allocator_int__* t1161 = this1160;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1162 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1161->_M_impl) + 0);
      int** t1163 = base1162->_M_map;
      _Bool cast1164 = (_Bool)t1163;
      if (cast1164) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1165 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1161->_M_impl) + 0);
        int** t1166 = base1165->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1167 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1161->_M_impl) + 0);
        int** t1168 = base1167->_M_finish._M_node;
        int c1169 = 1;
        int** ptr1170 = &(t1168)[c1169];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1161, t1166, ptr1170);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1171 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1161->_M_impl) + 0);
        int** t1172 = base1171->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1173 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1161->_M_impl) + 0);
        unsigned long t1174 = base1173->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1161, t1172, t1174);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1161->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1175) {
bb1176:
  struct std____new_allocator_int___* this1177;
  this1177 = v1175;
  struct std____new_allocator_int___* t1178 = this1177;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1179) {
bb1180:
  struct std__allocator_int_* this1181;
  this1181 = v1179;
  struct std__allocator_int_* t1182 = this1181;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1183) {
bb1184:
  struct std__deque_int__std__allocator_int__* this1185;
  this1185 = v1183;
  struct std__deque_int__std__allocator_int__* t1186 = this1185;
  struct std___Deque_base_int__std__allocator_int__* base1187 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1186 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base1187);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1188) {
bb1189:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1190;
  this1190 = v1188;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1191 = this1190;
  struct std__allocator_int_* base1192 = (struct std__allocator_int_*)((char *)t1191 + 0);
  std__allocator_int___allocator(base1192);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1193 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1191 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1193);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1194, unsigned long* v1195) {
bb1196:
  unsigned long* __a1197;
  unsigned long* __b1198;
  unsigned long* __retval1199;
  __a1197 = v1194;
  __b1198 = v1195;
    unsigned long* t1200 = __a1197;
    unsigned long t1201 = *t1200;
    unsigned long* t1202 = __b1198;
    unsigned long t1203 = *t1202;
    _Bool c1204 = ((t1201 < t1203)) ? 1 : 0;
    if (c1204) {
      unsigned long* t1205 = __b1198;
      __retval1199 = t1205;
      unsigned long* t1206 = __retval1199;
      return t1206;
    }
  unsigned long* t1207 = __a1197;
  __retval1199 = t1207;
  unsigned long* t1208 = __retval1199;
  return t1208;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1209) {
bb1210:
  struct std____new_allocator_int___* this1211;
  unsigned long __retval1212;
  this1211 = v1209;
  struct std____new_allocator_int___* t1213 = this1211;
  unsigned long c1214 = 9223372036854775807;
  unsigned long c1215 = 8;
  unsigned long b1216 = c1214 / c1215;
  __retval1212 = b1216;
  unsigned long t1217 = __retval1212;
  return t1217;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1218, unsigned long v1219, void* v1220) {
bb1221:
  struct std____new_allocator_int___* this1222;
  unsigned long __n1223;
  void* unnamed1224;
  int** __retval1225;
  this1222 = v1218;
  __n1223 = v1219;
  unnamed1224 = v1220;
  struct std____new_allocator_int___* t1226 = this1222;
    unsigned long t1227 = __n1223;
    unsigned long r1228 = std____new_allocator_int_____M_max_size___const(t1226);
    _Bool c1229 = ((t1227 > r1228)) ? 1 : 0;
    if (c1229) {
        unsigned long t1230 = __n1223;
        unsigned long c1231 = -1;
        unsigned long c1232 = 8;
        unsigned long b1233 = c1231 / c1232;
        _Bool c1234 = ((t1230 > b1233)) ? 1 : 0;
        if (c1234) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1235 = 8;
    unsigned long c1236 = 16;
    _Bool c1237 = ((c1235 > c1236)) ? 1 : 0;
    if (c1237) {
      unsigned long __al1238;
      unsigned long c1239 = 8;
      __al1238 = c1239;
      unsigned long t1240 = __n1223;
      unsigned long c1241 = 8;
      unsigned long b1242 = t1240 * c1241;
      unsigned long t1243 = __al1238;
      void* r1244 = operator_new_2(b1242, t1243);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1245 = (int**)r1244;
      __retval1225 = cast1245;
      int** t1246 = __retval1225;
      return t1246;
    }
  unsigned long t1247 = __n1223;
  unsigned long c1248 = 8;
  unsigned long b1249 = t1247 * c1248;
  void* r1250 = operator_new(b1249);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1251 = (int**)r1250;
  __retval1225 = cast1251;
  int** t1252 = __retval1225;
  return t1252;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1253, unsigned long v1254) {
bb1255:
  struct std__allocator_int___* this1256;
  unsigned long __n1257;
  int** __retval1258;
  this1256 = v1253;
  __n1257 = v1254;
  struct std__allocator_int___* t1259 = this1256;
    _Bool r1260 = std____is_constant_evaluated();
    if (r1260) {
        unsigned long t1261 = __n1257;
        unsigned long c1262 = 8;
        unsigned long ovr1263;
        _Bool ovf1264 = __builtin_mul_overflow(t1261, c1262, &ovr1263);
        __n1257 = ovr1263;
        if (ovf1264) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1265 = __n1257;
      void* r1266 = operator_new(t1265);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1267 = (int**)r1266;
      __retval1258 = cast1267;
      int** t1268 = __retval1258;
      return t1268;
    }
  struct std____new_allocator_int___* base1269 = (struct std____new_allocator_int___*)((char *)t1259 + 0);
  unsigned long t1270 = __n1257;
  void* c1271 = ((void*)0);
  int** r1272 = std____new_allocator_int____allocate(base1269, t1270, c1271);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1258 = r1272;
  int** t1273 = __retval1258;
  return t1273;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1274, unsigned long v1275) {
bb1276:
  struct std__allocator_int___* __a1277;
  unsigned long __n1278;
  int** __retval1279;
  __a1277 = v1274;
  __n1278 = v1275;
  struct std__allocator_int___* t1280 = __a1277;
  unsigned long t1281 = __n1278;
  int** r1282 = std__allocator_int____allocate(t1280, t1281);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1279 = r1282;
  int** t1283 = __retval1279;
  return t1283;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1284, unsigned long v1285) {
bb1286:
  struct std___Deque_base_int__std__allocator_int__* this1287;
  unsigned long __n1288;
  int** __retval1289;
  struct std__allocator_int___ __map_alloc1290;
  this1287 = v1284;
  __n1288 = v1285;
  struct std___Deque_base_int__std__allocator_int__* t1291 = this1287;
  struct std__allocator_int___ r1292 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1291);
  __map_alloc1290 = r1292;
  unsigned long t1293 = __n1288;
  int** r1294 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1290, t1293);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1289 = r1294;
  int** t1295 = __retval1289;
  return t1295;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1296) {
bb1297:
  struct std____new_allocator_int_* this1298;
  unsigned long __retval1299;
  this1298 = v1296;
  struct std____new_allocator_int_* t1300 = this1298;
  unsigned long c1301 = 9223372036854775807;
  unsigned long c1302 = 4;
  unsigned long b1303 = c1301 / c1302;
  __retval1299 = b1303;
  unsigned long t1304 = __retval1299;
  return t1304;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1305, unsigned long v1306, void* v1307) {
bb1308:
  struct std____new_allocator_int_* this1309;
  unsigned long __n1310;
  void* unnamed1311;
  int* __retval1312;
  this1309 = v1305;
  __n1310 = v1306;
  unnamed1311 = v1307;
  struct std____new_allocator_int_* t1313 = this1309;
    unsigned long t1314 = __n1310;
    unsigned long r1315 = std____new_allocator_int____M_max_size___const(t1313);
    _Bool c1316 = ((t1314 > r1315)) ? 1 : 0;
    if (c1316) {
        unsigned long t1317 = __n1310;
        unsigned long c1318 = -1;
        unsigned long c1319 = 4;
        unsigned long b1320 = c1318 / c1319;
        _Bool c1321 = ((t1317 > b1320)) ? 1 : 0;
        if (c1321) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1322 = 4;
    unsigned long c1323 = 16;
    _Bool c1324 = ((c1322 > c1323)) ? 1 : 0;
    if (c1324) {
      unsigned long __al1325;
      unsigned long c1326 = 4;
      __al1325 = c1326;
      unsigned long t1327 = __n1310;
      unsigned long c1328 = 4;
      unsigned long b1329 = t1327 * c1328;
      unsigned long t1330 = __al1325;
      void* r1331 = operator_new_2(b1329, t1330);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1332 = (int*)r1331;
      __retval1312 = cast1332;
      int* t1333 = __retval1312;
      return t1333;
    }
  unsigned long t1334 = __n1310;
  unsigned long c1335 = 4;
  unsigned long b1336 = t1334 * c1335;
  void* r1337 = operator_new(b1336);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1338 = (int*)r1337;
  __retval1312 = cast1338;
  int* t1339 = __retval1312;
  return t1339;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1340, unsigned long v1341) {
bb1342:
  struct std__allocator_int_* this1343;
  unsigned long __n1344;
  int* __retval1345;
  this1343 = v1340;
  __n1344 = v1341;
  struct std__allocator_int_* t1346 = this1343;
    _Bool r1347 = std____is_constant_evaluated();
    if (r1347) {
        unsigned long t1348 = __n1344;
        unsigned long c1349 = 4;
        unsigned long ovr1350;
        _Bool ovf1351 = __builtin_mul_overflow(t1348, c1349, &ovr1350);
        __n1344 = ovr1350;
        if (ovf1351) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1352 = __n1344;
      void* r1353 = operator_new(t1352);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1354 = (int*)r1353;
      __retval1345 = cast1354;
      int* t1355 = __retval1345;
      return t1355;
    }
  struct std____new_allocator_int_* base1356 = (struct std____new_allocator_int_*)((char *)t1346 + 0);
  unsigned long t1357 = __n1344;
  void* c1358 = ((void*)0);
  int* r1359 = std____new_allocator_int___allocate(base1356, t1357, c1358);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1345 = r1359;
  int* t1360 = __retval1345;
  return t1360;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1361, unsigned long v1362) {
bb1363:
  struct std__allocator_int_* __a1364;
  unsigned long __n1365;
  int* __retval1366;
  __a1364 = v1361;
  __n1365 = v1362;
  struct std__allocator_int_* t1367 = __a1364;
  unsigned long t1368 = __n1365;
  int* r1369 = std__allocator_int___allocate(t1367, t1368);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1366 = r1369;
  int* t1370 = __retval1366;
  return t1370;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1371) {
bb1372:
  struct std___Deque_base_int__std__allocator_int__* this1373;
  int* __retval1374;
  this1373 = v1371;
  struct std___Deque_base_int__std__allocator_int__* t1375 = this1373;
  struct std__allocator_int_* base1376 = (struct std__allocator_int_*)((char *)&(t1375->_M_impl) + 0);
  unsigned long c1377 = 4;
  unsigned long r1378 = std____deque_buf_size(c1377);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1379 = std__allocator_traits_std__allocator_int_____allocate(base1376, r1378);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1374 = r1379;
  int* t1380 = __retval1374;
  return t1380;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1381, int** v1382, int** v1383) {
bb1384:
  struct std___Deque_base_int__std__allocator_int__* this1385;
  int** __nstart1386;
  int** __nfinish1387;
  int** __cur1388;
  this1385 = v1381;
  __nstart1386 = v1382;
  __nfinish1387 = v1383;
  struct std___Deque_base_int__std__allocator_int__* t1389 = this1385;
        int** t1391 = __nstart1386;
        __cur1388 = t1391;
        while (1) {
          int** t1393 = __cur1388;
          int** t1394 = __nfinish1387;
          _Bool c1395 = ((t1393 < t1394)) ? 1 : 0;
          if (!c1395) break;
          int* r1396 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1389);
          if (__cir_exc_active) {
            goto cir_try_dispatch1390;
          }
          int** t1397 = __cur1388;
          *t1397 = r1396;
        for_step1392: ;
          int** t1398 = __cur1388;
          int c1399 = 1;
          int** ptr1400 = &(t1398)[c1399];
          __cur1388 = ptr1400;
        }
    cir_try_dispatch1390: ;
    if (__cir_exc_active) {
    {
      int ca_tok1401 = 0;
      void* ca_exn1402 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1403 = __nstart1386;
        int** t1404 = __cur1388;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1389, t1403, t1404);
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

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1405:
  unsigned long __retval1406;
  unsigned long c1407 = 4;
  unsigned long r1408 = std____deque_buf_size(c1407);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1406 = r1408;
  unsigned long t1409 = __retval1406;
  return t1409;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1410, int** v1411) {
bb1412:
  struct std___Deque_iterator_int__int____int___* this1413;
  int** __new_node1414;
  this1413 = v1410;
  __new_node1414 = v1411;
  struct std___Deque_iterator_int__int____int___* t1415 = this1413;
  int** t1416 = __new_node1414;
  t1415->_M_node = t1416;
  int** t1417 = __new_node1414;
  int* t1418 = *t1417;
  t1415->_M_first = t1418;
  int* t1419 = t1415->_M_first;
  unsigned long r1420 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1421 = (long)r1420;
  int* ptr1422 = &(t1419)[cast1421];
  t1415->_M_last = ptr1422;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1423, unsigned long v1424) {
bb1425:
  struct std___Deque_base_int__std__allocator_int__* this1426;
  unsigned long __num_elements1427;
  unsigned long __num_nodes1428;
  unsigned long ref_tmp01429;
  unsigned long ref_tmp11430;
  int** __nstart1431;
  int** __nfinish1432;
  this1426 = v1423;
  __num_elements1427 = v1424;
  struct std___Deque_base_int__std__allocator_int__* t1433 = this1426;
  unsigned long t1434 = __num_elements1427;
  unsigned long c1435 = 4;
  unsigned long r1436 = std____deque_buf_size(c1435);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1437 = t1434 / r1436;
  unsigned long c1438 = 1;
  unsigned long b1439 = b1437 + c1438;
  __num_nodes1428 = b1439;
  unsigned long c1440 = 8;
  ref_tmp01429 = c1440;
  unsigned long t1441 = __num_nodes1428;
  unsigned long c1442 = 2;
  unsigned long b1443 = t1441 + c1442;
  ref_tmp11430 = b1443;
  unsigned long* r1444 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01429, &ref_tmp11430);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1445 = *r1444;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1446 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  base1446->_M_map_size = t1445;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1447 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  unsigned long t1448 = base1447->_M_map_size;
  int** r1449 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1433, t1448);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1450 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  base1450->_M_map = r1449;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1451 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  int** t1452 = base1451->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1453 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  unsigned long t1454 = base1453->_M_map_size;
  unsigned long t1455 = __num_nodes1428;
  unsigned long b1456 = t1454 - t1455;
  unsigned long c1457 = 2;
  unsigned long b1458 = b1456 / c1457;
  int** ptr1459 = &(t1452)[b1458];
  __nstart1431 = ptr1459;
  int** t1460 = __nstart1431;
  unsigned long t1461 = __num_nodes1428;
  int** ptr1462 = &(t1460)[t1461];
  __nfinish1432 = ptr1462;
      int** t1464 = __nstart1431;
      int** t1465 = __nfinish1432;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1433, t1464, t1465);
      if (__cir_exc_active) {
        goto cir_try_dispatch1463;
      }
    cir_try_dispatch1463: ;
    if (__cir_exc_active) {
    {
      int ca_tok1466 = 0;
      void* ca_exn1467 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1468 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
        int** t1469 = base1468->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1470 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
        unsigned long t1471 = base1470->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1433, t1469, t1471);
        int** c1472 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1473 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
        base1473->_M_map = c1472;
        unsigned long c1474 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1475 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
        base1475->_M_map_size = c1474;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1476 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  int** t1477 = __nstart1431;
  std___Deque_iterator_int__int___int_____M_set_node(&base1476->_M_start, t1477);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1478 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  int** t1479 = __nfinish1432;
  int c1480 = -1;
  int** ptr1481 = &(t1479)[c1480];
  std___Deque_iterator_int__int___int_____M_set_node(&base1478->_M_finish, ptr1481);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1482 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  int* t1483 = base1482->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1484 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  base1484->_M_start._M_cur = t1483;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1485 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  int* t1486 = base1485->_M_finish._M_first;
  unsigned long t1487 = __num_elements1427;
  unsigned long c1488 = 4;
  unsigned long r1489 = std____deque_buf_size(c1488);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1490 = t1487 % r1489;
  int* ptr1491 = &(t1486)[b1490];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1492 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1433->_M_impl) + 0);
  base1492->_M_finish._M_cur = ptr1491;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1493) {
bb1494:
  struct std___Deque_base_int__std__allocator_int__* this1495;
  this1495 = v1493;
  struct std___Deque_base_int__std__allocator_int__* t1496 = this1495;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1496->_M_impl);
    unsigned long c1497 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1496, c1497);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1496->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1498) {
bb1499:
  struct std____new_allocator_int_* this1500;
  this1500 = v1498;
  struct std____new_allocator_int_* t1501 = this1500;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1502) {
bb1503:
  struct std__allocator_int_* this1504;
  this1504 = v1502;
  struct std__allocator_int_* t1505 = this1504;
  struct std____new_allocator_int_* base1506 = (struct std____new_allocator_int_*)((char *)t1505 + 0);
  std____new_allocator_int_____new_allocator(base1506);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1507) {
bb1508:
  struct std___Deque_iterator_int__int____int___* this1509;
  this1509 = v1507;
  struct std___Deque_iterator_int__int____int___* t1510 = this1509;
  int* c1511 = ((void*)0);
  t1510->_M_cur = c1511;
  int* c1512 = ((void*)0);
  t1510->_M_first = c1512;
  int* c1513 = ((void*)0);
  t1510->_M_last = c1513;
  int** c1514 = ((void*)0);
  t1510->_M_node = c1514;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1515) {
bb1516:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1517;
  this1517 = v1515;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1518 = this1517;
  int** c1519 = ((void*)0);
  t1518->_M_map = c1519;
  unsigned long c1520 = 0;
  t1518->_M_map_size = c1520;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1518->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1518->_M_finish);
  return;
}

