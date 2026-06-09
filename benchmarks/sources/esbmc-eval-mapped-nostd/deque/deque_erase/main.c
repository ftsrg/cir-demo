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
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ { unsigned int* _M_cur; unsigned int* _M_first; unsigned int* _M_last; unsigned int** _M_node; };
struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ { unsigned int* _M_cur; unsigned int* _M_first; unsigned int* _M_last; unsigned int** _M_node; };
struct std____new_allocator_unsigned_int_ { unsigned char __field0; };
struct std____new_allocator_unsigned_int___ { unsigned char __field0; };
struct std__allocator_unsigned_int_ { unsigned char __field0; };
struct std__allocator_unsigned_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data { unsigned int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ _M_start; struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl { struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__ { struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl _M_impl; };
struct std__deque_unsigned_int__std__allocator_unsigned_int__ { struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "mydeque[5] == 7";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_erase/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "mydeque.front() == 4";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[18] = "mydeque contains:";
char _str_4[2] = " ";
char _str_5[48] = "cannot create std::deque larger than max_size()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIjSaIjEE9pop_frontEv[103] = "void std::deque<unsigned int>::pop_front() [_Tp = unsigned int, _Alloc = std::allocator<unsigned int>]";
char _str_7[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIjSaIjEE8pop_backEv[102] = "void std::deque<unsigned int>::pop_back() [_Tp = unsigned int, _Alloc = std::allocator<unsigned int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIjSaIjEEixEm[118] = "reference std::deque<unsigned int>::operator[](size_type) [_Tp = unsigned int, _Alloc = std::allocator<unsigned int>]";
char _str_8[19] = "__n < this->size()";
char __PRETTY_FUNCTION____ZNSt5dequeIjSaIjEE5frontEv[104] = "reference std::deque<unsigned int>::front() [_Tp = unsigned int, _Alloc = std::allocator<unsigned int>]";
void std__deque_unsigned_int__std__allocator_unsigned_int_____deque(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
unsigned int* _ZSt12construct_atIjJRKjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(unsigned int* p0, unsigned int* p1);
void void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_const__(struct std__allocator_unsigned_int_* p0, unsigned int* p1, unsigned int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_unsigned_int__std__allocator_unsigned_int______S_max_size(struct std__allocator_unsigned_int_* p0);
unsigned long std__deque_unsigned_int__std__allocator_unsigned_int_____max_size___const(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned int** unsigned_int___std____niter_wrap_unsigned_int___(unsigned int*** p0, unsigned int** p1);
long std__iterator_traits_unsigned_int_____difference_type_std____distance_unsigned_int___(unsigned int** p0, unsigned int** p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_unsigned_int_____iterator_category_std____iterator_category_unsigned_int___(unsigned int*** p0);
long std__iterator_traits_unsigned_int_____difference_type_std__distance_unsigned_int___(unsigned int** p0, unsigned int** p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__unsigned_int____unsigned_int___(unsigned int*** p0, unsigned int*** p1);
unsigned int** unsigned_int___std____copy_move_a2_false__unsigned_int____unsigned_int____unsigned_int___(unsigned int** p0, unsigned int** p1, unsigned int** p2);
unsigned int** unsigned_int___std____copy_move_a1_false__unsigned_int____unsigned_int___(unsigned int** p0, unsigned int** p1, unsigned int** p2);
unsigned int** unsigned_int___std____niter_base_unsigned_int___(unsigned int** p0);
unsigned int** unsigned_int___std____copy_move_a_false__unsigned_int____unsigned_int___(unsigned int** p0, unsigned int** p1, unsigned int** p2);
unsigned int** unsigned_int___std____miter_base_unsigned_int___(unsigned int** p0);
unsigned int** unsigned_int___std__copy_unsigned_int____unsigned_int___(unsigned int** p0, unsigned int** p1, unsigned int** p2);
_Bool std__is_constant_evaluated();
void void_std____advance_unsigned_int____long_(unsigned int*** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_unsigned_int____long_(unsigned int*** p0, long p1);
unsigned int** unsigned_int___std____copy_move_backward_a2_false__unsigned_int____unsigned_int___(unsigned int** p0, unsigned int** p1, unsigned int** p2);
unsigned int** unsigned_int___std____copy_move_backward_a1_false__unsigned_int____unsigned_int___(unsigned int** p0, unsigned int** p1, unsigned int** p2);
unsigned int** unsigned_int___std____copy_move_backward_a_false__unsigned_int____unsigned_int___(unsigned int** p0, unsigned int** p1, unsigned int** p2);
unsigned int** unsigned_int___std__copy_backward_unsigned_int____unsigned_int___(unsigned int** p0, unsigned int** p1, unsigned int** p2);
void std__deque_unsigned_int__std__allocator_unsigned_int______M_reallocate_map(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, unsigned long p1, _Bool p2);
void std__deque_unsigned_int__std__allocator_unsigned_int______M_reserve_map_at_back(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, unsigned long p1);
void void_std__deque_unsigned_int__std__allocator_unsigned_int______M_push_back_aux_unsigned_int_const__(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, unsigned int* p1);
void std__deque_unsigned_int__std__allocator_unsigned_int_____push_back(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, unsigned int* p1);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___3(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0);
long std__operator_(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p1);
_Bool std__operator__(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p1);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_wrap_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1);
long* long_const__std__min_long_(long* p0, long* p1);
long std__iterator_traits_unsigned_int____difference_type_std____distance_unsigned_int__(unsigned int* p0, unsigned int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_unsigned_int____iterator_category_std____iterator_category_unsigned_int__(unsigned int** p0);
long std__iterator_traits_unsigned_int____difference_type_std__distance_unsigned_int__(unsigned int* p0, unsigned int* p1);
void void_std____advance_unsigned_int___long_(unsigned int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_unsigned_int___long_(unsigned int** p0, long p1);
void void_std____assign_one_true__unsigned_int___unsigned_int__(unsigned int** p0, unsigned int** p1);
unsigned int* unsigned_int__std____copy_move_backward_a2_true__unsigned_int___unsigned_int__(unsigned int* p0, unsigned int* p1, unsigned int* p2);
unsigned int* unsigned_int__std____copy_move_backward_a1_true__unsigned_int___unsigned_int__(unsigned int* p0, unsigned int* p1, unsigned int* p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator__(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, long p1);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_backward_a1_true__unsigned_int___unsigned_int_(unsigned int* p0, unsigned int* p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator_(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p1);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_backward_dit_true__unsigned_int__unsigned_int___unsigned_int___std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_backward_a1_true__unsigned_int__unsigned_int___unsigned_int___unsigned_int_(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p0);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_backward_a_true__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____miter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p0);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std__move_backward_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
_Bool std__deque_unsigned_int__std__allocator_unsigned_int_____empty___const(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void void_std__allocator_traits_std__allocator_unsigned_int_____destroy_unsigned_int_(struct std__allocator_unsigned_int_* p0, unsigned int* p1);
void std__deque_unsigned_int__std__allocator_unsigned_int______M_pop_front_aux(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
void std__deque_unsigned_int__std__allocator_unsigned_int_____pop_front(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
unsigned int* unsigned_int__std____copy_move_a2_true__unsigned_int___unsigned_int___unsigned_int__(unsigned int* p0, unsigned int* p1, unsigned int* p2);
unsigned int* unsigned_int__std____copy_move_a1_true__unsigned_int___unsigned_int__(unsigned int* p0, unsigned int* p1, unsigned int* p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_a1_true__unsigned_int___unsigned_int_(unsigned int* p0, unsigned int* p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_dit_true__unsigned_int__unsigned_int___unsigned_int___std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_a1_true__unsigned_int__unsigned_int___unsigned_int___unsigned_int_(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_a_true__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std__move_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
void std__deque_unsigned_int__std__allocator_unsigned_int______M_pop_back_aux(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
void std__deque_unsigned_int__std__allocator_unsigned_int_____pop_back(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int______M_erase(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1);
void std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator_2(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, unsigned int* p1, unsigned int** p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int_const___unsigned_int_const_____M_const_cast___const(struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___* p0);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int_____erase(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ p1);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___2(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, long p1);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__operator__4(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, long p1);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int_____begin(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
void std___Deque_iterator_unsigned_int__unsigned_int_const___unsigned_int_const_____Deque_iterator_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____void_(struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p1);
unsigned int* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator____const(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0);
unsigned int* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___long__const(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, long p1);
unsigned int* std__deque_unsigned_int__std__allocator_unsigned_int_____operator__(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__deque_unsigned_int__std__allocator_unsigned_int_____clear(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
void std__deque_unsigned_int__std__allocator_unsigned_int______M_erase_at_begin(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1);
void std__deque_unsigned_int__std__allocator_unsigned_int______M_erase_at_end(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__operator__2(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, long p1);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int______M_erase_2(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int_____erase_2(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ p1, struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ p2);
unsigned int* std__deque_unsigned_int__std__allocator_unsigned_int_____front(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
unsigned long std__deque_unsigned_int__std__allocator_unsigned_int_____size___const(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned int p1);
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
void std__deque_unsigned_int__std__allocator_unsigned_int______deque(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
int main();
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_impl___Deque_impl(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl* p0);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__allocator_unsigned_int_* std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator___const(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0);
void std__allocator_unsigned_int____allocator_unsigned_int_(struct std__allocator_unsigned_int___* p0, struct std__allocator_unsigned_int_* p1);
struct std__allocator_unsigned_int___ std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_map_allocator___const(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_unsigned_int_____M_max_size___const(struct std____new_allocator_unsigned_int___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
unsigned int** std____new_allocator_unsigned_int____allocate(struct std____new_allocator_unsigned_int___* p0, unsigned long p1, void* p2);
unsigned int** std__allocator_unsigned_int____allocate(struct std__allocator_unsigned_int___* p0, unsigned long p1);
unsigned int** std__allocator_traits_std__allocator_unsigned_int______allocate(struct std__allocator_unsigned_int___* p0, unsigned long p1);
unsigned int** std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_allocate_map(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0, unsigned long p1);
extern int __gxx_personality_v0();
unsigned long std____new_allocator_unsigned_int____M_max_size___const(struct std____new_allocator_unsigned_int_* p0);
unsigned int* std____new_allocator_unsigned_int___allocate(struct std____new_allocator_unsigned_int_* p0, unsigned long p1, void* p2);
unsigned int* std__allocator_unsigned_int___allocate(struct std__allocator_unsigned_int_* p0, unsigned long p1);
unsigned int* std__allocator_traits_std__allocator_unsigned_int_____allocate(struct std__allocator_unsigned_int_* p0, unsigned long p1);
unsigned int* std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_allocate_node(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_unsigned_int___deallocate(struct std____new_allocator_unsigned_int_* p0, unsigned int* p1, unsigned long p2);
void std__allocator_unsigned_int___deallocate(struct std__allocator_unsigned_int_* p0, unsigned int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_unsigned_int_____deallocate(struct std__allocator_unsigned_int_* p0, unsigned int* p1, unsigned long p2);
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_node(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0, unsigned int* p1);
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_destroy_nodes(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0, unsigned int** p1, unsigned int** p2);
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_create_nodes(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0, unsigned int** p1, unsigned int** p2);
void std____new_allocator_unsigned_int____deallocate(struct std____new_allocator_unsigned_int___* p0, unsigned int** p1, unsigned long p2);
void std__allocator_unsigned_int____deallocate(struct std__allocator_unsigned_int___* p0, unsigned int** p1, unsigned long p2);
void std__allocator_traits_std__allocator_unsigned_int______deallocate(struct std__allocator_unsigned_int___* p0, unsigned int** p1, unsigned long p2);
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_map(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0, unsigned int** p1, unsigned long p2);
unsigned long std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
void std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, unsigned int** p1);
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_initialize_map(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0, unsigned long p1);
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_impl____Deque_impl(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl* p0);
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_base(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0);
void std___Deque_base_unsigned_int__std__allocator_unsigned_int_______Deque_base(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0);
void std____new_allocator_unsigned_int_____new_allocator(struct std____new_allocator_unsigned_int_* p0);
void std__allocator_unsigned_int___allocator(struct std__allocator_unsigned_int_* p0);
void std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator_3(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0);
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* p0);
void std__allocator_unsigned_int____allocator(struct std__allocator_unsigned_int_* p0);
void std____new_allocator_unsigned_int______new_allocator(struct std____new_allocator_unsigned_int___* p0);
void void_std__destroy_at_unsigned_int_(unsigned int* p0);
void void_std___Destroy_unsigned_int__(unsigned int* p0, unsigned int* p1);
void void_std___Destroy_unsigned_int___unsigned_int_(unsigned int* p0, unsigned int* p1, struct std__allocator_unsigned_int_* p2);
unsigned long std__deque_unsigned_int__std__allocator_unsigned_int______S_buffer_size();
void std__deque_unsigned_int__std__allocator_unsigned_int______M_destroy_data_aux(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2);
void std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* p1);
void std__deque_unsigned_int__std__allocator_unsigned_int______M_destroy_data(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p1, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ p2, struct std__allocator_unsigned_int_* p3);
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int_____end(struct std__deque_unsigned_int__std__allocator_unsigned_int__* p0);
struct std__allocator_unsigned_int_* std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* p0);

// function: _ZNSt5dequeIjSaIjEEC2Ev
void std__deque_unsigned_int__std__allocator_unsigned_int_____deque(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v0) {
bb1:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this2;
  this2 = v0;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t3 = this2;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base4 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t3 + 0);
  std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_base(base4);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12construct_atIjJRKjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
unsigned int* _ZSt12construct_atIjJRKjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(unsigned int* v5, unsigned int* v6) {
bb7:
  unsigned int* __location8;
  unsigned int* __args9;
  unsigned int* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  unsigned int* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    unsigned int* cast15 = (unsigned int*)t14;
    unsigned int* t16 = __args9;
    unsigned int t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    unsigned int* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIjEE9constructIjJRKjEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_const__(struct std__allocator_unsigned_int_* v19, unsigned int* v20, unsigned int* v21) {
bb22:
  struct std__allocator_unsigned_int_* __a23;
  unsigned int* __p24;
  unsigned int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  unsigned int* t26 = __p24;
  unsigned int* t27 = __args25;
  unsigned int* r28 = _ZSt12construct_atIjJRKjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t26, t27);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v29, unsigned long* v30) {
bb31:
  unsigned long* __a32;
  unsigned long* __b33;
  unsigned long* __retval34;
  __a32 = v29;
  __b33 = v30;
    unsigned long* t35 = __b33;
    unsigned long t36 = *t35;
    unsigned long* t37 = __a32;
    unsigned long t38 = *t37;
    _Bool c39 = ((t36 < t38)) ? 1 : 0;
    if (c39) {
      unsigned long* t40 = __b33;
      __retval34 = t40;
      unsigned long* t41 = __retval34;
      return t41;
    }
  unsigned long* t42 = __a32;
  __retval34 = t42;
  unsigned long* t43 = __retval34;
  return t43;
}

// function: _ZNSt5dequeIjSaIjEE11_S_max_sizeERKS0_
unsigned long std__deque_unsigned_int__std__allocator_unsigned_int______S_max_size(struct std__allocator_unsigned_int_* v44) {
bb45:
  struct std__allocator_unsigned_int_* __a46;
  unsigned long __retval47;
  unsigned long __diffmax48;
  unsigned long __allocmax49;
  __a46 = v44;
  unsigned long c50 = 9223372036854775807;
  __diffmax48 = c50;
  unsigned long c51 = 4611686018427387903;
  __allocmax49 = c51;
  unsigned long* r52 = unsigned_long_const__std__min_unsigned_long_(&__diffmax48, &__allocmax49);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t53 = *r52;
  __retval47 = t53;
  unsigned long t54 = __retval47;
  return t54;
}

// function: _ZNKSt5dequeIjSaIjEE8max_sizeEv
unsigned long std__deque_unsigned_int__std__allocator_unsigned_int_____max_size___const(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v55) {
bb56:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this57;
  unsigned long __retval58;
  this57 = v55;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t59 = this57;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base60 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t59 + 0);
  struct std__allocator_unsigned_int_* r61 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator___const(base60);
  unsigned long r62 = std__deque_unsigned_int__std__allocator_unsigned_int______S_max_size(r61);
  __retval58 = r62;
  unsigned long t63 = __retval58;
  return t63;
}

// function: _ZSt12__niter_wrapIPPjET_RKS2_S2_
unsigned int** unsigned_int___std____niter_wrap_unsigned_int___(unsigned int*** v64, unsigned int** v65) {
bb66:
  unsigned int*** unnamed67;
  unsigned int** __res68;
  unsigned int** __retval69;
  unnamed67 = v64;
  __res68 = v65;
  unsigned int** t70 = __res68;
  __retval69 = t70;
  unsigned int** t71 = __retval69;
  return t71;
}

// function: _ZSt10__distanceIPPjENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_unsigned_int_____difference_type_std____distance_unsigned_int___(unsigned int** v72, unsigned int** v73, struct std__random_access_iterator_tag v74) {
bb75:
  unsigned int** __first76;
  unsigned int** __last77;
  struct std__random_access_iterator_tag unnamed78;
  long __retval79;
  __first76 = v72;
  __last77 = v73;
  unnamed78 = v74;
  unsigned int** t80 = __last77;
  unsigned int** t81 = __first76;
  long diff82 = t80 - t81;
  __retval79 = diff82;
  long t83 = __retval79;
  return t83;
}

// function: _ZSt19__iterator_categoryIPPjENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_unsigned_int_____iterator_category_std____iterator_category_unsigned_int___(unsigned int*** v84) {
bb85:
  unsigned int*** unnamed86;
  struct std__random_access_iterator_tag __retval87;
  unnamed86 = v84;
  struct std__random_access_iterator_tag t88 = __retval87;
  return t88;
}

// function: _ZSt8distanceIPPjENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_unsigned_int_____difference_type_std__distance_unsigned_int___(unsigned int** v89, unsigned int** v90) {
bb91:
  unsigned int** __first92;
  unsigned int** __last93;
  long __retval94;
  struct std__random_access_iterator_tag agg_tmp095;
  __first92 = v89;
  __last93 = v90;
  unsigned int** t96 = __first92;
  unsigned int** t97 = __last93;
  struct std__random_access_iterator_tag r98 = std__iterator_traits_unsigned_int_____iterator_category_std____iterator_category_unsigned_int___(&__first92);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp095 = r98;
  struct std__random_access_iterator_tag t99 = agg_tmp095;
  long r100 = std__iterator_traits_unsigned_int_____difference_type_std____distance_unsigned_int___(t96, t97, t99);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval94 = r100;
  long t101 = __retval94;
  return t101;
}

// function: _ZSt12__assign_oneILb0EPPjS1_EvRT0_RT1_
void void_std____assign_one_false__unsigned_int____unsigned_int___(unsigned int*** v102, unsigned int*** v103) {
bb104:
  unsigned int*** __out105;
  unsigned int*** __in106;
  __out105 = v102;
  __in106 = v103;
    unsigned int*** t107 = __in106;
    unsigned int** t108 = *t107;
    unsigned int* t109 = *t108;
    unsigned int*** t110 = __out105;
    unsigned int** t111 = *t110;
    *t111 = t109;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPjS1_S1_ET2_T0_T1_S2_
unsigned int** unsigned_int___std____copy_move_a2_false__unsigned_int____unsigned_int____unsigned_int___(unsigned int** v112, unsigned int** v113, unsigned int** v114) {
bb115:
  unsigned int** __first116;
  unsigned int** __last117;
  unsigned int** __result118;
  unsigned int** __retval119;
  __first116 = v112;
  __last117 = v113;
  __result118 = v114;
      _Bool r120 = std____is_constant_evaluated();
      if (r120) {
      } else {
          long __n121;
          unsigned int** t122 = __first116;
          unsigned int** t123 = __last117;
          long r124 = std__iterator_traits_unsigned_int_____difference_type_std__distance_unsigned_int___(t122, t123);
          if (__cir_exc_active) {
            unsigned int** __cir_eh_ret = (unsigned int**)0;
            return __cir_eh_ret;
          }
          __n121 = r124;
            long t125 = __n121;
            long c126 = 1;
            _Bool c127 = ((t125 > c126)) ? 1 : 0;
            if (c127) {
              unsigned int** t128 = __result118;
              void* cast129 = (void*)t128;
              unsigned int** t130 = __first116;
              void* cast131 = (void*)t130;
              long t132 = __n121;
              unsigned long cast133 = (unsigned long)t132;
              unsigned long c134 = 8;
              unsigned long b135 = cast133 * c134;
              void* r136 = memmove(cast129, cast131, b135);
              long t137 = __n121;
              unsigned int** t138 = __result118;
              unsigned int** ptr139 = &(t138)[t137];
              __result118 = ptr139;
            } else {
                long t140 = __n121;
                long c141 = 1;
                _Bool c142 = ((t140 == c141)) ? 1 : 0;
                if (c142) {
                  void_std____assign_one_false__unsigned_int____unsigned_int___(&__result118, &__first116);
                  if (__cir_exc_active) {
                    unsigned int** __cir_eh_ret = (unsigned int**)0;
                    return __cir_eh_ret;
                  }
                  unsigned int** t143 = __result118;
                  int c144 = 1;
                  unsigned int** ptr145 = &(t143)[c144];
                  __result118 = ptr145;
                }
            }
          unsigned int** t146 = __result118;
          __retval119 = t146;
          unsigned int** t147 = __retval119;
          return t147;
      }
    while (1) {
      unsigned int** t149 = __first116;
      unsigned int** t150 = __last117;
      _Bool c151 = ((t149 != t150)) ? 1 : 0;
      if (!c151) break;
      void_std____assign_one_false__unsigned_int____unsigned_int___(&__result118, &__first116);
      if (__cir_exc_active) {
        unsigned int** __cir_eh_ret = (unsigned int**)0;
        return __cir_eh_ret;
      }
    for_step148: ;
      unsigned int** t152 = __result118;
      int c153 = 1;
      unsigned int** ptr154 = &(t152)[c153];
      __result118 = ptr154;
      unsigned int** t155 = __first116;
      int c156 = 1;
      unsigned int** ptr157 = &(t155)[c156];
      __first116 = ptr157;
    }
  unsigned int** t158 = __result118;
  __retval119 = t158;
  unsigned int** t159 = __retval119;
  return t159;
}

// function: _ZSt14__copy_move_a1ILb0EPPjS1_ET1_T0_S3_S2_
unsigned int** unsigned_int___std____copy_move_a1_false__unsigned_int____unsigned_int___(unsigned int** v160, unsigned int** v161, unsigned int** v162) {
bb163:
  unsigned int** __first164;
  unsigned int** __last165;
  unsigned int** __result166;
  unsigned int** __retval167;
  __first164 = v160;
  __last165 = v161;
  __result166 = v162;
  unsigned int** t168 = __first164;
  unsigned int** t169 = __last165;
  unsigned int** t170 = __result166;
  unsigned int** r171 = unsigned_int___std____copy_move_a2_false__unsigned_int____unsigned_int____unsigned_int___(t168, t169, t170);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  __retval167 = r171;
  unsigned int** t172 = __retval167;
  return t172;
}

// function: _ZSt12__niter_baseIPPjET_S2_
unsigned int** unsigned_int___std____niter_base_unsigned_int___(unsigned int** v173) {
bb174:
  unsigned int** __it175;
  unsigned int** __retval176;
  __it175 = v173;
  unsigned int** t177 = __it175;
  __retval176 = t177;
  unsigned int** t178 = __retval176;
  return t178;
}

// function: _ZSt13__copy_move_aILb0EPPjS1_ET1_T0_S3_S2_
unsigned int** unsigned_int___std____copy_move_a_false__unsigned_int____unsigned_int___(unsigned int** v179, unsigned int** v180, unsigned int** v181) {
bb182:
  unsigned int** __first183;
  unsigned int** __last184;
  unsigned int** __result185;
  unsigned int** __retval186;
  __first183 = v179;
  __last184 = v180;
  __result185 = v181;
  unsigned int** t187 = __first183;
  unsigned int** r188 = unsigned_int___std____niter_base_unsigned_int___(t187);
  unsigned int** t189 = __last184;
  unsigned int** r190 = unsigned_int___std____niter_base_unsigned_int___(t189);
  unsigned int** t191 = __result185;
  unsigned int** r192 = unsigned_int___std____niter_base_unsigned_int___(t191);
  unsigned int** r193 = unsigned_int___std____copy_move_a1_false__unsigned_int____unsigned_int___(r188, r190, r192);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  unsigned int** r194 = unsigned_int___std____niter_wrap_unsigned_int___(&__result185, r193);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  __retval186 = r194;
  unsigned int** t195 = __retval186;
  return t195;
}

// function: _ZSt12__miter_baseIPPjET_S2_
unsigned int** unsigned_int___std____miter_base_unsigned_int___(unsigned int** v196) {
bb197:
  unsigned int** __it198;
  unsigned int** __retval199;
  __it198 = v196;
  unsigned int** t200 = __it198;
  __retval199 = t200;
  unsigned int** t201 = __retval199;
  return t201;
}

// function: _ZSt4copyIPPjS1_ET0_T_S3_S2_
unsigned int** unsigned_int___std__copy_unsigned_int____unsigned_int___(unsigned int** v202, unsigned int** v203, unsigned int** v204) {
bb205:
  unsigned int** __first206;
  unsigned int** __last207;
  unsigned int** __result208;
  unsigned int** __retval209;
  __first206 = v202;
  __last207 = v203;
  __result208 = v204;
  unsigned int** t210 = __first206;
  unsigned int** r211 = unsigned_int___std____miter_base_unsigned_int___(t210);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  unsigned int** t212 = __last207;
  unsigned int** r213 = unsigned_int___std____miter_base_unsigned_int___(t212);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  unsigned int** t214 = __result208;
  unsigned int** r215 = unsigned_int___std____copy_move_a_false__unsigned_int____unsigned_int___(r211, r213, t214);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  __retval209 = r215;
  unsigned int** t216 = __retval209;
  return t216;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb217:
  _Bool __retval218;
    _Bool c219 = 0;
    __retval218 = c219;
    _Bool t220 = __retval218;
    return t220;
  abort();
}

// function: _ZSt9__advanceIPPjlEvRT_T0_St26random_access_iterator_tag
void void_std____advance_unsigned_int____long_(unsigned int*** v221, long v222, struct std__random_access_iterator_tag v223) {
bb224:
  unsigned int*** __i225;
  long __n226;
  struct std__random_access_iterator_tag unnamed227;
  __i225 = v221;
  __n226 = v222;
  unnamed227 = v223;
    long t228 = __n226;
    _Bool isconst229 = 0;
    _Bool ternary230;
    if (isconst229) {
      long t231 = __n226;
      long c232 = 1;
      _Bool c233 = ((t231 == c232)) ? 1 : 0;
      ternary230 = (_Bool)c233;
    } else {
      _Bool c234 = 0;
      ternary230 = (_Bool)c234;
    }
    if (ternary230) {
      unsigned int*** t235 = __i225;
      unsigned int** t236 = *t235;
      int c237 = 1;
      unsigned int** ptr238 = &(t236)[c237];
      *t235 = ptr238;
    } else {
        long t239 = __n226;
        _Bool isconst240 = 0;
        _Bool ternary241;
        if (isconst240) {
          long t242 = __n226;
          long c243 = -1;
          _Bool c244 = ((t242 == c243)) ? 1 : 0;
          ternary241 = (_Bool)c244;
        } else {
          _Bool c245 = 0;
          ternary241 = (_Bool)c245;
        }
        if (ternary241) {
          unsigned int*** t246 = __i225;
          unsigned int** t247 = *t246;
          int c248 = -1;
          unsigned int** ptr249 = &(t247)[c248];
          *t246 = ptr249;
        } else {
          long t250 = __n226;
          unsigned int*** t251 = __i225;
          unsigned int** t252 = *t251;
          unsigned int** ptr253 = &(t252)[t250];
          *t251 = ptr253;
        }
    }
  return;
}

// function: _ZSt7advanceIPPjlEvRT_T0_
void void_std__advance_unsigned_int____long_(unsigned int*** v254, long v255) {
bb256:
  unsigned int*** __i257;
  long __n258;
  long __d259;
  struct std__random_access_iterator_tag agg_tmp0260;
  __i257 = v254;
  __n258 = v255;
  long t261 = __n258;
  __d259 = t261;
  unsigned int*** t262 = __i257;
  long t263 = __d259;
  unsigned int*** t264 = __i257;
  struct std__random_access_iterator_tag r265 = std__iterator_traits_unsigned_int_____iterator_category_std____iterator_category_unsigned_int___(t264);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0260 = r265;
  struct std__random_access_iterator_tag t266 = agg_tmp0260;
  void_std____advance_unsigned_int____long_(t262, t263, t266);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPjS1_ET1_T0_S3_S2_
unsigned int** unsigned_int___std____copy_move_backward_a2_false__unsigned_int____unsigned_int___(unsigned int** v267, unsigned int** v268, unsigned int** v269) {
bb270:
  unsigned int** __first271;
  unsigned int** __last272;
  unsigned int** __result273;
  unsigned int** __retval274;
  __first271 = v267;
  __last272 = v268;
  __result273 = v269;
      _Bool r275 = std__is_constant_evaluated();
      if (r275) {
      } else {
          long __n276;
          unsigned int** t277 = __first271;
          unsigned int** t278 = __last272;
          long r279 = std__iterator_traits_unsigned_int_____difference_type_std__distance_unsigned_int___(t277, t278);
          if (__cir_exc_active) {
            unsigned int** __cir_eh_ret = (unsigned int**)0;
            return __cir_eh_ret;
          }
          __n276 = r279;
          long t280 = __n276;
          long u281 = -t280;
          void_std__advance_unsigned_int____long_(&__result273, u281);
          if (__cir_exc_active) {
            unsigned int** __cir_eh_ret = (unsigned int**)0;
            return __cir_eh_ret;
          }
            long t282 = __n276;
            long c283 = 1;
            _Bool c284 = ((t282 > c283)) ? 1 : 0;
            if (c284) {
              unsigned int** t285 = __result273;
              void* cast286 = (void*)t285;
              unsigned int** t287 = __first271;
              void* cast288 = (void*)t287;
              long t289 = __n276;
              unsigned long cast290 = (unsigned long)t289;
              unsigned long c291 = 8;
              unsigned long b292 = cast290 * c291;
              void* r293 = memmove(cast286, cast288, b292);
            } else {
                long t294 = __n276;
                long c295 = 1;
                _Bool c296 = ((t294 == c295)) ? 1 : 0;
                if (c296) {
                  void_std____assign_one_false__unsigned_int____unsigned_int___(&__result273, &__first271);
                  if (__cir_exc_active) {
                    unsigned int** __cir_eh_ret = (unsigned int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          unsigned int** t297 = __result273;
          __retval274 = t297;
          unsigned int** t298 = __retval274;
          return t298;
      }
    while (1) {
      unsigned int** t299 = __first271;
      unsigned int** t300 = __last272;
      _Bool c301 = ((t299 != t300)) ? 1 : 0;
      if (!c301) break;
        unsigned int** t302 = __last272;
        int c303 = -1;
        unsigned int** ptr304 = &(t302)[c303];
        __last272 = ptr304;
        unsigned int** t305 = __result273;
        int c306 = -1;
        unsigned int** ptr307 = &(t305)[c306];
        __result273 = ptr307;
        void_std____assign_one_false__unsigned_int____unsigned_int___(&__result273, &__last272);
        if (__cir_exc_active) {
          unsigned int** __cir_eh_ret = (unsigned int**)0;
          return __cir_eh_ret;
        }
    }
  unsigned int** t308 = __result273;
  __retval274 = t308;
  unsigned int** t309 = __retval274;
  return t309;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPjS1_ET1_T0_S3_S2_
unsigned int** unsigned_int___std____copy_move_backward_a1_false__unsigned_int____unsigned_int___(unsigned int** v310, unsigned int** v311, unsigned int** v312) {
bb313:
  unsigned int** __first314;
  unsigned int** __last315;
  unsigned int** __result316;
  unsigned int** __retval317;
  __first314 = v310;
  __last315 = v311;
  __result316 = v312;
  unsigned int** t318 = __first314;
  unsigned int** t319 = __last315;
  unsigned int** t320 = __result316;
  unsigned int** r321 = unsigned_int___std____copy_move_backward_a2_false__unsigned_int____unsigned_int___(t318, t319, t320);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  __retval317 = r321;
  unsigned int** t322 = __retval317;
  return t322;
}

// function: _ZSt22__copy_move_backward_aILb0EPPjS1_ET1_T0_S3_S2_
unsigned int** unsigned_int___std____copy_move_backward_a_false__unsigned_int____unsigned_int___(unsigned int** v323, unsigned int** v324, unsigned int** v325) {
bb326:
  unsigned int** __first327;
  unsigned int** __last328;
  unsigned int** __result329;
  unsigned int** __retval330;
  __first327 = v323;
  __last328 = v324;
  __result329 = v325;
  unsigned int** t331 = __first327;
  unsigned int** r332 = unsigned_int___std____niter_base_unsigned_int___(t331);
  unsigned int** t333 = __last328;
  unsigned int** r334 = unsigned_int___std____niter_base_unsigned_int___(t333);
  unsigned int** t335 = __result329;
  unsigned int** r336 = unsigned_int___std____niter_base_unsigned_int___(t335);
  unsigned int** r337 = unsigned_int___std____copy_move_backward_a1_false__unsigned_int____unsigned_int___(r332, r334, r336);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  unsigned int** r338 = unsigned_int___std____niter_wrap_unsigned_int___(&__result329, r337);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  __retval330 = r338;
  unsigned int** t339 = __retval330;
  return t339;
}

// function: _ZSt13copy_backwardIPPjS1_ET0_T_S3_S2_
unsigned int** unsigned_int___std__copy_backward_unsigned_int____unsigned_int___(unsigned int** v340, unsigned int** v341, unsigned int** v342) {
bb343:
  unsigned int** __first344;
  unsigned int** __last345;
  unsigned int** __result346;
  unsigned int** __retval347;
  __first344 = v340;
  __last345 = v341;
  __result346 = v342;
  unsigned int** t348 = __first344;
  unsigned int** r349 = unsigned_int___std____miter_base_unsigned_int___(t348);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  unsigned int** t350 = __last345;
  unsigned int** r351 = unsigned_int___std____miter_base_unsigned_int___(t350);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  unsigned int** t352 = __result346;
  unsigned int** r353 = unsigned_int___std____copy_move_backward_a_false__unsigned_int____unsigned_int___(r349, r351, t352);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  __retval347 = r353;
  unsigned int** t354 = __retval347;
  return t354;
}

// function: _ZNSt5dequeIjSaIjEE17_M_reallocate_mapEmb
void std__deque_unsigned_int__std__allocator_unsigned_int______M_reallocate_map(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v355, unsigned long v356, _Bool v357) {
bb358:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this359;
  unsigned long __nodes_to_add360;
  _Bool __add_at_front361;
  unsigned long __old_num_nodes362;
  unsigned long __new_num_nodes363;
  unsigned int** __new_nstart364;
  this359 = v355;
  __nodes_to_add360 = v356;
  __add_at_front361 = v357;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t365 = this359;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base366 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base367 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base366->_M_impl) + 0);
  unsigned int** t368 = base367->_M_finish._M_node;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base369 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base370 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base369->_M_impl) + 0);
  unsigned int** t371 = base370->_M_start._M_node;
  long diff372 = t368 - t371;
  long c373 = 1;
  long b374 = diff372 + c373;
  unsigned long cast375 = (unsigned long)b374;
  __old_num_nodes362 = cast375;
  unsigned long t376 = __old_num_nodes362;
  unsigned long t377 = __nodes_to_add360;
  unsigned long b378 = t376 + t377;
  __new_num_nodes363 = b378;
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base379 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base380 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base379->_M_impl) + 0);
    unsigned long t381 = base380->_M_map_size;
    unsigned long c382 = 2;
    unsigned long t383 = __new_num_nodes363;
    unsigned long b384 = c382 * t383;
    _Bool c385 = ((t381 > b384)) ? 1 : 0;
    if (c385) {
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base386 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base387 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base386->_M_impl) + 0);
      unsigned int** t388 = base387->_M_map;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base389 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base390 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base389->_M_impl) + 0);
      unsigned long t391 = base390->_M_map_size;
      unsigned long t392 = __new_num_nodes363;
      unsigned long b393 = t391 - t392;
      unsigned long c394 = 2;
      unsigned long b395 = b393 / c394;
      unsigned int** ptr396 = &(t388)[b395];
      _Bool t397 = __add_at_front361;
      unsigned long ternary398;
      if (t397) {
        unsigned long t399 = __nodes_to_add360;
        ternary398 = (unsigned long)t399;
      } else {
        unsigned long c400 = 0;
        ternary398 = (unsigned long)c400;
      }
      unsigned int** ptr401 = &(ptr396)[ternary398];
      __new_nstart364 = ptr401;
        unsigned int** t402 = __new_nstart364;
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base403 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base404 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base403->_M_impl) + 0);
        unsigned int** t405 = base404->_M_start._M_node;
        _Bool c406 = ((t402 < t405)) ? 1 : 0;
        if (c406) {
          struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base407 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
          struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base408 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base407->_M_impl) + 0);
          unsigned int** t409 = base408->_M_start._M_node;
          struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base410 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
          struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base411 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base410->_M_impl) + 0);
          unsigned int** t412 = base411->_M_finish._M_node;
          int c413 = 1;
          unsigned int** ptr414 = &(t412)[c413];
          unsigned int** t415 = __new_nstart364;
          unsigned int** r416 = unsigned_int___std__copy_unsigned_int____unsigned_int___(t409, ptr414, t415);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base417 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
          struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base418 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base417->_M_impl) + 0);
          unsigned int** t419 = base418->_M_start._M_node;
          struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base420 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
          struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base421 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base420->_M_impl) + 0);
          unsigned int** t422 = base421->_M_finish._M_node;
          int c423 = 1;
          unsigned int** ptr424 = &(t422)[c423];
          unsigned int** t425 = __new_nstart364;
          unsigned long t426 = __old_num_nodes362;
          unsigned int** ptr427 = &(t425)[t426];
          unsigned int** r428 = unsigned_int___std__copy_backward_unsigned_int____unsigned_int___(t419, ptr424, ptr427);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size429;
      unsigned long __bufsz430;
      unsigned int** __new_map431;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base432 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base433 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base432->_M_impl) + 0);
      unsigned long t434 = base433->_M_map_size;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base435 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base436 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base435->_M_impl) + 0);
      unsigned long* r437 = unsigned_long_const__std__max_unsigned_long_(&base436->_M_map_size, &__nodes_to_add360);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t438 = *r437;
      unsigned long b439 = t434 + t438;
      unsigned long c440 = 2;
      unsigned long b441 = b439 + c440;
      __new_map_size429 = b441;
      unsigned long c442 = 128;
      __bufsz430 = c442;
        unsigned long t443 = __new_map_size429;
        unsigned long r444 = std__deque_unsigned_int__std__allocator_unsigned_int_____max_size___const(t365);
        unsigned long t445 = __bufsz430;
        unsigned long b446 = r444 + t445;
        unsigned long c447 = 1;
        unsigned long b448 = b446 - c447;
        unsigned long t449 = __bufsz430;
        unsigned long b450 = b448 / t449;
        unsigned long c451 = 2;
        unsigned long b452 = b450 * c451;
        _Bool c453 = ((t443 > b452)) ? 1 : 0;
        if (c453) {
          __builtin_unreachable();
        }
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base454 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      unsigned long t455 = __new_map_size429;
      unsigned int** r456 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_allocate_map(base454, t455);
      if (__cir_exc_active) {
        return;
      }
      __new_map431 = r456;
      unsigned int** t457 = __new_map431;
      unsigned long t458 = __new_map_size429;
      unsigned long t459 = __new_num_nodes363;
      unsigned long b460 = t458 - t459;
      unsigned long c461 = 2;
      unsigned long b462 = b460 / c461;
      unsigned int** ptr463 = &(t457)[b462];
      _Bool t464 = __add_at_front361;
      unsigned long ternary465;
      if (t464) {
        unsigned long t466 = __nodes_to_add360;
        ternary465 = (unsigned long)t466;
      } else {
        unsigned long c467 = 0;
        ternary465 = (unsigned long)c467;
      }
      unsigned int** ptr468 = &(ptr463)[ternary465];
      __new_nstart364 = ptr468;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base469 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base470 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base469->_M_impl) + 0);
      unsigned int** t471 = base470->_M_start._M_node;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base472 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base473 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base472->_M_impl) + 0);
      unsigned int** t474 = base473->_M_finish._M_node;
      int c475 = 1;
      unsigned int** ptr476 = &(t474)[c475];
      unsigned int** t477 = __new_nstart364;
      unsigned int** r478 = unsigned_int___std__copy_unsigned_int____unsigned_int___(t471, ptr476, t477);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base479 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base480 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base481 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base480->_M_impl) + 0);
      unsigned int** t482 = base481->_M_map;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base483 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base484 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base483->_M_impl) + 0);
      unsigned long t485 = base484->_M_map_size;
      std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_map(base479, t482, t485);
      unsigned int** t486 = __new_map431;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base487 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base488 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base487->_M_impl) + 0);
      base488->_M_map = t486;
      unsigned long t489 = __new_map_size429;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base490 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base491 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base490->_M_impl) + 0);
      base491->_M_map_size = t489;
    }
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base492 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base493 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base492->_M_impl) + 0);
  unsigned int** t494 = __new_nstart364;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(&base493->_M_start, t494);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base495 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t365 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base496 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base495->_M_impl) + 0);
  unsigned int** t497 = __new_nstart364;
  unsigned long t498 = __old_num_nodes362;
  unsigned int** ptr499 = &(t497)[t498];
  int c500 = -1;
  unsigned int** ptr501 = &(ptr499)[c500];
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(&base496->_M_finish, ptr501);
  return;
}

