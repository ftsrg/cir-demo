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
struct std___Deque_iterator_int_int___int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
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
char _str[21] = "mydeque1 == mydeque2";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_end/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[23] = "*(mydeque1.end()) == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[18] = "mydeque contains:";
char _str_4[9] = "*it == 1";
char _str_5[2] = " ";
char _str_6[48] = "cannot create std::deque larger than max_size()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* p0);
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
void std__deque_int__std__allocator_int______M_reserve_map_at_front(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___5(struct std___Deque_iterator_int__int____int___* p0);
void void_std__deque_int__std__allocator_int______M_push_front_aux_int_const__(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_front_2(struct std__deque_int__std__allocator_int__* p0, int* p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
void void_std__deque_int__std__allocator_int______M_push_front_aux_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
int* int__std__deque_int__std__allocator_int_____emplace_front_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_front(struct std__deque_int__std__allocator_int__* p0, int* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___3(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___ p1);
long* long_const__std__min_long_(long* p0, long* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_true__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_true__int___int__(int* p0, int* p1, int* p2);
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(int* p0, int* p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* p0, int* p1);
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* p0);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(int* p0, int* p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__deque_int__std__allocator_int______M_emplace_aux_int_const__(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int______M_insert_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0, int* p1, int** p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int_const___int_const_____M_const_cast___const(struct std___Deque_iterator_int_int___int___* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____insert(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int_int___int___ p1, int* p2);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_back_2(struct std__deque_int__std__allocator_int__* p0, int* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int int_std____memcmp_int__int_(int* p0, int* p1, unsigned long p2);
_Bool bool_std____equal_true___equal_int_(int* p0, int* p1, int* p2);
_Bool bool_std____equal_aux1_int___int__(int* p0, int* p1, int* p2);
_Bool __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(int* p0, int* p1, struct std___Deque_iterator_int_int___int___ p2);
void std___Deque_iterator_int__int_const___int_const_____M_set_node(struct std___Deque_iterator_int_int___int___* p0, int** p1);
struct std___Deque_iterator_int_int___int___* std___Deque_iterator_int__int_const___int_const____operator__(struct std___Deque_iterator_int_int___int___* p0, long p1);
unsigned long std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
_Bool bool_std____equal_dit_int__int_const___int_const___std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int_int___int___* p1, struct std___Deque_iterator_int_int___int___ p2);
_Bool bool_std____equal_aux1_int__int_const___int_const___int__int_const___int_const__(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int_int___int___ p2);
struct std___Deque_iterator_int_int___int___ std___Deque_iterator_int__int_const___int_const___std____niter_base_std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ p0);
_Bool bool_std____equal_aux_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int_int___int___ p2);
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int_int___int___* p1);
_Bool bool_std__equal_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int_int___int___ p2);
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____begin___const(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____end___const(struct std__deque_int__std__allocator_int__* p0);
_Bool bool_std__operator___int__std__allocator_int___(struct std__deque_int__std__allocator_int__* p0, struct std__deque_int__std__allocator_int__* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
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
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int____operator___4(struct std___Deque_iterator_int__int____int___* p0, int p1);
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

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* v5) {
bb6:
  struct std___Deque_iterator_int__int____int___* this7;
  this7 = v5;
  struct std___Deque_iterator_int__int____int___* t8 = this7;
  int* c9 = ((void*)0);
  t8->_M_cur = c9;
  int* c10 = ((void*)0);
  t8->_M_first = c10;
  int* c11 = ((void*)0);
  t8->_M_last = c11;
  int** c12 = ((void*)0);
  t8->_M_node = c12;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v13, int* v14) {
bb15:
  int* __location16;
  int* __args17;
  int* __retval18;
  void* __loc19;
  __location16 = v13;
  __args17 = v14;
  int* t20 = __location16;
  void* cast21 = (void*)t20;
  __loc19 = cast21;
    void* t22 = __loc19;
    int* cast23 = (int*)t22;
    int* t24 = __args17;
    int t25 = *t24;
    *cast23 = t25;
    __retval18 = cast23;
    int* t26 = __retval18;
    return t26;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v27, int* v28, int* v29) {
bb30:
  struct std__allocator_int_* __a31;
  int* __p32;
  int* __args33;
  __a31 = v27;
  __p32 = v28;
  __args33 = v29;
  int* t34 = __p32;
  int* t35 = __args33;
  int* r36 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t34, t35);
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v37, struct std___Deque_iterator_int__int____int___* v38) {
bb39:
  struct std___Deque_iterator_int__int____int___* __x40;
  struct std___Deque_iterator_int__int____int___* __y41;
  long __retval42;
  __x40 = v37;
  __y41 = v38;
  unsigned long r43 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast44 = (long)r43;
  struct std___Deque_iterator_int__int____int___* t45 = __x40;
  int** t46 = t45->_M_node;
  struct std___Deque_iterator_int__int____int___* t47 = __y41;
  int** t48 = t47->_M_node;
  long diff49 = t46 - t48;
  struct std___Deque_iterator_int__int____int___* t50 = __x40;
  int** t51 = t50->_M_node;
  _Bool cast52 = (_Bool)t51;
  long cast53 = (long)cast52;
  long b54 = diff49 - cast53;
  long b55 = cast44 * b54;
  struct std___Deque_iterator_int__int____int___* t56 = __x40;
  int* t57 = t56->_M_cur;
  struct std___Deque_iterator_int__int____int___* t58 = __x40;
  int* t59 = t58->_M_first;
  long diff60 = t57 - t59;
  long b61 = b55 + diff60;
  struct std___Deque_iterator_int__int____int___* t62 = __y41;
  int* t63 = t62->_M_last;
  struct std___Deque_iterator_int__int____int___* t64 = __y41;
  int* t65 = t64->_M_cur;
  long diff66 = t63 - t65;
  long b67 = b61 + diff66;
  __retval42 = b67;
  long t68 = __retval42;
  return t68;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v69) {
bb70:
  struct std__deque_int__std__allocator_int__* this71;
  unsigned long __retval72;
  unsigned long __sz73;
  this71 = v69;
  struct std__deque_int__std__allocator_int__* t74 = this71;
  struct std___Deque_base_int__std__allocator_int__* base75 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t74 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base76 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base75->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base77 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t74 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base78 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base77->_M_impl) + 0);
  long r79 = std__operator_(&base76->_M_finish, &base78->_M_start);
  unsigned long cast80 = (unsigned long)r79;
  __sz73 = cast80;
    unsigned long t81 = __sz73;
    unsigned long r82 = std__deque_int__std__allocator_int_____max_size___const(t74);
    _Bool c83 = ((t81 > r82)) ? 1 : 0;
    if (c83) {
      __builtin_unreachable();
    }
  unsigned long t84 = __sz73;
  __retval72 = t84;
  unsigned long t85 = __retval72;
  return t85;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v86, unsigned long* v87) {
bb88:
  unsigned long* __a89;
  unsigned long* __b90;
  unsigned long* __retval91;
  __a89 = v86;
  __b90 = v87;
    unsigned long* t92 = __b90;
    unsigned long t93 = *t92;
    unsigned long* t94 = __a89;
    unsigned long t95 = *t94;
    _Bool c96 = ((t93 < t95)) ? 1 : 0;
    if (c96) {
      unsigned long* t97 = __b90;
      __retval91 = t97;
      unsigned long* t98 = __retval91;
      return t98;
    }
  unsigned long* t99 = __a89;
  __retval91 = t99;
  unsigned long* t100 = __retval91;
  return t100;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v101) {
bb102:
  struct std__allocator_int_* __a103;
  unsigned long __retval104;
  unsigned long __diffmax105;
  unsigned long __allocmax106;
  __a103 = v101;
  unsigned long c107 = 9223372036854775807;
  __diffmax105 = c107;
  unsigned long c108 = 4611686018427387903;
  __allocmax106 = c108;
  unsigned long* r109 = unsigned_long_const__std__min_unsigned_long_(&__diffmax105, &__allocmax106);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t110 = *r109;
  __retval104 = t110;
  unsigned long t111 = __retval104;
  return t111;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v112) {
bb113:
  struct std__deque_int__std__allocator_int__* this114;
  unsigned long __retval115;
  this114 = v112;
  struct std__deque_int__std__allocator_int__* t116 = this114;
  struct std___Deque_base_int__std__allocator_int__* base117 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t116 + 0);
  struct std__allocator_int_* r118 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base117);
  unsigned long r119 = std__deque_int__std__allocator_int______S_max_size(r118);
  __retval115 = r119;
  unsigned long t120 = __retval115;
  return t120;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v121, int** v122) {
bb123:
  int*** unnamed124;
  int** __res125;
  int** __retval126;
  unnamed124 = v121;
  __res125 = v122;
  int** t127 = __res125;
  __retval126 = t127;
  int** t128 = __retval126;
  return t128;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v129, int** v130, struct std__random_access_iterator_tag v131) {
bb132:
  int** __first133;
  int** __last134;
  struct std__random_access_iterator_tag unnamed135;
  long __retval136;
  __first133 = v129;
  __last134 = v130;
  unnamed135 = v131;
  int** t137 = __last134;
  int** t138 = __first133;
  long diff139 = t137 - t138;
  __retval136 = diff139;
  long t140 = __retval136;
  return t140;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v141) {
bb142:
  int*** unnamed143;
  struct std__random_access_iterator_tag __retval144;
  unnamed143 = v141;
  struct std__random_access_iterator_tag t145 = __retval144;
  return t145;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v146, int** v147) {
bb148:
  int** __first149;
  int** __last150;
  long __retval151;
  struct std__random_access_iterator_tag agg_tmp0152;
  __first149 = v146;
  __last150 = v147;
  int** t153 = __first149;
  int** t154 = __last150;
  struct std__random_access_iterator_tag r155 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first149);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0152 = r155;
  struct std__random_access_iterator_tag t156 = agg_tmp0152;
  long r157 = std__iterator_traits_int_____difference_type_std____distance_int___(t153, t154, t156);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval151 = r157;
  long t158 = __retval151;
  return t158;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v159, int*** v160) {
bb161:
  int*** __out162;
  int*** __in163;
  __out162 = v159;
  __in163 = v160;
    int*** t164 = __in163;
    int** t165 = *t164;
    int* t166 = *t165;
    int*** t167 = __out162;
    int** t168 = *t167;
    *t168 = t166;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v169, int** v170, int** v171) {
bb172:
  int** __first173;
  int** __last174;
  int** __result175;
  int** __retval176;
  __first173 = v169;
  __last174 = v170;
  __result175 = v171;
      _Bool r177 = std____is_constant_evaluated();
      if (r177) {
      } else {
          long __n178;
          int** t179 = __first173;
          int** t180 = __last174;
          long r181 = std__iterator_traits_int_____difference_type_std__distance_int___(t179, t180);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n178 = r181;
            long t182 = __n178;
            long c183 = 1;
            _Bool c184 = ((t182 > c183)) ? 1 : 0;
            if (c184) {
              int** t185 = __result175;
              void* cast186 = (void*)t185;
              int** t187 = __first173;
              void* cast188 = (void*)t187;
              long t189 = __n178;
              unsigned long cast190 = (unsigned long)t189;
              unsigned long c191 = 8;
              unsigned long b192 = cast190 * c191;
              void* r193 = memmove(cast186, cast188, b192);
              long t194 = __n178;
              int** t195 = __result175;
              int** ptr196 = &(t195)[t194];
              __result175 = ptr196;
            } else {
                long t197 = __n178;
                long c198 = 1;
                _Bool c199 = ((t197 == c198)) ? 1 : 0;
                if (c199) {
                  void_std____assign_one_false__int____int___(&__result175, &__first173);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t200 = __result175;
                  int c201 = 1;
                  int** ptr202 = &(t200)[c201];
                  __result175 = ptr202;
                }
            }
          int** t203 = __result175;
          __retval176 = t203;
          int** t204 = __retval176;
          return t204;
      }
    while (1) {
      int** t206 = __first173;
      int** t207 = __last174;
      _Bool c208 = ((t206 != t207)) ? 1 : 0;
      if (!c208) break;
      void_std____assign_one_false__int____int___(&__result175, &__first173);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step205: ;
      int** t209 = __result175;
      int c210 = 1;
      int** ptr211 = &(t209)[c210];
      __result175 = ptr211;
      int** t212 = __first173;
      int c213 = 1;
      int** ptr214 = &(t212)[c213];
      __first173 = ptr214;
    }
  int** t215 = __result175;
  __retval176 = t215;
  int** t216 = __retval176;
  return t216;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v217, int** v218, int** v219) {
bb220:
  int** __first221;
  int** __last222;
  int** __result223;
  int** __retval224;
  __first221 = v217;
  __last222 = v218;
  __result223 = v219;
  int** t225 = __first221;
  int** t226 = __last222;
  int** t227 = __result223;
  int** r228 = int___std____copy_move_a2_false__int____int____int___(t225, t226, t227);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval224 = r228;
  int** t229 = __retval224;
  return t229;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v230) {
bb231:
  int** __it232;
  int** __retval233;
  __it232 = v230;
  int** t234 = __it232;
  __retval233 = t234;
  int** t235 = __retval233;
  return t235;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v236, int** v237, int** v238) {
bb239:
  int** __first240;
  int** __last241;
  int** __result242;
  int** __retval243;
  __first240 = v236;
  __last241 = v237;
  __result242 = v238;
  int** t244 = __first240;
  int** r245 = int___std____niter_base_int___(t244);
  int** t246 = __last241;
  int** r247 = int___std____niter_base_int___(t246);
  int** t248 = __result242;
  int** r249 = int___std____niter_base_int___(t248);
  int** r250 = int___std____copy_move_a1_false__int____int___(r245, r247, r249);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r251 = int___std____niter_wrap_int___(&__result242, r250);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval243 = r251;
  int** t252 = __retval243;
  return t252;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v253) {
bb254:
  int** __it255;
  int** __retval256;
  __it255 = v253;
  int** t257 = __it255;
  __retval256 = t257;
  int** t258 = __retval256;
  return t258;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v259, int** v260, int** v261) {
bb262:
  int** __first263;
  int** __last264;
  int** __result265;
  int** __retval266;
  __first263 = v259;
  __last264 = v260;
  __result265 = v261;
  int** t267 = __first263;
  int** r268 = int___std____miter_base_int___(t267);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t269 = __last264;
  int** r270 = int___std____miter_base_int___(t269);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t271 = __result265;
  int** r272 = int___std____copy_move_a_false__int____int___(r268, r270, t271);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval266 = r272;
  int** t273 = __retval266;
  return t273;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb274:
  _Bool __retval275;
    _Bool c276 = 0;
    __retval275 = c276;
    _Bool t277 = __retval275;
    return t277;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v278, long v279, struct std__random_access_iterator_tag v280) {
bb281:
  int*** __i282;
  long __n283;
  struct std__random_access_iterator_tag unnamed284;
  __i282 = v278;
  __n283 = v279;
  unnamed284 = v280;
    long t285 = __n283;
    _Bool isconst286 = 0;
    _Bool ternary287;
    if (isconst286) {
      long t288 = __n283;
      long c289 = 1;
      _Bool c290 = ((t288 == c289)) ? 1 : 0;
      ternary287 = (_Bool)c290;
    } else {
      _Bool c291 = 0;
      ternary287 = (_Bool)c291;
    }
    if (ternary287) {
      int*** t292 = __i282;
      int** t293 = *t292;
      int c294 = 1;
      int** ptr295 = &(t293)[c294];
      *t292 = ptr295;
    } else {
        long t296 = __n283;
        _Bool isconst297 = 0;
        _Bool ternary298;
        if (isconst297) {
          long t299 = __n283;
          long c300 = -1;
          _Bool c301 = ((t299 == c300)) ? 1 : 0;
          ternary298 = (_Bool)c301;
        } else {
          _Bool c302 = 0;
          ternary298 = (_Bool)c302;
        }
        if (ternary298) {
          int*** t303 = __i282;
          int** t304 = *t303;
          int c305 = -1;
          int** ptr306 = &(t304)[c305];
          *t303 = ptr306;
        } else {
          long t307 = __n283;
          int*** t308 = __i282;
          int** t309 = *t308;
          int** ptr310 = &(t309)[t307];
          *t308 = ptr310;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v311, long v312) {
bb313:
  int*** __i314;
  long __n315;
  long __d316;
  struct std__random_access_iterator_tag agg_tmp0317;
  __i314 = v311;
  __n315 = v312;
  long t318 = __n315;
  __d316 = t318;
  int*** t319 = __i314;
  long t320 = __d316;
  int*** t321 = __i314;
  struct std__random_access_iterator_tag r322 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t321);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0317 = r322;
  struct std__random_access_iterator_tag t323 = agg_tmp0317;
  void_std____advance_int____long_(t319, t320, t323);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v324, int** v325, int** v326) {
bb327:
  int** __first328;
  int** __last329;
  int** __result330;
  int** __retval331;
  __first328 = v324;
  __last329 = v325;
  __result330 = v326;
      _Bool r332 = std__is_constant_evaluated();
      if (r332) {
      } else {
          long __n333;
          int** t334 = __first328;
          int** t335 = __last329;
          long r336 = std__iterator_traits_int_____difference_type_std__distance_int___(t334, t335);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n333 = r336;
          long t337 = __n333;
          long u338 = -t337;
          void_std__advance_int____long_(&__result330, u338);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t339 = __n333;
            long c340 = 1;
            _Bool c341 = ((t339 > c340)) ? 1 : 0;
            if (c341) {
              int** t342 = __result330;
              void* cast343 = (void*)t342;
              int** t344 = __first328;
              void* cast345 = (void*)t344;
              long t346 = __n333;
              unsigned long cast347 = (unsigned long)t346;
              unsigned long c348 = 8;
              unsigned long b349 = cast347 * c348;
              void* r350 = memmove(cast343, cast345, b349);
            } else {
                long t351 = __n333;
                long c352 = 1;
                _Bool c353 = ((t351 == c352)) ? 1 : 0;
                if (c353) {
                  void_std____assign_one_false__int____int___(&__result330, &__first328);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t354 = __result330;
          __retval331 = t354;
          int** t355 = __retval331;
          return t355;
      }
    while (1) {
      int** t356 = __first328;
      int** t357 = __last329;
      _Bool c358 = ((t356 != t357)) ? 1 : 0;
      if (!c358) break;
        int** t359 = __last329;
        int c360 = -1;
        int** ptr361 = &(t359)[c360];
        __last329 = ptr361;
        int** t362 = __result330;
        int c363 = -1;
        int** ptr364 = &(t362)[c363];
        __result330 = ptr364;
        void_std____assign_one_false__int____int___(&__result330, &__last329);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t365 = __result330;
  __retval331 = t365;
  int** t366 = __retval331;
  return t366;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v367, int** v368, int** v369) {
bb370:
  int** __first371;
  int** __last372;
  int** __result373;
  int** __retval374;
  __first371 = v367;
  __last372 = v368;
  __result373 = v369;
  int** t375 = __first371;
  int** t376 = __last372;
  int** t377 = __result373;
  int** r378 = int___std____copy_move_backward_a2_false__int____int___(t375, t376, t377);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval374 = r378;
  int** t379 = __retval374;
  return t379;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v380, int** v381, int** v382) {
bb383:
  int** __first384;
  int** __last385;
  int** __result386;
  int** __retval387;
  __first384 = v380;
  __last385 = v381;
  __result386 = v382;
  int** t388 = __first384;
  int** r389 = int___std____niter_base_int___(t388);
  int** t390 = __last385;
  int** r391 = int___std____niter_base_int___(t390);
  int** t392 = __result386;
  int** r393 = int___std____niter_base_int___(t392);
  int** r394 = int___std____copy_move_backward_a1_false__int____int___(r389, r391, r393);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r395 = int___std____niter_wrap_int___(&__result386, r394);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval387 = r395;
  int** t396 = __retval387;
  return t396;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v397, int** v398, int** v399) {
bb400:
  int** __first401;
  int** __last402;
  int** __result403;
  int** __retval404;
  __first401 = v397;
  __last402 = v398;
  __result403 = v399;
  int** t405 = __first401;
  int** r406 = int___std____miter_base_int___(t405);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t407 = __last402;
  int** r408 = int___std____miter_base_int___(t407);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t409 = __result403;
  int** r410 = int___std____copy_move_backward_a_false__int____int___(r406, r408, t409);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval404 = r410;
  int** t411 = __retval404;
  return t411;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v412, unsigned long v413, _Bool v414) {
bb415:
  struct std__deque_int__std__allocator_int__* this416;
  unsigned long __nodes_to_add417;
  _Bool __add_at_front418;
  unsigned long __old_num_nodes419;
  unsigned long __new_num_nodes420;
  int** __new_nstart421;
  this416 = v412;
  __nodes_to_add417 = v413;
  __add_at_front418 = v414;
  struct std__deque_int__std__allocator_int__* t422 = this416;
  struct std___Deque_base_int__std__allocator_int__* base423 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base424 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base423->_M_impl) + 0);
  int** t425 = base424->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base426 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base427 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base426->_M_impl) + 0);
  int** t428 = base427->_M_start._M_node;
  long diff429 = t425 - t428;
  long c430 = 1;
  long b431 = diff429 + c430;
  unsigned long cast432 = (unsigned long)b431;
  __old_num_nodes419 = cast432;
  unsigned long t433 = __old_num_nodes419;
  unsigned long t434 = __nodes_to_add417;
  unsigned long b435 = t433 + t434;
  __new_num_nodes420 = b435;
    struct std___Deque_base_int__std__allocator_int__* base436 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base437 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base436->_M_impl) + 0);
    unsigned long t438 = base437->_M_map_size;
    unsigned long c439 = 2;
    unsigned long t440 = __new_num_nodes420;
    unsigned long b441 = c439 * t440;
    _Bool c442 = ((t438 > b441)) ? 1 : 0;
    if (c442) {
      struct std___Deque_base_int__std__allocator_int__* base443 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base444 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base443->_M_impl) + 0);
      int** t445 = base444->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base446 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base447 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base446->_M_impl) + 0);
      unsigned long t448 = base447->_M_map_size;
      unsigned long t449 = __new_num_nodes420;
      unsigned long b450 = t448 - t449;
      unsigned long c451 = 2;
      unsigned long b452 = b450 / c451;
      int** ptr453 = &(t445)[b452];
      _Bool t454 = __add_at_front418;
      unsigned long ternary455;
      if (t454) {
        unsigned long t456 = __nodes_to_add417;
        ternary455 = (unsigned long)t456;
      } else {
        unsigned long c457 = 0;
        ternary455 = (unsigned long)c457;
      }
      int** ptr458 = &(ptr453)[ternary455];
      __new_nstart421 = ptr458;
        int** t459 = __new_nstart421;
        struct std___Deque_base_int__std__allocator_int__* base460 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base461 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base460->_M_impl) + 0);
        int** t462 = base461->_M_start._M_node;
        _Bool c463 = ((t459 < t462)) ? 1 : 0;
        if (c463) {
          struct std___Deque_base_int__std__allocator_int__* base464 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base465 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base464->_M_impl) + 0);
          int** t466 = base465->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base467 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base468 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base467->_M_impl) + 0);
          int** t469 = base468->_M_finish._M_node;
          int c470 = 1;
          int** ptr471 = &(t469)[c470];
          int** t472 = __new_nstart421;
          int** r473 = int___std__copy_int____int___(t466, ptr471, t472);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base474 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base475 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base474->_M_impl) + 0);
          int** t476 = base475->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base477 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base478 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base477->_M_impl) + 0);
          int** t479 = base478->_M_finish._M_node;
          int c480 = 1;
          int** ptr481 = &(t479)[c480];
          int** t482 = __new_nstart421;
          unsigned long t483 = __old_num_nodes419;
          int** ptr484 = &(t482)[t483];
          int** r485 = int___std__copy_backward_int____int___(t476, ptr481, ptr484);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size486;
      unsigned long __bufsz487;
      int** __new_map488;
      struct std___Deque_base_int__std__allocator_int__* base489 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base490 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base489->_M_impl) + 0);
      unsigned long t491 = base490->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base492 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base493 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base492->_M_impl) + 0);
      unsigned long* r494 = unsigned_long_const__std__max_unsigned_long_(&base493->_M_map_size, &__nodes_to_add417);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t495 = *r494;
      unsigned long b496 = t491 + t495;
      unsigned long c497 = 2;
      unsigned long b498 = b496 + c497;
      __new_map_size486 = b498;
      unsigned long c499 = 128;
      __bufsz487 = c499;
        unsigned long t500 = __new_map_size486;
        unsigned long r501 = std__deque_int__std__allocator_int_____max_size___const(t422);
        unsigned long t502 = __bufsz487;
        unsigned long b503 = r501 + t502;
        unsigned long c504 = 1;
        unsigned long b505 = b503 - c504;
        unsigned long t506 = __bufsz487;
        unsigned long b507 = b505 / t506;
        unsigned long c508 = 2;
        unsigned long b509 = b507 * c508;
        _Bool c510 = ((t500 > b509)) ? 1 : 0;
        if (c510) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base511 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      unsigned long t512 = __new_map_size486;
      int** r513 = std___Deque_base_int__std__allocator_int______M_allocate_map(base511, t512);
      if (__cir_exc_active) {
        return;
      }
      __new_map488 = r513;
      int** t514 = __new_map488;
      unsigned long t515 = __new_map_size486;
      unsigned long t516 = __new_num_nodes420;
      unsigned long b517 = t515 - t516;
      unsigned long c518 = 2;
      unsigned long b519 = b517 / c518;
      int** ptr520 = &(t514)[b519];
      _Bool t521 = __add_at_front418;
      unsigned long ternary522;
      if (t521) {
        unsigned long t523 = __nodes_to_add417;
        ternary522 = (unsigned long)t523;
      } else {
        unsigned long c524 = 0;
        ternary522 = (unsigned long)c524;
      }
      int** ptr525 = &(ptr520)[ternary522];
      __new_nstart421 = ptr525;
      struct std___Deque_base_int__std__allocator_int__* base526 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base527 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base526->_M_impl) + 0);
      int** t528 = base527->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base529 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base530 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base529->_M_impl) + 0);
      int** t531 = base530->_M_finish._M_node;
      int c532 = 1;
      int** ptr533 = &(t531)[c532];
      int** t534 = __new_nstart421;
      int** r535 = int___std__copy_int____int___(t528, ptr533, t534);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base536 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int__* base537 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base538 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base537->_M_impl) + 0);
      int** t539 = base538->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base540 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base541 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base540->_M_impl) + 0);
      unsigned long t542 = base541->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base536, t539, t542);
      int** t543 = __new_map488;
      struct std___Deque_base_int__std__allocator_int__* base544 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base545 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base544->_M_impl) + 0);
      base545->_M_map = t543;
      unsigned long t546 = __new_map_size486;
      struct std___Deque_base_int__std__allocator_int__* base547 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base548 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base547->_M_impl) + 0);
      base548->_M_map_size = t546;
    }
  struct std___Deque_base_int__std__allocator_int__* base549 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base550 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base549->_M_impl) + 0);
  int** t551 = __new_nstart421;
  std___Deque_iterator_int__int___int_____M_set_node(&base550->_M_start, t551);
  struct std___Deque_base_int__std__allocator_int__* base552 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t422 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base553 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base552->_M_impl) + 0);
  int** t554 = __new_nstart421;
  unsigned long t555 = __old_num_nodes419;
  int** ptr556 = &(t554)[t555];
  int c557 = -1;
  int** ptr558 = &(ptr556)[c557];
  std___Deque_iterator_int__int___int_____M_set_node(&base553->_M_finish, ptr558);
  return;
}

