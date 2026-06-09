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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[22] = "mydeque.front() == 77";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_front/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[22] = "mydeque.front() == 61";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[24] = "mydeque.front() is now ";
char _str_4[48] = "cannot create std::deque larger than max_size()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
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
void std__deque_int__std__allocator_int______M_reserve_map_at_front(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* p0);
void void_std__deque_int__std__allocator_int______M_push_front_aux_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
int* int__std__deque_int__std__allocator_int_____emplace_front_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_front(struct std__deque_int__std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* p0, int* p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* p0);
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
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
int main();
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
unsigned long std____deque_buf_size(unsigned long p0);
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
extern int __gxx_personality_v0();
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
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size();
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* p0, int** p1);
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v0) {
bb1:
  struct std__deque_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__deque_int__std__allocator_int__* t3 = this2;
  struct std___Deque_base_int__std__allocator_int__* base4 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base4);
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

// function: _ZNSt5dequeIiSaIiEE23_M_reserve_map_at_frontEm
void std__deque_int__std__allocator_int______M_reserve_map_at_front(struct std__deque_int__std__allocator_int__* v551, unsigned long v552) {
bb553:
  struct std__deque_int__std__allocator_int__* this554;
  unsigned long __nodes_to_add555;
  this554 = v551;
  __nodes_to_add555 = v552;
  struct std__deque_int__std__allocator_int__* t556 = this554;
    unsigned long t557 = __nodes_to_add555;
    struct std___Deque_base_int__std__allocator_int__* base558 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t556 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base559 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base558->_M_impl) + 0);
    int** t560 = base559->_M_start._M_node;
    struct std___Deque_base_int__std__allocator_int__* base561 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t556 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base562 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base561->_M_impl) + 0);
    int** t563 = base562->_M_map;
    long diff564 = t560 - t563;
    unsigned long cast565 = (unsigned long)diff564;
    _Bool c566 = ((t557 > cast565)) ? 1 : 0;
    if (c566) {
      unsigned long t567 = __nodes_to_add555;
      _Bool c568 = 1;
      std__deque_int__std__allocator_int______M_reallocate_map(t556, t567, c568);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* v569) {
bb570:
  struct std___Deque_iterator_int__int____int___* this571;
  struct std___Deque_iterator_int__int____int___* __retval572;
  this571 = v569;
  struct std___Deque_iterator_int__int____int___* t573 = this571;
  int* t574 = t573->_M_cur;
  int c575 = 1;
  int* ptr576 = &(t574)[c575];
  t573->_M_cur = ptr576;
    int* t577 = t573->_M_cur;
    int* t578 = t573->_M_last;
    _Bool c579 = ((t577 == t578)) ? 1 : 0;
    if (c579) {
      int** t580 = t573->_M_node;
      int c581 = 1;
      int** ptr582 = &(t580)[c581];
      std___Deque_iterator_int__int___int_____M_set_node(t573, ptr582);
      int* t583 = t573->_M_first;
      t573->_M_cur = t583;
    }
  __retval572 = t573;
  struct std___Deque_iterator_int__int____int___* t584 = __retval572;
  return t584;
}

// function: _ZNSt5dequeIiSaIiEE17_M_push_front_auxIJiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_front_aux_int_(struct std__deque_int__std__allocator_int__* v585, int* v586) {
bb587:
  struct std__deque_int__std__allocator_int__* this588;
  int* __args589;
  this588 = v585;
  __args589 = v586;
  struct std__deque_int__std__allocator_int__* t590 = this588;
    unsigned long r591 = std__deque_int__std__allocator_int_____size___const(t590);
    unsigned long r592 = std__deque_int__std__allocator_int_____max_size___const(t590);
    _Bool c593 = ((r591 == r592)) ? 1 : 0;
    if (c593) {
      char* cast594 = (char*)&(_str_4);
      std____throw_length_error(cast594);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c595 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_front(t590, c595);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base596 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
  int* r597 = std___Deque_base_int__std__allocator_int______M_allocate_node(base596);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base598 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base599 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base598->_M_impl) + 0);
  int** t600 = base599->_M_start._M_node;
  int c601 = -1;
  int** ptr602 = &(t600)[c601];
  *ptr602 = r597;
      struct std___Deque_base_int__std__allocator_int__* base604 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base605 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base604->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base606 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base607 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base606->_M_impl) + 0);
      int** t608 = base607->_M_start._M_node;
      int c609 = -1;
      int** ptr610 = &(t608)[c609];
      std___Deque_iterator_int__int___int_____M_set_node(&base605->_M_start, ptr610);
      struct std___Deque_base_int__std__allocator_int__* base611 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base612 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base611->_M_impl) + 0);
      int* t613 = base612->_M_start._M_last;
      int c614 = -1;
      int* ptr615 = &(t613)[c614];
      struct std___Deque_base_int__std__allocator_int__* base616 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base617 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base616->_M_impl) + 0);
      base617->_M_start._M_cur = ptr615;
      struct std___Deque_base_int__std__allocator_int__* base618 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std__allocator_int_* base619 = (struct std__allocator_int_*)((char *)&(base618->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base620 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base621 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base620->_M_impl) + 0);
      int* t622 = base621->_M_start._M_cur;
      int* t623 = __args589;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base619, t622, t623);
    cir_try_dispatch603: ;
    if (__cir_exc_active) {
    {
      int ca_tok624 = 0;
      void* ca_exn625 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base626 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base627 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base626->_M_impl) + 0);
        struct std___Deque_iterator_int__int____int___* r628 = std___Deque_iterator_int__int___int____operator___2(&base627->_M_start);
        struct std___Deque_base_int__std__allocator_int__* base629 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
        struct std___Deque_base_int__std__allocator_int__* base630 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base631 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base630->_M_impl) + 0);
        int** t632 = base631->_M_start._M_node;
        int c633 = -1;
        int** ptr634 = &(t632)[c633];
        int* t635 = *ptr634;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base629, t635);
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

// function: _ZNSt5dequeIiSaIiEE13emplace_frontIJiEEERiDpOT_
int* int__std__deque_int__std__allocator_int_____emplace_front_int_(struct std__deque_int__std__allocator_int__* v636, int* v637) {
bb638:
  struct std__deque_int__std__allocator_int__* this639;
  int* __args640;
  int* __retval641;
  this639 = v636;
  __args640 = v637;
  struct std__deque_int__std__allocator_int__* t642 = this639;
    struct std___Deque_base_int__std__allocator_int__* base643 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t642 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base644 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base643->_M_impl) + 0);
    int* t645 = base644->_M_start._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base646 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t642 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base647 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base646->_M_impl) + 0);
    int* t648 = base647->_M_start._M_first;
    _Bool c649 = ((t645 != t648)) ? 1 : 0;
    if (c649) {
      struct std___Deque_base_int__std__allocator_int__* base650 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t642 + 0);
      struct std__allocator_int_* base651 = (struct std__allocator_int_*)((char *)&(base650->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base652 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t642 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base653 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base652->_M_impl) + 0);
      int* t654 = base653->_M_start._M_cur;
      int c655 = -1;
      int* ptr656 = &(t654)[c655];
      int* t657 = __args640;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base651, ptr656, t657);
      struct std___Deque_base_int__std__allocator_int__* base658 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t642 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base659 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base658->_M_impl) + 0);
      int* t660 = base659->_M_start._M_cur;
      int c661 = -1;
      int* ptr662 = &(t660)[c661];
      base659->_M_start._M_cur = ptr662;
    } else {
      int* t663 = __args640;
      void_std__deque_int__std__allocator_int______M_push_front_aux_int_(t642, t663);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r664 = std__deque_int__std__allocator_int_____front(t642);
  __retval641 = r664;
  int* t665 = __retval641;
  return t665;
}

