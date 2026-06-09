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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[8] = "total: ";
char _str_1[8] = "sum==55";
char _str_2[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch21_29/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv[76] = "reference std::queue<int>::front() [_Tp = int, _Sequence = std::deque<int>]";
char _str_5[15] = "!this->empty()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
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
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void std__deque_int__std__allocator_int______M_pop_front_aux(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____pop_front(struct std__deque_int__std__allocator_int__* p0);
void std__queue_int__std__deque_int__std__allocator_int_______pop(struct std__queue_int__std__deque_int__std__allocator_int___* p0);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
      char* cast584 = (char*)&(_str_3);
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
            char* cast699 = (char*)&(_str_6);
            int c700 = 1513;
            char* cast701 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv);
            char* cast702 = (char*)&(_str_5);
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
            char* cast713 = (char*)&(_str_4);
            int c714 = 262;
            char* cast715 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv);
            char* cast716 = (char*)&(_str_5);
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
            char* cast756 = (char*)&(_str_6);
            int c757 = 1643;
            char* cast758 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv);
            char* cast759 = (char*)&(_str_5);
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
            char* cast785 = (char*)&(_str_4);
            int c786 = 359;
            char* cast787 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE3popEv);
            char* cast788 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast785, c786, cast787, cast788);
          }
      _Bool c789 = 0;
      if (!c789) break;
    } while (1);
  std__deque_int__std__allocator_int_____pop_front(&t783->c);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v790, int v791) {
bb792:
  int __a793;
  int __b794;
  int __retval795;
  __a793 = v790;
  __b794 = v791;
  int t796 = __a793;
  int t797 = __b794;
  int b798 = t796 | t797;
  __retval795 = b798;
  int t799 = __retval795;
  return t799;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v800) {
bb801:
  struct std__basic_ios_char__std__char_traits_char__* this802;
  int __retval803;
  this802 = v800;
  struct std__basic_ios_char__std__char_traits_char__* t804 = this802;
  struct std__ios_base* base805 = (struct std__ios_base*)((char *)t804 + 0);
  int t806 = base805->_M_streambuf_state;
  __retval803 = t806;
  int t807 = __retval803;
  return t807;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v808, int v809) {
bb810:
  struct std__basic_ios_char__std__char_traits_char__* this811;
  int __state812;
  this811 = v808;
  __state812 = v809;
  struct std__basic_ios_char__std__char_traits_char__* t813 = this811;
  int r814 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t813);
  if (__cir_exc_active) {
    return;
  }
  int t815 = __state812;
  int r816 = std__operator__2(r814, t815);
  std__basic_ios_char__std__char_traits_char_____clear(t813, r816);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v817, char* v818) {
bb819:
  char* __c1820;
  char* __c2821;
  _Bool __retval822;
  __c1820 = v817;
  __c2821 = v818;
  char* t823 = __c1820;
  char t824 = *t823;
  int cast825 = (int)t824;
  char* t826 = __c2821;
  char t827 = *t826;
  int cast828 = (int)t827;
  _Bool c829 = ((cast825 == cast828)) ? 1 : 0;
  __retval822 = c829;
  _Bool t830 = __retval822;
  return t830;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v831) {
bb832:
  char* __p833;
  unsigned long __retval834;
  unsigned long __i835;
  __p833 = v831;
  unsigned long c836 = 0;
  __i835 = c836;
    char ref_tmp0837;
    while (1) {
      unsigned long t838 = __i835;
      char* t839 = __p833;
      char* ptr840 = &(t839)[t838];
      char c841 = 0;
      ref_tmp0837 = c841;
      _Bool r842 = __gnu_cxx__char_traits_char___eq(ptr840, &ref_tmp0837);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u843 = !r842;
      if (!u843) break;
      unsigned long t844 = __i835;
      unsigned long u845 = t844 + 1;
      __i835 = u845;
    }
  unsigned long t846 = __i835;
  __retval834 = t846;
  unsigned long t847 = __retval834;
  return t847;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v848) {
bb849:
  char* __s850;
  unsigned long __retval851;
  __s850 = v848;
    _Bool r852 = std____is_constant_evaluated();
    if (r852) {
      char* t853 = __s850;
      unsigned long r854 = __gnu_cxx__char_traits_char___length(t853);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval851 = r854;
      unsigned long t855 = __retval851;
      return t855;
    }
  char* t856 = __s850;
  unsigned long r857 = strlen(t856);
  __retval851 = r857;
  unsigned long t858 = __retval851;
  return t858;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v859, char* v860) {
bb861:
  struct std__basic_ostream_char__std__char_traits_char__* __out862;
  char* __s863;
  struct std__basic_ostream_char__std__char_traits_char__* __retval864;
  __out862 = v859;
  __s863 = v860;
    char* t865 = __s863;
    _Bool cast866 = (_Bool)t865;
    _Bool u867 = !cast866;
    if (u867) {
      struct std__basic_ostream_char__std__char_traits_char__* t868 = __out862;
      void** v869 = (void**)t868;
      void* v870 = *((void**)v869);
      unsigned char* cast871 = (unsigned char*)v870;
      long c872 = -24;
      unsigned char* ptr873 = &(cast871)[c872];
      long* cast874 = (long*)ptr873;
      long t875 = *cast874;
      unsigned char* cast876 = (unsigned char*)t868;
      unsigned char* ptr877 = &(cast876)[t875];
      struct std__basic_ostream_char__std__char_traits_char__* cast878 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr877;
      struct std__basic_ios_char__std__char_traits_char__* cast879 = (struct std__basic_ios_char__std__char_traits_char__*)cast878;
      int t880 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast879, t880);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t881 = __out862;
      char* t882 = __s863;
      char* t883 = __s863;
      unsigned long r884 = std__char_traits_char___length(t883);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast885 = (long)r884;
      struct std__basic_ostream_char__std__char_traits_char__* r886 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t881, t882, cast885);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t887 = __out862;
  __retval864 = t887;
  struct std__basic_ostream_char__std__char_traits_char__* t888 = __retval864;
  return t888;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v889, void* v890) {
bb891:
  struct std__basic_ostream_char__std__char_traits_char__* this892;
  void* __pf893;
  struct std__basic_ostream_char__std__char_traits_char__* __retval894;
  this892 = v889;
  __pf893 = v890;
  struct std__basic_ostream_char__std__char_traits_char__* t895 = this892;
  void* t896 = __pf893;
  struct std__basic_ostream_char__std__char_traits_char__* r897 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t896)(t895);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval894 = r897;
  struct std__basic_ostream_char__std__char_traits_char__* t898 = __retval894;
  return t898;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v899) {
bb900:
  struct std__basic_ostream_char__std__char_traits_char__* __os901;
  struct std__basic_ostream_char__std__char_traits_char__* __retval902;
  __os901 = v899;
  struct std__basic_ostream_char__std__char_traits_char__* t903 = __os901;
  struct std__basic_ostream_char__std__char_traits_char__* r904 = std__ostream__flush(t903);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval902 = r904;
  struct std__basic_ostream_char__std__char_traits_char__* t905 = __retval902;
  return t905;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v906) {
bb907:
  struct std__ctype_char_* __f908;
  struct std__ctype_char_* __retval909;
  __f908 = v906;
    struct std__ctype_char_* t910 = __f908;
    _Bool cast911 = (_Bool)t910;
    _Bool u912 = !cast911;
    if (u912) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t913 = __f908;
  __retval909 = t913;
  struct std__ctype_char_* t914 = __retval909;
  return t914;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v915, char v916) {
bb917:
  struct std__ctype_char_* this918;
  char __c919;
  char __retval920;
  this918 = v915;
  __c919 = v916;
  struct std__ctype_char_* t921 = this918;
    char t922 = t921->_M_widen_ok;
    _Bool cast923 = (_Bool)t922;
    if (cast923) {
      char t924 = __c919;
      unsigned char cast925 = (unsigned char)t924;
      unsigned long cast926 = (unsigned long)cast925;
      char t927 = t921->_M_widen[cast926];
      __retval920 = t927;
      char t928 = __retval920;
      return t928;
    }
  std__ctype_char____M_widen_init___const(t921);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t929 = __c919;
  void** v930 = (void**)t921;
  void* v931 = *((void**)v930);
  char vcall934 = (char)__VERIFIER_virtual_call_char_char(t921, 6, t929);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval920 = vcall934;
  char t935 = __retval920;
  return t935;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v936, char v937) {
bb938:
  struct std__basic_ios_char__std__char_traits_char__* this939;
  char __c940;
  char __retval941;
  this939 = v936;
  __c940 = v937;
  struct std__basic_ios_char__std__char_traits_char__* t942 = this939;
  struct std__ctype_char_* t943 = t942->_M_ctype;
  struct std__ctype_char_* r944 = std__ctype_char__const__std____check_facet_std__ctype_char___(t943);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t945 = __c940;
  char r946 = std__ctype_char___widen_char__const(r944, t945);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval941 = r946;
  char t947 = __retval941;
  return t947;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v948) {
bb949:
  struct std__basic_ostream_char__std__char_traits_char__* __os950;
  struct std__basic_ostream_char__std__char_traits_char__* __retval951;
  __os950 = v948;
  struct std__basic_ostream_char__std__char_traits_char__* t952 = __os950;
  struct std__basic_ostream_char__std__char_traits_char__* t953 = __os950;
  void** v954 = (void**)t953;
  void* v955 = *((void**)v954);
  unsigned char* cast956 = (unsigned char*)v955;
  long c957 = -24;
  unsigned char* ptr958 = &(cast956)[c957];
  long* cast959 = (long*)ptr958;
  long t960 = *cast959;
  unsigned char* cast961 = (unsigned char*)t953;
  unsigned char* ptr962 = &(cast961)[t960];
  struct std__basic_ostream_char__std__char_traits_char__* cast963 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr962;
  struct std__basic_ios_char__std__char_traits_char__* cast964 = (struct std__basic_ios_char__std__char_traits_char__*)cast963;
  char c965 = 10;
  char r966 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast964, c965);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r967 = std__ostream__put(t952, r966);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r968 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r967);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval951 = r968;
  struct std__basic_ostream_char__std__char_traits_char__* t969 = __retval951;
  return t969;
}

