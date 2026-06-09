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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stack/stack_size_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[19] = "myints.size() != 5";
char _str_5[10] = "2. size: ";
char _str_6[19] = "myints.size() != 4";
char _str_7[48] = "cannot create std::deque larger than max_size()";
char _str_8[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv[69] = "void std::stack<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char _str_9[15] = "!this->empty()";
char _str_10[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long std__stack_int__std__deque_int__std__allocator_int_______size___const(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  if (__cir_exc_active) {
    return;
  }
  int t30 = __state27;
  int r31 = std__operator__2(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v32, char* v33) {
bb34:
  char* __c135;
  char* __c236;
  _Bool __retval37;
  __c135 = v32;
  __c236 = v33;
  char* t38 = __c135;
  char t39 = *t38;
  int cast40 = (int)t39;
  char* t41 = __c236;
  char t42 = *t41;
  int cast43 = (int)t42;
  _Bool c44 = ((cast40 == cast43)) ? 1 : 0;
  __retval37 = c44;
  _Bool t45 = __retval37;
  return t45;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v46) {
bb47:
  char* __p48;
  unsigned long __retval49;
  unsigned long __i50;
  __p48 = v46;
  unsigned long c51 = 0;
  __i50 = c51;
    char ref_tmp052;
    while (1) {
      unsigned long t53 = __i50;
      char* t54 = __p48;
      char* ptr55 = &(t54)[t53];
      char c56 = 0;
      ref_tmp052 = c56;
      _Bool r57 = __gnu_cxx__char_traits_char___eq(ptr55, &ref_tmp052);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u58 = !r57;
      if (!u58) break;
      unsigned long t59 = __i50;
      unsigned long u60 = t59 + 1;
      __i50 = u60;
    }
  unsigned long t61 = __i50;
  __retval49 = t61;
  unsigned long t62 = __retval49;
  return t62;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v63) {
bb64:
  char* __s65;
  unsigned long __retval66;
  __s65 = v63;
    _Bool r67 = std____is_constant_evaluated();
    if (r67) {
      char* t68 = __s65;
      unsigned long r69 = __gnu_cxx__char_traits_char___length(t68);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval66 = r69;
      unsigned long t70 = __retval66;
      return t70;
    }
  char* t71 = __s65;
  unsigned long r72 = strlen(t71);
  __retval66 = r72;
  unsigned long t73 = __retval66;
  return t73;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76:
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v104, struct std___Deque_iterator_int__int____int___* v105) {
bb106:
  struct std___Deque_iterator_int__int____int___* __x107;
  struct std___Deque_iterator_int__int____int___* __y108;
  long __retval109;
  __x107 = v104;
  __y108 = v105;
  unsigned long r110 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast111 = (long)r110;
  struct std___Deque_iterator_int__int____int___* t112 = __x107;
  int** t113 = t112->_M_node;
  struct std___Deque_iterator_int__int____int___* t114 = __y108;
  int** t115 = t114->_M_node;
  long diff116 = t113 - t115;
  struct std___Deque_iterator_int__int____int___* t117 = __x107;
  int** t118 = t117->_M_node;
  _Bool cast119 = (_Bool)t118;
  long cast120 = (long)cast119;
  long b121 = diff116 - cast120;
  long b122 = cast111 * b121;
  struct std___Deque_iterator_int__int____int___* t123 = __x107;
  int* t124 = t123->_M_cur;
  struct std___Deque_iterator_int__int____int___* t125 = __x107;
  int* t126 = t125->_M_first;
  long diff127 = t124 - t126;
  long b128 = b122 + diff127;
  struct std___Deque_iterator_int__int____int___* t129 = __y108;
  int* t130 = t129->_M_last;
  struct std___Deque_iterator_int__int____int___* t131 = __y108;
  int* t132 = t131->_M_cur;
  long diff133 = t130 - t132;
  long b134 = b128 + diff133;
  __retval109 = b134;
  long t135 = __retval109;
  return t135;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v136, unsigned long* v137) {
bb138:
  unsigned long* __a139;
  unsigned long* __b140;
  unsigned long* __retval141;
  __a139 = v136;
  __b140 = v137;
    unsigned long* t142 = __b140;
    unsigned long t143 = *t142;
    unsigned long* t144 = __a139;
    unsigned long t145 = *t144;
    _Bool c146 = ((t143 < t145)) ? 1 : 0;
    if (c146) {
      unsigned long* t147 = __b140;
      __retval141 = t147;
      unsigned long* t148 = __retval141;
      return t148;
    }
  unsigned long* t149 = __a139;
  __retval141 = t149;
  unsigned long* t150 = __retval141;
  return t150;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v151) {
bb152:
  struct std__allocator_int_* __a153;
  unsigned long __retval154;
  unsigned long __diffmax155;
  unsigned long __allocmax156;
  __a153 = v151;
  unsigned long c157 = 9223372036854775807;
  __diffmax155 = c157;
  unsigned long c158 = 4611686018427387903;
  __allocmax156 = c158;
  unsigned long* r159 = unsigned_long_const__std__min_unsigned_long_(&__diffmax155, &__allocmax156);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t160 = *r159;
  __retval154 = t160;
  unsigned long t161 = __retval154;
  return t161;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v162) {
bb163:
  struct std__deque_int__std__allocator_int__* this164;
  unsigned long __retval165;
  this164 = v162;
  struct std__deque_int__std__allocator_int__* t166 = this164;
  struct std___Deque_base_int__std__allocator_int__* base167 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t166 + 0);
  struct std__allocator_int_* r168 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base167);
  unsigned long r169 = std__deque_int__std__allocator_int______S_max_size(r168);
  __retval165 = r169;
  unsigned long t170 = __retval165;
  return t170;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v171) {
bb172:
  struct std__deque_int__std__allocator_int__* this173;
  unsigned long __retval174;
  unsigned long __sz175;
  this173 = v171;
  struct std__deque_int__std__allocator_int__* t176 = this173;
  struct std___Deque_base_int__std__allocator_int__* base177 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t176 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base178 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base177->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base179 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t176 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base180 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base179->_M_impl) + 0);
  long r181 = std__operator_(&base178->_M_finish, &base180->_M_start);
  unsigned long cast182 = (unsigned long)r181;
  __sz175 = cast182;
    unsigned long t183 = __sz175;
    unsigned long r184 = std__deque_int__std__allocator_int_____max_size___const(t176);
    _Bool c185 = ((t183 > r184)) ? 1 : 0;
    if (c185) {
      __builtin_unreachable();
    }
  unsigned long t186 = __sz175;
  __retval174 = t186;
  unsigned long t187 = __retval174;
  return t187;
}

