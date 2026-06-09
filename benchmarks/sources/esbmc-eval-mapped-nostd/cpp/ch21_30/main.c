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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__queue_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[46] = "Please enter some integers (enter 0 to end):\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[19] = "myqueue contains: ";
char _str_2[2] = " ";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv[76] = "reference std::queue<int>::front() [_Tp = int, _Sequence = std::deque<int>]";
char _str_5[15] = "!this->empty()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE3popEv[69] = "void std::queue<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv[76] = "void std::deque<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
void std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* p0);
int* std__queue_int__std__deque_int__std__allocator_int_______front(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
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

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v104, int* v105) {
bb106:
  int* __location107;
  int* __args108;
  int* __retval109;
  void* __loc110;
  __location107 = v104;
  __args108 = v105;
  int* t111 = __location107;
  void* cast112 = (void*)t111;
  __loc110 = cast112;
    void* t113 = __loc110;
    int* cast114 = (int*)t113;
    int* t115 = __args108;
    int t116 = *t115;
    *cast114 = t116;
    __retval109 = cast114;
    int* t117 = __retval109;
    return t117;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v118, int* v119, int* v120) {
bb121:
  struct std__allocator_int_* __a122;
  int* __p123;
  int* __args124;
  __a122 = v118;
  __p123 = v119;
  __args124 = v120;
  int* t125 = __p123;
  int* t126 = __args124;
  int* r127 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t125, t126);
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v128, struct std___Deque_iterator_int__int____int___* v129) {
bb130:
  struct std___Deque_iterator_int__int____int___* __x131;
  struct std___Deque_iterator_int__int____int___* __y132;
  long __retval133;
  __x131 = v128;
  __y132 = v129;
  unsigned long r134 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast135 = (long)r134;
  struct std___Deque_iterator_int__int____int___* t136 = __x131;
  int** t137 = t136->_M_node;
  struct std___Deque_iterator_int__int____int___* t138 = __y132;
  int** t139 = t138->_M_node;
  long diff140 = t137 - t139;
  struct std___Deque_iterator_int__int____int___* t141 = __x131;
  int** t142 = t141->_M_node;
  _Bool cast143 = (_Bool)t142;
  long cast144 = (long)cast143;
  long b145 = diff140 - cast144;
  long b146 = cast135 * b145;
  struct std___Deque_iterator_int__int____int___* t147 = __x131;
  int* t148 = t147->_M_cur;
  struct std___Deque_iterator_int__int____int___* t149 = __x131;
  int* t150 = t149->_M_first;
  long diff151 = t148 - t150;
  long b152 = b146 + diff151;
  struct std___Deque_iterator_int__int____int___* t153 = __y132;
  int* t154 = t153->_M_last;
  struct std___Deque_iterator_int__int____int___* t155 = __y132;
  int* t156 = t155->_M_cur;
  long diff157 = t154 - t156;
  long b158 = b152 + diff157;
  __retval133 = b158;
  long t159 = __retval133;
  return t159;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v160) {
bb161:
  struct std__deque_int__std__allocator_int__* this162;
  unsigned long __retval163;
  unsigned long __sz164;
  this162 = v160;
  struct std__deque_int__std__allocator_int__* t165 = this162;
  struct std___Deque_base_int__std__allocator_int__* base166 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t165 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base167 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base166->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base168 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t165 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base169 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base168->_M_impl) + 0);
  long r170 = std__operator_(&base167->_M_finish, &base169->_M_start);
  unsigned long cast171 = (unsigned long)r170;
  __sz164 = cast171;
    unsigned long t172 = __sz164;
    unsigned long r173 = std__deque_int__std__allocator_int_____max_size___const(t165);
    _Bool c174 = ((t172 > r173)) ? 1 : 0;
    if (c174) {
      __builtin_unreachable();
    }
  unsigned long t175 = __sz164;
  __retval163 = t175;
  unsigned long t176 = __retval163;
  return t176;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v177, unsigned long* v178) {
bb179:
  unsigned long* __a180;
  unsigned long* __b181;
  unsigned long* __retval182;
  __a180 = v177;
  __b181 = v178;
    unsigned long* t183 = __b181;
    unsigned long t184 = *t183;
    unsigned long* t185 = __a180;
    unsigned long t186 = *t185;
    _Bool c187 = ((t184 < t186)) ? 1 : 0;
    if (c187) {
      unsigned long* t188 = __b181;
      __retval182 = t188;
      unsigned long* t189 = __retval182;
      return t189;
    }
  unsigned long* t190 = __a180;
  __retval182 = t190;
  unsigned long* t191 = __retval182;
  return t191;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v192) {
bb193:
  struct std__allocator_int_* __a194;
  unsigned long __retval195;
  unsigned long __diffmax196;
  unsigned long __allocmax197;
  __a194 = v192;
  unsigned long c198 = 9223372036854775807;
  __diffmax196 = c198;
  unsigned long c199 = 4611686018427387903;
  __allocmax197 = c199;
  unsigned long* r200 = unsigned_long_const__std__min_unsigned_long_(&__diffmax196, &__allocmax197);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t201 = *r200;
  __retval195 = t201;
  unsigned long t202 = __retval195;
  return t202;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v203) {
bb204:
  struct std__deque_int__std__allocator_int__* this205;
  unsigned long __retval206;
  this205 = v203;
  struct std__deque_int__std__allocator_int__* t207 = this205;
  struct std___Deque_base_int__std__allocator_int__* base208 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t207 + 0);
  struct std__allocator_int_* r209 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base208);
  unsigned long r210 = std__deque_int__std__allocator_int______S_max_size(r209);
  __retval206 = r210;
  unsigned long t211 = __retval206;
  return t211;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v212, int** v213) {
bb214:
  int*** unnamed215;
  int** __res216;
  int** __retval217;
  unnamed215 = v212;
  __res216 = v213;
  int** t218 = __res216;
  __retval217 = t218;
  int** t219 = __retval217;
  return t219;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v220, int** v221, struct std__random_access_iterator_tag v222) {
bb223:
  int** __first224;
  int** __last225;
  struct std__random_access_iterator_tag unnamed226;
  long __retval227;
  __first224 = v220;
  __last225 = v221;
  unnamed226 = v222;
  int** t228 = __last225;
  int** t229 = __first224;
  long diff230 = t228 - t229;
  __retval227 = diff230;
  long t231 = __retval227;
  return t231;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v232) {
bb233:
  int*** unnamed234;
  struct std__random_access_iterator_tag __retval235;
  unnamed234 = v232;
  struct std__random_access_iterator_tag t236 = __retval235;
  return t236;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v237, int** v238) {
bb239:
  int** __first240;
  int** __last241;
  long __retval242;
  struct std__random_access_iterator_tag agg_tmp0243;
  __first240 = v237;
  __last241 = v238;
  int** t244 = __first240;
  int** t245 = __last241;
  struct std__random_access_iterator_tag r246 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first240);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0243 = r246;
  struct std__random_access_iterator_tag t247 = agg_tmp0243;
  long r248 = std__iterator_traits_int_____difference_type_std____distance_int___(t244, t245, t247);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval242 = r248;
  long t249 = __retval242;
  return t249;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v250, int*** v251) {
bb252:
  int*** __out253;
  int*** __in254;
  __out253 = v250;
  __in254 = v251;
    int*** t255 = __in254;
    int** t256 = *t255;
    int* t257 = *t256;
    int*** t258 = __out253;
    int** t259 = *t258;
    *t259 = t257;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v260, int** v261, int** v262) {
bb263:
  int** __first264;
  int** __last265;
  int** __result266;
  int** __retval267;
  __first264 = v260;
  __last265 = v261;
  __result266 = v262;
      _Bool r268 = std____is_constant_evaluated();
      if (r268) {
      } else {
          long __n269;
          int** t270 = __first264;
          int** t271 = __last265;
          long r272 = std__iterator_traits_int_____difference_type_std__distance_int___(t270, t271);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n269 = r272;
            long t273 = __n269;
            long c274 = 1;
            _Bool c275 = ((t273 > c274)) ? 1 : 0;
            if (c275) {
              int** t276 = __result266;
              void* cast277 = (void*)t276;
              int** t278 = __first264;
              void* cast279 = (void*)t278;
              long t280 = __n269;
              unsigned long cast281 = (unsigned long)t280;
              unsigned long c282 = 8;
              unsigned long b283 = cast281 * c282;
              void* r284 = memmove(cast277, cast279, b283);
              long t285 = __n269;
              int** t286 = __result266;
              int** ptr287 = &(t286)[t285];
              __result266 = ptr287;
            } else {
                long t288 = __n269;
                long c289 = 1;
                _Bool c290 = ((t288 == c289)) ? 1 : 0;
                if (c290) {
                  void_std____assign_one_false__int____int___(&__result266, &__first264);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t291 = __result266;
                  int c292 = 1;
                  int** ptr293 = &(t291)[c292];
                  __result266 = ptr293;
                }
            }
          int** t294 = __result266;
          __retval267 = t294;
          int** t295 = __retval267;
          return t295;
      }
    while (1) {
      int** t297 = __first264;
      int** t298 = __last265;
      _Bool c299 = ((t297 != t298)) ? 1 : 0;
      if (!c299) break;
      void_std____assign_one_false__int____int___(&__result266, &__first264);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step296: ;
      int** t300 = __result266;
      int c301 = 1;
      int** ptr302 = &(t300)[c301];
      __result266 = ptr302;
      int** t303 = __first264;
      int c304 = 1;
      int** ptr305 = &(t303)[c304];
      __first264 = ptr305;
    }
  int** t306 = __result266;
  __retval267 = t306;
  int** t307 = __retval267;
  return t307;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v308, int** v309, int** v310) {
bb311:
  int** __first312;
  int** __last313;
  int** __result314;
  int** __retval315;
  __first312 = v308;
  __last313 = v309;
  __result314 = v310;
  int** t316 = __first312;
  int** t317 = __last313;
  int** t318 = __result314;
  int** r319 = int___std____copy_move_a2_false__int____int____int___(t316, t317, t318);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval315 = r319;
  int** t320 = __retval315;
  return t320;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v321) {
bb322:
  int** __it323;
  int** __retval324;
  __it323 = v321;
  int** t325 = __it323;
  __retval324 = t325;
  int** t326 = __retval324;
  return t326;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v327, int** v328, int** v329) {
bb330:
  int** __first331;
  int** __last332;
  int** __result333;
  int** __retval334;
  __first331 = v327;
  __last332 = v328;
  __result333 = v329;
  int** t335 = __first331;
  int** r336 = int___std____niter_base_int___(t335);
  int** t337 = __last332;
  int** r338 = int___std____niter_base_int___(t337);
  int** t339 = __result333;
  int** r340 = int___std____niter_base_int___(t339);
  int** r341 = int___std____copy_move_a1_false__int____int___(r336, r338, r340);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r342 = int___std____niter_wrap_int___(&__result333, r341);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval334 = r342;
  int** t343 = __retval334;
  return t343;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v344) {
bb345:
  int** __it346;
  int** __retval347;
  __it346 = v344;
  int** t348 = __it346;
  __retval347 = t348;
  int** t349 = __retval347;
  return t349;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v350, int** v351, int** v352) {
bb353:
  int** __first354;
  int** __last355;
  int** __result356;
  int** __retval357;
  __first354 = v350;
  __last355 = v351;
  __result356 = v352;
  int** t358 = __first354;
  int** r359 = int___std____miter_base_int___(t358);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t360 = __last355;
  int** r361 = int___std____miter_base_int___(t360);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t362 = __result356;
  int** r363 = int___std____copy_move_a_false__int____int___(r359, r361, t362);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval357 = r363;
  int** t364 = __retval357;
  return t364;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb365:
  _Bool __retval366;
    _Bool c367 = 0;
    __retval366 = c367;
    _Bool t368 = __retval366;
    return t368;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v369, long v370, struct std__random_access_iterator_tag v371) {
bb372:
  int*** __i373;
  long __n374;
  struct std__random_access_iterator_tag unnamed375;
  __i373 = v369;
  __n374 = v370;
  unnamed375 = v371;
    long t376 = __n374;
    _Bool isconst377 = 0;
    _Bool ternary378;
    if (isconst377) {
      long t379 = __n374;
      long c380 = 1;
      _Bool c381 = ((t379 == c380)) ? 1 : 0;
      ternary378 = (_Bool)c381;
    } else {
      _Bool c382 = 0;
      ternary378 = (_Bool)c382;
    }
    if (ternary378) {
      int*** t383 = __i373;
      int** t384 = *t383;
      int c385 = 1;
      int** ptr386 = &(t384)[c385];
      *t383 = ptr386;
    } else {
        long t387 = __n374;
        _Bool isconst388 = 0;
        _Bool ternary389;
        if (isconst388) {
          long t390 = __n374;
          long c391 = -1;
          _Bool c392 = ((t390 == c391)) ? 1 : 0;
          ternary389 = (_Bool)c392;
        } else {
          _Bool c393 = 0;
          ternary389 = (_Bool)c393;
        }
        if (ternary389) {
          int*** t394 = __i373;
          int** t395 = *t394;
          int c396 = -1;
          int** ptr397 = &(t395)[c396];
          *t394 = ptr397;
        } else {
          long t398 = __n374;
          int*** t399 = __i373;
          int** t400 = *t399;
          int** ptr401 = &(t400)[t398];
          *t399 = ptr401;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v402, long v403) {
bb404:
  int*** __i405;
  long __n406;
  long __d407;
  struct std__random_access_iterator_tag agg_tmp0408;
  __i405 = v402;
  __n406 = v403;
  long t409 = __n406;
  __d407 = t409;
  int*** t410 = __i405;
  long t411 = __d407;
  int*** t412 = __i405;
  struct std__random_access_iterator_tag r413 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t412);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0408 = r413;
  struct std__random_access_iterator_tag t414 = agg_tmp0408;
  void_std____advance_int____long_(t410, t411, t414);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v415, int** v416, int** v417) {
bb418:
  int** __first419;
  int** __last420;
  int** __result421;
  int** __retval422;
  __first419 = v415;
  __last420 = v416;
  __result421 = v417;
      _Bool r423 = std__is_constant_evaluated();
      if (r423) {
      } else {
          long __n424;
          int** t425 = __first419;
          int** t426 = __last420;
          long r427 = std__iterator_traits_int_____difference_type_std__distance_int___(t425, t426);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n424 = r427;
          long t428 = __n424;
          long u429 = -t428;
          void_std__advance_int____long_(&__result421, u429);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t430 = __n424;
            long c431 = 1;
            _Bool c432 = ((t430 > c431)) ? 1 : 0;
            if (c432) {
              int** t433 = __result421;
              void* cast434 = (void*)t433;
              int** t435 = __first419;
              void* cast436 = (void*)t435;
              long t437 = __n424;
              unsigned long cast438 = (unsigned long)t437;
              unsigned long c439 = 8;
              unsigned long b440 = cast438 * c439;
              void* r441 = memmove(cast434, cast436, b440);
            } else {
                long t442 = __n424;
                long c443 = 1;
                _Bool c444 = ((t442 == c443)) ? 1 : 0;
                if (c444) {
                  void_std____assign_one_false__int____int___(&__result421, &__first419);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t445 = __result421;
          __retval422 = t445;
          int** t446 = __retval422;
          return t446;
      }
    while (1) {
      int** t447 = __first419;
      int** t448 = __last420;
      _Bool c449 = ((t447 != t448)) ? 1 : 0;
      if (!c449) break;
        int** t450 = __last420;
        int c451 = -1;
        int** ptr452 = &(t450)[c451];
        __last420 = ptr452;
        int** t453 = __result421;
        int c454 = -1;
        int** ptr455 = &(t453)[c454];
        __result421 = ptr455;
        void_std____assign_one_false__int____int___(&__result421, &__last420);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t456 = __result421;
  __retval422 = t456;
  int** t457 = __retval422;
  return t457;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v458, int** v459, int** v460) {
bb461:
  int** __first462;
  int** __last463;
  int** __result464;
  int** __retval465;
  __first462 = v458;
  __last463 = v459;
  __result464 = v460;
  int** t466 = __first462;
  int** t467 = __last463;
  int** t468 = __result464;
  int** r469 = int___std____copy_move_backward_a2_false__int____int___(t466, t467, t468);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval465 = r469;
  int** t470 = __retval465;
  return t470;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v471, int** v472, int** v473) {
bb474:
  int** __first475;
  int** __last476;
  int** __result477;
  int** __retval478;
  __first475 = v471;
  __last476 = v472;
  __result477 = v473;
  int** t479 = __first475;
  int** r480 = int___std____niter_base_int___(t479);
  int** t481 = __last476;
  int** r482 = int___std____niter_base_int___(t481);
  int** t483 = __result477;
  int** r484 = int___std____niter_base_int___(t483);
  int** r485 = int___std____copy_move_backward_a1_false__int____int___(r480, r482, r484);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r486 = int___std____niter_wrap_int___(&__result477, r485);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval478 = r486;
  int** t487 = __retval478;
  return t487;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v488, int** v489, int** v490) {
bb491:
  int** __first492;
  int** __last493;
  int** __result494;
  int** __retval495;
  __first492 = v488;
  __last493 = v489;
  __result494 = v490;
  int** t496 = __first492;
  int** r497 = int___std____miter_base_int___(t496);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t498 = __last493;
  int** r499 = int___std____miter_base_int___(t498);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t500 = __result494;
  int** r501 = int___std____copy_move_backward_a_false__int____int___(r497, r499, t500);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval495 = r501;
  int** t502 = __retval495;
  return t502;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v503, unsigned long v504, _Bool v505) {
bb506:
  struct std__deque_int__std__allocator_int__* this507;
  unsigned long __nodes_to_add508;
  _Bool __add_at_front509;
  unsigned long __old_num_nodes510;
  unsigned long __new_num_nodes511;
  int** __new_nstart512;
  this507 = v503;
  __nodes_to_add508 = v504;
  __add_at_front509 = v505;
  struct std__deque_int__std__allocator_int__* t513 = this507;
  struct std___Deque_base_int__std__allocator_int__* base514 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base515 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base514->_M_impl) + 0);
  int** t516 = base515->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base517 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base518 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base517->_M_impl) + 0);
  int** t519 = base518->_M_start._M_node;
  long diff520 = t516 - t519;
  long c521 = 1;
  long b522 = diff520 + c521;
  unsigned long cast523 = (unsigned long)b522;
  __old_num_nodes510 = cast523;
  unsigned long t524 = __old_num_nodes510;
  unsigned long t525 = __nodes_to_add508;
  unsigned long b526 = t524 + t525;
  __new_num_nodes511 = b526;
    struct std___Deque_base_int__std__allocator_int__* base527 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base528 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base527->_M_impl) + 0);
    unsigned long t529 = base528->_M_map_size;
    unsigned long c530 = 2;
    unsigned long t531 = __new_num_nodes511;
    unsigned long b532 = c530 * t531;
    _Bool c533 = ((t529 > b532)) ? 1 : 0;
    if (c533) {
      struct std___Deque_base_int__std__allocator_int__* base534 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base535 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base534->_M_impl) + 0);
      int** t536 = base535->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base537 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base538 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base537->_M_impl) + 0);
      unsigned long t539 = base538->_M_map_size;
      unsigned long t540 = __new_num_nodes511;
      unsigned long b541 = t539 - t540;
      unsigned long c542 = 2;
      unsigned long b543 = b541 / c542;
      int** ptr544 = &(t536)[b543];
      _Bool t545 = __add_at_front509;
      unsigned long ternary546;
      if (t545) {
        unsigned long t547 = __nodes_to_add508;
        ternary546 = (unsigned long)t547;
      } else {
        unsigned long c548 = 0;
        ternary546 = (unsigned long)c548;
      }
      int** ptr549 = &(ptr544)[ternary546];
      __new_nstart512 = ptr549;
        int** t550 = __new_nstart512;
        struct std___Deque_base_int__std__allocator_int__* base551 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base552 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base551->_M_impl) + 0);
        int** t553 = base552->_M_start._M_node;
        _Bool c554 = ((t550 < t553)) ? 1 : 0;
        if (c554) {
          struct std___Deque_base_int__std__allocator_int__* base555 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base556 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base555->_M_impl) + 0);
          int** t557 = base556->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base558 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base559 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base558->_M_impl) + 0);
          int** t560 = base559->_M_finish._M_node;
          int c561 = 1;
          int** ptr562 = &(t560)[c561];
          int** t563 = __new_nstart512;
          int** r564 = int___std__copy_int____int___(t557, ptr562, t563);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base565 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base566 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base565->_M_impl) + 0);
          int** t567 = base566->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base568 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base569 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base568->_M_impl) + 0);
          int** t570 = base569->_M_finish._M_node;
          int c571 = 1;
          int** ptr572 = &(t570)[c571];
          int** t573 = __new_nstart512;
          unsigned long t574 = __old_num_nodes510;
          int** ptr575 = &(t573)[t574];
          int** r576 = int___std__copy_backward_int____int___(t567, ptr572, ptr575);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size577;
      unsigned long __bufsz578;
      int** __new_map579;
      struct std___Deque_base_int__std__allocator_int__* base580 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base581 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base580->_M_impl) + 0);
      unsigned long t582 = base581->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base583 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base584 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base583->_M_impl) + 0);
      unsigned long* r585 = unsigned_long_const__std__max_unsigned_long_(&base584->_M_map_size, &__nodes_to_add508);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t586 = *r585;
      unsigned long b587 = t582 + t586;
      unsigned long c588 = 2;
      unsigned long b589 = b587 + c588;
      __new_map_size577 = b589;
      unsigned long c590 = 128;
      __bufsz578 = c590;
        unsigned long t591 = __new_map_size577;
        unsigned long r592 = std__deque_int__std__allocator_int_____max_size___const(t513);
        unsigned long t593 = __bufsz578;
        unsigned long b594 = r592 + t593;
        unsigned long c595 = 1;
        unsigned long b596 = b594 - c595;
        unsigned long t597 = __bufsz578;
        unsigned long b598 = b596 / t597;
        unsigned long c599 = 2;
        unsigned long b600 = b598 * c599;
        _Bool c601 = ((t591 > b600)) ? 1 : 0;
        if (c601) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base602 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      unsigned long t603 = __new_map_size577;
      int** r604 = std___Deque_base_int__std__allocator_int______M_allocate_map(base602, t603);
      if (__cir_exc_active) {
        return;
      }
      __new_map579 = r604;
      int** t605 = __new_map579;
      unsigned long t606 = __new_map_size577;
      unsigned long t607 = __new_num_nodes511;
      unsigned long b608 = t606 - t607;
      unsigned long c609 = 2;
      unsigned long b610 = b608 / c609;
      int** ptr611 = &(t605)[b610];
      _Bool t612 = __add_at_front509;
      unsigned long ternary613;
      if (t612) {
        unsigned long t614 = __nodes_to_add508;
        ternary613 = (unsigned long)t614;
      } else {
        unsigned long c615 = 0;
        ternary613 = (unsigned long)c615;
      }
      int** ptr616 = &(ptr611)[ternary613];
      __new_nstart512 = ptr616;
      struct std___Deque_base_int__std__allocator_int__* base617 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base618 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base617->_M_impl) + 0);
      int** t619 = base618->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base620 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base621 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base620->_M_impl) + 0);
      int** t622 = base621->_M_finish._M_node;
      int c623 = 1;
      int** ptr624 = &(t622)[c623];
      int** t625 = __new_nstart512;
      int** r626 = int___std__copy_int____int___(t619, ptr624, t625);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base627 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int__* base628 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base629 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base628->_M_impl) + 0);
      int** t630 = base629->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base631 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base632 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base631->_M_impl) + 0);
      unsigned long t633 = base632->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base627, t630, t633);
      int** t634 = __new_map579;
      struct std___Deque_base_int__std__allocator_int__* base635 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base636 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base635->_M_impl) + 0);
      base636->_M_map = t634;
      unsigned long t637 = __new_map_size577;
      struct std___Deque_base_int__std__allocator_int__* base638 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base639 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base638->_M_impl) + 0);
      base639->_M_map_size = t637;
    }
  struct std___Deque_base_int__std__allocator_int__* base640 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base641 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base640->_M_impl) + 0);
  int** t642 = __new_nstart512;
  std___Deque_iterator_int__int___int_____M_set_node(&base641->_M_start, t642);
  struct std___Deque_base_int__std__allocator_int__* base643 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t513 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base644 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base643->_M_impl) + 0);
  int** t645 = __new_nstart512;
  unsigned long t646 = __old_num_nodes510;
  int** ptr647 = &(t645)[t646];
  int c648 = -1;
  int** ptr649 = &(ptr647)[c648];
  std___Deque_iterator_int__int___int_____M_set_node(&base644->_M_finish, ptr649);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v650, unsigned long v651) {
bb652:
  struct std__deque_int__std__allocator_int__* this653;
  unsigned long __nodes_to_add654;
  this653 = v650;
  __nodes_to_add654 = v651;
  struct std__deque_int__std__allocator_int__* t655 = this653;
    unsigned long t656 = __nodes_to_add654;
    unsigned long c657 = 1;
    unsigned long b658 = t656 + c657;
    struct std___Deque_base_int__std__allocator_int__* base659 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t655 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base660 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base659->_M_impl) + 0);
    unsigned long t661 = base660->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base662 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t655 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base663 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base662->_M_impl) + 0);
    int** t664 = base663->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base665 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t655 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base666 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base665->_M_impl) + 0);
    int** t667 = base666->_M_map;
    long diff668 = t664 - t667;
    unsigned long cast669 = (unsigned long)diff668;
    unsigned long b670 = t661 - cast669;
    _Bool c671 = ((b658 > b670)) ? 1 : 0;
    if (c671) {
      unsigned long t672 = __nodes_to_add654;
      _Bool c673 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t655, t672, c673);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v674, int* v675) {
bb676:
  struct std__deque_int__std__allocator_int__* this677;
  int* __args678;
  this677 = v674;
  __args678 = v675;
  struct std__deque_int__std__allocator_int__* t679 = this677;
    unsigned long r680 = std__deque_int__std__allocator_int_____size___const(t679);
    unsigned long r681 = std__deque_int__std__allocator_int_____max_size___const(t679);
    _Bool c682 = ((r680 == r681)) ? 1 : 0;
    if (c682) {
      char* cast683 = (char*)&(_str_3);
      std____throw_length_error(cast683);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c684 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t679, c684);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base685 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t679 + 0);
  int* r686 = std___Deque_base_int__std__allocator_int______M_allocate_node(base685);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base687 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t679 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base688 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base687->_M_impl) + 0);
  int** t689 = base688->_M_finish._M_node;
  int c690 = 1;
  int** ptr691 = &(t689)[c690];
  *ptr691 = r686;
      struct std___Deque_base_int__std__allocator_int__* base693 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t679 + 0);
      struct std__allocator_int_* base694 = (struct std__allocator_int_*)((char *)&(base693->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base695 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t679 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base696 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base695->_M_impl) + 0);
      int* t697 = base696->_M_finish._M_cur;
      int* t698 = __args678;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base694, t697, t698);
      struct std___Deque_base_int__std__allocator_int__* base699 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t679 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base700 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base699->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base701 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t679 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base702 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base701->_M_impl) + 0);
      int** t703 = base702->_M_finish._M_node;
      int c704 = 1;
      int** ptr705 = &(t703)[c704];
      std___Deque_iterator_int__int___int_____M_set_node(&base700->_M_finish, ptr705);
      struct std___Deque_base_int__std__allocator_int__* base706 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t679 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base707 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base706->_M_impl) + 0);
      int* t708 = base707->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base709 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t679 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base710 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base709->_M_impl) + 0);
      base710->_M_finish._M_cur = t708;
    cir_try_dispatch692: ;
    if (__cir_exc_active) {
    {
      int ca_tok711 = 0;
      void* ca_exn712 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base713 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t679 + 0);
        struct std___Deque_base_int__std__allocator_int__* base714 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t679 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base715 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base714->_M_impl) + 0);
        int** t716 = base715->_M_finish._M_node;
        int c717 = 1;
        int** ptr718 = &(t716)[c717];
        int* t719 = *ptr718;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base713, t719);
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
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v720, int* v721) {
bb722:
  struct std__deque_int__std__allocator_int__* this723;
  int* __x724;
  this723 = v720;
  __x724 = v721;
  struct std__deque_int__std__allocator_int__* t725 = this723;
    struct std___Deque_base_int__std__allocator_int__* base726 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t725 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base727 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base726->_M_impl) + 0);
    int* t728 = base727->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base729 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t725 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base730 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base729->_M_impl) + 0);
    int* t731 = base730->_M_finish._M_last;
    int c732 = -1;
    int* ptr733 = &(t731)[c732];
    _Bool c734 = ((t728 != ptr733)) ? 1 : 0;
    if (c734) {
      struct std___Deque_base_int__std__allocator_int__* base735 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t725 + 0);
      struct std__allocator_int_* base736 = (struct std__allocator_int_*)((char *)&(base735->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base737 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t725 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base738 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base737->_M_impl) + 0);
      int* t739 = base738->_M_finish._M_cur;
      int* t740 = __x724;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base736, t739, t740);
      struct std___Deque_base_int__std__allocator_int__* base741 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t725 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base742 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base741->_M_impl) + 0);
      int* t743 = base742->_M_finish._M_cur;
      int c744 = 1;
      int* ptr745 = &(t743)[c744];
      base742->_M_finish._M_cur = ptr745;
    } else {
      int* t746 = __x724;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t725, t746);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE4pushERKi
