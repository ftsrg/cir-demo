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
struct std__iterator_std__output_iterator_tag__void__void__void__void_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ostream_iterator_double__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[18] = "values contains: ";
char _str_2[36] = "\nAfter pop_front, values contains: ";
char _str_3[44] = "\nAfter values[ 1 ] = 5.4, values contains: ";
char _str_4[48] = "cannot create std::deque larger than max_size()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE5frontEv[86] = "reference std::deque<double>::front() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE4backEv[85] = "reference std::deque<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEEixEm[100] = "reference std::deque<double>::operator[](size_type) [_Tp = double, _Alloc = std::allocator<double>]";
char _str_7[19] = "__n < this->size()";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE9pop_frontEv[85] = "void std::deque<double>::pop_front() [_Tp = double, _Alloc = std::allocator<double>]";
void std__deque_double__std__allocator_double_____deque(struct std__deque_double__std__allocator_double__* p0);
void std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* p0, double* p1);
void void_std__allocator_traits_std__allocator_double_____construct_double__double_(struct std__allocator_double_* p0, double* p1, double* p2);
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
void std__deque_double__std__allocator_double______M_reserve_map_at_front(struct std__deque_double__std__allocator_double__* p0, unsigned long p1);
struct std___Deque_iterator_double__double____double___* std___Deque_iterator_double__double___double____operator___3(struct std___Deque_iterator_double__double____double___* p0);
void void_std__deque_double__std__allocator_double______M_push_front_aux_double_(struct std__deque_double__std__allocator_double__* p0, double* p1);
_Bool std__operator__(struct std___Deque_iterator_double__double____double___* p0, struct std___Deque_iterator_double__double____double___* p1);
_Bool std__deque_double__std__allocator_double_____empty___const(struct std__deque_double__std__allocator_double__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
double* std___Deque_iterator_double__double___double____operator____const(struct std___Deque_iterator_double__double____double___* p0);
double* std__deque_double__std__allocator_double_____front(struct std__deque_double__std__allocator_double__* p0);
double* double__std__deque_double__std__allocator_double_____emplace_front_double_(struct std__deque_double__std__allocator_double__* p0, double* p1);
void std__deque_double__std__allocator_double_____push_front(struct std__deque_double__std__allocator_double__* p0, double* p1);
void std__deque_double__std__allocator_double______M_reserve_map_at_back(struct std__deque_double__std__allocator_double__* p0, unsigned long p1);
void void_std__deque_double__std__allocator_double______M_push_back_aux_double_(struct std__deque_double__std__allocator_double__* p0, double* p1);
struct std___Deque_iterator_double__double____double___* std___Deque_iterator_double__double___double____operator__(struct std___Deque_iterator_double__double____double___* p0);
double* std__deque_double__std__allocator_double_____back(struct std__deque_double__std__allocator_double__* p0);
double* double__std__deque_double__std__allocator_double_____emplace_back_double_(struct std__deque_double__std__allocator_double__* p0, double* p1);
void std__deque_double__std__allocator_double_____push_back(struct std__deque_double__std__allocator_double__* p0, double* p1);
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
long std__operator_(struct std___Deque_iterator_double__double____double___* p0, struct std___Deque_iterator_double__double____double___* p1);
unsigned long std__deque_double__std__allocator_double_____size___const(struct std__deque_double__std__allocator_double__* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std___Deque_iterator_double__double____double___* std___Deque_iterator_double__double___double____operator___2(struct std___Deque_iterator_double__double____double___* p0, long p1);
struct std___Deque_iterator_double__double____double___ std__operator__3(struct std___Deque_iterator_double__double____double___* p0, long p1);
double* std___Deque_iterator_double__double___double____operator___long__const(struct std___Deque_iterator_double__double____double___* p0, long p1);
double* std__deque_double__std__allocator_double_____operator__(struct std__deque_double__std__allocator_double__* p0, unsigned long p1);
void void_std__allocator_traits_std__allocator_double_____destroy_double_(struct std__allocator_double_* p0, double* p1);
void std__deque_double__std__allocator_double______M_pop_front_aux(struct std__deque_double__std__allocator_double__* p0);
void std__deque_double__std__allocator_double_____pop_front(struct std__deque_double__std__allocator_double__* p0);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_double__char__std__char_traits_char_____(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, struct std__ostream_iterator_double__char__std__char_traits_char__ p1);
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator__3(struct std__ostream_iterator_double__char__std__char_traits_char__* p0);
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, double* p1);
void void_std____assign_one_false__std__ostream_iterator_double__char__std__char_traits_char_____double__(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, double** p1);
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator__(struct std__ostream_iterator_double__char__std__char_traits_char__* p0);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a2_false__double___double___std__ostream_iterator_double__char__std__char_traits_char_____(double* p0, double* p1, struct std__ostream_iterator_double__char__std__char_traits_char__ p2);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__double___std__ostream_iterator_double__char__std__char_traits_char_____(double* p0, double* p1, struct std__ostream_iterator_double__char__std__char_traits_char__ p2);
struct std__iterator_std__output_iterator_tag__void__void__void__void_* std__iterator_std__output_iterator_tag__void__void__void__void___operator_(struct std__iterator_std__output_iterator_tag__void__void__void__void_* p0, struct std__iterator_std__output_iterator_tag__void__void__void__void_* p1);
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator_(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, struct std__ostream_iterator_double__char__std__char_traits_char__* p1);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_dit_false__double__double___double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Deque_iterator_double__double____double___ p0, struct std___Deque_iterator_double__double____double___ p1, struct std__ostream_iterator_double__char__std__char_traits_char__ p2);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__double__double___double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Deque_iterator_double__double____double___ p0, struct std___Deque_iterator_double__double____double___ p1, struct std__ostream_iterator_double__char__std__char_traits_char__ p2);
struct std___Deque_iterator_double__double____double___ std___Deque_iterator_double__double___double___std____niter_base_std___Deque_iterator_double__double___double____(struct std___Deque_iterator_double__double____double___ p0);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____niter_base_std__ostream_iterator_double__char__std__char_traits_char_____(struct std__ostream_iterator_double__char__std__char_traits_char__ p0);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a_false__std___Deque_iterator_double__double___double____std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Deque_iterator_double__double____double___ p0, struct std___Deque_iterator_double__double____double___ p1, struct std__ostream_iterator_double__char__std__char_traits_char__ p2);
struct std___Deque_iterator_double__double____double___ std___Deque_iterator_double__double___double___std____miter_base_std___Deque_iterator_double__double___double____(struct std___Deque_iterator_double__double____double___ p0);
void std___Deque_iterator_double__double___double_____Deque_iterator(struct std___Deque_iterator_double__double____double___* p0, struct std___Deque_iterator_double__double____double___* p1);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std__copy_std___Deque_iterator_double__double___double____std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Deque_iterator_double__double____double___ p0, struct std___Deque_iterator_double__double____double___ p1, struct std__ostream_iterator_double__char__std__char_traits_char__ p2);
struct std___Deque_iterator_double__double____double___ std__deque_double__std__allocator_double_____begin(struct std__deque_double__std__allocator_double__* p0);
struct std___Deque_iterator_double__double____double___ std__deque_double__std__allocator_double_____end(struct std__deque_double__std__allocator_double__* p0);
void std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, struct std__ostream_iterator_double__char__std__char_traits_char__* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__deque_double__std__allocator_double______deque(struct std__deque_double__std__allocator_double__* p0);
int main();
void std___Deque_base_double__std__allocator_double______Deque_impl___Deque_impl(struct std___Deque_base_double__std__allocator_double_____Deque_impl* p0);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__allocator_double_* std___Deque_base_double__std__allocator_double______M_get_Tp_allocator___const(struct std___Deque_base_double__std__allocator_double__* p0);
void std__allocator_double____allocator_double_(struct std__allocator_double___* p0, struct std__allocator_double_* p1);
struct std__allocator_double___ std___Deque_base_double__std__allocator_double______M_get_map_allocator___const(struct std___Deque_base_double__std__allocator_double__* p0);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
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
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_double___deallocate(struct std____new_allocator_double_* p0, double* p1, unsigned long p2);
void std__allocator_double___deallocate(struct std__allocator_double_* p0, double* p1, unsigned long p2);
void std__allocator_traits_std__allocator_double_____deallocate(struct std__allocator_double_* p0, double* p1, unsigned long p2);
void std___Deque_base_double__std__allocator_double______M_deallocate_node(struct std___Deque_base_double__std__allocator_double__* p0, double* p1);
void std___Deque_base_double__std__allocator_double______M_destroy_nodes(struct std___Deque_base_double__std__allocator_double__* p0, double** p1, double** p2);
void std___Deque_base_double__std__allocator_double______M_create_nodes(struct std___Deque_base_double__std__allocator_double__* p0, double** p1, double** p2);
void std____new_allocator_double____deallocate(struct std____new_allocator_double___* p0, double** p1, unsigned long p2);
void std__allocator_double____deallocate(struct std__allocator_double___* p0, double** p1, unsigned long p2);
void std__allocator_traits_std__allocator_double______deallocate(struct std__allocator_double___* p0, double** p1, unsigned long p2);
void std___Deque_base_double__std__allocator_double______M_deallocate_map(struct std___Deque_base_double__std__allocator_double__* p0, double** p1, unsigned long p2);
unsigned long std___Deque_iterator_double__double___double_____S_buffer_size();
void std___Deque_iterator_double__double___double_____M_set_node(struct std___Deque_iterator_double__double____double___* p0, double** p1);
void std___Deque_base_double__std__allocator_double______M_initialize_map(struct std___Deque_base_double__std__allocator_double__* p0, unsigned long p1);
void std___Deque_base_double__std__allocator_double______Deque_impl____Deque_impl(struct std___Deque_base_double__std__allocator_double_____Deque_impl* p0);
void std___Deque_base_double__std__allocator_double______Deque_base(struct std___Deque_base_double__std__allocator_double__* p0);
void std___Deque_base_double__std__allocator_double_______Deque_base(struct std___Deque_base_double__std__allocator_double__* p0);
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* p0);
void std__allocator_double___allocator(struct std__allocator_double_* p0);
void std___Deque_iterator_double__double___double_____Deque_iterator_2(struct std___Deque_iterator_double__double____double___* p0);
void std___Deque_base_double__std__allocator_double______Deque_impl_data___Deque_impl_data(struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* p0);
void std__allocator_double____allocator(struct std__allocator_double_* p0);
void std____new_allocator_double______new_allocator(struct std____new_allocator_double___* p0);
void void_std__destroy_at_double_(double* p0);
void void_std___Destroy_double__(double* p0, double* p1);
void void_std___Destroy_double___double_(double* p0, double* p1, struct std__allocator_double_* p2);
unsigned long std__deque_double__std__allocator_double______S_buffer_size();
void std__deque_double__std__allocator_double______M_destroy_data_aux(struct std__deque_double__std__allocator_double__* p0, struct std___Deque_iterator_double__double____double___ p1, struct std___Deque_iterator_double__double____double___ p2);
void std__deque_double__std__allocator_double______M_destroy_data(struct std__deque_double__std__allocator_double__* p0, struct std___Deque_iterator_double__double____double___ p1, struct std___Deque_iterator_double__double____double___ p2, struct std__allocator_double_* p3);
struct std__allocator_double_* std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(struct std___Deque_base_double__std__allocator_double__* p0);

// function: _ZNSt5dequeIdSaIdEEC2Ev
void std__deque_double__std__allocator_double_____deque(struct std__deque_double__std__allocator_double__* v0) {
bb1:
  struct std__deque_double__std__allocator_double__* this2;
  this2 = v0;
  struct std__deque_double__std__allocator_double__* t3 = this2;
  struct std___Deque_base_double__std__allocator_double__* base4 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t3 + 0);
  std___Deque_base_double__std__allocator_double______Deque_base(base4);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEC2ERSoPKc
void std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_double__char__std__char_traits_char__* v5, struct std__basic_ostream_char__std__char_traits_char__* v6, char* v7) {
bb8:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this9;
  struct std__basic_ostream_char__std__char_traits_char__* __s10;
  char* __c11;
  this9 = v5;
  __s10 = v6;
  __c11 = v7;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t12 = this9;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base13 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t12 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t14 = __s10;
  t12->_M_stream = t14;
  char* t15 = __c11;
  t12->_M_string = t15;
  return;
}

// function: _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* v16, double* v17) {
bb18:
  double* __location19;
  double* __args20;
  double* __retval21;
  void* __loc22;
  __location19 = v16;
  __args20 = v17;
  double* t23 = __location19;
  void* cast24 = (void*)t23;
  __loc22 = cast24;
    void* t25 = __loc22;
    double* cast26 = (double*)t25;
    double* t27 = __args20;
    double t28 = *t27;
    *cast26 = t28;
    __retval21 = cast26;
    double* t29 = __retval21;
    return t29;
  abort();
}

// function: _ZNSt16allocator_traitsISaIdEE9constructIdJdEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_double_____construct_double__double_(struct std__allocator_double_* v30, double* v31, double* v32) {
bb33:
  struct std__allocator_double_* __a34;
  double* __p35;
  double* __args36;
  __a34 = v30;
  __p35 = v31;
  __args36 = v32;
  double* t37 = __p35;
  double* t38 = __args36;
  double* r39 = _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t37, t38);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v40, unsigned long* v41) {
bb42:
  unsigned long* __a43;
  unsigned long* __b44;
  unsigned long* __retval45;
  __a43 = v40;
  __b44 = v41;
    unsigned long* t46 = __b44;
    unsigned long t47 = *t46;
    unsigned long* t48 = __a43;
    unsigned long t49 = *t48;
    _Bool c50 = ((t47 < t49)) ? 1 : 0;
    if (c50) {
      unsigned long* t51 = __b44;
      __retval45 = t51;
      unsigned long* t52 = __retval45;
      return t52;
    }
  unsigned long* t53 = __a43;
  __retval45 = t53;
  unsigned long* t54 = __retval45;
  return t54;
}

// function: _ZNSt5dequeIdSaIdEE11_S_max_sizeERKS0_
unsigned long std__deque_double__std__allocator_double______S_max_size(struct std__allocator_double_* v55) {
bb56:
  struct std__allocator_double_* __a57;
  unsigned long __retval58;
  unsigned long __diffmax59;
  unsigned long __allocmax60;
  __a57 = v55;
  unsigned long c61 = 9223372036854775807;
  __diffmax59 = c61;
  unsigned long c62 = 2305843009213693951;
  __allocmax60 = c62;
  unsigned long* r63 = unsigned_long_const__std__min_unsigned_long_(&__diffmax59, &__allocmax60);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t64 = *r63;
  __retval58 = t64;
  unsigned long t65 = __retval58;
  return t65;
}

// function: _ZNKSt5dequeIdSaIdEE8max_sizeEv
unsigned long std__deque_double__std__allocator_double_____max_size___const(struct std__deque_double__std__allocator_double__* v66) {
bb67:
  struct std__deque_double__std__allocator_double__* this68;
  unsigned long __retval69;
  this68 = v66;
  struct std__deque_double__std__allocator_double__* t70 = this68;
  struct std___Deque_base_double__std__allocator_double__* base71 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t70 + 0);
  struct std__allocator_double_* r72 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator___const(base71);
  unsigned long r73 = std__deque_double__std__allocator_double______S_max_size(r72);
  __retval69 = r73;
  unsigned long t74 = __retval69;
  return t74;
}

// function: _ZSt12__niter_wrapIPPdET_RKS2_S2_
double** double___std____niter_wrap_double___(double*** v75, double** v76) {
bb77:
  double*** unnamed78;
  double** __res79;
  double** __retval80;
  unnamed78 = v75;
  __res79 = v76;
  double** t81 = __res79;
  __retval80 = t81;
  double** t82 = __retval80;
  return t82;
}

// function: _ZSt10__distanceIPPdENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_double_____difference_type_std____distance_double___(double** v83, double** v84, struct std__random_access_iterator_tag v85) {
bb86:
  double** __first87;
  double** __last88;
  struct std__random_access_iterator_tag unnamed89;
  long __retval90;
  __first87 = v83;
  __last88 = v84;
  unnamed89 = v85;
  double** t91 = __last88;
  double** t92 = __first87;
  long diff93 = t91 - t92;
  __retval90 = diff93;
  long t94 = __retval90;
  return t94;
}

// function: _ZSt19__iterator_categoryIPPdENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_double_____iterator_category_std____iterator_category_double___(double*** v95) {
bb96:
  double*** unnamed97;
  struct std__random_access_iterator_tag __retval98;
  unnamed97 = v95;
  struct std__random_access_iterator_tag t99 = __retval98;
  return t99;
}

// function: _ZSt8distanceIPPdENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_double_____difference_type_std__distance_double___(double** v100, double** v101) {
bb102:
  double** __first103;
  double** __last104;
  long __retval105;
  struct std__random_access_iterator_tag agg_tmp0106;
  __first103 = v100;
  __last104 = v101;
  double** t107 = __first103;
  double** t108 = __last104;
  struct std__random_access_iterator_tag r109 = std__iterator_traits_double_____iterator_category_std____iterator_category_double___(&__first103);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0106 = r109;
  struct std__random_access_iterator_tag t110 = agg_tmp0106;
  long r111 = std__iterator_traits_double_____difference_type_std____distance_double___(t107, t108, t110);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval105 = r111;
  long t112 = __retval105;
  return t112;
}

