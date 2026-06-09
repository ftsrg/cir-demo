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
struct std___Deque_iterator_double__double____double___ { double* _M_cur; double* _M_first; double* _M_last; double** _M_node; };
struct std____new_allocator_double_ { unsigned char __field0; };
struct std____new_allocator_double___ { unsigned char __field0; };
struct std__allocator_double_ { unsigned char __field0; };
struct std__allocator_double___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_double__std__allocator_double_____Deque_impl_data { double** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_double__double____double___ _M_start; struct std___Deque_iterator_double__double____double___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_double__std__allocator_double_____Deque_impl { struct std___Deque_base_double__std__allocator_double_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_double__std__allocator_double__ { struct std___Deque_base_double__std__allocator_double_____Deque_impl _M_impl; };
struct std__deque_double__std__allocator_double__ { struct std___Deque_base_double__std__allocator_double__ __field0; };
struct std__queue_double__std__deque_double__std__allocator_double___ { struct std__deque_double__std__allocator_double__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[22] = "Popping from values: ";
char _str_1[48] = "cannot create std::deque larger than max_size()";
char _str_2[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE4backEv[85] = "reference std::deque<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_3[15] = "!this->empty()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt5queueIdSt5dequeIdSaIdEEE5frontEv[85] = "reference std::queue<double>::front() [_Tp = double, _Sequence = std::deque<double>]";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE5frontEv[86] = "reference std::deque<double>::front() [_Tp = double, _Alloc = std::allocator<double>]";
char __PRETTY_FUNCTION____ZNSt5queueIdSt5dequeIdSaIdEEE3popEv[78] = "void std::queue<double>::pop() [_Tp = double, _Sequence = std::deque<double>]";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE9pop_frontEv[85] = "void std::deque<double>::pop_front() [_Tp = double, _Alloc = std::allocator<double>]";
void std__queue_double__std__deque_double__std__allocator_double_______queue_std__deque_double__std__allocator_double_____void_(struct std__queue_double__std__deque_double__std__allocator_double___* p0);
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* p0, double* p1);
void void_std__allocator_traits_std__allocator_double_____construct_double__double_(struct std__allocator_double_* p0, double* p1, double* p2);
long std__operator_(struct std___Deque_iterator_double__double____double___* p0, struct std___Deque_iterator_double__double____double___* p1);
unsigned long std__deque_double__std__allocator_double_____size___const(struct std__deque_double__std__allocator_double__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_double__std__allocator_double______S_max_size(struct std__allocator_double_* p0);
unsigned long std__deque_double__std__allocator_double_____max_size___const(struct std__deque_double__std__allocator_double__* p0);
extern void std____throw_length_error(char* p0);
double** double___std____niter_wrap_double___(double*** p0, double** p1);
long std__iterator_traits_double_____difference_type_std____distance_double___(double** p0, double** p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_double_____iterator_category_std____iterator_category_double___(double*** p0);
long std__iterator_traits_double_____difference_type_std__distance_double___(double** p0, double** p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__double____double___(double*** p0, double*** p1);
double** double___std____copy_move_a2_false__double____double____double___(double** p0, double** p1, double** p2);
double** double___std____copy_move_a1_false__double____double___(double** p0, double** p1, double** p2);
double** double___std____niter_base_double___(double** p0);
double** double___std____copy_move_a_false__double____double___(double** p0, double** p1, double** p2);
double** double___std____miter_base_double___(double** p0);
double** double___std__copy_double____double___(double** p0, double** p1, double** p2);
_Bool std__is_constant_evaluated();
void void_std____advance_double____long_(double*** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_double____long_(double*** p0, long p1);
double** double___std____copy_move_backward_a2_false__double____double___(double** p0, double** p1, double** p2);
double** double___std____copy_move_backward_a1_false__double____double___(double** p0, double** p1, double** p2);
double** double___std____copy_move_backward_a_false__double____double___(double** p0, double** p1, double** p2);
double** double___std__copy_backward_double____double___(double** p0, double** p1, double** p2);
void std__deque_double__std__allocator_double______M_reallocate_map(struct std__deque_double__std__allocator_double__* p0, unsigned long p1, _Bool p2);
void std__deque_double__std__allocator_double______M_reserve_map_at_back(struct std__deque_double__std__allocator_double__* p0, unsigned long p1);
void void_std__deque_double__std__allocator_double______M_push_back_aux_double_(struct std__deque_double__std__allocator_double__* p0, double* p1);
_Bool std__operator__(struct std___Deque_iterator_double__double____double___* p0, struct std___Deque_iterator_double__double____double___* p1);
_Bool std__deque_double__std__allocator_double_____empty___const(struct std__deque_double__std__allocator_double__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_double__double____double___* std___Deque_iterator_double__double___double____operator__(struct std___Deque_iterator_double__double____double___* p0);
double* std___Deque_iterator_double__double___double____operator____const(struct std___Deque_iterator_double__double____double___* p0);
double* std__deque_double__std__allocator_double_____back(struct std__deque_double__std__allocator_double__* p0);
double* double__std__deque_double__std__allocator_double_____emplace_back_double_(struct std__deque_double__std__allocator_double__* p0, double* p1);
void std__deque_double__std__allocator_double_____push_back(struct std__deque_double__std__allocator_double__* p0, double* p1);
void std__queue_double__std__deque_double__std__allocator_double_______push(struct std__queue_double__std__deque_double__std__allocator_double___* p0, double* p1);
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
_Bool std__queue_double__std__deque_double__std__allocator_double_______empty___const(struct std__queue_double__std__deque_double__std__allocator_double___* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
double* std__deque_double__std__allocator_double_____front(struct std__deque_double__std__allocator_double__* p0);
double* std__queue_double__std__deque_double__std__allocator_double_______front(struct std__queue_double__std__deque_double__std__allocator_double___* p0);
void void_std__allocator_traits_std__allocator_double_____destroy_double_(struct std__allocator_double_* p0, double* p1);
void std__deque_double__std__allocator_double______M_pop_front_aux(struct std__deque_double__std__allocator_double__* p0);
void std__deque_double__std__allocator_double_____pop_front(struct std__deque_double__std__allocator_double__* p0);
void std__queue_double__std__deque_double__std__allocator_double_______pop(struct std__queue_double__std__deque_double__std__allocator_double___* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__queue_double__std__deque_double__std__allocator_double________queue(struct std__queue_double__std__deque_double__std__allocator_double___* p0);
int main();
void std__deque_double__std__allocator_double______deque(struct std__deque_double__std__allocator_double__* p0);
_Bool std____is_constant_evaluated();
void void_std__destroy_at_double_(double* p0);
void void_std___Destroy_double__(double* p0, double* p1);
void void_std___Destroy_double___double_(double* p0, double* p1, struct std__allocator_double_* p2);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long std__deque_double__std__allocator_double______S_buffer_size();
void std__deque_double__std__allocator_double______M_destroy_data_aux(struct std__deque_double__std__allocator_double__* p0, struct std___Deque_iterator_double__double____double___ p1, struct std___Deque_iterator_double__double____double___ p2);
void std___Deque_iterator_double__double___double_____Deque_iterator(struct std___Deque_iterator_double__double____double___* p0, struct std___Deque_iterator_double__double____double___* p1);
void std__deque_double__std__allocator_double______M_destroy_data(struct std__deque_double__std__allocator_double__* p0, struct std___Deque_iterator_double__double____double___ p1, struct std___Deque_iterator_double__double____double___ p2, struct std__allocator_double_* p3);
struct std___Deque_iterator_double__double____double___ std__deque_double__std__allocator_double_____begin(struct std__deque_double__std__allocator_double__* p0);
struct std___Deque_iterator_double__double____double___ std__deque_double__std__allocator_double_____end(struct std__deque_double__std__allocator_double__* p0);
struct std__allocator_double_* std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(struct std___Deque_base_double__std__allocator_double__* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_double___deallocate(struct std____new_allocator_double_* p0, double* p1, unsigned long p2);
void std__allocator_double___deallocate(struct std__allocator_double_* p0, double* p1, unsigned long p2);
void std__allocator_traits_std__allocator_double_____deallocate(struct std__allocator_double_* p0, double* p1, unsigned long p2);
void std___Deque_base_double__std__allocator_double______M_deallocate_node(struct std___Deque_base_double__std__allocator_double__* p0, double* p1);
void std___Deque_base_double__std__allocator_double______M_destroy_nodes(struct std___Deque_base_double__std__allocator_double__* p0, double** p1, double** p2);
struct std__allocator_double_* std___Deque_base_double__std__allocator_double______M_get_Tp_allocator___const(struct std___Deque_base_double__std__allocator_double__* p0);
void std__allocator_double____allocator_double_(struct std__allocator_double___* p0, struct std__allocator_double_* p1);
struct std__allocator_double___ std___Deque_base_double__std__allocator_double______M_get_map_allocator___const(struct std___Deque_base_double__std__allocator_double__* p0);
void std____new_allocator_double____deallocate(struct std____new_allocator_double___* p0, double** p1, unsigned long p2);
void std__allocator_double____deallocate(struct std__allocator_double___* p0, double** p1, unsigned long p2);
void std__allocator_traits_std__allocator_double______deallocate(struct std__allocator_double___* p0, double** p1, unsigned long p2);
void std___Deque_base_double__std__allocator_double______M_deallocate_map(struct std___Deque_base_double__std__allocator_double__* p0, double** p1, unsigned long p2);
void std___Deque_base_double__std__allocator_double______Deque_impl____Deque_impl(struct std___Deque_base_double__std__allocator_double_____Deque_impl* p0);
void std___Deque_base_double__std__allocator_double_______Deque_base(struct std___Deque_base_double__std__allocator_double__* p0);
void std____new_allocator_double______new_allocator(struct std____new_allocator_double___* p0);
void std__allocator_double____allocator(struct std__allocator_double_* p0);
void std__deque_double__std__allocator_double_____deque(struct std__deque_double__std__allocator_double__* p0);
void std___Deque_base_double__std__allocator_double______Deque_impl___Deque_impl(struct std___Deque_base_double__std__allocator_double_____Deque_impl* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_double_____M_max_size___const(struct std____new_allocator_double___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
double** std____new_allocator_double____allocate(struct std____new_allocator_double___* p0, unsigned long p1, void* p2);
double** std__allocator_double____allocate(struct std__allocator_double___* p0, unsigned long p1);
double** std__allocator_traits_std__allocator_double______allocate(struct std__allocator_double___* p0, unsigned long p1);
double** std___Deque_base_double__std__allocator_double______M_allocate_map(struct std___Deque_base_double__std__allocator_double__* p0, unsigned long p1);
extern int __gxx_personality_v0();
unsigned long std____new_allocator_double____M_max_size___const(struct std____new_allocator_double_* p0);
double* std____new_allocator_double___allocate(struct std____new_allocator_double_* p0, unsigned long p1, void* p2);
double* std__allocator_double___allocate(struct std__allocator_double_* p0, unsigned long p1);
double* std__allocator_traits_std__allocator_double_____allocate(struct std__allocator_double_* p0, unsigned long p1);
double* std___Deque_base_double__std__allocator_double______M_allocate_node(struct std___Deque_base_double__std__allocator_double__* p0);
void std___Deque_base_double__std__allocator_double______M_create_nodes(struct std___Deque_base_double__std__allocator_double__* p0, double** p1, double** p2);
unsigned long std___Deque_iterator_double__double___double_____S_buffer_size();
void std___Deque_iterator_double__double___double_____M_set_node(struct std___Deque_iterator_double__double____double___* p0, double** p1);
void std___Deque_base_double__std__allocator_double______M_initialize_map(struct std___Deque_base_double__std__allocator_double__* p0, unsigned long p1);
void std___Deque_base_double__std__allocator_double______Deque_base(struct std___Deque_base_double__std__allocator_double__* p0);
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* p0);
void std__allocator_double___allocator(struct std__allocator_double_* p0);
void std___Deque_iterator_double__double___double_____Deque_iterator_2(struct std___Deque_iterator_double__double____double___* p0);
void std___Deque_base_double__std__allocator_double______Deque_impl_data___Deque_impl_data(struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* p0);

// function: _ZNSt5queueIdSt5dequeIdSaIdEEEC2IS2_vEEv
void std__queue_double__std__deque_double__std__allocator_double_______queue_std__deque_double__std__allocator_double_____void_(struct std__queue_double__std__deque_double__std__allocator_double___* v0) {
bb1:
  struct std__queue_double__std__deque_double__std__allocator_double___* this2;
  this2 = v0;
  struct std__queue_double__std__deque_double__std__allocator_double___* t3 = this2;
  struct std__deque_double__std__allocator_double__ c4 = {0};
  t3->c = c4;
  std__deque_double__std__allocator_double_____deque(&t3->c);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* v5, double* v6) {
bb7:
  double* __location8;
  double* __args9;
  double* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  double* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    double* cast15 = (double*)t14;
    double* t16 = __args9;
    double t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    double* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIdEE9constructIdJdEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_double_____construct_double__double_(struct std__allocator_double_* v19, double* v20, double* v21) {
bb22:
  struct std__allocator_double_* __a23;
  double* __p24;
  double* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  double* t26 = __p24;
  double* t27 = __args25;
  double* r28 = _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t26, t27);
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIdRdPdES4_
long std__operator_(struct std___Deque_iterator_double__double____double___* v29, struct std___Deque_iterator_double__double____double___* v30) {
bb31:
  struct std___Deque_iterator_double__double____double___* __x32;
  struct std___Deque_iterator_double__double____double___* __y33;
  long __retval34;
  __x32 = v29;
  __y33 = v30;
  unsigned long r35 = std___Deque_iterator_double__double___double_____S_buffer_size();
  long cast36 = (long)r35;
  struct std___Deque_iterator_double__double____double___* t37 = __x32;
  double** t38 = t37->_M_node;
  struct std___Deque_iterator_double__double____double___* t39 = __y33;
  double** t40 = t39->_M_node;
  long diff41 = t38 - t40;
  struct std___Deque_iterator_double__double____double___* t42 = __x32;
  double** t43 = t42->_M_node;
  _Bool cast44 = (_Bool)t43;
  long cast45 = (long)cast44;
  long b46 = diff41 - cast45;
  long b47 = cast36 * b46;
  struct std___Deque_iterator_double__double____double___* t48 = __x32;
  double* t49 = t48->_M_cur;
  struct std___Deque_iterator_double__double____double___* t50 = __x32;
  double* t51 = t50->_M_first;
  long diff52 = t49 - t51;
  long b53 = b47 + diff52;
  struct std___Deque_iterator_double__double____double___* t54 = __y33;
  double* t55 = t54->_M_last;
  struct std___Deque_iterator_double__double____double___* t56 = __y33;
  double* t57 = t56->_M_cur;
  long diff58 = t55 - t57;
  long b59 = b53 + diff58;
  __retval34 = b59;
  long t60 = __retval34;
  return t60;
}

// function: _ZNKSt5dequeIdSaIdEE4sizeEv
unsigned long std__deque_double__std__allocator_double_____size___const(struct std__deque_double__std__allocator_double__* v61) {
bb62:
  struct std__deque_double__std__allocator_double__* this63;
  unsigned long __retval64;
  unsigned long __sz65;
  this63 = v61;
  struct std__deque_double__std__allocator_double__* t66 = this63;
  struct std___Deque_base_double__std__allocator_double__* base67 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t66 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base68 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base67->_M_impl) + 0);
  struct std___Deque_base_double__std__allocator_double__* base69 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t66 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base70 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base69->_M_impl) + 0);
  long r71 = std__operator_(&base68->_M_finish, &base70->_M_start);
  unsigned long cast72 = (unsigned long)r71;
  __sz65 = cast72;
    unsigned long t73 = __sz65;
    unsigned long r74 = std__deque_double__std__allocator_double_____max_size___const(t66);
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

// function: _ZNSt5dequeIdSaIdEE11_S_max_sizeERKS0_
unsigned long std__deque_double__std__allocator_double______S_max_size(struct std__allocator_double_* v93) {
bb94:
  struct std__allocator_double_* __a95;
  unsigned long __retval96;
  unsigned long __diffmax97;
  unsigned long __allocmax98;
  __a95 = v93;
  unsigned long c99 = 9223372036854775807;
  __diffmax97 = c99;
  unsigned long c100 = 2305843009213693951;
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

// function: _ZNKSt5dequeIdSaIdEE8max_sizeEv
unsigned long std__deque_double__std__allocator_double_____max_size___const(struct std__deque_double__std__allocator_double__* v104) {
bb105:
  struct std__deque_double__std__allocator_double__* this106;
  unsigned long __retval107;
  this106 = v104;
  struct std__deque_double__std__allocator_double__* t108 = this106;
  struct std___Deque_base_double__std__allocator_double__* base109 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t108 + 0);
  struct std__allocator_double_* r110 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator___const(base109);
  unsigned long r111 = std__deque_double__std__allocator_double______S_max_size(r110);
  __retval107 = r111;
  unsigned long t112 = __retval107;
  return t112;
}

// function: _ZSt12__niter_wrapIPPdET_RKS2_S2_
double** double___std____niter_wrap_double___(double*** v113, double** v114) {
bb115:
  double*** unnamed116;
  double** __res117;
  double** __retval118;
  unnamed116 = v113;
  __res117 = v114;
  double** t119 = __res117;
  __retval118 = t119;
  double** t120 = __retval118;
  return t120;
}

// function: _ZSt10__distanceIPPdENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_double_____difference_type_std____distance_double___(double** v121, double** v122, struct std__random_access_iterator_tag v123) {
bb124:
  double** __first125;
  double** __last126;
  struct std__random_access_iterator_tag unnamed127;
  long __retval128;
  __first125 = v121;
  __last126 = v122;
  unnamed127 = v123;
  double** t129 = __last126;
  double** t130 = __first125;
  long diff131 = t129 - t130;
  __retval128 = diff131;
  long t132 = __retval128;
  return t132;
}

// function: _ZSt19__iterator_categoryIPPdENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_double_____iterator_category_std____iterator_category_double___(double*** v133) {
bb134:
  double*** unnamed135;
  struct std__random_access_iterator_tag __retval136;
  unnamed135 = v133;
  struct std__random_access_iterator_tag t137 = __retval136;
  return t137;
}

// function: _ZSt8distanceIPPdENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_double_____difference_type_std__distance_double___(double** v138, double** v139) {
bb140:
  double** __first141;
  double** __last142;
  long __retval143;
  struct std__random_access_iterator_tag agg_tmp0144;
  __first141 = v138;
  __last142 = v139;
  double** t145 = __first141;
  double** t146 = __last142;
  struct std__random_access_iterator_tag r147 = std__iterator_traits_double_____iterator_category_std____iterator_category_double___(&__first141);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0144 = r147;
  struct std__random_access_iterator_tag t148 = agg_tmp0144;
  long r149 = std__iterator_traits_double_____difference_type_std____distance_double___(t145, t146, t148);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval143 = r149;
  long t150 = __retval143;
  return t150;
}

// function: _ZSt12__assign_oneILb0EPPdS1_EvRT0_RT1_
void void_std____assign_one_false__double____double___(double*** v151, double*** v152) {
bb153:
  double*** __out154;
  double*** __in155;
  __out154 = v151;
  __in155 = v152;
    double*** t156 = __in155;
    double** t157 = *t156;
    double* t158 = *t157;
    double*** t159 = __out154;
    double** t160 = *t159;
    *t160 = t158;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPdS1_S1_ET2_T0_T1_S2_
double** double___std____copy_move_a2_false__double____double____double___(double** v161, double** v162, double** v163) {
bb164:
  double** __first165;
  double** __last166;
  double** __result167;
  double** __retval168;
  __first165 = v161;
  __last166 = v162;
  __result167 = v163;
      _Bool r169 = std____is_constant_evaluated();
      if (r169) {
      } else {
          long __n170;
          double** t171 = __first165;
          double** t172 = __last166;
          long r173 = std__iterator_traits_double_____difference_type_std__distance_double___(t171, t172);
          if (__cir_exc_active) {
            double** __cir_eh_ret = (double**)0;
            return __cir_eh_ret;
          }
          __n170 = r173;
            long t174 = __n170;
            long c175 = 1;
            _Bool c176 = ((t174 > c175)) ? 1 : 0;
            if (c176) {
              double** t177 = __result167;
              void* cast178 = (void*)t177;
              double** t179 = __first165;
              void* cast180 = (void*)t179;
              long t181 = __n170;
              unsigned long cast182 = (unsigned long)t181;
              unsigned long c183 = 8;
              unsigned long b184 = cast182 * c183;
              void* r185 = memmove(cast178, cast180, b184);
              long t186 = __n170;
              double** t187 = __result167;
              double** ptr188 = &(t187)[t186];
              __result167 = ptr188;
            } else {
                long t189 = __n170;
                long c190 = 1;
                _Bool c191 = ((t189 == c190)) ? 1 : 0;
                if (c191) {
                  void_std____assign_one_false__double____double___(&__result167, &__first165);
                  if (__cir_exc_active) {
                    double** __cir_eh_ret = (double**)0;
                    return __cir_eh_ret;
                  }
                  double** t192 = __result167;
                  int c193 = 1;
                  double** ptr194 = &(t192)[c193];
                  __result167 = ptr194;
                }
            }
          double** t195 = __result167;
          __retval168 = t195;
          double** t196 = __retval168;
          return t196;
      }
    while (1) {
      double** t198 = __first165;
      double** t199 = __last166;
      _Bool c200 = ((t198 != t199)) ? 1 : 0;
      if (!c200) break;
      void_std____assign_one_false__double____double___(&__result167, &__first165);
      if (__cir_exc_active) {
        double** __cir_eh_ret = (double**)0;
        return __cir_eh_ret;
      }
    for_step197: ;
      double** t201 = __result167;
      int c202 = 1;
      double** ptr203 = &(t201)[c202];
      __result167 = ptr203;
      double** t204 = __first165;
      int c205 = 1;
      double** ptr206 = &(t204)[c205];
      __first165 = ptr206;
    }
  double** t207 = __result167;
  __retval168 = t207;
  double** t208 = __retval168;
  return t208;
}

// function: _ZSt14__copy_move_a1ILb0EPPdS1_ET1_T0_S3_S2_
double** double___std____copy_move_a1_false__double____double___(double** v209, double** v210, double** v211) {
bb212:
  double** __first213;
  double** __last214;
  double** __result215;
  double** __retval216;
  __first213 = v209;
  __last214 = v210;
  __result215 = v211;
  double** t217 = __first213;
  double** t218 = __last214;
  double** t219 = __result215;
  double** r220 = double___std____copy_move_a2_false__double____double____double___(t217, t218, t219);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval216 = r220;
  double** t221 = __retval216;
  return t221;
}

// function: _ZSt12__niter_baseIPPdET_S2_
double** double___std____niter_base_double___(double** v222) {
bb223:
  double** __it224;
  double** __retval225;
  __it224 = v222;
  double** t226 = __it224;
  __retval225 = t226;
  double** t227 = __retval225;
  return t227;
}

// function: _ZSt13__copy_move_aILb0EPPdS1_ET1_T0_S3_S2_
double** double___std____copy_move_a_false__double____double___(double** v228, double** v229, double** v230) {
bb231:
  double** __first232;
  double** __last233;
  double** __result234;
  double** __retval235;
  __first232 = v228;
  __last233 = v229;
  __result234 = v230;
  double** t236 = __first232;
  double** r237 = double___std____niter_base_double___(t236);
  double** t238 = __last233;
  double** r239 = double___std____niter_base_double___(t238);
  double** t240 = __result234;
  double** r241 = double___std____niter_base_double___(t240);
  double** r242 = double___std____copy_move_a1_false__double____double___(r237, r239, r241);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** r243 = double___std____niter_wrap_double___(&__result234, r242);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval235 = r243;
  double** t244 = __retval235;
  return t244;
}

// function: _ZSt12__miter_baseIPPdET_S2_
double** double___std____miter_base_double___(double** v245) {
bb246:
  double** __it247;
  double** __retval248;
  __it247 = v245;
  double** t249 = __it247;
  __retval248 = t249;
  double** t250 = __retval248;
  return t250;
}

// function: _ZSt4copyIPPdS1_ET0_T_S3_S2_
double** double___std__copy_double____double___(double** v251, double** v252, double** v253) {
bb254:
  double** __first255;
  double** __last256;
  double** __result257;
  double** __retval258;
  __first255 = v251;
  __last256 = v252;
  __result257 = v253;
  double** t259 = __first255;
  double** r260 = double___std____miter_base_double___(t259);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** t261 = __last256;
  double** r262 = double___std____miter_base_double___(t261);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** t263 = __result257;
  double** r264 = double___std____copy_move_a_false__double____double___(r260, r262, t263);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval258 = r264;
  double** t265 = __retval258;
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

// function: _ZSt9__advanceIPPdlEvRT_T0_St26random_access_iterator_tag
void void_std____advance_double____long_(double*** v270, long v271, struct std__random_access_iterator_tag v272) {
bb273:
  double*** __i274;
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
      double*** t284 = __i274;
      double** t285 = *t284;
      int c286 = 1;
      double** ptr287 = &(t285)[c286];
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
          double*** t295 = __i274;
          double** t296 = *t295;
          int c297 = -1;
          double** ptr298 = &(t296)[c297];
          *t295 = ptr298;
        } else {
          long t299 = __n275;
          double*** t300 = __i274;
          double** t301 = *t300;
          double** ptr302 = &(t301)[t299];
          *t300 = ptr302;
        }
    }
  return;
}

// function: _ZSt7advanceIPPdlEvRT_T0_
void void_std__advance_double____long_(double*** v303, long v304) {
bb305:
  double*** __i306;
  long __n307;
  long __d308;
  struct std__random_access_iterator_tag agg_tmp0309;
  __i306 = v303;
  __n307 = v304;
  long t310 = __n307;
  __d308 = t310;
  double*** t311 = __i306;
  long t312 = __d308;
  double*** t313 = __i306;
  struct std__random_access_iterator_tag r314 = std__iterator_traits_double_____iterator_category_std____iterator_category_double___(t313);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0309 = r314;
  struct std__random_access_iterator_tag t315 = agg_tmp0309;
  void_std____advance_double____long_(t311, t312, t315);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPdS1_ET1_T0_S3_S2_
double** double___std____copy_move_backward_a2_false__double____double___(double** v316, double** v317, double** v318) {
bb319:
  double** __first320;
  double** __last321;
  double** __result322;
  double** __retval323;
  __first320 = v316;
  __last321 = v317;
  __result322 = v318;
      _Bool r324 = std__is_constant_evaluated();
      if (r324) {
      } else {
          long __n325;
          double** t326 = __first320;
          double** t327 = __last321;
          long r328 = std__iterator_traits_double_____difference_type_std__distance_double___(t326, t327);
          if (__cir_exc_active) {
            double** __cir_eh_ret = (double**)0;
            return __cir_eh_ret;
          }
          __n325 = r328;
          long t329 = __n325;
          long u330 = -t329;
          void_std__advance_double____long_(&__result322, u330);
          if (__cir_exc_active) {
            double** __cir_eh_ret = (double**)0;
            return __cir_eh_ret;
          }
            long t331 = __n325;
            long c332 = 1;
            _Bool c333 = ((t331 > c332)) ? 1 : 0;
            if (c333) {
              double** t334 = __result322;
              void* cast335 = (void*)t334;
              double** t336 = __first320;
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
                  void_std____assign_one_false__double____double___(&__result322, &__first320);
                  if (__cir_exc_active) {
                    double** __cir_eh_ret = (double**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          double** t346 = __result322;
          __retval323 = t346;
          double** t347 = __retval323;
          return t347;
      }
    while (1) {
      double** t348 = __first320;
      double** t349 = __last321;
      _Bool c350 = ((t348 != t349)) ? 1 : 0;
      if (!c350) break;
        double** t351 = __last321;
        int c352 = -1;
        double** ptr353 = &(t351)[c352];
        __last321 = ptr353;
        double** t354 = __result322;
        int c355 = -1;
        double** ptr356 = &(t354)[c355];
        __result322 = ptr356;
        void_std____assign_one_false__double____double___(&__result322, &__last321);
        if (__cir_exc_active) {
          double** __cir_eh_ret = (double**)0;
          return __cir_eh_ret;
        }
    }
  double** t357 = __result322;
  __retval323 = t357;
  double** t358 = __retval323;
  return t358;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPdS1_ET1_T0_S3_S2_
double** double___std____copy_move_backward_a1_false__double____double___(double** v359, double** v360, double** v361) {
bb362:
  double** __first363;
  double** __last364;
  double** __result365;
  double** __retval366;
  __first363 = v359;
  __last364 = v360;
  __result365 = v361;
  double** t367 = __first363;
  double** t368 = __last364;
  double** t369 = __result365;
  double** r370 = double___std____copy_move_backward_a2_false__double____double___(t367, t368, t369);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval366 = r370;
  double** t371 = __retval366;
  return t371;
}

// function: _ZSt22__copy_move_backward_aILb0EPPdS1_ET1_T0_S3_S2_
double** double___std____copy_move_backward_a_false__double____double___(double** v372, double** v373, double** v374) {
bb375:
  double** __first376;
  double** __last377;
  double** __result378;
  double** __retval379;
  __first376 = v372;
  __last377 = v373;
  __result378 = v374;
  double** t380 = __first376;
  double** r381 = double___std____niter_base_double___(t380);
  double** t382 = __last377;
  double** r383 = double___std____niter_base_double___(t382);
  double** t384 = __result378;
  double** r385 = double___std____niter_base_double___(t384);
  double** r386 = double___std____copy_move_backward_a1_false__double____double___(r381, r383, r385);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** r387 = double___std____niter_wrap_double___(&__result378, r386);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval379 = r387;
  double** t388 = __retval379;
  return t388;
}

// function: _ZSt13copy_backwardIPPdS1_ET0_T_S3_S2_
double** double___std__copy_backward_double____double___(double** v389, double** v390, double** v391) {
bb392:
  double** __first393;
  double** __last394;
  double** __result395;
  double** __retval396;
  __first393 = v389;
  __last394 = v390;
  __result395 = v391;
  double** t397 = __first393;
  double** r398 = double___std____miter_base_double___(t397);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** t399 = __last394;
  double** r400 = double___std____miter_base_double___(t399);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** t401 = __result395;
  double** r402 = double___std____copy_move_backward_a_false__double____double___(r398, r400, t401);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval396 = r402;
  double** t403 = __retval396;
  return t403;
}

// function: _ZNSt5dequeIdSaIdEE17_M_reallocate_mapEmb
void std__deque_double__std__allocator_double______M_reallocate_map(struct std__deque_double__std__allocator_double__* v404, unsigned long v405, _Bool v406) {
bb407:
  struct std__deque_double__std__allocator_double__* this408;
  unsigned long __nodes_to_add409;
  _Bool __add_at_front410;
  unsigned long __old_num_nodes411;
  unsigned long __new_num_nodes412;
  double** __new_nstart413;
  this408 = v404;
  __nodes_to_add409 = v405;
  __add_at_front410 = v406;
  struct std__deque_double__std__allocator_double__* t414 = this408;
  struct std___Deque_base_double__std__allocator_double__* base415 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base416 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base415->_M_impl) + 0);
  double** t417 = base416->_M_finish._M_node;
  struct std___Deque_base_double__std__allocator_double__* base418 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base419 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base418->_M_impl) + 0);
  double** t420 = base419->_M_start._M_node;
  long diff421 = t417 - t420;
  long c422 = 1;
  long b423 = diff421 + c422;
  unsigned long cast424 = (unsigned long)b423;
  __old_num_nodes411 = cast424;
  unsigned long t425 = __old_num_nodes411;
  unsigned long t426 = __nodes_to_add409;
  unsigned long b427 = t425 + t426;
  __new_num_nodes412 = b427;
    struct std___Deque_base_double__std__allocator_double__* base428 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base429 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base428->_M_impl) + 0);
    unsigned long t430 = base429->_M_map_size;
    unsigned long c431 = 2;
    unsigned long t432 = __new_num_nodes412;
    unsigned long b433 = c431 * t432;
    _Bool c434 = ((t430 > b433)) ? 1 : 0;
    if (c434) {
      struct std___Deque_base_double__std__allocator_double__* base435 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base436 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base435->_M_impl) + 0);
      double** t437 = base436->_M_map;
      struct std___Deque_base_double__std__allocator_double__* base438 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base439 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base438->_M_impl) + 0);
      unsigned long t440 = base439->_M_map_size;
      unsigned long t441 = __new_num_nodes412;
      unsigned long b442 = t440 - t441;
      unsigned long c443 = 2;
      unsigned long b444 = b442 / c443;
      double** ptr445 = &(t437)[b444];
      _Bool t446 = __add_at_front410;
      unsigned long ternary447;
      if (t446) {
        unsigned long t448 = __nodes_to_add409;
        ternary447 = (unsigned long)t448;
      } else {
        unsigned long c449 = 0;
        ternary447 = (unsigned long)c449;
      }
      double** ptr450 = &(ptr445)[ternary447];
      __new_nstart413 = ptr450;
        double** t451 = __new_nstart413;
        struct std___Deque_base_double__std__allocator_double__* base452 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base453 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base452->_M_impl) + 0);
        double** t454 = base453->_M_start._M_node;
        _Bool c455 = ((t451 < t454)) ? 1 : 0;
        if (c455) {
          struct std___Deque_base_double__std__allocator_double__* base456 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
          struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base457 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base456->_M_impl) + 0);
          double** t458 = base457->_M_start._M_node;
          struct std___Deque_base_double__std__allocator_double__* base459 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
          struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base460 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base459->_M_impl) + 0);
          double** t461 = base460->_M_finish._M_node;
          int c462 = 1;
          double** ptr463 = &(t461)[c462];
          double** t464 = __new_nstart413;
          double** r465 = double___std__copy_double____double___(t458, ptr463, t464);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_double__std__allocator_double__* base466 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
          struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base467 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base466->_M_impl) + 0);
          double** t468 = base467->_M_start._M_node;
          struct std___Deque_base_double__std__allocator_double__* base469 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
          struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base470 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base469->_M_impl) + 0);
          double** t471 = base470->_M_finish._M_node;
          int c472 = 1;
          double** ptr473 = &(t471)[c472];
          double** t474 = __new_nstart413;
          unsigned long t475 = __old_num_nodes411;
          double** ptr476 = &(t474)[t475];
          double** r477 = double___std__copy_backward_double____double___(t468, ptr473, ptr476);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size478;
      unsigned long __bufsz479;
      double** __new_map480;
      struct std___Deque_base_double__std__allocator_double__* base481 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base482 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base481->_M_impl) + 0);
      unsigned long t483 = base482->_M_map_size;
      struct std___Deque_base_double__std__allocator_double__* base484 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base485 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base484->_M_impl) + 0);
      unsigned long* r486 = unsigned_long_const__std__max_unsigned_long_(&base485->_M_map_size, &__nodes_to_add409);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t487 = *r486;
      unsigned long b488 = t483 + t487;
      unsigned long c489 = 2;
      unsigned long b490 = b488 + c489;
      __new_map_size478 = b490;
      unsigned long c491 = 64;
      __bufsz479 = c491;
        unsigned long t492 = __new_map_size478;
        unsigned long r493 = std__deque_double__std__allocator_double_____max_size___const(t414);
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
      struct std___Deque_base_double__std__allocator_double__* base503 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      unsigned long t504 = __new_map_size478;
      double** r505 = std___Deque_base_double__std__allocator_double______M_allocate_map(base503, t504);
      if (__cir_exc_active) {
        return;
      }
      __new_map480 = r505;
      double** t506 = __new_map480;
      unsigned long t507 = __new_map_size478;
      unsigned long t508 = __new_num_nodes412;
      unsigned long b509 = t507 - t508;
      unsigned long c510 = 2;
      unsigned long b511 = b509 / c510;
      double** ptr512 = &(t506)[b511];
      _Bool t513 = __add_at_front410;
      unsigned long ternary514;
      if (t513) {
        unsigned long t515 = __nodes_to_add409;
        ternary514 = (unsigned long)t515;
      } else {
        unsigned long c516 = 0;
        ternary514 = (unsigned long)c516;
      }
      double** ptr517 = &(ptr512)[ternary514];
      __new_nstart413 = ptr517;
      struct std___Deque_base_double__std__allocator_double__* base518 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base519 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base518->_M_impl) + 0);
      double** t520 = base519->_M_start._M_node;
      struct std___Deque_base_double__std__allocator_double__* base521 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base522 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base521->_M_impl) + 0);
      double** t523 = base522->_M_finish._M_node;
      int c524 = 1;
      double** ptr525 = &(t523)[c524];
      double** t526 = __new_nstart413;
      double** r527 = double___std__copy_double____double___(t520, ptr525, t526);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_double__std__allocator_double__* base528 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double__* base529 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base530 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base529->_M_impl) + 0);
      double** t531 = base530->_M_map;
      struct std___Deque_base_double__std__allocator_double__* base532 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base533 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base532->_M_impl) + 0);
      unsigned long t534 = base533->_M_map_size;
      std___Deque_base_double__std__allocator_double______M_deallocate_map(base528, t531, t534);
      double** t535 = __new_map480;
      struct std___Deque_base_double__std__allocator_double__* base536 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base537 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base536->_M_impl) + 0);
      base537->_M_map = t535;
      unsigned long t538 = __new_map_size478;
      struct std___Deque_base_double__std__allocator_double__* base539 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base540 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base539->_M_impl) + 0);
      base540->_M_map_size = t538;
    }
  struct std___Deque_base_double__std__allocator_double__* base541 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base542 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base541->_M_impl) + 0);
  double** t543 = __new_nstart413;
  std___Deque_iterator_double__double___double_____M_set_node(&base542->_M_start, t543);
  struct std___Deque_base_double__std__allocator_double__* base544 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t414 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base545 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base544->_M_impl) + 0);
  double** t546 = __new_nstart413;
  unsigned long t547 = __old_num_nodes411;
  double** ptr548 = &(t546)[t547];
  int c549 = -1;
  double** ptr550 = &(ptr548)[c549];
  std___Deque_iterator_double__double___double_____M_set_node(&base545->_M_finish, ptr550);
  return;
}

