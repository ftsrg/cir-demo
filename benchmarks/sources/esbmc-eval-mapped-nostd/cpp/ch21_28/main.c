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
struct std__queue_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "myqueue.back()==75";
char _str_1[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch21_28/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "myqueue.front()==12";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[6] = "x is ";
char _str_4[6] = "x==63";
char _str_5[48] = "cannot create std::deque larger than max_size()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
char _str_8[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE4backEv[75] = "reference std::queue<int>::back() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv[76] = "reference std::queue<int>::front() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
void std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
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
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* p0);
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__queue_int__std__deque_int__std__allocator_int_______push(struct std__queue_int__std__deque_int__std__allocator_int___* p0, int* p1);
_Bool std__queue_int__std__deque_int__std__allocator_int_______empty___const(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
int* std__queue_int__std__deque_int__std__allocator_int_______back(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* p0);
int* std__queue_int__std__deque_int__std__allocator_int_______front(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
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

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v5, int* v6) {
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

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22:
  struct std__allocator_int_* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  int* t26 = __p24;
  int* t27 = __args25;
  int* r28 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t26, t27);
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

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* v575, int* v576) {
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
      char* cast584 = (char*)&(_str_5);
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
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base595, t598, t599);
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

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v621, struct std___Deque_iterator_int__int____int___* v622) {
bb623:
  struct std___Deque_iterator_int__int____int___* __x624;
  struct std___Deque_iterator_int__int____int___* __y625;
  _Bool __retval626;
  __x624 = v621;
  __y625 = v622;
  struct std___Deque_iterator_int__int____int___* t627 = __x624;
  int* t628 = t627->_M_cur;
  struct std___Deque_iterator_int__int____int___* t629 = __y625;
  int* t630 = t629->_M_cur;
  _Bool c631 = ((t628 == t630)) ? 1 : 0;
  __retval626 = c631;
  _Bool t632 = __retval626;
  return t632;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v633) {
bb634:
  struct std__deque_int__std__allocator_int__* this635;
  _Bool __retval636;
  this635 = v633;
  struct std__deque_int__std__allocator_int__* t637 = this635;
  struct std___Deque_base_int__std__allocator_int__* base638 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t637 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base639 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base638->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base640 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t637 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base641 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base640->_M_impl) + 0);
  _Bool r642 = std__operator__(&base639->_M_finish, &base641->_M_start);
  __retval636 = r642;
  _Bool t643 = __retval636;
  return t643;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v644) {
bb645:
  struct std___Deque_iterator_int__int____int___* this646;
  struct std___Deque_iterator_int__int____int___* __retval647;
  this646 = v644;
  struct std___Deque_iterator_int__int____int___* t648 = this646;
    int* t649 = t648->_M_cur;
    int* t650 = t648->_M_first;
    _Bool c651 = ((t649 == t650)) ? 1 : 0;
    if (c651) {
      int** t652 = t648->_M_node;
      int c653 = -1;
      int** ptr654 = &(t652)[c653];
      std___Deque_iterator_int__int___int_____M_set_node(t648, ptr654);
      int* t655 = t648->_M_last;
      t648->_M_cur = t655;
    }
  int* t656 = t648->_M_cur;
  int c657 = -1;
  int* ptr658 = &(t656)[c657];
  t648->_M_cur = ptr658;
  __retval647 = t648;
  struct std___Deque_iterator_int__int____int___* t659 = __retval647;
  return t659;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v660) {
bb661:
  struct std___Deque_iterator_int__int____int___* this662;
  int* __retval663;
  this662 = v660;
  struct std___Deque_iterator_int__int____int___* t664 = this662;
  int* t665 = t664->_M_cur;
  __retval663 = t665;
  int* t666 = __retval663;
  return t666;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v667) {
bb668:
  struct std__deque_int__std__allocator_int__* this669;
  int* __retval670;
  struct std___Deque_iterator_int__int____int___ __tmp671;
  this669 = v667;
  struct std__deque_int__std__allocator_int__* t672 = this669;
    do {
          _Bool r673 = std__deque_int__std__allocator_int_____empty___const(t672);
          if (r673) {
            char* cast674 = (char*)&(_str_6);
            int c675 = 1537;
            char* cast676 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast677 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast674, c675, cast676, cast677);
          }
      _Bool c678 = 0;
      if (!c678) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r679 = std__deque_int__std__allocator_int_____end(t672);
  __tmp671 = r679;
  struct std___Deque_iterator_int__int____int___* r680 = std___Deque_iterator_int__int___int____operator__(&__tmp671);
  int* r681 = std___Deque_iterator_int__int___int____operator____const(&__tmp671);
  __retval670 = r681;
  int* t682 = __retval670;
  return t682;
}

// function: _ZNSt5dequeIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* v683, int* v684) {
bb685:
  struct std__deque_int__std__allocator_int__* this686;
  int* __args687;
  int* __retval688;
  this686 = v683;
  __args687 = v684;
  struct std__deque_int__std__allocator_int__* t689 = this686;
    struct std___Deque_base_int__std__allocator_int__* base690 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t689 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base691 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base690->_M_impl) + 0);
    int* t692 = base691->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base693 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t689 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base694 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base693->_M_impl) + 0);
    int* t695 = base694->_M_finish._M_last;
    int c696 = -1;
    int* ptr697 = &(t695)[c696];
    _Bool c698 = ((t692 != ptr697)) ? 1 : 0;
    if (c698) {
      struct std___Deque_base_int__std__allocator_int__* base699 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t689 + 0);
      struct std__allocator_int_* base700 = (struct std__allocator_int_*)((char *)&(base699->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base701 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t689 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base702 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base701->_M_impl) + 0);
      int* t703 = base702->_M_finish._M_cur;
      int* t704 = __args687;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base700, t703, t704);
      struct std___Deque_base_int__std__allocator_int__* base705 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t689 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base706 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base705->_M_impl) + 0);
      int* t707 = base706->_M_finish._M_cur;
      int c708 = 1;
      int* ptr709 = &(t707)[c708];
      base706->_M_finish._M_cur = ptr709;
    } else {
      int* t710 = __args687;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_(t689, t710);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r711 = std__deque_int__std__allocator_int_____back(t689);
  __retval688 = r711;
  int* t712 = __retval688;
  return t712;
}

