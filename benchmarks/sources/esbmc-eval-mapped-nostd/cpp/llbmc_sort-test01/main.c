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
struct MyClass { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_MyClass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Val_comp_iter_MyClass_ { unsigned char __field0; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int __const_main_myints[4] = {32, 71, 12, 45};
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEET_S9_S9_S9_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_S9_T0__agg_tmp3;
struct std____cmp_cat____unspec __const__ZStssRKSt15_Deque_iteratorIiRiPiES4__agg_tmp1;
struct MyClass MyLess;
char _str[15] = "d[i] <= d[i+1]";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_sort-test01/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[48] = "cannot create std::deque larger than max_size()";
char _str_3[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__deque_int__std__allocator_int_____deque_int___void_(struct std__deque_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size();
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* p0, int** p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___3(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__operator__4(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
void __gnu_cxx____ops___Iter_comp_val_MyClass____Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_MyClass_* p0, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* p1);
_Bool MyClass__operator__(struct MyClass* p0, int p1, int p2);
_Bool bool___gnu_cxx____ops___Iter_comp_val_MyClass___operator___std___Deque_iterator_int__int___int____int_(struct __gnu_cxx____ops___Iter_comp_val_MyClass_* p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
void void_std____push_heap_std___Deque_iterator_int__int___int____long__int____gnu_cxx____ops___Iter_comp_val_MyClass___(struct std___Deque_iterator_int__int____int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_val_MyClass_* p4);
void void_std____adjust_heap_std___Deque_iterator_int__int___int____long__int____gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p4);
void void_std____make_heap_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* p2);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
_Bool std__operator___2(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering std__operator___(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void void_std____pop_heap_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___4(struct std___Deque_iterator_int__int____int___* p0);
void void_std____heap_select_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* p0);
void void_std____sort_heap_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* p2);
void void_std____partial_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p3);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std____move_median_to_first_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std___Deque_iterator_int__int____int___ p3, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p4);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____unguarded_partition_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p3);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____unguarded_partition_pivot_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p2);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void void_std____introsort_loop_std___Deque_iterator_int__int___int____long____gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, long p2, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p3);
int int_std____countl_zero_unsigned_long_(unsigned long p0);
int int_std____bit_width_unsigned_long_(unsigned long p0);
long long_std____lg_long_(long p0);
long std__operator__2(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___ p1);
long* long_const__std__min_long_(long* p0, long* p1);
_Bool std__is_constant_evaluated();
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(int* p0, int* p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
_Bool bool___gnu_cxx____ops___Val_comp_iter_MyClass___operator___int__std___Deque_iterator_int__int___int____(struct __gnu_cxx____ops___Val_comp_iter_MyClass_* p0, int* p1, struct std___Deque_iterator_int__int____int___ p2);
void void_std____unguarded_linear_insert_std___Deque_iterator_int__int___int______gnu_cxx____ops___Val_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct __gnu_cxx____ops___Val_comp_iter_MyClass_ p1);
void __gnu_cxx____ops___Val_comp_iter_MyClass____Val_comp_iter(struct __gnu_cxx____ops___Val_comp_iter_MyClass_* p0, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* p1);
struct __gnu_cxx____ops___Val_comp_iter_MyClass_ __gnu_cxx____ops___Val_comp_iter_MyClass____gnu_cxx____ops____val_comp_iter_MyClass_(struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p0);
void void_std____insertion_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p2);
void void_std____unguarded_insertion_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p2);
void void_std____final_insertion_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p2);
void void_std____sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void __gnu_cxx____ops___Iter_comp_iter_MyClass____Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* p0, struct MyClass p1);
struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __gnu_cxx____ops___Iter_comp_iter_MyClass____gnu_cxx____ops____iter_comp_iter_MyClass_(struct MyClass p0);
void void_std__sort_std___Deque_iterator_int__int___int____MyClass_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct MyClass p2);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0, struct std__allocator_int_* p1);
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator_int_(struct std__allocator_int___* p0, struct std__allocator_int_* p1);
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* p0, unsigned long p1, void* p2);
int** std__allocator_int____allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_int____deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
extern void std____throw_length_error(char* p0);
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
extern int __gxx_personality_v0();
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
void void_std__advance_int___unsigned_long_(int** p0, unsigned long p1);
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std__allocator_int_* p2);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0, int* p1, int** p2);
void void_std__deque_int__std__allocator_int______M_range_initialize_int__(struct std__deque_int__std__allocator_int__* p0, int* p1, int* p2, struct std__forward_iterator_tag p3);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);

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

// function: _ZNSt5dequeIiSaIiEEC2IPivEET_S4_RKS0_
void std__deque_int__std__allocator_int_____deque_int___void_(struct std__deque_int__std__allocator_int__* v5, int* v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std__deque_int__std__allocator_int__* this10;
  int* __first11;
  int* __last12;
  struct std__allocator_int_* __a13;
  struct std__forward_iterator_tag agg_tmp014;
  struct std__random_access_iterator_tag ref_tmp015;
  this10 = v5;
  __first11 = v6;
  __last12 = v7;
  __a13 = v8;
  struct std__deque_int__std__allocator_int__* t16 = this10;
  struct std___Deque_base_int__std__allocator_int__* base17 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t16 + 0);
  struct std__allocator_int_* t18 = __a13;
  std___Deque_base_int__std__allocator_int______Deque_base(base17, t18);
  if (__cir_exc_active) {
    return;
  }
    int* t19 = __first11;
    int* t20 = __last12;
    struct std__random_access_iterator_tag r21 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first11);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base22 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t16 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base22);
      }
      return;
    }
    ref_tmp015 = r21;
    struct std__forward_iterator_tag* base23 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp015) + 0);
    struct std__forward_iterator_tag t24 = agg_tmp014;
    void_std__deque_int__std__allocator_int______M_range_initialize_int__(t16, t19, t20, t24);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base25 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t16 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base25);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v26) {
bb27:
  struct std__allocator_int_* this28;
  this28 = v26;
  struct std__allocator_int_* t29 = this28;
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v30, struct std___Deque_iterator_int__int____int___* v31) {
bb32:
  struct std___Deque_iterator_int__int____int___* __x33;
  struct std___Deque_iterator_int__int____int___* __y34;
  _Bool __retval35;
  __x33 = v30;
  __y34 = v31;
  struct std___Deque_iterator_int__int____int___* t36 = __x33;
  int* t37 = t36->_M_cur;
  struct std___Deque_iterator_int__int____int___* t38 = __y34;
  int* t39 = t38->_M_cur;
  _Bool c40 = ((t37 == t39)) ? 1 : 0;
  __retval35 = c40;
  _Bool t41 = __retval35;
  return t41;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v42) {
bb43:
  unsigned long __size44;
  unsigned long __retval45;
  __size44 = v42;
  unsigned long t46 = __size44;
  unsigned long c47 = 512;
  _Bool c48 = ((t46 < c47)) ? 1 : 0;
  unsigned long ternary49;
  if (c48) {
    unsigned long c50 = 512;
    unsigned long t51 = __size44;
    unsigned long b52 = c50 / t51;
    ternary49 = (unsigned long)b52;
  } else {
    unsigned long c53 = 1;
    ternary49 = (unsigned long)c53;
  }
  __retval45 = ternary49;
  unsigned long t54 = __retval45;
  return t54;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb55:
  unsigned long __retval56;
  unsigned long c57 = 4;
  unsigned long r58 = std____deque_buf_size(c57);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval56 = r58;
  unsigned long t59 = __retval56;
  return t59;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v60, int** v61) {
bb62:
  struct std___Deque_iterator_int__int____int___* this63;
  int** __new_node64;
  this63 = v60;
  __new_node64 = v61;
  struct std___Deque_iterator_int__int____int___* t65 = this63;
  int** t66 = __new_node64;
  t65->_M_node = t66;
  int** t67 = __new_node64;
  int* t68 = *t67;
  t65->_M_first = t68;
  int* t69 = t65->_M_first;
  unsigned long r70 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast71 = (long)r70;
  int* ptr72 = &(t69)[cast71];
  t65->_M_last = ptr72;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEpLEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___3(struct std___Deque_iterator_int__int____int___* v73, long v74) {
bb75:
  struct std___Deque_iterator_int__int____int___* this76;
  long __n77;
  struct std___Deque_iterator_int__int____int___* __retval78;
  long __offset79;
  this76 = v73;
  __n77 = v74;
  struct std___Deque_iterator_int__int____int___* t80 = this76;
  long t81 = __n77;
  int* t82 = t80->_M_cur;
  int* t83 = t80->_M_first;
  long diff84 = t82 - t83;
  long b85 = t81 + diff84;
  __offset79 = b85;
    long t86 = __offset79;
    long c87 = 0;
    _Bool c88 = ((t86 >= c87)) ? 1 : 0;
    _Bool ternary89;
    if (c88) {
      long t90 = __offset79;
      unsigned long r91 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast92 = (long)r91;
      _Bool c93 = ((t90 < cast92)) ? 1 : 0;
      ternary89 = (_Bool)c93;
    } else {
      _Bool c94 = 0;
      ternary89 = (_Bool)c94;
    }
    if (ternary89) {
      long t95 = __n77;
      int* t96 = t80->_M_cur;
      int* ptr97 = &(t96)[t95];
      t80->_M_cur = ptr97;
    } else {
      long __node_offset98;
      long t99 = __offset79;
      long c100 = 0;
      _Bool c101 = ((t99 > c100)) ? 1 : 0;
      long ternary102;
      if (c101) {
        long t103 = __offset79;
        unsigned long r104 = std___Deque_iterator_int__int___int_____S_buffer_size();
        long cast105 = (long)r104;
        long b106 = t103 / cast105;
        ternary102 = (long)b106;
      } else {
        long t107 = __offset79;
        long u108 = -t107;
        long c109 = 1;
        long b110 = u108 - c109;
        unsigned long cast111 = (unsigned long)b110;
        unsigned long r112 = std___Deque_iterator_int__int___int_____S_buffer_size();
        unsigned long b113 = cast111 / r112;
        long cast114 = (long)b113;
        long u115 = -cast114;
        long c116 = 1;
        long b117 = u115 - c116;
        ternary102 = (long)b117;
      }
      __node_offset98 = ternary102;
      int** t118 = t80->_M_node;
      long t119 = __node_offset98;
      int** ptr120 = &(t118)[t119];
      std___Deque_iterator_int__int___int_____M_set_node(t80, ptr120);
      int* t121 = t80->_M_first;
      long t122 = __offset79;
      long t123 = __node_offset98;
      unsigned long r124 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast125 = (long)r124;
      long b126 = t123 * cast125;
      long b127 = t122 - b126;
      int* ptr128 = &(t121)[b127];
      t80->_M_cur = ptr128;
    }
  __retval78 = t80;
  struct std___Deque_iterator_int__int____int___* t129 = __retval78;
  return t129;
}

// function: _ZStplRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__4(struct std___Deque_iterator_int__int____int___* v130, long v131) {
bb132:
  struct std___Deque_iterator_int__int____int___* __x133;
  long __n134;
  struct std___Deque_iterator_int__int____int___ __retval135;
  __x133 = v130;
  __n134 = v131;
  struct std___Deque_iterator_int__int____int___* t136 = __x133;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval135, t136);
  long t137 = __n134;
  struct std___Deque_iterator_int__int____int___* r138 = std___Deque_iterator_int__int___int____operator___3(&__retval135, t137);
  struct std___Deque_iterator_int__int____int___ t139 = __retval135;
  return t139;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v140) {
bb141:
  struct std___Deque_iterator_int__int____int___* this142;
  int* __retval143;
  this142 = v140;
  struct std___Deque_iterator_int__int____int___* t144 = this142;
  int* t145 = t144->_M_cur;
  __retval143 = t145;
  int* t146 = __retval143;
  return t146;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valI7MyClassEC2EONS0_15_Iter_comp_iterIS2_EE
void __gnu_cxx____ops___Iter_comp_val_MyClass____Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_MyClass_* v147, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* v148) {
bb149:
  struct __gnu_cxx____ops___Iter_comp_val_MyClass_* this150;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* __comp151;
  this150 = v147;
  __comp151 = v148;
  return;
}

// function: _ZN7MyClassclEii
_Bool MyClass__operator__(struct MyClass* v152, int v153, int v154) {
bb155:
  struct MyClass* this156;
  int i157;
  int j158;
  _Bool __retval159;
  this156 = v152;
  i157 = v153;
  j158 = v154;
  struct MyClass* t160 = this156;
  int t161 = i157;
  int t162 = j158;
  _Bool c163 = ((t161 < t162)) ? 1 : 0;
  __retval159 = c163;
  _Bool t164 = __retval159;
  return t164;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valI7MyClassEclISt15_Deque_iteratorIiRiPiEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_comp_val_MyClass___operator___std___Deque_iterator_int__int___int____int_(struct __gnu_cxx____ops___Iter_comp_val_MyClass_* v165, struct std___Deque_iterator_int__int____int___ v166, int* v167) {
bb168:
  struct __gnu_cxx____ops___Iter_comp_val_MyClass_* this169;
  struct std___Deque_iterator_int__int____int___ __it170;
  int* __val171;
  _Bool __retval172;
  this169 = v165;
  __it170 = v166;
  __val171 = v167;
  struct __gnu_cxx____ops___Iter_comp_val_MyClass_* t173 = this169;
  struct MyClass* cast174 = (struct MyClass*)t173;
  int* r175 = std___Deque_iterator_int__int___int____operator____const(&__it170);
  int t176 = *r175;
  int* t177 = __val171;
  int t178 = *t177;
  _Bool r179 = MyClass__operator__(cast174, t176, t178);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval172 = r179;
  _Bool t180 = __retval172;
  return t180;
}

// function: _ZSt11__push_heapISt15_Deque_iteratorIiRiPiEliN9__gnu_cxx5__ops14_Iter_comp_valI7MyClassEEEvT_T0_SA_T1_RT2_
void void_std____push_heap_std___Deque_iterator_int__int___int____long__int____gnu_cxx____ops___Iter_comp_val_MyClass___(struct std___Deque_iterator_int__int____int___ v181, long v182, long v183, int v184, struct __gnu_cxx____ops___Iter_comp_val_MyClass_* v185) {
bb186:
  struct std___Deque_iterator_int__int____int___ __first187;
  long __holeIndex188;
  long __topIndex189;
  int __value190;
  struct __gnu_cxx____ops___Iter_comp_val_MyClass_* __comp191;
  long __parent192;
  struct std___Deque_iterator_int__int____int___ ref_tmp2193;
  __first187 = v181;
  __holeIndex188 = v182;
  __topIndex189 = v183;
  __value190 = v184;
  __comp191 = v185;
  long t194 = __holeIndex188;
  long c195 = 1;
  long b196 = t194 - c195;
  long c197 = 2;
  long b198 = b196 / c197;
  __parent192 = b198;
    while (1) {
      long t199 = __holeIndex188;
      long t200 = __topIndex189;
      _Bool c201 = ((t199 > t200)) ? 1 : 0;
      _Bool ternary202;
      if (c201) {
        struct std___Deque_iterator_int__int____int___ agg_tmp0203;
        struct __gnu_cxx____ops___Iter_comp_val_MyClass_* t204 = __comp191;
        long t205 = __parent192;
        struct std___Deque_iterator_int__int____int___ r206 = std__operator__4(&__first187, t205);
        agg_tmp0203 = r206;
        struct std___Deque_iterator_int__int____int___ t207 = agg_tmp0203;
        _Bool r208 = bool___gnu_cxx____ops___Iter_comp_val_MyClass___operator___std___Deque_iterator_int__int___int____int_(t204, t207, &__value190);
        if (__cir_exc_active) {
          return;
        }
        ternary202 = (_Bool)r208;
      } else {
        _Bool c209 = 0;
        ternary202 = (_Bool)c209;
      }
      if (!ternary202) break;
        struct std___Deque_iterator_int__int____int___ ref_tmp0210;
        struct std___Deque_iterator_int__int____int___ ref_tmp1211;
        long t212 = __parent192;
        struct std___Deque_iterator_int__int____int___ r213 = std__operator__4(&__first187, t212);
        ref_tmp0210 = r213;
        int* r214 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0210);
        int t215 = *r214;
        long t216 = __holeIndex188;
        struct std___Deque_iterator_int__int____int___ r217 = std__operator__4(&__first187, t216);
        ref_tmp1211 = r217;
        int* r218 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp1211);
        *r218 = t215;
        long t219 = __parent192;
        __holeIndex188 = t219;
        long t220 = __holeIndex188;
        long c221 = 1;
        long b222 = t220 - c221;
        long c223 = 2;
        long b224 = b222 / c223;
        __parent192 = b224;
    }
  int t225 = __value190;
  long t226 = __holeIndex188;
  struct std___Deque_iterator_int__int____int___ r227 = std__operator__4(&__first187, t226);
  ref_tmp2193 = r227;
  int* r228 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp2193);
  *r228 = t225;
  return;
}

// function: _ZSt13__adjust_heapISt15_Deque_iteratorIiRiPiEliN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_T0_SA_T1_T2_
void void_std____adjust_heap_std___Deque_iterator_int__int___int____long__int____gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v229, long v230, long v231, int v232, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v233) {
bb234:
  struct std___Deque_iterator_int__int____int___ __first235;
  long __holeIndex236;
  long __len237;
  int __value238;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp239;
  long __topIndex240;
  long __secondChild241;
  struct __gnu_cxx____ops___Iter_comp_val_MyClass_ __cmp242;
  struct std___Deque_iterator_int__int____int___ agg_tmp2243;
  __first235 = v229;
  __holeIndex236 = v230;
  __len237 = v231;
  __value238 = v232;
  __comp239 = v233;
  long t244 = __holeIndex236;
  __topIndex240 = t244;
  long t245 = __holeIndex236;
  __secondChild241 = t245;
    while (1) {
      long t246 = __secondChild241;
      long t247 = __len237;
      long c248 = 1;
      long b249 = t247 - c248;
      long c250 = 2;
      long b251 = b249 / c250;
      _Bool c252 = ((t246 < b251)) ? 1 : 0;
      if (!c252) break;
        struct std___Deque_iterator_int__int____int___ ref_tmp0253;
        struct std___Deque_iterator_int__int____int___ ref_tmp1254;
        long c255 = 2;
        long t256 = __secondChild241;
        long c257 = 1;
        long b258 = t256 + c257;
        long b259 = c255 * b258;
        __secondChild241 = b259;
          struct std___Deque_iterator_int__int____int___ agg_tmp0260;
          struct std___Deque_iterator_int__int____int___ agg_tmp1261;
          long t262 = __secondChild241;
          struct std___Deque_iterator_int__int____int___ r263 = std__operator__4(&__first235, t262);
          agg_tmp0260 = r263;
          long t264 = __secondChild241;
          long c265 = 1;
          long b266 = t264 - c265;
          struct std___Deque_iterator_int__int____int___ r267 = std__operator__4(&__first235, b266);
          agg_tmp1261 = r267;
          struct std___Deque_iterator_int__int____int___ t268 = agg_tmp0260;
          struct std___Deque_iterator_int__int____int___ t269 = agg_tmp1261;
          _Bool r270 = bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(&__comp239, t268, t269);
          if (__cir_exc_active) {
            return;
          }
          if (r270) {
            long t271 = __secondChild241;
            long u272 = t271 - 1;
            __secondChild241 = u272;
          }
        long t273 = __secondChild241;
        struct std___Deque_iterator_int__int____int___ r274 = std__operator__4(&__first235, t273);
        ref_tmp0253 = r274;
        int* r275 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0253);
        int t276 = *r275;
        long t277 = __holeIndex236;
        struct std___Deque_iterator_int__int____int___ r278 = std__operator__4(&__first235, t277);
        ref_tmp1254 = r278;
        int* r279 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp1254);
        *r279 = t276;
        long t280 = __secondChild241;
        __holeIndex236 = t280;
    }
    long t281 = __len237;
    long c282 = 1;
    long b283 = t281 & c282;
    long c284 = 0;
    _Bool c285 = ((b283 == c284)) ? 1 : 0;
    _Bool ternary286;
    if (c285) {
      long t287 = __secondChild241;
      long t288 = __len237;
      long c289 = 2;
      long b290 = t288 - c289;
      long c291 = 2;
      long b292 = b290 / c291;
      _Bool c293 = ((t287 == b292)) ? 1 : 0;
      ternary286 = (_Bool)c293;
    } else {
      _Bool c294 = 0;
      ternary286 = (_Bool)c294;
    }
    if (ternary286) {
      struct std___Deque_iterator_int__int____int___ ref_tmp2295;
      struct std___Deque_iterator_int__int____int___ ref_tmp3296;
      long c297 = 2;
      long t298 = __secondChild241;
      long c299 = 1;
      long b300 = t298 + c299;
      long b301 = c297 * b300;
      __secondChild241 = b301;
      long t302 = __secondChild241;
      long c303 = 1;
      long b304 = t302 - c303;
      struct std___Deque_iterator_int__int____int___ r305 = std__operator__4(&__first235, b304);
      ref_tmp2295 = r305;
      int* r306 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp2295);
      int t307 = *r306;
      long t308 = __holeIndex236;
      struct std___Deque_iterator_int__int____int___ r309 = std__operator__4(&__first235, t308);
      ref_tmp3296 = r309;
      int* r310 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp3296);
      *r310 = t307;
      long t311 = __secondChild241;
      long c312 = 1;
      long b313 = t311 - c312;
      __holeIndex236 = b313;
    }
  __gnu_cxx____ops___Iter_comp_val_MyClass____Iter_comp_val(&__cmp242, &__comp239);
  if (__cir_exc_active) {
    return;
  }
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp2243, &__first235);
  long t314 = __holeIndex236;
  long t315 = __topIndex240;
  int t316 = __value238;
  struct std___Deque_iterator_int__int____int___ t317 = agg_tmp2243;
  void_std____push_heap_std___Deque_iterator_int__int___int____long__int____gnu_cxx____ops___Iter_comp_val_MyClass___(t317, t314, t315, t316, &__cmp242);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt11__make_heapISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_RT0_