void std__queue_int__std__deque_int__std__allocator_int_______push(struct std__queue_int__std__deque_int__std__allocator_int___* v747, int* v748) {
bb749:
  struct std__queue_int__std__deque_int__std__allocator_int___* this750;
  int* __x751;
  this750 = v747;
  __x751 = v748;
  struct std__queue_int__std__deque_int__std__allocator_int___* t752 = this750;
  int* t753 = __x751;
  std__deque_int__std__allocator_int_____push_back(&t752->c, t753);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v754, struct std___Deque_iterator_int__int____int___* v755) {
bb756:
  struct std___Deque_iterator_int__int____int___* __x757;
  struct std___Deque_iterator_int__int____int___* __y758;
  _Bool __retval759;
  __x757 = v754;
  __y758 = v755;
  struct std___Deque_iterator_int__int____int___* t760 = __x757;
  int* t761 = t760->_M_cur;
  struct std___Deque_iterator_int__int____int___* t762 = __y758;
  int* t763 = t762->_M_cur;
  _Bool c764 = ((t761 == t763)) ? 1 : 0;
  __retval759 = c764;
  _Bool t765 = __retval759;
  return t765;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v766) {
bb767:
  struct std__deque_int__std__allocator_int__* this768;
  _Bool __retval769;
  this768 = v766;
  struct std__deque_int__std__allocator_int__* t770 = this768;
  struct std___Deque_base_int__std__allocator_int__* base771 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t770 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base772 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base771->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base773 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t770 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base774 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base773->_M_impl) + 0);
  _Bool r775 = std__operator__(&base772->_M_finish, &base774->_M_start);
  __retval769 = r775;
  _Bool t776 = __retval769;
  return t776;
}