// function: _ZNSt5dequeIiSaIiEE23_M_reserve_map_at_frontEm
void std__deque_int__std__allocator_int______M_reserve_map_at_front(struct std__deque_int__std__allocator_int__* v559, unsigned long v560) {
bb561:
  struct std__deque_int__std__allocator_int__* this562;
  unsigned long __nodes_to_add563;
  this562 = v559;
  __nodes_to_add563 = v560;
  struct std__deque_int__std__allocator_int__* t564 = this562;
    unsigned long t565 = __nodes_to_add563;
    struct std___Deque_base_int__std__allocator_int__* base566 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t564 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base567 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base566->_M_impl) + 0);
    int** t568 = base567->_M_start._M_node;
    struct std___Deque_base_int__std__allocator_int__* base569 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t564 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base570 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base569->_M_impl) + 0);
    int** t571 = base570->_M_map;
    long diff572 = t568 - t571;
    unsigned long cast573 = (unsigned long)diff572;
    _Bool c574 = ((t565 > cast573)) ? 1 : 0;
    if (c574) {
      unsigned long t575 = __nodes_to_add563;
      _Bool c576 = 1;
      std__deque_int__std__allocator_int______M_reallocate_map(t564, t575, c576);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___5(struct std___Deque_iterator_int__int____int___* v577) {
bb578:
  struct std___Deque_iterator_int__int____int___* this579;
  struct std___Deque_iterator_int__int____int___* __retval580;
  this579 = v577;
  struct std___Deque_iterator_int__int____int___* t581 = this579;
  int* t582 = t581->_M_cur;
  int c583 = 1;
  int* ptr584 = &(t582)[c583];
  t581->_M_cur = ptr584;
    int* t585 = t581->_M_cur;
    int* t586 = t581->_M_last;
    _Bool c587 = ((t585 == t586)) ? 1 : 0;
    if (c587) {
      int** t588 = t581->_M_node;
      int c589 = 1;
      int** ptr590 = &(t588)[c589];
      std___Deque_iterator_int__int___int_____M_set_node(t581, ptr590);
      int* t591 = t581->_M_first;
      t581->_M_cur = t591;
    }
  __retval580 = t581;
  struct std___Deque_iterator_int__int____int___* t592 = __retval580;
  return t592;
}

// function: _ZNSt5dequeIiSaIiEE17_M_push_front_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_front_aux_int_const__(struct std__deque_int__std__allocator_int__* v593, int* v594) {
bb595:
  struct std__deque_int__std__allocator_int__* this596;
  int* __args597;
  this596 = v593;
  __args597 = v594;
  struct std__deque_int__std__allocator_int__* t598 = this596;
    unsigned long r599 = std__deque_int__std__allocator_int_____size___const(t598);
    unsigned long r600 = std__deque_int__std__allocator_int_____max_size___const(t598);
    _Bool c601 = ((r599 == r600)) ? 1 : 0;
    if (c601) {
      char* cast602 = (char*)&(_str_6);
      std____throw_length_error(cast602);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c603 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_front(t598, c603);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base604 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
  int* r605 = std___Deque_base_int__std__allocator_int______M_allocate_node(base604);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base606 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base607 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base606->_M_impl) + 0);
  int** t608 = base607->_M_start._M_node;
  int c609 = -1;
  int** ptr610 = &(t608)[c609];
  *ptr610 = r605;
      struct std___Deque_base_int__std__allocator_int__* base612 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base613 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base612->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base614 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base615 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base614->_M_impl) + 0);
      int** t616 = base615->_M_start._M_node;
      int c617 = -1;
      int** ptr618 = &(t616)[c617];
      std___Deque_iterator_int__int___int_____M_set_node(&base613->_M_start, ptr618);
      struct std___Deque_base_int__std__allocator_int__* base619 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base620 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base619->_M_impl) + 0);
      int* t621 = base620->_M_start._M_last;
      int c622 = -1;
      int* ptr623 = &(t621)[c622];
      struct std___Deque_base_int__std__allocator_int__* base624 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base625 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base624->_M_impl) + 0);
      base625->_M_start._M_cur = ptr623;
      struct std___Deque_base_int__std__allocator_int__* base626 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
      struct std__allocator_int_* base627 = (struct std__allocator_int_*)((char *)&(base626->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base628 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base629 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base628->_M_impl) + 0);
      int* t630 = base629->_M_start._M_cur;
      int* t631 = __args597;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base627, t630, t631);
    cir_try_dispatch611: ;
    if (__cir_exc_active) {
    {
      int ca_tok632 = 0;
      void* ca_exn633 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base634 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base635 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base634->_M_impl) + 0);
        struct std___Deque_iterator_int__int____int___* r636 = std___Deque_iterator_int__int___int____operator___5(&base635->_M_start);
        struct std___Deque_base_int__std__allocator_int__* base637 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
        struct std___Deque_base_int__std__allocator_int__* base638 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t598 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base639 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base638->_M_impl) + 0);
        int** t640 = base639->_M_start._M_node;
        int c641 = -1;
        int** ptr642 = &(t640)[c641];
        int* t643 = *ptr642;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base637, t643);
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

// function: _ZNSt5dequeIiSaIiEE10push_frontERKi
void std__deque_int__std__allocator_int_____push_front_2(struct std__deque_int__std__allocator_int__* v644, int* v645) {
bb646:
  struct std__deque_int__std__allocator_int__* this647;
  int* __x648;
  this647 = v644;
  __x648 = v645;
  struct std__deque_int__std__allocator_int__* t649 = this647;
    struct std___Deque_base_int__std__allocator_int__* base650 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t649 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base651 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base650->_M_impl) + 0);
    int* t652 = base651->_M_start._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base653 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t649 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base654 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base653->_M_impl) + 0);
    int* t655 = base654->_M_start._M_first;
    _Bool c656 = ((t652 != t655)) ? 1 : 0;
    if (c656) {
      struct std___Deque_base_int__std__allocator_int__* base657 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t649 + 0);
      struct std__allocator_int_* base658 = (struct std__allocator_int_*)((char *)&(base657->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base659 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t649 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base660 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base659->_M_impl) + 0);
      int* t661 = base660->_M_start._M_cur;
      int c662 = -1;
      int* ptr663 = &(t661)[c662];
      int* t664 = __x648;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base658, ptr663, t664);
      struct std___Deque_base_int__std__allocator_int__* base665 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t649 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base666 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base665->_M_impl) + 0);
      int* t667 = base666->_M_start._M_cur;
      int c668 = -1;
      int* ptr669 = &(t667)[c668];
      base666->_M_start._M_cur = ptr669;
    } else {
      int* t670 = __x648;
      void_std__deque_int__std__allocator_int______M_push_front_aux_int_const__(t649, t670);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* v671) {
bb672:
  struct std___Deque_iterator_int__int____int___* this673;
  struct std___Deque_iterator_int__int____int___* __retval674;
  this673 = v671;
  struct std___Deque_iterator_int__int____int___* t675 = this673;
    int* t676 = t675->_M_cur;
    int* t677 = t675->_M_first;
    _Bool c678 = ((t676 == t677)) ? 1 : 0;
    if (c678) {
      int** t679 = t675->_M_node;
      int c680 = -1;
      int** ptr681 = &(t679)[c680];
      std___Deque_iterator_int__int___int_____M_set_node(t675, ptr681);
      int* t682 = t675->_M_last;
      t675->_M_cur = t682;
    }
  int* t683 = t675->_M_cur;
  int c684 = -1;
  int* ptr685 = &(t683)[c684];
  t675->_M_cur = ptr685;
  __retval674 = t675;
  struct std___Deque_iterator_int__int____int___* t686 = __retval674;
  return t686;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v687, int* v688) {
bb689:
  int* __location690;
  int* __args691;
  int* __retval692;
  void* __loc693;
  __location690 = v687;
  __args691 = v688;
  int* t694 = __location690;
  void* cast695 = (void*)t694;
  __loc693 = cast695;
    void* t696 = __loc693;
    int* cast697 = (int*)t696;
    int* t698 = __args691;
    int t699 = *t698;
    *cast697 = t699;
    __retval692 = cast697;
    int* t700 = __retval692;
    return t700;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v701, int* v702, int* v703) {
bb704:
  struct std__allocator_int_* __a705;
  int* __p706;
  int* __args707;
  __a705 = v701;
  __p706 = v702;
  __args707 = v703;
  int* t708 = __p706;
  int* t709 = __args707;
  int* r710 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t708, t709);
  return;
}

// function: _ZNSt5dequeIiSaIiEE17_M_push_front_auxIJiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_front_aux_int_(struct std__deque_int__std__allocator_int__* v711, int* v712) {
bb713:
  struct std__deque_int__std__allocator_int__* this714;
  int* __args715;
  this714 = v711;
  __args715 = v712;
  struct std__deque_int__std__allocator_int__* t716 = this714;
    unsigned long r717 = std__deque_int__std__allocator_int_____size___const(t716);
    unsigned long r718 = std__deque_int__std__allocator_int_____max_size___const(t716);
    _Bool c719 = ((r717 == r718)) ? 1 : 0;
    if (c719) {
      char* cast720 = (char*)&(_str_6);
      std____throw_length_error(cast720);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c721 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_front(t716, c721);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base722 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
  int* r723 = std___Deque_base_int__std__allocator_int______M_allocate_node(base722);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base724 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base725 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base724->_M_impl) + 0);
  int** t726 = base725->_M_start._M_node;
  int c727 = -1;
  int** ptr728 = &(t726)[c727];
  *ptr728 = r723;
      struct std___Deque_base_int__std__allocator_int__* base730 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base731 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base730->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base732 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base733 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base732->_M_impl) + 0);
      int** t734 = base733->_M_start._M_node;
      int c735 = -1;
      int** ptr736 = &(t734)[c735];
      std___Deque_iterator_int__int___int_____M_set_node(&base731->_M_start, ptr736);
      struct std___Deque_base_int__std__allocator_int__* base737 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base738 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base737->_M_impl) + 0);
      int* t739 = base738->_M_start._M_last;
      int c740 = -1;
      int* ptr741 = &(t739)[c740];
      struct std___Deque_base_int__std__allocator_int__* base742 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base743 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base742->_M_impl) + 0);
      base743->_M_start._M_cur = ptr741;
      struct std___Deque_base_int__std__allocator_int__* base744 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
      struct std__allocator_int_* base745 = (struct std__allocator_int_*)((char *)&(base744->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base746 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base747 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base746->_M_impl) + 0);
      int* t748 = base747->_M_start._M_cur;
      int* t749 = __args715;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base745, t748, t749);
    cir_try_dispatch729: ;
    if (__cir_exc_active) {
    {
      int ca_tok750 = 0;
      void* ca_exn751 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base752 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base753 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base752->_M_impl) + 0);
        struct std___Deque_iterator_int__int____int___* r754 = std___Deque_iterator_int__int___int____operator___5(&base753->_M_start);
        struct std___Deque_base_int__std__allocator_int__* base755 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
        struct std___Deque_base_int__std__allocator_int__* base756 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t716 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base757 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base756->_M_impl) + 0);
        int** t758 = base757->_M_start._M_node;
        int c759 = -1;
        int** ptr760 = &(t758)[c759];
        int* t761 = *ptr760;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base755, t761);
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
int* int__std__deque_int__std__allocator_int_____emplace_front_int_(struct std__deque_int__std__allocator_int__* v762, int* v763) {
bb764:
  struct std__deque_int__std__allocator_int__* this765;
  int* __args766;
  int* __retval767;
  this765 = v762;
  __args766 = v763;
  struct std__deque_int__std__allocator_int__* t768 = this765;
    struct std___Deque_base_int__std__allocator_int__* base769 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t768 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base770 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base769->_M_impl) + 0);
    int* t771 = base770->_M_start._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base772 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t768 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base773 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base772->_M_impl) + 0);
    int* t774 = base773->_M_start._M_first;
    _Bool c775 = ((t771 != t774)) ? 1 : 0;
    if (c775) {
      struct std___Deque_base_int__std__allocator_int__* base776 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t768 + 0);
      struct std__allocator_int_* base777 = (struct std__allocator_int_*)((char *)&(base776->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base778 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t768 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base779 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base778->_M_impl) + 0);
      int* t780 = base779->_M_start._M_cur;
      int c781 = -1;
      int* ptr782 = &(t780)[c781];
      int* t783 = __args766;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base777, ptr782, t783);
      struct std___Deque_base_int__std__allocator_int__* base784 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t768 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base785 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base784->_M_impl) + 0);
      int* t786 = base785->_M_start._M_cur;
      int c787 = -1;
      int* ptr788 = &(t786)[c787];
      base785->_M_start._M_cur = ptr788;
    } else {
      int* t789 = __args766;
      void_std__deque_int__std__allocator_int______M_push_front_aux_int_(t768, t789);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r790 = std__deque_int__std__allocator_int_____front(t768);
  __retval767 = r790;
  int* t791 = __retval767;
  return t791;
}

// function: _ZNSt5dequeIiSaIiEE10push_frontEOi
void std__deque_int__std__allocator_int_____push_front(struct std__deque_int__std__allocator_int__* v792, int* v793) {
bb794:
  struct std__deque_int__std__allocator_int__* this795;
  int* __x796;
  this795 = v792;
  __x796 = v793;
  struct std__deque_int__std__allocator_int__* t797 = this795;
  int* t798 = __x796;
  int* r799 = int__std__deque_int__std__allocator_int_____emplace_front_int_(t797, t798);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v800) {
bb801:
  struct std__deque_int__std__allocator_int__* this802;
  _Bool __retval803;
  this802 = v800;
  struct std__deque_int__std__allocator_int__* t804 = this802;
  struct std___Deque_base_int__std__allocator_int__* base805 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t804 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base806 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base805->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base807 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t804 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base808 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base807->_M_impl) + 0);
  _Bool r809 = std__operator__(&base806->_M_finish, &base808->_M_start);
  __retval803 = r809;
  _Bool t810 = __retval803;
  return t810;
}

// function: _ZNSt5dequeIiSaIiEE5frontEv
int* std__deque_int__std__allocator_int_____front(struct std__deque_int__std__allocator_int__* v811) {
bb812:
  struct std__deque_int__std__allocator_int__* this813;
  int* __retval814;
  struct std___Deque_iterator_int__int____int___ ref_tmp0815;
  this813 = v811;
  struct std__deque_int__std__allocator_int__* t816 = this813;
    do {
          _Bool r817 = std__deque_int__std__allocator_int_____empty___const(t816);
          if (r817) {
            char* cast818 = (char*)&(_str_7);
            int c819 = 1513;
            char* cast820 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv);
            char* cast821 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast818, c819, cast820, cast821);
          }
      _Bool c822 = 0;
      if (!c822) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r823 = std__deque_int__std__allocator_int_____begin(t816);
  ref_tmp0815 = r823;
  int* r824 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0815);
  __retval814 = r824;
  int* t825 = __retval814;
  return t825;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEpLEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___3(struct std___Deque_iterator_int__int____int___* v826, long v827) {
bb828:
  struct std___Deque_iterator_int__int____int___* this829;
  long __n830;
  struct std___Deque_iterator_int__int____int___* __retval831;
  long __offset832;
  this829 = v826;
  __n830 = v827;
  struct std___Deque_iterator_int__int____int___* t833 = this829;
  long t834 = __n830;
  int* t835 = t833->_M_cur;
  int* t836 = t833->_M_first;
  long diff837 = t835 - t836;
  long b838 = t834 + diff837;
  __offset832 = b838;
    long t839 = __offset832;
    long c840 = 0;
    _Bool c841 = ((t839 >= c840)) ? 1 : 0;
    _Bool ternary842;
    if (c841) {
      long t843 = __offset832;
      unsigned long r844 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast845 = (long)r844;
      _Bool c846 = ((t843 < cast845)) ? 1 : 0;
      ternary842 = (_Bool)c846;
    } else {
      _Bool c847 = 0;
      ternary842 = (_Bool)c847;
    }
    if (ternary842) {
      long t848 = __n830;
      int* t849 = t833->_M_cur;
      int* ptr850 = &(t849)[t848];
      t833->_M_cur = ptr850;
    } else {
      long __node_offset851;
      long t852 = __offset832;
      long c853 = 0;
      _Bool c854 = ((t852 > c853)) ? 1 : 0;
      long ternary855;
      if (c854) {
        long t856 = __offset832;
        unsigned long r857 = std___Deque_iterator_int__int___int_____S_buffer_size();
        long cast858 = (long)r857;
        long b859 = t856 / cast858;
        ternary855 = (long)b859;
      } else {
        long t860 = __offset832;
        long u861 = -t860;
        long c862 = 1;
        long b863 = u861 - c862;
        unsigned long cast864 = (unsigned long)b863;
        unsigned long r865 = std___Deque_iterator_int__int___int_____S_buffer_size();
        unsigned long b866 = cast864 / r865;
        long cast867 = (long)b866;
        long u868 = -cast867;
        long c869 = 1;
        long b870 = u868 - c869;
        ternary855 = (long)b870;
      }
      __node_offset851 = ternary855;
      int** t871 = t833->_M_node;
      long t872 = __node_offset851;
      int** ptr873 = &(t871)[t872];
      std___Deque_iterator_int__int___int_____M_set_node(t833, ptr873);
      int* t874 = t833->_M_first;
      long t875 = __offset832;
      long t876 = __node_offset851;
      unsigned long r877 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast878 = (long)r877;
      long b879 = t876 * cast878;
      long b880 = t875 - b879;
      int* ptr881 = &(t874)[b880];
      t833->_M_cur = ptr881;
    }
  __retval831 = t833;
  struct std___Deque_iterator_int__int____int___* t882 = __retval831;
  return t882;
}

// function: _ZStplRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* v883, long v884) {
bb885:
  struct std___Deque_iterator_int__int____int___* __x886;
  long __n887;
  struct std___Deque_iterator_int__int____int___ __retval888;
  __x886 = v883;
  __n887 = v884;
  struct std___Deque_iterator_int__int____int___* t889 = __x886;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval888, t889);
  long t890 = __n887;
  struct std___Deque_iterator_int__int____int___* r891 = std___Deque_iterator_int__int___int____operator___3(&__retval888, t890);
  struct std___Deque_iterator_int__int____int___ t892 = __retval888;
  return t892;
}

// function: _ZSt12__niter_wrapISt15_Deque_iteratorIiRiPiEET_RKS4_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___* v893, struct std___Deque_iterator_int__int____int___ v894) {
bb895:
  struct std___Deque_iterator_int__int____int___* unnamed896;
  struct std___Deque_iterator_int__int____int___ __res897;
  struct std___Deque_iterator_int__int____int___ __retval898;
  unnamed896 = v893;
  __res897 = v894;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval898, &__res897);
  struct std___Deque_iterator_int__int____int___ t899 = __retval898;
  return t899;
}

