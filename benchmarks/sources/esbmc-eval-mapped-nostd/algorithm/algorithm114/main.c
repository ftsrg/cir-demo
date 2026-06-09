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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_second[5] = {50, 40, 30, 20, 10};
int __const_main_first[5] = {5, 10, 15, 20, 25};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp;
char _str[11] = "v[5] != 50";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm114/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(struct __gnu_cxx____ops___Iter_less_val* p0, int* p1, int* p2);
void void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(int* p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_val* p4);
void void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(int* p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* p0, int* p1, int* p2);
void void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter* p3);
void void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
void void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap_int___int__(int* p0, int* p1);
void void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____ops___Iter_less_iter p4);
int* int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
int* int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, long p2, struct __gnu_cxx____ops___Iter_less_iter p3);
int int_std____countl_zero_unsigned_long_(unsigned long p0);
int int_std____bit_width_unsigned_long_(unsigned long p0);
long long_std____lg_long_(long p0);
int* int__std____niter_wrap_int__(int** p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int__(int* p0);
int* int__std____copy_move_backward_a_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__move_backward_int___int__(int* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(struct __gnu_cxx____ops___Val_less_iter* p0, int* p1, int* p2);
void void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(int* p0, struct __gnu_cxx____ops___Val_less_iter p1);
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_comp_iter(struct __gnu_cxx____ops___Iter_less_iter p0);
void void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
void void_std__sort_int__(int* p0, int* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____set_symmetric_difference_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p4, struct __gnu_cxx____ops___Iter_less_iter p5);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__set_symmetric_difference_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p4);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
int* int__std____fill_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
int* int__std__fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, struct std__allocator_int_* v7) {
bb8:
  struct std__vector_int__std__allocator_int__* this9;
  unsigned long __n10;
  struct std__allocator_int_* __a11;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std__vector_int__std__allocator_int__* t12 = this9;
  struct std___Vector_base_int__std__allocator_int__* base13 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
  unsigned long t14 = __n10;
  struct std__allocator_int_* t15 = __a11;
  unsigned long r16 = std__vector_int__std__allocator_int______S_check_init_len(t14, t15);
  struct std__allocator_int_* t17 = __a11;
  std___Vector_base_int__std__allocator_int______Vector_base(base13, r16, t17);
    unsigned long t18 = __n10;
    std__vector_int__std__allocator_int______M_default_initialize(t12, t18);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v19) {
bb20:
  struct std__allocator_int_* this21;
  this21 = v19;
  struct std__allocator_int_* t22 = this21;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v23) {
bb24:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this25;
  this25 = v23;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t26 = this25;
  int* c27 = ((void*)0);
  t26->_M_current = c27;
  return;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclIPiiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(struct __gnu_cxx____ops___Iter_less_val* v28, int* v29, int* v30) {
bb31:
  struct __gnu_cxx____ops___Iter_less_val* this32;
  int* __it33;
  int* __val34;
  _Bool __retval35;
  this32 = v28;
  __it33 = v29;
  __val34 = v30;
  struct __gnu_cxx____ops___Iter_less_val* t36 = this32;
  int* t37 = __it33;
  int t38 = *t37;
  int* t39 = __val34;
  int t40 = *t39;
  _Bool c41 = ((t38 < t40)) ? 1 : 0;
  __retval35 = c41;
  _Bool t42 = __retval35;
  return t42;
}

// function: _ZSt11__push_heapIPiliN9__gnu_cxx5__ops14_Iter_less_valEEvT_T0_S5_T1_RT2_
void void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(int* v43, long v44, long v45, int v46, struct __gnu_cxx____ops___Iter_less_val* v47) {
bb48:
  int* __first49;
  long __holeIndex50;
  long __topIndex51;
  int __value52;
  struct __gnu_cxx____ops___Iter_less_val* __comp53;
  long __parent54;
  __first49 = v43;
  __holeIndex50 = v44;
  __topIndex51 = v45;
  __value52 = v46;
  __comp53 = v47;
  long t55 = __holeIndex50;
  long c56 = 1;
  long b57 = t55 - c56;
  long c58 = 2;
  long b59 = b57 / c58;
  __parent54 = b59;
    while (1) {
      long t60 = __holeIndex50;
      long t61 = __topIndex51;
      _Bool c62 = ((t60 > t61)) ? 1 : 0;
      _Bool ternary63;
      if (c62) {
        struct __gnu_cxx____ops___Iter_less_val* t64 = __comp53;
        int* t65 = __first49;
        long t66 = __parent54;
        int* ptr67 = &(t65)[t66];
        _Bool r68 = bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(t64, ptr67, &__value52);
        ternary63 = (_Bool)r68;
      } else {
        _Bool c69 = 0;
        ternary63 = (_Bool)c69;
      }
      if (!ternary63) break;
        int* t70 = __first49;
        long t71 = __parent54;
        int* ptr72 = &(t70)[t71];
        int t73 = *ptr72;
        int* t74 = __first49;
        long t75 = __holeIndex50;
        int* ptr76 = &(t74)[t75];
        *ptr76 = t73;
        long t77 = __parent54;
        __holeIndex50 = t77;
        long t78 = __holeIndex50;
        long c79 = 1;
        long b80 = t78 - c79;
        long c81 = 2;
        long b82 = b80 / c81;
        __parent54 = b82;
    }
  int t83 = __value52;
  int* t84 = __first49;
  long t85 = __holeIndex50;
  int* ptr86 = &(t84)[t85];
  *ptr86 = t83;
  return;
}

// function: _ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2_
void void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(int* v87, long v88, long v89, int v90, struct __gnu_cxx____ops___Iter_less_iter v91) {
bb92:
  int* __first93;
  long __holeIndex94;
  long __len95;
  int __value96;
  struct __gnu_cxx____ops___Iter_less_iter __comp97;
  long __topIndex98;
  long __secondChild99;
  struct __gnu_cxx____ops___Iter_less_val __cmp100;
  __first93 = v87;
  __holeIndex94 = v88;
  __len95 = v89;
  __value96 = v90;
  __comp97 = v91;
  long t101 = __holeIndex94;
  __topIndex98 = t101;
  long t102 = __holeIndex94;
  __secondChild99 = t102;
    while (1) {
      long t103 = __secondChild99;
      long t104 = __len95;
      long c105 = 1;
      long b106 = t104 - c105;
      long c107 = 2;
      long b108 = b106 / c107;
      _Bool c109 = ((t103 < b108)) ? 1 : 0;
      if (!c109) break;
        long c110 = 2;
        long t111 = __secondChild99;
        long c112 = 1;
        long b113 = t111 + c112;
        long b114 = c110 * b113;
        __secondChild99 = b114;
          int* t115 = __first93;
          long t116 = __secondChild99;
          int* ptr117 = &(t115)[t116];
          int* t118 = __first93;
          long t119 = __secondChild99;
          long c120 = 1;
          long b121 = t119 - c120;
          int* ptr122 = &(t118)[b121];
          _Bool r123 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp97, ptr117, ptr122);
          if (r123) {
            long t124 = __secondChild99;
            long u125 = t124 - 1;
            __secondChild99 = u125;
          }
        int* t126 = __first93;
        long t127 = __secondChild99;
        int* ptr128 = &(t126)[t127];
        int t129 = *ptr128;
        int* t130 = __first93;
        long t131 = __holeIndex94;
        int* ptr132 = &(t130)[t131];
        *ptr132 = t129;
        long t133 = __secondChild99;
        __holeIndex94 = t133;
    }
    long t134 = __len95;
    long c135 = 1;
    long b136 = t134 & c135;
    long c137 = 0;
    _Bool c138 = ((b136 == c137)) ? 1 : 0;
    _Bool ternary139;
    if (c138) {
      long t140 = __secondChild99;
      long t141 = __len95;
      long c142 = 2;
      long b143 = t141 - c142;
      long c144 = 2;
      long b145 = b143 / c144;
      _Bool c146 = ((t140 == b145)) ? 1 : 0;
      ternary139 = (_Bool)c146;
    } else {
      _Bool c147 = 0;
      ternary139 = (_Bool)c147;
    }
    if (ternary139) {
      long c148 = 2;
      long t149 = __secondChild99;
      long c150 = 1;
      long b151 = t149 + c150;
      long b152 = c148 * b151;
      __secondChild99 = b152;
      int* t153 = __first93;
      long t154 = __secondChild99;
      long c155 = 1;
      long b156 = t154 - c155;
      int* ptr157 = &(t153)[b156];
      int t158 = *ptr157;
      int* t159 = __first93;
      long t160 = __holeIndex94;
      int* ptr161 = &(t159)[t160];
      *ptr161 = t158;
      long t162 = __secondChild99;
      long c163 = 1;
      long b164 = t162 - c163;
      __holeIndex94 = b164;
    }
  __cmp100 = *&__const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp; // copy
  int* t165 = __first93;
  long t166 = __holeIndex94;
  long t167 = __topIndex98;
  int t168 = __value96;
  void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(t165, t166, t167, t168, &__cmp100);
  return;
}

// function: _ZSt11__make_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_RT0_
void void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v169, int* v170, struct __gnu_cxx____ops___Iter_less_iter* v171) {
bb172:
  int* __first173;
  int* __last174;
  struct __gnu_cxx____ops___Iter_less_iter* __comp175;
  long __len176;
  long __parent177;
  __first173 = v169;
  __last174 = v170;
  __comp175 = v171;
    int* t178 = __last174;
    int* t179 = __first173;
    long diff180 = t178 - t179;
    long c181 = 2;
    _Bool c182 = ((diff180 < c181)) ? 1 : 0;
    if (c182) {
      return;
    }
  int* t183 = __last174;
  int* t184 = __first173;
  long diff185 = t183 - t184;
  __len176 = diff185;
  long t186 = __len176;
  long c187 = 2;
  long b188 = t186 - c187;
  long c189 = 2;
  long b190 = b188 / c189;
  __parent177 = b190;
    while (1) {
      _Bool c191 = 1;
      if (!c191) break;
        int __value192;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp0193;
        int* t194 = __first173;
        long t195 = __parent177;
        int* ptr196 = &(t194)[t195];
        int t197 = *ptr196;
        __value192 = t197;
        int* t198 = __first173;
        long t199 = __parent177;
        long t200 = __len176;
        int t201 = __value192;
        struct __gnu_cxx____ops___Iter_less_iter* t202 = __comp175;
        struct __gnu_cxx____ops___Iter_less_iter t203 = agg_tmp0193;
        void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(t198, t199, t200, t201, t203);
          long t204 = __parent177;
          long c205 = 0;
          _Bool c206 = ((t204 == c205)) ? 1 : 0;
          if (c206) {
            return;
          }
        long t207 = __parent177;
        long u208 = t207 - 1;
        __parent177 = u208;
    }
  return;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* v209, int* v210, int* v211) {
bb212:
  struct __gnu_cxx____ops___Iter_less_iter* this213;
  int* __it1214;
  int* __it2215;
  _Bool __retval216;
  this213 = v209;
  __it1214 = v210;
  __it2215 = v211;
  struct __gnu_cxx____ops___Iter_less_iter* t217 = this213;
  int* t218 = __it1214;
  int t219 = *t218;
  int* t220 = __it2215;
  int t221 = *t220;
  _Bool c222 = ((t219 < t221)) ? 1 : 0;
  __retval216 = c222;
  _Bool t223 = __retval216;
  return t223;
}