// function: _ZNSt5dequeIdSaIdEE22_M_reserve_map_at_backEm
void std__deque_double__std__allocator_double______M_reserve_map_at_back(struct std__deque_double__std__allocator_double__* v551, unsigned long v552) {
bb553:
  struct std__deque_double__std__allocator_double__* this554;
  unsigned long __nodes_to_add555;
  this554 = v551;
  __nodes_to_add555 = v552;
  struct std__deque_double__std__allocator_double__* t556 = this554;
    unsigned long t557 = __nodes_to_add555;
    unsigned long c558 = 1;
    unsigned long b559 = t557 + c558;
    struct std___Deque_base_double__std__allocator_double__* base560 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t556 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base561 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base560->_M_impl) + 0);
    unsigned long t562 = base561->_M_map_size;
    struct std___Deque_base_double__std__allocator_double__* base563 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t556 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base564 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base563->_M_impl) + 0);
    double** t565 = base564->_M_finish._M_node;
    struct std___Deque_base_double__std__allocator_double__* base566 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t556 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base567 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base566->_M_impl) + 0);
    double** t568 = base567->_M_map;
    long diff569 = t565 - t568;
    unsigned long cast570 = (unsigned long)diff569;
    unsigned long b571 = t562 - cast570;
    _Bool c572 = ((b559 > b571)) ? 1 : 0;
    if (c572) {
      unsigned long t573 = __nodes_to_add555;
      _Bool c574 = 0;
      std__deque_double__std__allocator_double______M_reallocate_map(t556, t573, c574);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIdSaIdEE16_M_push_back_auxIJdEEEvDpOT_
void void_std__deque_double__std__allocator_double______M_push_back_aux_double_(struct std__deque_double__std__allocator_double__* v575, double* v576) {
bb577:
  struct std__deque_double__std__allocator_double__* this578;
  double* __args579;
  this578 = v575;
  __args579 = v576;
  struct std__deque_double__std__allocator_double__* t580 = this578;
    unsigned long r581 = std__deque_double__std__allocator_double_____size___const(t580);
    unsigned long r582 = std__deque_double__std__allocator_double_____max_size___const(t580);
    _Bool c583 = ((r581 == r582)) ? 1 : 0;
    if (c583) {
      char* cast584 = (char*)&(_str_1);
      std____throw_length_error(cast584);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c585 = 1;
  std__deque_double__std__allocator_double______M_reserve_map_at_back(t580, c585);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_double__std__allocator_double__* base586 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t580 + 0);
  double* r587 = std___Deque_base_double__std__allocator_double______M_allocate_node(base586);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_double__std__allocator_double__* base588 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t580 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base589 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base588->_M_impl) + 0);
  double** t590 = base589->_M_finish._M_node;
  int c591 = 1;
  double** ptr592 = &(t590)[c591];
  *ptr592 = r587;
      struct std___Deque_base_double__std__allocator_double__* base594 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t580 + 0);
      struct std__allocator_double_* base595 = (struct std__allocator_double_*)((char *)&(base594->_M_impl) + 0);
      struct std___Deque_base_double__std__allocator_double__* base596 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t580 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base597 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base596->_M_impl) + 0);
      double* t598 = base597->_M_finish._M_cur;
      double* t599 = __args579;
      void_std__allocator_traits_std__allocator_double_____construct_double__double_(base595, t598, t599);
      struct std___Deque_base_double__std__allocator_double__* base600 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t580 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base601 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base600->_M_impl) + 0);
      struct std___Deque_base_double__std__allocator_double__* base602 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t580 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base603 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base602->_M_impl) + 0);
      double** t604 = base603->_M_finish._M_node;
      int c605 = 1;
      double** ptr606 = &(t604)[c605];
      std___Deque_iterator_double__double___double_____M_set_node(&base601->_M_finish, ptr606);
      struct std___Deque_base_double__std__allocator_double__* base607 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t580 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base608 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base607->_M_impl) + 0);
      double* t609 = base608->_M_finish._M_first;
      struct std___Deque_base_double__std__allocator_double__* base610 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t580 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base611 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base610->_M_impl) + 0);
      base611->_M_finish._M_cur = t609;
    cir_try_dispatch593: ;
    if (__cir_exc_active) {
    {
      int ca_tok612 = 0;
      void* ca_exn613 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_double__std__allocator_double__* base614 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t580 + 0);
        struct std___Deque_base_double__std__allocator_double__* base615 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t580 + 0);
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base616 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base615->_M_impl) + 0);
        double** t617 = base616->_M_finish._M_node;
        int c618 = 1;
        double** ptr619 = &(t617)[c618];
        double* t620 = *ptr619;
        std___Deque_base_double__std__allocator_double______M_deallocate_node(base614, t620);
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