// function: _ZNKSt5queueIiSt5dequeIiSaIiEEE5emptyEv
_Bool std__queue_int__std__deque_int__std__allocator_int_______empty___const(struct std__queue_int__std__deque_int__std__allocator_int___* v777) {
bb778:
  struct std__queue_int__std__deque_int__std__allocator_int___* this779;
  _Bool __retval780;
  this779 = v777;
  struct std__queue_int__std__deque_int__std__allocator_int___* t781 = this779;
  _Bool r782 = std__deque_int__std__allocator_int_____empty___const(&t781->c);
  __retval780 = r782;
  _Bool t783 = __retval780;
  return t783;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v784) {
bb785:
  struct std___Deque_iterator_int__int____int___* this786;
  int* __retval787;
  this786 = v784;
  struct std___Deque_iterator_int__int____int___* t788 = this786;
  int* t789 = t788->_M_cur;
  __retval787 = t789;
  int* t790 = __retval787;
  return t790;
}

// function: _ZNSt5dequeIiSaIiEE5frontEv
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* v791) {
bb792:
  struct std__deque_int__std__allocator_int__* this793;
  int* __retval794;
  struct std___Deque_iterator_int__int____int___ ref_tmp0795;
  this793 = v791;
  struct std__deque_int__std__allocator_int__* t796 = this793;
    do {
          _Bool r797 = std__deque_int__std__allocator_int_____empty___const(t796);
          if (r797) {
            char* cast798 = (char*)&(_str_6);
            int c799 = 1513;
            char* cast800 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv);
            char* cast801 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast798, c799, cast800, cast801);
          }
      _Bool c802 = 0;
      if (!c802) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r803 = std__deque_int__std__allocator_int_____begin(t796);
  ref_tmp0795 = r803;
  int* r804 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0795);
  __retval794 = r804;
  int* t805 = __retval794;
  return t805;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv
int* std__queue_int__std__deque_int__std__allocator_int_______front(struct std__queue_int__std__deque_int__std__allocator_int___* v806) {
bb807:
  struct std__queue_int__std__deque_int__std__allocator_int___* this808;
  int* __retval809;
  this808 = v806;
  struct std__queue_int__std__deque_int__std__allocator_int___* t810 = this808;
    do {
          _Bool r811 = std__queue_int__std__deque_int__std__allocator_int_______empty___const(t810);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r811) {
            char* cast812 = (char*)&(_str_4);
            int c813 = 262;
            char* cast814 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv);
            char* cast815 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast812, c813, cast814, cast815);
          }
      _Bool c816 = 0;
      if (!c816) break;
    } while (1);
  int* r817 = std__deque_int__std__allocator_int_____front(&t810->c);
  __retval809 = r817;
  int* t818 = __retval809;
  return t818;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v819, int* v820) {
bb821:
  struct std__allocator_int_* __a822;
  int* __p823;
  __a822 = v819;
  __p823 = v820;
  int* t824 = __p823;
  void_std__destroy_at_int_(t824);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_pop_front_auxEv
void std__deque_int__std__allocator_int______M_pop_front_aux(struct std__deque_int__std__allocator_int__* v825) {
bb826:
  struct std__deque_int__std__allocator_int__* this827;
  this827 = v825;
  struct std__deque_int__std__allocator_int__* t828 = this827;
  struct std___Deque_base_int__std__allocator_int__* base829 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t828 + 0);
  struct std__allocator_int_* r830 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base829);
  struct std___Deque_base_int__std__allocator_int__* base831 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t828 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base832 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base831->_M_impl) + 0);
  int* t833 = base832->_M_start._M_cur;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(r830, t833);
  struct std___Deque_base_int__std__allocator_int__* base834 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t828 + 0);
  struct std___Deque_base_int__std__allocator_int__* base835 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t828 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base836 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base835->_M_impl) + 0);
  int* t837 = base836->_M_start._M_first;
  std___Deque_base_int__std__allocator_int______M_deallocate_node(base834, t837);
  struct std___Deque_base_int__std__allocator_int__* base838 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t828 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base839 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base838->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base840 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t828 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base841 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base840->_M_impl) + 0);
  int** t842 = base841->_M_start._M_node;
  int c843 = 1;
  int** ptr844 = &(t842)[c843];
  std___Deque_iterator_int__int___int_____M_set_node(&base839->_M_start, ptr844);
  struct std___Deque_base_int__std__allocator_int__* base845 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t828 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base846 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base845->_M_impl) + 0);
  int* t847 = base846->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int__* base848 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t828 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base849 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base848->_M_impl) + 0);
  base849->_M_start._M_cur = t847;
  return;
}

// function: _ZNSt5dequeIiSaIiEE9pop_frontEv
void std__deque_int__std__allocator_int_____pop_front(struct std__deque_int__std__allocator_int__* v850) {
bb851:
  struct std__deque_int__std__allocator_int__* this852;
  this852 = v850;
  struct std__deque_int__std__allocator_int__* t853 = this852;
    do {
          _Bool r854 = std__deque_int__std__allocator_int_____empty___const(t853);
          if (r854) {
            char* cast855 = (char*)&(_str_6);
            int c856 = 1643;
            char* cast857 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv);
            char* cast858 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast855, c856, cast857, cast858);
          }
      _Bool c859 = 0;
      if (!c859) break;
    } while (1);
    struct std___Deque_base_int__std__allocator_int__* base860 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t853 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base861 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base860->_M_impl) + 0);
    int* t862 = base861->_M_start._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base863 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t853 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base864 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base863->_M_impl) + 0);
    int* t865 = base864->_M_start._M_last;
    int c866 = -1;
    int* ptr867 = &(t865)[c866];
    _Bool c868 = ((t862 != ptr867)) ? 1 : 0;
    if (c868) {
      struct std___Deque_base_int__std__allocator_int__* base869 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t853 + 0);
      struct std__allocator_int_* r870 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base869);
      struct std___Deque_base_int__std__allocator_int__* base871 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t853 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base872 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base871->_M_impl) + 0);
      int* t873 = base872->_M_start._M_cur;
      void_std__allocator_traits_std__allocator_int_____destroy_int_(r870, t873);
      struct std___Deque_base_int__std__allocator_int__* base874 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t853 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base875 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base874->_M_impl) + 0);
      int* t876 = base875->_M_start._M_cur;
      int c877 = 1;
      int* ptr878 = &(t876)[c877];
      base875->_M_start._M_cur = ptr878;
    } else {
      std__deque_int__std__allocator_int______M_pop_front_aux(t853);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE3popEv
void std__queue_int__std__deque_int__std__allocator_int_______pop(struct std__queue_int__std__deque_int__std__allocator_int___* v879) {
bb880:
  struct std__queue_int__std__deque_int__std__allocator_int___* this881;
  this881 = v879;
  struct std__queue_int__std__deque_int__std__allocator_int___* t882 = this881;
    do {
          _Bool r883 = std__queue_int__std__deque_int__std__allocator_int_______empty___const(t882);
          if (__cir_exc_active) {
            return;
          }
          if (r883) {
            char* cast884 = (char*)&(_str_4);
            int c885 = 359;
            char* cast886 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE3popEv);
            char* cast887 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast884, c885, cast886, cast887);
          }
      _Bool c888 = 0;
      if (!c888) break;
    } while (1);
  std__deque_int__std__allocator_int_____pop_front(&t882->c);
  return;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEED2Ev