// function: _ZSt3minIlERKT_S2_S2_
long* long_const__std__min_long_(long* v900, long* v901) {
bb902:
  long* __a903;
  long* __b904;
  long* __retval905;
  __a903 = v900;
  __b904 = v901;
    long* t906 = __b904;
    long t907 = *t906;
    long* t908 = __a903;
    long t909 = *t908;
    _Bool c910 = ((t907 < t909)) ? 1 : 0;
    if (c910) {
      long* t911 = __b904;
      __retval905 = t911;
      long* t912 = __retval905;
      return t912;
    }
  long* t913 = __a903;
  __retval905 = t913;
  long* t914 = __retval905;
  return t914;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v915, int* v916, struct std__random_access_iterator_tag v917) {
bb918:
  int* __first919;
  int* __last920;
  struct std__random_access_iterator_tag unnamed921;
  long __retval922;
  __first919 = v915;
  __last920 = v916;
  unnamed921 = v917;
  int* t923 = __last920;
  int* t924 = __first919;
  long diff925 = t923 - t924;
  __retval922 = diff925;
  long t926 = __retval922;
  return t926;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v927) {
bb928:
  int** unnamed929;
  struct std__random_access_iterator_tag __retval930;
  unnamed929 = v927;
  struct std__random_access_iterator_tag t931 = __retval930;
  return t931;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v932, int* v933) {
bb934:
  int* __first935;
  int* __last936;
  long __retval937;
  struct std__random_access_iterator_tag agg_tmp0938;
  __first935 = v932;
  __last936 = v933;
  int* t939 = __first935;
  int* t940 = __last936;
  struct std__random_access_iterator_tag r941 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first935);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0938 = r941;
  struct std__random_access_iterator_tag t942 = agg_tmp0938;
  long r943 = std__iterator_traits_int____difference_type_std____distance_int__(t939, t940, t942);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval937 = r943;
  long t944 = __retval937;
  return t944;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v945, int** v946) {
bb947:
  int** __out948;
  int** __in949;
  __out948 = v945;
  __in949 = v946;
    int** t950 = __in949;
    int* t951 = *t950;
    int t952 = *t951;
    int** t953 = __out948;
    int* t954 = *t953;
    *t954 = t952;
  return;
}

// function: _ZSt14__copy_move_a2ILb1EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_true__int___int___int__(int* v955, int* v956, int* v957) {
bb958:
  int* __first959;
  int* __last960;
  int* __result961;
  int* __retval962;
  __first959 = v955;
  __last960 = v956;
  __result961 = v957;
      _Bool r963 = std____is_constant_evaluated();
      if (r963) {
      } else {
          long __n964;
          int* t965 = __first959;
          int* t966 = __last960;
          long r967 = std__iterator_traits_int____difference_type_std__distance_int__(t965, t966);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n964 = r967;
            long t968 = __n964;
            long c969 = 1;
            _Bool c970 = ((t968 > c969)) ? 1 : 0;
            if (c970) {
              int* t971 = __result961;
              void* cast972 = (void*)t971;
              int* t973 = __first959;
              void* cast974 = (void*)t973;
              long t975 = __n964;
              unsigned long cast976 = (unsigned long)t975;
              unsigned long c977 = 4;
              unsigned long b978 = cast976 * c977;
              void* r979 = memmove(cast972, cast974, b978);
              long t980 = __n964;
              int* t981 = __result961;
              int* ptr982 = &(t981)[t980];
              __result961 = ptr982;
            } else {
                long t983 = __n964;
                long c984 = 1;
                _Bool c985 = ((t983 == c984)) ? 1 : 0;
                if (c985) {
                  void_std____assign_one_true__int___int__(&__result961, &__first959);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                  int* t986 = __result961;
                  int c987 = 1;
                  int* ptr988 = &(t986)[c987];
                  __result961 = ptr988;
                }
            }
          int* t989 = __result961;
          __retval962 = t989;
          int* t990 = __retval962;
          return t990;
      }
    while (1) {
      int* t992 = __first959;
      int* t993 = __last960;
      _Bool c994 = ((t992 != t993)) ? 1 : 0;
      if (!c994) break;
      void_std____assign_one_true__int___int__(&__result961, &__first959);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    for_step991: ;
      int* t995 = __result961;
      int c996 = 1;
      int* ptr997 = &(t995)[c996];
      __result961 = ptr997;
      int* t998 = __first959;
      int c999 = 1;
      int* ptr1000 = &(t998)[c999];
      __first959 = ptr1000;
    }
  int* t1001 = __result961;
  __retval962 = t1001;
  int* t1002 = __retval962;
  return t1002;
}

// function: _ZSt14__copy_move_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_true__int___int__(int* v1003, int* v1004, int* v1005) {
bb1006:
  int* __first1007;
  int* __last1008;
  int* __result1009;
  int* __retval1010;
  __first1007 = v1003;
  __last1008 = v1004;
  __result1009 = v1005;
  int* t1011 = __first1007;
  int* t1012 = __last1008;
  int* t1013 = __result1009;
  int* r1014 = int__std____copy_move_a2_true__int___int___int__(t1011, t1012, t1013);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1010 = r1014;
  int* t1015 = __retval1010;
  return t1015;
}

// function: _ZSt14__copy_move_a1ILb1EPiiEN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT0_EE7__valueESt15_Deque_iteratorIT1_RS5_PS5_EE6__typeES3_S3_S8_
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(int* v1016, int* v1017, struct std___Deque_iterator_int__int____int___ v1018) {
bb1019:
  int* __first1020;
  int* __last1021;
  struct std___Deque_iterator_int__int____int___ __result1022;
  struct std___Deque_iterator_int__int____int___ __retval1023;
  long __len1024;
  __first1020 = v1016;
  __last1021 = v1017;
  __result1022 = v1018;
  int* t1025 = __last1021;
  int* t1026 = __first1020;
  long diff1027 = t1025 - t1026;
  __len1024 = diff1027;
    while (1) {
      long t1028 = __len1024;
      long c1029 = 0;
      _Bool c1030 = ((t1028 > c1029)) ? 1 : 0;
      if (!c1030) break;
        long __clen1031;
        long ref_tmp01032;
        int* t1033 = __result1022._M_last;
        int* t1034 = __result1022._M_cur;
        long diff1035 = t1033 - t1034;
        ref_tmp01032 = diff1035;
        long* r1036 = long_const__std__min_long_(&__len1024, &ref_tmp01032);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1037 = *r1036;
        __clen1031 = t1037;
        int* t1038 = __first1020;
        int* t1039 = __first1020;
        long t1040 = __clen1031;
        int* ptr1041 = &(t1039)[t1040];
        int* t1042 = __result1022._M_cur;
        int* r1043 = int__std____copy_move_a1_true__int___int__(t1038, ptr1041, t1042);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1044 = __clen1031;
        int* t1045 = __first1020;
        int* ptr1046 = &(t1045)[t1044];
        __first1020 = ptr1046;
        long t1047 = __clen1031;
        struct std___Deque_iterator_int__int____int___* r1048 = std___Deque_iterator_int__int___int____operator___3(&__result1022, t1047);
        long t1049 = __clen1031;
        long t1050 = __len1024;
        long b1051 = t1050 - t1049;
        __len1024 = b1051;
    }
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1023, &__result1022);
  struct std___Deque_iterator_int__int____int___ t1052 = __retval1023;
  return t1052;
}

// function: _ZSt15__copy_move_ditILb1EiRiPiSt15_Deque_iteratorIiS0_S1_EET3_S2_IT0_T1_T2_ES8_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1053, struct std___Deque_iterator_int__int____int___ v1054, struct std___Deque_iterator_int__int____int___ v1055) {
bb1056:
  struct std___Deque_iterator_int__int____int___ __first1057;
  struct std___Deque_iterator_int__int____int___ __last1058;
  struct std___Deque_iterator_int__int____int___ __result1059;
  struct std___Deque_iterator_int__int____int___ __retval1060;
  struct std___Deque_iterator_int__int____int___ agg_tmp31061;
  __first1057 = v1053;
  __last1058 = v1054;
  __result1059 = v1055;
    int** t1062 = __first1057._M_node;
    int** t1063 = __last1058._M_node;
    _Bool c1064 = ((t1062 != t1063)) ? 1 : 0;
    if (c1064) {
      struct std___Deque_iterator_int__int____int___ ref_tmp01065;
      struct std___Deque_iterator_int__int____int___ agg_tmp01066;
      struct std___Deque_iterator_int__int____int___ agg_tmp21067;
      int* t1068 = __first1057._M_cur;
      int* t1069 = __first1057._M_last;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01066, &__result1059);
      struct std___Deque_iterator_int__int____int___ t1070 = agg_tmp01066;
      struct std___Deque_iterator_int__int____int___ r1071 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1068, t1069, t1070);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp01065 = r1071;
      struct std___Deque_iterator_int__int____int___* r1072 = std___Deque_iterator_int__int___int____operator_(&__result1059, &ref_tmp01065);
        int** __node1073;
        struct std___Deque_iterator_int__int____int___ ref_tmp11074;
        struct std___Deque_iterator_int__int____int___ agg_tmp11075;
        int** t1076 = __first1057._M_node;
        int c1077 = 1;
        int** ptr1078 = &(t1076)[c1077];
        __node1073 = ptr1078;
        while (1) {
          int** t1080 = __node1073;
          int** t1081 = __last1058._M_node;
          _Bool c1082 = ((t1080 != t1081)) ? 1 : 0;
          if (!c1082) break;
          int** t1083 = __node1073;
          int* t1084 = *t1083;
          int** t1085 = __node1073;
          int* t1086 = *t1085;
          unsigned long r1087 = std___Deque_iterator_int__int___int_____S_buffer_size();
          int* ptr1088 = &(t1086)[r1087];
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11075, &__result1059);
          struct std___Deque_iterator_int__int____int___ t1089 = agg_tmp11075;
          struct std___Deque_iterator_int__int____int___ r1090 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1084, ptr1088, t1089);
          if (__cir_exc_active) {
            struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ref_tmp11074 = r1090;
          struct std___Deque_iterator_int__int____int___* r1091 = std___Deque_iterator_int__int___int____operator_(&__result1059, &ref_tmp11074);
        for_step1079: ;
          int** t1092 = __node1073;
          int c1093 = 1;
          int** ptr1094 = &(t1092)[c1093];
          __node1073 = ptr1094;
        }
      int* t1095 = __last1058._M_first;
      int* t1096 = __last1058._M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21067, &__result1059);
      struct std___Deque_iterator_int__int____int___ t1097 = agg_tmp21067;
      struct std___Deque_iterator_int__int____int___ r1098 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1095, t1096, t1097);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1060 = r1098;
      struct std___Deque_iterator_int__int____int___ t1099 = __retval1060;
      return t1099;
    }
  int* t1100 = __first1057._M_cur;
  int* t1101 = __last1058._M_cur;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31061, &__result1059);
  struct std___Deque_iterator_int__int____int___ t1102 = agg_tmp31061;
  struct std___Deque_iterator_int__int____int___ r1103 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1100, t1101, t1102);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1060 = r1103;
  struct std___Deque_iterator_int__int____int___ t1104 = __retval1060;
  return t1104;
}

// function: _ZSt14__copy_move_a1ILb1EiRiPiiESt15_Deque_iteratorIT3_RS3_PS3_ES2_IT0_T1_T2_ESA_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ v1105, struct std___Deque_iterator_int__int____int___ v1106, struct std___Deque_iterator_int__int____int___ v1107) {
bb1108:
  struct std___Deque_iterator_int__int____int___ __first1109;
  struct std___Deque_iterator_int__int____int___ __last1110;
  struct std___Deque_iterator_int__int____int___ __result1111;
  struct std___Deque_iterator_int__int____int___ __retval1112;
  struct std___Deque_iterator_int__int____int___ agg_tmp01113;
  struct std___Deque_iterator_int__int____int___ agg_tmp11114;
  struct std___Deque_iterator_int__int____int___ agg_tmp21115;
  __first1109 = v1105;
  __last1110 = v1106;
  __result1111 = v1107;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01113, &__first1109);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11114, &__last1110);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21115, &__result1111);
  struct std___Deque_iterator_int__int____int___ t1116 = agg_tmp01113;
  struct std___Deque_iterator_int__int____int___ t1117 = agg_tmp11114;
  struct std___Deque_iterator_int__int____int___ t1118 = agg_tmp21115;
  struct std___Deque_iterator_int__int____int___ r1119 = std___Deque_iterator_int__int___int___std____copy_move_dit_true__int__int___int___std___Deque_iterator_int__int___int____(t1116, t1117, t1118);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1112 = r1119;
  struct std___Deque_iterator_int__int____int___ t1120 = __retval1112;
  return t1120;
}

// function: _ZSt12__niter_baseISt15_Deque_iteratorIiRiPiEET_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1121) {
bb1122:
  struct std___Deque_iterator_int__int____int___ __it1123;
  struct std___Deque_iterator_int__int____int___ __retval1124;
  __it1123 = v1121;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1124, &__it1123);
  struct std___Deque_iterator_int__int____int___ t1125 = __retval1124;
  return t1125;
}

// function: _ZSt13__copy_move_aILb1ESt15_Deque_iteratorIiRiPiES3_ET1_T0_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1126, struct std___Deque_iterator_int__int____int___ v1127, struct std___Deque_iterator_int__int____int___ v1128) {
bb1129:
  struct std___Deque_iterator_int__int____int___ __first1130;
  struct std___Deque_iterator_int__int____int___ __last1131;
  struct std___Deque_iterator_int__int____int___ __result1132;
  struct std___Deque_iterator_int__int____int___ __retval1133;
  struct std___Deque_iterator_int__int____int___ agg_tmp01134;
  struct std___Deque_iterator_int__int____int___ agg_tmp11135;
  struct std___Deque_iterator_int__int____int___ agg_tmp21136;
  struct std___Deque_iterator_int__int____int___ agg_tmp31137;
  struct std___Deque_iterator_int__int____int___ agg_tmp41138;
  struct std___Deque_iterator_int__int____int___ agg_tmp51139;
  struct std___Deque_iterator_int__int____int___ agg_tmp61140;
  __first1130 = v1126;
  __last1131 = v1127;
  __result1132 = v1128;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21136, &__first1130);
  struct std___Deque_iterator_int__int____int___ t1141 = agg_tmp21136;
  struct std___Deque_iterator_int__int____int___ r1142 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1141);
  agg_tmp11135 = r1142;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41138, &__last1131);
  struct std___Deque_iterator_int__int____int___ t1143 = agg_tmp41138;
  struct std___Deque_iterator_int__int____int___ r1144 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1143);
  agg_tmp31137 = r1144;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp61140, &__result1132);
  struct std___Deque_iterator_int__int____int___ t1145 = agg_tmp61140;
  struct std___Deque_iterator_int__int____int___ r1146 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1145);
  agg_tmp51139 = r1146;
  struct std___Deque_iterator_int__int____int___ t1147 = agg_tmp11135;
  struct std___Deque_iterator_int__int____int___ t1148 = agg_tmp31137;
  struct std___Deque_iterator_int__int____int___ t1149 = agg_tmp51139;
  struct std___Deque_iterator_int__int____int___ r1150 = std___Deque_iterator_int__int___int___std____copy_move_a1_true__int__int___int___int_(t1147, t1148, t1149);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01134 = r1150;
  struct std___Deque_iterator_int__int____int___ t1151 = agg_tmp01134;
  struct std___Deque_iterator_int__int____int___ r1152 = std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(&__result1132, t1151);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1133 = r1152;
  struct std___Deque_iterator_int__int____int___ t1153 = __retval1133;
  return t1153;
}

// function: _ZSt12__miter_baseISt15_Deque_iteratorIiRiPiEET_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1154) {
bb1155:
  struct std___Deque_iterator_int__int____int___ __it1156;
  struct std___Deque_iterator_int__int____int___ __retval1157;
  __it1156 = v1154;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1157, &__it1156);
  struct std___Deque_iterator_int__int____int___ t1158 = __retval1157;
  return t1158;
}

// function: _ZSt4moveISt15_Deque_iteratorIiRiPiES3_ET0_T_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1159, struct std___Deque_iterator_int__int____int___ v1160, struct std___Deque_iterator_int__int____int___ v1161) {
bb1162:
  struct std___Deque_iterator_int__int____int___ __first1163;
  struct std___Deque_iterator_int__int____int___ __last1164;
  struct std___Deque_iterator_int__int____int___ __result1165;
  struct std___Deque_iterator_int__int____int___ __retval1166;
  struct std___Deque_iterator_int__int____int___ agg_tmp01167;
  struct std___Deque_iterator_int__int____int___ agg_tmp11168;
  struct std___Deque_iterator_int__int____int___ agg_tmp21169;
  struct std___Deque_iterator_int__int____int___ agg_tmp31170;
  struct std___Deque_iterator_int__int____int___ agg_tmp41171;
  __first1163 = v1159;
  __last1164 = v1160;
  __result1165 = v1161;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11168, &__first1163);
  struct std___Deque_iterator_int__int____int___ t1172 = agg_tmp11168;
  struct std___Deque_iterator_int__int____int___ r1173 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t1172);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01167 = r1173;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31170, &__last1164);
  struct std___Deque_iterator_int__int____int___ t1174 = agg_tmp31170;
  struct std___Deque_iterator_int__int____int___ r1175 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t1174);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21169 = r1175;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41171, &__result1165);
  struct std___Deque_iterator_int__int____int___ t1176 = agg_tmp01167;
  struct std___Deque_iterator_int__int____int___ t1177 = agg_tmp21169;
  struct std___Deque_iterator_int__int____int___ t1178 = agg_tmp41171;
  struct std___Deque_iterator_int__int____int___ r1179 = std___Deque_iterator_int__int___int___std____copy_move_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t1176, t1177, t1178);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1166 = r1179;
  struct std___Deque_iterator_int__int____int___ t1180 = __retval1166;
  return t1180;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v1181, unsigned long v1182) {
bb1183:
  struct std__deque_int__std__allocator_int__* this1184;
  unsigned long __nodes_to_add1185;
  this1184 = v1181;
  __nodes_to_add1185 = v1182;
  struct std__deque_int__std__allocator_int__* t1186 = this1184;
    unsigned long t1187 = __nodes_to_add1185;
    unsigned long c1188 = 1;
    unsigned long b1189 = t1187 + c1188;
    struct std___Deque_base_int__std__allocator_int__* base1190 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1186 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1191 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1190->_M_impl) + 0);
    unsigned long t1192 = base1191->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base1193 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1186 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1194 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1193->_M_impl) + 0);
    int** t1195 = base1194->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base1196 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1186 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1197 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1196->_M_impl) + 0);
    int** t1198 = base1197->_M_map;
    long diff1199 = t1195 - t1198;
    unsigned long cast1200 = (unsigned long)diff1199;
    unsigned long b1201 = t1192 - cast1200;
    _Bool c1202 = ((b1189 > b1201)) ? 1 : 0;
    if (c1202) {
      unsigned long t1203 = __nodes_to_add1185;
      _Bool c1204 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t1186, t1203, c1204);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* v1205, int* v1206) {
bb1207:
  struct std__deque_int__std__allocator_int__* this1208;
  int* __args1209;
  this1208 = v1205;
  __args1209 = v1206;
  struct std__deque_int__std__allocator_int__* t1210 = this1208;
    unsigned long r1211 = std__deque_int__std__allocator_int_____size___const(t1210);
    unsigned long r1212 = std__deque_int__std__allocator_int_____max_size___const(t1210);
    _Bool c1213 = ((r1211 == r1212)) ? 1 : 0;
    if (c1213) {
      char* cast1214 = (char*)&(_str_6);
      std____throw_length_error(cast1214);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c1215 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t1210, c1215);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base1216 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1210 + 0);
  int* r1217 = std___Deque_base_int__std__allocator_int______M_allocate_node(base1216);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base1218 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1210 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1219 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1218->_M_impl) + 0);
  int** t1220 = base1219->_M_finish._M_node;
  int c1221 = 1;
  int** ptr1222 = &(t1220)[c1221];
  *ptr1222 = r1217;
      struct std___Deque_base_int__std__allocator_int__* base1224 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1210 + 0);
      struct std__allocator_int_* base1225 = (struct std__allocator_int_*)((char *)&(base1224->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base1226 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1210 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1227 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1226->_M_impl) + 0);
      int* t1228 = base1227->_M_finish._M_cur;
      int* t1229 = __args1209;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base1225, t1228, t1229);
      struct std___Deque_base_int__std__allocator_int__* base1230 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1210 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1231 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1230->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base1232 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1210 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1233 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1232->_M_impl) + 0);
      int** t1234 = base1233->_M_finish._M_node;
      int c1235 = 1;
      int** ptr1236 = &(t1234)[c1235];
      std___Deque_iterator_int__int___int_____M_set_node(&base1231->_M_finish, ptr1236);
      struct std___Deque_base_int__std__allocator_int__* base1237 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1210 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1238 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1237->_M_impl) + 0);
      int* t1239 = base1238->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base1240 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1210 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1241 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1240->_M_impl) + 0);
      base1241->_M_finish._M_cur = t1239;
    cir_try_dispatch1223: ;
    if (__cir_exc_active) {
    {
      int ca_tok1242 = 0;
      void* ca_exn1243 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base1244 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1210 + 0);
        struct std___Deque_base_int__std__allocator_int__* base1245 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1210 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1246 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1245->_M_impl) + 0);
        int** t1247 = base1246->_M_finish._M_node;
        int c1248 = 1;
        int** ptr1249 = &(t1247)[c1248];
        int* t1250 = *ptr1249;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base1244, t1250);
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
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* v1251, int* v1252) {
bb1253:
  struct std__deque_int__std__allocator_int__* this1254;
  int* __args1255;
  int* __retval1256;
  this1254 = v1251;
  __args1255 = v1252;
  struct std__deque_int__std__allocator_int__* t1257 = this1254;
    struct std___Deque_base_int__std__allocator_int__* base1258 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1257 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1259 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1258->_M_impl) + 0);
    int* t1260 = base1259->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base1261 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1257 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1262 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1261->_M_impl) + 0);
    int* t1263 = base1262->_M_finish._M_last;
    int c1264 = -1;
    int* ptr1265 = &(t1263)[c1264];
    _Bool c1266 = ((t1260 != ptr1265)) ? 1 : 0;
    if (c1266) {
      struct std___Deque_base_int__std__allocator_int__* base1267 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1257 + 0);
      struct std__allocator_int_* base1268 = (struct std__allocator_int_*)((char *)&(base1267->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base1269 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1257 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1270 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1269->_M_impl) + 0);
      int* t1271 = base1270->_M_finish._M_cur;
      int* t1272 = __args1255;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base1268, t1271, t1272);
      struct std___Deque_base_int__std__allocator_int__* base1273 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1257 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1274 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1273->_M_impl) + 0);
      int* t1275 = base1274->_M_finish._M_cur;
      int c1276 = 1;
      int* ptr1277 = &(t1275)[c1276];
      base1274->_M_finish._M_cur = ptr1277;
    } else {
      int* t1278 = __args1255;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_(t1257, t1278);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r1279 = std__deque_int__std__allocator_int_____back(t1257);
  __retval1256 = r1279;
  int* t1280 = __retval1256;
  return t1280;
}