void void_std____make_heap_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v318, struct std___Deque_iterator_int__int____int___ v319, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* v320) {
bb321:
  struct std___Deque_iterator_int__int____int___ __first322;
  struct std___Deque_iterator_int__int____int___ __last323;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* __comp324;
  long __len325;
  long __parent326;
  __first322 = v318;
  __last323 = v319;
  __comp324 = v320;
    long r327 = std__operator__2(&__last323, &__first322);
    long c328 = 2;
    _Bool c329 = ((r327 < c328)) ? 1 : 0;
    if (c329) {
      return;
    }
  long r330 = std__operator__2(&__last323, &__first322);
  __len325 = r330;
  long t331 = __len325;
  long c332 = 2;
  long b333 = t331 - c332;
  long c334 = 2;
  long b335 = b333 / c334;
  __parent326 = b335;
    while (1) {
      _Bool c336 = 1;
      if (!c336) break;
        int __value337;
        struct std___Deque_iterator_int__int____int___ ref_tmp0338;
        struct std___Deque_iterator_int__int____int___ agg_tmp0339;
        struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp1340;
        long t341 = __parent326;
        struct std___Deque_iterator_int__int____int___ r342 = std__operator__4(&__first322, t341);
        ref_tmp0338 = r342;
        int* r343 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0338);
        int t344 = *r343;
        __value337 = t344;
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0339, &__first322);
        long t345 = __parent326;
        long t346 = __len325;
        int t347 = __value337;
        struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* t348 = __comp324;
        agg_tmp1340 = *t348; // copy
        struct std___Deque_iterator_int__int____int___ t349 = agg_tmp0339;
        struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t350 = agg_tmp1340;
        void_std____adjust_heap_std___Deque_iterator_int__int___int____long__int____gnu_cxx____ops___Iter_comp_iter_MyClass___(t349, t345, t346, t347, t350);
        if (__cir_exc_active) {
          return;
        }
          long t351 = __parent326;
          long c352 = 0;
          _Bool c353 = ((t351 == c352)) ? 1 : 0;
          if (c353) {
            return;
          }
        long t354 = __parent326;
        long u355 = t354 - 1;
        __parent326 = u355;
    }
  return;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v356, struct std____cmp_cat____unspec v357) {
bb358:
  struct std__strong_ordering __v359;
  struct std____cmp_cat____unspec unnamed360;
  _Bool __retval361;
  __v359 = v356;
  unnamed360 = v357;
  char t362 = __v359._M_value;
  int cast363 = (int)t362;
  int c364 = 0;
  _Bool c365 = ((cast363 < c364)) ? 1 : 0;
  __retval361 = c365;
  _Bool t366 = __retval361;
  return t366;
}

// function: _ZSteqSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator___2(struct std__strong_ordering v367, struct std____cmp_cat____unspec v368) {
bb369:
  struct std__strong_ordering __v370;
  struct std____cmp_cat____unspec unnamed371;
  _Bool __retval372;
  __v370 = v367;
  unnamed371 = v368;
  char t373 = __v370._M_value;
  int cast374 = (int)t373;
  int c375 = 0;
  _Bool c376 = ((cast374 == c375)) ? 1 : 0;
  __retval372 = c376;
  _Bool t377 = __retval372;
  return t377;
}

// function: _ZStssRKSt15_Deque_iteratorIiRiPiES4_
struct std__strong_ordering std__operator___(struct std___Deque_iterator_int__int____int___* v378, struct std___Deque_iterator_int__int____int___* v379) {
bb380:
  struct std___Deque_iterator_int__int____int___* __x381;
  struct std___Deque_iterator_int__int____int___* __y382;
  struct std__strong_ordering __retval383;
  __x381 = v378;
  __y382 = v379;
    struct std__strong_ordering agg_tmp0384;
    struct std____cmp_cat____unspec agg_tmp1385;
    struct std___Deque_iterator_int__int____int___* t386 = __x381;
    int** t387 = t386->_M_node;
    struct std___Deque_iterator_int__int____int___* t388 = __y382;
    int** t389 = t388->_M_node;
    char c390 = -1;
    char c391 = 0;
    char c392 = 1;
    _Bool c393 = ((t387 < t389)) ? 1 : 0;
    char sel394 = c393 ? c390 : c392;
    _Bool c395 = ((t387 == t389)) ? 1 : 0;
    char sel396 = c395 ? c391 : sel394;
    __retval383._M_value = sel396;
    agg_tmp0384 = __retval383; // copy
    agg_tmp1385 = *&__const__ZStssRKSt15_Deque_iteratorIiRiPiES4__agg_tmp1; // copy
    struct std__strong_ordering t397 = agg_tmp0384;
    struct std____cmp_cat____unspec t398 = agg_tmp1385;
    _Bool r399 = std__operator___2(t397, t398);
    _Bool u400 = !r399;
    if (u400) {
      struct std__strong_ordering t401 = __retval383;
      return t401;
    }
  struct std___Deque_iterator_int__int____int___* t402 = __x381;
  int* t403 = t402->_M_cur;
  struct std___Deque_iterator_int__int____int___* t404 = __y382;
  int* t405 = t404->_M_cur;
  char c406 = -1;
  char c407 = 0;
  char c408 = 1;
  _Bool c409 = ((t403 < t405)) ? 1 : 0;
  char sel410 = c409 ? c406 : c408;
  _Bool c411 = ((t403 == t405)) ? 1 : 0;
  char sel412 = c411 ? c407 : sel410;
  __retval383._M_value = sel412;
  struct std__strong_ordering t413 = __retval383;
  return t413;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEclISt15_Deque_iteratorIiRiPiES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* v414, struct std___Deque_iterator_int__int____int___ v415, struct std___Deque_iterator_int__int____int___ v416) {
bb417:
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* this418;
  struct std___Deque_iterator_int__int____int___ __it1419;
  struct std___Deque_iterator_int__int____int___ __it2420;
  _Bool __retval421;
  this418 = v414;
  __it1419 = v415;
  __it2420 = v416;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* t422 = this418;
  struct MyClass* cast423 = (struct MyClass*)t422;
  int* r424 = std___Deque_iterator_int__int___int____operator____const(&__it1419);
  int t425 = *r424;
  int* r426 = std___Deque_iterator_int__int___int____operator____const(&__it2420);
  int t427 = *r426;
  _Bool r428 = MyClass__operator__(cast423, t425, t427);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval421 = r428;
  _Bool t429 = __retval421;
  return t429;
}

// function: _ZSt10__pop_heapISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_S9_RT0_
void void_std____pop_heap_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v430, struct std___Deque_iterator_int__int____int___ v431, struct std___Deque_iterator_int__int____int___ v432, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* v433) {
bb434:
  struct std___Deque_iterator_int__int____int___ __first435;
  struct std___Deque_iterator_int__int____int___ __last436;
  struct std___Deque_iterator_int__int____int___ __result437;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* __comp438;
  int __value439;
  struct std___Deque_iterator_int__int____int___ agg_tmp0440;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp1441;
  __first435 = v430;
  __last436 = v431;
  __result437 = v432;
  __comp438 = v433;
  int* r442 = std___Deque_iterator_int__int___int____operator____const(&__result437);
  int t443 = *r442;
  __value439 = t443;
  int* r444 = std___Deque_iterator_int__int___int____operator____const(&__first435);
  int t445 = *r444;
  int* r446 = std___Deque_iterator_int__int___int____operator____const(&__result437);
  *r446 = t445;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0440, &__first435);
  long c447 = 0;
  long r448 = std__operator__2(&__last436, &__first435);
  int t449 = __value439;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* t450 = __comp438;
  agg_tmp1441 = *t450; // copy
  struct std___Deque_iterator_int__int____int___ t451 = agg_tmp0440;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t452 = agg_tmp1441;
  void_std____adjust_heap_std___Deque_iterator_int__int___int____long__int____gnu_cxx____ops___Iter_comp_iter_MyClass___(t451, c447, r448, t449, t452);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___4(struct std___Deque_iterator_int__int____int___* v453) {
bb454:
  struct std___Deque_iterator_int__int____int___* this455;
  struct std___Deque_iterator_int__int____int___* __retval456;
  this455 = v453;
  struct std___Deque_iterator_int__int____int___* t457 = this455;
  int* t458 = t457->_M_cur;
  int c459 = 1;
  int* ptr460 = &(t458)[c459];
  t457->_M_cur = ptr460;
    int* t461 = t457->_M_cur;
    int* t462 = t457->_M_last;
    _Bool c463 = ((t461 == t462)) ? 1 : 0;
    if (c463) {
      int** t464 = t457->_M_node;
      int c465 = 1;
      int** ptr466 = &(t464)[c465];
      std___Deque_iterator_int__int___int_____M_set_node(t457, ptr466);
      int* t467 = t457->_M_first;
      t457->_M_cur = t467;
    }
  __retval456 = t457;
  struct std___Deque_iterator_int__int____int___* t468 = __retval456;
  return t468;
}

// function: _ZSt13__heap_selectISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_S9_T0_
void void_std____heap_select_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v469, struct std___Deque_iterator_int__int____int___ v470, struct std___Deque_iterator_int__int____int___ v471, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v472) {
bb473:
  struct std___Deque_iterator_int__int____int___ __first474;
  struct std___Deque_iterator_int__int____int___ __middle475;
  struct std___Deque_iterator_int__int____int___ __last476;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp477;
  struct std___Deque_iterator_int__int____int___ agg_tmp0478;
  struct std___Deque_iterator_int__int____int___ agg_tmp1479;
  __first474 = v469;
  __middle475 = v470;
  __last476 = v471;
  __comp477 = v472;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0478, &__first474);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp1479, &__middle475);
  struct std___Deque_iterator_int__int____int___ t480 = agg_tmp0478;
  struct std___Deque_iterator_int__int____int___ t481 = agg_tmp1479;
  void_std____make_heap_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t480, t481, &__comp477);
  if (__cir_exc_active) {
    return;
  }
    struct std___Deque_iterator_int__int____int___ __i482;
    struct std__strong_ordering agg_tmp2483;
    struct std____cmp_cat____unspec agg_tmp3484;
    std___Deque_iterator_int__int___int_____Deque_iterator(&__i482, &__middle475);
    while (1) {
      struct std__strong_ordering r486 = std__operator___(&__i482, &__last476);
      agg_tmp2483 = r486;
      agg_tmp3484 = *&__const__ZSt13__heap_selectISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_S9_T0__agg_tmp3; // copy
      struct std__strong_ordering t487 = agg_tmp2483;
      struct std____cmp_cat____unspec t488 = agg_tmp3484;
      _Bool r489 = std__operator_(t487, t488);
      if (!r489) break;
        struct std___Deque_iterator_int__int____int___ agg_tmp4490;
        struct std___Deque_iterator_int__int____int___ agg_tmp5491;
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp4490, &__i482);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp5491, &__first474);
        struct std___Deque_iterator_int__int____int___ t492 = agg_tmp4490;
        struct std___Deque_iterator_int__int____int___ t493 = agg_tmp5491;
        _Bool r494 = bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(&__comp477, t492, t493);
        if (__cir_exc_active) {
          return;
        }
        if (r494) {
          struct std___Deque_iterator_int__int____int___ agg_tmp6495;
          struct std___Deque_iterator_int__int____int___ agg_tmp7496;
          struct std___Deque_iterator_int__int____int___ agg_tmp8497;
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp6495, &__first474);
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp7496, &__middle475);
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp8497, &__i482);
          struct std___Deque_iterator_int__int____int___ t498 = agg_tmp6495;
          struct std___Deque_iterator_int__int____int___ t499 = agg_tmp7496;
          struct std___Deque_iterator_int__int____int___ t500 = agg_tmp8497;
          void_std____pop_heap_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t498, t499, t500, &__comp477);
          if (__cir_exc_active) {
            return;
          }
        }
    for_step485: ;
      struct std___Deque_iterator_int__int____int___* r501 = std___Deque_iterator_int__int___int____operator___4(&__i482);
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* v502) {
bb503:
  struct std___Deque_iterator_int__int____int___* this504;
  struct std___Deque_iterator_int__int____int___* __retval505;
  this504 = v502;
  struct std___Deque_iterator_int__int____int___* t506 = this504;
    int* t507 = t506->_M_cur;
    int* t508 = t506->_M_first;
    _Bool c509 = ((t507 == t508)) ? 1 : 0;
    if (c509) {
      int** t510 = t506->_M_node;
      int c511 = -1;
      int** ptr512 = &(t510)[c511];
      std___Deque_iterator_int__int___int_____M_set_node(t506, ptr512);
      int* t513 = t506->_M_last;
      t506->_M_cur = t513;
    }
  int* t514 = t506->_M_cur;
  int c515 = -1;
  int* ptr516 = &(t514)[c515];
  t506->_M_cur = ptr516;
  __retval505 = t506;
  struct std___Deque_iterator_int__int____int___* t517 = __retval505;
  return t517;
}

// function: _ZSt11__sort_heapISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_RT0_
void void_std____sort_heap_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v518, struct std___Deque_iterator_int__int____int___ v519, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* v520) {
bb521:
  struct std___Deque_iterator_int__int____int___ __first522;
  struct std___Deque_iterator_int__int____int___ __last523;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* __comp524;
  __first522 = v518;
  __last523 = v519;
  __comp524 = v520;
    while (1) {
      long r525 = std__operator__2(&__last523, &__first522);
      long c526 = 1;
      _Bool c527 = ((r525 > c526)) ? 1 : 0;
      if (!c527) break;
        struct std___Deque_iterator_int__int____int___ agg_tmp0528;
        struct std___Deque_iterator_int__int____int___ agg_tmp1529;
        struct std___Deque_iterator_int__int____int___ agg_tmp2530;
        struct std___Deque_iterator_int__int____int___* r531 = std___Deque_iterator_int__int___int____operator___2(&__last523);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0528, &__first522);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp1529, &__last523);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp2530, &__last523);
        struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* t532 = __comp524;
        struct std___Deque_iterator_int__int____int___ t533 = agg_tmp0528;
        struct std___Deque_iterator_int__int____int___ t534 = agg_tmp1529;
        struct std___Deque_iterator_int__int____int___ t535 = agg_tmp2530;
        void_std____pop_heap_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t533, t534, t535, t532);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZSt14__partial_sortISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_S9_T0_
void void_std____partial_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v536, struct std___Deque_iterator_int__int____int___ v537, struct std___Deque_iterator_int__int____int___ v538, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v539) {
bb540:
  struct std___Deque_iterator_int__int____int___ __first541;
  struct std___Deque_iterator_int__int____int___ __middle542;
  struct std___Deque_iterator_int__int____int___ __last543;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp544;
  struct std___Deque_iterator_int__int____int___ agg_tmp0545;
  struct std___Deque_iterator_int__int____int___ agg_tmp1546;
  struct std___Deque_iterator_int__int____int___ agg_tmp2547;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp3548;
  struct std___Deque_iterator_int__int____int___ agg_tmp4549;
  struct std___Deque_iterator_int__int____int___ agg_tmp5550;
  __first541 = v536;
  __middle542 = v537;
  __last543 = v538;
  __comp544 = v539;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0545, &__first541);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp1546, &__middle542);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp2547, &__last543);
  agg_tmp3548 = __comp544; // copy
  struct std___Deque_iterator_int__int____int___ t551 = agg_tmp0545;
  struct std___Deque_iterator_int__int____int___ t552 = agg_tmp1546;
  struct std___Deque_iterator_int__int____int___ t553 = agg_tmp2547;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t554 = agg_tmp3548;
  void_std____heap_select_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t551, t552, t553, t554);
  if (__cir_exc_active) {
    return;
  }
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp4549, &__first541);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp5550, &__middle542);
  struct std___Deque_iterator_int__int____int___ t555 = agg_tmp4549;
  struct std___Deque_iterator_int__int____int___ t556 = agg_tmp5550;
  void_std____sort_heap_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t555, t556, &__comp544);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v557, int* v558) {
bb559:
  int* __a560;
  int* __b561;
  int __tmp562;
  __a560 = v557;
  __b561 = v558;
  int* t563 = __a560;
  int t564 = *t563;
  __tmp562 = t564;
  int* t565 = __b561;
  int t566 = *t565;
  int* t567 = __a560;
  *t567 = t566;
  int t568 = __tmp562;
  int* t569 = __b561;
  *t569 = t568;
  return;
}

// function: _ZSt9iter_swapISt15_Deque_iteratorIiRiPiES3_EvT_T0_
void void_std__iter_swap_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v570, struct std___Deque_iterator_int__int____int___ v571) {
bb572:
  struct std___Deque_iterator_int__int____int___ __a573;
  struct std___Deque_iterator_int__int____int___ __b574;
  __a573 = v570;
  __b574 = v571;
  int* r575 = std___Deque_iterator_int__int___int____operator____const(&__a573);
  int* r576 = std___Deque_iterator_int__int___int____operator____const(&__b574);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r575, r576);
  return;
}