// function: _ZNKSt5stackIiSt5dequeIiSaIiEEE4sizeEv
unsigned long std__stack_int__std__deque_int__std__allocator_int_______size___const(struct std__stack_int__std__deque_int__std__allocator_int___* v188) {
bb189:
  struct std__stack_int__std__deque_int__std__allocator_int___* this190;
  unsigned long __retval191;
  this190 = v188;
  struct std__stack_int__std__deque_int__std__allocator_int___* t192 = this190;
  unsigned long r193 = std__deque_int__std__allocator_int_____size___const(&t192->c);
  __retval191 = r193;
  unsigned long t194 = __retval191;
  return t194;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v195, void* v196) {
bb197:
  struct std__basic_ostream_char__std__char_traits_char__* this198;
  void* __pf199;
  struct std__basic_ostream_char__std__char_traits_char__* __retval200;
  this198 = v195;
  __pf199 = v196;
  struct std__basic_ostream_char__std__char_traits_char__* t201 = this198;
  void* t202 = __pf199;
  struct std__basic_ostream_char__std__char_traits_char__* r203 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t202)(t201);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval200 = r203;
  struct std__basic_ostream_char__std__char_traits_char__* t204 = __retval200;
  return t204;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v205) {
bb206:
  struct std__basic_ostream_char__std__char_traits_char__* __os207;
  struct std__basic_ostream_char__std__char_traits_char__* __retval208;
  __os207 = v205;
  struct std__basic_ostream_char__std__char_traits_char__* t209 = __os207;
  struct std__basic_ostream_char__std__char_traits_char__* r210 = std__ostream__flush(t209);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval208 = r210;
  struct std__basic_ostream_char__std__char_traits_char__* t211 = __retval208;
  return t211;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v212) {
bb213:
  struct std__ctype_char_* __f214;
  struct std__ctype_char_* __retval215;
  __f214 = v212;
    struct std__ctype_char_* t216 = __f214;
    _Bool cast217 = (_Bool)t216;
    _Bool u218 = !cast217;
    if (u218) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t219 = __f214;
  __retval215 = t219;
  struct std__ctype_char_* t220 = __retval215;
  return t220;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v221, char v222) {
bb223:
  struct std__ctype_char_* this224;
  char __c225;
  char __retval226;
  this224 = v221;
  __c225 = v222;
  struct std__ctype_char_* t227 = this224;
    char t228 = t227->_M_widen_ok;
    _Bool cast229 = (_Bool)t228;
    if (cast229) {
      char t230 = __c225;
      unsigned char cast231 = (unsigned char)t230;
      unsigned long cast232 = (unsigned long)cast231;
      char t233 = t227->_M_widen[cast232];
      __retval226 = t233;
      char t234 = __retval226;
      return t234;
    }
  std__ctype_char____M_widen_init___const(t227);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t235 = __c225;
  void** v236 = (void**)t227;
  void* v237 = *((void**)v236);
  char vcall240 = (char)__VERIFIER_virtual_call_char_char(t227, 6, t235);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval226 = vcall240;
  char t241 = __retval226;
  return t241;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v242, char v243) {
bb244:
  struct std__basic_ios_char__std__char_traits_char__* this245;
  char __c246;
  char __retval247;
  this245 = v242;
  __c246 = v243;
  struct std__basic_ios_char__std__char_traits_char__* t248 = this245;
  struct std__ctype_char_* t249 = t248->_M_ctype;
  struct std__ctype_char_* r250 = std__ctype_char__const__std____check_facet_std__ctype_char___(t249);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t251 = __c246;
  char r252 = std__ctype_char___widen_char__const(r250, t251);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval247 = r252;
  char t253 = __retval247;
  return t253;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v254) {
bb255:
  struct std__basic_ostream_char__std__char_traits_char__* __os256;
  struct std__basic_ostream_char__std__char_traits_char__* __retval257;
  __os256 = v254;
  struct std__basic_ostream_char__std__char_traits_char__* t258 = __os256;
  struct std__basic_ostream_char__std__char_traits_char__* t259 = __os256;
  void** v260 = (void**)t259;
  void* v261 = *((void**)v260);
  unsigned char* cast262 = (unsigned char*)v261;
  long c263 = -24;
  unsigned char* ptr264 = &(cast262)[c263];
  long* cast265 = (long*)ptr264;
  long t266 = *cast265;
  unsigned char* cast267 = (unsigned char*)t259;
  unsigned char* ptr268 = &(cast267)[t266];
  struct std__basic_ostream_char__std__char_traits_char__* cast269 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr268;
  struct std__basic_ios_char__std__char_traits_char__* cast270 = (struct std__basic_ios_char__std__char_traits_char__*)cast269;
  char c271 = 10;
  char r272 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast270, c271);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r273 = std__ostream__put(t258, r272);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r274 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r273);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval257 = r274;
  struct std__basic_ostream_char__std__char_traits_char__* t275 = __retval257;
  return t275;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v276, int* v277) {
bb278:
  int* __location279;
  int* __args280;
  int* __retval281;
  void* __loc282;
  __location279 = v276;
  __args280 = v277;
  int* t283 = __location279;
  void* cast284 = (void*)t283;
  __loc282 = cast284;
    void* t285 = __loc282;
    int* cast286 = (int*)t285;
    int* t287 = __args280;
    int t288 = *t287;
    *cast286 = t288;
    __retval281 = cast286;
    int* t289 = __retval281;
    return t289;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v290, int* v291, int* v292) {
bb293:
  struct std__allocator_int_* __a294;
  int* __p295;
  int* __args296;
  __a294 = v290;
  __p295 = v291;
  __args296 = v292;
  int* t297 = __p295;
  int* t298 = __args296;
  int* r299 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t297, t298);
  return;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v300, int** v301) {
bb302:
  int*** unnamed303;
  int** __res304;
  int** __retval305;
  unnamed303 = v300;
  __res304 = v301;
  int** t306 = __res304;
  __retval305 = t306;
  int** t307 = __retval305;
  return t307;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v308, int** v309, struct std__random_access_iterator_tag v310) {
bb311:
  int** __first312;
  int** __last313;
  struct std__random_access_iterator_tag unnamed314;
  long __retval315;
  __first312 = v308;
  __last313 = v309;
  unnamed314 = v310;
  int** t316 = __last313;
  int** t317 = __first312;
  long diff318 = t316 - t317;
  __retval315 = diff318;
  long t319 = __retval315;
  return t319;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v320) {
bb321:
  int*** unnamed322;
  struct std__random_access_iterator_tag __retval323;
  unnamed322 = v320;
  struct std__random_access_iterator_tag t324 = __retval323;
  return t324;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v325, int** v326) {
bb327:
  int** __first328;
  int** __last329;
  long __retval330;
  struct std__random_access_iterator_tag agg_tmp0331;
  __first328 = v325;
  __last329 = v326;
  int** t332 = __first328;
  int** t333 = __last329;
  struct std__random_access_iterator_tag r334 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first328);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0331 = r334;
  struct std__random_access_iterator_tag t335 = agg_tmp0331;
  long r336 = std__iterator_traits_int_____difference_type_std____distance_int___(t332, t333, t335);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval330 = r336;
  long t337 = __retval330;
  return t337;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v338, int*** v339) {
bb340:
  int*** __out341;
  int*** __in342;
  __out341 = v338;
  __in342 = v339;
    int*** t343 = __in342;
    int** t344 = *t343;
    int* t345 = *t344;
    int*** t346 = __out341;
    int** t347 = *t346;
    *t347 = t345;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v348, int** v349, int** v350) {
bb351:
  int** __first352;
  int** __last353;
  int** __result354;
  int** __retval355;
  __first352 = v348;
  __last353 = v349;
  __result354 = v350;
      _Bool r356 = std____is_constant_evaluated();
      if (r356) {
      } else {
          long __n357;
          int** t358 = __first352;
          int** t359 = __last353;
          long r360 = std__iterator_traits_int_____difference_type_std__distance_int___(t358, t359);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n357 = r360;
            long t361 = __n357;
            long c362 = 1;
            _Bool c363 = ((t361 > c362)) ? 1 : 0;
            if (c363) {
              int** t364 = __result354;
              void* cast365 = (void*)t364;
              int** t366 = __first352;
              void* cast367 = (void*)t366;
              long t368 = __n357;
              unsigned long cast369 = (unsigned long)t368;
              unsigned long c370 = 8;
              unsigned long b371 = cast369 * c370;
              void* r372 = memmove(cast365, cast367, b371);
              long t373 = __n357;
              int** t374 = __result354;
              int** ptr375 = &(t374)[t373];
              __result354 = ptr375;
            } else {
                long t376 = __n357;
                long c377 = 1;
                _Bool c378 = ((t376 == c377)) ? 1 : 0;
                if (c378) {
                  void_std____assign_one_false__int____int___(&__result354, &__first352);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t379 = __result354;
                  int c380 = 1;
                  int** ptr381 = &(t379)[c380];
                  __result354 = ptr381;
                }
            }
          int** t382 = __result354;
          __retval355 = t382;
          int** t383 = __retval355;
          return t383;
      }
    while (1) {
      int** t385 = __first352;
      int** t386 = __last353;
      _Bool c387 = ((t385 != t386)) ? 1 : 0;
      if (!c387) break;
      void_std____assign_one_false__int____int___(&__result354, &__first352);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step384: ;
      int** t388 = __result354;
      int c389 = 1;
      int** ptr390 = &(t388)[c389];
      __result354 = ptr390;
      int** t391 = __first352;
      int c392 = 1;
      int** ptr393 = &(t391)[c392];
      __first352 = ptr393;
    }
  int** t394 = __result354;
  __retval355 = t394;
  int** t395 = __retval355;
  return t395;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v396, int** v397, int** v398) {
bb399:
  int** __first400;
  int** __last401;
  int** __result402;
  int** __retval403;
  __first400 = v396;
  __last401 = v397;
  __result402 = v398;
  int** t404 = __first400;
  int** t405 = __last401;
  int** t406 = __result402;
  int** r407 = int___std____copy_move_a2_false__int____int____int___(t404, t405, t406);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval403 = r407;
  int** t408 = __retval403;
  return t408;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v409) {
bb410:
  int** __it411;
  int** __retval412;
  __it411 = v409;
  int** t413 = __it411;
  __retval412 = t413;
  int** t414 = __retval412;
  return t414;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v415, int** v416, int** v417) {
bb418:
  int** __first419;
  int** __last420;
  int** __result421;
  int** __retval422;
  __first419 = v415;
  __last420 = v416;
  __result421 = v417;
  int** t423 = __first419;
  int** r424 = int___std____niter_base_int___(t423);
  int** t425 = __last420;
  int** r426 = int___std____niter_base_int___(t425);
  int** t427 = __result421;
  int** r428 = int___std____niter_base_int___(t427);
  int** r429 = int___std____copy_move_a1_false__int____int___(r424, r426, r428);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r430 = int___std____niter_wrap_int___(&__result421, r429);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval422 = r430;
  int** t431 = __retval422;
  return t431;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v432) {
bb433:
  int** __it434;
  int** __retval435;
  __it434 = v432;
  int** t436 = __it434;
  __retval435 = t436;
  int** t437 = __retval435;
  return t437;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v438, int** v439, int** v440) {
bb441:
  int** __first442;
  int** __last443;
  int** __result444;
  int** __retval445;
  __first442 = v438;
  __last443 = v439;
  __result444 = v440;
  int** t446 = __first442;
  int** r447 = int___std____miter_base_int___(t446);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t448 = __last443;
  int** r449 = int___std____miter_base_int___(t448);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t450 = __result444;
  int** r451 = int___std____copy_move_a_false__int____int___(r447, r449, t450);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval445 = r451;
  int** t452 = __retval445;
  return t452;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb453:
  _Bool __retval454;
    _Bool c455 = 0;
    __retval454 = c455;
    _Bool t456 = __retval454;
    return t456;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v457, long v458, struct std__random_access_iterator_tag v459) {
bb460:
  int*** __i461;
  long __n462;
  struct std__random_access_iterator_tag unnamed463;
  __i461 = v457;
  __n462 = v458;
  unnamed463 = v459;
    long t464 = __n462;
    _Bool isconst465 = 0;
    _Bool ternary466;
    if (isconst465) {
      long t467 = __n462;
      long c468 = 1;
      _Bool c469 = ((t467 == c468)) ? 1 : 0;
      ternary466 = (_Bool)c469;
    } else {
      _Bool c470 = 0;
      ternary466 = (_Bool)c470;
    }
    if (ternary466) {
      int*** t471 = __i461;
      int** t472 = *t471;
      int c473 = 1;
      int** ptr474 = &(t472)[c473];
      *t471 = ptr474;
    } else {
        long t475 = __n462;
        _Bool isconst476 = 0;
        _Bool ternary477;
        if (isconst476) {
          long t478 = __n462;
          long c479 = -1;
          _Bool c480 = ((t478 == c479)) ? 1 : 0;
          ternary477 = (_Bool)c480;
        } else {
          _Bool c481 = 0;
          ternary477 = (_Bool)c481;
        }
        if (ternary477) {
          int*** t482 = __i461;
          int** t483 = *t482;
          int c484 = -1;
          int** ptr485 = &(t483)[c484];
          *t482 = ptr485;
        } else {
          long t486 = __n462;
          int*** t487 = __i461;
          int** t488 = *t487;
          int** ptr489 = &(t488)[t486];
          *t487 = ptr489;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v490, long v491) {
bb492:
  int*** __i493;
  long __n494;
  long __d495;
  struct std__random_access_iterator_tag agg_tmp0496;
  __i493 = v490;
  __n494 = v491;
  long t497 = __n494;
  __d495 = t497;
  int*** t498 = __i493;
  long t499 = __d495;
  int*** t500 = __i493;
  struct std__random_access_iterator_tag r501 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t500);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0496 = r501;
  struct std__random_access_iterator_tag t502 = agg_tmp0496;
  void_std____advance_int____long_(t498, t499, t502);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v503, int** v504, int** v505) {
bb506:
  int** __first507;
  int** __last508;
  int** __result509;
  int** __retval510;
  __first507 = v503;
  __last508 = v504;
  __result509 = v505;
      _Bool r511 = std__is_constant_evaluated();
      if (r511) {
      } else {
          long __n512;
          int** t513 = __first507;
          int** t514 = __last508;
          long r515 = std__iterator_traits_int_____difference_type_std__distance_int___(t513, t514);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n512 = r515;
          long t516 = __n512;
          long u517 = -t516;
          void_std__advance_int____long_(&__result509, u517);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t518 = __n512;
            long c519 = 1;
            _Bool c520 = ((t518 > c519)) ? 1 : 0;
            if (c520) {
              int** t521 = __result509;
              void* cast522 = (void*)t521;
              int** t523 = __first507;
              void* cast524 = (void*)t523;
              long t525 = __n512;
              unsigned long cast526 = (unsigned long)t525;
              unsigned long c527 = 8;
              unsigned long b528 = cast526 * c527;
              void* r529 = memmove(cast522, cast524, b528);
            } else {
                long t530 = __n512;
                long c531 = 1;
                _Bool c532 = ((t530 == c531)) ? 1 : 0;
                if (c532) {
                  void_std____assign_one_false__int____int___(&__result509, &__first507);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t533 = __result509;
          __retval510 = t533;
          int** t534 = __retval510;
          return t534;
      }
    while (1) {
      int** t535 = __first507;
      int** t536 = __last508;
      _Bool c537 = ((t535 != t536)) ? 1 : 0;
      if (!c537) break;
        int** t538 = __last508;
        int c539 = -1;
        int** ptr540 = &(t538)[c539];
        __last508 = ptr540;
        int** t541 = __result509;
        int c542 = -1;
        int** ptr543 = &(t541)[c542];
        __result509 = ptr543;
        void_std____assign_one_false__int____int___(&__result509, &__last508);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t544 = __result509;
  __retval510 = t544;
  int** t545 = __retval510;
  return t545;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v546, int** v547, int** v548) {
bb549:
  int** __first550;
  int** __last551;
  int** __result552;
  int** __retval553;
  __first550 = v546;
  __last551 = v547;
  __result552 = v548;
  int** t554 = __first550;
  int** t555 = __last551;
  int** t556 = __result552;
  int** r557 = int___std____copy_move_backward_a2_false__int____int___(t554, t555, t556);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval553 = r557;
  int** t558 = __retval553;
  return t558;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v559, int** v560, int** v561) {
bb562:
  int** __first563;
  int** __last564;
  int** __result565;
  int** __retval566;
  __first563 = v559;
  __last564 = v560;
  __result565 = v561;
  int** t567 = __first563;
  int** r568 = int___std____niter_base_int___(t567);
  int** t569 = __last564;
  int** r570 = int___std____niter_base_int___(t569);
  int** t571 = __result565;
  int** r572 = int___std____niter_base_int___(t571);
  int** r573 = int___std____copy_move_backward_a1_false__int____int___(r568, r570, r572);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r574 = int___std____niter_wrap_int___(&__result565, r573);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval566 = r574;
  int** t575 = __retval566;
  return t575;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v576, int** v577, int** v578) {
bb579:
  int** __first580;
  int** __last581;
  int** __result582;
  int** __retval583;
  __first580 = v576;
  __last581 = v577;
  __result582 = v578;
  int** t584 = __first580;
  int** r585 = int___std____miter_base_int___(t584);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t586 = __last581;
  int** r587 = int___std____miter_base_int___(t586);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t588 = __result582;
  int** r589 = int___std____copy_move_backward_a_false__int____int___(r585, r587, t588);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval583 = r589;
  int** t590 = __retval583;
  return t590;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v591, unsigned long v592, _Bool v593) {
bb594:
  struct std__deque_int__std__allocator_int__* this595;
  unsigned long __nodes_to_add596;
  _Bool __add_at_front597;
  unsigned long __old_num_nodes598;
  unsigned long __new_num_nodes599;
  int** __new_nstart600;
  this595 = v591;
  __nodes_to_add596 = v592;
  __add_at_front597 = v593;
  struct std__deque_int__std__allocator_int__* t601 = this595;
  struct std___Deque_base_int__std__allocator_int__* base602 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base603 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base602->_M_impl) + 0);
  int** t604 = base603->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base605 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base606 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base605->_M_impl) + 0);
  int** t607 = base606->_M_start._M_node;
  long diff608 = t604 - t607;
  long c609 = 1;
  long b610 = diff608 + c609;
  unsigned long cast611 = (unsigned long)b610;
  __old_num_nodes598 = cast611;
  unsigned long t612 = __old_num_nodes598;
  unsigned long t613 = __nodes_to_add596;
  unsigned long b614 = t612 + t613;
  __new_num_nodes599 = b614;
    struct std___Deque_base_int__std__allocator_int__* base615 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base616 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base615->_M_impl) + 0);
    unsigned long t617 = base616->_M_map_size;
    unsigned long c618 = 2;
    unsigned long t619 = __new_num_nodes599;
    unsigned long b620 = c618 * t619;
    _Bool c621 = ((t617 > b620)) ? 1 : 0;
    if (c621) {
      struct std___Deque_base_int__std__allocator_int__* base622 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base623 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base622->_M_impl) + 0);
      int** t624 = base623->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base625 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base626 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base625->_M_impl) + 0);
      unsigned long t627 = base626->_M_map_size;
      unsigned long t628 = __new_num_nodes599;
      unsigned long b629 = t627 - t628;
      unsigned long c630 = 2;
      unsigned long b631 = b629 / c630;
      int** ptr632 = &(t624)[b631];
      _Bool t633 = __add_at_front597;
      unsigned long ternary634;
      if (t633) {
        unsigned long t635 = __nodes_to_add596;
        ternary634 = (unsigned long)t635;
      } else {
        unsigned long c636 = 0;
        ternary634 = (unsigned long)c636;
      }
      int** ptr637 = &(ptr632)[ternary634];
      __new_nstart600 = ptr637;
        int** t638 = __new_nstart600;
        struct std___Deque_base_int__std__allocator_int__* base639 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base640 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base639->_M_impl) + 0);
        int** t641 = base640->_M_start._M_node;
        _Bool c642 = ((t638 < t641)) ? 1 : 0;
        if (c642) {
          struct std___Deque_base_int__std__allocator_int__* base643 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base644 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base643->_M_impl) + 0);
          int** t645 = base644->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base646 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base647 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base646->_M_impl) + 0);
          int** t648 = base647->_M_finish._M_node;
          int c649 = 1;
          int** ptr650 = &(t648)[c649];
          int** t651 = __new_nstart600;
          int** r652 = int___std__copy_int____int___(t645, ptr650, t651);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base653 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base654 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base653->_M_impl) + 0);
          int** t655 = base654->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base656 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base657 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base656->_M_impl) + 0);
          int** t658 = base657->_M_finish._M_node;
          int c659 = 1;
          int** ptr660 = &(t658)[c659];
          int** t661 = __new_nstart600;
          unsigned long t662 = __old_num_nodes598;
          int** ptr663 = &(t661)[t662];
          int** r664 = int___std__copy_backward_int____int___(t655, ptr660, ptr663);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size665;
      unsigned long __bufsz666;
      int** __new_map667;
      struct std___Deque_base_int__std__allocator_int__* base668 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base669 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base668->_M_impl) + 0);
      unsigned long t670 = base669->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base671 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base672 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base671->_M_impl) + 0);
      unsigned long* r673 = unsigned_long_const__std__max_unsigned_long_(&base672->_M_map_size, &__nodes_to_add596);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t674 = *r673;
      unsigned long b675 = t670 + t674;
      unsigned long c676 = 2;
      unsigned long b677 = b675 + c676;
      __new_map_size665 = b677;
      unsigned long c678 = 128;
      __bufsz666 = c678;
        unsigned long t679 = __new_map_size665;
        unsigned long r680 = std__deque_int__std__allocator_int_____max_size___const(t601);
        unsigned long t681 = __bufsz666;
        unsigned long b682 = r680 + t681;
        unsigned long c683 = 1;
        unsigned long b684 = b682 - c683;
        unsigned long t685 = __bufsz666;
        unsigned long b686 = b684 / t685;
        unsigned long c687 = 2;
        unsigned long b688 = b686 * c687;
        _Bool c689 = ((t679 > b688)) ? 1 : 0;
        if (c689) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base690 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      unsigned long t691 = __new_map_size665;
      int** r692 = std___Deque_base_int__std__allocator_int______M_allocate_map(base690, t691);
      if (__cir_exc_active) {
        return;
      }
      __new_map667 = r692;
      int** t693 = __new_map667;
      unsigned long t694 = __new_map_size665;
      unsigned long t695 = __new_num_nodes599;
      unsigned long b696 = t694 - t695;
      unsigned long c697 = 2;
      unsigned long b698 = b696 / c697;
      int** ptr699 = &(t693)[b698];
      _Bool t700 = __add_at_front597;
      unsigned long ternary701;
      if (t700) {
        unsigned long t702 = __nodes_to_add596;
        ternary701 = (unsigned long)t702;
      } else {
        unsigned long c703 = 0;
        ternary701 = (unsigned long)c703;
      }
      int** ptr704 = &(ptr699)[ternary701];
      __new_nstart600 = ptr704;
      struct std___Deque_base_int__std__allocator_int__* base705 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base706 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base705->_M_impl) + 0);
      int** t707 = base706->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base708 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base709 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base708->_M_impl) + 0);
      int** t710 = base709->_M_finish._M_node;
      int c711 = 1;
      int** ptr712 = &(t710)[c711];
      int** t713 = __new_nstart600;
      int** r714 = int___std__copy_int____int___(t707, ptr712, t713);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base715 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int__* base716 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base717 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base716->_M_impl) + 0);
      int** t718 = base717->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base719 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base720 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base719->_M_impl) + 0);
      unsigned long t721 = base720->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base715, t718, t721);
      int** t722 = __new_map667;
      struct std___Deque_base_int__std__allocator_int__* base723 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base724 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base723->_M_impl) + 0);
      base724->_M_map = t722;
      unsigned long t725 = __new_map_size665;
      struct std___Deque_base_int__std__allocator_int__* base726 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base727 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base726->_M_impl) + 0);
      base727->_M_map_size = t725;
    }
  struct std___Deque_base_int__std__allocator_int__* base728 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base729 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base728->_M_impl) + 0);
  int** t730 = __new_nstart600;
  std___Deque_iterator_int__int___int_____M_set_node(&base729->_M_start, t730);
  struct std___Deque_base_int__std__allocator_int__* base731 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t601 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base732 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base731->_M_impl) + 0);
  int** t733 = __new_nstart600;
  unsigned long t734 = __old_num_nodes598;
  int** ptr735 = &(t733)[t734];
  int c736 = -1;
  int** ptr737 = &(ptr735)[c736];
  std___Deque_iterator_int__int___int_____M_set_node(&base732->_M_finish, ptr737);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v738, unsigned long v739) {
bb740:
  struct std__deque_int__std__allocator_int__* this741;
  unsigned long __nodes_to_add742;
  this741 = v738;
  __nodes_to_add742 = v739;
  struct std__deque_int__std__allocator_int__* t743 = this741;
    unsigned long t744 = __nodes_to_add742;
    unsigned long c745 = 1;
    unsigned long b746 = t744 + c745;
    struct std___Deque_base_int__std__allocator_int__* base747 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t743 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base748 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base747->_M_impl) + 0);
    unsigned long t749 = base748->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base750 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t743 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base751 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base750->_M_impl) + 0);
    int** t752 = base751->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base753 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t743 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base754 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base753->_M_impl) + 0);
    int** t755 = base754->_M_map;
    long diff756 = t752 - t755;
    unsigned long cast757 = (unsigned long)diff756;
    unsigned long b758 = t749 - cast757;
    _Bool c759 = ((b746 > b758)) ? 1 : 0;
    if (c759) {
      unsigned long t760 = __nodes_to_add742;
      _Bool c761 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t743, t760, c761);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v762, int* v763) {
bb764:
  struct std__deque_int__std__allocator_int__* this765;
  int* __args766;
  this765 = v762;
  __args766 = v763;
  struct std__deque_int__std__allocator_int__* t767 = this765;
    unsigned long r768 = std__deque_int__std__allocator_int_____size___const(t767);
    unsigned long r769 = std__deque_int__std__allocator_int_____max_size___const(t767);
    _Bool c770 = ((r768 == r769)) ? 1 : 0;
    if (c770) {
      char* cast771 = (char*)&(_str_7);
      std____throw_length_error(cast771);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c772 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t767, c772);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base773 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t767 + 0);
  int* r774 = std___Deque_base_int__std__allocator_int______M_allocate_node(base773);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base775 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t767 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base776 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base775->_M_impl) + 0);
  int** t777 = base776->_M_finish._M_node;
  int c778 = 1;
  int** ptr779 = &(t777)[c778];
  *ptr779 = r774;
      struct std___Deque_base_int__std__allocator_int__* base781 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t767 + 0);
      struct std__allocator_int_* base782 = (struct std__allocator_int_*)((char *)&(base781->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base783 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t767 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base784 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base783->_M_impl) + 0);
      int* t785 = base784->_M_finish._M_cur;
      int* t786 = __args766;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base782, t785, t786);
      struct std___Deque_base_int__std__allocator_int__* base787 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t767 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base788 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base787->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base789 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t767 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base790 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base789->_M_impl) + 0);
      int** t791 = base790->_M_finish._M_node;
      int c792 = 1;
      int** ptr793 = &(t791)[c792];
      std___Deque_iterator_int__int___int_____M_set_node(&base788->_M_finish, ptr793);
      struct std___Deque_base_int__std__allocator_int__* base794 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t767 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base795 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base794->_M_impl) + 0);
      int* t796 = base795->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base797 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t767 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base798 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base797->_M_impl) + 0);
      base798->_M_finish._M_cur = t796;
    cir_try_dispatch780: ;
    if (__cir_exc_active) {
    {
      int ca_tok799 = 0;
      void* ca_exn800 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base801 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t767 + 0);
        struct std___Deque_base_int__std__allocator_int__* base802 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t767 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base803 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base802->_M_impl) + 0);
        int** t804 = base803->_M_finish._M_node;
        int c805 = 1;
        int** ptr806 = &(t804)[c805];
        int* t807 = *ptr806;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base801, t807);
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
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v808, int* v809) {
bb810:
  struct std__deque_int__std__allocator_int__* this811;
  int* __x812;
  this811 = v808;
  __x812 = v809;
  struct std__deque_int__std__allocator_int__* t813 = this811;
    struct std___Deque_base_int__std__allocator_int__* base814 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t813 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base815 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base814->_M_impl) + 0);
    int* t816 = base815->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base817 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t813 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base818 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base817->_M_impl) + 0);
    int* t819 = base818->_M_finish._M_last;
    int c820 = -1;
    int* ptr821 = &(t819)[c820];
    _Bool c822 = ((t816 != ptr821)) ? 1 : 0;
    if (c822) {
      struct std___Deque_base_int__std__allocator_int__* base823 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t813 + 0);
      struct std__allocator_int_* base824 = (struct std__allocator_int_*)((char *)&(base823->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base825 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t813 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base826 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base825->_M_impl) + 0);
      int* t827 = base826->_M_finish._M_cur;
      int* t828 = __x812;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base824, t827, t828);
      struct std___Deque_base_int__std__allocator_int__* base829 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t813 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base830 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base829->_M_impl) + 0);
      int* t831 = base830->_M_finish._M_cur;
      int c832 = 1;
      int* ptr833 = &(t831)[c832];
      base830->_M_finish._M_cur = ptr833;
    } else {
      int* t834 = __x812;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t813, t834);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE4pushERKi