// function: _ZNSt5dequeIiSaIiEE9push_backEOi
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v1281, int* v1282) {
bb1283:
  struct std__deque_int__std__allocator_int__* this1284;
  int* __x1285;
  this1284 = v1281;
  __x1285 = v1282;
  struct std__deque_int__std__allocator_int__* t1286 = this1284;
  int* t1287 = __x1285;
  int* r1288 = int__std__deque_int__std__allocator_int_____emplace_back_int_(t1286, t1287);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v1289) {
bb1290:
  struct std__deque_int__std__allocator_int__* this1291;
  int* __retval1292;
  struct std___Deque_iterator_int__int____int___ __tmp1293;
  this1291 = v1289;
  struct std__deque_int__std__allocator_int__* t1294 = this1291;
    do {
          _Bool r1295 = std__deque_int__std__allocator_int_____empty___const(t1294);
          if (r1295) {
            char* cast1296 = (char*)&(_str_7);
            int c1297 = 1537;
            char* cast1298 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast1299 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast1296, c1297, cast1298, cast1299);
          }
      _Bool c1300 = 0;
      if (!c1300) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r1301 = std__deque_int__std__allocator_int_____end(t1294);
  __tmp1293 = r1301;
  struct std___Deque_iterator_int__int____int___* r1302 = std___Deque_iterator_int__int___int____operator___2(&__tmp1293);
  int* r1303 = std___Deque_iterator_int__int___int____operator____const(&__tmp1293);
  __retval1292 = r1303;
  int* t1304 = __retval1292;
  return t1304;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v1305, long v1306, struct std__random_access_iterator_tag v1307) {
bb1308:
  int** __i1309;
  long __n1310;
  struct std__random_access_iterator_tag unnamed1311;
  __i1309 = v1305;
  __n1310 = v1306;
  unnamed1311 = v1307;
    long t1312 = __n1310;
    _Bool isconst1313 = 0;
    _Bool ternary1314;
    if (isconst1313) {
      long t1315 = __n1310;
      long c1316 = 1;
      _Bool c1317 = ((t1315 == c1316)) ? 1 : 0;
      ternary1314 = (_Bool)c1317;
    } else {
      _Bool c1318 = 0;
      ternary1314 = (_Bool)c1318;
    }
    if (ternary1314) {
      int** t1319 = __i1309;
      int* t1320 = *t1319;
      int c1321 = 1;
      int* ptr1322 = &(t1320)[c1321];
      *t1319 = ptr1322;
    } else {
        long t1323 = __n1310;
        _Bool isconst1324 = 0;
        _Bool ternary1325;
        if (isconst1324) {
          long t1326 = __n1310;
          long c1327 = -1;
          _Bool c1328 = ((t1326 == c1327)) ? 1 : 0;
          ternary1325 = (_Bool)c1328;
        } else {
          _Bool c1329 = 0;
          ternary1325 = (_Bool)c1329;
        }
        if (ternary1325) {
          int** t1330 = __i1309;
          int* t1331 = *t1330;
          int c1332 = -1;
          int* ptr1333 = &(t1331)[c1332];
          *t1330 = ptr1333;
        } else {
          long t1334 = __n1310;
          int** t1335 = __i1309;
          int* t1336 = *t1335;
          int* ptr1337 = &(t1336)[t1334];
          *t1335 = ptr1337;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v1338, long v1339) {
bb1340:
  int** __i1341;
  long __n1342;
  long __d1343;
  struct std__random_access_iterator_tag agg_tmp01344;
  __i1341 = v1338;
  __n1342 = v1339;
  long t1345 = __n1342;
  __d1343 = t1345;
  int** t1346 = __i1341;
  long t1347 = __d1343;
  int** t1348 = __i1341;
  struct std__random_access_iterator_tag r1349 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t1348);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp01344 = r1349;
  struct std__random_access_iterator_tag t1350 = agg_tmp01344;
  void_std____advance_int___long_(t1346, t1347, t1350);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v1351, int* v1352, int* v1353) {
bb1354:
  int* __first1355;
  int* __last1356;
  int* __result1357;
  int* __retval1358;
  __first1355 = v1351;
  __last1356 = v1352;
  __result1357 = v1353;
      _Bool r1359 = std__is_constant_evaluated();
      if (r1359) {
      } else {
          long __n1360;
          int* t1361 = __first1355;
          int* t1362 = __last1356;
          long r1363 = std__iterator_traits_int____difference_type_std__distance_int__(t1361, t1362);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n1360 = r1363;
          long t1364 = __n1360;
          long u1365 = -t1364;
          void_std__advance_int___long_(&__result1357, u1365);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
            long t1366 = __n1360;
            long c1367 = 1;
            _Bool c1368 = ((t1366 > c1367)) ? 1 : 0;
            if (c1368) {
              int* t1369 = __result1357;
              void* cast1370 = (void*)t1369;
              int* t1371 = __first1355;
              void* cast1372 = (void*)t1371;
              long t1373 = __n1360;
              unsigned long cast1374 = (unsigned long)t1373;
              unsigned long c1375 = 4;
              unsigned long b1376 = cast1374 * c1375;
              void* r1377 = memmove(cast1370, cast1372, b1376);
            } else {
                long t1378 = __n1360;
                long c1379 = 1;
                _Bool c1380 = ((t1378 == c1379)) ? 1 : 0;
                if (c1380) {
                  void_std____assign_one_true__int___int__(&__result1357, &__first1355);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int* t1381 = __result1357;
          __retval1358 = t1381;
          int* t1382 = __retval1358;
          return t1382;
      }
    while (1) {
      int* t1383 = __first1355;
      int* t1384 = __last1356;
      _Bool c1385 = ((t1383 != t1384)) ? 1 : 0;
      if (!c1385) break;
        int* t1386 = __last1356;
        int c1387 = -1;
        int* ptr1388 = &(t1386)[c1387];
        __last1356 = ptr1388;
        int* t1389 = __result1357;
        int c1390 = -1;
        int* ptr1391 = &(t1389)[c1390];
        __result1357 = ptr1391;
        void_std____assign_one_true__int___int__(&__result1357, &__last1356);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
    }
  int* t1392 = __result1357;
  __retval1358 = t1392;
  int* t1393 = __retval1358;
  return t1393;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v1394, int* v1395, int* v1396) {
bb1397:
  int* __first1398;
  int* __last1399;
  int* __result1400;
  int* __retval1401;
  __first1398 = v1394;
  __last1399 = v1395;
  __result1400 = v1396;
  int* t1402 = __first1398;
  int* t1403 = __last1399;
  int* t1404 = __result1400;
  int* r1405 = int__std____copy_move_backward_a2_true__int___int__(t1402, t1403, t1404);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1401 = r1405;
  int* t1406 = __retval1401;
  return t1406;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmIEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v1407, long v1408) {
bb1409:
  struct std___Deque_iterator_int__int____int___* this1410;
  long __n1411;
  struct std___Deque_iterator_int__int____int___* __retval1412;
  this1410 = v1407;
  __n1411 = v1408;
  struct std___Deque_iterator_int__int____int___* t1413 = this1410;
  long t1414 = __n1411;
  long u1415 = -t1414;
  struct std___Deque_iterator_int__int____int___* r1416 = std___Deque_iterator_int__int___int____operator___3(t1413, u1415);
  __retval1412 = r1416;
  struct std___Deque_iterator_int__int____int___* t1417 = __retval1412;
  return t1417;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiiEN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT0_EE7__valueESt15_Deque_iteratorIT1_RS5_PS5_EE6__typeES3_S3_S8_
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(int* v1418, int* v1419, struct std___Deque_iterator_int__int____int___ v1420) {
bb1421:
  int* __first1422;
  int* __last1423;
  struct std___Deque_iterator_int__int____int___ __result1424;
  struct std___Deque_iterator_int__int____int___ __retval1425;
  long __len1426;
  __first1422 = v1418;
  __last1423 = v1419;
  __result1424 = v1420;
  int* t1427 = __last1423;
  int* t1428 = __first1422;
  long diff1429 = t1427 - t1428;
  __len1426 = diff1429;
    while (1) {
      long t1430 = __len1426;
      long c1431 = 0;
      _Bool c1432 = ((t1430 > c1431)) ? 1 : 0;
      if (!c1432) break;
        long __rlen1433;
        int* __rend1434;
        long __clen1435;
        int* t1436 = __result1424._M_cur;
        int* t1437 = __result1424._M_first;
        long diff1438 = t1436 - t1437;
        __rlen1433 = diff1438;
        int* t1439 = __result1424._M_cur;
        __rend1434 = t1439;
          long t1440 = __rlen1433;
          _Bool cast1441 = (_Bool)t1440;
          _Bool u1442 = !cast1441;
          if (u1442) {
            unsigned long r1443 = std___Deque_iterator_int__int___int_____S_buffer_size();
            long cast1444 = (long)r1443;
            __rlen1433 = cast1444;
            int** t1445 = __result1424._M_node;
            int c1446 = -1;
            int** ptr1447 = &(t1445)[c1446];
            int* t1448 = *ptr1447;
            long t1449 = __rlen1433;
            int* ptr1450 = &(t1448)[t1449];
            __rend1434 = ptr1450;
          }
        long* r1451 = long_const__std__min_long_(&__len1426, &__rlen1433);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1452 = *r1451;
        __clen1435 = t1452;
        int* t1453 = __last1423;
        long t1454 = __clen1435;
        long u1455 = -t1454;
        int* ptr1456 = &(t1453)[u1455];
        int* t1457 = __last1423;
        int* t1458 = __rend1434;
        int* r1459 = int__std____copy_move_backward_a1_true__int___int__(ptr1456, t1457, t1458);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1460 = __clen1435;
        int* t1461 = __last1423;
        long u1462 = -t1460;
        int* ptr1463 = &(t1461)[u1462];
        __last1423 = ptr1463;
        long t1464 = __clen1435;
        struct std___Deque_iterator_int__int____int___* r1465 = std___Deque_iterator_int__int___int____operator__(&__result1424, t1464);
        long t1466 = __clen1435;
        long t1467 = __len1426;
        long b1468 = t1467 - t1466;
        __len1426 = b1468;
    }
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1425, &__result1424);
  struct std___Deque_iterator_int__int____int___ t1469 = __retval1425;
  return t1469;
}

// function: _ZSt24__copy_move_backward_ditILb1EiRiPiSt15_Deque_iteratorIiS0_S1_EET3_S2_IT0_T1_T2_ES8_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1470, struct std___Deque_iterator_int__int____int___ v1471, struct std___Deque_iterator_int__int____int___ v1472) {
bb1473:
  struct std___Deque_iterator_int__int____int___ __first1474;
  struct std___Deque_iterator_int__int____int___ __last1475;
  struct std___Deque_iterator_int__int____int___ __result1476;
  struct std___Deque_iterator_int__int____int___ __retval1477;
  struct std___Deque_iterator_int__int____int___ agg_tmp31478;
  __first1474 = v1470;
  __last1475 = v1471;
  __result1476 = v1472;
    int** t1479 = __first1474._M_node;
    int** t1480 = __last1475._M_node;
    _Bool c1481 = ((t1479 != t1480)) ? 1 : 0;
    if (c1481) {
      struct std___Deque_iterator_int__int____int___ ref_tmp01482;
      struct std___Deque_iterator_int__int____int___ agg_tmp01483;
      struct std___Deque_iterator_int__int____int___ agg_tmp21484;
      int* t1485 = __last1475._M_first;
      int* t1486 = __last1475._M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01483, &__result1476);
      struct std___Deque_iterator_int__int____int___ t1487 = agg_tmp01483;
      struct std___Deque_iterator_int__int____int___ r1488 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t1485, t1486, t1487);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp01482 = r1488;
      struct std___Deque_iterator_int__int____int___* r1489 = std___Deque_iterator_int__int___int____operator_(&__result1476, &ref_tmp01482);
        int** __node1490;
        struct std___Deque_iterator_int__int____int___ ref_tmp11491;
        struct std___Deque_iterator_int__int____int___ agg_tmp11492;
        int** t1493 = __last1475._M_node;
        int c1494 = -1;
        int** ptr1495 = &(t1493)[c1494];
        __node1490 = ptr1495;
        while (1) {
          int** t1497 = __node1490;
          int** t1498 = __first1474._M_node;
          _Bool c1499 = ((t1497 != t1498)) ? 1 : 0;
          if (!c1499) break;
          int** t1500 = __node1490;
          int* t1501 = *t1500;
          int** t1502 = __node1490;
          int* t1503 = *t1502;
          unsigned long r1504 = std___Deque_iterator_int__int___int_____S_buffer_size();
          int* ptr1505 = &(t1503)[r1504];
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11492, &__result1476);
          struct std___Deque_iterator_int__int____int___ t1506 = agg_tmp11492;
          struct std___Deque_iterator_int__int____int___ r1507 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t1501, ptr1505, t1506);
          if (__cir_exc_active) {
            struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ref_tmp11491 = r1507;
          struct std___Deque_iterator_int__int____int___* r1508 = std___Deque_iterator_int__int___int____operator_(&__result1476, &ref_tmp11491);
        for_step1496: ;
          int** t1509 = __node1490;
          int c1510 = -1;
          int** ptr1511 = &(t1509)[c1510];
          __node1490 = ptr1511;
        }
      int* t1512 = __first1474._M_cur;
      int* t1513 = __first1474._M_last;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21484, &__result1476);
      struct std___Deque_iterator_int__int____int___ t1514 = agg_tmp21484;
      struct std___Deque_iterator_int__int____int___ r1515 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t1512, t1513, t1514);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1477 = r1515;
      struct std___Deque_iterator_int__int____int___ t1516 = __retval1477;
      return t1516;
    }
  int* t1517 = __first1474._M_cur;
  int* t1518 = __last1475._M_cur;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31478, &__result1476);
  struct std___Deque_iterator_int__int____int___ t1519 = agg_tmp31478;
  struct std___Deque_iterator_int__int____int___ r1520 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t1517, t1518, t1519);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1477 = r1520;
  struct std___Deque_iterator_int__int____int___ t1521 = __retval1477;
  return t1521;
}

// function: _ZSt23__copy_move_backward_a1ILb1EiRiPiiESt15_Deque_iteratorIT3_RS3_PS3_ES2_IT0_T1_T2_ESA_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ v1522, struct std___Deque_iterator_int__int____int___ v1523, struct std___Deque_iterator_int__int____int___ v1524) {
bb1525:
  struct std___Deque_iterator_int__int____int___ __first1526;
  struct std___Deque_iterator_int__int____int___ __last1527;
  struct std___Deque_iterator_int__int____int___ __result1528;
  struct std___Deque_iterator_int__int____int___ __retval1529;
  struct std___Deque_iterator_int__int____int___ agg_tmp01530;
  struct std___Deque_iterator_int__int____int___ agg_tmp11531;
  struct std___Deque_iterator_int__int____int___ agg_tmp21532;
  __first1526 = v1522;
  __last1527 = v1523;
  __result1528 = v1524;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01530, &__first1526);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11531, &__last1527);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21532, &__result1528);
  struct std___Deque_iterator_int__int____int___ t1533 = agg_tmp01530;
  struct std___Deque_iterator_int__int____int___ t1534 = agg_tmp11531;
  struct std___Deque_iterator_int__int____int___ t1535 = agg_tmp21532;
  struct std___Deque_iterator_int__int____int___ r1536 = std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(t1533, t1534, t1535);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1529 = r1536;
  struct std___Deque_iterator_int__int____int___ t1537 = __retval1529;
  return t1537;
}

// function: _ZSt22__copy_move_backward_aILb1ESt15_Deque_iteratorIiRiPiES3_ET1_T0_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1538, struct std___Deque_iterator_int__int____int___ v1539, struct std___Deque_iterator_int__int____int___ v1540) {
bb1541:
  struct std___Deque_iterator_int__int____int___ __first1542;
  struct std___Deque_iterator_int__int____int___ __last1543;
  struct std___Deque_iterator_int__int____int___ __result1544;
  struct std___Deque_iterator_int__int____int___ __retval1545;
  struct std___Deque_iterator_int__int____int___ agg_tmp01546;
  struct std___Deque_iterator_int__int____int___ agg_tmp11547;
  struct std___Deque_iterator_int__int____int___ agg_tmp21548;
  struct std___Deque_iterator_int__int____int___ agg_tmp31549;
  struct std___Deque_iterator_int__int____int___ agg_tmp41550;
  struct std___Deque_iterator_int__int____int___ agg_tmp51551;
  struct std___Deque_iterator_int__int____int___ agg_tmp61552;
  __first1542 = v1538;
  __last1543 = v1539;
  __result1544 = v1540;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21548, &__first1542);
  struct std___Deque_iterator_int__int____int___ t1553 = agg_tmp21548;
  struct std___Deque_iterator_int__int____int___ r1554 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1553);
  agg_tmp11547 = r1554;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41550, &__last1543);
  struct std___Deque_iterator_int__int____int___ t1555 = agg_tmp41550;
  struct std___Deque_iterator_int__int____int___ r1556 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1555);
  agg_tmp31549 = r1556;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp61552, &__result1544);
  struct std___Deque_iterator_int__int____int___ t1557 = agg_tmp61552;
  struct std___Deque_iterator_int__int____int___ r1558 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1557);
  agg_tmp51551 = r1558;
  struct std___Deque_iterator_int__int____int___ t1559 = agg_tmp11547;
  struct std___Deque_iterator_int__int____int___ t1560 = agg_tmp31549;
  struct std___Deque_iterator_int__int____int___ t1561 = agg_tmp51551;
  struct std___Deque_iterator_int__int____int___ r1562 = std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(t1559, t1560, t1561);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01546 = r1562;
  struct std___Deque_iterator_int__int____int___ t1563 = agg_tmp01546;
  struct std___Deque_iterator_int__int____int___ r1564 = std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(&__result1544, t1563);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1545 = r1564;
  struct std___Deque_iterator_int__int____int___ t1565 = __retval1545;
  return t1565;
}

// function: _ZSt13move_backwardISt15_Deque_iteratorIiRiPiES3_ET0_T_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1566, struct std___Deque_iterator_int__int____int___ v1567, struct std___Deque_iterator_int__int____int___ v1568) {
bb1569:
  struct std___Deque_iterator_int__int____int___ __first1570;
  struct std___Deque_iterator_int__int____int___ __last1571;
  struct std___Deque_iterator_int__int____int___ __result1572;
  struct std___Deque_iterator_int__int____int___ __retval1573;
  struct std___Deque_iterator_int__int____int___ agg_tmp01574;
  struct std___Deque_iterator_int__int____int___ agg_tmp11575;
  struct std___Deque_iterator_int__int____int___ agg_tmp21576;
  struct std___Deque_iterator_int__int____int___ agg_tmp31577;
  struct std___Deque_iterator_int__int____int___ agg_tmp41578;
  __first1570 = v1566;
  __last1571 = v1567;
  __result1572 = v1568;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11575, &__first1570);
  struct std___Deque_iterator_int__int____int___ t1579 = agg_tmp11575;
  struct std___Deque_iterator_int__int____int___ r1580 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t1579);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01574 = r1580;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31577, &__last1571);
  struct std___Deque_iterator_int__int____int___ t1581 = agg_tmp31577;
  struct std___Deque_iterator_int__int____int___ r1582 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t1581);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21576 = r1582;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41578, &__result1572);
  struct std___Deque_iterator_int__int____int___ t1583 = agg_tmp01574;
  struct std___Deque_iterator_int__int____int___ t1584 = agg_tmp21576;
  struct std___Deque_iterator_int__int____int___ t1585 = agg_tmp41578;
  struct std___Deque_iterator_int__int____int___ r1586 = std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t1583, t1584, t1585);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1573 = r1586;
  struct std___Deque_iterator_int__int____int___ t1587 = __retval1573;
  return t1587;
}

// function: _ZNSt5dequeIiSaIiEE14_M_emplace_auxIJRKiEEESt15_Deque_iteratorIiRiPiES8_DpOT_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__deque_int__std__allocator_int______M_emplace_aux_int_const__(struct std__deque_int__std__allocator_int__* v1588, struct std___Deque_iterator_int__int____int___ v1589, int* v1590) {
bb1591:
  struct std__deque_int__std__allocator_int__* this1592;
  struct std___Deque_iterator_int__int____int___ __pos1593;
  int* __args1594;
  struct std___Deque_iterator_int__int____int___ __retval1595;
  int __x_copy1596;
  long __index1597;
  this1592 = v1588;
  __pos1593 = v1589;
  __args1594 = v1590;
  struct std__deque_int__std__allocator_int__* t1598 = this1592;
  int* t1599 = __args1594;
  int t1600 = *t1599;
  __x_copy1596 = t1600;
  struct std___Deque_base_int__std__allocator_int__* base1601 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1598 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1602 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1601->_M_impl) + 0);
  long r1603 = std__operator_(&__pos1593, &base1602->_M_start);
  __index1597 = r1603;
    long t1604 = __index1597;
    unsigned long cast1605 = (unsigned long)t1604;
    unsigned long r1606 = std__deque_int__std__allocator_int_____size___const(t1598);
    unsigned long c1607 = 2;
    unsigned long b1608 = r1606 / c1607;
    _Bool c1609 = ((cast1605 < b1608)) ? 1 : 0;
    if (c1609) {
      struct std___Deque_iterator_int__int____int___ __front11610;
      struct std___Deque_iterator_int__int____int___ __front21611;
      struct std___Deque_iterator_int__int____int___ ref_tmp01612;
      struct std___Deque_iterator_int__int____int___ __pos11613;
      struct std___Deque_iterator_int__int____int___ agg_tmp01614;
      struct std___Deque_iterator_int__int____int___ agg_tmp11615;
      struct std___Deque_iterator_int__int____int___ agg_tmp21616;
      struct std___Deque_iterator_int__int____int___ agg_tmp31617;
      int* r1618 = std__deque_int__std__allocator_int_____front(t1598);
      std__deque_int__std__allocator_int_____push_front(t1598, r1618);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Deque_base_int__std__allocator_int__* base1619 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1598 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1620 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1619->_M_impl) + 0);
      std___Deque_iterator_int__int___int_____Deque_iterator(&__front11610, &base1620->_M_start);
      struct std___Deque_iterator_int__int____int___* r1621 = std___Deque_iterator_int__int___int____operator___5(&__front11610);
      std___Deque_iterator_int__int___int_____Deque_iterator(&__front21611, &__front11610);
      struct std___Deque_iterator_int__int____int___* r1622 = std___Deque_iterator_int__int___int____operator___5(&__front21611);
      struct std___Deque_base_int__std__allocator_int__* base1623 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1598 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1624 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1623->_M_impl) + 0);
      long t1625 = __index1597;
      struct std___Deque_iterator_int__int____int___ r1626 = std__operator__3(&base1624->_M_start, t1625);
      ref_tmp01612 = r1626;
      struct std___Deque_iterator_int__int____int___* r1627 = std___Deque_iterator_int__int___int____operator_(&__pos1593, &ref_tmp01612);
      std___Deque_iterator_int__int___int_____Deque_iterator(&__pos11613, &__pos1593);
      struct std___Deque_iterator_int__int____int___* r1628 = std___Deque_iterator_int__int___int____operator___5(&__pos11613);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01614, &__front21611);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11615, &__pos11613);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21616, &__front11610);
      struct std___Deque_iterator_int__int____int___ t1629 = agg_tmp01614;
      struct std___Deque_iterator_int__int____int___ t1630 = agg_tmp11615;
      struct std___Deque_iterator_int__int____int___ t1631 = agg_tmp21616;
      struct std___Deque_iterator_int__int____int___ r1632 = std___Deque_iterator_int__int___int___std__move_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t1629, t1630, t1631);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      agg_tmp31617 = r1632;
    } else {
      struct std___Deque_iterator_int__int____int___ __back11633;
      struct std___Deque_iterator_int__int____int___ __back21634;
      struct std___Deque_iterator_int__int____int___ ref_tmp11635;
      struct std___Deque_iterator_int__int____int___ agg_tmp41636;
      struct std___Deque_iterator_int__int____int___ agg_tmp51637;
      struct std___Deque_iterator_int__int____int___ agg_tmp61638;
      struct std___Deque_iterator_int__int____int___ agg_tmp71639;
      int* r1640 = std__deque_int__std__allocator_int_____back(t1598);
      std__deque_int__std__allocator_int_____push_back(t1598, r1640);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Deque_base_int__std__allocator_int__* base1641 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1598 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1642 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1641->_M_impl) + 0);
      std___Deque_iterator_int__int___int_____Deque_iterator(&__back11633, &base1642->_M_finish);
      struct std___Deque_iterator_int__int____int___* r1643 = std___Deque_iterator_int__int___int____operator___2(&__back11633);
      std___Deque_iterator_int__int___int_____Deque_iterator(&__back21634, &__back11633);
      struct std___Deque_iterator_int__int____int___* r1644 = std___Deque_iterator_int__int___int____operator___2(&__back21634);
      struct std___Deque_base_int__std__allocator_int__* base1645 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1598 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1646 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1645->_M_impl) + 0);
      long t1647 = __index1597;
      struct std___Deque_iterator_int__int____int___ r1648 = std__operator__3(&base1646->_M_start, t1647);
      ref_tmp11635 = r1648;
      struct std___Deque_iterator_int__int____int___* r1649 = std___Deque_iterator_int__int___int____operator_(&__pos1593, &ref_tmp11635);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41636, &__pos1593);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp51637, &__back21634);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp61638, &__back11633);
      struct std___Deque_iterator_int__int____int___ t1650 = agg_tmp41636;
      struct std___Deque_iterator_int__int____int___ t1651 = agg_tmp51637;
      struct std___Deque_iterator_int__int____int___ t1652 = agg_tmp61638;
      struct std___Deque_iterator_int__int____int___ r1653 = std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t1650, t1651, t1652);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      agg_tmp71639 = r1653;
    }
  int t1654 = __x_copy1596;
  int* r1655 = std___Deque_iterator_int__int___int____operator____const(&__pos1593);
  *r1655 = t1654;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1595, &__pos1593);
  struct std___Deque_iterator_int__int____int___ t1656 = __retval1595;
  return t1656;
}