// function: _ZNSt5dequeIiSaIiEE10push_frontEOi
void std__deque_int__std__allocator_int_____push_front(struct std__deque_int__std__allocator_int__* v666, int* v667) {
bb668:
  struct std__deque_int__std__allocator_int__* this669;
  int* __x670;
  this669 = v666;
  __x670 = v667;
  struct std__deque_int__std__allocator_int__* t671 = this669;
  int* t672 = __x670;
  int* r673 = int__std__deque_int__std__allocator_int_____emplace_front_int_(t671, t672);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v674, struct std___Deque_iterator_int__int____int___* v675) {
bb676:
  struct std___Deque_iterator_int__int____int___* __x677;
  struct std___Deque_iterator_int__int____int___* __y678;
  _Bool __retval679;
  __x677 = v674;
  __y678 = v675;
  struct std___Deque_iterator_int__int____int___* t680 = __x677;
  int* t681 = t680->_M_cur;
  struct std___Deque_iterator_int__int____int___* t682 = __y678;
  int* t683 = t682->_M_cur;
  _Bool c684 = ((t681 == t683)) ? 1 : 0;
  __retval679 = c684;
  _Bool t685 = __retval679;
  return t685;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v686) {
bb687:
  struct std__deque_int__std__allocator_int__* this688;
  _Bool __retval689;
  this688 = v686;
  struct std__deque_int__std__allocator_int__* t690 = this688;
  struct std___Deque_base_int__std__allocator_int__* base691 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t690 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base692 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base691->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base693 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t690 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base694 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base693->_M_impl) + 0);
  _Bool r695 = std__operator__(&base692->_M_finish, &base694->_M_start);
  __retval689 = r695;
  _Bool t696 = __retval689;
  return t696;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v697) {
bb698:
  struct std___Deque_iterator_int__int____int___* this699;
  int* __retval700;
  this699 = v697;
  struct std___Deque_iterator_int__int____int___* t701 = this699;
  int* t702 = t701->_M_cur;
  __retval700 = t702;
  int* t703 = __retval700;
  return t703;
}

// function: _ZNSt5dequeIiSaIiEE5frontEv
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* v704) {
bb705:
  struct std__deque_int__std__allocator_int__* this706;
  int* __retval707;
  struct std___Deque_iterator_int__int____int___ ref_tmp0708;
  this706 = v704;
  struct std__deque_int__std__allocator_int__* t709 = this706;
    do {
          _Bool r710 = std__deque_int__std__allocator_int_____empty___const(t709);
          if (r710) {
            char* cast711 = (char*)&(_str_5);
            int c712 = 1513;
            char* cast713 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv);
            char* cast714 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast711, c712, cast713, cast714);
          }
      _Bool c715 = 0;
      if (!c715) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r716 = std__deque_int__std__allocator_int_____begin(t709);
  ref_tmp0708 = r716;
  int* r717 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0708);
  __retval707 = r717;
  int* t718 = __retval707;
  return t718;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v719, unsigned long v720) {
bb721:
  struct std__deque_int__std__allocator_int__* this722;
  unsigned long __nodes_to_add723;
  this722 = v719;
  __nodes_to_add723 = v720;
  struct std__deque_int__std__allocator_int__* t724 = this722;
    unsigned long t725 = __nodes_to_add723;
    unsigned long c726 = 1;
    unsigned long b727 = t725 + c726;
    struct std___Deque_base_int__std__allocator_int__* base728 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t724 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base729 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base728->_M_impl) + 0);
    unsigned long t730 = base729->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base731 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t724 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base732 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base731->_M_impl) + 0);
    int** t733 = base732->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base734 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t724 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base735 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base734->_M_impl) + 0);
    int** t736 = base735->_M_map;
    long diff737 = t733 - t736;
    unsigned long cast738 = (unsigned long)diff737;
    unsigned long b739 = t730 - cast738;
    _Bool c740 = ((b727 > b739)) ? 1 : 0;
    if (c740) {
      unsigned long t741 = __nodes_to_add723;
      _Bool c742 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t724, t741, c742);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* v743, int* v744) {
bb745:
  struct std__deque_int__std__allocator_int__* this746;
  int* __args747;
  this746 = v743;
  __args747 = v744;
  struct std__deque_int__std__allocator_int__* t748 = this746;
    unsigned long r749 = std__deque_int__std__allocator_int_____size___const(t748);
    unsigned long r750 = std__deque_int__std__allocator_int_____max_size___const(t748);
    _Bool c751 = ((r749 == r750)) ? 1 : 0;
    if (c751) {
      char* cast752 = (char*)&(_str_4);
      std____throw_length_error(cast752);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c753 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t748, c753);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base754 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t748 + 0);
  int* r755 = std___Deque_base_int__std__allocator_int______M_allocate_node(base754);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base756 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t748 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base757 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base756->_M_impl) + 0);
  int** t758 = base757->_M_finish._M_node;
  int c759 = 1;
  int** ptr760 = &(t758)[c759];
  *ptr760 = r755;
      struct std___Deque_base_int__std__allocator_int__* base762 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t748 + 0);
      struct std__allocator_int_* base763 = (struct std__allocator_int_*)((char *)&(base762->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base764 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t748 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base765 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base764->_M_impl) + 0);
      int* t766 = base765->_M_finish._M_cur;
      int* t767 = __args747;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base763, t766, t767);
      struct std___Deque_base_int__std__allocator_int__* base768 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t748 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base769 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base768->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base770 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t748 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base771 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base770->_M_impl) + 0);
      int** t772 = base771->_M_finish._M_node;
      int c773 = 1;
      int** ptr774 = &(t772)[c773];
      std___Deque_iterator_int__int___int_____M_set_node(&base769->_M_finish, ptr774);
      struct std___Deque_base_int__std__allocator_int__* base775 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t748 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base776 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base775->_M_impl) + 0);
      int* t777 = base776->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base778 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t748 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base779 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base778->_M_impl) + 0);
      base779->_M_finish._M_cur = t777;
    cir_try_dispatch761: ;
    if (__cir_exc_active) {
    {
      int ca_tok780 = 0;
      void* ca_exn781 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base782 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t748 + 0);
        struct std___Deque_base_int__std__allocator_int__* base783 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t748 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base784 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base783->_M_impl) + 0);
        int** t785 = base784->_M_finish._M_node;
        int c786 = 1;
        int** ptr787 = &(t785)[c786];
        int* t788 = *ptr787;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base782, t788);
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

// function: _ZNSt5dequeIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* v789, int* v790) {
bb791:
  struct std__deque_int__std__allocator_int__* this792;
  int* __args793;
  int* __retval794;
  this792 = v789;
  __args793 = v790;
  struct std__deque_int__std__allocator_int__* t795 = this792;
    struct std___Deque_base_int__std__allocator_int__* base796 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base797 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base796->_M_impl) + 0);
    int* t798 = base797->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base799 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base800 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base799->_M_impl) + 0);
    int* t801 = base800->_M_finish._M_last;
    int c802 = -1;
    int* ptr803 = &(t801)[c802];
    _Bool c804 = ((t798 != ptr803)) ? 1 : 0;
    if (c804) {
      struct std___Deque_base_int__std__allocator_int__* base805 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
      struct std__allocator_int_* base806 = (struct std__allocator_int_*)((char *)&(base805->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base807 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base808 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base807->_M_impl) + 0);
      int* t809 = base808->_M_finish._M_cur;
      int* t810 = __args793;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base806, t809, t810);
      struct std___Deque_base_int__std__allocator_int__* base811 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t795 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base812 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base811->_M_impl) + 0);
      int* t813 = base812->_M_finish._M_cur;
      int c814 = 1;
      int* ptr815 = &(t813)[c814];
      base812->_M_finish._M_cur = ptr815;
    } else {
      int* t816 = __args793;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_(t795, t816);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r817 = std__deque_int__std__allocator_int_____back(t795);
  __retval794 = r817;
  int* t818 = __retval794;
  return t818;
}