// function: _ZSt12__assign_oneILb0EPPdS1_EvRT0_RT1_
void void_std____assign_one_false__double____double___(double*** v113, double*** v114) {
bb115:
  double*** __out116;
  double*** __in117;
  __out116 = v113;
  __in117 = v114;
    double*** t118 = __in117;
    double** t119 = *t118;
    double* t120 = *t119;
    double*** t121 = __out116;
    double** t122 = *t121;
    *t122 = t120;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPdS1_S1_ET2_T0_T1_S2_
double** double___std____copy_move_a2_false__double____double____double___(double** v123, double** v124, double** v125) {
bb126:
  double** __first127;
  double** __last128;
  double** __result129;
  double** __retval130;
  __first127 = v123;
  __last128 = v124;
  __result129 = v125;
      _Bool r131 = std____is_constant_evaluated();
      if (r131) {
      } else {
          long __n132;
          double** t133 = __first127;
          double** t134 = __last128;
          long r135 = std__iterator_traits_double_____difference_type_std__distance_double___(t133, t134);
          if (__cir_exc_active) {
            double** __cir_eh_ret = (double**)0;
            return __cir_eh_ret;
          }
          __n132 = r135;
            long t136 = __n132;
            long c137 = 1;
            _Bool c138 = ((t136 > c137)) ? 1 : 0;
            if (c138) {
              double** t139 = __result129;
              void* cast140 = (void*)t139;
              double** t141 = __first127;
              void* cast142 = (void*)t141;
              long t143 = __n132;
              unsigned long cast144 = (unsigned long)t143;
              unsigned long c145 = 8;
              unsigned long b146 = cast144 * c145;
              void* r147 = memmove(cast140, cast142, b146);
              long t148 = __n132;
              double** t149 = __result129;
              double** ptr150 = &(t149)[t148];
              __result129 = ptr150;
            } else {
                long t151 = __n132;
                long c152 = 1;
                _Bool c153 = ((t151 == c152)) ? 1 : 0;
                if (c153) {
                  void_std____assign_one_false__double____double___(&__result129, &__first127);
                  if (__cir_exc_active) {
                    double** __cir_eh_ret = (double**)0;
                    return __cir_eh_ret;
                  }
                  double** t154 = __result129;
                  int c155 = 1;
                  double** ptr156 = &(t154)[c155];
                  __result129 = ptr156;
                }
            }
          double** t157 = __result129;
          __retval130 = t157;
          double** t158 = __retval130;
          return t158;
      }
    while (1) {
      double** t160 = __first127;
      double** t161 = __last128;
      _Bool c162 = ((t160 != t161)) ? 1 : 0;
      if (!c162) break;
      void_std____assign_one_false__double____double___(&__result129, &__first127);
      if (__cir_exc_active) {
        double** __cir_eh_ret = (double**)0;
        return __cir_eh_ret;
      }
    for_step159: ;
      double** t163 = __result129;
      int c164 = 1;
      double** ptr165 = &(t163)[c164];
      __result129 = ptr165;
      double** t166 = __first127;
      int c167 = 1;
      double** ptr168 = &(t166)[c167];
      __first127 = ptr168;
    }
  double** t169 = __result129;
  __retval130 = t169;
  double** t170 = __retval130;
  return t170;
}

// function: _ZSt14__copy_move_a1ILb0EPPdS1_ET1_T0_S3_S2_
double** double___std____copy_move_a1_false__double____double___(double** v171, double** v172, double** v173) {
bb174:
  double** __first175;
  double** __last176;
  double** __result177;
  double** __retval178;
  __first175 = v171;
  __last176 = v172;
  __result177 = v173;
  double** t179 = __first175;
  double** t180 = __last176;
  double** t181 = __result177;
  double** r182 = double___std____copy_move_a2_false__double____double____double___(t179, t180, t181);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval178 = r182;
  double** t183 = __retval178;
  return t183;
}

// function: _ZSt12__niter_baseIPPdET_S2_
double** double___std____niter_base_double___(double** v184) {
bb185:
  double** __it186;
  double** __retval187;
  __it186 = v184;
  double** t188 = __it186;
  __retval187 = t188;
  double** t189 = __retval187;
  return t189;
}

// function: _ZSt13__copy_move_aILb0EPPdS1_ET1_T0_S3_S2_
double** double___std____copy_move_a_false__double____double___(double** v190, double** v191, double** v192) {
bb193:
  double** __first194;
  double** __last195;
  double** __result196;
  double** __retval197;
  __first194 = v190;
  __last195 = v191;
  __result196 = v192;
  double** t198 = __first194;
  double** r199 = double___std____niter_base_double___(t198);
  double** t200 = __last195;
  double** r201 = double___std____niter_base_double___(t200);
  double** t202 = __result196;
  double** r203 = double___std____niter_base_double___(t202);
  double** r204 = double___std____copy_move_a1_false__double____double___(r199, r201, r203);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** r205 = double___std____niter_wrap_double___(&__result196, r204);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval197 = r205;
  double** t206 = __retval197;
  return t206;
}

// function: _ZSt12__miter_baseIPPdET_S2_
double** double___std____miter_base_double___(double** v207) {
bb208:
  double** __it209;
  double** __retval210;
  __it209 = v207;
  double** t211 = __it209;
  __retval210 = t211;
  double** t212 = __retval210;
  return t212;
}

// function: _ZSt4copyIPPdS1_ET0_T_S3_S2_
double** double___std__copy_double____double___(double** v213, double** v214, double** v215) {
bb216:
  double** __first217;
  double** __last218;
  double** __result219;
  double** __retval220;
  __first217 = v213;
  __last218 = v214;
  __result219 = v215;
  double** t221 = __first217;
  double** r222 = double___std____miter_base_double___(t221);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** t223 = __last218;
  double** r224 = double___std____miter_base_double___(t223);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** t225 = __result219;
  double** r226 = double___std____copy_move_a_false__double____double___(r222, r224, t225);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval220 = r226;
  double** t227 = __retval220;
  return t227;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb228:
  _Bool __retval229;
    _Bool c230 = 0;
    __retval229 = c230;
    _Bool t231 = __retval229;
    return t231;
  abort();
}

// function: _ZSt9__advanceIPPdlEvRT_T0_St26random_access_iterator_tag
void void_std____advance_double____long_(double*** v232, long v233, struct std__random_access_iterator_tag v234) {
bb235:
  double*** __i236;
  long __n237;
  struct std__random_access_iterator_tag unnamed238;
  __i236 = v232;
  __n237 = v233;
  unnamed238 = v234;
    long t239 = __n237;
    _Bool isconst240 = 0;
    _Bool ternary241;
    if (isconst240) {
      long t242 = __n237;
      long c243 = 1;
      _Bool c244 = ((t242 == c243)) ? 1 : 0;
      ternary241 = (_Bool)c244;
    } else {
      _Bool c245 = 0;
      ternary241 = (_Bool)c245;
    }
    if (ternary241) {
      double*** t246 = __i236;
      double** t247 = *t246;
      int c248 = 1;
      double** ptr249 = &(t247)[c248];
      *t246 = ptr249;
    } else {
        long t250 = __n237;
        _Bool isconst251 = 0;
        _Bool ternary252;
        if (isconst251) {
          long t253 = __n237;
          long c254 = -1;
          _Bool c255 = ((t253 == c254)) ? 1 : 0;
          ternary252 = (_Bool)c255;
        } else {
          _Bool c256 = 0;
          ternary252 = (_Bool)c256;
        }
        if (ternary252) {
          double*** t257 = __i236;
          double** t258 = *t257;
          int c259 = -1;
          double** ptr260 = &(t258)[c259];
          *t257 = ptr260;
        } else {
          long t261 = __n237;
          double*** t262 = __i236;
          double** t263 = *t262;
          double** ptr264 = &(t263)[t261];
          *t262 = ptr264;
        }
    }
  return;
}

// function: _ZSt7advanceIPPdlEvRT_T0_
void void_std__advance_double____long_(double*** v265, long v266) {
bb267:
  double*** __i268;
  long __n269;
  long __d270;
  struct std__random_access_iterator_tag agg_tmp0271;
  __i268 = v265;
  __n269 = v266;
  long t272 = __n269;
  __d270 = t272;
  double*** t273 = __i268;
  long t274 = __d270;
  double*** t275 = __i268;
  struct std__random_access_iterator_tag r276 = std__iterator_traits_double_____iterator_category_std____iterator_category_double___(t275);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0271 = r276;
  struct std__random_access_iterator_tag t277 = agg_tmp0271;
  void_std____advance_double____long_(t273, t274, t277);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPdS1_ET1_T0_S3_S2_
double** double___std____copy_move_backward_a2_false__double____double___(double** v278, double** v279, double** v280) {
bb281:
  double** __first282;
  double** __last283;
  double** __result284;
  double** __retval285;
  __first282 = v278;
  __last283 = v279;
  __result284 = v280;
      _Bool r286 = std__is_constant_evaluated();
      if (r286) {
      } else {
          long __n287;
          double** t288 = __first282;
          double** t289 = __last283;
          long r290 = std__iterator_traits_double_____difference_type_std__distance_double___(t288, t289);
          if (__cir_exc_active) {
            double** __cir_eh_ret = (double**)0;
            return __cir_eh_ret;
          }
          __n287 = r290;
          long t291 = __n287;
          long u292 = -t291;
          void_std__advance_double____long_(&__result284, u292);
          if (__cir_exc_active) {
            double** __cir_eh_ret = (double**)0;
            return __cir_eh_ret;
          }
            long t293 = __n287;
            long c294 = 1;
            _Bool c295 = ((t293 > c294)) ? 1 : 0;
            if (c295) {
              double** t296 = __result284;
              void* cast297 = (void*)t296;
              double** t298 = __first282;
              void* cast299 = (void*)t298;
              long t300 = __n287;
              unsigned long cast301 = (unsigned long)t300;
              unsigned long c302 = 8;
              unsigned long b303 = cast301 * c302;
              void* r304 = memmove(cast297, cast299, b303);
            } else {
                long t305 = __n287;
                long c306 = 1;
                _Bool c307 = ((t305 == c306)) ? 1 : 0;
                if (c307) {
                  void_std____assign_one_false__double____double___(&__result284, &__first282);
                  if (__cir_exc_active) {
                    double** __cir_eh_ret = (double**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          double** t308 = __result284;
          __retval285 = t308;
          double** t309 = __retval285;
          return t309;
      }
    while (1) {
      double** t310 = __first282;
      double** t311 = __last283;
      _Bool c312 = ((t310 != t311)) ? 1 : 0;
      if (!c312) break;
        double** t313 = __last283;
        int c314 = -1;
        double** ptr315 = &(t313)[c314];
        __last283 = ptr315;
        double** t316 = __result284;
        int c317 = -1;
        double** ptr318 = &(t316)[c317];
        __result284 = ptr318;
        void_std____assign_one_false__double____double___(&__result284, &__last283);
        if (__cir_exc_active) {
          double** __cir_eh_ret = (double**)0;
          return __cir_eh_ret;
        }
    }
  double** t319 = __result284;
  __retval285 = t319;
  double** t320 = __retval285;
  return t320;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPdS1_ET1_T0_S3_S2_
double** double___std____copy_move_backward_a1_false__double____double___(double** v321, double** v322, double** v323) {
bb324:
  double** __first325;
  double** __last326;
  double** __result327;
  double** __retval328;
  __first325 = v321;
  __last326 = v322;
  __result327 = v323;
  double** t329 = __first325;
  double** t330 = __last326;
  double** t331 = __result327;
  double** r332 = double___std____copy_move_backward_a2_false__double____double___(t329, t330, t331);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval328 = r332;
  double** t333 = __retval328;
  return t333;
}

// function: _ZSt22__copy_move_backward_aILb0EPPdS1_ET1_T0_S3_S2_
double** double___std____copy_move_backward_a_false__double____double___(double** v334, double** v335, double** v336) {
bb337:
  double** __first338;
  double** __last339;
  double** __result340;
  double** __retval341;
  __first338 = v334;
  __last339 = v335;
  __result340 = v336;
  double** t342 = __first338;
  double** r343 = double___std____niter_base_double___(t342);
  double** t344 = __last339;
  double** r345 = double___std____niter_base_double___(t344);
  double** t346 = __result340;
  double** r347 = double___std____niter_base_double___(t346);
  double** r348 = double___std____copy_move_backward_a1_false__double____double___(r343, r345, r347);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** r349 = double___std____niter_wrap_double___(&__result340, r348);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval341 = r349;
  double** t350 = __retval341;
  return t350;
}

// function: _ZSt13copy_backwardIPPdS1_ET0_T_S3_S2_
double** double___std__copy_backward_double____double___(double** v351, double** v352, double** v353) {
bb354:
  double** __first355;
  double** __last356;
  double** __result357;
  double** __retval358;
  __first355 = v351;
  __last356 = v352;
  __result357 = v353;
  double** t359 = __first355;
  double** r360 = double___std____miter_base_double___(t359);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** t361 = __last356;
  double** r362 = double___std____miter_base_double___(t361);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** t363 = __result357;
  double** r364 = double___std____copy_move_backward_a_false__double____double___(r360, r362, t363);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval358 = r364;
  double** t365 = __retval358;
  return t365;
}

// function: _ZNSt5dequeIdSaIdEE17_M_reallocate_mapEmb
void std__deque_double__std__allocator_double______M_reallocate_map(struct std__deque_double__std__allocator_double__* v366, unsigned long v367, _Bool v368) {
bb369:
  struct std__deque_double__std__allocator_double__* this370;
  unsigned long __nodes_to_add371;
  _Bool __add_at_front372;
  unsigned long __old_num_nodes373;
  unsigned long __new_num_nodes374;
  double** __new_nstart375;
  this370 = v366;
  __nodes_to_add371 = v367;
  __add_at_front372 = v368;
  struct std__deque_double__std__allocator_double__* t376 = this370;
  struct std___Deque_base_double__std__allocator_double__* base377 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base378 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base377->_M_impl) + 0);
  double** t379 = base378->_M_finish._M_node;
  struct std___Deque_base_double__std__allocator_double__* base380 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base381 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base380->_M_impl) + 0);
  double** t382 = base381->_M_start._M_node;
  long diff383 = t379 - t382;
  long c384 = 1;
  long b385 = diff383 + c384;
  unsigned long cast386 = (unsigned long)b385;
  __old_num_nodes373 = cast386;
  unsigned long t387 = __old_num_nodes373;
  unsigned long t388 = __nodes_to_add371;
  unsigned long b389 = t387 + t388;
  __new_num_nodes374 = b389;
    struct std___Deque_base_double__std__allocator_double__* base390 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base391 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base390->_M_impl) + 0);
    unsigned long t392 = base391->_M_map_size;
    unsigned long c393 = 2;
    unsigned long t394 = __new_num_nodes374;
    unsigned long b395 = c393 * t394;
    _Bool c396 = ((t392 > b395)) ? 1 : 0;
    if (c396) {
      struct std___Deque_base_double__std__allocator_double__* base397 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base398 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base397->_M_impl) + 0);
      double** t399 = base398->_M_map;
      struct std___Deque_base_double__std__allocator_double__* base400 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base401 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base400->_M_impl) + 0);
      unsigned long t402 = base401->_M_map_size;
      unsigned long t403 = __new_num_nodes374;
      unsigned long b404 = t402 - t403;
      unsigned long c405 = 2;
      unsigned long b406 = b404 / c405;
      double** ptr407 = &(t399)[b406];
      _Bool t408 = __add_at_front372;
      unsigned long ternary409;
      if (t408) {
        unsigned long t410 = __nodes_to_add371;
        ternary409 = (unsigned long)t410;
      } else {
        unsigned long c411 = 0;
        ternary409 = (unsigned long)c411;
      }
      double** ptr412 = &(ptr407)[ternary409];
      __new_nstart375 = ptr412;
        double** t413 = __new_nstart375;
        struct std___Deque_base_double__std__allocator_double__* base414 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base415 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base414->_M_impl) + 0);
        double** t416 = base415->_M_start._M_node;
        _Bool c417 = ((t413 < t416)) ? 1 : 0;
        if (c417) {
          struct std___Deque_base_double__std__allocator_double__* base418 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
          struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base419 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base418->_M_impl) + 0);
          double** t420 = base419->_M_start._M_node;
          struct std___Deque_base_double__std__allocator_double__* base421 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
          struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base422 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base421->_M_impl) + 0);
          double** t423 = base422->_M_finish._M_node;
          int c424 = 1;
          double** ptr425 = &(t423)[c424];
          double** t426 = __new_nstart375;
          double** r427 = double___std__copy_double____double___(t420, ptr425, t426);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_double__std__allocator_double__* base428 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
          struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base429 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base428->_M_impl) + 0);
          double** t430 = base429->_M_start._M_node;
          struct std___Deque_base_double__std__allocator_double__* base431 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
          struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base432 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base431->_M_impl) + 0);
          double** t433 = base432->_M_finish._M_node;
          int c434 = 1;
          double** ptr435 = &(t433)[c434];
          double** t436 = __new_nstart375;
          unsigned long t437 = __old_num_nodes373;
          double** ptr438 = &(t436)[t437];
          double** r439 = double___std__copy_backward_double____double___(t430, ptr435, ptr438);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size440;
      unsigned long __bufsz441;
      double** __new_map442;
      struct std___Deque_base_double__std__allocator_double__* base443 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base444 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base443->_M_impl) + 0);
      unsigned long t445 = base444->_M_map_size;
      struct std___Deque_base_double__std__allocator_double__* base446 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base447 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base446->_M_impl) + 0);
      unsigned long* r448 = unsigned_long_const__std__max_unsigned_long_(&base447->_M_map_size, &__nodes_to_add371);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t449 = *r448;
      unsigned long b450 = t445 + t449;
      unsigned long c451 = 2;
      unsigned long b452 = b450 + c451;
      __new_map_size440 = b452;
      unsigned long c453 = 64;
      __bufsz441 = c453;
        unsigned long t454 = __new_map_size440;
        unsigned long r455 = std__deque_double__std__allocator_double_____max_size___const(t376);
        unsigned long t456 = __bufsz441;
        unsigned long b457 = r455 + t456;
        unsigned long c458 = 1;
        unsigned long b459 = b457 - c458;
        unsigned long t460 = __bufsz441;
        unsigned long b461 = b459 / t460;
        unsigned long c462 = 2;
        unsigned long b463 = b461 * c462;
        _Bool c464 = ((t454 > b463)) ? 1 : 0;
        if (c464) {
          __builtin_unreachable();
        }
      struct std___Deque_base_double__std__allocator_double__* base465 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      unsigned long t466 = __new_map_size440;
      double** r467 = std___Deque_base_double__std__allocator_double______M_allocate_map(base465, t466);
      if (__cir_exc_active) {
        return;
      }
      __new_map442 = r467;
      double** t468 = __new_map442;
      unsigned long t469 = __new_map_size440;
      unsigned long t470 = __new_num_nodes374;
      unsigned long b471 = t469 - t470;
      unsigned long c472 = 2;
      unsigned long b473 = b471 / c472;
      double** ptr474 = &(t468)[b473];
      _Bool t475 = __add_at_front372;
      unsigned long ternary476;
      if (t475) {
        unsigned long t477 = __nodes_to_add371;
        ternary476 = (unsigned long)t477;
      } else {
        unsigned long c478 = 0;
        ternary476 = (unsigned long)c478;
      }
      double** ptr479 = &(ptr474)[ternary476];
      __new_nstart375 = ptr479;
      struct std___Deque_base_double__std__allocator_double__* base480 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base481 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base480->_M_impl) + 0);
      double** t482 = base481->_M_start._M_node;
      struct std___Deque_base_double__std__allocator_double__* base483 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base484 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base483->_M_impl) + 0);
      double** t485 = base484->_M_finish._M_node;
      int c486 = 1;
      double** ptr487 = &(t485)[c486];
      double** t488 = __new_nstart375;
      double** r489 = double___std__copy_double____double___(t482, ptr487, t488);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_double__std__allocator_double__* base490 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double__* base491 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base492 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base491->_M_impl) + 0);
      double** t493 = base492->_M_map;
      struct std___Deque_base_double__std__allocator_double__* base494 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base495 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base494->_M_impl) + 0);
      unsigned long t496 = base495->_M_map_size;
      std___Deque_base_double__std__allocator_double______M_deallocate_map(base490, t493, t496);
      double** t497 = __new_map442;
      struct std___Deque_base_double__std__allocator_double__* base498 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base499 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base498->_M_impl) + 0);
      base499->_M_map = t497;
      unsigned long t500 = __new_map_size440;
      struct std___Deque_base_double__std__allocator_double__* base501 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base502 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base501->_M_impl) + 0);
      base502->_M_map_size = t500;
    }
  struct std___Deque_base_double__std__allocator_double__* base503 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base504 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base503->_M_impl) + 0);
  double** t505 = __new_nstart375;
  std___Deque_iterator_double__double___double_____M_set_node(&base504->_M_start, t505);
  struct std___Deque_base_double__std__allocator_double__* base506 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t376 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base507 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base506->_M_impl) + 0);
  double** t508 = __new_nstart375;
  unsigned long t509 = __old_num_nodes373;
  double** ptr510 = &(t508)[t509];
  int c511 = -1;
  double** ptr512 = &(ptr510)[c511];
  std___Deque_iterator_double__double___double_____M_set_node(&base507->_M_finish, ptr512);
  return;
}