// function: _ZSt10__pop_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_RT0_
void void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v224, int* v225, int* v226, struct __gnu_cxx____ops___Iter_less_iter* v227) {
bb228:
  int* __first229;
  int* __last230;
  int* __result231;
  struct __gnu_cxx____ops___Iter_less_iter* __comp232;
  int __value233;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0234;
  __first229 = v224;
  __last230 = v225;
  __result231 = v226;
  __comp232 = v227;
  int* t235 = __result231;
  int t236 = *t235;
  __value233 = t236;
  int* t237 = __first229;
  int t238 = *t237;
  int* t239 = __result231;
  *t239 = t238;
  int* t240 = __first229;
  long c241 = 0;
  int* t242 = __last230;
  int* t243 = __first229;
  long diff244 = t242 - t243;
  int t245 = __value233;
  struct __gnu_cxx____ops___Iter_less_iter* t246 = __comp232;
  struct __gnu_cxx____ops___Iter_less_iter t247 = agg_tmp0234;
  void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(t240, c241, diff244, t245, t247);
  return;
}

// function: _ZSt13__heap_selectIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_T0_
void void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(int* v248, int* v249, int* v250, struct __gnu_cxx____ops___Iter_less_iter v251) {
bb252:
  int* __first253;
  int* __middle254;
  int* __last255;
  struct __gnu_cxx____ops___Iter_less_iter __comp256;
  __first253 = v248;
  __middle254 = v249;
  __last255 = v250;
  __comp256 = v251;
  int* t257 = __first253;
  int* t258 = __middle254;
  void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(t257, t258, &__comp256);
    int* __i259;
    int* t260 = __middle254;
    __i259 = t260;
    while (1) {
      int* t262 = __i259;
      int* t263 = __last255;
      _Bool c264 = ((t262 < t263)) ? 1 : 0;
      if (!c264) break;
        int* t265 = __i259;
        int* t266 = __first253;
        _Bool r267 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp256, t265, t266);
        if (r267) {
          int* t268 = __first253;
          int* t269 = __middle254;
          int* t270 = __i259;
          void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(t268, t269, t270, &__comp256);
        }
    for_step261: ;
      int* t271 = __i259;
      int c272 = 1;
      int* ptr273 = &(t271)[c272];
      __i259 = ptr273;
    }
  return;
}

// function: _ZSt11__sort_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_RT0_
void void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v274, int* v275, struct __gnu_cxx____ops___Iter_less_iter* v276) {
bb277:
  int* __first278;
  int* __last279;
  struct __gnu_cxx____ops___Iter_less_iter* __comp280;
  __first278 = v274;
  __last279 = v275;
  __comp280 = v276;
    while (1) {
      int* t281 = __last279;
      int* t282 = __first278;
      long diff283 = t281 - t282;
      long c284 = 1;
      _Bool c285 = ((diff283 > c284)) ? 1 : 0;
      if (!c285) break;
        int* t286 = __last279;
        int c287 = -1;
        int* ptr288 = &(t286)[c287];
        __last279 = ptr288;
        int* t289 = __first278;
        int* t290 = __last279;
        int* t291 = __last279;
        struct __gnu_cxx____ops___Iter_less_iter* t292 = __comp280;
        void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(t289, t290, t291, t292);
    }
  return;
}

// function: _ZSt14__partial_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_T0_
void void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v293, int* v294, int* v295, struct __gnu_cxx____ops___Iter_less_iter v296) {
bb297:
  int* __first298;
  int* __middle299;
  int* __last300;
  struct __gnu_cxx____ops___Iter_less_iter __comp301;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0302;
  __first298 = v293;
  __middle299 = v294;
  __last300 = v295;
  __comp301 = v296;
  int* t303 = __first298;
  int* t304 = __middle299;
  int* t305 = __last300;
  struct __gnu_cxx____ops___Iter_less_iter t306 = agg_tmp0302;
  void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(t303, t304, t305, t306);
  int* t307 = __first298;
  int* t308 = __middle299;
  void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(t307, t308, &__comp301);
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v309, int* v310) {
bb311:
  int* __a312;
  int* __b313;
  int __tmp314;
  __a312 = v309;
  __b313 = v310;
  int* t315 = __a312;
  int t316 = *t315;
  __tmp314 = t316;
  int* t317 = __b313;
  int t318 = *t317;
  int* t319 = __a312;
  *t319 = t318;
  int t320 = __tmp314;
  int* t321 = __b313;
  *t321 = t320;
  return;
}

// function: _ZSt9iter_swapIPiS0_EvT_T0_
void void_std__iter_swap_int___int__(int* v322, int* v323) {
bb324:
  int* __a325;
  int* __b326;
  __a325 = v322;
  __b326 = v323;
  int* t327 = __a325;
  int* t328 = __b326;
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(t327, t328);
  return;
}

// function: _ZSt22__move_median_to_firstIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_S4_T0_
void void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(int* v329, int* v330, int* v331, int* v332, struct __gnu_cxx____ops___Iter_less_iter v333) {
bb334:
  int* __result335;
  int* __a336;
  int* __b337;
  int* __c338;
  struct __gnu_cxx____ops___Iter_less_iter __comp339;
  __result335 = v329;
  __a336 = v330;
  __b337 = v331;
  __c338 = v332;
  __comp339 = v333;
    int* t340 = __a336;
    int* t341 = __b337;
    _Bool r342 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp339, t340, t341);
    if (r342) {
        int* t343 = __b337;
        int* t344 = __c338;
        _Bool r345 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp339, t343, t344);
        if (r345) {
          int* t346 = __result335;
          int* t347 = __b337;
          void_std__iter_swap_int___int__(t346, t347);
        } else {
            int* t348 = __a336;
            int* t349 = __c338;
            _Bool r350 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp339, t348, t349);
            if (r350) {
              int* t351 = __result335;
              int* t352 = __c338;
              void_std__iter_swap_int___int__(t351, t352);
            } else {
              int* t353 = __result335;
              int* t354 = __a336;
              void_std__iter_swap_int___int__(t353, t354);
            }
        }
    } else {
        int* t355 = __a336;
        int* t356 = __c338;
        _Bool r357 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp339, t355, t356);
        if (r357) {
          int* t358 = __result335;
          int* t359 = __a336;
          void_std__iter_swap_int___int__(t358, t359);
        } else {
            int* t360 = __b337;
            int* t361 = __c338;
            _Bool r362 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp339, t360, t361);
            if (r362) {
              int* t363 = __result335;
              int* t364 = __c338;
              void_std__iter_swap_int___int__(t363, t364);
            } else {
              int* t365 = __result335;
              int* t366 = __b337;
              void_std__iter_swap_int___int__(t365, t366);
            }
        }
    }
  return;
}

// function: _ZSt21__unguarded_partitionIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_S4_T0_
int* int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(int* v367, int* v368, int* v369, struct __gnu_cxx____ops___Iter_less_iter v370) {
bb371:
  int* __first372;
  int* __last373;
  int* __pivot374;
  struct __gnu_cxx____ops___Iter_less_iter __comp375;
  int* __retval376;
  __first372 = v367;
  __last373 = v368;
  __pivot374 = v369;
  __comp375 = v370;
    while (1) {
      _Bool c377 = 1;
      if (!c377) break;
          while (1) {
            int* t378 = __first372;
            int* t379 = __pivot374;
            _Bool r380 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp375, t378, t379);
            if (!r380) break;
            int* t381 = __first372;
            int c382 = 1;
            int* ptr383 = &(t381)[c382];
            __first372 = ptr383;
          }
        int* t384 = __last373;
        int c385 = -1;
        int* ptr386 = &(t384)[c385];
        __last373 = ptr386;
          while (1) {
            int* t387 = __pivot374;
            int* t388 = __last373;
            _Bool r389 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp375, t387, t388);
            if (!r389) break;
            int* t390 = __last373;
            int c391 = -1;
            int* ptr392 = &(t390)[c391];
            __last373 = ptr392;
          }
          int* t393 = __first372;
          int* t394 = __last373;
          _Bool c395 = ((t393 < t394)) ? 1 : 0;
          _Bool u396 = !c395;
          if (u396) {
            int* t397 = __first372;
            __retval376 = t397;
            int* t398 = __retval376;
            int* ret_val399 = t398;
            return ret_val399;
          }
        int* t400 = __first372;
        int* t401 = __last373;
        void_std__iter_swap_int___int__(t400, t401);
        int* t402 = __first372;
        int c403 = 1;
        int* ptr404 = &(t402)[c403];
        __first372 = ptr404;
    }
  abort();
}

// function: _ZSt27__unguarded_partition_pivotIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_T0_
int* int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(int* v405, int* v406, struct __gnu_cxx____ops___Iter_less_iter v407) {
bb408:
  int* __first409;
  int* __last410;
  struct __gnu_cxx____ops___Iter_less_iter __comp411;
  int* __retval412;
  int* __mid413;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0414;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp1415;
  __first409 = v405;
  __last410 = v406;
  __comp411 = v407;
  int* t416 = __first409;
  int* t417 = __last410;
  int* t418 = __first409;
  long diff419 = t417 - t418;
  long c420 = 2;
  long b421 = diff419 / c420;
  int* ptr422 = &(t416)[b421];
  __mid413 = ptr422;
  int* t423 = __first409;
  int* t424 = __first409;
  int c425 = 1;
  int* ptr426 = &(t424)[c425];
  int* t427 = __mid413;
  int* t428 = __last410;
  int c429 = -1;
  int* ptr430 = &(t428)[c429];
  struct __gnu_cxx____ops___Iter_less_iter t431 = agg_tmp0414;
  void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(t423, ptr426, t427, ptr430, t431);
  int* t432 = __first409;
  int c433 = 1;
  int* ptr434 = &(t432)[c433];
  int* t435 = __last410;
  int* t436 = __first409;
  struct __gnu_cxx____ops___Iter_less_iter t437 = agg_tmp1415;
  int* r438 = int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(ptr434, t435, t436, t437);
  __retval412 = r438;
  int* t439 = __retval412;
  return t439;
}