// function: _ZSteqRKSt15_Deque_iteratorIdRdPdES4_
_Bool std__operator__(struct std___Deque_iterator_double__double____double___* v621, struct std___Deque_iterator_double__double____double___* v622) {
bb623:
  struct std___Deque_iterator_double__double____double___* __x624;
  struct std___Deque_iterator_double__double____double___* __y625;
  _Bool __retval626;
  __x624 = v621;
  __y625 = v622;
  struct std___Deque_iterator_double__double____double___* t627 = __x624;
  double* t628 = t627->_M_cur;
  struct std___Deque_iterator_double__double____double___* t629 = __y625;
  double* t630 = t629->_M_cur;
  _Bool c631 = ((t628 == t630)) ? 1 : 0;
  __retval626 = c631;
  _Bool t632 = __retval626;
  return t632;
}

// function: _ZNKSt5dequeIdSaIdEE5emptyEv
_Bool std__deque_double__std__allocator_double_____empty___const(struct std__deque_double__std__allocator_double__* v633) {
bb634:
  struct std__deque_double__std__allocator_double__* this635;
  _Bool __retval636;
  this635 = v633;
  struct std__deque_double__std__allocator_double__* t637 = this635;
  struct std___Deque_base_double__std__allocator_double__* base638 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t637 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base639 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base638->_M_impl) + 0);
  struct std___Deque_base_double__std__allocator_double__* base640 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t637 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base641 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base640->_M_impl) + 0);
  _Bool r642 = std__operator__(&base639->_M_finish, &base641->_M_start);
  __retval636 = r642;
  _Bool t643 = __retval636;
  return t643;
}