// function: _ZNSt5dequeIdSaIdEE23_M_reserve_map_at_frontEm
void std__deque_double__std__allocator_double______M_reserve_map_at_front(struct std__deque_double__std__allocator_double__* v513, unsigned long v514) {
bb515:
  struct std__deque_double__std__allocator_double__* this516;
  unsigned long __nodes_to_add517;
  this516 = v513;
  __nodes_to_add517 = v514;
  struct std__deque_double__std__allocator_double__* t518 = this516;
    unsigned long t519 = __nodes_to_add517;
    struct std___Deque_base_double__std__allocator_double__* base520 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t518 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base521 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base520->_M_impl) + 0);
    double** t522 = base521->_M_start._M_node;
    struct std___Deque_base_double__std__allocator_double__* base523 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t518 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base524 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base523->_M_impl) + 0);
    double** t525 = base524->_M_map;
    long diff526 = t522 - t525;
    unsigned long cast527 = (unsigned long)diff526;
    _Bool c528 = ((t519 > cast527)) ? 1 : 0;
    if (c528) {
      unsigned long t529 = __nodes_to_add517;
      _Bool c530 = 1;
      std__deque_double__std__allocator_double______M_reallocate_map(t518, t529, c530);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIdRdPdEppEv
struct std___Deque_iterator_double__double____double___* std___Deque_iterator_double__double___double____operator___3(struct std___Deque_iterator_double__double____double___* v531) {
bb532:
  struct std___Deque_iterator_double__double____double___* this533;
  struct std___Deque_iterator_double__double____double___* __retval534;
  this533 = v531;
  struct std___Deque_iterator_double__double____double___* t535 = this533;
  double* t536 = t535->_M_cur;
  int c537 = 1;
  double* ptr538 = &(t536)[c537];
  t535->_M_cur = ptr538;
    double* t539 = t535->_M_cur;
    double* t540 = t535->_M_last;
    _Bool c541 = ((t539 == t540)) ? 1 : 0;
    if (c541) {
      double** t542 = t535->_M_node;
      int c543 = 1;
      double** ptr544 = &(t542)[c543];
      std___Deque_iterator_double__double___double_____M_set_node(t535, ptr544);
      double* t545 = t535->_M_first;
      t535->_M_cur = t545;
    }
  __retval534 = t535;
  struct std___Deque_iterator_double__double____double___* t546 = __retval534;
  return t546;
}

// function: _ZNSt5dequeIdSaIdEE17_M_push_front_auxIJdEEEvDpOT_
void void_std__deque_double__std__allocator_double______M_push_front_aux_double_(struct std__deque_double__std__allocator_double__* v547, double* v548) {
bb549:
  struct std__deque_double__std__allocator_double__* this550;
  double* __args551;
  this550 = v547;
  __args551 = v548;
  struct std__deque_double__std__allocator_double__* t552 = this550;
    unsigned long r553 = std__deque_double__std__allocator_double_____size___const(t552);
    unsigned long r554 = std__deque_double__std__allocator_double_____max_size___const(t552);
    _Bool c555 = ((r553 == r554)) ? 1 : 0;
    if (c555) {
      char* cast556 = (char*)&(_str_4);
      std____throw_length_error(cast556);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c557 = 1;
  std__deque_double__std__allocator_double______M_reserve_map_at_front(t552, c557);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_double__std__allocator_double__* base558 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
  double* r559 = std___Deque_base_double__std__allocator_double______M_allocate_node(base558);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_double__std__allocator_double__* base560 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base561 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base560->_M_impl) + 0);
  double** t562 = base561->_M_start._M_node;
  int c563 = -1;
  double** ptr564 = &(t562)[c563];
  *ptr564 = r559;
      struct std___Deque_base_double__std__allocator_double__* base566 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base567 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base566->_M_impl) + 0);
      struct std___Deque_base_double__std__allocator_double__* base568 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base569 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base568->_M_impl) + 0);
      double** t570 = base569->_M_start._M_node;
      int c571 = -1;
      double** ptr572 = &(t570)[c571];
      std___Deque_iterator_double__double___double_____M_set_node(&base567->_M_start, ptr572);
      struct std___Deque_base_double__std__allocator_double__* base573 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base574 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base573->_M_impl) + 0);
      double* t575 = base574->_M_start._M_last;
      int c576 = -1;
      double* ptr577 = &(t575)[c576];
      struct std___Deque_base_double__std__allocator_double__* base578 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base579 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base578->_M_impl) + 0);
      base579->_M_start._M_cur = ptr577;
      struct std___Deque_base_double__std__allocator_double__* base580 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
      struct std__allocator_double_* base581 = (struct std__allocator_double_*)((char *)&(base580->_M_impl) + 0);
      struct std___Deque_base_double__std__allocator_double__* base582 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base583 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base582->_M_impl) + 0);
      double* t584 = base583->_M_start._M_cur;
      double* t585 = __args551;
      void_std__allocator_traits_std__allocator_double_____construct_double__double_(base581, t584, t585);
    cir_try_dispatch565: ;
    if (__cir_exc_active) {
    {
      int ca_tok586 = 0;
      void* ca_exn587 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_double__std__allocator_double__* base588 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base589 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base588->_M_impl) + 0);
        struct std___Deque_iterator_double__double____double___* r590 = std___Deque_iterator_double__double___double____operator___3(&base589->_M_start);
        struct std___Deque_base_double__std__allocator_double__* base591 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
        struct std___Deque_base_double__std__allocator_double__* base592 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t552 + 0);
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base593 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base592->_M_impl) + 0);
        double** t594 = base593->_M_start._M_node;
        int c595 = -1;
        double** ptr596 = &(t594)[c595];
        double* t597 = *ptr596;
        std___Deque_base_double__std__allocator_double______M_deallocate_node(base591, t597);
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
_Bool std__operator__(struct std___Deque_iterator_double__double____double___* v598, struct std___Deque_iterator_double__double____double___* v599) {
bb600:
  struct std___Deque_iterator_double__double____double___* __x601;
  struct std___Deque_iterator_double__double____double___* __y602;
  _Bool __retval603;
  __x601 = v598;
  __y602 = v599;
  struct std___Deque_iterator_double__double____double___* t604 = __x601;
  double* t605 = t604->_M_cur;
  struct std___Deque_iterator_double__double____double___* t606 = __y602;
  double* t607 = t606->_M_cur;
  _Bool c608 = ((t605 == t607)) ? 1 : 0;
  __retval603 = c608;
  _Bool t609 = __retval603;
  return t609;
}

// function: _ZNKSt5dequeIdSaIdEE5emptyEv
_Bool std__deque_double__std__allocator_double_____empty___const(struct std__deque_double__std__allocator_double__* v610) {
bb611:
  struct std__deque_double__std__allocator_double__* this612;
  _Bool __retval613;
  this612 = v610;
  struct std__deque_double__std__allocator_double__* t614 = this612;
  struct std___Deque_base_double__std__allocator_double__* base615 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t614 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base616 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base615->_M_impl) + 0);
  struct std___Deque_base_double__std__allocator_double__* base617 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t614 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base618 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base617->_M_impl) + 0);
  _Bool r619 = std__operator__(&base616->_M_finish, &base618->_M_start);
  __retval613 = r619;
  _Bool t620 = __retval613;
  return t620;
}

// function: _ZNKSt15_Deque_iteratorIdRdPdEdeEv
double* std___Deque_iterator_double__double___double____operator____const(struct std___Deque_iterator_double__double____double___* v621) {
bb622:
  struct std___Deque_iterator_double__double____double___* this623;
  double* __retval624;
  this623 = v621;
  struct std___Deque_iterator_double__double____double___* t625 = this623;
  double* t626 = t625->_M_cur;
  __retval624 = t626;
  double* t627 = __retval624;
  return t627;
}

// function: _ZNSt5dequeIdSaIdEE5frontEv
double* std__deque_double__std__allocator_double_____front(struct std__deque_double__std__allocator_double__* v628) {
bb629:
  struct std__deque_double__std__allocator_double__* this630;
  double* __retval631;
  struct std___Deque_iterator_double__double____double___ ref_tmp0632;
  this630 = v628;
  struct std__deque_double__std__allocator_double__* t633 = this630;
    do {
          _Bool r634 = std__deque_double__std__allocator_double_____empty___const(t633);
          if (r634) {
            char* cast635 = (char*)&(_str_5);
            int c636 = 1513;
            char* cast637 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE5frontEv);
            char* cast638 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast635, c636, cast637, cast638);
          }
      _Bool c639 = 0;
      if (!c639) break;
    } while (1);
  struct std___Deque_iterator_double__double____double___ r640 = std__deque_double__std__allocator_double_____begin(t633);
  ref_tmp0632 = r640;
  double* r641 = std___Deque_iterator_double__double___double____operator____const(&ref_tmp0632);
  __retval631 = r641;
  double* t642 = __retval631;
  return t642;
}

// function: _ZNSt5dequeIdSaIdEE13emplace_frontIJdEEERdDpOT_
double* double__std__deque_double__std__allocator_double_____emplace_front_double_(struct std__deque_double__std__allocator_double__* v643, double* v644) {
bb645:
  struct std__deque_double__std__allocator_double__* this646;
  double* __args647;
  double* __retval648;
  this646 = v643;
  __args647 = v644;
  struct std__deque_double__std__allocator_double__* t649 = this646;
    struct std___Deque_base_double__std__allocator_double__* base650 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t649 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base651 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base650->_M_impl) + 0);
    double* t652 = base651->_M_start._M_cur;
    struct std___Deque_base_double__std__allocator_double__* base653 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t649 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base654 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base653->_M_impl) + 0);
    double* t655 = base654->_M_start._M_first;
    _Bool c656 = ((t652 != t655)) ? 1 : 0;
    if (c656) {
      struct std___Deque_base_double__std__allocator_double__* base657 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t649 + 0);
      struct std__allocator_double_* base658 = (struct std__allocator_double_*)((char *)&(base657->_M_impl) + 0);
      struct std___Deque_base_double__std__allocator_double__* base659 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t649 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base660 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base659->_M_impl) + 0);
      double* t661 = base660->_M_start._M_cur;
      int c662 = -1;
      double* ptr663 = &(t661)[c662];
      double* t664 = __args647;
      void_std__allocator_traits_std__allocator_double_____construct_double__double_(base658, ptr663, t664);
      struct std___Deque_base_double__std__allocator_double__* base665 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t649 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base666 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base665->_M_impl) + 0);
      double* t667 = base666->_M_start._M_cur;
      int c668 = -1;
      double* ptr669 = &(t667)[c668];
      base666->_M_start._M_cur = ptr669;
    } else {
      double* t670 = __args647;
      void_std__deque_double__std__allocator_double______M_push_front_aux_double_(t649, t670);
      if (__cir_exc_active) {
        double* __cir_eh_ret = (double*)0;
        return __cir_eh_ret;
      }
    }
  double* r671 = std__deque_double__std__allocator_double_____front(t649);
  __retval648 = r671;
  double* t672 = __retval648;
  return t672;
}

// function: _ZNSt5dequeIdSaIdEE10push_frontEOd
void std__deque_double__std__allocator_double_____push_front(struct std__deque_double__std__allocator_double__* v673, double* v674) {
bb675:
  struct std__deque_double__std__allocator_double__* this676;
  double* __x677;
  this676 = v673;
  __x677 = v674;
  struct std__deque_double__std__allocator_double__* t678 = this676;
  double* t679 = __x677;
  double* r680 = double__std__deque_double__std__allocator_double_____emplace_front_double_(t678, t679);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIdSaIdEE22_M_reserve_map_at_backEm
void std__deque_double__std__allocator_double______M_reserve_map_at_back(struct std__deque_double__std__allocator_double__* v681, unsigned long v682) {
bb683:
  struct std__deque_double__std__allocator_double__* this684;
  unsigned long __nodes_to_add685;
  this684 = v681;
  __nodes_to_add685 = v682;
  struct std__deque_double__std__allocator_double__* t686 = this684;
    unsigned long t687 = __nodes_to_add685;
    unsigned long c688 = 1;
    unsigned long b689 = t687 + c688;
    struct std___Deque_base_double__std__allocator_double__* base690 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t686 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base691 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base690->_M_impl) + 0);
    unsigned long t692 = base691->_M_map_size;
    struct std___Deque_base_double__std__allocator_double__* base693 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t686 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base694 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base693->_M_impl) + 0);
    double** t695 = base694->_M_finish._M_node;
    struct std___Deque_base_double__std__allocator_double__* base696 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t686 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base697 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base696->_M_impl) + 0);
    double** t698 = base697->_M_map;
    long diff699 = t695 - t698;
    unsigned long cast700 = (unsigned long)diff699;
    unsigned long b701 = t692 - cast700;
    _Bool c702 = ((b689 > b701)) ? 1 : 0;
    if (c702) {
      unsigned long t703 = __nodes_to_add685;
      _Bool c704 = 0;
      std__deque_double__std__allocator_double______M_reallocate_map(t686, t703, c704);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIdSaIdEE16_M_push_back_auxIJdEEEvDpOT_
void void_std__deque_double__std__allocator_double______M_push_back_aux_double_(struct std__deque_double__std__allocator_double__* v705, double* v706) {
bb707:
  struct std__deque_double__std__allocator_double__* this708;
  double* __args709;
  this708 = v705;
  __args709 = v706;
  struct std__deque_double__std__allocator_double__* t710 = this708;
    unsigned long r711 = std__deque_double__std__allocator_double_____size___const(t710);
    unsigned long r712 = std__deque_double__std__allocator_double_____max_size___const(t710);
    _Bool c713 = ((r711 == r712)) ? 1 : 0;
    if (c713) {
      char* cast714 = (char*)&(_str_4);
      std____throw_length_error(cast714);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c715 = 1;
  std__deque_double__std__allocator_double______M_reserve_map_at_back(t710, c715);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_double__std__allocator_double__* base716 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t710 + 0);
  double* r717 = std___Deque_base_double__std__allocator_double______M_allocate_node(base716);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_double__std__allocator_double__* base718 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t710 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base719 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base718->_M_impl) + 0);
  double** t720 = base719->_M_finish._M_node;
  int c721 = 1;
  double** ptr722 = &(t720)[c721];
  *ptr722 = r717;
      struct std___Deque_base_double__std__allocator_double__* base724 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t710 + 0);
      struct std__allocator_double_* base725 = (struct std__allocator_double_*)((char *)&(base724->_M_impl) + 0);
      struct std___Deque_base_double__std__allocator_double__* base726 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t710 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base727 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base726->_M_impl) + 0);
      double* t728 = base727->_M_finish._M_cur;
      double* t729 = __args709;
      void_std__allocator_traits_std__allocator_double_____construct_double__double_(base725, t728, t729);
      struct std___Deque_base_double__std__allocator_double__* base730 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t710 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base731 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base730->_M_impl) + 0);
      struct std___Deque_base_double__std__allocator_double__* base732 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t710 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base733 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base732->_M_impl) + 0);
      double** t734 = base733->_M_finish._M_node;
      int c735 = 1;
      double** ptr736 = &(t734)[c735];
      std___Deque_iterator_double__double___double_____M_set_node(&base731->_M_finish, ptr736);
      struct std___Deque_base_double__std__allocator_double__* base737 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t710 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base738 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base737->_M_impl) + 0);
      double* t739 = base738->_M_finish._M_first;
      struct std___Deque_base_double__std__allocator_double__* base740 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t710 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base741 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base740->_M_impl) + 0);
      base741->_M_finish._M_cur = t739;
    cir_try_dispatch723: ;
    if (__cir_exc_active) {
    {
      int ca_tok742 = 0;
      void* ca_exn743 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_double__std__allocator_double__* base744 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t710 + 0);
        struct std___Deque_base_double__std__allocator_double__* base745 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t710 + 0);
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base746 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base745->_M_impl) + 0);
        double** t747 = base746->_M_finish._M_node;
        int c748 = 1;
        double** ptr749 = &(t747)[c748];
        double* t750 = *ptr749;
        std___Deque_base_double__std__allocator_double______M_deallocate_node(base744, t750);
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

// function: _ZNSt15_Deque_iteratorIdRdPdEmmEv
struct std___Deque_iterator_double__double____double___* std___Deque_iterator_double__double___double____operator__(struct std___Deque_iterator_double__double____double___* v751) {
bb752:
  struct std___Deque_iterator_double__double____double___* this753;
  struct std___Deque_iterator_double__double____double___* __retval754;
  this753 = v751;
  struct std___Deque_iterator_double__double____double___* t755 = this753;
    double* t756 = t755->_M_cur;
    double* t757 = t755->_M_first;
    _Bool c758 = ((t756 == t757)) ? 1 : 0;
    if (c758) {
      double** t759 = t755->_M_node;
      int c760 = -1;
      double** ptr761 = &(t759)[c760];
      std___Deque_iterator_double__double___double_____M_set_node(t755, ptr761);
      double* t762 = t755->_M_last;
      t755->_M_cur = t762;
    }
  double* t763 = t755->_M_cur;
  int c764 = -1;
  double* ptr765 = &(t763)[c764];
  t755->_M_cur = ptr765;
  __retval754 = t755;
  struct std___Deque_iterator_double__double____double___* t766 = __retval754;
  return t766;
}

// function: _ZNSt5dequeIdSaIdEE4backEv
double* std__deque_double__std__allocator_double_____back(struct std__deque_double__std__allocator_double__* v767) {
bb768:
  struct std__deque_double__std__allocator_double__* this769;
  double* __retval770;
  struct std___Deque_iterator_double__double____double___ __tmp771;
  this769 = v767;
  struct std__deque_double__std__allocator_double__* t772 = this769;
    do {
          _Bool r773 = std__deque_double__std__allocator_double_____empty___const(t772);
          if (r773) {
            char* cast774 = (char*)&(_str_5);
            int c775 = 1537;
            char* cast776 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE4backEv);
            char* cast777 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast774, c775, cast776, cast777);
          }
      _Bool c778 = 0;
      if (!c778) break;
    } while (1);
  struct std___Deque_iterator_double__double____double___ r779 = std__deque_double__std__allocator_double_____end(t772);
  __tmp771 = r779;
  struct std___Deque_iterator_double__double____double___* r780 = std___Deque_iterator_double__double___double____operator__(&__tmp771);
  double* r781 = std___Deque_iterator_double__double___double____operator____const(&__tmp771);
  __retval770 = r781;
  double* t782 = __retval770;
  return t782;
}

// function: _ZNSt5dequeIdSaIdEE12emplace_backIJdEEERdDpOT_
double* double__std__deque_double__std__allocator_double_____emplace_back_double_(struct std__deque_double__std__allocator_double__* v783, double* v784) {
bb785:
  struct std__deque_double__std__allocator_double__* this786;
  double* __args787;
  double* __retval788;
  this786 = v783;
  __args787 = v784;
  struct std__deque_double__std__allocator_double__* t789 = this786;
    struct std___Deque_base_double__std__allocator_double__* base790 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t789 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base791 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base790->_M_impl) + 0);
    double* t792 = base791->_M_finish._M_cur;
    struct std___Deque_base_double__std__allocator_double__* base793 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t789 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base794 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base793->_M_impl) + 0);
    double* t795 = base794->_M_finish._M_last;
    int c796 = -1;
    double* ptr797 = &(t795)[c796];
    _Bool c798 = ((t792 != ptr797)) ? 1 : 0;
    if (c798) {
      struct std___Deque_base_double__std__allocator_double__* base799 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t789 + 0);
      struct std__allocator_double_* base800 = (struct std__allocator_double_*)((char *)&(base799->_M_impl) + 0);
      struct std___Deque_base_double__std__allocator_double__* base801 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t789 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base802 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base801->_M_impl) + 0);
      double* t803 = base802->_M_finish._M_cur;
      double* t804 = __args787;
      void_std__allocator_traits_std__allocator_double_____construct_double__double_(base800, t803, t804);
      struct std___Deque_base_double__std__allocator_double__* base805 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t789 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base806 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base805->_M_impl) + 0);
      double* t807 = base806->_M_finish._M_cur;
      int c808 = 1;
      double* ptr809 = &(t807)[c808];
      base806->_M_finish._M_cur = ptr809;
    } else {
      double* t810 = __args787;
      void_std__deque_double__std__allocator_double______M_push_back_aux_double_(t789, t810);
      if (__cir_exc_active) {
        double* __cir_eh_ret = (double*)0;
        return __cir_eh_ret;
      }
    }
  double* r811 = std__deque_double__std__allocator_double_____back(t789);
  __retval788 = r811;
  double* t812 = __retval788;
  return t812;
}