// function: _ZSt22__move_median_to_firstISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_S9_S9_T0_
void void_std____move_median_to_first_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v577, struct std___Deque_iterator_int__int____int___ v578, struct std___Deque_iterator_int__int____int___ v579, struct std___Deque_iterator_int__int____int___ v580, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v581) {
bb582:
  struct std___Deque_iterator_int__int____int___ __result583;
  struct std___Deque_iterator_int__int____int___ __a584;
  struct std___Deque_iterator_int__int____int___ __b585;
  struct std___Deque_iterator_int__int____int___ __c586;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp587;
  __result583 = v577;
  __a584 = v578;
  __b585 = v579;
  __c586 = v580;
  __comp587 = v581;
    struct std___Deque_iterator_int__int____int___ agg_tmp0588;
    struct std___Deque_iterator_int__int____int___ agg_tmp1589;
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0588, &__a584);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp1589, &__b585);
    struct std___Deque_iterator_int__int____int___ t590 = agg_tmp0588;
    struct std___Deque_iterator_int__int____int___ t591 = agg_tmp1589;
    _Bool r592 = bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(&__comp587, t590, t591);
    if (__cir_exc_active) {
      return;
    }
    if (r592) {
        struct std___Deque_iterator_int__int____int___ agg_tmp2593;
        struct std___Deque_iterator_int__int____int___ agg_tmp3594;
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp2593, &__b585);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp3594, &__c586);
        struct std___Deque_iterator_int__int____int___ t595 = agg_tmp2593;
        struct std___Deque_iterator_int__int____int___ t596 = agg_tmp3594;
        _Bool r597 = bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(&__comp587, t595, t596);
        if (__cir_exc_active) {
          return;
        }
        if (r597) {
          struct std___Deque_iterator_int__int____int___ agg_tmp4598;
          struct std___Deque_iterator_int__int____int___ agg_tmp5599;
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp4598, &__result583);
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp5599, &__b585);
          struct std___Deque_iterator_int__int____int___ t600 = agg_tmp4598;
          struct std___Deque_iterator_int__int____int___ t601 = agg_tmp5599;
          void_std__iter_swap_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t600, t601);
          if (__cir_exc_active) {
            return;
          }
        } else {
            struct std___Deque_iterator_int__int____int___ agg_tmp6602;
            struct std___Deque_iterator_int__int____int___ agg_tmp7603;
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp6602, &__a584);
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp7603, &__c586);
            struct std___Deque_iterator_int__int____int___ t604 = agg_tmp6602;
            struct std___Deque_iterator_int__int____int___ t605 = agg_tmp7603;
            _Bool r606 = bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(&__comp587, t604, t605);
            if (__cir_exc_active) {
              return;
            }
            if (r606) {
              struct std___Deque_iterator_int__int____int___ agg_tmp8607;
              struct std___Deque_iterator_int__int____int___ agg_tmp9608;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp8607, &__result583);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp9608, &__c586);
              struct std___Deque_iterator_int__int____int___ t609 = agg_tmp8607;
              struct std___Deque_iterator_int__int____int___ t610 = agg_tmp9608;
              void_std__iter_swap_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t609, t610);
              if (__cir_exc_active) {
                return;
              }
            } else {
              struct std___Deque_iterator_int__int____int___ agg_tmp10611;
              struct std___Deque_iterator_int__int____int___ agg_tmp11612;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp10611, &__result583);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11612, &__a584);
              struct std___Deque_iterator_int__int____int___ t613 = agg_tmp10611;
              struct std___Deque_iterator_int__int____int___ t614 = agg_tmp11612;
              void_std__iter_swap_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t613, t614);
              if (__cir_exc_active) {
                return;
              }
            }
        }
    } else {
        struct std___Deque_iterator_int__int____int___ agg_tmp12615;
        struct std___Deque_iterator_int__int____int___ agg_tmp13616;
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12615, &__a584);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp13616, &__c586);
        struct std___Deque_iterator_int__int____int___ t617 = agg_tmp12615;
        struct std___Deque_iterator_int__int____int___ t618 = agg_tmp13616;
        _Bool r619 = bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(&__comp587, t617, t618);
        if (__cir_exc_active) {
          return;
        }
        if (r619) {
          struct std___Deque_iterator_int__int____int___ agg_tmp14620;
          struct std___Deque_iterator_int__int____int___ agg_tmp15621;
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp14620, &__result583);
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp15621, &__a584);
          struct std___Deque_iterator_int__int____int___ t622 = agg_tmp14620;
          struct std___Deque_iterator_int__int____int___ t623 = agg_tmp15621;
          void_std__iter_swap_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t622, t623);
          if (__cir_exc_active) {
            return;
          }
        } else {
            struct std___Deque_iterator_int__int____int___ agg_tmp16624;
            struct std___Deque_iterator_int__int____int___ agg_tmp17625;
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp16624, &__b585);
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp17625, &__c586);
            struct std___Deque_iterator_int__int____int___ t626 = agg_tmp16624;
            struct std___Deque_iterator_int__int____int___ t627 = agg_tmp17625;
            _Bool r628 = bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(&__comp587, t626, t627);
            if (__cir_exc_active) {
              return;
            }
            if (r628) {
              struct std___Deque_iterator_int__int____int___ agg_tmp18629;
              struct std___Deque_iterator_int__int____int___ agg_tmp19630;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp18629, &__result583);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp19630, &__c586);
              struct std___Deque_iterator_int__int____int___ t631 = agg_tmp18629;
              struct std___Deque_iterator_int__int____int___ t632 = agg_tmp19630;
              void_std__iter_swap_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t631, t632);
              if (__cir_exc_active) {
                return;
              }
            } else {
              struct std___Deque_iterator_int__int____int___ agg_tmp20633;
              struct std___Deque_iterator_int__int____int___ agg_tmp21634;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp20633, &__result583);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21634, &__b585);
              struct std___Deque_iterator_int__int____int___ t635 = agg_tmp20633;
              struct std___Deque_iterator_int__int____int___ t636 = agg_tmp21634;
              void_std__iter_swap_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t635, t636);
              if (__cir_exc_active) {
                return;
              }
            }
        }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmIEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v637, long v638) {
bb639:
  struct std___Deque_iterator_int__int____int___* this640;
  long __n641;
  struct std___Deque_iterator_int__int____int___* __retval642;
  this640 = v637;
  __n641 = v638;
  struct std___Deque_iterator_int__int____int___* t643 = this640;
  long t644 = __n641;
  long u645 = -t644;
  struct std___Deque_iterator_int__int____int___* r646 = std___Deque_iterator_int__int___int____operator___3(t643, u645);
  __retval642 = r646;
  struct std___Deque_iterator_int__int____int___* t647 = __retval642;
  return t647;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* v648, long v649) {
bb650:
  struct std___Deque_iterator_int__int____int___* __x651;
  long __n652;
  struct std___Deque_iterator_int__int____int___ __retval653;
  __x651 = v648;
  __n652 = v649;
  struct std___Deque_iterator_int__int____int___* t654 = __x651;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval653, t654);
  long t655 = __n652;
  struct std___Deque_iterator_int__int____int___* r656 = std___Deque_iterator_int__int___int____operator__(&__retval653, t655);
  struct std___Deque_iterator_int__int____int___ t657 = __retval653;
  return t657;
}

// function: _ZSt21__unguarded_partitionISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEET_S9_S9_S9_T0_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____unguarded_partition_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v658, struct std___Deque_iterator_int__int____int___ v659, struct std___Deque_iterator_int__int____int___ v660, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v661) {
bb662:
  struct std___Deque_iterator_int__int____int___ __first663;
  struct std___Deque_iterator_int__int____int___ __last664;
  struct std___Deque_iterator_int__int____int___ __pivot665;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp666;
  struct std___Deque_iterator_int__int____int___ __retval667;
  __first663 = v658;
  __last664 = v659;
  __pivot665 = v660;
  __comp666 = v661;
    while (1) {
      _Bool c668 = 1;
      if (!c668) break;
        struct std___Deque_iterator_int__int____int___ agg_tmp6669;
        struct std___Deque_iterator_int__int____int___ agg_tmp7670;
          struct std___Deque_iterator_int__int____int___ agg_tmp0671;
          struct std___Deque_iterator_int__int____int___ agg_tmp1672;
          while (1) {
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0671, &__first663);
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp1672, &__pivot665);
            struct std___Deque_iterator_int__int____int___ t673 = agg_tmp0671;
            struct std___Deque_iterator_int__int____int___ t674 = agg_tmp1672;
            _Bool r675 = bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(&__comp666, t673, t674);
            if (__cir_exc_active) {
              struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (!r675) break;
            struct std___Deque_iterator_int__int____int___* r676 = std___Deque_iterator_int__int___int____operator___4(&__first663);
          }
        struct std___Deque_iterator_int__int____int___* r677 = std___Deque_iterator_int__int___int____operator___2(&__last664);
          struct std___Deque_iterator_int__int____int___ agg_tmp2678;
          struct std___Deque_iterator_int__int____int___ agg_tmp3679;
          while (1) {
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp2678, &__pivot665);
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp3679, &__last664);
            struct std___Deque_iterator_int__int____int___ t680 = agg_tmp2678;
            struct std___Deque_iterator_int__int____int___ t681 = agg_tmp3679;
            _Bool r682 = bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(&__comp666, t680, t681);
            if (__cir_exc_active) {
              struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (!r682) break;
            struct std___Deque_iterator_int__int____int___* r683 = std___Deque_iterator_int__int___int____operator___2(&__last664);
          }
          struct std__strong_ordering agg_tmp4684;
          struct std____cmp_cat____unspec agg_tmp5685;
          struct std__strong_ordering r686 = std__operator___(&__first663, &__last664);
          agg_tmp4684 = r686;
          agg_tmp5685 = *&__const__ZSt21__unguarded_partitionISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEET_S9_S9_S9_T0__agg_tmp5; // copy
          struct std__strong_ordering t687 = agg_tmp4684;
          struct std____cmp_cat____unspec t688 = agg_tmp5685;
          _Bool r689 = std__operator_(t687, t688);
          _Bool u690 = !r689;
          if (u690) {
            std___Deque_iterator_int__int___int_____Deque_iterator(&__retval667, &__first663);
            struct std___Deque_iterator_int__int____int___ t691 = __retval667;
            struct std___Deque_iterator_int__int____int___ ret_val692 = t691;
            return ret_val692;
          }
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp6669, &__first663);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp7670, &__last664);
        struct std___Deque_iterator_int__int____int___ t693 = agg_tmp6669;
        struct std___Deque_iterator_int__int____int___ t694 = agg_tmp7670;
        void_std__iter_swap_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t693, t694);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Deque_iterator_int__int____int___* r695 = std___Deque_iterator_int__int___int____operator___4(&__first663);
    }
  abort();
}

// function: _ZSt27__unguarded_partition_pivotISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEET_S9_S9_T0_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____unguarded_partition_pivot_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v696, struct std___Deque_iterator_int__int____int___ v697, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v698) {
bb699:
  struct std___Deque_iterator_int__int____int___ __first700;
  struct std___Deque_iterator_int__int____int___ __last701;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp702;
  struct std___Deque_iterator_int__int____int___ __retval703;
  struct std___Deque_iterator_int__int____int___ __mid704;
  struct std___Deque_iterator_int__int____int___ agg_tmp0705;
  struct std___Deque_iterator_int__int____int___ agg_tmp1706;
  struct std___Deque_iterator_int__int____int___ agg_tmp2707;
  struct std___Deque_iterator_int__int____int___ agg_tmp3708;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp4709;
  struct std___Deque_iterator_int__int____int___ agg_tmp5710;
  struct std___Deque_iterator_int__int____int___ agg_tmp6711;
  struct std___Deque_iterator_int__int____int___ agg_tmp7712;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp8713;
  __first700 = v696;
  __last701 = v697;
  __comp702 = v698;
  long r714 = std__operator__2(&__last701, &__first700);
  long c715 = 2;
  long b716 = r714 / c715;
  struct std___Deque_iterator_int__int____int___ r717 = std__operator__4(&__first700, b716);
  __mid704 = r717;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0705, &__first700);
  long c718 = 1;
  struct std___Deque_iterator_int__int____int___ r719 = std__operator__4(&__first700, c718);
  agg_tmp1706 = r719;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp2707, &__mid704);
  long c720 = 1;
  struct std___Deque_iterator_int__int____int___ r721 = std__operator__3(&__last701, c720);
  agg_tmp3708 = r721;
  agg_tmp4709 = __comp702; // copy
  struct std___Deque_iterator_int__int____int___ t722 = agg_tmp0705;
  struct std___Deque_iterator_int__int____int___ t723 = agg_tmp1706;
  struct std___Deque_iterator_int__int____int___ t724 = agg_tmp2707;
  struct std___Deque_iterator_int__int____int___ t725 = agg_tmp3708;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t726 = agg_tmp4709;
  void_std____move_median_to_first_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t722, t723, t724, t725, t726);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  long c727 = 1;
  struct std___Deque_iterator_int__int____int___ r728 = std__operator__4(&__first700, c727);
  agg_tmp5710 = r728;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp6711, &__last701);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp7712, &__first700);
  agg_tmp8713 = __comp702; // copy
  struct std___Deque_iterator_int__int____int___ t729 = agg_tmp5710;
  struct std___Deque_iterator_int__int____int___ t730 = agg_tmp6711;
  struct std___Deque_iterator_int__int____int___ t731 = agg_tmp7712;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t732 = agg_tmp8713;
  struct std___Deque_iterator_int__int____int___ r733 = std___Deque_iterator_int__int___int___std____unguarded_partition_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t729, t730, t731, t732);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval703 = r733;
  struct std___Deque_iterator_int__int____int___ t734 = __retval703;
  return t734;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEaSERKS2_
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* v735, struct std___Deque_iterator_int__int____int___* v736) {
bb737:
  struct std___Deque_iterator_int__int____int___* this738;
  struct std___Deque_iterator_int__int____int___* unnamed739;
  struct std___Deque_iterator_int__int____int___* __retval740;
  this738 = v735;
  unnamed739 = v736;
  struct std___Deque_iterator_int__int____int___* t741 = this738;
  struct std___Deque_iterator_int__int____int___* t742 = unnamed739;
  int* t743 = t742->_M_cur;
  t741->_M_cur = t743;
  struct std___Deque_iterator_int__int____int___* t744 = unnamed739;
  int* t745 = t744->_M_first;
  t741->_M_first = t745;
  struct std___Deque_iterator_int__int____int___* t746 = unnamed739;
  int* t747 = t746->_M_last;
  t741->_M_last = t747;
  struct std___Deque_iterator_int__int____int___* t748 = unnamed739;
  int** t749 = t748->_M_node;
  t741->_M_node = t749;
  __retval740 = t741;
  struct std___Deque_iterator_int__int____int___* t750 = __retval740;
  return t750;
}

// function: _ZSt16__introsort_loopISt15_Deque_iteratorIiRiPiElN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_T0_T1_
void void_std____introsort_loop_std___Deque_iterator_int__int___int____long____gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v751, struct std___Deque_iterator_int__int____int___ v752, long v753, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v754) {
bb755:
  struct std___Deque_iterator_int__int____int___ __first756;
  struct std___Deque_iterator_int__int____int___ __last757;
  long __depth_limit758;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp759;
  __first756 = v751;
  __last757 = v752;
  __depth_limit758 = v753;
  __comp759 = v754;
    while (1) {
      long r760 = std__operator__2(&__last757, &__first756);
      long c761 = 16;
      _Bool c762 = ((r760 > c761)) ? 1 : 0;
      if (!c762) break;
        struct std___Deque_iterator_int__int____int___ __cut763;
        struct std___Deque_iterator_int__int____int___ agg_tmp4764;
        struct std___Deque_iterator_int__int____int___ agg_tmp5765;
        struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp6766;
        struct std___Deque_iterator_int__int____int___ agg_tmp7767;
        struct std___Deque_iterator_int__int____int___ agg_tmp8768;
        struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp9769;
          long t770 = __depth_limit758;
          long c771 = 0;
          _Bool c772 = ((t770 == c771)) ? 1 : 0;
          if (c772) {
            struct std___Deque_iterator_int__int____int___ agg_tmp0773;
            struct std___Deque_iterator_int__int____int___ agg_tmp1774;
            struct std___Deque_iterator_int__int____int___ agg_tmp2775;
            struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp3776;
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0773, &__first756);
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp1774, &__last757);
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp2775, &__last757);
            agg_tmp3776 = __comp759; // copy
            struct std___Deque_iterator_int__int____int___ t777 = agg_tmp0773;
            struct std___Deque_iterator_int__int____int___ t778 = agg_tmp1774;
            struct std___Deque_iterator_int__int____int___ t779 = agg_tmp2775;
            struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t780 = agg_tmp3776;
            void_std____partial_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t777, t778, t779, t780);
            if (__cir_exc_active) {
              return;
            }
            return;
          }
        long t781 = __depth_limit758;
        long u782 = t781 - 1;
        __depth_limit758 = u782;
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp4764, &__first756);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp5765, &__last757);
        agg_tmp6766 = __comp759; // copy
        struct std___Deque_iterator_int__int____int___ t783 = agg_tmp4764;
        struct std___Deque_iterator_int__int____int___ t784 = agg_tmp5765;
        struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t785 = agg_tmp6766;
        struct std___Deque_iterator_int__int____int___ r786 = std___Deque_iterator_int__int___int___std____unguarded_partition_pivot_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t783, t784, t785);
        if (__cir_exc_active) {
          return;
        }
        __cut763 = r786;
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp7767, &__cut763);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp8768, &__last757);
        long t787 = __depth_limit758;
        agg_tmp9769 = __comp759; // copy
        struct std___Deque_iterator_int__int____int___ t788 = agg_tmp7767;
        struct std___Deque_iterator_int__int____int___ t789 = agg_tmp8768;
        struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t790 = agg_tmp9769;
        void_std____introsort_loop_std___Deque_iterator_int__int___int____long____gnu_cxx____ops___Iter_comp_iter_MyClass___(t788, t789, t787, t790);
        if (__cir_exc_active) {
          return;
        }
        struct std___Deque_iterator_int__int____int___* r791 = std___Deque_iterator_int__int___int____operator_(&__last757, &__cut763);
    }
  return;
}

// function: _ZSt13__countl_zeroImEiT_
int int_std____countl_zero_unsigned_long_(unsigned long v792) {
bb793:
  unsigned long __x794;
  int __retval795;
  int _Nd796;
  __x794 = v792;
  int c797 = 64;
  _Nd796 = c797;
  unsigned long t798 = __x794;
  unsigned long clz799 = (unsigned long)__builtin_clzll((unsigned long)t798);
  int cast800 = (int)clz799;
  unsigned long c801 = 0;
  _Bool c802 = ((t798 == c801)) ? 1 : 0;
  int t803 = _Nd796;
  int sel804 = c802 ? t803 : cast800;
  __retval795 = sel804;
  int t805 = __retval795;
  return t805;
}

// function: _ZSt11__bit_widthImEiT_
int int_std____bit_width_unsigned_long_(unsigned long v806) {
bb807:
  unsigned long __x808;
  int __retval809;
  int _Nd810;
  __x808 = v806;
  int c811 = 64;
  _Nd810 = c811;
  int t812 = _Nd810;
  unsigned long t813 = __x808;
  int r814 = int_std____countl_zero_unsigned_long_(t813);
  int b815 = t812 - r814;
  __retval809 = b815;
  int t816 = __retval809;
  return t816;
}