// function: _ZNSt5dequeIjSaIjEE22_M_reserve_map_at_backEm
void std__deque_unsigned_int__std__allocator_unsigned_int______M_reserve_map_at_back(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v502, unsigned long v503) {
bb504:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this505;
  unsigned long __nodes_to_add506;
  this505 = v502;
  __nodes_to_add506 = v503;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t507 = this505;
    unsigned long t508 = __nodes_to_add506;
    unsigned long c509 = 1;
    unsigned long b510 = t508 + c509;
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base511 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t507 + 0);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base512 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base511->_M_impl) + 0);
    unsigned long t513 = base512->_M_map_size;
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base514 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t507 + 0);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base515 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base514->_M_impl) + 0);
    unsigned int** t516 = base515->_M_finish._M_node;
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base517 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t507 + 0);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base518 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base517->_M_impl) + 0);
    unsigned int** t519 = base518->_M_map;
    long diff520 = t516 - t519;
    unsigned long cast521 = (unsigned long)diff520;
    unsigned long b522 = t513 - cast521;
    _Bool c523 = ((b510 > b522)) ? 1 : 0;
    if (c523) {
      unsigned long t524 = __nodes_to_add506;
      _Bool c525 = 0;
      std__deque_unsigned_int__std__allocator_unsigned_int______M_reallocate_map(t507, t524, c525);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIjSaIjEE16_M_push_back_auxIJRKjEEEvDpOT_
void void_std__deque_unsigned_int__std__allocator_unsigned_int______M_push_back_aux_unsigned_int_const__(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v526, unsigned int* v527) {
bb528:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this529;
  unsigned int* __args530;
  this529 = v526;
  __args530 = v527;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t531 = this529;
    unsigned long r532 = std__deque_unsigned_int__std__allocator_unsigned_int_____size___const(t531);
    unsigned long r533 = std__deque_unsigned_int__std__allocator_unsigned_int_____max_size___const(t531);
    _Bool c534 = ((r532 == r533)) ? 1 : 0;
    if (c534) {
      char* cast535 = (char*)&(_str_5);
      std____throw_length_error(cast535);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c536 = 1;
  std__deque_unsigned_int__std__allocator_unsigned_int______M_reserve_map_at_back(t531, c536);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base537 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t531 + 0);
  unsigned int* r538 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_allocate_node(base537);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base539 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t531 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base540 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base539->_M_impl) + 0);
  unsigned int** t541 = base540->_M_finish._M_node;
  int c542 = 1;
  unsigned int** ptr543 = &(t541)[c542];
  *ptr543 = r538;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base545 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t531 + 0);
      struct std__allocator_unsigned_int_* base546 = (struct std__allocator_unsigned_int_*)((char *)&(base545->_M_impl) + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base547 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t531 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base548 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base547->_M_impl) + 0);
      unsigned int* t549 = base548->_M_finish._M_cur;
      unsigned int* t550 = __args530;
      void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_const__(base546, t549, t550);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base551 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t531 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base552 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base551->_M_impl) + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base553 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t531 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base554 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base553->_M_impl) + 0);
      unsigned int** t555 = base554->_M_finish._M_node;
      int c556 = 1;
      unsigned int** ptr557 = &(t555)[c556];
      std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(&base552->_M_finish, ptr557);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base558 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t531 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base559 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base558->_M_impl) + 0);
      unsigned int* t560 = base559->_M_finish._M_first;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base561 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t531 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base562 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base561->_M_impl) + 0);
      base562->_M_finish._M_cur = t560;
    cir_try_dispatch544: ;
    if (__cir_exc_active) {
    {
      int ca_tok563 = 0;
      void* ca_exn564 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base565 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t531 + 0);
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base566 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t531 + 0);
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base567 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base566->_M_impl) + 0);
        unsigned int** t568 = base567->_M_finish._M_node;
        int c569 = 1;
        unsigned int** ptr570 = &(t568)[c569];
        unsigned int* t571 = *ptr570;
        std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_node(base565, t571);
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