// function: _ZNSt15_Deque_iteratorIdRdPdEmmEv
struct std___Deque_iterator_double__double____double___* std___Deque_iterator_double__double___double____operator__(struct std___Deque_iterator_double__double____double___* v644) {
bb645:
  struct std___Deque_iterator_double__double____double___* this646;
  struct std___Deque_iterator_double__double____double___* __retval647;
  this646 = v644;
  struct std___Deque_iterator_double__double____double___* t648 = this646;
    double* t649 = t648->_M_cur;
    double* t650 = t648->_M_first;
    _Bool c651 = ((t649 == t650)) ? 1 : 0;
    if (c651) {
      double** t652 = t648->_M_node;
      int c653 = -1;
      double** ptr654 = &(t652)[c653];
      std___Deque_iterator_double__double___double_____M_set_node(t648, ptr654);
      double* t655 = t648->_M_last;
      t648->_M_cur = t655;
    }
  double* t656 = t648->_M_cur;
  int c657 = -1;
  double* ptr658 = &(t656)[c657];
  t648->_M_cur = ptr658;
  __retval647 = t648;
  struct std___Deque_iterator_double__double____double___* t659 = __retval647;
  return t659;
}

// function: _ZNKSt15_Deque_iteratorIdRdPdEdeEv
double* std___Deque_iterator_double__double___double____operator____const(struct std___Deque_iterator_double__double____double___* v660) {
bb661:
  struct std___Deque_iterator_double__double____double___* this662;
  double* __retval663;
  this662 = v660;
  struct std___Deque_iterator_double__double____double___* t664 = this662;
  double* t665 = t664->_M_cur;
  __retval663 = t665;
  double* t666 = __retval663;
  return t666;
}

// function: _ZNSt5dequeIdSaIdEE4backEv
double* std__deque_double__std__allocator_double_____back(struct std__deque_double__std__allocator_double__* v667) {
bb668:
  struct std__deque_double__std__allocator_double__* this669;
  double* __retval670;
  struct std___Deque_iterator_double__double____double___ __tmp671;
  this669 = v667;
  struct std__deque_double__std__allocator_double__* t672 = this669;
    do {
          _Bool r673 = std__deque_double__std__allocator_double_____empty___const(t672);
          if (r673) {
            char* cast674 = (char*)&(_str_2);
            int c675 = 1537;
            char* cast676 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE4backEv);
            char* cast677 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast674, c675, cast676, cast677);
          }
      _Bool c678 = 0;
      if (!c678) break;
    } while (1);
  struct std___Deque_iterator_double__double____double___ r679 = std__deque_double__std__allocator_double_____end(t672);
  __tmp671 = r679;
  struct std___Deque_iterator_double__double____double___* r680 = std___Deque_iterator_double__double___double____operator__(&__tmp671);
  double* r681 = std___Deque_iterator_double__double___double____operator____const(&__tmp671);
  __retval670 = r681;
  double* t682 = __retval670;
  return t682;
}

// function: _ZNSt5dequeIdSaIdEE12emplace_backIJdEEERdDpOT_
double* double__std__deque_double__std__allocator_double_____emplace_back_double_(struct std__deque_double__std__allocator_double__* v683, double* v684) {
bb685:
  struct std__deque_double__std__allocator_double__* this686;
  double* __args687;
  double* __retval688;
  this686 = v683;
  __args687 = v684;
  struct std__deque_double__std__allocator_double__* t689 = this686;
    struct std___Deque_base_double__std__allocator_double__* base690 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t689 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base691 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base690->_M_impl) + 0);
    double* t692 = base691->_M_finish._M_cur;
    struct std___Deque_base_double__std__allocator_double__* base693 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t689 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base694 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base693->_M_impl) + 0);
    double* t695 = base694->_M_finish._M_last;
    int c696 = -1;
    double* ptr697 = &(t695)[c696];
    _Bool c698 = ((t692 != ptr697)) ? 1 : 0;
    if (c698) {
      struct std___Deque_base_double__std__allocator_double__* base699 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t689 + 0);
      struct std__allocator_double_* base700 = (struct std__allocator_double_*)((char *)&(base699->_M_impl) + 0);
      struct std___Deque_base_double__std__allocator_double__* base701 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t689 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base702 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base701->_M_impl) + 0);
      double* t703 = base702->_M_finish._M_cur;
      double* t704 = __args687;
      void_std__allocator_traits_std__allocator_double_____construct_double__double_(base700, t703, t704);
      struct std___Deque_base_double__std__allocator_double__* base705 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t689 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base706 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base705->_M_impl) + 0);
      double* t707 = base706->_M_finish._M_cur;
      int c708 = 1;
      double* ptr709 = &(t707)[c708];
      base706->_M_finish._M_cur = ptr709;
    } else {
      double* t710 = __args687;
      void_std__deque_double__std__allocator_double______M_push_back_aux_double_(t689, t710);
      if (__cir_exc_active) {
        double* __cir_eh_ret = (double*)0;
        return __cir_eh_ret;
      }
    }
  double* r711 = std__deque_double__std__allocator_double_____back(t689);
  __retval688 = r711;
  double* t712 = __retval688;
  return t712;
}

// function: _ZNSt5dequeIdSaIdEE9push_backEOd
void std__deque_double__std__allocator_double_____push_back(struct std__deque_double__std__allocator_double__* v713, double* v714) {
bb715:
  struct std__deque_double__std__allocator_double__* this716;
  double* __x717;
  this716 = v713;
  __x717 = v714;
  struct std__deque_double__std__allocator_double__* t718 = this716;
  double* t719 = __x717;
  double* r720 = double__std__deque_double__std__allocator_double_____emplace_back_double_(t718, t719);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5queueIdSt5dequeIdSaIdEEE4pushEOd
void std__queue_double__std__deque_double__std__allocator_double_______push(struct std__queue_double__std__deque_double__std__allocator_double___* v721, double* v722) {
bb723:
  struct std__queue_double__std__deque_double__std__allocator_double___* this724;
  double* __x725;
  this724 = v721;
  __x725 = v722;
  struct std__queue_double__std__deque_double__std__allocator_double___* t726 = this724;
  double* t727 = __x725;
  std__deque_double__std__allocator_double_____push_back(&t726->c, t727);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v728, int v729) {
bb730:
  int __a731;
  int __b732;
  int __retval733;
  __a731 = v728;
  __b732 = v729;
  int t734 = __a731;
  int t735 = __b732;
  int b736 = t734 | t735;
  __retval733 = b736;
  int t737 = __retval733;
  return t737;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v738) {
bb739:
  struct std__basic_ios_char__std__char_traits_char__* this740;
  int __retval741;
  this740 = v738;
  struct std__basic_ios_char__std__char_traits_char__* t742 = this740;
  struct std__ios_base* base743 = (struct std__ios_base*)((char *)t742 + 0);
  int t744 = base743->_M_streambuf_state;
  __retval741 = t744;
  int t745 = __retval741;
  return t745;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v746, int v747) {
bb748:
  struct std__basic_ios_char__std__char_traits_char__* this749;
  int __state750;
  this749 = v746;
  __state750 = v747;
  struct std__basic_ios_char__std__char_traits_char__* t751 = this749;
  int r752 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t751);
  if (__cir_exc_active) {
    return;
  }
  int t753 = __state750;
  int r754 = std__operator__2(r752, t753);
  std__basic_ios_char__std__char_traits_char_____clear(t751, r754);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v755, char* v756) {
bb757:
  char* __c1758;
  char* __c2759;
  _Bool __retval760;
  __c1758 = v755;
  __c2759 = v756;
  char* t761 = __c1758;
  char t762 = *t761;
  int cast763 = (int)t762;
  char* t764 = __c2759;
  char t765 = *t764;
  int cast766 = (int)t765;
  _Bool c767 = ((cast763 == cast766)) ? 1 : 0;
  __retval760 = c767;
  _Bool t768 = __retval760;
  return t768;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v769) {
bb770:
  char* __p771;
  unsigned long __retval772;
  unsigned long __i773;
  __p771 = v769;
  unsigned long c774 = 0;
  __i773 = c774;
    char ref_tmp0775;
    while (1) {
      unsigned long t776 = __i773;
      char* t777 = __p771;
      char* ptr778 = &(t777)[t776];
      char c779 = 0;
      ref_tmp0775 = c779;
      _Bool r780 = __gnu_cxx__char_traits_char___eq(ptr778, &ref_tmp0775);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u781 = !r780;
      if (!u781) break;
      unsigned long t782 = __i773;
      unsigned long u783 = t782 + 1;
      __i773 = u783;
    }
  unsigned long t784 = __i773;
  __retval772 = t784;
  unsigned long t785 = __retval772;
  return t785;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v786) {
bb787:
  char* __s788;
  unsigned long __retval789;
  __s788 = v786;
    _Bool r790 = std____is_constant_evaluated();
    if (r790) {
      char* t791 = __s788;
      unsigned long r792 = __gnu_cxx__char_traits_char___length(t791);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval789 = r792;
      unsigned long t793 = __retval789;
      return t793;
    }
  char* t794 = __s788;
  unsigned long r795 = strlen(t794);
  __retval789 = r795;
  unsigned long t796 = __retval789;
  return t796;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v797, char* v798) {
bb799:
  struct std__basic_ostream_char__std__char_traits_char__* __out800;
  char* __s801;
  struct std__basic_ostream_char__std__char_traits_char__* __retval802;
  __out800 = v797;
  __s801 = v798;
    char* t803 = __s801;
    _Bool cast804 = (_Bool)t803;
    _Bool u805 = !cast804;
    if (u805) {
      struct std__basic_ostream_char__std__char_traits_char__* t806 = __out800;
      void** v807 = (void**)t806;
      void* v808 = *((void**)v807);
      unsigned char* cast809 = (unsigned char*)v808;
      long c810 = -24;
      unsigned char* ptr811 = &(cast809)[c810];
      long* cast812 = (long*)ptr811;
      long t813 = *cast812;
      unsigned char* cast814 = (unsigned char*)t806;
      unsigned char* ptr815 = &(cast814)[t813];
      struct std__basic_ostream_char__std__char_traits_char__* cast816 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr815;
      struct std__basic_ios_char__std__char_traits_char__* cast817 = (struct std__basic_ios_char__std__char_traits_char__*)cast816;
      int t818 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast817, t818);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t819 = __out800;
      char* t820 = __s801;
      char* t821 = __s801;
      unsigned long r822 = std__char_traits_char___length(t821);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast823 = (long)r822;
      struct std__basic_ostream_char__std__char_traits_char__* r824 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t819, t820, cast823);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t825 = __out800;
  __retval802 = t825;
  struct std__basic_ostream_char__std__char_traits_char__* t826 = __retval802;
  return t826;
}

// function: _ZNKSt5queueIdSt5dequeIdSaIdEEE5emptyEv
_Bool std__queue_double__std__deque_double__std__allocator_double_______empty___const(struct std__queue_double__std__deque_double__std__allocator_double___* v827) {
bb828:
  struct std__queue_double__std__deque_double__std__allocator_double___* this829;
  _Bool __retval830;
  this829 = v827;
  struct std__queue_double__std__deque_double__std__allocator_double___* t831 = this829;
  _Bool r832 = std__deque_double__std__allocator_double_____empty___const(&t831->c);
  __retval830 = r832;
  _Bool t833 = __retval830;
  return t833;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v834) {
bb835:
  struct std__ios_base* this836;
  long __retval837;
  this836 = v834;
  struct std__ios_base* t838 = this836;
  long t839 = t838->_M_width;
  __retval837 = t839;
  long t840 = __retval837;
  return t840;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v841, char v842) {
bb843:
  struct std__basic_ostream_char__std__char_traits_char__* __out844;
  char __c845;
  struct std__basic_ostream_char__std__char_traits_char__* __retval846;
  __out844 = v841;
  __c845 = v842;
    struct std__basic_ostream_char__std__char_traits_char__* t847 = __out844;
    void** v848 = (void**)t847;
    void* v849 = *((void**)v848);
    unsigned char* cast850 = (unsigned char*)v849;
    long c851 = -24;
    unsigned char* ptr852 = &(cast850)[c851];
    long* cast853 = (long*)ptr852;
    long t854 = *cast853;
    unsigned char* cast855 = (unsigned char*)t847;
    unsigned char* ptr856 = &(cast855)[t854];
    struct std__basic_ostream_char__std__char_traits_char__* cast857 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr856;
    struct std__ios_base* cast858 = (struct std__ios_base*)cast857;
    long r859 = std__ios_base__width___const(cast858);
    if (__cir_exc_active) {
      struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
      return __cir_eh_ret;
    }
    long c860 = 0;
    _Bool c861 = ((r859 != c860)) ? 1 : 0;
    if (c861) {
      struct std__basic_ostream_char__std__char_traits_char__* t862 = __out844;
      long c863 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r864 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t862, &__c845, c863);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      __retval846 = r864;
      struct std__basic_ostream_char__std__char_traits_char__* t865 = __retval846;
      return t865;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t866 = __out844;
  char t867 = __c845;
  struct std__basic_ostream_char__std__char_traits_char__* r868 = std__ostream__put(t866, t867);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t869 = __out844;
  __retval846 = t869;
  struct std__basic_ostream_char__std__char_traits_char__* t870 = __retval846;
  return t870;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v871, double v872) {
bb873:
  struct std__basic_ostream_char__std__char_traits_char__* this874;
  double __f875;
  struct std__basic_ostream_char__std__char_traits_char__* __retval876;
  this874 = v871;
  __f875 = v872;
  struct std__basic_ostream_char__std__char_traits_char__* t877 = this874;
  double t878 = __f875;
  struct std__basic_ostream_char__std__char_traits_char__* r879 = std__ostream__std__ostream___M_insert_double_(t877, t878);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval876 = r879;
  struct std__basic_ostream_char__std__char_traits_char__* t880 = __retval876;
  return t880;
}

// function: _ZNSt5dequeIdSaIdEE5frontEv
double* std__deque_double__std__allocator_double_____front(struct std__deque_double__std__allocator_double__* v881) {
bb882:
  struct std__deque_double__std__allocator_double__* this883;
  double* __retval884;
  struct std___Deque_iterator_double__double____double___ ref_tmp0885;
  this883 = v881;
  struct std__deque_double__std__allocator_double__* t886 = this883;
    do {
          _Bool r887 = std__deque_double__std__allocator_double_____empty___const(t886);
          if (r887) {
            char* cast888 = (char*)&(_str_2);
            int c889 = 1513;
            char* cast890 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE5frontEv);
            char* cast891 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast888, c889, cast890, cast891);
          }
      _Bool c892 = 0;
      if (!c892) break;
    } while (1);
  struct std___Deque_iterator_double__double____double___ r893 = std__deque_double__std__allocator_double_____begin(t886);
  ref_tmp0885 = r893;
  double* r894 = std___Deque_iterator_double__double___double____operator____const(&ref_tmp0885);
  __retval884 = r894;
  double* t895 = __retval884;
  return t895;
}

// function: _ZNSt5queueIdSt5dequeIdSaIdEEE5frontEv
double* std__queue_double__std__deque_double__std__allocator_double_______front(struct std__queue_double__std__deque_double__std__allocator_double___* v896) {
bb897:
  struct std__queue_double__std__deque_double__std__allocator_double___* this898;
  double* __retval899;
  this898 = v896;
  struct std__queue_double__std__deque_double__std__allocator_double___* t900 = this898;
    do {
          _Bool r901 = std__queue_double__std__deque_double__std__allocator_double_______empty___const(t900);
          if (__cir_exc_active) {
            double* __cir_eh_ret = (double*)0;
            return __cir_eh_ret;
          }
          if (r901) {
            char* cast902 = (char*)&(_str_4);
            int c903 = 262;
            char* cast904 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIdSt5dequeIdSaIdEEE5frontEv);
            char* cast905 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast902, c903, cast904, cast905);
          }
      _Bool c906 = 0;
      if (!c906) break;
    } while (1);
  double* r907 = std__deque_double__std__allocator_double_____front(&t900->c);
  __retval899 = r907;
  double* t908 = __retval899;
  return t908;
}