// function: _ZNSt5dequeIiSaIiEE9push_backEOi
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v819, int* v820) {
bb821:
  struct std__deque_int__std__allocator_int__* this822;
  int* __x823;
  this822 = v819;
  __x823 = v820;
  struct std__deque_int__std__allocator_int__* t824 = this822;
  int* t825 = __x823;
  int* r826 = int__std__deque_int__std__allocator_int_____emplace_back_int_(t824, t825);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v827) {
bb828:
  struct std___Deque_iterator_int__int____int___* this829;
  struct std___Deque_iterator_int__int____int___* __retval830;
  this829 = v827;
  struct std___Deque_iterator_int__int____int___* t831 = this829;
    int* t832 = t831->_M_cur;
    int* t833 = t831->_M_first;
    _Bool c834 = ((t832 == t833)) ? 1 : 0;
    if (c834) {
      int** t835 = t831->_M_node;
      int c836 = -1;
      int** ptr837 = &(t835)[c836];
      std___Deque_iterator_int__int___int_____M_set_node(t831, ptr837);
      int* t838 = t831->_M_last;
      t831->_M_cur = t838;
    }
  int* t839 = t831->_M_cur;
  int c840 = -1;
  int* ptr841 = &(t839)[c840];
  t831->_M_cur = ptr841;
  __retval830 = t831;
  struct std___Deque_iterator_int__int____int___* t842 = __retval830;
  return t842;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v843) {
bb844:
  struct std__deque_int__std__allocator_int__* this845;
  int* __retval846;
  struct std___Deque_iterator_int__int____int___ __tmp847;
  this845 = v843;
  struct std__deque_int__std__allocator_int__* t848 = this845;
    do {
          _Bool r849 = std__deque_int__std__allocator_int_____empty___const(t848);
          if (r849) {
            char* cast850 = (char*)&(_str_5);
            int c851 = 1537;
            char* cast852 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast853 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast850, c851, cast852, cast853);
          }
      _Bool c854 = 0;
      if (!c854) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r855 = std__deque_int__std__allocator_int_____end(t848);
  __tmp847 = r855;
  struct std___Deque_iterator_int__int____int___* r856 = std___Deque_iterator_int__int___int____operator__(&__tmp847);
  int* r857 = std___Deque_iterator_int__int___int____operator____const(&__tmp847);
  __retval846 = r857;
  int* t858 = __retval846;
  return t858;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v859, int v860) {
bb861:
  int __a862;
  int __b863;
  int __retval864;
  __a862 = v859;
  __b863 = v860;
  int t865 = __a862;
  int t866 = __b863;
  int b867 = t865 | t866;
  __retval864 = b867;
  int t868 = __retval864;
  return t868;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v869) {
bb870:
  struct std__basic_ios_char__std__char_traits_char__* this871;
  int __retval872;
  this871 = v869;
  struct std__basic_ios_char__std__char_traits_char__* t873 = this871;
  struct std__ios_base* base874 = (struct std__ios_base*)((char *)t873 + 0);
  int t875 = base874->_M_streambuf_state;
  __retval872 = t875;
  int t876 = __retval872;
  return t876;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v877, int v878) {
bb879:
  struct std__basic_ios_char__std__char_traits_char__* this880;
  int __state881;
  this880 = v877;
  __state881 = v878;
  struct std__basic_ios_char__std__char_traits_char__* t882 = this880;
  int r883 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t882);
  if (__cir_exc_active) {
    return;
  }
  int t884 = __state881;
  int r885 = std__operator__2(r883, t884);
  std__basic_ios_char__std__char_traits_char_____clear(t882, r885);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v886, char* v887) {
bb888:
  char* __c1889;
  char* __c2890;
  _Bool __retval891;
  __c1889 = v886;
  __c2890 = v887;
  char* t892 = __c1889;
  char t893 = *t892;
  int cast894 = (int)t893;
  char* t895 = __c2890;
  char t896 = *t895;
  int cast897 = (int)t896;
  _Bool c898 = ((cast894 == cast897)) ? 1 : 0;
  __retval891 = c898;
  _Bool t899 = __retval891;
  return t899;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v900) {
bb901:
  char* __p902;
  unsigned long __retval903;
  unsigned long __i904;
  __p902 = v900;
  unsigned long c905 = 0;
  __i904 = c905;
    char ref_tmp0906;
    while (1) {
      unsigned long t907 = __i904;
      char* t908 = __p902;
      char* ptr909 = &(t908)[t907];
      char c910 = 0;
      ref_tmp0906 = c910;
      _Bool r911 = __gnu_cxx__char_traits_char___eq(ptr909, &ref_tmp0906);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u912 = !r911;
      if (!u912) break;
      unsigned long t913 = __i904;
      unsigned long u914 = t913 + 1;
      __i904 = u914;
    }
  unsigned long t915 = __i904;
  __retval903 = t915;
  unsigned long t916 = __retval903;
  return t916;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v917) {
bb918:
  char* __s919;
  unsigned long __retval920;
  __s919 = v917;
    _Bool r921 = std____is_constant_evaluated();
    if (r921) {
      char* t922 = __s919;
      unsigned long r923 = __gnu_cxx__char_traits_char___length(t922);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval920 = r923;
      unsigned long t924 = __retval920;
      return t924;
    }
  char* t925 = __s919;
  unsigned long r926 = strlen(t925);
  __retval920 = r926;
  unsigned long t927 = __retval920;
  return t927;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v928, char* v929) {
bb930:
  struct std__basic_ostream_char__std__char_traits_char__* __out931;
  char* __s932;
  struct std__basic_ostream_char__std__char_traits_char__* __retval933;
  __out931 = v928;
  __s932 = v929;
    char* t934 = __s932;
    _Bool cast935 = (_Bool)t934;
    _Bool u936 = !cast935;
    if (u936) {
      struct std__basic_ostream_char__std__char_traits_char__* t937 = __out931;
      void** v938 = (void**)t937;
      void* v939 = *((void**)v938);
      unsigned char* cast940 = (unsigned char*)v939;
      long c941 = -24;
      unsigned char* ptr942 = &(cast940)[c941];
      long* cast943 = (long*)ptr942;
      long t944 = *cast943;
      unsigned char* cast945 = (unsigned char*)t937;
      unsigned char* ptr946 = &(cast945)[t944];
      struct std__basic_ostream_char__std__char_traits_char__* cast947 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr946;
      struct std__basic_ios_char__std__char_traits_char__* cast948 = (struct std__basic_ios_char__std__char_traits_char__*)cast947;
      int t949 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast948, t949);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t950 = __out931;
      char* t951 = __s932;
      char* t952 = __s932;
      unsigned long r953 = std__char_traits_char___length(t952);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast954 = (long)r953;
      struct std__basic_ostream_char__std__char_traits_char__* r955 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t950, t951, cast954);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t956 = __out931;
  __retval933 = t956;
  struct std__basic_ostream_char__std__char_traits_char__* t957 = __retval933;
  return t957;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v958, void* v959) {
bb960:
  struct std__basic_ostream_char__std__char_traits_char__* this961;
  void* __pf962;
  struct std__basic_ostream_char__std__char_traits_char__* __retval963;
  this961 = v958;
  __pf962 = v959;
  struct std__basic_ostream_char__std__char_traits_char__* t964 = this961;
  void* t965 = __pf962;
  struct std__basic_ostream_char__std__char_traits_char__* r966 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t965)(t964);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval963 = r966;
  struct std__basic_ostream_char__std__char_traits_char__* t967 = __retval963;
  return t967;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v968) {
bb969:
  struct std__basic_ostream_char__std__char_traits_char__* __os970;
  struct std__basic_ostream_char__std__char_traits_char__* __retval971;
  __os970 = v968;
  struct std__basic_ostream_char__std__char_traits_char__* t972 = __os970;
  struct std__basic_ostream_char__std__char_traits_char__* r973 = std__ostream__flush(t972);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval971 = r973;
  struct std__basic_ostream_char__std__char_traits_char__* t974 = __retval971;
  return t974;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v975) {
bb976:
  struct std__ctype_char_* __f977;
  struct std__ctype_char_* __retval978;
  __f977 = v975;
    struct std__ctype_char_* t979 = __f977;
    _Bool cast980 = (_Bool)t979;
    _Bool u981 = !cast980;
    if (u981) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t982 = __f977;
  __retval978 = t982;
  struct std__ctype_char_* t983 = __retval978;
  return t983;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v984, char v985) {
bb986:
  struct std__ctype_char_* this987;
  char __c988;
  char __retval989;
  this987 = v984;
  __c988 = v985;
  struct std__ctype_char_* t990 = this987;
    char t991 = t990->_M_widen_ok;
    _Bool cast992 = (_Bool)t991;
    if (cast992) {
      char t993 = __c988;
      unsigned char cast994 = (unsigned char)t993;
      unsigned long cast995 = (unsigned long)cast994;
      char t996 = t990->_M_widen[cast995];
      __retval989 = t996;
      char t997 = __retval989;
      return t997;
    }
  std__ctype_char____M_widen_init___const(t990);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t998 = __c988;
  void** v999 = (void**)t990;
  void* v1000 = *((void**)v999);
  char vcall1003 = (char)__VERIFIER_virtual_call_char_char(t990, 6, t998);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval989 = vcall1003;
  char t1004 = __retval989;
  return t1004;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1005, char v1006) {
bb1007:
  struct std__basic_ios_char__std__char_traits_char__* this1008;
  char __c1009;
  char __retval1010;
  this1008 = v1005;
  __c1009 = v1006;
  struct std__basic_ios_char__std__char_traits_char__* t1011 = this1008;
  struct std__ctype_char_* t1012 = t1011->_M_ctype;
  struct std__ctype_char_* r1013 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1012);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1014 = __c1009;
  char r1015 = std__ctype_char___widen_char__const(r1013, t1014);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1010 = r1015;
  char t1016 = __retval1010;
  return t1016;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1017) {
bb1018:
  struct std__basic_ostream_char__std__char_traits_char__* __os1019;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1020;
  __os1019 = v1017;
  struct std__basic_ostream_char__std__char_traits_char__* t1021 = __os1019;
  struct std__basic_ostream_char__std__char_traits_char__* t1022 = __os1019;
  void** v1023 = (void**)t1022;
  void* v1024 = *((void**)v1023);
  unsigned char* cast1025 = (unsigned char*)v1024;
  long c1026 = -24;
  unsigned char* ptr1027 = &(cast1025)[c1026];
  long* cast1028 = (long*)ptr1027;
  long t1029 = *cast1028;
  unsigned char* cast1030 = (unsigned char*)t1022;
  unsigned char* ptr1031 = &(cast1030)[t1029];
  struct std__basic_ostream_char__std__char_traits_char__* cast1032 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1031;
  struct std__basic_ios_char__std__char_traits_char__* cast1033 = (struct std__basic_ios_char__std__char_traits_char__*)cast1032;
  char c1034 = 10;
  char r1035 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1033, c1034);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1036 = std__ostream__put(t1021, r1035);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1037 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1036);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1020 = r1037;
  struct std__basic_ostream_char__std__char_traits_char__* t1038 = __retval1020;
  return t1038;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v1039) {
bb1040:
  struct std__deque_int__std__allocator_int__* this1041;
  struct std___Deque_iterator_int__int____int___ agg_tmp01042;
  struct std___Deque_iterator_int__int____int___ agg_tmp11043;
  this1041 = v1039;
  struct std__deque_int__std__allocator_int__* t1044 = this1041;
    struct std___Deque_iterator_int__int____int___ r1045 = std__deque_int__std__allocator_int_____begin(t1044);
    agg_tmp01042 = r1045;
    struct std___Deque_iterator_int__int____int___ r1046 = std__deque_int__std__allocator_int_____end(t1044);
    agg_tmp11043 = r1046;
    struct std___Deque_base_int__std__allocator_int__* base1047 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1044 + 0);
    struct std__allocator_int_* r1048 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1047);
    struct std___Deque_iterator_int__int____int___ t1049 = agg_tmp01042;
    struct std___Deque_iterator_int__int____int___ t1050 = agg_tmp11043;
    std__deque_int__std__allocator_int______M_destroy_data(t1044, t1049, t1050, r1048);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1051 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1044 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1051);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1052 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1044 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1052);
  }
  return;
}