// function: _ZNSt5dequeIjSaIjEE9push_backERKj
void std__deque_unsigned_int__std__allocator_unsigned_int_____push_back(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v572, unsigned int* v573) {
bb574:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this575;
  unsigned int* __x576;
  this575 = v572;
  __x576 = v573;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t577 = this575;
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base578 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t577 + 0);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base579 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base578->_M_impl) + 0);
    unsigned int* t580 = base579->_M_finish._M_cur;
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base581 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t577 + 0);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base582 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base581->_M_impl) + 0);
    unsigned int* t583 = base582->_M_finish._M_last;
    int c584 = -1;
    unsigned int* ptr585 = &(t583)[c584];
    _Bool c586 = ((t580 != ptr585)) ? 1 : 0;
    if (c586) {
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base587 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t577 + 0);
      struct std__allocator_unsigned_int_* base588 = (struct std__allocator_unsigned_int_*)((char *)&(base587->_M_impl) + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base589 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t577 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base590 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base589->_M_impl) + 0);
      unsigned int* t591 = base590->_M_finish._M_cur;
      unsigned int* t592 = __x576;
      void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_const__(base588, t591, t592);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base593 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t577 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base594 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base593->_M_impl) + 0);
      unsigned int* t595 = base594->_M_finish._M_cur;
      int c596 = 1;
      unsigned int* ptr597 = &(t595)[c596];
      base594->_M_finish._M_cur = ptr597;
    } else {
      unsigned int* t598 = __x576;
      void_std__deque_unsigned_int__std__allocator_unsigned_int______M_push_back_aux_unsigned_int_const__(t577, t598);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIjRjPjEppEv
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___3(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v599) {
bb600:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* this601;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __retval602;
  this601 = v599;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t603 = this601;
  unsigned int* t604 = t603->_M_cur;
  int c605 = 1;
  unsigned int* ptr606 = &(t604)[c605];
  t603->_M_cur = ptr606;
    unsigned int* t607 = t603->_M_cur;
    unsigned int* t608 = t603->_M_last;
    _Bool c609 = ((t607 == t608)) ? 1 : 0;
    if (c609) {
      unsigned int** t610 = t603->_M_node;
      int c611 = 1;
      unsigned int** ptr612 = &(t610)[c611];
      std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(t603, ptr612);
      unsigned int* t613 = t603->_M_first;
      t603->_M_cur = t613;
    }
  __retval602 = t603;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t614 = __retval602;
  return t614;
}

// function: _ZStmiRKSt15_Deque_iteratorIjRjPjES4_
long std__operator_(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v615, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v616) {
bb617:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __x618;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __y619;
  long __retval620;
  __x618 = v615;
  __y619 = v616;
  unsigned long r621 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
  long cast622 = (long)r621;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t623 = __x618;
  unsigned int** t624 = t623->_M_node;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t625 = __y619;
  unsigned int** t626 = t625->_M_node;
  long diff627 = t624 - t626;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t628 = __x618;
  unsigned int** t629 = t628->_M_node;
  _Bool cast630 = (_Bool)t629;
  long cast631 = (long)cast630;
  long b632 = diff627 - cast631;
  long b633 = cast622 * b632;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t634 = __x618;
  unsigned int* t635 = t634->_M_cur;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t636 = __x618;
  unsigned int* t637 = t636->_M_first;
  long diff638 = t635 - t637;
  long b639 = b633 + diff638;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t640 = __y619;
  unsigned int* t641 = t640->_M_last;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t642 = __y619;
  unsigned int* t643 = t642->_M_cur;
  long diff644 = t641 - t643;
  long b645 = b639 + diff644;
  __retval620 = b645;
  long t646 = __retval620;
  return t646;
}

// function: _ZSteqRKSt15_Deque_iteratorIjRjPjES4_
_Bool std__operator__(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v647, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v648) {
bb649:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __x650;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __y651;
  _Bool __retval652;
  __x650 = v647;
  __y651 = v648;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t653 = __x650;
  unsigned int* t654 = t653->_M_cur;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t655 = __y651;
  unsigned int* t656 = t655->_M_cur;
  _Bool c657 = ((t654 == t656)) ? 1 : 0;
  __retval652 = c657;
  _Bool t658 = __retval652;
  return t658;
}

// function: _ZSt12__niter_wrapISt15_Deque_iteratorIjRjPjEET_RKS4_S4_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_wrap_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v659, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v660) {
bb661:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* unnamed662;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __res663;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval664;
  unnamed662 = v659;
  __res663 = v660;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__retval664, &__res663);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t665 = __retval664;
  return t665;
}

// function: _ZSt3minIlERKT_S2_S2_
long* long_const__std__min_long_(long* v666, long* v667) {
bb668:
  long* __a669;
  long* __b670;
  long* __retval671;
  __a669 = v666;
  __b670 = v667;
    long* t672 = __b670;
    long t673 = *t672;
    long* t674 = __a669;
    long t675 = *t674;
    _Bool c676 = ((t673 < t675)) ? 1 : 0;
    if (c676) {
      long* t677 = __b670;
      __retval671 = t677;
      long* t678 = __retval671;
      return t678;
    }
  long* t679 = __a669;
  __retval671 = t679;
  long* t680 = __retval671;
  return t680;
}

// function: _ZSt10__distanceIPjENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_unsigned_int____difference_type_std____distance_unsigned_int__(unsigned int* v681, unsigned int* v682, struct std__random_access_iterator_tag v683) {
bb684:
  unsigned int* __first685;
  unsigned int* __last686;
  struct std__random_access_iterator_tag unnamed687;
  long __retval688;
  __first685 = v681;
  __last686 = v682;
  unnamed687 = v683;
  unsigned int* t689 = __last686;
  unsigned int* t690 = __first685;
  long diff691 = t689 - t690;
  __retval688 = diff691;
  long t692 = __retval688;
  return t692;
}

// function: _ZSt19__iterator_categoryIPjENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_unsigned_int____iterator_category_std____iterator_category_unsigned_int__(unsigned int** v693) {
bb694:
  unsigned int** unnamed695;
  struct std__random_access_iterator_tag __retval696;
  unnamed695 = v693;
  struct std__random_access_iterator_tag t697 = __retval696;
  return t697;
}

// function: _ZSt8distanceIPjENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_unsigned_int____difference_type_std__distance_unsigned_int__(unsigned int* v698, unsigned int* v699) {
bb700:
  unsigned int* __first701;
  unsigned int* __last702;
  long __retval703;
  struct std__random_access_iterator_tag agg_tmp0704;
  __first701 = v698;
  __last702 = v699;
  unsigned int* t705 = __first701;
  unsigned int* t706 = __last702;
  struct std__random_access_iterator_tag r707 = std__iterator_traits_unsigned_int____iterator_category_std____iterator_category_unsigned_int__(&__first701);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0704 = r707;
  struct std__random_access_iterator_tag t708 = agg_tmp0704;
  long r709 = std__iterator_traits_unsigned_int____difference_type_std____distance_unsigned_int__(t705, t706, t708);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval703 = r709;
  long t710 = __retval703;
  return t710;
}

// function: _ZSt9__advanceIPjlEvRT_T0_St26random_access_iterator_tag
void void_std____advance_unsigned_int___long_(unsigned int** v711, long v712, struct std__random_access_iterator_tag v713) {
bb714:
  unsigned int** __i715;
  long __n716;
  struct std__random_access_iterator_tag unnamed717;
  __i715 = v711;
  __n716 = v712;
  unnamed717 = v713;
    long t718 = __n716;
    _Bool isconst719 = 0;
    _Bool ternary720;
    if (isconst719) {
      long t721 = __n716;
      long c722 = 1;
      _Bool c723 = ((t721 == c722)) ? 1 : 0;
      ternary720 = (_Bool)c723;
    } else {
      _Bool c724 = 0;
      ternary720 = (_Bool)c724;
    }
    if (ternary720) {
      unsigned int** t725 = __i715;
      unsigned int* t726 = *t725;
      int c727 = 1;
      unsigned int* ptr728 = &(t726)[c727];
      *t725 = ptr728;
    } else {
        long t729 = __n716;
        _Bool isconst730 = 0;
        _Bool ternary731;
        if (isconst730) {
          long t732 = __n716;
          long c733 = -1;
          _Bool c734 = ((t732 == c733)) ? 1 : 0;
          ternary731 = (_Bool)c734;
        } else {
          _Bool c735 = 0;
          ternary731 = (_Bool)c735;
        }
        if (ternary731) {
          unsigned int** t736 = __i715;
          unsigned int* t737 = *t736;
          int c738 = -1;
          unsigned int* ptr739 = &(t737)[c738];
          *t736 = ptr739;
        } else {
          long t740 = __n716;
          unsigned int** t741 = __i715;
          unsigned int* t742 = *t741;
          unsigned int* ptr743 = &(t742)[t740];
          *t741 = ptr743;
        }
    }
  return;
}

// function: _ZSt7advanceIPjlEvRT_T0_
void void_std__advance_unsigned_int___long_(unsigned int** v744, long v745) {
bb746:
  unsigned int** __i747;
  long __n748;
  long __d749;
  struct std__random_access_iterator_tag agg_tmp0750;
  __i747 = v744;
  __n748 = v745;
  long t751 = __n748;
  __d749 = t751;
  unsigned int** t752 = __i747;
  long t753 = __d749;
  unsigned int** t754 = __i747;
  struct std__random_access_iterator_tag r755 = std__iterator_traits_unsigned_int____iterator_category_std____iterator_category_unsigned_int__(t754);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0750 = r755;
  struct std__random_access_iterator_tag t756 = agg_tmp0750;
  void_std____advance_unsigned_int___long_(t752, t753, t756);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12__assign_oneILb1EPjS0_EvRT0_RT1_
void void_std____assign_one_true__unsigned_int___unsigned_int__(unsigned int** v757, unsigned int** v758) {
bb759:
  unsigned int** __out760;
  unsigned int** __in761;
  __out760 = v757;
  __in761 = v758;
    unsigned int** t762 = __in761;
    unsigned int* t763 = *t762;
    unsigned int t764 = *t763;
    unsigned int** t765 = __out760;
    unsigned int* t766 = *t765;
    *t766 = t764;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPjS0_ET1_T0_S2_S1_
unsigned int* unsigned_int__std____copy_move_backward_a2_true__unsigned_int___unsigned_int__(unsigned int* v767, unsigned int* v768, unsigned int* v769) {
bb770:
  unsigned int* __first771;
  unsigned int* __last772;
  unsigned int* __result773;
  unsigned int* __retval774;
  __first771 = v767;
  __last772 = v768;
  __result773 = v769;
      _Bool r775 = std__is_constant_evaluated();
      if (r775) {
      } else {
          long __n776;
          unsigned int* t777 = __first771;
          unsigned int* t778 = __last772;
          long r779 = std__iterator_traits_unsigned_int____difference_type_std__distance_unsigned_int__(t777, t778);
          if (__cir_exc_active) {
            unsigned int* __cir_eh_ret = (unsigned int*)0;
            return __cir_eh_ret;
          }
          __n776 = r779;
          long t780 = __n776;
          long u781 = -t780;
          void_std__advance_unsigned_int___long_(&__result773, u781);
          if (__cir_exc_active) {
            unsigned int* __cir_eh_ret = (unsigned int*)0;
            return __cir_eh_ret;
          }
            long t782 = __n776;
            long c783 = 1;
            _Bool c784 = ((t782 > c783)) ? 1 : 0;
            if (c784) {
              unsigned int* t785 = __result773;
              void* cast786 = (void*)t785;
              unsigned int* t787 = __first771;
              void* cast788 = (void*)t787;
              long t789 = __n776;
              unsigned long cast790 = (unsigned long)t789;
              unsigned long c791 = 4;
              unsigned long b792 = cast790 * c791;
              void* r793 = memmove(cast786, cast788, b792);
            } else {
                long t794 = __n776;
                long c795 = 1;
                _Bool c796 = ((t794 == c795)) ? 1 : 0;
                if (c796) {
                  void_std____assign_one_true__unsigned_int___unsigned_int__(&__result773, &__first771);
                  if (__cir_exc_active) {
                    unsigned int* __cir_eh_ret = (unsigned int*)0;
                    return __cir_eh_ret;
                  }
                }
            }
          unsigned int* t797 = __result773;
          __retval774 = t797;
          unsigned int* t798 = __retval774;
          return t798;
      }
    while (1) {
      unsigned int* t799 = __first771;
      unsigned int* t800 = __last772;
      _Bool c801 = ((t799 != t800)) ? 1 : 0;
      if (!c801) break;
        unsigned int* t802 = __last772;
        int c803 = -1;
        unsigned int* ptr804 = &(t802)[c803];
        __last772 = ptr804;
        unsigned int* t805 = __result773;
        int c806 = -1;
        unsigned int* ptr807 = &(t805)[c806];
        __result773 = ptr807;
        void_std____assign_one_true__unsigned_int___unsigned_int__(&__result773, &__last772);
        if (__cir_exc_active) {
          unsigned int* __cir_eh_ret = (unsigned int*)0;
          return __cir_eh_ret;
        }
    }
  unsigned int* t808 = __result773;
  __retval774 = t808;
  unsigned int* t809 = __retval774;
  return t809;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPjS0_ET1_T0_S2_S1_
unsigned int* unsigned_int__std____copy_move_backward_a1_true__unsigned_int___unsigned_int__(unsigned int* v810, unsigned int* v811, unsigned int* v812) {
bb813:
  unsigned int* __first814;
  unsigned int* __last815;
  unsigned int* __result816;
  unsigned int* __retval817;
  __first814 = v810;
  __last815 = v811;
  __result816 = v812;
  unsigned int* t818 = __first814;
  unsigned int* t819 = __last815;
  unsigned int* t820 = __result816;
  unsigned int* r821 = unsigned_int__std____copy_move_backward_a2_true__unsigned_int___unsigned_int__(t818, t819, t820);
  if (__cir_exc_active) {
    unsigned int* __cir_eh_ret = (unsigned int*)0;
    return __cir_eh_ret;
  }
  __retval817 = r821;
  unsigned int* t822 = __retval817;
  return t822;
}

// function: _ZNSt15_Deque_iteratorIjRjPjEmIEl
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator__(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v823, long v824) {
bb825:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* this826;
  long __n827;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __retval828;
  this826 = v823;
  __n827 = v824;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t829 = this826;
  long t830 = __n827;
  long u831 = -t830;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r832 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___2(t829, u831);
  __retval828 = r832;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t833 = __retval828;
  return t833;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPjjEN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT0_EE7__valueESt15_Deque_iteratorIT1_RS5_PS5_EE6__typeES3_S3_S8_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_backward_a1_true__unsigned_int___unsigned_int_(unsigned int* v834, unsigned int* v835, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v836) {
bb837:
  unsigned int* __first838;
  unsigned int* __last839;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __result840;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval841;
  long __len842;
  __first838 = v834;
  __last839 = v835;
  __result840 = v836;
  unsigned int* t843 = __last839;
  unsigned int* t844 = __first838;
  long diff845 = t843 - t844;
  __len842 = diff845;
    while (1) {
      long t846 = __len842;
      long c847 = 0;
      _Bool c848 = ((t846 > c847)) ? 1 : 0;
      if (!c848) break;
        long __rlen849;
        unsigned int* __rend850;
        long __clen851;
        unsigned int* t852 = __result840._M_cur;
        unsigned int* t853 = __result840._M_first;
        long diff854 = t852 - t853;
        __rlen849 = diff854;
        unsigned int* t855 = __result840._M_cur;
        __rend850 = t855;
          long t856 = __rlen849;
          _Bool cast857 = (_Bool)t856;
          _Bool u858 = !cast857;
          if (u858) {
            unsigned long r859 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
            long cast860 = (long)r859;
            __rlen849 = cast860;
            unsigned int** t861 = __result840._M_node;
            int c862 = -1;
            unsigned int** ptr863 = &(t861)[c862];
            unsigned int* t864 = *ptr863;
            long t865 = __rlen849;
            unsigned int* ptr866 = &(t864)[t865];
            __rend850 = ptr866;
          }
        long* r867 = long_const__std__min_long_(&__len842, &__rlen849);
        if (__cir_exc_active) {
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t868 = *r867;
        __clen851 = t868;
        unsigned int* t869 = __last839;
        long t870 = __clen851;
        long u871 = -t870;
        unsigned int* ptr872 = &(t869)[u871];
        unsigned int* t873 = __last839;
        unsigned int* t874 = __rend850;
        unsigned int* r875 = unsigned_int__std____copy_move_backward_a1_true__unsigned_int___unsigned_int__(ptr872, t873, t874);
        if (__cir_exc_active) {
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t876 = __clen851;
        unsigned int* t877 = __last839;
        long u878 = -t876;
        unsigned int* ptr879 = &(t877)[u878];
        __last839 = ptr879;
        long t880 = __clen851;
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r881 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator__(&__result840, t880);
        long t882 = __clen851;
        long t883 = __len842;
        long b884 = t883 - t882;
        __len842 = b884;
    }
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__retval841, &__result840);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t885 = __retval841;
  return t885;
}

// function: _ZNSt15_Deque_iteratorIjRjPjEaSERKS2_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator_(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v886, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v887) {
bb888:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* this889;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* unnamed890;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __retval891;
  this889 = v886;
  unnamed890 = v887;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t892 = this889;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t893 = unnamed890;
  unsigned int* t894 = t893->_M_cur;
  t892->_M_cur = t894;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t895 = unnamed890;
  unsigned int* t896 = t895->_M_first;
  t892->_M_first = t896;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t897 = unnamed890;
  unsigned int* t898 = t897->_M_last;
  t892->_M_last = t898;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t899 = unnamed890;
  unsigned int** t900 = t899->_M_node;
  t892->_M_node = t900;
  __retval891 = t892;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t901 = __retval891;
  return t901;
}

// function: _ZSt24__copy_move_backward_ditILb1EjRjPjSt15_Deque_iteratorIjS0_S1_EET3_S2_IT0_T1_T2_ES8_S4_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_backward_dit_true__unsigned_int__unsigned_int___unsigned_int___std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v902, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v903, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v904) {
bb905:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first906;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last907;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __result908;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval909;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp3910;
  __first906 = v902;
  __last907 = v903;
  __result908 = v904;
    unsigned int** t911 = __first906._M_node;
    unsigned int** t912 = __last907._M_node;
    _Bool c913 = ((t911 != t912)) ? 1 : 0;
    if (c913) {
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp0914;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp0915;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp2916;
      unsigned int* t917 = __last907._M_first;
      unsigned int* t918 = __last907._M_cur;
      std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp0915, &__result908);
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t919 = agg_tmp0915;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r920 = __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_backward_a1_true__unsigned_int___unsigned_int_(t917, t918, t919);
      if (__cir_exc_active) {
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp0914 = r920;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r921 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator_(&__result908, &ref_tmp0914);
        unsigned int** __node922;
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp1923;
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp1924;
        unsigned int** t925 = __last907._M_node;
        int c926 = -1;
        unsigned int** ptr927 = &(t925)[c926];
        __node922 = ptr927;
        while (1) {
          unsigned int** t929 = __node922;
          unsigned int** t930 = __first906._M_node;
          _Bool c931 = ((t929 != t930)) ? 1 : 0;
          if (!c931) break;
          unsigned int** t932 = __node922;
          unsigned int* t933 = *t932;
          unsigned int** t934 = __node922;
          unsigned int* t935 = *t934;
          unsigned long r936 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
          unsigned int* ptr937 = &(t935)[r936];
          std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp1924, &__result908);
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t938 = agg_tmp1924;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r939 = __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_backward_a1_true__unsigned_int___unsigned_int_(t933, ptr937, t938);
          if (__cir_exc_active) {
            struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ref_tmp1923 = r939;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r940 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator_(&__result908, &ref_tmp1923);
        for_step928: ;
          unsigned int** t941 = __node922;
          int c942 = -1;
          unsigned int** ptr943 = &(t941)[c942];
          __node922 = ptr943;
        }
      unsigned int* t944 = __first906._M_cur;
      unsigned int* t945 = __first906._M_last;
      std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp2916, &__result908);
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t946 = agg_tmp2916;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r947 = __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_backward_a1_true__unsigned_int___unsigned_int_(t944, t945, t946);
      if (__cir_exc_active) {
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval909 = r947;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t948 = __retval909;
      return t948;
    }
  unsigned int* t949 = __first906._M_cur;
  unsigned int* t950 = __last907._M_cur;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp3910, &__result908);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t951 = agg_tmp3910;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r952 = __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_backward_a1_true__unsigned_int___unsigned_int_(t949, t950, t951);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval909 = r952;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t953 = __retval909;
  return t953;
}

// function: _ZSt23__copy_move_backward_a1ILb1EjRjPjjESt15_Deque_iteratorIT3_RS3_PS3_ES2_IT0_T1_T2_ESA_S6_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_backward_a1_true__unsigned_int__unsigned_int___unsigned_int___unsigned_int_(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v954, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v955, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v956) {
bb957:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first958;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last959;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __result960;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval961;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp0962;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp1963;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp2964;
  __first958 = v954;
  __last959 = v955;
  __result960 = v956;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp0962, &__first958);
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp1963, &__last959);
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp2964, &__result960);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t965 = agg_tmp0962;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t966 = agg_tmp1963;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t967 = agg_tmp2964;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r968 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_backward_dit_true__unsigned_int__unsigned_int___unsigned_int___std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t965, t966, t967);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval961 = r968;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t969 = __retval961;
  return t969;
}