// function: _ZNSt5dequeIdSaIdEE9push_backEOd
void std__deque_double__std__allocator_double_____push_back(struct std__deque_double__std__allocator_double__* v813, double* v814) {
bb815:
  struct std__deque_double__std__allocator_double__* this816;
  double* __x817;
  this816 = v813;
  __x817 = v814;
  struct std__deque_double__std__allocator_double__* t818 = this816;
  double* t819 = __x817;
  double* r820 = double__std__deque_double__std__allocator_double_____emplace_back_double_(t818, t819);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v821, int v822) {
bb823:
  int __a824;
  int __b825;
  int __retval826;
  __a824 = v821;
  __b825 = v822;
  int t827 = __a824;
  int t828 = __b825;
  int b829 = t827 | t828;
  __retval826 = b829;
  int t830 = __retval826;
  return t830;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v831) {
bb832:
  struct std__basic_ios_char__std__char_traits_char__* this833;
  int __retval834;
  this833 = v831;
  struct std__basic_ios_char__std__char_traits_char__* t835 = this833;
  struct std__ios_base* base836 = (struct std__ios_base*)((char *)t835 + 0);
  int t837 = base836->_M_streambuf_state;
  __retval834 = t837;
  int t838 = __retval834;
  return t838;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v839, int v840) {
bb841:
  struct std__basic_ios_char__std__char_traits_char__* this842;
  int __state843;
  this842 = v839;
  __state843 = v840;
  struct std__basic_ios_char__std__char_traits_char__* t844 = this842;
  int r845 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t844);
  if (__cir_exc_active) {
    return;
  }
  int t846 = __state843;
  int r847 = std__operator__2(r845, t846);
  std__basic_ios_char__std__char_traits_char_____clear(t844, r847);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v848, char* v849) {
bb850:
  char* __c1851;
  char* __c2852;
  _Bool __retval853;
  __c1851 = v848;
  __c2852 = v849;
  char* t854 = __c1851;
  char t855 = *t854;
  int cast856 = (int)t855;
  char* t857 = __c2852;
  char t858 = *t857;
  int cast859 = (int)t858;
  _Bool c860 = ((cast856 == cast859)) ? 1 : 0;
  __retval853 = c860;
  _Bool t861 = __retval853;
  return t861;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v862) {
bb863:
  char* __p864;
  unsigned long __retval865;
  unsigned long __i866;
  __p864 = v862;
  unsigned long c867 = 0;
  __i866 = c867;
    char ref_tmp0868;
    while (1) {
      unsigned long t869 = __i866;
      char* t870 = __p864;
      char* ptr871 = &(t870)[t869];
      char c872 = 0;
      ref_tmp0868 = c872;
      _Bool r873 = __gnu_cxx__char_traits_char___eq(ptr871, &ref_tmp0868);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u874 = !r873;
      if (!u874) break;
      unsigned long t875 = __i866;
      unsigned long u876 = t875 + 1;
      __i866 = u876;
    }
  unsigned long t877 = __i866;
  __retval865 = t877;
  unsigned long t878 = __retval865;
  return t878;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v879) {
bb880:
  char* __s881;
  unsigned long __retval882;
  __s881 = v879;
    _Bool r883 = std____is_constant_evaluated();
    if (r883) {
      char* t884 = __s881;
      unsigned long r885 = __gnu_cxx__char_traits_char___length(t884);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval882 = r885;
      unsigned long t886 = __retval882;
      return t886;
    }
  char* t887 = __s881;
  unsigned long r888 = strlen(t887);
  __retval882 = r888;
  unsigned long t889 = __retval882;
  return t889;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v890, char* v891) {
bb892:
  struct std__basic_ostream_char__std__char_traits_char__* __out893;
  char* __s894;
  struct std__basic_ostream_char__std__char_traits_char__* __retval895;
  __out893 = v890;
  __s894 = v891;
    char* t896 = __s894;
    _Bool cast897 = (_Bool)t896;
    _Bool u898 = !cast897;
    if (u898) {
      struct std__basic_ostream_char__std__char_traits_char__* t899 = __out893;
      void** v900 = (void**)t899;
      void* v901 = *((void**)v900);
      unsigned char* cast902 = (unsigned char*)v901;
      long c903 = -24;
      unsigned char* ptr904 = &(cast902)[c903];
      long* cast905 = (long*)ptr904;
      long t906 = *cast905;
      unsigned char* cast907 = (unsigned char*)t899;
      unsigned char* ptr908 = &(cast907)[t906];
      struct std__basic_ostream_char__std__char_traits_char__* cast909 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr908;
      struct std__basic_ios_char__std__char_traits_char__* cast910 = (struct std__basic_ios_char__std__char_traits_char__*)cast909;
      int t911 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast910, t911);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t912 = __out893;
      char* t913 = __s894;
      char* t914 = __s894;
      unsigned long r915 = std__char_traits_char___length(t914);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast916 = (long)r915;
      struct std__basic_ostream_char__std__char_traits_char__* r917 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t912, t913, cast916);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t918 = __out893;
  __retval895 = t918;
  struct std__basic_ostream_char__std__char_traits_char__* t919 = __retval895;
  return t919;
}

// function: _ZStmiRKSt15_Deque_iteratorIdRdPdES4_
long std__operator_(struct std___Deque_iterator_double__double____double___* v920, struct std___Deque_iterator_double__double____double___* v921) {
bb922:
  struct std___Deque_iterator_double__double____double___* __x923;
  struct std___Deque_iterator_double__double____double___* __y924;
  long __retval925;
  __x923 = v920;
  __y924 = v921;
  unsigned long r926 = std___Deque_iterator_double__double___double_____S_buffer_size();
  long cast927 = (long)r926;
  struct std___Deque_iterator_double__double____double___* t928 = __x923;
  double** t929 = t928->_M_node;
  struct std___Deque_iterator_double__double____double___* t930 = __y924;
  double** t931 = t930->_M_node;
  long diff932 = t929 - t931;
  struct std___Deque_iterator_double__double____double___* t933 = __x923;
  double** t934 = t933->_M_node;
  _Bool cast935 = (_Bool)t934;
  long cast936 = (long)cast935;
  long b937 = diff932 - cast936;
  long b938 = cast927 * b937;
  struct std___Deque_iterator_double__double____double___* t939 = __x923;
  double* t940 = t939->_M_cur;
  struct std___Deque_iterator_double__double____double___* t941 = __x923;
  double* t942 = t941->_M_first;
  long diff943 = t940 - t942;
  long b944 = b938 + diff943;
  struct std___Deque_iterator_double__double____double___* t945 = __y924;
  double* t946 = t945->_M_last;
  struct std___Deque_iterator_double__double____double___* t947 = __y924;
  double* t948 = t947->_M_cur;
  long diff949 = t946 - t948;
  long b950 = b944 + diff949;
  __retval925 = b950;
  long t951 = __retval925;
  return t951;
}

// function: _ZNKSt5dequeIdSaIdEE4sizeEv
unsigned long std__deque_double__std__allocator_double_____size___const(struct std__deque_double__std__allocator_double__* v952) {
bb953:
  struct std__deque_double__std__allocator_double__* this954;
  unsigned long __retval955;
  unsigned long __sz956;
  this954 = v952;
  struct std__deque_double__std__allocator_double__* t957 = this954;
  struct std___Deque_base_double__std__allocator_double__* base958 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t957 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base959 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base958->_M_impl) + 0);
  struct std___Deque_base_double__std__allocator_double__* base960 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t957 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base961 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base960->_M_impl) + 0);
  long r962 = std__operator_(&base959->_M_finish, &base961->_M_start);
  unsigned long cast963 = (unsigned long)r962;
  __sz956 = cast963;
    unsigned long t964 = __sz956;
    unsigned long r965 = std__deque_double__std__allocator_double_____max_size___const(t957);
    _Bool c966 = ((t964 > r965)) ? 1 : 0;
    if (c966) {
      __builtin_unreachable();
    }
  unsigned long t967 = __sz956;
  __retval955 = t967;
  unsigned long t968 = __retval955;
  return t968;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v969) {
bb970:
  struct std__ios_base* this971;
  long __retval972;
  this971 = v969;
  struct std__ios_base* t973 = this971;
  long t974 = t973->_M_width;
  __retval972 = t974;
  long t975 = __retval972;
  return t975;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v976, char v977) {
bb978:
  struct std__basic_ostream_char__std__char_traits_char__* __out979;
  char __c980;
  struct std__basic_ostream_char__std__char_traits_char__* __retval981;
  __out979 = v976;
  __c980 = v977;
    struct std__basic_ostream_char__std__char_traits_char__* t982 = __out979;
    void** v983 = (void**)t982;
    void* v984 = *((void**)v983);
    unsigned char* cast985 = (unsigned char*)v984;
    long c986 = -24;
    unsigned char* ptr987 = &(cast985)[c986];
    long* cast988 = (long*)ptr987;
    long t989 = *cast988;
    unsigned char* cast990 = (unsigned char*)t982;
    unsigned char* ptr991 = &(cast990)[t989];
    struct std__basic_ostream_char__std__char_traits_char__* cast992 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr991;
    struct std__ios_base* cast993 = (struct std__ios_base*)cast992;
    long r994 = std__ios_base__width___const(cast993);
    if (__cir_exc_active) {
      struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
      return __cir_eh_ret;
    }
    long c995 = 0;
    _Bool c996 = ((r994 != c995)) ? 1 : 0;
    if (c996) {
      struct std__basic_ostream_char__std__char_traits_char__* t997 = __out979;
      long c998 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r999 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t997, &__c980, c998);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      __retval981 = r999;
      struct std__basic_ostream_char__std__char_traits_char__* t1000 = __retval981;
      return t1000;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1001 = __out979;
  char t1002 = __c980;
  struct std__basic_ostream_char__std__char_traits_char__* r1003 = std__ostream__put(t1001, t1002);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t1004 = __out979;
  __retval981 = t1004;
  struct std__basic_ostream_char__std__char_traits_char__* t1005 = __retval981;
  return t1005;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v1006, double v1007) {
bb1008:
  struct std__basic_ostream_char__std__char_traits_char__* this1009;
  double __f1010;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1011;
  this1009 = v1006;
  __f1010 = v1007;
  struct std__basic_ostream_char__std__char_traits_char__* t1012 = this1009;
  double t1013 = __f1010;
  struct std__basic_ostream_char__std__char_traits_char__* r1014 = std__ostream__std__ostream___M_insert_double_(t1012, t1013);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1011 = r1014;
  struct std__basic_ostream_char__std__char_traits_char__* t1015 = __retval1011;
  return t1015;
}

// function: _ZNSt15_Deque_iteratorIdRdPdEpLEl
struct std___Deque_iterator_double__double____double___* std___Deque_iterator_double__double___double____operator___2(struct std___Deque_iterator_double__double____double___* v1016, long v1017) {
bb1018:
  struct std___Deque_iterator_double__double____double___* this1019;
  long __n1020;
  struct std___Deque_iterator_double__double____double___* __retval1021;
  long __offset1022;
  this1019 = v1016;
  __n1020 = v1017;
  struct std___Deque_iterator_double__double____double___* t1023 = this1019;
  long t1024 = __n1020;
  double* t1025 = t1023->_M_cur;
  double* t1026 = t1023->_M_first;
  long diff1027 = t1025 - t1026;
  long b1028 = t1024 + diff1027;
  __offset1022 = b1028;
    long t1029 = __offset1022;
    long c1030 = 0;
    _Bool c1031 = ((t1029 >= c1030)) ? 1 : 0;
    _Bool ternary1032;
    if (c1031) {
      long t1033 = __offset1022;
      unsigned long r1034 = std___Deque_iterator_double__double___double_____S_buffer_size();
      long cast1035 = (long)r1034;
      _Bool c1036 = ((t1033 < cast1035)) ? 1 : 0;
      ternary1032 = (_Bool)c1036;
    } else {
      _Bool c1037 = 0;
      ternary1032 = (_Bool)c1037;
    }
    if (ternary1032) {
      long t1038 = __n1020;
      double* t1039 = t1023->_M_cur;
      double* ptr1040 = &(t1039)[t1038];
      t1023->_M_cur = ptr1040;
    } else {
      long __node_offset1041;
      long t1042 = __offset1022;
      long c1043 = 0;
      _Bool c1044 = ((t1042 > c1043)) ? 1 : 0;
      long ternary1045;
      if (c1044) {
        long t1046 = __offset1022;
        unsigned long r1047 = std___Deque_iterator_double__double___double_____S_buffer_size();
        long cast1048 = (long)r1047;
        long b1049 = t1046 / cast1048;
        ternary1045 = (long)b1049;
      } else {
        long t1050 = __offset1022;
        long u1051 = -t1050;
        long c1052 = 1;
        long b1053 = u1051 - c1052;
        unsigned long cast1054 = (unsigned long)b1053;
        unsigned long r1055 = std___Deque_iterator_double__double___double_____S_buffer_size();
        unsigned long b1056 = cast1054 / r1055;
        long cast1057 = (long)b1056;
        long u1058 = -cast1057;
        long c1059 = 1;
        long b1060 = u1058 - c1059;
        ternary1045 = (long)b1060;
      }
      __node_offset1041 = ternary1045;
      double** t1061 = t1023->_M_node;
      long t1062 = __node_offset1041;
      double** ptr1063 = &(t1061)[t1062];
      std___Deque_iterator_double__double___double_____M_set_node(t1023, ptr1063);
      double* t1064 = t1023->_M_first;
      long t1065 = __offset1022;
      long t1066 = __node_offset1041;
      unsigned long r1067 = std___Deque_iterator_double__double___double_____S_buffer_size();
      long cast1068 = (long)r1067;
      long b1069 = t1066 * cast1068;
      long b1070 = t1065 - b1069;
      double* ptr1071 = &(t1064)[b1070];
      t1023->_M_cur = ptr1071;
    }
  __retval1021 = t1023;
  struct std___Deque_iterator_double__double____double___* t1072 = __retval1021;
  return t1072;
}

// function: _ZStplRKSt15_Deque_iteratorIdRdPdEl
struct std___Deque_iterator_double__double____double___ std__operator__3(struct std___Deque_iterator_double__double____double___* v1073, long v1074) {
bb1075:
  struct std___Deque_iterator_double__double____double___* __x1076;
  long __n1077;
  struct std___Deque_iterator_double__double____double___ __retval1078;
  __x1076 = v1073;
  __n1077 = v1074;
  struct std___Deque_iterator_double__double____double___* t1079 = __x1076;
  std___Deque_iterator_double__double___double_____Deque_iterator(&__retval1078, t1079);
  long t1080 = __n1077;
  struct std___Deque_iterator_double__double____double___* r1081 = std___Deque_iterator_double__double___double____operator___2(&__retval1078, t1080);
  struct std___Deque_iterator_double__double____double___ t1082 = __retval1078;
  return t1082;
}

// function: _ZNKSt15_Deque_iteratorIdRdPdEixEl
double* std___Deque_iterator_double__double___double____operator___long__const(struct std___Deque_iterator_double__double____double___* v1083, long v1084) {
bb1085:
  struct std___Deque_iterator_double__double____double___* this1086;
  long __n1087;
  double* __retval1088;
  struct std___Deque_iterator_double__double____double___ ref_tmp01089;
  this1086 = v1083;
  __n1087 = v1084;
  struct std___Deque_iterator_double__double____double___* t1090 = this1086;
  long t1091 = __n1087;
  struct std___Deque_iterator_double__double____double___ r1092 = std__operator__3(t1090, t1091);
  ref_tmp01089 = r1092;
  double* r1093 = std___Deque_iterator_double__double___double____operator____const(&ref_tmp01089);
  __retval1088 = r1093;
  double* t1094 = __retval1088;
  return t1094;
}

// function: _ZNSt5dequeIdSaIdEEixEm
double* std__deque_double__std__allocator_double_____operator__(struct std__deque_double__std__allocator_double__* v1095, unsigned long v1096) {
bb1097:
  struct std__deque_double__std__allocator_double__* this1098;
  unsigned long __n1099;
  double* __retval1100;
  this1098 = v1095;
  __n1099 = v1096;
  struct std__deque_double__std__allocator_double__* t1101 = this1098;
    do {
          unsigned long t1102 = __n1099;
          unsigned long r1103 = std__deque_double__std__allocator_double_____size___const(t1101);
          _Bool c1104 = ((t1102 < r1103)) ? 1 : 0;
          _Bool u1105 = !c1104;
          if (u1105) {
            char* cast1106 = (char*)&(_str_5);
            int c1107 = 1433;
            char* cast1108 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIdSaIdEEixEm);
            char* cast1109 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast1106, c1107, cast1108, cast1109);
          }
      _Bool c1110 = 0;
      if (!c1110) break;
    } while (1);
  struct std___Deque_base_double__std__allocator_double__* base1111 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1101 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1112 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1111->_M_impl) + 0);
  unsigned long t1113 = __n1099;
  long cast1114 = (long)t1113;
  double* r1115 = std___Deque_iterator_double__double___double____operator___long__const(&base1112->_M_start, cast1114);
  __retval1100 = r1115;
  double* t1116 = __retval1100;
  return t1116;
}

// function: _ZNSt16allocator_traitsISaIdEE7destroyIdEEvRS0_PT_
void void_std__allocator_traits_std__allocator_double_____destroy_double_(struct std__allocator_double_* v1117, double* v1118) {
bb1119:
  struct std__allocator_double_* __a1120;
  double* __p1121;
  __a1120 = v1117;
  __p1121 = v1118;
  double* t1122 = __p1121;
  void_std__destroy_at_double_(t1122);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIdSaIdEE16_M_pop_front_auxEv
void std__deque_double__std__allocator_double______M_pop_front_aux(struct std__deque_double__std__allocator_double__* v1123) {
bb1124:
  struct std__deque_double__std__allocator_double__* this1125;
  this1125 = v1123;
  struct std__deque_double__std__allocator_double__* t1126 = this1125;
  struct std___Deque_base_double__std__allocator_double__* base1127 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1126 + 0);
  struct std__allocator_double_* r1128 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base1127);
  struct std___Deque_base_double__std__allocator_double__* base1129 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1126 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1130 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1129->_M_impl) + 0);
  double* t1131 = base1130->_M_start._M_cur;
  void_std__allocator_traits_std__allocator_double_____destroy_double_(r1128, t1131);
  struct std___Deque_base_double__std__allocator_double__* base1132 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1126 + 0);
  struct std___Deque_base_double__std__allocator_double__* base1133 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1126 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1134 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1133->_M_impl) + 0);
  double* t1135 = base1134->_M_start._M_first;
  std___Deque_base_double__std__allocator_double______M_deallocate_node(base1132, t1135);
  struct std___Deque_base_double__std__allocator_double__* base1136 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1126 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1137 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1136->_M_impl) + 0);
  struct std___Deque_base_double__std__allocator_double__* base1138 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1126 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1139 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1138->_M_impl) + 0);
  double** t1140 = base1139->_M_start._M_node;
  int c1141 = 1;
  double** ptr1142 = &(t1140)[c1141];
  std___Deque_iterator_double__double___double_____M_set_node(&base1137->_M_start, ptr1142);
  struct std___Deque_base_double__std__allocator_double__* base1143 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1126 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1144 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1143->_M_impl) + 0);
  double* t1145 = base1144->_M_start._M_first;
  struct std___Deque_base_double__std__allocator_double__* base1146 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1126 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1147 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1146->_M_impl) + 0);
  base1147->_M_start._M_cur = t1145;
  return;
}