// function: main
int main() {
bb1053:
  int __retval1054;
  struct std__deque_int__std__allocator_int__ mydeque1055;
  int ref_tmp01056;
  int ref_tmp11057;
  int c1058 = 0;
  __retval1054 = c1058;
  std__deque_int__std__allocator_int_____deque(&mydeque1055);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c1059 = 77;
    ref_tmp01056 = c1059;
    std__deque_int__std__allocator_int_____push_front(&mydeque1055, &ref_tmp01056);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1055);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r1060 = std__deque_int__std__allocator_int_____front(&mydeque1055);
    int t1061 = *r1060;
    int c1062 = 77;
    _Bool c1063 = ((t1061 == c1062)) ? 1 : 0;
    if (c1063) {
    } else {
      char* cast1064 = (char*)&(_str);
      char* c1065 = _str_1;
      unsigned int c1066 = 19;
      char* cast1067 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1064, c1065, c1066, cast1067);
    }
    int c1068 = 16;
    ref_tmp11057 = c1068;
    std__deque_int__std__allocator_int_____push_back(&mydeque1055, &ref_tmp11057);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1055);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r1069 = std__deque_int__std__allocator_int_____back(&mydeque1055);
    int t1070 = *r1069;
    int* r1071 = std__deque_int__std__allocator_int_____front(&mydeque1055);
    int t1072 = *r1071;
    int b1073 = t1072 - t1070;
    *r1071 = b1073;
    int* r1074 = std__deque_int__std__allocator_int_____front(&mydeque1055);
    int t1075 = *r1074;
    int c1076 = 61;
    _Bool c1077 = ((t1075 == c1076)) ? 1 : 0;
    if (c1077) {
    } else {
      char* cast1078 = (char*)&(_str_2);
      char* c1079 = _str_1;
      unsigned int c1080 = 23;
      char* cast1081 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1078, c1079, c1080, cast1081);
    }
    char* cast1082 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1083 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1082);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1055);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r1084 = std__deque_int__std__allocator_int_____front(&mydeque1055);
    int t1085 = *r1084;
    struct std__basic_ostream_char__std__char_traits_char__* r1086 = std__ostream__operator__(r1083, t1085);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1055);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1087 = std__ostream__operator___std__ostream_____(r1086, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1055);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1088 = 0;
    __retval1054 = c1088;
    int t1089 = __retval1054;
    int ret_val1090 = t1089;
    {
      std__deque_int__std__allocator_int______deque(&mydeque1055);
    }
    return ret_val1090;
  int t1091 = __retval1054;
  return t1091;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1092) {
bb1093:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1094;
  this1094 = v1092;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1095 = this1094;
  struct std__allocator_int_* base1096 = (struct std__allocator_int_*)((char *)t1095 + 0);
  std__allocator_int___allocator(base1096);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1097 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1095 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1097);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1098) {
bb1099:
  unsigned long __size1100;
  unsigned long __retval1101;
  __size1100 = v1098;
  unsigned long t1102 = __size1100;
  unsigned long c1103 = 512;
  _Bool c1104 = ((t1102 < c1103)) ? 1 : 0;
  unsigned long ternary1105;
  if (c1104) {
    unsigned long c1106 = 512;
    unsigned long t1107 = __size1100;
    unsigned long b1108 = c1106 / t1107;
    ternary1105 = (unsigned long)b1108;
  } else {
    unsigned long c1109 = 1;
    ternary1105 = (unsigned long)c1109;
  }
  __retval1101 = ternary1105;
  unsigned long t1110 = __retval1101;
  return t1110;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1111, unsigned long* v1112) {
bb1113:
  unsigned long* __a1114;
  unsigned long* __b1115;
  unsigned long* __retval1116;
  __a1114 = v1111;
  __b1115 = v1112;
    unsigned long* t1117 = __a1114;
    unsigned long t1118 = *t1117;
    unsigned long* t1119 = __b1115;
    unsigned long t1120 = *t1119;
    _Bool c1121 = ((t1118 < t1120)) ? 1 : 0;
    if (c1121) {
      unsigned long* t1122 = __b1115;
      __retval1116 = t1122;
      unsigned long* t1123 = __retval1116;
      return t1123;
    }
  unsigned long* t1124 = __a1114;
  __retval1116 = t1124;
  unsigned long* t1125 = __retval1116;
  return t1125;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1126) {
bb1127:
  struct std___Deque_base_int__std__allocator_int__* this1128;
  struct std__allocator_int_* __retval1129;
  this1128 = v1126;
  struct std___Deque_base_int__std__allocator_int__* t1130 = this1128;
  struct std__allocator_int_* base1131 = (struct std__allocator_int_*)((char *)&(t1130->_M_impl) + 0);
  __retval1129 = base1131;
  struct std__allocator_int_* t1132 = __retval1129;
  return t1132;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1133, struct std__allocator_int_* v1134) {
bb1135:
  struct std__allocator_int___* this1136;
  struct std__allocator_int_* unnamed1137;
  this1136 = v1133;
  unnamed1137 = v1134;
  struct std__allocator_int___* t1138 = this1136;
  struct std____new_allocator_int___* base1139 = (struct std____new_allocator_int___*)((char *)t1138 + 0);
  std____new_allocator_int______new_allocator(base1139);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1140) {
bb1141:
  struct std___Deque_base_int__std__allocator_int__* this1142;
  struct std__allocator_int___ __retval1143;
  this1142 = v1140;
  struct std___Deque_base_int__std__allocator_int__* t1144 = this1142;
  struct std__allocator_int_* r1145 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1144);
  std__allocator_int____allocator_int_(&__retval1143, r1145);
  struct std__allocator_int___ t1146 = __retval1143;
  return t1146;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1147:
  _Bool __retval1148;
    _Bool c1149 = 0;
    __retval1148 = c1149;
    _Bool t1150 = __retval1148;
    return t1150;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1151) {
bb1152:
  struct std____new_allocator_int___* this1153;
  unsigned long __retval1154;
  this1153 = v1151;
  struct std____new_allocator_int___* t1155 = this1153;
  unsigned long c1156 = 9223372036854775807;
  unsigned long c1157 = 8;
  unsigned long b1158 = c1156 / c1157;
  __retval1154 = b1158;
  unsigned long t1159 = __retval1154;
  return t1159;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1160, unsigned long v1161, void* v1162) {
bb1163:
  struct std____new_allocator_int___* this1164;
  unsigned long __n1165;
  void* unnamed1166;
  int** __retval1167;
  this1164 = v1160;
  __n1165 = v1161;
  unnamed1166 = v1162;
  struct std____new_allocator_int___* t1168 = this1164;
    unsigned long t1169 = __n1165;
    unsigned long r1170 = std____new_allocator_int_____M_max_size___const(t1168);
    _Bool c1171 = ((t1169 > r1170)) ? 1 : 0;
    if (c1171) {
        unsigned long t1172 = __n1165;
        unsigned long c1173 = -1;
        unsigned long c1174 = 8;
        unsigned long b1175 = c1173 / c1174;
        _Bool c1176 = ((t1172 > b1175)) ? 1 : 0;
        if (c1176) {
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
    unsigned long c1177 = 8;
    unsigned long c1178 = 16;
    _Bool c1179 = ((c1177 > c1178)) ? 1 : 0;
    if (c1179) {
      unsigned long __al1180;
      unsigned long c1181 = 8;
      __al1180 = c1181;
      unsigned long t1182 = __n1165;
      unsigned long c1183 = 8;
      unsigned long b1184 = t1182 * c1183;
      unsigned long t1185 = __al1180;
      void* r1186 = operator_new_2(b1184, t1185);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1187 = (int**)r1186;
      __retval1167 = cast1187;
      int** t1188 = __retval1167;
      return t1188;
    }
  unsigned long t1189 = __n1165;
  unsigned long c1190 = 8;
  unsigned long b1191 = t1189 * c1190;
  void* r1192 = operator_new(b1191);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1193 = (int**)r1192;
  __retval1167 = cast1193;
  int** t1194 = __retval1167;
  return t1194;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1195, unsigned long v1196) {
bb1197:
  struct std__allocator_int___* this1198;
  unsigned long __n1199;
  int** __retval1200;
  this1198 = v1195;
  __n1199 = v1196;
  struct std__allocator_int___* t1201 = this1198;
    _Bool r1202 = std____is_constant_evaluated();
    if (r1202) {
        unsigned long t1203 = __n1199;
        unsigned long c1204 = 8;
        unsigned long ovr1205;
        _Bool ovf1206 = __builtin_mul_overflow(t1203, c1204, &ovr1205);
        __n1199 = ovr1205;
        if (ovf1206) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1207 = __n1199;
      void* r1208 = operator_new(t1207);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1209 = (int**)r1208;
      __retval1200 = cast1209;
      int** t1210 = __retval1200;
      return t1210;
    }
  struct std____new_allocator_int___* base1211 = (struct std____new_allocator_int___*)((char *)t1201 + 0);
  unsigned long t1212 = __n1199;
  void* c1213 = ((void*)0);
  int** r1214 = std____new_allocator_int____allocate(base1211, t1212, c1213);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1200 = r1214;
  int** t1215 = __retval1200;
  return t1215;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1216, unsigned long v1217) {
bb1218:
  struct std__allocator_int___* __a1219;
  unsigned long __n1220;
  int** __retval1221;
  __a1219 = v1216;
  __n1220 = v1217;
  struct std__allocator_int___* t1222 = __a1219;
  unsigned long t1223 = __n1220;
  int** r1224 = std__allocator_int____allocate(t1222, t1223);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1221 = r1224;
  int** t1225 = __retval1221;
  return t1225;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1226, unsigned long v1227) {
bb1228:
  struct std___Deque_base_int__std__allocator_int__* this1229;
  unsigned long __n1230;
  int** __retval1231;
  struct std__allocator_int___ __map_alloc1232;
  this1229 = v1226;
  __n1230 = v1227;
  struct std___Deque_base_int__std__allocator_int__* t1233 = this1229;
  struct std__allocator_int___ r1234 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1233);
  __map_alloc1232 = r1234;
  unsigned long t1235 = __n1230;
  int** r1236 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1232, t1235);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1231 = r1236;
  int** t1237 = __retval1231;
  return t1237;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1238) {
bb1239:
  struct std____new_allocator_int_* this1240;
  unsigned long __retval1241;
  this1240 = v1238;
  struct std____new_allocator_int_* t1242 = this1240;
  unsigned long c1243 = 9223372036854775807;
  unsigned long c1244 = 4;
  unsigned long b1245 = c1243 / c1244;
  __retval1241 = b1245;
  unsigned long t1246 = __retval1241;
  return t1246;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1247, unsigned long v1248, void* v1249) {
bb1250:
  struct std____new_allocator_int_* this1251;
  unsigned long __n1252;
  void* unnamed1253;
  int* __retval1254;
  this1251 = v1247;
  __n1252 = v1248;
  unnamed1253 = v1249;
  struct std____new_allocator_int_* t1255 = this1251;
    unsigned long t1256 = __n1252;
    unsigned long r1257 = std____new_allocator_int____M_max_size___const(t1255);
    _Bool c1258 = ((t1256 > r1257)) ? 1 : 0;
    if (c1258) {
        unsigned long t1259 = __n1252;
        unsigned long c1260 = -1;
        unsigned long c1261 = 4;
        unsigned long b1262 = c1260 / c1261;
        _Bool c1263 = ((t1259 > b1262)) ? 1 : 0;
        if (c1263) {
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
    unsigned long c1264 = 4;
    unsigned long c1265 = 16;
    _Bool c1266 = ((c1264 > c1265)) ? 1 : 0;
    if (c1266) {
      unsigned long __al1267;
      unsigned long c1268 = 4;
      __al1267 = c1268;
      unsigned long t1269 = __n1252;
      unsigned long c1270 = 4;
      unsigned long b1271 = t1269 * c1270;
      unsigned long t1272 = __al1267;
      void* r1273 = operator_new_2(b1271, t1272);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1274 = (int*)r1273;
      __retval1254 = cast1274;
      int* t1275 = __retval1254;
      return t1275;
    }
  unsigned long t1276 = __n1252;
  unsigned long c1277 = 4;
  unsigned long b1278 = t1276 * c1277;
  void* r1279 = operator_new(b1278);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1280 = (int*)r1279;
  __retval1254 = cast1280;
  int* t1281 = __retval1254;
  return t1281;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1282, unsigned long v1283) {
bb1284:
  struct std__allocator_int_* this1285;
  unsigned long __n1286;
  int* __retval1287;
  this1285 = v1282;
  __n1286 = v1283;
  struct std__allocator_int_* t1288 = this1285;
    _Bool r1289 = std____is_constant_evaluated();
    if (r1289) {
        unsigned long t1290 = __n1286;
        unsigned long c1291 = 4;
        unsigned long ovr1292;
        _Bool ovf1293 = __builtin_mul_overflow(t1290, c1291, &ovr1292);
        __n1286 = ovr1292;
        if (ovf1293) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1294 = __n1286;
      void* r1295 = operator_new(t1294);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1296 = (int*)r1295;
      __retval1287 = cast1296;
      int* t1297 = __retval1287;
      return t1297;
    }
  struct std____new_allocator_int_* base1298 = (struct std____new_allocator_int_*)((char *)t1288 + 0);
  unsigned long t1299 = __n1286;
  void* c1300 = ((void*)0);
  int* r1301 = std____new_allocator_int___allocate(base1298, t1299, c1300);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1287 = r1301;
  int* t1302 = __retval1287;
  return t1302;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1303, unsigned long v1304) {
bb1305:
  struct std__allocator_int_* __a1306;
  unsigned long __n1307;
  int* __retval1308;
  __a1306 = v1303;
  __n1307 = v1304;
  struct std__allocator_int_* t1309 = __a1306;
  unsigned long t1310 = __n1307;
  int* r1311 = std__allocator_int___allocate(t1309, t1310);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1308 = r1311;
  int* t1312 = __retval1308;
  return t1312;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1313) {
bb1314:
  struct std___Deque_base_int__std__allocator_int__* this1315;
  int* __retval1316;
  this1315 = v1313;
  struct std___Deque_base_int__std__allocator_int__* t1317 = this1315;
  struct std__allocator_int_* base1318 = (struct std__allocator_int_*)((char *)&(t1317->_M_impl) + 0);
  unsigned long c1319 = 4;
  unsigned long r1320 = std____deque_buf_size(c1319);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1321 = std__allocator_traits_std__allocator_int_____allocate(base1318, r1320);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1316 = r1321;
  int* t1322 = __retval1316;
  return t1322;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1323, int* v1324, unsigned long v1325) {
bb1326:
  struct std____new_allocator_int_* this1327;
  int* __p1328;
  unsigned long __n1329;
  this1327 = v1323;
  __p1328 = v1324;
  __n1329 = v1325;
  struct std____new_allocator_int_* t1330 = this1327;
    unsigned long c1331 = 4;
    unsigned long c1332 = 16;
    _Bool c1333 = ((c1331 > c1332)) ? 1 : 0;
    if (c1333) {
      int* t1334 = __p1328;
      void* cast1335 = (void*)t1334;
      unsigned long t1336 = __n1329;
      unsigned long c1337 = 4;
      unsigned long b1338 = t1336 * c1337;
      unsigned long c1339 = 4;
      operator_delete_3(cast1335, b1338, c1339);
      return;
    }
  int* t1340 = __p1328;
  void* cast1341 = (void*)t1340;
  unsigned long t1342 = __n1329;
  unsigned long c1343 = 4;
  unsigned long b1344 = t1342 * c1343;
  operator_delete_2(cast1341, b1344);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1345, int* v1346, unsigned long v1347) {
bb1348:
  struct std__allocator_int_* this1349;
  int* __p1350;
  unsigned long __n1351;
  this1349 = v1345;
  __p1350 = v1346;
  __n1351 = v1347;
  struct std__allocator_int_* t1352 = this1349;
    _Bool r1353 = std____is_constant_evaluated();
    if (r1353) {
      int* t1354 = __p1350;
      void* cast1355 = (void*)t1354;
      operator_delete(cast1355);
      return;
    }
  struct std____new_allocator_int_* base1356 = (struct std____new_allocator_int_*)((char *)t1352 + 0);
  int* t1357 = __p1350;
  unsigned long t1358 = __n1351;
  std____new_allocator_int___deallocate(base1356, t1357, t1358);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1359, int* v1360, unsigned long v1361) {
bb1362:
  struct std__allocator_int_* __a1363;
  int* __p1364;
  unsigned long __n1365;
  __a1363 = v1359;
  __p1364 = v1360;
  __n1365 = v1361;
  struct std__allocator_int_* t1366 = __a1363;
  int* t1367 = __p1364;
  unsigned long t1368 = __n1365;
  std__allocator_int___deallocate(t1366, t1367, t1368);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1369, int* v1370) {
bb1371:
  struct std___Deque_base_int__std__allocator_int__* this1372;
  int* __p1373;
  this1372 = v1369;
  __p1373 = v1370;
  struct std___Deque_base_int__std__allocator_int__* t1374 = this1372;
  struct std__allocator_int_* base1375 = (struct std__allocator_int_*)((char *)&(t1374->_M_impl) + 0);
  int* t1376 = __p1373;
  unsigned long c1377 = 4;
  unsigned long r1378 = std____deque_buf_size(c1377);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1375, t1376, r1378);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1379, int** v1380, int** v1381) {
bb1382:
  struct std___Deque_base_int__std__allocator_int__* this1383;
  int** __nstart1384;
  int** __nfinish1385;
  this1383 = v1379;
  __nstart1384 = v1380;
  __nfinish1385 = v1381;
  struct std___Deque_base_int__std__allocator_int__* t1386 = this1383;
    int** __n1387;
    int** t1388 = __nstart1384;
    __n1387 = t1388;
    while (1) {
      int** t1390 = __n1387;
      int** t1391 = __nfinish1385;
      _Bool c1392 = ((t1390 < t1391)) ? 1 : 0;
      if (!c1392) break;
      int** t1393 = __n1387;
      int* t1394 = *t1393;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1386, t1394);
    for_step1389: ;
      int** t1395 = __n1387;
      int c1396 = 1;
      int** ptr1397 = &(t1395)[c1396];
      __n1387 = ptr1397;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1398, int** v1399, int** v1400) {
bb1401:
  struct std___Deque_base_int__std__allocator_int__* this1402;
  int** __nstart1403;
  int** __nfinish1404;
  int** __cur1405;
  this1402 = v1398;
  __nstart1403 = v1399;
  __nfinish1404 = v1400;
  struct std___Deque_base_int__std__allocator_int__* t1406 = this1402;
        int** t1408 = __nstart1403;
        __cur1405 = t1408;
        while (1) {
          int** t1410 = __cur1405;
          int** t1411 = __nfinish1404;
          _Bool c1412 = ((t1410 < t1411)) ? 1 : 0;
          if (!c1412) break;
          int* r1413 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1406);
          if (__cir_exc_active) {
            goto cir_try_dispatch1407;
          }
          int** t1414 = __cur1405;
          *t1414 = r1413;
        for_step1409: ;
          int** t1415 = __cur1405;
          int c1416 = 1;
          int** ptr1417 = &(t1415)[c1416];
          __cur1405 = ptr1417;
        }
    cir_try_dispatch1407: ;
    if (__cir_exc_active) {
    {
      int ca_tok1418 = 0;
      void* ca_exn1419 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1420 = __nstart1403;
        int** t1421 = __cur1405;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1406, t1420, t1421);
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
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1422, int** v1423, unsigned long v1424) {
bb1425:
  struct std____new_allocator_int___* this1426;
  int** __p1427;
  unsigned long __n1428;
  this1426 = v1422;
  __p1427 = v1423;
  __n1428 = v1424;
  struct std____new_allocator_int___* t1429 = this1426;
    unsigned long c1430 = 8;
    unsigned long c1431 = 16;
    _Bool c1432 = ((c1430 > c1431)) ? 1 : 0;
    if (c1432) {
      int** t1433 = __p1427;
      void* cast1434 = (void*)t1433;
      unsigned long t1435 = __n1428;
      unsigned long c1436 = 8;
      unsigned long b1437 = t1435 * c1436;
      unsigned long c1438 = 8;
      operator_delete_3(cast1434, b1437, c1438);
      return;
    }
  int** t1439 = __p1427;
  void* cast1440 = (void*)t1439;
  unsigned long t1441 = __n1428;
  unsigned long c1442 = 8;
  unsigned long b1443 = t1441 * c1442;
  operator_delete_2(cast1440, b1443);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1444, int** v1445, unsigned long v1446) {
bb1447:
  struct std__allocator_int___* this1448;
  int** __p1449;
  unsigned long __n1450;
  this1448 = v1444;
  __p1449 = v1445;
  __n1450 = v1446;
  struct std__allocator_int___* t1451 = this1448;
    _Bool r1452 = std____is_constant_evaluated();
    if (r1452) {
      int** t1453 = __p1449;
      void* cast1454 = (void*)t1453;
      operator_delete(cast1454);
      return;
    }
  struct std____new_allocator_int___* base1455 = (struct std____new_allocator_int___*)((char *)t1451 + 0);
  int** t1456 = __p1449;
  unsigned long t1457 = __n1450;
  std____new_allocator_int____deallocate(base1455, t1456, t1457);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1458, int** v1459, unsigned long v1460) {
bb1461:
  struct std__allocator_int___* __a1462;
  int** __p1463;
  unsigned long __n1464;
  __a1462 = v1458;
  __p1463 = v1459;
  __n1464 = v1460;
  struct std__allocator_int___* t1465 = __a1462;
  int** t1466 = __p1463;
  unsigned long t1467 = __n1464;
  std__allocator_int____deallocate(t1465, t1466, t1467);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1468, int** v1469, unsigned long v1470) {
bb1471:
  struct std___Deque_base_int__std__allocator_int__* this1472;
  int** __p1473;
  unsigned long __n1474;
  struct std__allocator_int___ __map_alloc1475;
  this1472 = v1468;
  __p1473 = v1469;
  __n1474 = v1470;
  struct std___Deque_base_int__std__allocator_int__* t1476 = this1472;
  struct std__allocator_int___ r1477 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1476);
  __map_alloc1475 = r1477;
  int** t1478 = __p1473;
  unsigned long t1479 = __n1474;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1475, t1478, t1479);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1480:
  unsigned long __retval1481;
  unsigned long c1482 = 4;
  unsigned long r1483 = std____deque_buf_size(c1482);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1481 = r1483;
  unsigned long t1484 = __retval1481;
  return t1484;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1485, int** v1486) {
bb1487:
  struct std___Deque_iterator_int__int____int___* this1488;
  int** __new_node1489;
  this1488 = v1485;
  __new_node1489 = v1486;
  struct std___Deque_iterator_int__int____int___* t1490 = this1488;
  int** t1491 = __new_node1489;
  t1490->_M_node = t1491;
  int** t1492 = __new_node1489;
  int* t1493 = *t1492;
  t1490->_M_first = t1493;
  int* t1494 = t1490->_M_first;
  unsigned long r1495 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1496 = (long)r1495;
  int* ptr1497 = &(t1494)[cast1496];
  t1490->_M_last = ptr1497;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1498, unsigned long v1499) {
bb1500:
  struct std___Deque_base_int__std__allocator_int__* this1501;
  unsigned long __num_elements1502;
  unsigned long __num_nodes1503;
  unsigned long ref_tmp01504;
  unsigned long ref_tmp11505;
  int** __nstart1506;
  int** __nfinish1507;
  this1501 = v1498;
  __num_elements1502 = v1499;
  struct std___Deque_base_int__std__allocator_int__* t1508 = this1501;
  unsigned long t1509 = __num_elements1502;
  unsigned long c1510 = 4;
  unsigned long r1511 = std____deque_buf_size(c1510);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1512 = t1509 / r1511;
  unsigned long c1513 = 1;
  unsigned long b1514 = b1512 + c1513;
  __num_nodes1503 = b1514;
  unsigned long c1515 = 8;
  ref_tmp01504 = c1515;
  unsigned long t1516 = __num_nodes1503;
  unsigned long c1517 = 2;
  unsigned long b1518 = t1516 + c1517;
  ref_tmp11505 = b1518;
  unsigned long* r1519 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01504, &ref_tmp11505);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1520 = *r1519;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1521 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  base1521->_M_map_size = t1520;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1522 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  unsigned long t1523 = base1522->_M_map_size;
  int** r1524 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1508, t1523);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1525 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  base1525->_M_map = r1524;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1526 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  int** t1527 = base1526->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1528 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  unsigned long t1529 = base1528->_M_map_size;
  unsigned long t1530 = __num_nodes1503;
  unsigned long b1531 = t1529 - t1530;
  unsigned long c1532 = 2;
  unsigned long b1533 = b1531 / c1532;
  int** ptr1534 = &(t1527)[b1533];
  __nstart1506 = ptr1534;
  int** t1535 = __nstart1506;
  unsigned long t1536 = __num_nodes1503;
  int** ptr1537 = &(t1535)[t1536];
  __nfinish1507 = ptr1537;
      int** t1539 = __nstart1506;
      int** t1540 = __nfinish1507;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1508, t1539, t1540);
      if (__cir_exc_active) {
        goto cir_try_dispatch1538;
      }
    cir_try_dispatch1538: ;
    if (__cir_exc_active) {
    {
      int ca_tok1541 = 0;
      void* ca_exn1542 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1543 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
        int** t1544 = base1543->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1545 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
        unsigned long t1546 = base1545->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1508, t1544, t1546);
        int** c1547 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1548 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
        base1548->_M_map = c1547;
        unsigned long c1549 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1550 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
        base1550->_M_map_size = c1549;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1551 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  int** t1552 = __nstart1506;
  std___Deque_iterator_int__int___int_____M_set_node(&base1551->_M_start, t1552);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1553 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  int** t1554 = __nfinish1507;
  int c1555 = -1;
  int** ptr1556 = &(t1554)[c1555];
  std___Deque_iterator_int__int___int_____M_set_node(&base1553->_M_finish, ptr1556);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1557 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  int* t1558 = base1557->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1559 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  base1559->_M_start._M_cur = t1558;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1560 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  int* t1561 = base1560->_M_finish._M_first;
  unsigned long t1562 = __num_elements1502;
  unsigned long c1563 = 4;
  unsigned long r1564 = std____deque_buf_size(c1563);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1565 = t1562 % r1564;
  int* ptr1566 = &(t1561)[b1565];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1567 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1508->_M_impl) + 0);
  base1567->_M_finish._M_cur = ptr1566;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1568) {
bb1569:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1570;
  this1570 = v1568;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1571 = this1570;
  {
    struct std__allocator_int_* base1572 = (struct std__allocator_int_*)((char *)t1571 + 0);
    std__allocator_int____allocator(base1572);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1573) {
bb1574:
  struct std___Deque_base_int__std__allocator_int__* this1575;
  this1575 = v1573;
  struct std___Deque_base_int__std__allocator_int__* t1576 = this1575;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1576->_M_impl);
    unsigned long c1577 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1576, c1577);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1576->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1578) {
bb1579:
  struct std___Deque_base_int__std__allocator_int__* this1580;
  this1580 = v1578;
  struct std___Deque_base_int__std__allocator_int__* t1581 = this1580;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1582 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
      int** t1583 = base1582->_M_map;
      _Bool cast1584 = (_Bool)t1583;
      if (cast1584) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1585 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
        int** t1586 = base1585->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1587 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
        int** t1588 = base1587->_M_finish._M_node;
        int c1589 = 1;
        int** ptr1590 = &(t1588)[c1589];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1581, t1586, ptr1590);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1591 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
        int** t1592 = base1591->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1593 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1581->_M_impl) + 0);
        unsigned long t1594 = base1593->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1581, t1592, t1594);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1581->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1595) {
bb1596:
  struct std____new_allocator_int_* this1597;
  this1597 = v1595;
  struct std____new_allocator_int_* t1598 = this1597;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1599) {
bb1600:
  struct std__allocator_int_* this1601;
  this1601 = v1599;
  struct std__allocator_int_* t1602 = this1601;
  struct std____new_allocator_int_* base1603 = (struct std____new_allocator_int_*)((char *)t1602 + 0);
  std____new_allocator_int_____new_allocator(base1603);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1604) {
bb1605:
  struct std___Deque_iterator_int__int____int___* this1606;
  this1606 = v1604;
  struct std___Deque_iterator_int__int____int___* t1607 = this1606;
  int* c1608 = ((void*)0);
  t1607->_M_cur = c1608;
  int* c1609 = ((void*)0);
  t1607->_M_first = c1609;
  int* c1610 = ((void*)0);
  t1607->_M_last = c1610;
  int** c1611 = ((void*)0);
  t1607->_M_node = c1611;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1612) {
bb1613:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1614;
  this1614 = v1612;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1615 = this1614;
  int** c1616 = ((void*)0);
  t1615->_M_map = c1616;
  unsigned long c1617 = 0;
  t1615->_M_map_size = c1617;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1615->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1615->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1618) {
bb1619:
  struct std__allocator_int_* this1620;
  this1620 = v1618;
  struct std__allocator_int_* t1621 = this1620;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1622) {
bb1623:
  struct std____new_allocator_int___* this1624;
  this1624 = v1622;
  struct std____new_allocator_int___* t1625 = this1624;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1626) {
bb1627:
  int* __location1628;
  __location1628 = v1626;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1629, int* v1630) {
bb1631:
  int* __first1632;
  int* __last1633;
  __first1632 = v1629;
  __last1633 = v1630;
      _Bool r1634 = std____is_constant_evaluated();
      if (r1634) {
          while (1) {
            int* t1636 = __first1632;
            int* t1637 = __last1633;
            _Bool c1638 = ((t1636 != t1637)) ? 1 : 0;
            if (!c1638) break;
            int* t1639 = __first1632;
            void_std__destroy_at_int_(t1639);
            if (__cir_exc_active) {
              return;
            }
          for_step1635: ;
            int* t1640 = __first1632;
            int c1641 = 1;
            int* ptr1642 = &(t1640)[c1641];
            __first1632 = ptr1642;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1643, int* v1644, struct std__allocator_int_* v1645) {
bb1646:
  int* __first1647;
  int* __last1648;
  struct std__allocator_int_* unnamed1649;
  __first1647 = v1643;
  __last1648 = v1644;
  unnamed1649 = v1645;
  int* t1650 = __first1647;
  int* t1651 = __last1648;
  void_std___Destroy_int__(t1650, t1651);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1652:
  unsigned long __retval1653;
  unsigned long c1654 = 4;
  unsigned long r1655 = std____deque_buf_size(c1654);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1653 = r1655;
  unsigned long t1656 = __retval1653;
  return t1656;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1657, struct std___Deque_iterator_int__int____int___ v1658, struct std___Deque_iterator_int__int____int___ v1659) {
bb1660:
  struct std__deque_int__std__allocator_int__* this1661;
  struct std___Deque_iterator_int__int____int___ __first1662;
  struct std___Deque_iterator_int__int____int___ __last1663;
  this1661 = v1657;
  __first1662 = v1658;
  __last1663 = v1659;
  struct std__deque_int__std__allocator_int__* t1664 = this1661;
    int** __node1665;
    int** t1666 = __first1662._M_node;
    int c1667 = 1;
    int** ptr1668 = &(t1666)[c1667];
    __node1665 = ptr1668;
    while (1) {
      int** t1670 = __node1665;
      int** t1671 = __last1663._M_node;
      _Bool c1672 = ((t1670 < t1671)) ? 1 : 0;
      if (!c1672) break;
      int** t1673 = __node1665;
      int* t1674 = *t1673;
      int** t1675 = __node1665;
      int* t1676 = *t1675;
      unsigned long r1677 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1678 = &(t1676)[r1677];
      struct std___Deque_base_int__std__allocator_int__* base1679 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1664 + 0);
      struct std__allocator_int_* r1680 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1679);
      void_std___Destroy_int___int_(t1674, ptr1678, r1680);
      if (__cir_exc_active) {
        return;
      }
    for_step1669: ;
      int** t1681 = __node1665;
      int c1682 = 1;
      int** ptr1683 = &(t1681)[c1682];
      __node1665 = ptr1683;
    }
    int** t1684 = __first1662._M_node;
    int** t1685 = __last1663._M_node;
    _Bool c1686 = ((t1684 != t1685)) ? 1 : 0;
    if (c1686) {
      int* t1687 = __first1662._M_cur;
      int* t1688 = __first1662._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1689 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1664 + 0);
      struct std__allocator_int_* r1690 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1689);
      void_std___Destroy_int___int_(t1687, t1688, r1690);
      if (__cir_exc_active) {
        return;
      }
      int* t1691 = __last1663._M_first;
      int* t1692 = __last1663._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1693 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1664 + 0);
      struct std__allocator_int_* r1694 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1693);
      void_std___Destroy_int___int_(t1691, t1692, r1694);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1695 = __first1662._M_cur;
      int* t1696 = __last1663._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1697 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1664 + 0);
      struct std__allocator_int_* r1698 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1697);
      void_std___Destroy_int___int_(t1695, t1696, r1698);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1699, struct std___Deque_iterator_int__int____int___* v1700) {
bb1701:
  struct std___Deque_iterator_int__int____int___* this1702;
  struct std___Deque_iterator_int__int____int___* __x1703;
  this1702 = v1699;
  __x1703 = v1700;
  struct std___Deque_iterator_int__int____int___* t1704 = this1702;
  struct std___Deque_iterator_int__int____int___* t1705 = __x1703;
  int* t1706 = t1705->_M_cur;
  t1704->_M_cur = t1706;
  struct std___Deque_iterator_int__int____int___* t1707 = __x1703;
  int* t1708 = t1707->_M_first;
  t1704->_M_first = t1708;
  struct std___Deque_iterator_int__int____int___* t1709 = __x1703;
  int* t1710 = t1709->_M_last;
  t1704->_M_last = t1710;
  struct std___Deque_iterator_int__int____int___* t1711 = __x1703;
  int** t1712 = t1711->_M_node;
  t1704->_M_node = t1712;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1713, struct std___Deque_iterator_int__int____int___ v1714, struct std___Deque_iterator_int__int____int___ v1715, struct std__allocator_int_* v1716) {
bb1717:
  struct std__deque_int__std__allocator_int__* this1718;
  struct std___Deque_iterator_int__int____int___ __first1719;
  struct std___Deque_iterator_int__int____int___ __last1720;
  struct std__allocator_int_* unnamed1721;
  this1718 = v1713;
  __first1719 = v1714;
  __last1720 = v1715;
  unnamed1721 = v1716;
  struct std__deque_int__std__allocator_int__* t1722 = this1718;
    _Bool c1723 = 0;
    if (c1723) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01724;
      struct std___Deque_iterator_int__int____int___ agg_tmp11725;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01724, &__first1719);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11725, &__last1720);
      struct std___Deque_iterator_int__int____int___ t1726 = agg_tmp01724;
      struct std___Deque_iterator_int__int____int___ t1727 = agg_tmp11725;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1722, t1726, t1727);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1728) {
bb1729:
  struct std__deque_int__std__allocator_int__* this1730;
  struct std___Deque_iterator_int__int____int___ __retval1731;
  this1730 = v1728;
  struct std__deque_int__std__allocator_int__* t1732 = this1730;
  struct std___Deque_base_int__std__allocator_int__* base1733 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1732 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1734 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1733->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1731, &base1734->_M_start);
  struct std___Deque_iterator_int__int____int___ t1735 = __retval1731;
  return t1735;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1736) {
bb1737:
  struct std__deque_int__std__allocator_int__* this1738;
  struct std___Deque_iterator_int__int____int___ __retval1739;
  this1738 = v1736;
  struct std__deque_int__std__allocator_int__* t1740 = this1738;
  struct std___Deque_base_int__std__allocator_int__* base1741 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1740 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1742 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1741->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1739, &base1742->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1743 = __retval1739;
  return t1743;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1744) {
bb1745:
  struct std___Deque_base_int__std__allocator_int__* this1746;
  struct std__allocator_int_* __retval1747;
  this1746 = v1744;
  struct std___Deque_base_int__std__allocator_int__* t1748 = this1746;
  struct std__allocator_int_* base1749 = (struct std__allocator_int_*)((char *)&(t1748->_M_impl) + 0);
  __retval1747 = base1749;
  struct std__allocator_int_* t1750 = __retval1747;
  return t1750;
}