// function: _ZSt16__introsort_loopIPilN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_T1_
void void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(int* v440, int* v441, long v442, struct __gnu_cxx____ops___Iter_less_iter v443) {
bb444:
  int* __first445;
  int* __last446;
  long __depth_limit447;
  struct __gnu_cxx____ops___Iter_less_iter __comp448;
  __first445 = v440;
  __last446 = v441;
  __depth_limit447 = v442;
  __comp448 = v443;
    while (1) {
      int* t449 = __last446;
      int* t450 = __first445;
      long diff451 = t449 - t450;
      long c452 = 16;
      _Bool c453 = ((diff451 > c452)) ? 1 : 0;
      if (!c453) break;
        int* __cut454;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp1455;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp2456;
          long t457 = __depth_limit447;
          long c458 = 0;
          _Bool c459 = ((t457 == c458)) ? 1 : 0;
          if (c459) {
            struct __gnu_cxx____ops___Iter_less_iter agg_tmp0460;
            int* t461 = __first445;
            int* t462 = __last446;
            int* t463 = __last446;
            struct __gnu_cxx____ops___Iter_less_iter t464 = agg_tmp0460;
            void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(t461, t462, t463, t464);
            return;
          }
        long t465 = __depth_limit447;
        long u466 = t465 - 1;
        __depth_limit447 = u466;
        int* t467 = __first445;
        int* t468 = __last446;
        struct __gnu_cxx____ops___Iter_less_iter t469 = agg_tmp1455;
        int* r470 = int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(t467, t468, t469);
        __cut454 = r470;
        int* t471 = __cut454;
        int* t472 = __last446;
        long t473 = __depth_limit447;
        struct __gnu_cxx____ops___Iter_less_iter t474 = agg_tmp2456;
        void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(t471, t472, t473, t474);
        int* t475 = __cut454;
        __last446 = t475;
    }
  return;
}

// function: _ZSt13__countl_zeroImEiT_
int int_std____countl_zero_unsigned_long_(unsigned long v476) {
bb477:
  unsigned long __x478;
  int __retval479;
  int _Nd480;
  __x478 = v476;
  int c481 = 64;
  _Nd480 = c481;
  unsigned long t482 = __x478;
  unsigned long clz483 = (unsigned long)__builtin_clzll((unsigned long)t482);
  int cast484 = (int)clz483;
  unsigned long c485 = 0;
  _Bool c486 = ((t482 == c485)) ? 1 : 0;
  int t487 = _Nd480;
  int sel488 = c486 ? t487 : cast484;
  __retval479 = sel488;
  int t489 = __retval479;
  return t489;
}

// function: _ZSt11__bit_widthImEiT_
int int_std____bit_width_unsigned_long_(unsigned long v490) {
bb491:
  unsigned long __x492;
  int __retval493;
  int _Nd494;
  __x492 = v490;
  int c495 = 64;
  _Nd494 = c495;
  int t496 = _Nd494;
  unsigned long t497 = __x492;
  int r498 = int_std____countl_zero_unsigned_long_(t497);
  int b499 = t496 - r498;
  __retval493 = b499;
  int t500 = __retval493;
  return t500;
}

// function: _ZSt4__lgIlET_S0_
long long_std____lg_long_(long v501) {
bb502:
  long __n503;
  long __retval504;
  __n503 = v501;
  long t505 = __n503;
  unsigned long cast506 = (unsigned long)t505;
  int r507 = int_std____bit_width_unsigned_long_(cast506);
  int c508 = 1;
  int b509 = r507 - c508;
  long cast510 = (long)b509;
  __retval504 = cast510;
  long t511 = __retval504;
  return t511;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v512, int* v513) {
bb514:
  int** unnamed515;
  int* __res516;
  int* __retval517;
  unnamed515 = v512;
  __res516 = v513;
  int* t518 = __res516;
  __retval517 = t518;
  int* t519 = __retval517;
  return t519;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v520, int* v521, struct std__random_access_iterator_tag v522) {
bb523:
  int* __first524;
  int* __last525;
  struct std__random_access_iterator_tag unnamed526;
  long __retval527;
  __first524 = v520;
  __last525 = v521;
  unnamed526 = v522;
  int* t528 = __last525;
  int* t529 = __first524;
  long diff530 = t528 - t529;
  __retval527 = diff530;
  long t531 = __retval527;
  return t531;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v532, int* v533) {
bb534:
  int* __first535;
  int* __last536;
  long __retval537;
  struct std__random_access_iterator_tag agg_tmp0538;
  __first535 = v532;
  __last536 = v533;
  int* t539 = __first535;
  int* t540 = __last536;
  struct std__random_access_iterator_tag r541 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first535);
  agg_tmp0538 = r541;
  struct std__random_access_iterator_tag t542 = agg_tmp0538;
  long r543 = std__iterator_traits_int____difference_type_std____distance_int__(t539, t540, t542);
  __retval537 = r543;
  long t544 = __retval537;
  return t544;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v545, long v546, struct std__random_access_iterator_tag v547) {
bb548:
  int** __i549;
  long __n550;
  struct std__random_access_iterator_tag unnamed551;
  __i549 = v545;
  __n550 = v546;
  unnamed551 = v547;
    long t552 = __n550;
    _Bool isconst553 = 0;
    _Bool ternary554;
    if (isconst553) {
      long t555 = __n550;
      long c556 = 1;
      _Bool c557 = ((t555 == c556)) ? 1 : 0;
      ternary554 = (_Bool)c557;
    } else {
      _Bool c558 = 0;
      ternary554 = (_Bool)c558;
    }
    if (ternary554) {
      int** t559 = __i549;
      int* t560 = *t559;
      int c561 = 1;
      int* ptr562 = &(t560)[c561];
      *t559 = ptr562;
    } else {
        long t563 = __n550;
        _Bool isconst564 = 0;
        _Bool ternary565;
        if (isconst564) {
          long t566 = __n550;
          long c567 = -1;
          _Bool c568 = ((t566 == c567)) ? 1 : 0;
          ternary565 = (_Bool)c568;
        } else {
          _Bool c569 = 0;
          ternary565 = (_Bool)c569;
        }
        if (ternary565) {
          int** t570 = __i549;
          int* t571 = *t570;
          int c572 = -1;
          int* ptr573 = &(t571)[c572];
          *t570 = ptr573;
        } else {
          long t574 = __n550;
          int** t575 = __i549;
          int* t576 = *t575;
          int* ptr577 = &(t576)[t574];
          *t575 = ptr577;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v578, long v579) {
bb580:
  int** __i581;
  long __n582;
  long __d583;
  struct std__random_access_iterator_tag agg_tmp0584;
  __i581 = v578;
  __n582 = v579;
  long t585 = __n582;
  __d583 = t585;
  int** t586 = __i581;
  long t587 = __d583;
  int** t588 = __i581;
  struct std__random_access_iterator_tag r589 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t588);
  agg_tmp0584 = r589;
  struct std__random_access_iterator_tag t590 = agg_tmp0584;
  void_std____advance_int___long_(t586, t587, t590);
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v591, int** v592) {
bb593:
  int** __out594;
  int** __in595;
  __out594 = v591;
  __in595 = v592;
    int** t596 = __in595;
    int* t597 = *t596;
    int t598 = *t597;
    int** t599 = __out594;
    int* t600 = *t599;
    *t600 = t598;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v601, int* v602, int* v603) {
bb604:
  int* __first605;
  int* __last606;
  int* __result607;
  int* __retval608;
  __first605 = v601;
  __last606 = v602;
  __result607 = v603;
      _Bool r609 = std__is_constant_evaluated();
      if (r609) {
      } else {
          long __n610;
          int* t611 = __first605;
          int* t612 = __last606;
          long r613 = std__iterator_traits_int____difference_type_std__distance_int__(t611, t612);
          __n610 = r613;
          long t614 = __n610;
          long u615 = -t614;
          void_std__advance_int___long_(&__result607, u615);
            long t616 = __n610;
            long c617 = 1;
            _Bool c618 = ((t616 > c617)) ? 1 : 0;
            if (c618) {
              int* t619 = __result607;
              void* cast620 = (void*)t619;
              int* t621 = __first605;
              void* cast622 = (void*)t621;
              long t623 = __n610;
              unsigned long cast624 = (unsigned long)t623;
              unsigned long c625 = 4;
              unsigned long b626 = cast624 * c625;
              void* r627 = memmove(cast620, cast622, b626);
            } else {
                long t628 = __n610;
                long c629 = 1;
                _Bool c630 = ((t628 == c629)) ? 1 : 0;
                if (c630) {
                  void_std____assign_one_true__int___int__(&__result607, &__first605);
                }
            }
          int* t631 = __result607;
          __retval608 = t631;
          int* t632 = __retval608;
          return t632;
      }
    while (1) {
      int* t633 = __first605;
      int* t634 = __last606;
      _Bool c635 = ((t633 != t634)) ? 1 : 0;
      if (!c635) break;
        int* t636 = __last606;
        int c637 = -1;
        int* ptr638 = &(t636)[c637];
        __last606 = ptr638;
        int* t639 = __result607;
        int c640 = -1;
        int* ptr641 = &(t639)[c640];
        __result607 = ptr641;
        void_std____assign_one_true__int___int__(&__result607, &__last606);
    }
  int* t642 = __result607;
  __retval608 = t642;
  int* t643 = __retval608;
  return t643;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v644, int* v645, int* v646) {
bb647:
  int* __first648;
  int* __last649;
  int* __result650;
  int* __retval651;
  __first648 = v644;
  __last649 = v645;
  __result650 = v646;
  int* t652 = __first648;
  int* t653 = __last649;
  int* t654 = __result650;
  int* r655 = int__std____copy_move_backward_a2_true__int___int__(t652, t653, t654);
  __retval651 = r655;
  int* t656 = __retval651;
  return t656;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v657) {
bb658:
  int* __it659;
  int* __retval660;
  __it659 = v657;
  int* t661 = __it659;
  __retval660 = t661;
  int* t662 = __retval660;
  return t662;
}

// function: _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a_true__int___int__(int* v663, int* v664, int* v665) {
bb666:
  int* __first667;
  int* __last668;
  int* __result669;
  int* __retval670;
  __first667 = v663;
  __last668 = v664;
  __result669 = v665;
  int* t671 = __first667;
  int* r672 = int__std____niter_base_int__(t671);
  int* t673 = __last668;
  int* r674 = int__std____niter_base_int__(t673);
  int* t675 = __result669;
  int* r676 = int__std____niter_base_int__(t675);
  int* r677 = int__std____copy_move_backward_a1_true__int___int__(r672, r674, r676);
  int* r678 = int__std____niter_wrap_int__(&__result669, r677);
  __retval670 = r678;
  int* t679 = __retval670;
  return t679;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v680) {
bb681:
  int* __it682;
  int* __retval683;
  __it682 = v680;
  int* t684 = __it682;
  __retval683 = t684;
  int* t685 = __retval683;
  return t685;
}