// function: _ZNSt5dequeIiSaIiEE13_M_insert_auxESt15_Deque_iteratorIiRiPiERKi
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int______M_insert_aux(struct std__deque_int__std__allocator_int__* v1657, struct std___Deque_iterator_int__int____int___ v1658, int* v1659) {
bb1660:
  struct std__deque_int__std__allocator_int__* this1661;
  struct std___Deque_iterator_int__int____int___ __pos1662;
  int* __x1663;
  struct std___Deque_iterator_int__int____int___ __retval1664;
  struct std___Deque_iterator_int__int____int___ agg_tmp01665;
  this1661 = v1657;
  __pos1662 = v1658;
  __x1663 = v1659;
  struct std__deque_int__std__allocator_int__* t1666 = this1661;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01665, &__pos1662);
  int* t1667 = __x1663;
  struct std___Deque_iterator_int__int____int___ t1668 = agg_tmp01665;
  struct std___Deque_iterator_int__int____int___ r1669 = std___Deque_iterator_int__int___int___std__deque_int__std__allocator_int______M_emplace_aux_int_const__(t1666, t1668, t1667);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1664 = r1669;
  struct std___Deque_iterator_int__int____int___ t1670 = __retval1664;
  return t1670;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ES1_PS1_
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1671, int* v1672, int** v1673) {
bb1674:
  struct std___Deque_iterator_int__int____int___* this1675;
  int* __x1676;
  int** __y1677;
  this1675 = v1671;
  __x1676 = v1672;
  __y1677 = v1673;
  struct std___Deque_iterator_int__int____int___* t1678 = this1675;
  int* t1679 = __x1676;
  t1678->_M_cur = t1679;
  int** t1680 = __y1677;
  int* t1681 = *t1680;
  t1678->_M_first = t1681;
  int** t1682 = __y1677;
  int* t1683 = *t1682;
  unsigned long r1684 = std___Deque_iterator_int__int___int_____S_buffer_size();
  int* ptr1685 = &(t1683)[r1684];
  t1678->_M_last = ptr1685;
  int** t1686 = __y1677;
  t1678->_M_node = t1686;
  return;
}

// function: _ZNKSt15_Deque_iteratorIiRKiPS0_E13_M_const_castEv
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int_const___int_const_____M_const_cast___const(struct std___Deque_iterator_int_int___int___* v1687) {
bb1688:
  struct std___Deque_iterator_int_int___int___* this1689;
  struct std___Deque_iterator_int__int____int___ __retval1690;
  this1689 = v1687;
  struct std___Deque_iterator_int_int___int___* t1691 = this1689;
  int* t1692 = t1691->_M_cur;
  int** t1693 = t1691->_M_node;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&__retval1690, t1692, t1693);
  struct std___Deque_iterator_int__int____int___ t1694 = __retval1690;
  return t1694;
}

// function: _ZNSt5dequeIiSaIiEE6insertESt15_Deque_iteratorIiRKiPS3_ES4_
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____insert(struct std__deque_int__std__allocator_int__* v1695, struct std___Deque_iterator_int_int___int___ v1696, int* v1697) {
bb1698:
  struct std__deque_int__std__allocator_int__* this1699;
  struct std___Deque_iterator_int_int___int___ __position1700;
  int* __x1701;
  struct std___Deque_iterator_int__int____int___ __retval1702;
  this1699 = v1695;
  __position1700 = v1696;
  __x1701 = v1697;
  struct std__deque_int__std__allocator_int__* t1703 = this1699;
    int* t1704 = __position1700._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base1705 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1703 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1706 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1705->_M_impl) + 0);
    int* t1707 = base1706->_M_start._M_cur;
    _Bool c1708 = ((t1704 == t1707)) ? 1 : 0;
    if (c1708) {
      int* t1709 = __x1701;
      std__deque_int__std__allocator_int_____push_front_2(t1703, t1709);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Deque_base_int__std__allocator_int__* base1710 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1703 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1711 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1710->_M_impl) + 0);
      std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1702, &base1711->_M_start);
      struct std___Deque_iterator_int__int____int___ t1712 = __retval1702;
      return t1712;
    } else {
        int* t1713 = __position1700._M_cur;
        struct std___Deque_base_int__std__allocator_int__* base1714 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1703 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1715 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1714->_M_impl) + 0);
        int* t1716 = base1715->_M_finish._M_cur;
        _Bool c1717 = ((t1713 == t1716)) ? 1 : 0;
        if (c1717) {
          int* t1718 = __x1701;
          std__deque_int__std__allocator_int_____push_back_2(t1703, t1718);
          if (__cir_exc_active) {
            struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          struct std___Deque_base_int__std__allocator_int__* base1719 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1703 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1720 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1719->_M_impl) + 0);
          std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1702, &base1720->_M_finish);
          struct std___Deque_iterator_int__int____int___* r1721 = std___Deque_iterator_int__int___int____operator___2(&__retval1702);
          struct std___Deque_iterator_int__int____int___ t1722 = __retval1702;
          return t1722;
        } else {
          struct std___Deque_iterator_int__int____int___ agg_tmp01723;
          struct std___Deque_iterator_int__int____int___ r1724 = std___Deque_iterator_int__int_const___int_const_____M_const_cast___const(&__position1700);
          agg_tmp01723 = r1724;
          int* t1725 = __x1701;
          struct std___Deque_iterator_int__int____int___ t1726 = agg_tmp01723;
          struct std___Deque_iterator_int__int____int___ r1727 = std__deque_int__std__allocator_int______M_insert_aux(t1703, t1726, t1725);
          if (__cir_exc_active) {
            struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval1702 = r1727;
          struct std___Deque_iterator_int__int____int___ t1728 = __retval1702;
          return t1728;
        }
    }
  abort();
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1729) {
bb1730:
  struct std__deque_int__std__allocator_int__* this1731;
  struct std___Deque_iterator_int__int____int___ __retval1732;
  this1731 = v1729;
  struct std__deque_int__std__allocator_int__* t1733 = this1731;
  struct std___Deque_base_int__std__allocator_int__* base1734 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1733 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1735 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1734->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1732, &base1735->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1736 = __retval1732;
  return t1736;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EC2IS_IiRiPiEvEERKT_
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(struct std___Deque_iterator_int_int___int___* v1737, struct std___Deque_iterator_int__int____int___* v1738) {
bb1739:
  struct std___Deque_iterator_int_int___int___* this1740;
  struct std___Deque_iterator_int__int____int___* __x1741;
  this1740 = v1737;
  __x1741 = v1738;
  struct std___Deque_iterator_int_int___int___* t1742 = this1740;
  struct std___Deque_iterator_int__int____int___* t1743 = __x1741;
  int* t1744 = t1743->_M_cur;
  t1742->_M_cur = t1744;
  struct std___Deque_iterator_int__int____int___* t1745 = __x1741;
  int* t1746 = t1745->_M_first;
  t1742->_M_first = t1746;
  struct std___Deque_iterator_int__int____int___* t1747 = __x1741;
  int* t1748 = t1747->_M_last;
  t1742->_M_last = t1748;
  struct std___Deque_iterator_int__int____int___* t1749 = __x1741;
  int** t1750 = t1749->_M_node;
  t1742->_M_node = t1750;
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v1751, int* v1752) {
bb1753:
  struct std__deque_int__std__allocator_int__* this1754;
  int* __args1755;
  this1754 = v1751;
  __args1755 = v1752;
  struct std__deque_int__std__allocator_int__* t1756 = this1754;
    unsigned long r1757 = std__deque_int__std__allocator_int_____size___const(t1756);
    unsigned long r1758 = std__deque_int__std__allocator_int_____max_size___const(t1756);
    _Bool c1759 = ((r1757 == r1758)) ? 1 : 0;
    if (c1759) {
      char* cast1760 = (char*)&(_str_6);
      std____throw_length_error(cast1760);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c1761 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t1756, c1761);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base1762 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1756 + 0);
  int* r1763 = std___Deque_base_int__std__allocator_int______M_allocate_node(base1762);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base1764 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1756 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1765 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1764->_M_impl) + 0);
  int** t1766 = base1765->_M_finish._M_node;
  int c1767 = 1;
  int** ptr1768 = &(t1766)[c1767];
  *ptr1768 = r1763;
      struct std___Deque_base_int__std__allocator_int__* base1770 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1756 + 0);
      struct std__allocator_int_* base1771 = (struct std__allocator_int_*)((char *)&(base1770->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base1772 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1756 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1773 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1772->_M_impl) + 0);
      int* t1774 = base1773->_M_finish._M_cur;
      int* t1775 = __args1755;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base1771, t1774, t1775);
      struct std___Deque_base_int__std__allocator_int__* base1776 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1756 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1777 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1776->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base1778 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1756 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1779 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1778->_M_impl) + 0);
      int** t1780 = base1779->_M_finish._M_node;
      int c1781 = 1;
      int** ptr1782 = &(t1780)[c1781];
      std___Deque_iterator_int__int___int_____M_set_node(&base1777->_M_finish, ptr1782);
      struct std___Deque_base_int__std__allocator_int__* base1783 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1756 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1784 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1783->_M_impl) + 0);
      int* t1785 = base1784->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base1786 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1756 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1787 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1786->_M_impl) + 0);
      base1787->_M_finish._M_cur = t1785;
    cir_try_dispatch1769: ;
    if (__cir_exc_active) {
    {
      int ca_tok1788 = 0;
      void* ca_exn1789 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base1790 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1756 + 0);
        struct std___Deque_base_int__std__allocator_int__* base1791 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1756 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1792 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1791->_M_impl) + 0);
        int** t1793 = base1792->_M_finish._M_node;
        int c1794 = 1;
        int** ptr1795 = &(t1793)[c1794];
        int* t1796 = *ptr1795;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base1790, t1796);
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
void std__deque_int__std__allocator_int_____push_back_2(struct std__deque_int__std__allocator_int__* v1797, int* v1798) {
bb1799:
  struct std__deque_int__std__allocator_int__* this1800;
  int* __x1801;
  this1800 = v1797;
  __x1801 = v1798;
  struct std__deque_int__std__allocator_int__* t1802 = this1800;
    struct std___Deque_base_int__std__allocator_int__* base1803 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1802 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1804 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1803->_M_impl) + 0);
    int* t1805 = base1804->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base1806 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1802 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1807 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1806->_M_impl) + 0);
    int* t1808 = base1807->_M_finish._M_last;
    int c1809 = -1;
    int* ptr1810 = &(t1808)[c1809];
    _Bool c1811 = ((t1805 != ptr1810)) ? 1 : 0;
    if (c1811) {
      struct std___Deque_base_int__std__allocator_int__* base1812 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1802 + 0);
      struct std__allocator_int_* base1813 = (struct std__allocator_int_*)((char *)&(base1812->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base1814 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1802 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1815 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1814->_M_impl) + 0);
      int* t1816 = base1815->_M_finish._M_cur;
      int* t1817 = __x1801;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base1813, t1816, t1817);
      struct std___Deque_base_int__std__allocator_int__* base1818 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1802 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1819 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1818->_M_impl) + 0);
      int* t1820 = base1819->_M_finish._M_cur;
      int c1821 = 1;
      int* ptr1822 = &(t1820)[c1821];
      base1819->_M_finish._M_cur = ptr1822;
    } else {
      int* t1823 = __x1801;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t1802, t1823);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt8__memcmpIiiEiPKT_PKT0_m
int int_std____memcmp_int__int_(int* v1824, int* v1825, unsigned long v1826) {
bb1827:
  int* __first11828;
  int* __first21829;
  unsigned long __num1830;
  int __retval1831;
  __first11828 = v1824;
  __first21829 = v1825;
  __num1830 = v1826;
    _Bool r1832 = std__is_constant_evaluated();
    if (r1832) {
        while (1) {
          unsigned long t1834 = __num1830;
          unsigned long c1835 = 0;
          _Bool c1836 = ((t1834 > c1835)) ? 1 : 0;
          if (!c1836) break;
            int* t1837 = __first11828;
            int t1838 = *t1837;
            int* t1839 = __first21829;
            int t1840 = *t1839;
            _Bool c1841 = ((t1838 != t1840)) ? 1 : 0;
            if (c1841) {
              int* t1842 = __first11828;
              int t1843 = *t1842;
              int* t1844 = __first21829;
              int t1845 = *t1844;
              _Bool c1846 = ((t1843 < t1845)) ? 1 : 0;
              int c1847 = -1;
              int c1848 = 1;
              int sel1849 = c1846 ? c1847 : c1848;
              __retval1831 = sel1849;
              int t1850 = __retval1831;
              int ret_val1851 = t1850;
              return ret_val1851;
            }
        for_step1833: ;
          int* t1852 = __first11828;
          int c1853 = 1;
          int* ptr1854 = &(t1852)[c1853];
          __first11828 = ptr1854;
          int* t1855 = __first21829;
          int c1856 = 1;
          int* ptr1857 = &(t1855)[c1856];
          __first21829 = ptr1857;
          unsigned long t1858 = __num1830;
          unsigned long u1859 = t1858 - 1;
          __num1830 = u1859;
        }
      int c1860 = 0;
      __retval1831 = c1860;
      int t1861 = __retval1831;
      return t1861;
    } else {
      int* t1862 = __first11828;
      void* cast1863 = (void*)t1862;
      int* t1864 = __first21829;
      void* cast1865 = (void*)t1864;
      unsigned long c1866 = 4;
      unsigned long t1867 = __num1830;
      unsigned long b1868 = c1866 * t1867;
      int r1869 = memcmp(cast1863, cast1865, b1868);
      __retval1831 = r1869;
      int t1870 = __retval1831;
      return t1870;
    }
  abort();
}

// function: _ZNSt7__equalILb1EE5equalIiEEbPKT_S4_S4_
_Bool bool_std____equal_true___equal_int_(int* v1871, int* v1872, int* v1873) {
bb1874:
  int* __first11875;
  int* __last11876;
  int* __first21877;
  _Bool __retval1878;
  __first11875 = v1871;
  __last11876 = v1872;
  __first21877 = v1873;
    unsigned long __len1879;
    int* t1880 = __last11876;
    int* t1881 = __first11875;
    long diff1882 = t1880 - t1881;
    unsigned long cast1883 = (unsigned long)diff1882;
    __len1879 = cast1883;
    unsigned long t1884 = __len1879;
    _Bool cast1885 = (_Bool)t1884;
    if (cast1885) {
      int* t1886 = __first11875;
      int* t1887 = __first21877;
      unsigned long t1888 = __len1879;
      int r1889 = int_std____memcmp_int__int_(t1886, t1887, t1888);
      if (__cir_exc_active) {
        _Bool __cir_eh_ret = (_Bool)0;
        return __cir_eh_ret;
      }
      _Bool cast1890 = (_Bool)r1889;
      _Bool u1891 = !cast1890;
      __retval1878 = u1891;
      _Bool t1892 = __retval1878;
      return t1892;
    }
  _Bool c1893 = 1;
  __retval1878 = c1893;
  _Bool t1894 = __retval1878;
  return t1894;
}

// function: _ZSt12__equal_aux1IPiS0_EbT_S1_T0_
_Bool bool_std____equal_aux1_int___int__(int* v1895, int* v1896, int* v1897) {
bb1898:
  int* __first11899;
  int* __last11900;
  int* __first21901;
  _Bool __retval1902;
  _Bool __simple1903;
  __first11899 = v1895;
  __last11900 = v1896;
  __first21901 = v1897;
  _Bool c1904 = 1;
  __simple1903 = c1904;
  int* t1905 = __first11899;
  int* t1906 = __last11900;
  int* t1907 = __first21901;
  _Bool r1908 = bool_std____equal_true___equal_int_(t1905, t1906, t1907);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval1902 = r1908;
  _Bool t1909 = __retval1902;
  return t1909;
}