// function: _ZSt12__niter_baseISt15_Deque_iteratorIjRjPjEET_S4_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v970) {
bb971:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __it972;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval973;
  __it972 = v970;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__retval973, &__it972);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t974 = __retval973;
  return t974;
}

// function: _ZSt22__copy_move_backward_aILb1ESt15_Deque_iteratorIjRjPjES3_ET1_T0_S5_S4_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_backward_a_true__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v975, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v976, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v977) {
bb978:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first979;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last980;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __result981;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval982;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp0983;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp1984;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp2985;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp3986;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp4987;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp5988;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp6989;
  __first979 = v975;
  __last980 = v976;
  __result981 = v977;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp2985, &__first979);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t990 = agg_tmp2985;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r991 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t990);
  agg_tmp1984 = r991;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp4987, &__last980);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t992 = agg_tmp4987;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r993 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t992);
  agg_tmp3986 = r993;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp6989, &__result981);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t994 = agg_tmp6989;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r995 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t994);
  agg_tmp5988 = r995;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t996 = agg_tmp1984;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t997 = agg_tmp3986;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t998 = agg_tmp5988;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r999 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_backward_a1_true__unsigned_int__unsigned_int___unsigned_int___unsigned_int_(t996, t997, t998);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp0983 = r999;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1000 = agg_tmp0983;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1001 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_wrap_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(&__result981, t1000);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval982 = r1001;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1002 = __retval982;
  return t1002;
}

// function: _ZSt12__miter_baseISt15_Deque_iteratorIjRjPjEET_S4_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____miter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1003) {
bb1004:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __it1005;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1006;
  __it1005 = v1003;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__retval1006, &__it1005);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1007 = __retval1006;
  return t1007;
}

// function: _ZSt13move_backwardISt15_Deque_iteratorIjRjPjES3_ET0_T_S5_S4_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std__move_backward_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1008, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1009, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1010) {
bb1011:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first1012;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last1013;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __result1014;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1015;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01016;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11017;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp21018;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp31019;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp41020;
  __first1012 = v1008;
  __last1013 = v1009;
  __result1014 = v1010;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp11017, &__first1012);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1021 = agg_tmp11017;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1022 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____miter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1021);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01016 = r1022;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp31019, &__last1013);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1023 = agg_tmp31019;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1024 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____miter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1023);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21018 = r1024;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp41020, &__result1014);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1025 = agg_tmp01016;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1026 = agg_tmp21018;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1027 = agg_tmp41020;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1028 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_backward_a_true__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1025, t1026, t1027);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1015 = r1028;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1029 = __retval1015;
  return t1029;
}

// function: _ZNKSt5dequeIjSaIjEE5emptyEv
_Bool std__deque_unsigned_int__std__allocator_unsigned_int_____empty___const(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1030) {
bb1031:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1032;
  _Bool __retval1033;
  this1032 = v1030;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1034 = this1032;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1035 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1034 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1036 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1035->_M_impl) + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1037 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1034 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1038 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1037->_M_impl) + 0);
  _Bool r1039 = std__operator__(&base1036->_M_finish, &base1038->_M_start);
  __retval1033 = r1039;
  _Bool t1040 = __retval1033;
  return t1040;
}

// function: _ZNSt16allocator_traitsISaIjEE7destroyIjEEvRS0_PT_
void void_std__allocator_traits_std__allocator_unsigned_int_____destroy_unsigned_int_(struct std__allocator_unsigned_int_* v1041, unsigned int* v1042) {
bb1043:
  struct std__allocator_unsigned_int_* __a1044;
  unsigned int* __p1045;
  __a1044 = v1041;
  __p1045 = v1042;
  unsigned int* t1046 = __p1045;
  void_std__destroy_at_unsigned_int_(t1046);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIjSaIjEE16_M_pop_front_auxEv
void std__deque_unsigned_int__std__allocator_unsigned_int______M_pop_front_aux(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1047) {
bb1048:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1049;
  this1049 = v1047;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1050 = this1049;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1051 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1050 + 0);
  struct std__allocator_unsigned_int_* r1052 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base1051);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1053 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1050 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1054 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1053->_M_impl) + 0);
  unsigned int* t1055 = base1054->_M_start._M_cur;
  void_std__allocator_traits_std__allocator_unsigned_int_____destroy_unsigned_int_(r1052, t1055);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1056 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1050 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1057 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1050 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1058 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1057->_M_impl) + 0);
  unsigned int* t1059 = base1058->_M_start._M_first;
  std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_node(base1056, t1059);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1060 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1050 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1061 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1060->_M_impl) + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1062 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1050 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1063 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1062->_M_impl) + 0);
  unsigned int** t1064 = base1063->_M_start._M_node;
  int c1065 = 1;
  unsigned int** ptr1066 = &(t1064)[c1065];
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(&base1061->_M_start, ptr1066);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1067 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1050 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1068 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1067->_M_impl) + 0);
  unsigned int* t1069 = base1068->_M_start._M_first;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1070 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1050 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1071 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1070->_M_impl) + 0);
  base1071->_M_start._M_cur = t1069;
  return;
}

// function: _ZNSt5dequeIjSaIjEE9pop_frontEv
void std__deque_unsigned_int__std__allocator_unsigned_int_____pop_front(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1072) {
bb1073:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1074;
  this1074 = v1072;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1075 = this1074;
    do {
          _Bool r1076 = std__deque_unsigned_int__std__allocator_unsigned_int_____empty___const(t1075);
          if (r1076) {
            char* cast1077 = (char*)&(_str_6);
            int c1078 = 1643;
            char* cast1079 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIjSaIjEE9pop_frontEv);
            char* cast1080 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast1077, c1078, cast1079, cast1080);
          }
      _Bool c1081 = 0;
      if (!c1081) break;
    } while (1);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1082 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1075 + 0);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1083 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1082->_M_impl) + 0);
    unsigned int* t1084 = base1083->_M_start._M_cur;
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1085 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1075 + 0);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1086 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1085->_M_impl) + 0);
    unsigned int* t1087 = base1086->_M_start._M_last;
    int c1088 = -1;
    unsigned int* ptr1089 = &(t1087)[c1088];
    _Bool c1090 = ((t1084 != ptr1089)) ? 1 : 0;
    if (c1090) {
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1091 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1075 + 0);
      struct std__allocator_unsigned_int_* r1092 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base1091);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1093 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1075 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1094 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1093->_M_impl) + 0);
      unsigned int* t1095 = base1094->_M_start._M_cur;
      void_std__allocator_traits_std__allocator_unsigned_int_____destroy_unsigned_int_(r1092, t1095);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1096 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1075 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1097 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1096->_M_impl) + 0);
      unsigned int* t1098 = base1097->_M_start._M_cur;
      int c1099 = 1;
      unsigned int* ptr1100 = &(t1098)[c1099];
      base1097->_M_start._M_cur = ptr1100;
    } else {
      std__deque_unsigned_int__std__allocator_unsigned_int______M_pop_front_aux(t1075);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt14__copy_move_a2ILb1EPjS0_S0_ET2_T0_T1_S1_
unsigned int* unsigned_int__std____copy_move_a2_true__unsigned_int___unsigned_int___unsigned_int__(unsigned int* v1101, unsigned int* v1102, unsigned int* v1103) {
bb1104:
  unsigned int* __first1105;
  unsigned int* __last1106;
  unsigned int* __result1107;
  unsigned int* __retval1108;
  __first1105 = v1101;
  __last1106 = v1102;
  __result1107 = v1103;
      _Bool r1109 = std____is_constant_evaluated();
      if (r1109) {
      } else {
          long __n1110;
          unsigned int* t1111 = __first1105;
          unsigned int* t1112 = __last1106;
          long r1113 = std__iterator_traits_unsigned_int____difference_type_std__distance_unsigned_int__(t1111, t1112);
          if (__cir_exc_active) {
            unsigned int* __cir_eh_ret = (unsigned int*)0;
            return __cir_eh_ret;
          }
          __n1110 = r1113;
            long t1114 = __n1110;
            long c1115 = 1;
            _Bool c1116 = ((t1114 > c1115)) ? 1 : 0;
            if (c1116) {
              unsigned int* t1117 = __result1107;
              void* cast1118 = (void*)t1117;
              unsigned int* t1119 = __first1105;
              void* cast1120 = (void*)t1119;
              long t1121 = __n1110;
              unsigned long cast1122 = (unsigned long)t1121;
              unsigned long c1123 = 4;
              unsigned long b1124 = cast1122 * c1123;
              void* r1125 = memmove(cast1118, cast1120, b1124);
              long t1126 = __n1110;
              unsigned int* t1127 = __result1107;
              unsigned int* ptr1128 = &(t1127)[t1126];
              __result1107 = ptr1128;
            } else {
                long t1129 = __n1110;
                long c1130 = 1;
                _Bool c1131 = ((t1129 == c1130)) ? 1 : 0;
                if (c1131) {
                  void_std____assign_one_true__unsigned_int___unsigned_int__(&__result1107, &__first1105);
                  if (__cir_exc_active) {
                    unsigned int* __cir_eh_ret = (unsigned int*)0;
                    return __cir_eh_ret;
                  }
                  unsigned int* t1132 = __result1107;
                  int c1133 = 1;
                  unsigned int* ptr1134 = &(t1132)[c1133];
                  __result1107 = ptr1134;
                }
            }
          unsigned int* t1135 = __result1107;
          __retval1108 = t1135;
          unsigned int* t1136 = __retval1108;
          return t1136;
      }
    while (1) {
      unsigned int* t1138 = __first1105;
      unsigned int* t1139 = __last1106;
      _Bool c1140 = ((t1138 != t1139)) ? 1 : 0;
      if (!c1140) break;
      void_std____assign_one_true__unsigned_int___unsigned_int__(&__result1107, &__first1105);
      if (__cir_exc_active) {
        unsigned int* __cir_eh_ret = (unsigned int*)0;
        return __cir_eh_ret;
      }
    for_step1137: ;
      unsigned int* t1141 = __result1107;
      int c1142 = 1;
      unsigned int* ptr1143 = &(t1141)[c1142];
      __result1107 = ptr1143;
      unsigned int* t1144 = __first1105;
      int c1145 = 1;
      unsigned int* ptr1146 = &(t1144)[c1145];
      __first1105 = ptr1146;
    }
  unsigned int* t1147 = __result1107;
  __retval1108 = t1147;
  unsigned int* t1148 = __retval1108;
  return t1148;
}

// function: _ZSt14__copy_move_a1ILb1EPjS0_ET1_T0_S2_S1_
unsigned int* unsigned_int__std____copy_move_a1_true__unsigned_int___unsigned_int__(unsigned int* v1149, unsigned int* v1150, unsigned int* v1151) {
bb1152:
  unsigned int* __first1153;
  unsigned int* __last1154;
  unsigned int* __result1155;
  unsigned int* __retval1156;
  __first1153 = v1149;
  __last1154 = v1150;
  __result1155 = v1151;
  unsigned int* t1157 = __first1153;
  unsigned int* t1158 = __last1154;
  unsigned int* t1159 = __result1155;
  unsigned int* r1160 = unsigned_int__std____copy_move_a2_true__unsigned_int___unsigned_int___unsigned_int__(t1157, t1158, t1159);
  if (__cir_exc_active) {
    unsigned int* __cir_eh_ret = (unsigned int*)0;
    return __cir_eh_ret;
  }
  __retval1156 = r1160;
  unsigned int* t1161 = __retval1156;
  return t1161;
}

// function: _ZSt14__copy_move_a1ILb1EPjjEN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT0_EE7__valueESt15_Deque_iteratorIT1_RS5_PS5_EE6__typeES3_S3_S8_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_a1_true__unsigned_int___unsigned_int_(unsigned int* v1162, unsigned int* v1163, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1164) {
bb1165:
  unsigned int* __first1166;
  unsigned int* __last1167;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __result1168;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1169;
  long __len1170;
  __first1166 = v1162;
  __last1167 = v1163;
  __result1168 = v1164;
  unsigned int* t1171 = __last1167;
  unsigned int* t1172 = __first1166;
  long diff1173 = t1171 - t1172;
  __len1170 = diff1173;
    while (1) {
      long t1174 = __len1170;
      long c1175 = 0;
      _Bool c1176 = ((t1174 > c1175)) ? 1 : 0;
      if (!c1176) break;
        long __clen1177;
        long ref_tmp01178;
        unsigned int* t1179 = __result1168._M_last;
        unsigned int* t1180 = __result1168._M_cur;
        long diff1181 = t1179 - t1180;
        ref_tmp01178 = diff1181;
        long* r1182 = long_const__std__min_long_(&__len1170, &ref_tmp01178);
        if (__cir_exc_active) {
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1183 = *r1182;
        __clen1177 = t1183;
        unsigned int* t1184 = __first1166;
        unsigned int* t1185 = __first1166;
        long t1186 = __clen1177;
        unsigned int* ptr1187 = &(t1185)[t1186];
        unsigned int* t1188 = __result1168._M_cur;
        unsigned int* r1189 = unsigned_int__std____copy_move_a1_true__unsigned_int___unsigned_int__(t1184, ptr1187, t1188);
        if (__cir_exc_active) {
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1190 = __clen1177;
        unsigned int* t1191 = __first1166;
        unsigned int* ptr1192 = &(t1191)[t1190];
        __first1166 = ptr1192;
        long t1193 = __clen1177;
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r1194 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___2(&__result1168, t1193);
        long t1195 = __clen1177;
        long t1196 = __len1170;
        long b1197 = t1196 - t1195;
        __len1170 = b1197;
    }
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__retval1169, &__result1168);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1198 = __retval1169;
  return t1198;
}

// function: _ZSt15__copy_move_ditILb1EjRjPjSt15_Deque_iteratorIjS0_S1_EET3_S2_IT0_T1_T2_ES8_S4_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_dit_true__unsigned_int__unsigned_int___unsigned_int___std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1199, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1200, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1201) {
bb1202:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first1203;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last1204;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __result1205;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1206;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp31207;
  __first1203 = v1199;
  __last1204 = v1200;
  __result1205 = v1201;
    unsigned int** t1208 = __first1203._M_node;
    unsigned int** t1209 = __last1204._M_node;
    _Bool c1210 = ((t1208 != t1209)) ? 1 : 0;
    if (c1210) {
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp01211;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01212;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp21213;
      unsigned int* t1214 = __first1203._M_cur;
      unsigned int* t1215 = __first1203._M_last;
      std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp01212, &__result1205);
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1216 = agg_tmp01212;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1217 = __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_a1_true__unsigned_int___unsigned_int_(t1214, t1215, t1216);
      if (__cir_exc_active) {
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp01211 = r1217;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r1218 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator_(&__result1205, &ref_tmp01211);
        unsigned int** __node1219;
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp11220;
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11221;
        unsigned int** t1222 = __first1203._M_node;
        int c1223 = 1;
        unsigned int** ptr1224 = &(t1222)[c1223];
        __node1219 = ptr1224;
        while (1) {
          unsigned int** t1226 = __node1219;
          unsigned int** t1227 = __last1204._M_node;
          _Bool c1228 = ((t1226 != t1227)) ? 1 : 0;
          if (!c1228) break;
          unsigned int** t1229 = __node1219;
          unsigned int* t1230 = *t1229;
          unsigned int** t1231 = __node1219;
          unsigned int* t1232 = *t1231;
          unsigned long r1233 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
          unsigned int* ptr1234 = &(t1232)[r1233];
          std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp11221, &__result1205);
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1235 = agg_tmp11221;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1236 = __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_a1_true__unsigned_int___unsigned_int_(t1230, ptr1234, t1235);
          if (__cir_exc_active) {
            struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ref_tmp11220 = r1236;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r1237 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator_(&__result1205, &ref_tmp11220);
        for_step1225: ;
          unsigned int** t1238 = __node1219;
          int c1239 = 1;
          unsigned int** ptr1240 = &(t1238)[c1239];
          __node1219 = ptr1240;
        }
      unsigned int* t1241 = __last1204._M_first;
      unsigned int* t1242 = __last1204._M_cur;
      std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp21213, &__result1205);
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1243 = agg_tmp21213;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1244 = __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_a1_true__unsigned_int___unsigned_int_(t1241, t1242, t1243);
      if (__cir_exc_active) {
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1206 = r1244;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1245 = __retval1206;
      return t1245;
    }
  unsigned int* t1246 = __first1203._M_cur;
  unsigned int* t1247 = __last1204._M_cur;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp31207, &__result1205);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1248 = agg_tmp31207;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1249 = __gnu_cxx____enable_if___is_random_access_iter_unsigned_int______value__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int________type_std____copy_move_a1_true__unsigned_int___unsigned_int_(t1246, t1247, t1248);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1206 = r1249;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1250 = __retval1206;
  return t1250;
}

// function: _ZSt14__copy_move_a1ILb1EjRjPjjESt15_Deque_iteratorIT3_RS3_PS3_ES2_IT0_T1_T2_ESA_S6_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_a1_true__unsigned_int__unsigned_int___unsigned_int___unsigned_int_(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1251, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1252, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1253) {
bb1254:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first1255;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last1256;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __result1257;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1258;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01259;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11260;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp21261;
  __first1255 = v1251;
  __last1256 = v1252;
  __result1257 = v1253;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp01259, &__first1255);
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp11260, &__last1256);
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp21261, &__result1257);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1262 = agg_tmp01259;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1263 = agg_tmp11260;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1264 = agg_tmp21261;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1265 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_dit_true__unsigned_int__unsigned_int___unsigned_int___std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1262, t1263, t1264);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1258 = r1265;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1266 = __retval1258;
  return t1266;
}

// function: _ZSt13__copy_move_aILb1ESt15_Deque_iteratorIjRjPjES3_ET1_T0_S5_S4_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_a_true__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1267, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1268, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1269) {
bb1270:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first1271;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last1272;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __result1273;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1274;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01275;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11276;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp21277;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp31278;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp41279;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp51280;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp61281;
  __first1271 = v1267;
  __last1272 = v1268;
  __result1273 = v1269;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp21277, &__first1271);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1282 = agg_tmp21277;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1283 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1282);
  agg_tmp11276 = r1283;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp41279, &__last1272);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1284 = agg_tmp41279;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1285 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1284);
  agg_tmp31278 = r1285;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp61281, &__result1273);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1286 = agg_tmp61281;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1287 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1286);
  agg_tmp51280 = r1287;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1288 = agg_tmp11276;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1289 = agg_tmp31278;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1290 = agg_tmp51280;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1291 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_a1_true__unsigned_int__unsigned_int___unsigned_int___unsigned_int_(t1288, t1289, t1290);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01275 = r1291;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1292 = agg_tmp01275;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1293 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____niter_wrap_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(&__result1273, t1292);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1274 = r1293;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1294 = __retval1274;
  return t1294;
}

// function: _ZSt4moveISt15_Deque_iteratorIjRjPjES3_ET0_T_S5_S4_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std__move_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1295, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1296, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1297) {
bb1298:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first1299;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last1300;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __result1301;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1302;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01303;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11304;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp21305;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp31306;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp41307;
  __first1299 = v1295;
  __last1300 = v1296;
  __result1301 = v1297;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp11304, &__first1299);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1308 = agg_tmp11304;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1309 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____miter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1308);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01303 = r1309;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp31306, &__last1300);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1310 = agg_tmp31306;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1311 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____miter_base_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1310);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21305 = r1311;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp41307, &__result1301);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1312 = agg_tmp01303;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1313 = agg_tmp21305;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1314 = agg_tmp41307;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1315 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std____copy_move_a_true__std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1312, t1313, t1314);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1302 = r1315;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1316 = __retval1302;
  return t1316;
}