// function: _ZSt13move_backwardIPiS0_ET0_T_S2_S1_
int* int__std__move_backward_int___int__(int* v686, int* v687, int* v688) {
bb689:
  int* __first690;
  int* __last691;
  int* __result692;
  int* __retval693;
  __first690 = v686;
  __last691 = v687;
  __result692 = v688;
  int* t694 = __first690;
  int* r695 = int__std____miter_base_int__(t694);
  int* t696 = __last691;
  int* r697 = int__std____miter_base_int__(t696);
  int* t698 = __result692;
  int* r699 = int__std____copy_move_backward_a_true__int___int__(r695, r697, t698);
  __retval693 = r699;
  int* t700 = __retval693;
  return t700;
}

// function: _ZNK9__gnu_cxx5__ops14_Val_less_iterclIiPiEEbRT_T0_
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(struct __gnu_cxx____ops___Val_less_iter* v701, int* v702, int* v703) {
bb704:
  struct __gnu_cxx____ops___Val_less_iter* this705;
  int* __val706;
  int* __it707;
  _Bool __retval708;
  this705 = v701;
  __val706 = v702;
  __it707 = v703;
  struct __gnu_cxx____ops___Val_less_iter* t709 = this705;
  int* t710 = __val706;
  int t711 = *t710;
  int* t712 = __it707;
  int t713 = *t712;
  _Bool c714 = ((t711 < t713)) ? 1 : 0;
  __retval708 = c714;
  _Bool t715 = __retval708;
  return t715;
}

// function: _ZSt25__unguarded_linear_insertIPiN9__gnu_cxx5__ops14_Val_less_iterEEvT_T0_
void void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(int* v716, struct __gnu_cxx____ops___Val_less_iter v717) {
bb718:
  int* __last719;
  struct __gnu_cxx____ops___Val_less_iter __comp720;
  int __val721;
  int* __next722;
  __last719 = v716;
  __comp720 = v717;
  int* t723 = __last719;
  int t724 = *t723;
  __val721 = t724;
  int* t725 = __last719;
  __next722 = t725;
  int* t726 = __next722;
  int c727 = -1;
  int* ptr728 = &(t726)[c727];
  __next722 = ptr728;
    while (1) {
      int* t729 = __next722;
      _Bool r730 = bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(&__comp720, &__val721, t729);
      if (!r730) break;
        int* t731 = __next722;
        int t732 = *t731;
        int* t733 = __last719;
        *t733 = t732;
        int* t734 = __next722;
        __last719 = t734;
        int* t735 = __next722;
        int c736 = -1;
        int* ptr737 = &(t735)[c736];
        __next722 = ptr737;
    }
  int t738 = __val721;
  int* t739 = __last719;
  *t739 = t738;
  return;
}

// function: _ZN9__gnu_cxx5__ops15__val_comp_iterENS0_15_Iter_less_iterE
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_comp_iter(struct __gnu_cxx____ops___Iter_less_iter v740) {
bb741:
  struct __gnu_cxx____ops___Iter_less_iter unnamed742;
  struct __gnu_cxx____ops___Val_less_iter __retval743;
  unnamed742 = v740;
  struct __gnu_cxx____ops___Val_less_iter t744 = __retval743;
  return t744;
}

// function: _ZSt16__insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v745, int* v746, struct __gnu_cxx____ops___Iter_less_iter v747) {
bb748:
  int* __first749;
  int* __last750;
  struct __gnu_cxx____ops___Iter_less_iter __comp751;
  __first749 = v745;
  __last750 = v746;
  __comp751 = v747;
    int* t752 = __first749;
    int* t753 = __last750;
    _Bool c754 = ((t752 == t753)) ? 1 : 0;
    if (c754) {
      return;
    }
    int* __i755;
    int* t756 = __first749;
    int c757 = 1;
    int* ptr758 = &(t756)[c757];
    __i755 = ptr758;
    while (1) {
      int* t760 = __i755;
      int* t761 = __last750;
      _Bool c762 = ((t760 != t761)) ? 1 : 0;
      if (!c762) break;
          int* t763 = __i755;
          int* t764 = __first749;
          _Bool r765 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp751, t763, t764);
          if (r765) {
            int __val766;
            int* t767 = __i755;
            int t768 = *t767;
            __val766 = t768;
            int* t769 = __first749;
            int* t770 = __i755;
            int* t771 = __i755;
            int c772 = 1;
            int* ptr773 = &(t771)[c772];
            int* r774 = int__std__move_backward_int___int__(t769, t770, ptr773);
            int t775 = __val766;
            int* t776 = __first749;
            *t776 = t775;
          } else {
            struct __gnu_cxx____ops___Val_less_iter agg_tmp0777;
            struct __gnu_cxx____ops___Iter_less_iter agg_tmp1778;
            int* t779 = __i755;
            struct __gnu_cxx____ops___Iter_less_iter t780 = agg_tmp1778;
            struct __gnu_cxx____ops___Val_less_iter r781 = __gnu_cxx____ops____val_comp_iter(t780);
            agg_tmp0777 = r781;
            struct __gnu_cxx____ops___Val_less_iter t782 = agg_tmp0777;
            void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(t779, t782);
          }
    for_step759: ;
      int* t783 = __i755;
      int c784 = 1;
      int* ptr785 = &(t783)[c784];
      __i755 = ptr785;
    }
  return;
}

// function: _ZSt26__unguarded_insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v786, int* v787, struct __gnu_cxx____ops___Iter_less_iter v788) {
bb789:
  int* __first790;
  int* __last791;
  struct __gnu_cxx____ops___Iter_less_iter __comp792;
  __first790 = v786;
  __last791 = v787;
  __comp792 = v788;
    int* __i793;
    struct __gnu_cxx____ops___Val_less_iter agg_tmp0794;
    struct __gnu_cxx____ops___Iter_less_iter agg_tmp1795;
    int* t796 = __first790;
    __i793 = t796;
    while (1) {
      int* t798 = __i793;
      int* t799 = __last791;
      _Bool c800 = ((t798 != t799)) ? 1 : 0;
      if (!c800) break;
      int* t801 = __i793;
      struct __gnu_cxx____ops___Iter_less_iter t802 = agg_tmp1795;
      struct __gnu_cxx____ops___Val_less_iter r803 = __gnu_cxx____ops____val_comp_iter(t802);
      agg_tmp0794 = r803;
      struct __gnu_cxx____ops___Val_less_iter t804 = agg_tmp0794;
      void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(t801, t804);
    for_step797: ;
      int* t805 = __i793;
      int c806 = 1;
      int* ptr807 = &(t805)[c806];
      __i793 = ptr807;
    }
  return;
}

// function: _ZSt22__final_insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v808, int* v809, struct __gnu_cxx____ops___Iter_less_iter v810) {
bb811:
  int* __first812;
  int* __last813;
  struct __gnu_cxx____ops___Iter_less_iter __comp814;
  __first812 = v808;
  __last813 = v809;
  __comp814 = v810;
    int* t815 = __last813;
    int* t816 = __first812;
    long diff817 = t815 - t816;
    long c818 = 16;
    _Bool c819 = ((diff817 > c818)) ? 1 : 0;
    if (c819) {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp0820;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp1821;
      int* t822 = __first812;
      int* t823 = __first812;
      int c824 = 16;
      int* ptr825 = &(t823)[c824];
      struct __gnu_cxx____ops___Iter_less_iter t826 = agg_tmp0820;
      void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t822, ptr825, t826);
      int* t827 = __first812;
      int c828 = 16;
      int* ptr829 = &(t827)[c828];
      int* t830 = __last813;
      struct __gnu_cxx____ops___Iter_less_iter t831 = agg_tmp1821;
      void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(ptr829, t830, t831);
    } else {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp2832;
      int* t833 = __first812;
      int* t834 = __last813;
      struct __gnu_cxx____ops___Iter_less_iter t835 = agg_tmp2832;
      void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t833, t834, t835);
    }
  return;
}

// function: _ZSt6__sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v836, int* v837, struct __gnu_cxx____ops___Iter_less_iter v838) {
bb839:
  int* __first840;
  int* __last841;
  struct __gnu_cxx____ops___Iter_less_iter __comp842;
  __first840 = v836;
  __last841 = v837;
  __comp842 = v838;
    int* t843 = __first840;
    int* t844 = __last841;
    _Bool c845 = ((t843 != t844)) ? 1 : 0;
    if (c845) {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp0846;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp1847;
      int* t848 = __first840;
      int* t849 = __last841;
      int* t850 = __last841;
      int* t851 = __first840;
      long diff852 = t850 - t851;
      long r853 = long_std____lg_long_(diff852);
      long c854 = 2;
      long b855 = r853 * c854;
      struct __gnu_cxx____ops___Iter_less_iter t856 = agg_tmp0846;
      void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(t848, t849, b855, t856);
      int* t857 = __first840;
      int* t858 = __last841;
      struct __gnu_cxx____ops___Iter_less_iter t859 = agg_tmp1847;
      void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t857, t858, t859);
    }
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb860:
  struct __gnu_cxx____ops___Iter_less_iter __retval861;
  struct __gnu_cxx____ops___Iter_less_iter t862 = __retval861;
  return t862;
}