// function: _ZNSt5dequeIiSaIiEE9push_backEOi
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v713, int* v714) {
bb715:
  struct std__deque_int__std__allocator_int__* this716;
  int* __x717;
  this716 = v713;
  __x717 = v714;
  struct std__deque_int__std__allocator_int__* t718 = this716;
  int* t719 = __x717;
  int* r720 = int__std__deque_int__std__allocator_int_____emplace_back_int_(t718, t719);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE4pushEOi
void std__queue_int__std__deque_int__std__allocator_int_______push(struct std__queue_int__std__deque_int__std__allocator_int___* v721, int* v722) {
bb723:
  struct std__queue_int__std__deque_int__std__allocator_int___* this724;
  int* __x725;
  this724 = v721;
  __x725 = v722;
  struct std__queue_int__std__deque_int__std__allocator_int___* t726 = this724;
  int* t727 = __x725;
  std__deque_int__std__allocator_int_____push_back(&t726->c, t727);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt5queueIiSt5dequeIiSaIiEEE5emptyEv
_Bool std__queue_int__std__deque_int__std__allocator_int_______empty___const(struct std__queue_int__std__deque_int__std__allocator_int___* v728) {
bb729:
  struct std__queue_int__std__deque_int__std__allocator_int___* this730;
  _Bool __retval731;
  this730 = v728;
  struct std__queue_int__std__deque_int__std__allocator_int___* t732 = this730;
  _Bool r733 = std__deque_int__std__allocator_int_____empty___const(&t732->c);
  __retval731 = r733;
  _Bool t734 = __retval731;
  return t734;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE4backEv
int* std__queue_int__std__deque_int__std__allocator_int_______back(struct std__queue_int__std__deque_int__std__allocator_int___* v735) {
bb736:
  struct std__queue_int__std__deque_int__std__allocator_int___* this737;
  int* __retval738;
  this737 = v735;
  struct std__queue_int__std__deque_int__std__allocator_int___* t739 = this737;
    do {
          _Bool r740 = std__queue_int__std__deque_int__std__allocator_int_______empty___const(t739);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r740) {
            char* cast741 = (char*)&(_str_8);
            int c742 = 286;
            char* cast743 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE4backEv);
            char* cast744 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast741, c742, cast743, cast744);
          }
      _Bool c745 = 0;
      if (!c745) break;
    } while (1);
  int* r746 = std__deque_int__std__allocator_int_____back(&t739->c);
  __retval738 = r746;
  int* t747 = __retval738;
  return t747;
}

// function: _ZNSt5dequeIiSaIiEE5frontEv
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* v748) {
bb749:
  struct std__deque_int__std__allocator_int__* this750;
  int* __retval751;
  struct std___Deque_iterator_int__int____int___ ref_tmp0752;
  this750 = v748;
  struct std__deque_int__std__allocator_int__* t753 = this750;
    do {
          _Bool r754 = std__deque_int__std__allocator_int_____empty___const(t753);
          if (r754) {
            char* cast755 = (char*)&(_str_6);
            int c756 = 1513;
            char* cast757 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv);
            char* cast758 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast755, c756, cast757, cast758);
          }
      _Bool c759 = 0;
      if (!c759) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r760 = std__deque_int__std__allocator_int_____begin(t753);
  ref_tmp0752 = r760;
  int* r761 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0752);
  __retval751 = r761;
  int* t762 = __retval751;
  return t762;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv
int* std__queue_int__std__deque_int__std__allocator_int_______front(struct std__queue_int__std__deque_int__std__allocator_int___* v763) {
bb764:
  struct std__queue_int__std__deque_int__std__allocator_int___* this765;
  int* __retval766;
  this765 = v763;
  struct std__queue_int__std__deque_int__std__allocator_int___* t767 = this765;
    do {
          _Bool r768 = std__queue_int__std__deque_int__std__allocator_int_______empty___const(t767);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r768) {
            char* cast769 = (char*)&(_str_8);
            int c770 = 262;
            char* cast771 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv);
            char* cast772 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast769, c770, cast771, cast772);
          }
      _Bool c773 = 0;
      if (!c773) break;
    } while (1);
  int* r774 = std__deque_int__std__allocator_int_____front(&t767->c);
  __retval766 = r774;
  int* t775 = __retval766;
  return t775;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v776, int v777) {
bb778:
  int __a779;
  int __b780;
  int __retval781;
  __a779 = v776;
  __b780 = v777;
  int t782 = __a779;
  int t783 = __b780;
  int b784 = t782 | t783;
  __retval781 = b784;
  int t785 = __retval781;
  return t785;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v786) {
bb787:
  struct std__basic_ios_char__std__char_traits_char__* this788;
  int __retval789;
  this788 = v786;
  struct std__basic_ios_char__std__char_traits_char__* t790 = this788;
  struct std__ios_base* base791 = (struct std__ios_base*)((char *)t790 + 0);
  int t792 = base791->_M_streambuf_state;
  __retval789 = t792;
  int t793 = __retval789;
  return t793;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v794, int v795) {
bb796:
  struct std__basic_ios_char__std__char_traits_char__* this797;
  int __state798;
  this797 = v794;
  __state798 = v795;
  struct std__basic_ios_char__std__char_traits_char__* t799 = this797;
  int r800 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t799);
  if (__cir_exc_active) {
    return;
  }
  int t801 = __state798;
  int r802 = std__operator__2(r800, t801);
  std__basic_ios_char__std__char_traits_char_____clear(t799, r802);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v803, char* v804) {
bb805:
  char* __c1806;
  char* __c2807;
  _Bool __retval808;
  __c1806 = v803;
  __c2807 = v804;
  char* t809 = __c1806;
  char t810 = *t809;
  int cast811 = (int)t810;
  char* t812 = __c2807;
  char t813 = *t812;
  int cast814 = (int)t813;
  _Bool c815 = ((cast811 == cast814)) ? 1 : 0;
  __retval808 = c815;
  _Bool t816 = __retval808;
  return t816;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v817) {
bb818:
  char* __p819;
  unsigned long __retval820;
  unsigned long __i821;
  __p819 = v817;
  unsigned long c822 = 0;
  __i821 = c822;
    char ref_tmp0823;
    while (1) {
      unsigned long t824 = __i821;
      char* t825 = __p819;
      char* ptr826 = &(t825)[t824];
      char c827 = 0;
      ref_tmp0823 = c827;
      _Bool r828 = __gnu_cxx__char_traits_char___eq(ptr826, &ref_tmp0823);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u829 = !r828;
      if (!u829) break;
      unsigned long t830 = __i821;
      unsigned long u831 = t830 + 1;
      __i821 = u831;
    }
  unsigned long t832 = __i821;
  __retval820 = t832;
  unsigned long t833 = __retval820;
  return t833;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v834) {
bb835:
  char* __s836;
  unsigned long __retval837;
  __s836 = v834;
    _Bool r838 = std____is_constant_evaluated();
    if (r838) {
      char* t839 = __s836;
      unsigned long r840 = __gnu_cxx__char_traits_char___length(t839);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval837 = r840;
      unsigned long t841 = __retval837;
      return t841;
    }
  char* t842 = __s836;
  unsigned long r843 = strlen(t842);
  __retval837 = r843;
  unsigned long t844 = __retval837;
  return t844;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v845, char* v846) {
bb847:
  struct std__basic_ostream_char__std__char_traits_char__* __out848;
  char* __s849;
  struct std__basic_ostream_char__std__char_traits_char__* __retval850;
  __out848 = v845;
  __s849 = v846;
    char* t851 = __s849;
    _Bool cast852 = (_Bool)t851;
    _Bool u853 = !cast852;
    if (u853) {
      struct std__basic_ostream_char__std__char_traits_char__* t854 = __out848;
      void** v855 = (void**)t854;
      void* v856 = *((void**)v855);
      unsigned char* cast857 = (unsigned char*)v856;
      long c858 = -24;
      unsigned char* ptr859 = &(cast857)[c858];
      long* cast860 = (long*)ptr859;
      long t861 = *cast860;
      unsigned char* cast862 = (unsigned char*)t854;
      unsigned char* ptr863 = &(cast862)[t861];
      struct std__basic_ostream_char__std__char_traits_char__* cast864 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr863;
      struct std__basic_ios_char__std__char_traits_char__* cast865 = (struct std__basic_ios_char__std__char_traits_char__*)cast864;
      int t866 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast865, t866);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t867 = __out848;
      char* t868 = __s849;
      char* t869 = __s849;
      unsigned long r870 = std__char_traits_char___length(t869);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast871 = (long)r870;
      struct std__basic_ostream_char__std__char_traits_char__* r872 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t867, t868, cast871);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t873 = __out848;
  __retval850 = t873;
  struct std__basic_ostream_char__std__char_traits_char__* t874 = __retval850;
  return t874;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v875, void* v876) {
bb877:
  struct std__basic_ostream_char__std__char_traits_char__* this878;
  void* __pf879;
  struct std__basic_ostream_char__std__char_traits_char__* __retval880;
  this878 = v875;
  __pf879 = v876;
  struct std__basic_ostream_char__std__char_traits_char__* t881 = this878;
  void* t882 = __pf879;
  struct std__basic_ostream_char__std__char_traits_char__* r883 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t882)(t881);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval880 = r883;
  struct std__basic_ostream_char__std__char_traits_char__* t884 = __retval880;
  return t884;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v885) {
bb886:
  struct std__basic_ostream_char__std__char_traits_char__* __os887;
  struct std__basic_ostream_char__std__char_traits_char__* __retval888;
  __os887 = v885;
  struct std__basic_ostream_char__std__char_traits_char__* t889 = __os887;
  struct std__basic_ostream_char__std__char_traits_char__* r890 = std__ostream__flush(t889);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval888 = r890;
  struct std__basic_ostream_char__std__char_traits_char__* t891 = __retval888;
  return t891;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v892) {
bb893:
  struct std__ctype_char_* __f894;
  struct std__ctype_char_* __retval895;
  __f894 = v892;
    struct std__ctype_char_* t896 = __f894;
    _Bool cast897 = (_Bool)t896;
    _Bool u898 = !cast897;
    if (u898) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t899 = __f894;
  __retval895 = t899;
  struct std__ctype_char_* t900 = __retval895;
  return t900;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v901, char v902) {
bb903:
  struct std__ctype_char_* this904;
  char __c905;
  char __retval906;
  this904 = v901;
  __c905 = v902;
  struct std__ctype_char_* t907 = this904;
    char t908 = t907->_M_widen_ok;
    _Bool cast909 = (_Bool)t908;
    if (cast909) {
      char t910 = __c905;
      unsigned char cast911 = (unsigned char)t910;
      unsigned long cast912 = (unsigned long)cast911;
      char t913 = t907->_M_widen[cast912];
      __retval906 = t913;
      char t914 = __retval906;
      return t914;
    }
  std__ctype_char____M_widen_init___const(t907);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t915 = __c905;
  void** v916 = (void**)t907;
  void* v917 = *((void**)v916);
  char vcall920 = (char)__VERIFIER_virtual_call_char_char(t907, 6, t915);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval906 = vcall920;
  char t921 = __retval906;
  return t921;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v922, char v923) {
bb924:
  struct std__basic_ios_char__std__char_traits_char__* this925;
  char __c926;
  char __retval927;
  this925 = v922;
  __c926 = v923;
  struct std__basic_ios_char__std__char_traits_char__* t928 = this925;
  struct std__ctype_char_* t929 = t928->_M_ctype;
  struct std__ctype_char_* r930 = std__ctype_char__const__std____check_facet_std__ctype_char___(t929);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t931 = __c926;
  char r932 = std__ctype_char___widen_char__const(r930, t931);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval927 = r932;
  char t933 = __retval927;
  return t933;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v934) {
bb935:
  struct std__basic_ostream_char__std__char_traits_char__* __os936;
  struct std__basic_ostream_char__std__char_traits_char__* __retval937;
  __os936 = v934;
  struct std__basic_ostream_char__std__char_traits_char__* t938 = __os936;
  struct std__basic_ostream_char__std__char_traits_char__* t939 = __os936;
  void** v940 = (void**)t939;
  void* v941 = *((void**)v940);
  unsigned char* cast942 = (unsigned char*)v941;
  long c943 = -24;
  unsigned char* ptr944 = &(cast942)[c943];
  long* cast945 = (long*)ptr944;
  long t946 = *cast945;
  unsigned char* cast947 = (unsigned char*)t939;
  unsigned char* ptr948 = &(cast947)[t946];
  struct std__basic_ostream_char__std__char_traits_char__* cast949 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr948;
  struct std__basic_ios_char__std__char_traits_char__* cast950 = (struct std__basic_ios_char__std__char_traits_char__*)cast949;
  char c951 = 10;
  char r952 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast950, c951);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r953 = std__ostream__put(t938, r952);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r954 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r953);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval937 = r954;
  struct std__basic_ostream_char__std__char_traits_char__* t955 = __retval937;
  return t955;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEED2Ev