// function: _ZNSt5queueIiSt5dequeIiSaIiEEED2Ev
void std__queue_int__std__deque_int__std__allocator_int________queue(struct std__queue_int__std__deque_int__std__allocator_int___* v970) {
bb971:
  struct std__queue_int__std__deque_int__std__allocator_int___* this972;
  this972 = v970;
  struct std__queue_int__std__deque_int__std__allocator_int___* t973 = this972;
  {
    std__deque_int__std__allocator_int______deque(&t973->c);
  }
  return;
}

// function: main
int main() {
bb974:
  int __retval975;
  struct std__queue_int__std__deque_int__std__allocator_int___ myqueue976;
  int sum977;
  int c978 = 0;
  __retval975 = c978;
  std__queue_int__std__deque_int__std__allocator_int_______queue_std__deque_int__std__allocator_int_____void_(&myqueue976);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c979 = 0;
    sum977 = c979;
      int i980;
      int c981 = 1;
      i980 = c981;
      while (1) {
        int t983 = i980;
        int c984 = 10;
        _Bool c985 = ((t983 <= c984)) ? 1 : 0;
        if (!c985) break;
        std__queue_int__std__deque_int__std__allocator_int_______push(&myqueue976, &i980);
        if (__cir_exc_active) {
          {
            std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue976);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step982: ;
        int t986 = i980;
        int u987 = t986 + 1;
        i980 = u987;
      }
      while (1) {
        _Bool r988 = std__queue_int__std__deque_int__std__allocator_int_______empty___const(&myqueue976);
        if (__cir_exc_active) {
          {
            std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue976);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        _Bool u989 = !r988;
        if (!u989) break;
          int* r990 = std__queue_int__std__deque_int__std__allocator_int_______front(&myqueue976);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue976);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t991 = *r990;
          int t992 = sum977;
          int b993 = t992 + t991;
          sum977 = b993;
          std__queue_int__std__deque_int__std__allocator_int_______pop(&myqueue976);
          if (__cir_exc_active) {
            {
              std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue976);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    char* cast994 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r995 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast994);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue976);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t996 = sum977;
    struct std__basic_ostream_char__std__char_traits_char__* r997 = std__ostream__operator__(r995, t996);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue976);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r998 = std__ostream__operator___std__ostream_____(r997, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue976);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t999 = sum977;
    int c1000 = 55;
    _Bool c1001 = ((t999 == c1000)) ? 1 : 0;
    if (c1001) {
    } else {
      char* cast1002 = (char*)&(_str_1);
      char* c1003 = _str_2;
      unsigned int c1004 = 29;
      char* cast1005 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1002, c1003, c1004, cast1005);
    }
    int c1006 = 0;
    __retval975 = c1006;
    int t1007 = __retval975;
    int ret_val1008 = t1007;
    {
      std__queue_int__std__deque_int__std__allocator_int________queue(&myqueue976);
    }
    return ret_val1008;
  int t1009 = __retval975;
  return t1009;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v1010) {
bb1011:
  struct std__deque_int__std__allocator_int__* this1012;
  struct std___Deque_iterator_int__int____int___ agg_tmp01013;
  struct std___Deque_iterator_int__int____int___ agg_tmp11014;
  this1012 = v1010;
  struct std__deque_int__std__allocator_int__* t1015 = this1012;
    struct std___Deque_iterator_int__int____int___ r1016 = std__deque_int__std__allocator_int_____begin(t1015);
    agg_tmp01013 = r1016;
    struct std___Deque_iterator_int__int____int___ r1017 = std__deque_int__std__allocator_int_____end(t1015);
    agg_tmp11014 = r1017;
    struct std___Deque_base_int__std__allocator_int__* base1018 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1015 + 0);
    struct std__allocator_int_* r1019 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1018);
    struct std___Deque_iterator_int__int____int___ t1020 = agg_tmp01013;
    struct std___Deque_iterator_int__int____int___ t1021 = agg_tmp11014;
    std__deque_int__std__allocator_int______M_destroy_data(t1015, t1020, t1021, r1019);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1022 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1015 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1022);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1023 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1015 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1023);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1024:
  _Bool __retval1025;
    _Bool c1026 = 0;
    __retval1025 = c1026;
    _Bool t1027 = __retval1025;
    return t1027;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1028) {
bb1029:
  int* __location1030;
  __location1030 = v1028;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1031, int* v1032) {
bb1033:
  int* __first1034;
  int* __last1035;
  __first1034 = v1031;
  __last1035 = v1032;
      _Bool r1036 = std____is_constant_evaluated();
      if (r1036) {
          while (1) {
            int* t1038 = __first1034;
            int* t1039 = __last1035;
            _Bool c1040 = ((t1038 != t1039)) ? 1 : 0;
            if (!c1040) break;
            int* t1041 = __first1034;
            void_std__destroy_at_int_(t1041);
            if (__cir_exc_active) {
              return;
            }
          for_step1037: ;
            int* t1042 = __first1034;
            int c1043 = 1;
            int* ptr1044 = &(t1042)[c1043];
            __first1034 = ptr1044;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1045, int* v1046, struct std__allocator_int_* v1047) {
bb1048:
  int* __first1049;
  int* __last1050;
  struct std__allocator_int_* unnamed1051;
  __first1049 = v1045;
  __last1050 = v1046;
  unnamed1051 = v1047;
  int* t1052 = __first1049;
  int* t1053 = __last1050;
  void_std___Destroy_int__(t1052, t1053);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1054) {
bb1055:
  unsigned long __size1056;
  unsigned long __retval1057;
  __size1056 = v1054;
  unsigned long t1058 = __size1056;
  unsigned long c1059 = 512;
  _Bool c1060 = ((t1058 < c1059)) ? 1 : 0;
  unsigned long ternary1061;
  if (c1060) {
    unsigned long c1062 = 512;
    unsigned long t1063 = __size1056;
    unsigned long b1064 = c1062 / t1063;
    ternary1061 = (unsigned long)b1064;
  } else {
    unsigned long c1065 = 1;
    ternary1061 = (unsigned long)c1065;
  }
  __retval1057 = ternary1061;
  unsigned long t1066 = __retval1057;
  return t1066;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1067:
  unsigned long __retval1068;
  unsigned long c1069 = 4;
  unsigned long r1070 = std____deque_buf_size(c1069);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1068 = r1070;
  unsigned long t1071 = __retval1068;
  return t1071;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1072, struct std___Deque_iterator_int__int____int___ v1073, struct std___Deque_iterator_int__int____int___ v1074) {
bb1075:
  struct std__deque_int__std__allocator_int__* this1076;
  struct std___Deque_iterator_int__int____int___ __first1077;
  struct std___Deque_iterator_int__int____int___ __last1078;
  this1076 = v1072;
  __first1077 = v1073;
  __last1078 = v1074;
  struct std__deque_int__std__allocator_int__* t1079 = this1076;
    int** __node1080;
    int** t1081 = __first1077._M_node;
    int c1082 = 1;
    int** ptr1083 = &(t1081)[c1082];
    __node1080 = ptr1083;
    while (1) {
      int** t1085 = __node1080;
      int** t1086 = __last1078._M_node;
      _Bool c1087 = ((t1085 < t1086)) ? 1 : 0;
      if (!c1087) break;
      int** t1088 = __node1080;
      int* t1089 = *t1088;
      int** t1090 = __node1080;
      int* t1091 = *t1090;
      unsigned long r1092 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1093 = &(t1091)[r1092];
      struct std___Deque_base_int__std__allocator_int__* base1094 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1079 + 0);
      struct std__allocator_int_* r1095 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1094);
      void_std___Destroy_int___int_(t1089, ptr1093, r1095);
      if (__cir_exc_active) {
        return;
      }
    for_step1084: ;
      int** t1096 = __node1080;
      int c1097 = 1;
      int** ptr1098 = &(t1096)[c1097];
      __node1080 = ptr1098;
    }
    int** t1099 = __first1077._M_node;
    int** t1100 = __last1078._M_node;
    _Bool c1101 = ((t1099 != t1100)) ? 1 : 0;
    if (c1101) {
      int* t1102 = __first1077._M_cur;
      int* t1103 = __first1077._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1104 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1079 + 0);
      struct std__allocator_int_* r1105 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1104);
      void_std___Destroy_int___int_(t1102, t1103, r1105);
      if (__cir_exc_active) {
        return;
      }
      int* t1106 = __last1078._M_first;
      int* t1107 = __last1078._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1108 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1079 + 0);
      struct std__allocator_int_* r1109 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1108);
      void_std___Destroy_int___int_(t1106, t1107, r1109);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1110 = __first1077._M_cur;
      int* t1111 = __last1078._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1112 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1079 + 0);
      struct std__allocator_int_* r1113 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1112);
      void_std___Destroy_int___int_(t1110, t1111, r1113);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1114, struct std___Deque_iterator_int__int____int___* v1115) {
bb1116:
  struct std___Deque_iterator_int__int____int___* this1117;
  struct std___Deque_iterator_int__int____int___* __x1118;
  this1117 = v1114;
  __x1118 = v1115;
  struct std___Deque_iterator_int__int____int___* t1119 = this1117;
  struct std___Deque_iterator_int__int____int___* t1120 = __x1118;
  int* t1121 = t1120->_M_cur;
  t1119->_M_cur = t1121;
  struct std___Deque_iterator_int__int____int___* t1122 = __x1118;
  int* t1123 = t1122->_M_first;
  t1119->_M_first = t1123;
  struct std___Deque_iterator_int__int____int___* t1124 = __x1118;
  int* t1125 = t1124->_M_last;
  t1119->_M_last = t1125;
  struct std___Deque_iterator_int__int____int___* t1126 = __x1118;
  int** t1127 = t1126->_M_node;
  t1119->_M_node = t1127;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1128, struct std___Deque_iterator_int__int____int___ v1129, struct std___Deque_iterator_int__int____int___ v1130, struct std__allocator_int_* v1131) {
bb1132:
  struct std__deque_int__std__allocator_int__* this1133;
  struct std___Deque_iterator_int__int____int___ __first1134;
  struct std___Deque_iterator_int__int____int___ __last1135;
  struct std__allocator_int_* unnamed1136;
  this1133 = v1128;
  __first1134 = v1129;
  __last1135 = v1130;
  unnamed1136 = v1131;
  struct std__deque_int__std__allocator_int__* t1137 = this1133;
    _Bool c1138 = 0;
    if (c1138) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01139;
      struct std___Deque_iterator_int__int____int___ agg_tmp11140;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01139, &__first1134);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11140, &__last1135);
      struct std___Deque_iterator_int__int____int___ t1141 = agg_tmp01139;
      struct std___Deque_iterator_int__int____int___ t1142 = agg_tmp11140;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1137, t1141, t1142);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1143) {
bb1144:
  struct std__deque_int__std__allocator_int__* this1145;
  struct std___Deque_iterator_int__int____int___ __retval1146;
  this1145 = v1143;
  struct std__deque_int__std__allocator_int__* t1147 = this1145;
  struct std___Deque_base_int__std__allocator_int__* base1148 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1147 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1149 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1148->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1146, &base1149->_M_start);
  struct std___Deque_iterator_int__int____int___ t1150 = __retval1146;
  return t1150;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1151) {
bb1152:
  struct std__deque_int__std__allocator_int__* this1153;
  struct std___Deque_iterator_int__int____int___ __retval1154;
  this1153 = v1151;
  struct std__deque_int__std__allocator_int__* t1155 = this1153;
  struct std___Deque_base_int__std__allocator_int__* base1156 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1155 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1157 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1156->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1154, &base1157->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1158 = __retval1154;
  return t1158;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1159) {
bb1160:
  struct std___Deque_base_int__std__allocator_int__* this1161;
  struct std__allocator_int_* __retval1162;
  this1161 = v1159;
  struct std___Deque_base_int__std__allocator_int__* t1163 = this1161;
  struct std__allocator_int_* base1164 = (struct std__allocator_int_*)((char *)&(t1163->_M_impl) + 0);
  __retval1162 = base1164;
  struct std__allocator_int_* t1165 = __retval1162;
  return t1165;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1166, int* v1167, unsigned long v1168) {
bb1169:
  struct std____new_allocator_int_* this1170;
  int* __p1171;
  unsigned long __n1172;
  this1170 = v1166;
  __p1171 = v1167;
  __n1172 = v1168;
  struct std____new_allocator_int_* t1173 = this1170;
    unsigned long c1174 = 4;
    unsigned long c1175 = 16;
    _Bool c1176 = ((c1174 > c1175)) ? 1 : 0;
    if (c1176) {
      int* t1177 = __p1171;
      void* cast1178 = (void*)t1177;
      unsigned long t1179 = __n1172;
      unsigned long c1180 = 4;
      unsigned long b1181 = t1179 * c1180;
      unsigned long c1182 = 4;
      operator_delete_3(cast1178, b1181, c1182);
      return;
    }
  int* t1183 = __p1171;
  void* cast1184 = (void*)t1183;
  unsigned long t1185 = __n1172;
  unsigned long c1186 = 4;
  unsigned long b1187 = t1185 * c1186;
  operator_delete_2(cast1184, b1187);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1188, int* v1189, unsigned long v1190) {
bb1191:
  struct std__allocator_int_* this1192;
  int* __p1193;
  unsigned long __n1194;
  this1192 = v1188;
  __p1193 = v1189;
  __n1194 = v1190;
  struct std__allocator_int_* t1195 = this1192;
    _Bool r1196 = std____is_constant_evaluated();
    if (r1196) {
      int* t1197 = __p1193;
      void* cast1198 = (void*)t1197;
      operator_delete(cast1198);
      return;
    }
  struct std____new_allocator_int_* base1199 = (struct std____new_allocator_int_*)((char *)t1195 + 0);
  int* t1200 = __p1193;
  unsigned long t1201 = __n1194;
  std____new_allocator_int___deallocate(base1199, t1200, t1201);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1202, int* v1203, unsigned long v1204) {
bb1205:
  struct std__allocator_int_* __a1206;
  int* __p1207;
  unsigned long __n1208;
  __a1206 = v1202;
  __p1207 = v1203;
  __n1208 = v1204;
  struct std__allocator_int_* t1209 = __a1206;
  int* t1210 = __p1207;
  unsigned long t1211 = __n1208;
  std__allocator_int___deallocate(t1209, t1210, t1211);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1212, int* v1213) {
bb1214:
  struct std___Deque_base_int__std__allocator_int__* this1215;
  int* __p1216;
  this1215 = v1212;
  __p1216 = v1213;
  struct std___Deque_base_int__std__allocator_int__* t1217 = this1215;
  struct std__allocator_int_* base1218 = (struct std__allocator_int_*)((char *)&(t1217->_M_impl) + 0);
  int* t1219 = __p1216;
  unsigned long c1220 = 4;
  unsigned long r1221 = std____deque_buf_size(c1220);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1218, t1219, r1221);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1222, int** v1223, int** v1224) {
bb1225:
  struct std___Deque_base_int__std__allocator_int__* this1226;
  int** __nstart1227;
  int** __nfinish1228;
  this1226 = v1222;
  __nstart1227 = v1223;
  __nfinish1228 = v1224;
  struct std___Deque_base_int__std__allocator_int__* t1229 = this1226;
    int** __n1230;
    int** t1231 = __nstart1227;
    __n1230 = t1231;
    while (1) {
      int** t1233 = __n1230;
      int** t1234 = __nfinish1228;
      _Bool c1235 = ((t1233 < t1234)) ? 1 : 0;
      if (!c1235) break;
      int** t1236 = __n1230;
      int* t1237 = *t1236;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1229, t1237);
    for_step1232: ;
      int** t1238 = __n1230;
      int c1239 = 1;
      int** ptr1240 = &(t1238)[c1239];
      __n1230 = ptr1240;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1241) {
bb1242:
  struct std___Deque_base_int__std__allocator_int__* this1243;
  struct std__allocator_int_* __retval1244;
  this1243 = v1241;
  struct std___Deque_base_int__std__allocator_int__* t1245 = this1243;
  struct std__allocator_int_* base1246 = (struct std__allocator_int_*)((char *)&(t1245->_M_impl) + 0);
  __retval1244 = base1246;
  struct std__allocator_int_* t1247 = __retval1244;
  return t1247;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1248, struct std__allocator_int_* v1249) {
bb1250:
  struct std__allocator_int___* this1251;
  struct std__allocator_int_* unnamed1252;
  this1251 = v1248;
  unnamed1252 = v1249;
  struct std__allocator_int___* t1253 = this1251;
  struct std____new_allocator_int___* base1254 = (struct std____new_allocator_int___*)((char *)t1253 + 0);
  std____new_allocator_int______new_allocator(base1254);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1255) {
bb1256:
  struct std___Deque_base_int__std__allocator_int__* this1257;
  struct std__allocator_int___ __retval1258;
  this1257 = v1255;
  struct std___Deque_base_int__std__allocator_int__* t1259 = this1257;
  struct std__allocator_int_* r1260 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1259);
  std__allocator_int____allocator_int_(&__retval1258, r1260);
  struct std__allocator_int___ t1261 = __retval1258;
  return t1261;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1262, int** v1263, unsigned long v1264) {
bb1265:
  struct std____new_allocator_int___* this1266;
  int** __p1267;
  unsigned long __n1268;
  this1266 = v1262;
  __p1267 = v1263;
  __n1268 = v1264;
  struct std____new_allocator_int___* t1269 = this1266;
    unsigned long c1270 = 8;
    unsigned long c1271 = 16;
    _Bool c1272 = ((c1270 > c1271)) ? 1 : 0;
    if (c1272) {
      int** t1273 = __p1267;
      void* cast1274 = (void*)t1273;
      unsigned long t1275 = __n1268;
      unsigned long c1276 = 8;
      unsigned long b1277 = t1275 * c1276;
      unsigned long c1278 = 8;
      operator_delete_3(cast1274, b1277, c1278);
      return;
    }
  int** t1279 = __p1267;
  void* cast1280 = (void*)t1279;
  unsigned long t1281 = __n1268;
  unsigned long c1282 = 8;
  unsigned long b1283 = t1281 * c1282;
  operator_delete_2(cast1280, b1283);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1284, int** v1285, unsigned long v1286) {
bb1287:
  struct std__allocator_int___* this1288;
  int** __p1289;
  unsigned long __n1290;
  this1288 = v1284;
  __p1289 = v1285;
  __n1290 = v1286;
  struct std__allocator_int___* t1291 = this1288;
    _Bool r1292 = std____is_constant_evaluated();
    if (r1292) {
      int** t1293 = __p1289;
      void* cast1294 = (void*)t1293;
      operator_delete(cast1294);
      return;
    }
  struct std____new_allocator_int___* base1295 = (struct std____new_allocator_int___*)((char *)t1291 + 0);
  int** t1296 = __p1289;
  unsigned long t1297 = __n1290;
  std____new_allocator_int____deallocate(base1295, t1296, t1297);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1298, int** v1299, unsigned long v1300) {
bb1301:
  struct std__allocator_int___* __a1302;
  int** __p1303;
  unsigned long __n1304;
  __a1302 = v1298;
  __p1303 = v1299;
  __n1304 = v1300;
  struct std__allocator_int___* t1305 = __a1302;
  int** t1306 = __p1303;
  unsigned long t1307 = __n1304;
  std__allocator_int____deallocate(t1305, t1306, t1307);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1308, int** v1309, unsigned long v1310) {
bb1311:
  struct std___Deque_base_int__std__allocator_int__* this1312;
  int** __p1313;
  unsigned long __n1314;
  struct std__allocator_int___ __map_alloc1315;
  this1312 = v1308;
  __p1313 = v1309;
  __n1314 = v1310;
  struct std___Deque_base_int__std__allocator_int__* t1316 = this1312;
  struct std__allocator_int___ r1317 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1316);
  __map_alloc1315 = r1317;
  int** t1318 = __p1313;
  unsigned long t1319 = __n1314;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1315, t1318, t1319);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1320) {
bb1321:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1322;
  this1322 = v1320;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1323 = this1322;
  {
    struct std__allocator_int_* base1324 = (struct std__allocator_int_*)((char *)t1323 + 0);
    std__allocator_int____allocator(base1324);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1325) {
bb1326:
  struct std___Deque_base_int__std__allocator_int__* this1327;
  this1327 = v1325;
  struct std___Deque_base_int__std__allocator_int__* t1328 = this1327;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1329 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1328->_M_impl) + 0);
      int** t1330 = base1329->_M_map;
      _Bool cast1331 = (_Bool)t1330;
      if (cast1331) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1332 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1328->_M_impl) + 0);
        int** t1333 = base1332->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1334 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1328->_M_impl) + 0);
        int** t1335 = base1334->_M_finish._M_node;
        int c1336 = 1;
        int** ptr1337 = &(t1335)[c1336];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1328, t1333, ptr1337);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1338 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1328->_M_impl) + 0);
        int** t1339 = base1338->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1340 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1328->_M_impl) + 0);
        unsigned long t1341 = base1340->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1328, t1339, t1341);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1328->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1342) {
bb1343:
  struct std____new_allocator_int___* this1344;
  this1344 = v1342;
  struct std____new_allocator_int___* t1345 = this1344;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1346) {
bb1347:
  struct std__allocator_int_* this1348;
  this1348 = v1346;
  struct std__allocator_int_* t1349 = this1348;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1350) {
bb1351:
  struct std__deque_int__std__allocator_int__* this1352;
  this1352 = v1350;
  struct std__deque_int__std__allocator_int__* t1353 = this1352;
  struct std___Deque_base_int__std__allocator_int__* base1354 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1353 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base1354);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1355) {
bb1356:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1357;
  this1357 = v1355;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1358 = this1357;
  struct std__allocator_int_* base1359 = (struct std__allocator_int_*)((char *)t1358 + 0);
  std__allocator_int___allocator(base1359);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1360 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1358 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1360);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1361, unsigned long* v1362) {
bb1363:
  unsigned long* __a1364;
  unsigned long* __b1365;
  unsigned long* __retval1366;
  __a1364 = v1361;
  __b1365 = v1362;
    unsigned long* t1367 = __a1364;
    unsigned long t1368 = *t1367;
    unsigned long* t1369 = __b1365;
    unsigned long t1370 = *t1369;
    _Bool c1371 = ((t1368 < t1370)) ? 1 : 0;
    if (c1371) {
      unsigned long* t1372 = __b1365;
      __retval1366 = t1372;
      unsigned long* t1373 = __retval1366;
      return t1373;
    }
  unsigned long* t1374 = __a1364;
  __retval1366 = t1374;
  unsigned long* t1375 = __retval1366;
  return t1375;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1376) {
bb1377:
  struct std____new_allocator_int___* this1378;
  unsigned long __retval1379;
  this1378 = v1376;
  struct std____new_allocator_int___* t1380 = this1378;
  unsigned long c1381 = 9223372036854775807;
  unsigned long c1382 = 8;
  unsigned long b1383 = c1381 / c1382;
  __retval1379 = b1383;
  unsigned long t1384 = __retval1379;
  return t1384;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1385, unsigned long v1386, void* v1387) {
bb1388:
  struct std____new_allocator_int___* this1389;
  unsigned long __n1390;
  void* unnamed1391;
  int** __retval1392;
  this1389 = v1385;
  __n1390 = v1386;
  unnamed1391 = v1387;
  struct std____new_allocator_int___* t1393 = this1389;
    unsigned long t1394 = __n1390;
    unsigned long r1395 = std____new_allocator_int_____M_max_size___const(t1393);
    _Bool c1396 = ((t1394 > r1395)) ? 1 : 0;
    if (c1396) {
        unsigned long t1397 = __n1390;
        unsigned long c1398 = -1;
        unsigned long c1399 = 8;
        unsigned long b1400 = c1398 / c1399;
        _Bool c1401 = ((t1397 > b1400)) ? 1 : 0;
        if (c1401) {
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
    unsigned long c1402 = 8;
    unsigned long c1403 = 16;
    _Bool c1404 = ((c1402 > c1403)) ? 1 : 0;
    if (c1404) {
      unsigned long __al1405;
      unsigned long c1406 = 8;
      __al1405 = c1406;
      unsigned long t1407 = __n1390;
      unsigned long c1408 = 8;
      unsigned long b1409 = t1407 * c1408;
      unsigned long t1410 = __al1405;
      void* r1411 = operator_new_2(b1409, t1410);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1412 = (int**)r1411;
      __retval1392 = cast1412;
      int** t1413 = __retval1392;
      return t1413;
    }
  unsigned long t1414 = __n1390;
  unsigned long c1415 = 8;
  unsigned long b1416 = t1414 * c1415;
  void* r1417 = operator_new(b1416);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1418 = (int**)r1417;
  __retval1392 = cast1418;
  int** t1419 = __retval1392;
  return t1419;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1420, unsigned long v1421) {
bb1422:
  struct std__allocator_int___* this1423;
  unsigned long __n1424;
  int** __retval1425;
  this1423 = v1420;
  __n1424 = v1421;
  struct std__allocator_int___* t1426 = this1423;
    _Bool r1427 = std____is_constant_evaluated();
    if (r1427) {
        unsigned long t1428 = __n1424;
        unsigned long c1429 = 8;
        unsigned long ovr1430;
        _Bool ovf1431 = __builtin_mul_overflow(t1428, c1429, &ovr1430);
        __n1424 = ovr1430;
        if (ovf1431) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1432 = __n1424;
      void* r1433 = operator_new(t1432);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1434 = (int**)r1433;
      __retval1425 = cast1434;
      int** t1435 = __retval1425;
      return t1435;
    }
  struct std____new_allocator_int___* base1436 = (struct std____new_allocator_int___*)((char *)t1426 + 0);
  unsigned long t1437 = __n1424;
  void* c1438 = ((void*)0);
  int** r1439 = std____new_allocator_int____allocate(base1436, t1437, c1438);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1425 = r1439;
  int** t1440 = __retval1425;
  return t1440;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1441, unsigned long v1442) {
bb1443:
  struct std__allocator_int___* __a1444;
  unsigned long __n1445;
  int** __retval1446;
  __a1444 = v1441;
  __n1445 = v1442;
  struct std__allocator_int___* t1447 = __a1444;
  unsigned long t1448 = __n1445;
  int** r1449 = std__allocator_int____allocate(t1447, t1448);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1446 = r1449;
  int** t1450 = __retval1446;
  return t1450;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1451, unsigned long v1452) {
bb1453:
  struct std___Deque_base_int__std__allocator_int__* this1454;
  unsigned long __n1455;
  int** __retval1456;
  struct std__allocator_int___ __map_alloc1457;
  this1454 = v1451;
  __n1455 = v1452;
  struct std___Deque_base_int__std__allocator_int__* t1458 = this1454;
  struct std__allocator_int___ r1459 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1458);
  __map_alloc1457 = r1459;
  unsigned long t1460 = __n1455;
  int** r1461 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1457, t1460);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1456 = r1461;
  int** t1462 = __retval1456;
  return t1462;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1463) {
bb1464:
  struct std____new_allocator_int_* this1465;
  unsigned long __retval1466;
  this1465 = v1463;
  struct std____new_allocator_int_* t1467 = this1465;
  unsigned long c1468 = 9223372036854775807;
  unsigned long c1469 = 4;
  unsigned long b1470 = c1468 / c1469;
  __retval1466 = b1470;
  unsigned long t1471 = __retval1466;
  return t1471;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1472, unsigned long v1473, void* v1474) {
bb1475:
  struct std____new_allocator_int_* this1476;
  unsigned long __n1477;
  void* unnamed1478;
  int* __retval1479;
  this1476 = v1472;
  __n1477 = v1473;
  unnamed1478 = v1474;
  struct std____new_allocator_int_* t1480 = this1476;
    unsigned long t1481 = __n1477;
    unsigned long r1482 = std____new_allocator_int____M_max_size___const(t1480);
    _Bool c1483 = ((t1481 > r1482)) ? 1 : 0;
    if (c1483) {
        unsigned long t1484 = __n1477;
        unsigned long c1485 = -1;
        unsigned long c1486 = 4;
        unsigned long b1487 = c1485 / c1486;
        _Bool c1488 = ((t1484 > b1487)) ? 1 : 0;
        if (c1488) {
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
    unsigned long c1489 = 4;
    unsigned long c1490 = 16;
    _Bool c1491 = ((c1489 > c1490)) ? 1 : 0;
    if (c1491) {
      unsigned long __al1492;
      unsigned long c1493 = 4;
      __al1492 = c1493;
      unsigned long t1494 = __n1477;
      unsigned long c1495 = 4;
      unsigned long b1496 = t1494 * c1495;
      unsigned long t1497 = __al1492;
      void* r1498 = operator_new_2(b1496, t1497);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1499 = (int*)r1498;
      __retval1479 = cast1499;
      int* t1500 = __retval1479;
      return t1500;
    }
  unsigned long t1501 = __n1477;
  unsigned long c1502 = 4;
  unsigned long b1503 = t1501 * c1502;
  void* r1504 = operator_new(b1503);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1505 = (int*)r1504;
  __retval1479 = cast1505;
  int* t1506 = __retval1479;
  return t1506;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1507, unsigned long v1508) {
bb1509:
  struct std__allocator_int_* this1510;
  unsigned long __n1511;
  int* __retval1512;
  this1510 = v1507;
  __n1511 = v1508;
  struct std__allocator_int_* t1513 = this1510;
    _Bool r1514 = std____is_constant_evaluated();
    if (r1514) {
        unsigned long t1515 = __n1511;
        unsigned long c1516 = 4;
        unsigned long ovr1517;
        _Bool ovf1518 = __builtin_mul_overflow(t1515, c1516, &ovr1517);
        __n1511 = ovr1517;
        if (ovf1518) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1519 = __n1511;
      void* r1520 = operator_new(t1519);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1521 = (int*)r1520;
      __retval1512 = cast1521;
      int* t1522 = __retval1512;
      return t1522;
    }
  struct std____new_allocator_int_* base1523 = (struct std____new_allocator_int_*)((char *)t1513 + 0);
  unsigned long t1524 = __n1511;
  void* c1525 = ((void*)0);
  int* r1526 = std____new_allocator_int___allocate(base1523, t1524, c1525);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1512 = r1526;
  int* t1527 = __retval1512;
  return t1527;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1528, unsigned long v1529) {
bb1530:
  struct std__allocator_int_* __a1531;
  unsigned long __n1532;
  int* __retval1533;
  __a1531 = v1528;
  __n1532 = v1529;
  struct std__allocator_int_* t1534 = __a1531;
  unsigned long t1535 = __n1532;
  int* r1536 = std__allocator_int___allocate(t1534, t1535);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1533 = r1536;
  int* t1537 = __retval1533;
  return t1537;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1538) {
bb1539:
  struct std___Deque_base_int__std__allocator_int__* this1540;
  int* __retval1541;
  this1540 = v1538;
  struct std___Deque_base_int__std__allocator_int__* t1542 = this1540;
  struct std__allocator_int_* base1543 = (struct std__allocator_int_*)((char *)&(t1542->_M_impl) + 0);
  unsigned long c1544 = 4;
  unsigned long r1545 = std____deque_buf_size(c1544);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1546 = std__allocator_traits_std__allocator_int_____allocate(base1543, r1545);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1541 = r1546;
  int* t1547 = __retval1541;
  return t1547;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1548, int** v1549, int** v1550) {
bb1551:
  struct std___Deque_base_int__std__allocator_int__* this1552;
  int** __nstart1553;
  int** __nfinish1554;
  int** __cur1555;
  this1552 = v1548;
  __nstart1553 = v1549;
  __nfinish1554 = v1550;
  struct std___Deque_base_int__std__allocator_int__* t1556 = this1552;
        int** t1558 = __nstart1553;
        __cur1555 = t1558;
        while (1) {
          int** t1560 = __cur1555;
          int** t1561 = __nfinish1554;
          _Bool c1562 = ((t1560 < t1561)) ? 1 : 0;
          if (!c1562) break;
          int* r1563 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1556);
          if (__cir_exc_active) {
            goto cir_try_dispatch1557;
          }
          int** t1564 = __cur1555;
          *t1564 = r1563;
        for_step1559: ;
          int** t1565 = __cur1555;
          int c1566 = 1;
          int** ptr1567 = &(t1565)[c1566];
          __cur1555 = ptr1567;
        }
    cir_try_dispatch1557: ;
    if (__cir_exc_active) {
    {
      int ca_tok1568 = 0;
      void* ca_exn1569 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1570 = __nstart1553;
        int** t1571 = __cur1555;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1556, t1570, t1571);
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
bb1572:
  unsigned long __retval1573;
  unsigned long c1574 = 4;
  unsigned long r1575 = std____deque_buf_size(c1574);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1573 = r1575;
  unsigned long t1576 = __retval1573;
  return t1576;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1577, int** v1578) {
bb1579:
  struct std___Deque_iterator_int__int____int___* this1580;
  int** __new_node1581;
  this1580 = v1577;
  __new_node1581 = v1578;
  struct std___Deque_iterator_int__int____int___* t1582 = this1580;
  int** t1583 = __new_node1581;
  t1582->_M_node = t1583;
  int** t1584 = __new_node1581;
  int* t1585 = *t1584;
  t1582->_M_first = t1585;
  int* t1586 = t1582->_M_first;
  unsigned long r1587 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1588 = (long)r1587;
  int* ptr1589 = &(t1586)[cast1588];
  t1582->_M_last = ptr1589;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1590, unsigned long v1591) {
bb1592:
  struct std___Deque_base_int__std__allocator_int__* this1593;
  unsigned long __num_elements1594;
  unsigned long __num_nodes1595;
  unsigned long ref_tmp01596;
  unsigned long ref_tmp11597;
  int** __nstart1598;
  int** __nfinish1599;
  this1593 = v1590;
  __num_elements1594 = v1591;
  struct std___Deque_base_int__std__allocator_int__* t1600 = this1593;
  unsigned long t1601 = __num_elements1594;
  unsigned long c1602 = 4;
  unsigned long r1603 = std____deque_buf_size(c1602);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1604 = t1601 / r1603;
  unsigned long c1605 = 1;
  unsigned long b1606 = b1604 + c1605;
  __num_nodes1595 = b1606;
  unsigned long c1607 = 8;
  ref_tmp01596 = c1607;
  unsigned long t1608 = __num_nodes1595;
  unsigned long c1609 = 2;
  unsigned long b1610 = t1608 + c1609;
  ref_tmp11597 = b1610;
  unsigned long* r1611 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01596, &ref_tmp11597);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1612 = *r1611;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1613 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  base1613->_M_map_size = t1612;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1614 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  unsigned long t1615 = base1614->_M_map_size;
  int** r1616 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1600, t1615);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1617 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  base1617->_M_map = r1616;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1618 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  int** t1619 = base1618->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1620 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  unsigned long t1621 = base1620->_M_map_size;
  unsigned long t1622 = __num_nodes1595;
  unsigned long b1623 = t1621 - t1622;
  unsigned long c1624 = 2;
  unsigned long b1625 = b1623 / c1624;
  int** ptr1626 = &(t1619)[b1625];
  __nstart1598 = ptr1626;
  int** t1627 = __nstart1598;
  unsigned long t1628 = __num_nodes1595;
  int** ptr1629 = &(t1627)[t1628];
  __nfinish1599 = ptr1629;
      int** t1631 = __nstart1598;
      int** t1632 = __nfinish1599;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1600, t1631, t1632);
      if (__cir_exc_active) {
        goto cir_try_dispatch1630;
      }
    cir_try_dispatch1630: ;
    if (__cir_exc_active) {
    {
      int ca_tok1633 = 0;
      void* ca_exn1634 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1635 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
        int** t1636 = base1635->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1637 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
        unsigned long t1638 = base1637->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1600, t1636, t1638);
        int** c1639 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1640 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
        base1640->_M_map = c1639;
        unsigned long c1641 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1642 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
        base1642->_M_map_size = c1641;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1643 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  int** t1644 = __nstart1598;
  std___Deque_iterator_int__int___int_____M_set_node(&base1643->_M_start, t1644);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1645 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  int** t1646 = __nfinish1599;
  int c1647 = -1;
  int** ptr1648 = &(t1646)[c1647];
  std___Deque_iterator_int__int___int_____M_set_node(&base1645->_M_finish, ptr1648);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1649 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  int* t1650 = base1649->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1651 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  base1651->_M_start._M_cur = t1650;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1652 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  int* t1653 = base1652->_M_finish._M_first;
  unsigned long t1654 = __num_elements1594;
  unsigned long c1655 = 4;
  unsigned long r1656 = std____deque_buf_size(c1655);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1657 = t1654 % r1656;
  int* ptr1658 = &(t1653)[b1657];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1659 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1600->_M_impl) + 0);
  base1659->_M_finish._M_cur = ptr1658;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1660) {
bb1661:
  struct std___Deque_base_int__std__allocator_int__* this1662;
  this1662 = v1660;
  struct std___Deque_base_int__std__allocator_int__* t1663 = this1662;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1663->_M_impl);
    unsigned long c1664 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1663, c1664);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1663->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1665) {
bb1666:
  struct std____new_allocator_int_* this1667;
  this1667 = v1665;
  struct std____new_allocator_int_* t1668 = this1667;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1669) {
bb1670:
  struct std__allocator_int_* this1671;
  this1671 = v1669;
  struct std__allocator_int_* t1672 = this1671;
  struct std____new_allocator_int_* base1673 = (struct std____new_allocator_int_*)((char *)t1672 + 0);
  std____new_allocator_int_____new_allocator(base1673);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1674) {
bb1675:
  struct std___Deque_iterator_int__int____int___* this1676;
  this1676 = v1674;
  struct std___Deque_iterator_int__int____int___* t1677 = this1676;
  int* c1678 = ((void*)0);
  t1677->_M_cur = c1678;
  int* c1679 = ((void*)0);
  t1677->_M_first = c1679;
  int* c1680 = ((void*)0);
  t1677->_M_last = c1680;
  int** c1681 = ((void*)0);
  t1677->_M_node = c1681;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1682) {
bb1683:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1684;
  this1684 = v1682;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1685 = this1684;
  int** c1686 = ((void*)0);
  t1685->_M_map = c1686;
  unsigned long c1687 = 0;
  t1685->_M_map_size = c1687;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1685->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1685->_M_finish);
  return;
}