// function: _ZSt4sortIPiEvT_S1_
void void_std__sort_int__(int* v863, int* v864) {
bb865:
  int* __first866;
  int* __last867;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0868;
  __first866 = v863;
  __last867 = v864;
  int* t869 = __first866;
  int* t870 = __last867;
  struct __gnu_cxx____ops___Iter_less_iter r871 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0868 = r871;
  struct __gnu_cxx____ops___Iter_less_iter t872 = agg_tmp0868;
  void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(t869, t870, t872);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v873) {
bb874:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this875;
  int* __retval876;
  this875 = v873;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t877 = this875;
  int* t878 = t877->_M_current;
  __retval876 = t878;
  int* t879 = __retval876;
  return t879;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v880) {
bb881:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this882;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval883;
  this882 = v880;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t884 = this882;
  int* t885 = t884->_M_current;
  int c886 = 1;
  int* ptr887 = &(t885)[c886];
  t884->_M_current = ptr887;
  __retval883 = t884;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t888 = __retval883;
  return t888;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v889, int** v890) {
bb891:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this892;
  int** __i893;
  this892 = v889;
  __i893 = v890;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t894 = this892;
  int** t895 = __i893;
  int* t896 = *t895;
  t894->_M_current = t896;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v897, long v898) {
bb899:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this900;
  long __n901;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval902;
  int* ref_tmp0903;
  this900 = v897;
  __n901 = v898;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t904 = this900;
  int* t905 = t904->_M_current;
  long t906 = __n901;
  int* ptr907 = &(t905)[t906];
  ref_tmp0903 = ptr907;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval902, &ref_tmp0903);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t908 = __retval902;
  return t908;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v909, int* v910) {
bb911:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from912;
  int* __res913;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval914;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0915;
  __from912 = v909;
  __res913 = v910;
  int* t916 = __res913;
  int* r917 = int__std____niter_base_int__(t916);
  agg_tmp0915 = __from912; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t918 = agg_tmp0915;
  int* r919 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t918);
  long diff920 = r917 - r919;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r921 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__from912, diff920);
  __retval914 = r921;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t922 = __retval914;
  return t922;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v923, int** v924) {
bb925:
  int** __out926;
  int** __in927;
  __out926 = v923;
  __in927 = v924;
    int** t928 = __in927;
    int* t929 = *t928;
    int t930 = *t929;
    int** t931 = __out926;
    int* t932 = *t931;
    *t932 = t930;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v933, int* v934, int* v935) {
bb936:
  int* __first937;
  int* __last938;
  int* __result939;
  int* __retval940;
  __first937 = v933;
  __last938 = v934;
  __result939 = v935;
      _Bool r941 = std____is_constant_evaluated();
      if (r941) {
      } else {
          long __n942;
          int* t943 = __first937;
          int* t944 = __last938;
          long r945 = std__iterator_traits_int____difference_type_std__distance_int__(t943, t944);
          __n942 = r945;
            long t946 = __n942;
            long c947 = 1;
            _Bool c948 = ((t946 > c947)) ? 1 : 0;
            if (c948) {
              int* t949 = __result939;
              void* cast950 = (void*)t949;
              int* t951 = __first937;
              void* cast952 = (void*)t951;
              long t953 = __n942;
              unsigned long cast954 = (unsigned long)t953;
              unsigned long c955 = 4;
              unsigned long b956 = cast954 * c955;
              void* r957 = memmove(cast950, cast952, b956);
              long t958 = __n942;
              int* t959 = __result939;
              int* ptr960 = &(t959)[t958];
              __result939 = ptr960;
            } else {
                long t961 = __n942;
                long c962 = 1;
                _Bool c963 = ((t961 == c962)) ? 1 : 0;
                if (c963) {
                  void_std____assign_one_false__int___int__(&__result939, &__first937);
                  int* t964 = __result939;
                  int c965 = 1;
                  int* ptr966 = &(t964)[c965];
                  __result939 = ptr966;
                }
            }
          int* t967 = __result939;
          __retval940 = t967;
          int* t968 = __retval940;
          return t968;
      }
    while (1) {
      int* t970 = __first937;
      int* t971 = __last938;
      _Bool c972 = ((t970 != t971)) ? 1 : 0;
      if (!c972) break;
      void_std____assign_one_false__int___int__(&__result939, &__first937);
    for_step969: ;
      int* t973 = __result939;
      int c974 = 1;
      int* ptr975 = &(t973)[c974];
      __result939 = ptr975;
      int* t976 = __first937;
      int c977 = 1;
      int* ptr978 = &(t976)[c977];
      __first937 = ptr978;
    }
  int* t979 = __result939;
  __retval940 = t979;
  int* t980 = __retval940;
  return t980;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v981, int* v982, int* v983) {
bb984:
  int* __first985;
  int* __last986;
  int* __result987;
  int* __retval988;
  __first985 = v981;
  __last986 = v982;
  __result987 = v983;
  int* t989 = __first985;
  int* t990 = __last986;
  int* t991 = __result987;
  int* r992 = int__std____copy_move_a2_false__int___int___int__(t989, t990, t991);
  __retval988 = r992;
  int* t993 = __retval988;
  return t993;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v994) {
bb995:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this996;
  int** __retval997;
  this996 = v994;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t998 = this996;
  __retval997 = &t998->_M_current;
  int** t999 = __retval997;
  return t999;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1000) {
bb1001:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1002;
  int* __retval1003;
  __it1002 = v1000;
  int** r1004 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it1002);
  int* t1005 = *r1004;
  __retval1003 = t1005;
  int* t1006 = __retval1003;
  return t1006;
}

// function: _ZSt13__copy_move_aILb0EPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v1007, int* v1008, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1009) {
bb1010:
  int* __first1011;
  int* __last1012;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1013;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11016;
  __first1011 = v1007;
  __last1012 = v1008;
  __result1013 = v1009;
  agg_tmp01015 = __result1013; // copy
  int* t1017 = __first1011;
  int* r1018 = int__std____niter_base_int__(t1017);
  int* t1019 = __last1012;
  int* r1020 = int__std____niter_base_int__(t1019);
  agg_tmp11016 = __result1013; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1021 = agg_tmp11016;
  int* r1022 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1021);
  int* r1023 = int__std____copy_move_a1_false__int___int__(r1018, r1020, r1022);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1024 = agg_tmp01015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1025 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1024, r1023);
  __retval1014 = r1025;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1026 = __retval1014;
  return t1026;
}

// function: _ZSt4copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v1027, int* v1028, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1029) {
bb1030:
  int* __first1031;
  int* __last1032;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1033;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1034;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01035;
  __first1031 = v1027;
  __last1032 = v1028;
  __result1033 = v1029;
  int* t1036 = __first1031;
  int* r1037 = int__std____miter_base_int__(t1036);
  int* t1038 = __last1032;
  int* r1039 = int__std____miter_base_int__(t1038);
  agg_tmp01035 = __result1033; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1040 = agg_tmp01035;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1041 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(r1037, r1039, t1040);
  __retval1034 = r1041;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1042 = __retval1034;
  return t1042;
}

// function: _ZSt26__set_symmetric_differenceIPiS0_N9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEENS1_5__ops15_Iter_less_iterEET1_T_SA_T0_SB_S9_T2_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____set_symmetric_difference_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(int* v1043, int* v1044, int* v1045, int* v1046, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1047, struct __gnu_cxx____ops___Iter_less_iter v1048) {
bb1049:
  int* __first11050;
  int* __last11051;
  int* __first21052;
  int* __last21053;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1054;
  struct __gnu_cxx____ops___Iter_less_iter __comp1055;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1056;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01057;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11058;
  __first11050 = v1043;
  __last11051 = v1044;
  __first21052 = v1045;
  __last21053 = v1046;
  __result1054 = v1047;
  __comp1055 = v1048;
    while (1) {
      int* t1059 = __first11050;
      int* t1060 = __last11051;
      _Bool c1061 = ((t1059 != t1060)) ? 1 : 0;
      _Bool ternary1062;
      if (c1061) {
        int* t1063 = __first21052;
        int* t1064 = __last21053;
        _Bool c1065 = ((t1063 != t1064)) ? 1 : 0;
        ternary1062 = (_Bool)c1065;
      } else {
        _Bool c1066 = 0;
        ternary1062 = (_Bool)c1066;
      }
      if (!ternary1062) break;
        int* t1067 = __first11050;
        int* t1068 = __first21052;
        _Bool r1069 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp1055, t1067, t1068);
        if (r1069) {
          int* t1070 = __first11050;
          int t1071 = *t1070;
          int* r1072 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result1054);
          *r1072 = t1071;
          int* t1073 = __first11050;
          int c1074 = 1;
          int* ptr1075 = &(t1073)[c1074];
          __first11050 = ptr1075;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1076 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result1054);
        } else {
            int* t1077 = __first21052;
            int* t1078 = __first11050;
            _Bool r1079 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp1055, t1077, t1078);
            if (r1079) {
              int* t1080 = __first21052;
              int t1081 = *t1080;
              int* r1082 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result1054);
              *r1082 = t1081;
              int* t1083 = __first21052;
              int c1084 = 1;
              int* ptr1085 = &(t1083)[c1084];
              __first21052 = ptr1085;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1086 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result1054);
            } else {
              int* t1087 = __first11050;
              int c1088 = 1;
              int* ptr1089 = &(t1087)[c1088];
              __first11050 = ptr1089;
              int* t1090 = __first21052;
              int c1091 = 1;
              int* ptr1092 = &(t1090)[c1091];
              __first21052 = ptr1092;
            }
        }
    }
  int* t1093 = __first21052;
  int* t1094 = __last21053;
  int* t1095 = __first11050;
  int* t1096 = __last11051;
  agg_tmp11058 = __result1054; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1097 = agg_tmp11058;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1098 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1095, t1096, t1097);
  agg_tmp01057 = r1098;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1099 = agg_tmp01057;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1100 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1093, t1094, t1099);
  __retval1056 = r1100;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1101 = __retval1056;
  return t1101;
}

