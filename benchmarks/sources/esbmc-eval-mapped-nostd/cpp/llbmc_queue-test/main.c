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
struct std__queue_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

char _str[15] = "s.front() == i";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_queue-test/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[48] = "cannot create std::deque larger than max_size()";
char _str_3[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv[76] = "reference std::queue<int>::front() [_Tp = int, _Sequence = std::deque<int>]";
char _str_4[15] = "!this->empty()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE3popEv[69] = "void std::queue<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv[76] = "void std::deque<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
void std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
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
void std__queue_int__std__deque_int__std__allocator_int_______push(struct std__queue_int__std__deque_int__std__allocator_int___* p0, int* p1);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
_Bool std__queue_int__std__deque_int__std__allocator_int_______empty___const(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* p0);
int* std__queue_int__std__deque_int__std__allocator_int_______front(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void std__deque_int__std__allocator_int______M_pop_front_aux(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____pop_front(struct std__deque_int__std__allocator_int__* p0);
void std__queue_int__std__deque_int__std__allocator_int_______pop(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
void std__queue_int__std__deque_int__std__allocator_int________queue(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
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

// function: _ZNSt5queueIiSt5dequeIiSaIiEEEC2IS2_vEEv
void std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(struct std__queue_int__std__deque_int__std__allocator_int___* v0) {
bb1:
  struct std__queue_int__std__deque_int__std__allocator_int___* this2;
  this2 = v0;
  struct std__queue_int__std__deque_int__std__allocator_int___* t3 = this2;
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

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE4pushERKi
void std__queue_int__std__deque_int__std__allocator_int_______push(struct std__queue_int__std__deque_int__std__allocator_int___* v648, int* v649) {
bb650:
  struct std__queue_int__std__deque_int__std__allocator_int___* this651;
  int* __x652;
  this651 = v648;
  __x652 = v649;
  struct std__queue_int__std__deque_int__std__allocator_int___* t653 = this651;
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

// function: _ZNKSt5queueIiSt5dequeIiSaIiEEE5emptyEv
_Bool std__queue_int__std__deque_int__std__allocator_int_______empty___const(struct std__queue_int__std__deque_int__std__allocator_int___* v678) {
bb679:
  struct std__queue_int__std__deque_int__std__allocator_int___* this680;
  _Bool __retval681;
  this680 = v678;
  struct std__queue_int__std__deque_int__std__allocator_int___* t682 = this680;
  _Bool r683 = std__deque_int__std__allocator_int_____empty___const(&t682->c);
  __retval681 = r683;
  _Bool t684 = __retval681;
  return t684;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v685) {
bb686:
  struct std___Deque_iterator_int__int____int___* this687;
  int* __retval688;
  this687 = v685;
  struct std___Deque_iterator_int__int____int___* t689 = this687;
  int* t690 = t689->_M_cur;
  __retval688 = t690;
  int* t691 = __retval688;
  return t691;
}

// function: _ZNSt5dequeIiSaIiEE5frontEv
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* v692) {
bb693:
  struct std__deque_int__std__allocator_int__* this694;
  int* __retval695;
  struct std___Deque_iterator_int__int____int___ ref_tmp0696;
  this694 = v692;
  struct std__deque_int__std__allocator_int__* t697 = this694;
    do {
          _Bool r698 = std__deque_int__std__allocator_int_____empty___const(t697);
          if (r698) {
            char* cast699 = (char*)&(_str_5);
            int c700 = 1513;
            char* cast701 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv);
            char* cast702 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast699, c700, cast701, cast702);
          }
      _Bool c703 = 0;
      if (!c703) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r704 = std__deque_int__std__allocator_int_____begin(t697);
  ref_tmp0696 = r704;
  int* r705 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0696);
  __retval695 = r705;
  int* t706 = __retval695;
  return t706;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv
int* std__queue_int__std__deque_int__std__allocator_int_______front(struct std__queue_int__std__deque_int__std__allocator_int___* v707) {
bb708:
  struct std__queue_int__std__deque_int__std__allocator_int___* this709;
  int* __retval710;
  this709 = v707;
  struct std__queue_int__std__deque_int__std__allocator_int___* t711 = this709;
    do {
          _Bool r712 = std__queue_int__std__deque_int__std__allocator_int_______empty___const(t711);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r712) {
            char* cast713 = (char*)&(_str_3);
            int c714 = 262;
            char* cast715 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv);
            char* cast716 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast713, c714, cast715, cast716);
          }
      _Bool c717 = 0;
      if (!c717) break;
    } while (1);
  int* r718 = std__deque_int__std__allocator_int_____front(&t711->c);
  __retval710 = r718;
  int* t719 = __retval710;
  return t719;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v720, int* v721) {
bb722:
  struct std__allocator_int_* __a723;
  int* __p724;
  __a723 = v720;
  __p724 = v721;
  int* t725 = __p724;
  void_std__destroy_at_int_(t725);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_pop_front_auxEv
void std__deque_int__std__allocator_int______M_pop_front_aux(struct std__deque_int__std__allocator_int__* v726) {
bb727:
  struct std__deque_int__std__allocator_int__* this728;
  this728 = v726;
  struct std__deque_int__std__allocator_int__* t729 = this728;
  struct std___Deque_base_int__std__allocator_int__* base730 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std__allocator_int_* r731 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base730);
  struct std___Deque_base_int__std__allocator_int__* base732 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base733 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base732->_M_impl) + 0);
  int* t734 = base733->_M_start._M_cur;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(r731, t734);
  struct std___Deque_base_int__std__allocator_int__* base735 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std___Deque_base_int__std__allocator_int__* base736 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base737 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base736->_M_impl) + 0);
  int* t738 = base737->_M_start._M_first;
  std___Deque_base_int__std__allocator_int______M_deallocate_node(base735, t738);
  struct std___Deque_base_int__std__allocator_int__* base739 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base740 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base739->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base741 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base742 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base741->_M_impl) + 0);
  int** t743 = base742->_M_start._M_node;
  int c744 = 1;
  int** ptr745 = &(t743)[c744];
  std___Deque_iterator_int__int___int_____M_set_node(&base740->_M_start, ptr745);
  struct std___Deque_base_int__std__allocator_int__* base746 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base747 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base746->_M_impl) + 0);
  int* t748 = base747->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int__* base749 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base750 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base749->_M_impl) + 0);
  base750->_M_start._M_cur = t748;
  return;
}