void std__stack_int__std__deque_int__std__allocator_int_______push(struct std__stack_int__std__deque_int__std__allocator_int___* v835, int* v836) {
bb837:
  struct std__stack_int__std__deque_int__std__allocator_int___* this838;
  int* __x839;
  this838 = v835;
  __x839 = v836;
  struct std__stack_int__std__deque_int__std__allocator_int___* t840 = this838;
  int* t841 = __x839;
  std__deque_int__std__allocator_int_____push_back(&t840->c, t841);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v842, struct std___Deque_iterator_int__int____int___* v843) {
bb844:
  struct std___Deque_iterator_int__int____int___* __x845;
  struct std___Deque_iterator_int__int____int___* __y846;
  _Bool __retval847;
  __x845 = v842;
  __y846 = v843;
  struct std___Deque_iterator_int__int____int___* t848 = __x845;
  int* t849 = t848->_M_cur;
  struct std___Deque_iterator_int__int____int___* t850 = __y846;
  int* t851 = t850->_M_cur;
  _Bool c852 = ((t849 == t851)) ? 1 : 0;
  __retval847 = c852;
  _Bool t853 = __retval847;
  return t853;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v854) {
bb855:
  struct std__deque_int__std__allocator_int__* this856;
  _Bool __retval857;
  this856 = v854;
  struct std__deque_int__std__allocator_int__* t858 = this856;
  struct std___Deque_base_int__std__allocator_int__* base859 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t858 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base860 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base859->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base861 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t858 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base862 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base861->_M_impl) + 0);
  _Bool r863 = std__operator__(&base860->_M_finish, &base862->_M_start);
  __retval857 = r863;
  _Bool t864 = __retval857;
  return t864;
}