// function: _ZNSt16allocator_traitsISaIdEE7destroyIdEEvRS0_PT_
void void_std__allocator_traits_std__allocator_double_____destroy_double_(struct std__allocator_double_* v909, double* v910) {
bb911:
  struct std__allocator_double_* __a912;
  double* __p913;
  __a912 = v909;
  __p913 = v910;
  double* t914 = __p913;
  void_std__destroy_at_double_(t914);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIdSaIdEE16_M_pop_front_auxEv
void std__deque_double__std__allocator_double______M_pop_front_aux(struct std__deque_double__std__allocator_double__* v915) {
bb916:
  struct std__deque_double__std__allocator_double__* this917;
  this917 = v915;
  struct std__deque_double__std__allocator_double__* t918 = this917;
  struct std___Deque_base_double__std__allocator_double__* base919 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t918 + 0);
  struct std__allocator_double_* r920 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base919);
  struct std___Deque_base_double__std__allocator_double__* base921 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t918 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base922 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base921->_M_impl) + 0);
  double* t923 = base922->_M_start._M_cur;
  void_std__allocator_traits_std__allocator_double_____destroy_double_(r920, t923);
  struct std___Deque_base_double__std__allocator_double__* base924 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t918 + 0);
  struct std___Deque_base_double__std__allocator_double__* base925 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t918 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base926 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base925->_M_impl) + 0);
  double* t927 = base926->_M_start._M_first;
  std___Deque_base_double__std__allocator_double______M_deallocate_node(base924, t927);
  struct std___Deque_base_double__std__allocator_double__* base928 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t918 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base929 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base928->_M_impl) + 0);
  struct std___Deque_base_double__std__allocator_double__* base930 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t918 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base931 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base930->_M_impl) + 0);
  double** t932 = base931->_M_start._M_node;
  int c933 = 1;
  double** ptr934 = &(t932)[c933];
  std___Deque_iterator_double__double___double_____M_set_node(&base929->_M_start, ptr934);
  struct std___Deque_base_double__std__allocator_double__* base935 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t918 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base936 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base935->_M_impl) + 0);
  double* t937 = base936->_M_start._M_first;
  struct std___Deque_base_double__std__allocator_double__* base938 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t918 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base939 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base938->_M_impl) + 0);
  base939->_M_start._M_cur = t937;
  return;
}

// function: _ZNSt5dequeIdSaIdEE9pop_frontEv
void std__deque_double__std__allocator_double_____pop_front(struct std__deque_double__std__allocator_double__* v940) {
bb941:
  struct std__deque_double__std__allocator_double__* this942;
  this942 = v940;
  struct std__deque_double__std__allocator_double__* t943 = this942;
    do {
          _Bool r944 = std__deque_double__std__allocator_double_____empty___const(t943);
          if (r944) {
            char* cast945 = (char*)&(_str_2);
            int c946 = 1643;
            char* cast947 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE9pop_frontEv);
            char* cast948 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast945, c946, cast947, cast948);
          }
      _Bool c949 = 0;
      if (!c949) break;
    } while (1);
    struct std___Deque_base_double__std__allocator_double__* base950 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t943 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base951 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base950->_M_impl) + 0);
    double* t952 = base951->_M_start._M_cur;
    struct std___Deque_base_double__std__allocator_double__* base953 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t943 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base954 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base953->_M_impl) + 0);
    double* t955 = base954->_M_start._M_last;
    int c956 = -1;
    double* ptr957 = &(t955)[c956];
    _Bool c958 = ((t952 != ptr957)) ? 1 : 0;
    if (c958) {
      struct std___Deque_base_double__std__allocator_double__* base959 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t943 + 0);
      struct std__allocator_double_* r960 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base959);
      struct std___Deque_base_double__std__allocator_double__* base961 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t943 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base962 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base961->_M_impl) + 0);
      double* t963 = base962->_M_start._M_cur;
      void_std__allocator_traits_std__allocator_double_____destroy_double_(r960, t963);
      struct std___Deque_base_double__std__allocator_double__* base964 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t943 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base965 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base964->_M_impl) + 0);
      double* t966 = base965->_M_start._M_cur;
      int c967 = 1;
      double* ptr968 = &(t966)[c967];
      base965->_M_start._M_cur = ptr968;
    } else {
      std__deque_double__std__allocator_double______M_pop_front_aux(t943);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5queueIdSt5dequeIdSaIdEEE3popEv
void std__queue_double__std__deque_double__std__allocator_double_______pop(struct std__queue_double__std__deque_double__std__allocator_double___* v969) {
bb970:
  struct std__queue_double__std__deque_double__std__allocator_double___* this971;
  this971 = v969;
  struct std__queue_double__std__deque_double__std__allocator_double___* t972 = this971;
    do {
          _Bool r973 = std__queue_double__std__deque_double__std__allocator_double_______empty___const(t972);
          if (__cir_exc_active) {
            return;
          }
          if (r973) {
            char* cast974 = (char*)&(_str_4);
            int c975 = 359;
            char* cast976 = (char*)&(__PRETTY_FUNCTION____ZNSt5queueIdSt5dequeIdSaIdEEE3popEv);
            char* cast977 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast974, c975, cast976, cast977);
          }
      _Bool c978 = 0;
      if (!c978) break;
    } while (1);
  std__deque_double__std__allocator_double_____pop_front(&t972->c);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v979, void* v980) {
bb981:
  struct std__basic_ostream_char__std__char_traits_char__* this982;
  void* __pf983;
  struct std__basic_ostream_char__std__char_traits_char__* __retval984;
  this982 = v979;
  __pf983 = v980;
  struct std__basic_ostream_char__std__char_traits_char__* t985 = this982;
  void* t986 = __pf983;
  struct std__basic_ostream_char__std__char_traits_char__* r987 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t986)(t985);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval984 = r987;
  struct std__basic_ostream_char__std__char_traits_char__* t988 = __retval984;
  return t988;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v989) {
bb990:
  struct std__basic_ostream_char__std__char_traits_char__* __os991;
  struct std__basic_ostream_char__std__char_traits_char__* __retval992;
  __os991 = v989;
  struct std__basic_ostream_char__std__char_traits_char__* t993 = __os991;
  struct std__basic_ostream_char__std__char_traits_char__* r994 = std__ostream__flush(t993);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval992 = r994;
  struct std__basic_ostream_char__std__char_traits_char__* t995 = __retval992;
  return t995;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v996) {
bb997:
  struct std__ctype_char_* __f998;
  struct std__ctype_char_* __retval999;
  __f998 = v996;
    struct std__ctype_char_* t1000 = __f998;
    _Bool cast1001 = (_Bool)t1000;
    _Bool u1002 = !cast1001;
    if (u1002) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t1003 = __f998;
  __retval999 = t1003;
  struct std__ctype_char_* t1004 = __retval999;
  return t1004;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1005, char v1006) {
bb1007:
  struct std__ctype_char_* this1008;
  char __c1009;
  char __retval1010;
  this1008 = v1005;
  __c1009 = v1006;
  struct std__ctype_char_* t1011 = this1008;
    char t1012 = t1011->_M_widen_ok;
    _Bool cast1013 = (_Bool)t1012;
    if (cast1013) {
      char t1014 = __c1009;
      unsigned char cast1015 = (unsigned char)t1014;
      unsigned long cast1016 = (unsigned long)cast1015;
      char t1017 = t1011->_M_widen[cast1016];
      __retval1010 = t1017;
      char t1018 = __retval1010;
      return t1018;
    }
  std__ctype_char____M_widen_init___const(t1011);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1019 = __c1009;
  void** v1020 = (void**)t1011;
  void* v1021 = *((void**)v1020);
  char vcall1024 = (char)__VERIFIER_virtual_call_char_char(t1011, 6, t1019);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1010 = vcall1024;
  char t1025 = __retval1010;
  return t1025;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1026, char v1027) {
bb1028:
  struct std__basic_ios_char__std__char_traits_char__* this1029;
  char __c1030;
  char __retval1031;
  this1029 = v1026;
  __c1030 = v1027;
  struct std__basic_ios_char__std__char_traits_char__* t1032 = this1029;
  struct std__ctype_char_* t1033 = t1032->_M_ctype;
  struct std__ctype_char_* r1034 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1033);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1035 = __c1030;
  char r1036 = std__ctype_char___widen_char__const(r1034, t1035);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1031 = r1036;
  char t1037 = __retval1031;
  return t1037;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1038) {
bb1039:
  struct std__basic_ostream_char__std__char_traits_char__* __os1040;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1041;
  __os1040 = v1038;
  struct std__basic_ostream_char__std__char_traits_char__* t1042 = __os1040;
  struct std__basic_ostream_char__std__char_traits_char__* t1043 = __os1040;
  void** v1044 = (void**)t1043;
  void* v1045 = *((void**)v1044);
  unsigned char* cast1046 = (unsigned char*)v1045;
  long c1047 = -24;
  unsigned char* ptr1048 = &(cast1046)[c1047];
  long* cast1049 = (long*)ptr1048;
  long t1050 = *cast1049;
  unsigned char* cast1051 = (unsigned char*)t1043;
  unsigned char* ptr1052 = &(cast1051)[t1050];
  struct std__basic_ostream_char__std__char_traits_char__* cast1053 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1052;
  struct std__basic_ios_char__std__char_traits_char__* cast1054 = (struct std__basic_ios_char__std__char_traits_char__*)cast1053;
  char c1055 = 10;
  char r1056 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1054, c1055);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1057 = std__ostream__put(t1042, r1056);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1058 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1057);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1041 = r1058;
  struct std__basic_ostream_char__std__char_traits_char__* t1059 = __retval1041;
  return t1059;
}

// function: _ZNSt5queueIdSt5dequeIdSaIdEEED2Ev
void std__queue_double__std__deque_double__std__allocator_double________queue(struct std__queue_double__std__deque_double__std__allocator_double___* v1060) {
bb1061:
  struct std__queue_double__std__deque_double__std__allocator_double___* this1062;
  this1062 = v1060;
  struct std__queue_double__std__deque_double__std__allocator_double___* t1063 = this1062;
  {
    std__deque_double__std__allocator_double______deque(&t1063->c);
  }
  return;
}