// function: _ZSt12__equal_aux1IPiiRKiPS1_EN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT_EE7__valueEbE6__typeES6_S6_St15_Deque_iteratorIT0_T1_T2_E
_Bool __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(int* v1910, int* v1911, struct std___Deque_iterator_int_int___int___ v1912) {
bb1913:
  int* __first11914;
  int* __last11915;
  struct std___Deque_iterator_int_int___int___ __first21916;
  _Bool __retval1917;
  long __len1918;
  __first11914 = v1910;
  __last11915 = v1911;
  __first21916 = v1912;
  int* t1919 = __last11915;
  int* t1920 = __first11914;
  long diff1921 = t1919 - t1920;
  __len1918 = diff1921;
    while (1) {
      long t1922 = __len1918;
      long c1923 = 0;
      _Bool c1924 = ((t1922 > c1923)) ? 1 : 0;
      if (!c1924) break;
        long __clen1925;
        long ref_tmp01926;
        int* t1927 = __first21916._M_last;
        int* t1928 = __first21916._M_cur;
        long diff1929 = t1927 - t1928;
        ref_tmp01926 = diff1929;
        long* r1930 = long_const__std__min_long_(&__len1918, &ref_tmp01926);
        if (__cir_exc_active) {
          _Bool __cir_eh_ret = (_Bool)0;
          return __cir_eh_ret;
        }
        long t1931 = *r1930;
        __clen1925 = t1931;
          int* t1932 = __first11914;
          int* t1933 = __first11914;
          long t1934 = __clen1925;
          int* ptr1935 = &(t1933)[t1934];
          int* t1936 = __first21916._M_cur;
          _Bool r1937 = bool_std____equal_aux1_int___int__(t1932, ptr1935, t1936);
          if (__cir_exc_active) {
            _Bool __cir_eh_ret = (_Bool)0;
            return __cir_eh_ret;
          }
          _Bool u1938 = !r1937;
          if (u1938) {
            _Bool c1939 = 0;
            __retval1917 = c1939;
            _Bool t1940 = __retval1917;
            _Bool ret_val1941 = t1940;
            return ret_val1941;
          }
        long t1942 = __clen1925;
        int* t1943 = __first11914;
        int* ptr1944 = &(t1943)[t1942];
        __first11914 = ptr1944;
        long t1945 = __clen1925;
        long t1946 = __len1918;
        long b1947 = t1946 - t1945;
        __len1918 = b1947;
        long t1948 = __clen1925;
        struct std___Deque_iterator_int_int___int___* r1949 = std___Deque_iterator_int__int_const___int_const____operator__(&__first21916, t1948);
    }
  _Bool c1950 = 1;
  __retval1917 = c1950;
  _Bool t1951 = __retval1917;
  return t1951;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_E11_M_set_nodeEPPi
void std___Deque_iterator_int__int_const___int_const_____M_set_node(struct std___Deque_iterator_int_int___int___* v1952, int** v1953) {
bb1954:
  struct std___Deque_iterator_int_int___int___* this1955;
  int** __new_node1956;
  this1955 = v1952;
  __new_node1956 = v1953;
  struct std___Deque_iterator_int_int___int___* t1957 = this1955;
  int** t1958 = __new_node1956;
  t1957->_M_node = t1958;
  int** t1959 = __new_node1956;
  int* t1960 = *t1959;
  t1957->_M_first = t1960;
  int* t1961 = t1957->_M_first;
  unsigned long r1962 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
  long cast1963 = (long)r1962;
  int* ptr1964 = &(t1961)[cast1963];
  t1957->_M_last = ptr1964;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EpLEl
struct std___Deque_iterator_int_int___int___* std___Deque_iterator_int__int_const___int_const____operator__(struct std___Deque_iterator_int_int___int___* v1965, long v1966) {
bb1967:
  struct std___Deque_iterator_int_int___int___* this1968;
  long __n1969;
  struct std___Deque_iterator_int_int___int___* __retval1970;
  long __offset1971;
  this1968 = v1965;
  __n1969 = v1966;
  struct std___Deque_iterator_int_int___int___* t1972 = this1968;
  long t1973 = __n1969;
  int* t1974 = t1972->_M_cur;
  int* t1975 = t1972->_M_first;
  long diff1976 = t1974 - t1975;
  long b1977 = t1973 + diff1976;
  __offset1971 = b1977;
    long t1978 = __offset1971;
    long c1979 = 0;
    _Bool c1980 = ((t1978 >= c1979)) ? 1 : 0;
    _Bool ternary1981;
    if (c1980) {
      long t1982 = __offset1971;
      unsigned long r1983 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
      long cast1984 = (long)r1983;
      _Bool c1985 = ((t1982 < cast1984)) ? 1 : 0;
      ternary1981 = (_Bool)c1985;
    } else {
      _Bool c1986 = 0;
      ternary1981 = (_Bool)c1986;
    }
    if (ternary1981) {
      long t1987 = __n1969;
      int* t1988 = t1972->_M_cur;
      int* ptr1989 = &(t1988)[t1987];
      t1972->_M_cur = ptr1989;
    } else {
      long __node_offset1990;
      long t1991 = __offset1971;
      long c1992 = 0;
      _Bool c1993 = ((t1991 > c1992)) ? 1 : 0;
      long ternary1994;
      if (c1993) {
        long t1995 = __offset1971;
        unsigned long r1996 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
        long cast1997 = (long)r1996;
        long b1998 = t1995 / cast1997;
        ternary1994 = (long)b1998;
      } else {
        long t1999 = __offset1971;
        long u2000 = -t1999;
        long c2001 = 1;
        long b2002 = u2000 - c2001;
        unsigned long cast2003 = (unsigned long)b2002;
        unsigned long r2004 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
        unsigned long b2005 = cast2003 / r2004;
        long cast2006 = (long)b2005;
        long u2007 = -cast2006;
        long c2008 = 1;
        long b2009 = u2007 - c2008;
        ternary1994 = (long)b2009;
      }
      __node_offset1990 = ternary1994;
      int** t2010 = t1972->_M_node;
      long t2011 = __node_offset1990;
      int** ptr2012 = &(t2010)[t2011];
      std___Deque_iterator_int__int_const___int_const_____M_set_node(t1972, ptr2012);
      int* t2013 = t1972->_M_first;
      long t2014 = __offset1971;
      long t2015 = __node_offset1990;
      unsigned long r2016 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
      long cast2017 = (long)r2016;
      long b2018 = t2015 * cast2017;
      long b2019 = t2014 - b2018;
      int* ptr2020 = &(t2013)[b2019];
      t1972->_M_cur = ptr2020;
    }
  __retval1970 = t1972;
  struct std___Deque_iterator_int_int___int___* t2021 = __retval1970;
  return t2021;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_E14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int_const___int_const_____S_buffer_size() {
bb2022:
  unsigned long __retval2023;
  unsigned long c2024 = 4;
  unsigned long r2025 = std____deque_buf_size(c2024);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval2023 = r2025;
  unsigned long t2026 = __retval2023;
  return t2026;
}

// function: _ZSt11__equal_ditIiRKiPS0_St15_Deque_iteratorIiS1_S2_EEbRKS3_IT_T0_T1_ESA_T2_
_Bool bool_std____equal_dit_int__int_const___int_const___std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___* v2027, struct std___Deque_iterator_int_int___int___* v2028, struct std___Deque_iterator_int_int___int___ v2029) {
bb2030:
  struct std___Deque_iterator_int_int___int___* __first12031;
  struct std___Deque_iterator_int_int___int___* __last12032;
  struct std___Deque_iterator_int_int___int___ __first22033;
  _Bool __retval2034;
  struct std___Deque_iterator_int_int___int___ agg_tmp32035;
  __first12031 = v2027;
  __last12032 = v2028;
  __first22033 = v2029;
    struct std___Deque_iterator_int_int___int___* t2036 = __first12031;
    int** t2037 = t2036->_M_node;
    struct std___Deque_iterator_int_int___int___* t2038 = __last12032;
    int** t2039 = t2038->_M_node;
    _Bool c2040 = ((t2037 != t2039)) ? 1 : 0;
    if (c2040) {
      struct std___Deque_iterator_int_int___int___ agg_tmp22041;
        struct std___Deque_iterator_int_int___int___ agg_tmp02042;
        struct std___Deque_iterator_int_int___int___* t2043 = __first12031;
        int* t2044 = t2043->_M_cur;
        struct std___Deque_iterator_int_int___int___* t2045 = __first12031;
        int* t2046 = t2045->_M_last;
        std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp02042, &__first22033);
        struct std___Deque_iterator_int_int___int___ t2047 = agg_tmp02042;
        _Bool r2048 = __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(t2044, t2046, t2047);
        if (__cir_exc_active) {
          _Bool __cir_eh_ret = (_Bool)0;
          return __cir_eh_ret;
        }
        _Bool u2049 = !r2048;
        if (u2049) {
          _Bool c2050 = 0;
          __retval2034 = c2050;
          _Bool t2051 = __retval2034;
          return t2051;
        }
      struct std___Deque_iterator_int_int___int___* t2052 = __first12031;
      int* t2053 = t2052->_M_last;
      struct std___Deque_iterator_int_int___int___* t2054 = __first12031;
      int* t2055 = t2054->_M_cur;
      long diff2056 = t2053 - t2055;
      struct std___Deque_iterator_int_int___int___* r2057 = std___Deque_iterator_int__int_const___int_const____operator__(&__first22033, diff2056);
        int** __node2058;
        struct std___Deque_iterator_int_int___int___* t2059 = __first12031;
        int** t2060 = t2059->_M_node;
        int c2061 = 1;
        int** ptr2062 = &(t2060)[c2061];
        __node2058 = ptr2062;
        while (1) {
          int** t2064 = __node2058;
          struct std___Deque_iterator_int_int___int___* t2065 = __last12032;
          int** t2066 = t2065->_M_node;
          _Bool c2067 = ((t2064 != t2066)) ? 1 : 0;
          if (!c2067) break;
            struct std___Deque_iterator_int_int___int___ agg_tmp12068;
            int** t2069 = __node2058;
            int* t2070 = *t2069;
            int** t2071 = __node2058;
            int* t2072 = *t2071;
            unsigned long r2073 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
            int* ptr2074 = &(t2072)[r2073];
            std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp12068, &__first22033);
            struct std___Deque_iterator_int_int___int___ t2075 = agg_tmp12068;
            _Bool r2076 = __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(t2070, ptr2074, t2075);
            if (__cir_exc_active) {
              _Bool __cir_eh_ret = (_Bool)0;
              return __cir_eh_ret;
            }
            _Bool u2077 = !r2076;
            if (u2077) {
              _Bool c2078 = 0;
              __retval2034 = c2078;
              _Bool t2079 = __retval2034;
              _Bool ret_val2080 = t2079;
              return ret_val2080;
            }
        for_step2063: ;
          unsigned long r2081 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
          long cast2082 = (long)r2081;
          struct std___Deque_iterator_int_int___int___* r2083 = std___Deque_iterator_int__int_const___int_const____operator__(&__first22033, cast2082);
          int** t2084 = __node2058;
          int c2085 = 1;
          int** ptr2086 = &(t2084)[c2085];
          __node2058 = ptr2086;
        }
      struct std___Deque_iterator_int_int___int___* t2087 = __last12032;
      int* t2088 = t2087->_M_first;
      struct std___Deque_iterator_int_int___int___* t2089 = __last12032;
      int* t2090 = t2089->_M_cur;
      std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp22041, &__first22033);
      struct std___Deque_iterator_int_int___int___ t2091 = agg_tmp22041;
      _Bool r2092 = __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(t2088, t2090, t2091);
      if (__cir_exc_active) {
        _Bool __cir_eh_ret = (_Bool)0;
        return __cir_eh_ret;
      }
      __retval2034 = r2092;
      _Bool t2093 = __retval2034;
      return t2093;
    }
  struct std___Deque_iterator_int_int___int___* t2094 = __first12031;
  int* t2095 = t2094->_M_cur;
  struct std___Deque_iterator_int_int___int___* t2096 = __last12032;
  int* t2097 = t2096->_M_cur;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp32035, &__first22033);
  struct std___Deque_iterator_int_int___int___ t2098 = agg_tmp32035;
  _Bool r2099 = __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(t2095, t2097, t2098);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval2034 = r2099;
  _Bool t2100 = __retval2034;
  return t2100;
}

// function: _ZSt12__equal_aux1IiRKiPS0_iS1_S2_EbSt15_Deque_iteratorIT_T0_T1_ES7_S3_IT2_T3_T4_E
_Bool bool_std____equal_aux1_int__int_const___int_const___int__int_const___int_const__(struct std___Deque_iterator_int_int___int___ v2101, struct std___Deque_iterator_int_int___int___ v2102, struct std___Deque_iterator_int_int___int___ v2103) {
bb2104:
  struct std___Deque_iterator_int_int___int___ __first12105;
  struct std___Deque_iterator_int_int___int___ __last12106;
  struct std___Deque_iterator_int_int___int___ __first22107;
  _Bool __retval2108;
  struct std___Deque_iterator_int_int___int___ agg_tmp02109;
  __first12105 = v2101;
  __last12106 = v2102;
  __first22107 = v2103;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp02109, &__first22107);
  struct std___Deque_iterator_int_int___int___ t2110 = agg_tmp02109;
  _Bool r2111 = bool_std____equal_dit_int__int_const___int_const___std___Deque_iterator_int__int_const___int_const____(&__first12105, &__last12106, t2110);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval2108 = r2111;
  _Bool t2112 = __retval2108;
  return t2112;
}

// function: _ZSt12__niter_baseISt15_Deque_iteratorIiRKiPS1_EET_S5_
struct std___Deque_iterator_int_int___int___ std___Deque_iterator_int__int_const___int_const___std____niter_base_std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ v2113) {
bb2114:
  struct std___Deque_iterator_int_int___int___ __it2115;
  struct std___Deque_iterator_int_int___int___ __retval2116;
  __it2115 = v2113;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&__retval2116, &__it2115);
  struct std___Deque_iterator_int_int___int___ t2117 = __retval2116;
  return t2117;
}

// function: _ZSt11__equal_auxISt15_Deque_iteratorIiRKiPS1_ES4_EbT_S5_T0_
_Bool bool_std____equal_aux_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ v2118, struct std___Deque_iterator_int_int___int___ v2119, struct std___Deque_iterator_int_int___int___ v2120) {
bb2121:
  struct std___Deque_iterator_int_int___int___ __first12122;
  struct std___Deque_iterator_int_int___int___ __last12123;
  struct std___Deque_iterator_int_int___int___ __first22124;
  _Bool __retval2125;
  struct std___Deque_iterator_int_int___int___ agg_tmp02126;
  struct std___Deque_iterator_int_int___int___ agg_tmp12127;
  struct std___Deque_iterator_int_int___int___ agg_tmp22128;
  struct std___Deque_iterator_int_int___int___ agg_tmp32129;
  struct std___Deque_iterator_int_int___int___ agg_tmp42130;
  struct std___Deque_iterator_int_int___int___ agg_tmp52131;
  __first12122 = v2118;
  __last12123 = v2119;
  __first22124 = v2120;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp12127, &__first12122);
  struct std___Deque_iterator_int_int___int___ t2132 = agg_tmp12127;
  struct std___Deque_iterator_int_int___int___ r2133 = std___Deque_iterator_int__int_const___int_const___std____niter_base_std___Deque_iterator_int__int_const___int_const____(t2132);
  agg_tmp02126 = r2133;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp32129, &__last12123);
  struct std___Deque_iterator_int_int___int___ t2134 = agg_tmp32129;
  struct std___Deque_iterator_int_int___int___ r2135 = std___Deque_iterator_int__int_const___int_const___std____niter_base_std___Deque_iterator_int__int_const___int_const____(t2134);
  agg_tmp22128 = r2135;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp52131, &__first22124);
  struct std___Deque_iterator_int_int___int___ t2136 = agg_tmp52131;
  struct std___Deque_iterator_int_int___int___ r2137 = std___Deque_iterator_int__int_const___int_const___std____niter_base_std___Deque_iterator_int__int_const___int_const____(t2136);
  agg_tmp42130 = r2137;
  struct std___Deque_iterator_int_int___int___ t2138 = agg_tmp02126;
  struct std___Deque_iterator_int_int___int___ t2139 = agg_tmp22128;
  struct std___Deque_iterator_int_int___int___ t2140 = agg_tmp42130;
  _Bool r2141 = bool_std____equal_aux1_int__int_const___int_const___int__int_const___int_const__(t2138, t2139, t2140);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval2125 = r2141;
  _Bool t2142 = __retval2125;
  return t2142;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EC2ERKS3_
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator(struct std___Deque_iterator_int_int___int___* v2143, struct std___Deque_iterator_int_int___int___* v2144) {
bb2145:
  struct std___Deque_iterator_int_int___int___* this2146;
  struct std___Deque_iterator_int_int___int___* __x2147;
  this2146 = v2143;
  __x2147 = v2144;
  struct std___Deque_iterator_int_int___int___* t2148 = this2146;
  struct std___Deque_iterator_int_int___int___* t2149 = __x2147;
  int* t2150 = t2149->_M_cur;
  t2148->_M_cur = t2150;
  struct std___Deque_iterator_int_int___int___* t2151 = __x2147;
  int* t2152 = t2151->_M_first;
  t2148->_M_first = t2152;
  struct std___Deque_iterator_int_int___int___* t2153 = __x2147;
  int* t2154 = t2153->_M_last;
  t2148->_M_last = t2154;
  struct std___Deque_iterator_int_int___int___* t2155 = __x2147;
  int** t2156 = t2155->_M_node;
  t2148->_M_node = t2156;
  return;
}

// function: _ZSt5equalISt15_Deque_iteratorIiRKiPS1_ES4_EbT_S5_T0_
_Bool bool_std__equal_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ v2157, struct std___Deque_iterator_int_int___int___ v2158, struct std___Deque_iterator_int_int___int___ v2159) {
bb2160:
  struct std___Deque_iterator_int_int___int___ __first12161;
  struct std___Deque_iterator_int_int___int___ __last12162;
  struct std___Deque_iterator_int_int___int___ __first22163;
  _Bool __retval2164;
  struct std___Deque_iterator_int_int___int___ agg_tmp02165;
  struct std___Deque_iterator_int_int___int___ agg_tmp12166;
  struct std___Deque_iterator_int_int___int___ agg_tmp22167;
  __first12161 = v2157;
  __last12162 = v2158;
  __first22163 = v2159;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp02165, &__first12161);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp12166, &__last12162);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp22167, &__first22163);
  struct std___Deque_iterator_int_int___int___ t2168 = agg_tmp02165;
  struct std___Deque_iterator_int_int___int___ t2169 = agg_tmp12166;
  struct std___Deque_iterator_int_int___int___ t2170 = agg_tmp22167;
  _Bool r2171 = bool_std____equal_aux_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(t2168, t2169, t2170);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval2164 = r2171;
  _Bool t2172 = __retval2164;
  return t2172;
}

// function: _ZNKSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____begin___const(struct std__deque_int__std__allocator_int__* v2173) {
bb2174:
  struct std__deque_int__std__allocator_int__* this2175;
  struct std___Deque_iterator_int_int___int___ __retval2176;
  this2175 = v2173;
  struct std__deque_int__std__allocator_int__* t2177 = this2175;
  struct std___Deque_base_int__std__allocator_int__* base2178 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2177 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2179 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2178->_M_impl) + 0);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(&__retval2176, &base2179->_M_start);
  struct std___Deque_iterator_int_int___int___ t2180 = __retval2176;
  return t2180;
}

// function: _ZNKSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____end___const(struct std__deque_int__std__allocator_int__* v2181) {
bb2182:
  struct std__deque_int__std__allocator_int__* this2183;
  struct std___Deque_iterator_int_int___int___ __retval2184;
  this2183 = v2181;
  struct std__deque_int__std__allocator_int__* t2185 = this2183;
  struct std___Deque_base_int__std__allocator_int__* base2186 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2185 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2187 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2186->_M_impl) + 0);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(&__retval2184, &base2187->_M_finish);
  struct std___Deque_iterator_int_int___int___ t2188 = __retval2184;
  return t2188;
}

// function: _ZSteqIiSaIiEEbRKSt5dequeIT_T0_ES6_
_Bool bool_std__operator___int__std__allocator_int___(struct std__deque_int__std__allocator_int__* v2189, struct std__deque_int__std__allocator_int__* v2190) {
bb2191:
  struct std__deque_int__std__allocator_int__* __x2192;
  struct std__deque_int__std__allocator_int__* __y2193;
  _Bool __retval2194;
  __x2192 = v2189;
  __y2193 = v2190;
  struct std__deque_int__std__allocator_int__* t2195 = __x2192;
  unsigned long r2196 = std__deque_int__std__allocator_int_____size___const(t2195);
  struct std__deque_int__std__allocator_int__* t2197 = __y2193;
  unsigned long r2198 = std__deque_int__std__allocator_int_____size___const(t2197);
  _Bool c2199 = ((r2196 == r2198)) ? 1 : 0;
  _Bool ternary2200;
  if (c2199) {
    struct std___Deque_iterator_int_int___int___ agg_tmp02201;
    struct std___Deque_iterator_int_int___int___ agg_tmp12202;
    struct std___Deque_iterator_int_int___int___ agg_tmp22203;
    struct std__deque_int__std__allocator_int__* t2204 = __x2192;
    struct std___Deque_iterator_int_int___int___ r2205 = std__deque_int__std__allocator_int_____begin___const(t2204);
    agg_tmp02201 = r2205;
    struct std__deque_int__std__allocator_int__* t2206 = __x2192;
    struct std___Deque_iterator_int_int___int___ r2207 = std__deque_int__std__allocator_int_____end___const(t2206);
    agg_tmp12202 = r2207;
    struct std__deque_int__std__allocator_int__* t2208 = __y2193;
    struct std___Deque_iterator_int_int___int___ r2209 = std__deque_int__std__allocator_int_____begin___const(t2208);
    agg_tmp22203 = r2209;
    struct std___Deque_iterator_int_int___int___ t2210 = agg_tmp02201;
    struct std___Deque_iterator_int_int___int___ t2211 = agg_tmp12202;
    struct std___Deque_iterator_int_int___int___ t2212 = agg_tmp22203;
    _Bool r2213 = bool_std__equal_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(t2210, t2211, t2212);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    ternary2200 = (_Bool)r2213;
  } else {
    _Bool c2214 = 0;
    ternary2200 = (_Bool)c2214;
  }
  __retval2194 = ternary2200;
  _Bool t2215 = __retval2194;
  return t2215;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v2216) {
bb2217:
  struct std___Deque_iterator_int__int____int___* this2218;
  int* __retval2219;
  this2218 = v2216;
  struct std___Deque_iterator_int__int____int___* t2220 = this2218;
  int* t2221 = t2220->_M_cur;
  __retval2219 = t2221;
  int* t2222 = __retval2219;
  return t2222;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v2223, int v2224) {
bb2225:
  int __a2226;
  int __b2227;
  int __retval2228;
  __a2226 = v2223;
  __b2227 = v2224;
  int t2229 = __a2226;
  int t2230 = __b2227;
  int b2231 = t2229 | t2230;
  __retval2228 = b2231;
  int t2232 = __retval2228;
  return t2232;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v2233) {
bb2234:
  struct std__basic_ios_char__std__char_traits_char__* this2235;
  int __retval2236;
  this2235 = v2233;
  struct std__basic_ios_char__std__char_traits_char__* t2237 = this2235;
  struct std__ios_base* base2238 = (struct std__ios_base*)((char *)t2237 + 0);
  int t2239 = base2238->_M_streambuf_state;
  __retval2236 = t2239;
  int t2240 = __retval2236;
  return t2240;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v2241, int v2242) {
bb2243:
  struct std__basic_ios_char__std__char_traits_char__* this2244;
  int __state2245;
  this2244 = v2241;
  __state2245 = v2242;
  struct std__basic_ios_char__std__char_traits_char__* t2246 = this2244;
  int r2247 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t2246);
  if (__cir_exc_active) {
    return;
  }
  int t2248 = __state2245;
  int r2249 = std__operator__2(r2247, t2248);
  std__basic_ios_char__std__char_traits_char_____clear(t2246, r2249);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v2250, char* v2251) {
bb2252:
  char* __c12253;
  char* __c22254;
  _Bool __retval2255;
  __c12253 = v2250;
  __c22254 = v2251;
  char* t2256 = __c12253;
  char t2257 = *t2256;
  int cast2258 = (int)t2257;
  char* t2259 = __c22254;
  char t2260 = *t2259;
  int cast2261 = (int)t2260;
  _Bool c2262 = ((cast2258 == cast2261)) ? 1 : 0;
  __retval2255 = c2262;
  _Bool t2263 = __retval2255;
  return t2263;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v2264) {
bb2265:
  char* __p2266;
  unsigned long __retval2267;
  unsigned long __i2268;
  __p2266 = v2264;
  unsigned long c2269 = 0;
  __i2268 = c2269;
    char ref_tmp02270;
    while (1) {
      unsigned long t2271 = __i2268;
      char* t2272 = __p2266;
      char* ptr2273 = &(t2272)[t2271];
      char c2274 = 0;
      ref_tmp02270 = c2274;
      _Bool r2275 = __gnu_cxx__char_traits_char___eq(ptr2273, &ref_tmp02270);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u2276 = !r2275;
      if (!u2276) break;
      unsigned long t2277 = __i2268;
      unsigned long u2278 = t2277 + 1;
      __i2268 = u2278;
    }
  unsigned long t2279 = __i2268;
  __retval2267 = t2279;
  unsigned long t2280 = __retval2267;
  return t2280;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v2281) {
bb2282:
  char* __s2283;
  unsigned long __retval2284;
  __s2283 = v2281;
    _Bool r2285 = std____is_constant_evaluated();
    if (r2285) {
      char* t2286 = __s2283;
      unsigned long r2287 = __gnu_cxx__char_traits_char___length(t2286);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval2284 = r2287;
      unsigned long t2288 = __retval2284;
      return t2288;
    }
  char* t2289 = __s2283;
  unsigned long r2290 = strlen(t2289);
  __retval2284 = r2290;
  unsigned long t2291 = __retval2284;
  return t2291;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2292, char* v2293) {
bb2294:
  struct std__basic_ostream_char__std__char_traits_char__* __out2295;
  char* __s2296;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2297;
  __out2295 = v2292;
  __s2296 = v2293;
    char* t2298 = __s2296;
    _Bool cast2299 = (_Bool)t2298;
    _Bool u2300 = !cast2299;
    if (u2300) {
      struct std__basic_ostream_char__std__char_traits_char__* t2301 = __out2295;
      void** v2302 = (void**)t2301;
      void* v2303 = *((void**)v2302);
      unsigned char* cast2304 = (unsigned char*)v2303;
      long c2305 = -24;
      unsigned char* ptr2306 = &(cast2304)[c2305];
      long* cast2307 = (long*)ptr2306;
      long t2308 = *cast2307;
      unsigned char* cast2309 = (unsigned char*)t2301;
      unsigned char* ptr2310 = &(cast2309)[t2308];
      struct std__basic_ostream_char__std__char_traits_char__* cast2311 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr2310;
      struct std__basic_ios_char__std__char_traits_char__* cast2312 = (struct std__basic_ios_char__std__char_traits_char__*)cast2311;
      int t2313 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast2312, t2313);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t2314 = __out2295;
      char* t2315 = __s2296;
      char* t2316 = __s2296;
      unsigned long r2317 = std__char_traits_char___length(t2316);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast2318 = (long)r2317;
      struct std__basic_ostream_char__std__char_traits_char__* r2319 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t2314, t2315, cast2318);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t2320 = __out2295;
  __retval2297 = t2320;
  struct std__basic_ostream_char__std__char_traits_char__* t2321 = __retval2297;
  return t2321;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v2322) {
bb2323:
  struct std__deque_int__std__allocator_int__* this2324;
  struct std___Deque_iterator_int__int____int___ __retval2325;
  this2324 = v2322;
  struct std__deque_int__std__allocator_int__* t2326 = this2324;
  struct std___Deque_base_int__std__allocator_int__* base2327 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2326 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2328 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2327->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2325, &base2328->_M_start);
  struct std___Deque_iterator_int__int____int___ t2329 = __retval2325;
  return t2329;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEaSERKS2_
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* v2330, struct std___Deque_iterator_int__int____int___* v2331) {
bb2332:
  struct std___Deque_iterator_int__int____int___* this2333;
  struct std___Deque_iterator_int__int____int___* unnamed2334;
  struct std___Deque_iterator_int__int____int___* __retval2335;
  this2333 = v2330;
  unnamed2334 = v2331;
  struct std___Deque_iterator_int__int____int___* t2336 = this2333;
  struct std___Deque_iterator_int__int____int___* t2337 = unnamed2334;
  int* t2338 = t2337->_M_cur;
  t2336->_M_cur = t2338;
  struct std___Deque_iterator_int__int____int___* t2339 = unnamed2334;
  int* t2340 = t2339->_M_first;
  t2336->_M_first = t2340;
  struct std___Deque_iterator_int__int____int___* t2341 = unnamed2334;
  int* t2342 = t2341->_M_last;
  t2336->_M_last = t2342;
  struct std___Deque_iterator_int__int____int___* t2343 = unnamed2334;
  int** t2344 = t2343->_M_node;
  t2336->_M_node = t2344;
  __retval2335 = t2336;
  struct std___Deque_iterator_int__int____int___* t2345 = __retval2335;
  return t2345;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v2346, struct std___Deque_iterator_int__int____int___* v2347) {
bb2348:
  struct std___Deque_iterator_int__int____int___* __x2349;
  struct std___Deque_iterator_int__int____int___* __y2350;
  _Bool __retval2351;
  __x2349 = v2346;
  __y2350 = v2347;
  struct std___Deque_iterator_int__int____int___* t2352 = __x2349;
  int* t2353 = t2352->_M_cur;
  struct std___Deque_iterator_int__int____int___* t2354 = __y2350;
  int* t2355 = t2354->_M_cur;
  _Bool c2356 = ((t2353 == t2355)) ? 1 : 0;
  __retval2351 = c2356;
  _Bool t2357 = __retval2351;
  return t2357;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEi
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int____operator___4(struct std___Deque_iterator_int__int____int___* v2358, int v2359) {
bb2360:
  struct std___Deque_iterator_int__int____int___* this2361;
  int unnamed2362;
  struct std___Deque_iterator_int__int____int___ __retval2363;
  this2361 = v2358;
  unnamed2362 = v2359;
  struct std___Deque_iterator_int__int____int___* t2364 = this2361;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2363, t2364);
  struct std___Deque_iterator_int__int____int___* r2365 = std___Deque_iterator_int__int___int____operator___5(t2364);
  struct std___Deque_iterator_int__int____int___ t2366 = __retval2363;
  return t2366;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v2367, void* v2368) {
bb2369:
  struct std__basic_ostream_char__std__char_traits_char__* this2370;
  void* __pf2371;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2372;
  this2370 = v2367;
  __pf2371 = v2368;
  struct std__basic_ostream_char__std__char_traits_char__* t2373 = this2370;
  void* t2374 = __pf2371;
  struct std__basic_ostream_char__std__char_traits_char__* r2375 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t2374)(t2373);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2372 = r2375;
  struct std__basic_ostream_char__std__char_traits_char__* t2376 = __retval2372;
  return t2376;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2377) {
bb2378:
  struct std__basic_ostream_char__std__char_traits_char__* __os2379;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2380;
  __os2379 = v2377;
  struct std__basic_ostream_char__std__char_traits_char__* t2381 = __os2379;
  struct std__basic_ostream_char__std__char_traits_char__* r2382 = std__ostream__flush(t2381);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2380 = r2382;
  struct std__basic_ostream_char__std__char_traits_char__* t2383 = __retval2380;
  return t2383;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v2384) {
bb2385:
  struct std__ctype_char_* __f2386;
  struct std__ctype_char_* __retval2387;
  __f2386 = v2384;
    struct std__ctype_char_* t2388 = __f2386;
    _Bool cast2389 = (_Bool)t2388;
    _Bool u2390 = !cast2389;
    if (u2390) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t2391 = __f2386;
  __retval2387 = t2391;
  struct std__ctype_char_* t2392 = __retval2387;
  return t2392;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v2393, char v2394) {
bb2395:
  struct std__ctype_char_* this2396;
  char __c2397;
  char __retval2398;
  this2396 = v2393;
  __c2397 = v2394;
  struct std__ctype_char_* t2399 = this2396;
    char t2400 = t2399->_M_widen_ok;
    _Bool cast2401 = (_Bool)t2400;
    if (cast2401) {
      char t2402 = __c2397;
      unsigned char cast2403 = (unsigned char)t2402;
      unsigned long cast2404 = (unsigned long)cast2403;
      char t2405 = t2399->_M_widen[cast2404];
      __retval2398 = t2405;
      char t2406 = __retval2398;
      return t2406;
    }
  std__ctype_char____M_widen_init___const(t2399);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t2407 = __c2397;
  void** v2408 = (void**)t2399;
  void* v2409 = *((void**)v2408);
  char vcall2412 = (char)__VERIFIER_virtual_call_char_char(t2399, 6, t2407);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval2398 = vcall2412;
  char t2413 = __retval2398;
  return t2413;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v2414, char v2415) {
bb2416:
  struct std__basic_ios_char__std__char_traits_char__* this2417;
  char __c2418;
  char __retval2419;
  this2417 = v2414;
  __c2418 = v2415;
  struct std__basic_ios_char__std__char_traits_char__* t2420 = this2417;
  struct std__ctype_char_* t2421 = t2420->_M_ctype;
  struct std__ctype_char_* r2422 = std__ctype_char__const__std____check_facet_std__ctype_char___(t2421);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t2423 = __c2418;
  char r2424 = std__ctype_char___widen_char__const(r2422, t2423);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval2419 = r2424;
  char t2425 = __retval2419;
  return t2425;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2426) {
bb2427:
  struct std__basic_ostream_char__std__char_traits_char__* __os2428;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2429;
  __os2428 = v2426;
  struct std__basic_ostream_char__std__char_traits_char__* t2430 = __os2428;
  struct std__basic_ostream_char__std__char_traits_char__* t2431 = __os2428;
  void** v2432 = (void**)t2431;
  void* v2433 = *((void**)v2432);
  unsigned char* cast2434 = (unsigned char*)v2433;
  long c2435 = -24;
  unsigned char* ptr2436 = &(cast2434)[c2435];
  long* cast2437 = (long*)ptr2436;
  long t2438 = *cast2437;
  unsigned char* cast2439 = (unsigned char*)t2431;
  unsigned char* ptr2440 = &(cast2439)[t2438];
  struct std__basic_ostream_char__std__char_traits_char__* cast2441 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr2440;
  struct std__basic_ios_char__std__char_traits_char__* cast2442 = (struct std__basic_ios_char__std__char_traits_char__*)cast2441;
  char c2443 = 10;
  char r2444 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast2442, c2443);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r2445 = std__ostream__put(t2430, r2444);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r2446 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r2445);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2429 = r2446;
  struct std__basic_ostream_char__std__char_traits_char__* t2447 = __retval2429;
  return t2447;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v2448) {
bb2449:
  struct std__deque_int__std__allocator_int__* this2450;
  struct std___Deque_iterator_int__int____int___ agg_tmp02451;
  struct std___Deque_iterator_int__int____int___ agg_tmp12452;
  this2450 = v2448;
  struct std__deque_int__std__allocator_int__* t2453 = this2450;
    struct std___Deque_iterator_int__int____int___ r2454 = std__deque_int__std__allocator_int_____begin(t2453);
    agg_tmp02451 = r2454;
    struct std___Deque_iterator_int__int____int___ r2455 = std__deque_int__std__allocator_int_____end(t2453);
    agg_tmp12452 = r2455;
    struct std___Deque_base_int__std__allocator_int__* base2456 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2453 + 0);
    struct std__allocator_int_* r2457 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2456);
    struct std___Deque_iterator_int__int____int___ t2458 = agg_tmp02451;
    struct std___Deque_iterator_int__int____int___ t2459 = agg_tmp12452;
    std__deque_int__std__allocator_int______M_destroy_data(t2453, t2458, t2459, r2457);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base2460 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2453 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base2460);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base2461 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2453 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base2461);
  }
  return;
}