// function: _ZSt24set_symmetric_differenceIPiS0_N9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET1_T_S8_T0_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__set_symmetric_difference_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v1102, int* v1103, int* v1104, int* v1105, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1106) {
bb1107:
  int* __first11108;
  int* __last11109;
  int* __first21110;
  int* __last21111;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1112;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1113;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01114;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp11115;
  __first11108 = v1102;
  __last11109 = v1103;
  __first21110 = v1104;
  __last21111 = v1105;
  __result1112 = v1106;
  int* t1116 = __first11108;
  int* t1117 = __last11109;
  int* t1118 = __first21110;
  int* t1119 = __last21111;
  agg_tmp01114 = __result1112; // copy
  struct __gnu_cxx____ops___Iter_less_iter r1120 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp11115 = r1120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1121 = agg_tmp01114;
  struct __gnu_cxx____ops___Iter_less_iter t1122 = agg_tmp11115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1123 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____set_symmetric_difference_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t1116, t1117, t1118, t1119, t1121, t1122);
  __retval1113 = r1123;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1124 = __retval1113;
  return t1124;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v1125) {
bb1126:
  struct std__vector_int__std__allocator_int__* this1127;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1128;
  this1127 = v1125;
  struct std__vector_int__std__allocator_int__* t1129 = this1127;
  struct std___Vector_base_int__std__allocator_int__* base1130 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1129 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1131 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1130->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1128, &base1131->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1132 = __retval1128;
  return t1132;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1133, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1134) {
bb1135:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1136;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1137;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1138;
  this1136 = v1133;
  unnamed1137 = v1134;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1139 = this1136;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1140 = unnamed1137;
  int* t1141 = t1140->_M_current;
  t1139->_M_current = t1141;
  __retval1138 = t1139;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1142 = __retval1138;
  return t1142;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1143) {
bb1144:
  struct std__vector_int__std__allocator_int__* this1145;
  unsigned long __retval1146;
  long __dif1147;
  this1145 = v1143;
  struct std__vector_int__std__allocator_int__* t1148 = this1145;
  struct std___Vector_base_int__std__allocator_int__* base1149 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1148 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1150 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1149->_M_impl) + 0);
  int* t1151 = base1150->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1152 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1148 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1153 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1152->_M_impl) + 0);
  int* t1154 = base1153->_M_start;
  long diff1155 = t1151 - t1154;
  __dif1147 = diff1155;
    long t1156 = __dif1147;
    long c1157 = 0;
    _Bool c1158 = ((t1156 < c1157)) ? 1 : 0;
    if (c1158) {
      __builtin_unreachable();
    }
  long t1159 = __dif1147;
  unsigned long cast1160 = (unsigned long)t1159;
  __retval1146 = cast1160;
  unsigned long t1161 = __retval1146;
  return t1161;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1162, unsigned long v1163) {
bb1164:
  struct std__vector_int__std__allocator_int__* this1165;
  unsigned long __n1166;
  int* __retval1167;
  this1165 = v1162;
  __n1166 = v1163;
  struct std__vector_int__std__allocator_int__* t1168 = this1165;
    do {
          unsigned long t1169 = __n1166;
          unsigned long r1170 = std__vector_int__std__allocator_int_____size___const(t1168);
          _Bool c1171 = ((t1169 < r1170)) ? 1 : 0;
          _Bool u1172 = !c1171;
          if (u1172) {
            char* cast1173 = (char*)&(_str_3);
            int c1174 = 1263;
            char* cast1175 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1176 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast1173, c1174, cast1175, cast1176);
          }
      _Bool c1177 = 0;
      if (!c1177) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1178 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1168 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1179 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1178->_M_impl) + 0);
  int* t1180 = base1179->_M_start;
  unsigned long t1181 = __n1166;
  int* ptr1182 = &(t1180)[t1181];
  __retval1167 = ptr1182;
  int* t1183 = __retval1167;
  return t1183;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1184) {
bb1185:
  struct std__vector_int__std__allocator_int__* this1186;
  this1186 = v1184;
  struct std__vector_int__std__allocator_int__* t1187 = this1186;
    struct std___Vector_base_int__std__allocator_int__* base1188 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1187 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1189 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1188->_M_impl) + 0);
    int* t1190 = base1189->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1191 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1187 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1192 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1191->_M_impl) + 0);
    int* t1193 = base1192->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1194 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1187 + 0);
    struct std__allocator_int_* r1195 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1194);
    void_std___Destroy_int___int_(t1190, t1193, r1195);
  {
    struct std___Vector_base_int__std__allocator_int__* base1196 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1187 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1196);
  }
  return;
}