// function: _ZSt4__lgIlET_S0_
long long_std____lg_long_(long v817) {
bb818:
  long __n819;
  long __retval820;
  __n819 = v817;
  long t821 = __n819;
  unsigned long cast822 = (unsigned long)t821;
  int r823 = int_std____bit_width_unsigned_long_(cast822);
  int c824 = 1;
  int b825 = r823 - c824;
  long cast826 = (long)b825;
  __retval820 = cast826;
  long t827 = __retval820;
  return t827;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator__2(struct std___Deque_iterator_int__int____int___* v828, struct std___Deque_iterator_int__int____int___* v829) {
bb830:
  struct std___Deque_iterator_int__int____int___* __x831;
  struct std___Deque_iterator_int__int____int___* __y832;
  long __retval833;
  __x831 = v828;
  __y832 = v829;
  unsigned long r834 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast835 = (long)r834;
  struct std___Deque_iterator_int__int____int___* t836 = __x831;
  int** t837 = t836->_M_node;
  struct std___Deque_iterator_int__int____int___* t838 = __y832;
  int** t839 = t838->_M_node;
  long diff840 = t837 - t839;
  struct std___Deque_iterator_int__int____int___* t841 = __x831;
  int** t842 = t841->_M_node;
  _Bool cast843 = (_Bool)t842;
  long cast844 = (long)cast843;
  long b845 = diff840 - cast844;
  long b846 = cast835 * b845;
  struct std___Deque_iterator_int__int____int___* t847 = __x831;
  int* t848 = t847->_M_cur;
  struct std___Deque_iterator_int__int____int___* t849 = __x831;
  int* t850 = t849->_M_first;
  long diff851 = t848 - t850;
  long b852 = b846 + diff851;
  struct std___Deque_iterator_int__int____int___* t853 = __y832;
  int* t854 = t853->_M_last;
  struct std___Deque_iterator_int__int____int___* t855 = __y832;
  int* t856 = t855->_M_cur;
  long diff857 = t854 - t856;
  long b858 = b852 + diff857;
  __retval833 = b858;
  long t859 = __retval833;
  return t859;
}

// function: _ZSt12__niter_wrapISt15_Deque_iteratorIiRiPiEET_RKS4_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___* v860, struct std___Deque_iterator_int__int____int___ v861) {
bb862:
  struct std___Deque_iterator_int__int____int___* unnamed863;
  struct std___Deque_iterator_int__int____int___ __res864;
  struct std___Deque_iterator_int__int____int___ __retval865;
  unnamed863 = v860;
  __res864 = v861;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval865, &__res864);
  struct std___Deque_iterator_int__int____int___ t866 = __retval865;
  return t866;
}

// function: _ZSt3minIlERKT_S2_S2_
long* long_const__std__min_long_(long* v867, long* v868) {
bb869:
  long* __a870;
  long* __b871;
  long* __retval872;
  __a870 = v867;
  __b871 = v868;
    long* t873 = __b871;
    long t874 = *t873;
    long* t875 = __a870;
    long t876 = *t875;
    _Bool c877 = ((t874 < t876)) ? 1 : 0;
    if (c877) {
      long* t878 = __b871;
      __retval872 = t878;
      long* t879 = __retval872;
      return t879;
    }
  long* t880 = __a870;
  __retval872 = t880;
  long* t881 = __retval872;
  return t881;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb882:
  _Bool __retval883;
    _Bool c884 = 0;
    __retval883 = c884;
    _Bool t885 = __retval883;
    return t885;
  abort();
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v886, int* v887, struct std__random_access_iterator_tag v888) {
bb889:
  int* __first890;
  int* __last891;
  struct std__random_access_iterator_tag unnamed892;
  long __retval893;
  __first890 = v886;
  __last891 = v887;
  unnamed892 = v888;
  int* t894 = __last891;
  int* t895 = __first890;
  long diff896 = t894 - t895;
  __retval893 = diff896;
  long t897 = __retval893;
  return t897;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v898) {
bb899:
  int** unnamed900;
  struct std__random_access_iterator_tag __retval901;
  unnamed900 = v898;
  struct std__random_access_iterator_tag t902 = __retval901;
  return t902;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v903, int* v904) {
bb905:
  int* __first906;
  int* __last907;
  long __retval908;
  struct std__random_access_iterator_tag agg_tmp0909;
  __first906 = v903;
  __last907 = v904;
  int* t910 = __first906;
  int* t911 = __last907;
  struct std__random_access_iterator_tag r912 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first906);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0909 = r912;
  struct std__random_access_iterator_tag t913 = agg_tmp0909;
  long r914 = std__iterator_traits_int____difference_type_std____distance_int__(t910, t911, t913);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval908 = r914;
  long t915 = __retval908;
  return t915;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v916, long v917, struct std__random_access_iterator_tag v918) {
bb919:
  int** __i920;
  long __n921;
  struct std__random_access_iterator_tag unnamed922;
  __i920 = v916;
  __n921 = v917;
  unnamed922 = v918;
    long t923 = __n921;
    _Bool isconst924 = 0;
    _Bool ternary925;
    if (isconst924) {
      long t926 = __n921;
      long c927 = 1;
      _Bool c928 = ((t926 == c927)) ? 1 : 0;
      ternary925 = (_Bool)c928;
    } else {
      _Bool c929 = 0;
      ternary925 = (_Bool)c929;
    }
    if (ternary925) {
      int** t930 = __i920;
      int* t931 = *t930;
      int c932 = 1;
      int* ptr933 = &(t931)[c932];
      *t930 = ptr933;
    } else {
        long t934 = __n921;
        _Bool isconst935 = 0;
        _Bool ternary936;
        if (isconst935) {
          long t937 = __n921;
          long c938 = -1;
          _Bool c939 = ((t937 == c938)) ? 1 : 0;
          ternary936 = (_Bool)c939;
        } else {
          _Bool c940 = 0;
          ternary936 = (_Bool)c940;
        }
        if (ternary936) {
          int** t941 = __i920;
          int* t942 = *t941;
          int c943 = -1;
          int* ptr944 = &(t942)[c943];
          *t941 = ptr944;
        } else {
          long t945 = __n921;
          int** t946 = __i920;
          int* t947 = *t946;
          int* ptr948 = &(t947)[t945];
          *t946 = ptr948;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v949, long v950) {
bb951:
  int** __i952;
  long __n953;
  long __d954;
  struct std__random_access_iterator_tag agg_tmp0955;
  __i952 = v949;
  __n953 = v950;
  long t956 = __n953;
  __d954 = t956;
  int** t957 = __i952;
  long t958 = __d954;
  int** t959 = __i952;
  struct std__random_access_iterator_tag r960 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t959);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0955 = r960;
  struct std__random_access_iterator_tag t961 = agg_tmp0955;
  void_std____advance_int___long_(t957, t958, t961);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v962, int** v963) {
bb964:
  int** __out965;
  int** __in966;
  __out965 = v962;
  __in966 = v963;
    int** t967 = __in966;
    int* t968 = *t967;
    int t969 = *t968;
    int** t970 = __out965;
    int* t971 = *t970;
    *t971 = t969;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v972, int* v973, int* v974) {
bb975:
  int* __first976;
  int* __last977;
  int* __result978;
  int* __retval979;
  __first976 = v972;
  __last977 = v973;
  __result978 = v974;
      _Bool r980 = std__is_constant_evaluated();
      if (r980) {
      } else {
          long __n981;
          int* t982 = __first976;
          int* t983 = __last977;
          long r984 = std__iterator_traits_int____difference_type_std__distance_int__(t982, t983);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n981 = r984;
          long t985 = __n981;
          long u986 = -t985;
          void_std__advance_int___long_(&__result978, u986);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
            long t987 = __n981;
            long c988 = 1;
            _Bool c989 = ((t987 > c988)) ? 1 : 0;
            if (c989) {
              int* t990 = __result978;
              void* cast991 = (void*)t990;
              int* t992 = __first976;
              void* cast993 = (void*)t992;
              long t994 = __n981;
              unsigned long cast995 = (unsigned long)t994;
              unsigned long c996 = 4;
              unsigned long b997 = cast995 * c996;
              void* r998 = memmove(cast991, cast993, b997);
            } else {
                long t999 = __n981;
                long c1000 = 1;
                _Bool c1001 = ((t999 == c1000)) ? 1 : 0;
                if (c1001) {
                  void_std____assign_one_true__int___int__(&__result978, &__first976);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int* t1002 = __result978;
          __retval979 = t1002;
          int* t1003 = __retval979;
          return t1003;
      }
    while (1) {
      int* t1004 = __first976;
      int* t1005 = __last977;
      _Bool c1006 = ((t1004 != t1005)) ? 1 : 0;
      if (!c1006) break;
        int* t1007 = __last977;
        int c1008 = -1;
        int* ptr1009 = &(t1007)[c1008];
        __last977 = ptr1009;
        int* t1010 = __result978;
        int c1011 = -1;
        int* ptr1012 = &(t1010)[c1011];
        __result978 = ptr1012;
        void_std____assign_one_true__int___int__(&__result978, &__last977);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
    }
  int* t1013 = __result978;
  __retval979 = t1013;
  int* t1014 = __retval979;
  return t1014;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v1015, int* v1016, int* v1017) {
bb1018:
  int* __first1019;
  int* __last1020;
  int* __result1021;
  int* __retval1022;
  __first1019 = v1015;
  __last1020 = v1016;
  __result1021 = v1017;
  int* t1023 = __first1019;
  int* t1024 = __last1020;
  int* t1025 = __result1021;
  int* r1026 = int__std____copy_move_backward_a2_true__int___int__(t1023, t1024, t1025);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1022 = r1026;
  int* t1027 = __retval1022;
  return t1027;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiiEN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT0_EE7__valueESt15_Deque_iteratorIT1_RS5_PS5_EE6__typeES3_S3_S8_
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(int* v1028, int* v1029, struct std___Deque_iterator_int__int____int___ v1030) {
bb1031:
  int* __first1032;
  int* __last1033;
  struct std___Deque_iterator_int__int____int___ __result1034;
  struct std___Deque_iterator_int__int____int___ __retval1035;
  long __len1036;
  __first1032 = v1028;
  __last1033 = v1029;
  __result1034 = v1030;
  int* t1037 = __last1033;
  int* t1038 = __first1032;
  long diff1039 = t1037 - t1038;
  __len1036 = diff1039;
    while (1) {
      long t1040 = __len1036;
      long c1041 = 0;
      _Bool c1042 = ((t1040 > c1041)) ? 1 : 0;
      if (!c1042) break;
        long __rlen1043;
        int* __rend1044;
        long __clen1045;
        int* t1046 = __result1034._M_cur;
        int* t1047 = __result1034._M_first;
        long diff1048 = t1046 - t1047;
        __rlen1043 = diff1048;
        int* t1049 = __result1034._M_cur;
        __rend1044 = t1049;
          long t1050 = __rlen1043;
          _Bool cast1051 = (_Bool)t1050;
          _Bool u1052 = !cast1051;
          if (u1052) {
            unsigned long r1053 = std___Deque_iterator_int__int___int_____S_buffer_size();
            long cast1054 = (long)r1053;
            __rlen1043 = cast1054;
            int** t1055 = __result1034._M_node;
            int c1056 = -1;
            int** ptr1057 = &(t1055)[c1056];
            int* t1058 = *ptr1057;
            long t1059 = __rlen1043;
            int* ptr1060 = &(t1058)[t1059];
            __rend1044 = ptr1060;
          }
        long* r1061 = long_const__std__min_long_(&__len1036, &__rlen1043);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1062 = *r1061;
        __clen1045 = t1062;
        int* t1063 = __last1033;
        long t1064 = __clen1045;
        long u1065 = -t1064;
        int* ptr1066 = &(t1063)[u1065];
        int* t1067 = __last1033;
        int* t1068 = __rend1044;
        int* r1069 = int__std____copy_move_backward_a1_true__int___int__(ptr1066, t1067, t1068);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1070 = __clen1045;
        int* t1071 = __last1033;
        long u1072 = -t1070;
        int* ptr1073 = &(t1071)[u1072];
        __last1033 = ptr1073;
        long t1074 = __clen1045;
        struct std___Deque_iterator_int__int____int___* r1075 = std___Deque_iterator_int__int___int____operator__(&__result1034, t1074);
        long t1076 = __clen1045;
        long t1077 = __len1036;
        long b1078 = t1077 - t1076;
        __len1036 = b1078;
    }
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1035, &__result1034);
  struct std___Deque_iterator_int__int____int___ t1079 = __retval1035;
  return t1079;
}

// function: _ZSt24__copy_move_backward_ditILb1EiRiPiSt15_Deque_iteratorIiS0_S1_EET3_S2_IT0_T1_T2_ES8_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1080, struct std___Deque_iterator_int__int____int___ v1081, struct std___Deque_iterator_int__int____int___ v1082) {
bb1083:
  struct std___Deque_iterator_int__int____int___ __first1084;
  struct std___Deque_iterator_int__int____int___ __last1085;
  struct std___Deque_iterator_int__int____int___ __result1086;
  struct std___Deque_iterator_int__int____int___ __retval1087;
  struct std___Deque_iterator_int__int____int___ agg_tmp31088;
  __first1084 = v1080;
  __last1085 = v1081;
  __result1086 = v1082;
    int** t1089 = __first1084._M_node;
    int** t1090 = __last1085._M_node;
    _Bool c1091 = ((t1089 != t1090)) ? 1 : 0;
    if (c1091) {
      struct std___Deque_iterator_int__int____int___ ref_tmp01092;
      struct std___Deque_iterator_int__int____int___ agg_tmp01093;
      struct std___Deque_iterator_int__int____int___ agg_tmp21094;
      int* t1095 = __last1085._M_first;
      int* t1096 = __last1085._M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01093, &__result1086);
      struct std___Deque_iterator_int__int____int___ t1097 = agg_tmp01093;
      struct std___Deque_iterator_int__int____int___ r1098 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t1095, t1096, t1097);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp01092 = r1098;
      struct std___Deque_iterator_int__int____int___* r1099 = std___Deque_iterator_int__int___int____operator_(&__result1086, &ref_tmp01092);
        int** __node1100;
        struct std___Deque_iterator_int__int____int___ ref_tmp11101;
        struct std___Deque_iterator_int__int____int___ agg_tmp11102;
        int** t1103 = __last1085._M_node;
        int c1104 = -1;
        int** ptr1105 = &(t1103)[c1104];
        __node1100 = ptr1105;
        while (1) {
          int** t1107 = __node1100;
          int** t1108 = __first1084._M_node;
          _Bool c1109 = ((t1107 != t1108)) ? 1 : 0;
          if (!c1109) break;
          int** t1110 = __node1100;
          int* t1111 = *t1110;
          int** t1112 = __node1100;
          int* t1113 = *t1112;
          unsigned long r1114 = std___Deque_iterator_int__int___int_____S_buffer_size();
          int* ptr1115 = &(t1113)[r1114];
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11102, &__result1086);
          struct std___Deque_iterator_int__int____int___ t1116 = agg_tmp11102;
          struct std___Deque_iterator_int__int____int___ r1117 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t1111, ptr1115, t1116);
          if (__cir_exc_active) {
            struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ref_tmp11101 = r1117;
          struct std___Deque_iterator_int__int____int___* r1118 = std___Deque_iterator_int__int___int____operator_(&__result1086, &ref_tmp11101);
        for_step1106: ;
          int** t1119 = __node1100;
          int c1120 = -1;
          int** ptr1121 = &(t1119)[c1120];
          __node1100 = ptr1121;
        }
      int* t1122 = __first1084._M_cur;
      int* t1123 = __first1084._M_last;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21094, &__result1086);
      struct std___Deque_iterator_int__int____int___ t1124 = agg_tmp21094;
      struct std___Deque_iterator_int__int____int___ r1125 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t1122, t1123, t1124);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1087 = r1125;
      struct std___Deque_iterator_int__int____int___ t1126 = __retval1087;
      return t1126;
    }
  int* t1127 = __first1084._M_cur;
  int* t1128 = __last1085._M_cur;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31088, &__result1086);
  struct std___Deque_iterator_int__int____int___ t1129 = agg_tmp31088;
  struct std___Deque_iterator_int__int____int___ r1130 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t1127, t1128, t1129);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1087 = r1130;
  struct std___Deque_iterator_int__int____int___ t1131 = __retval1087;
  return t1131;
}

// function: _ZSt23__copy_move_backward_a1ILb1EiRiPiiESt15_Deque_iteratorIT3_RS3_PS3_ES2_IT0_T1_T2_ESA_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ v1132, struct std___Deque_iterator_int__int____int___ v1133, struct std___Deque_iterator_int__int____int___ v1134) {
bb1135:
  struct std___Deque_iterator_int__int____int___ __first1136;
  struct std___Deque_iterator_int__int____int___ __last1137;
  struct std___Deque_iterator_int__int____int___ __result1138;
  struct std___Deque_iterator_int__int____int___ __retval1139;
  struct std___Deque_iterator_int__int____int___ agg_tmp01140;
  struct std___Deque_iterator_int__int____int___ agg_tmp11141;
  struct std___Deque_iterator_int__int____int___ agg_tmp21142;
  __first1136 = v1132;
  __last1137 = v1133;
  __result1138 = v1134;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01140, &__first1136);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11141, &__last1137);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21142, &__result1138);
  struct std___Deque_iterator_int__int____int___ t1143 = agg_tmp01140;
  struct std___Deque_iterator_int__int____int___ t1144 = agg_tmp11141;
  struct std___Deque_iterator_int__int____int___ t1145 = agg_tmp21142;
  struct std___Deque_iterator_int__int____int___ r1146 = std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(t1143, t1144, t1145);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1139 = r1146;
  struct std___Deque_iterator_int__int____int___ t1147 = __retval1139;
  return t1147;
}

// function: _ZSt12__niter_baseISt15_Deque_iteratorIiRiPiEET_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1148) {
bb1149:
  struct std___Deque_iterator_int__int____int___ __it1150;
  struct std___Deque_iterator_int__int____int___ __retval1151;
  __it1150 = v1148;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1151, &__it1150);
  struct std___Deque_iterator_int__int____int___ t1152 = __retval1151;
  return t1152;
}

// function: _ZSt22__copy_move_backward_aILb1ESt15_Deque_iteratorIiRiPiES3_ET1_T0_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1153, struct std___Deque_iterator_int__int____int___ v1154, struct std___Deque_iterator_int__int____int___ v1155) {
bb1156:
  struct std___Deque_iterator_int__int____int___ __first1157;
  struct std___Deque_iterator_int__int____int___ __last1158;
  struct std___Deque_iterator_int__int____int___ __result1159;
  struct std___Deque_iterator_int__int____int___ __retval1160;
  struct std___Deque_iterator_int__int____int___ agg_tmp01161;
  struct std___Deque_iterator_int__int____int___ agg_tmp11162;
  struct std___Deque_iterator_int__int____int___ agg_tmp21163;
  struct std___Deque_iterator_int__int____int___ agg_tmp31164;
  struct std___Deque_iterator_int__int____int___ agg_tmp41165;
  struct std___Deque_iterator_int__int____int___ agg_tmp51166;
  struct std___Deque_iterator_int__int____int___ agg_tmp61167;
  __first1157 = v1153;
  __last1158 = v1154;
  __result1159 = v1155;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21163, &__first1157);
  struct std___Deque_iterator_int__int____int___ t1168 = agg_tmp21163;
  struct std___Deque_iterator_int__int____int___ r1169 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1168);
  agg_tmp11162 = r1169;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41165, &__last1158);
  struct std___Deque_iterator_int__int____int___ t1170 = agg_tmp41165;
  struct std___Deque_iterator_int__int____int___ r1171 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1170);
  agg_tmp31164 = r1171;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp61167, &__result1159);
  struct std___Deque_iterator_int__int____int___ t1172 = agg_tmp61167;
  struct std___Deque_iterator_int__int____int___ r1173 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1172);
  agg_tmp51166 = r1173;
  struct std___Deque_iterator_int__int____int___ t1174 = agg_tmp11162;
  struct std___Deque_iterator_int__int____int___ t1175 = agg_tmp31164;
  struct std___Deque_iterator_int__int____int___ t1176 = agg_tmp51166;
  struct std___Deque_iterator_int__int____int___ r1177 = std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(t1174, t1175, t1176);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01161 = r1177;
  struct std___Deque_iterator_int__int____int___ t1178 = agg_tmp01161;
  struct std___Deque_iterator_int__int____int___ r1179 = std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(&__result1159, t1178);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1160 = r1179;
  struct std___Deque_iterator_int__int____int___ t1180 = __retval1160;
  return t1180;
}