// function: _ZNSt5dequeIiSaIiEE9pop_frontEv
void std__deque_int__std__allocator_int_____pop_front(struct std__deque_int__std__allocator_int__* v751) {
bb752:
  struct std__deque_int__std__allocator_int__* this753;
  this753 = v751;
  struct std__deque_int__std__allocator_int__* t754 = this753;
    do {
          _Bool r755 = std__deque_int__std__allocator_int_____empty___const(t754);
          if (r755) {
            char* cast756 = (char*)&(_str_5);
            int c757 = 1643;
            char* cast758 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv);
            char* cast759 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast756, c757, cast758, cast759);
          }
      _Bool c760 = 0;
      if (!c760) break;
    } while (1);
    struct std___Deque_base_int__std__allocator_int__* base761 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t754 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base762 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base761->_M_impl) + 0);
    int* t763 = base762->_M_start._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base764 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t754 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base765 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base764->_M_impl) + 0);
    int* t766 = base765->_M_start._M_last;
    int c767 = -1;
    int* ptr768 = &(t766)[c767];
    _Bool c769 = ((t763 != ptr768)) ? 1 : 0;
    if (c769) {
      struct std___Deque_base_int__std__allocator_int__* base770 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t754 + 0);
      struct std__allocator_int_* r771 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base770);
      struct std___Deque_base_int__std__allocator_int__* base772 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t754 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base773 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base772->_M_impl) + 0);
      int* t774 = base773->_M_start._M_cur;
      void_std__allocator_traits_std__allocator_int_____destroy_int_(r771, t774);
      struct std___Deque_base_int__std__allocator_int__* base775 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t754 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base776 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base775->_M_impl) + 0);
      int* t777 = base776->_M_start._M_cur;
      int c778 = 1;
      int* ptr779 = &(t777)[c778];
      base776->_M_start._M_cur = ptr779;
    } else {
      std__deque_int__std__allocator_int______M_pop_front_aux(t754);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE3popEv
void std__queue_int__std__deque_int__std__allocator_int_______pop(struct std__queue_int__std__deque_int__std__allocator_int___* v780) {
bb781:
  struct std__queue_int__std__deque_int__std__allocator_int___* this782;
  this782 = v780;
  struct std__queue_int__std__deque_int__std__allocator_int___* t783 = this782;
    do {
          _Bool r784 = std__queue_int__std__deque_int__std__allocator_int_______empty___const(t783);
          if (__cir_exc_active) {
            return;
          }
          if (r784) {
            char* cast785 = (char*)&(_str_3);
            int c786 = 359;
            char* cast787 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE3popEv);
            char* cast788 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast785, c786, cast787, cast788);
          }
      _Bool c789 = 0;
      if (!c789) break;
    } while (1);
  std__deque_int__std__allocator_int_____pop_front(&t783->c);
  return;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEED2Ev
void std__queue_int__std__deque_int__std__allocator_int________queue(struct std__queue_int__std__deque_int__std__allocator_int___* v790) {
bb791:
  struct std__queue_int__std__deque_int__std__allocator_int___* this792;
  this792 = v790;
  struct std__queue_int__std__deque_int__std__allocator_int___* t793 = this792;
  {
    std__deque_int__std__allocator_int______deque(&t793->c);
  }
  return;
}