// function: _ZNKSt5stackIiSt5dequeIiSaIiEEE5emptyEv
_Bool std__stack_int__std__deque_int__std__allocator_int_______empty___const(struct std__stack_int__std__deque_int__std__allocator_int___* v865) {
bb866:
  struct std__stack_int__std__deque_int__std__allocator_int___* this867;
  _Bool __retval868;
  this867 = v865;
  struct std__stack_int__std__deque_int__std__allocator_int___* t869 = this867;
  _Bool r870 = std__deque_int__std__allocator_int_____empty___const(&t869->c);
  __retval868 = r870;
  _Bool t871 = __retval868;
  return t871;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v872, int* v873) {
bb874:
  struct std__allocator_int_* __a875;
  int* __p876;
  __a875 = v872;
  __p876 = v873;
  int* t877 = __p876;
  void_std__destroy_at_int_(t877);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_pop_back_auxEv
void std__deque_int__std__allocator_int______M_pop_back_aux(struct std__deque_int__std__allocator_int__* v878) {
bb879:
  struct std__deque_int__std__allocator_int__* this880;
  this880 = v878;
  struct std__deque_int__std__allocator_int__* t881 = this880;
  struct std___Deque_base_int__std__allocator_int__* base882 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std___Deque_base_int__std__allocator_int__* base883 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base884 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base883->_M_impl) + 0);
  int* t885 = base884->_M_finish._M_first;
  std___Deque_base_int__std__allocator_int______M_deallocate_node(base882, t885);
  struct std___Deque_base_int__std__allocator_int__* base886 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base887 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base886->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base888 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base889 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base888->_M_impl) + 0);
  int** t890 = base889->_M_finish._M_node;
  int c891 = -1;
  int** ptr892 = &(t890)[c891];
  std___Deque_iterator_int__int___int_____M_set_node(&base887->_M_finish, ptr892);
  struct std___Deque_base_int__std__allocator_int__* base893 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base894 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base893->_M_impl) + 0);
  int* t895 = base894->_M_finish._M_last;
  int c896 = -1;
  int* ptr897 = &(t895)[c896];
  struct std___Deque_base_int__std__allocator_int__* base898 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base899 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base898->_M_impl) + 0);
  base899->_M_finish._M_cur = ptr897;
  struct std___Deque_base_int__std__allocator_int__* base900 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std__allocator_int_* r901 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base900);
  struct std___Deque_base_int__std__allocator_int__* base902 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base903 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base902->_M_impl) + 0);
  int* t904 = base903->_M_finish._M_cur;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(r901, t904);
  return;
}