// function: _ZSt12__miter_baseISt15_Deque_iteratorIiRiPiEET_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1181) {
bb1182:
  struct std___Deque_iterator_int__int____int___ __it1183;
  struct std___Deque_iterator_int__int____int___ __retval1184;
  __it1183 = v1181;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1184, &__it1183);
  struct std___Deque_iterator_int__int____int___ t1185 = __retval1184;
  return t1185;
}

// function: _ZSt13move_backwardISt15_Deque_iteratorIiRiPiES3_ET0_T_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1186, struct std___Deque_iterator_int__int____int___ v1187, struct std___Deque_iterator_int__int____int___ v1188) {
bb1189:
  struct std___Deque_iterator_int__int____int___ __first1190;
  struct std___Deque_iterator_int__int____int___ __last1191;
  struct std___Deque_iterator_int__int____int___ __result1192;
  struct std___Deque_iterator_int__int____int___ __retval1193;
  struct std___Deque_iterator_int__int____int___ agg_tmp01194;
  struct std___Deque_iterator_int__int____int___ agg_tmp11195;
  struct std___Deque_iterator_int__int____int___ agg_tmp21196;
  struct std___Deque_iterator_int__int____int___ agg_tmp31197;
  struct std___Deque_iterator_int__int____int___ agg_tmp41198;
  __first1190 = v1186;
  __last1191 = v1187;
  __result1192 = v1188;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11195, &__first1190);
  struct std___Deque_iterator_int__int____int___ t1199 = agg_tmp11195;
  struct std___Deque_iterator_int__int____int___ r1200 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t1199);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01194 = r1200;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31197, &__last1191);
  struct std___Deque_iterator_int__int____int___ t1201 = agg_tmp31197;
  struct std___Deque_iterator_int__int____int___ r1202 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t1201);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21196 = r1202;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41198, &__result1192);
  struct std___Deque_iterator_int__int____int___ t1203 = agg_tmp01194;
  struct std___Deque_iterator_int__int____int___ t1204 = agg_tmp21196;
  struct std___Deque_iterator_int__int____int___ t1205 = agg_tmp41198;
  struct std___Deque_iterator_int__int____int___ r1206 = std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t1203, t1204, t1205);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1193 = r1206;
  struct std___Deque_iterator_int__int____int___ t1207 = __retval1193;
  return t1207;
}

// function: _ZN9__gnu_cxx5__ops14_Val_comp_iterI7MyClassEclIiSt15_Deque_iteratorIiRiPiEEEbRT_T0_
_Bool bool___gnu_cxx____ops___Val_comp_iter_MyClass___operator___int__std___Deque_iterator_int__int___int____(struct __gnu_cxx____ops___Val_comp_iter_MyClass_* v1208, int* v1209, struct std___Deque_iterator_int__int____int___ v1210) {
bb1211:
  struct __gnu_cxx____ops___Val_comp_iter_MyClass_* this1212;
  int* __val1213;
  struct std___Deque_iterator_int__int____int___ __it1214;
  _Bool __retval1215;
  this1212 = v1208;
  __val1213 = v1209;
  __it1214 = v1210;
  struct __gnu_cxx____ops___Val_comp_iter_MyClass_* t1216 = this1212;
  struct MyClass* cast1217 = (struct MyClass*)t1216;
  int* t1218 = __val1213;
  int t1219 = *t1218;
  int* r1220 = std___Deque_iterator_int__int___int____operator____const(&__it1214);
  int t1221 = *r1220;
  _Bool r1222 = MyClass__operator__(cast1217, t1219, t1221);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval1215 = r1222;
  _Bool t1223 = __retval1215;
  return t1223;
}

// function: _ZSt25__unguarded_linear_insertISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops14_Val_comp_iterI7MyClassEEEvT_T0_
void void_std____unguarded_linear_insert_std___Deque_iterator_int__int___int______gnu_cxx____ops___Val_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v1224, struct __gnu_cxx____ops___Val_comp_iter_MyClass_ v1225) {
bb1226:
  struct std___Deque_iterator_int__int____int___ __last1227;
  struct __gnu_cxx____ops___Val_comp_iter_MyClass_ __comp1228;
  int __val1229;
  struct std___Deque_iterator_int__int____int___ __next1230;
  __last1227 = v1224;
  __comp1228 = v1225;
  int* r1231 = std___Deque_iterator_int__int___int____operator____const(&__last1227);
  int t1232 = *r1231;
  __val1229 = t1232;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__next1230, &__last1227);
  struct std___Deque_iterator_int__int____int___* r1233 = std___Deque_iterator_int__int___int____operator___2(&__next1230);
    struct std___Deque_iterator_int__int____int___ agg_tmp01234;
    while (1) {
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01234, &__next1230);
      struct std___Deque_iterator_int__int____int___ t1235 = agg_tmp01234;
      _Bool r1236 = bool___gnu_cxx____ops___Val_comp_iter_MyClass___operator___int__std___Deque_iterator_int__int___int____(&__comp1228, &__val1229, t1235);
      if (__cir_exc_active) {
        return;
      }
      if (!r1236) break;
        int* r1237 = std___Deque_iterator_int__int___int____operator____const(&__next1230);
        int t1238 = *r1237;
        int* r1239 = std___Deque_iterator_int__int___int____operator____const(&__last1227);
        *r1239 = t1238;
        struct std___Deque_iterator_int__int____int___* r1240 = std___Deque_iterator_int__int___int____operator_(&__last1227, &__next1230);
        struct std___Deque_iterator_int__int____int___* r1241 = std___Deque_iterator_int__int___int____operator___2(&__next1230);
    }
  int t1242 = __val1229;
  int* r1243 = std___Deque_iterator_int__int___int____operator____const(&__last1227);
  *r1243 = t1242;
  return;
}

// function: _ZN9__gnu_cxx5__ops14_Val_comp_iterI7MyClassEC2EONS0_15_Iter_comp_iterIS2_EE
void __gnu_cxx____ops___Val_comp_iter_MyClass____Val_comp_iter(struct __gnu_cxx____ops___Val_comp_iter_MyClass_* v1244, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* v1245) {
bb1246:
  struct __gnu_cxx____ops___Val_comp_iter_MyClass_* this1247;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* __comp1248;
  this1247 = v1244;
  __comp1248 = v1245;
  return;
}

// function: _ZN9__gnu_cxx5__ops15__val_comp_iterI7MyClassEENS0_14_Val_comp_iterIT_EENS0_15_Iter_comp_iterIS4_EE
struct __gnu_cxx____ops___Val_comp_iter_MyClass_ __gnu_cxx____ops___Val_comp_iter_MyClass____gnu_cxx____ops____val_comp_iter_MyClass_(struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v1249) {
bb1250:
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp1251;
  struct __gnu_cxx____ops___Val_comp_iter_MyClass_ __retval1252;
  __comp1251 = v1249;
  __gnu_cxx____ops___Val_comp_iter_MyClass____Val_comp_iter(&__retval1252, &__comp1251);
  if (__cir_exc_active) {
    struct __gnu_cxx____ops___Val_comp_iter_MyClass_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____ops___Val_comp_iter_MyClass_ t1253 = __retval1252;
  return t1253;
}

// function: _ZSt16__insertion_sortISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_T0_
void void_std____insertion_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v1254, struct std___Deque_iterator_int__int____int___ v1255, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v1256) {
bb1257:
  struct std___Deque_iterator_int__int____int___ __first1258;
  struct std___Deque_iterator_int__int____int___ __last1259;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp1260;
  __first1258 = v1254;
  __last1259 = v1255;
  __comp1260 = v1256;
    _Bool r1261 = std__operator__(&__first1258, &__last1259);
    if (r1261) {
      return;
    }
    struct std___Deque_iterator_int__int____int___ __i1262;
    long c1263 = 1;
    struct std___Deque_iterator_int__int____int___ r1264 = std__operator__4(&__first1258, c1263);
    __i1262 = r1264;
    while (1) {
      _Bool r1266 = std__operator__(&__i1262, &__last1259);
      _Bool u1267 = !r1266;
      if (!u1267) break;
          struct std___Deque_iterator_int__int____int___ agg_tmp01268;
          struct std___Deque_iterator_int__int____int___ agg_tmp11269;
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01268, &__i1262);
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11269, &__first1258);
          struct std___Deque_iterator_int__int____int___ t1270 = agg_tmp01268;
          struct std___Deque_iterator_int__int____int___ t1271 = agg_tmp11269;
          _Bool r1272 = bool___gnu_cxx____ops___Iter_comp_iter_MyClass___operator___std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(&__comp1260, t1270, t1271);
          if (__cir_exc_active) {
            return;
          }
          if (r1272) {
            int __val1273;
            struct std___Deque_iterator_int__int____int___ agg_tmp21274;
            struct std___Deque_iterator_int__int____int___ agg_tmp31275;
            struct std___Deque_iterator_int__int____int___ agg_tmp41276;
            struct std___Deque_iterator_int__int____int___ agg_tmp51277;
            int* r1278 = std___Deque_iterator_int__int___int____operator____const(&__i1262);
            int t1279 = *r1278;
            __val1273 = t1279;
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21274, &__first1258);
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31275, &__i1262);
            long c1280 = 1;
            struct std___Deque_iterator_int__int____int___ r1281 = std__operator__4(&__i1262, c1280);
            agg_tmp41276 = r1281;
            struct std___Deque_iterator_int__int____int___ t1282 = agg_tmp21274;
            struct std___Deque_iterator_int__int____int___ t1283 = agg_tmp31275;
            struct std___Deque_iterator_int__int____int___ t1284 = agg_tmp41276;
            struct std___Deque_iterator_int__int____int___ r1285 = std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t1282, t1283, t1284);
            if (__cir_exc_active) {
              return;
            }
            agg_tmp51277 = r1285;
            int t1286 = __val1273;
            int* r1287 = std___Deque_iterator_int__int___int____operator____const(&__first1258);
            *r1287 = t1286;
          } else {
            struct std___Deque_iterator_int__int____int___ agg_tmp61288;
            struct __gnu_cxx____ops___Val_comp_iter_MyClass_ agg_tmp71289;
            struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp81290;
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp61288, &__i1262);
            agg_tmp81290 = __comp1260; // copy
            struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t1291 = agg_tmp81290;
            struct __gnu_cxx____ops___Val_comp_iter_MyClass_ r1292 = __gnu_cxx____ops___Val_comp_iter_MyClass____gnu_cxx____ops____val_comp_iter_MyClass_(t1291);
            if (__cir_exc_active) {
              return;
            }
            agg_tmp71289 = r1292;
            struct std___Deque_iterator_int__int____int___ t1293 = agg_tmp61288;
            struct __gnu_cxx____ops___Val_comp_iter_MyClass_ t1294 = agg_tmp71289;
            void_std____unguarded_linear_insert_std___Deque_iterator_int__int___int______gnu_cxx____ops___Val_comp_iter_MyClass___(t1293, t1294);
            if (__cir_exc_active) {
              return;
            }
          }
    for_step1265: ;
      struct std___Deque_iterator_int__int____int___* r1295 = std___Deque_iterator_int__int___int____operator___4(&__i1262);
    }
  return;
}

// function: _ZSt26__unguarded_insertion_sortISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_T0_
void void_std____unguarded_insertion_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v1296, struct std___Deque_iterator_int__int____int___ v1297, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v1298) {
bb1299:
  struct std___Deque_iterator_int__int____int___ __first1300;
  struct std___Deque_iterator_int__int____int___ __last1301;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp1302;
  __first1300 = v1296;
  __last1301 = v1297;
  __comp1302 = v1298;
    struct std___Deque_iterator_int__int____int___ __i1303;
    struct std___Deque_iterator_int__int____int___ agg_tmp01304;
    struct __gnu_cxx____ops___Val_comp_iter_MyClass_ agg_tmp11305;
    struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp21306;
    std___Deque_iterator_int__int___int_____Deque_iterator(&__i1303, &__first1300);
    while (1) {
      _Bool r1308 = std__operator__(&__i1303, &__last1301);
      _Bool u1309 = !r1308;
      if (!u1309) break;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01304, &__i1303);
      agg_tmp21306 = __comp1302; // copy
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t1310 = agg_tmp21306;
      struct __gnu_cxx____ops___Val_comp_iter_MyClass_ r1311 = __gnu_cxx____ops___Val_comp_iter_MyClass____gnu_cxx____ops____val_comp_iter_MyClass_(t1310);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11305 = r1311;
      struct std___Deque_iterator_int__int____int___ t1312 = agg_tmp01304;
      struct __gnu_cxx____ops___Val_comp_iter_MyClass_ t1313 = agg_tmp11305;
      void_std____unguarded_linear_insert_std___Deque_iterator_int__int___int______gnu_cxx____ops___Val_comp_iter_MyClass___(t1312, t1313);
      if (__cir_exc_active) {
        return;
      }
    for_step1307: ;
      struct std___Deque_iterator_int__int____int___* r1314 = std___Deque_iterator_int__int___int____operator___4(&__i1303);
    }
  return;
}

// function: _ZSt22__final_insertion_sortISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_T0_
void void_std____final_insertion_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v1315, struct std___Deque_iterator_int__int____int___ v1316, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v1317) {
bb1318:
  struct std___Deque_iterator_int__int____int___ __first1319;
  struct std___Deque_iterator_int__int____int___ __last1320;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp1321;
  __first1319 = v1315;
  __last1320 = v1316;
  __comp1321 = v1317;
    long r1322 = std__operator__2(&__last1320, &__first1319);
    long c1323 = 16;
    _Bool c1324 = ((r1322 > c1323)) ? 1 : 0;
    if (c1324) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01325;
      struct std___Deque_iterator_int__int____int___ agg_tmp11326;
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp21327;
      struct std___Deque_iterator_int__int____int___ agg_tmp31328;
      struct std___Deque_iterator_int__int____int___ agg_tmp41329;
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp51330;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01325, &__first1319);
      long c1331 = 16;
      struct std___Deque_iterator_int__int____int___ r1332 = std__operator__4(&__first1319, c1331);
      agg_tmp11326 = r1332;
      agg_tmp21327 = __comp1321; // copy
      struct std___Deque_iterator_int__int____int___ t1333 = agg_tmp01325;
      struct std___Deque_iterator_int__int____int___ t1334 = agg_tmp11326;
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t1335 = agg_tmp21327;
      void_std____insertion_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t1333, t1334, t1335);
      if (__cir_exc_active) {
        return;
      }
      long c1336 = 16;
      struct std___Deque_iterator_int__int____int___ r1337 = std__operator__4(&__first1319, c1336);
      agg_tmp31328 = r1337;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41329, &__last1320);
      agg_tmp51330 = __comp1321; // copy
      struct std___Deque_iterator_int__int____int___ t1338 = agg_tmp31328;
      struct std___Deque_iterator_int__int____int___ t1339 = agg_tmp41329;
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t1340 = agg_tmp51330;
      void_std____unguarded_insertion_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t1338, t1339, t1340);
      if (__cir_exc_active) {
        return;
      }
    } else {
      struct std___Deque_iterator_int__int____int___ agg_tmp61341;
      struct std___Deque_iterator_int__int____int___ agg_tmp71342;
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp81343;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp61341, &__first1319);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp71342, &__last1320);
      agg_tmp81343 = __comp1321; // copy
      struct std___Deque_iterator_int__int____int___ t1344 = agg_tmp61341;
      struct std___Deque_iterator_int__int____int___ t1345 = agg_tmp71342;
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t1346 = agg_tmp81343;
      void_std____insertion_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t1344, t1345, t1346);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt6__sortISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_T0_