// function: main
int main() {
bb794:
  int __retval795;
  struct std__queue_int__std__deque_int__std__allocator_int___ s796;
  int c797 = 0;
  __retval795 = c797;
  std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(&s796);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      int i798;
      int c799 = 0;
      i798 = c799;
      while (1) {
        int t801 = i798;
        int c802 = 10;
        _Bool c803 = ((t801 < c802)) ? 1 : 0;
        if (!c803) break;
          std__queue_int__std__deque_int__std__allocator_int_______push(&s796, &i798);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&s796);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      for_step800: ;
        int t804 = i798;
        int u805 = t804 + 1;
        i798 = u805;
      }
      int i806;
      int c807 = 0;
      i806 = c807;
      while (1) {
        int t809 = i806;
        int c810 = 10;
        _Bool c811 = ((t809 < c810)) ? 1 : 0;
        if (!c811) break;
          int* r812 = std__queue_int__std__deque_int__std__allocator_int_______front(&s796);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&s796);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t813 = *r812;
          int t814 = i806;
          _Bool c815 = ((t813 == t814)) ? 1 : 0;
          if (c815) {
          } else {
            char* cast816 = (char*)&(_str);
            char* c817 = _str_1;
            unsigned int c818 = 20;
            char* cast819 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast816, c817, c818, cast819);
          }
          std__queue_int__std__deque_int__std__allocator_int_______pop(&s796);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&s796);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      for_step808: ;
        int t820 = i806;
        int u821 = t820 + 1;
        i806 = u821;
      }
    int c822 = 0;
    __retval795 = c822;
    int t823 = __retval795;
    int ret_val824 = t823;
    {
      std__queue_int__std__deque_int__std__allocator_int________queue(&s796);
    }
    return ret_val824;
  int t825 = __retval795;
  return t825;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v826) {
bb827:
  struct std__deque_int__std__allocator_int__* this828;
  struct std___Deque_iterator_int__int____int___ agg_tmp0829;
  struct std___Deque_iterator_int__int____int___ agg_tmp1830;
  this828 = v826;
  struct std__deque_int__std__allocator_int__* t831 = this828;
    struct std___Deque_iterator_int__int____int___ r832 = std__deque_int__std__allocator_int_____begin(t831);
    agg_tmp0829 = r832;
    struct std___Deque_iterator_int__int____int___ r833 = std__deque_int__std__allocator_int_____end(t831);
    agg_tmp1830 = r833;
    struct std___Deque_base_int__std__allocator_int__* base834 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t831 + 0);
    struct std__allocator_int_* r835 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base834);
    struct std___Deque_iterator_int__int____int___ t836 = agg_tmp0829;
    struct std___Deque_iterator_int__int____int___ t837 = agg_tmp1830;
    std__deque_int__std__allocator_int______M_destroy_data(t831, t836, t837, r835);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base838 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t831 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base838);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base839 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t831 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base839);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb840:
  _Bool __retval841;
    _Bool c842 = 0;
    __retval841 = c842;
    _Bool t843 = __retval841;
    return t843;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v844) {
bb845:
  int* __location846;
  __location846 = v844;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v847, int* v848) {
bb849:
  int* __first850;
  int* __last851;
  __first850 = v847;
  __last851 = v848;
      _Bool r852 = std____is_constant_evaluated();
      if (r852) {
          while (1) {
            int* t854 = __first850;
            int* t855 = __last851;
            _Bool c856 = ((t854 != t855)) ? 1 : 0;
            if (!c856) break;
            int* t857 = __first850;
            void_std__destroy_at_int_(t857);
            if (__cir_exc_active) {
              return;
            }
          for_step853: ;
            int* t858 = __first850;
            int c859 = 1;
            int* ptr860 = &(t858)[c859];
            __first850 = ptr860;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v861, int* v862, struct std__allocator_int_* v863) {
bb864:
  int* __first865;
  int* __last866;
  struct std__allocator_int_* unnamed867;
  __first865 = v861;
  __last866 = v862;
  unnamed867 = v863;
  int* t868 = __first865;
  int* t869 = __last866;
  void_std___Destroy_int__(t868, t869);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v870) {
bb871:
  unsigned long __size872;
  unsigned long __retval873;
  __size872 = v870;
  unsigned long t874 = __size872;
  unsigned long c875 = 512;
  _Bool c876 = ((t874 < c875)) ? 1 : 0;
  unsigned long ternary877;
  if (c876) {
    unsigned long c878 = 512;
    unsigned long t879 = __size872;
    unsigned long b880 = c878 / t879;
    ternary877 = (unsigned long)b880;
  } else {
    unsigned long c881 = 1;
    ternary877 = (unsigned long)c881;
  }
  __retval873 = ternary877;
  unsigned long t882 = __retval873;
  return t882;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb883:
  unsigned long __retval884;
  unsigned long c885 = 4;
  unsigned long r886 = std____deque_buf_size(c885);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval884 = r886;
  unsigned long t887 = __retval884;
  return t887;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v888, struct std___Deque_iterator_int__int____int___ v889, struct std___Deque_iterator_int__int____int___ v890) {
bb891:
  struct std__deque_int__std__allocator_int__* this892;
  struct std___Deque_iterator_int__int____int___ __first893;
  struct std___Deque_iterator_int__int____int___ __last894;
  this892 = v888;
  __first893 = v889;
  __last894 = v890;
  struct std__deque_int__std__allocator_int__* t895 = this892;
    int** __node896;
    int** t897 = __first893._M_node;
    int c898 = 1;
    int** ptr899 = &(t897)[c898];
    __node896 = ptr899;
    while (1) {
      int** t901 = __node896;
      int** t902 = __last894._M_node;
      _Bool c903 = ((t901 < t902)) ? 1 : 0;
      if (!c903) break;
      int** t904 = __node896;
      int* t905 = *t904;
      int** t906 = __node896;
      int* t907 = *t906;
      unsigned long r908 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr909 = &(t907)[r908];
      struct std___Deque_base_int__std__allocator_int__* base910 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t895 + 0);
      struct std__allocator_int_* r911 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base910);
      void_std___Destroy_int___int_(t905, ptr909, r911);
      if (__cir_exc_active) {
        return;
      }
    for_step900: ;
      int** t912 = __node896;
      int c913 = 1;
      int** ptr914 = &(t912)[c913];
      __node896 = ptr914;
    }
    int** t915 = __first893._M_node;
    int** t916 = __last894._M_node;
    _Bool c917 = ((t915 != t916)) ? 1 : 0;
    if (c917) {
      int* t918 = __first893._M_cur;
      int* t919 = __first893._M_last;
      struct std___Deque_base_int__std__allocator_int__* base920 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t895 + 0);
      struct std__allocator_int_* r921 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base920);
      void_std___Destroy_int___int_(t918, t919, r921);
      if (__cir_exc_active) {
        return;
      }
      int* t922 = __last894._M_first;
      int* t923 = __last894._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base924 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t895 + 0);
      struct std__allocator_int_* r925 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base924);
      void_std___Destroy_int___int_(t922, t923, r925);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t926 = __first893._M_cur;
      int* t927 = __last894._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base928 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t895 + 0);
      struct std__allocator_int_* r929 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base928);
      void_std___Destroy_int___int_(t926, t927, r929);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v930, struct std___Deque_iterator_int__int____int___* v931) {
bb932:
  struct std___Deque_iterator_int__int____int___* this933;
  struct std___Deque_iterator_int__int____int___* __x934;
  this933 = v930;
  __x934 = v931;
  struct std___Deque_iterator_int__int____int___* t935 = this933;
  struct std___Deque_iterator_int__int____int___* t936 = __x934;
  int* t937 = t936->_M_cur;
  t935->_M_cur = t937;
  struct std___Deque_iterator_int__int____int___* t938 = __x934;
  int* t939 = t938->_M_first;
  t935->_M_first = t939;
  struct std___Deque_iterator_int__int____int___* t940 = __x934;
  int* t941 = t940->_M_last;
  t935->_M_last = t941;
  struct std___Deque_iterator_int__int____int___* t942 = __x934;
  int** t943 = t942->_M_node;
  t935->_M_node = t943;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v944, struct std___Deque_iterator_int__int____int___ v945, struct std___Deque_iterator_int__int____int___ v946, struct std__allocator_int_* v947) {
bb948:
  struct std__deque_int__std__allocator_int__* this949;
  struct std___Deque_iterator_int__int____int___ __first950;
  struct std___Deque_iterator_int__int____int___ __last951;
  struct std__allocator_int_* unnamed952;
  this949 = v944;
  __first950 = v945;
  __last951 = v946;
  unnamed952 = v947;
  struct std__deque_int__std__allocator_int__* t953 = this949;
    _Bool c954 = 0;
    if (c954) {
      struct std___Deque_iterator_int__int____int___ agg_tmp0955;
      struct std___Deque_iterator_int__int____int___ agg_tmp1956;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0955, &__first950);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp1956, &__last951);
      struct std___Deque_iterator_int__int____int___ t957 = agg_tmp0955;
      struct std___Deque_iterator_int__int____int___ t958 = agg_tmp1956;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t953, t957, t958);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v959) {
bb960:
  struct std__deque_int__std__allocator_int__* this961;
  struct std___Deque_iterator_int__int____int___ __retval962;
  this961 = v959;
  struct std__deque_int__std__allocator_int__* t963 = this961;
  struct std___Deque_base_int__std__allocator_int__* base964 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t963 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base965 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base964->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval962, &base965->_M_start);
  struct std___Deque_iterator_int__int____int___ t966 = __retval962;
  return t966;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v967) {
bb968:
  struct std__deque_int__std__allocator_int__* this969;
  struct std___Deque_iterator_int__int____int___ __retval970;
  this969 = v967;
  struct std__deque_int__std__allocator_int__* t971 = this969;
  struct std___Deque_base_int__std__allocator_int__* base972 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t971 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base973 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base972->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval970, &base973->_M_finish);
  struct std___Deque_iterator_int__int____int___ t974 = __retval970;
  return t974;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v975) {
bb976:
  struct std___Deque_base_int__std__allocator_int__* this977;
  struct std__allocator_int_* __retval978;
  this977 = v975;
  struct std___Deque_base_int__std__allocator_int__* t979 = this977;
  struct std__allocator_int_* base980 = (struct std__allocator_int_*)((char *)&(t979->_M_impl) + 0);
  __retval978 = base980;
  struct std__allocator_int_* t981 = __retval978;
  return t981;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v982, int* v983, unsigned long v984) {
bb985:
  struct std____new_allocator_int_* this986;
  int* __p987;
  unsigned long __n988;
  this986 = v982;
  __p987 = v983;
  __n988 = v984;
  struct std____new_allocator_int_* t989 = this986;
    unsigned long c990 = 4;
    unsigned long c991 = 16;
    _Bool c992 = ((c990 > c991)) ? 1 : 0;
    if (c992) {
      int* t993 = __p987;
      void* cast994 = (void*)t993;
      unsigned long t995 = __n988;
      unsigned long c996 = 4;
      unsigned long b997 = t995 * c996;
      unsigned long c998 = 4;
      operator_delete_3(cast994, b997, c998);
      return;
    }
  int* t999 = __p987;
  void* cast1000 = (void*)t999;
  unsigned long t1001 = __n988;
  unsigned long c1002 = 4;
  unsigned long b1003 = t1001 * c1002;
  operator_delete_2(cast1000, b1003);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1004, int* v1005, unsigned long v1006) {
bb1007:
  struct std__allocator_int_* this1008;
  int* __p1009;
  unsigned long __n1010;
  this1008 = v1004;
  __p1009 = v1005;
  __n1010 = v1006;
  struct std__allocator_int_* t1011 = this1008;
    _Bool r1012 = std____is_constant_evaluated();
    if (r1012) {
      int* t1013 = __p1009;
      void* cast1014 = (void*)t1013;
      operator_delete(cast1014);
      return;
    }
  struct std____new_allocator_int_* base1015 = (struct std____new_allocator_int_*)((char *)t1011 + 0);
  int* t1016 = __p1009;
  unsigned long t1017 = __n1010;
  std____new_allocator_int___deallocate(base1015, t1016, t1017);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1018, int* v1019, unsigned long v1020) {
bb1021:
  struct std__allocator_int_* __a1022;
  int* __p1023;
  unsigned long __n1024;
  __a1022 = v1018;
  __p1023 = v1019;
  __n1024 = v1020;
  struct std__allocator_int_* t1025 = __a1022;
  int* t1026 = __p1023;
  unsigned long t1027 = __n1024;
  std__allocator_int___deallocate(t1025, t1026, t1027);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1028, int* v1029) {
bb1030:
  struct std___Deque_base_int__std__allocator_int__* this1031;
  int* __p1032;
  this1031 = v1028;
  __p1032 = v1029;
  struct std___Deque_base_int__std__allocator_int__* t1033 = this1031;
  struct std__allocator_int_* base1034 = (struct std__allocator_int_*)((char *)&(t1033->_M_impl) + 0);
  int* t1035 = __p1032;
  unsigned long c1036 = 4;
  unsigned long r1037 = std____deque_buf_size(c1036);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1034, t1035, r1037);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1038, int** v1039, int** v1040) {
bb1041:
  struct std___Deque_base_int__std__allocator_int__* this1042;
  int** __nstart1043;
  int** __nfinish1044;
  this1042 = v1038;
  __nstart1043 = v1039;
  __nfinish1044 = v1040;
  struct std___Deque_base_int__std__allocator_int__* t1045 = this1042;
    int** __n1046;
    int** t1047 = __nstart1043;
    __n1046 = t1047;
    while (1) {
      int** t1049 = __n1046;
      int** t1050 = __nfinish1044;
      _Bool c1051 = ((t1049 < t1050)) ? 1 : 0;
      if (!c1051) break;
      int** t1052 = __n1046;
      int* t1053 = *t1052;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1045, t1053);
    for_step1048: ;
      int** t1054 = __n1046;
      int c1055 = 1;
      int** ptr1056 = &(t1054)[c1055];
      __n1046 = ptr1056;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1057) {
bb1058:
  struct std___Deque_base_int__std__allocator_int__* this1059;
  struct std__allocator_int_* __retval1060;
  this1059 = v1057;
  struct std___Deque_base_int__std__allocator_int__* t1061 = this1059;
  struct std__allocator_int_* base1062 = (struct std__allocator_int_*)((char *)&(t1061->_M_impl) + 0);
  __retval1060 = base1062;
  struct std__allocator_int_* t1063 = __retval1060;
  return t1063;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1064, struct std__allocator_int_* v1065) {
bb1066:
  struct std__allocator_int___* this1067;
  struct std__allocator_int_* unnamed1068;
  this1067 = v1064;
  unnamed1068 = v1065;
  struct std__allocator_int___* t1069 = this1067;
  struct std____new_allocator_int___* base1070 = (struct std____new_allocator_int___*)((char *)t1069 + 0);
  std____new_allocator_int______new_allocator(base1070);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1071) {
bb1072:
  struct std___Deque_base_int__std__allocator_int__* this1073;
  struct std__allocator_int___ __retval1074;
  this1073 = v1071;
  struct std___Deque_base_int__std__allocator_int__* t1075 = this1073;
  struct std__allocator_int_* r1076 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1075);
  std__allocator_int____allocator_int_(&__retval1074, r1076);
  struct std__allocator_int___ t1077 = __retval1074;
  return t1077;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1078, int** v1079, unsigned long v1080) {
bb1081:
  struct std____new_allocator_int___* this1082;
  int** __p1083;
  unsigned long __n1084;
  this1082 = v1078;
  __p1083 = v1079;
  __n1084 = v1080;
  struct std____new_allocator_int___* t1085 = this1082;
    unsigned long c1086 = 8;
    unsigned long c1087 = 16;
    _Bool c1088 = ((c1086 > c1087)) ? 1 : 0;
    if (c1088) {
      int** t1089 = __p1083;
      void* cast1090 = (void*)t1089;
      unsigned long t1091 = __n1084;
      unsigned long c1092 = 8;
      unsigned long b1093 = t1091 * c1092;
      unsigned long c1094 = 8;
      operator_delete_3(cast1090, b1093, c1094);
      return;
    }
  int** t1095 = __p1083;
  void* cast1096 = (void*)t1095;
  unsigned long t1097 = __n1084;
  unsigned long c1098 = 8;
  unsigned long b1099 = t1097 * c1098;
  operator_delete_2(cast1096, b1099);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1100, int** v1101, unsigned long v1102) {
bb1103:
  struct std__allocator_int___* this1104;
  int** __p1105;
  unsigned long __n1106;
  this1104 = v1100;
  __p1105 = v1101;
  __n1106 = v1102;
  struct std__allocator_int___* t1107 = this1104;
    _Bool r1108 = std____is_constant_evaluated();
    if (r1108) {
      int** t1109 = __p1105;
      void* cast1110 = (void*)t1109;
      operator_delete(cast1110);
      return;
    }
  struct std____new_allocator_int___* base1111 = (struct std____new_allocator_int___*)((char *)t1107 + 0);
  int** t1112 = __p1105;
  unsigned long t1113 = __n1106;
  std____new_allocator_int____deallocate(base1111, t1112, t1113);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1114, int** v1115, unsigned long v1116) {
bb1117:
  struct std__allocator_int___* __a1118;
  int** __p1119;
  unsigned long __n1120;
  __a1118 = v1114;
  __p1119 = v1115;
  __n1120 = v1116;
  struct std__allocator_int___* t1121 = __a1118;
  int** t1122 = __p1119;
  unsigned long t1123 = __n1120;
  std__allocator_int____deallocate(t1121, t1122, t1123);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1124, int** v1125, unsigned long v1126) {
bb1127:
  struct std___Deque_base_int__std__allocator_int__* this1128;
  int** __p1129;
  unsigned long __n1130;
  struct std__allocator_int___ __map_alloc1131;
  this1128 = v1124;
  __p1129 = v1125;
  __n1130 = v1126;
  struct std___Deque_base_int__std__allocator_int__* t1132 = this1128;
  struct std__allocator_int___ r1133 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1132);
  __map_alloc1131 = r1133;
  int** t1134 = __p1129;
  unsigned long t1135 = __n1130;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1131, t1134, t1135);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1136) {
bb1137:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1138;
  this1138 = v1136;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1139 = this1138;
  {
    struct std__allocator_int_* base1140 = (struct std__allocator_int_*)((char *)t1139 + 0);
    std__allocator_int____allocator(base1140);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1141) {
bb1142:
  struct std___Deque_base_int__std__allocator_int__* this1143;
  this1143 = v1141;
  struct std___Deque_base_int__std__allocator_int__* t1144 = this1143;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1145 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1144->_M_impl) + 0);
      int** t1146 = base1145->_M_map;
      _Bool cast1147 = (_Bool)t1146;
      if (cast1147) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1148 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1144->_M_impl) + 0);
        int** t1149 = base1148->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1150 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1144->_M_impl) + 0);
        int** t1151 = base1150->_M_finish._M_node;
        int c1152 = 1;
        int** ptr1153 = &(t1151)[c1152];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1144, t1149, ptr1153);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1154 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1144->_M_impl) + 0);
        int** t1155 = base1154->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1156 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1144->_M_impl) + 0);
        unsigned long t1157 = base1156->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1144, t1155, t1157);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1144->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1158) {
bb1159:
  struct std____new_allocator_int___* this1160;
  this1160 = v1158;
  struct std____new_allocator_int___* t1161 = this1160;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1162) {
bb1163:
  struct std__allocator_int_* this1164;
  this1164 = v1162;
  struct std__allocator_int_* t1165 = this1164;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1166) {
bb1167:
  struct std__deque_int__std__allocator_int__* this1168;
  this1168 = v1166;
  struct std__deque_int__std__allocator_int__* t1169 = this1168;
  struct std___Deque_base_int__std__allocator_int__* base1170 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1169 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base1170);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1171) {
bb1172:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1173;
  this1173 = v1171;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1174 = this1173;
  struct std__allocator_int_* base1175 = (struct std__allocator_int_*)((char *)t1174 + 0);
  std__allocator_int___allocator(base1175);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1176 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1174 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1176);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1177, unsigned long* v1178) {
bb1179:
  unsigned long* __a1180;
  unsigned long* __b1181;
  unsigned long* __retval1182;
  __a1180 = v1177;
  __b1181 = v1178;
    unsigned long* t1183 = __a1180;
    unsigned long t1184 = *t1183;
    unsigned long* t1185 = __b1181;
    unsigned long t1186 = *t1185;
    _Bool c1187 = ((t1184 < t1186)) ? 1 : 0;
    if (c1187) {
      unsigned long* t1188 = __b1181;
      __retval1182 = t1188;
      unsigned long* t1189 = __retval1182;
      return t1189;
    }
  unsigned long* t1190 = __a1180;
  __retval1182 = t1190;
  unsigned long* t1191 = __retval1182;
  return t1191;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1192) {
bb1193:
  struct std____new_allocator_int___* this1194;
  unsigned long __retval1195;
  this1194 = v1192;
  struct std____new_allocator_int___* t1196 = this1194;
  unsigned long c1197 = 9223372036854775807;
  unsigned long c1198 = 8;
  unsigned long b1199 = c1197 / c1198;
  __retval1195 = b1199;
  unsigned long t1200 = __retval1195;
  return t1200;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1201, unsigned long v1202, void* v1203) {
bb1204:
  struct std____new_allocator_int___* this1205;
  unsigned long __n1206;
  void* unnamed1207;
  int** __retval1208;
  this1205 = v1201;
  __n1206 = v1202;
  unnamed1207 = v1203;
  struct std____new_allocator_int___* t1209 = this1205;
    unsigned long t1210 = __n1206;
    unsigned long r1211 = std____new_allocator_int_____M_max_size___const(t1209);
    _Bool c1212 = ((t1210 > r1211)) ? 1 : 0;
    if (c1212) {
        unsigned long t1213 = __n1206;
        unsigned long c1214 = -1;
        unsigned long c1215 = 8;
        unsigned long b1216 = c1214 / c1215;
        _Bool c1217 = ((t1213 > b1216)) ? 1 : 0;
        if (c1217) {
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
    unsigned long c1218 = 8;
    unsigned long c1219 = 16;
    _Bool c1220 = ((c1218 > c1219)) ? 1 : 0;
    if (c1220) {
      unsigned long __al1221;
      unsigned long c1222 = 8;
      __al1221 = c1222;
      unsigned long t1223 = __n1206;
      unsigned long c1224 = 8;
      unsigned long b1225 = t1223 * c1224;
      unsigned long t1226 = __al1221;
      void* r1227 = operator_new_2(b1225, t1226);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1228 = (int**)r1227;
      __retval1208 = cast1228;
      int** t1229 = __retval1208;
      return t1229;
    }
  unsigned long t1230 = __n1206;
  unsigned long c1231 = 8;
  unsigned long b1232 = t1230 * c1231;
  void* r1233 = operator_new(b1232);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1234 = (int**)r1233;
  __retval1208 = cast1234;
  int** t1235 = __retval1208;
  return t1235;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1236, unsigned long v1237) {
bb1238:
  struct std__allocator_int___* this1239;
  unsigned long __n1240;
  int** __retval1241;
  this1239 = v1236;
  __n1240 = v1237;
  struct std__allocator_int___* t1242 = this1239;
    _Bool r1243 = std____is_constant_evaluated();
    if (r1243) {
        unsigned long t1244 = __n1240;
        unsigned long c1245 = 8;
        unsigned long ovr1246;
        _Bool ovf1247 = __builtin_mul_overflow(t1244, c1245, &ovr1246);
        __n1240 = ovr1246;
        if (ovf1247) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1248 = __n1240;
      void* r1249 = operator_new(t1248);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1250 = (int**)r1249;
      __retval1241 = cast1250;
      int** t1251 = __retval1241;
      return t1251;
    }
  struct std____new_allocator_int___* base1252 = (struct std____new_allocator_int___*)((char *)t1242 + 0);
  unsigned long t1253 = __n1240;
  void* c1254 = ((void*)0);
  int** r1255 = std____new_allocator_int____allocate(base1252, t1253, c1254);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1241 = r1255;
  int** t1256 = __retval1241;
  return t1256;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1257, unsigned long v1258) {
bb1259:
  struct std__allocator_int___* __a1260;
  unsigned long __n1261;
  int** __retval1262;
  __a1260 = v1257;
  __n1261 = v1258;
  struct std__allocator_int___* t1263 = __a1260;
  unsigned long t1264 = __n1261;
  int** r1265 = std__allocator_int____allocate(t1263, t1264);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1262 = r1265;
  int** t1266 = __retval1262;
  return t1266;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1267, unsigned long v1268) {
bb1269:
  struct std___Deque_base_int__std__allocator_int__* this1270;
  unsigned long __n1271;
  int** __retval1272;
  struct std__allocator_int___ __map_alloc1273;
  this1270 = v1267;
  __n1271 = v1268;
  struct std___Deque_base_int__std__allocator_int__* t1274 = this1270;
  struct std__allocator_int___ r1275 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1274);
  __map_alloc1273 = r1275;
  unsigned long t1276 = __n1271;
  int** r1277 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1273, t1276);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1272 = r1277;
  int** t1278 = __retval1272;
  return t1278;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1279) {
bb1280:
  struct std____new_allocator_int_* this1281;
  unsigned long __retval1282;
  this1281 = v1279;
  struct std____new_allocator_int_* t1283 = this1281;
  unsigned long c1284 = 9223372036854775807;
  unsigned long c1285 = 4;
  unsigned long b1286 = c1284 / c1285;
  __retval1282 = b1286;
  unsigned long t1287 = __retval1282;
  return t1287;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1288, unsigned long v1289, void* v1290) {
bb1291:
  struct std____new_allocator_int_* this1292;
  unsigned long __n1293;
  void* unnamed1294;
  int* __retval1295;
  this1292 = v1288;
  __n1293 = v1289;
  unnamed1294 = v1290;
  struct std____new_allocator_int_* t1296 = this1292;
    unsigned long t1297 = __n1293;
    unsigned long r1298 = std____new_allocator_int____M_max_size___const(t1296);
    _Bool c1299 = ((t1297 > r1298)) ? 1 : 0;
    if (c1299) {
        unsigned long t1300 = __n1293;
        unsigned long c1301 = -1;
        unsigned long c1302 = 4;
        unsigned long b1303 = c1301 / c1302;
        _Bool c1304 = ((t1300 > b1303)) ? 1 : 0;
        if (c1304) {
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
    unsigned long c1305 = 4;
    unsigned long c1306 = 16;
    _Bool c1307 = ((c1305 > c1306)) ? 1 : 0;
    if (c1307) {
      unsigned long __al1308;
      unsigned long c1309 = 4;
      __al1308 = c1309;
      unsigned long t1310 = __n1293;
      unsigned long c1311 = 4;
      unsigned long b1312 = t1310 * c1311;
      unsigned long t1313 = __al1308;
      void* r1314 = operator_new_2(b1312, t1313);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1315 = (int*)r1314;
      __retval1295 = cast1315;
      int* t1316 = __retval1295;
      return t1316;
    }
  unsigned long t1317 = __n1293;
  unsigned long c1318 = 4;
  unsigned long b1319 = t1317 * c1318;
  void* r1320 = operator_new(b1319);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1321 = (int*)r1320;
  __retval1295 = cast1321;
  int* t1322 = __retval1295;
  return t1322;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1323, unsigned long v1324) {
bb1325:
  struct std__allocator_int_* this1326;
  unsigned long __n1327;
  int* __retval1328;
  this1326 = v1323;
  __n1327 = v1324;
  struct std__allocator_int_* t1329 = this1326;
    _Bool r1330 = std____is_constant_evaluated();
    if (r1330) {
        unsigned long t1331 = __n1327;
        unsigned long c1332 = 4;
        unsigned long ovr1333;
        _Bool ovf1334 = __builtin_mul_overflow(t1331, c1332, &ovr1333);
        __n1327 = ovr1333;
        if (ovf1334) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1335 = __n1327;
      void* r1336 = operator_new(t1335);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1337 = (int*)r1336;
      __retval1328 = cast1337;
      int* t1338 = __retval1328;
      return t1338;
    }
  struct std____new_allocator_int_* base1339 = (struct std____new_allocator_int_*)((char *)t1329 + 0);
  unsigned long t1340 = __n1327;
  void* c1341 = ((void*)0);
  int* r1342 = std____new_allocator_int___allocate(base1339, t1340, c1341);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1328 = r1342;
  int* t1343 = __retval1328;
  return t1343;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1344, unsigned long v1345) {
bb1346:
  struct std__allocator_int_* __a1347;
  unsigned long __n1348;
  int* __retval1349;
  __a1347 = v1344;
  __n1348 = v1345;
  struct std__allocator_int_* t1350 = __a1347;
  unsigned long t1351 = __n1348;
  int* r1352 = std__allocator_int___allocate(t1350, t1351);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1349 = r1352;
  int* t1353 = __retval1349;
  return t1353;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1354) {
bb1355:
  struct std___Deque_base_int__std__allocator_int__* this1356;
  int* __retval1357;
  this1356 = v1354;
  struct std___Deque_base_int__std__allocator_int__* t1358 = this1356;
  struct std__allocator_int_* base1359 = (struct std__allocator_int_*)((char *)&(t1358->_M_impl) + 0);
  unsigned long c1360 = 4;
  unsigned long r1361 = std____deque_buf_size(c1360);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1362 = std__allocator_traits_std__allocator_int_____allocate(base1359, r1361);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1357 = r1362;
  int* t1363 = __retval1357;
  return t1363;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1364, int** v1365, int** v1366) {
bb1367:
  struct std___Deque_base_int__std__allocator_int__* this1368;
  int** __nstart1369;
  int** __nfinish1370;
  int** __cur1371;
  this1368 = v1364;
  __nstart1369 = v1365;
  __nfinish1370 = v1366;
  struct std___Deque_base_int__std__allocator_int__* t1372 = this1368;
        int** t1374 = __nstart1369;
        __cur1371 = t1374;
        while (1) {
          int** t1376 = __cur1371;
          int** t1377 = __nfinish1370;
          _Bool c1378 = ((t1376 < t1377)) ? 1 : 0;
          if (!c1378) break;
          int* r1379 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1372);
          if (__cir_exc_active) {
            goto cir_try_dispatch1373;
          }
          int** t1380 = __cur1371;
          *t1380 = r1379;
        for_step1375: ;
          int** t1381 = __cur1371;
          int c1382 = 1;
          int** ptr1383 = &(t1381)[c1382];
          __cur1371 = ptr1383;
        }
    cir_try_dispatch1373: ;
    if (__cir_exc_active) {
    {
      int ca_tok1384 = 0;
      void* ca_exn1385 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1386 = __nstart1369;
        int** t1387 = __cur1371;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1372, t1386, t1387);
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
bb1388:
  unsigned long __retval1389;
  unsigned long c1390 = 4;
  unsigned long r1391 = std____deque_buf_size(c1390);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1389 = r1391;
  unsigned long t1392 = __retval1389;
  return t1392;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1393, int** v1394) {
bb1395:
  struct std___Deque_iterator_int__int____int___* this1396;
  int** __new_node1397;
  this1396 = v1393;
  __new_node1397 = v1394;
  struct std___Deque_iterator_int__int____int___* t1398 = this1396;
  int** t1399 = __new_node1397;
  t1398->_M_node = t1399;
  int** t1400 = __new_node1397;
  int* t1401 = *t1400;
  t1398->_M_first = t1401;
  int* t1402 = t1398->_M_first;
  unsigned long r1403 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1404 = (long)r1403;
  int* ptr1405 = &(t1402)[cast1404];
  t1398->_M_last = ptr1405;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1406, unsigned long v1407) {
bb1408:
  struct std___Deque_base_int__std__allocator_int__* this1409;
  unsigned long __num_elements1410;
  unsigned long __num_nodes1411;
  unsigned long ref_tmp01412;
  unsigned long ref_tmp11413;
  int** __nstart1414;
  int** __nfinish1415;
  this1409 = v1406;
  __num_elements1410 = v1407;
  struct std___Deque_base_int__std__allocator_int__* t1416 = this1409;
  unsigned long t1417 = __num_elements1410;
  unsigned long c1418 = 4;
  unsigned long r1419 = std____deque_buf_size(c1418);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1420 = t1417 / r1419;
  unsigned long c1421 = 1;
  unsigned long b1422 = b1420 + c1421;
  __num_nodes1411 = b1422;
  unsigned long c1423 = 8;
  ref_tmp01412 = c1423;
  unsigned long t1424 = __num_nodes1411;
  unsigned long c1425 = 2;
  unsigned long b1426 = t1424 + c1425;
  ref_tmp11413 = b1426;
  unsigned long* r1427 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01412, &ref_tmp11413);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1428 = *r1427;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1429 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  base1429->_M_map_size = t1428;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1430 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  unsigned long t1431 = base1430->_M_map_size;
  int** r1432 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1416, t1431);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1433 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  base1433->_M_map = r1432;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1434 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  int** t1435 = base1434->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1436 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  unsigned long t1437 = base1436->_M_map_size;
  unsigned long t1438 = __num_nodes1411;
  unsigned long b1439 = t1437 - t1438;
  unsigned long c1440 = 2;
  unsigned long b1441 = b1439 / c1440;
  int** ptr1442 = &(t1435)[b1441];
  __nstart1414 = ptr1442;
  int** t1443 = __nstart1414;
  unsigned long t1444 = __num_nodes1411;
  int** ptr1445 = &(t1443)[t1444];
  __nfinish1415 = ptr1445;
      int** t1447 = __nstart1414;
      int** t1448 = __nfinish1415;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1416, t1447, t1448);
      if (__cir_exc_active) {
        goto cir_try_dispatch1446;
      }
    cir_try_dispatch1446: ;
    if (__cir_exc_active) {
    {
      int ca_tok1449 = 0;
      void* ca_exn1450 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1451 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
        int** t1452 = base1451->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1453 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
        unsigned long t1454 = base1453->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1416, t1452, t1454);
        int** c1455 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1456 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
        base1456->_M_map = c1455;
        unsigned long c1457 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1458 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
        base1458->_M_map_size = c1457;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1459 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  int** t1460 = __nstart1414;
  std___Deque_iterator_int__int___int_____M_set_node(&base1459->_M_start, t1460);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1461 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  int** t1462 = __nfinish1415;
  int c1463 = -1;
  int** ptr1464 = &(t1462)[c1463];
  std___Deque_iterator_int__int___int_____M_set_node(&base1461->_M_finish, ptr1464);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1465 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  int* t1466 = base1465->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1467 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  base1467->_M_start._M_cur = t1466;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1468 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  int* t1469 = base1468->_M_finish._M_first;
  unsigned long t1470 = __num_elements1410;
  unsigned long c1471 = 4;
  unsigned long r1472 = std____deque_buf_size(c1471);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1473 = t1470 % r1472;
  int* ptr1474 = &(t1469)[b1473];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1475 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1416->_M_impl) + 0);
  base1475->_M_finish._M_cur = ptr1474;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1476) {
bb1477:
  struct std___Deque_base_int__std__allocator_int__* this1478;
  this1478 = v1476;
  struct std___Deque_base_int__std__allocator_int__* t1479 = this1478;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1479->_M_impl);
    unsigned long c1480 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1479, c1480);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1479->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1481) {
bb1482:
  struct std____new_allocator_int_* this1483;
  this1483 = v1481;
  struct std____new_allocator_int_* t1484 = this1483;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1485) {
bb1486:
  struct std__allocator_int_* this1487;
  this1487 = v1485;
  struct std__allocator_int_* t1488 = this1487;
  struct std____new_allocator_int_* base1489 = (struct std____new_allocator_int_*)((char *)t1488 + 0);
  std____new_allocator_int_____new_allocator(base1489);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1490) {
bb1491:
  struct std___Deque_iterator_int__int____int___* this1492;
  this1492 = v1490;
  struct std___Deque_iterator_int__int____int___* t1493 = this1492;
  int* c1494 = ((void*)0);
  t1493->_M_cur = c1494;
  int* c1495 = ((void*)0);
  t1493->_M_first = c1495;
  int* c1496 = ((void*)0);
  t1493->_M_last = c1496;
  int** c1497 = ((void*)0);
  t1493->_M_node = c1497;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1498) {
bb1499:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1500;
  this1500 = v1498;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1501 = this1500;
  int** c1502 = ((void*)0);
  t1501->_M_map = c1502;
  unsigned long c1503 = 0;
  t1501->_M_map_size = c1503;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1501->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1501->_M_finish);
  return;
}