// function: _ZNSt5dequeIiSaIiEE8pop_backEv
void std__deque_int__std__allocator_int_____pop_back(struct std__deque_int__std__allocator_int__* v905) {
bb906:
  struct std__deque_int__std__allocator_int__* this907;
  this907 = v905;
  struct std__deque_int__std__allocator_int__* t908 = this907;
    do {
          _Bool r909 = std__deque_int__std__allocator_int_____empty___const(t908);
          if (r909) {
            char* cast910 = (char*)&(_str_10);
            int c911 = 1666;
            char* cast912 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv);
            char* cast913 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast910, c911, cast912, cast913);
          }
      _Bool c914 = 0;
      if (!c914) break;
    } while (1);
    struct std___Deque_base_int__std__allocator_int__* base915 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t908 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base916 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base915->_M_impl) + 0);
    int* t917 = base916->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base918 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t908 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base919 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base918->_M_impl) + 0);
    int* t920 = base919->_M_finish._M_first;
    _Bool c921 = ((t917 != t920)) ? 1 : 0;
    if (c921) {
      struct std___Deque_base_int__std__allocator_int__* base922 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t908 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base923 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base922->_M_impl) + 0);
      int* t924 = base923->_M_finish._M_cur;
      int c925 = -1;
      int* ptr926 = &(t924)[c925];
      base923->_M_finish._M_cur = ptr926;
      struct std___Deque_base_int__std__allocator_int__* base927 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t908 + 0);
      struct std__allocator_int_* r928 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base927);
      struct std___Deque_base_int__std__allocator_int__* base929 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t908 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base930 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base929->_M_impl) + 0);
      int* t931 = base930->_M_finish._M_cur;
      void_std__allocator_traits_std__allocator_int_____destroy_int_(r928, t931);
    } else {
      std__deque_int__std__allocator_int______M_pop_back_aux(t908);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE3popEv
void std__stack_int__std__deque_int__std__allocator_int_______pop(struct std__stack_int__std__deque_int__std__allocator_int___* v932) {
bb933:
  struct std__stack_int__std__deque_int__std__allocator_int___* this934;
  this934 = v932;
  struct std__stack_int__std__deque_int__std__allocator_int___* t935 = this934;
    do {
          _Bool r936 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(t935);
          if (__cir_exc_active) {
            return;
          }
          if (r936) {
            char* cast937 = (char*)&(_str_8);
            int c938 = 333;
            char* cast939 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv);
            char* cast940 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast937, c938, cast939, cast940);
          }
      _Bool c941 = 0;
      if (!c941) break;
    } while (1);
  std__deque_int__std__allocator_int_____pop_back(&t935->c);
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEED2Ev
void std__stack_int__std__deque_int__std__allocator_int________stack(struct std__stack_int__std__deque_int__std__allocator_int___* v942) {
bb943:
  struct std__stack_int__std__deque_int__std__allocator_int___* this944;
  this944 = v942;
  struct std__stack_int__std__deque_int__std__allocator_int___* t945 = this944;
  {
    std__deque_int__std__allocator_int______deque(&t945->c);
  }
  return;
}