void void_std____sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(struct std___Deque_iterator_int__int____int___ v1347, struct std___Deque_iterator_int__int____int___ v1348, struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ v1349) {
bb1350:
  struct std___Deque_iterator_int__int____int___ __first1351;
  struct std___Deque_iterator_int__int____int___ __last1352;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __comp1353;
  __first1351 = v1347;
  __last1352 = v1348;
  __comp1353 = v1349;
    _Bool r1354 = std__operator__(&__first1351, &__last1352);
    _Bool u1355 = !r1354;
    if (u1355) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01356;
      struct std___Deque_iterator_int__int____int___ agg_tmp11357;
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp21358;
      struct std___Deque_iterator_int__int____int___ agg_tmp31359;
      struct std___Deque_iterator_int__int____int___ agg_tmp41360;
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp51361;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01356, &__first1351);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11357, &__last1352);
      long r1362 = std__operator__2(&__last1352, &__first1351);
      long r1363 = long_std____lg_long_(r1362);
      if (__cir_exc_active) {
        return;
      }
      long c1364 = 2;
      long b1365 = r1363 * c1364;
      agg_tmp21358 = __comp1353; // copy
      struct std___Deque_iterator_int__int____int___ t1366 = agg_tmp01356;
      struct std___Deque_iterator_int__int____int___ t1367 = agg_tmp11357;
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t1368 = agg_tmp21358;
      void_std____introsort_loop_std___Deque_iterator_int__int___int____long____gnu_cxx____ops___Iter_comp_iter_MyClass___(t1366, t1367, b1365, t1368);
      if (__cir_exc_active) {
        return;
      }
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31359, &__first1351);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41360, &__last1352);
      agg_tmp51361 = __comp1353; // copy
      struct std___Deque_iterator_int__int____int___ t1369 = agg_tmp31359;
      struct std___Deque_iterator_int__int____int___ t1370 = agg_tmp41360;
      struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t1371 = agg_tmp51361;
      void_std____final_insertion_sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t1369, t1370, t1371);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1372, struct std___Deque_iterator_int__int____int___* v1373) {
bb1374:
  struct std___Deque_iterator_int__int____int___* this1375;
  struct std___Deque_iterator_int__int____int___* __x1376;
  this1375 = v1372;
  __x1376 = v1373;
  struct std___Deque_iterator_int__int____int___* t1377 = this1375;
  struct std___Deque_iterator_int__int____int___* t1378 = __x1376;
  int* t1379 = t1378->_M_cur;
  t1377->_M_cur = t1379;
  struct std___Deque_iterator_int__int____int___* t1380 = __x1376;
  int* t1381 = t1380->_M_first;
  t1377->_M_first = t1381;
  struct std___Deque_iterator_int__int____int___* t1382 = __x1376;
  int* t1383 = t1382->_M_last;
  t1377->_M_last = t1383;
  struct std___Deque_iterator_int__int____int___* t1384 = __x1376;
  int** t1385 = t1384->_M_node;
  t1377->_M_node = t1385;
  return;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEC2ES2_
void __gnu_cxx____ops___Iter_comp_iter_MyClass____Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* v1386, struct MyClass v1387) {
bb1388:
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_* this1389;
  struct MyClass __comp1390;
  this1389 = v1386;
  __comp1390 = v1387;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterI7MyClassEENS0_15_Iter_comp_iterIT_EES4_
struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __gnu_cxx____ops___Iter_comp_iter_MyClass____gnu_cxx____ops____iter_comp_iter_MyClass_(struct MyClass v1391) {
bb1392:
  struct MyClass __comp1393;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __retval1394;
  struct MyClass agg_tmp01395;
  __comp1393 = v1391;
  struct MyClass t1396 = agg_tmp01395;
  __gnu_cxx____ops___Iter_comp_iter_MyClass____Iter_comp_iter(&__retval1394, t1396);
  if (__cir_exc_active) {
    struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t1397 = __retval1394;
  return t1397;
}

// function: _ZSt4sortISt15_Deque_iteratorIiRiPiE7MyClassEvT_S5_T0_
void void_std__sort_std___Deque_iterator_int__int___int____MyClass_(struct std___Deque_iterator_int__int____int___ v1398, struct std___Deque_iterator_int__int____int___ v1399, struct MyClass v1400) {
bb1401:
  struct std___Deque_iterator_int__int____int___ __first1402;
  struct std___Deque_iterator_int__int____int___ __last1403;
  struct MyClass __comp1404;
  struct std___Deque_iterator_int__int____int___ agg_tmp01405;
  struct std___Deque_iterator_int__int____int___ agg_tmp11406;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ agg_tmp21407;
  struct MyClass agg_tmp31408;
  __first1402 = v1398;
  __last1403 = v1399;
  __comp1404 = v1400;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01405, &__first1402);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11406, &__last1403);
  struct MyClass t1409 = agg_tmp31408;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ r1410 = __gnu_cxx____ops___Iter_comp_iter_MyClass____gnu_cxx____ops____iter_comp_iter_MyClass_(t1409);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp21407 = r1410;
  struct std___Deque_iterator_int__int____int___ t1411 = agg_tmp01405;
  struct std___Deque_iterator_int__int____int___ t1412 = agg_tmp11406;
  struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ t1413 = agg_tmp21407;
  void_std____sort_std___Deque_iterator_int__int___int______gnu_cxx____ops___Iter_comp_iter_MyClass___(t1411, t1412, t1413);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1414) {
bb1415:
  struct std__deque_int__std__allocator_int__* this1416;
  struct std___Deque_iterator_int__int____int___ __retval1417;
  this1416 = v1414;
  struct std__deque_int__std__allocator_int__* t1418 = this1416;
  struct std___Deque_base_int__std__allocator_int__* base1419 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1418 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1420 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1419->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1417, &base1420->_M_start);
  struct std___Deque_iterator_int__int____int___ t1421 = __retval1417;
  return t1421;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1422) {
bb1423:
  struct std__deque_int__std__allocator_int__* this1424;
  struct std___Deque_iterator_int__int____int___ __retval1425;
  this1424 = v1422;
  struct std__deque_int__std__allocator_int__* t1426 = this1424;
  struct std___Deque_base_int__std__allocator_int__* base1427 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1426 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1428 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1427->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1425, &base1428->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1429 = __retval1425;
  return t1429;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v1430) {
bb1431:
  struct std__deque_int__std__allocator_int__* this1432;
  unsigned long __retval1433;
  this1432 = v1430;
  struct std__deque_int__std__allocator_int__* t1434 = this1432;
  struct std___Deque_base_int__std__allocator_int__* base1435 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1434 + 0);
  struct std__allocator_int_* r1436 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base1435);
  unsigned long r1437 = std__deque_int__std__allocator_int______S_max_size(r1436);
  __retval1433 = r1437;
  unsigned long t1438 = __retval1433;
  return t1438;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v1439) {
bb1440:
  struct std__deque_int__std__allocator_int__* this1441;
  unsigned long __retval1442;
  unsigned long __sz1443;
  this1441 = v1439;
  struct std__deque_int__std__allocator_int__* t1444 = this1441;
  struct std___Deque_base_int__std__allocator_int__* base1445 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1444 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1446 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1445->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base1447 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1444 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1448 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1447->_M_impl) + 0);
  long r1449 = std__operator__2(&base1446->_M_finish, &base1448->_M_start);
  unsigned long cast1450 = (unsigned long)r1449;
  __sz1443 = cast1450;
    unsigned long t1451 = __sz1443;
    unsigned long r1452 = std__deque_int__std__allocator_int_____max_size___const(t1444);
    _Bool c1453 = ((t1451 > r1452)) ? 1 : 0;
    if (c1453) {
      __builtin_unreachable();
    }
  unsigned long t1454 = __sz1443;
  __retval1442 = t1454;
  unsigned long t1455 = __retval1442;
  return t1455;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEixEl
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* v1456, long v1457) {
bb1458:
  struct std___Deque_iterator_int__int____int___* this1459;
  long __n1460;
  int* __retval1461;
  struct std___Deque_iterator_int__int____int___ ref_tmp01462;
  this1459 = v1456;
  __n1460 = v1457;
  struct std___Deque_iterator_int__int____int___* t1463 = this1459;
  long t1464 = __n1460;
  struct std___Deque_iterator_int__int____int___ r1465 = std__operator__4(t1463, t1464);
  ref_tmp01462 = r1465;
  int* r1466 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp01462);
  __retval1461 = r1466;
  int* t1467 = __retval1461;
  return t1467;
}

// function: _ZNSt5dequeIiSaIiEEixEm
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* v1468, unsigned long v1469) {
bb1470:
  struct std__deque_int__std__allocator_int__* this1471;
  unsigned long __n1472;
  int* __retval1473;
  this1471 = v1468;
  __n1472 = v1469;
  struct std__deque_int__std__allocator_int__* t1474 = this1471;
    do {
          unsigned long t1475 = __n1472;
          unsigned long r1476 = std__deque_int__std__allocator_int_____size___const(t1474);
          _Bool c1477 = ((t1475 < r1476)) ? 1 : 0;
          _Bool u1478 = !c1477;
          if (u1478) {
            char* cast1479 = (char*)&(_str_3);
            int c1480 = 1433;
            char* cast1481 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm);
            char* cast1482 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast1479, c1480, cast1481, cast1482);
          }
      _Bool c1483 = 0;
      if (!c1483) break;
    } while (1);
  struct std___Deque_base_int__std__allocator_int__* base1484 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1474 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1485 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1484->_M_impl) + 0);
  unsigned long t1486 = __n1472;
  long cast1487 = (long)t1486;
  int* r1488 = std___Deque_iterator_int__int___int____operator___long__const(&base1485->_M_start, cast1487);
  __retval1473 = r1488;
  int* t1489 = __retval1473;
  return t1489;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v1490) {
bb1491:
  struct std__deque_int__std__allocator_int__* this1492;
  struct std___Deque_iterator_int__int____int___ agg_tmp01493;
  struct std___Deque_iterator_int__int____int___ agg_tmp11494;
  this1492 = v1490;
  struct std__deque_int__std__allocator_int__* t1495 = this1492;
    struct std___Deque_iterator_int__int____int___ r1496 = std__deque_int__std__allocator_int_____begin(t1495);
    agg_tmp01493 = r1496;
    struct std___Deque_iterator_int__int____int___ r1497 = std__deque_int__std__allocator_int_____end(t1495);
    agg_tmp11494 = r1497;
    struct std___Deque_base_int__std__allocator_int__* base1498 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1495 + 0);
    struct std__allocator_int_* r1499 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1498);
    struct std___Deque_iterator_int__int____int___ t1500 = agg_tmp01493;
    struct std___Deque_iterator_int__int____int___ t1501 = agg_tmp11494;
    std__deque_int__std__allocator_int______M_destroy_data(t1495, t1500, t1501, r1499);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1502 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1495 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1502);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1503 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1495 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1503);
  }
  return;
}