// function: _ZNSt5dequeIjSaIjEE15_M_pop_back_auxEv
void std__deque_unsigned_int__std__allocator_unsigned_int______M_pop_back_aux(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1317) {
bb1318:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1319;
  this1319 = v1317;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1320 = this1319;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1321 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1320 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1322 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1320 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1323 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1322->_M_impl) + 0);
  unsigned int* t1324 = base1323->_M_finish._M_first;
  std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_node(base1321, t1324);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1325 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1320 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1326 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1325->_M_impl) + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1327 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1320 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1328 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1327->_M_impl) + 0);
  unsigned int** t1329 = base1328->_M_finish._M_node;
  int c1330 = -1;
  unsigned int** ptr1331 = &(t1329)[c1330];
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(&base1326->_M_finish, ptr1331);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1332 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1320 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1333 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1332->_M_impl) + 0);
  unsigned int* t1334 = base1333->_M_finish._M_last;
  int c1335 = -1;
  unsigned int* ptr1336 = &(t1334)[c1335];
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1337 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1320 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1338 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1337->_M_impl) + 0);
  base1338->_M_finish._M_cur = ptr1336;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1339 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1320 + 0);
  struct std__allocator_unsigned_int_* r1340 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base1339);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1341 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1320 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1342 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1341->_M_impl) + 0);
  unsigned int* t1343 = base1342->_M_finish._M_cur;
  void_std__allocator_traits_std__allocator_unsigned_int_____destroy_unsigned_int_(r1340, t1343);
  return;
}

// function: _ZNSt5dequeIjSaIjEE8pop_backEv
void std__deque_unsigned_int__std__allocator_unsigned_int_____pop_back(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1344) {
bb1345:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1346;
  this1346 = v1344;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1347 = this1346;
    do {
          _Bool r1348 = std__deque_unsigned_int__std__allocator_unsigned_int_____empty___const(t1347);
          if (r1348) {
            char* cast1349 = (char*)&(_str_6);
            int c1350 = 1666;
            char* cast1351 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIjSaIjEE8pop_backEv);
            char* cast1352 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast1349, c1350, cast1351, cast1352);
          }
      _Bool c1353 = 0;
      if (!c1353) break;
    } while (1);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1354 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1347 + 0);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1355 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1354->_M_impl) + 0);
    unsigned int* t1356 = base1355->_M_finish._M_cur;
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1357 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1347 + 0);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1358 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1357->_M_impl) + 0);
    unsigned int* t1359 = base1358->_M_finish._M_first;
    _Bool c1360 = ((t1356 != t1359)) ? 1 : 0;
    if (c1360) {
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1361 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1347 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1362 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1361->_M_impl) + 0);
      unsigned int* t1363 = base1362->_M_finish._M_cur;
      int c1364 = -1;
      unsigned int* ptr1365 = &(t1363)[c1364];
      base1362->_M_finish._M_cur = ptr1365;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1366 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1347 + 0);
      struct std__allocator_unsigned_int_* r1367 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base1366);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1368 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1347 + 0);
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1369 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1368->_M_impl) + 0);
      unsigned int* t1370 = base1369->_M_finish._M_cur;
      void_std__allocator_traits_std__allocator_unsigned_int_____destroy_unsigned_int_(r1367, t1370);
    } else {
      std__deque_unsigned_int__std__allocator_unsigned_int______M_pop_back_aux(t1347);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIjSaIjEE8_M_eraseESt15_Deque_iteratorIjRjPjE
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int______M_erase(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1371, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1372) {
bb1373:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1374;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __position1375;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1376;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __next1377;
  long __index1378;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp01379;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp31380;
  this1374 = v1371;
  __position1375 = v1372;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1381 = this1374;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__next1377, &__position1375);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r1382 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___3(&__next1377);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1383 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1381);
  ref_tmp01379 = r1383;
  long r1384 = std__operator_(&__position1375, &ref_tmp01379);
  __index1378 = r1384;
    long t1385 = __index1378;
    unsigned long cast1386 = (unsigned long)t1385;
    unsigned long r1387 = std__deque_unsigned_int__std__allocator_unsigned_int_____size___const(t1381);
    int c1388 = 1;
    unsigned long s1389 = r1387 >> c1388;
    _Bool c1390 = ((cast1386 < s1389)) ? 1 : 0;
    if (c1390) {
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp11391;
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1392 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1381);
        ref_tmp11391 = r1392;
        _Bool r1393 = std__operator__(&__position1375, &ref_tmp11391);
        _Bool u1394 = !r1393;
        if (u1394) {
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01395;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11396;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp21397;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp31398;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1399 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1381);
          agg_tmp01395 = r1399;
          std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp11396, &__position1375);
          std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp21397, &__next1377);
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1400 = agg_tmp01395;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1401 = agg_tmp11396;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1402 = agg_tmp21397;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1403 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std__move_backward_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1400, t1401, t1402);
          if (__cir_exc_active) {
            struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          agg_tmp31398 = r1403;
        }
      std__deque_unsigned_int__std__allocator_unsigned_int_____pop_front(t1381);
    } else {
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp21404;
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1405 = std__deque_unsigned_int__std__allocator_unsigned_int_____end(t1381);
        ref_tmp21404 = r1405;
        _Bool r1406 = std__operator__(&__next1377, &ref_tmp21404);
        _Bool u1407 = !r1406;
        if (u1407) {
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp41408;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp51409;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp61410;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp71411;
          std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp41408, &__next1377);
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1412 = std__deque_unsigned_int__std__allocator_unsigned_int_____end(t1381);
          agg_tmp51409 = r1412;
          std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp61410, &__position1375);
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1413 = agg_tmp41408;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1414 = agg_tmp51409;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1415 = agg_tmp61410;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1416 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std__move_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1413, t1414, t1415);
          if (__cir_exc_active) {
            struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          agg_tmp71411 = r1416;
        }
      std__deque_unsigned_int__std__allocator_unsigned_int_____pop_back(t1381);
    }
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1417 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1381);
  ref_tmp31380 = r1417;
  long t1418 = __index1378;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1419 = std__operator__4(&ref_tmp31380, t1418);
  __retval1376 = r1419;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1420 = __retval1376;
  return t1420;
}

// function: _ZNSt15_Deque_iteratorIjRjPjEC2ES1_PS1_
void std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator_2(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v1421, unsigned int* v1422, unsigned int** v1423) {
bb1424:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* this1425;
  unsigned int* __x1426;
  unsigned int** __y1427;
  this1425 = v1421;
  __x1426 = v1422;
  __y1427 = v1423;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1428 = this1425;
  unsigned int* t1429 = __x1426;
  t1428->_M_cur = t1429;
  unsigned int** t1430 = __y1427;
  unsigned int* t1431 = *t1430;
  t1428->_M_first = t1431;
  unsigned int** t1432 = __y1427;
  unsigned int* t1433 = *t1432;
  unsigned long r1434 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
  unsigned int* ptr1435 = &(t1433)[r1434];
  t1428->_M_last = ptr1435;
  unsigned int** t1436 = __y1427;
  t1428->_M_node = t1436;
  return;
}

// function: _ZNKSt15_Deque_iteratorIjRKjPS0_E13_M_const_castEv
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std___Deque_iterator_unsigned_int__unsigned_int_const___unsigned_int_const_____M_const_cast___const(struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___* v1437) {
bb1438:
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___* this1439;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1440;
  this1439 = v1437;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___* t1441 = this1439;
  unsigned int* t1442 = t1441->_M_cur;
  unsigned int** t1443 = t1441->_M_node;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator_2(&__retval1440, t1442, t1443);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1444 = __retval1440;
  return t1444;
}

// function: _ZNSt5dequeIjSaIjEE5eraseESt15_Deque_iteratorIjRKjPS3_E
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int_____erase(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1445, struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ v1446) {
bb1447:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1448;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ __position1449;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1450;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01451;
  this1448 = v1445;
  __position1449 = v1446;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1452 = this1448;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1453 = std___Deque_iterator_unsigned_int__unsigned_int_const___unsigned_int_const_____M_const_cast___const(&__position1449);
  agg_tmp01451 = r1453;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1454 = agg_tmp01451;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1455 = std__deque_unsigned_int__std__allocator_unsigned_int______M_erase(t1452, t1454);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1450 = r1455;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1456 = __retval1450;
  return t1456;
}

// function: _ZNSt15_Deque_iteratorIjRjPjEpLEl
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___2(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v1457, long v1458) {
bb1459:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* this1460;
  long __n1461;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __retval1462;
  long __offset1463;
  this1460 = v1457;
  __n1461 = v1458;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1464 = this1460;
  long t1465 = __n1461;
  unsigned int* t1466 = t1464->_M_cur;
  unsigned int* t1467 = t1464->_M_first;
  long diff1468 = t1466 - t1467;
  long b1469 = t1465 + diff1468;
  __offset1463 = b1469;
    long t1470 = __offset1463;
    long c1471 = 0;
    _Bool c1472 = ((t1470 >= c1471)) ? 1 : 0;
    _Bool ternary1473;
    if (c1472) {
      long t1474 = __offset1463;
      unsigned long r1475 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
      long cast1476 = (long)r1475;
      _Bool c1477 = ((t1474 < cast1476)) ? 1 : 0;
      ternary1473 = (_Bool)c1477;
    } else {
      _Bool c1478 = 0;
      ternary1473 = (_Bool)c1478;
    }
    if (ternary1473) {
      long t1479 = __n1461;
      unsigned int* t1480 = t1464->_M_cur;
      unsigned int* ptr1481 = &(t1480)[t1479];
      t1464->_M_cur = ptr1481;
    } else {
      long __node_offset1482;
      long t1483 = __offset1463;
      long c1484 = 0;
      _Bool c1485 = ((t1483 > c1484)) ? 1 : 0;
      long ternary1486;
      if (c1485) {
        long t1487 = __offset1463;
        unsigned long r1488 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
        long cast1489 = (long)r1488;
        long b1490 = t1487 / cast1489;
        ternary1486 = (long)b1490;
      } else {
        long t1491 = __offset1463;
        long u1492 = -t1491;
        long c1493 = 1;
        long b1494 = u1492 - c1493;
        unsigned long cast1495 = (unsigned long)b1494;
        unsigned long r1496 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
        unsigned long b1497 = cast1495 / r1496;
        long cast1498 = (long)b1497;
        long u1499 = -cast1498;
        long c1500 = 1;
        long b1501 = u1499 - c1500;
        ternary1486 = (long)b1501;
      }
      __node_offset1482 = ternary1486;
      unsigned int** t1502 = t1464->_M_node;
      long t1503 = __node_offset1482;
      unsigned int** ptr1504 = &(t1502)[t1503];
      std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(t1464, ptr1504);
      unsigned int* t1505 = t1464->_M_first;
      long t1506 = __offset1463;
      long t1507 = __node_offset1482;
      unsigned long r1508 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
      long cast1509 = (long)r1508;
      long b1510 = t1507 * cast1509;
      long b1511 = t1506 - b1510;
      unsigned int* ptr1512 = &(t1505)[b1511];
      t1464->_M_cur = ptr1512;
    }
  __retval1462 = t1464;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1513 = __retval1462;
  return t1513;
}

// function: _ZStplRKSt15_Deque_iteratorIjRjPjEl
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__operator__4(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v1514, long v1515) {
bb1516:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __x1517;
  long __n1518;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1519;
  __x1517 = v1514;
  __n1518 = v1515;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1520 = __x1517;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__retval1519, t1520);
  long t1521 = __n1518;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r1522 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___2(&__retval1519, t1521);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1523 = __retval1519;
  return t1523;
}

// function: _ZNSt5dequeIjSaIjEE5beginEv
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int_____begin(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1524) {
bb1525:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1526;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1527;
  this1526 = v1524;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1528 = this1526;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1529 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1528 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1530 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1529->_M_impl) + 0);
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__retval1527, &base1530->_M_start);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1531 = __retval1527;
  return t1531;
}

// function: _ZNSt15_Deque_iteratorIjRKjPS0_EC2IS_IjRjPjEvEERKT_
void std___Deque_iterator_unsigned_int__unsigned_int_const___unsigned_int_const_____Deque_iterator_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____void_(struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___* v1532, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v1533) {
bb1534:
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___* this1535;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __x1536;
  this1535 = v1532;
  __x1536 = v1533;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___* t1537 = this1535;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1538 = __x1536;
  unsigned int* t1539 = t1538->_M_cur;
  t1537->_M_cur = t1539;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1540 = __x1536;
  unsigned int* t1541 = t1540->_M_first;
  t1537->_M_first = t1541;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1542 = __x1536;
  unsigned int* t1543 = t1542->_M_last;
  t1537->_M_last = t1543;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1544 = __x1536;
  unsigned int** t1545 = t1544->_M_node;
  t1537->_M_node = t1545;
  return;
}

// function: _ZNKSt15_Deque_iteratorIjRjPjEdeEv
unsigned int* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator____const(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v1546) {
bb1547:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* this1548;
  unsigned int* __retval1549;
  this1548 = v1546;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1550 = this1548;
  unsigned int* t1551 = t1550->_M_cur;
  __retval1549 = t1551;
  unsigned int* t1552 = __retval1549;
  return t1552;
}

// function: _ZNKSt15_Deque_iteratorIjRjPjEixEl
unsigned int* std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___long__const(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v1553, long v1554) {
bb1555:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* this1556;
  long __n1557;
  unsigned int* __retval1558;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp01559;
  this1556 = v1553;
  __n1557 = v1554;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1560 = this1556;
  long t1561 = __n1557;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1562 = std__operator__4(t1560, t1561);
  ref_tmp01559 = r1562;
  unsigned int* r1563 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator____const(&ref_tmp01559);
  __retval1558 = r1563;
  unsigned int* t1564 = __retval1558;
  return t1564;
}

// function: _ZNSt5dequeIjSaIjEEixEm
unsigned int* std__deque_unsigned_int__std__allocator_unsigned_int_____operator__(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1565, unsigned long v1566) {
bb1567:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1568;
  unsigned long __n1569;
  unsigned int* __retval1570;
  this1568 = v1565;
  __n1569 = v1566;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1571 = this1568;
    do {
          unsigned long t1572 = __n1569;
          unsigned long r1573 = std__deque_unsigned_int__std__allocator_unsigned_int_____size___const(t1571);
          _Bool c1574 = ((t1572 < r1573)) ? 1 : 0;
          _Bool u1575 = !c1574;
          if (u1575) {
            char* cast1576 = (char*)&(_str_6);
            int c1577 = 1433;
            char* cast1578 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIjSaIjEEixEm);
            char* cast1579 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast1576, c1577, cast1578, cast1579);
          }
      _Bool c1580 = 0;
      if (!c1580) break;
    } while (1);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1581 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1571 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1582 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1581->_M_impl) + 0);
  unsigned long t1583 = __n1569;
  long cast1584 = (long)t1583;
  unsigned int* r1585 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator___long__const(&base1582->_M_start, cast1584);
  __retval1570 = r1585;
  unsigned int* t1586 = __retval1570;
  return t1586;
}

// function: _ZNSt5dequeIjSaIjEE5clearEv
void std__deque_unsigned_int__std__allocator_unsigned_int_____clear(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1587) {
bb1588:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1589;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01590;
  this1589 = v1587;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1591 = this1589;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1592 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1591);
  agg_tmp01590 = r1592;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1593 = agg_tmp01590;
  std__deque_unsigned_int__std__allocator_unsigned_int______M_erase_at_end(t1591, t1593);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIjSaIjEE17_M_erase_at_beginESt15_Deque_iteratorIjRjPjE
void std__deque_unsigned_int__std__allocator_unsigned_int______M_erase_at_begin(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1594, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1595) {
bb1596:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1597;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __pos1598;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01599;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11600;
  this1597 = v1594;
  __pos1598 = v1595;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1601 = this1597;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1602 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1601);
  agg_tmp01599 = r1602;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp11600, &__pos1598);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1603 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1601 + 0);
  struct std__allocator_unsigned_int_* r1604 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base1603);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1605 = agg_tmp01599;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1606 = agg_tmp11600;
  std__deque_unsigned_int__std__allocator_unsigned_int______M_destroy_data(t1601, t1605, t1606, r1604);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1607 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1601 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1608 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1601 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1609 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1608->_M_impl) + 0);
  unsigned int** t1610 = base1609->_M_start._M_node;
  unsigned int** t1611 = __pos1598._M_node;
  std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_destroy_nodes(base1607, t1610, t1611);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1612 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1601 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1613 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1612->_M_impl) + 0);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r1614 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator_(&base1613->_M_start, &__pos1598);
  return;
}

// function: _ZNSt5dequeIjSaIjEE15_M_erase_at_endESt15_Deque_iteratorIjRjPjE
void std__deque_unsigned_int__std__allocator_unsigned_int______M_erase_at_end(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1615, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1616) {
bb1617:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1618;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __pos1619;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01620;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11621;
  this1618 = v1615;
  __pos1619 = v1616;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1622 = this1618;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp01620, &__pos1619);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1623 = std__deque_unsigned_int__std__allocator_unsigned_int_____end(t1622);
  agg_tmp11621 = r1623;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1624 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1622 + 0);
  struct std__allocator_unsigned_int_* r1625 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base1624);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1626 = agg_tmp01620;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1627 = agg_tmp11621;
  std__deque_unsigned_int__std__allocator_unsigned_int______M_destroy_data(t1622, t1626, t1627, r1625);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1628 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1622 + 0);
  unsigned int** t1629 = __pos1619._M_node;
  int c1630 = 1;
  unsigned int** ptr1631 = &(t1629)[c1630];
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1632 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1622 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1633 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1632->_M_impl) + 0);
  unsigned int** t1634 = base1633->_M_finish._M_node;
  int c1635 = 1;
  unsigned int** ptr1636 = &(t1634)[c1635];
  std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_destroy_nodes(base1628, ptr1631, ptr1636);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1637 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1622 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1638 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1637->_M_impl) + 0);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r1639 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator_(&base1638->_M_finish, &__pos1619);
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIjRjPjEl
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__operator__2(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v1640, long v1641) {
bb1642:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __x1643;
  long __n1644;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1645;
  __x1643 = v1640;
  __n1644 = v1641;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t1646 = __x1643;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__retval1645, t1646);
  long t1647 = __n1644;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* r1648 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator__(&__retval1645, t1647);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1649 = __retval1645;
  return t1649;
}

// function: _ZNSt5dequeIjSaIjEE8_M_eraseESt15_Deque_iteratorIjRjPjES5_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int______M_erase_2(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1650, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1651, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v1652) {
bb1653:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1654;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first1655;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last1656;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1657;
  this1654 = v1650;
  __first1655 = v1651;
  __last1656 = v1652;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1658 = this1654;
    _Bool r1659 = std__operator__(&__first1655, &__last1656);
    if (r1659) {
      std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__retval1657, &__first1655);
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1660 = __retval1657;
      return t1660;
    } else {
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp01661;
        struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1662 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1658);
        ref_tmp01661 = r1662;
        _Bool r1663 = std__operator__(&__first1655, &ref_tmp01661);
        _Bool ternary1664;
        if (r1663) {
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp11665;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1666 = std__deque_unsigned_int__std__allocator_unsigned_int_____end(t1658);
          ref_tmp11665 = r1666;
          _Bool r1667 = std__operator__(&__last1656, &ref_tmp11665);
          ternary1664 = (_Bool)r1667;
        } else {
          _Bool c1668 = 0;
          ternary1664 = (_Bool)c1668;
        }
        if (ternary1664) {
          std__deque_unsigned_int__std__allocator_unsigned_int_____clear(t1658);
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1669 = std__deque_unsigned_int__std__allocator_unsigned_int_____end(t1658);
          __retval1657 = r1669;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1670 = __retval1657;
          return t1670;
        } else {
          long __n1671;
          long __elems_before1672;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp21673;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp71674;
          long r1675 = std__operator_(&__last1656, &__first1655);
          __n1671 = r1675;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1676 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1658);
          ref_tmp21673 = r1676;
          long r1677 = std__operator_(&__first1655, &ref_tmp21673);
          __elems_before1672 = r1677;
            long t1678 = __elems_before1672;
            unsigned long cast1679 = (unsigned long)t1678;
            unsigned long r1680 = std__deque_unsigned_int__std__allocator_unsigned_int_____size___const(t1658);
            long t1681 = __n1671;
            unsigned long cast1682 = (unsigned long)t1681;
            unsigned long b1683 = r1680 - cast1682;
            unsigned long c1684 = 2;
            unsigned long b1685 = b1683 / c1684;
            _Bool c1686 = ((cast1679 <= b1685)) ? 1 : 0;
            if (c1686) {
              struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp41687;
              struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp41688;
                struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp31689;
                struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1690 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1658);
                ref_tmp31689 = r1690;
                _Bool r1691 = std__operator__(&__first1655, &ref_tmp31689);
                _Bool u1692 = !r1691;
                if (u1692) {
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01693;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11694;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp21695;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp31696;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1697 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1658);
                  agg_tmp01693 = r1697;
                  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp11694, &__first1655);
                  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp21695, &__last1656);
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1698 = agg_tmp01693;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1699 = agg_tmp11694;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1700 = agg_tmp21695;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1701 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std__move_backward_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1698, t1699, t1700);
                  if (__cir_exc_active) {
                    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  agg_tmp31696 = r1701;
                }
              struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1702 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1658);
              ref_tmp41688 = r1702;
              long t1703 = __n1671;
              struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1704 = std__operator__4(&ref_tmp41688, t1703);
              agg_tmp41687 = r1704;
              struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1705 = agg_tmp41687;
              std__deque_unsigned_int__std__allocator_unsigned_int______M_erase_at_begin(t1658, t1705);
              if (__cir_exc_active) {
                struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
            } else {
              struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp91706;
              struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp61707;
                struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp51708;
                struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1709 = std__deque_unsigned_int__std__allocator_unsigned_int_____end(t1658);
                ref_tmp51708 = r1709;
                _Bool r1710 = std__operator__(&__last1656, &ref_tmp51708);
                _Bool u1711 = !r1710;
                if (u1711) {
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp51712;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp61713;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp71714;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp81715;
                  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp51712, &__last1656);
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1716 = std__deque_unsigned_int__std__allocator_unsigned_int_____end(t1658);
                  agg_tmp61713 = r1716;
                  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp71714, &__first1655);
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1717 = agg_tmp51712;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1718 = agg_tmp61713;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1719 = agg_tmp71714;
                  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1720 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int___std__move_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____(t1717, t1718, t1719);
                  if (__cir_exc_active) {
                    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  agg_tmp81715 = r1720;
                }
              struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1721 = std__deque_unsigned_int__std__allocator_unsigned_int_____end(t1658);
              ref_tmp61707 = r1721;
              long t1722 = __n1671;
              struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1723 = std__operator__2(&ref_tmp61707, t1722);
              agg_tmp91706 = r1723;
              struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1724 = agg_tmp91706;
              std__deque_unsigned_int__std__allocator_unsigned_int______M_erase_at_end(t1658, t1724);
              if (__cir_exc_active) {
                struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
            }
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1725 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1658);
          ref_tmp71674 = r1725;
          long t1726 = __elems_before1672;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1727 = std__operator__4(&ref_tmp71674, t1726);
          __retval1657 = r1727;
          struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1728 = __retval1657;
          return t1728;
        }
    }
  abort();
}