// function: main
int main() {
bb946:
  int __retval947;
  struct std__stack_int__std__deque_int__std__allocator_int___ myints948;
  int c949 = 0;
  __retval947 = c949;
  std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(&myints948);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    char* cast950 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r951 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast950);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r952 = std__stack_int__std__deque_int__std__allocator_int_______size___const(&myints948);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int cast953 = (int)r952;
    struct std__basic_ostream_char__std__char_traits_char__* r954 = std__ostream__operator__(r951, cast953);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r955 = std__ostream__operator___std__ostream_____(r954, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r956 = std__stack_int__std__deque_int__std__allocator_int_______size___const(&myints948);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c957 = 0;
    _Bool c958 = ((r956 == c957)) ? 1 : 0;
    if (c958) {
    } else {
      char* cast959 = (char*)&(_str_1);
      char* c960 = _str_2;
      unsigned int c961 = 18;
      char* cast962 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast959, c960, c961, cast962);
    }
      int i963;
      int c964 = 0;
      i963 = c964;
      while (1) {
        int t966 = i963;
        int c967 = 5;
        _Bool c968 = ((t966 < c967)) ? 1 : 0;
        if (!c968) break;
        std__stack_int__std__deque_int__std__allocator_int_______push(&myints948, &i963);
        if (__cir_exc_active) {
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step965: ;
        int t969 = i963;
        int u970 = t969 + 1;
        i963 = u970;
      }
    char* cast971 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r972 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast971);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r973 = std__stack_int__std__deque_int__std__allocator_int_______size___const(&myints948);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int cast974 = (int)r973;
    struct std__basic_ostream_char__std__char_traits_char__* r975 = std__ostream__operator__(r972, cast974);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r976 = std__ostream__operator___std__ostream_____(r975, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r977 = std__stack_int__std__deque_int__std__allocator_int_______size___const(&myints948);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c978 = 5;
    _Bool c979 = ((r977 != c978)) ? 1 : 0;
    if (c979) {
    } else {
      char* cast980 = (char*)&(_str_4);
      char* c981 = _str_2;
      unsigned int c982 = 21;
      char* cast983 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast980, c981, c982, cast983);
    }
    std__stack_int__std__deque_int__std__allocator_int_______pop(&myints948);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast984 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r985 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast984);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r986 = std__stack_int__std__deque_int__std__allocator_int_______size___const(&myints948);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int cast987 = (int)r986;
    struct std__basic_ostream_char__std__char_traits_char__* r988 = std__ostream__operator__(r985, cast987);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r989 = std__ostream__operator___std__ostream_____(r988, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r990 = std__stack_int__std__deque_int__std__allocator_int_______size___const(&myints948);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c991 = 4;
    _Bool c992 = ((r990 != c991)) ? 1 : 0;
    if (c992) {
    } else {
      char* cast993 = (char*)&(_str_6);
      char* c994 = _str_2;
      unsigned int c995 = 24;
      char* cast996 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast993, c994, c995, cast996);
    }
    int c997 = 0;
    __retval947 = c997;
    int t998 = __retval947;
    int ret_val999 = t998;
    {
      std__stack_int__std__deque_int__std__allocator_int________stack(&myints948);
    }
    return ret_val999;
  int t1000 = __retval947;
  return t1000;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v1001) {
bb1002:
  struct std__deque_int__std__allocator_int__* this1003;
  struct std___Deque_iterator_int__int____int___ agg_tmp01004;
  struct std___Deque_iterator_int__int____int___ agg_tmp11005;
  this1003 = v1001;
  struct std__deque_int__std__allocator_int__* t1006 = this1003;
    struct std___Deque_iterator_int__int____int___ r1007 = std__deque_int__std__allocator_int_____begin(t1006);
    agg_tmp01004 = r1007;
    struct std___Deque_iterator_int__int____int___ r1008 = std__deque_int__std__allocator_int_____end(t1006);
    agg_tmp11005 = r1008;
    struct std___Deque_base_int__std__allocator_int__* base1009 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1006 + 0);
    struct std__allocator_int_* r1010 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1009);
    struct std___Deque_iterator_int__int____int___ t1011 = agg_tmp01004;
    struct std___Deque_iterator_int__int____int___ t1012 = agg_tmp11005;
    std__deque_int__std__allocator_int______M_destroy_data(t1006, t1011, t1012, r1010);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1013 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1006 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1013);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1014 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1006 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1014);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1015:
  _Bool __retval1016;
    _Bool c1017 = 0;
    __retval1016 = c1017;
    _Bool t1018 = __retval1016;
    return t1018;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1019) {
bb1020:
  int* __location1021;
  __location1021 = v1019;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1022, int* v1023) {
bb1024:
  int* __first1025;
  int* __last1026;
  __first1025 = v1022;
  __last1026 = v1023;
      _Bool r1027 = std____is_constant_evaluated();
      if (r1027) {
          while (1) {
            int* t1029 = __first1025;
            int* t1030 = __last1026;
            _Bool c1031 = ((t1029 != t1030)) ? 1 : 0;
            if (!c1031) break;
            int* t1032 = __first1025;
            void_std__destroy_at_int_(t1032);
            if (__cir_exc_active) {
              return;
            }
          for_step1028: ;
            int* t1033 = __first1025;
            int c1034 = 1;
            int* ptr1035 = &(t1033)[c1034];
            __first1025 = ptr1035;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1036, int* v1037, struct std__allocator_int_* v1038) {
bb1039:
  int* __first1040;
  int* __last1041;
  struct std__allocator_int_* unnamed1042;
  __first1040 = v1036;
  __last1041 = v1037;
  unnamed1042 = v1038;
  int* t1043 = __first1040;
  int* t1044 = __last1041;
  void_std___Destroy_int__(t1043, t1044);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1045) {
bb1046:
  unsigned long __size1047;
  unsigned long __retval1048;
  __size1047 = v1045;
  unsigned long t1049 = __size1047;
  unsigned long c1050 = 512;
  _Bool c1051 = ((t1049 < c1050)) ? 1 : 0;
  unsigned long ternary1052;
  if (c1051) {
    unsigned long c1053 = 512;
    unsigned long t1054 = __size1047;
    unsigned long b1055 = c1053 / t1054;
    ternary1052 = (unsigned long)b1055;
  } else {
    unsigned long c1056 = 1;
    ternary1052 = (unsigned long)c1056;
  }
  __retval1048 = ternary1052;
  unsigned long t1057 = __retval1048;
  return t1057;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1058:
  unsigned long __retval1059;
  unsigned long c1060 = 4;
  unsigned long r1061 = std____deque_buf_size(c1060);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1059 = r1061;
  unsigned long t1062 = __retval1059;
  return t1062;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1063, struct std___Deque_iterator_int__int____int___ v1064, struct std___Deque_iterator_int__int____int___ v1065) {
bb1066:
  struct std__deque_int__std__allocator_int__* this1067;
  struct std___Deque_iterator_int__int____int___ __first1068;
  struct std___Deque_iterator_int__int____int___ __last1069;
  this1067 = v1063;
  __first1068 = v1064;
  __last1069 = v1065;
  struct std__deque_int__std__allocator_int__* t1070 = this1067;
    int** __node1071;
    int** t1072 = __first1068._M_node;
    int c1073 = 1;
    int** ptr1074 = &(t1072)[c1073];
    __node1071 = ptr1074;
    while (1) {
      int** t1076 = __node1071;
      int** t1077 = __last1069._M_node;
      _Bool c1078 = ((t1076 < t1077)) ? 1 : 0;
      if (!c1078) break;
      int** t1079 = __node1071;
      int* t1080 = *t1079;
      int** t1081 = __node1071;
      int* t1082 = *t1081;
      unsigned long r1083 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1084 = &(t1082)[r1083];
      struct std___Deque_base_int__std__allocator_int__* base1085 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1070 + 0);
      struct std__allocator_int_* r1086 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1085);
      void_std___Destroy_int___int_(t1080, ptr1084, r1086);
      if (__cir_exc_active) {
        return;
      }
    for_step1075: ;
      int** t1087 = __node1071;
      int c1088 = 1;
      int** ptr1089 = &(t1087)[c1088];
      __node1071 = ptr1089;
    }
    int** t1090 = __first1068._M_node;
    int** t1091 = __last1069._M_node;
    _Bool c1092 = ((t1090 != t1091)) ? 1 : 0;
    if (c1092) {
      int* t1093 = __first1068._M_cur;
      int* t1094 = __first1068._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1095 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1070 + 0);
      struct std__allocator_int_* r1096 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1095);
      void_std___Destroy_int___int_(t1093, t1094, r1096);
      if (__cir_exc_active) {
        return;
      }
      int* t1097 = __last1069._M_first;
      int* t1098 = __last1069._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1099 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1070 + 0);
      struct std__allocator_int_* r1100 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1099);
      void_std___Destroy_int___int_(t1097, t1098, r1100);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1101 = __first1068._M_cur;
      int* t1102 = __last1069._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1103 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1070 + 0);
      struct std__allocator_int_* r1104 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1103);
      void_std___Destroy_int___int_(t1101, t1102, r1104);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1105, struct std___Deque_iterator_int__int____int___* v1106) {
bb1107:
  struct std___Deque_iterator_int__int____int___* this1108;
  struct std___Deque_iterator_int__int____int___* __x1109;
  this1108 = v1105;
  __x1109 = v1106;
  struct std___Deque_iterator_int__int____int___* t1110 = this1108;
  struct std___Deque_iterator_int__int____int___* t1111 = __x1109;
  int* t1112 = t1111->_M_cur;
  t1110->_M_cur = t1112;
  struct std___Deque_iterator_int__int____int___* t1113 = __x1109;
  int* t1114 = t1113->_M_first;
  t1110->_M_first = t1114;
  struct std___Deque_iterator_int__int____int___* t1115 = __x1109;
  int* t1116 = t1115->_M_last;
  t1110->_M_last = t1116;
  struct std___Deque_iterator_int__int____int___* t1117 = __x1109;
  int** t1118 = t1117->_M_node;
  t1110->_M_node = t1118;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1119, struct std___Deque_iterator_int__int____int___ v1120, struct std___Deque_iterator_int__int____int___ v1121, struct std__allocator_int_* v1122) {
bb1123:
  struct std__deque_int__std__allocator_int__* this1124;
  struct std___Deque_iterator_int__int____int___ __first1125;
  struct std___Deque_iterator_int__int____int___ __last1126;
  struct std__allocator_int_* unnamed1127;
  this1124 = v1119;
  __first1125 = v1120;
  __last1126 = v1121;
  unnamed1127 = v1122;
  struct std__deque_int__std__allocator_int__* t1128 = this1124;
    _Bool c1129 = 0;
    if (c1129) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01130;
      struct std___Deque_iterator_int__int____int___ agg_tmp11131;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01130, &__first1125);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11131, &__last1126);
      struct std___Deque_iterator_int__int____int___ t1132 = agg_tmp01130;
      struct std___Deque_iterator_int__int____int___ t1133 = agg_tmp11131;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1128, t1132, t1133);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1134) {
bb1135:
  struct std__deque_int__std__allocator_int__* this1136;
  struct std___Deque_iterator_int__int____int___ __retval1137;
  this1136 = v1134;
  struct std__deque_int__std__allocator_int__* t1138 = this1136;
  struct std___Deque_base_int__std__allocator_int__* base1139 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1138 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1140 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1139->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1137, &base1140->_M_start);
  struct std___Deque_iterator_int__int____int___ t1141 = __retval1137;
  return t1141;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1142) {
bb1143:
  struct std__deque_int__std__allocator_int__* this1144;
  struct std___Deque_iterator_int__int____int___ __retval1145;
  this1144 = v1142;
  struct std__deque_int__std__allocator_int__* t1146 = this1144;
  struct std___Deque_base_int__std__allocator_int__* base1147 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1146 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1148 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1147->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1145, &base1148->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1149 = __retval1145;
  return t1149;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1150) {
bb1151:
  struct std___Deque_base_int__std__allocator_int__* this1152;
  struct std__allocator_int_* __retval1153;
  this1152 = v1150;
  struct std___Deque_base_int__std__allocator_int__* t1154 = this1152;
  struct std__allocator_int_* base1155 = (struct std__allocator_int_*)((char *)&(t1154->_M_impl) + 0);
  __retval1153 = base1155;
  struct std__allocator_int_* t1156 = __retval1153;
  return t1156;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1157, int* v1158, unsigned long v1159) {
bb1160:
  struct std____new_allocator_int_* this1161;
  int* __p1162;
  unsigned long __n1163;
  this1161 = v1157;
  __p1162 = v1158;
  __n1163 = v1159;
  struct std____new_allocator_int_* t1164 = this1161;
    unsigned long c1165 = 4;
    unsigned long c1166 = 16;
    _Bool c1167 = ((c1165 > c1166)) ? 1 : 0;
    if (c1167) {
      int* t1168 = __p1162;
      void* cast1169 = (void*)t1168;
      unsigned long t1170 = __n1163;
      unsigned long c1171 = 4;
      unsigned long b1172 = t1170 * c1171;
      unsigned long c1173 = 4;
      operator_delete_3(cast1169, b1172, c1173);
      return;
    }
  int* t1174 = __p1162;
  void* cast1175 = (void*)t1174;
  unsigned long t1176 = __n1163;
  unsigned long c1177 = 4;
  unsigned long b1178 = t1176 * c1177;
  operator_delete_2(cast1175, b1178);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1179, int* v1180, unsigned long v1181) {
bb1182:
  struct std__allocator_int_* this1183;
  int* __p1184;
  unsigned long __n1185;
  this1183 = v1179;
  __p1184 = v1180;
  __n1185 = v1181;
  struct std__allocator_int_* t1186 = this1183;
    _Bool r1187 = std____is_constant_evaluated();
    if (r1187) {
      int* t1188 = __p1184;
      void* cast1189 = (void*)t1188;
      operator_delete(cast1189);
      return;
    }
  struct std____new_allocator_int_* base1190 = (struct std____new_allocator_int_*)((char *)t1186 + 0);
  int* t1191 = __p1184;
  unsigned long t1192 = __n1185;
  std____new_allocator_int___deallocate(base1190, t1191, t1192);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1193, int* v1194, unsigned long v1195) {
bb1196:
  struct std__allocator_int_* __a1197;
  int* __p1198;
  unsigned long __n1199;
  __a1197 = v1193;
  __p1198 = v1194;
  __n1199 = v1195;
  struct std__allocator_int_* t1200 = __a1197;
  int* t1201 = __p1198;
  unsigned long t1202 = __n1199;
  std__allocator_int___deallocate(t1200, t1201, t1202);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1203, int* v1204) {
bb1205:
  struct std___Deque_base_int__std__allocator_int__* this1206;
  int* __p1207;
  this1206 = v1203;
  __p1207 = v1204;
  struct std___Deque_base_int__std__allocator_int__* t1208 = this1206;
  struct std__allocator_int_* base1209 = (struct std__allocator_int_*)((char *)&(t1208->_M_impl) + 0);
  int* t1210 = __p1207;
  unsigned long c1211 = 4;
  unsigned long r1212 = std____deque_buf_size(c1211);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1209, t1210, r1212);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1213, int** v1214, int** v1215) {
bb1216:
  struct std___Deque_base_int__std__allocator_int__* this1217;
  int** __nstart1218;
  int** __nfinish1219;
  this1217 = v1213;
  __nstart1218 = v1214;
  __nfinish1219 = v1215;
  struct std___Deque_base_int__std__allocator_int__* t1220 = this1217;
    int** __n1221;
    int** t1222 = __nstart1218;
    __n1221 = t1222;
    while (1) {
      int** t1224 = __n1221;
      int** t1225 = __nfinish1219;
      _Bool c1226 = ((t1224 < t1225)) ? 1 : 0;
      if (!c1226) break;
      int** t1227 = __n1221;
      int* t1228 = *t1227;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1220, t1228);
    for_step1223: ;
      int** t1229 = __n1221;
      int c1230 = 1;
      int** ptr1231 = &(t1229)[c1230];
      __n1221 = ptr1231;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1232) {
bb1233:
  struct std___Deque_base_int__std__allocator_int__* this1234;
  struct std__allocator_int_* __retval1235;
  this1234 = v1232;
  struct std___Deque_base_int__std__allocator_int__* t1236 = this1234;
  struct std__allocator_int_* base1237 = (struct std__allocator_int_*)((char *)&(t1236->_M_impl) + 0);
  __retval1235 = base1237;
  struct std__allocator_int_* t1238 = __retval1235;
  return t1238;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1239, struct std__allocator_int_* v1240) {
bb1241:
  struct std__allocator_int___* this1242;
  struct std__allocator_int_* unnamed1243;
  this1242 = v1239;
  unnamed1243 = v1240;
  struct std__allocator_int___* t1244 = this1242;
  struct std____new_allocator_int___* base1245 = (struct std____new_allocator_int___*)((char *)t1244 + 0);
  std____new_allocator_int______new_allocator(base1245);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1246) {
bb1247:
  struct std___Deque_base_int__std__allocator_int__* this1248;
  struct std__allocator_int___ __retval1249;
  this1248 = v1246;
  struct std___Deque_base_int__std__allocator_int__* t1250 = this1248;
  struct std__allocator_int_* r1251 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1250);
  std__allocator_int____allocator_int_(&__retval1249, r1251);
  struct std__allocator_int___ t1252 = __retval1249;
  return t1252;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1253, int** v1254, unsigned long v1255) {
bb1256:
  struct std____new_allocator_int___* this1257;
  int** __p1258;
  unsigned long __n1259;
  this1257 = v1253;
  __p1258 = v1254;
  __n1259 = v1255;
  struct std____new_allocator_int___* t1260 = this1257;
    unsigned long c1261 = 8;
    unsigned long c1262 = 16;
    _Bool c1263 = ((c1261 > c1262)) ? 1 : 0;
    if (c1263) {
      int** t1264 = __p1258;
      void* cast1265 = (void*)t1264;
      unsigned long t1266 = __n1259;
      unsigned long c1267 = 8;
      unsigned long b1268 = t1266 * c1267;
      unsigned long c1269 = 8;
      operator_delete_3(cast1265, b1268, c1269);
      return;
    }
  int** t1270 = __p1258;
  void* cast1271 = (void*)t1270;
  unsigned long t1272 = __n1259;
  unsigned long c1273 = 8;
  unsigned long b1274 = t1272 * c1273;
  operator_delete_2(cast1271, b1274);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1275, int** v1276, unsigned long v1277) {
bb1278:
  struct std__allocator_int___* this1279;
  int** __p1280;
  unsigned long __n1281;
  this1279 = v1275;
  __p1280 = v1276;
  __n1281 = v1277;
  struct std__allocator_int___* t1282 = this1279;
    _Bool r1283 = std____is_constant_evaluated();
    if (r1283) {
      int** t1284 = __p1280;
      void* cast1285 = (void*)t1284;
      operator_delete(cast1285);
      return;
    }
  struct std____new_allocator_int___* base1286 = (struct std____new_allocator_int___*)((char *)t1282 + 0);
  int** t1287 = __p1280;
  unsigned long t1288 = __n1281;
  std____new_allocator_int____deallocate(base1286, t1287, t1288);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1289, int** v1290, unsigned long v1291) {
bb1292:
  struct std__allocator_int___* __a1293;
  int** __p1294;
  unsigned long __n1295;
  __a1293 = v1289;
  __p1294 = v1290;
  __n1295 = v1291;
  struct std__allocator_int___* t1296 = __a1293;
  int** t1297 = __p1294;
  unsigned long t1298 = __n1295;
  std__allocator_int____deallocate(t1296, t1297, t1298);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1299, int** v1300, unsigned long v1301) {
bb1302:
  struct std___Deque_base_int__std__allocator_int__* this1303;
  int** __p1304;
  unsigned long __n1305;
  struct std__allocator_int___ __map_alloc1306;
  this1303 = v1299;
  __p1304 = v1300;
  __n1305 = v1301;
  struct std___Deque_base_int__std__allocator_int__* t1307 = this1303;
  struct std__allocator_int___ r1308 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1307);
  __map_alloc1306 = r1308;
  int** t1309 = __p1304;
  unsigned long t1310 = __n1305;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1306, t1309, t1310);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1311) {
bb1312:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1313;
  this1313 = v1311;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1314 = this1313;
  {
    struct std__allocator_int_* base1315 = (struct std__allocator_int_*)((char *)t1314 + 0);
    std__allocator_int____allocator(base1315);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1316) {
bb1317:
  struct std___Deque_base_int__std__allocator_int__* this1318;
  this1318 = v1316;
  struct std___Deque_base_int__std__allocator_int__* t1319 = this1318;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1320 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1319->_M_impl) + 0);
      int** t1321 = base1320->_M_map;
      _Bool cast1322 = (_Bool)t1321;
      if (cast1322) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1323 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1319->_M_impl) + 0);
        int** t1324 = base1323->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1325 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1319->_M_impl) + 0);
        int** t1326 = base1325->_M_finish._M_node;
        int c1327 = 1;
        int** ptr1328 = &(t1326)[c1327];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1319, t1324, ptr1328);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1329 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1319->_M_impl) + 0);
        int** t1330 = base1329->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1331 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1319->_M_impl) + 0);
        unsigned long t1332 = base1331->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1319, t1330, t1332);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1319->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1333) {
bb1334:
  struct std____new_allocator_int___* this1335;
  this1335 = v1333;
  struct std____new_allocator_int___* t1336 = this1335;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1337) {
bb1338:
  struct std__allocator_int_* this1339;
  this1339 = v1337;
  struct std__allocator_int_* t1340 = this1339;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1341) {
bb1342:
  struct std__deque_int__std__allocator_int__* this1343;
  this1343 = v1341;
  struct std__deque_int__std__allocator_int__* t1344 = this1343;
  struct std___Deque_base_int__std__allocator_int__* base1345 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1344 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base1345);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1346) {
bb1347:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1348;
  this1348 = v1346;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1349 = this1348;
  struct std__allocator_int_* base1350 = (struct std__allocator_int_*)((char *)t1349 + 0);
  std__allocator_int___allocator(base1350);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1351 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1349 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1351);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1352, unsigned long* v1353) {
bb1354:
  unsigned long* __a1355;
  unsigned long* __b1356;
  unsigned long* __retval1357;
  __a1355 = v1352;
  __b1356 = v1353;
    unsigned long* t1358 = __a1355;
    unsigned long t1359 = *t1358;
    unsigned long* t1360 = __b1356;
    unsigned long t1361 = *t1360;
    _Bool c1362 = ((t1359 < t1361)) ? 1 : 0;
    if (c1362) {
      unsigned long* t1363 = __b1356;
      __retval1357 = t1363;
      unsigned long* t1364 = __retval1357;
      return t1364;
    }
  unsigned long* t1365 = __a1355;
  __retval1357 = t1365;
  unsigned long* t1366 = __retval1357;
  return t1366;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1367) {
bb1368:
  struct std____new_allocator_int___* this1369;
  unsigned long __retval1370;
  this1369 = v1367;
  struct std____new_allocator_int___* t1371 = this1369;
  unsigned long c1372 = 9223372036854775807;
  unsigned long c1373 = 8;
  unsigned long b1374 = c1372 / c1373;
  __retval1370 = b1374;
  unsigned long t1375 = __retval1370;
  return t1375;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1376, unsigned long v1377, void* v1378) {
bb1379:
  struct std____new_allocator_int___* this1380;
  unsigned long __n1381;
  void* unnamed1382;
  int** __retval1383;
  this1380 = v1376;
  __n1381 = v1377;
  unnamed1382 = v1378;
  struct std____new_allocator_int___* t1384 = this1380;
    unsigned long t1385 = __n1381;
    unsigned long r1386 = std____new_allocator_int_____M_max_size___const(t1384);
    _Bool c1387 = ((t1385 > r1386)) ? 1 : 0;
    if (c1387) {
        unsigned long t1388 = __n1381;
        unsigned long c1389 = -1;
        unsigned long c1390 = 8;
        unsigned long b1391 = c1389 / c1390;
        _Bool c1392 = ((t1388 > b1391)) ? 1 : 0;
        if (c1392) {
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
    unsigned long c1393 = 8;
    unsigned long c1394 = 16;
    _Bool c1395 = ((c1393 > c1394)) ? 1 : 0;
    if (c1395) {
      unsigned long __al1396;
      unsigned long c1397 = 8;
      __al1396 = c1397;
      unsigned long t1398 = __n1381;
      unsigned long c1399 = 8;
      unsigned long b1400 = t1398 * c1399;
      unsigned long t1401 = __al1396;
      void* r1402 = operator_new_2(b1400, t1401);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1403 = (int**)r1402;
      __retval1383 = cast1403;
      int** t1404 = __retval1383;
      return t1404;
    }
  unsigned long t1405 = __n1381;
  unsigned long c1406 = 8;
  unsigned long b1407 = t1405 * c1406;
  void* r1408 = operator_new(b1407);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1409 = (int**)r1408;
  __retval1383 = cast1409;
  int** t1410 = __retval1383;
  return t1410;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1411, unsigned long v1412) {
bb1413:
  struct std__allocator_int___* this1414;
  unsigned long __n1415;
  int** __retval1416;
  this1414 = v1411;
  __n1415 = v1412;
  struct std__allocator_int___* t1417 = this1414;
    _Bool r1418 = std____is_constant_evaluated();
    if (r1418) {
        unsigned long t1419 = __n1415;
        unsigned long c1420 = 8;
        unsigned long ovr1421;
        _Bool ovf1422 = __builtin_mul_overflow(t1419, c1420, &ovr1421);
        __n1415 = ovr1421;
        if (ovf1422) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1423 = __n1415;
      void* r1424 = operator_new(t1423);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1425 = (int**)r1424;
      __retval1416 = cast1425;
      int** t1426 = __retval1416;
      return t1426;
    }
  struct std____new_allocator_int___* base1427 = (struct std____new_allocator_int___*)((char *)t1417 + 0);
  unsigned long t1428 = __n1415;
  void* c1429 = ((void*)0);
  int** r1430 = std____new_allocator_int____allocate(base1427, t1428, c1429);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1416 = r1430;
  int** t1431 = __retval1416;
  return t1431;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1432, unsigned long v1433) {
bb1434:
  struct std__allocator_int___* __a1435;
  unsigned long __n1436;
  int** __retval1437;
  __a1435 = v1432;
  __n1436 = v1433;
  struct std__allocator_int___* t1438 = __a1435;
  unsigned long t1439 = __n1436;
  int** r1440 = std__allocator_int____allocate(t1438, t1439);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1437 = r1440;
  int** t1441 = __retval1437;
  return t1441;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1442, unsigned long v1443) {
bb1444:
  struct std___Deque_base_int__std__allocator_int__* this1445;
  unsigned long __n1446;
  int** __retval1447;
  struct std__allocator_int___ __map_alloc1448;
  this1445 = v1442;
  __n1446 = v1443;
  struct std___Deque_base_int__std__allocator_int__* t1449 = this1445;
  struct std__allocator_int___ r1450 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1449);
  __map_alloc1448 = r1450;
  unsigned long t1451 = __n1446;
  int** r1452 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1448, t1451);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1447 = r1452;
  int** t1453 = __retval1447;
  return t1453;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1454) {
bb1455:
  struct std____new_allocator_int_* this1456;
  unsigned long __retval1457;
  this1456 = v1454;
  struct std____new_allocator_int_* t1458 = this1456;
  unsigned long c1459 = 9223372036854775807;
  unsigned long c1460 = 4;
  unsigned long b1461 = c1459 / c1460;
  __retval1457 = b1461;
  unsigned long t1462 = __retval1457;
  return t1462;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1463, unsigned long v1464, void* v1465) {
bb1466:
  struct std____new_allocator_int_* this1467;
  unsigned long __n1468;
  void* unnamed1469;
  int* __retval1470;
  this1467 = v1463;
  __n1468 = v1464;
  unnamed1469 = v1465;
  struct std____new_allocator_int_* t1471 = this1467;
    unsigned long t1472 = __n1468;
    unsigned long r1473 = std____new_allocator_int____M_max_size___const(t1471);
    _Bool c1474 = ((t1472 > r1473)) ? 1 : 0;
    if (c1474) {
        unsigned long t1475 = __n1468;
        unsigned long c1476 = -1;
        unsigned long c1477 = 4;
        unsigned long b1478 = c1476 / c1477;
        _Bool c1479 = ((t1475 > b1478)) ? 1 : 0;
        if (c1479) {
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
    unsigned long c1480 = 4;
    unsigned long c1481 = 16;
    _Bool c1482 = ((c1480 > c1481)) ? 1 : 0;
    if (c1482) {
      unsigned long __al1483;
      unsigned long c1484 = 4;
      __al1483 = c1484;
      unsigned long t1485 = __n1468;
      unsigned long c1486 = 4;
      unsigned long b1487 = t1485 * c1486;
      unsigned long t1488 = __al1483;
      void* r1489 = operator_new_2(b1487, t1488);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1490 = (int*)r1489;
      __retval1470 = cast1490;
      int* t1491 = __retval1470;
      return t1491;
    }
  unsigned long t1492 = __n1468;
  unsigned long c1493 = 4;
  unsigned long b1494 = t1492 * c1493;
  void* r1495 = operator_new(b1494);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1496 = (int*)r1495;
  __retval1470 = cast1496;
  int* t1497 = __retval1470;
  return t1497;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1498, unsigned long v1499) {
bb1500:
  struct std__allocator_int_* this1501;
  unsigned long __n1502;
  int* __retval1503;
  this1501 = v1498;
  __n1502 = v1499;
  struct std__allocator_int_* t1504 = this1501;
    _Bool r1505 = std____is_constant_evaluated();
    if (r1505) {
        unsigned long t1506 = __n1502;
        unsigned long c1507 = 4;
        unsigned long ovr1508;
        _Bool ovf1509 = __builtin_mul_overflow(t1506, c1507, &ovr1508);
        __n1502 = ovr1508;
        if (ovf1509) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1510 = __n1502;
      void* r1511 = operator_new(t1510);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1512 = (int*)r1511;
      __retval1503 = cast1512;
      int* t1513 = __retval1503;
      return t1513;
    }
  struct std____new_allocator_int_* base1514 = (struct std____new_allocator_int_*)((char *)t1504 + 0);
  unsigned long t1515 = __n1502;
  void* c1516 = ((void*)0);
  int* r1517 = std____new_allocator_int___allocate(base1514, t1515, c1516);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1503 = r1517;
  int* t1518 = __retval1503;
  return t1518;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1519, unsigned long v1520) {
bb1521:
  struct std__allocator_int_* __a1522;
  unsigned long __n1523;
  int* __retval1524;
  __a1522 = v1519;
  __n1523 = v1520;
  struct std__allocator_int_* t1525 = __a1522;
  unsigned long t1526 = __n1523;
  int* r1527 = std__allocator_int___allocate(t1525, t1526);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1524 = r1527;
  int* t1528 = __retval1524;
  return t1528;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1529) {
bb1530:
  struct std___Deque_base_int__std__allocator_int__* this1531;
  int* __retval1532;
  this1531 = v1529;
  struct std___Deque_base_int__std__allocator_int__* t1533 = this1531;
  struct std__allocator_int_* base1534 = (struct std__allocator_int_*)((char *)&(t1533->_M_impl) + 0);
  unsigned long c1535 = 4;
  unsigned long r1536 = std____deque_buf_size(c1535);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1537 = std__allocator_traits_std__allocator_int_____allocate(base1534, r1536);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1532 = r1537;
  int* t1538 = __retval1532;
  return t1538;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1539, int** v1540, int** v1541) {
bb1542:
  struct std___Deque_base_int__std__allocator_int__* this1543;
  int** __nstart1544;
  int** __nfinish1545;
  int** __cur1546;
  this1543 = v1539;
  __nstart1544 = v1540;
  __nfinish1545 = v1541;
  struct std___Deque_base_int__std__allocator_int__* t1547 = this1543;
        int** t1549 = __nstart1544;
        __cur1546 = t1549;
        while (1) {
          int** t1551 = __cur1546;
          int** t1552 = __nfinish1545;
          _Bool c1553 = ((t1551 < t1552)) ? 1 : 0;
          if (!c1553) break;
          int* r1554 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1547);
          if (__cir_exc_active) {
            goto cir_try_dispatch1548;
          }
          int** t1555 = __cur1546;
          *t1555 = r1554;
        for_step1550: ;
          int** t1556 = __cur1546;
          int c1557 = 1;
          int** ptr1558 = &(t1556)[c1557];
          __cur1546 = ptr1558;
        }
    cir_try_dispatch1548: ;
    if (__cir_exc_active) {
    {
      int ca_tok1559 = 0;
      void* ca_exn1560 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1561 = __nstart1544;
        int** t1562 = __cur1546;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1547, t1561, t1562);
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
bb1563:
  unsigned long __retval1564;
  unsigned long c1565 = 4;
  unsigned long r1566 = std____deque_buf_size(c1565);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1564 = r1566;
  unsigned long t1567 = __retval1564;
  return t1567;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1568, int** v1569) {
bb1570:
  struct std___Deque_iterator_int__int____int___* this1571;
  int** __new_node1572;
  this1571 = v1568;
  __new_node1572 = v1569;
  struct std___Deque_iterator_int__int____int___* t1573 = this1571;
  int** t1574 = __new_node1572;
  t1573->_M_node = t1574;
  int** t1575 = __new_node1572;
  int* t1576 = *t1575;
  t1573->_M_first = t1576;
  int* t1577 = t1573->_M_first;
  unsigned long r1578 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1579 = (long)r1578;
  int* ptr1580 = &(t1577)[cast1579];
  t1573->_M_last = ptr1580;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1581, unsigned long v1582) {
bb1583:
  struct std___Deque_base_int__std__allocator_int__* this1584;
  unsigned long __num_elements1585;
  unsigned long __num_nodes1586;
  unsigned long ref_tmp01587;
  unsigned long ref_tmp11588;
  int** __nstart1589;
  int** __nfinish1590;
  this1584 = v1581;
  __num_elements1585 = v1582;
  struct std___Deque_base_int__std__allocator_int__* t1591 = this1584;
  unsigned long t1592 = __num_elements1585;
  unsigned long c1593 = 4;
  unsigned long r1594 = std____deque_buf_size(c1593);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1595 = t1592 / r1594;
  unsigned long c1596 = 1;
  unsigned long b1597 = b1595 + c1596;
  __num_nodes1586 = b1597;
  unsigned long c1598 = 8;
  ref_tmp01587 = c1598;
  unsigned long t1599 = __num_nodes1586;
  unsigned long c1600 = 2;
  unsigned long b1601 = t1599 + c1600;
  ref_tmp11588 = b1601;
  unsigned long* r1602 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01587, &ref_tmp11588);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1603 = *r1602;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1604 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  base1604->_M_map_size = t1603;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1605 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  unsigned long t1606 = base1605->_M_map_size;
  int** r1607 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1591, t1606);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1608 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  base1608->_M_map = r1607;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1609 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  int** t1610 = base1609->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1611 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  unsigned long t1612 = base1611->_M_map_size;
  unsigned long t1613 = __num_nodes1586;
  unsigned long b1614 = t1612 - t1613;
  unsigned long c1615 = 2;
  unsigned long b1616 = b1614 / c1615;
  int** ptr1617 = &(t1610)[b1616];
  __nstart1589 = ptr1617;
  int** t1618 = __nstart1589;
  unsigned long t1619 = __num_nodes1586;
  int** ptr1620 = &(t1618)[t1619];
  __nfinish1590 = ptr1620;
      int** t1622 = __nstart1589;
      int** t1623 = __nfinish1590;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1591, t1622, t1623);
      if (__cir_exc_active) {
        goto cir_try_dispatch1621;
      }
    cir_try_dispatch1621: ;
    if (__cir_exc_active) {
    {
      int ca_tok1624 = 0;
      void* ca_exn1625 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1626 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
        int** t1627 = base1626->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1628 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
        unsigned long t1629 = base1628->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1591, t1627, t1629);
        int** c1630 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1631 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
        base1631->_M_map = c1630;
        unsigned long c1632 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1633 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
        base1633->_M_map_size = c1632;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1634 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  int** t1635 = __nstart1589;
  std___Deque_iterator_int__int___int_____M_set_node(&base1634->_M_start, t1635);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1636 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  int** t1637 = __nfinish1590;
  int c1638 = -1;
  int** ptr1639 = &(t1637)[c1638];
  std___Deque_iterator_int__int___int_____M_set_node(&base1636->_M_finish, ptr1639);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1640 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  int* t1641 = base1640->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1642 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  base1642->_M_start._M_cur = t1641;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1643 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  int* t1644 = base1643->_M_finish._M_first;
  unsigned long t1645 = __num_elements1585;
  unsigned long c1646 = 4;
  unsigned long r1647 = std____deque_buf_size(c1646);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1648 = t1645 % r1647;
  int* ptr1649 = &(t1644)[b1648];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1650 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1591->_M_impl) + 0);
  base1650->_M_finish._M_cur = ptr1649;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1651) {
bb1652:
  struct std___Deque_base_int__std__allocator_int__* this1653;
  this1653 = v1651;
  struct std___Deque_base_int__std__allocator_int__* t1654 = this1653;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1654->_M_impl);
    unsigned long c1655 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1654, c1655);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1654->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1656) {
bb1657:
  struct std____new_allocator_int_* this1658;
  this1658 = v1656;
  struct std____new_allocator_int_* t1659 = this1658;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1660) {
bb1661:
  struct std__allocator_int_* this1662;
  this1662 = v1660;
  struct std__allocator_int_* t1663 = this1662;
  struct std____new_allocator_int_* base1664 = (struct std____new_allocator_int_*)((char *)t1663 + 0);
  std____new_allocator_int_____new_allocator(base1664);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1665) {
bb1666:
  struct std___Deque_iterator_int__int____int___* this1667;
  this1667 = v1665;
  struct std___Deque_iterator_int__int____int___* t1668 = this1667;
  int* c1669 = ((void*)0);
  t1668->_M_cur = c1669;
  int* c1670 = ((void*)0);
  t1668->_M_first = c1670;
  int* c1671 = ((void*)0);
  t1668->_M_last = c1671;
  int** c1672 = ((void*)0);
  t1668->_M_node = c1672;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1673) {
bb1674:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1675;
  this1675 = v1673;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1676 = this1675;
  int** c1677 = ((void*)0);
  t1676->_M_map = c1677;
  unsigned long c1678 = 0;
  t1676->_M_map_size = c1678;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1676->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1676->_M_finish);
  return;
}