// function: main
int main() {
bb1504:
  int __retval1505;
  int myints1506[4];
  struct std__deque_int__std__allocator_int__ d1507;
  struct std__allocator_int_ ref_tmp01508;
  struct std___Deque_iterator_int__int____int___ agg_tmp01509;
  struct std___Deque_iterator_int__int____int___ agg_tmp11510;
  struct MyClass agg_tmp21511;
  int c1512 = 0;
  __retval1505 = c1512;
  // array copy
  __builtin_memcpy(myints1506, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
  int* cast1513 = (int*)&(myints1506);
  int* cast1514 = (int*)&(myints1506);
  int c1515 = 4;
  int* ptr1516 = &(cast1514)[c1515];
  std__allocator_int___allocator_2(&ref_tmp01508);
    std__deque_int__std__allocator_int_____deque_int___void_(&d1507, cast1513, ptr1516, &ref_tmp01508);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp01508);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp01508);
  }
    struct std___Deque_iterator_int__int____int___ r1517 = std__deque_int__std__allocator_int_____begin(&d1507);
    agg_tmp01509 = r1517;
    struct std___Deque_iterator_int__int____int___ r1518 = std__deque_int__std__allocator_int_____end(&d1507);
    agg_tmp11510 = r1518;
    struct std___Deque_iterator_int__int____int___ t1519 = agg_tmp01509;
    struct std___Deque_iterator_int__int____int___ t1520 = agg_tmp11510;
    struct MyClass t1521 = agg_tmp21511;
    void_std__sort_std___Deque_iterator_int__int___int____MyClass_(t1519, t1520, t1521);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&d1507);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      unsigned int i1522;
      unsigned int c1523 = 0;
      i1522 = c1523;
      while (1) {
        unsigned int t1525 = i1522;
        unsigned int c1526 = 3;
        _Bool c1527 = ((t1525 < c1526)) ? 1 : 0;
        if (!c1527) break;
          unsigned int t1528 = i1522;
          unsigned long cast1529 = (unsigned long)t1528;
          int* r1530 = std__deque_int__std__allocator_int_____operator__(&d1507, cast1529);
          int t1531 = *r1530;
          unsigned int t1532 = i1522;
          unsigned int c1533 = 1;
          unsigned int b1534 = t1532 + c1533;
          unsigned long cast1535 = (unsigned long)b1534;
          int* r1536 = std__deque_int__std__allocator_int_____operator__(&d1507, cast1535);
          int t1537 = *r1536;
          _Bool c1538 = ((t1531 <= t1537)) ? 1 : 0;
          if (c1538) {
          } else {
            char* cast1539 = (char*)&(_str);
            char* c1540 = _str_1;
            unsigned int c1541 = 28;
            char* cast1542 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast1539, c1540, c1541, cast1542);
          }
      for_step1524: ;
        unsigned int t1543 = i1522;
        unsigned int u1544 = t1543 + 1;
        i1522 = u1544;
      }
    int c1545 = 0;
    __retval1505 = c1545;
    int t1546 = __retval1505;
    int ret_val1547 = t1546;
    {
      std__deque_int__std__allocator_int______deque(&d1507);
    }
    return ret_val1547;
  int t1548 = __retval1505;
  return t1548;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1549) {
bb1550:
  struct std____new_allocator_int_* this1551;
  this1551 = v1549;
  struct std____new_allocator_int_* t1552 = this1551;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2ERKS0_
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1553, struct std__allocator_int_* v1554) {
bb1555:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1556;
  struct std__allocator_int_* __a1557;
  this1556 = v1553;
  __a1557 = v1554;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1558 = this1556;
  struct std__allocator_int_* base1559 = (struct std__allocator_int_*)((char *)t1558 + 0);
  struct std__allocator_int_* t1560 = __a1557;
  std__allocator_int___allocator(base1559, t1560);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1561 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1558 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1561);
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1562) {
bb1563:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1564;
  this1564 = v1562;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1565 = this1564;
  {
    struct std__allocator_int_* base1566 = (struct std__allocator_int_*)((char *)t1565 + 0);
    std__allocator_int____allocator(base1566);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2ERKS0_
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1567, struct std__allocator_int_* v1568) {
bb1569:
  struct std___Deque_base_int__std__allocator_int__* this1570;
  struct std__allocator_int_* __a1571;
  this1570 = v1567;
  __a1571 = v1568;
  struct std___Deque_base_int__std__allocator_int__* t1572 = this1570;
  struct std__allocator_int_* t1573 = __a1571;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1572->_M_impl, t1573);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1574, unsigned long* v1575) {
bb1576:
  unsigned long* __a1577;
  unsigned long* __b1578;
  unsigned long* __retval1579;
  __a1577 = v1574;
  __b1578 = v1575;
    unsigned long* t1580 = __a1577;
    unsigned long t1581 = *t1580;
    unsigned long* t1582 = __b1578;
    unsigned long t1583 = *t1582;
    _Bool c1584 = ((t1581 < t1583)) ? 1 : 0;
    if (c1584) {
      unsigned long* t1585 = __b1578;
      __retval1579 = t1585;
      unsigned long* t1586 = __retval1579;
      return t1586;
    }
  unsigned long* t1587 = __a1577;
  __retval1579 = t1587;
  unsigned long* t1588 = __retval1579;
  return t1588;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1589) {
bb1590:
  struct std___Deque_base_int__std__allocator_int__* this1591;
  struct std__allocator_int_* __retval1592;
  this1591 = v1589;
  struct std___Deque_base_int__std__allocator_int__* t1593 = this1591;
  struct std__allocator_int_* base1594 = (struct std__allocator_int_*)((char *)&(t1593->_M_impl) + 0);
  __retval1592 = base1594;
  struct std__allocator_int_* t1595 = __retval1592;
  return t1595;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1596, struct std__allocator_int_* v1597) {
bb1598:
  struct std__allocator_int___* this1599;
  struct std__allocator_int_* unnamed1600;
  this1599 = v1596;
  unnamed1600 = v1597;
  struct std__allocator_int___* t1601 = this1599;
  struct std____new_allocator_int___* base1602 = (struct std____new_allocator_int___*)((char *)t1601 + 0);
  std____new_allocator_int______new_allocator(base1602);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1603) {
bb1604:
  struct std___Deque_base_int__std__allocator_int__* this1605;
  struct std__allocator_int___ __retval1606;
  this1605 = v1603;
  struct std___Deque_base_int__std__allocator_int__* t1607 = this1605;
  struct std__allocator_int_* r1608 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1607);
  std__allocator_int____allocator_int_(&__retval1606, r1608);
  struct std__allocator_int___ t1609 = __retval1606;
  return t1609;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1610:
  _Bool __retval1611;
    _Bool c1612 = 0;
    __retval1611 = c1612;
    _Bool t1613 = __retval1611;
    return t1613;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1614) {
bb1615:
  struct std____new_allocator_int___* this1616;
  unsigned long __retval1617;
  this1616 = v1614;
  struct std____new_allocator_int___* t1618 = this1616;
  unsigned long c1619 = 9223372036854775807;
  unsigned long c1620 = 8;
  unsigned long b1621 = c1619 / c1620;
  __retval1617 = b1621;
  unsigned long t1622 = __retval1617;
  return t1622;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1623, unsigned long v1624, void* v1625) {
bb1626:
  struct std____new_allocator_int___* this1627;
  unsigned long __n1628;
  void* unnamed1629;
  int** __retval1630;
  this1627 = v1623;
  __n1628 = v1624;
  unnamed1629 = v1625;
  struct std____new_allocator_int___* t1631 = this1627;
    unsigned long t1632 = __n1628;
    unsigned long r1633 = std____new_allocator_int_____M_max_size___const(t1631);
    _Bool c1634 = ((t1632 > r1633)) ? 1 : 0;
    if (c1634) {
        unsigned long t1635 = __n1628;
        unsigned long c1636 = -1;
        unsigned long c1637 = 8;
        unsigned long b1638 = c1636 / c1637;
        _Bool c1639 = ((t1635 > b1638)) ? 1 : 0;
        if (c1639) {
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
    unsigned long c1640 = 8;
    unsigned long c1641 = 16;
    _Bool c1642 = ((c1640 > c1641)) ? 1 : 0;
    if (c1642) {
      unsigned long __al1643;
      unsigned long c1644 = 8;
      __al1643 = c1644;
      unsigned long t1645 = __n1628;
      unsigned long c1646 = 8;
      unsigned long b1647 = t1645 * c1646;
      unsigned long t1648 = __al1643;
      void* r1649 = operator_new_2(b1647, t1648);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1650 = (int**)r1649;
      __retval1630 = cast1650;
      int** t1651 = __retval1630;
      return t1651;
    }
  unsigned long t1652 = __n1628;
  unsigned long c1653 = 8;
  unsigned long b1654 = t1652 * c1653;
  void* r1655 = operator_new(b1654);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1656 = (int**)r1655;
  __retval1630 = cast1656;
  int** t1657 = __retval1630;
  return t1657;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1658, unsigned long v1659) {
bb1660:
  struct std__allocator_int___* this1661;
  unsigned long __n1662;
  int** __retval1663;
  this1661 = v1658;
  __n1662 = v1659;
  struct std__allocator_int___* t1664 = this1661;
    _Bool r1665 = std____is_constant_evaluated();
    if (r1665) {
        unsigned long t1666 = __n1662;
        unsigned long c1667 = 8;
        unsigned long ovr1668;
        _Bool ovf1669 = __builtin_mul_overflow(t1666, c1667, &ovr1668);
        __n1662 = ovr1668;
        if (ovf1669) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1670 = __n1662;
      void* r1671 = operator_new(t1670);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1672 = (int**)r1671;
      __retval1663 = cast1672;
      int** t1673 = __retval1663;
      return t1673;
    }
  struct std____new_allocator_int___* base1674 = (struct std____new_allocator_int___*)((char *)t1664 + 0);
  unsigned long t1675 = __n1662;
  void* c1676 = ((void*)0);
  int** r1677 = std____new_allocator_int____allocate(base1674, t1675, c1676);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1663 = r1677;
  int** t1678 = __retval1663;
  return t1678;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1679, unsigned long v1680) {
bb1681:
  struct std__allocator_int___* __a1682;
  unsigned long __n1683;
  int** __retval1684;
  __a1682 = v1679;
  __n1683 = v1680;
  struct std__allocator_int___* t1685 = __a1682;
  unsigned long t1686 = __n1683;
  int** r1687 = std__allocator_int____allocate(t1685, t1686);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1684 = r1687;
  int** t1688 = __retval1684;
  return t1688;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1689, unsigned long v1690) {
bb1691:
  struct std___Deque_base_int__std__allocator_int__* this1692;
  unsigned long __n1693;
  int** __retval1694;
  struct std__allocator_int___ __map_alloc1695;
  this1692 = v1689;
  __n1693 = v1690;
  struct std___Deque_base_int__std__allocator_int__* t1696 = this1692;
  struct std__allocator_int___ r1697 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1696);
  __map_alloc1695 = r1697;
  unsigned long t1698 = __n1693;
  int** r1699 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1695, t1698);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1694 = r1699;
  int** t1700 = __retval1694;
  return t1700;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1701) {
bb1702:
  struct std____new_allocator_int_* this1703;
  unsigned long __retval1704;
  this1703 = v1701;
  struct std____new_allocator_int_* t1705 = this1703;
  unsigned long c1706 = 9223372036854775807;
  unsigned long c1707 = 4;
  unsigned long b1708 = c1706 / c1707;
  __retval1704 = b1708;
  unsigned long t1709 = __retval1704;
  return t1709;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1710, unsigned long v1711, void* v1712) {
bb1713:
  struct std____new_allocator_int_* this1714;
  unsigned long __n1715;
  void* unnamed1716;
  int* __retval1717;
  this1714 = v1710;
  __n1715 = v1711;
  unnamed1716 = v1712;
  struct std____new_allocator_int_* t1718 = this1714;
    unsigned long t1719 = __n1715;
    unsigned long r1720 = std____new_allocator_int____M_max_size___const(t1718);
    _Bool c1721 = ((t1719 > r1720)) ? 1 : 0;
    if (c1721) {
        unsigned long t1722 = __n1715;
        unsigned long c1723 = -1;
        unsigned long c1724 = 4;
        unsigned long b1725 = c1723 / c1724;
        _Bool c1726 = ((t1722 > b1725)) ? 1 : 0;
        if (c1726) {
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
    unsigned long c1727 = 4;
    unsigned long c1728 = 16;
    _Bool c1729 = ((c1727 > c1728)) ? 1 : 0;
    if (c1729) {
      unsigned long __al1730;
      unsigned long c1731 = 4;
      __al1730 = c1731;
      unsigned long t1732 = __n1715;
      unsigned long c1733 = 4;
      unsigned long b1734 = t1732 * c1733;
      unsigned long t1735 = __al1730;
      void* r1736 = operator_new_2(b1734, t1735);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1737 = (int*)r1736;
      __retval1717 = cast1737;
      int* t1738 = __retval1717;
      return t1738;
    }
  unsigned long t1739 = __n1715;
  unsigned long c1740 = 4;
  unsigned long b1741 = t1739 * c1740;
  void* r1742 = operator_new(b1741);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1743 = (int*)r1742;
  __retval1717 = cast1743;
  int* t1744 = __retval1717;
  return t1744;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1745, unsigned long v1746) {
bb1747:
  struct std__allocator_int_* this1748;
  unsigned long __n1749;
  int* __retval1750;
  this1748 = v1745;
  __n1749 = v1746;
  struct std__allocator_int_* t1751 = this1748;
    _Bool r1752 = std____is_constant_evaluated();
    if (r1752) {
        unsigned long t1753 = __n1749;
        unsigned long c1754 = 4;
        unsigned long ovr1755;
        _Bool ovf1756 = __builtin_mul_overflow(t1753, c1754, &ovr1755);
        __n1749 = ovr1755;
        if (ovf1756) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1757 = __n1749;
      void* r1758 = operator_new(t1757);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1759 = (int*)r1758;
      __retval1750 = cast1759;
      int* t1760 = __retval1750;
      return t1760;
    }
  struct std____new_allocator_int_* base1761 = (struct std____new_allocator_int_*)((char *)t1751 + 0);
  unsigned long t1762 = __n1749;
  void* c1763 = ((void*)0);
  int* r1764 = std____new_allocator_int___allocate(base1761, t1762, c1763);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1750 = r1764;
  int* t1765 = __retval1750;
  return t1765;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1766, unsigned long v1767) {
bb1768:
  struct std__allocator_int_* __a1769;
  unsigned long __n1770;
  int* __retval1771;
  __a1769 = v1766;
  __n1770 = v1767;
  struct std__allocator_int_* t1772 = __a1769;
  unsigned long t1773 = __n1770;
  int* r1774 = std__allocator_int___allocate(t1772, t1773);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1771 = r1774;
  int* t1775 = __retval1771;
  return t1775;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1776) {
bb1777:
  struct std___Deque_base_int__std__allocator_int__* this1778;
  int* __retval1779;
  this1778 = v1776;
  struct std___Deque_base_int__std__allocator_int__* t1780 = this1778;
  struct std__allocator_int_* base1781 = (struct std__allocator_int_*)((char *)&(t1780->_M_impl) + 0);
  unsigned long c1782 = 4;
  unsigned long r1783 = std____deque_buf_size(c1782);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1784 = std__allocator_traits_std__allocator_int_____allocate(base1781, r1783);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1779 = r1784;
  int* t1785 = __retval1779;
  return t1785;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1786, int* v1787, unsigned long v1788) {
bb1789:
  struct std____new_allocator_int_* this1790;
  int* __p1791;
  unsigned long __n1792;
  this1790 = v1786;
  __p1791 = v1787;
  __n1792 = v1788;
  struct std____new_allocator_int_* t1793 = this1790;
    unsigned long c1794 = 4;
    unsigned long c1795 = 16;
    _Bool c1796 = ((c1794 > c1795)) ? 1 : 0;
    if (c1796) {
      int* t1797 = __p1791;
      void* cast1798 = (void*)t1797;
      unsigned long t1799 = __n1792;
      unsigned long c1800 = 4;
      unsigned long b1801 = t1799 * c1800;
      unsigned long c1802 = 4;
      operator_delete_3(cast1798, b1801, c1802);
      return;
    }
  int* t1803 = __p1791;
  void* cast1804 = (void*)t1803;
  unsigned long t1805 = __n1792;
  unsigned long c1806 = 4;
  unsigned long b1807 = t1805 * c1806;
  operator_delete_2(cast1804, b1807);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1808, int* v1809, unsigned long v1810) {
bb1811:
  struct std__allocator_int_* this1812;
  int* __p1813;
  unsigned long __n1814;
  this1812 = v1808;
  __p1813 = v1809;
  __n1814 = v1810;
  struct std__allocator_int_* t1815 = this1812;
    _Bool r1816 = std____is_constant_evaluated();
    if (r1816) {
      int* t1817 = __p1813;
      void* cast1818 = (void*)t1817;
      operator_delete(cast1818);
      return;
    }
  struct std____new_allocator_int_* base1819 = (struct std____new_allocator_int_*)((char *)t1815 + 0);
  int* t1820 = __p1813;
  unsigned long t1821 = __n1814;
  std____new_allocator_int___deallocate(base1819, t1820, t1821);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1822, int* v1823, unsigned long v1824) {
bb1825:
  struct std__allocator_int_* __a1826;
  int* __p1827;
  unsigned long __n1828;
  __a1826 = v1822;
  __p1827 = v1823;
  __n1828 = v1824;
  struct std__allocator_int_* t1829 = __a1826;
  int* t1830 = __p1827;
  unsigned long t1831 = __n1828;
  std__allocator_int___deallocate(t1829, t1830, t1831);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1832, int* v1833) {
bb1834:
  struct std___Deque_base_int__std__allocator_int__* this1835;
  int* __p1836;
  this1835 = v1832;
  __p1836 = v1833;
  struct std___Deque_base_int__std__allocator_int__* t1837 = this1835;
  struct std__allocator_int_* base1838 = (struct std__allocator_int_*)((char *)&(t1837->_M_impl) + 0);
  int* t1839 = __p1836;
  unsigned long c1840 = 4;
  unsigned long r1841 = std____deque_buf_size(c1840);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1838, t1839, r1841);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1842, int** v1843, int** v1844) {
bb1845:
  struct std___Deque_base_int__std__allocator_int__* this1846;
  int** __nstart1847;
  int** __nfinish1848;
  this1846 = v1842;
  __nstart1847 = v1843;
  __nfinish1848 = v1844;
  struct std___Deque_base_int__std__allocator_int__* t1849 = this1846;
    int** __n1850;
    int** t1851 = __nstart1847;
    __n1850 = t1851;
    while (1) {
      int** t1853 = __n1850;
      int** t1854 = __nfinish1848;
      _Bool c1855 = ((t1853 < t1854)) ? 1 : 0;
      if (!c1855) break;
      int** t1856 = __n1850;
      int* t1857 = *t1856;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1849, t1857);
    for_step1852: ;
      int** t1858 = __n1850;
      int c1859 = 1;
      int** ptr1860 = &(t1858)[c1859];
      __n1850 = ptr1860;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1861, int** v1862, int** v1863) {
bb1864:
  struct std___Deque_base_int__std__allocator_int__* this1865;
  int** __nstart1866;
  int** __nfinish1867;
  int** __cur1868;
  this1865 = v1861;
  __nstart1866 = v1862;
  __nfinish1867 = v1863;
  struct std___Deque_base_int__std__allocator_int__* t1869 = this1865;
        int** t1871 = __nstart1866;
        __cur1868 = t1871;
        while (1) {
          int** t1873 = __cur1868;
          int** t1874 = __nfinish1867;
          _Bool c1875 = ((t1873 < t1874)) ? 1 : 0;
          if (!c1875) break;
          int* r1876 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1869);
          if (__cir_exc_active) {
            goto cir_try_dispatch1870;
          }
          int** t1877 = __cur1868;
          *t1877 = r1876;
        for_step1872: ;
          int** t1878 = __cur1868;
          int c1879 = 1;
          int** ptr1880 = &(t1878)[c1879];
          __cur1868 = ptr1880;
        }
    cir_try_dispatch1870: ;
    if (__cir_exc_active) {
    {
      int ca_tok1881 = 0;
      void* ca_exn1882 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1883 = __nstart1866;
        int** t1884 = __cur1868;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1869, t1883, t1884);
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

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1885, int** v1886, unsigned long v1887) {
bb1888:
  struct std____new_allocator_int___* this1889;
  int** __p1890;
  unsigned long __n1891;
  this1889 = v1885;
  __p1890 = v1886;
  __n1891 = v1887;
  struct std____new_allocator_int___* t1892 = this1889;
    unsigned long c1893 = 8;
    unsigned long c1894 = 16;
    _Bool c1895 = ((c1893 > c1894)) ? 1 : 0;
    if (c1895) {
      int** t1896 = __p1890;
      void* cast1897 = (void*)t1896;
      unsigned long t1898 = __n1891;
      unsigned long c1899 = 8;
      unsigned long b1900 = t1898 * c1899;
      unsigned long c1901 = 8;
      operator_delete_3(cast1897, b1900, c1901);
      return;
    }
  int** t1902 = __p1890;
  void* cast1903 = (void*)t1902;
  unsigned long t1904 = __n1891;
  unsigned long c1905 = 8;
  unsigned long b1906 = t1904 * c1905;
  operator_delete_2(cast1903, b1906);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1907, int** v1908, unsigned long v1909) {
bb1910:
  struct std__allocator_int___* this1911;
  int** __p1912;
  unsigned long __n1913;
  this1911 = v1907;
  __p1912 = v1908;
  __n1913 = v1909;
  struct std__allocator_int___* t1914 = this1911;
    _Bool r1915 = std____is_constant_evaluated();
    if (r1915) {
      int** t1916 = __p1912;
      void* cast1917 = (void*)t1916;
      operator_delete(cast1917);
      return;
    }
  struct std____new_allocator_int___* base1918 = (struct std____new_allocator_int___*)((char *)t1914 + 0);
  int** t1919 = __p1912;
  unsigned long t1920 = __n1913;
  std____new_allocator_int____deallocate(base1918, t1919, t1920);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1921, int** v1922, unsigned long v1923) {
bb1924:
  struct std__allocator_int___* __a1925;
  int** __p1926;
  unsigned long __n1927;
  __a1925 = v1921;
  __p1926 = v1922;
  __n1927 = v1923;
  struct std__allocator_int___* t1928 = __a1925;
  int** t1929 = __p1926;
  unsigned long t1930 = __n1927;
  std__allocator_int____deallocate(t1928, t1929, t1930);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1931, int** v1932, unsigned long v1933) {
bb1934:
  struct std___Deque_base_int__std__allocator_int__* this1935;
  int** __p1936;
  unsigned long __n1937;
  struct std__allocator_int___ __map_alloc1938;
  this1935 = v1931;
  __p1936 = v1932;
  __n1937 = v1933;
  struct std___Deque_base_int__std__allocator_int__* t1939 = this1935;
  struct std__allocator_int___ r1940 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1939);
  __map_alloc1938 = r1940;
  int** t1941 = __p1936;
  unsigned long t1942 = __n1937;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1938, t1941, t1942);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1943, unsigned long v1944) {
bb1945:
  struct std___Deque_base_int__std__allocator_int__* this1946;
  unsigned long __num_elements1947;
  unsigned long __num_nodes1948;
  unsigned long ref_tmp01949;
  unsigned long ref_tmp11950;
  int** __nstart1951;
  int** __nfinish1952;
  this1946 = v1943;
  __num_elements1947 = v1944;
  struct std___Deque_base_int__std__allocator_int__* t1953 = this1946;
  unsigned long t1954 = __num_elements1947;
  unsigned long c1955 = 4;
  unsigned long r1956 = std____deque_buf_size(c1955);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1957 = t1954 / r1956;
  unsigned long c1958 = 1;
  unsigned long b1959 = b1957 + c1958;
  __num_nodes1948 = b1959;
  unsigned long c1960 = 8;
  ref_tmp01949 = c1960;
  unsigned long t1961 = __num_nodes1948;
  unsigned long c1962 = 2;
  unsigned long b1963 = t1961 + c1962;
  ref_tmp11950 = b1963;
  unsigned long* r1964 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01949, &ref_tmp11950);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1965 = *r1964;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1966 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  base1966->_M_map_size = t1965;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1967 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  unsigned long t1968 = base1967->_M_map_size;
  int** r1969 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1953, t1968);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1970 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  base1970->_M_map = r1969;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1971 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  int** t1972 = base1971->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1973 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  unsigned long t1974 = base1973->_M_map_size;
  unsigned long t1975 = __num_nodes1948;
  unsigned long b1976 = t1974 - t1975;
  unsigned long c1977 = 2;
  unsigned long b1978 = b1976 / c1977;
  int** ptr1979 = &(t1972)[b1978];
  __nstart1951 = ptr1979;
  int** t1980 = __nstart1951;
  unsigned long t1981 = __num_nodes1948;
  int** ptr1982 = &(t1980)[t1981];
  __nfinish1952 = ptr1982;
      int** t1984 = __nstart1951;
      int** t1985 = __nfinish1952;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1953, t1984, t1985);
      if (__cir_exc_active) {
        goto cir_try_dispatch1983;
      }
    cir_try_dispatch1983: ;
    if (__cir_exc_active) {
    {
      int ca_tok1986 = 0;
      void* ca_exn1987 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1988 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
        int** t1989 = base1988->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1990 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
        unsigned long t1991 = base1990->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1953, t1989, t1991);
        int** c1992 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1993 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
        base1993->_M_map = c1992;
        unsigned long c1994 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1995 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
        base1995->_M_map_size = c1994;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1996 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  int** t1997 = __nstart1951;
  std___Deque_iterator_int__int___int_____M_set_node(&base1996->_M_start, t1997);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1998 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  int** t1999 = __nfinish1952;
  int c2000 = -1;
  int** ptr2001 = &(t1999)[c2000];
  std___Deque_iterator_int__int___int_____M_set_node(&base1998->_M_finish, ptr2001);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2002 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  int* t2003 = base2002->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2004 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  base2004->_M_start._M_cur = t2003;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2005 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  int* t2006 = base2005->_M_finish._M_first;
  unsigned long t2007 = __num_elements1947;
  unsigned long c2008 = 4;
  unsigned long r2009 = std____deque_buf_size(c2008);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b2010 = t2007 % r2009;
  int* ptr2011 = &(t2006)[b2010];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2012 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1953->_M_impl) + 0);
  base2012->_M_finish._M_cur = ptr2011;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v2013, unsigned long* v2014) {
bb2015:
  unsigned long* __a2016;
  unsigned long* __b2017;
  unsigned long* __retval2018;
  __a2016 = v2013;
  __b2017 = v2014;
    unsigned long* t2019 = __b2017;
    unsigned long t2020 = *t2019;
    unsigned long* t2021 = __a2016;
    unsigned long t2022 = *t2021;
    _Bool c2023 = ((t2020 < t2022)) ? 1 : 0;
    if (c2023) {
      unsigned long* t2024 = __b2017;
      __retval2018 = t2024;
      unsigned long* t2025 = __retval2018;
      return t2025;
    }
  unsigned long* t2026 = __a2016;
  __retval2018 = t2026;
  unsigned long* t2027 = __retval2018;
  return t2027;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v2028) {
bb2029:
  struct std__allocator_int_* __a2030;
  unsigned long __retval2031;
  unsigned long __diffmax2032;
  unsigned long __allocmax2033;
  __a2030 = v2028;
  unsigned long c2034 = 9223372036854775807;
  __diffmax2032 = c2034;
  unsigned long c2035 = 4611686018427387903;
  __allocmax2033 = c2035;
  unsigned long* r2036 = unsigned_long_const__std__min_unsigned_long_(&__diffmax2032, &__allocmax2033);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t2037 = *r2036;
  __retval2031 = t2037;
  unsigned long t2038 = __retval2031;
  return t2038;
}

// function: _ZNSt5dequeIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long v2039, struct std__allocator_int_* v2040) {
bb2041:
  unsigned long __n2042;
  struct std__allocator_int_* __a2043;
  unsigned long __retval2044;
  __n2042 = v2039;
  __a2043 = v2040;
    unsigned long t2045 = __n2042;
    struct std__allocator_int_* t2046 = __a2043;
    unsigned long r2047 = std__deque_int__std__allocator_int______S_max_size(t2046);
    _Bool c2048 = ((t2045 > r2047)) ? 1 : 0;
    if (c2048) {
      char* cast2049 = (char*)&(_str_2);
      std____throw_length_error(cast2049);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t2050 = __n2042;
  __retval2044 = t2050;
  unsigned long t2051 = __retval2044;
  return t2051;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v2052) {
bb2053:
  struct std___Deque_base_int__std__allocator_int__* this2054;
  struct std__allocator_int_* __retval2055;
  this2054 = v2052;
  struct std___Deque_base_int__std__allocator_int__* t2056 = this2054;
  struct std__allocator_int_* base2057 = (struct std__allocator_int_*)((char *)&(t2056->_M_impl) + 0);
  __retval2055 = base2057;
  struct std__allocator_int_* t2058 = __retval2055;
  return t2058;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb2059:
  unsigned long __retval2060;
  unsigned long c2061 = 4;
  unsigned long r2062 = std____deque_buf_size(c2061);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval2060 = r2062;
  unsigned long t2063 = __retval2060;
  return t2063;
}