// function: _ZNSt5dequeIdSaIdEE9pop_frontEv
void std__deque_double__std__allocator_double_____pop_front(struct std__deque_double__std__allocator_double__* v1148) {
bb1149:
  struct std__deque_double__std__allocator_double__* this1150;
  this1150 = v1148;
  struct std__deque_double__std__allocator_double__* t1151 = this1150;
    do {
          _Bool r1152 = std__deque_double__std__allocator_double_____empty___const(t1151);
          if (r1152) {
            char* cast1153 = (char*)&(_str_5);
            int c1154 = 1643;
            char* cast1155 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE9pop_frontEv);
            char* cast1156 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1153, c1154, cast1155, cast1156);
          }
      _Bool c1157 = 0;
      if (!c1157) break;
    } while (1);
    struct std___Deque_base_double__std__allocator_double__* base1158 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1151 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1159 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1158->_M_impl) + 0);
    double* t1160 = base1159->_M_start._M_cur;
    struct std___Deque_base_double__std__allocator_double__* base1161 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1151 + 0);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1162 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1161->_M_impl) + 0);
    double* t1163 = base1162->_M_start._M_last;
    int c1164 = -1;
    double* ptr1165 = &(t1163)[c1164];
    _Bool c1166 = ((t1160 != ptr1165)) ? 1 : 0;
    if (c1166) {
      struct std___Deque_base_double__std__allocator_double__* base1167 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1151 + 0);
      struct std__allocator_double_* r1168 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base1167);
      struct std___Deque_base_double__std__allocator_double__* base1169 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1151 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1170 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1169->_M_impl) + 0);
      double* t1171 = base1170->_M_start._M_cur;
      void_std__allocator_traits_std__allocator_double_____destroy_double_(r1168, t1171);
      struct std___Deque_base_double__std__allocator_double__* base1172 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1151 + 0);
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1173 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1172->_M_impl) + 0);
      double* t1174 = base1173->_M_start._M_cur;
      int c1175 = 1;
      double* ptr1176 = &(t1174)[c1175];
      base1173->_M_start._M_cur = ptr1176;
    } else {
      std__deque_double__std__allocator_double______M_pop_front_aux(t1151);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIdcSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_double__char__std__char_traits_char_____(struct std__ostream_iterator_double__char__std__char_traits_char__* v1177, struct std__ostream_iterator_double__char__std__char_traits_char__ v1178) {
bb1179:
  struct std__ostream_iterator_double__char__std__char_traits_char__* unnamed1180;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __res1181;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval1182;
  unnamed1180 = v1177;
  __res1181 = v1178;
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&__retval1182, &__res1181);
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1183 = __retval1182;
  return t1183;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEdeEv
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator__3(struct std__ostream_iterator_double__char__std__char_traits_char__* v1184) {
bb1185:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this1186;
  struct std__ostream_iterator_double__char__std__char_traits_char__* __retval1187;
  this1186 = v1184;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1188 = this1186;
  __retval1187 = t1188;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1189 = __retval1187;
  return t1189;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEaSERKd
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_double__char__std__char_traits_char__* v1190, double* v1191) {
bb1192:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this1193;
  double* __value1194;
  struct std__ostream_iterator_double__char__std__char_traits_char__* __retval1195;
  this1193 = v1190;
  __value1194 = v1191;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1196 = this1193;
  struct std__basic_ostream_char__std__char_traits_char__* t1197 = t1196->_M_stream;
  double* t1198 = __value1194;
  double t1199 = *t1198;
  struct std__basic_ostream_char__std__char_traits_char__* r1200 = std__ostream__operator__(t1197, t1199);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__* __cir_eh_ret = (struct std__ostream_iterator_double__char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
    char* t1201 = t1196->_M_string;
    _Bool cast1202 = (_Bool)t1201;
    if (cast1202) {
      struct std__basic_ostream_char__std__char_traits_char__* t1203 = t1196->_M_stream;
      char* t1204 = t1196->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r1205 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t1203, t1204);
      if (__cir_exc_active) {
        struct std__ostream_iterator_double__char__std__char_traits_char__* __cir_eh_ret = (struct std__ostream_iterator_double__char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  __retval1195 = t1196;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1206 = __retval1195;
  return t1206;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIdcSt11char_traitsIcEEPdEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_double__char__std__char_traits_char_____double__(struct std__ostream_iterator_double__char__std__char_traits_char__* v1207, double** v1208) {
bb1209:
  struct std__ostream_iterator_double__char__std__char_traits_char__* __out1210;
  double** __in1211;
  __out1210 = v1207;
  __in1211 = v1208;
    double** t1212 = __in1211;
    double* t1213 = *t1212;
    struct std__ostream_iterator_double__char__std__char_traits_char__* t1214 = __out1210;
    struct std__ostream_iterator_double__char__std__char_traits_char__* r1215 = std__ostream_iterator_double__char__std__char_traits_char_____operator__3(t1214);
    struct std__ostream_iterator_double__char__std__char_traits_char__* r1216 = std__ostream_iterator_double__char__std__char_traits_char_____operator__2(r1215, t1213);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEppEv
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator__(struct std__ostream_iterator_double__char__std__char_traits_char__* v1217) {
bb1218:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this1219;
  struct std__ostream_iterator_double__char__std__char_traits_char__* __retval1220;
  this1219 = v1217;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1221 = this1219;
  __retval1220 = t1221;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1222 = __retval1220;
  return t1222;
}

// function: _ZSt14__copy_move_a2ILb0EPdS0_St16ostream_iteratorIdcSt11char_traitsIcEEET2_T0_T1_S5_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a2_false__double___double___std__ostream_iterator_double__char__std__char_traits_char_____(double* v1223, double* v1224, struct std__ostream_iterator_double__char__std__char_traits_char__ v1225) {
bb1226:
  double* __first1227;
  double* __last1228;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __result1229;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval1230;
  __first1227 = v1223;
  __last1228 = v1224;
  __result1229 = v1225;
    while (1) {
      double* t1232 = __first1227;
      double* t1233 = __last1228;
      _Bool c1234 = ((t1232 != t1233)) ? 1 : 0;
      if (!c1234) break;
      void_std____assign_one_false__std__ostream_iterator_double__char__std__char_traits_char_____double__(&__result1229, &__first1227);
      if (__cir_exc_active) {
        struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    for_step1231: ;
      struct std__ostream_iterator_double__char__std__char_traits_char__* r1235 = std__ostream_iterator_double__char__std__char_traits_char_____operator__(&__result1229);
      double* t1236 = __first1227;
      int c1237 = 1;
      double* ptr1238 = &(t1236)[c1237];
      __first1227 = ptr1238;
    }
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&__retval1230, &__result1229);
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1239 = __retval1230;
  return t1239;
}

// function: _ZSt14__copy_move_a1ILb0EPdSt16ostream_iteratorIdcSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__double___std__ostream_iterator_double__char__std__char_traits_char_____(double* v1240, double* v1241, struct std__ostream_iterator_double__char__std__char_traits_char__ v1242) {
bb1243:
  double* __first1244;
  double* __last1245;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __result1246;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval1247;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp01248;
  __first1244 = v1240;
  __last1245 = v1241;
  __result1246 = v1242;
  double* t1249 = __first1244;
  double* t1250 = __last1245;
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp01248, &__result1246);
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1251 = agg_tmp01248;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r1252 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a2_false__double___double___std__ostream_iterator_double__char__std__char_traits_char_____(t1249, t1250, t1251);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1247 = r1252;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1253 = __retval1247;
  return t1253;
}

// function: _ZNSt8iteratorISt19output_iterator_tagvvvvEaSERKS1_
struct std__iterator_std__output_iterator_tag__void__void__void__void_* std__iterator_std__output_iterator_tag__void__void__void__void___operator_(struct std__iterator_std__output_iterator_tag__void__void__void__void_* v1254, struct std__iterator_std__output_iterator_tag__void__void__void__void_* v1255) {
bb1256:
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* this1257;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* unnamed1258;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* __retval1259;
  this1257 = v1254;
  unnamed1258 = v1255;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* t1260 = this1257;
  __retval1259 = t1260;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* t1261 = __retval1259;
  return t1261;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEaSERKS2_
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator_(struct std__ostream_iterator_double__char__std__char_traits_char__* v1262, struct std__ostream_iterator_double__char__std__char_traits_char__* v1263) {
bb1264:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this1265;
  struct std__ostream_iterator_double__char__std__char_traits_char__* unnamed1266;
  struct std__ostream_iterator_double__char__std__char_traits_char__* __retval1267;
  this1265 = v1262;
  unnamed1266 = v1263;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1268 = this1265;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base1269 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t1268 + 0);
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1270 = unnamed1266;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base1271 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t1270 + 0);
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* r1272 = std__iterator_std__output_iterator_tag__void__void__void__void___operator_(base1269, base1271);
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1273 = unnamed1266;
  struct std__basic_ostream_char__std__char_traits_char__* t1274 = t1273->_M_stream;
  t1268->_M_stream = t1274;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1275 = unnamed1266;
  char* t1276 = t1275->_M_string;
  t1268->_M_string = t1276;
  __retval1267 = t1268;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1277 = __retval1267;
  return t1277;
}

// function: _ZSt15__copy_move_ditILb0EdRdPdSt16ostream_iteratorIdcSt11char_traitsIcEEET3_St15_Deque_iteratorIT0_T1_T2_ESB_S6_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_dit_false__double__double___double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Deque_iterator_double__double____double___ v1278, struct std___Deque_iterator_double__double____double___ v1279, struct std__ostream_iterator_double__char__std__char_traits_char__ v1280) {
bb1281:
  struct std___Deque_iterator_double__double____double___ __first1282;
  struct std___Deque_iterator_double__double____double___ __last1283;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __result1284;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval1285;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp31286;
  __first1282 = v1278;
  __last1283 = v1279;
  __result1284 = v1280;
    double** t1287 = __first1282._M_node;
    double** t1288 = __last1283._M_node;
    _Bool c1289 = ((t1287 != t1288)) ? 1 : 0;
    if (c1289) {
      struct std__ostream_iterator_double__char__std__char_traits_char__ ref_tmp01290;
      struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp01291;
      struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp21292;
      double* t1293 = __first1282._M_cur;
      double* t1294 = __first1282._M_last;
      std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp01291, &__result1284);
      struct std__ostream_iterator_double__char__std__char_traits_char__ t1295 = agg_tmp01291;
      struct std__ostream_iterator_double__char__std__char_traits_char__ r1296 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__double___std__ostream_iterator_double__char__std__char_traits_char_____(t1293, t1294, t1295);
      if (__cir_exc_active) {
        struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp01290 = r1296;
      struct std__ostream_iterator_double__char__std__char_traits_char__* r1297 = std__ostream_iterator_double__char__std__char_traits_char_____operator_(&__result1284, &ref_tmp01290);
        double** __node1298;
        struct std__ostream_iterator_double__char__std__char_traits_char__ ref_tmp11299;
        struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp11300;
        double** t1301 = __first1282._M_node;
        int c1302 = 1;
        double** ptr1303 = &(t1301)[c1302];
        __node1298 = ptr1303;
        while (1) {
          double** t1305 = __node1298;
          double** t1306 = __last1283._M_node;
          _Bool c1307 = ((t1305 != t1306)) ? 1 : 0;
          if (!c1307) break;
          double** t1308 = __node1298;
          double* t1309 = *t1308;
          double** t1310 = __node1298;
          double* t1311 = *t1310;
          unsigned long r1312 = std___Deque_iterator_double__double___double_____S_buffer_size();
          double* ptr1313 = &(t1311)[r1312];
          std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp11300, &__result1284);
          struct std__ostream_iterator_double__char__std__char_traits_char__ t1314 = agg_tmp11300;
          struct std__ostream_iterator_double__char__std__char_traits_char__ r1315 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__double___std__ostream_iterator_double__char__std__char_traits_char_____(t1309, ptr1313, t1314);
          if (__cir_exc_active) {
            struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ref_tmp11299 = r1315;
          struct std__ostream_iterator_double__char__std__char_traits_char__* r1316 = std__ostream_iterator_double__char__std__char_traits_char_____operator_(&__result1284, &ref_tmp11299);
        for_step1304: ;
          double** t1317 = __node1298;
          int c1318 = 1;
          double** ptr1319 = &(t1317)[c1318];
          __node1298 = ptr1319;
        }
      double* t1320 = __last1283._M_first;
      double* t1321 = __last1283._M_cur;
      std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp21292, &__result1284);
      struct std__ostream_iterator_double__char__std__char_traits_char__ t1322 = agg_tmp21292;
      struct std__ostream_iterator_double__char__std__char_traits_char__ r1323 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__double___std__ostream_iterator_double__char__std__char_traits_char_____(t1320, t1321, t1322);
      if (__cir_exc_active) {
        struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1285 = r1323;
      struct std__ostream_iterator_double__char__std__char_traits_char__ t1324 = __retval1285;
      return t1324;
    }
  double* t1325 = __first1282._M_cur;
  double* t1326 = __last1283._M_cur;
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp31286, &__result1284);
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1327 = agg_tmp31286;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r1328 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__double___std__ostream_iterator_double__char__std__char_traits_char_____(t1325, t1326, t1327);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1285 = r1328;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1329 = __retval1285;
  return t1329;
}

// function: _ZSt14__copy_move_a1ILb0EdRdPdSt16ostream_iteratorIdcSt11char_traitsIcEEET3_St15_Deque_iteratorIT0_T1_T2_ESB_S6_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__double__double___double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Deque_iterator_double__double____double___ v1330, struct std___Deque_iterator_double__double____double___ v1331, struct std__ostream_iterator_double__char__std__char_traits_char__ v1332) {
bb1333:
  struct std___Deque_iterator_double__double____double___ __first1334;
  struct std___Deque_iterator_double__double____double___ __last1335;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __result1336;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval1337;
  struct std___Deque_iterator_double__double____double___ agg_tmp01338;
  struct std___Deque_iterator_double__double____double___ agg_tmp11339;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp21340;
  __first1334 = v1330;
  __last1335 = v1331;
  __result1336 = v1332;
  std___Deque_iterator_double__double___double_____Deque_iterator(&agg_tmp01338, &__first1334);
  std___Deque_iterator_double__double___double_____Deque_iterator(&agg_tmp11339, &__last1335);
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp21340, &__result1336);
  struct std___Deque_iterator_double__double____double___ t1341 = agg_tmp01338;
  struct std___Deque_iterator_double__double____double___ t1342 = agg_tmp11339;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1343 = agg_tmp21340;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r1344 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_dit_false__double__double___double___std__ostream_iterator_double__char__std__char_traits_char_____(t1341, t1342, t1343);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1337 = r1344;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1345 = __retval1337;
  return t1345;
}

// function: _ZSt12__niter_baseISt15_Deque_iteratorIdRdPdEET_S4_
struct std___Deque_iterator_double__double____double___ std___Deque_iterator_double__double___double___std____niter_base_std___Deque_iterator_double__double___double____(struct std___Deque_iterator_double__double____double___ v1346) {
bb1347:
  struct std___Deque_iterator_double__double____double___ __it1348;
  struct std___Deque_iterator_double__double____double___ __retval1349;
  __it1348 = v1346;
  std___Deque_iterator_double__double___double_____Deque_iterator(&__retval1349, &__it1348);
  struct std___Deque_iterator_double__double____double___ t1350 = __retval1349;
  return t1350;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIdcSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____niter_base_std__ostream_iterator_double__char__std__char_traits_char_____(struct std__ostream_iterator_double__char__std__char_traits_char__ v1351) {
bb1352:
  struct std__ostream_iterator_double__char__std__char_traits_char__ __it1353;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval1354;
  __it1353 = v1351;
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&__retval1354, &__it1353);
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1355 = __retval1354;
  return t1355;
}

// function: _ZSt13__copy_move_aILb0ESt15_Deque_iteratorIdRdPdESt16ostream_iteratorIdcSt11char_traitsIcEEET1_T0_S9_S8_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a_false__std___Deque_iterator_double__double___double____std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Deque_iterator_double__double____double___ v1356, struct std___Deque_iterator_double__double____double___ v1357, struct std__ostream_iterator_double__char__std__char_traits_char__ v1358) {
bb1359:
  struct std___Deque_iterator_double__double____double___ __first1360;
  struct std___Deque_iterator_double__double____double___ __last1361;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __result1362;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval1363;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp01364;
  struct std___Deque_iterator_double__double____double___ agg_tmp11365;
  struct std___Deque_iterator_double__double____double___ agg_tmp21366;
  struct std___Deque_iterator_double__double____double___ agg_tmp31367;
  struct std___Deque_iterator_double__double____double___ agg_tmp41368;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp51369;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp61370;
  __first1360 = v1356;
  __last1361 = v1357;
  __result1362 = v1358;
  std___Deque_iterator_double__double___double_____Deque_iterator(&agg_tmp21366, &__first1360);
  struct std___Deque_iterator_double__double____double___ t1371 = agg_tmp21366;
  struct std___Deque_iterator_double__double____double___ r1372 = std___Deque_iterator_double__double___double___std____niter_base_std___Deque_iterator_double__double___double____(t1371);
  agg_tmp11365 = r1372;
  std___Deque_iterator_double__double___double_____Deque_iterator(&agg_tmp41368, &__last1361);
  struct std___Deque_iterator_double__double____double___ t1373 = agg_tmp41368;
  struct std___Deque_iterator_double__double____double___ r1374 = std___Deque_iterator_double__double___double___std____niter_base_std___Deque_iterator_double__double___double____(t1373);
  agg_tmp31367 = r1374;
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp61370, &__result1362);
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1375 = agg_tmp61370;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r1376 = std__ostream_iterator_double__char__std__char_traits_char____std____niter_base_std__ostream_iterator_double__char__std__char_traits_char_____(t1375);
  agg_tmp51369 = r1376;
  struct std___Deque_iterator_double__double____double___ t1377 = agg_tmp11365;
  struct std___Deque_iterator_double__double____double___ t1378 = agg_tmp31367;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1379 = agg_tmp51369;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r1380 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__double__double___double___std__ostream_iterator_double__char__std__char_traits_char_____(t1377, t1378, t1379);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01364 = r1380;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1381 = agg_tmp01364;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r1382 = std__ostream_iterator_double__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_double__char__std__char_traits_char_____(&__result1362, t1381);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1363 = r1382;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1383 = __retval1363;
  return t1383;
}

// function: _ZSt12__miter_baseISt15_Deque_iteratorIdRdPdEET_S4_
struct std___Deque_iterator_double__double____double___ std___Deque_iterator_double__double___double___std____miter_base_std___Deque_iterator_double__double___double____(struct std___Deque_iterator_double__double____double___ v1384) {
bb1385:
  struct std___Deque_iterator_double__double____double___ __it1386;
  struct std___Deque_iterator_double__double____double___ __retval1387;
  __it1386 = v1384;
  std___Deque_iterator_double__double___double_____Deque_iterator(&__retval1387, &__it1386);
  struct std___Deque_iterator_double__double____double___ t1388 = __retval1387;
  return t1388;
}

// function: _ZNSt15_Deque_iteratorIdRdPdEC2ERKS2_
void std___Deque_iterator_double__double___double_____Deque_iterator(struct std___Deque_iterator_double__double____double___* v1389, struct std___Deque_iterator_double__double____double___* v1390) {
bb1391:
  struct std___Deque_iterator_double__double____double___* this1392;
  struct std___Deque_iterator_double__double____double___* __x1393;
  this1392 = v1389;
  __x1393 = v1390;
  struct std___Deque_iterator_double__double____double___* t1394 = this1392;
  struct std___Deque_iterator_double__double____double___* t1395 = __x1393;
  double* t1396 = t1395->_M_cur;
  t1394->_M_cur = t1396;
  struct std___Deque_iterator_double__double____double___* t1397 = __x1393;
  double* t1398 = t1397->_M_first;
  t1394->_M_first = t1398;
  struct std___Deque_iterator_double__double____double___* t1399 = __x1393;
  double* t1400 = t1399->_M_last;
  t1394->_M_last = t1400;
  struct std___Deque_iterator_double__double____double___* t1401 = __x1393;
  double** t1402 = t1401->_M_node;
  t1394->_M_node = t1402;
  return;
}