void std__queue_int__std__deque_int__std__allocator_int________queue(struct std__queue_int__std__deque_int__std__allocator_int___* v956) {
bb957:
  struct std__queue_int__std__deque_int__std__allocator_int___* this958;
  this958 = v956;
  struct std__queue_int__std__deque_int__std__allocator_int___* t959 = this958;
  {
    std__deque_int__std__allocator_int______deque(&t959->c);
  }
  return;
}

// function: main
int main() {
bb960:
  int __retval961;
  struct std__queue_int__std__deque_int__std__allocator_int___ myqueue962;
  int x963;
  int ref_tmp0964;
  int ref_tmp1965;
  int c966 = 0;
  __retval961 = c966;
  std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(&myqueue962);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c967 = 12;
    ref_tmp0964 = c967;
    std__queue_int__std__deque_int__std__allocator_int_______push(&myqueue962, &ref_tmp0964);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c968 = 75;
    ref_tmp1965 = c968;
    std__queue_int__std__deque_int__std__allocator_int_______push(&myqueue962, &ref_tmp1965);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r969 = std__queue_int__std__deque_int__std__allocator_int_______back(&myqueue962);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t970 = *r969;
    int c971 = 75;
    _Bool c972 = ((t970 == c971)) ? 1 : 0;
    if (c972) {
    } else {
      char* cast973 = (char*)&(_str);
      char* c974 = _str_1;
      unsigned int c975 = 22;
      char* cast976 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast973, c974, c975, cast976);
    }
    int* r977 = std__queue_int__std__deque_int__std__allocator_int_______front(&myqueue962);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t978 = *r977;
    int c979 = 12;
    _Bool c980 = ((t978 == c979)) ? 1 : 0;
    if (c980) {
    } else {
      char* cast981 = (char*)&(_str_2);
      char* c982 = _str_1;
      unsigned int c983 = 23;
      char* cast984 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast981, c982, c983, cast984);
    }
    int* r985 = std__queue_int__std__deque_int__std__allocator_int_______back(&myqueue962);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t986 = *r985;
    int* r987 = std__queue_int__std__deque_int__std__allocator_int_______front(&myqueue962);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t988 = *r987;
    int b989 = t986 - t988;
    x963 = b989;
    char* cast990 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r991 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast990);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t992 = x963;
    struct std__basic_ostream_char__std__char_traits_char__* r993 = std__ostream__operator__(r991, t992);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r994 = std__ostream__operator___std__ostream_____(r993, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t995 = x963;
    int c996 = 63;
    _Bool c997 = ((t995 == c996)) ? 1 : 0;
    if (c997) {
    } else {
      char* cast998 = (char*)&(_str_4);
      char* c999 = _str_1;
      unsigned int c1000 = 29;
      char* cast1001 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast998, c999, c1000, cast1001);
    }
    int c1002 = 0;
    __retval961 = c1002;
    int t1003 = __retval961;
    int ret_val1004 = t1003;
    {
      std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue962);
    }
    return ret_val1004;
  int t1005 = __retval961;
  return t1005;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v1006) {
bb1007:
  struct std__deque_int__std__allocator_int__* this1008;
  struct std___Deque_iterator_int__int____int___ agg_tmp01009;
  struct std___Deque_iterator_int__int____int___ agg_tmp11010;
  this1008 = v1006;
  struct std__deque_int__std__allocator_int__* t1011 = this1008;
    struct std___Deque_iterator_int__int____int___ r1012 = std__deque_int__std__allocator_int_____begin(t1011);
    agg_tmp01009 = r1012;
    struct std___Deque_iterator_int__int____int___ r1013 = std__deque_int__std__allocator_int_____end(t1011);
    agg_tmp11010 = r1013;
    struct std___Deque_base_int__std__allocator_int__* base1014 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1011 + 0);
    struct std__allocator_int_* r1015 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1014);
    struct std___Deque_iterator_int__int____int___ t1016 = agg_tmp01009;
    struct std___Deque_iterator_int__int____int___ t1017 = agg_tmp11010;
    std__deque_int__std__allocator_int______M_destroy_data(t1011, t1016, t1017, r1015);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1018 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1011 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1018);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1019 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1011 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1019);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1020:
  _Bool __retval1021;
    _Bool c1022 = 0;
    __retval1021 = c1022;
    _Bool t1023 = __retval1021;
    return t1023;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1024) {
bb1025:
  int* __location1026;
  __location1026 = v1024;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1027, int* v1028) {
bb1029:
  int* __first1030;
  int* __last1031;
  __first1030 = v1027;
  __last1031 = v1028;
      _Bool r1032 = std____is_constant_evaluated();
      if (r1032) {
          while (1) {
            int* t1034 = __first1030;
            int* t1035 = __last1031;
            _Bool c1036 = ((t1034 != t1035)) ? 1 : 0;
            if (!c1036) break;
            int* t1037 = __first1030;
            void_std__destroy_at_int_(t1037);
            if (__cir_exc_active) {
              return;
            }
          for_step1033: ;
            int* t1038 = __first1030;
            int c1039 = 1;
            int* ptr1040 = &(t1038)[c1039];
            __first1030 = ptr1040;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1041, int* v1042, struct std__allocator_int_* v1043) {
bb1044:
  int* __first1045;
  int* __last1046;
  struct std__allocator_int_* unnamed1047;
  __first1045 = v1041;
  __last1046 = v1042;
  unnamed1047 = v1043;
  int* t1048 = __first1045;
  int* t1049 = __last1046;
  void_std___Destroy_int__(t1048, t1049);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1050) {
bb1051:
  unsigned long __size1052;
  unsigned long __retval1053;
  __size1052 = v1050;
  unsigned long t1054 = __size1052;
  unsigned long c1055 = 512;
  _Bool c1056 = ((t1054 < c1055)) ? 1 : 0;
  unsigned long ternary1057;
  if (c1056) {
    unsigned long c1058 = 512;
    unsigned long t1059 = __size1052;
    unsigned long b1060 = c1058 / t1059;
    ternary1057 = (unsigned long)b1060;
  } else {
    unsigned long c1061 = 1;
    ternary1057 = (unsigned long)c1061;
  }
  __retval1053 = ternary1057;
  unsigned long t1062 = __retval1053;
  return t1062;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1063:
  unsigned long __retval1064;
  unsigned long c1065 = 4;
  unsigned long r1066 = std____deque_buf_size(c1065);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1064 = r1066;
  unsigned long t1067 = __retval1064;
  return t1067;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1068, struct std___Deque_iterator_int__int____int___ v1069, struct std___Deque_iterator_int__int____int___ v1070) {
bb1071:
  struct std__deque_int__std__allocator_int__* this1072;
  struct std___Deque_iterator_int__int____int___ __first1073;
  struct std___Deque_iterator_int__int____int___ __last1074;
  this1072 = v1068;
  __first1073 = v1069;
  __last1074 = v1070;
  struct std__deque_int__std__allocator_int__* t1075 = this1072;
    int** __node1076;
    int** t1077 = __first1073._M_node;
    int c1078 = 1;
    int** ptr1079 = &(t1077)[c1078];
    __node1076 = ptr1079;
    while (1) {
      int** t1081 = __node1076;
      int** t1082 = __last1074._M_node;
      _Bool c1083 = ((t1081 < t1082)) ? 1 : 0;
      if (!c1083) break;
      int** t1084 = __node1076;
      int* t1085 = *t1084;
      int** t1086 = __node1076;
      int* t1087 = *t1086;
      unsigned long r1088 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1089 = &(t1087)[r1088];
      struct std___Deque_base_int__std__allocator_int__* base1090 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1075 + 0);
      struct std__allocator_int_* r1091 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1090);
      void_std___Destroy_int___int_(t1085, ptr1089, r1091);
      if (__cir_exc_active) {
        return;
      }
    for_step1080: ;
      int** t1092 = __node1076;
      int c1093 = 1;
      int** ptr1094 = &(t1092)[c1093];
      __node1076 = ptr1094;
    }
    int** t1095 = __first1073._M_node;
    int** t1096 = __last1074._M_node;
    _Bool c1097 = ((t1095 != t1096)) ? 1 : 0;
    if (c1097) {
      int* t1098 = __first1073._M_cur;
      int* t1099 = __first1073._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1100 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1075 + 0);
      struct std__allocator_int_* r1101 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1100);
      void_std___Destroy_int___int_(t1098, t1099, r1101);
      if (__cir_exc_active) {
        return;
      }
      int* t1102 = __last1074._M_first;
      int* t1103 = __last1074._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1104 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1075 + 0);
      struct std__allocator_int_* r1105 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1104);
      void_std___Destroy_int___int_(t1102, t1103, r1105);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1106 = __first1073._M_cur;
      int* t1107 = __last1074._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1108 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1075 + 0);
      struct std__allocator_int_* r1109 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1108);
      void_std___Destroy_int___int_(t1106, t1107, r1109);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1110, struct std___Deque_iterator_int__int____int___* v1111) {
bb1112:
  struct std___Deque_iterator_int__int____int___* this1113;
  struct std___Deque_iterator_int__int____int___* __x1114;
  this1113 = v1110;
  __x1114 = v1111;
  struct std___Deque_iterator_int__int____int___* t1115 = this1113;
  struct std___Deque_iterator_int__int____int___* t1116 = __x1114;
  int* t1117 = t1116->_M_cur;
  t1115->_M_cur = t1117;
  struct std___Deque_iterator_int__int____int___* t1118 = __x1114;
  int* t1119 = t1118->_M_first;
  t1115->_M_first = t1119;
  struct std___Deque_iterator_int__int____int___* t1120 = __x1114;
  int* t1121 = t1120->_M_last;
  t1115->_M_last = t1121;
  struct std___Deque_iterator_int__int____int___* t1122 = __x1114;
  int** t1123 = t1122->_M_node;
  t1115->_M_node = t1123;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1124, struct std___Deque_iterator_int__int____int___ v1125, struct std___Deque_iterator_int__int____int___ v1126, struct std__allocator_int_* v1127) {
bb1128:
  struct std__deque_int__std__allocator_int__* this1129;
  struct std___Deque_iterator_int__int____int___ __first1130;
  struct std___Deque_iterator_int__int____int___ __last1131;
  struct std__allocator_int_* unnamed1132;
  this1129 = v1124;
  __first1130 = v1125;
  __last1131 = v1126;
  unnamed1132 = v1127;
  struct std__deque_int__std__allocator_int__* t1133 = this1129;
    _Bool c1134 = 0;
    if (c1134) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01135;
      struct std___Deque_iterator_int__int____int___ agg_tmp11136;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01135, &__first1130);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11136, &__last1131);
      struct std___Deque_iterator_int__int____int___ t1137 = agg_tmp01135;
      struct std___Deque_iterator_int__int____int___ t1138 = agg_tmp11136;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1133, t1137, t1138);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1139) {
bb1140:
  struct std__deque_int__std__allocator_int__* this1141;
  struct std___Deque_iterator_int__int____int___ __retval1142;
  this1141 = v1139;
  struct std__deque_int__std__allocator_int__* t1143 = this1141;
  struct std___Deque_base_int__std__allocator_int__* base1144 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1143 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1145 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1144->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1142, &base1145->_M_start);
  struct std___Deque_iterator_int__int____int___ t1146 = __retval1142;
  return t1146;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1147) {
bb1148:
  struct std__deque_int__std__allocator_int__* this1149;
  struct std___Deque_iterator_int__int____int___ __retval1150;
  this1149 = v1147;
  struct std__deque_int__std__allocator_int__* t1151 = this1149;
  struct std___Deque_base_int__std__allocator_int__* base1152 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1151 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1153 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1152->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1150, &base1153->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1154 = __retval1150;
  return t1154;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1155) {
bb1156:
  struct std___Deque_base_int__std__allocator_int__* this1157;
  struct std__allocator_int_* __retval1158;
  this1157 = v1155;
  struct std___Deque_base_int__std__allocator_int__* t1159 = this1157;
  struct std__allocator_int_* base1160 = (struct std__allocator_int_*)((char *)&(t1159->_M_impl) + 0);
  __retval1158 = base1160;
  struct std__allocator_int_* t1161 = __retval1158;
  return t1161;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1162, int* v1163, unsigned long v1164) {
bb1165:
  struct std____new_allocator_int_* this1166;
  int* __p1167;
  unsigned long __n1168;
  this1166 = v1162;
  __p1167 = v1163;
  __n1168 = v1164;
  struct std____new_allocator_int_* t1169 = this1166;
    unsigned long c1170 = 4;
    unsigned long c1171 = 16;
    _Bool c1172 = ((c1170 > c1171)) ? 1 : 0;
    if (c1172) {
      int* t1173 = __p1167;
      void* cast1174 = (void*)t1173;
      unsigned long t1175 = __n1168;
      unsigned long c1176 = 4;
      unsigned long b1177 = t1175 * c1176;
      unsigned long c1178 = 4;
      operator_delete_3(cast1174, b1177, c1178);
      return;
    }
  int* t1179 = __p1167;
  void* cast1180 = (void*)t1179;
  unsigned long t1181 = __n1168;
  unsigned long c1182 = 4;
  unsigned long b1183 = t1181 * c1182;
  operator_delete_2(cast1180, b1183);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1184, int* v1185, unsigned long v1186) {
bb1187:
  struct std__allocator_int_* this1188;
  int* __p1189;
  unsigned long __n1190;
  this1188 = v1184;
  __p1189 = v1185;
  __n1190 = v1186;
  struct std__allocator_int_* t1191 = this1188;
    _Bool r1192 = std____is_constant_evaluated();
    if (r1192) {
      int* t1193 = __p1189;
      void* cast1194 = (void*)t1193;
      operator_delete(cast1194);
      return;
    }
  struct std____new_allocator_int_* base1195 = (struct std____new_allocator_int_*)((char *)t1191 + 0);
  int* t1196 = __p1189;
  unsigned long t1197 = __n1190;
  std____new_allocator_int___deallocate(base1195, t1196, t1197);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1198, int* v1199, unsigned long v1200) {
bb1201:
  struct std__allocator_int_* __a1202;
  int* __p1203;
  unsigned long __n1204;
  __a1202 = v1198;
  __p1203 = v1199;
  __n1204 = v1200;
  struct std__allocator_int_* t1205 = __a1202;
  int* t1206 = __p1203;
  unsigned long t1207 = __n1204;
  std__allocator_int___deallocate(t1205, t1206, t1207);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1208, int* v1209) {
bb1210:
  struct std___Deque_base_int__std__allocator_int__* this1211;
  int* __p1212;
  this1211 = v1208;
  __p1212 = v1209;
  struct std___Deque_base_int__std__allocator_int__* t1213 = this1211;
  struct std__allocator_int_* base1214 = (struct std__allocator_int_*)((char *)&(t1213->_M_impl) + 0);
  int* t1215 = __p1212;
  unsigned long c1216 = 4;
  unsigned long r1217 = std____deque_buf_size(c1216);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1214, t1215, r1217);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1218, int** v1219, int** v1220) {
bb1221:
  struct std___Deque_base_int__std__allocator_int__* this1222;
  int** __nstart1223;
  int** __nfinish1224;
  this1222 = v1218;
  __nstart1223 = v1219;
  __nfinish1224 = v1220;
  struct std___Deque_base_int__std__allocator_int__* t1225 = this1222;
    int** __n1226;
    int** t1227 = __nstart1223;
    __n1226 = t1227;
    while (1) {
      int** t1229 = __n1226;
      int** t1230 = __nfinish1224;
      _Bool c1231 = ((t1229 < t1230)) ? 1 : 0;
      if (!c1231) break;
      int** t1232 = __n1226;
      int* t1233 = *t1232;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1225, t1233);
    for_step1228: ;
      int** t1234 = __n1226;
      int c1235 = 1;
      int** ptr1236 = &(t1234)[c1235];
      __n1226 = ptr1236;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1237) {
bb1238:
  struct std___Deque_base_int__std__allocator_int__* this1239;
  struct std__allocator_int_* __retval1240;
  this1239 = v1237;
  struct std___Deque_base_int__std__allocator_int__* t1241 = this1239;
  struct std__allocator_int_* base1242 = (struct std__allocator_int_*)((char *)&(t1241->_M_impl) + 0);
  __retval1240 = base1242;
  struct std__allocator_int_* t1243 = __retval1240;
  return t1243;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1244, struct std__allocator_int_* v1245) {
bb1246:
  struct std__allocator_int___* this1247;
  struct std__allocator_int_* unnamed1248;
  this1247 = v1244;
  unnamed1248 = v1245;
  struct std__allocator_int___* t1249 = this1247;
  struct std____new_allocator_int___* base1250 = (struct std____new_allocator_int___*)((char *)t1249 + 0);
  std____new_allocator_int______new_allocator(base1250);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1251) {
bb1252:
  struct std___Deque_base_int__std__allocator_int__* this1253;
  struct std__allocator_int___ __retval1254;
  this1253 = v1251;
  struct std___Deque_base_int__std__allocator_int__* t1255 = this1253;
  struct std__allocator_int_* r1256 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1255);
  std__allocator_int____allocator_int_(&__retval1254, r1256);
  struct std__allocator_int___ t1257 = __retval1254;
  return t1257;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1258, int** v1259, unsigned long v1260) {
bb1261:
  struct std____new_allocator_int___* this1262;
  int** __p1263;
  unsigned long __n1264;
  this1262 = v1258;
  __p1263 = v1259;
  __n1264 = v1260;
  struct std____new_allocator_int___* t1265 = this1262;
    unsigned long c1266 = 8;
    unsigned long c1267 = 16;
    _Bool c1268 = ((c1266 > c1267)) ? 1 : 0;
    if (c1268) {
      int** t1269 = __p1263;
      void* cast1270 = (void*)t1269;
      unsigned long t1271 = __n1264;
      unsigned long c1272 = 8;
      unsigned long b1273 = t1271 * c1272;
      unsigned long c1274 = 8;
      operator_delete_3(cast1270, b1273, c1274);
      return;
    }
  int** t1275 = __p1263;
  void* cast1276 = (void*)t1275;
  unsigned long t1277 = __n1264;
  unsigned long c1278 = 8;
  unsigned long b1279 = t1277 * c1278;
  operator_delete_2(cast1276, b1279);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1280, int** v1281, unsigned long v1282) {
bb1283:
  struct std__allocator_int___* this1284;
  int** __p1285;
  unsigned long __n1286;
  this1284 = v1280;
  __p1285 = v1281;
  __n1286 = v1282;
  struct std__allocator_int___* t1287 = this1284;
    _Bool r1288 = std____is_constant_evaluated();
    if (r1288) {
      int** t1289 = __p1285;
      void* cast1290 = (void*)t1289;
      operator_delete(cast1290);
      return;
    }
  struct std____new_allocator_int___* base1291 = (struct std____new_allocator_int___*)((char *)t1287 + 0);
  int** t1292 = __p1285;
  unsigned long t1293 = __n1286;
  std____new_allocator_int____deallocate(base1291, t1292, t1293);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1294, int** v1295, unsigned long v1296) {
bb1297:
  struct std__allocator_int___* __a1298;
  int** __p1299;
  unsigned long __n1300;
  __a1298 = v1294;
  __p1299 = v1295;
  __n1300 = v1296;
  struct std__allocator_int___* t1301 = __a1298;
  int** t1302 = __p1299;
  unsigned long t1303 = __n1300;
  std__allocator_int____deallocate(t1301, t1302, t1303);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1304, int** v1305, unsigned long v1306) {
bb1307:
  struct std___Deque_base_int__std__allocator_int__* this1308;
  int** __p1309;
  unsigned long __n1310;
  struct std__allocator_int___ __map_alloc1311;
  this1308 = v1304;
  __p1309 = v1305;
  __n1310 = v1306;
  struct std___Deque_base_int__std__allocator_int__* t1312 = this1308;
  struct std__allocator_int___ r1313 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1312);
  __map_alloc1311 = r1313;
  int** t1314 = __p1309;
  unsigned long t1315 = __n1310;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1311, t1314, t1315);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1316) {
bb1317:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1318;
  this1318 = v1316;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1319 = this1318;
  {
    struct std__allocator_int_* base1320 = (struct std__allocator_int_*)((char *)t1319 + 0);
    std__allocator_int____allocator(base1320);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1321) {
bb1322:
  struct std___Deque_base_int__std__allocator_int__* this1323;
  this1323 = v1321;
  struct std___Deque_base_int__std__allocator_int__* t1324 = this1323;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1325 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1324->_M_impl) + 0);
      int** t1326 = base1325->_M_map;
      _Bool cast1327 = (_Bool)t1326;
      if (cast1327) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1328 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1324->_M_impl) + 0);
        int** t1329 = base1328->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1330 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1324->_M_impl) + 0);
        int** t1331 = base1330->_M_finish._M_node;
        int c1332 = 1;
        int** ptr1333 = &(t1331)[c1332];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1324, t1329, ptr1333);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1334 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1324->_M_impl) + 0);
        int** t1335 = base1334->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1336 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1324->_M_impl) + 0);
        unsigned long t1337 = base1336->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1324, t1335, t1337);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1324->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1338) {
bb1339:
  struct std____new_allocator_int___* this1340;
  this1340 = v1338;
  struct std____new_allocator_int___* t1341 = this1340;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1342) {
bb1343:
  struct std__allocator_int_* this1344;
  this1344 = v1342;
  struct std__allocator_int_* t1345 = this1344;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1346) {
bb1347:
  struct std__deque_int__std__allocator_int__* this1348;
  this1348 = v1346;
  struct std__deque_int__std__allocator_int__* t1349 = this1348;
  struct std___Deque_base_int__std__allocator_int__* base1350 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1349 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base1350);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1351) {
bb1352:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1353;
  this1353 = v1351;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1354 = this1353;
  struct std__allocator_int_* base1355 = (struct std__allocator_int_*)((char *)t1354 + 0);
  std__allocator_int___allocator(base1355);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1356 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1354 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1356);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1357, unsigned long* v1358) {
bb1359:
  unsigned long* __a1360;
  unsigned long* __b1361;
  unsigned long* __retval1362;
  __a1360 = v1357;
  __b1361 = v1358;
    unsigned long* t1363 = __a1360;
    unsigned long t1364 = *t1363;
    unsigned long* t1365 = __b1361;
    unsigned long t1366 = *t1365;
    _Bool c1367 = ((t1364 < t1366)) ? 1 : 0;
    if (c1367) {
      unsigned long* t1368 = __b1361;
      __retval1362 = t1368;
      unsigned long* t1369 = __retval1362;
      return t1369;
    }
  unsigned long* t1370 = __a1360;
  __retval1362 = t1370;
  unsigned long* t1371 = __retval1362;
  return t1371;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1372) {
bb1373:
  struct std____new_allocator_int___* this1374;
  unsigned long __retval1375;
  this1374 = v1372;
  struct std____new_allocator_int___* t1376 = this1374;
  unsigned long c1377 = 9223372036854775807;
  unsigned long c1378 = 8;
  unsigned long b1379 = c1377 / c1378;
  __retval1375 = b1379;
  unsigned long t1380 = __retval1375;
  return t1380;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1381, unsigned long v1382, void* v1383) {
bb1384:
  struct std____new_allocator_int___* this1385;
  unsigned long __n1386;
  void* unnamed1387;
  int** __retval1388;
  this1385 = v1381;
  __n1386 = v1382;
  unnamed1387 = v1383;
  struct std____new_allocator_int___* t1389 = this1385;
    unsigned long t1390 = __n1386;
    unsigned long r1391 = std____new_allocator_int_____M_max_size___const(t1389);
    _Bool c1392 = ((t1390 > r1391)) ? 1 : 0;
    if (c1392) {
        unsigned long t1393 = __n1386;
        unsigned long c1394 = -1;
        unsigned long c1395 = 8;
        unsigned long b1396 = c1394 / c1395;
        _Bool c1397 = ((t1393 > b1396)) ? 1 : 0;
        if (c1397) {
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
    unsigned long c1398 = 8;
    unsigned long c1399 = 16;
    _Bool c1400 = ((c1398 > c1399)) ? 1 : 0;
    if (c1400) {
      unsigned long __al1401;
      unsigned long c1402 = 8;
      __al1401 = c1402;
      unsigned long t1403 = __n1386;
      unsigned long c1404 = 8;
      unsigned long b1405 = t1403 * c1404;
      unsigned long t1406 = __al1401;
      void* r1407 = operator_new_2(b1405, t1406);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1408 = (int**)r1407;
      __retval1388 = cast1408;
      int** t1409 = __retval1388;
      return t1409;
    }
  unsigned long t1410 = __n1386;
  unsigned long c1411 = 8;
  unsigned long b1412 = t1410 * c1411;
  void* r1413 = operator_new(b1412);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1414 = (int**)r1413;
  __retval1388 = cast1414;
  int** t1415 = __retval1388;
  return t1415;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1416, unsigned long v1417) {
bb1418:
  struct std__allocator_int___* this1419;
  unsigned long __n1420;
  int** __retval1421;
  this1419 = v1416;
  __n1420 = v1417;
  struct std__allocator_int___* t1422 = this1419;
    _Bool r1423 = std____is_constant_evaluated();
    if (r1423) {
        unsigned long t1424 = __n1420;
        unsigned long c1425 = 8;
        unsigned long ovr1426;
        _Bool ovf1427 = __builtin_mul_overflow(t1424, c1425, &ovr1426);
        __n1420 = ovr1426;
        if (ovf1427) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1428 = __n1420;
      void* r1429 = operator_new(t1428);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1430 = (int**)r1429;
      __retval1421 = cast1430;
      int** t1431 = __retval1421;
      return t1431;
    }
  struct std____new_allocator_int___* base1432 = (struct std____new_allocator_int___*)((char *)t1422 + 0);
  unsigned long t1433 = __n1420;
  void* c1434 = ((void*)0);
  int** r1435 = std____new_allocator_int____allocate(base1432, t1433, c1434);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1421 = r1435;
  int** t1436 = __retval1421;
  return t1436;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1437, unsigned long v1438) {
bb1439:
  struct std__allocator_int___* __a1440;
  unsigned long __n1441;
  int** __retval1442;
  __a1440 = v1437;
  __n1441 = v1438;
  struct std__allocator_int___* t1443 = __a1440;
  unsigned long t1444 = __n1441;
  int** r1445 = std__allocator_int____allocate(t1443, t1444);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1442 = r1445;
  int** t1446 = __retval1442;
  return t1446;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1447, unsigned long v1448) {
bb1449:
  struct std___Deque_base_int__std__allocator_int__* this1450;
  unsigned long __n1451;
  int** __retval1452;
  struct std__allocator_int___ __map_alloc1453;
  this1450 = v1447;
  __n1451 = v1448;
  struct std___Deque_base_int__std__allocator_int__* t1454 = this1450;
  struct std__allocator_int___ r1455 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1454);
  __map_alloc1453 = r1455;
  unsigned long t1456 = __n1451;
  int** r1457 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1453, t1456);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1452 = r1457;
  int** t1458 = __retval1452;
  return t1458;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1459) {
bb1460:
  struct std____new_allocator_int_* this1461;
  unsigned long __retval1462;
  this1461 = v1459;
  struct std____new_allocator_int_* t1463 = this1461;
  unsigned long c1464 = 9223372036854775807;
  unsigned long c1465 = 4;
  unsigned long b1466 = c1464 / c1465;
  __retval1462 = b1466;
  unsigned long t1467 = __retval1462;
  return t1467;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1468, unsigned long v1469, void* v1470) {
bb1471:
  struct std____new_allocator_int_* this1472;
  unsigned long __n1473;
  void* unnamed1474;
  int* __retval1475;
  this1472 = v1468;
  __n1473 = v1469;
  unnamed1474 = v1470;
  struct std____new_allocator_int_* t1476 = this1472;
    unsigned long t1477 = __n1473;
    unsigned long r1478 = std____new_allocator_int____M_max_size___const(t1476);
    _Bool c1479 = ((t1477 > r1478)) ? 1 : 0;
    if (c1479) {
        unsigned long t1480 = __n1473;
        unsigned long c1481 = -1;
        unsigned long c1482 = 4;
        unsigned long b1483 = c1481 / c1482;
        _Bool c1484 = ((t1480 > b1483)) ? 1 : 0;
        if (c1484) {
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
    unsigned long c1485 = 4;
    unsigned long c1486 = 16;
    _Bool c1487 = ((c1485 > c1486)) ? 1 : 0;
    if (c1487) {
      unsigned long __al1488;
      unsigned long c1489 = 4;
      __al1488 = c1489;
      unsigned long t1490 = __n1473;
      unsigned long c1491 = 4;
      unsigned long b1492 = t1490 * c1491;
      unsigned long t1493 = __al1488;
      void* r1494 = operator_new_2(b1492, t1493);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1495 = (int*)r1494;
      __retval1475 = cast1495;
      int* t1496 = __retval1475;
      return t1496;
    }
  unsigned long t1497 = __n1473;
  unsigned long c1498 = 4;
  unsigned long b1499 = t1497 * c1498;
  void* r1500 = operator_new(b1499);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1501 = (int*)r1500;
  __retval1475 = cast1501;
  int* t1502 = __retval1475;
  return t1502;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1503, unsigned long v1504) {
bb1505:
  struct std__allocator_int_* this1506;
  unsigned long __n1507;
  int* __retval1508;
  this1506 = v1503;
  __n1507 = v1504;
  struct std__allocator_int_* t1509 = this1506;
    _Bool r1510 = std____is_constant_evaluated();
    if (r1510) {
        unsigned long t1511 = __n1507;
        unsigned long c1512 = 4;
        unsigned long ovr1513;
        _Bool ovf1514 = __builtin_mul_overflow(t1511, c1512, &ovr1513);
        __n1507 = ovr1513;
        if (ovf1514) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1515 = __n1507;
      void* r1516 = operator_new(t1515);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1517 = (int*)r1516;
      __retval1508 = cast1517;
      int* t1518 = __retval1508;
      return t1518;
    }
  struct std____new_allocator_int_* base1519 = (struct std____new_allocator_int_*)((char *)t1509 + 0);
  unsigned long t1520 = __n1507;
  void* c1521 = ((void*)0);
  int* r1522 = std____new_allocator_int___allocate(base1519, t1520, c1521);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1508 = r1522;
  int* t1523 = __retval1508;
  return t1523;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1524, unsigned long v1525) {
bb1526:
  struct std__allocator_int_* __a1527;
  unsigned long __n1528;
  int* __retval1529;
  __a1527 = v1524;
  __n1528 = v1525;
  struct std__allocator_int_* t1530 = __a1527;
  unsigned long t1531 = __n1528;
  int* r1532 = std__allocator_int___allocate(t1530, t1531);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1529 = r1532;
  int* t1533 = __retval1529;
  return t1533;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1534) {
bb1535:
  struct std___Deque_base_int__std__allocator_int__* this1536;
  int* __retval1537;
  this1536 = v1534;
  struct std___Deque_base_int__std__allocator_int__* t1538 = this1536;
  struct std__allocator_int_* base1539 = (struct std__allocator_int_*)((char *)&(t1538->_M_impl) + 0);
  unsigned long c1540 = 4;
  unsigned long r1541 = std____deque_buf_size(c1540);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1542 = std__allocator_traits_std__allocator_int_____allocate(base1539, r1541);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1537 = r1542;
  int* t1543 = __retval1537;
  return t1543;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1544, int** v1545, int** v1546) {
bb1547:
  struct std___Deque_base_int__std__allocator_int__* this1548;
  int** __nstart1549;
  int** __nfinish1550;
  int** __cur1551;
  this1548 = v1544;
  __nstart1549 = v1545;
  __nfinish1550 = v1546;
  struct std___Deque_base_int__std__allocator_int__* t1552 = this1548;
        int** t1554 = __nstart1549;
        __cur1551 = t1554;
        while (1) {
          int** t1556 = __cur1551;
          int** t1557 = __nfinish1550;
          _Bool c1558 = ((t1556 < t1557)) ? 1 : 0;
          if (!c1558) break;
          int* r1559 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1552);
          if (__cir_exc_active) {
            goto cir_try_dispatch1553;
          }
          int** t1560 = __cur1551;
          *t1560 = r1559;
        for_step1555: ;
          int** t1561 = __cur1551;
          int c1562 = 1;
          int** ptr1563 = &(t1561)[c1562];
          __cur1551 = ptr1563;
        }
    cir_try_dispatch1553: ;
    if (__cir_exc_active) {
    {
      int ca_tok1564 = 0;
      void* ca_exn1565 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1566 = __nstart1549;
        int** t1567 = __cur1551;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1552, t1566, t1567);
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
bb1568:
  unsigned long __retval1569;
  unsigned long c1570 = 4;
  unsigned long r1571 = std____deque_buf_size(c1570);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1569 = r1571;
  unsigned long t1572 = __retval1569;
  return t1572;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1573, int** v1574) {
bb1575:
  struct std___Deque_iterator_int__int____int___* this1576;
  int** __new_node1577;
  this1576 = v1573;
  __new_node1577 = v1574;
  struct std___Deque_iterator_int__int____int___* t1578 = this1576;
  int** t1579 = __new_node1577;
  t1578->_M_node = t1579;
  int** t1580 = __new_node1577;
  int* t1581 = *t1580;
  t1578->_M_first = t1581;
  int* t1582 = t1578->_M_first;
  unsigned long r1583 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1584 = (long)r1583;
  int* ptr1585 = &(t1582)[cast1584];
  t1578->_M_last = ptr1585;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1586, unsigned long v1587) {
bb1588:
  struct std___Deque_base_int__std__allocator_int__* this1589;
  unsigned long __num_elements1590;
  unsigned long __num_nodes1591;
  unsigned long ref_tmp01592;
  unsigned long ref_tmp11593;
  int** __nstart1594;
  int** __nfinish1595;
  this1589 = v1586;
  __num_elements1590 = v1587;
  struct std___Deque_base_int__std__allocator_int__* t1596 = this1589;
  unsigned long t1597 = __num_elements1590;
  unsigned long c1598 = 4;
  unsigned long r1599 = std____deque_buf_size(c1598);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1600 = t1597 / r1599;
  unsigned long c1601 = 1;
  unsigned long b1602 = b1600 + c1601;
  __num_nodes1591 = b1602;
  unsigned long c1603 = 8;
  ref_tmp01592 = c1603;
  unsigned long t1604 = __num_nodes1591;
  unsigned long c1605 = 2;
  unsigned long b1606 = t1604 + c1605;
  ref_tmp11593 = b1606;
  unsigned long* r1607 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01592, &ref_tmp11593);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1608 = *r1607;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1609 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  base1609->_M_map_size = t1608;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1610 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  unsigned long t1611 = base1610->_M_map_size;
  int** r1612 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1596, t1611);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1613 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  base1613->_M_map = r1612;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1614 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  int** t1615 = base1614->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1616 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  unsigned long t1617 = base1616->_M_map_size;
  unsigned long t1618 = __num_nodes1591;
  unsigned long b1619 = t1617 - t1618;
  unsigned long c1620 = 2;
  unsigned long b1621 = b1619 / c1620;
  int** ptr1622 = &(t1615)[b1621];
  __nstart1594 = ptr1622;
  int** t1623 = __nstart1594;
  unsigned long t1624 = __num_nodes1591;
  int** ptr1625 = &(t1623)[t1624];
  __nfinish1595 = ptr1625;
      int** t1627 = __nstart1594;
      int** t1628 = __nfinish1595;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1596, t1627, t1628);
      if (__cir_exc_active) {
        goto cir_try_dispatch1626;
      }
    cir_try_dispatch1626: ;
    if (__cir_exc_active) {
    {
      int ca_tok1629 = 0;
      void* ca_exn1630 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1631 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
        int** t1632 = base1631->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1633 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
        unsigned long t1634 = base1633->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1596, t1632, t1634);
        int** c1635 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1636 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
        base1636->_M_map = c1635;
        unsigned long c1637 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1638 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
        base1638->_M_map_size = c1637;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1639 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  int** t1640 = __nstart1594;
  std___Deque_iterator_int__int___int_____M_set_node(&base1639->_M_start, t1640);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1641 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  int** t1642 = __nfinish1595;
  int c1643 = -1;
  int** ptr1644 = &(t1642)[c1643];
  std___Deque_iterator_int__int___int_____M_set_node(&base1641->_M_finish, ptr1644);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1645 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  int* t1646 = base1645->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1647 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  base1647->_M_start._M_cur = t1646;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1648 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  int* t1649 = base1648->_M_finish._M_first;
  unsigned long t1650 = __num_elements1590;
  unsigned long c1651 = 4;
  unsigned long r1652 = std____deque_buf_size(c1651);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1653 = t1650 % r1652;
  int* ptr1654 = &(t1649)[b1653];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1655 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1596->_M_impl) + 0);
  base1655->_M_finish._M_cur = ptr1654;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1656) {
bb1657:
  struct std___Deque_base_int__std__allocator_int__* this1658;
  this1658 = v1656;
  struct std___Deque_base_int__std__allocator_int__* t1659 = this1658;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1659->_M_impl);
    unsigned long c1660 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1659, c1660);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1659->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1661) {
bb1662:
  struct std____new_allocator_int_* this1663;
  this1663 = v1661;
  struct std____new_allocator_int_* t1664 = this1663;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1665) {
bb1666:
  struct std__allocator_int_* this1667;
  this1667 = v1665;
  struct std__allocator_int_* t1668 = this1667;
  struct std____new_allocator_int_* base1669 = (struct std____new_allocator_int_*)((char *)t1668 + 0);
  std____new_allocator_int_____new_allocator(base1669);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1670) {
bb1671:
  struct std___Deque_iterator_int__int____int___* this1672;
  this1672 = v1670;
  struct std___Deque_iterator_int__int____int___* t1673 = this1672;
  int* c1674 = ((void*)0);
  t1673->_M_cur = c1674;
  int* c1675 = ((void*)0);
  t1673->_M_first = c1675;
  int* c1676 = ((void*)0);
  t1673->_M_last = c1676;
  int** c1677 = ((void*)0);
  t1673->_M_node = c1677;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1678) {
bb1679:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1680;
  this1680 = v1678;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1681 = this1680;
  int** c1682 = ((void*)0);
  t1681->_M_map = c1682;
  unsigned long c1683 = 0;
  t1681->_M_map_size = c1683;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1681->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1681->_M_finish);
  return;
}