// function: main
int main() {
bb1064:
  int __retval1065;
  struct std__queue_double__std__deque_double__std__allocator_double___ values1066;
  double ref_tmp01067;
  double ref_tmp11068;
  double ref_tmp21069;
  int c1070 = 0;
  __retval1065 = c1070;
  std__queue_double__std__deque_double__std__allocator_double_______queue_std__deque_double__std__allocator_double_____void_(&values1066);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    double c1071 = 0x1.999999999999ap1;
    ref_tmp01067 = c1071;
    std__queue_double__std__deque_double__std__allocator_double_______push(&values1066, &ref_tmp01067);
    if (__cir_exc_active) {
      {
        std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    double c1072 = 0x1.399999999999ap3;
    ref_tmp11068 = c1072;
    std__queue_double__std__deque_double__std__allocator_double_______push(&values1066, &ref_tmp11068);
    if (__cir_exc_active) {
      {
        std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    double c1073 = 0x1.599999999999ap2;
    ref_tmp21069 = c1073;
    std__queue_double__std__deque_double__std__allocator_double_______push(&values1066, &ref_tmp21069);
    if (__cir_exc_active) {
      {
        std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1074 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1075 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1074);
    if (__cir_exc_active) {
      {
        std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      while (1) {
        _Bool r1076 = std__queue_double__std__deque_double__std__allocator_double_______empty___const(&values1066);
        if (__cir_exc_active) {
          {
            std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        _Bool u1077 = !r1076;
        if (!u1077) break;
          double* r1078 = std__queue_double__std__deque_double__std__allocator_double_______front(&values1066);
          if (__cir_exc_active) {
            {
              std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          double t1079 = *r1078;
          struct std__basic_ostream_char__std__char_traits_char__* r1080 = std__ostream__operator__(&_ZSt4cout, t1079);
          if (__cir_exc_active) {
            {
              std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char c1081 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* r1082 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1080, c1081);
          if (__cir_exc_active) {
            {
              std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          std__queue_double__std__deque_double__std__allocator_double_______pop(&values1066);
          if (__cir_exc_active) {
            {
              std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1083 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1084 = 0;
    __retval1065 = c1084;
    int t1085 = __retval1065;
    int ret_val1086 = t1085;
    {
      std__queue_double__std__deque_double__std__allocator_double________queue(&values1066);
    }
    return ret_val1086;
  int t1087 = __retval1065;
  return t1087;
}

// function: _ZNSt5dequeIdSaIdEED2Ev
void std__deque_double__std__allocator_double______deque(struct std__deque_double__std__allocator_double__* v1088) {
bb1089:
  struct std__deque_double__std__allocator_double__* this1090;
  struct std___Deque_iterator_double__double____double___ agg_tmp01091;
  struct std___Deque_iterator_double__double____double___ agg_tmp11092;
  this1090 = v1088;
  struct std__deque_double__std__allocator_double__* t1093 = this1090;
    struct std___Deque_iterator_double__double____double___ r1094 = std__deque_double__std__allocator_double_____begin(t1093);
    agg_tmp01091 = r1094;
    struct std___Deque_iterator_double__double____double___ r1095 = std__deque_double__std__allocator_double_____end(t1093);
    agg_tmp11092 = r1095;
    struct std___Deque_base_double__std__allocator_double__* base1096 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1093 + 0);
    struct std__allocator_double_* r1097 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base1096);
    struct std___Deque_iterator_double__double____double___ t1098 = agg_tmp01091;
    struct std___Deque_iterator_double__double____double___ t1099 = agg_tmp11092;
    std__deque_double__std__allocator_double______M_destroy_data(t1093, t1098, t1099, r1097);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_double__std__allocator_double__* base1100 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1093 + 0);
        std___Deque_base_double__std__allocator_double_______Deque_base(base1100);
      }
      return;
    }
  {
    struct std___Deque_base_double__std__allocator_double__* base1101 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1093 + 0);
    std___Deque_base_double__std__allocator_double_______Deque_base(base1101);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1102:
  _Bool __retval1103;
    _Bool c1104 = 0;
    __retval1103 = c1104;
    _Bool t1105 = __retval1103;
    return t1105;
  abort();
}

// function: _ZSt10destroy_atIdEvPT_
void void_std__destroy_at_double_(double* v1106) {
bb1107:
  double* __location1108;
  __location1108 = v1106;
  return;
}

// function: _ZSt8_DestroyIPdEvT_S1_
void void_std___Destroy_double__(double* v1109, double* v1110) {
bb1111:
  double* __first1112;
  double* __last1113;
  __first1112 = v1109;
  __last1113 = v1110;
      _Bool r1114 = std____is_constant_evaluated();
      if (r1114) {
          while (1) {
            double* t1116 = __first1112;
            double* t1117 = __last1113;
            _Bool c1118 = ((t1116 != t1117)) ? 1 : 0;
            if (!c1118) break;
            double* t1119 = __first1112;
            void_std__destroy_at_double_(t1119);
            if (__cir_exc_active) {
              return;
            }
          for_step1115: ;
            double* t1120 = __first1112;
            int c1121 = 1;
            double* ptr1122 = &(t1120)[c1121];
            __first1112 = ptr1122;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPddEvT_S1_RSaIT0_E
void void_std___Destroy_double___double_(double* v1123, double* v1124, struct std__allocator_double_* v1125) {
bb1126:
  double* __first1127;
  double* __last1128;
  struct std__allocator_double_* unnamed1129;
  __first1127 = v1123;
  __last1128 = v1124;
  unnamed1129 = v1125;
  double* t1130 = __first1127;
  double* t1131 = __last1128;
  void_std___Destroy_double__(t1130, t1131);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1132) {
bb1133:
  unsigned long __size1134;
  unsigned long __retval1135;
  __size1134 = v1132;
  unsigned long t1136 = __size1134;
  unsigned long c1137 = 512;
  _Bool c1138 = ((t1136 < c1137)) ? 1 : 0;
  unsigned long ternary1139;
  if (c1138) {
    unsigned long c1140 = 512;
    unsigned long t1141 = __size1134;
    unsigned long b1142 = c1140 / t1141;
    ternary1139 = (unsigned long)b1142;
  } else {
    unsigned long c1143 = 1;
    ternary1139 = (unsigned long)c1143;
  }
  __retval1135 = ternary1139;
  unsigned long t1144 = __retval1135;
  return t1144;
}

// function: _ZNSt5dequeIdSaIdEE14_S_buffer_sizeEv
unsigned long std__deque_double__std__allocator_double______S_buffer_size() {
bb1145:
  unsigned long __retval1146;
  unsigned long c1147 = 8;
  unsigned long r1148 = std____deque_buf_size(c1147);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1146 = r1148;
  unsigned long t1149 = __retval1146;
  return t1149;
}

// function: _ZNSt5dequeIdSaIdEE19_M_destroy_data_auxESt15_Deque_iteratorIdRdPdES5_
void std__deque_double__std__allocator_double______M_destroy_data_aux(struct std__deque_double__std__allocator_double__* v1150, struct std___Deque_iterator_double__double____double___ v1151, struct std___Deque_iterator_double__double____double___ v1152) {
bb1153:
  struct std__deque_double__std__allocator_double__* this1154;
  struct std___Deque_iterator_double__double____double___ __first1155;
  struct std___Deque_iterator_double__double____double___ __last1156;
  this1154 = v1150;
  __first1155 = v1151;
  __last1156 = v1152;
  struct std__deque_double__std__allocator_double__* t1157 = this1154;
    double** __node1158;
    double** t1159 = __first1155._M_node;
    int c1160 = 1;
    double** ptr1161 = &(t1159)[c1160];
    __node1158 = ptr1161;
    while (1) {
      double** t1163 = __node1158;
      double** t1164 = __last1156._M_node;
      _Bool c1165 = ((t1163 < t1164)) ? 1 : 0;
      if (!c1165) break;
      double** t1166 = __node1158;
      double* t1167 = *t1166;
      double** t1168 = __node1158;
      double* t1169 = *t1168;
      unsigned long r1170 = std__deque_double__std__allocator_double______S_buffer_size();
      double* ptr1171 = &(t1169)[r1170];
      struct std___Deque_base_double__std__allocator_double__* base1172 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1157 + 0);
      struct std__allocator_double_* r1173 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base1172);
      void_std___Destroy_double___double_(t1167, ptr1171, r1173);
      if (__cir_exc_active) {
        return;
      }
    for_step1162: ;
      double** t1174 = __node1158;
      int c1175 = 1;
      double** ptr1176 = &(t1174)[c1175];
      __node1158 = ptr1176;
    }
    double** t1177 = __first1155._M_node;
    double** t1178 = __last1156._M_node;
    _Bool c1179 = ((t1177 != t1178)) ? 1 : 0;
    if (c1179) {
      double* t1180 = __first1155._M_cur;
      double* t1181 = __first1155._M_last;
      struct std___Deque_base_double__std__allocator_double__* base1182 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1157 + 0);
      struct std__allocator_double_* r1183 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base1182);
      void_std___Destroy_double___double_(t1180, t1181, r1183);
      if (__cir_exc_active) {
        return;
      }
      double* t1184 = __last1156._M_first;
      double* t1185 = __last1156._M_cur;
      struct std___Deque_base_double__std__allocator_double__* base1186 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1157 + 0);
      struct std__allocator_double_* r1187 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base1186);
      void_std___Destroy_double___double_(t1184, t1185, r1187);
      if (__cir_exc_active) {
        return;
      }
    } else {
      double* t1188 = __first1155._M_cur;
      double* t1189 = __last1156._M_cur;
      struct std___Deque_base_double__std__allocator_double__* base1190 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1157 + 0);
      struct std__allocator_double_* r1191 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base1190);
      void_std___Destroy_double___double_(t1188, t1189, r1191);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIdRdPdEC2ERKS2_
void std___Deque_iterator_double__double___double_____Deque_iterator(struct std___Deque_iterator_double__double____double___* v1192, struct std___Deque_iterator_double__double____double___* v1193) {
bb1194:
  struct std___Deque_iterator_double__double____double___* this1195;
  struct std___Deque_iterator_double__double____double___* __x1196;
  this1195 = v1192;
  __x1196 = v1193;
  struct std___Deque_iterator_double__double____double___* t1197 = this1195;
  struct std___Deque_iterator_double__double____double___* t1198 = __x1196;
  double* t1199 = t1198->_M_cur;
  t1197->_M_cur = t1199;
  struct std___Deque_iterator_double__double____double___* t1200 = __x1196;
  double* t1201 = t1200->_M_first;
  t1197->_M_first = t1201;
  struct std___Deque_iterator_double__double____double___* t1202 = __x1196;
  double* t1203 = t1202->_M_last;
  t1197->_M_last = t1203;
  struct std___Deque_iterator_double__double____double___* t1204 = __x1196;
  double** t1205 = t1204->_M_node;
  t1197->_M_node = t1205;
  return;
}

// function: _ZNSt5dequeIdSaIdEE15_M_destroy_dataESt15_Deque_iteratorIdRdPdES5_RKS0_
void std__deque_double__std__allocator_double______M_destroy_data(struct std__deque_double__std__allocator_double__* v1206, struct std___Deque_iterator_double__double____double___ v1207, struct std___Deque_iterator_double__double____double___ v1208, struct std__allocator_double_* v1209) {
bb1210:
  struct std__deque_double__std__allocator_double__* this1211;
  struct std___Deque_iterator_double__double____double___ __first1212;
  struct std___Deque_iterator_double__double____double___ __last1213;
  struct std__allocator_double_* unnamed1214;
  this1211 = v1206;
  __first1212 = v1207;
  __last1213 = v1208;
  unnamed1214 = v1209;
  struct std__deque_double__std__allocator_double__* t1215 = this1211;
    _Bool c1216 = 0;
    if (c1216) {
      struct std___Deque_iterator_double__double____double___ agg_tmp01217;
      struct std___Deque_iterator_double__double____double___ agg_tmp11218;
      std___Deque_iterator_double__double___double_____Deque_iterator(&agg_tmp01217, &__first1212);
      std___Deque_iterator_double__double___double_____Deque_iterator(&agg_tmp11218, &__last1213);
      struct std___Deque_iterator_double__double____double___ t1219 = agg_tmp01217;
      struct std___Deque_iterator_double__double____double___ t1220 = agg_tmp11218;
      std__deque_double__std__allocator_double______M_destroy_data_aux(t1215, t1219, t1220);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIdSaIdEE5beginEv
struct std___Deque_iterator_double__double____double___ std__deque_double__std__allocator_double_____begin(struct std__deque_double__std__allocator_double__* v1221) {
bb1222:
  struct std__deque_double__std__allocator_double__* this1223;
  struct std___Deque_iterator_double__double____double___ __retval1224;
  this1223 = v1221;
  struct std__deque_double__std__allocator_double__* t1225 = this1223;
  struct std___Deque_base_double__std__allocator_double__* base1226 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1225 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1227 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1226->_M_impl) + 0);
  std___Deque_iterator_double__double___double_____Deque_iterator(&__retval1224, &base1227->_M_start);
  struct std___Deque_iterator_double__double____double___ t1228 = __retval1224;
  return t1228;
}

// function: _ZNSt5dequeIdSaIdEE3endEv
struct std___Deque_iterator_double__double____double___ std__deque_double__std__allocator_double_____end(struct std__deque_double__std__allocator_double__* v1229) {
bb1230:
  struct std__deque_double__std__allocator_double__* this1231;
  struct std___Deque_iterator_double__double____double___ __retval1232;
  this1231 = v1229;
  struct std__deque_double__std__allocator_double__* t1233 = this1231;
  struct std___Deque_base_double__std__allocator_double__* base1234 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1233 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1235 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1234->_M_impl) + 0);
  std___Deque_iterator_double__double___double_____Deque_iterator(&__retval1232, &base1235->_M_finish);
  struct std___Deque_iterator_double__double____double___ t1236 = __retval1232;
  return t1236;
}

// function: _ZNSt11_Deque_baseIdSaIdEE19_M_get_Tp_allocatorEv
struct std__allocator_double_* std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(struct std___Deque_base_double__std__allocator_double__* v1237) {
bb1238:
  struct std___Deque_base_double__std__allocator_double__* this1239;
  struct std__allocator_double_* __retval1240;
  this1239 = v1237;
  struct std___Deque_base_double__std__allocator_double__* t1241 = this1239;
  struct std__allocator_double_* base1242 = (struct std__allocator_double_*)((char *)&(t1241->_M_impl) + 0);
  __retval1240 = base1242;
  struct std__allocator_double_* t1243 = __retval1240;
  return t1243;
}

// function: _ZNSt15__new_allocatorIdE10deallocateEPdm
void std____new_allocator_double___deallocate(struct std____new_allocator_double_* v1244, double* v1245, unsigned long v1246) {
bb1247:
  struct std____new_allocator_double_* this1248;
  double* __p1249;
  unsigned long __n1250;
  this1248 = v1244;
  __p1249 = v1245;
  __n1250 = v1246;
  struct std____new_allocator_double_* t1251 = this1248;
    unsigned long c1252 = 8;
    unsigned long c1253 = 16;
    _Bool c1254 = ((c1252 > c1253)) ? 1 : 0;
    if (c1254) {
      double* t1255 = __p1249;
      void* cast1256 = (void*)t1255;
      unsigned long t1257 = __n1250;
      unsigned long c1258 = 8;
      unsigned long b1259 = t1257 * c1258;
      unsigned long c1260 = 8;
      operator_delete_3(cast1256, b1259, c1260);
      return;
    }
  double* t1261 = __p1249;
  void* cast1262 = (void*)t1261;
  unsigned long t1263 = __n1250;
  unsigned long c1264 = 8;
  unsigned long b1265 = t1263 * c1264;
  operator_delete_2(cast1262, b1265);
  return;
}

// function: _ZNSaIdE10deallocateEPdm
void std__allocator_double___deallocate(struct std__allocator_double_* v1266, double* v1267, unsigned long v1268) {
bb1269:
  struct std__allocator_double_* this1270;
  double* __p1271;
  unsigned long __n1272;
  this1270 = v1266;
  __p1271 = v1267;
  __n1272 = v1268;
  struct std__allocator_double_* t1273 = this1270;
    _Bool r1274 = std____is_constant_evaluated();
    if (r1274) {
      double* t1275 = __p1271;
      void* cast1276 = (void*)t1275;
      operator_delete(cast1276);
      return;
    }
  struct std____new_allocator_double_* base1277 = (struct std____new_allocator_double_*)((char *)t1273 + 0);
  double* t1278 = __p1271;
  unsigned long t1279 = __n1272;
  std____new_allocator_double___deallocate(base1277, t1278, t1279);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIdEE10deallocateERS0_Pdm
void std__allocator_traits_std__allocator_double_____deallocate(struct std__allocator_double_* v1280, double* v1281, unsigned long v1282) {
bb1283:
  struct std__allocator_double_* __a1284;
  double* __p1285;
  unsigned long __n1286;
  __a1284 = v1280;
  __p1285 = v1281;
  __n1286 = v1282;
  struct std__allocator_double_* t1287 = __a1284;
  double* t1288 = __p1285;
  unsigned long t1289 = __n1286;
  std__allocator_double___deallocate(t1287, t1288, t1289);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE18_M_deallocate_nodeEPd
void std___Deque_base_double__std__allocator_double______M_deallocate_node(struct std___Deque_base_double__std__allocator_double__* v1290, double* v1291) {
bb1292:
  struct std___Deque_base_double__std__allocator_double__* this1293;
  double* __p1294;
  this1293 = v1290;
  __p1294 = v1291;
  struct std___Deque_base_double__std__allocator_double__* t1295 = this1293;
  struct std__allocator_double_* base1296 = (struct std__allocator_double_*)((char *)&(t1295->_M_impl) + 0);
  double* t1297 = __p1294;
  unsigned long c1298 = 8;
  unsigned long r1299 = std____deque_buf_size(c1298);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_double_____deallocate(base1296, t1297, r1299);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE16_M_destroy_nodesEPPdS3_
void std___Deque_base_double__std__allocator_double______M_destroy_nodes(struct std___Deque_base_double__std__allocator_double__* v1300, double** v1301, double** v1302) {
bb1303:
  struct std___Deque_base_double__std__allocator_double__* this1304;
  double** __nstart1305;
  double** __nfinish1306;
  this1304 = v1300;
  __nstart1305 = v1301;
  __nfinish1306 = v1302;
  struct std___Deque_base_double__std__allocator_double__* t1307 = this1304;
    double** __n1308;
    double** t1309 = __nstart1305;
    __n1308 = t1309;
    while (1) {
      double** t1311 = __n1308;
      double** t1312 = __nfinish1306;
      _Bool c1313 = ((t1311 < t1312)) ? 1 : 0;
      if (!c1313) break;
      double** t1314 = __n1308;
      double* t1315 = *t1314;
      std___Deque_base_double__std__allocator_double______M_deallocate_node(t1307, t1315);
    for_step1310: ;
      double** t1316 = __n1308;
      int c1317 = 1;
      double** ptr1318 = &(t1316)[c1317];
      __n1308 = ptr1318;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIdSaIdEE19_M_get_Tp_allocatorEv
struct std__allocator_double_* std___Deque_base_double__std__allocator_double______M_get_Tp_allocator___const(struct std___Deque_base_double__std__allocator_double__* v1319) {
bb1320:
  struct std___Deque_base_double__std__allocator_double__* this1321;
  struct std__allocator_double_* __retval1322;
  this1321 = v1319;
  struct std___Deque_base_double__std__allocator_double__* t1323 = this1321;
  struct std__allocator_double_* base1324 = (struct std__allocator_double_*)((char *)&(t1323->_M_impl) + 0);
  __retval1322 = base1324;
  struct std__allocator_double_* t1325 = __retval1322;
  return t1325;
}

// function: _ZNSaIPdEC2IdEERKSaIT_E
void std__allocator_double____allocator_double_(struct std__allocator_double___* v1326, struct std__allocator_double_* v1327) {
bb1328:
  struct std__allocator_double___* this1329;
  struct std__allocator_double_* unnamed1330;
  this1329 = v1326;
  unnamed1330 = v1327;
  struct std__allocator_double___* t1331 = this1329;
  struct std____new_allocator_double___* base1332 = (struct std____new_allocator_double___*)((char *)t1331 + 0);
  std____new_allocator_double______new_allocator(base1332);
  return;
}

// function: _ZNKSt11_Deque_baseIdSaIdEE20_M_get_map_allocatorEv
struct std__allocator_double___ std___Deque_base_double__std__allocator_double______M_get_map_allocator___const(struct std___Deque_base_double__std__allocator_double__* v1333) {
bb1334:
  struct std___Deque_base_double__std__allocator_double__* this1335;
  struct std__allocator_double___ __retval1336;
  this1335 = v1333;
  struct std___Deque_base_double__std__allocator_double__* t1337 = this1335;
  struct std__allocator_double_* r1338 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator___const(t1337);
  std__allocator_double____allocator_double_(&__retval1336, r1338);
  struct std__allocator_double___ t1339 = __retval1336;
  return t1339;
}

// function: _ZNSt15__new_allocatorIPdE10deallocateEPS0_m
void std____new_allocator_double____deallocate(struct std____new_allocator_double___* v1340, double** v1341, unsigned long v1342) {
bb1343:
  struct std____new_allocator_double___* this1344;
  double** __p1345;
  unsigned long __n1346;
  this1344 = v1340;
  __p1345 = v1341;
  __n1346 = v1342;
  struct std____new_allocator_double___* t1347 = this1344;
    unsigned long c1348 = 8;
    unsigned long c1349 = 16;
    _Bool c1350 = ((c1348 > c1349)) ? 1 : 0;
    if (c1350) {
      double** t1351 = __p1345;
      void* cast1352 = (void*)t1351;
      unsigned long t1353 = __n1346;
      unsigned long c1354 = 8;
      unsigned long b1355 = t1353 * c1354;
      unsigned long c1356 = 8;
      operator_delete_3(cast1352, b1355, c1356);
      return;
    }
  double** t1357 = __p1345;
  void* cast1358 = (void*)t1357;
  unsigned long t1359 = __n1346;
  unsigned long c1360 = 8;
  unsigned long b1361 = t1359 * c1360;
  operator_delete_2(cast1358, b1361);
  return;
}

// function: _ZNSaIPdE10deallocateEPS_m
void std__allocator_double____deallocate(struct std__allocator_double___* v1362, double** v1363, unsigned long v1364) {
bb1365:
  struct std__allocator_double___* this1366;
  double** __p1367;
  unsigned long __n1368;
  this1366 = v1362;
  __p1367 = v1363;
  __n1368 = v1364;
  struct std__allocator_double___* t1369 = this1366;
    _Bool r1370 = std____is_constant_evaluated();
    if (r1370) {
      double** t1371 = __p1367;
      void* cast1372 = (void*)t1371;
      operator_delete(cast1372);
      return;
    }
  struct std____new_allocator_double___* base1373 = (struct std____new_allocator_double___*)((char *)t1369 + 0);
  double** t1374 = __p1367;
  unsigned long t1375 = __n1368;
  std____new_allocator_double____deallocate(base1373, t1374, t1375);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPdEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_double______deallocate(struct std__allocator_double___* v1376, double** v1377, unsigned long v1378) {
bb1379:
  struct std__allocator_double___* __a1380;
  double** __p1381;
  unsigned long __n1382;
  __a1380 = v1376;
  __p1381 = v1377;
  __n1382 = v1378;
  struct std__allocator_double___* t1383 = __a1380;
  double** t1384 = __p1381;
  unsigned long t1385 = __n1382;
  std__allocator_double____deallocate(t1383, t1384, t1385);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE17_M_deallocate_mapEPPdm
void std___Deque_base_double__std__allocator_double______M_deallocate_map(struct std___Deque_base_double__std__allocator_double__* v1386, double** v1387, unsigned long v1388) {
bb1389:
  struct std___Deque_base_double__std__allocator_double__* this1390;
  double** __p1391;
  unsigned long __n1392;
  struct std__allocator_double___ __map_alloc1393;
  this1390 = v1386;
  __p1391 = v1387;
  __n1392 = v1388;
  struct std___Deque_base_double__std__allocator_double__* t1394 = this1390;
  struct std__allocator_double___ r1395 = std___Deque_base_double__std__allocator_double______M_get_map_allocator___const(t1394);
  __map_alloc1393 = r1395;
  double** t1396 = __p1391;
  unsigned long t1397 = __n1392;
  std__allocator_traits_std__allocator_double______deallocate(&__map_alloc1393, t1396, t1397);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE11_Deque_implD2Ev
void std___Deque_base_double__std__allocator_double______Deque_impl____Deque_impl(struct std___Deque_base_double__std__allocator_double_____Deque_impl* v1398) {
bb1399:
  struct std___Deque_base_double__std__allocator_double_____Deque_impl* this1400;
  this1400 = v1398;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl* t1401 = this1400;
  {
    struct std__allocator_double_* base1402 = (struct std__allocator_double_*)((char *)t1401 + 0);
    std__allocator_double____allocator(base1402);
  }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEED2Ev
void std___Deque_base_double__std__allocator_double_______Deque_base(struct std___Deque_base_double__std__allocator_double__* v1403) {
bb1404:
  struct std___Deque_base_double__std__allocator_double__* this1405;
  this1405 = v1403;
  struct std___Deque_base_double__std__allocator_double__* t1406 = this1405;
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1407 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1406->_M_impl) + 0);
      double** t1408 = base1407->_M_map;
      _Bool cast1409 = (_Bool)t1408;
      if (cast1409) {
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1410 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1406->_M_impl) + 0);
        double** t1411 = base1410->_M_start._M_node;
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1412 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1406->_M_impl) + 0);
        double** t1413 = base1412->_M_finish._M_node;
        int c1414 = 1;
        double** ptr1415 = &(t1413)[c1414];
        std___Deque_base_double__std__allocator_double______M_destroy_nodes(t1406, t1411, ptr1415);
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1416 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1406->_M_impl) + 0);
        double** t1417 = base1416->_M_map;
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1418 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1406->_M_impl) + 0);
        unsigned long t1419 = base1418->_M_map_size;
        std___Deque_base_double__std__allocator_double______M_deallocate_map(t1406, t1417, t1419);
      }
  {
    std___Deque_base_double__std__allocator_double______Deque_impl____Deque_impl(&t1406->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPdEC2Ev
void std____new_allocator_double______new_allocator(struct std____new_allocator_double___* v1420) {
bb1421:
  struct std____new_allocator_double___* this1422;
  this1422 = v1420;
  struct std____new_allocator_double___* t1423 = this1422;
  return;
}

// function: _ZNSaIdED2Ev
void std__allocator_double____allocator(struct std__allocator_double_* v1424) {
bb1425:
  struct std__allocator_double_* this1426;
  this1426 = v1424;
  struct std__allocator_double_* t1427 = this1426;
  return;
}

// function: _ZNSt5dequeIdSaIdEEC2Ev
void std__deque_double__std__allocator_double_____deque(struct std__deque_double__std__allocator_double__* v1428) {
bb1429:
  struct std__deque_double__std__allocator_double__* this1430;
  this1430 = v1428;
  struct std__deque_double__std__allocator_double__* t1431 = this1430;
  struct std___Deque_base_double__std__allocator_double__* base1432 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1431 + 0);
  std___Deque_base_double__std__allocator_double______Deque_base(base1432);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE11_Deque_implC2Ev
void std___Deque_base_double__std__allocator_double______Deque_impl___Deque_impl(struct std___Deque_base_double__std__allocator_double_____Deque_impl* v1433) {
bb1434:
  struct std___Deque_base_double__std__allocator_double_____Deque_impl* this1435;
  this1435 = v1433;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl* t1436 = this1435;
  struct std__allocator_double_* base1437 = (struct std__allocator_double_*)((char *)t1436 + 0);
  std__allocator_double___allocator(base1437);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1438 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)t1436 + 0);
    std___Deque_base_double__std__allocator_double______Deque_impl_data___Deque_impl_data(base1438);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1439, unsigned long* v1440) {
bb1441:
  unsigned long* __a1442;
  unsigned long* __b1443;
  unsigned long* __retval1444;
  __a1442 = v1439;
  __b1443 = v1440;
    unsigned long* t1445 = __a1442;
    unsigned long t1446 = *t1445;
    unsigned long* t1447 = __b1443;
    unsigned long t1448 = *t1447;
    _Bool c1449 = ((t1446 < t1448)) ? 1 : 0;
    if (c1449) {
      unsigned long* t1450 = __b1443;
      __retval1444 = t1450;
      unsigned long* t1451 = __retval1444;
      return t1451;
    }
  unsigned long* t1452 = __a1442;
  __retval1444 = t1452;
  unsigned long* t1453 = __retval1444;
  return t1453;
}

// function: _ZNKSt15__new_allocatorIPdE11_M_max_sizeEv
unsigned long std____new_allocator_double_____M_max_size___const(struct std____new_allocator_double___* v1454) {
bb1455:
  struct std____new_allocator_double___* this1456;
  unsigned long __retval1457;
  this1456 = v1454;
  struct std____new_allocator_double___* t1458 = this1456;
  unsigned long c1459 = 9223372036854775807;
  unsigned long c1460 = 8;
  unsigned long b1461 = c1459 / c1460;
  __retval1457 = b1461;
  unsigned long t1462 = __retval1457;
  return t1462;
}

// function: _ZNSt15__new_allocatorIPdE8allocateEmPKv
double** std____new_allocator_double____allocate(struct std____new_allocator_double___* v1463, unsigned long v1464, void* v1465) {
bb1466:
  struct std____new_allocator_double___* this1467;
  unsigned long __n1468;
  void* unnamed1469;
  double** __retval1470;
  this1467 = v1463;
  __n1468 = v1464;
  unnamed1469 = v1465;
  struct std____new_allocator_double___* t1471 = this1467;
    unsigned long t1472 = __n1468;
    unsigned long r1473 = std____new_allocator_double_____M_max_size___const(t1471);
    _Bool c1474 = ((t1472 > r1473)) ? 1 : 0;
    if (c1474) {
        unsigned long t1475 = __n1468;
        unsigned long c1476 = -1;
        unsigned long c1477 = 8;
        unsigned long b1478 = c1476 / c1477;
        _Bool c1479 = ((t1475 > b1478)) ? 1 : 0;
        if (c1479) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            double** __cir_eh_ret = (double**)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        double** __cir_eh_ret = (double**)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1480 = 8;
    unsigned long c1481 = 16;
    _Bool c1482 = ((c1480 > c1481)) ? 1 : 0;
    if (c1482) {
      unsigned long __al1483;
      unsigned long c1484 = 8;
      __al1483 = c1484;
      unsigned long t1485 = __n1468;
      unsigned long c1486 = 8;
      unsigned long b1487 = t1485 * c1486;
      unsigned long t1488 = __al1483;
      void* r1489 = operator_new_2(b1487, t1488);
      if (__cir_exc_active) {
        double** __cir_eh_ret = (double**)0;
        return __cir_eh_ret;
      }
      double** cast1490 = (double**)r1489;
      __retval1470 = cast1490;
      double** t1491 = __retval1470;
      return t1491;
    }
  unsigned long t1492 = __n1468;
  unsigned long c1493 = 8;
  unsigned long b1494 = t1492 * c1493;
  void* r1495 = operator_new(b1494);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** cast1496 = (double**)r1495;
  __retval1470 = cast1496;
  double** t1497 = __retval1470;
  return t1497;
}

// function: _ZNSaIPdE8allocateEm
double** std__allocator_double____allocate(struct std__allocator_double___* v1498, unsigned long v1499) {
bb1500:
  struct std__allocator_double___* this1501;
  unsigned long __n1502;
  double** __retval1503;
  this1501 = v1498;
  __n1502 = v1499;
  struct std__allocator_double___* t1504 = this1501;
    _Bool r1505 = std____is_constant_evaluated();
    if (r1505) {
        unsigned long t1506 = __n1502;
        unsigned long c1507 = 8;
        unsigned long ovr1508;
        _Bool ovf1509 = __builtin_mul_overflow(t1506, c1507, &ovr1508);
        __n1502 = ovr1508;
        if (ovf1509) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            double** __cir_eh_ret = (double**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1510 = __n1502;
      void* r1511 = operator_new(t1510);
      if (__cir_exc_active) {
        double** __cir_eh_ret = (double**)0;
        return __cir_eh_ret;
      }
      double** cast1512 = (double**)r1511;
      __retval1503 = cast1512;
      double** t1513 = __retval1503;
      return t1513;
    }
  struct std____new_allocator_double___* base1514 = (struct std____new_allocator_double___*)((char *)t1504 + 0);
  unsigned long t1515 = __n1502;
  void* c1516 = ((void*)0);
  double** r1517 = std____new_allocator_double____allocate(base1514, t1515, c1516);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval1503 = r1517;
  double** t1518 = __retval1503;
  return t1518;
}

// function: _ZNSt16allocator_traitsISaIPdEE8allocateERS1_m
double** std__allocator_traits_std__allocator_double______allocate(struct std__allocator_double___* v1519, unsigned long v1520) {
bb1521:
  struct std__allocator_double___* __a1522;
  unsigned long __n1523;
  double** __retval1524;
  __a1522 = v1519;
  __n1523 = v1520;
  struct std__allocator_double___* t1525 = __a1522;
  unsigned long t1526 = __n1523;
  double** r1527 = std__allocator_double____allocate(t1525, t1526);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval1524 = r1527;
  double** t1528 = __retval1524;
  return t1528;
}

// function: _ZNSt11_Deque_baseIdSaIdEE15_M_allocate_mapEm
double** std___Deque_base_double__std__allocator_double______M_allocate_map(struct std___Deque_base_double__std__allocator_double__* v1529, unsigned long v1530) {
bb1531:
  struct std___Deque_base_double__std__allocator_double__* this1532;
  unsigned long __n1533;
  double** __retval1534;
  struct std__allocator_double___ __map_alloc1535;
  this1532 = v1529;
  __n1533 = v1530;
  struct std___Deque_base_double__std__allocator_double__* t1536 = this1532;
  struct std__allocator_double___ r1537 = std___Deque_base_double__std__allocator_double______M_get_map_allocator___const(t1536);
  __map_alloc1535 = r1537;
  unsigned long t1538 = __n1533;
  double** r1539 = std__allocator_traits_std__allocator_double______allocate(&__map_alloc1535, t1538);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval1534 = r1539;
  double** t1540 = __retval1534;
  return t1540;
}

// function: _ZNKSt15__new_allocatorIdE11_M_max_sizeEv
unsigned long std____new_allocator_double____M_max_size___const(struct std____new_allocator_double_* v1541) {
bb1542:
  struct std____new_allocator_double_* this1543;
  unsigned long __retval1544;
  this1543 = v1541;
  struct std____new_allocator_double_* t1545 = this1543;
  unsigned long c1546 = 9223372036854775807;
  unsigned long c1547 = 8;
  unsigned long b1548 = c1546 / c1547;
  __retval1544 = b1548;
  unsigned long t1549 = __retval1544;
  return t1549;
}

// function: _ZNSt15__new_allocatorIdE8allocateEmPKv
double* std____new_allocator_double___allocate(struct std____new_allocator_double_* v1550, unsigned long v1551, void* v1552) {
bb1553:
  struct std____new_allocator_double_* this1554;
  unsigned long __n1555;
  void* unnamed1556;
  double* __retval1557;
  this1554 = v1550;
  __n1555 = v1551;
  unnamed1556 = v1552;
  struct std____new_allocator_double_* t1558 = this1554;
    unsigned long t1559 = __n1555;
    unsigned long r1560 = std____new_allocator_double____M_max_size___const(t1558);
    _Bool c1561 = ((t1559 > r1560)) ? 1 : 0;
    if (c1561) {
        unsigned long t1562 = __n1555;
        unsigned long c1563 = -1;
        unsigned long c1564 = 8;
        unsigned long b1565 = c1563 / c1564;
        _Bool c1566 = ((t1562 > b1565)) ? 1 : 0;
        if (c1566) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            double* __cir_eh_ret = (double*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        double* __cir_eh_ret = (double*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1567 = 8;
    unsigned long c1568 = 16;
    _Bool c1569 = ((c1567 > c1568)) ? 1 : 0;
    if (c1569) {
      unsigned long __al1570;
      unsigned long c1571 = 8;
      __al1570 = c1571;
      unsigned long t1572 = __n1555;
      unsigned long c1573 = 8;
      unsigned long b1574 = t1572 * c1573;
      unsigned long t1575 = __al1570;
      void* r1576 = operator_new_2(b1574, t1575);
      if (__cir_exc_active) {
        double* __cir_eh_ret = (double*)0;
        return __cir_eh_ret;
      }
      double* cast1577 = (double*)r1576;
      __retval1557 = cast1577;
      double* t1578 = __retval1557;
      return t1578;
    }
  unsigned long t1579 = __n1555;
  unsigned long c1580 = 8;
  unsigned long b1581 = t1579 * c1580;
  void* r1582 = operator_new(b1581);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  double* cast1583 = (double*)r1582;
  __retval1557 = cast1583;
  double* t1584 = __retval1557;
  return t1584;
}

// function: _ZNSaIdE8allocateEm
double* std__allocator_double___allocate(struct std__allocator_double_* v1585, unsigned long v1586) {
bb1587:
  struct std__allocator_double_* this1588;
  unsigned long __n1589;
  double* __retval1590;
  this1588 = v1585;
  __n1589 = v1586;
  struct std__allocator_double_* t1591 = this1588;
    _Bool r1592 = std____is_constant_evaluated();
    if (r1592) {
        unsigned long t1593 = __n1589;
        unsigned long c1594 = 8;
        unsigned long ovr1595;
        _Bool ovf1596 = __builtin_mul_overflow(t1593, c1594, &ovr1595);
        __n1589 = ovr1595;
        if (ovf1596) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            double* __cir_eh_ret = (double*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1597 = __n1589;
      void* r1598 = operator_new(t1597);
      if (__cir_exc_active) {
        double* __cir_eh_ret = (double*)0;
        return __cir_eh_ret;
      }
      double* cast1599 = (double*)r1598;
      __retval1590 = cast1599;
      double* t1600 = __retval1590;
      return t1600;
    }
  struct std____new_allocator_double_* base1601 = (struct std____new_allocator_double_*)((char *)t1591 + 0);
  unsigned long t1602 = __n1589;
  void* c1603 = ((void*)0);
  double* r1604 = std____new_allocator_double___allocate(base1601, t1602, c1603);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval1590 = r1604;
  double* t1605 = __retval1590;
  return t1605;
}

// function: _ZNSt16allocator_traitsISaIdEE8allocateERS0_m
double* std__allocator_traits_std__allocator_double_____allocate(struct std__allocator_double_* v1606, unsigned long v1607) {
bb1608:
  struct std__allocator_double_* __a1609;
  unsigned long __n1610;
  double* __retval1611;
  __a1609 = v1606;
  __n1610 = v1607;
  struct std__allocator_double_* t1612 = __a1609;
  unsigned long t1613 = __n1610;
  double* r1614 = std__allocator_double___allocate(t1612, t1613);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval1611 = r1614;
  double* t1615 = __retval1611;
  return t1615;
}

// function: _ZNSt11_Deque_baseIdSaIdEE16_M_allocate_nodeEv
double* std___Deque_base_double__std__allocator_double______M_allocate_node(struct std___Deque_base_double__std__allocator_double__* v1616) {
bb1617:
  struct std___Deque_base_double__std__allocator_double__* this1618;
  double* __retval1619;
  this1618 = v1616;
  struct std___Deque_base_double__std__allocator_double__* t1620 = this1618;
  struct std__allocator_double_* base1621 = (struct std__allocator_double_*)((char *)&(t1620->_M_impl) + 0);
  unsigned long c1622 = 8;
  unsigned long r1623 = std____deque_buf_size(c1622);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  double* r1624 = std__allocator_traits_std__allocator_double_____allocate(base1621, r1623);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval1619 = r1624;
  double* t1625 = __retval1619;
  return t1625;
}

// function: _ZNSt11_Deque_baseIdSaIdEE15_M_create_nodesEPPdS3_
void std___Deque_base_double__std__allocator_double______M_create_nodes(struct std___Deque_base_double__std__allocator_double__* v1626, double** v1627, double** v1628) {
bb1629:
  struct std___Deque_base_double__std__allocator_double__* this1630;
  double** __nstart1631;
  double** __nfinish1632;
  double** __cur1633;
  this1630 = v1626;
  __nstart1631 = v1627;
  __nfinish1632 = v1628;
  struct std___Deque_base_double__std__allocator_double__* t1634 = this1630;
        double** t1636 = __nstart1631;
        __cur1633 = t1636;
        while (1) {
          double** t1638 = __cur1633;
          double** t1639 = __nfinish1632;
          _Bool c1640 = ((t1638 < t1639)) ? 1 : 0;
          if (!c1640) break;
          double* r1641 = std___Deque_base_double__std__allocator_double______M_allocate_node(t1634);
          if (__cir_exc_active) {
            goto cir_try_dispatch1635;
          }
          double** t1642 = __cur1633;
          *t1642 = r1641;
        for_step1637: ;
          double** t1643 = __cur1633;
          int c1644 = 1;
          double** ptr1645 = &(t1643)[c1644];
          __cur1633 = ptr1645;
        }
    cir_try_dispatch1635: ;
    if (__cir_exc_active) {
    {
      int ca_tok1646 = 0;
      void* ca_exn1647 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        double** t1648 = __nstart1631;
        double** t1649 = __cur1633;
        std___Deque_base_double__std__allocator_double______M_destroy_nodes(t1634, t1648, t1649);
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

// function: _ZNSt15_Deque_iteratorIdRdPdE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_double__double___double_____S_buffer_size() {
bb1650:
  unsigned long __retval1651;
  unsigned long c1652 = 8;
  unsigned long r1653 = std____deque_buf_size(c1652);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1651 = r1653;
  unsigned long t1654 = __retval1651;
  return t1654;
}

// function: _ZNSt15_Deque_iteratorIdRdPdE11_M_set_nodeEPS1_
void std___Deque_iterator_double__double___double_____M_set_node(struct std___Deque_iterator_double__double____double___* v1655, double** v1656) {
bb1657:
  struct std___Deque_iterator_double__double____double___* this1658;
  double** __new_node1659;
  this1658 = v1655;
  __new_node1659 = v1656;
  struct std___Deque_iterator_double__double____double___* t1660 = this1658;
  double** t1661 = __new_node1659;
  t1660->_M_node = t1661;
  double** t1662 = __new_node1659;
  double* t1663 = *t1662;
  t1660->_M_first = t1663;
  double* t1664 = t1660->_M_first;
  unsigned long r1665 = std___Deque_iterator_double__double___double_____S_buffer_size();
  long cast1666 = (long)r1665;
  double* ptr1667 = &(t1664)[cast1666];
  t1660->_M_last = ptr1667;
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE17_M_initialize_mapEm
void std___Deque_base_double__std__allocator_double______M_initialize_map(struct std___Deque_base_double__std__allocator_double__* v1668, unsigned long v1669) {
bb1670:
  struct std___Deque_base_double__std__allocator_double__* this1671;
  unsigned long __num_elements1672;
  unsigned long __num_nodes1673;
  unsigned long ref_tmp01674;
  unsigned long ref_tmp11675;
  double** __nstart1676;
  double** __nfinish1677;
  this1671 = v1668;
  __num_elements1672 = v1669;
  struct std___Deque_base_double__std__allocator_double__* t1678 = this1671;
  unsigned long t1679 = __num_elements1672;
  unsigned long c1680 = 8;
  unsigned long r1681 = std____deque_buf_size(c1680);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1682 = t1679 / r1681;
  unsigned long c1683 = 1;
  unsigned long b1684 = b1682 + c1683;
  __num_nodes1673 = b1684;
  unsigned long c1685 = 8;
  ref_tmp01674 = c1685;
  unsigned long t1686 = __num_nodes1673;
  unsigned long c1687 = 2;
  unsigned long b1688 = t1686 + c1687;
  ref_tmp11675 = b1688;
  unsigned long* r1689 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01674, &ref_tmp11675);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1690 = *r1689;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1691 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  base1691->_M_map_size = t1690;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1692 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  unsigned long t1693 = base1692->_M_map_size;
  double** r1694 = std___Deque_base_double__std__allocator_double______M_allocate_map(t1678, t1693);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1695 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  base1695->_M_map = r1694;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1696 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  double** t1697 = base1696->_M_map;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1698 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  unsigned long t1699 = base1698->_M_map_size;
  unsigned long t1700 = __num_nodes1673;
  unsigned long b1701 = t1699 - t1700;
  unsigned long c1702 = 2;
  unsigned long b1703 = b1701 / c1702;
  double** ptr1704 = &(t1697)[b1703];
  __nstart1676 = ptr1704;
  double** t1705 = __nstart1676;
  unsigned long t1706 = __num_nodes1673;
  double** ptr1707 = &(t1705)[t1706];
  __nfinish1677 = ptr1707;
      double** t1709 = __nstart1676;
      double** t1710 = __nfinish1677;
      std___Deque_base_double__std__allocator_double______M_create_nodes(t1678, t1709, t1710);
      if (__cir_exc_active) {
        goto cir_try_dispatch1708;
      }
    cir_try_dispatch1708: ;
    if (__cir_exc_active) {
    {
      int ca_tok1711 = 0;
      void* ca_exn1712 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1713 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
        double** t1714 = base1713->_M_map;
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1715 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
        unsigned long t1716 = base1715->_M_map_size;
        std___Deque_base_double__std__allocator_double______M_deallocate_map(t1678, t1714, t1716);
        double** c1717 = ((void*)0);
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1718 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
        base1718->_M_map = c1717;
        unsigned long c1719 = 0;
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1720 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
        base1720->_M_map_size = c1719;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1721 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  double** t1722 = __nstart1676;
  std___Deque_iterator_double__double___double_____M_set_node(&base1721->_M_start, t1722);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1723 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  double** t1724 = __nfinish1677;
  int c1725 = -1;
  double** ptr1726 = &(t1724)[c1725];
  std___Deque_iterator_double__double___double_____M_set_node(&base1723->_M_finish, ptr1726);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1727 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  double* t1728 = base1727->_M_start._M_first;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1729 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  base1729->_M_start._M_cur = t1728;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1730 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  double* t1731 = base1730->_M_finish._M_first;
  unsigned long t1732 = __num_elements1672;
  unsigned long c1733 = 8;
  unsigned long r1734 = std____deque_buf_size(c1733);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1735 = t1732 % r1734;
  double* ptr1736 = &(t1731)[b1735];
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1737 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t1678->_M_impl) + 0);
  base1737->_M_finish._M_cur = ptr1736;
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEEC2Ev
void std___Deque_base_double__std__allocator_double______Deque_base(struct std___Deque_base_double__std__allocator_double__* v1738) {
bb1739:
  struct std___Deque_base_double__std__allocator_double__* this1740;
  this1740 = v1738;
  struct std___Deque_base_double__std__allocator_double__* t1741 = this1740;
  std___Deque_base_double__std__allocator_double______Deque_impl___Deque_impl(&t1741->_M_impl);
    unsigned long c1742 = 0;
    std___Deque_base_double__std__allocator_double______M_initialize_map(t1741, c1742);
    if (__cir_exc_active) {
      {
        std___Deque_base_double__std__allocator_double______Deque_impl____Deque_impl(&t1741->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIdEC2Ev
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* v1743) {
bb1744:
  struct std____new_allocator_double_* this1745;
  this1745 = v1743;
  struct std____new_allocator_double_* t1746 = this1745;
  return;
}

// function: _ZNSaIdEC2Ev
void std__allocator_double___allocator(struct std__allocator_double_* v1747) {
bb1748:
  struct std__allocator_double_* this1749;
  this1749 = v1747;
  struct std__allocator_double_* t1750 = this1749;
  struct std____new_allocator_double_* base1751 = (struct std____new_allocator_double_*)((char *)t1750 + 0);
  std____new_allocator_double_____new_allocator(base1751);
  return;
}

// function: _ZNSt15_Deque_iteratorIdRdPdEC2Ev
void std___Deque_iterator_double__double___double_____Deque_iterator_2(struct std___Deque_iterator_double__double____double___* v1752) {
bb1753:
  struct std___Deque_iterator_double__double____double___* this1754;
  this1754 = v1752;
  struct std___Deque_iterator_double__double____double___* t1755 = this1754;
  double* c1756 = ((void*)0);
  t1755->_M_cur = c1756;
  double* c1757 = ((void*)0);
  t1755->_M_first = c1757;
  double* c1758 = ((void*)0);
  t1755->_M_last = c1758;
  double** c1759 = ((void*)0);
  t1755->_M_node = c1759;
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE16_Deque_impl_dataC2Ev
void std___Deque_base_double__std__allocator_double______Deque_impl_data___Deque_impl_data(struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* v1760) {
bb1761:
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* this1762;
  this1762 = v1760;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* t1763 = this1762;
  double** c1764 = ((void*)0);
  t1763->_M_map = c1764;
  unsigned long c1765 = 0;
  t1763->_M_map_size = c1765;
  std___Deque_iterator_double__double___double_____Deque_iterator_2(&t1763->_M_start);
  std___Deque_iterator_double__double___double_____Deque_iterator_2(&t1763->_M_finish);
  return;
}