// function: _ZSt7advanceIPimEvRT_T0_
void void_std__advance_int___unsigned_long_(int** v2064, unsigned long v2065) {
bb2066:
  int** __i2067;
  unsigned long __n2068;
  long __d2069;
  struct std__random_access_iterator_tag agg_tmp02070;
  __i2067 = v2064;
  __n2068 = v2065;
  unsigned long t2071 = __n2068;
  long cast2072 = (long)t2071;
  __d2069 = cast2072;
  int** t2073 = __i2067;
  long t2074 = __d2069;
  int** t2075 = __i2067;
  struct std__random_access_iterator_tag r2076 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t2075);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp02070 = r2076;
  struct std__random_access_iterator_tag t2077 = agg_tmp02070;
  void_std____advance_int___long_(t2073, t2074, t2077);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v2078, int** v2079) {
bb2080:
  struct std___UninitDestroyGuard_int____void_* this2081;
  int** __first2082;
  this2081 = v2078;
  __first2082 = v2079;
  struct std___UninitDestroyGuard_int____void_* t2083 = this2081;
  int** t2084 = __first2082;
  int* t2085 = *t2084;
  t2083->_M_first = t2085;
  int** t2086 = __first2082;
  t2083->_M_cur = t2086;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v2087, int* v2088) {
bb2089:
  int* __location2090;
  int* __args2091;
  int* __retval2092;
  void* __loc2093;
  __location2090 = v2087;
  __args2091 = v2088;
  int* t2094 = __location2090;
  void* cast2095 = (void*)t2094;
  __loc2093 = cast2095;
    void* t2096 = __loc2093;
    int* cast2097 = (int*)t2096;
    int* t2098 = __args2091;
    int t2099 = *t2098;
    *cast2097 = t2099;
    __retval2092 = cast2097;
    int* t2100 = __retval2092;
    return t2100;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v2101, int* v2102) {
bb2103:
  int* __p2104;
  int* __args2105;
  __p2104 = v2101;
  __args2105 = v2102;
    _Bool r2106 = std____is_constant_evaluated();
    if (r2106) {
      int* t2107 = __p2104;
      int* t2108 = __args2105;
      int* r2109 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t2107, t2108);
      return;
    }
  int* t2110 = __p2104;
  void* cast2111 = (void*)t2110;
  int* cast2112 = (int*)cast2111;
  int* t2113 = __args2105;
  int t2114 = *t2113;
  *cast2112 = t2114;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v2115) {
bb2116:
  struct std___UninitDestroyGuard_int____void_* this2117;
  this2117 = v2115;
  struct std___UninitDestroyGuard_int____void_* t2118 = this2117;
  int** c2119 = ((void*)0);
  t2118->_M_cur = c2119;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v2120) {
bb2121:
  struct std___UninitDestroyGuard_int____void_* this2122;
  this2122 = v2120;
  struct std___UninitDestroyGuard_int____void_* t2123 = this2122;
    int** t2124 = t2123->_M_cur;
    int** c2125 = ((void*)0);
    _Bool c2126 = ((t2124 != c2125)) ? 1 : 0;
    if (c2126) {
      int* t2127 = t2123->_M_first;
      int** t2128 = t2123->_M_cur;
      int* t2129 = *t2128;
      void_std___Destroy_int__(t2127, t2129);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v2130, int* v2131, int* v2132) {
bb2133:
  int* __first2134;
  int* __last2135;
  int* __result2136;
  int* __retval2137;
  struct std___UninitDestroyGuard_int____void_ __guard2138;
  __first2134 = v2130;
  __last2135 = v2131;
  __result2136 = v2132;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard2138, &__result2136);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        int* t2140 = __first2134;
        int* t2141 = __last2135;
        _Bool c2142 = ((t2140 != t2141)) ? 1 : 0;
        if (!c2142) break;
        int* t2143 = __result2136;
        int* t2144 = __first2134;
        void_std___Construct_int__int__(t2143, t2144);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2138);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step2139: ;
        int* t2145 = __first2134;
        int c2146 = 1;
        int* ptr2147 = &(t2145)[c2146];
        __first2134 = ptr2147;
        int* t2148 = __result2136;
        int c2149 = 1;
        int* ptr2150 = &(t2148)[c2149];
        __result2136 = ptr2150;
      }
    std___UninitDestroyGuard_int___void___release(&__guard2138);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2138);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t2151 = __result2136;
    __retval2137 = t2151;
    int* t2152 = __retval2137;
    int* ret_val2153 = t2152;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2138);
    }
    return ret_val2153;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v2154) {
bb2155:
  int* __it2156;
  int* __retval2157;
  __it2156 = v2154;
  int* t2158 = __it2156;
  __retval2157 = t2158;
  int* t2159 = __retval2157;
  return t2159;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v2160, int* v2161, int* v2162) {
bb2163:
  int* __first2164;
  int* __last2165;
  int* __result2166;
  int* __retval2167;
  __first2164 = v2160;
  __last2165 = v2161;
  __result2166 = v2162;
      long __n2168;
      int* t2169 = __last2165;
      int* t2170 = __first2164;
      long diff2171 = t2169 - t2170;
      __n2168 = diff2171;
        long t2172 = __n2168;
        long c2173 = 0;
        _Bool c2174 = ((t2172 > c2173)) ? 1 : 0;
        if (c2174) {
          int* t2175 = __result2166;
          int* r2176 = int__std____niter_base_int__(t2175);
          void* cast2177 = (void*)r2176;
          int* t2178 = __first2164;
          int* r2179 = int__std____niter_base_int__(t2178);
          void* cast2180 = (void*)r2179;
          long t2181 = __n2168;
          unsigned long cast2182 = (unsigned long)t2181;
          unsigned long c2183 = 4;
          unsigned long b2184 = cast2182 * c2183;
          void* r2185 = memcpy(cast2177, cast2180, b2184);
          long t2186 = __n2168;
          int* t2187 = __result2166;
          int* ptr2188 = &(t2187)[t2186];
          __result2166 = ptr2188;
        }
      int* t2189 = __result2166;
      __retval2167 = t2189;
      int* t2190 = __retval2167;
      return t2190;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v2191, int* v2192, int* v2193, struct std__allocator_int_* v2194) {
bb2195:
  int* __first2196;
  int* __last2197;
  int* __result2198;
  struct std__allocator_int_* unnamed2199;
  int* __retval2200;
  __first2196 = v2191;
  __last2197 = v2192;
  __result2198 = v2193;
  unnamed2199 = v2194;
    _Bool r2201 = std__is_constant_evaluated();
    if (r2201) {
      int* t2202 = __first2196;
      int* t2203 = __last2197;
      int* t2204 = __result2198;
      int* r2205 = int__std____do_uninit_copy_int___int___int__(t2202, t2203, t2204);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval2200 = r2205;
      int* t2206 = __retval2200;
      return t2206;
    }
    int* t2207 = __first2196;
    int* t2208 = __last2197;
    int* t2209 = __result2198;
    int* r2210 = int__std__uninitialized_copy_int___int__(t2207, t2208, t2209);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval2200 = r2210;
    int* t2211 = __retval2200;
    return t2211;
  abort();
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEEvT_S4_
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v2212, struct std___Deque_iterator_int__int____int___ v2213) {
bb2214:
  struct std___Deque_iterator_int__int____int___ __first2215;
  struct std___Deque_iterator_int__int____int___ __last2216;
  __first2215 = v2212;
  __last2216 = v2213;
      _Bool r2217 = std____is_constant_evaluated();
      if (r2217) {
          while (1) {
            _Bool r2219 = std__operator__(&__first2215, &__last2216);
            _Bool u2220 = !r2219;
            if (!u2220) break;
            int* r2221 = std___Deque_iterator_int__int___int____operator____const(&__first2215);
            void_std__destroy_at_int_(r2221);
            if (__cir_exc_active) {
              return;
            }
          for_step2218: ;
            struct std___Deque_iterator_int__int____int___* r2222 = std___Deque_iterator_int__int___int____operator___4(&__first2215);
          }
      }
  return;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEiEvT_S4_RSaIT0_E
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v2223, struct std___Deque_iterator_int__int____int___ v2224, struct std__allocator_int_* v2225) {
bb2226:
  struct std___Deque_iterator_int__int____int___ __first2227;
  struct std___Deque_iterator_int__int____int___ __last2228;
  struct std__allocator_int_* unnamed2229;
  struct std___Deque_iterator_int__int____int___ agg_tmp02230;
  struct std___Deque_iterator_int__int____int___ agg_tmp12231;
  __first2227 = v2223;
  __last2228 = v2224;
  unnamed2229 = v2225;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02230, &__first2227);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12231, &__last2228);
  struct std___Deque_iterator_int__int____int___ t2232 = agg_tmp02230;
  struct std___Deque_iterator_int__int____int___ t2233 = agg_tmp12231;
  void_std___Destroy_std___Deque_iterator_int__int___int____(t2232, t2233);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ES1_PS1_
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v2234, int* v2235, int** v2236) {
bb2237:
  struct std___Deque_iterator_int__int____int___* this2238;
  int* __x2239;
  int** __y2240;
  this2238 = v2234;
  __x2239 = v2235;
  __y2240 = v2236;
  struct std___Deque_iterator_int__int____int___* t2241 = this2238;
  int* t2242 = __x2239;
  t2241->_M_cur = t2242;
  int** t2243 = __y2240;
  int* t2244 = *t2243;
  t2241->_M_first = t2244;
  int** t2245 = __y2240;
  int* t2246 = *t2245;
  unsigned long r2247 = std___Deque_iterator_int__int___int_____S_buffer_size();
  int* ptr2248 = &(t2246)[r2247];
  t2241->_M_last = ptr2248;
  int** t2249 = __y2240;
  t2241->_M_node = t2249;
  return;
}

// function: _ZNSt5dequeIiSaIiEE19_M_range_initializeIPiEEvT_S4_St20forward_iterator_tag
void void_std__deque_int__std__allocator_int______M_range_initialize_int__(struct std__deque_int__std__allocator_int__* v2250, int* v2251, int* v2252, struct std__forward_iterator_tag v2253) {
bb2254:
  struct std__deque_int__std__allocator_int__* this2255;
  int* __first2256;
  int* __last2257;
  struct std__forward_iterator_tag unnamed2258;
  unsigned long __n2259;
  int** __cur_node2260;
  this2255 = v2250;
  __first2256 = v2251;
  __last2257 = v2252;
  unnamed2258 = v2253;
  struct std__deque_int__std__allocator_int__* t2261 = this2255;
  int* t2262 = __first2256;
  int* t2263 = __last2257;
  long r2264 = std__iterator_traits_int____difference_type_std__distance_int__(t2262, t2263);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast2265 = (unsigned long)r2264;
  __n2259 = cast2265;
  struct std___Deque_base_int__std__allocator_int__* base2266 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2261 + 0);
  unsigned long t2267 = __n2259;
  struct std___Deque_base_int__std__allocator_int__* base2268 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2261 + 0);
  struct std__allocator_int_* r2269 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2268);
  unsigned long r2270 = std__deque_int__std__allocator_int______S_check_init_len(t2267, r2269);
  if (__cir_exc_active) {
    return;
  }
  std___Deque_base_int__std__allocator_int______M_initialize_map(base2266, r2270);
  if (__cir_exc_active) {
    return;
  }
    struct std___Deque_iterator_int__int____int___ agg_tmp02271;
    struct std___Deque_iterator_int__int____int___ agg_tmp12272;
        struct std___Deque_base_int__std__allocator_int__* base2274 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2261 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2275 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2274->_M_impl) + 0);
        int** t2276 = base2275->_M_start._M_node;
        __cur_node2260 = t2276;
        while (1) {
          int** t2278 = __cur_node2260;
          struct std___Deque_base_int__std__allocator_int__* base2279 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2261 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2280 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2279->_M_impl) + 0);
          int** t2281 = base2280->_M_finish._M_node;
          _Bool c2282 = ((t2278 < t2281)) ? 1 : 0;
          if (!c2282) break;
            int* __mid2283;
              unsigned long t2284 = __n2259;
              unsigned long r2285 = std__deque_int__std__allocator_int______S_buffer_size();
              _Bool c2286 = ((t2284 < r2285)) ? 1 : 0;
              if (c2286) {
                __builtin_unreachable();
              }
            int* t2287 = __first2256;
            __mid2283 = t2287;
            unsigned long r2288 = std__deque_int__std__allocator_int______S_buffer_size();
            void_std__advance_int___unsigned_long_(&__mid2283, r2288);
            if (__cir_exc_active) {
              goto cir_try_dispatch2273;
            }
            int* t2289 = __first2256;
            int* t2290 = __mid2283;
            int** t2291 = __cur_node2260;
            int* t2292 = *t2291;
            struct std___Deque_base_int__std__allocator_int__* base2293 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2261 + 0);
            struct std__allocator_int_* r2294 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2293);
            int* r2295 = int__std____uninitialized_copy_a_int___int___int___int_(t2289, t2290, t2292, r2294);
            if (__cir_exc_active) {
              goto cir_try_dispatch2273;
            }
            int* t2296 = __mid2283;
            __first2256 = t2296;
        for_step2277: ;
          int** t2297 = __cur_node2260;
          int c2298 = 1;
          int** ptr2299 = &(t2297)[c2298];
          __cur_node2260 = ptr2299;
        }
      int* t2300 = __first2256;
      int* t2301 = __last2257;
      struct std___Deque_base_int__std__allocator_int__* base2302 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2261 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2303 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2302->_M_impl) + 0);
      int* t2304 = base2303->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base2305 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2261 + 0);
      struct std__allocator_int_* r2306 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2305);
      int* r2307 = int__std____uninitialized_copy_a_int___int___int___int_(t2300, t2301, t2304, r2306);
      if (__cir_exc_active) {
        goto cir_try_dispatch2273;
      }
    cir_try_dispatch2273: ;
    if (__cir_exc_active) {
    {
      int ca_tok2308 = 0;
      void* ca_exn2309 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base2310 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2261 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2311 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2310->_M_impl) + 0);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02271, &base2311->_M_start);
        int** t2312 = __cur_node2260;
        int* t2313 = *t2312;
        int** t2314 = __cur_node2260;
        std___Deque_iterator_int__int___int_____Deque_iterator_2(&agg_tmp12272, t2313, t2314);
        struct std___Deque_base_int__std__allocator_int__* base2315 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2261 + 0);
        struct std__allocator_int_* r2316 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2315);
        struct std___Deque_iterator_int__int____int___ t2317 = agg_tmp02271;
        struct std___Deque_iterator_int__int____int___ t2318 = agg_tmp12272;
        void_std___Destroy_std___Deque_iterator_int__int___int____int_(t2317, t2318, r2316);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
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

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v2319) {
bb2320:
  struct std___Deque_base_int__std__allocator_int__* this2321;
  this2321 = v2319;
  struct std___Deque_base_int__std__allocator_int__* t2322 = this2321;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2323 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2322->_M_impl) + 0);
      int** t2324 = base2323->_M_map;
      _Bool cast2325 = (_Bool)t2324;
      if (cast2325) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2326 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2322->_M_impl) + 0);
        int** t2327 = base2326->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2328 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2322->_M_impl) + 0);
        int** t2329 = base2328->_M_finish._M_node;
        int c2330 = 1;
        int** ptr2331 = &(t2329)[c2330];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t2322, t2327, ptr2331);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2332 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2322->_M_impl) + 0);
        int** t2333 = base2332->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2334 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2322->_M_impl) + 0);
        unsigned long t2335 = base2334->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t2322, t2333, t2335);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t2322->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v2336, struct std____new_allocator_int_* v2337) {
bb2338:
  struct std____new_allocator_int_* this2339;
  struct std____new_allocator_int_* unnamed2340;
  this2339 = v2336;
  unnamed2340 = v2337;
  struct std____new_allocator_int_* t2341 = this2339;
  return;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v2342, struct std__allocator_int_* v2343) {
bb2344:
  struct std__allocator_int_* this2345;
  struct std__allocator_int_* __a2346;
  this2345 = v2342;
  __a2346 = v2343;
  struct std__allocator_int_* t2347 = this2345;
  struct std____new_allocator_int_* base2348 = (struct std____new_allocator_int_*)((char *)t2347 + 0);
  struct std__allocator_int_* t2349 = __a2346;
  struct std____new_allocator_int_* base2350 = (struct std____new_allocator_int_*)((char *)t2349 + 0);
  std____new_allocator_int_____new_allocator(base2348, base2350);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* v2351) {
bb2352:
  struct std___Deque_iterator_int__int____int___* this2353;
  this2353 = v2351;
  struct std___Deque_iterator_int__int____int___* t2354 = this2353;
  int* c2355 = ((void*)0);
  t2354->_M_cur = c2355;
  int* c2356 = ((void*)0);
  t2354->_M_first = c2356;
  int* c2357 = ((void*)0);
  t2354->_M_last = c2357;
  int** c2358 = ((void*)0);
  t2354->_M_node = c2358;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v2359) {
bb2360:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this2361;
  this2361 = v2359;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t2362 = this2361;
  int** c2363 = ((void*)0);
  t2362->_M_map = c2363;
  unsigned long c2364 = 0;
  t2362->_M_map_size = c2364;
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t2362->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t2362->_M_finish);
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v2365) {
bb2366:
  struct std____new_allocator_int___* this2367;
  this2367 = v2365;
  struct std____new_allocator_int___* t2368 = this2367;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v2369) {
bb2370:
  int* __location2371;
  __location2371 = v2369;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v2372, int* v2373) {
bb2374:
  int* __first2375;
  int* __last2376;
  __first2375 = v2372;
  __last2376 = v2373;
      _Bool r2377 = std____is_constant_evaluated();
      if (r2377) {
          while (1) {
            int* t2379 = __first2375;
            int* t2380 = __last2376;
            _Bool c2381 = ((t2379 != t2380)) ? 1 : 0;
            if (!c2381) break;
            int* t2382 = __first2375;
            void_std__destroy_at_int_(t2382);
            if (__cir_exc_active) {
              return;
            }
          for_step2378: ;
            int* t2383 = __first2375;
            int c2384 = 1;
            int* ptr2385 = &(t2383)[c2384];
            __first2375 = ptr2385;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v2386, int* v2387, struct std__allocator_int_* v2388) {
bb2389:
  int* __first2390;
  int* __last2391;
  struct std__allocator_int_* unnamed2392;
  __first2390 = v2386;
  __last2391 = v2387;
  unnamed2392 = v2388;
  int* t2393 = __first2390;
  int* t2394 = __last2391;
  void_std___Destroy_int__(t2393, t2394);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v2395, struct std___Deque_iterator_int__int____int___ v2396, struct std___Deque_iterator_int__int____int___ v2397) {
bb2398:
  struct std__deque_int__std__allocator_int__* this2399;
  struct std___Deque_iterator_int__int____int___ __first2400;
  struct std___Deque_iterator_int__int____int___ __last2401;
  this2399 = v2395;
  __first2400 = v2396;
  __last2401 = v2397;
  struct std__deque_int__std__allocator_int__* t2402 = this2399;
    int** __node2403;
    int** t2404 = __first2400._M_node;
    int c2405 = 1;
    int** ptr2406 = &(t2404)[c2405];
    __node2403 = ptr2406;
    while (1) {
      int** t2408 = __node2403;
      int** t2409 = __last2401._M_node;
      _Bool c2410 = ((t2408 < t2409)) ? 1 : 0;
      if (!c2410) break;
      int** t2411 = __node2403;
      int* t2412 = *t2411;
      int** t2413 = __node2403;
      int* t2414 = *t2413;
      unsigned long r2415 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr2416 = &(t2414)[r2415];
      struct std___Deque_base_int__std__allocator_int__* base2417 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2402 + 0);
      struct std__allocator_int_* r2418 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2417);
      void_std___Destroy_int___int_(t2412, ptr2416, r2418);
      if (__cir_exc_active) {
        return;
      }
    for_step2407: ;
      int** t2419 = __node2403;
      int c2420 = 1;
      int** ptr2421 = &(t2419)[c2420];
      __node2403 = ptr2421;
    }
    int** t2422 = __first2400._M_node;
    int** t2423 = __last2401._M_node;
    _Bool c2424 = ((t2422 != t2423)) ? 1 : 0;
    if (c2424) {
      int* t2425 = __first2400._M_cur;
      int* t2426 = __first2400._M_last;
      struct std___Deque_base_int__std__allocator_int__* base2427 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2402 + 0);
      struct std__allocator_int_* r2428 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2427);
      void_std___Destroy_int___int_(t2425, t2426, r2428);
      if (__cir_exc_active) {
        return;
      }
      int* t2429 = __last2401._M_first;
      int* t2430 = __last2401._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base2431 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2402 + 0);
      struct std__allocator_int_* r2432 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2431);
      void_std___Destroy_int___int_(t2429, t2430, r2432);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t2433 = __first2400._M_cur;
      int* t2434 = __last2401._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base2435 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2402 + 0);
      struct std__allocator_int_* r2436 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2435);
      void_std___Destroy_int___int_(t2433, t2434, r2436);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v2437, struct std___Deque_iterator_int__int____int___ v2438, struct std___Deque_iterator_int__int____int___ v2439, struct std__allocator_int_* v2440) {
bb2441:
  struct std__deque_int__std__allocator_int__* this2442;
  struct std___Deque_iterator_int__int____int___ __first2443;
  struct std___Deque_iterator_int__int____int___ __last2444;
  struct std__allocator_int_* unnamed2445;
  this2442 = v2437;
  __first2443 = v2438;
  __last2444 = v2439;
  unnamed2445 = v2440;
  struct std__deque_int__std__allocator_int__* t2446 = this2442;
    _Bool c2447 = 0;
    if (c2447) {
      struct std___Deque_iterator_int__int____int___ agg_tmp02448;
      struct std___Deque_iterator_int__int____int___ agg_tmp12449;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02448, &__first2443);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12449, &__last2444);
      struct std___Deque_iterator_int__int____int___ t2450 = agg_tmp02448;
      struct std___Deque_iterator_int__int____int___ t2451 = agg_tmp12449;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t2446, t2450, t2451);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