void std__queue_int__std__deque_int__std__allocator_int________queue(struct std__queue_int__std__deque_int__std__allocator_int___* v889) {
bb890:
  struct std__queue_int__std__deque_int__std__allocator_int___* this891;
  this891 = v889;
  struct std__queue_int__std__deque_int__std__allocator_int___* t892 = this891;
  {
    std__deque_int__std__allocator_int______deque(&t892->c);
  }
  return;
}

// function: main
int main() {
bb893:
  int __retval894;
  struct std__queue_int__std__deque_int__std__allocator_int___ myqueue895;
  int myint896;
  int c897 = 0;
  __retval894 = c897;
  std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(&myqueue895);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    char* cast898 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r899 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast898);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue895);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      do {
          struct std__basic_istream_char__std__char_traits_char__* r900 = std__istream__operator__(&_ZSt3cin, &myint896);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue895);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          std__queue_int__std__deque_int__std__allocator_int_______push(&myqueue895, &myint896);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue895);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        int t901 = myint896;
        _Bool cast902 = (_Bool)t901;
        if (!cast902) break;
      } while (1);
    char* cast903 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r904 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast903);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue895);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      while (1) {
        _Bool r905 = std__queue_int__std__deque_int__std__allocator_int_______empty___const(&myqueue895);
        if (__cir_exc_active) {
          {
            std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue895);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        _Bool u906 = !r905;
        if (!u906) break;
          char* cast907 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* r908 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast907);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue895);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r909 = std__queue_int__std__deque_int__std__allocator_int_______front(&myqueue895);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue895);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t910 = *r909;
          struct std__basic_ostream_char__std__char_traits_char__* r911 = std__ostream__operator__(r908, t910);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue895);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          std__queue_int__std__deque_int__std__allocator_int_______pop(&myqueue895);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue895);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    int c912 = 0;
    __retval894 = c912;
    int t913 = __retval894;
    int ret_val914 = t913;
    {
      std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue895);
    }
    return ret_val914;
  int t915 = __retval894;
  return t915;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v916) {
bb917:
  struct std__deque_int__std__allocator_int__* this918;
  struct std___Deque_iterator_int__int____int___ agg_tmp0919;
  struct std___Deque_iterator_int__int____int___ agg_tmp1920;
  this918 = v916;
  struct std__deque_int__std__allocator_int__* t921 = this918;
    struct std___Deque_iterator_int__int____int___ r922 = std__deque_int__std__allocator_int_____begin(t921);
    agg_tmp0919 = r922;
    struct std___Deque_iterator_int__int____int___ r923 = std__deque_int__std__allocator_int_____end(t921);
    agg_tmp1920 = r923;
    struct std___Deque_base_int__std__allocator_int__* base924 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t921 + 0);
    struct std__allocator_int_* r925 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base924);
    struct std___Deque_iterator_int__int____int___ t926 = agg_tmp0919;
    struct std___Deque_iterator_int__int____int___ t927 = agg_tmp1920;
    std__deque_int__std__allocator_int______M_destroy_data(t921, t926, t927, r925);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base928 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t921 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base928);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base929 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t921 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base929);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb930:
  _Bool __retval931;
    _Bool c932 = 0;
    __retval931 = c932;
    _Bool t933 = __retval931;
    return t933;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v934) {
bb935:
  int* __location936;
  __location936 = v934;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v937, int* v938) {
bb939:
  int* __first940;
  int* __last941;
  __first940 = v937;
  __last941 = v938;
      _Bool r942 = std____is_constant_evaluated();
      if (r942) {
          while (1) {
            int* t944 = __first940;
            int* t945 = __last941;
            _Bool c946 = ((t944 != t945)) ? 1 : 0;
            if (!c946) break;
            int* t947 = __first940;
            void_std__destroy_at_int_(t947);
            if (__cir_exc_active) {
              return;
            }
          for_step943: ;
            int* t948 = __first940;
            int c949 = 1;
            int* ptr950 = &(t948)[c949];
            __first940 = ptr950;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v951, int* v952, struct std__allocator_int_* v953) {
bb954:
  int* __first955;
  int* __last956;
  struct std__allocator_int_* unnamed957;
  __first955 = v951;
  __last956 = v952;
  unnamed957 = v953;
  int* t958 = __first955;
  int* t959 = __last956;
  void_std___Destroy_int__(t958, t959);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v960) {
bb961:
  unsigned long __size962;
  unsigned long __retval963;
  __size962 = v960;
  unsigned long t964 = __size962;
  unsigned long c965 = 512;
  _Bool c966 = ((t964 < c965)) ? 1 : 0;
  unsigned long ternary967;
  if (c966) {
    unsigned long c968 = 512;
    unsigned long t969 = __size962;
    unsigned long b970 = c968 / t969;
    ternary967 = (unsigned long)b970;
  } else {
    unsigned long c971 = 1;
    ternary967 = (unsigned long)c971;
  }
  __retval963 = ternary967;
  unsigned long t972 = __retval963;
  return t972;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb973:
  unsigned long __retval974;
  unsigned long c975 = 4;
  unsigned long r976 = std____deque_buf_size(c975);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval974 = r976;
  unsigned long t977 = __retval974;
  return t977;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v978, struct std___Deque_iterator_int__int____int___ v979, struct std___Deque_iterator_int__int____int___ v980) {
bb981:
  struct std__deque_int__std__allocator_int__* this982;
  struct std___Deque_iterator_int__int____int___ __first983;
  struct std___Deque_iterator_int__int____int___ __last984;
  this982 = v978;
  __first983 = v979;
  __last984 = v980;
  struct std__deque_int__std__allocator_int__* t985 = this982;
    int** __node986;
    int** t987 = __first983._M_node;
    int c988 = 1;
    int** ptr989 = &(t987)[c988];
    __node986 = ptr989;
    while (1) {
      int** t991 = __node986;
      int** t992 = __last984._M_node;
      _Bool c993 = ((t991 < t992)) ? 1 : 0;
      if (!c993) break;
      int** t994 = __node986;
      int* t995 = *t994;
      int** t996 = __node986;
      int* t997 = *t996;
      unsigned long r998 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr999 = &(t997)[r998];
      struct std___Deque_base_int__std__allocator_int__* base1000 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t985 + 0);
      struct std__allocator_int_* r1001 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1000);
      void_std___Destroy_int___int_(t995, ptr999, r1001);
      if (__cir_exc_active) {
        return;
      }
    for_step990: ;
      int** t1002 = __node986;
      int c1003 = 1;
      int** ptr1004 = &(t1002)[c1003];
      __node986 = ptr1004;
    }
    int** t1005 = __first983._M_node;
    int** t1006 = __last984._M_node;
    _Bool c1007 = ((t1005 != t1006)) ? 1 : 0;
    if (c1007) {
      int* t1008 = __first983._M_cur;
      int* t1009 = __first983._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1010 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t985 + 0);
      struct std__allocator_int_* r1011 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1010);
      void_std___Destroy_int___int_(t1008, t1009, r1011);
      if (__cir_exc_active) {
        return;
      }
      int* t1012 = __last984._M_first;
      int* t1013 = __last984._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1014 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t985 + 0);
      struct std__allocator_int_* r1015 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1014);
      void_std___Destroy_int___int_(t1012, t1013, r1015);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1016 = __first983._M_cur;
      int* t1017 = __last984._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1018 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t985 + 0);
      struct std__allocator_int_* r1019 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1018);
      void_std___Destroy_int___int_(t1016, t1017, r1019);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1020, struct std___Deque_iterator_int__int____int___* v1021) {
bb1022:
  struct std___Deque_iterator_int__int____int___* this1023;
  struct std___Deque_iterator_int__int____int___* __x1024;
  this1023 = v1020;
  __x1024 = v1021;
  struct std___Deque_iterator_int__int____int___* t1025 = this1023;
  struct std___Deque_iterator_int__int____int___* t1026 = __x1024;
  int* t1027 = t1026->_M_cur;
  t1025->_M_cur = t1027;
  struct std___Deque_iterator_int__int____int___* t1028 = __x1024;
  int* t1029 = t1028->_M_first;
  t1025->_M_first = t1029;
  struct std___Deque_iterator_int__int____int___* t1030 = __x1024;
  int* t1031 = t1030->_M_last;
  t1025->_M_last = t1031;
  struct std___Deque_iterator_int__int____int___* t1032 = __x1024;
  int** t1033 = t1032->_M_node;
  t1025->_M_node = t1033;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1034, struct std___Deque_iterator_int__int____int___ v1035, struct std___Deque_iterator_int__int____int___ v1036, struct std__allocator_int_* v1037) {
bb1038:
  struct std__deque_int__std__allocator_int__* this1039;
  struct std___Deque_iterator_int__int____int___ __first1040;
  struct std___Deque_iterator_int__int____int___ __last1041;
  struct std__allocator_int_* unnamed1042;
  this1039 = v1034;
  __first1040 = v1035;
  __last1041 = v1036;
  unnamed1042 = v1037;
  struct std__deque_int__std__allocator_int__* t1043 = this1039;
    _Bool c1044 = 0;
    if (c1044) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01045;
      struct std___Deque_iterator_int__int____int___ agg_tmp11046;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01045, &__first1040);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11046, &__last1041);
      struct std___Deque_iterator_int__int____int___ t1047 = agg_tmp01045;
      struct std___Deque_iterator_int__int____int___ t1048 = agg_tmp11046;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1043, t1047, t1048);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1049) {
bb1050:
  struct std__deque_int__std__allocator_int__* this1051;
  struct std___Deque_iterator_int__int____int___ __retval1052;
  this1051 = v1049;
  struct std__deque_int__std__allocator_int__* t1053 = this1051;
  struct std___Deque_base_int__std__allocator_int__* base1054 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1053 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1055 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1054->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1052, &base1055->_M_start);
  struct std___Deque_iterator_int__int____int___ t1056 = __retval1052;
  return t1056;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1057) {
bb1058:
  struct std__deque_int__std__allocator_int__* this1059;
  struct std___Deque_iterator_int__int____int___ __retval1060;
  this1059 = v1057;
  struct std__deque_int__std__allocator_int__* t1061 = this1059;
  struct std___Deque_base_int__std__allocator_int__* base1062 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1061 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1063 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1062->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1060, &base1063->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1064 = __retval1060;
  return t1064;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1065) {
bb1066:
  struct std___Deque_base_int__std__allocator_int__* this1067;
  struct std__allocator_int_* __retval1068;
  this1067 = v1065;
  struct std___Deque_base_int__std__allocator_int__* t1069 = this1067;
  struct std__allocator_int_* base1070 = (struct std__allocator_int_*)((char *)&(t1069->_M_impl) + 0);
  __retval1068 = base1070;
  struct std__allocator_int_* t1071 = __retval1068;
  return t1071;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1072, int* v1073, unsigned long v1074) {
bb1075:
  struct std____new_allocator_int_* this1076;
  int* __p1077;
  unsigned long __n1078;
  this1076 = v1072;
  __p1077 = v1073;
  __n1078 = v1074;
  struct std____new_allocator_int_* t1079 = this1076;
    unsigned long c1080 = 4;
    unsigned long c1081 = 16;
    _Bool c1082 = ((c1080 > c1081)) ? 1 : 0;
    if (c1082) {
      int* t1083 = __p1077;
      void* cast1084 = (void*)t1083;
      unsigned long t1085 = __n1078;
      unsigned long c1086 = 4;
      unsigned long b1087 = t1085 * c1086;
      unsigned long c1088 = 4;
      operator_delete_3(cast1084, b1087, c1088);
      return;
    }
  int* t1089 = __p1077;
  void* cast1090 = (void*)t1089;
  unsigned long t1091 = __n1078;
  unsigned long c1092 = 4;
  unsigned long b1093 = t1091 * c1092;
  operator_delete_2(cast1090, b1093);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1094, int* v1095, unsigned long v1096) {
bb1097:
  struct std__allocator_int_* this1098;
  int* __p1099;
  unsigned long __n1100;
  this1098 = v1094;
  __p1099 = v1095;
  __n1100 = v1096;
  struct std__allocator_int_* t1101 = this1098;
    _Bool r1102 = std____is_constant_evaluated();
    if (r1102) {
      int* t1103 = __p1099;
      void* cast1104 = (void*)t1103;
      operator_delete(cast1104);
      return;
    }
  struct std____new_allocator_int_* base1105 = (struct std____new_allocator_int_*)((char *)t1101 + 0);
  int* t1106 = __p1099;
  unsigned long t1107 = __n1100;
  std____new_allocator_int___deallocate(base1105, t1106, t1107);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1108, int* v1109, unsigned long v1110) {
bb1111:
  struct std__allocator_int_* __a1112;
  int* __p1113;
  unsigned long __n1114;
  __a1112 = v1108;
  __p1113 = v1109;
  __n1114 = v1110;
  struct std__allocator_int_* t1115 = __a1112;
  int* t1116 = __p1113;
  unsigned long t1117 = __n1114;
  std__allocator_int___deallocate(t1115, t1116, t1117);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1118, int* v1119) {
bb1120:
  struct std___Deque_base_int__std__allocator_int__* this1121;
  int* __p1122;
  this1121 = v1118;
  __p1122 = v1119;
  struct std___Deque_base_int__std__allocator_int__* t1123 = this1121;
  struct std__allocator_int_* base1124 = (struct std__allocator_int_*)((char *)&(t1123->_M_impl) + 0);
  int* t1125 = __p1122;
  unsigned long c1126 = 4;
  unsigned long r1127 = std____deque_buf_size(c1126);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1124, t1125, r1127);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1128, int** v1129, int** v1130) {
bb1131:
  struct std___Deque_base_int__std__allocator_int__* this1132;
  int** __nstart1133;
  int** __nfinish1134;
  this1132 = v1128;
  __nstart1133 = v1129;
  __nfinish1134 = v1130;
  struct std___Deque_base_int__std__allocator_int__* t1135 = this1132;
    int** __n1136;
    int** t1137 = __nstart1133;
    __n1136 = t1137;
    while (1) {
      int** t1139 = __n1136;
      int** t1140 = __nfinish1134;
      _Bool c1141 = ((t1139 < t1140)) ? 1 : 0;
      if (!c1141) break;
      int** t1142 = __n1136;
      int* t1143 = *t1142;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1135, t1143);
    for_step1138: ;
      int** t1144 = __n1136;
      int c1145 = 1;
      int** ptr1146 = &(t1144)[c1145];
      __n1136 = ptr1146;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1147) {
bb1148:
  struct std___Deque_base_int__std__allocator_int__* this1149;
  struct std__allocator_int_* __retval1150;
  this1149 = v1147;
  struct std___Deque_base_int__std__allocator_int__* t1151 = this1149;
  struct std__allocator_int_* base1152 = (struct std__allocator_int_*)((char *)&(t1151->_M_impl) + 0);
  __retval1150 = base1152;
  struct std__allocator_int_* t1153 = __retval1150;
  return t1153;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1154, struct std__allocator_int_* v1155) {
bb1156:
  struct std__allocator_int___* this1157;
  struct std__allocator_int_* unnamed1158;
  this1157 = v1154;
  unnamed1158 = v1155;
  struct std__allocator_int___* t1159 = this1157;
  struct std____new_allocator_int___* base1160 = (struct std____new_allocator_int___*)((char *)t1159 + 0);
  std____new_allocator_int______new_allocator(base1160);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1161) {
bb1162:
  struct std___Deque_base_int__std__allocator_int__* this1163;
  struct std__allocator_int___ __retval1164;
  this1163 = v1161;
  struct std___Deque_base_int__std__allocator_int__* t1165 = this1163;
  struct std__allocator_int_* r1166 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1165);
  std__allocator_int____allocator_int_(&__retval1164, r1166);
  struct std__allocator_int___ t1167 = __retval1164;
  return t1167;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1168, int** v1169, unsigned long v1170) {
bb1171:
  struct std____new_allocator_int___* this1172;
  int** __p1173;
  unsigned long __n1174;
  this1172 = v1168;
  __p1173 = v1169;
  __n1174 = v1170;
  struct std____new_allocator_int___* t1175 = this1172;
    unsigned long c1176 = 8;
    unsigned long c1177 = 16;
    _Bool c1178 = ((c1176 > c1177)) ? 1 : 0;
    if (c1178) {
      int** t1179 = __p1173;
      void* cast1180 = (void*)t1179;
      unsigned long t1181 = __n1174;
      unsigned long c1182 = 8;
      unsigned long b1183 = t1181 * c1182;
      unsigned long c1184 = 8;
      operator_delete_3(cast1180, b1183, c1184);
      return;
    }
  int** t1185 = __p1173;
  void* cast1186 = (void*)t1185;
  unsigned long t1187 = __n1174;
  unsigned long c1188 = 8;
  unsigned long b1189 = t1187 * c1188;
  operator_delete_2(cast1186, b1189);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1190, int** v1191, unsigned long v1192) {
bb1193:
  struct std__allocator_int___* this1194;
  int** __p1195;
  unsigned long __n1196;
  this1194 = v1190;
  __p1195 = v1191;
  __n1196 = v1192;
  struct std__allocator_int___* t1197 = this1194;
    _Bool r1198 = std____is_constant_evaluated();
    if (r1198) {
      int** t1199 = __p1195;
      void* cast1200 = (void*)t1199;
      operator_delete(cast1200);
      return;
    }
  struct std____new_allocator_int___* base1201 = (struct std____new_allocator_int___*)((char *)t1197 + 0);
  int** t1202 = __p1195;
  unsigned long t1203 = __n1196;
  std____new_allocator_int____deallocate(base1201, t1202, t1203);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1204, int** v1205, unsigned long v1206) {
bb1207:
  struct std__allocator_int___* __a1208;
  int** __p1209;
  unsigned long __n1210;
  __a1208 = v1204;
  __p1209 = v1205;
  __n1210 = v1206;
  struct std__allocator_int___* t1211 = __a1208;
  int** t1212 = __p1209;
  unsigned long t1213 = __n1210;
  std__allocator_int____deallocate(t1211, t1212, t1213);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1214, int** v1215, unsigned long v1216) {
bb1217:
  struct std___Deque_base_int__std__allocator_int__* this1218;
  int** __p1219;
  unsigned long __n1220;
  struct std__allocator_int___ __map_alloc1221;
  this1218 = v1214;
  __p1219 = v1215;
  __n1220 = v1216;
  struct std___Deque_base_int__std__allocator_int__* t1222 = this1218;
  struct std__allocator_int___ r1223 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1222);
  __map_alloc1221 = r1223;
  int** t1224 = __p1219;
  unsigned long t1225 = __n1220;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1221, t1224, t1225);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1226) {
bb1227:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1228;
  this1228 = v1226;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1229 = this1228;
  {
    struct std__allocator_int_* base1230 = (struct std__allocator_int_*)((char *)t1229 + 0);
    std__allocator_int____allocator(base1230);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1231) {
bb1232:
  struct std___Deque_base_int__std__allocator_int__* this1233;
  this1233 = v1231;
  struct std___Deque_base_int__std__allocator_int__* t1234 = this1233;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1235 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1234->_M_impl) + 0);
      int** t1236 = base1235->_M_map;
      _Bool cast1237 = (_Bool)t1236;
      if (cast1237) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1238 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1234->_M_impl) + 0);
        int** t1239 = base1238->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1240 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1234->_M_impl) + 0);
        int** t1241 = base1240->_M_finish._M_node;
        int c1242 = 1;
        int** ptr1243 = &(t1241)[c1242];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1234, t1239, ptr1243);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1244 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1234->_M_impl) + 0);
        int** t1245 = base1244->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1246 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1234->_M_impl) + 0);
        unsigned long t1247 = base1246->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1234, t1245, t1247);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1234->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1248) {
bb1249:
  struct std____new_allocator_int___* this1250;
  this1250 = v1248;
  struct std____new_allocator_int___* t1251 = this1250;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1252) {
bb1253:
  struct std__allocator_int_* this1254;
  this1254 = v1252;
  struct std__allocator_int_* t1255 = this1254;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1256) {
bb1257:
  struct std__deque_int__std__allocator_int__* this1258;
  this1258 = v1256;
  struct std__deque_int__std__allocator_int__* t1259 = this1258;
  struct std___Deque_base_int__std__allocator_int__* base1260 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1259 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base1260);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1261) {
bb1262:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1263;
  this1263 = v1261;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1264 = this1263;
  struct std__allocator_int_* base1265 = (struct std__allocator_int_*)((char *)t1264 + 0);
  std__allocator_int___allocator(base1265);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1266 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1264 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1266);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1267, unsigned long* v1268) {
bb1269:
  unsigned long* __a1270;
  unsigned long* __b1271;
  unsigned long* __retval1272;
  __a1270 = v1267;
  __b1271 = v1268;
    unsigned long* t1273 = __a1270;
    unsigned long t1274 = *t1273;
    unsigned long* t1275 = __b1271;
    unsigned long t1276 = *t1275;
    _Bool c1277 = ((t1274 < t1276)) ? 1 : 0;
    if (c1277) {
      unsigned long* t1278 = __b1271;
      __retval1272 = t1278;
      unsigned long* t1279 = __retval1272;
      return t1279;
    }
  unsigned long* t1280 = __a1270;
  __retval1272 = t1280;
  unsigned long* t1281 = __retval1272;
  return t1281;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1282) {
bb1283:
  struct std____new_allocator_int___* this1284;
  unsigned long __retval1285;
  this1284 = v1282;
  struct std____new_allocator_int___* t1286 = this1284;
  unsigned long c1287 = 9223372036854775807;
  unsigned long c1288 = 8;
  unsigned long b1289 = c1287 / c1288;
  __retval1285 = b1289;
  unsigned long t1290 = __retval1285;
  return t1290;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1291, unsigned long v1292, void* v1293) {
bb1294:
  struct std____new_allocator_int___* this1295;
  unsigned long __n1296;
  void* unnamed1297;
  int** __retval1298;
  this1295 = v1291;
  __n1296 = v1292;
  unnamed1297 = v1293;
  struct std____new_allocator_int___* t1299 = this1295;
    unsigned long t1300 = __n1296;
    unsigned long r1301 = std____new_allocator_int_____M_max_size___const(t1299);
    _Bool c1302 = ((t1300 > r1301)) ? 1 : 0;
    if (c1302) {
        unsigned long t1303 = __n1296;
        unsigned long c1304 = -1;
        unsigned long c1305 = 8;
        unsigned long b1306 = c1304 / c1305;
        _Bool c1307 = ((t1303 > b1306)) ? 1 : 0;
        if (c1307) {
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
    unsigned long c1308 = 8;
    unsigned long c1309 = 16;
    _Bool c1310 = ((c1308 > c1309)) ? 1 : 0;
    if (c1310) {
      unsigned long __al1311;
      unsigned long c1312 = 8;
      __al1311 = c1312;
      unsigned long t1313 = __n1296;
      unsigned long c1314 = 8;
      unsigned long b1315 = t1313 * c1314;
      unsigned long t1316 = __al1311;
      void* r1317 = operator_new_2(b1315, t1316);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1318 = (int**)r1317;
      __retval1298 = cast1318;
      int** t1319 = __retval1298;
      return t1319;
    }
  unsigned long t1320 = __n1296;
  unsigned long c1321 = 8;
  unsigned long b1322 = t1320 * c1321;
  void* r1323 = operator_new(b1322);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1324 = (int**)r1323;
  __retval1298 = cast1324;
  int** t1325 = __retval1298;
  return t1325;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1326, unsigned long v1327) {
bb1328:
  struct std__allocator_int___* this1329;
  unsigned long __n1330;
  int** __retval1331;
  this1329 = v1326;
  __n1330 = v1327;
  struct std__allocator_int___* t1332 = this1329;
    _Bool r1333 = std____is_constant_evaluated();
    if (r1333) {
        unsigned long t1334 = __n1330;
        unsigned long c1335 = 8;
        unsigned long ovr1336;
        _Bool ovf1337 = __builtin_mul_overflow(t1334, c1335, &ovr1336);
        __n1330 = ovr1336;
        if (ovf1337) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1338 = __n1330;
      void* r1339 = operator_new(t1338);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1340 = (int**)r1339;
      __retval1331 = cast1340;
      int** t1341 = __retval1331;
      return t1341;
    }
  struct std____new_allocator_int___* base1342 = (struct std____new_allocator_int___*)((char *)t1332 + 0);
  unsigned long t1343 = __n1330;
  void* c1344 = ((void*)0);
  int** r1345 = std____new_allocator_int____allocate(base1342, t1343, c1344);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1331 = r1345;
  int** t1346 = __retval1331;
  return t1346;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1347, unsigned long v1348) {
bb1349:
  struct std__allocator_int___* __a1350;
  unsigned long __n1351;
  int** __retval1352;
  __a1350 = v1347;
  __n1351 = v1348;
  struct std__allocator_int___* t1353 = __a1350;
  unsigned long t1354 = __n1351;
  int** r1355 = std__allocator_int____allocate(t1353, t1354);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1352 = r1355;
  int** t1356 = __retval1352;
  return t1356;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1357, unsigned long v1358) {
bb1359:
  struct std___Deque_base_int__std__allocator_int__* this1360;
  unsigned long __n1361;
  int** __retval1362;
  struct std__allocator_int___ __map_alloc1363;
  this1360 = v1357;
  __n1361 = v1358;
  struct std___Deque_base_int__std__allocator_int__* t1364 = this1360;
  struct std__allocator_int___ r1365 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1364);
  __map_alloc1363 = r1365;
  unsigned long t1366 = __n1361;
  int** r1367 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1363, t1366);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1362 = r1367;
  int** t1368 = __retval1362;
  return t1368;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1369) {
bb1370:
  struct std____new_allocator_int_* this1371;
  unsigned long __retval1372;
  this1371 = v1369;
  struct std____new_allocator_int_* t1373 = this1371;
  unsigned long c1374 = 9223372036854775807;
  unsigned long c1375 = 4;
  unsigned long b1376 = c1374 / c1375;
  __retval1372 = b1376;
  unsigned long t1377 = __retval1372;
  return t1377;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1378, unsigned long v1379, void* v1380) {
bb1381:
  struct std____new_allocator_int_* this1382;
  unsigned long __n1383;
  void* unnamed1384;
  int* __retval1385;
  this1382 = v1378;
  __n1383 = v1379;
  unnamed1384 = v1380;
  struct std____new_allocator_int_* t1386 = this1382;
    unsigned long t1387 = __n1383;
    unsigned long r1388 = std____new_allocator_int____M_max_size___const(t1386);
    _Bool c1389 = ((t1387 > r1388)) ? 1 : 0;
    if (c1389) {
        unsigned long t1390 = __n1383;
        unsigned long c1391 = -1;
        unsigned long c1392 = 4;
        unsigned long b1393 = c1391 / c1392;
        _Bool c1394 = ((t1390 > b1393)) ? 1 : 0;
        if (c1394) {
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
    unsigned long c1395 = 4;
    unsigned long c1396 = 16;
    _Bool c1397 = ((c1395 > c1396)) ? 1 : 0;
    if (c1397) {
      unsigned long __al1398;
      unsigned long c1399 = 4;
      __al1398 = c1399;
      unsigned long t1400 = __n1383;
      unsigned long c1401 = 4;
      unsigned long b1402 = t1400 * c1401;
      unsigned long t1403 = __al1398;
      void* r1404 = operator_new_2(b1402, t1403);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1405 = (int*)r1404;
      __retval1385 = cast1405;
      int* t1406 = __retval1385;
      return t1406;
    }
  unsigned long t1407 = __n1383;
  unsigned long c1408 = 4;
  unsigned long b1409 = t1407 * c1408;
  void* r1410 = operator_new(b1409);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1411 = (int*)r1410;
  __retval1385 = cast1411;
  int* t1412 = __retval1385;
  return t1412;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1413, unsigned long v1414) {
bb1415:
  struct std__allocator_int_* this1416;
  unsigned long __n1417;
  int* __retval1418;
  this1416 = v1413;
  __n1417 = v1414;
  struct std__allocator_int_* t1419 = this1416;
    _Bool r1420 = std____is_constant_evaluated();
    if (r1420) {
        unsigned long t1421 = __n1417;
        unsigned long c1422 = 4;
        unsigned long ovr1423;
        _Bool ovf1424 = __builtin_mul_overflow(t1421, c1422, &ovr1423);
        __n1417 = ovr1423;
        if (ovf1424) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1425 = __n1417;
      void* r1426 = operator_new(t1425);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1427 = (int*)r1426;
      __retval1418 = cast1427;
      int* t1428 = __retval1418;
      return t1428;
    }
  struct std____new_allocator_int_* base1429 = (struct std____new_allocator_int_*)((char *)t1419 + 0);
  unsigned long t1430 = __n1417;
  void* c1431 = ((void*)0);
  int* r1432 = std____new_allocator_int___allocate(base1429, t1430, c1431);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1418 = r1432;
  int* t1433 = __retval1418;
  return t1433;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1434, unsigned long v1435) {
bb1436:
  struct std__allocator_int_* __a1437;
  unsigned long __n1438;
  int* __retval1439;
  __a1437 = v1434;
  __n1438 = v1435;
  struct std__allocator_int_* t1440 = __a1437;
  unsigned long t1441 = __n1438;
  int* r1442 = std__allocator_int___allocate(t1440, t1441);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1439 = r1442;
  int* t1443 = __retval1439;
  return t1443;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1444) {
bb1445:
  struct std___Deque_base_int__std__allocator_int__* this1446;
  int* __retval1447;
  this1446 = v1444;
  struct std___Deque_base_int__std__allocator_int__* t1448 = this1446;
  struct std__allocator_int_* base1449 = (struct std__allocator_int_*)((char *)&(t1448->_M_impl) + 0);
  unsigned long c1450 = 4;
  unsigned long r1451 = std____deque_buf_size(c1450);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1452 = std__allocator_traits_std__allocator_int_____allocate(base1449, r1451);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1447 = r1452;
  int* t1453 = __retval1447;
  return t1453;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1454, int** v1455, int** v1456) {
bb1457:
  struct std___Deque_base_int__std__allocator_int__* this1458;
  int** __nstart1459;
  int** __nfinish1460;
  int** __cur1461;
  this1458 = v1454;
  __nstart1459 = v1455;
  __nfinish1460 = v1456;
  struct std___Deque_base_int__std__allocator_int__* t1462 = this1458;
        int** t1464 = __nstart1459;
        __cur1461 = t1464;
        while (1) {
          int** t1466 = __cur1461;
          int** t1467 = __nfinish1460;
          _Bool c1468 = ((t1466 < t1467)) ? 1 : 0;
          if (!c1468) break;
          int* r1469 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1462);
          if (__cir_exc_active) {
            goto cir_try_dispatch1463;
          }
          int** t1470 = __cur1461;
          *t1470 = r1469;
        for_step1465: ;
          int** t1471 = __cur1461;
          int c1472 = 1;
          int** ptr1473 = &(t1471)[c1472];
          __cur1461 = ptr1473;
        }
    cir_try_dispatch1463: ;
    if (__cir_exc_active) {
    {
      int ca_tok1474 = 0;
      void* ca_exn1475 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1476 = __nstart1459;
        int** t1477 = __cur1461;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1462, t1476, t1477);
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
bb1478:
  unsigned long __retval1479;
  unsigned long c1480 = 4;
  unsigned long r1481 = std____deque_buf_size(c1480);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1479 = r1481;
  unsigned long t1482 = __retval1479;
  return t1482;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1483, int** v1484) {
bb1485:
  struct std___Deque_iterator_int__int____int___* this1486;
  int** __new_node1487;
  this1486 = v1483;
  __new_node1487 = v1484;
  struct std___Deque_iterator_int__int____int___* t1488 = this1486;
  int** t1489 = __new_node1487;
  t1488->_M_node = t1489;
  int** t1490 = __new_node1487;
  int* t1491 = *t1490;
  t1488->_M_first = t1491;
  int* t1492 = t1488->_M_first;
  unsigned long r1493 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1494 = (long)r1493;
  int* ptr1495 = &(t1492)[cast1494];
  t1488->_M_last = ptr1495;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1496, unsigned long v1497) {
bb1498:
  struct std___Deque_base_int__std__allocator_int__* this1499;
  unsigned long __num_elements1500;
  unsigned long __num_nodes1501;
  unsigned long ref_tmp01502;
  unsigned long ref_tmp11503;
  int** __nstart1504;
  int** __nfinish1505;
  this1499 = v1496;
  __num_elements1500 = v1497;
  struct std___Deque_base_int__std__allocator_int__* t1506 = this1499;
  unsigned long t1507 = __num_elements1500;
  unsigned long c1508 = 4;
  unsigned long r1509 = std____deque_buf_size(c1508);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1510 = t1507 / r1509;
  unsigned long c1511 = 1;
  unsigned long b1512 = b1510 + c1511;
  __num_nodes1501 = b1512;
  unsigned long c1513 = 8;
  ref_tmp01502 = c1513;
  unsigned long t1514 = __num_nodes1501;
  unsigned long c1515 = 2;
  unsigned long b1516 = t1514 + c1515;
  ref_tmp11503 = b1516;
  unsigned long* r1517 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01502, &ref_tmp11503);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1518 = *r1517;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1519 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  base1519->_M_map_size = t1518;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1520 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  unsigned long t1521 = base1520->_M_map_size;
  int** r1522 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1506, t1521);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1523 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  base1523->_M_map = r1522;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1524 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  int** t1525 = base1524->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1526 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  unsigned long t1527 = base1526->_M_map_size;
  unsigned long t1528 = __num_nodes1501;
  unsigned long b1529 = t1527 - t1528;
  unsigned long c1530 = 2;
  unsigned long b1531 = b1529 / c1530;
  int** ptr1532 = &(t1525)[b1531];
  __nstart1504 = ptr1532;
  int** t1533 = __nstart1504;
  unsigned long t1534 = __num_nodes1501;
  int** ptr1535 = &(t1533)[t1534];
  __nfinish1505 = ptr1535;
      int** t1537 = __nstart1504;
      int** t1538 = __nfinish1505;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1506, t1537, t1538);
      if (__cir_exc_active) {
        goto cir_try_dispatch1536;
      }
    cir_try_dispatch1536: ;
    if (__cir_exc_active) {
    {
      int ca_tok1539 = 0;
      void* ca_exn1540 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1541 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
        int** t1542 = base1541->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1543 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
        unsigned long t1544 = base1543->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1506, t1542, t1544);
        int** c1545 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1546 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
        base1546->_M_map = c1545;
        unsigned long c1547 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1548 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
        base1548->_M_map_size = c1547;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1549 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  int** t1550 = __nstart1504;
  std___Deque_iterator_int__int___int_____M_set_node(&base1549->_M_start, t1550);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1551 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  int** t1552 = __nfinish1505;
  int c1553 = -1;
  int** ptr1554 = &(t1552)[c1553];
  std___Deque_iterator_int__int___int_____M_set_node(&base1551->_M_finish, ptr1554);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1555 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  int* t1556 = base1555->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1557 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  base1557->_M_start._M_cur = t1556;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1558 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  int* t1559 = base1558->_M_finish._M_first;
  unsigned long t1560 = __num_elements1500;
  unsigned long c1561 = 4;
  unsigned long r1562 = std____deque_buf_size(c1561);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1563 = t1560 % r1562;
  int* ptr1564 = &(t1559)[b1563];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1565 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1506->_M_impl) + 0);
  base1565->_M_finish._M_cur = ptr1564;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1566) {
bb1567:
  struct std___Deque_base_int__std__allocator_int__* this1568;
  this1568 = v1566;
  struct std___Deque_base_int__std__allocator_int__* t1569 = this1568;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1569->_M_impl);
    unsigned long c1570 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1569, c1570);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1569->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1571) {
bb1572:
  struct std____new_allocator_int_* this1573;
  this1573 = v1571;
  struct std____new_allocator_int_* t1574 = this1573;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1575) {
bb1576:
  struct std__allocator_int_* this1577;
  this1577 = v1575;
  struct std__allocator_int_* t1578 = this1577;
  struct std____new_allocator_int_* base1579 = (struct std____new_allocator_int_*)((char *)t1578 + 0);
  std____new_allocator_int_____new_allocator(base1579);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1580) {
bb1581:
  struct std___Deque_iterator_int__int____int___* this1582;
  this1582 = v1580;
  struct std___Deque_iterator_int__int____int___* t1583 = this1582;
  int* c1584 = ((void*)0);
  t1583->_M_cur = c1584;
  int* c1585 = ((void*)0);
  t1583->_M_first = c1585;
  int* c1586 = ((void*)0);
  t1583->_M_last = c1586;
  int** c1587 = ((void*)0);
  t1583->_M_node = c1587;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1588) {
bb1589:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1590;
  this1590 = v1588;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1591 = this1590;
  int** c1592 = ((void*)0);
  t1591->_M_map = c1592;
  unsigned long c1593 = 0;
  t1591->_M_map_size = c1593;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1591->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1591->_M_finish);
  return;
}