// function: _ZSt4copyISt15_Deque_iteratorIdRdPdESt16ostream_iteratorIdcSt11char_traitsIcEEET0_T_S9_S8_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std__copy_std___Deque_iterator_double__double___double____std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Deque_iterator_double__double____double___ v1403, struct std___Deque_iterator_double__double____double___ v1404, struct std__ostream_iterator_double__char__std__char_traits_char__ v1405) {
bb1406:
  struct std___Deque_iterator_double__double____double___ __first1407;
  struct std___Deque_iterator_double__double____double___ __last1408;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __result1409;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval1410;
  struct std___Deque_iterator_double__double____double___ agg_tmp01411;
  struct std___Deque_iterator_double__double____double___ agg_tmp11412;
  struct std___Deque_iterator_double__double____double___ agg_tmp21413;
  struct std___Deque_iterator_double__double____double___ agg_tmp31414;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp41415;
  __first1407 = v1403;
  __last1408 = v1404;
  __result1409 = v1405;
  std___Deque_iterator_double__double___double_____Deque_iterator(&agg_tmp11412, &__first1407);
  struct std___Deque_iterator_double__double____double___ t1416 = agg_tmp11412;
  struct std___Deque_iterator_double__double____double___ r1417 = std___Deque_iterator_double__double___double___std____miter_base_std___Deque_iterator_double__double___double____(t1416);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01411 = r1417;
  std___Deque_iterator_double__double___double_____Deque_iterator(&agg_tmp31414, &__last1408);
  struct std___Deque_iterator_double__double____double___ t1418 = agg_tmp31414;
  struct std___Deque_iterator_double__double____double___ r1419 = std___Deque_iterator_double__double___double___std____miter_base_std___Deque_iterator_double__double___double____(t1418);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21413 = r1419;
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp41415, &__result1409);
  struct std___Deque_iterator_double__double____double___ t1420 = agg_tmp01411;
  struct std___Deque_iterator_double__double____double___ t1421 = agg_tmp21413;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1422 = agg_tmp41415;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r1423 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a_false__std___Deque_iterator_double__double___double____std__ostream_iterator_double__char__std__char_traits_char_____(t1420, t1421, t1422);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1410 = r1423;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t1424 = __retval1410;
  return t1424;
}

// function: _ZNSt5dequeIdSaIdEE5beginEv
struct std___Deque_iterator_double__double____double___ std__deque_double__std__allocator_double_____begin(struct std__deque_double__std__allocator_double__* v1425) {
bb1426:
  struct std__deque_double__std__allocator_double__* this1427;
  struct std___Deque_iterator_double__double____double___ __retval1428;
  this1427 = v1425;
  struct std__deque_double__std__allocator_double__* t1429 = this1427;
  struct std___Deque_base_double__std__allocator_double__* base1430 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1429 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1431 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1430->_M_impl) + 0);
  std___Deque_iterator_double__double___double_____Deque_iterator(&__retval1428, &base1431->_M_start);
  struct std___Deque_iterator_double__double____double___ t1432 = __retval1428;
  return t1432;
}

// function: _ZNSt5dequeIdSaIdEE3endEv
struct std___Deque_iterator_double__double____double___ std__deque_double__std__allocator_double_____end(struct std__deque_double__std__allocator_double__* v1433) {
bb1434:
  struct std__deque_double__std__allocator_double__* this1435;
  struct std___Deque_iterator_double__double____double___ __retval1436;
  this1435 = v1433;
  struct std__deque_double__std__allocator_double__* t1437 = this1435;
  struct std___Deque_base_double__std__allocator_double__* base1438 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1437 + 0);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1439 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(base1438->_M_impl) + 0);
  std___Deque_iterator_double__double___double_____Deque_iterator(&__retval1436, &base1439->_M_finish);
  struct std___Deque_iterator_double__double____double___ t1440 = __retval1436;
  return t1440;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_double__char__std__char_traits_char__* v1441, struct std__ostream_iterator_double__char__std__char_traits_char__* v1442) {
bb1443:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this1444;
  struct std__ostream_iterator_double__char__std__char_traits_char__* __obj1445;
  this1444 = v1441;
  __obj1445 = v1442;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1446 = this1444;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base1447 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t1446 + 0);
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1448 = __obj1445;
  struct std__basic_ostream_char__std__char_traits_char__* t1449 = t1448->_M_stream;
  t1446->_M_stream = t1449;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t1450 = __obj1445;
  char* t1451 = t1450->_M_string;
  t1446->_M_string = t1451;
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1452, void* v1453) {
bb1454:
  struct std__basic_ostream_char__std__char_traits_char__* this1455;
  void* __pf1456;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1457;
  this1455 = v1452;
  __pf1456 = v1453;
  struct std__basic_ostream_char__std__char_traits_char__* t1458 = this1455;
  void* t1459 = __pf1456;
  struct std__basic_ostream_char__std__char_traits_char__* r1460 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1459)(t1458);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1457 = r1460;
  struct std__basic_ostream_char__std__char_traits_char__* t1461 = __retval1457;
  return t1461;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1462) {
bb1463:
  struct std__basic_ostream_char__std__char_traits_char__* __os1464;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1465;
  __os1464 = v1462;
  struct std__basic_ostream_char__std__char_traits_char__* t1466 = __os1464;
  struct std__basic_ostream_char__std__char_traits_char__* r1467 = std__ostream__flush(t1466);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1465 = r1467;
  struct std__basic_ostream_char__std__char_traits_char__* t1468 = __retval1465;
  return t1468;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1469) {
bb1470:
  struct std__ctype_char_* __f1471;
  struct std__ctype_char_* __retval1472;
  __f1471 = v1469;
    struct std__ctype_char_* t1473 = __f1471;
    _Bool cast1474 = (_Bool)t1473;
    _Bool u1475 = !cast1474;
    if (u1475) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t1476 = __f1471;
  __retval1472 = t1476;
  struct std__ctype_char_* t1477 = __retval1472;
  return t1477;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1478, char v1479) {
bb1480:
  struct std__ctype_char_* this1481;
  char __c1482;
  char __retval1483;
  this1481 = v1478;
  __c1482 = v1479;
  struct std__ctype_char_* t1484 = this1481;
    char t1485 = t1484->_M_widen_ok;
    _Bool cast1486 = (_Bool)t1485;
    if (cast1486) {
      char t1487 = __c1482;
      unsigned char cast1488 = (unsigned char)t1487;
      unsigned long cast1489 = (unsigned long)cast1488;
      char t1490 = t1484->_M_widen[cast1489];
      __retval1483 = t1490;
      char t1491 = __retval1483;
      return t1491;
    }
  std__ctype_char____M_widen_init___const(t1484);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1492 = __c1482;
  void** v1493 = (void**)t1484;
  void* v1494 = *((void**)v1493);
  char vcall1497 = (char)__VERIFIER_virtual_call_char_char(t1484, 6, t1492);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1483 = vcall1497;
  char t1498 = __retval1483;
  return t1498;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1499, char v1500) {
bb1501:
  struct std__basic_ios_char__std__char_traits_char__* this1502;
  char __c1503;
  char __retval1504;
  this1502 = v1499;
  __c1503 = v1500;
  struct std__basic_ios_char__std__char_traits_char__* t1505 = this1502;
  struct std__ctype_char_* t1506 = t1505->_M_ctype;
  struct std__ctype_char_* r1507 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1506);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1508 = __c1503;
  char r1509 = std__ctype_char___widen_char__const(r1507, t1508);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1504 = r1509;
  char t1510 = __retval1504;
  return t1510;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1511) {
bb1512:
  struct std__basic_ostream_char__std__char_traits_char__* __os1513;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1514;
  __os1513 = v1511;
  struct std__basic_ostream_char__std__char_traits_char__* t1515 = __os1513;
  struct std__basic_ostream_char__std__char_traits_char__* t1516 = __os1513;
  void** v1517 = (void**)t1516;
  void* v1518 = *((void**)v1517);
  unsigned char* cast1519 = (unsigned char*)v1518;
  long c1520 = -24;
  unsigned char* ptr1521 = &(cast1519)[c1520];
  long* cast1522 = (long*)ptr1521;
  long t1523 = *cast1522;
  unsigned char* cast1524 = (unsigned char*)t1516;
  unsigned char* ptr1525 = &(cast1524)[t1523];
  struct std__basic_ostream_char__std__char_traits_char__* cast1526 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1525;
  struct std__basic_ios_char__std__char_traits_char__* cast1527 = (struct std__basic_ios_char__std__char_traits_char__*)cast1526;
  char c1528 = 10;
  char r1529 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1527, c1528);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1530 = std__ostream__put(t1515, r1529);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1531 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1530);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1514 = r1531;
  struct std__basic_ostream_char__std__char_traits_char__* t1532 = __retval1514;
  return t1532;
}

// function: _ZNSt5dequeIdSaIdEED2Ev
void std__deque_double__std__allocator_double______deque(struct std__deque_double__std__allocator_double__* v1533) {
bb1534:
  struct std__deque_double__std__allocator_double__* this1535;
  struct std___Deque_iterator_double__double____double___ agg_tmp01536;
  struct std___Deque_iterator_double__double____double___ agg_tmp11537;
  this1535 = v1533;
  struct std__deque_double__std__allocator_double__* t1538 = this1535;
    struct std___Deque_iterator_double__double____double___ r1539 = std__deque_double__std__allocator_double_____begin(t1538);
    agg_tmp01536 = r1539;
    struct std___Deque_iterator_double__double____double___ r1540 = std__deque_double__std__allocator_double_____end(t1538);
    agg_tmp11537 = r1540;
    struct std___Deque_base_double__std__allocator_double__* base1541 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1538 + 0);
    struct std__allocator_double_* r1542 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base1541);
    struct std___Deque_iterator_double__double____double___ t1543 = agg_tmp01536;
    struct std___Deque_iterator_double__double____double___ t1544 = agg_tmp11537;
    std__deque_double__std__allocator_double______M_destroy_data(t1538, t1543, t1544, r1542);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_double__std__allocator_double__* base1545 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1538 + 0);
        std___Deque_base_double__std__allocator_double_______Deque_base(base1545);
      }
      return;
    }
  {
    struct std___Deque_base_double__std__allocator_double__* base1546 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t1538 + 0);
    std___Deque_base_double__std__allocator_double_______Deque_base(base1546);
  }
  return;
}