// function: _ZNSt5dequeIjSaIjEE5eraseESt15_Deque_iteratorIjRKjPS3_ES6_
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int_____erase_2(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1729, struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ v1730, struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ v1731) {
bb1732:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1733;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ __first1734;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ __last1735;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval1736;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01737;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11738;
  this1733 = v1729;
  __first1734 = v1730;
  __last1735 = v1731;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1739 = this1733;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1740 = std___Deque_iterator_unsigned_int__unsigned_int_const___unsigned_int_const_____M_const_cast___const(&__first1734);
  agg_tmp01737 = r1740;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1741 = std___Deque_iterator_unsigned_int__unsigned_int_const___unsigned_int_const_____M_const_cast___const(&__last1735);
  agg_tmp11738 = r1741;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1742 = agg_tmp01737;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1743 = agg_tmp11738;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1744 = std__deque_unsigned_int__std__allocator_unsigned_int______M_erase_2(t1739, t1742, t1743);
  if (__cir_exc_active) {
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1736 = r1744;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1745 = __retval1736;
  return t1745;
}

// function: _ZNSt5dequeIjSaIjEE5frontEv
unsigned int* std__deque_unsigned_int__std__allocator_unsigned_int_____front(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1746) {
bb1747:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1748;
  unsigned int* __retval1749;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp01750;
  this1748 = v1746;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1751 = this1748;
    do {
          _Bool r1752 = std__deque_unsigned_int__std__allocator_unsigned_int_____empty___const(t1751);
          if (r1752) {
            char* cast1753 = (char*)&(_str_6);
            int c1754 = 1513;
            char* cast1755 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIjSaIjEE5frontEv);
            char* cast1756 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast1753, c1754, cast1755, cast1756);
          }
      _Bool c1757 = 0;
      if (!c1757) break;
    } while (1);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1758 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1751);
  ref_tmp01750 = r1758;
  unsigned int* r1759 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____operator____const(&ref_tmp01750);
  __retval1749 = r1759;
  unsigned int* t1760 = __retval1749;
  return t1760;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v1761, int v1762) {
bb1763:
  int __a1764;
  int __b1765;
  int __retval1766;
  __a1764 = v1761;
  __b1765 = v1762;
  int t1767 = __a1764;
  int t1768 = __b1765;
  int b1769 = t1767 | t1768;
  __retval1766 = b1769;
  int t1770 = __retval1766;
  return t1770;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1771) {
bb1772:
  struct std__basic_ios_char__std__char_traits_char__* this1773;
  int __retval1774;
  this1773 = v1771;
  struct std__basic_ios_char__std__char_traits_char__* t1775 = this1773;
  struct std__ios_base* base1776 = (struct std__ios_base*)((char *)t1775 + 0);
  int t1777 = base1776->_M_streambuf_state;
  __retval1774 = t1777;
  int t1778 = __retval1774;
  return t1778;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1779, int v1780) {
bb1781:
  struct std__basic_ios_char__std__char_traits_char__* this1782;
  int __state1783;
  this1782 = v1779;
  __state1783 = v1780;
  struct std__basic_ios_char__std__char_traits_char__* t1784 = this1782;
  int r1785 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1784);
  if (__cir_exc_active) {
    return;
  }
  int t1786 = __state1783;
  int r1787 = std__operator__3(r1785, t1786);
  std__basic_ios_char__std__char_traits_char_____clear(t1784, r1787);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1788, char* v1789) {
bb1790:
  char* __c11791;
  char* __c21792;
  _Bool __retval1793;
  __c11791 = v1788;
  __c21792 = v1789;
  char* t1794 = __c11791;
  char t1795 = *t1794;
  int cast1796 = (int)t1795;
  char* t1797 = __c21792;
  char t1798 = *t1797;
  int cast1799 = (int)t1798;
  _Bool c1800 = ((cast1796 == cast1799)) ? 1 : 0;
  __retval1793 = c1800;
  _Bool t1801 = __retval1793;
  return t1801;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1802) {
bb1803:
  char* __p1804;
  unsigned long __retval1805;
  unsigned long __i1806;
  __p1804 = v1802;
  unsigned long c1807 = 0;
  __i1806 = c1807;
    char ref_tmp01808;
    while (1) {
      unsigned long t1809 = __i1806;
      char* t1810 = __p1804;
      char* ptr1811 = &(t1810)[t1809];
      char c1812 = 0;
      ref_tmp01808 = c1812;
      _Bool r1813 = __gnu_cxx__char_traits_char___eq(ptr1811, &ref_tmp01808);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u1814 = !r1813;
      if (!u1814) break;
      unsigned long t1815 = __i1806;
      unsigned long u1816 = t1815 + 1;
      __i1806 = u1816;
    }
  unsigned long t1817 = __i1806;
  __retval1805 = t1817;
  unsigned long t1818 = __retval1805;
  return t1818;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1819) {
bb1820:
  char* __s1821;
  unsigned long __retval1822;
  __s1821 = v1819;
    _Bool r1823 = std____is_constant_evaluated();
    if (r1823) {
      char* t1824 = __s1821;
      unsigned long r1825 = __gnu_cxx__char_traits_char___length(t1824);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval1822 = r1825;
      unsigned long t1826 = __retval1822;
      return t1826;
    }
  char* t1827 = __s1821;
  unsigned long r1828 = strlen(t1827);
  __retval1822 = r1828;
  unsigned long t1829 = __retval1822;
  return t1829;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1830, char* v1831) {
bb1832:
  struct std__basic_ostream_char__std__char_traits_char__* __out1833;
  char* __s1834;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1835;
  __out1833 = v1830;
  __s1834 = v1831;
    char* t1836 = __s1834;
    _Bool cast1837 = (_Bool)t1836;
    _Bool u1838 = !cast1837;
    if (u1838) {
      struct std__basic_ostream_char__std__char_traits_char__* t1839 = __out1833;
      void** v1840 = (void**)t1839;
      void* v1841 = *((void**)v1840);
      unsigned char* cast1842 = (unsigned char*)v1841;
      long c1843 = -24;
      unsigned char* ptr1844 = &(cast1842)[c1843];
      long* cast1845 = (long*)ptr1844;
      long t1846 = *cast1845;
      unsigned char* cast1847 = (unsigned char*)t1839;
      unsigned char* ptr1848 = &(cast1847)[t1846];
      struct std__basic_ostream_char__std__char_traits_char__* cast1849 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1848;
      struct std__basic_ios_char__std__char_traits_char__* cast1850 = (struct std__basic_ios_char__std__char_traits_char__*)cast1849;
      int t1851 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1850, t1851);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1852 = __out1833;
      char* t1853 = __s1834;
      char* t1854 = __s1834;
      unsigned long r1855 = std__char_traits_char___length(t1854);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast1856 = (long)r1855;
      struct std__basic_ostream_char__std__char_traits_char__* r1857 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1852, t1853, cast1856);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1858 = __out1833;
  __retval1835 = t1858;
  struct std__basic_ostream_char__std__char_traits_char__* t1859 = __retval1835;
  return t1859;
}

// function: _ZNKSt5dequeIjSaIjEE4sizeEv
unsigned long std__deque_unsigned_int__std__allocator_unsigned_int_____size___const(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1860) {
bb1861:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1862;
  unsigned long __retval1863;
  unsigned long __sz1864;
  this1862 = v1860;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1865 = this1862;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1866 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1865 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1867 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1866->_M_impl) + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1868 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1865 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base1869 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base1868->_M_impl) + 0);
  long r1870 = std__operator_(&base1867->_M_finish, &base1869->_M_start);
  unsigned long cast1871 = (unsigned long)r1870;
  __sz1864 = cast1871;
    unsigned long t1872 = __sz1864;
    unsigned long r1873 = std__deque_unsigned_int__std__allocator_unsigned_int_____max_size___const(t1865);
    _Bool c1874 = ((t1872 > r1873)) ? 1 : 0;
    if (c1874) {
      __builtin_unreachable();
    }
  unsigned long t1875 = __sz1864;
  __retval1863 = t1875;
  unsigned long t1876 = __retval1863;
  return t1876;
}

// function: _ZNSolsEj
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v1877, unsigned int v1878) {
bb1879:
  struct std__basic_ostream_char__std__char_traits_char__* this1880;
  unsigned int __n1881;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1882;
  this1880 = v1877;
  __n1881 = v1878;
  struct std__basic_ostream_char__std__char_traits_char__* t1883 = this1880;
  unsigned int t1884 = __n1881;
  unsigned long cast1885 = (unsigned long)t1884;
  struct std__basic_ostream_char__std__char_traits_char__* r1886 = std__ostream__std__ostream___M_insert_unsigned_long_(t1883, cast1885);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1882 = r1886;
  struct std__basic_ostream_char__std__char_traits_char__* t1887 = __retval1882;
  return t1887;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1888, void* v1889) {
bb1890:
  struct std__basic_ostream_char__std__char_traits_char__* this1891;
  void* __pf1892;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1893;
  this1891 = v1888;
  __pf1892 = v1889;
  struct std__basic_ostream_char__std__char_traits_char__* t1894 = this1891;
  void* t1895 = __pf1892;
  struct std__basic_ostream_char__std__char_traits_char__* r1896 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1895)(t1894);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1893 = r1896;
  struct std__basic_ostream_char__std__char_traits_char__* t1897 = __retval1893;
  return t1897;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1898) {
bb1899:
  struct std__basic_ostream_char__std__char_traits_char__* __os1900;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1901;
  __os1900 = v1898;
  struct std__basic_ostream_char__std__char_traits_char__* t1902 = __os1900;
  struct std__basic_ostream_char__std__char_traits_char__* r1903 = std__ostream__flush(t1902);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1901 = r1903;
  struct std__basic_ostream_char__std__char_traits_char__* t1904 = __retval1901;
  return t1904;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1905) {
bb1906:
  struct std__ctype_char_* __f1907;
  struct std__ctype_char_* __retval1908;
  __f1907 = v1905;
    struct std__ctype_char_* t1909 = __f1907;
    _Bool cast1910 = (_Bool)t1909;
    _Bool u1911 = !cast1910;
    if (u1911) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t1912 = __f1907;
  __retval1908 = t1912;
  struct std__ctype_char_* t1913 = __retval1908;
  return t1913;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1914, char v1915) {
bb1916:
  struct std__ctype_char_* this1917;
  char __c1918;
  char __retval1919;
  this1917 = v1914;
  __c1918 = v1915;
  struct std__ctype_char_* t1920 = this1917;
    char t1921 = t1920->_M_widen_ok;
    _Bool cast1922 = (_Bool)t1921;
    if (cast1922) {
      char t1923 = __c1918;
      unsigned char cast1924 = (unsigned char)t1923;
      unsigned long cast1925 = (unsigned long)cast1924;
      char t1926 = t1920->_M_widen[cast1925];
      __retval1919 = t1926;
      char t1927 = __retval1919;
      return t1927;
    }
  std__ctype_char____M_widen_init___const(t1920);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1928 = __c1918;
  void** v1929 = (void**)t1920;
  void* v1930 = *((void**)v1929);
  char vcall1933 = (char)__VERIFIER_virtual_call_char_char(t1920, 6, t1928);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1919 = vcall1933;
  char t1934 = __retval1919;
  return t1934;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1935, char v1936) {
bb1937:
  struct std__basic_ios_char__std__char_traits_char__* this1938;
  char __c1939;
  char __retval1940;
  this1938 = v1935;
  __c1939 = v1936;
  struct std__basic_ios_char__std__char_traits_char__* t1941 = this1938;
  struct std__ctype_char_* t1942 = t1941->_M_ctype;
  struct std__ctype_char_* r1943 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1942);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1944 = __c1939;
  char r1945 = std__ctype_char___widen_char__const(r1943, t1944);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1940 = r1945;
  char t1946 = __retval1940;
  return t1946;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1947) {
bb1948:
  struct std__basic_ostream_char__std__char_traits_char__* __os1949;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1950;
  __os1949 = v1947;
  struct std__basic_ostream_char__std__char_traits_char__* t1951 = __os1949;
  struct std__basic_ostream_char__std__char_traits_char__* t1952 = __os1949;
  void** v1953 = (void**)t1952;
  void* v1954 = *((void**)v1953);
  unsigned char* cast1955 = (unsigned char*)v1954;
  long c1956 = -24;
  unsigned char* ptr1957 = &(cast1955)[c1956];
  long* cast1958 = (long*)ptr1957;
  long t1959 = *cast1958;
  unsigned char* cast1960 = (unsigned char*)t1952;
  unsigned char* ptr1961 = &(cast1960)[t1959];
  struct std__basic_ostream_char__std__char_traits_char__* cast1962 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1961;
  struct std__basic_ios_char__std__char_traits_char__* cast1963 = (struct std__basic_ios_char__std__char_traits_char__*)cast1962;
  char c1964 = 10;
  char r1965 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1963, c1964);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1966 = std__ostream__put(t1951, r1965);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1967 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1966);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1950 = r1967;
  struct std__basic_ostream_char__std__char_traits_char__* t1968 = __retval1950;
  return t1968;
}

// function: _ZNSt5dequeIjSaIjEED2Ev
void std__deque_unsigned_int__std__allocator_unsigned_int______deque(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v1969) {
bb1970:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this1971;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp01972;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11973;
  this1971 = v1969;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t1974 = this1971;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1975 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(t1974);
    agg_tmp01972 = r1975;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r1976 = std__deque_unsigned_int__std__allocator_unsigned_int_____end(t1974);
    agg_tmp11973 = r1976;
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1977 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1974 + 0);
    struct std__allocator_unsigned_int_* r1978 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base1977);
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1979 = agg_tmp01972;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t1980 = agg_tmp11973;
    std__deque_unsigned_int__std__allocator_unsigned_int______M_destroy_data(t1974, t1979, t1980, r1978);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1981 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1974 + 0);
        std___Deque_base_unsigned_int__std__allocator_unsigned_int_______Deque_base(base1981);
      }
      return;
    }
  {
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base1982 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1974 + 0);
    std___Deque_base_unsigned_int__std__allocator_unsigned_int_______Deque_base(base1982);
  }
  return;
}