// function: main
int main() {
bb2462:
  int __retval2463;
  struct std__deque_int__std__allocator_int__ mydeque12464;
  struct std__deque_int__std__allocator_int__ mydeque22465;
  struct std___Deque_iterator_int__int____int___ it2466;
  struct std___Deque_iterator_int__int____int___ ref_tmp12467;
  struct std___Deque_iterator_int__int____int___ ref_tmp22468;
  int c2469 = 0;
  __retval2463 = c2469;
  std__deque_int__std__allocator_int_____deque(&mydeque12464);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std__deque_int__std__allocator_int_____deque(&mydeque22465);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque12464);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      std___Deque_iterator_int__int___int_____Deque_iterator_3(&it2466);
        int i2470;
        struct std___Deque_iterator_int_int___int___ agg_tmp02471;
        struct std___Deque_iterator_int__int____int___ ref_tmp02472;
        struct std___Deque_iterator_int__int____int___ agg_tmp12473;
        int c2474 = 1;
        i2470 = c2474;
        while (1) {
          int t2476 = i2470;
          int c2477 = 5;
          _Bool c2478 = ((t2476 <= c2477)) ? 1 : 0;
          if (!c2478) break;
          struct std___Deque_iterator_int__int____int___ r2479 = std__deque_int__std__allocator_int_____end(&mydeque12464);
          ref_tmp02472 = r2479;
          std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(&agg_tmp02471, &ref_tmp02472);
          struct std___Deque_iterator_int_int___int___ t2480 = agg_tmp02471;
          struct std___Deque_iterator_int__int____int___ r2481 = std__deque_int__std__allocator_int_____insert(&mydeque12464, t2480, &i2470);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque22465);
            }
            {
              std__deque_int__std__allocator_int______deque(&mydeque12464);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          agg_tmp12473 = r2481;
        for_step2475: ;
          int t2482 = i2470;
          int u2483 = t2482 + 1;
          i2470 = u2483;
        }
        int i2484;
        int c2485 = 1;
        i2484 = c2485;
        while (1) {
          int t2487 = i2484;
          int c2488 = 5;
          _Bool c2489 = ((t2487 <= c2488)) ? 1 : 0;
          if (!c2489) break;
          std__deque_int__std__allocator_int_____push_back_2(&mydeque22465, &i2484);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque22465);
            }
            {
              std__deque_int__std__allocator_int______deque(&mydeque12464);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        for_step2486: ;
          int t2490 = i2484;
          int u2491 = t2490 + 1;
          i2484 = u2491;
        }
      _Bool r2492 = bool_std__operator___int__std__allocator_int___(&mydeque12464, &mydeque22465);
      if (__cir_exc_active) {
        {
          std__deque_int__std__allocator_int______deque(&mydeque22465);
        }
        {
          std__deque_int__std__allocator_int______deque(&mydeque12464);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r2492) {
      } else {
        char* cast2493 = (char*)&(_str);
        char* c2494 = _str_1;
        unsigned int c2495 = 23;
        char* cast2496 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast2493, c2494, c2495, cast2496);
      }
      struct std___Deque_iterator_int__int____int___ r2497 = std__deque_int__std__allocator_int_____end(&mydeque12464);
      ref_tmp12467 = r2497;
      int* r2498 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp12467);
      int t2499 = *r2498;
      int c2500 = 0;
      _Bool c2501 = ((t2499 == c2500)) ? 1 : 0;
      if (c2501) {
      } else {
        char* cast2502 = (char*)&(_str_2);
        char* c2503 = _str_1;
        unsigned int c2504 = 24;
        char* cast2505 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast2502, c2503, c2504, cast2505);
      }
      char* cast2506 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r2507 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2506);
      if (__cir_exc_active) {
        {
          std__deque_int__std__allocator_int______deque(&mydeque22465);
        }
        {
          std__deque_int__std__allocator_int______deque(&mydeque12464);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std___Deque_iterator_int__int____int___ r2508 = std__deque_int__std__allocator_int_____begin(&mydeque12464);
      ref_tmp22468 = r2508;
      struct std___Deque_iterator_int__int____int___* r2509 = std___Deque_iterator_int__int___int____operator_(&it2466, &ref_tmp22468);
      int* r2510 = std___Deque_iterator_int__int___int____operator____const(&it2466);
      int t2511 = *r2510;
      int c2512 = 1;
      _Bool c2513 = ((t2511 == c2512)) ? 1 : 0;
      if (c2513) {
      } else {
        char* cast2514 = (char*)&(_str_4);
        char* c2515 = _str_1;
        unsigned int c2516 = 28;
        char* cast2517 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast2514, c2515, c2516, cast2517);
      }
        struct std___Deque_iterator_int__int____int___ ref_tmp32518;
        struct std___Deque_iterator_int__int____int___ ref_tmp42519;
        while (1) {
          struct std___Deque_iterator_int__int____int___ r2520 = std__deque_int__std__allocator_int_____end(&mydeque12464);
          ref_tmp32518 = r2520;
          _Bool r2521 = std__operator__(&it2466, &ref_tmp32518);
          _Bool u2522 = !r2521;
          if (!u2522) break;
          char* cast2523 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r2524 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2523);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque22465);
            }
            {
              std__deque_int__std__allocator_int______deque(&mydeque12464);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int c2525 = 0;
          struct std___Deque_iterator_int__int____int___ r2526 = std___Deque_iterator_int__int___int____operator___4(&it2466, c2525);
          ref_tmp42519 = r2526;
          int* r2527 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp42519);
          int t2528 = *r2527;
          struct std__basic_ostream_char__std__char_traits_char__* r2529 = std__ostream__operator__(r2524, t2528);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque22465);
            }
            {
              std__deque_int__std__allocator_int______deque(&mydeque12464);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        }
      struct std__basic_ostream_char__std__char_traits_char__* r2530 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        {
          std__deque_int__std__allocator_int______deque(&mydeque22465);
        }
        {
          std__deque_int__std__allocator_int______deque(&mydeque12464);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c2531 = 0;
      __retval2463 = c2531;
      int t2532 = __retval2463;
      int ret_val2533 = t2532;
      {
        std__deque_int__std__allocator_int______deque(&mydeque22465);
      }
      {
        std__deque_int__std__allocator_int______deque(&mydeque12464);
      }
      return ret_val2533;
  int t2534 = __retval2463;
  return t2534;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v2535) {
bb2536:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this2537;
  this2537 = v2535;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t2538 = this2537;
  struct std__allocator_int_* base2539 = (struct std__allocator_int_*)((char *)t2538 + 0);
  std__allocator_int___allocator(base2539);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2540 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t2538 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base2540);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v2541) {
bb2542:
  unsigned long __size2543;
  unsigned long __retval2544;
  __size2543 = v2541;
  unsigned long t2545 = __size2543;
  unsigned long c2546 = 512;
  _Bool c2547 = ((t2545 < c2546)) ? 1 : 0;
  unsigned long ternary2548;
  if (c2547) {
    unsigned long c2549 = 512;
    unsigned long t2550 = __size2543;
    unsigned long b2551 = c2549 / t2550;
    ternary2548 = (unsigned long)b2551;
  } else {
    unsigned long c2552 = 1;
    ternary2548 = (unsigned long)c2552;
  }
  __retval2544 = ternary2548;
  unsigned long t2553 = __retval2544;
  return t2553;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v2554, unsigned long* v2555) {
bb2556:
  unsigned long* __a2557;
  unsigned long* __b2558;
  unsigned long* __retval2559;
  __a2557 = v2554;
  __b2558 = v2555;
    unsigned long* t2560 = __a2557;
    unsigned long t2561 = *t2560;
    unsigned long* t2562 = __b2558;
    unsigned long t2563 = *t2562;
    _Bool c2564 = ((t2561 < t2563)) ? 1 : 0;
    if (c2564) {
      unsigned long* t2565 = __b2558;
      __retval2559 = t2565;
      unsigned long* t2566 = __retval2559;
      return t2566;
    }
  unsigned long* t2567 = __a2557;
  __retval2559 = t2567;
  unsigned long* t2568 = __retval2559;
  return t2568;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v2569) {
bb2570:
  struct std___Deque_base_int__std__allocator_int__* this2571;
  struct std__allocator_int_* __retval2572;
  this2571 = v2569;
  struct std___Deque_base_int__std__allocator_int__* t2573 = this2571;
  struct std__allocator_int_* base2574 = (struct std__allocator_int_*)((char *)&(t2573->_M_impl) + 0);
  __retval2572 = base2574;
  struct std__allocator_int_* t2575 = __retval2572;
  return t2575;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v2576, struct std__allocator_int_* v2577) {
bb2578:
  struct std__allocator_int___* this2579;
  struct std__allocator_int_* unnamed2580;
  this2579 = v2576;
  unnamed2580 = v2577;
  struct std__allocator_int___* t2581 = this2579;
  struct std____new_allocator_int___* base2582 = (struct std____new_allocator_int___*)((char *)t2581 + 0);
  std____new_allocator_int______new_allocator(base2582);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v2583) {
bb2584:
  struct std___Deque_base_int__std__allocator_int__* this2585;
  struct std__allocator_int___ __retval2586;
  this2585 = v2583;
  struct std___Deque_base_int__std__allocator_int__* t2587 = this2585;
  struct std__allocator_int_* r2588 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t2587);
  std__allocator_int____allocator_int_(&__retval2586, r2588);
  struct std__allocator_int___ t2589 = __retval2586;
  return t2589;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb2590:
  _Bool __retval2591;
    _Bool c2592 = 0;
    __retval2591 = c2592;
    _Bool t2593 = __retval2591;
    return t2593;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v2594) {
bb2595:
  struct std____new_allocator_int___* this2596;
  unsigned long __retval2597;
  this2596 = v2594;
  struct std____new_allocator_int___* t2598 = this2596;
  unsigned long c2599 = 9223372036854775807;
  unsigned long c2600 = 8;
  unsigned long b2601 = c2599 / c2600;
  __retval2597 = b2601;
  unsigned long t2602 = __retval2597;
  return t2602;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v2603, unsigned long v2604, void* v2605) {
bb2606:
  struct std____new_allocator_int___* this2607;
  unsigned long __n2608;
  void* unnamed2609;
  int** __retval2610;
  this2607 = v2603;
  __n2608 = v2604;
  unnamed2609 = v2605;
  struct std____new_allocator_int___* t2611 = this2607;
    unsigned long t2612 = __n2608;
    unsigned long r2613 = std____new_allocator_int_____M_max_size___const(t2611);
    _Bool c2614 = ((t2612 > r2613)) ? 1 : 0;
    if (c2614) {
        unsigned long t2615 = __n2608;
        unsigned long c2616 = -1;
        unsigned long c2617 = 8;
        unsigned long b2618 = c2616 / c2617;
        _Bool c2619 = ((t2615 > b2618)) ? 1 : 0;
        if (c2619) {
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
    unsigned long c2620 = 8;
    unsigned long c2621 = 16;
    _Bool c2622 = ((c2620 > c2621)) ? 1 : 0;
    if (c2622) {
      unsigned long __al2623;
      unsigned long c2624 = 8;
      __al2623 = c2624;
      unsigned long t2625 = __n2608;
      unsigned long c2626 = 8;
      unsigned long b2627 = t2625 * c2626;
      unsigned long t2628 = __al2623;
      void* r2629 = operator_new_2(b2627, t2628);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast2630 = (int**)r2629;
      __retval2610 = cast2630;
      int** t2631 = __retval2610;
      return t2631;
    }
  unsigned long t2632 = __n2608;
  unsigned long c2633 = 8;
  unsigned long b2634 = t2632 * c2633;
  void* r2635 = operator_new(b2634);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast2636 = (int**)r2635;
  __retval2610 = cast2636;
  int** t2637 = __retval2610;
  return t2637;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v2638, unsigned long v2639) {
bb2640:
  struct std__allocator_int___* this2641;
  unsigned long __n2642;
  int** __retval2643;
  this2641 = v2638;
  __n2642 = v2639;
  struct std__allocator_int___* t2644 = this2641;
    _Bool r2645 = std____is_constant_evaluated();
    if (r2645) {
        unsigned long t2646 = __n2642;
        unsigned long c2647 = 8;
        unsigned long ovr2648;
        _Bool ovf2649 = __builtin_mul_overflow(t2646, c2647, &ovr2648);
        __n2642 = ovr2648;
        if (ovf2649) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2650 = __n2642;
      void* r2651 = operator_new(t2650);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast2652 = (int**)r2651;
      __retval2643 = cast2652;
      int** t2653 = __retval2643;
      return t2653;
    }
  struct std____new_allocator_int___* base2654 = (struct std____new_allocator_int___*)((char *)t2644 + 0);
  unsigned long t2655 = __n2642;
  void* c2656 = ((void*)0);
  int** r2657 = std____new_allocator_int____allocate(base2654, t2655, c2656);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2643 = r2657;
  int** t2658 = __retval2643;
  return t2658;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v2659, unsigned long v2660) {
bb2661:
  struct std__allocator_int___* __a2662;
  unsigned long __n2663;
  int** __retval2664;
  __a2662 = v2659;
  __n2663 = v2660;
  struct std__allocator_int___* t2665 = __a2662;
  unsigned long t2666 = __n2663;
  int** r2667 = std__allocator_int____allocate(t2665, t2666);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2664 = r2667;
  int** t2668 = __retval2664;
  return t2668;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v2669, unsigned long v2670) {
bb2671:
  struct std___Deque_base_int__std__allocator_int__* this2672;
  unsigned long __n2673;
  int** __retval2674;
  struct std__allocator_int___ __map_alloc2675;
  this2672 = v2669;
  __n2673 = v2670;
  struct std___Deque_base_int__std__allocator_int__* t2676 = this2672;
  struct std__allocator_int___ r2677 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t2676);
  __map_alloc2675 = r2677;
  unsigned long t2678 = __n2673;
  int** r2679 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc2675, t2678);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2674 = r2679;
  int** t2680 = __retval2674;
  return t2680;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v2681) {
bb2682:
  struct std____new_allocator_int_* this2683;
  unsigned long __retval2684;
  this2683 = v2681;
  struct std____new_allocator_int_* t2685 = this2683;
  unsigned long c2686 = 9223372036854775807;
  unsigned long c2687 = 4;
  unsigned long b2688 = c2686 / c2687;
  __retval2684 = b2688;
  unsigned long t2689 = __retval2684;
  return t2689;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v2690, unsigned long v2691, void* v2692) {
bb2693:
  struct std____new_allocator_int_* this2694;
  unsigned long __n2695;
  void* unnamed2696;
  int* __retval2697;
  this2694 = v2690;
  __n2695 = v2691;
  unnamed2696 = v2692;
  struct std____new_allocator_int_* t2698 = this2694;
    unsigned long t2699 = __n2695;
    unsigned long r2700 = std____new_allocator_int____M_max_size___const(t2698);
    _Bool c2701 = ((t2699 > r2700)) ? 1 : 0;
    if (c2701) {
        unsigned long t2702 = __n2695;
        unsigned long c2703 = -1;
        unsigned long c2704 = 4;
        unsigned long b2705 = c2703 / c2704;
        _Bool c2706 = ((t2702 > b2705)) ? 1 : 0;
        if (c2706) {
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
    unsigned long c2707 = 4;
    unsigned long c2708 = 16;
    _Bool c2709 = ((c2707 > c2708)) ? 1 : 0;
    if (c2709) {
      unsigned long __al2710;
      unsigned long c2711 = 4;
      __al2710 = c2711;
      unsigned long t2712 = __n2695;
      unsigned long c2713 = 4;
      unsigned long b2714 = t2712 * c2713;
      unsigned long t2715 = __al2710;
      void* r2716 = operator_new_2(b2714, t2715);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast2717 = (int*)r2716;
      __retval2697 = cast2717;
      int* t2718 = __retval2697;
      return t2718;
    }
  unsigned long t2719 = __n2695;
  unsigned long c2720 = 4;
  unsigned long b2721 = t2719 * c2720;
  void* r2722 = operator_new(b2721);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast2723 = (int*)r2722;
  __retval2697 = cast2723;
  int* t2724 = __retval2697;
  return t2724;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v2725, unsigned long v2726) {
bb2727:
  struct std__allocator_int_* this2728;
  unsigned long __n2729;
  int* __retval2730;
  this2728 = v2725;
  __n2729 = v2726;
  struct std__allocator_int_* t2731 = this2728;
    _Bool r2732 = std____is_constant_evaluated();
    if (r2732) {
        unsigned long t2733 = __n2729;
        unsigned long c2734 = 4;
        unsigned long ovr2735;
        _Bool ovf2736 = __builtin_mul_overflow(t2733, c2734, &ovr2735);
        __n2729 = ovr2735;
        if (ovf2736) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2737 = __n2729;
      void* r2738 = operator_new(t2737);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast2739 = (int*)r2738;
      __retval2730 = cast2739;
      int* t2740 = __retval2730;
      return t2740;
    }
  struct std____new_allocator_int_* base2741 = (struct std____new_allocator_int_*)((char *)t2731 + 0);
  unsigned long t2742 = __n2729;
  void* c2743 = ((void*)0);
  int* r2744 = std____new_allocator_int___allocate(base2741, t2742, c2743);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2730 = r2744;
  int* t2745 = __retval2730;
  return t2745;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v2746, unsigned long v2747) {
bb2748:
  struct std__allocator_int_* __a2749;
  unsigned long __n2750;
  int* __retval2751;
  __a2749 = v2746;
  __n2750 = v2747;
  struct std__allocator_int_* t2752 = __a2749;
  unsigned long t2753 = __n2750;
  int* r2754 = std__allocator_int___allocate(t2752, t2753);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2751 = r2754;
  int* t2755 = __retval2751;
  return t2755;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v2756) {
bb2757:
  struct std___Deque_base_int__std__allocator_int__* this2758;
  int* __retval2759;
  this2758 = v2756;
  struct std___Deque_base_int__std__allocator_int__* t2760 = this2758;
  struct std__allocator_int_* base2761 = (struct std__allocator_int_*)((char *)&(t2760->_M_impl) + 0);
  unsigned long c2762 = 4;
  unsigned long r2763 = std____deque_buf_size(c2762);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r2764 = std__allocator_traits_std__allocator_int_____allocate(base2761, r2763);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2759 = r2764;
  int* t2765 = __retval2759;
  return t2765;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v2766, int* v2767, unsigned long v2768) {
bb2769:
  struct std____new_allocator_int_* this2770;
  int* __p2771;
  unsigned long __n2772;
  this2770 = v2766;
  __p2771 = v2767;
  __n2772 = v2768;
  struct std____new_allocator_int_* t2773 = this2770;
    unsigned long c2774 = 4;
    unsigned long c2775 = 16;
    _Bool c2776 = ((c2774 > c2775)) ? 1 : 0;
    if (c2776) {
      int* t2777 = __p2771;
      void* cast2778 = (void*)t2777;
      unsigned long t2779 = __n2772;
      unsigned long c2780 = 4;
      unsigned long b2781 = t2779 * c2780;
      unsigned long c2782 = 4;
      operator_delete_3(cast2778, b2781, c2782);
      return;
    }
  int* t2783 = __p2771;
  void* cast2784 = (void*)t2783;
  unsigned long t2785 = __n2772;
  unsigned long c2786 = 4;
  unsigned long b2787 = t2785 * c2786;
  operator_delete_2(cast2784, b2787);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v2788, int* v2789, unsigned long v2790) {
bb2791:
  struct std__allocator_int_* this2792;
  int* __p2793;
  unsigned long __n2794;
  this2792 = v2788;
  __p2793 = v2789;
  __n2794 = v2790;
  struct std__allocator_int_* t2795 = this2792;
    _Bool r2796 = std____is_constant_evaluated();
    if (r2796) {
      int* t2797 = __p2793;
      void* cast2798 = (void*)t2797;
      operator_delete(cast2798);
      return;
    }
  struct std____new_allocator_int_* base2799 = (struct std____new_allocator_int_*)((char *)t2795 + 0);
  int* t2800 = __p2793;
  unsigned long t2801 = __n2794;
  std____new_allocator_int___deallocate(base2799, t2800, t2801);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v2802, int* v2803, unsigned long v2804) {
bb2805:
  struct std__allocator_int_* __a2806;
  int* __p2807;
  unsigned long __n2808;
  __a2806 = v2802;
  __p2807 = v2803;
  __n2808 = v2804;
  struct std__allocator_int_* t2809 = __a2806;
  int* t2810 = __p2807;
  unsigned long t2811 = __n2808;
  std__allocator_int___deallocate(t2809, t2810, t2811);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v2812, int* v2813) {
bb2814:
  struct std___Deque_base_int__std__allocator_int__* this2815;
  int* __p2816;
  this2815 = v2812;
  __p2816 = v2813;
  struct std___Deque_base_int__std__allocator_int__* t2817 = this2815;
  struct std__allocator_int_* base2818 = (struct std__allocator_int_*)((char *)&(t2817->_M_impl) + 0);
  int* t2819 = __p2816;
  unsigned long c2820 = 4;
  unsigned long r2821 = std____deque_buf_size(c2820);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base2818, t2819, r2821);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v2822, int** v2823, int** v2824) {
bb2825:
  struct std___Deque_base_int__std__allocator_int__* this2826;
  int** __nstart2827;
  int** __nfinish2828;
  this2826 = v2822;
  __nstart2827 = v2823;
  __nfinish2828 = v2824;
  struct std___Deque_base_int__std__allocator_int__* t2829 = this2826;
    int** __n2830;
    int** t2831 = __nstart2827;
    __n2830 = t2831;
    while (1) {
      int** t2833 = __n2830;
      int** t2834 = __nfinish2828;
      _Bool c2835 = ((t2833 < t2834)) ? 1 : 0;
      if (!c2835) break;
      int** t2836 = __n2830;
      int* t2837 = *t2836;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t2829, t2837);
    for_step2832: ;
      int** t2838 = __n2830;
      int c2839 = 1;
      int** ptr2840 = &(t2838)[c2839];
      __n2830 = ptr2840;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v2841, int** v2842, int** v2843) {
bb2844:
  struct std___Deque_base_int__std__allocator_int__* this2845;
  int** __nstart2846;
  int** __nfinish2847;
  int** __cur2848;
  this2845 = v2841;
  __nstart2846 = v2842;
  __nfinish2847 = v2843;
  struct std___Deque_base_int__std__allocator_int__* t2849 = this2845;
        int** t2851 = __nstart2846;
        __cur2848 = t2851;
        while (1) {
          int** t2853 = __cur2848;
          int** t2854 = __nfinish2847;
          _Bool c2855 = ((t2853 < t2854)) ? 1 : 0;
          if (!c2855) break;
          int* r2856 = std___Deque_base_int__std__allocator_int______M_allocate_node(t2849);
          if (__cir_exc_active) {
            goto cir_try_dispatch2850;
          }
          int** t2857 = __cur2848;
          *t2857 = r2856;
        for_step2852: ;
          int** t2858 = __cur2848;
          int c2859 = 1;
          int** ptr2860 = &(t2858)[c2859];
          __cur2848 = ptr2860;
        }
    cir_try_dispatch2850: ;
    if (__cir_exc_active) {
    {
      int ca_tok2861 = 0;
      void* ca_exn2862 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t2863 = __nstart2846;
        int** t2864 = __cur2848;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t2849, t2863, t2864);
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
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v2865, int** v2866, unsigned long v2867) {
bb2868:
  struct std____new_allocator_int___* this2869;
  int** __p2870;
  unsigned long __n2871;
  this2869 = v2865;
  __p2870 = v2866;
  __n2871 = v2867;
  struct std____new_allocator_int___* t2872 = this2869;
    unsigned long c2873 = 8;
    unsigned long c2874 = 16;
    _Bool c2875 = ((c2873 > c2874)) ? 1 : 0;
    if (c2875) {
      int** t2876 = __p2870;
      void* cast2877 = (void*)t2876;
      unsigned long t2878 = __n2871;
      unsigned long c2879 = 8;
      unsigned long b2880 = t2878 * c2879;
      unsigned long c2881 = 8;
      operator_delete_3(cast2877, b2880, c2881);
      return;
    }
  int** t2882 = __p2870;
  void* cast2883 = (void*)t2882;
  unsigned long t2884 = __n2871;
  unsigned long c2885 = 8;
  unsigned long b2886 = t2884 * c2885;
  operator_delete_2(cast2883, b2886);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v2887, int** v2888, unsigned long v2889) {
bb2890:
  struct std__allocator_int___* this2891;
  int** __p2892;
  unsigned long __n2893;
  this2891 = v2887;
  __p2892 = v2888;
  __n2893 = v2889;
  struct std__allocator_int___* t2894 = this2891;
    _Bool r2895 = std____is_constant_evaluated();
    if (r2895) {
      int** t2896 = __p2892;
      void* cast2897 = (void*)t2896;
      operator_delete(cast2897);
      return;
    }
  struct std____new_allocator_int___* base2898 = (struct std____new_allocator_int___*)((char *)t2894 + 0);
  int** t2899 = __p2892;
  unsigned long t2900 = __n2893;
  std____new_allocator_int____deallocate(base2898, t2899, t2900);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v2901, int** v2902, unsigned long v2903) {
bb2904:
  struct std__allocator_int___* __a2905;
  int** __p2906;
  unsigned long __n2907;
  __a2905 = v2901;
  __p2906 = v2902;
  __n2907 = v2903;
  struct std__allocator_int___* t2908 = __a2905;
  int** t2909 = __p2906;
  unsigned long t2910 = __n2907;
  std__allocator_int____deallocate(t2908, t2909, t2910);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v2911, int** v2912, unsigned long v2913) {
bb2914:
  struct std___Deque_base_int__std__allocator_int__* this2915;
  int** __p2916;
  unsigned long __n2917;
  struct std__allocator_int___ __map_alloc2918;
  this2915 = v2911;
  __p2916 = v2912;
  __n2917 = v2913;
  struct std___Deque_base_int__std__allocator_int__* t2919 = this2915;
  struct std__allocator_int___ r2920 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t2919);
  __map_alloc2918 = r2920;
  int** t2921 = __p2916;
  unsigned long t2922 = __n2917;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc2918, t2921, t2922);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb2923:
  unsigned long __retval2924;
  unsigned long c2925 = 4;
  unsigned long r2926 = std____deque_buf_size(c2925);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval2924 = r2926;
  unsigned long t2927 = __retval2924;
  return t2927;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v2928, int** v2929) {
bb2930:
  struct std___Deque_iterator_int__int____int___* this2931;
  int** __new_node2932;
  this2931 = v2928;
  __new_node2932 = v2929;
  struct std___Deque_iterator_int__int____int___* t2933 = this2931;
  int** t2934 = __new_node2932;
  t2933->_M_node = t2934;
  int** t2935 = __new_node2932;
  int* t2936 = *t2935;
  t2933->_M_first = t2936;
  int* t2937 = t2933->_M_first;
  unsigned long r2938 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast2939 = (long)r2938;
  int* ptr2940 = &(t2937)[cast2939];
  t2933->_M_last = ptr2940;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v2941, unsigned long v2942) {
bb2943:
  struct std___Deque_base_int__std__allocator_int__* this2944;
  unsigned long __num_elements2945;
  unsigned long __num_nodes2946;
  unsigned long ref_tmp02947;
  unsigned long ref_tmp12948;
  int** __nstart2949;
  int** __nfinish2950;
  this2944 = v2941;
  __num_elements2945 = v2942;
  struct std___Deque_base_int__std__allocator_int__* t2951 = this2944;
  unsigned long t2952 = __num_elements2945;
  unsigned long c2953 = 4;
  unsigned long r2954 = std____deque_buf_size(c2953);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b2955 = t2952 / r2954;
  unsigned long c2956 = 1;
  unsigned long b2957 = b2955 + c2956;
  __num_nodes2946 = b2957;
  unsigned long c2958 = 8;
  ref_tmp02947 = c2958;
  unsigned long t2959 = __num_nodes2946;
  unsigned long c2960 = 2;
  unsigned long b2961 = t2959 + c2960;
  ref_tmp12948 = b2961;
  unsigned long* r2962 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp02947, &ref_tmp12948);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2963 = *r2962;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2964 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  base2964->_M_map_size = t2963;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2965 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  unsigned long t2966 = base2965->_M_map_size;
  int** r2967 = std___Deque_base_int__std__allocator_int______M_allocate_map(t2951, t2966);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2968 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  base2968->_M_map = r2967;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2969 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  int** t2970 = base2969->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2971 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  unsigned long t2972 = base2971->_M_map_size;
  unsigned long t2973 = __num_nodes2946;
  unsigned long b2974 = t2972 - t2973;
  unsigned long c2975 = 2;
  unsigned long b2976 = b2974 / c2975;
  int** ptr2977 = &(t2970)[b2976];
  __nstart2949 = ptr2977;
  int** t2978 = __nstart2949;
  unsigned long t2979 = __num_nodes2946;
  int** ptr2980 = &(t2978)[t2979];
  __nfinish2950 = ptr2980;
      int** t2982 = __nstart2949;
      int** t2983 = __nfinish2950;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t2951, t2982, t2983);
      if (__cir_exc_active) {
        goto cir_try_dispatch2981;
      }
    cir_try_dispatch2981: ;
    if (__cir_exc_active) {
    {
      int ca_tok2984 = 0;
      void* ca_exn2985 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2986 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
        int** t2987 = base2986->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2988 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
        unsigned long t2989 = base2988->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t2951, t2987, t2989);
        int** c2990 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2991 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
        base2991->_M_map = c2990;
        unsigned long c2992 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2993 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
        base2993->_M_map_size = c2992;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2994 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  int** t2995 = __nstart2949;
  std___Deque_iterator_int__int___int_____M_set_node(&base2994->_M_start, t2995);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2996 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  int** t2997 = __nfinish2950;
  int c2998 = -1;
  int** ptr2999 = &(t2997)[c2998];
  std___Deque_iterator_int__int___int_____M_set_node(&base2996->_M_finish, ptr2999);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3000 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  int* t3001 = base3000->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3002 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  base3002->_M_start._M_cur = t3001;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3003 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  int* t3004 = base3003->_M_finish._M_first;
  unsigned long t3005 = __num_elements2945;
  unsigned long c3006 = 4;
  unsigned long r3007 = std____deque_buf_size(c3006);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b3008 = t3005 % r3007;
  int* ptr3009 = &(t3004)[b3008];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3010 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2951->_M_impl) + 0);
  base3010->_M_finish._M_cur = ptr3009;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v3011) {
bb3012:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this3013;
  this3013 = v3011;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t3014 = this3013;
  {
    struct std__allocator_int_* base3015 = (struct std__allocator_int_*)((char *)t3014 + 0);
    std__allocator_int____allocator(base3015);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v3016) {
bb3017:
  struct std___Deque_base_int__std__allocator_int__* this3018;
  this3018 = v3016;
  struct std___Deque_base_int__std__allocator_int__* t3019 = this3018;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t3019->_M_impl);
    unsigned long c3020 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t3019, c3020);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t3019->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v3021) {
bb3022:
  struct std___Deque_base_int__std__allocator_int__* this3023;
  this3023 = v3021;
  struct std___Deque_base_int__std__allocator_int__* t3024 = this3023;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3025 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3024->_M_impl) + 0);
      int** t3026 = base3025->_M_map;
      _Bool cast3027 = (_Bool)t3026;
      if (cast3027) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3028 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3024->_M_impl) + 0);
        int** t3029 = base3028->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3030 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3024->_M_impl) + 0);
        int** t3031 = base3030->_M_finish._M_node;
        int c3032 = 1;
        int** ptr3033 = &(t3031)[c3032];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t3024, t3029, ptr3033);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3034 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3024->_M_impl) + 0);
        int** t3035 = base3034->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3036 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3024->_M_impl) + 0);
        unsigned long t3037 = base3036->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t3024, t3035, t3037);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t3024->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v3038) {
bb3039:
  struct std____new_allocator_int_* this3040;
  this3040 = v3038;
  struct std____new_allocator_int_* t3041 = this3040;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v3042) {
bb3043:
  struct std__allocator_int_* this3044;
  this3044 = v3042;
  struct std__allocator_int_* t3045 = this3044;
  struct std____new_allocator_int_* base3046 = (struct std____new_allocator_int_*)((char *)t3045 + 0);
  std____new_allocator_int_____new_allocator(base3046);
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v3047) {
bb3048:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this3049;
  this3049 = v3047;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t3050 = this3049;
  int** c3051 = ((void*)0);
  t3050->_M_map = c3051;
  unsigned long c3052 = 0;
  t3050->_M_map_size = c3052;
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t3050->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t3050->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v3053) {
bb3054:
  struct std__allocator_int_* this3055;
  this3055 = v3053;
  struct std__allocator_int_* t3056 = this3055;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v3057) {
bb3058:
  struct std____new_allocator_int___* this3059;
  this3059 = v3057;
  struct std____new_allocator_int___* t3060 = this3059;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v3061) {
bb3062:
  int* __location3063;
  __location3063 = v3061;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v3064, int* v3065) {
bb3066:
  int* __first3067;
  int* __last3068;
  __first3067 = v3064;
  __last3068 = v3065;
      _Bool r3069 = std____is_constant_evaluated();
      if (r3069) {
          while (1) {
            int* t3071 = __first3067;
            int* t3072 = __last3068;
            _Bool c3073 = ((t3071 != t3072)) ? 1 : 0;
            if (!c3073) break;
            int* t3074 = __first3067;
            void_std__destroy_at_int_(t3074);
            if (__cir_exc_active) {
              return;
            }
          for_step3070: ;
            int* t3075 = __first3067;
            int c3076 = 1;
            int* ptr3077 = &(t3075)[c3076];
            __first3067 = ptr3077;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v3078, int* v3079, struct std__allocator_int_* v3080) {
bb3081:
  int* __first3082;
  int* __last3083;
  struct std__allocator_int_* unnamed3084;
  __first3082 = v3078;
  __last3083 = v3079;
  unnamed3084 = v3080;
  int* t3085 = __first3082;
  int* t3086 = __last3083;
  void_std___Destroy_int__(t3085, t3086);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb3087:
  unsigned long __retval3088;
  unsigned long c3089 = 4;
  unsigned long r3090 = std____deque_buf_size(c3089);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval3088 = r3090;
  unsigned long t3091 = __retval3088;
  return t3091;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v3092, struct std___Deque_iterator_int__int____int___ v3093, struct std___Deque_iterator_int__int____int___ v3094) {
bb3095:
  struct std__deque_int__std__allocator_int__* this3096;
  struct std___Deque_iterator_int__int____int___ __first3097;
  struct std___Deque_iterator_int__int____int___ __last3098;
  this3096 = v3092;
  __first3097 = v3093;
  __last3098 = v3094;
  struct std__deque_int__std__allocator_int__* t3099 = this3096;
    int** __node3100;
    int** t3101 = __first3097._M_node;
    int c3102 = 1;
    int** ptr3103 = &(t3101)[c3102];
    __node3100 = ptr3103;
    while (1) {
      int** t3105 = __node3100;
      int** t3106 = __last3098._M_node;
      _Bool c3107 = ((t3105 < t3106)) ? 1 : 0;
      if (!c3107) break;
      int** t3108 = __node3100;
      int* t3109 = *t3108;
      int** t3110 = __node3100;
      int* t3111 = *t3110;
      unsigned long r3112 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr3113 = &(t3111)[r3112];
      struct std___Deque_base_int__std__allocator_int__* base3114 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3099 + 0);
      struct std__allocator_int_* r3115 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3114);
      void_std___Destroy_int___int_(t3109, ptr3113, r3115);
      if (__cir_exc_active) {
        return;
      }
    for_step3104: ;
      int** t3116 = __node3100;
      int c3117 = 1;
      int** ptr3118 = &(t3116)[c3117];
      __node3100 = ptr3118;
    }
    int** t3119 = __first3097._M_node;
    int** t3120 = __last3098._M_node;
    _Bool c3121 = ((t3119 != t3120)) ? 1 : 0;
    if (c3121) {
      int* t3122 = __first3097._M_cur;
      int* t3123 = __first3097._M_last;
      struct std___Deque_base_int__std__allocator_int__* base3124 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3099 + 0);
      struct std__allocator_int_* r3125 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3124);
      void_std___Destroy_int___int_(t3122, t3123, r3125);
      if (__cir_exc_active) {
        return;
      }
      int* t3126 = __last3098._M_first;
      int* t3127 = __last3098._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base3128 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3099 + 0);
      struct std__allocator_int_* r3129 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3128);
      void_std___Destroy_int___int_(t3126, t3127, r3129);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t3130 = __first3097._M_cur;
      int* t3131 = __last3098._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base3132 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3099 + 0);
      struct std__allocator_int_* r3133 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3132);
      void_std___Destroy_int___int_(t3130, t3131, r3133);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v3134, struct std___Deque_iterator_int__int____int___* v3135) {
bb3136:
  struct std___Deque_iterator_int__int____int___* this3137;
  struct std___Deque_iterator_int__int____int___* __x3138;
  this3137 = v3134;
  __x3138 = v3135;
  struct std___Deque_iterator_int__int____int___* t3139 = this3137;
  struct std___Deque_iterator_int__int____int___* t3140 = __x3138;
  int* t3141 = t3140->_M_cur;
  t3139->_M_cur = t3141;
  struct std___Deque_iterator_int__int____int___* t3142 = __x3138;
  int* t3143 = t3142->_M_first;
  t3139->_M_first = t3143;
  struct std___Deque_iterator_int__int____int___* t3144 = __x3138;
  int* t3145 = t3144->_M_last;
  t3139->_M_last = t3145;
  struct std___Deque_iterator_int__int____int___* t3146 = __x3138;
  int** t3147 = t3146->_M_node;
  t3139->_M_node = t3147;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v3148, struct std___Deque_iterator_int__int____int___ v3149, struct std___Deque_iterator_int__int____int___ v3150, struct std__allocator_int_* v3151) {
bb3152:
  struct std__deque_int__std__allocator_int__* this3153;
  struct std___Deque_iterator_int__int____int___ __first3154;
  struct std___Deque_iterator_int__int____int___ __last3155;
  struct std__allocator_int_* unnamed3156;
  this3153 = v3148;
  __first3154 = v3149;
  __last3155 = v3150;
  unnamed3156 = v3151;
  struct std__deque_int__std__allocator_int__* t3157 = this3153;
    _Bool c3158 = 0;
    if (c3158) {
      struct std___Deque_iterator_int__int____int___ agg_tmp03159;
      struct std___Deque_iterator_int__int____int___ agg_tmp13160;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp03159, &__first3154);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp13160, &__last3155);
      struct std___Deque_iterator_int__int____int___ t3161 = agg_tmp03159;
      struct std___Deque_iterator_int__int____int___ t3162 = agg_tmp13160;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t3157, t3161, t3162);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v3163) {
bb3164:
  struct std___Deque_base_int__std__allocator_int__* this3165;
  struct std__allocator_int_* __retval3166;
  this3165 = v3163;
  struct std___Deque_base_int__std__allocator_int__* t3167 = this3165;
  struct std__allocator_int_* base3168 = (struct std__allocator_int_*)((char *)&(t3167->_M_impl) + 0);
  __retval3166 = base3168;
  struct std__allocator_int_* t3169 = __retval3166;
  return t3169;
}