// function: main
int main() {
bb1547:
  int __retval1548;
  struct std__deque_double__std__allocator_double__ values1549;
  struct std__ostream_iterator_double__char__std__char_traits_char__ output1550;
  double ref_tmp01551;
  double ref_tmp11552;
  double ref_tmp21553;
  struct std___Deque_iterator_double__double____double___ agg_tmp01554;
  struct std___Deque_iterator_double__double____double___ agg_tmp11555;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp21556;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp31557;
  struct std___Deque_iterator_double__double____double___ agg_tmp41558;
  struct std___Deque_iterator_double__double____double___ agg_tmp51559;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp61560;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp71561;
  int c1562 = 0;
  __retval1548 = c1562;
  std__deque_double__std__allocator_double_____deque(&values1549);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    char* cast1563 = (char*)&(_str);
    std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator_2(&output1550, &_ZSt4cout, cast1563);
    double c1564 = 0x1.199999999999ap1;
    ref_tmp01551 = c1564;
    std__deque_double__std__allocator_double_____push_front(&values1549, &ref_tmp01551);
    if (__cir_exc_active) {
      {
        std__deque_double__std__allocator_double______deque(&values1549);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    double c1565 = 0x1.cp1;
    ref_tmp11552 = c1565;
    std__deque_double__std__allocator_double_____push_front(&values1549, &ref_tmp11552);
    if (__cir_exc_active) {
      {
        std__deque_double__std__allocator_double______deque(&values1549);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    double c1566 = 0x1.199999999999ap0;
    ref_tmp21553 = c1566;
    std__deque_double__std__allocator_double_____push_back(&values1549, &ref_tmp21553);
    if (__cir_exc_active) {
      {
        std__deque_double__std__allocator_double______deque(&values1549);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1567 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r1568 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1567);
    if (__cir_exc_active) {
      {
        std__deque_double__std__allocator_double______deque(&values1549);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      int i1569;
      int c1570 = 0;
      i1569 = c1570;
      while (1) {
        int t1572 = i1569;
        unsigned long cast1573 = (unsigned long)t1572;
        unsigned long r1574 = std__deque_double__std__allocator_double_____size___const(&values1549);
        _Bool c1575 = ((cast1573 < r1574)) ? 1 : 0;
        if (!c1575) break;
        int t1576 = i1569;
        unsigned long cast1577 = (unsigned long)t1576;
        double* r1578 = std__deque_double__std__allocator_double_____operator__(&values1549, cast1577);
        double t1579 = *r1578;
        struct std__basic_ostream_char__std__char_traits_char__* r1580 = std__ostream__operator__(&_ZSt4cout, t1579);
        if (__cir_exc_active) {
          {
            std__deque_double__std__allocator_double______deque(&values1549);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char c1581 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r1582 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1580, c1581);
        if (__cir_exc_active) {
          {
            std__deque_double__std__allocator_double______deque(&values1549);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1571: ;
        int t1583 = i1569;
        int u1584 = t1583 + 1;
        i1569 = u1584;
      }
    std__deque_double__std__allocator_double_____pop_front(&values1549);
    char* cast1585 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1586 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1585);
    if (__cir_exc_active) {
      {
        std__deque_double__std__allocator_double______deque(&values1549);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std___Deque_iterator_double__double____double___ r1587 = std__deque_double__std__allocator_double_____begin(&values1549);
    agg_tmp01554 = r1587;
    struct std___Deque_iterator_double__double____double___ r1588 = std__deque_double__std__allocator_double_____end(&values1549);
    agg_tmp11555 = r1588;
    std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp21556, &output1550);
    struct std___Deque_iterator_double__double____double___ t1589 = agg_tmp01554;
    struct std___Deque_iterator_double__double____double___ t1590 = agg_tmp11555;
    struct std__ostream_iterator_double__char__std__char_traits_char__ t1591 = agg_tmp21556;
    struct std__ostream_iterator_double__char__std__char_traits_char__ r1592 = std__ostream_iterator_double__char__std__char_traits_char____std__copy_std___Deque_iterator_double__double___double____std__ostream_iterator_double__char__std__char_traits_char_____(t1589, t1590, t1591);
    if (__cir_exc_active) {
      {
        std__deque_double__std__allocator_double______deque(&values1549);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp31557 = r1592;
    double c1593 = 0x1.599999999999ap2;
    unsigned long c1594 = 1;
    double* r1595 = std__deque_double__std__allocator_double_____operator__(&values1549, c1594);
    *r1595 = c1593;
    char* cast1596 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1597 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1596);
    if (__cir_exc_active) {
      {
        std__deque_double__std__allocator_double______deque(&values1549);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std___Deque_iterator_double__double____double___ r1598 = std__deque_double__std__allocator_double_____begin(&values1549);
    agg_tmp41558 = r1598;
    struct std___Deque_iterator_double__double____double___ r1599 = std__deque_double__std__allocator_double_____end(&values1549);
    agg_tmp51559 = r1599;
    std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp61560, &output1550);
    struct std___Deque_iterator_double__double____double___ t1600 = agg_tmp41558;
    struct std___Deque_iterator_double__double____double___ t1601 = agg_tmp51559;
    struct std__ostream_iterator_double__char__std__char_traits_char__ t1602 = agg_tmp61560;
    struct std__ostream_iterator_double__char__std__char_traits_char__ r1603 = std__ostream_iterator_double__char__std__char_traits_char____std__copy_std___Deque_iterator_double__double___double____std__ostream_iterator_double__char__std__char_traits_char_____(t1600, t1601, t1602);
    if (__cir_exc_active) {
      {
        std__deque_double__std__allocator_double______deque(&values1549);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp71561 = r1603;
    struct std__basic_ostream_char__std__char_traits_char__* r1604 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_double__std__allocator_double______deque(&values1549);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1605 = 0;
    __retval1548 = c1605;
    int t1606 = __retval1548;
    int ret_val1607 = t1606;
    {
      std__deque_double__std__allocator_double______deque(&values1549);
    }
    return ret_val1607;
  int t1608 = __retval1548;
  return t1608;
}

// function: _ZNSt11_Deque_baseIdSaIdEE11_Deque_implC2Ev
void std___Deque_base_double__std__allocator_double______Deque_impl___Deque_impl(struct std___Deque_base_double__std__allocator_double_____Deque_impl* v1609) {
bb1610:
  struct std___Deque_base_double__std__allocator_double_____Deque_impl* this1611;
  this1611 = v1609;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl* t1612 = this1611;
  struct std__allocator_double_* base1613 = (struct std__allocator_double_*)((char *)t1612 + 0);
  std__allocator_double___allocator(base1613);
    struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base1614 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)t1612 + 0);
    std___Deque_base_double__std__allocator_double______Deque_impl_data___Deque_impl_data(base1614);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1615) {
bb1616:
  unsigned long __size1617;
  unsigned long __retval1618;
  __size1617 = v1615;
  unsigned long t1619 = __size1617;
  unsigned long c1620 = 512;
  _Bool c1621 = ((t1619 < c1620)) ? 1 : 0;
  unsigned long ternary1622;
  if (c1621) {
    unsigned long c1623 = 512;
    unsigned long t1624 = __size1617;
    unsigned long b1625 = c1623 / t1624;
    ternary1622 = (unsigned long)b1625;
  } else {
    unsigned long c1626 = 1;
    ternary1622 = (unsigned long)c1626;
  }
  __retval1618 = ternary1622;
  unsigned long t1627 = __retval1618;
  return t1627;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1628, unsigned long* v1629) {
bb1630:
  unsigned long* __a1631;
  unsigned long* __b1632;
  unsigned long* __retval1633;
  __a1631 = v1628;
  __b1632 = v1629;
    unsigned long* t1634 = __a1631;
    unsigned long t1635 = *t1634;
    unsigned long* t1636 = __b1632;
    unsigned long t1637 = *t1636;
    _Bool c1638 = ((t1635 < t1637)) ? 1 : 0;
    if (c1638) {
      unsigned long* t1639 = __b1632;
      __retval1633 = t1639;
      unsigned long* t1640 = __retval1633;
      return t1640;
    }
  unsigned long* t1641 = __a1631;
  __retval1633 = t1641;
  unsigned long* t1642 = __retval1633;
  return t1642;
}

// function: _ZNKSt11_Deque_baseIdSaIdEE19_M_get_Tp_allocatorEv
struct std__allocator_double_* std___Deque_base_double__std__allocator_double______M_get_Tp_allocator___const(struct std___Deque_base_double__std__allocator_double__* v1643) {
bb1644:
  struct std___Deque_base_double__std__allocator_double__* this1645;
  struct std__allocator_double_* __retval1646;
  this1645 = v1643;
  struct std___Deque_base_double__std__allocator_double__* t1647 = this1645;
  struct std__allocator_double_* base1648 = (struct std__allocator_double_*)((char *)&(t1647->_M_impl) + 0);
  __retval1646 = base1648;
  struct std__allocator_double_* t1649 = __retval1646;
  return t1649;
}

// function: _ZNSaIPdEC2IdEERKSaIT_E
void std__allocator_double____allocator_double_(struct std__allocator_double___* v1650, struct std__allocator_double_* v1651) {
bb1652:
  struct std__allocator_double___* this1653;
  struct std__allocator_double_* unnamed1654;
  this1653 = v1650;
  unnamed1654 = v1651;
  struct std__allocator_double___* t1655 = this1653;
  struct std____new_allocator_double___* base1656 = (struct std____new_allocator_double___*)((char *)t1655 + 0);
  std____new_allocator_double______new_allocator(base1656);
  return;
}

// function: _ZNKSt11_Deque_baseIdSaIdEE20_M_get_map_allocatorEv
struct std__allocator_double___ std___Deque_base_double__std__allocator_double______M_get_map_allocator___const(struct std___Deque_base_double__std__allocator_double__* v1657) {
bb1658:
  struct std___Deque_base_double__std__allocator_double__* this1659;
  struct std__allocator_double___ __retval1660;
  this1659 = v1657;
  struct std___Deque_base_double__std__allocator_double__* t1661 = this1659;
  struct std__allocator_double_* r1662 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator___const(t1661);
  std__allocator_double____allocator_double_(&__retval1660, r1662);
  struct std__allocator_double___ t1663 = __retval1660;
  return t1663;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1664:
  _Bool __retval1665;
    _Bool c1666 = 0;
    __retval1665 = c1666;
    _Bool t1667 = __retval1665;
    return t1667;
  abort();
}

// function: _ZNKSt15__new_allocatorIPdE11_M_max_sizeEv
unsigned long std____new_allocator_double_____M_max_size___const(struct std____new_allocator_double___* v1668) {
bb1669:
  struct std____new_allocator_double___* this1670;
  unsigned long __retval1671;
  this1670 = v1668;
  struct std____new_allocator_double___* t1672 = this1670;
  unsigned long c1673 = 9223372036854775807;
  unsigned long c1674 = 8;
  unsigned long b1675 = c1673 / c1674;
  __retval1671 = b1675;
  unsigned long t1676 = __retval1671;
  return t1676;
}

// function: _ZNSt15__new_allocatorIPdE8allocateEmPKv
double** std____new_allocator_double____allocate(struct std____new_allocator_double___* v1677, unsigned long v1678, void* v1679) {
bb1680:
  struct std____new_allocator_double___* this1681;
  unsigned long __n1682;
  void* unnamed1683;
  double** __retval1684;
  this1681 = v1677;
  __n1682 = v1678;
  unnamed1683 = v1679;
  struct std____new_allocator_double___* t1685 = this1681;
    unsigned long t1686 = __n1682;
    unsigned long r1687 = std____new_allocator_double_____M_max_size___const(t1685);
    _Bool c1688 = ((t1686 > r1687)) ? 1 : 0;
    if (c1688) {
        unsigned long t1689 = __n1682;
        unsigned long c1690 = -1;
        unsigned long c1691 = 8;
        unsigned long b1692 = c1690 / c1691;
        _Bool c1693 = ((t1689 > b1692)) ? 1 : 0;
        if (c1693) {
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
    unsigned long c1694 = 8;
    unsigned long c1695 = 16;
    _Bool c1696 = ((c1694 > c1695)) ? 1 : 0;
    if (c1696) {
      unsigned long __al1697;
      unsigned long c1698 = 8;
      __al1697 = c1698;
      unsigned long t1699 = __n1682;
      unsigned long c1700 = 8;
      unsigned long b1701 = t1699 * c1700;
      unsigned long t1702 = __al1697;
      void* r1703 = operator_new_2(b1701, t1702);
      if (__cir_exc_active) {
        double** __cir_eh_ret = (double**)0;
        return __cir_eh_ret;
      }
      double** cast1704 = (double**)r1703;
      __retval1684 = cast1704;
      double** t1705 = __retval1684;
      return t1705;
    }
  unsigned long t1706 = __n1682;
  unsigned long c1707 = 8;
  unsigned long b1708 = t1706 * c1707;
  void* r1709 = operator_new(b1708);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  double** cast1710 = (double**)r1709;
  __retval1684 = cast1710;
  double** t1711 = __retval1684;
  return t1711;
}

// function: _ZNSaIPdE8allocateEm
double** std__allocator_double____allocate(struct std__allocator_double___* v1712, unsigned long v1713) {
bb1714:
  struct std__allocator_double___* this1715;
  unsigned long __n1716;
  double** __retval1717;
  this1715 = v1712;
  __n1716 = v1713;
  struct std__allocator_double___* t1718 = this1715;
    _Bool r1719 = std____is_constant_evaluated();
    if (r1719) {
        unsigned long t1720 = __n1716;
        unsigned long c1721 = 8;
        unsigned long ovr1722;
        _Bool ovf1723 = __builtin_mul_overflow(t1720, c1721, &ovr1722);
        __n1716 = ovr1722;
        if (ovf1723) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            double** __cir_eh_ret = (double**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1724 = __n1716;
      void* r1725 = operator_new(t1724);
      if (__cir_exc_active) {
        double** __cir_eh_ret = (double**)0;
        return __cir_eh_ret;
      }
      double** cast1726 = (double**)r1725;
      __retval1717 = cast1726;
      double** t1727 = __retval1717;
      return t1727;
    }
  struct std____new_allocator_double___* base1728 = (struct std____new_allocator_double___*)((char *)t1718 + 0);
  unsigned long t1729 = __n1716;
  void* c1730 = ((void*)0);
  double** r1731 = std____new_allocator_double____allocate(base1728, t1729, c1730);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval1717 = r1731;
  double** t1732 = __retval1717;
  return t1732;
}

// function: _ZNSt16allocator_traitsISaIPdEE8allocateERS1_m
double** std__allocator_traits_std__allocator_double______allocate(struct std__allocator_double___* v1733, unsigned long v1734) {
bb1735:
  struct std__allocator_double___* __a1736;
  unsigned long __n1737;
  double** __retval1738;
  __a1736 = v1733;
  __n1737 = v1734;
  struct std__allocator_double___* t1739 = __a1736;
  unsigned long t1740 = __n1737;
  double** r1741 = std__allocator_double____allocate(t1739, t1740);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval1738 = r1741;
  double** t1742 = __retval1738;
  return t1742;
}

// function: _ZNSt11_Deque_baseIdSaIdEE15_M_allocate_mapEm
double** std___Deque_base_double__std__allocator_double______M_allocate_map(struct std___Deque_base_double__std__allocator_double__* v1743, unsigned long v1744) {
bb1745:
  struct std___Deque_base_double__std__allocator_double__* this1746;
  unsigned long __n1747;
  double** __retval1748;
  struct std__allocator_double___ __map_alloc1749;
  this1746 = v1743;
  __n1747 = v1744;
  struct std___Deque_base_double__std__allocator_double__* t1750 = this1746;
  struct std__allocator_double___ r1751 = std___Deque_base_double__std__allocator_double______M_get_map_allocator___const(t1750);
  __map_alloc1749 = r1751;
  unsigned long t1752 = __n1747;
  double** r1753 = std__allocator_traits_std__allocator_double______allocate(&__map_alloc1749, t1752);
  if (__cir_exc_active) {
    double** __cir_eh_ret = (double**)0;
    return __cir_eh_ret;
  }
  __retval1748 = r1753;
  double** t1754 = __retval1748;
  return t1754;
}

// function: _ZNKSt15__new_allocatorIdE11_M_max_sizeEv
unsigned long std____new_allocator_double____M_max_size___const(struct std____new_allocator_double_* v1755) {
bb1756:
  struct std____new_allocator_double_* this1757;
  unsigned long __retval1758;
  this1757 = v1755;
  struct std____new_allocator_double_* t1759 = this1757;
  unsigned long c1760 = 9223372036854775807;
  unsigned long c1761 = 8;
  unsigned long b1762 = c1760 / c1761;
  __retval1758 = b1762;
  unsigned long t1763 = __retval1758;
  return t1763;
}

// function: _ZNSt15__new_allocatorIdE8allocateEmPKv
double* std____new_allocator_double___allocate(struct std____new_allocator_double_* v1764, unsigned long v1765, void* v1766) {
bb1767:
  struct std____new_allocator_double_* this1768;
  unsigned long __n1769;
  void* unnamed1770;
  double* __retval1771;
  this1768 = v1764;
  __n1769 = v1765;
  unnamed1770 = v1766;
  struct std____new_allocator_double_* t1772 = this1768;
    unsigned long t1773 = __n1769;
    unsigned long r1774 = std____new_allocator_double____M_max_size___const(t1772);
    _Bool c1775 = ((t1773 > r1774)) ? 1 : 0;
    if (c1775) {
        unsigned long t1776 = __n1769;
        unsigned long c1777 = -1;
        unsigned long c1778 = 8;
        unsigned long b1779 = c1777 / c1778;
        _Bool c1780 = ((t1776 > b1779)) ? 1 : 0;
        if (c1780) {
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
    unsigned long c1781 = 8;
    unsigned long c1782 = 16;
    _Bool c1783 = ((c1781 > c1782)) ? 1 : 0;
    if (c1783) {
      unsigned long __al1784;
      unsigned long c1785 = 8;
      __al1784 = c1785;
      unsigned long t1786 = __n1769;
      unsigned long c1787 = 8;
      unsigned long b1788 = t1786 * c1787;
      unsigned long t1789 = __al1784;
      void* r1790 = operator_new_2(b1788, t1789);
      if (__cir_exc_active) {
        double* __cir_eh_ret = (double*)0;
        return __cir_eh_ret;
      }
      double* cast1791 = (double*)r1790;
      __retval1771 = cast1791;
      double* t1792 = __retval1771;
      return t1792;
    }
  unsigned long t1793 = __n1769;
  unsigned long c1794 = 8;
  unsigned long b1795 = t1793 * c1794;
  void* r1796 = operator_new(b1795);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  double* cast1797 = (double*)r1796;
  __retval1771 = cast1797;
  double* t1798 = __retval1771;
  return t1798;
}

// function: _ZNSaIdE8allocateEm
double* std__allocator_double___allocate(struct std__allocator_double_* v1799, unsigned long v1800) {
bb1801:
  struct std__allocator_double_* this1802;
  unsigned long __n1803;
  double* __retval1804;
  this1802 = v1799;
  __n1803 = v1800;
  struct std__allocator_double_* t1805 = this1802;
    _Bool r1806 = std____is_constant_evaluated();
    if (r1806) {
        unsigned long t1807 = __n1803;
        unsigned long c1808 = 8;
        unsigned long ovr1809;
        _Bool ovf1810 = __builtin_mul_overflow(t1807, c1808, &ovr1809);
        __n1803 = ovr1809;
        if (ovf1810) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            double* __cir_eh_ret = (double*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1811 = __n1803;
      void* r1812 = operator_new(t1811);
      if (__cir_exc_active) {
        double* __cir_eh_ret = (double*)0;
        return __cir_eh_ret;
      }
      double* cast1813 = (double*)r1812;
      __retval1804 = cast1813;
      double* t1814 = __retval1804;
      return t1814;
    }
  struct std____new_allocator_double_* base1815 = (struct std____new_allocator_double_*)((char *)t1805 + 0);
  unsigned long t1816 = __n1803;
  void* c1817 = ((void*)0);
  double* r1818 = std____new_allocator_double___allocate(base1815, t1816, c1817);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval1804 = r1818;
  double* t1819 = __retval1804;
  return t1819;
}

// function: _ZNSt16allocator_traitsISaIdEE8allocateERS0_m
double* std__allocator_traits_std__allocator_double_____allocate(struct std__allocator_double_* v1820, unsigned long v1821) {
bb1822:
  struct std__allocator_double_* __a1823;
  unsigned long __n1824;
  double* __retval1825;
  __a1823 = v1820;
  __n1824 = v1821;
  struct std__allocator_double_* t1826 = __a1823;
  unsigned long t1827 = __n1824;
  double* r1828 = std__allocator_double___allocate(t1826, t1827);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval1825 = r1828;
  double* t1829 = __retval1825;
  return t1829;
}

// function: _ZNSt11_Deque_baseIdSaIdEE16_M_allocate_nodeEv
double* std___Deque_base_double__std__allocator_double______M_allocate_node(struct std___Deque_base_double__std__allocator_double__* v1830) {
bb1831:
  struct std___Deque_base_double__std__allocator_double__* this1832;
  double* __retval1833;
  this1832 = v1830;
  struct std___Deque_base_double__std__allocator_double__* t1834 = this1832;
  struct std__allocator_double_* base1835 = (struct std__allocator_double_*)((char *)&(t1834->_M_impl) + 0);
  unsigned long c1836 = 8;
  unsigned long r1837 = std____deque_buf_size(c1836);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  double* r1838 = std__allocator_traits_std__allocator_double_____allocate(base1835, r1837);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval1833 = r1838;
  double* t1839 = __retval1833;
  return t1839;
}

// function: _ZNSt15__new_allocatorIdE10deallocateEPdm
void std____new_allocator_double___deallocate(struct std____new_allocator_double_* v1840, double* v1841, unsigned long v1842) {
bb1843:
  struct std____new_allocator_double_* this1844;
  double* __p1845;
  unsigned long __n1846;
  this1844 = v1840;
  __p1845 = v1841;
  __n1846 = v1842;
  struct std____new_allocator_double_* t1847 = this1844;
    unsigned long c1848 = 8;
    unsigned long c1849 = 16;
    _Bool c1850 = ((c1848 > c1849)) ? 1 : 0;
    if (c1850) {
      double* t1851 = __p1845;
      void* cast1852 = (void*)t1851;
      unsigned long t1853 = __n1846;
      unsigned long c1854 = 8;
      unsigned long b1855 = t1853 * c1854;
      unsigned long c1856 = 8;
      operator_delete_3(cast1852, b1855, c1856);
      return;
    }
  double* t1857 = __p1845;
  void* cast1858 = (void*)t1857;
  unsigned long t1859 = __n1846;
  unsigned long c1860 = 8;
  unsigned long b1861 = t1859 * c1860;
  operator_delete_2(cast1858, b1861);
  return;
}

// function: _ZNSaIdE10deallocateEPdm
void std__allocator_double___deallocate(struct std__allocator_double_* v1862, double* v1863, unsigned long v1864) {
bb1865:
  struct std__allocator_double_* this1866;
  double* __p1867;
  unsigned long __n1868;
  this1866 = v1862;
  __p1867 = v1863;
  __n1868 = v1864;
  struct std__allocator_double_* t1869 = this1866;
    _Bool r1870 = std____is_constant_evaluated();
    if (r1870) {
      double* t1871 = __p1867;
      void* cast1872 = (void*)t1871;
      operator_delete(cast1872);
      return;
    }
  struct std____new_allocator_double_* base1873 = (struct std____new_allocator_double_*)((char *)t1869 + 0);
  double* t1874 = __p1867;
  unsigned long t1875 = __n1868;
  std____new_allocator_double___deallocate(base1873, t1874, t1875);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIdEE10deallocateERS0_Pdm
void std__allocator_traits_std__allocator_double_____deallocate(struct std__allocator_double_* v1876, double* v1877, unsigned long v1878) {
bb1879:
  struct std__allocator_double_* __a1880;
  double* __p1881;
  unsigned long __n1882;
  __a1880 = v1876;
  __p1881 = v1877;
  __n1882 = v1878;
  struct std__allocator_double_* t1883 = __a1880;
  double* t1884 = __p1881;
  unsigned long t1885 = __n1882;
  std__allocator_double___deallocate(t1883, t1884, t1885);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE18_M_deallocate_nodeEPd
void std___Deque_base_double__std__allocator_double______M_deallocate_node(struct std___Deque_base_double__std__allocator_double__* v1886, double* v1887) {
bb1888:
  struct std___Deque_base_double__std__allocator_double__* this1889;
  double* __p1890;
  this1889 = v1886;
  __p1890 = v1887;
  struct std___Deque_base_double__std__allocator_double__* t1891 = this1889;
  struct std__allocator_double_* base1892 = (struct std__allocator_double_*)((char *)&(t1891->_M_impl) + 0);
  double* t1893 = __p1890;
  unsigned long c1894 = 8;
  unsigned long r1895 = std____deque_buf_size(c1894);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_double_____deallocate(base1892, t1893, r1895);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE16_M_destroy_nodesEPPdS3_
void std___Deque_base_double__std__allocator_double______M_destroy_nodes(struct std___Deque_base_double__std__allocator_double__* v1896, double** v1897, double** v1898) {
bb1899:
  struct std___Deque_base_double__std__allocator_double__* this1900;
  double** __nstart1901;
  double** __nfinish1902;
  this1900 = v1896;
  __nstart1901 = v1897;
  __nfinish1902 = v1898;
  struct std___Deque_base_double__std__allocator_double__* t1903 = this1900;
    double** __n1904;
    double** t1905 = __nstart1901;
    __n1904 = t1905;
    while (1) {
      double** t1907 = __n1904;
      double** t1908 = __nfinish1902;
      _Bool c1909 = ((t1907 < t1908)) ? 1 : 0;
      if (!c1909) break;
      double** t1910 = __n1904;
      double* t1911 = *t1910;
      std___Deque_base_double__std__allocator_double______M_deallocate_node(t1903, t1911);
    for_step1906: ;
      double** t1912 = __n1904;
      int c1913 = 1;
      double** ptr1914 = &(t1912)[c1913];
      __n1904 = ptr1914;
    }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE15_M_create_nodesEPPdS3_
void std___Deque_base_double__std__allocator_double______M_create_nodes(struct std___Deque_base_double__std__allocator_double__* v1915, double** v1916, double** v1917) {
bb1918:
  struct std___Deque_base_double__std__allocator_double__* this1919;
  double** __nstart1920;
  double** __nfinish1921;
  double** __cur1922;
  this1919 = v1915;
  __nstart1920 = v1916;
  __nfinish1921 = v1917;
  struct std___Deque_base_double__std__allocator_double__* t1923 = this1919;
        double** t1925 = __nstart1920;
        __cur1922 = t1925;
        while (1) {
          double** t1927 = __cur1922;
          double** t1928 = __nfinish1921;
          _Bool c1929 = ((t1927 < t1928)) ? 1 : 0;
          if (!c1929) break;
          double* r1930 = std___Deque_base_double__std__allocator_double______M_allocate_node(t1923);
          if (__cir_exc_active) {
            goto cir_try_dispatch1924;
          }
          double** t1931 = __cur1922;
          *t1931 = r1930;
        for_step1926: ;
          double** t1932 = __cur1922;
          int c1933 = 1;
          double** ptr1934 = &(t1932)[c1933];
          __cur1922 = ptr1934;
        }
    cir_try_dispatch1924: ;
    if (__cir_exc_active) {
    {
      int ca_tok1935 = 0;
      void* ca_exn1936 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        double** t1937 = __nstart1920;
        double** t1938 = __cur1922;
        std___Deque_base_double__std__allocator_double______M_destroy_nodes(t1923, t1937, t1938);
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

// function: _ZNSt15__new_allocatorIPdE10deallocateEPS0_m
void std____new_allocator_double____deallocate(struct std____new_allocator_double___* v1939, double** v1940, unsigned long v1941) {
bb1942:
  struct std____new_allocator_double___* this1943;
  double** __p1944;
  unsigned long __n1945;
  this1943 = v1939;
  __p1944 = v1940;
  __n1945 = v1941;
  struct std____new_allocator_double___* t1946 = this1943;
    unsigned long c1947 = 8;
    unsigned long c1948 = 16;
    _Bool c1949 = ((c1947 > c1948)) ? 1 : 0;
    if (c1949) {
      double** t1950 = __p1944;
      void* cast1951 = (void*)t1950;
      unsigned long t1952 = __n1945;
      unsigned long c1953 = 8;
      unsigned long b1954 = t1952 * c1953;
      unsigned long c1955 = 8;
      operator_delete_3(cast1951, b1954, c1955);
      return;
    }
  double** t1956 = __p1944;
  void* cast1957 = (void*)t1956;
  unsigned long t1958 = __n1945;
  unsigned long c1959 = 8;
  unsigned long b1960 = t1958 * c1959;
  operator_delete_2(cast1957, b1960);
  return;
}

// function: _ZNSaIPdE10deallocateEPS_m
void std__allocator_double____deallocate(struct std__allocator_double___* v1961, double** v1962, unsigned long v1963) {
bb1964:
  struct std__allocator_double___* this1965;
  double** __p1966;
  unsigned long __n1967;
  this1965 = v1961;
  __p1966 = v1962;
  __n1967 = v1963;
  struct std__allocator_double___* t1968 = this1965;
    _Bool r1969 = std____is_constant_evaluated();
    if (r1969) {
      double** t1970 = __p1966;
      void* cast1971 = (void*)t1970;
      operator_delete(cast1971);
      return;
    }
  struct std____new_allocator_double___* base1972 = (struct std____new_allocator_double___*)((char *)t1968 + 0);
  double** t1973 = __p1966;
  unsigned long t1974 = __n1967;
  std____new_allocator_double____deallocate(base1972, t1973, t1974);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPdEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_double______deallocate(struct std__allocator_double___* v1975, double** v1976, unsigned long v1977) {
bb1978:
  struct std__allocator_double___* __a1979;
  double** __p1980;
  unsigned long __n1981;
  __a1979 = v1975;
  __p1980 = v1976;
  __n1981 = v1977;
  struct std__allocator_double___* t1982 = __a1979;
  double** t1983 = __p1980;
  unsigned long t1984 = __n1981;
  std__allocator_double____deallocate(t1982, t1983, t1984);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE17_M_deallocate_mapEPPdm
void std___Deque_base_double__std__allocator_double______M_deallocate_map(struct std___Deque_base_double__std__allocator_double__* v1985, double** v1986, unsigned long v1987) {
bb1988:
  struct std___Deque_base_double__std__allocator_double__* this1989;
  double** __p1990;
  unsigned long __n1991;
  struct std__allocator_double___ __map_alloc1992;
  this1989 = v1985;
  __p1990 = v1986;
  __n1991 = v1987;
  struct std___Deque_base_double__std__allocator_double__* t1993 = this1989;
  struct std__allocator_double___ r1994 = std___Deque_base_double__std__allocator_double______M_get_map_allocator___const(t1993);
  __map_alloc1992 = r1994;
  double** t1995 = __p1990;
  unsigned long t1996 = __n1991;
  std__allocator_traits_std__allocator_double______deallocate(&__map_alloc1992, t1995, t1996);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIdRdPdE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_double__double___double_____S_buffer_size() {
bb1997:
  unsigned long __retval1998;
  unsigned long c1999 = 8;
  unsigned long r2000 = std____deque_buf_size(c1999);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1998 = r2000;
  unsigned long t2001 = __retval1998;
  return t2001;
}

// function: _ZNSt15_Deque_iteratorIdRdPdE11_M_set_nodeEPS1_
void std___Deque_iterator_double__double___double_____M_set_node(struct std___Deque_iterator_double__double____double___* v2002, double** v2003) {
bb2004:
  struct std___Deque_iterator_double__double____double___* this2005;
  double** __new_node2006;
  this2005 = v2002;
  __new_node2006 = v2003;
  struct std___Deque_iterator_double__double____double___* t2007 = this2005;
  double** t2008 = __new_node2006;
  t2007->_M_node = t2008;
  double** t2009 = __new_node2006;
  double* t2010 = *t2009;
  t2007->_M_first = t2010;
  double* t2011 = t2007->_M_first;
  unsigned long r2012 = std___Deque_iterator_double__double___double_____S_buffer_size();
  long cast2013 = (long)r2012;
  double* ptr2014 = &(t2011)[cast2013];
  t2007->_M_last = ptr2014;
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE17_M_initialize_mapEm
void std___Deque_base_double__std__allocator_double______M_initialize_map(struct std___Deque_base_double__std__allocator_double__* v2015, unsigned long v2016) {
bb2017:
  struct std___Deque_base_double__std__allocator_double__* this2018;
  unsigned long __num_elements2019;
  unsigned long __num_nodes2020;
  unsigned long ref_tmp02021;
  unsigned long ref_tmp12022;
  double** __nstart2023;
  double** __nfinish2024;
  this2018 = v2015;
  __num_elements2019 = v2016;
  struct std___Deque_base_double__std__allocator_double__* t2025 = this2018;
  unsigned long t2026 = __num_elements2019;
  unsigned long c2027 = 8;
  unsigned long r2028 = std____deque_buf_size(c2027);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b2029 = t2026 / r2028;
  unsigned long c2030 = 1;
  unsigned long b2031 = b2029 + c2030;
  __num_nodes2020 = b2031;
  unsigned long c2032 = 8;
  ref_tmp02021 = c2032;
  unsigned long t2033 = __num_nodes2020;
  unsigned long c2034 = 2;
  unsigned long b2035 = t2033 + c2034;
  ref_tmp12022 = b2035;
  unsigned long* r2036 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp02021, &ref_tmp12022);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2037 = *r2036;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2038 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  base2038->_M_map_size = t2037;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2039 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  unsigned long t2040 = base2039->_M_map_size;
  double** r2041 = std___Deque_base_double__std__allocator_double______M_allocate_map(t2025, t2040);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2042 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  base2042->_M_map = r2041;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2043 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  double** t2044 = base2043->_M_map;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2045 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  unsigned long t2046 = base2045->_M_map_size;
  unsigned long t2047 = __num_nodes2020;
  unsigned long b2048 = t2046 - t2047;
  unsigned long c2049 = 2;
  unsigned long b2050 = b2048 / c2049;
  double** ptr2051 = &(t2044)[b2050];
  __nstart2023 = ptr2051;
  double** t2052 = __nstart2023;
  unsigned long t2053 = __num_nodes2020;
  double** ptr2054 = &(t2052)[t2053];
  __nfinish2024 = ptr2054;
      double** t2056 = __nstart2023;
      double** t2057 = __nfinish2024;
      std___Deque_base_double__std__allocator_double______M_create_nodes(t2025, t2056, t2057);
      if (__cir_exc_active) {
        goto cir_try_dispatch2055;
      }
    cir_try_dispatch2055: ;
    if (__cir_exc_active) {
    {
      int ca_tok2058 = 0;
      void* ca_exn2059 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2060 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
        double** t2061 = base2060->_M_map;
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2062 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
        unsigned long t2063 = base2062->_M_map_size;
        std___Deque_base_double__std__allocator_double______M_deallocate_map(t2025, t2061, t2063);
        double** c2064 = ((void*)0);
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2065 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
        base2065->_M_map = c2064;
        unsigned long c2066 = 0;
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2067 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
        base2067->_M_map_size = c2066;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2068 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  double** t2069 = __nstart2023;
  std___Deque_iterator_double__double___double_____M_set_node(&base2068->_M_start, t2069);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2070 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  double** t2071 = __nfinish2024;
  int c2072 = -1;
  double** ptr2073 = &(t2071)[c2072];
  std___Deque_iterator_double__double___double_____M_set_node(&base2070->_M_finish, ptr2073);
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2074 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  double* t2075 = base2074->_M_start._M_first;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2076 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  base2076->_M_start._M_cur = t2075;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2077 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  double* t2078 = base2077->_M_finish._M_first;
  unsigned long t2079 = __num_elements2019;
  unsigned long c2080 = 8;
  unsigned long r2081 = std____deque_buf_size(c2080);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b2082 = t2079 % r2081;
  double* ptr2083 = &(t2078)[b2082];
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2084 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2025->_M_impl) + 0);
  base2084->_M_finish._M_cur = ptr2083;
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE11_Deque_implD2Ev
void std___Deque_base_double__std__allocator_double______Deque_impl____Deque_impl(struct std___Deque_base_double__std__allocator_double_____Deque_impl* v2085) {
bb2086:
  struct std___Deque_base_double__std__allocator_double_____Deque_impl* this2087;
  this2087 = v2085;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl* t2088 = this2087;
  {
    struct std__allocator_double_* base2089 = (struct std__allocator_double_*)((char *)t2088 + 0);
    std__allocator_double____allocator(base2089);
  }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEEC2Ev
void std___Deque_base_double__std__allocator_double______Deque_base(struct std___Deque_base_double__std__allocator_double__* v2090) {
bb2091:
  struct std___Deque_base_double__std__allocator_double__* this2092;
  this2092 = v2090;
  struct std___Deque_base_double__std__allocator_double__* t2093 = this2092;
  std___Deque_base_double__std__allocator_double______Deque_impl___Deque_impl(&t2093->_M_impl);
    unsigned long c2094 = 0;
    std___Deque_base_double__std__allocator_double______M_initialize_map(t2093, c2094);
    if (__cir_exc_active) {
      {
        std___Deque_base_double__std__allocator_double______Deque_impl____Deque_impl(&t2093->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEED2Ev
void std___Deque_base_double__std__allocator_double_______Deque_base(struct std___Deque_base_double__std__allocator_double__* v2095) {
bb2096:
  struct std___Deque_base_double__std__allocator_double__* this2097;
  this2097 = v2095;
  struct std___Deque_base_double__std__allocator_double__* t2098 = this2097;
      struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2099 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2098->_M_impl) + 0);
      double** t2100 = base2099->_M_map;
      _Bool cast2101 = (_Bool)t2100;
      if (cast2101) {
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2102 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2098->_M_impl) + 0);
        double** t2103 = base2102->_M_start._M_node;
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2104 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2098->_M_impl) + 0);
        double** t2105 = base2104->_M_finish._M_node;
        int c2106 = 1;
        double** ptr2107 = &(t2105)[c2106];
        std___Deque_base_double__std__allocator_double______M_destroy_nodes(t2098, t2103, ptr2107);
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2108 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2098->_M_impl) + 0);
        double** t2109 = base2108->_M_map;
        struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* base2110 = (struct std___Deque_base_double__std__allocator_double_____Deque_impl_data*)((char *)&(t2098->_M_impl) + 0);
        unsigned long t2111 = base2110->_M_map_size;
        std___Deque_base_double__std__allocator_double______M_deallocate_map(t2098, t2109, t2111);
      }
  {
    std___Deque_base_double__std__allocator_double______Deque_impl____Deque_impl(&t2098->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIdEC2Ev
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* v2112) {
bb2113:
  struct std____new_allocator_double_* this2114;
  this2114 = v2112;
  struct std____new_allocator_double_* t2115 = this2114;
  return;
}

// function: _ZNSaIdEC2Ev
void std__allocator_double___allocator(struct std__allocator_double_* v2116) {
bb2117:
  struct std__allocator_double_* this2118;
  this2118 = v2116;
  struct std__allocator_double_* t2119 = this2118;
  struct std____new_allocator_double_* base2120 = (struct std____new_allocator_double_*)((char *)t2119 + 0);
  std____new_allocator_double_____new_allocator(base2120);
  return;
}

// function: _ZNSt15_Deque_iteratorIdRdPdEC2Ev
void std___Deque_iterator_double__double___double_____Deque_iterator_2(struct std___Deque_iterator_double__double____double___* v2121) {
bb2122:
  struct std___Deque_iterator_double__double____double___* this2123;
  this2123 = v2121;
  struct std___Deque_iterator_double__double____double___* t2124 = this2123;
  double* c2125 = ((void*)0);
  t2124->_M_cur = c2125;
  double* c2126 = ((void*)0);
  t2124->_M_first = c2126;
  double* c2127 = ((void*)0);
  t2124->_M_last = c2127;
  double** c2128 = ((void*)0);
  t2124->_M_node = c2128;
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE16_Deque_impl_dataC2Ev
void std___Deque_base_double__std__allocator_double______Deque_impl_data___Deque_impl_data(struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* v2129) {
bb2130:
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* this2131;
  this2131 = v2129;
  struct std___Deque_base_double__std__allocator_double_____Deque_impl_data* t2132 = this2131;
  double** c2133 = ((void*)0);
  t2132->_M_map = c2133;
  unsigned long c2134 = 0;
  t2132->_M_map_size = c2134;
  std___Deque_iterator_double__double___double_____Deque_iterator_2(&t2132->_M_start);
  std___Deque_iterator_double__double___double_____Deque_iterator_2(&t2132->_M_finish);
  return;
}

// function: _ZNSaIdED2Ev
void std__allocator_double____allocator(struct std__allocator_double_* v2135) {
bb2136:
  struct std__allocator_double_* this2137;
  this2137 = v2135;
  struct std__allocator_double_* t2138 = this2137;
  return;
}

// function: _ZNSt15__new_allocatorIPdEC2Ev
void std____new_allocator_double______new_allocator(struct std____new_allocator_double___* v2139) {
bb2140:
  struct std____new_allocator_double___* this2141;
  this2141 = v2139;
  struct std____new_allocator_double___* t2142 = this2141;
  return;
}

// function: _ZSt10destroy_atIdEvPT_
void void_std__destroy_at_double_(double* v2143) {
bb2144:
  double* __location2145;
  __location2145 = v2143;
  return;
}

// function: _ZSt8_DestroyIPdEvT_S1_
void void_std___Destroy_double__(double* v2146, double* v2147) {
bb2148:
  double* __first2149;
  double* __last2150;
  __first2149 = v2146;
  __last2150 = v2147;
      _Bool r2151 = std____is_constant_evaluated();
      if (r2151) {
          while (1) {
            double* t2153 = __first2149;
            double* t2154 = __last2150;
            _Bool c2155 = ((t2153 != t2154)) ? 1 : 0;
            if (!c2155) break;
            double* t2156 = __first2149;
            void_std__destroy_at_double_(t2156);
            if (__cir_exc_active) {
              return;
            }
          for_step2152: ;
            double* t2157 = __first2149;
            int c2158 = 1;
            double* ptr2159 = &(t2157)[c2158];
            __first2149 = ptr2159;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPddEvT_S1_RSaIT0_E
void void_std___Destroy_double___double_(double* v2160, double* v2161, struct std__allocator_double_* v2162) {
bb2163:
  double* __first2164;
  double* __last2165;
  struct std__allocator_double_* unnamed2166;
  __first2164 = v2160;
  __last2165 = v2161;
  unnamed2166 = v2162;
  double* t2167 = __first2164;
  double* t2168 = __last2165;
  void_std___Destroy_double__(t2167, t2168);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIdSaIdEE14_S_buffer_sizeEv
unsigned long std__deque_double__std__allocator_double______S_buffer_size() {
bb2169:
  unsigned long __retval2170;
  unsigned long c2171 = 8;
  unsigned long r2172 = std____deque_buf_size(c2171);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval2170 = r2172;
  unsigned long t2173 = __retval2170;
  return t2173;
}

// function: _ZNSt5dequeIdSaIdEE19_M_destroy_data_auxESt15_Deque_iteratorIdRdPdES5_
void std__deque_double__std__allocator_double______M_destroy_data_aux(struct std__deque_double__std__allocator_double__* v2174, struct std___Deque_iterator_double__double____double___ v2175, struct std___Deque_iterator_double__double____double___ v2176) {
bb2177:
  struct std__deque_double__std__allocator_double__* this2178;
  struct std___Deque_iterator_double__double____double___ __first2179;
  struct std___Deque_iterator_double__double____double___ __last2180;
  this2178 = v2174;
  __first2179 = v2175;
  __last2180 = v2176;
  struct std__deque_double__std__allocator_double__* t2181 = this2178;
    double** __node2182;
    double** t2183 = __first2179._M_node;
    int c2184 = 1;
    double** ptr2185 = &(t2183)[c2184];
    __node2182 = ptr2185;
    while (1) {
      double** t2187 = __node2182;
      double** t2188 = __last2180._M_node;
      _Bool c2189 = ((t2187 < t2188)) ? 1 : 0;
      if (!c2189) break;
      double** t2190 = __node2182;
      double* t2191 = *t2190;
      double** t2192 = __node2182;
      double* t2193 = *t2192;
      unsigned long r2194 = std__deque_double__std__allocator_double______S_buffer_size();
      double* ptr2195 = &(t2193)[r2194];
      struct std___Deque_base_double__std__allocator_double__* base2196 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t2181 + 0);
      struct std__allocator_double_* r2197 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base2196);
      void_std___Destroy_double___double_(t2191, ptr2195, r2197);
      if (__cir_exc_active) {
        return;
      }
    for_step2186: ;
      double** t2198 = __node2182;
      int c2199 = 1;
      double** ptr2200 = &(t2198)[c2199];
      __node2182 = ptr2200;
    }
    double** t2201 = __first2179._M_node;
    double** t2202 = __last2180._M_node;
    _Bool c2203 = ((t2201 != t2202)) ? 1 : 0;
    if (c2203) {
      double* t2204 = __first2179._M_cur;
      double* t2205 = __first2179._M_last;
      struct std___Deque_base_double__std__allocator_double__* base2206 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t2181 + 0);
      struct std__allocator_double_* r2207 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base2206);
      void_std___Destroy_double___double_(t2204, t2205, r2207);
      if (__cir_exc_active) {
        return;
      }
      double* t2208 = __last2180._M_first;
      double* t2209 = __last2180._M_cur;
      struct std___Deque_base_double__std__allocator_double__* base2210 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t2181 + 0);
      struct std__allocator_double_* r2211 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base2210);
      void_std___Destroy_double___double_(t2208, t2209, r2211);
      if (__cir_exc_active) {
        return;
      }
    } else {
      double* t2212 = __first2179._M_cur;
      double* t2213 = __last2180._M_cur;
      struct std___Deque_base_double__std__allocator_double__* base2214 = (struct std___Deque_base_double__std__allocator_double__*)((char *)t2181 + 0);
      struct std__allocator_double_* r2215 = std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(base2214);
      void_std___Destroy_double___double_(t2212, t2213, r2215);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIdSaIdEE15_M_destroy_dataESt15_Deque_iteratorIdRdPdES5_RKS0_
void std__deque_double__std__allocator_double______M_destroy_data(struct std__deque_double__std__allocator_double__* v2216, struct std___Deque_iterator_double__double____double___ v2217, struct std___Deque_iterator_double__double____double___ v2218, struct std__allocator_double_* v2219) {
bb2220:
  struct std__deque_double__std__allocator_double__* this2221;
  struct std___Deque_iterator_double__double____double___ __first2222;
  struct std___Deque_iterator_double__double____double___ __last2223;
  struct std__allocator_double_* unnamed2224;
  this2221 = v2216;
  __first2222 = v2217;
  __last2223 = v2218;
  unnamed2224 = v2219;
  struct std__deque_double__std__allocator_double__* t2225 = this2221;
    _Bool c2226 = 0;
    if (c2226) {
      struct std___Deque_iterator_double__double____double___ agg_tmp02227;
      struct std___Deque_iterator_double__double____double___ agg_tmp12228;
      std___Deque_iterator_double__double___double_____Deque_iterator(&agg_tmp02227, &__first2222);
      std___Deque_iterator_double__double___double_____Deque_iterator(&agg_tmp12228, &__last2223);
      struct std___Deque_iterator_double__double____double___ t2229 = agg_tmp02227;
      struct std___Deque_iterator_double__double____double___ t2230 = agg_tmp12228;
      std__deque_double__std__allocator_double______M_destroy_data_aux(t2225, t2229, t2230);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt11_Deque_baseIdSaIdEE19_M_get_Tp_allocatorEv
struct std__allocator_double_* std___Deque_base_double__std__allocator_double______M_get_Tp_allocator(struct std___Deque_base_double__std__allocator_double__* v2231) {
bb2232:
  struct std___Deque_base_double__std__allocator_double__* this2233;
  struct std__allocator_double_* __retval2234;
  this2233 = v2231;
  struct std___Deque_base_double__std__allocator_double__* t2235 = this2233;
  struct std__allocator_double_* base2236 = (struct std__allocator_double_*)((char *)&(t2235->_M_impl) + 0);
  __retval2234 = base2236;
  struct std__allocator_double_* t2237 = __retval2234;
  return t2237;
}