// function: main
int main() {
bb1983:
  int __retval1984;
  unsigned int i1985;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__ mydeque1986;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ agg_tmp01987;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp01988;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp11989;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp11990;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ agg_tmp21991;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp21992;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ agg_tmp31993;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp31994;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp41995;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp41996;
  int c1997 = 0;
  __retval1984 = c1997;
  std__deque_unsigned_int__std__allocator_unsigned_int_____deque(&mydeque1986);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      unsigned int c1998 = 1;
      i1985 = c1998;
      while (1) {
        unsigned int t2000 = i1985;
        unsigned int c2001 = 10;
        _Bool c2002 = ((t2000 <= c2001)) ? 1 : 0;
        if (!c2002) break;
        std__deque_unsigned_int__std__allocator_unsigned_int_____push_back(&mydeque1986, &i1985);
        if (__cir_exc_active) {
          {
            std__deque_unsigned_int__std__allocator_unsigned_int______deque(&mydeque1986);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1999: ;
        unsigned int t2003 = i1985;
        unsigned int u2004 = t2003 + 1;
        i1985 = u2004;
      }
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r2005 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(&mydeque1986);
    ref_tmp11989 = r2005;
    long c2006 = 5;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r2007 = std__operator__4(&ref_tmp11989, c2006);
    ref_tmp01988 = r2007;
    std___Deque_iterator_unsigned_int__unsigned_int_const___unsigned_int_const_____Deque_iterator_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____void_(&agg_tmp01987, &ref_tmp01988);
    struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ t2008 = agg_tmp01987;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r2009 = std__deque_unsigned_int__std__allocator_unsigned_int_____erase(&mydeque1986, t2008);
    if (__cir_exc_active) {
      {
        std__deque_unsigned_int__std__allocator_unsigned_int______deque(&mydeque1986);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp11990 = r2009;
    unsigned long c2010 = 5;
    unsigned int* r2011 = std__deque_unsigned_int__std__allocator_unsigned_int_____operator__(&mydeque1986, c2010);
    unsigned int t2012 = *r2011;
    unsigned int c2013 = 7;
    _Bool c2014 = ((t2012 == c2013)) ? 1 : 0;
    if (c2014) {
    } else {
      char* cast2015 = (char*)&(_str);
      char* c2016 = _str_1;
      unsigned int c2017 = 24;
      char* cast2018 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2015, c2016, c2017, cast2018);
    }
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r2019 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(&mydeque1986);
    ref_tmp21992 = r2019;
    std___Deque_iterator_unsigned_int__unsigned_int_const___unsigned_int_const_____Deque_iterator_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____void_(&agg_tmp21991, &ref_tmp21992);
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r2020 = std__deque_unsigned_int__std__allocator_unsigned_int_____begin(&mydeque1986);
    ref_tmp41995 = r2020;
    long c2021 = 3;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r2022 = std__operator__4(&ref_tmp41995, c2021);
    ref_tmp31994 = r2022;
    std___Deque_iterator_unsigned_int__unsigned_int_const___unsigned_int_const_____Deque_iterator_std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int____void_(&agg_tmp31993, &ref_tmp31994);
    struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ t2023 = agg_tmp21991;
    struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ t2024 = agg_tmp31993;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ r2025 = std__deque_unsigned_int__std__allocator_unsigned_int_____erase_2(&mydeque1986, t2023, t2024);
    if (__cir_exc_active) {
      {
        std__deque_unsigned_int__std__allocator_unsigned_int______deque(&mydeque1986);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp41996 = r2025;
    unsigned int* r2026 = std__deque_unsigned_int__std__allocator_unsigned_int_____front(&mydeque1986);
    unsigned int t2027 = *r2026;
    unsigned int c2028 = 4;
    _Bool c2029 = ((t2027 == c2028)) ? 1 : 0;
    if (c2029) {
    } else {
      char* cast2030 = (char*)&(_str_2);
      char* c2031 = _str_1;
      unsigned int c2032 = 28;
      char* cast2033 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2030, c2031, c2032, cast2033);
    }
    char* cast2034 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r2035 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2034);
    if (__cir_exc_active) {
      {
        std__deque_unsigned_int__std__allocator_unsigned_int______deque(&mydeque1986);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      unsigned int c2036 = 0;
      i1985 = c2036;
      while (1) {
        unsigned int t2038 = i1985;
        unsigned long cast2039 = (unsigned long)t2038;
        unsigned long r2040 = std__deque_unsigned_int__std__allocator_unsigned_int_____size___const(&mydeque1986);
        _Bool c2041 = ((cast2039 < r2040)) ? 1 : 0;
        if (!c2041) break;
        char* cast2042 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r2043 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2042);
        if (__cir_exc_active) {
          {
            std__deque_unsigned_int__std__allocator_unsigned_int______deque(&mydeque1986);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        unsigned int t2044 = i1985;
        unsigned long cast2045 = (unsigned long)t2044;
        unsigned int* r2046 = std__deque_unsigned_int__std__allocator_unsigned_int_____operator__(&mydeque1986, cast2045);
        unsigned int t2047 = *r2046;
        struct std__basic_ostream_char__std__char_traits_char__* r2048 = std__ostream__operator__(r2043, t2047);
        if (__cir_exc_active) {
          {
            std__deque_unsigned_int__std__allocator_unsigned_int______deque(&mydeque1986);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step2037: ;
        unsigned int t2049 = i1985;
        unsigned int u2050 = t2049 + 1;
        i1985 = u2050;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r2051 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_unsigned_int__std__allocator_unsigned_int______deque(&mydeque1986);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c2052 = 0;
    __retval1984 = c2052;
    int t2053 = __retval1984;
    int ret_val2054 = t2053;
    {
      std__deque_unsigned_int__std__allocator_unsigned_int______deque(&mydeque1986);
    }
    return ret_val2054;
  int t2055 = __retval1984;
  return t2055;
}

// function: _ZNSt11_Deque_baseIjSaIjEE11_Deque_implC2Ev
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_impl___Deque_impl(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl* v2056) {
bb2057:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl* this2058;
  this2058 = v2056;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl* t2059 = this2058;
  struct std__allocator_unsigned_int_* base2060 = (struct std__allocator_unsigned_int_*)((char *)t2059 + 0);
  std__allocator_unsigned_int___allocator(base2060);
    struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2061 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)t2059 + 0);
    std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_impl_data___Deque_impl_data(base2061);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v2062) {
bb2063:
  unsigned long __size2064;
  unsigned long __retval2065;
  __size2064 = v2062;
  unsigned long t2066 = __size2064;
  unsigned long c2067 = 512;
  _Bool c2068 = ((t2066 < c2067)) ? 1 : 0;
  unsigned long ternary2069;
  if (c2068) {
    unsigned long c2070 = 512;
    unsigned long t2071 = __size2064;
    unsigned long b2072 = c2070 / t2071;
    ternary2069 = (unsigned long)b2072;
  } else {
    unsigned long c2073 = 1;
    ternary2069 = (unsigned long)c2073;
  }
  __retval2065 = ternary2069;
  unsigned long t2074 = __retval2065;
  return t2074;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v2075, unsigned long* v2076) {
bb2077:
  unsigned long* __a2078;
  unsigned long* __b2079;
  unsigned long* __retval2080;
  __a2078 = v2075;
  __b2079 = v2076;
    unsigned long* t2081 = __a2078;
    unsigned long t2082 = *t2081;
    unsigned long* t2083 = __b2079;
    unsigned long t2084 = *t2083;
    _Bool c2085 = ((t2082 < t2084)) ? 1 : 0;
    if (c2085) {
      unsigned long* t2086 = __b2079;
      __retval2080 = t2086;
      unsigned long* t2087 = __retval2080;
      return t2087;
    }
  unsigned long* t2088 = __a2078;
  __retval2080 = t2088;
  unsigned long* t2089 = __retval2080;
  return t2089;
}

// function: _ZNKSt11_Deque_baseIjSaIjEE19_M_get_Tp_allocatorEv
struct std__allocator_unsigned_int_* std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator___const(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2090) {
bb2091:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2092;
  struct std__allocator_unsigned_int_* __retval2093;
  this2092 = v2090;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2094 = this2092;
  struct std__allocator_unsigned_int_* base2095 = (struct std__allocator_unsigned_int_*)((char *)&(t2094->_M_impl) + 0);
  __retval2093 = base2095;
  struct std__allocator_unsigned_int_* t2096 = __retval2093;
  return t2096;
}

// function: _ZNSaIPjEC2IjEERKSaIT_E
void std__allocator_unsigned_int____allocator_unsigned_int_(struct std__allocator_unsigned_int___* v2097, struct std__allocator_unsigned_int_* v2098) {
bb2099:
  struct std__allocator_unsigned_int___* this2100;
  struct std__allocator_unsigned_int_* unnamed2101;
  this2100 = v2097;
  unnamed2101 = v2098;
  struct std__allocator_unsigned_int___* t2102 = this2100;
  struct std____new_allocator_unsigned_int___* base2103 = (struct std____new_allocator_unsigned_int___*)((char *)t2102 + 0);
  std____new_allocator_unsigned_int______new_allocator(base2103);
  return;
}

// function: _ZNKSt11_Deque_baseIjSaIjEE20_M_get_map_allocatorEv
struct std__allocator_unsigned_int___ std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_map_allocator___const(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2104) {
bb2105:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2106;
  struct std__allocator_unsigned_int___ __retval2107;
  this2106 = v2104;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2108 = this2106;
  struct std__allocator_unsigned_int_* r2109 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator___const(t2108);
  std__allocator_unsigned_int____allocator_unsigned_int_(&__retval2107, r2109);
  struct std__allocator_unsigned_int___ t2110 = __retval2107;
  return t2110;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb2111:
  _Bool __retval2112;
    _Bool c2113 = 0;
    __retval2112 = c2113;
    _Bool t2114 = __retval2112;
    return t2114;
  abort();
}

// function: _ZNKSt15__new_allocatorIPjE11_M_max_sizeEv
unsigned long std____new_allocator_unsigned_int_____M_max_size___const(struct std____new_allocator_unsigned_int___* v2115) {
bb2116:
  struct std____new_allocator_unsigned_int___* this2117;
  unsigned long __retval2118;
  this2117 = v2115;
  struct std____new_allocator_unsigned_int___* t2119 = this2117;
  unsigned long c2120 = 9223372036854775807;
  unsigned long c2121 = 8;
  unsigned long b2122 = c2120 / c2121;
  __retval2118 = b2122;
  unsigned long t2123 = __retval2118;
  return t2123;
}

// function: _ZNSt15__new_allocatorIPjE8allocateEmPKv
unsigned int** std____new_allocator_unsigned_int____allocate(struct std____new_allocator_unsigned_int___* v2124, unsigned long v2125, void* v2126) {
bb2127:
  struct std____new_allocator_unsigned_int___* this2128;
  unsigned long __n2129;
  void* unnamed2130;
  unsigned int** __retval2131;
  this2128 = v2124;
  __n2129 = v2125;
  unnamed2130 = v2126;
  struct std____new_allocator_unsigned_int___* t2132 = this2128;
    unsigned long t2133 = __n2129;
    unsigned long r2134 = std____new_allocator_unsigned_int_____M_max_size___const(t2132);
    _Bool c2135 = ((t2133 > r2134)) ? 1 : 0;
    if (c2135) {
        unsigned long t2136 = __n2129;
        unsigned long c2137 = -1;
        unsigned long c2138 = 8;
        unsigned long b2139 = c2137 / c2138;
        _Bool c2140 = ((t2136 > b2139)) ? 1 : 0;
        if (c2140) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            unsigned int** __cir_eh_ret = (unsigned int**)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        unsigned int** __cir_eh_ret = (unsigned int**)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c2141 = 8;
    unsigned long c2142 = 16;
    _Bool c2143 = ((c2141 > c2142)) ? 1 : 0;
    if (c2143) {
      unsigned long __al2144;
      unsigned long c2145 = 8;
      __al2144 = c2145;
      unsigned long t2146 = __n2129;
      unsigned long c2147 = 8;
      unsigned long b2148 = t2146 * c2147;
      unsigned long t2149 = __al2144;
      void* r2150 = operator_new_2(b2148, t2149);
      if (__cir_exc_active) {
        unsigned int** __cir_eh_ret = (unsigned int**)0;
        return __cir_eh_ret;
      }
      unsigned int** cast2151 = (unsigned int**)r2150;
      __retval2131 = cast2151;
      unsigned int** t2152 = __retval2131;
      return t2152;
    }
  unsigned long t2153 = __n2129;
  unsigned long c2154 = 8;
  unsigned long b2155 = t2153 * c2154;
  void* r2156 = operator_new(b2155);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  unsigned int** cast2157 = (unsigned int**)r2156;
  __retval2131 = cast2157;
  unsigned int** t2158 = __retval2131;
  return t2158;
}

// function: _ZNSaIPjE8allocateEm
unsigned int** std__allocator_unsigned_int____allocate(struct std__allocator_unsigned_int___* v2159, unsigned long v2160) {
bb2161:
  struct std__allocator_unsigned_int___* this2162;
  unsigned long __n2163;
  unsigned int** __retval2164;
  this2162 = v2159;
  __n2163 = v2160;
  struct std__allocator_unsigned_int___* t2165 = this2162;
    _Bool r2166 = std____is_constant_evaluated();
    if (r2166) {
        unsigned long t2167 = __n2163;
        unsigned long c2168 = 8;
        unsigned long ovr2169;
        _Bool ovf2170 = __builtin_mul_overflow(t2167, c2168, &ovr2169);
        __n2163 = ovr2169;
        if (ovf2170) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            unsigned int** __cir_eh_ret = (unsigned int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2171 = __n2163;
      void* r2172 = operator_new(t2171);
      if (__cir_exc_active) {
        unsigned int** __cir_eh_ret = (unsigned int**)0;
        return __cir_eh_ret;
      }
      unsigned int** cast2173 = (unsigned int**)r2172;
      __retval2164 = cast2173;
      unsigned int** t2174 = __retval2164;
      return t2174;
    }
  struct std____new_allocator_unsigned_int___* base2175 = (struct std____new_allocator_unsigned_int___*)((char *)t2165 + 0);
  unsigned long t2176 = __n2163;
  void* c2177 = ((void*)0);
  unsigned int** r2178 = std____new_allocator_unsigned_int____allocate(base2175, t2176, c2177);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  __retval2164 = r2178;
  unsigned int** t2179 = __retval2164;
  return t2179;
}

// function: _ZNSt16allocator_traitsISaIPjEE8allocateERS1_m
unsigned int** std__allocator_traits_std__allocator_unsigned_int______allocate(struct std__allocator_unsigned_int___* v2180, unsigned long v2181) {
bb2182:
  struct std__allocator_unsigned_int___* __a2183;
  unsigned long __n2184;
  unsigned int** __retval2185;
  __a2183 = v2180;
  __n2184 = v2181;
  struct std__allocator_unsigned_int___* t2186 = __a2183;
  unsigned long t2187 = __n2184;
  unsigned int** r2188 = std__allocator_unsigned_int____allocate(t2186, t2187);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  __retval2185 = r2188;
  unsigned int** t2189 = __retval2185;
  return t2189;
}

// function: _ZNSt11_Deque_baseIjSaIjEE15_M_allocate_mapEm
unsigned int** std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_allocate_map(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2190, unsigned long v2191) {
bb2192:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2193;
  unsigned long __n2194;
  unsigned int** __retval2195;
  struct std__allocator_unsigned_int___ __map_alloc2196;
  this2193 = v2190;
  __n2194 = v2191;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2197 = this2193;
  struct std__allocator_unsigned_int___ r2198 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_map_allocator___const(t2197);
  __map_alloc2196 = r2198;
  unsigned long t2199 = __n2194;
  unsigned int** r2200 = std__allocator_traits_std__allocator_unsigned_int______allocate(&__map_alloc2196, t2199);
  if (__cir_exc_active) {
    unsigned int** __cir_eh_ret = (unsigned int**)0;
    return __cir_eh_ret;
  }
  __retval2195 = r2200;
  unsigned int** t2201 = __retval2195;
  return t2201;
}

// function: _ZNKSt15__new_allocatorIjE11_M_max_sizeEv
unsigned long std____new_allocator_unsigned_int____M_max_size___const(struct std____new_allocator_unsigned_int_* v2202) {
bb2203:
  struct std____new_allocator_unsigned_int_* this2204;
  unsigned long __retval2205;
  this2204 = v2202;
  struct std____new_allocator_unsigned_int_* t2206 = this2204;
  unsigned long c2207 = 9223372036854775807;
  unsigned long c2208 = 4;
  unsigned long b2209 = c2207 / c2208;
  __retval2205 = b2209;
  unsigned long t2210 = __retval2205;
  return t2210;
}

// function: _ZNSt15__new_allocatorIjE8allocateEmPKv
unsigned int* std____new_allocator_unsigned_int___allocate(struct std____new_allocator_unsigned_int_* v2211, unsigned long v2212, void* v2213) {
bb2214:
  struct std____new_allocator_unsigned_int_* this2215;
  unsigned long __n2216;
  void* unnamed2217;
  unsigned int* __retval2218;
  this2215 = v2211;
  __n2216 = v2212;
  unnamed2217 = v2213;
  struct std____new_allocator_unsigned_int_* t2219 = this2215;
    unsigned long t2220 = __n2216;
    unsigned long r2221 = std____new_allocator_unsigned_int____M_max_size___const(t2219);
    _Bool c2222 = ((t2220 > r2221)) ? 1 : 0;
    if (c2222) {
        unsigned long t2223 = __n2216;
        unsigned long c2224 = -1;
        unsigned long c2225 = 4;
        unsigned long b2226 = c2224 / c2225;
        _Bool c2227 = ((t2223 > b2226)) ? 1 : 0;
        if (c2227) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            unsigned int* __cir_eh_ret = (unsigned int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        unsigned int* __cir_eh_ret = (unsigned int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c2228 = 4;
    unsigned long c2229 = 16;
    _Bool c2230 = ((c2228 > c2229)) ? 1 : 0;
    if (c2230) {
      unsigned long __al2231;
      unsigned long c2232 = 4;
      __al2231 = c2232;
      unsigned long t2233 = __n2216;
      unsigned long c2234 = 4;
      unsigned long b2235 = t2233 * c2234;
      unsigned long t2236 = __al2231;
      void* r2237 = operator_new_2(b2235, t2236);
      if (__cir_exc_active) {
        unsigned int* __cir_eh_ret = (unsigned int*)0;
        return __cir_eh_ret;
      }
      unsigned int* cast2238 = (unsigned int*)r2237;
      __retval2218 = cast2238;
      unsigned int* t2239 = __retval2218;
      return t2239;
    }
  unsigned long t2240 = __n2216;
  unsigned long c2241 = 4;
  unsigned long b2242 = t2240 * c2241;
  void* r2243 = operator_new(b2242);
  if (__cir_exc_active) {
    unsigned int* __cir_eh_ret = (unsigned int*)0;
    return __cir_eh_ret;
  }
  unsigned int* cast2244 = (unsigned int*)r2243;
  __retval2218 = cast2244;
  unsigned int* t2245 = __retval2218;
  return t2245;
}

// function: _ZNSaIjE8allocateEm
unsigned int* std__allocator_unsigned_int___allocate(struct std__allocator_unsigned_int_* v2246, unsigned long v2247) {
bb2248:
  struct std__allocator_unsigned_int_* this2249;
  unsigned long __n2250;
  unsigned int* __retval2251;
  this2249 = v2246;
  __n2250 = v2247;
  struct std__allocator_unsigned_int_* t2252 = this2249;
    _Bool r2253 = std____is_constant_evaluated();
    if (r2253) {
        unsigned long t2254 = __n2250;
        unsigned long c2255 = 4;
        unsigned long ovr2256;
        _Bool ovf2257 = __builtin_mul_overflow(t2254, c2255, &ovr2256);
        __n2250 = ovr2256;
        if (ovf2257) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            unsigned int* __cir_eh_ret = (unsigned int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2258 = __n2250;
      void* r2259 = operator_new(t2258);
      if (__cir_exc_active) {
        unsigned int* __cir_eh_ret = (unsigned int*)0;
        return __cir_eh_ret;
      }
      unsigned int* cast2260 = (unsigned int*)r2259;
      __retval2251 = cast2260;
      unsigned int* t2261 = __retval2251;
      return t2261;
    }
  struct std____new_allocator_unsigned_int_* base2262 = (struct std____new_allocator_unsigned_int_*)((char *)t2252 + 0);
  unsigned long t2263 = __n2250;
  void* c2264 = ((void*)0);
  unsigned int* r2265 = std____new_allocator_unsigned_int___allocate(base2262, t2263, c2264);
  if (__cir_exc_active) {
    unsigned int* __cir_eh_ret = (unsigned int*)0;
    return __cir_eh_ret;
  }
  __retval2251 = r2265;
  unsigned int* t2266 = __retval2251;
  return t2266;
}

// function: _ZNSt16allocator_traitsISaIjEE8allocateERS0_m
unsigned int* std__allocator_traits_std__allocator_unsigned_int_____allocate(struct std__allocator_unsigned_int_* v2267, unsigned long v2268) {
bb2269:
  struct std__allocator_unsigned_int_* __a2270;
  unsigned long __n2271;
  unsigned int* __retval2272;
  __a2270 = v2267;
  __n2271 = v2268;
  struct std__allocator_unsigned_int_* t2273 = __a2270;
  unsigned long t2274 = __n2271;
  unsigned int* r2275 = std__allocator_unsigned_int___allocate(t2273, t2274);
  if (__cir_exc_active) {
    unsigned int* __cir_eh_ret = (unsigned int*)0;
    return __cir_eh_ret;
  }
  __retval2272 = r2275;
  unsigned int* t2276 = __retval2272;
  return t2276;
}

// function: _ZNSt11_Deque_baseIjSaIjEE16_M_allocate_nodeEv
unsigned int* std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_allocate_node(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2277) {
bb2278:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2279;
  unsigned int* __retval2280;
  this2279 = v2277;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2281 = this2279;
  struct std__allocator_unsigned_int_* base2282 = (struct std__allocator_unsigned_int_*)((char *)&(t2281->_M_impl) + 0);
  unsigned long c2283 = 4;
  unsigned long r2284 = std____deque_buf_size(c2283);
  if (__cir_exc_active) {
    unsigned int* __cir_eh_ret = (unsigned int*)0;
    return __cir_eh_ret;
  }
  unsigned int* r2285 = std__allocator_traits_std__allocator_unsigned_int_____allocate(base2282, r2284);
  if (__cir_exc_active) {
    unsigned int* __cir_eh_ret = (unsigned int*)0;
    return __cir_eh_ret;
  }
  __retval2280 = r2285;
  unsigned int* t2286 = __retval2280;
  return t2286;
}

// function: _ZNSt15__new_allocatorIjE10deallocateEPjm
void std____new_allocator_unsigned_int___deallocate(struct std____new_allocator_unsigned_int_* v2287, unsigned int* v2288, unsigned long v2289) {
bb2290:
  struct std____new_allocator_unsigned_int_* this2291;
  unsigned int* __p2292;
  unsigned long __n2293;
  this2291 = v2287;
  __p2292 = v2288;
  __n2293 = v2289;
  struct std____new_allocator_unsigned_int_* t2294 = this2291;
    unsigned long c2295 = 4;
    unsigned long c2296 = 16;
    _Bool c2297 = ((c2295 > c2296)) ? 1 : 0;
    if (c2297) {
      unsigned int* t2298 = __p2292;
      void* cast2299 = (void*)t2298;
      unsigned long t2300 = __n2293;
      unsigned long c2301 = 4;
      unsigned long b2302 = t2300 * c2301;
      unsigned long c2303 = 4;
      operator_delete_3(cast2299, b2302, c2303);
      return;
    }
  unsigned int* t2304 = __p2292;
  void* cast2305 = (void*)t2304;
  unsigned long t2306 = __n2293;
  unsigned long c2307 = 4;
  unsigned long b2308 = t2306 * c2307;
  operator_delete_2(cast2305, b2308);
  return;
}

// function: _ZNSaIjE10deallocateEPjm
void std__allocator_unsigned_int___deallocate(struct std__allocator_unsigned_int_* v2309, unsigned int* v2310, unsigned long v2311) {
bb2312:
  struct std__allocator_unsigned_int_* this2313;
  unsigned int* __p2314;
  unsigned long __n2315;
  this2313 = v2309;
  __p2314 = v2310;
  __n2315 = v2311;
  struct std__allocator_unsigned_int_* t2316 = this2313;
    _Bool r2317 = std____is_constant_evaluated();
    if (r2317) {
      unsigned int* t2318 = __p2314;
      void* cast2319 = (void*)t2318;
      operator_delete(cast2319);
      return;
    }
  struct std____new_allocator_unsigned_int_* base2320 = (struct std____new_allocator_unsigned_int_*)((char *)t2316 + 0);
  unsigned int* t2321 = __p2314;
  unsigned long t2322 = __n2315;
  std____new_allocator_unsigned_int___deallocate(base2320, t2321, t2322);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIjEE10deallocateERS0_Pjm
void std__allocator_traits_std__allocator_unsigned_int_____deallocate(struct std__allocator_unsigned_int_* v2323, unsigned int* v2324, unsigned long v2325) {
bb2326:
  struct std__allocator_unsigned_int_* __a2327;
  unsigned int* __p2328;
  unsigned long __n2329;
  __a2327 = v2323;
  __p2328 = v2324;
  __n2329 = v2325;
  struct std__allocator_unsigned_int_* t2330 = __a2327;
  unsigned int* t2331 = __p2328;
  unsigned long t2332 = __n2329;
  std__allocator_unsigned_int___deallocate(t2330, t2331, t2332);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIjSaIjEE18_M_deallocate_nodeEPj
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_node(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2333, unsigned int* v2334) {
bb2335:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2336;
  unsigned int* __p2337;
  this2336 = v2333;
  __p2337 = v2334;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2338 = this2336;
  struct std__allocator_unsigned_int_* base2339 = (struct std__allocator_unsigned_int_*)((char *)&(t2338->_M_impl) + 0);
  unsigned int* t2340 = __p2337;
  unsigned long c2341 = 4;
  unsigned long r2342 = std____deque_buf_size(c2341);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_unsigned_int_____deallocate(base2339, t2340, r2342);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIjSaIjEE16_M_destroy_nodesEPPjS3_
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_destroy_nodes(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2343, unsigned int** v2344, unsigned int** v2345) {
bb2346:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2347;
  unsigned int** __nstart2348;
  unsigned int** __nfinish2349;
  this2347 = v2343;
  __nstart2348 = v2344;
  __nfinish2349 = v2345;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2350 = this2347;
    unsigned int** __n2351;
    unsigned int** t2352 = __nstart2348;
    __n2351 = t2352;
    while (1) {
      unsigned int** t2354 = __n2351;
      unsigned int** t2355 = __nfinish2349;
      _Bool c2356 = ((t2354 < t2355)) ? 1 : 0;
      if (!c2356) break;
      unsigned int** t2357 = __n2351;
      unsigned int* t2358 = *t2357;
      std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_node(t2350, t2358);
    for_step2353: ;
      unsigned int** t2359 = __n2351;
      int c2360 = 1;
      unsigned int** ptr2361 = &(t2359)[c2360];
      __n2351 = ptr2361;
    }
  return;
}

// function: _ZNSt11_Deque_baseIjSaIjEE15_M_create_nodesEPPjS3_
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_create_nodes(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2362, unsigned int** v2363, unsigned int** v2364) {
bb2365:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2366;
  unsigned int** __nstart2367;
  unsigned int** __nfinish2368;
  unsigned int** __cur2369;
  this2366 = v2362;
  __nstart2367 = v2363;
  __nfinish2368 = v2364;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2370 = this2366;
        unsigned int** t2372 = __nstart2367;
        __cur2369 = t2372;
        while (1) {
          unsigned int** t2374 = __cur2369;
          unsigned int** t2375 = __nfinish2368;
          _Bool c2376 = ((t2374 < t2375)) ? 1 : 0;
          if (!c2376) break;
          unsigned int* r2377 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_allocate_node(t2370);
          if (__cir_exc_active) {
            goto cir_try_dispatch2371;
          }
          unsigned int** t2378 = __cur2369;
          *t2378 = r2377;
        for_step2373: ;
          unsigned int** t2379 = __cur2369;
          int c2380 = 1;
          unsigned int** ptr2381 = &(t2379)[c2380];
          __cur2369 = ptr2381;
        }
    cir_try_dispatch2371: ;
    if (__cir_exc_active) {
    {
      int ca_tok2382 = 0;
      void* ca_exn2383 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unsigned int** t2384 = __nstart2367;
        unsigned int** t2385 = __cur2369;
        std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_destroy_nodes(t2370, t2384, t2385);
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

// function: _ZNSt15__new_allocatorIPjE10deallocateEPS0_m
void std____new_allocator_unsigned_int____deallocate(struct std____new_allocator_unsigned_int___* v2386, unsigned int** v2387, unsigned long v2388) {
bb2389:
  struct std____new_allocator_unsigned_int___* this2390;
  unsigned int** __p2391;
  unsigned long __n2392;
  this2390 = v2386;
  __p2391 = v2387;
  __n2392 = v2388;
  struct std____new_allocator_unsigned_int___* t2393 = this2390;
    unsigned long c2394 = 8;
    unsigned long c2395 = 16;
    _Bool c2396 = ((c2394 > c2395)) ? 1 : 0;
    if (c2396) {
      unsigned int** t2397 = __p2391;
      void* cast2398 = (void*)t2397;
      unsigned long t2399 = __n2392;
      unsigned long c2400 = 8;
      unsigned long b2401 = t2399 * c2400;
      unsigned long c2402 = 8;
      operator_delete_3(cast2398, b2401, c2402);
      return;
    }
  unsigned int** t2403 = __p2391;
  void* cast2404 = (void*)t2403;
  unsigned long t2405 = __n2392;
  unsigned long c2406 = 8;
  unsigned long b2407 = t2405 * c2406;
  operator_delete_2(cast2404, b2407);
  return;
}

// function: _ZNSaIPjE10deallocateEPS_m
void std__allocator_unsigned_int____deallocate(struct std__allocator_unsigned_int___* v2408, unsigned int** v2409, unsigned long v2410) {
bb2411:
  struct std__allocator_unsigned_int___* this2412;
  unsigned int** __p2413;
  unsigned long __n2414;
  this2412 = v2408;
  __p2413 = v2409;
  __n2414 = v2410;
  struct std__allocator_unsigned_int___* t2415 = this2412;
    _Bool r2416 = std____is_constant_evaluated();
    if (r2416) {
      unsigned int** t2417 = __p2413;
      void* cast2418 = (void*)t2417;
      operator_delete(cast2418);
      return;
    }
  struct std____new_allocator_unsigned_int___* base2419 = (struct std____new_allocator_unsigned_int___*)((char *)t2415 + 0);
  unsigned int** t2420 = __p2413;
  unsigned long t2421 = __n2414;
  std____new_allocator_unsigned_int____deallocate(base2419, t2420, t2421);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPjEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_unsigned_int______deallocate(struct std__allocator_unsigned_int___* v2422, unsigned int** v2423, unsigned long v2424) {
bb2425:
  struct std__allocator_unsigned_int___* __a2426;
  unsigned int** __p2427;
  unsigned long __n2428;
  __a2426 = v2422;
  __p2427 = v2423;
  __n2428 = v2424;
  struct std__allocator_unsigned_int___* t2429 = __a2426;
  unsigned int** t2430 = __p2427;
  unsigned long t2431 = __n2428;
  std__allocator_unsigned_int____deallocate(t2429, t2430, t2431);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIjSaIjEE17_M_deallocate_mapEPPjm
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_map(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2432, unsigned int** v2433, unsigned long v2434) {
bb2435:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2436;
  unsigned int** __p2437;
  unsigned long __n2438;
  struct std__allocator_unsigned_int___ __map_alloc2439;
  this2436 = v2432;
  __p2437 = v2433;
  __n2438 = v2434;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2440 = this2436;
  struct std__allocator_unsigned_int___ r2441 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_map_allocator___const(t2440);
  __map_alloc2439 = r2441;
  unsigned int** t2442 = __p2437;
  unsigned long t2443 = __n2438;
  std__allocator_traits_std__allocator_unsigned_int______deallocate(&__map_alloc2439, t2442, t2443);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIjRjPjE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size() {
bb2444:
  unsigned long __retval2445;
  unsigned long c2446 = 4;
  unsigned long r2447 = std____deque_buf_size(c2446);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval2445 = r2447;
  unsigned long t2448 = __retval2445;
  return t2448;
}

// function: _ZNSt15_Deque_iteratorIjRjPjE11_M_set_nodeEPS1_
void std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v2449, unsigned int** v2450) {
bb2451:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* this2452;
  unsigned int** __new_node2453;
  this2452 = v2449;
  __new_node2453 = v2450;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t2454 = this2452;
  unsigned int** t2455 = __new_node2453;
  t2454->_M_node = t2455;
  unsigned int** t2456 = __new_node2453;
  unsigned int* t2457 = *t2456;
  t2454->_M_first = t2457;
  unsigned int* t2458 = t2454->_M_first;
  unsigned long r2459 = std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____S_buffer_size();
  long cast2460 = (long)r2459;
  unsigned int* ptr2461 = &(t2458)[cast2460];
  t2454->_M_last = ptr2461;
  return;
}

// function: _ZNSt11_Deque_baseIjSaIjEE17_M_initialize_mapEm
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_initialize_map(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2462, unsigned long v2463) {
bb2464:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2465;
  unsigned long __num_elements2466;
  unsigned long __num_nodes2467;
  unsigned long ref_tmp02468;
  unsigned long ref_tmp12469;
  unsigned int** __nstart2470;
  unsigned int** __nfinish2471;
  this2465 = v2462;
  __num_elements2466 = v2463;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2472 = this2465;
  unsigned long t2473 = __num_elements2466;
  unsigned long c2474 = 4;
  unsigned long r2475 = std____deque_buf_size(c2474);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b2476 = t2473 / r2475;
  unsigned long c2477 = 1;
  unsigned long b2478 = b2476 + c2477;
  __num_nodes2467 = b2478;
  unsigned long c2479 = 8;
  ref_tmp02468 = c2479;
  unsigned long t2480 = __num_nodes2467;
  unsigned long c2481 = 2;
  unsigned long b2482 = t2480 + c2481;
  ref_tmp12469 = b2482;
  unsigned long* r2483 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp02468, &ref_tmp12469);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2484 = *r2483;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2485 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  base2485->_M_map_size = t2484;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2486 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  unsigned long t2487 = base2486->_M_map_size;
  unsigned int** r2488 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_allocate_map(t2472, t2487);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2489 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  base2489->_M_map = r2488;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2490 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  unsigned int** t2491 = base2490->_M_map;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2492 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  unsigned long t2493 = base2492->_M_map_size;
  unsigned long t2494 = __num_nodes2467;
  unsigned long b2495 = t2493 - t2494;
  unsigned long c2496 = 2;
  unsigned long b2497 = b2495 / c2496;
  unsigned int** ptr2498 = &(t2491)[b2497];
  __nstart2470 = ptr2498;
  unsigned int** t2499 = __nstart2470;
  unsigned long t2500 = __num_nodes2467;
  unsigned int** ptr2501 = &(t2499)[t2500];
  __nfinish2471 = ptr2501;
      unsigned int** t2503 = __nstart2470;
      unsigned int** t2504 = __nfinish2471;
      std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_create_nodes(t2472, t2503, t2504);
      if (__cir_exc_active) {
        goto cir_try_dispatch2502;
      }
    cir_try_dispatch2502: ;
    if (__cir_exc_active) {
    {
      int ca_tok2505 = 0;
      void* ca_exn2506 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2507 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
        unsigned int** t2508 = base2507->_M_map;
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2509 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
        unsigned long t2510 = base2509->_M_map_size;
        std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_map(t2472, t2508, t2510);
        unsigned int** c2511 = ((void*)0);
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2512 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
        base2512->_M_map = c2511;
        unsigned long c2513 = 0;
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2514 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
        base2514->_M_map_size = c2513;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2515 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  unsigned int** t2516 = __nstart2470;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(&base2515->_M_start, t2516);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2517 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  unsigned int** t2518 = __nfinish2471;
  int c2519 = -1;
  unsigned int** ptr2520 = &(t2518)[c2519];
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____M_set_node(&base2517->_M_finish, ptr2520);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2521 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  unsigned int* t2522 = base2521->_M_start._M_first;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2523 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  base2523->_M_start._M_cur = t2522;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2524 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  unsigned int* t2525 = base2524->_M_finish._M_first;
  unsigned long t2526 = __num_elements2466;
  unsigned long c2527 = 4;
  unsigned long r2528 = std____deque_buf_size(c2527);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b2529 = t2526 % r2528;
  unsigned int* ptr2530 = &(t2525)[b2529];
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2531 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2472->_M_impl) + 0);
  base2531->_M_finish._M_cur = ptr2530;
  return;
}

// function: _ZNSt11_Deque_baseIjSaIjEE11_Deque_implD2Ev
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_impl____Deque_impl(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl* v2532) {
bb2533:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl* this2534;
  this2534 = v2532;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl* t2535 = this2534;
  {
    struct std__allocator_unsigned_int_* base2536 = (struct std__allocator_unsigned_int_*)((char *)t2535 + 0);
    std__allocator_unsigned_int____allocator(base2536);
  }
  return;
}

// function: _ZNSt11_Deque_baseIjSaIjEEC2Ev
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_base(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2537) {
bb2538:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2539;
  this2539 = v2537;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2540 = this2539;
  std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_impl___Deque_impl(&t2540->_M_impl);
    unsigned long c2541 = 0;
    std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_initialize_map(t2540, c2541);
    if (__cir_exc_active) {
      {
        std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_impl____Deque_impl(&t2540->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIjSaIjEED2Ev
void std___Deque_base_unsigned_int__std__allocator_unsigned_int_______Deque_base(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2542) {
bb2543:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2544;
  this2544 = v2542;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2545 = this2544;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2546 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2545->_M_impl) + 0);
      unsigned int** t2547 = base2546->_M_map;
      _Bool cast2548 = (_Bool)t2547;
      if (cast2548) {
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2549 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2545->_M_impl) + 0);
        unsigned int** t2550 = base2549->_M_start._M_node;
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2551 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2545->_M_impl) + 0);
        unsigned int** t2552 = base2551->_M_finish._M_node;
        int c2553 = 1;
        unsigned int** ptr2554 = &(t2552)[c2553];
        std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_destroy_nodes(t2545, t2550, ptr2554);
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2555 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2545->_M_impl) + 0);
        unsigned int** t2556 = base2555->_M_map;
        struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2557 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(t2545->_M_impl) + 0);
        unsigned long t2558 = base2557->_M_map_size;
        std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_deallocate_map(t2545, t2556, t2558);
      }
  {
    std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_impl____Deque_impl(&t2545->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIjEC2Ev
void std____new_allocator_unsigned_int_____new_allocator(struct std____new_allocator_unsigned_int_* v2559) {
bb2560:
  struct std____new_allocator_unsigned_int_* this2561;
  this2561 = v2559;
  struct std____new_allocator_unsigned_int_* t2562 = this2561;
  return;
}

// function: _ZNSaIjEC2Ev
void std__allocator_unsigned_int___allocator(struct std__allocator_unsigned_int_* v2563) {
bb2564:
  struct std__allocator_unsigned_int_* this2565;
  this2565 = v2563;
  struct std__allocator_unsigned_int_* t2566 = this2565;
  struct std____new_allocator_unsigned_int_* base2567 = (struct std____new_allocator_unsigned_int_*)((char *)t2566 + 0);
  std____new_allocator_unsigned_int_____new_allocator(base2567);
  return;
}

// function: _ZNSt15_Deque_iteratorIjRjPjEC2Ev
void std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator_3(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v2568) {
bb2569:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* this2570;
  this2570 = v2568;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t2571 = this2570;
  unsigned int* c2572 = ((void*)0);
  t2571->_M_cur = c2572;
  unsigned int* c2573 = ((void*)0);
  t2571->_M_first = c2573;
  unsigned int* c2574 = ((void*)0);
  t2571->_M_last = c2574;
  unsigned int** c2575 = ((void*)0);
  t2571->_M_node = c2575;
  return;
}

// function: _ZNSt11_Deque_baseIjSaIjEE16_Deque_impl_dataC2Ev
void std___Deque_base_unsigned_int__std__allocator_unsigned_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* v2576) {
bb2577:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* this2578;
  this2578 = v2576;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* t2579 = this2578;
  unsigned int** c2580 = ((void*)0);
  t2579->_M_map = c2580;
  unsigned long c2581 = 0;
  t2579->_M_map_size = c2581;
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator_3(&t2579->_M_start);
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator_3(&t2579->_M_finish);
  return;
}

// function: _ZNSaIjED2Ev
void std__allocator_unsigned_int____allocator(struct std__allocator_unsigned_int_* v2582) {
bb2583:
  struct std__allocator_unsigned_int_* this2584;
  this2584 = v2582;
  struct std__allocator_unsigned_int_* t2585 = this2584;
  return;
}

// function: _ZNSt15__new_allocatorIPjEC2Ev
void std____new_allocator_unsigned_int______new_allocator(struct std____new_allocator_unsigned_int___* v2586) {
bb2587:
  struct std____new_allocator_unsigned_int___* this2588;
  this2588 = v2586;
  struct std____new_allocator_unsigned_int___* t2589 = this2588;
  return;
}

// function: _ZSt10destroy_atIjEvPT_
void void_std__destroy_at_unsigned_int_(unsigned int* v2590) {
bb2591:
  unsigned int* __location2592;
  __location2592 = v2590;
  return;
}

// function: _ZSt8_DestroyIPjEvT_S1_
void void_std___Destroy_unsigned_int__(unsigned int* v2593, unsigned int* v2594) {
bb2595:
  unsigned int* __first2596;
  unsigned int* __last2597;
  __first2596 = v2593;
  __last2597 = v2594;
      _Bool r2598 = std____is_constant_evaluated();
      if (r2598) {
          while (1) {
            unsigned int* t2600 = __first2596;
            unsigned int* t2601 = __last2597;
            _Bool c2602 = ((t2600 != t2601)) ? 1 : 0;
            if (!c2602) break;
            unsigned int* t2603 = __first2596;
            void_std__destroy_at_unsigned_int_(t2603);
            if (__cir_exc_active) {
              return;
            }
          for_step2599: ;
            unsigned int* t2604 = __first2596;
            int c2605 = 1;
            unsigned int* ptr2606 = &(t2604)[c2605];
            __first2596 = ptr2606;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPjjEvT_S1_RSaIT0_E
void void_std___Destroy_unsigned_int___unsigned_int_(unsigned int* v2607, unsigned int* v2608, struct std__allocator_unsigned_int_* v2609) {
bb2610:
  unsigned int* __first2611;
  unsigned int* __last2612;
  struct std__allocator_unsigned_int_* unnamed2613;
  __first2611 = v2607;
  __last2612 = v2608;
  unnamed2613 = v2609;
  unsigned int* t2614 = __first2611;
  unsigned int* t2615 = __last2612;
  void_std___Destroy_unsigned_int__(t2614, t2615);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIjSaIjEE14_S_buffer_sizeEv
unsigned long std__deque_unsigned_int__std__allocator_unsigned_int______S_buffer_size() {
bb2616:
  unsigned long __retval2617;
  unsigned long c2618 = 4;
  unsigned long r2619 = std____deque_buf_size(c2618);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval2617 = r2619;
  unsigned long t2620 = __retval2617;
  return t2620;
}

// function: _ZNSt5dequeIjSaIjEE19_M_destroy_data_auxESt15_Deque_iteratorIjRjPjES5_
void std__deque_unsigned_int__std__allocator_unsigned_int______M_destroy_data_aux(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v2621, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v2622, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v2623) {
bb2624:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this2625;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first2626;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last2627;
  this2625 = v2621;
  __first2626 = v2622;
  __last2627 = v2623;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t2628 = this2625;
    unsigned int** __node2629;
    unsigned int** t2630 = __first2626._M_node;
    int c2631 = 1;
    unsigned int** ptr2632 = &(t2630)[c2631];
    __node2629 = ptr2632;
    while (1) {
      unsigned int** t2634 = __node2629;
      unsigned int** t2635 = __last2627._M_node;
      _Bool c2636 = ((t2634 < t2635)) ? 1 : 0;
      if (!c2636) break;
      unsigned int** t2637 = __node2629;
      unsigned int* t2638 = *t2637;
      unsigned int** t2639 = __node2629;
      unsigned int* t2640 = *t2639;
      unsigned long r2641 = std__deque_unsigned_int__std__allocator_unsigned_int______S_buffer_size();
      unsigned int* ptr2642 = &(t2640)[r2641];
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base2643 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t2628 + 0);
      struct std__allocator_unsigned_int_* r2644 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base2643);
      void_std___Destroy_unsigned_int___unsigned_int_(t2638, ptr2642, r2644);
      if (__cir_exc_active) {
        return;
      }
    for_step2633: ;
      unsigned int** t2645 = __node2629;
      int c2646 = 1;
      unsigned int** ptr2647 = &(t2645)[c2646];
      __node2629 = ptr2647;
    }
    unsigned int** t2648 = __first2626._M_node;
    unsigned int** t2649 = __last2627._M_node;
    _Bool c2650 = ((t2648 != t2649)) ? 1 : 0;
    if (c2650) {
      unsigned int* t2651 = __first2626._M_cur;
      unsigned int* t2652 = __first2626._M_last;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base2653 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t2628 + 0);
      struct std__allocator_unsigned_int_* r2654 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base2653);
      void_std___Destroy_unsigned_int___unsigned_int_(t2651, t2652, r2654);
      if (__cir_exc_active) {
        return;
      }
      unsigned int* t2655 = __last2627._M_first;
      unsigned int* t2656 = __last2627._M_cur;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base2657 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t2628 + 0);
      struct std__allocator_unsigned_int_* r2658 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base2657);
      void_std___Destroy_unsigned_int___unsigned_int_(t2655, t2656, r2658);
      if (__cir_exc_active) {
        return;
      }
    } else {
      unsigned int* t2659 = __first2626._M_cur;
      unsigned int* t2660 = __last2627._M_cur;
      struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base2661 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t2628 + 0);
      struct std__allocator_unsigned_int_* r2662 = std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base2661);
      void_std___Destroy_unsigned_int___unsigned_int_(t2659, t2660, r2662);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIjRjPjEC2ERKS2_
void std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v2663, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* v2664) {
bb2665:
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* this2666;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* __x2667;
  this2666 = v2663;
  __x2667 = v2664;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t2668 = this2666;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t2669 = __x2667;
  unsigned int* t2670 = t2669->_M_cur;
  t2668->_M_cur = t2670;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t2671 = __x2667;
  unsigned int* t2672 = t2671->_M_first;
  t2668->_M_first = t2672;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t2673 = __x2667;
  unsigned int* t2674 = t2673->_M_last;
  t2668->_M_last = t2674;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___* t2675 = __x2667;
  unsigned int** t2676 = t2675->_M_node;
  t2668->_M_node = t2676;
  return;
}

// function: _ZNSt5dequeIjSaIjEE15_M_destroy_dataESt15_Deque_iteratorIjRjPjES5_RKS0_
void std__deque_unsigned_int__std__allocator_unsigned_int______M_destroy_data(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v2677, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v2678, struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ v2679, struct std__allocator_unsigned_int_* v2680) {
bb2681:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this2682;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __first2683;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __last2684;
  struct std__allocator_unsigned_int_* unnamed2685;
  this2682 = v2677;
  __first2683 = v2678;
  __last2684 = v2679;
  unnamed2685 = v2680;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t2686 = this2682;
    _Bool c2687 = 0;
    if (c2687) {
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp02688;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp12689;
      std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp02688, &__first2683);
      std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&agg_tmp12689, &__last2684);
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t2690 = agg_tmp02688;
      struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t2691 = agg_tmp12689;
      std__deque_unsigned_int__std__allocator_unsigned_int______M_destroy_data_aux(t2686, t2690, t2691);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIjSaIjEE3endEv
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std__deque_unsigned_int__std__allocator_unsigned_int_____end(struct std__deque_unsigned_int__std__allocator_unsigned_int__* v2692) {
bb2693:
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* this2694;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ __retval2695;
  this2694 = v2692;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__* t2696 = this2694;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* base2697 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t2696 + 0);
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data* base2698 = (struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data*)((char *)&(base2697->_M_impl) + 0);
  std___Deque_iterator_unsigned_int__unsigned_int___unsigned_int_____Deque_iterator(&__retval2695, &base2698->_M_finish);
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ t2699 = __retval2695;
  return t2699;
}

// function: _ZNSt11_Deque_baseIjSaIjEE19_M_get_Tp_allocatorEv
struct std__allocator_unsigned_int_* std___Deque_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* v2700) {
bb2701:
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* this2702;
  struct std__allocator_unsigned_int_* __retval2703;
  this2702 = v2700;
  struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__* t2704 = this2702;
  struct std__allocator_unsigned_int_* base2705 = (struct std__allocator_unsigned_int_*)((char *)&(t2704->_M_impl) + 0);
  __retval2703 = base2705;
  struct std__allocator_unsigned_int_* t2706 = __retval2703;
  return t2706;
}