// function: main
int main() {
bb1197:
  int __retval1198;
  int first1199[5];
  int second1200[5];
  struct std__vector_int__std__allocator_int__ v1201;
  struct std__allocator_int_ ref_tmp01202;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1203;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11204;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01205;
  int c1206 = 0;
  __retval1198 = c1206;
  // array copy
  __builtin_memcpy(first1199, __const_main_first, (unsigned long)5 * sizeof(__const_main_first[0]));
  // array copy
  __builtin_memcpy(second1200, __const_main_second, (unsigned long)5 * sizeof(__const_main_second[0]));
  unsigned long c1207 = 10;
  std__allocator_int___allocator_2(&ref_tmp01202);
    std__vector_int__std__allocator_int_____vector(&v1201, c1207, &ref_tmp01202);
  {
    std__allocator_int____allocator(&ref_tmp01202);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1203);
    int* cast1208 = (int*)&(first1199);
    int* cast1209 = (int*)&(first1199);
    int c1210 = 5;
    int* ptr1211 = &(cast1209)[c1210];
    void_std__sort_int__(cast1208, ptr1211);
    int* cast1212 = (int*)&(second1200);
    int* cast1213 = (int*)&(second1200);
    int c1214 = 5;
    int* ptr1215 = &(cast1213)[c1214];
    void_std__sort_int__(cast1212, ptr1215);
    int* cast1216 = (int*)&(first1199);
    int* cast1217 = (int*)&(first1199);
    int c1218 = 5;
    int* ptr1219 = &(cast1217)[c1218];
    int* cast1220 = (int*)&(second1200);
    int* cast1221 = (int*)&(second1200);
    int c1222 = 5;
    int* ptr1223 = &(cast1221)[c1222];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1224 = std__vector_int__std__allocator_int_____begin(&v1201);
    agg_tmp01205 = r1224;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1225 = agg_tmp01205;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1226 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__set_symmetric_difference_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast1216, ptr1219, cast1220, ptr1223, t1225);
    ref_tmp11204 = r1226;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1227 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1203, &ref_tmp11204);
    unsigned long c1228 = 5;
    int* r1229 = std__vector_int__std__allocator_int_____operator__(&v1201, c1228);
    int t1230 = *r1229;
    int c1231 = 50;
    _Bool c1232 = ((t1230 != c1231)) ? 1 : 0;
    if (c1232) {
    } else {
      char* cast1233 = (char*)&(_str);
      char* c1234 = _str_1;
      unsigned int c1235 = 26;
      char* cast1236 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1233, c1234, c1235, cast1236);
    }
    int c1237 = 0;
    __retval1198 = c1237;
    int t1238 = __retval1198;
    int ret_val1239 = t1238;
    {
      std__vector_int__std__allocator_int______vector(&v1201);
    }
    return ret_val1239;
  int t1240 = __retval1198;
  return t1240;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1241) {
bb1242:
  struct std____new_allocator_int_* this1243;
  this1243 = v1241;
  struct std____new_allocator_int_* t1244 = this1243;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1245, unsigned long* v1246) {
bb1247:
  unsigned long* __a1248;
  unsigned long* __b1249;
  unsigned long* __retval1250;
  __a1248 = v1245;
  __b1249 = v1246;
    unsigned long* t1251 = __b1249;
    unsigned long t1252 = *t1251;
    unsigned long* t1253 = __a1248;
    unsigned long t1254 = *t1253;
    _Bool c1255 = ((t1252 < t1254)) ? 1 : 0;
    if (c1255) {
      unsigned long* t1256 = __b1249;
      __retval1250 = t1256;
      unsigned long* t1257 = __retval1250;
      return t1257;
    }
  unsigned long* t1258 = __a1248;
  __retval1250 = t1258;
  unsigned long* t1259 = __retval1250;
  return t1259;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1260) {
bb1261:
  struct std__allocator_int_* __a1262;
  unsigned long __retval1263;
  unsigned long __diffmax1264;
  unsigned long __allocmax1265;
  __a1262 = v1260;
  unsigned long c1266 = 2305843009213693951;
  __diffmax1264 = c1266;
  unsigned long c1267 = 4611686018427387903;
  __allocmax1265 = c1267;
  unsigned long* r1268 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1264, &__allocmax1265);
  unsigned long t1269 = *r1268;
  __retval1263 = t1269;
  unsigned long t1270 = __retval1263;
  return t1270;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1271, struct std__allocator_int_* v1272) {
bb1273:
  struct std__allocator_int_* this1274;
  struct std__allocator_int_* __a1275;
  this1274 = v1271;
  __a1275 = v1272;
  struct std__allocator_int_* t1276 = this1274;
  struct std____new_allocator_int_* base1277 = (struct std____new_allocator_int_*)((char *)t1276 + 0);
  struct std__allocator_int_* t1278 = __a1275;
  struct std____new_allocator_int_* base1279 = (struct std____new_allocator_int_*)((char *)t1278 + 0);
  std____new_allocator_int_____new_allocator(base1277, base1279);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1280, struct std__allocator_int_* v1281) {
bb1282:
  unsigned long __n1283;
  struct std__allocator_int_* __a1284;
  unsigned long __retval1285;
  __n1283 = v1280;
  __a1284 = v1281;
    struct std__allocator_int_ ref_tmp01286;
    _Bool tmp_exprcleanup1287;
    unsigned long t1288 = __n1283;
    struct std__allocator_int_* t1289 = __a1284;
    std__allocator_int___allocator(&ref_tmp01286, t1289);
      unsigned long r1290 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01286);
      _Bool c1291 = ((t1288 > r1290)) ? 1 : 0;
      tmp_exprcleanup1287 = c1291;
    {
      std__allocator_int____allocator(&ref_tmp01286);
    }
    _Bool t1292 = tmp_exprcleanup1287;
    if (t1292) {
      char* cast1293 = (char*)&(_str_2);
      std____throw_length_error(cast1293);
    }
  unsigned long t1294 = __n1283;
  __retval1285 = t1294;
  unsigned long t1295 = __retval1285;
  return t1295;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1296, struct std__allocator_int_* v1297) {
bb1298:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1299;
  struct std__allocator_int_* __a1300;
  this1299 = v1296;
  __a1300 = v1297;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1301 = this1299;
  struct std__allocator_int_* base1302 = (struct std__allocator_int_*)((char *)t1301 + 0);
  struct std__allocator_int_* t1303 = __a1300;
  std__allocator_int___allocator(base1302, t1303);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1304 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1301 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1304);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1305:
  _Bool __retval1306;
    _Bool c1307 = 0;
    __retval1306 = c1307;
    _Bool t1308 = __retval1306;
    return t1308;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1309) {
bb1310:
  struct std____new_allocator_int_* this1311;
  unsigned long __retval1312;
  this1311 = v1309;
  struct std____new_allocator_int_* t1313 = this1311;
  unsigned long c1314 = 9223372036854775807;
  unsigned long c1315 = 4;
  unsigned long b1316 = c1314 / c1315;
  __retval1312 = b1316;
  unsigned long t1317 = __retval1312;
  return t1317;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1318, unsigned long v1319, void* v1320) {
bb1321:
  struct std____new_allocator_int_* this1322;
  unsigned long __n1323;
  void* unnamed1324;
  int* __retval1325;
  this1322 = v1318;
  __n1323 = v1319;
  unnamed1324 = v1320;
  struct std____new_allocator_int_* t1326 = this1322;
    unsigned long t1327 = __n1323;
    unsigned long r1328 = std____new_allocator_int____M_max_size___const(t1326);
    _Bool c1329 = ((t1327 > r1328)) ? 1 : 0;
    if (c1329) {
        unsigned long t1330 = __n1323;
        unsigned long c1331 = -1;
        unsigned long c1332 = 4;
        unsigned long b1333 = c1331 / c1332;
        _Bool c1334 = ((t1330 > b1333)) ? 1 : 0;
        if (c1334) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1335 = 4;
    unsigned long c1336 = 16;
    _Bool c1337 = ((c1335 > c1336)) ? 1 : 0;
    if (c1337) {
      unsigned long __al1338;
      unsigned long c1339 = 4;
      __al1338 = c1339;
      unsigned long t1340 = __n1323;
      unsigned long c1341 = 4;
      unsigned long b1342 = t1340 * c1341;
      unsigned long t1343 = __al1338;
      void* r1344 = operator_new_2(b1342, t1343);
      int* cast1345 = (int*)r1344;
      __retval1325 = cast1345;
      int* t1346 = __retval1325;
      return t1346;
    }
  unsigned long t1347 = __n1323;
  unsigned long c1348 = 4;
  unsigned long b1349 = t1347 * c1348;
  void* r1350 = operator_new(b1349);
  int* cast1351 = (int*)r1350;
  __retval1325 = cast1351;
  int* t1352 = __retval1325;
  return t1352;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1353, unsigned long v1354) {
bb1355:
  struct std__allocator_int_* this1356;
  unsigned long __n1357;
  int* __retval1358;
  this1356 = v1353;
  __n1357 = v1354;
  struct std__allocator_int_* t1359 = this1356;
    _Bool r1360 = std____is_constant_evaluated();
    if (r1360) {
        unsigned long t1361 = __n1357;
        unsigned long c1362 = 4;
        unsigned long ovr1363;
        _Bool ovf1364 = __builtin_mul_overflow(t1361, c1362, &ovr1363);
        __n1357 = ovr1363;
        if (ovf1364) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1365 = __n1357;
      void* r1366 = operator_new(t1365);
      int* cast1367 = (int*)r1366;
      __retval1358 = cast1367;
      int* t1368 = __retval1358;
      return t1368;
    }
  struct std____new_allocator_int_* base1369 = (struct std____new_allocator_int_*)((char *)t1359 + 0);
  unsigned long t1370 = __n1357;
  void* c1371 = ((void*)0);
  int* r1372 = std____new_allocator_int___allocate(base1369, t1370, c1371);
  __retval1358 = r1372;
  int* t1373 = __retval1358;
  return t1373;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1374, unsigned long v1375) {
bb1376:
  struct std__allocator_int_* __a1377;
  unsigned long __n1378;
  int* __retval1379;
  __a1377 = v1374;
  __n1378 = v1375;
  struct std__allocator_int_* t1380 = __a1377;
  unsigned long t1381 = __n1378;
  int* r1382 = std__allocator_int___allocate(t1380, t1381);
  __retval1379 = r1382;
  int* t1383 = __retval1379;
  return t1383;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1384, unsigned long v1385) {
bb1386:
  struct std___Vector_base_int__std__allocator_int__* this1387;
  unsigned long __n1388;
  int* __retval1389;
  this1387 = v1384;
  __n1388 = v1385;
  struct std___Vector_base_int__std__allocator_int__* t1390 = this1387;
  unsigned long t1391 = __n1388;
  unsigned long c1392 = 0;
  _Bool c1393 = ((t1391 != c1392)) ? 1 : 0;
  int* ternary1394;
  if (c1393) {
    struct std__allocator_int_* base1395 = (struct std__allocator_int_*)((char *)&(t1390->_M_impl) + 0);
    unsigned long t1396 = __n1388;
    int* r1397 = std__allocator_traits_std__allocator_int_____allocate(base1395, t1396);
    ternary1394 = (int*)r1397;
  } else {
    int* c1398 = ((void*)0);
    ternary1394 = (int*)c1398;
  }
  __retval1389 = ternary1394;
  int* t1399 = __retval1389;
  return t1399;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1400, unsigned long v1401) {
bb1402:
  struct std___Vector_base_int__std__allocator_int__* this1403;
  unsigned long __n1404;
  this1403 = v1400;
  __n1404 = v1401;
  struct std___Vector_base_int__std__allocator_int__* t1405 = this1403;
  unsigned long t1406 = __n1404;
  int* r1407 = std___Vector_base_int__std__allocator_int______M_allocate(t1405, t1406);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1408 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1405->_M_impl) + 0);
  base1408->_M_start = r1407;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1409 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1405->_M_impl) + 0);
  int* t1410 = base1409->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1411 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1405->_M_impl) + 0);
  base1411->_M_finish = t1410;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1412 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1405->_M_impl) + 0);
  int* t1413 = base1412->_M_start;
  unsigned long t1414 = __n1404;
  int* ptr1415 = &(t1413)[t1414];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1416 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1405->_M_impl) + 0);
  base1416->_M_end_of_storage = ptr1415;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1417) {
bb1418:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1419;
  this1419 = v1417;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1420 = this1419;
  {
    struct std__allocator_int_* base1421 = (struct std__allocator_int_*)((char *)t1420 + 0);
    std__allocator_int____allocator(base1421);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1422, unsigned long v1423, struct std__allocator_int_* v1424) {
bb1425:
  struct std___Vector_base_int__std__allocator_int__* this1426;
  unsigned long __n1427;
  struct std__allocator_int_* __a1428;
  this1426 = v1422;
  __n1427 = v1423;
  __a1428 = v1424;
  struct std___Vector_base_int__std__allocator_int__* t1429 = this1426;
  struct std__allocator_int_* t1430 = __a1428;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1429->_M_impl, t1430);
    unsigned long t1431 = __n1427;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1429, t1431);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1432:
  _Bool __retval1433;
    _Bool c1434 = 0;
    __retval1433 = c1434;
    _Bool t1435 = __retval1433;
    return t1435;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1436, int** v1437) {
bb1438:
  struct std___UninitDestroyGuard_int____void_* this1439;
  int** __first1440;
  this1439 = v1436;
  __first1440 = v1437;
  struct std___UninitDestroyGuard_int____void_* t1441 = this1439;
  int** t1442 = __first1440;
  int* t1443 = *t1442;
  t1441->_M_first = t1443;
  int** t1444 = __first1440;
  t1441->_M_cur = t1444;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1445) {
bb1446:
  int* __location1447;
  int* __retval1448;
  void* __loc1449;
  __location1447 = v1445;
  int* t1450 = __location1447;
  void* cast1451 = (void*)t1450;
  __loc1449 = cast1451;
    void* t1452 = __loc1449;
    int* cast1453 = (int*)t1452;
    int c1454 = 0;
    *cast1453 = c1454;
    __retval1448 = cast1453;
    int* t1455 = __retval1448;
    return t1455;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1456) {
bb1457:
  int* __p1458;
  __p1458 = v1456;
    _Bool r1459 = std____is_constant_evaluated();
    if (r1459) {
      int* t1460 = __p1458;
      int* r1461 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1460);
      return;
    }
  int* t1462 = __p1458;
  void* cast1463 = (void*)t1462;
  int* cast1464 = (int*)cast1463;
  int c1465 = 0;
  *cast1464 = c1465;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1466) {
bb1467:
  struct std___UninitDestroyGuard_int____void_* this1468;
  this1468 = v1466;
  struct std___UninitDestroyGuard_int____void_* t1469 = this1468;
  int** c1470 = ((void*)0);
  t1469->_M_cur = c1470;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1471) {
bb1472:
  struct std___UninitDestroyGuard_int____void_* this1473;
  this1473 = v1471;
  struct std___UninitDestroyGuard_int____void_* t1474 = this1473;
    int** t1475 = t1474->_M_cur;
    int** c1476 = ((void*)0);
    _Bool c1477 = ((t1475 != c1476)) ? 1 : 0;
    if (c1477) {
      int* t1478 = t1474->_M_first;
      int** t1479 = t1474->_M_cur;
      int* t1480 = *t1479;
      void_std___Destroy_int__(t1478, t1480);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v1481, unsigned long v1482) {
bb1483:
  int* __first1484;
  unsigned long __n1485;
  int* __retval1486;
  struct std___UninitDestroyGuard_int____void_ __guard1487;
  __first1484 = v1481;
  __n1485 = v1482;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1487, &__first1484);
      while (1) {
        unsigned long t1489 = __n1485;
        unsigned long c1490 = 0;
        _Bool c1491 = ((t1489 > c1490)) ? 1 : 0;
        if (!c1491) break;
        int* t1492 = __first1484;
        void_std___Construct_int_(t1492);
      for_step1488: ;
        unsigned long t1493 = __n1485;
        unsigned long u1494 = t1493 - 1;
        __n1485 = u1494;
        int* t1495 = __first1484;
        int c1496 = 1;
        int* ptr1497 = &(t1495)[c1496];
        __first1484 = ptr1497;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1487);
    int* t1498 = __first1484;
    __retval1486 = t1498;
    int* t1499 = __retval1486;
    int* ret_val1500 = t1499;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1487);
    }
    return ret_val1500;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1501, int* v1502, int* v1503) {
bb1504:
  int* __first1505;
  int* __last1506;
  int* __value1507;
  _Bool __load_outside_loop1508;
  int __val1509;
  __first1505 = v1501;
  __last1506 = v1502;
  __value1507 = v1503;
  _Bool c1510 = 1;
  __load_outside_loop1508 = c1510;
  int* t1511 = __value1507;
  int t1512 = *t1511;
  __val1509 = t1512;
    while (1) {
      int* t1514 = __first1505;
      int* t1515 = __last1506;
      _Bool c1516 = ((t1514 != t1515)) ? 1 : 0;
      if (!c1516) break;
      int t1517 = __val1509;
      int* t1518 = __first1505;
      *t1518 = t1517;
    for_step1513: ;
      int* t1519 = __first1505;
      int c1520 = 1;
      int* ptr1521 = &(t1519)[c1520];
      __first1505 = ptr1521;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1522, int* v1523, int* v1524) {
bb1525:
  int* __first1526;
  int* __last1527;
  int* __value1528;
  __first1526 = v1522;
  __last1527 = v1523;
  __value1528 = v1524;
  int* t1529 = __first1526;
  int* t1530 = __last1527;
  int* t1531 = __value1528;
  void_std____fill_a1_int___int_(t1529, t1530, t1531);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v1532, unsigned long v1533, int* v1534, struct std__random_access_iterator_tag v1535) {
bb1536:
  int* __first1537;
  unsigned long __n1538;
  int* __value1539;
  struct std__random_access_iterator_tag unnamed1540;
  int* __retval1541;
  __first1537 = v1532;
  __n1538 = v1533;
  __value1539 = v1534;
  unnamed1540 = v1535;
    unsigned long t1542 = __n1538;
    unsigned long c1543 = 0;
    _Bool c1544 = ((t1542 <= c1543)) ? 1 : 0;
    if (c1544) {
      int* t1545 = __first1537;
      __retval1541 = t1545;
      int* t1546 = __retval1541;
      return t1546;
    }
  int* t1547 = __first1537;
  int* t1548 = __first1537;
  unsigned long t1549 = __n1538;
  int* ptr1550 = &(t1548)[t1549];
  int* t1551 = __value1539;
  void_std____fill_a_int___int_(t1547, ptr1550, t1551);
  int* t1552 = __first1537;
  unsigned long t1553 = __n1538;
  int* ptr1554 = &(t1552)[t1553];
  __retval1541 = ptr1554;
  int* t1555 = __retval1541;
  return t1555;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1556) {
bb1557:
  unsigned long __n1558;
  unsigned long __retval1559;
  __n1558 = v1556;
  unsigned long t1560 = __n1558;
  __retval1559 = t1560;
  unsigned long t1561 = __retval1559;
  return t1561;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1562) {
bb1563:
  int** unnamed1564;
  struct std__random_access_iterator_tag __retval1565;
  unnamed1564 = v1562;
  struct std__random_access_iterator_tag t1566 = __retval1565;
  return t1566;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1567, unsigned long v1568, int* v1569) {
bb1570:
  int* __first1571;
  unsigned long __n1572;
  int* __value1573;
  int* __retval1574;
  struct std__random_access_iterator_tag agg_tmp01575;
  __first1571 = v1567;
  __n1572 = v1568;
  __value1573 = v1569;
  int* t1576 = __first1571;
  unsigned long t1577 = __n1572;
  unsigned long r1578 = std____size_to_integer(t1577);
  int* t1579 = __value1573;
  struct std__random_access_iterator_tag r1580 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1571);
  agg_tmp01575 = r1580;
  struct std__random_access_iterator_tag t1581 = agg_tmp01575;
  int* r1582 = int__std____fill_n_a_int___unsigned_long__int_(t1576, r1578, t1579, t1581);
  __retval1574 = r1582;
  int* t1583 = __retval1574;
  return t1583;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v1584, unsigned long v1585) {
bb1586:
  int* __first1587;
  unsigned long __n1588;
  int* __retval1589;
  __first1587 = v1584;
  __n1588 = v1585;
    unsigned long t1590 = __n1588;
    unsigned long c1591 = 0;
    _Bool c1592 = ((t1590 > c1591)) ? 1 : 0;
    if (c1592) {
      int* __val1593;
      int* t1594 = __first1587;
      __val1593 = t1594;
      int* t1595 = __val1593;
      void_std___Construct_int_(t1595);
      int* t1596 = __first1587;
      int c1597 = 1;
      int* ptr1598 = &(t1596)[c1597];
      __first1587 = ptr1598;
      int* t1599 = __first1587;
      unsigned long t1600 = __n1588;
      unsigned long c1601 = 1;
      unsigned long b1602 = t1600 - c1601;
      int* t1603 = __val1593;
      int* r1604 = int__std__fill_n_int___unsigned_long__int_(t1599, b1602, t1603);
      __first1587 = r1604;
    }
  int* t1605 = __first1587;
  __retval1589 = t1605;
  int* t1606 = __retval1589;
  return t1606;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v1607, unsigned long v1608) {
bb1609:
  int* __first1610;
  unsigned long __n1611;
  int* __retval1612;
  _Bool __can_fill1613;
  __first1610 = v1607;
  __n1611 = v1608;
    _Bool r1614 = std__is_constant_evaluated();
    if (r1614) {
      int* t1615 = __first1610;
      unsigned long t1616 = __n1611;
      int* r1617 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t1615, t1616);
      __retval1612 = r1617;
      int* t1618 = __retval1612;
      return t1618;
    }
  _Bool c1619 = 1;
  __can_fill1613 = c1619;
  int* t1620 = __first1610;
  unsigned long t1621 = __n1611;
  int* r1622 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t1620, t1621);
  __retval1612 = r1622;
  int* t1623 = __retval1612;
  return t1623;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v1624, unsigned long v1625, struct std__allocator_int_* v1626) {
bb1627:
  int* __first1628;
  unsigned long __n1629;
  struct std__allocator_int_* unnamed1630;
  int* __retval1631;
  __first1628 = v1624;
  __n1629 = v1625;
  unnamed1630 = v1626;
  int* t1632 = __first1628;
  unsigned long t1633 = __n1629;
  int* r1634 = int__std____uninitialized_default_n_int___unsigned_long_(t1632, t1633);
  __retval1631 = r1634;
  int* t1635 = __retval1631;
  return t1635;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1636) {
bb1637:
  struct std___Vector_base_int__std__allocator_int__* this1638;
  struct std__allocator_int_* __retval1639;
  this1638 = v1636;
  struct std___Vector_base_int__std__allocator_int__* t1640 = this1638;
  struct std__allocator_int_* base1641 = (struct std__allocator_int_*)((char *)&(t1640->_M_impl) + 0);
  __retval1639 = base1641;
  struct std__allocator_int_* t1642 = __retval1639;
  return t1642;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v1643, unsigned long v1644) {
bb1645:
  struct std__vector_int__std__allocator_int__* this1646;
  unsigned long __n1647;
  this1646 = v1643;
  __n1647 = v1644;
  struct std__vector_int__std__allocator_int__* t1648 = this1646;
  struct std___Vector_base_int__std__allocator_int__* base1649 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1648 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1650 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1649->_M_impl) + 0);
  int* t1651 = base1650->_M_start;
  unsigned long t1652 = __n1647;
  struct std___Vector_base_int__std__allocator_int__* base1653 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1648 + 0);
  struct std__allocator_int_* r1654 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1653);
  int* r1655 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1651, t1652, r1654);
  struct std___Vector_base_int__std__allocator_int__* base1656 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1648 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1657 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1656->_M_impl) + 0);
  base1657->_M_finish = r1655;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1658, int* v1659, unsigned long v1660) {
bb1661:
  struct std____new_allocator_int_* this1662;
  int* __p1663;
  unsigned long __n1664;
  this1662 = v1658;
  __p1663 = v1659;
  __n1664 = v1660;
  struct std____new_allocator_int_* t1665 = this1662;
    unsigned long c1666 = 4;
    unsigned long c1667 = 16;
    _Bool c1668 = ((c1666 > c1667)) ? 1 : 0;
    if (c1668) {
      int* t1669 = __p1663;
      void* cast1670 = (void*)t1669;
      unsigned long t1671 = __n1664;
      unsigned long c1672 = 4;
      unsigned long b1673 = t1671 * c1672;
      unsigned long c1674 = 4;
      operator_delete_3(cast1670, b1673, c1674);
      return;
    }
  int* t1675 = __p1663;
  void* cast1676 = (void*)t1675;
  unsigned long t1677 = __n1664;
  unsigned long c1678 = 4;
  unsigned long b1679 = t1677 * c1678;
  operator_delete_2(cast1676, b1679);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1680, int* v1681, unsigned long v1682) {
bb1683:
  struct std__allocator_int_* this1684;
  int* __p1685;
  unsigned long __n1686;
  this1684 = v1680;
  __p1685 = v1681;
  __n1686 = v1682;
  struct std__allocator_int_* t1687 = this1684;
    _Bool r1688 = std____is_constant_evaluated();
    if (r1688) {
      int* t1689 = __p1685;
      void* cast1690 = (void*)t1689;
      operator_delete(cast1690);
      return;
    }
  struct std____new_allocator_int_* base1691 = (struct std____new_allocator_int_*)((char *)t1687 + 0);
  int* t1692 = __p1685;
  unsigned long t1693 = __n1686;
  std____new_allocator_int___deallocate(base1691, t1692, t1693);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1694, int* v1695, unsigned long v1696) {
bb1697:
  struct std__allocator_int_* __a1698;
  int* __p1699;
  unsigned long __n1700;
  __a1698 = v1694;
  __p1699 = v1695;
  __n1700 = v1696;
  struct std__allocator_int_* t1701 = __a1698;
  int* t1702 = __p1699;
  unsigned long t1703 = __n1700;
  std__allocator_int___deallocate(t1701, t1702, t1703);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1704, int* v1705, unsigned long v1706) {
bb1707:
  struct std___Vector_base_int__std__allocator_int__* this1708;
  int* __p1709;
  unsigned long __n1710;
  this1708 = v1704;
  __p1709 = v1705;
  __n1710 = v1706;
  struct std___Vector_base_int__std__allocator_int__* t1711 = this1708;
    int* t1712 = __p1709;
    _Bool cast1713 = (_Bool)t1712;
    if (cast1713) {
      struct std__allocator_int_* base1714 = (struct std__allocator_int_*)((char *)&(t1711->_M_impl) + 0);
      int* t1715 = __p1709;
      unsigned long t1716 = __n1710;
      std__allocator_traits_std__allocator_int_____deallocate(base1714, t1715, t1716);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1717) {
bb1718:
  struct std___Vector_base_int__std__allocator_int__* this1719;
  this1719 = v1717;
  struct std___Vector_base_int__std__allocator_int__* t1720 = this1719;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1721 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1720->_M_impl) + 0);
    int* t1722 = base1721->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1723 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1720->_M_impl) + 0);
    int* t1724 = base1723->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1725 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1720->_M_impl) + 0);
    int* t1726 = base1725->_M_start;
    long diff1727 = t1724 - t1726;
    unsigned long cast1728 = (unsigned long)diff1727;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1720, t1722, cast1728);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1720->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1729, struct std____new_allocator_int_* v1730) {
bb1731:
  struct std____new_allocator_int_* this1732;
  struct std____new_allocator_int_* unnamed1733;
  this1732 = v1729;
  unnamed1733 = v1730;
  struct std____new_allocator_int_* t1734 = this1732;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1735) {
bb1736:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1737;
  this1737 = v1735;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1738 = this1737;
  int* c1739 = ((void*)0);
  t1738->_M_start = c1739;
  int* c1740 = ((void*)0);
  t1738->_M_finish = c1740;
  int* c1741 = ((void*)0);
  t1738->_M_end_of_storage = c1741;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1742) {
bb1743:
  int* __location1744;
  __location1744 = v1742;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1745, int* v1746) {
bb1747:
  int* __first1748;
  int* __last1749;
  __first1748 = v1745;
  __last1749 = v1746;
      _Bool r1750 = std____is_constant_evaluated();
      if (r1750) {
          while (1) {
            int* t1752 = __first1748;
            int* t1753 = __last1749;
            _Bool c1754 = ((t1752 != t1753)) ? 1 : 0;
            if (!c1754) break;
            int* t1755 = __first1748;
            void_std__destroy_at_int_(t1755);
          for_step1751: ;
            int* t1756 = __first1748;
            int c1757 = 1;
            int* ptr1758 = &(t1756)[c1757];
            __first1748 = ptr1758;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1759, int* v1760, struct std__allocator_int_* v1761) {
bb1762:
  int* __first1763;
  int* __last1764;
  struct std__allocator_int_* unnamed1765;
  __first1763 = v1759;
  __last1764 = v1760;
  unnamed1765 = v1761;
  int* t1766 = __first1763;
  int* t1767 = __last1764;
  void_std___Destroy_int__(t1766, t1767);
  return;
}

