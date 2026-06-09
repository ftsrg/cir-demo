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
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std____new_allocator_std___List_node_int__ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___List_node_int_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__stack_int__std____cxx11__list_int__std__allocator_int___ { struct std____cxx11__list_int__std__allocator_int__ c; };
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };
struct std__stack_int__std__vector_int__std__allocator_int___ { struct std__vector_int__std__allocator_int__ c; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Popping from intDequeStack: ";
char _str_1[31] = "\nPopping from intVectorStack: ";
char _str_2[29] = "\nPopping from intListStack: ";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv[74] = "reference std::stack<int>::top() [_Tp = int, _Sequence = std::deque<int>]";
char _str_6[15] = "!this->empty()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv[69] = "void std::stack<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiSt6vectorIiSaIiEEE3topEv[93] = "reference std::stack<int, std::vector<int>>::top() [_Tp = int, _Sequence = std::vector<int>]";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiSt6vectorIiSaIiEEE3popEv[88] = "void std::stack<int, std::vector<int>>::pop() [_Tp = int, _Sequence = std::vector<int>]";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiNSt7__cxx114listIiSaIiEEEE3topEv[89] = "reference std::stack<int, std::list<int>>::top() [_Tp = int, _Sequence = std::list<int>]";
char _str_9[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiNSt7__cxx114listIiSaIiEEEE3popEv[84] = "void std::stack<int, std::list<int>>::pop() [_Tp = int, _Sequence = std::list<int>]";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv[74] = "void std::list<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
void std__stack_int__std__vector_int__std__allocator_int_______stack_std__vector_int__std__allocator_int_____void_(struct std__stack_int__std__vector_int__std__allocator_int___* p0);
void std__stack_int__std____cxx11__list_int__std__allocator_int_______stack_std____cxx11__list_int__std__allocator_int_____void_(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* p0);
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
void std__stack_int__std__deque_int__std__allocator_int_______push(struct std__stack_int__std__deque_int__std__allocator_int___* p0, int* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void void_std____relocate_object_a_int__int__std__allocator_int___(int* p0, int* p1, struct std__allocator_int_* p2);
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____void_ p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* p0, struct __gnu_cxx____normal_iterator_int____void_* p1);
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____niter_base_int__(int* p0);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__stack_int__std__vector_int__std__allocator_int_______push(struct std__stack_int__std__vector_int__std__allocator_int___* p0, int* p1);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* p0);
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* p0, unsigned long p1, void* p2);
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* p0, unsigned long p1);
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* p0, unsigned long p1);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std__allocator_std___List_node_int__* p1, struct std___List_node_int_* p2);
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0);
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void std__stack_int__std____cxx11__list_int__std__allocator_int_______push(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* p0, int* p1);
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
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
_Bool std__stack_int__std__deque_int__std__allocator_int_______empty___const(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* p0);
int* std__stack_int__std__deque_int__std__allocator_int_______top(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
void std__deque_int__std__allocator_int______M_pop_back_aux(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____pop_back(struct std__deque_int__std__allocator_int__* p0);
void std__stack_int__std__deque_int__std__allocator_int_______pop(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
void void_popElements_std__stack_int__std__deque_int__std__allocator_int_______(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__stack_int__std__vector_int__std__allocator_int_______empty___const(struct std__stack_int__std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
int* std__stack_int__std__vector_int__std__allocator_int_______top(struct std__stack_int__std__vector_int__std__allocator_int___* p0);
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* p0);
void std__stack_int__std__vector_int__std__allocator_int_______pop(struct std__stack_int__std__vector_int__std__allocator_int___* p0);
void void_popElements_std__stack_int__std__vector_int__std__allocator_int_______(struct std__stack_int__std__vector_int__std__allocator_int___* p0);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool std__stack_int__std____cxx11__list_int__std__allocator_int_______empty___const(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
int* std__stack_int__std____cxx11__list_int__std__allocator_int_______top(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* p0);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
extern void std____detail___List_node_base___M_unhook(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* p0);
void std__stack_int__std____cxx11__list_int__std__allocator_int_______pop(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* p0);
void void_popElements_std__stack_int__std____cxx11__list_int__std__allocator_int_______(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__stack_int__std____cxx11__list_int__std__allocator_int________stack(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* p0);
void std__stack_int__std__vector_int__std__allocator_int________stack(struct std__stack_int__std__vector_int__std__allocator_int___* p0);
void std__stack_int__std__deque_int__std__allocator_int________stack(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
int main();
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___List_node_int____M_valptr(struct std___List_node_int_* p0);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std___List_node_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std___List_node_int_* p1);
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* p0);
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
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
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);

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

// function: _ZNSt5stackIiSt6vectorIiSaIiEEEC2IS2_vEEv
void std__stack_int__std__vector_int__std__allocator_int_______stack_std__vector_int__std__allocator_int_____void_(struct std__stack_int__std__vector_int__std__allocator_int___* v5) {
bb6:
  struct std__stack_int__std__vector_int__std__allocator_int___* this7;
  this7 = v5;
  struct std__stack_int__std__vector_int__std__allocator_int___* t8 = this7;
  struct std__vector_int__std__allocator_int__ c9 = {0};
  t8->c = c9;
  std__vector_int__std__allocator_int_____vector(&t8->c);
  return;
}

// function: _ZNSt5stackIiNSt7__cxx114listIiSaIiEEEEC2IS3_vEEv
void std__stack_int__std____cxx11__list_int__std__allocator_int_______stack_std____cxx11__list_int__std__allocator_int_____void_(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* v10) {
bb11:
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* this12;
  this12 = v10;
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t13 = this12;
  struct std____cxx11__list_int__std__allocator_int__ c14 = {0};
  t13->c = c14;
  std____cxx11__list_int__std__allocator_int_____list(&t13->c);
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v15, int* v16) {
bb17:
  int* __location18;
  int* __args19;
  int* __retval20;
  void* __loc21;
  __location18 = v15;
  __args19 = v16;
  int* t22 = __location18;
  void* cast23 = (void*)t22;
  __loc21 = cast23;
    void* t24 = __loc21;
    int* cast25 = (int*)t24;
    int* t26 = __args19;
    int t27 = *t26;
    *cast25 = t27;
    __retval20 = cast25;
    int* t28 = __retval20;
    return t28;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v29, int* v30, int* v31) {
bb32:
  struct std__allocator_int_* __a33;
  int* __p34;
  int* __args35;
  __a33 = v29;
  __p34 = v30;
  __args35 = v31;
  int* t36 = __p34;
  int* t37 = __args35;
  int* r38 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t36, t37);
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v39, struct std___Deque_iterator_int__int____int___* v40) {
bb41:
  struct std___Deque_iterator_int__int____int___* __x42;
  struct std___Deque_iterator_int__int____int___* __y43;
  long __retval44;
  __x42 = v39;
  __y43 = v40;
  unsigned long r45 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast46 = (long)r45;
  struct std___Deque_iterator_int__int____int___* t47 = __x42;
  int** t48 = t47->_M_node;
  struct std___Deque_iterator_int__int____int___* t49 = __y43;
  int** t50 = t49->_M_node;
  long diff51 = t48 - t50;
  struct std___Deque_iterator_int__int____int___* t52 = __x42;
  int** t53 = t52->_M_node;
  _Bool cast54 = (_Bool)t53;
  long cast55 = (long)cast54;
  long b56 = diff51 - cast55;
  long b57 = cast46 * b56;
  struct std___Deque_iterator_int__int____int___* t58 = __x42;
  int* t59 = t58->_M_cur;
  struct std___Deque_iterator_int__int____int___* t60 = __x42;
  int* t61 = t60->_M_first;
  long diff62 = t59 - t61;
  long b63 = b57 + diff62;
  struct std___Deque_iterator_int__int____int___* t64 = __y43;
  int* t65 = t64->_M_last;
  struct std___Deque_iterator_int__int____int___* t66 = __y43;
  int* t67 = t66->_M_cur;
  long diff68 = t65 - t67;
  long b69 = b63 + diff68;
  __retval44 = b69;
  long t70 = __retval44;
  return t70;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v71) {
bb72:
  struct std__deque_int__std__allocator_int__* this73;
  unsigned long __retval74;
  unsigned long __sz75;
  this73 = v71;
  struct std__deque_int__std__allocator_int__* t76 = this73;
  struct std___Deque_base_int__std__allocator_int__* base77 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base78 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base77->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base79 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base80 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base79->_M_impl) + 0);
  long r81 = std__operator_(&base78->_M_finish, &base80->_M_start);
  unsigned long cast82 = (unsigned long)r81;
  __sz75 = cast82;
    unsigned long t83 = __sz75;
    unsigned long r84 = std__deque_int__std__allocator_int_____max_size___const(t76);
    _Bool c85 = ((t83 > r84)) ? 1 : 0;
    if (c85) {
      __builtin_unreachable();
    }
  unsigned long t86 = __sz75;
  __retval74 = t86;
  unsigned long t87 = __retval74;
  return t87;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v88, unsigned long* v89) {
bb90:
  unsigned long* __a91;
  unsigned long* __b92;
  unsigned long* __retval93;
  __a91 = v88;
  __b92 = v89;
    unsigned long* t94 = __b92;
    unsigned long t95 = *t94;
    unsigned long* t96 = __a91;
    unsigned long t97 = *t96;
    _Bool c98 = ((t95 < t97)) ? 1 : 0;
    if (c98) {
      unsigned long* t99 = __b92;
      __retval93 = t99;
      unsigned long* t100 = __retval93;
      return t100;
    }
  unsigned long* t101 = __a91;
  __retval93 = t101;
  unsigned long* t102 = __retval93;
  return t102;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v103) {
bb104:
  struct std__allocator_int_* __a105;
  unsigned long __retval106;
  unsigned long __diffmax107;
  unsigned long __allocmax108;
  __a105 = v103;
  unsigned long c109 = 9223372036854775807;
  __diffmax107 = c109;
  unsigned long c110 = 4611686018427387903;
  __allocmax108 = c110;
  unsigned long* r111 = unsigned_long_const__std__min_unsigned_long_(&__diffmax107, &__allocmax108);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t112 = *r111;
  __retval106 = t112;
  unsigned long t113 = __retval106;
  return t113;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v114) {
bb115:
  struct std__deque_int__std__allocator_int__* this116;
  unsigned long __retval117;
  this116 = v114;
  struct std__deque_int__std__allocator_int__* t118 = this116;
  struct std___Deque_base_int__std__allocator_int__* base119 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t118 + 0);
  struct std__allocator_int_* r120 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base119);
  unsigned long r121 = std__deque_int__std__allocator_int______S_max_size(r120);
  __retval117 = r121;
  unsigned long t122 = __retval117;
  return t122;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v123, int** v124) {
bb125:
  int*** unnamed126;
  int** __res127;
  int** __retval128;
  unnamed126 = v123;
  __res127 = v124;
  int** t129 = __res127;
  __retval128 = t129;
  int** t130 = __retval128;
  return t130;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v131, int** v132, struct std__random_access_iterator_tag v133) {
bb134:
  int** __first135;
  int** __last136;
  struct std__random_access_iterator_tag unnamed137;
  long __retval138;
  __first135 = v131;
  __last136 = v132;
  unnamed137 = v133;
  int** t139 = __last136;
  int** t140 = __first135;
  long diff141 = t139 - t140;
  __retval138 = diff141;
  long t142 = __retval138;
  return t142;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v143) {
bb144:
  int*** unnamed145;
  struct std__random_access_iterator_tag __retval146;
  unnamed145 = v143;
  struct std__random_access_iterator_tag t147 = __retval146;
  return t147;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v148, int** v149) {
bb150:
  int** __first151;
  int** __last152;
  long __retval153;
  struct std__random_access_iterator_tag agg_tmp0154;
  __first151 = v148;
  __last152 = v149;
  int** t155 = __first151;
  int** t156 = __last152;
  struct std__random_access_iterator_tag r157 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first151);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0154 = r157;
  struct std__random_access_iterator_tag t158 = agg_tmp0154;
  long r159 = std__iterator_traits_int_____difference_type_std____distance_int___(t155, t156, t158);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval153 = r159;
  long t160 = __retval153;
  return t160;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v161, int*** v162) {
bb163:
  int*** __out164;
  int*** __in165;
  __out164 = v161;
  __in165 = v162;
    int*** t166 = __in165;
    int** t167 = *t166;
    int* t168 = *t167;
    int*** t169 = __out164;
    int** t170 = *t169;
    *t170 = t168;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v171, int** v172, int** v173) {
bb174:
  int** __first175;
  int** __last176;
  int** __result177;
  int** __retval178;
  __first175 = v171;
  __last176 = v172;
  __result177 = v173;
      _Bool r179 = std____is_constant_evaluated();
      if (r179) {
      } else {
          long __n180;
          int** t181 = __first175;
          int** t182 = __last176;
          long r183 = std__iterator_traits_int_____difference_type_std__distance_int___(t181, t182);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n180 = r183;
            long t184 = __n180;
            long c185 = 1;
            _Bool c186 = ((t184 > c185)) ? 1 : 0;
            if (c186) {
              int** t187 = __result177;
              void* cast188 = (void*)t187;
              int** t189 = __first175;
              void* cast190 = (void*)t189;
              long t191 = __n180;
              unsigned long cast192 = (unsigned long)t191;
              unsigned long c193 = 8;
              unsigned long b194 = cast192 * c193;
              void* r195 = memmove(cast188, cast190, b194);
              long t196 = __n180;
              int** t197 = __result177;
              int** ptr198 = &(t197)[t196];
              __result177 = ptr198;
            } else {
                long t199 = __n180;
                long c200 = 1;
                _Bool c201 = ((t199 == c200)) ? 1 : 0;
                if (c201) {
                  void_std____assign_one_false__int____int___(&__result177, &__first175);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t202 = __result177;
                  int c203 = 1;
                  int** ptr204 = &(t202)[c203];
                  __result177 = ptr204;
                }
            }
          int** t205 = __result177;
          __retval178 = t205;
          int** t206 = __retval178;
          return t206;
      }
    while (1) {
      int** t208 = __first175;
      int** t209 = __last176;
      _Bool c210 = ((t208 != t209)) ? 1 : 0;
      if (!c210) break;
      void_std____assign_one_false__int____int___(&__result177, &__first175);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step207: ;
      int** t211 = __result177;
      int c212 = 1;
      int** ptr213 = &(t211)[c212];
      __result177 = ptr213;
      int** t214 = __first175;
      int c215 = 1;
      int** ptr216 = &(t214)[c215];
      __first175 = ptr216;
    }
  int** t217 = __result177;
  __retval178 = t217;
  int** t218 = __retval178;
  return t218;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v219, int** v220, int** v221) {
bb222:
  int** __first223;
  int** __last224;
  int** __result225;
  int** __retval226;
  __first223 = v219;
  __last224 = v220;
  __result225 = v221;
  int** t227 = __first223;
  int** t228 = __last224;
  int** t229 = __result225;
  int** r230 = int___std____copy_move_a2_false__int____int____int___(t227, t228, t229);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval226 = r230;
  int** t231 = __retval226;
  return t231;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v232) {
bb233:
  int** __it234;
  int** __retval235;
  __it234 = v232;
  int** t236 = __it234;
  __retval235 = t236;
  int** t237 = __retval235;
  return t237;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v238, int** v239, int** v240) {
bb241:
  int** __first242;
  int** __last243;
  int** __result244;
  int** __retval245;
  __first242 = v238;
  __last243 = v239;
  __result244 = v240;
  int** t246 = __first242;
  int** r247 = int___std____niter_base_int___(t246);
  int** t248 = __last243;
  int** r249 = int___std____niter_base_int___(t248);
  int** t250 = __result244;
  int** r251 = int___std____niter_base_int___(t250);
  int** r252 = int___std____copy_move_a1_false__int____int___(r247, r249, r251);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r253 = int___std____niter_wrap_int___(&__result244, r252);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval245 = r253;
  int** t254 = __retval245;
  return t254;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v255) {
bb256:
  int** __it257;
  int** __retval258;
  __it257 = v255;
  int** t259 = __it257;
  __retval258 = t259;
  int** t260 = __retval258;
  return t260;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v261, int** v262, int** v263) {
bb264:
  int** __first265;
  int** __last266;
  int** __result267;
  int** __retval268;
  __first265 = v261;
  __last266 = v262;
  __result267 = v263;
  int** t269 = __first265;
  int** r270 = int___std____miter_base_int___(t269);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t271 = __last266;
  int** r272 = int___std____miter_base_int___(t271);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t273 = __result267;
  int** r274 = int___std____copy_move_a_false__int____int___(r270, r272, t273);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval268 = r274;
  int** t275 = __retval268;
  return t275;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb276:
  _Bool __retval277;
    _Bool c278 = 0;
    __retval277 = c278;
    _Bool t279 = __retval277;
    return t279;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v280, long v281, struct std__random_access_iterator_tag v282) {
bb283:
  int*** __i284;
  long __n285;
  struct std__random_access_iterator_tag unnamed286;
  __i284 = v280;
  __n285 = v281;
  unnamed286 = v282;
    long t287 = __n285;
    _Bool isconst288 = 0;
    _Bool ternary289;
    if (isconst288) {
      long t290 = __n285;
      long c291 = 1;
      _Bool c292 = ((t290 == c291)) ? 1 : 0;
      ternary289 = (_Bool)c292;
    } else {
      _Bool c293 = 0;
      ternary289 = (_Bool)c293;
    }
    if (ternary289) {
      int*** t294 = __i284;
      int** t295 = *t294;
      int c296 = 1;
      int** ptr297 = &(t295)[c296];
      *t294 = ptr297;
    } else {
        long t298 = __n285;
        _Bool isconst299 = 0;
        _Bool ternary300;
        if (isconst299) {
          long t301 = __n285;
          long c302 = -1;
          _Bool c303 = ((t301 == c302)) ? 1 : 0;
          ternary300 = (_Bool)c303;
        } else {
          _Bool c304 = 0;
          ternary300 = (_Bool)c304;
        }
        if (ternary300) {
          int*** t305 = __i284;
          int** t306 = *t305;
          int c307 = -1;
          int** ptr308 = &(t306)[c307];
          *t305 = ptr308;
        } else {
          long t309 = __n285;
          int*** t310 = __i284;
          int** t311 = *t310;
          int** ptr312 = &(t311)[t309];
          *t310 = ptr312;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v313, long v314) {
bb315:
  int*** __i316;
  long __n317;
  long __d318;
  struct std__random_access_iterator_tag agg_tmp0319;
  __i316 = v313;
  __n317 = v314;
  long t320 = __n317;
  __d318 = t320;
  int*** t321 = __i316;
  long t322 = __d318;
  int*** t323 = __i316;
  struct std__random_access_iterator_tag r324 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t323);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0319 = r324;
  struct std__random_access_iterator_tag t325 = agg_tmp0319;
  void_std____advance_int____long_(t321, t322, t325);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v326, int** v327, int** v328) {
bb329:
  int** __first330;
  int** __last331;
  int** __result332;
  int** __retval333;
  __first330 = v326;
  __last331 = v327;
  __result332 = v328;
      _Bool r334 = std__is_constant_evaluated();
      if (r334) {
      } else {
          long __n335;
          int** t336 = __first330;
          int** t337 = __last331;
          long r338 = std__iterator_traits_int_____difference_type_std__distance_int___(t336, t337);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n335 = r338;
          long t339 = __n335;
          long u340 = -t339;
          void_std__advance_int____long_(&__result332, u340);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t341 = __n335;
            long c342 = 1;
            _Bool c343 = ((t341 > c342)) ? 1 : 0;
            if (c343) {
              int** t344 = __result332;
              void* cast345 = (void*)t344;
              int** t346 = __first330;
              void* cast347 = (void*)t346;
              long t348 = __n335;
              unsigned long cast349 = (unsigned long)t348;
              unsigned long c350 = 8;
              unsigned long b351 = cast349 * c350;
              void* r352 = memmove(cast345, cast347, b351);
            } else {
                long t353 = __n335;
                long c354 = 1;
                _Bool c355 = ((t353 == c354)) ? 1 : 0;
                if (c355) {
                  void_std____assign_one_false__int____int___(&__result332, &__first330);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t356 = __result332;
          __retval333 = t356;
          int** t357 = __retval333;
          return t357;
      }
    while (1) {
      int** t358 = __first330;
      int** t359 = __last331;
      _Bool c360 = ((t358 != t359)) ? 1 : 0;
      if (!c360) break;
        int** t361 = __last331;
        int c362 = -1;
        int** ptr363 = &(t361)[c362];
        __last331 = ptr363;
        int** t364 = __result332;
        int c365 = -1;
        int** ptr366 = &(t364)[c365];
        __result332 = ptr366;
        void_std____assign_one_false__int____int___(&__result332, &__last331);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t367 = __result332;
  __retval333 = t367;
  int** t368 = __retval333;
  return t368;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v369, int** v370, int** v371) {
bb372:
  int** __first373;
  int** __last374;
  int** __result375;
  int** __retval376;
  __first373 = v369;
  __last374 = v370;
  __result375 = v371;
  int** t377 = __first373;
  int** t378 = __last374;
  int** t379 = __result375;
  int** r380 = int___std____copy_move_backward_a2_false__int____int___(t377, t378, t379);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval376 = r380;
  int** t381 = __retval376;
  return t381;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v382, int** v383, int** v384) {
bb385:
  int** __first386;
  int** __last387;
  int** __result388;
  int** __retval389;
  __first386 = v382;
  __last387 = v383;
  __result388 = v384;
  int** t390 = __first386;
  int** r391 = int___std____niter_base_int___(t390);
  int** t392 = __last387;
  int** r393 = int___std____niter_base_int___(t392);
  int** t394 = __result388;
  int** r395 = int___std____niter_base_int___(t394);
  int** r396 = int___std____copy_move_backward_a1_false__int____int___(r391, r393, r395);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r397 = int___std____niter_wrap_int___(&__result388, r396);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval389 = r397;
  int** t398 = __retval389;
  return t398;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v399, int** v400, int** v401) {
bb402:
  int** __first403;
  int** __last404;
  int** __result405;
  int** __retval406;
  __first403 = v399;
  __last404 = v400;
  __result405 = v401;
  int** t407 = __first403;
  int** r408 = int___std____miter_base_int___(t407);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t409 = __last404;
  int** r410 = int___std____miter_base_int___(t409);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t411 = __result405;
  int** r412 = int___std____copy_move_backward_a_false__int____int___(r408, r410, t411);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval406 = r412;
  int** t413 = __retval406;
  return t413;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v414, unsigned long v415, _Bool v416) {
bb417:
  struct std__deque_int__std__allocator_int__* this418;
  unsigned long __nodes_to_add419;
  _Bool __add_at_front420;
  unsigned long __old_num_nodes421;
  unsigned long __new_num_nodes422;
  int** __new_nstart423;
  this418 = v414;
  __nodes_to_add419 = v415;
  __add_at_front420 = v416;
  struct std__deque_int__std__allocator_int__* t424 = this418;
  struct std___Deque_base_int__std__allocator_int__* base425 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base426 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base425->_M_impl) + 0);
  int** t427 = base426->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base428 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base429 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base428->_M_impl) + 0);
  int** t430 = base429->_M_start._M_node;
  long diff431 = t427 - t430;
  long c432 = 1;
  long b433 = diff431 + c432;
  unsigned long cast434 = (unsigned long)b433;
  __old_num_nodes421 = cast434;
  unsigned long t435 = __old_num_nodes421;
  unsigned long t436 = __nodes_to_add419;
  unsigned long b437 = t435 + t436;
  __new_num_nodes422 = b437;
    struct std___Deque_base_int__std__allocator_int__* base438 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base439 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base438->_M_impl) + 0);
    unsigned long t440 = base439->_M_map_size;
    unsigned long c441 = 2;
    unsigned long t442 = __new_num_nodes422;
    unsigned long b443 = c441 * t442;
    _Bool c444 = ((t440 > b443)) ? 1 : 0;
    if (c444) {
      struct std___Deque_base_int__std__allocator_int__* base445 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base446 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base445->_M_impl) + 0);
      int** t447 = base446->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base448 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base449 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base448->_M_impl) + 0);
      unsigned long t450 = base449->_M_map_size;
      unsigned long t451 = __new_num_nodes422;
      unsigned long b452 = t450 - t451;
      unsigned long c453 = 2;
      unsigned long b454 = b452 / c453;
      int** ptr455 = &(t447)[b454];
      _Bool t456 = __add_at_front420;
      unsigned long ternary457;
      if (t456) {
        unsigned long t458 = __nodes_to_add419;
        ternary457 = (unsigned long)t458;
      } else {
        unsigned long c459 = 0;
        ternary457 = (unsigned long)c459;
      }
      int** ptr460 = &(ptr455)[ternary457];
      __new_nstart423 = ptr460;
        int** t461 = __new_nstart423;
        struct std___Deque_base_int__std__allocator_int__* base462 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base463 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base462->_M_impl) + 0);
        int** t464 = base463->_M_start._M_node;
        _Bool c465 = ((t461 < t464)) ? 1 : 0;
        if (c465) {
          struct std___Deque_base_int__std__allocator_int__* base466 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base467 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base466->_M_impl) + 0);
          int** t468 = base467->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base469 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base470 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base469->_M_impl) + 0);
          int** t471 = base470->_M_finish._M_node;
          int c472 = 1;
          int** ptr473 = &(t471)[c472];
          int** t474 = __new_nstart423;
          int** r475 = int___std__copy_int____int___(t468, ptr473, t474);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base476 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base477 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base476->_M_impl) + 0);
          int** t478 = base477->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base479 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base480 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base479->_M_impl) + 0);
          int** t481 = base480->_M_finish._M_node;
          int c482 = 1;
          int** ptr483 = &(t481)[c482];
          int** t484 = __new_nstart423;
          unsigned long t485 = __old_num_nodes421;
          int** ptr486 = &(t484)[t485];
          int** r487 = int___std__copy_backward_int____int___(t478, ptr483, ptr486);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size488;
      unsigned long __bufsz489;
      int** __new_map490;
      struct std___Deque_base_int__std__allocator_int__* base491 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base492 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base491->_M_impl) + 0);
      unsigned long t493 = base492->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base494 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base495 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base494->_M_impl) + 0);
      unsigned long* r496 = unsigned_long_const__std__max_unsigned_long_(&base495->_M_map_size, &__nodes_to_add419);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t497 = *r496;
      unsigned long b498 = t493 + t497;
      unsigned long c499 = 2;
      unsigned long b500 = b498 + c499;
      __new_map_size488 = b500;
      unsigned long c501 = 128;
      __bufsz489 = c501;
        unsigned long t502 = __new_map_size488;
        unsigned long r503 = std__deque_int__std__allocator_int_____max_size___const(t424);
        unsigned long t504 = __bufsz489;
        unsigned long b505 = r503 + t504;
        unsigned long c506 = 1;
        unsigned long b507 = b505 - c506;
        unsigned long t508 = __bufsz489;
        unsigned long b509 = b507 / t508;
        unsigned long c510 = 2;
        unsigned long b511 = b509 * c510;
        _Bool c512 = ((t502 > b511)) ? 1 : 0;
        if (c512) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base513 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      unsigned long t514 = __new_map_size488;
      int** r515 = std___Deque_base_int__std__allocator_int______M_allocate_map(base513, t514);
      if (__cir_exc_active) {
        return;
      }
      __new_map490 = r515;
      int** t516 = __new_map490;
      unsigned long t517 = __new_map_size488;
      unsigned long t518 = __new_num_nodes422;
      unsigned long b519 = t517 - t518;
      unsigned long c520 = 2;
      unsigned long b521 = b519 / c520;
      int** ptr522 = &(t516)[b521];
      _Bool t523 = __add_at_front420;
      unsigned long ternary524;
      if (t523) {
        unsigned long t525 = __nodes_to_add419;
        ternary524 = (unsigned long)t525;
      } else {
        unsigned long c526 = 0;
        ternary524 = (unsigned long)c526;
      }
      int** ptr527 = &(ptr522)[ternary524];
      __new_nstart423 = ptr527;
      struct std___Deque_base_int__std__allocator_int__* base528 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base529 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base528->_M_impl) + 0);
      int** t530 = base529->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base531 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base532 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base531->_M_impl) + 0);
      int** t533 = base532->_M_finish._M_node;
      int c534 = 1;
      int** ptr535 = &(t533)[c534];
      int** t536 = __new_nstart423;
      int** r537 = int___std__copy_int____int___(t530, ptr535, t536);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base538 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int__* base539 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base540 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base539->_M_impl) + 0);
      int** t541 = base540->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base542 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base543 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base542->_M_impl) + 0);
      unsigned long t544 = base543->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base538, t541, t544);
      int** t545 = __new_map490;
      struct std___Deque_base_int__std__allocator_int__* base546 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base547 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base546->_M_impl) + 0);
      base547->_M_map = t545;
      unsigned long t548 = __new_map_size488;
      struct std___Deque_base_int__std__allocator_int__* base549 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base550 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base549->_M_impl) + 0);
      base550->_M_map_size = t548;
    }
  struct std___Deque_base_int__std__allocator_int__* base551 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base552 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base551->_M_impl) + 0);
  int** t553 = __new_nstart423;
  std___Deque_iterator_int__int___int_____M_set_node(&base552->_M_start, t553);
  struct std___Deque_base_int__std__allocator_int__* base554 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t424 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base555 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base554->_M_impl) + 0);
  int** t556 = __new_nstart423;
  unsigned long t557 = __old_num_nodes421;
  int** ptr558 = &(t556)[t557];
  int c559 = -1;
  int** ptr560 = &(ptr558)[c559];
  std___Deque_iterator_int__int___int_____M_set_node(&base555->_M_finish, ptr560);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v561, unsigned long v562) {
bb563:
  struct std__deque_int__std__allocator_int__* this564;
  unsigned long __nodes_to_add565;
  this564 = v561;
  __nodes_to_add565 = v562;
  struct std__deque_int__std__allocator_int__* t566 = this564;
    unsigned long t567 = __nodes_to_add565;
    unsigned long c568 = 1;
    unsigned long b569 = t567 + c568;
    struct std___Deque_base_int__std__allocator_int__* base570 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t566 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base571 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base570->_M_impl) + 0);
    unsigned long t572 = base571->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base573 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t566 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base574 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base573->_M_impl) + 0);
    int** t575 = base574->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base576 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t566 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base577 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base576->_M_impl) + 0);
    int** t578 = base577->_M_map;
    long diff579 = t575 - t578;
    unsigned long cast580 = (unsigned long)diff579;
    unsigned long b581 = t572 - cast580;
    _Bool c582 = ((b569 > b581)) ? 1 : 0;
    if (c582) {
      unsigned long t583 = __nodes_to_add565;
      _Bool c584 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t566, t583, c584);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v585, int* v586) {
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
      char* cast594 = (char*)&(_str_3);
      std____throw_length_error(cast594);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c595 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t590, c595);
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
  int** t600 = base599->_M_finish._M_node;
  int c601 = 1;
  int** ptr602 = &(t600)[c601];
  *ptr602 = r597;
      struct std___Deque_base_int__std__allocator_int__* base604 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std__allocator_int_* base605 = (struct std__allocator_int_*)((char *)&(base604->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base606 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base607 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base606->_M_impl) + 0);
      int* t608 = base607->_M_finish._M_cur;
      int* t609 = __args589;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base605, t608, t609);
      struct std___Deque_base_int__std__allocator_int__* base610 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base611 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base610->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base612 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base613 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base612->_M_impl) + 0);
      int** t614 = base613->_M_finish._M_node;
      int c615 = 1;
      int** ptr616 = &(t614)[c615];
      std___Deque_iterator_int__int___int_____M_set_node(&base611->_M_finish, ptr616);
      struct std___Deque_base_int__std__allocator_int__* base617 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base618 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base617->_M_impl) + 0);
      int* t619 = base618->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base620 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base621 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base620->_M_impl) + 0);
      base621->_M_finish._M_cur = t619;
    cir_try_dispatch603: ;
    if (__cir_exc_active) {
    {
      int ca_tok622 = 0;
      void* ca_exn623 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base624 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
        struct std___Deque_base_int__std__allocator_int__* base625 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t590 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base626 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base625->_M_impl) + 0);
        int** t627 = base626->_M_finish._M_node;
        int c628 = 1;
        int** ptr629 = &(t627)[c628];
        int* t630 = *ptr629;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base624, t630);
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
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v631, int* v632) {
bb633:
  struct std__deque_int__std__allocator_int__* this634;
  int* __x635;
  this634 = v631;
  __x635 = v632;
  struct std__deque_int__std__allocator_int__* t636 = this634;
    struct std___Deque_base_int__std__allocator_int__* base637 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t636 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base638 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base637->_M_impl) + 0);
    int* t639 = base638->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base640 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t636 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base641 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base640->_M_impl) + 0);
    int* t642 = base641->_M_finish._M_last;
    int c643 = -1;
    int* ptr644 = &(t642)[c643];
    _Bool c645 = ((t639 != ptr644)) ? 1 : 0;
    if (c645) {
      struct std___Deque_base_int__std__allocator_int__* base646 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t636 + 0);
      struct std__allocator_int_* base647 = (struct std__allocator_int_*)((char *)&(base646->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base648 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t636 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base649 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base648->_M_impl) + 0);
      int* t650 = base649->_M_finish._M_cur;
      int* t651 = __x635;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base647, t650, t651);
      struct std___Deque_base_int__std__allocator_int__* base652 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t636 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base653 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base652->_M_impl) + 0);
      int* t654 = base653->_M_finish._M_cur;
      int c655 = 1;
      int* ptr656 = &(t654)[c655];
      base653->_M_finish._M_cur = ptr656;
    } else {
      int* t657 = __x635;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t636, t657);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE4pushERKi
void std__stack_int__std__deque_int__std__allocator_int_______push(struct std__stack_int__std__deque_int__std__allocator_int___* v658, int* v659) {
bb660:
  struct std__stack_int__std__deque_int__std__allocator_int___* this661;
  int* __x662;
  this661 = v658;
  __x662 = v659;
  struct std__stack_int__std__deque_int__std__allocator_int___* t663 = this661;
  int* t664 = __x662;
  std__deque_int__std__allocator_int_____push_back(&t663->c, t664);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v665) {
bb666:
  struct std__allocator_int_* __a667;
  unsigned long __retval668;
  unsigned long __diffmax669;
  unsigned long __allocmax670;
  __a667 = v665;
  unsigned long c671 = 2305843009213693951;
  __diffmax669 = c671;
  unsigned long c672 = 4611686018427387903;
  __allocmax670 = c672;
  unsigned long* r673 = unsigned_long_const__std__min_unsigned_long_(&__diffmax669, &__allocmax670);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t674 = *r673;
  __retval668 = t674;
  unsigned long t675 = __retval668;
  return t675;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v676) {
bb677:
  struct std___Vector_base_int__std__allocator_int__* this678;
  struct std__allocator_int_* __retval679;
  this678 = v676;
  struct std___Vector_base_int__std__allocator_int__* t680 = this678;
  struct std__allocator_int_* base681 = (struct std__allocator_int_*)((char *)&(t680->_M_impl) + 0);
  __retval679 = base681;
  struct std__allocator_int_* t682 = __retval679;
  return t682;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v683) {
bb684:
  struct std__vector_int__std__allocator_int__* this685;
  unsigned long __retval686;
  this685 = v683;
  struct std__vector_int__std__allocator_int__* t687 = this685;
  struct std___Vector_base_int__std__allocator_int__* base688 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t687 + 0);
  struct std__allocator_int_* r689 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base688);
  unsigned long r690 = std__vector_int__std__allocator_int______S_max_size(r689);
  __retval686 = r690;
  unsigned long t691 = __retval686;
  return t691;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v692) {
bb693:
  struct std__vector_int__std__allocator_int__* this694;
  unsigned long __retval695;
  long __dif696;
  this694 = v692;
  struct std__vector_int__std__allocator_int__* t697 = this694;
  struct std___Vector_base_int__std__allocator_int__* base698 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base699 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base698->_M_impl) + 0);
  int* t700 = base699->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base701 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base702 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base701->_M_impl) + 0);
  int* t703 = base702->_M_start;
  long diff704 = t700 - t703;
  __dif696 = diff704;
    long t705 = __dif696;
    long c706 = 0;
    _Bool c707 = ((t705 < c706)) ? 1 : 0;
    if (c707) {
      __builtin_unreachable();
    }
  long t708 = __dif696;
  unsigned long cast709 = (unsigned long)t708;
  __retval695 = cast709;
  unsigned long t710 = __retval695;
  return t710;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v711, unsigned long v712, char* v713) {
bb714:
  struct std__vector_int__std__allocator_int__* this715;
  unsigned long __n716;
  char* __s717;
  unsigned long __retval718;
  unsigned long __len719;
  unsigned long ref_tmp0720;
  this715 = v711;
  __n716 = v712;
  __s717 = v713;
  struct std__vector_int__std__allocator_int__* t721 = this715;
    unsigned long r722 = std__vector_int__std__allocator_int_____max_size___const(t721);
    unsigned long r723 = std__vector_int__std__allocator_int_____size___const(t721);
    unsigned long b724 = r722 - r723;
    unsigned long t725 = __n716;
    _Bool c726 = ((b724 < t725)) ? 1 : 0;
    if (c726) {
      char* t727 = __s717;
      std____throw_length_error(t727);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long r728 = std__vector_int__std__allocator_int_____size___const(t721);
  unsigned long r729 = std__vector_int__std__allocator_int_____size___const(t721);
  ref_tmp0720 = r729;
  unsigned long* r730 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0720, &__n716);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t731 = *r730;
  unsigned long b732 = r728 + t731;
  __len719 = b732;
  unsigned long t733 = __len719;
  unsigned long r734 = std__vector_int__std__allocator_int_____size___const(t721);
  _Bool c735 = ((t733 < r734)) ? 1 : 0;
  _Bool ternary736;
  if (c735) {
    _Bool c737 = 1;
    ternary736 = (_Bool)c737;
  } else {
    unsigned long t738 = __len719;
    unsigned long r739 = std__vector_int__std__allocator_int_____max_size___const(t721);
    _Bool c740 = ((t738 > r739)) ? 1 : 0;
    ternary736 = (_Bool)c740;
  }
  unsigned long ternary741;
  if (ternary736) {
    unsigned long r742 = std__vector_int__std__allocator_int_____max_size___const(t721);
    ternary741 = (unsigned long)r742;
  } else {
    unsigned long t743 = __len719;
    ternary741 = (unsigned long)t743;
  }
  __retval718 = ternary741;
  unsigned long t744 = __retval718;
  return t744;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v745) {
bb746:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this747;
  int** __retval748;
  this747 = v745;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t749 = this747;
  __retval748 = &t749->_M_current;
  int** t750 = __retval748;
  return t750;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v751, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v752) {
bb753:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs754;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs755;
  long __retval756;
  __lhs754 = v751;
  __rhs755 = v752;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t757 = __lhs754;
  int** r758 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t757);
  int* t759 = *r758;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t760 = __rhs755;
  int** r761 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t760);
  int* t762 = *r761;
  long diff763 = t759 - t762;
  __retval756 = diff763;
  long t764 = __retval756;
  return t764;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v765, int** v766) {
bb767:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this768;
  int** __i769;
  this768 = v765;
  __i769 = v766;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t770 = this768;
  int** t771 = __i769;
  int* t772 = *t771;
  t770->_M_current = t772;
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v773) {
bb774:
  struct std__vector_int__std__allocator_int__* this775;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval776;
  this775 = v773;
  struct std__vector_int__std__allocator_int__* t777 = this775;
  struct std___Vector_base_int__std__allocator_int__* base778 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t777 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base779 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base778->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval776, &base779->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t780 = __retval776;
  return t780;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v781) {
bb782:
  struct std__vector_int__std__allocator_int__* this783;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval784;
  this783 = v781;
  struct std__vector_int__std__allocator_int__* t785 = this783;
  struct std___Vector_base_int__std__allocator_int__* base786 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t785 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base787 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base786->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval784, &base787->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t788 = __retval784;
  return t788;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v789, unsigned long v790) {
bb791:
  struct std___Vector_base_int__std__allocator_int__* this792;
  unsigned long __n793;
  int* __retval794;
  this792 = v789;
  __n793 = v790;
  struct std___Vector_base_int__std__allocator_int__* t795 = this792;
  unsigned long t796 = __n793;
  unsigned long c797 = 0;
  _Bool c798 = ((t796 != c797)) ? 1 : 0;
  int* ternary799;
  if (c798) {
    struct std__allocator_int_* base800 = (struct std__allocator_int_*)((char *)&(t795->_M_impl) + 0);
    unsigned long t801 = __n793;
    int* r802 = std__allocator_traits_std__allocator_int_____allocate(base800, t801);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary799 = (int*)r802;
  } else {
    int* c803 = ((void*)0);
    ternary799 = (int*)c803;
  }
  __retval794 = ternary799;
  int* t804 = __retval794;
  return t804;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v805, int* v806, unsigned long v807, struct std___Vector_base_int__std__allocator_int__* v808) {
bb809:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this810;
  int* __s811;
  unsigned long __l812;
  struct std___Vector_base_int__std__allocator_int__* __vect813;
  this810 = v805;
  __s811 = v806;
  __l812 = v807;
  __vect813 = v808;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t814 = this810;
  int* t815 = __s811;
  t814->_M_storage = t815;
  unsigned long t816 = __l812;
  t814->_M_len = t816;
  struct std___Vector_base_int__std__allocator_int__* t817 = __vect813;
  t814->_M_vect = t817;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v818) {
bb819:
  int* __ptr820;
  int* __retval821;
  __ptr820 = v818;
  int* t822 = __ptr820;
  __retval821 = t822;
  int* t823 = __retval821;
  return t823;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v824) {
bb825:
  int** __ptr826;
  int* __retval827;
  __ptr826 = v824;
  int** t828 = __ptr826;
  int* t829 = *t828;
  int* r830 = int__std__to_address_int_(t829);
  __retval827 = r830;
  int* t831 = __retval827;
  return t831;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v832, int** v833) {
bb834:
  struct __gnu_cxx____normal_iterator_int____void_* this835;
  int** __i836;
  this835 = v832;
  __i836 = v833;
  struct __gnu_cxx____normal_iterator_int____void_* t837 = this835;
  int** t838 = __i836;
  int* t839 = *t838;
  t837->_M_current = t839;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v840, int* v841) {
bb842:
  int* __location843;
  int* __args844;
  int* __retval845;
  void* __loc846;
  __location843 = v840;
  __args844 = v841;
  int* t847 = __location843;
  void* cast848 = (void*)t847;
  __loc846 = cast848;
    void* t849 = __loc846;
    int* cast850 = (int*)t849;
    int* t851 = __args844;
    int t852 = *t851;
    *cast850 = t852;
    __retval845 = cast850;
    int* t853 = __retval845;
    return t853;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v854, int* v855, int* v856) {
bb857:
  struct std__allocator_int_* __a858;
  int* __p859;
  int* __args860;
  __a858 = v854;
  __p859 = v855;
  __args860 = v856;
  int* t861 = __p859;
  int* t862 = __args860;
  int* r863 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t861, t862);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v864, int* v865) {
bb866:
  struct std__allocator_int_* __a867;
  int* __p868;
  __a867 = v864;
  __p868 = v865;
  int* t869 = __p868;
  void_std__destroy_at_int_(t869);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v870, int* v871, struct std__allocator_int_* v872) {
bb873:
  int* __dest874;
  int* __orig875;
  struct std__allocator_int_* __alloc876;
  __dest874 = v870;
  __orig875 = v871;
  __alloc876 = v872;
  struct std__allocator_int_* t877 = __alloc876;
  int* t878 = __dest874;
  int* t879 = __orig875;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t877, t878, t879);
  struct std__allocator_int_* t880 = __alloc876;
  int* t881 = __orig875;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t880, t881);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v882) {
bb883:
  struct __gnu_cxx____normal_iterator_int____void_* this884;
  int* __retval885;
  this884 = v882;
  struct __gnu_cxx____normal_iterator_int____void_* t886 = this884;
  int* t887 = t886->_M_current;
  __retval885 = t887;
  int* t888 = __retval885;
  return t888;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v889) {
bb890:
  struct __gnu_cxx____normal_iterator_int____void_* this891;
  struct __gnu_cxx____normal_iterator_int____void_* __retval892;
  this891 = v889;
  struct __gnu_cxx____normal_iterator_int____void_* t893 = this891;
  int* t894 = t893->_M_current;
  int c895 = 1;
  int* ptr896 = &(t894)[c895];
  t893->_M_current = ptr896;
  __retval892 = t893;
  struct __gnu_cxx____normal_iterator_int____void_* t897 = __retval892;
  return t897;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v898, int* v899, struct __gnu_cxx____normal_iterator_int____void_ v900, struct std__allocator_int_* v901) {
bb902:
  int* __first903;
  int* __last904;
  struct __gnu_cxx____normal_iterator_int____void_ __result905;
  struct std__allocator_int_* __alloc906;
  struct __gnu_cxx____normal_iterator_int____void_ __retval907;
  __first903 = v898;
  __last904 = v899;
  __result905 = v900;
  __alloc906 = v901;
  __retval907 = __result905; // copy
    while (1) {
      int* t909 = __first903;
      int* t910 = __last904;
      _Bool c911 = ((t909 != t910)) ? 1 : 0;
      if (!c911) break;
      int* r912 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval907);
      int* t913 = __first903;
      struct std__allocator_int_* t914 = __alloc906;
      void_std____relocate_object_a_int__int__std__allocator_int___(r912, t913, t914);
    for_step908: ;
      int* t915 = __first903;
      int c916 = 1;
      int* ptr917 = &(t915)[c916];
      __first903 = ptr917;
      struct __gnu_cxx____normal_iterator_int____void_* r918 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval907);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t919 = __retval907;
  return t919;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v920, struct __gnu_cxx____normal_iterator_int____void_* v921) {
bb922:
  struct __gnu_cxx____normal_iterator_int____void_* this923;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed924;
  struct __gnu_cxx____normal_iterator_int____void_* __retval925;
  this923 = v920;
  unnamed924 = v921;
  struct __gnu_cxx____normal_iterator_int____void_* t926 = this923;
  struct __gnu_cxx____normal_iterator_int____void_* t927 = unnamed924;
  int* t928 = t927->_M_current;
  t926->_M_current = t928;
  __retval925 = t926;
  struct __gnu_cxx____normal_iterator_int____void_* t929 = __retval925;
  return t929;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v930) {
bb931:
  struct __gnu_cxx____normal_iterator_int____void_* this932;
  int** __retval933;
  this932 = v930;
  struct __gnu_cxx____normal_iterator_int____void_* t934 = this932;
  __retval933 = &t934->_M_current;
  int** t935 = __retval933;
  return t935;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v936, int* v937, int* v938, struct std__allocator_int_* v939) {
bb940:
  int* __first941;
  int* __last942;
  int* __result943;
  struct std__allocator_int_* __alloc944;
  int* __retval945;
  long __count946;
  __first941 = v936;
  __last942 = v937;
  __result943 = v938;
  __alloc944 = v939;
  int* t947 = __last942;
  int* t948 = __first941;
  long diff949 = t947 - t948;
  __count946 = diff949;
    long t950 = __count946;
    long c951 = 0;
    _Bool c952 = ((t950 > c951)) ? 1 : 0;
    if (c952) {
        _Bool r953 = std__is_constant_evaluated();
        if (r953) {
          struct __gnu_cxx____normal_iterator_int____void_ __out954;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0955;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0956;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out954, &__result943);
          int* t957 = __first941;
          int* t958 = __last942;
          agg_tmp0956 = __out954; // copy
          struct std__allocator_int_* t959 = __alloc944;
          struct __gnu_cxx____normal_iterator_int____void_ t960 = agg_tmp0956;
          struct __gnu_cxx____normal_iterator_int____void_ r961 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t957, t958, t960, t959);
          ref_tmp0955 = r961;
          struct __gnu_cxx____normal_iterator_int____void_* r962 = __gnu_cxx____normal_iterator_int___void___operator_(&__out954, &ref_tmp0955);
          int** r963 = __gnu_cxx____normal_iterator_int___void___base___const(&__out954);
          int* t964 = *r963;
          __retval945 = t964;
          int* t965 = __retval945;
          return t965;
        }
      int* t966 = __result943;
      void* cast967 = (void*)t966;
      int* t968 = __first941;
      void* cast969 = (void*)t968;
      long t970 = __count946;
      unsigned long cast971 = (unsigned long)t970;
      unsigned long c972 = 4;
      unsigned long b973 = cast971 * c972;
      void* r974 = memcpy(cast967, cast969, b973);
    }
  int* t975 = __result943;
  long t976 = __count946;
  int* ptr977 = &(t975)[t976];
  __retval945 = ptr977;
  int* t978 = __retval945;
  return t978;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v979) {
bb980:
  int* __it981;
  int* __retval982;
  __it981 = v979;
  int* t983 = __it981;
  __retval982 = t983;
  int* t984 = __retval982;
  return t984;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v985, int* v986, int* v987, struct std__allocator_int_* v988) {
bb989:
  int* __first990;
  int* __last991;
  int* __result992;
  struct std__allocator_int_* __alloc993;
  int* __retval994;
  __first990 = v985;
  __last991 = v986;
  __result992 = v987;
  __alloc993 = v988;
  int* t995 = __first990;
  int* r996 = int__std____niter_base_int__(t995);
  int* t997 = __last991;
  int* r998 = int__std____niter_base_int__(t997);
  int* t999 = __result992;
  int* r1000 = int__std____niter_base_int__(t999);
  struct std__allocator_int_* t1001 = __alloc993;
  int* r1002 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r996, r998, r1000, t1001);
  __retval994 = r1002;
  int* t1003 = __retval994;
  return t1003;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v1004, int* v1005, int* v1006, struct std__allocator_int_* v1007) {
bb1008:
  int* __first1009;
  int* __last1010;
  int* __result1011;
  struct std__allocator_int_* __alloc1012;
  int* __retval1013;
  __first1009 = v1004;
  __last1010 = v1005;
  __result1011 = v1006;
  __alloc1012 = v1007;
  int* t1014 = __first1009;
  int* t1015 = __last1010;
  int* t1016 = __result1011;
  struct std__allocator_int_* t1017 = __alloc1012;
  int* r1018 = int__std____relocate_a_int___int___std__allocator_int___(t1014, t1015, t1016, t1017);
  __retval1013 = r1018;
  int* t1019 = __retval1013;
  return t1019;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v1020) {
bb1021:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this1022;
  this1022 = v1020;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t1023 = this1022;
    int* t1024 = t1023->_M_storage;
    _Bool cast1025 = (_Bool)t1024;
    if (cast1025) {
      struct std___Vector_base_int__std__allocator_int__* t1026 = t1023->_M_vect;
      int* t1027 = t1023->_M_storage;
      unsigned long t1028 = t1023->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t1026, t1027, t1028);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v1029, int* v1030) {
bb1031:
  struct std__vector_int__std__allocator_int__* this1032;
  int* __args1033;
  unsigned long __len1034;
  int* __old_start1035;
  int* __old_finish1036;
  unsigned long __elems1037;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01038;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11039;
  int* __new_start1040;
  int* __new_finish1041;
  this1032 = v1029;
  __args1033 = v1030;
  struct std__vector_int__std__allocator_int__* t1042 = this1032;
  unsigned long c1043 = 1;
  char* cast1044 = (char*)&(_str_4);
  unsigned long r1045 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1042, c1043, cast1044);
  if (__cir_exc_active) {
    return;
  }
  __len1034 = r1045;
    unsigned long t1046 = __len1034;
    unsigned long c1047 = 0;
    _Bool c1048 = ((t1046 <= c1047)) ? 1 : 0;
    if (c1048) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base1049 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1042 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1050 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1049->_M_impl) + 0);
  int* t1051 = base1050->_M_start;
  __old_start1035 = t1051;
  struct std___Vector_base_int__std__allocator_int__* base1052 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1042 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1053 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1052->_M_impl) + 0);
  int* t1054 = base1053->_M_finish;
  __old_finish1036 = t1054;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1055 = std__vector_int__std__allocator_int_____end(t1042);
  ref_tmp01038 = r1055;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1056 = std__vector_int__std__allocator_int_____begin(t1042);
  ref_tmp11039 = r1056;
  long r1057 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp01038, &ref_tmp11039);
  unsigned long cast1058 = (unsigned long)r1057;
  __elems1037 = cast1058;
  struct std___Vector_base_int__std__allocator_int__* base1059 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1042 + 0);
  unsigned long t1060 = __len1034;
  int* r1061 = std___Vector_base_int__std__allocator_int______M_allocate(base1059, t1060);
  if (__cir_exc_active) {
    return;
  }
  __new_start1040 = r1061;
  int* t1062 = __new_start1040;
  __new_finish1041 = t1062;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard1063;
    int* ref_tmp21064;
    int* t1065 = __new_start1040;
    unsigned long t1066 = __len1034;
    struct std___Vector_base_int__std__allocator_int__* base1067 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1042 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard1063, t1065, t1066, base1067);
    if (__cir_exc_active) {
      return;
    }
      struct std___Vector_base_int__std__allocator_int__* base1068 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1042 + 0);
      struct std__allocator_int_* base1069 = (struct std__allocator_int_*)((char *)&(base1068->_M_impl) + 0);
      int* t1070 = __new_start1040;
      unsigned long t1071 = __elems1037;
      int* ptr1072 = &(t1070)[t1071];
      ref_tmp21064 = ptr1072;
      int* r1073 = auto_std____to_address_int__(&ref_tmp21064);
      int* t1074 = __args1033;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base1069, r1073, t1074);
        int* t1075 = __old_start1035;
        int* t1076 = __old_finish1036;
        int* t1077 = __new_start1040;
        struct std___Vector_base_int__std__allocator_int__* base1078 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1042 + 0);
        struct std__allocator_int_* r1079 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1078);
        int* r1080 = std__vector_int__std__allocator_int______S_relocate(t1075, t1076, t1077, r1079);
        __new_finish1041 = r1080;
        int* t1081 = __new_finish1041;
        int c1082 = 1;
        int* ptr1083 = &(t1081)[c1082];
        __new_finish1041 = ptr1083;
      int* t1084 = __old_start1035;
      __guard1063._M_storage = t1084;
      struct std___Vector_base_int__std__allocator_int__* base1085 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1042 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1086 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1085->_M_impl) + 0);
      int* t1087 = base1086->_M_end_of_storage;
      int* t1088 = __old_start1035;
      long diff1089 = t1087 - t1088;
      unsigned long cast1090 = (unsigned long)diff1089;
      __guard1063._M_len = cast1090;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard1063);
    }
  int* t1091 = __new_start1040;
  struct std___Vector_base_int__std__allocator_int__* base1092 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1042 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1093 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1092->_M_impl) + 0);
  base1093->_M_start = t1091;
  int* t1094 = __new_finish1041;
  struct std___Vector_base_int__std__allocator_int__* base1095 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1042 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1096 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1095->_M_impl) + 0);
  base1096->_M_finish = t1094;
  int* t1097 = __new_start1040;
  unsigned long t1098 = __len1034;
  int* ptr1099 = &(t1097)[t1098];
  struct std___Vector_base_int__std__allocator_int__* base1100 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1042 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1101 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1100->_M_impl) + 0);
  base1101->_M_end_of_storage = ptr1099;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v1102, int* v1103) {
bb1104:
  struct std__vector_int__std__allocator_int__* this1105;
  int* __x1106;
  this1105 = v1102;
  __x1106 = v1103;
  struct std__vector_int__std__allocator_int__* t1107 = this1105;
    struct std___Vector_base_int__std__allocator_int__* base1108 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1107 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1109 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1108->_M_impl) + 0);
    int* t1110 = base1109->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1111 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1107 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1112 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1111->_M_impl) + 0);
    int* t1113 = base1112->_M_end_of_storage;
    _Bool c1114 = ((t1110 != t1113)) ? 1 : 0;
    if (c1114) {
      struct std___Vector_base_int__std__allocator_int__* base1115 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1107 + 0);
      struct std__allocator_int_* base1116 = (struct std__allocator_int_*)((char *)&(base1115->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base1117 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1107 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1118 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1117->_M_impl) + 0);
      int* t1119 = base1118->_M_finish;
      int* t1120 = __x1106;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base1116, t1119, t1120);
      struct std___Vector_base_int__std__allocator_int__* base1121 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1107 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1121->_M_impl) + 0);
      int* t1123 = base1122->_M_finish;
      int c1124 = 1;
      int* ptr1125 = &(t1123)[c1124];
      base1122->_M_finish = ptr1125;
    } else {
      int* t1126 = __x1106;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t1107, t1126);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackIiSt6vectorIiSaIiEEE4pushERKi
void std__stack_int__std__vector_int__std__allocator_int_______push(struct std__stack_int__std__vector_int__std__allocator_int___* v1127, int* v1128) {
bb1129:
  struct std__stack_int__std__vector_int__std__allocator_int___* this1130;
  int* __x1131;
  this1130 = v1127;
  __x1131 = v1128;
  struct std__stack_int__std__vector_int__std__allocator_int___* t1132 = this1130;
  int* t1133 = __x1131;
  std__vector_int__std__allocator_int_____push_back(&t1132->c, t1133);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v1134) {
bb1135:
  struct std____cxx11___List_base_int__std__allocator_int__* this1136;
  struct std__allocator_std___List_node_int__* __retval1137;
  this1136 = v1134;
  struct std____cxx11___List_base_int__std__allocator_int__* t1138 = this1136;
  struct std__allocator_std___List_node_int__* base1139 = (struct std__allocator_std___List_node_int__*)((char *)&(t1138->_M_impl) + 0);
  __retval1137 = base1139;
  struct std__allocator_std___List_node_int__* t1140 = __retval1137;
  return t1140;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v1141) {
bb1142:
  struct std____new_allocator_std___List_node_int__* this1143;
  unsigned long __retval1144;
  this1143 = v1141;
  struct std____new_allocator_std___List_node_int__* t1145 = this1143;
  unsigned long c1146 = 9223372036854775807;
  unsigned long c1147 = 24;
  unsigned long b1148 = c1146 / c1147;
  __retval1144 = b1148;
  unsigned long t1149 = __retval1144;
  return t1149;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v1150, unsigned long v1151, void* v1152) {
bb1153:
  struct std____new_allocator_std___List_node_int__* this1154;
  unsigned long __n1155;
  void* unnamed1156;
  struct std___List_node_int_* __retval1157;
  this1154 = v1150;
  __n1155 = v1151;
  unnamed1156 = v1152;
  struct std____new_allocator_std___List_node_int__* t1158 = this1154;
    unsigned long t1159 = __n1155;
    unsigned long r1160 = std____new_allocator_std___List_node_int______M_max_size___const(t1158);
    _Bool c1161 = ((t1159 > r1160)) ? 1 : 0;
    if (c1161) {
        unsigned long t1162 = __n1155;
        unsigned long c1163 = -1;
        unsigned long c1164 = 24;
        unsigned long b1165 = c1163 / c1164;
        _Bool c1166 = ((t1162 > b1165)) ? 1 : 0;
        if (c1166) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1167 = 8;
    unsigned long c1168 = 16;
    _Bool c1169 = ((c1167 > c1168)) ? 1 : 0;
    if (c1169) {
      unsigned long __al1170;
      unsigned long c1171 = 8;
      __al1170 = c1171;
      unsigned long t1172 = __n1155;
      unsigned long c1173 = 24;
      unsigned long b1174 = t1172 * c1173;
      unsigned long t1175 = __al1170;
      void* r1176 = operator_new_2(b1174, t1175);
      if (__cir_exc_active) {
        struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_int_* cast1177 = (struct std___List_node_int_*)r1176;
      __retval1157 = cast1177;
      struct std___List_node_int_* t1178 = __retval1157;
      return t1178;
    }
  unsigned long t1179 = __n1155;
  unsigned long c1180 = 24;
  unsigned long b1181 = t1179 * c1180;
  void* r1182 = operator_new(b1181);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___List_node_int_* cast1183 = (struct std___List_node_int_*)r1182;
  __retval1157 = cast1183;
  struct std___List_node_int_* t1184 = __retval1157;
  return t1184;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v1185, unsigned long v1186) {
bb1187:
  struct std__allocator_std___List_node_int__* this1188;
  unsigned long __n1189;
  struct std___List_node_int_* __retval1190;
  this1188 = v1185;
  __n1189 = v1186;
  struct std__allocator_std___List_node_int__* t1191 = this1188;
    _Bool r1192 = std____is_constant_evaluated();
    if (r1192) {
        unsigned long t1193 = __n1189;
        unsigned long c1194 = 24;
        unsigned long ovr1195;
        _Bool ovf1196 = __builtin_mul_overflow(t1193, c1194, &ovr1195);
        __n1189 = ovr1195;
        if (ovf1196) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1197 = __n1189;
      void* r1198 = operator_new(t1197);
      if (__cir_exc_active) {
        struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_int_* cast1199 = (struct std___List_node_int_*)r1198;
      __retval1190 = cast1199;
      struct std___List_node_int_* t1200 = __retval1190;
      return t1200;
    }
  struct std____new_allocator_std___List_node_int__* base1201 = (struct std____new_allocator_std___List_node_int__*)((char *)t1191 + 0);
  unsigned long t1202 = __n1189;
  void* c1203 = ((void*)0);
  struct std___List_node_int_* r1204 = std____new_allocator_std___List_node_int_____allocate(base1201, t1202, c1203);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1190 = r1204;
  struct std___List_node_int_* t1205 = __retval1190;
  return t1205;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v1206, unsigned long v1207) {
bb1208:
  struct std__allocator_std___List_node_int__* __a1209;
  unsigned long __n1210;
  struct std___List_node_int_* __retval1211;
  __a1209 = v1206;
  __n1210 = v1207;
  struct std__allocator_std___List_node_int__* t1212 = __a1209;
  unsigned long t1213 = __n1210;
  struct std___List_node_int_* r1214 = std__allocator_std___List_node_int_____allocate(t1212, t1213);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1211 = r1214;
  struct std___List_node_int_* t1215 = __retval1211;
  return t1215;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1216, struct std__allocator_std___List_node_int__* v1217, struct std___List_node_int_* v1218) {
bb1219:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1220;
  struct std__allocator_std___List_node_int__* __a1221;
  struct std___List_node_int_* __ptr1222;
  this1220 = v1216;
  __a1221 = v1217;
  __ptr1222 = v1218;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1223 = this1220;
  struct std__allocator_std___List_node_int__* t1224 = __a1221;
  t1223->_M_alloc = t1224;
  struct std___List_node_int_* t1225 = __ptr1222;
  t1223->_M_ptr = t1225;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v1226) {
bb1227:
  struct std__allocator_std___List_node_int__* __a1228;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval1229;
  __a1228 = v1226;
  struct std__allocator_std___List_node_int__* t1230 = __a1228;
  struct std__allocator_std___List_node_int__* t1231 = __a1228;
  unsigned long c1232 = 1;
  struct std___List_node_int_* r1233 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t1231, c1232);
  if (__cir_exc_active) {
    struct std____allocated_ptr_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval1229, t1230, r1233);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t1234 = __retval1229;
  return t1234;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v1235, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1236) {
bb1237:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this1238;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr1239;
  this1238 = v1235;
  __ptr1239 = v1236;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t1240 = this1238;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base1241 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1240 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1242 = __ptr1239;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base1241, t1242);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1243 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1240 + 0);
    struct std___List_node_int_* r1244 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1243);
    if (__cir_exc_active) {
      {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base1245 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1240 + 0);
        std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base1245);
      }
      return;
    }
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1246) {
bb1247:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1248;
  this1248 = v1246;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1249 = this1248;
    struct std___List_node_int_* t1250 = t1249->_M_ptr;
    struct std___List_node_int_* c1251 = ((void*)0);
    _Bool c1252 = ((t1250 != c1251)) ? 1 : 0;
    if (c1252) {
      struct std__allocator_std___List_node_int__* t1253 = t1249->_M_alloc;
      struct std___List_node_int_* t1254 = t1249->_M_ptr;
      unsigned long c1255 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t1253, t1254, c1255);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v1256) {
bb1257:
  struct std__allocator_std___List_node_int__* __a1258;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval1259;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp01260;
  __a1258 = v1256;
  struct std__allocator_std___List_node_int__* t1261 = __a1258;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r1262 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t1261);
  if (__cir_exc_active) {
    struct std____allocated_obj_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp01260 = r1262;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval1259, &ref_tmp01260);
    if (__cir_exc_active) {
      {
        std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp01260);
      }
      struct std____allocated_obj_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp01260);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t1263 = __retval1259;
  return t1263;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v1264, int* v1265, int* v1266) {
bb1267:
  struct std__allocator_std___List_node_int__* __a1268;
  int* __p1269;
  int* __args1270;
  __a1268 = v1264;
  __p1269 = v1265;
  __args1270 = v1266;
  int* t1271 = __p1269;
  int* t1272 = __args1270;
  int* r1273 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1271, t1272);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v1274) {
bb1275:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this1276;
  struct std___List_node_int_* __retval1277;
  this1276 = v1274;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t1278 = this1276;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base1279 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1278 + 0);
  struct std___List_node_int_* r1280 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1279);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1277 = r1280;
  struct std___List_node_int_* t1281 = __retval1277;
  return t1281;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v1282, void** v1283) {
bb1284:
  struct std___List_node_int_** __obj1285;
  void** __new_val1286;
  struct std___List_node_int_* __retval1287;
  struct std___List_node_int_* __old_val1288;
  __obj1285 = v1282;
  __new_val1286 = v1283;
  struct std___List_node_int_** t1289 = __obj1285;
  struct std___List_node_int_* t1290 = *t1289;
  __old_val1288 = t1290;
  void** t1291 = __new_val1286;
  struct std___List_node_int_* c1292 = ((void*)0);
  struct std___List_node_int_** t1293 = __obj1285;
  *t1293 = c1292;
  struct std___List_node_int_* t1294 = __old_val1288;
  __retval1287 = t1294;
  struct std___List_node_int_* t1295 = __retval1287;
  return t1295;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1296) {
bb1297:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1298;
  struct std___List_node_int_* __retval1299;
  void* ref_tmp01300;
  this1298 = v1296;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1301 = this1298;
  void* c1302 = ((void*)0);
  ref_tmp01300 = c1302;
  struct std___List_node_int_* r1303 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t1301->_M_ptr, &ref_tmp01300);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1299 = r1303;
  struct std___List_node_int_* t1304 = __retval1299;
  return t1304;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v1305) {
bb1306:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this1307;
  this1307 = v1305;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t1308 = this1307;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base1309 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1308 + 0);
      _Bool r1310 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base1309);
      if (r1310) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base1311 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1308 + 0);
        struct std___List_node_int_* r1312 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1311);
        if (__cir_exc_active) {
          {
            struct std____allocated_ptr_std__allocator_std___List_node_int___* base1313 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1308 + 0);
            std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base1313);
          }
          return;
        }
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1314 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1308 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base1314);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1315, int* v1316) {
bb1317:
  struct std____cxx11__list_int__std__allocator_int__* this1318;
  int* __args1319;
  struct std___List_node_int_* __retval1320;
  struct std__allocator_std___List_node_int__* __alloc1321;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard1322;
  this1318 = v1315;
  __args1319 = v1316;
  struct std____cxx11__list_int__std__allocator_int__* t1323 = this1318;
  struct std____cxx11___List_base_int__std__allocator_int__* base1324 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1323 + 0);
  struct std__allocator_std___List_node_int__* r1325 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1324);
  __alloc1321 = r1325;
  struct std__allocator_std___List_node_int__* t1326 = __alloc1321;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r1327 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t1326);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __guard1322 = r1327;
    struct std__allocator_std___List_node_int__* t1328 = __alloc1321;
    struct std___List_node_int_* r1329 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard1322);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1322);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* r1330 = std___List_node_int____M_valptr(r1329);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1322);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* t1331 = __args1319;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t1328, r1330, t1331);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1332 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard1322) + 0);
    struct std___List_node_int_* r1333 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base1332);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1322);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    __retval1320 = r1333;
    struct std___List_node_int_* t1334 = __retval1320;
    struct std___List_node_int_* ret_val1335 = t1334;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1322);
    }
    return ret_val1335;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v1336, unsigned long v1337) {
bb1338:
  struct std____cxx11___List_base_int__std__allocator_int__* this1339;
  unsigned long __n1340;
  this1339 = v1336;
  __n1340 = v1337;
  struct std____cxx11___List_base_int__std__allocator_int__* t1341 = this1339;
  unsigned long t1342 = __n1340;
  struct std____detail___List_size* base1343 = (struct std____detail___List_size*)((char *)&(t1341->_M_impl._M_node) + 16);
  unsigned long t1344 = base1343->_M_size;
  unsigned long b1345 = t1344 + t1342;
  base1343->_M_size = b1345;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1346, struct std___List_iterator_int_ v1347, int* v1348) {
bb1349:
  struct std____cxx11__list_int__std__allocator_int__* this1350;
  struct std___List_iterator_int_ __position1351;
  int* __args1352;
  struct std___List_node_int_* __tmp1353;
  this1350 = v1346;
  __position1351 = v1347;
  __args1352 = v1348;
  struct std____cxx11__list_int__std__allocator_int__* t1354 = this1350;
  int* t1355 = __args1352;
  struct std___List_node_int_* r1356 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t1354, t1355);
  if (__cir_exc_active) {
    return;
  }
  __tmp1353 = r1356;
  struct std___List_node_int_* t1357 = __tmp1353;
  struct std____detail___List_node_base* base1358 = (struct std____detail___List_node_base*)((char *)t1357 + 0);
  struct std____detail___List_node_base* t1359 = __position1351._M_node;
  std____detail___List_node_base___M_hook(base1358, t1359);
  struct std____cxx11___List_base_int__std__allocator_int__* base1360 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1354 + 0);
  unsigned long c1361 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1360, c1361);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v1362, struct std____detail___List_node_base* v1363) {
bb1364:
  struct std___List_iterator_int_* this1365;
  struct std____detail___List_node_base* __x1366;
  this1365 = v1362;
  __x1366 = v1363;
  struct std___List_iterator_int_* t1367 = this1365;
  struct std____detail___List_node_base* t1368 = __x1366;
  t1367->_M_node = t1368;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v1369) {
bb1370:
  struct std____cxx11__list_int__std__allocator_int__* this1371;
  struct std___List_iterator_int_ __retval1372;
  this1371 = v1369;
  struct std____cxx11__list_int__std__allocator_int__* t1373 = this1371;
  struct std____cxx11___List_base_int__std__allocator_int__* base1374 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1373 + 0);
  struct std____detail___List_node_base* r1375 = std____detail___List_node_header___M_base(&base1374->_M_impl._M_node);
  if (__cir_exc_active) {
    struct std___List_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_iterator_int____List_iterator(&__retval1372, r1375);
  struct std___List_iterator_int_ t1376 = __retval1372;
  return t1376;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v1377, int* v1378) {
bb1379:
  struct std____cxx11__list_int__std__allocator_int__* this1380;
  int* __x1381;
  struct std___List_iterator_int_ agg_tmp01382;
  this1380 = v1377;
  __x1381 = v1378;
  struct std____cxx11__list_int__std__allocator_int__* t1383 = this1380;
  struct std___List_iterator_int_ r1384 = std____cxx11__list_int__std__allocator_int_____end(t1383);
  agg_tmp01382 = r1384;
  int* t1385 = __x1381;
  struct std___List_iterator_int_ t1386 = agg_tmp01382;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t1383, t1386, t1385);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5stackIiNSt7__cxx114listIiSaIiEEEE4pushERKi
void std__stack_int__std____cxx11__list_int__std__allocator_int_______push(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* v1387, int* v1388) {
bb1389:
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* this1390;
  int* __x1391;
  this1390 = v1387;
  __x1391 = v1388;
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t1392 = this1390;
  int* t1393 = __x1391;
  std____cxx11__list_int__std__allocator_int_____push_back(&t1392->c, t1393);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v1394, int v1395) {
bb1396:
  int __a1397;
  int __b1398;
  int __retval1399;
  __a1397 = v1394;
  __b1398 = v1395;
  int t1400 = __a1397;
  int t1401 = __b1398;
  int b1402 = t1400 | t1401;
  __retval1399 = b1402;
  int t1403 = __retval1399;
  return t1403;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1404) {
bb1405:
  struct std__basic_ios_char__std__char_traits_char__* this1406;
  int __retval1407;
  this1406 = v1404;
  struct std__basic_ios_char__std__char_traits_char__* t1408 = this1406;
  struct std__ios_base* base1409 = (struct std__ios_base*)((char *)t1408 + 0);
  int t1410 = base1409->_M_streambuf_state;
  __retval1407 = t1410;
  int t1411 = __retval1407;
  return t1411;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1412, int v1413) {
bb1414:
  struct std__basic_ios_char__std__char_traits_char__* this1415;
  int __state1416;
  this1415 = v1412;
  __state1416 = v1413;
  struct std__basic_ios_char__std__char_traits_char__* t1417 = this1415;
  int r1418 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1417);
  if (__cir_exc_active) {
    return;
  }
  int t1419 = __state1416;
  int r1420 = std__operator__2(r1418, t1419);
  std__basic_ios_char__std__char_traits_char_____clear(t1417, r1420);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1421, char* v1422) {
bb1423:
  char* __c11424;
  char* __c21425;
  _Bool __retval1426;
  __c11424 = v1421;
  __c21425 = v1422;
  char* t1427 = __c11424;
  char t1428 = *t1427;
  int cast1429 = (int)t1428;
  char* t1430 = __c21425;
  char t1431 = *t1430;
  int cast1432 = (int)t1431;
  _Bool c1433 = ((cast1429 == cast1432)) ? 1 : 0;
  __retval1426 = c1433;
  _Bool t1434 = __retval1426;
  return t1434;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1435) {
bb1436:
  char* __p1437;
  unsigned long __retval1438;
  unsigned long __i1439;
  __p1437 = v1435;
  unsigned long c1440 = 0;
  __i1439 = c1440;
    char ref_tmp01441;
    while (1) {
      unsigned long t1442 = __i1439;
      char* t1443 = __p1437;
      char* ptr1444 = &(t1443)[t1442];
      char c1445 = 0;
      ref_tmp01441 = c1445;
      _Bool r1446 = __gnu_cxx__char_traits_char___eq(ptr1444, &ref_tmp01441);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u1447 = !r1446;
      if (!u1447) break;
      unsigned long t1448 = __i1439;
      unsigned long u1449 = t1448 + 1;
      __i1439 = u1449;
    }
  unsigned long t1450 = __i1439;
  __retval1438 = t1450;
  unsigned long t1451 = __retval1438;
  return t1451;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1452) {
bb1453:
  char* __s1454;
  unsigned long __retval1455;
  __s1454 = v1452;
    _Bool r1456 = std____is_constant_evaluated();
    if (r1456) {
      char* t1457 = __s1454;
      unsigned long r1458 = __gnu_cxx__char_traits_char___length(t1457);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval1455 = r1458;
      unsigned long t1459 = __retval1455;
      return t1459;
    }
  char* t1460 = __s1454;
  unsigned long r1461 = strlen(t1460);
  __retval1455 = r1461;
  unsigned long t1462 = __retval1455;
  return t1462;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1463, char* v1464) {
bb1465:
  struct std__basic_ostream_char__std__char_traits_char__* __out1466;
  char* __s1467;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1468;
  __out1466 = v1463;
  __s1467 = v1464;
    char* t1469 = __s1467;
    _Bool cast1470 = (_Bool)t1469;
    _Bool u1471 = !cast1470;
    if (u1471) {
      struct std__basic_ostream_char__std__char_traits_char__* t1472 = __out1466;
      void** v1473 = (void**)t1472;
      void* v1474 = *((void**)v1473);
      unsigned char* cast1475 = (unsigned char*)v1474;
      long c1476 = -24;
      unsigned char* ptr1477 = &(cast1475)[c1476];
      long* cast1478 = (long*)ptr1477;
      long t1479 = *cast1478;
      unsigned char* cast1480 = (unsigned char*)t1472;
      unsigned char* ptr1481 = &(cast1480)[t1479];
      struct std__basic_ostream_char__std__char_traits_char__* cast1482 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1481;
      struct std__basic_ios_char__std__char_traits_char__* cast1483 = (struct std__basic_ios_char__std__char_traits_char__*)cast1482;
      int t1484 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1483, t1484);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1485 = __out1466;
      char* t1486 = __s1467;
      char* t1487 = __s1467;
      unsigned long r1488 = std__char_traits_char___length(t1487);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast1489 = (long)r1488;
      struct std__basic_ostream_char__std__char_traits_char__* r1490 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1485, t1486, cast1489);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1491 = __out1466;
  __retval1468 = t1491;
  struct std__basic_ostream_char__std__char_traits_char__* t1492 = __retval1468;
  return t1492;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v1493, struct std___Deque_iterator_int__int____int___* v1494) {
bb1495:
  struct std___Deque_iterator_int__int____int___* __x1496;
  struct std___Deque_iterator_int__int____int___* __y1497;
  _Bool __retval1498;
  __x1496 = v1493;
  __y1497 = v1494;
  struct std___Deque_iterator_int__int____int___* t1499 = __x1496;
  int* t1500 = t1499->_M_cur;
  struct std___Deque_iterator_int__int____int___* t1501 = __y1497;
  int* t1502 = t1501->_M_cur;
  _Bool c1503 = ((t1500 == t1502)) ? 1 : 0;
  __retval1498 = c1503;
  _Bool t1504 = __retval1498;
  return t1504;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v1505) {
bb1506:
  struct std__deque_int__std__allocator_int__* this1507;
  _Bool __retval1508;
  this1507 = v1505;
  struct std__deque_int__std__allocator_int__* t1509 = this1507;
  struct std___Deque_base_int__std__allocator_int__* base1510 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1509 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1511 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1510->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base1512 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1509 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1513 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1512->_M_impl) + 0);
  _Bool r1514 = std__operator__(&base1511->_M_finish, &base1513->_M_start);
  __retval1508 = r1514;
  _Bool t1515 = __retval1508;
  return t1515;
}

// function: _ZNKSt5stackIiSt5dequeIiSaIiEEE5emptyEv
_Bool std__stack_int__std__deque_int__std__allocator_int_______empty___const(struct std__stack_int__std__deque_int__std__allocator_int___* v1516) {
bb1517:
  struct std__stack_int__std__deque_int__std__allocator_int___* this1518;
  _Bool __retval1519;
  this1518 = v1516;
  struct std__stack_int__std__deque_int__std__allocator_int___* t1520 = this1518;
  _Bool r1521 = std__deque_int__std__allocator_int_____empty___const(&t1520->c);
  __retval1519 = r1521;
  _Bool t1522 = __retval1519;
  return t1522;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v1523) {
bb1524:
  struct std__ios_base* this1525;
  long __retval1526;
  this1525 = v1523;
  struct std__ios_base* t1527 = this1525;
  long t1528 = t1527->_M_width;
  __retval1526 = t1528;
  long t1529 = __retval1526;
  return t1529;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v1530, char v1531) {
bb1532:
  struct std__basic_ostream_char__std__char_traits_char__* __out1533;
  char __c1534;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1535;
  __out1533 = v1530;
  __c1534 = v1531;
    struct std__basic_ostream_char__std__char_traits_char__* t1536 = __out1533;
    void** v1537 = (void**)t1536;
    void* v1538 = *((void**)v1537);
    unsigned char* cast1539 = (unsigned char*)v1538;
    long c1540 = -24;
    unsigned char* ptr1541 = &(cast1539)[c1540];
    long* cast1542 = (long*)ptr1541;
    long t1543 = *cast1542;
    unsigned char* cast1544 = (unsigned char*)t1536;
    unsigned char* ptr1545 = &(cast1544)[t1543];
    struct std__basic_ostream_char__std__char_traits_char__* cast1546 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1545;
    struct std__ios_base* cast1547 = (struct std__ios_base*)cast1546;
    long r1548 = std__ios_base__width___const(cast1547);
    if (__cir_exc_active) {
      struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
      return __cir_eh_ret;
    }
    long c1549 = 0;
    _Bool c1550 = ((r1548 != c1549)) ? 1 : 0;
    if (c1550) {
      struct std__basic_ostream_char__std__char_traits_char__* t1551 = __out1533;
      long c1552 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r1553 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1551, &__c1534, c1552);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      __retval1535 = r1553;
      struct std__basic_ostream_char__std__char_traits_char__* t1554 = __retval1535;
      return t1554;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1555 = __out1533;
  char t1556 = __c1534;
  struct std__basic_ostream_char__std__char_traits_char__* r1557 = std__ostream__put(t1555, t1556);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t1558 = __out1533;
  __retval1535 = t1558;
  struct std__basic_ostream_char__std__char_traits_char__* t1559 = __retval1535;
  return t1559;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v1560) {
bb1561:
  struct std___Deque_iterator_int__int____int___* this1562;
  struct std___Deque_iterator_int__int____int___* __retval1563;
  this1562 = v1560;
  struct std___Deque_iterator_int__int____int___* t1564 = this1562;
    int* t1565 = t1564->_M_cur;
    int* t1566 = t1564->_M_first;
    _Bool c1567 = ((t1565 == t1566)) ? 1 : 0;
    if (c1567) {
      int** t1568 = t1564->_M_node;
      int c1569 = -1;
      int** ptr1570 = &(t1568)[c1569];
      std___Deque_iterator_int__int___int_____M_set_node(t1564, ptr1570);
      int* t1571 = t1564->_M_last;
      t1564->_M_cur = t1571;
    }
  int* t1572 = t1564->_M_cur;
  int c1573 = -1;
  int* ptr1574 = &(t1572)[c1573];
  t1564->_M_cur = ptr1574;
  __retval1563 = t1564;
  struct std___Deque_iterator_int__int____int___* t1575 = __retval1563;
  return t1575;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v1576) {
bb1577:
  struct std___Deque_iterator_int__int____int___* this1578;
  int* __retval1579;
  this1578 = v1576;
  struct std___Deque_iterator_int__int____int___* t1580 = this1578;
  int* t1581 = t1580->_M_cur;
  __retval1579 = t1581;
  int* t1582 = __retval1579;
  return t1582;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v1583) {
bb1584:
  struct std__deque_int__std__allocator_int__* this1585;
  int* __retval1586;
  struct std___Deque_iterator_int__int____int___ __tmp1587;
  this1585 = v1583;
  struct std__deque_int__std__allocator_int__* t1588 = this1585;
    do {
          _Bool r1589 = std__deque_int__std__allocator_int_____empty___const(t1588);
          if (r1589) {
            char* cast1590 = (char*)&(_str_7);
            int c1591 = 1537;
            char* cast1592 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast1593 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1590, c1591, cast1592, cast1593);
          }
      _Bool c1594 = 0;
      if (!c1594) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r1595 = std__deque_int__std__allocator_int_____end(t1588);
  __tmp1587 = r1595;
  struct std___Deque_iterator_int__int____int___* r1596 = std___Deque_iterator_int__int___int____operator__(&__tmp1587);
  int* r1597 = std___Deque_iterator_int__int___int____operator____const(&__tmp1587);
  __retval1586 = r1597;
  int* t1598 = __retval1586;
  return t1598;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE3topEv
int* std__stack_int__std__deque_int__std__allocator_int_______top(struct std__stack_int__std__deque_int__std__allocator_int___* v1599) {
bb1600:
  struct std__stack_int__std__deque_int__std__allocator_int___* this1601;
  int* __retval1602;
  this1601 = v1599;
  struct std__stack_int__std__deque_int__std__allocator_int___* t1603 = this1601;
    do {
          _Bool r1604 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(t1603);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r1604) {
            char* cast1605 = (char*)&(_str_5);
            int c1606 = 260;
            char* cast1607 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv);
            char* cast1608 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1605, c1606, cast1607, cast1608);
          }
      _Bool c1609 = 0;
      if (!c1609) break;
    } while (1);
  int* r1610 = std__deque_int__std__allocator_int_____back(&t1603->c);
  __retval1602 = r1610;
  int* t1611 = __retval1602;
  return t1611;
}

// function: _ZNSt5dequeIiSaIiEE15_M_pop_back_auxEv
void std__deque_int__std__allocator_int______M_pop_back_aux(struct std__deque_int__std__allocator_int__* v1612) {
bb1613:
  struct std__deque_int__std__allocator_int__* this1614;
  this1614 = v1612;
  struct std__deque_int__std__allocator_int__* t1615 = this1614;
  struct std___Deque_base_int__std__allocator_int__* base1616 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1615 + 0);
  struct std___Deque_base_int__std__allocator_int__* base1617 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1615 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1618 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1617->_M_impl) + 0);
  int* t1619 = base1618->_M_finish._M_first;
  std___Deque_base_int__std__allocator_int______M_deallocate_node(base1616, t1619);
  struct std___Deque_base_int__std__allocator_int__* base1620 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1615 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1621 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1620->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base1622 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1615 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1623 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1622->_M_impl) + 0);
  int** t1624 = base1623->_M_finish._M_node;
  int c1625 = -1;
  int** ptr1626 = &(t1624)[c1625];
  std___Deque_iterator_int__int___int_____M_set_node(&base1621->_M_finish, ptr1626);
  struct std___Deque_base_int__std__allocator_int__* base1627 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1615 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1628 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1627->_M_impl) + 0);
  int* t1629 = base1628->_M_finish._M_last;
  int c1630 = -1;
  int* ptr1631 = &(t1629)[c1630];
  struct std___Deque_base_int__std__allocator_int__* base1632 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1615 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1633 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1632->_M_impl) + 0);
  base1633->_M_finish._M_cur = ptr1631;
  struct std___Deque_base_int__std__allocator_int__* base1634 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1615 + 0);
  struct std__allocator_int_* r1635 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1634);
  struct std___Deque_base_int__std__allocator_int__* base1636 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1615 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1637 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1636->_M_impl) + 0);
  int* t1638 = base1637->_M_finish._M_cur;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(r1635, t1638);
  return;
}

// function: _ZNSt5dequeIiSaIiEE8pop_backEv
void std__deque_int__std__allocator_int_____pop_back(struct std__deque_int__std__allocator_int__* v1639) {
bb1640:
  struct std__deque_int__std__allocator_int__* this1641;
  this1641 = v1639;
  struct std__deque_int__std__allocator_int__* t1642 = this1641;
    do {
          _Bool r1643 = std__deque_int__std__allocator_int_____empty___const(t1642);
          if (r1643) {
            char* cast1644 = (char*)&(_str_7);
            int c1645 = 1666;
            char* cast1646 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv);
            char* cast1647 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1644, c1645, cast1646, cast1647);
          }
      _Bool c1648 = 0;
      if (!c1648) break;
    } while (1);
    struct std___Deque_base_int__std__allocator_int__* base1649 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1642 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1650 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1649->_M_impl) + 0);
    int* t1651 = base1650->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base1652 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1642 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1653 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1652->_M_impl) + 0);
    int* t1654 = base1653->_M_finish._M_first;
    _Bool c1655 = ((t1651 != t1654)) ? 1 : 0;
    if (c1655) {
      struct std___Deque_base_int__std__allocator_int__* base1656 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1642 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1657 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1656->_M_impl) + 0);
      int* t1658 = base1657->_M_finish._M_cur;
      int c1659 = -1;
      int* ptr1660 = &(t1658)[c1659];
      base1657->_M_finish._M_cur = ptr1660;
      struct std___Deque_base_int__std__allocator_int__* base1661 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1642 + 0);
      struct std__allocator_int_* r1662 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1661);
      struct std___Deque_base_int__std__allocator_int__* base1663 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1642 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1664 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1663->_M_impl) + 0);
      int* t1665 = base1664->_M_finish._M_cur;
      void_std__allocator_traits_std__allocator_int_____destroy_int_(r1662, t1665);
    } else {
      std__deque_int__std__allocator_int______M_pop_back_aux(t1642);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEE3popEv
void std__stack_int__std__deque_int__std__allocator_int_______pop(struct std__stack_int__std__deque_int__std__allocator_int___* v1666) {
bb1667:
  struct std__stack_int__std__deque_int__std__allocator_int___* this1668;
  this1668 = v1666;
  struct std__stack_int__std__deque_int__std__allocator_int___* t1669 = this1668;
    do {
          _Bool r1670 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(t1669);
          if (__cir_exc_active) {
            return;
          }
          if (r1670) {
            char* cast1671 = (char*)&(_str_5);
            int c1672 = 333;
            char* cast1673 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv);
            char* cast1674 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1671, c1672, cast1673, cast1674);
          }
      _Bool c1675 = 0;
      if (!c1675) break;
    } while (1);
  std__deque_int__std__allocator_int_____pop_back(&t1669->c);
  return;
}

// function: _Z11popElementsISt5stackIiSt5dequeIiSaIiEEEEvRT_
void void_popElements_std__stack_int__std__deque_int__std__allocator_int_______(struct std__stack_int__std__deque_int__std__allocator_int___* v1676) {
bb1677:
  struct std__stack_int__std__deque_int__std__allocator_int___* stackRef1678;
  stackRef1678 = v1676;
    while (1) {
      struct std__stack_int__std__deque_int__std__allocator_int___* t1679 = stackRef1678;
      _Bool r1680 = std__stack_int__std__deque_int__std__allocator_int_______empty___const(t1679);
      if (__cir_exc_active) {
        return;
      }
      _Bool u1681 = !r1680;
      if (!u1681) break;
        struct std__stack_int__std__deque_int__std__allocator_int___* t1682 = stackRef1678;
        int* r1683 = std__stack_int__std__deque_int__std__allocator_int_______top(t1682);
        if (__cir_exc_active) {
          return;
        }
        int t1684 = *r1683;
        struct std__basic_ostream_char__std__char_traits_char__* r1685 = std__ostream__operator__(&_ZSt4cout, t1684);
        if (__cir_exc_active) {
          return;
        }
        char c1686 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r1687 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1685, c1686);
        if (__cir_exc_active) {
          return;
        }
        struct std__stack_int__std__deque_int__std__allocator_int___* t1688 = stackRef1678;
        std__stack_int__std__deque_int__std__allocator_int_______pop(t1688);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1689) {
bb1690:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1691;
  int** __retval1692;
  this1691 = v1689;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1693 = this1691;
  __retval1692 = &t1693->_M_current;
  int** t1694 = __retval1692;
  return t1694;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1695, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1696) {
bb1697:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1698;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1699;
  _Bool __retval1700;
  __lhs1698 = v1695;
  __rhs1699 = v1696;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1701 = __lhs1698;
  int** r1702 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1701);
  int* t1703 = *r1702;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1704 = __rhs1699;
  int** r1705 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1704);
  int* t1706 = *r1705;
  _Bool c1707 = ((t1703 == t1706)) ? 1 : 0;
  __retval1700 = c1707;
  _Bool t1708 = __retval1700;
  return t1708;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1709, int** v1710) {
bb1711:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1712;
  int** __i1713;
  this1712 = v1709;
  __i1713 = v1710;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1714 = this1712;
  int** t1715 = __i1713;
  int* t1716 = *t1715;
  t1714->_M_current = t1716;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v1717) {
bb1718:
  struct std__vector_int__std__allocator_int__* this1719;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1720;
  this1719 = v1717;
  struct std__vector_int__std__allocator_int__* t1721 = this1719;
  struct std___Vector_base_int__std__allocator_int__* base1722 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1721 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1723 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1722->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval1720, &base1723->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1724 = __retval1720;
  return t1724;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v1725) {
bb1726:
  struct std__vector_int__std__allocator_int__* this1727;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1728;
  this1727 = v1725;
  struct std__vector_int__std__allocator_int__* t1729 = this1727;
  struct std___Vector_base_int__std__allocator_int__* base1730 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1729 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1731 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1730->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval1728, &base1731->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1732 = __retval1728;
  return t1732;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v1733) {
bb1734:
  struct std__vector_int__std__allocator_int__* this1735;
  _Bool __retval1736;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp01737;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp11738;
  this1735 = v1733;
  struct std__vector_int__std__allocator_int__* t1739 = this1735;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1740 = std__vector_int__std__allocator_int_____begin___const(t1739);
  ref_tmp01737 = r1740;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1741 = std__vector_int__std__allocator_int_____end___const(t1739);
  ref_tmp11738 = r1741;
  _Bool r1742 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp01737, &ref_tmp11738);
  __retval1736 = r1742;
  _Bool t1743 = __retval1736;
  return t1743;
}

// function: _ZNKSt5stackIiSt6vectorIiSaIiEEE5emptyEv
_Bool std__stack_int__std__vector_int__std__allocator_int_______empty___const(struct std__stack_int__std__vector_int__std__allocator_int___* v1744) {
bb1745:
  struct std__stack_int__std__vector_int__std__allocator_int___* this1746;
  _Bool __retval1747;
  this1746 = v1744;
  struct std__stack_int__std__vector_int__std__allocator_int___* t1748 = this1746;
  _Bool r1749 = std__vector_int__std__allocator_int_____empty___const(&t1748->c);
  __retval1747 = r1749;
  _Bool t1750 = __retval1747;
  return t1750;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1751, long v1752) {
bb1753:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1754;
  long __n1755;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1756;
  int* ref_tmp01757;
  this1754 = v1751;
  __n1755 = v1752;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1758 = this1754;
  int* t1759 = t1758->_M_current;
  long t1760 = __n1755;
  long u1761 = -t1760;
  int* ptr1762 = &(t1759)[u1761];
  ref_tmp01757 = ptr1762;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1756, &ref_tmp01757);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1763 = __retval1756;
  return t1763;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1764) {
bb1765:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1766;
  int* __retval1767;
  this1766 = v1764;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1768 = this1766;
  int* t1769 = t1768->_M_current;
  __retval1767 = t1769;
  int* t1770 = __retval1767;
  return t1770;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v1771) {
bb1772:
  struct std__vector_int__std__allocator_int__* this1773;
  int* __retval1774;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01775;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11776;
  this1773 = v1771;
  struct std__vector_int__std__allocator_int__* t1777 = this1773;
    do {
          _Bool r1778 = std__vector_int__std__allocator_int_____empty___const(t1777);
          if (r1778) {
            char* cast1779 = (char*)&(_str_8);
            int c1780 = 1370;
            char* cast1781 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast1782 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1779, c1780, cast1781, cast1782);
          }
      _Bool c1783 = 0;
      if (!c1783) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1784 = std__vector_int__std__allocator_int_____end(t1777);
  ref_tmp11776 = r1784;
  long c1785 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1786 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp11776, c1785);
  ref_tmp01775 = r1786;
  int* r1787 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp01775);
  __retval1774 = r1787;
  int* t1788 = __retval1774;
  return t1788;
}

// function: _ZNSt5stackIiSt6vectorIiSaIiEEE3topEv
int* std__stack_int__std__vector_int__std__allocator_int_______top(struct std__stack_int__std__vector_int__std__allocator_int___* v1789) {
bb1790:
  struct std__stack_int__std__vector_int__std__allocator_int___* this1791;
  int* __retval1792;
  this1791 = v1789;
  struct std__stack_int__std__vector_int__std__allocator_int___* t1793 = this1791;
    do {
          _Bool r1794 = std__stack_int__std__vector_int__std__allocator_int_______empty___const(t1793);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r1794) {
            char* cast1795 = (char*)&(_str_5);
            int c1796 = 260;
            char* cast1797 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiSt6vectorIiSaIiEEE3topEv);
            char* cast1798 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1795, c1796, cast1797, cast1798);
          }
      _Bool c1799 = 0;
      if (!c1799) break;
    } while (1);
  int* r1800 = std__vector_int__std__allocator_int_____back(&t1793->c);
  __retval1792 = r1800;
  int* t1801 = __retval1792;
  return t1801;
}

// function: _ZNSt6vectorIiSaIiEE8pop_backEv
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* v1802) {
bb1803:
  struct std__vector_int__std__allocator_int__* this1804;
  this1804 = v1802;
  struct std__vector_int__std__allocator_int__* t1805 = this1804;
    do {
          _Bool r1806 = std__vector_int__std__allocator_int_____empty___const(t1805);
          if (r1806) {
            char* cast1807 = (char*)&(_str_8);
            int c1808 = 1459;
            char* cast1809 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv);
            char* cast1810 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1807, c1808, cast1809, cast1810);
          }
      _Bool c1811 = 0;
      if (!c1811) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1812 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1805 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1813 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1812->_M_impl) + 0);
  int* t1814 = base1813->_M_finish;
  int c1815 = -1;
  int* ptr1816 = &(t1814)[c1815];
  base1813->_M_finish = ptr1816;
  struct std___Vector_base_int__std__allocator_int__* base1817 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1805 + 0);
  struct std__allocator_int_* base1818 = (struct std__allocator_int_*)((char *)&(base1817->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base1819 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1805 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1820 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1819->_M_impl) + 0);
  int* t1821 = base1820->_M_finish;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(base1818, t1821);
  return;
}

// function: _ZNSt5stackIiSt6vectorIiSaIiEEE3popEv
void std__stack_int__std__vector_int__std__allocator_int_______pop(struct std__stack_int__std__vector_int__std__allocator_int___* v1822) {
bb1823:
  struct std__stack_int__std__vector_int__std__allocator_int___* this1824;
  this1824 = v1822;
  struct std__stack_int__std__vector_int__std__allocator_int___* t1825 = this1824;
    do {
          _Bool r1826 = std__stack_int__std__vector_int__std__allocator_int_______empty___const(t1825);
          if (__cir_exc_active) {
            return;
          }
          if (r1826) {
            char* cast1827 = (char*)&(_str_5);
            int c1828 = 333;
            char* cast1829 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiSt6vectorIiSaIiEEE3popEv);
            char* cast1830 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1827, c1828, cast1829, cast1830);
          }
      _Bool c1831 = 0;
      if (!c1831) break;
    } while (1);
  std__vector_int__std__allocator_int_____pop_back(&t1825->c);
  return;
}

// function: _Z11popElementsISt5stackIiSt6vectorIiSaIiEEEEvRT_
void void_popElements_std__stack_int__std__vector_int__std__allocator_int_______(struct std__stack_int__std__vector_int__std__allocator_int___* v1832) {
bb1833:
  struct std__stack_int__std__vector_int__std__allocator_int___* stackRef1834;
  stackRef1834 = v1832;
    while (1) {
      struct std__stack_int__std__vector_int__std__allocator_int___* t1835 = stackRef1834;
      _Bool r1836 = std__stack_int__std__vector_int__std__allocator_int_______empty___const(t1835);
      if (__cir_exc_active) {
        return;
      }
      _Bool u1837 = !r1836;
      if (!u1837) break;
        struct std__stack_int__std__vector_int__std__allocator_int___* t1838 = stackRef1834;
        int* r1839 = std__stack_int__std__vector_int__std__allocator_int_______top(t1838);
        if (__cir_exc_active) {
          return;
        }
        int t1840 = *r1839;
        struct std__basic_ostream_char__std__char_traits_char__* r1841 = std__ostream__operator__(&_ZSt4cout, t1840);
        if (__cir_exc_active) {
          return;
        }
        char c1842 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r1843 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1841, c1842);
        if (__cir_exc_active) {
          return;
        }
        struct std__stack_int__std__vector_int__std__allocator_int___* t1844 = stackRef1834;
        std__stack_int__std__vector_int__std__allocator_int_______pop(t1844);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v1845) {
bb1846:
  struct std____detail___List_node_base* this1847;
  struct std____detail___List_node_base* __retval1848;
  this1847 = v1845;
  struct std____detail___List_node_base* t1849 = this1847;
  __retval1848 = t1849;
  struct std____detail___List_node_base* t1850 = __retval1848;
  return t1850;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v1851) {
bb1852:
  struct std____cxx11__list_int__std__allocator_int__* this1853;
  _Bool __retval1854;
  this1853 = v1851;
  struct std____cxx11__list_int__std__allocator_int__* t1855 = this1853;
  struct std____cxx11___List_base_int__std__allocator_int__* base1856 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1855 + 0);
  struct std____detail___List_node_base* base1857 = (struct std____detail___List_node_base*)((char *)&(base1856->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1858 = base1857->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base1859 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1855 + 0);
  struct std____detail___List_node_base* base1860 = (struct std____detail___List_node_base*)((char *)&(base1859->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1861 = std____detail___List_node_base___M_base___const(base1860);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c1862 = ((t1858 == r1861)) ? 1 : 0;
  __retval1854 = c1862;
  _Bool t1863 = __retval1854;
  return t1863;
}

// function: _ZNKSt5stackIiNSt7__cxx114listIiSaIiEEEE5emptyEv
_Bool std__stack_int__std____cxx11__list_int__std__allocator_int_______empty___const(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* v1864) {
bb1865:
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* this1866;
  _Bool __retval1867;
  this1866 = v1864;
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t1868 = this1866;
  _Bool r1869 = std____cxx11__list_int__std__allocator_int_____empty___const(&t1868->c);
  __retval1867 = r1869;
  _Bool t1870 = __retval1867;
  return t1870;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v1871) {
bb1872:
  struct std___List_iterator_int_* this1873;
  struct std___List_iterator_int_* __retval1874;
  this1873 = v1871;
  struct std___List_iterator_int_* t1875 = this1873;
  struct std____detail___List_node_base* t1876 = t1875->_M_node;
  struct std____detail___List_node_base* t1877 = t1876->_M_prev;
  t1875->_M_node = t1877;
  __retval1874 = t1875;
  struct std___List_iterator_int_* t1878 = __retval1874;
  return t1878;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v1879) {
bb1880:
  struct std___List_iterator_int_* this1881;
  int* __retval1882;
  this1881 = v1879;
  struct std___List_iterator_int_* t1883 = this1881;
  struct std____detail___List_node_base* t1884 = t1883->_M_node;
  struct std___List_node_int_* derived1885 = ((t1884) ? (struct std___List_node_int_*)((char *)t1884 - 0) : (struct std___List_node_int_*)0);
  int* r1886 = std___List_node_int____M_valptr(derived1885);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1882 = r1886;
  int* t1887 = __retval1882;
  return t1887;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v1888) {
bb1889:
  struct std____cxx11__list_int__std__allocator_int__* this1890;
  int* __retval1891;
  struct std___List_iterator_int_ __tmp1892;
  this1890 = v1888;
  struct std____cxx11__list_int__std__allocator_int__* t1893 = this1890;
    do {
          _Bool r1894 = std____cxx11__list_int__std__allocator_int_____empty___const(t1893);
          if (r1894) {
            char* cast1895 = (char*)&(_str_9);
            int c1896 = 1674;
            char* cast1897 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast1898 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1895, c1896, cast1897, cast1898);
          }
      _Bool c1899 = 0;
      if (!c1899) break;
    } while (1);
  struct std___List_iterator_int_ r1900 = std____cxx11__list_int__std__allocator_int_____end(t1893);
  __tmp1892 = r1900;
  struct std___List_iterator_int_* r1901 = std___List_iterator_int___operator__(&__tmp1892);
  int* r1902 = std___List_iterator_int___operator____const(&__tmp1892);
  __retval1891 = r1902;
  int* t1903 = __retval1891;
  return t1903;
}

// function: _ZNSt5stackIiNSt7__cxx114listIiSaIiEEEE3topEv
int* std__stack_int__std____cxx11__list_int__std__allocator_int_______top(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* v1904) {
bb1905:
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* this1906;
  int* __retval1907;
  this1906 = v1904;
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t1908 = this1906;
    do {
          _Bool r1909 = std__stack_int__std____cxx11__list_int__std__allocator_int_______empty___const(t1908);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          if (r1909) {
            char* cast1910 = (char*)&(_str_5);
            int c1911 = 260;
            char* cast1912 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiNSt7__cxx114listIiSaIiEEEE3topEv);
            char* cast1913 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1910, c1911, cast1912, cast1913);
          }
      _Bool c1914 = 0;
      if (!c1914) break;
    } while (1);
  int* r1915 = std____cxx11__list_int__std__allocator_int_____back(&t1908->c);
  __retval1907 = r1915;
  int* t1916 = __retval1907;
  return t1916;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v1917, unsigned long v1918) {
bb1919:
  struct std____cxx11___List_base_int__std__allocator_int__* this1920;
  unsigned long __n1921;
  this1920 = v1917;
  __n1921 = v1918;
  struct std____cxx11___List_base_int__std__allocator_int__* t1922 = this1920;
  unsigned long t1923 = __n1921;
  struct std____detail___List_size* base1924 = (struct std____detail___List_size*)((char *)&(t1922->_M_impl._M_node) + 16);
  unsigned long t1925 = base1924->_M_size;
  unsigned long b1926 = t1925 - t1923;
  base1924->_M_size = b1926;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* v1927, struct std___List_iterator_int_ v1928) {
bb1929:
  struct std____cxx11__list_int__std__allocator_int__* this1930;
  struct std___List_iterator_int_ __position1931;
  struct std___List_node_int_* __n1932;
  this1930 = v1927;
  __position1931 = v1928;
  struct std____cxx11__list_int__std__allocator_int__* t1933 = this1930;
  struct std____cxx11___List_base_int__std__allocator_int__* base1934 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1933 + 0);
  unsigned long c1935 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base1934, c1935);
  if (__cir_exc_active) {
    return;
  }
  struct std____detail___List_node_base* t1936 = __position1931._M_node;
  std____detail___List_node_base___M_unhook(t1936);
  struct std____detail___List_node_base* t1937 = __position1931._M_node;
  struct std___List_node_int_* derived1938 = (struct std___List_node_int_*)((char *)t1937 - 0);
  __n1932 = derived1938;
  struct std____cxx11___List_base_int__std__allocator_int__* base1939 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1933 + 0);
  struct std___List_node_int_* t1940 = __n1932;
  struct std___List_node_int_* r1941 = std___List_node_int____M_node_ptr(t1940);
  if (__cir_exc_active) {
    return;
  }
  std____cxx11___List_base_int__std__allocator_int______M_destroy_node(base1939, r1941);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8pop_backEv
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* v1942) {
bb1943:
  struct std____cxx11__list_int__std__allocator_int__* this1944;
  struct std___List_iterator_int_ agg_tmp01945;
  this1944 = v1942;
  struct std____cxx11__list_int__std__allocator_int__* t1946 = this1944;
    do {
          _Bool r1947 = std____cxx11__list_int__std__allocator_int_____empty___const(t1946);
          if (r1947) {
            char* cast1948 = (char*)&(_str_9);
            int c1949 = 1840;
            char* cast1950 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv);
            char* cast1951 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1948, c1949, cast1950, cast1951);
          }
      _Bool c1952 = 0;
      if (!c1952) break;
    } while (1);
  struct std____cxx11___List_base_int__std__allocator_int__* base1953 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1946 + 0);
  struct std____detail___List_node_base* base1954 = (struct std____detail___List_node_base*)((char *)&(base1953->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1955 = base1954->_M_prev;
  std___List_iterator_int____List_iterator(&agg_tmp01945, t1955);
  struct std___List_iterator_int_ t1956 = agg_tmp01945;
  std____cxx11__list_int__std__allocator_int______M_erase(t1946, t1956);
  return;
}

// function: _ZNSt5stackIiNSt7__cxx114listIiSaIiEEEE3popEv
void std__stack_int__std____cxx11__list_int__std__allocator_int_______pop(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* v1957) {
bb1958:
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* this1959;
  this1959 = v1957;
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t1960 = this1959;
    do {
          _Bool r1961 = std__stack_int__std____cxx11__list_int__std__allocator_int_______empty___const(t1960);
          if (__cir_exc_active) {
            return;
          }
          if (r1961) {
            char* cast1962 = (char*)&(_str_5);
            int c1963 = 333;
            char* cast1964 = (char*)&(__PRETTY_FUNCTION____ZNSt5stackIiNSt7__cxx114listIiSaIiEEEE3popEv);
            char* cast1965 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1962, c1963, cast1964, cast1965);
          }
      _Bool c1966 = 0;
      if (!c1966) break;
    } while (1);
  std____cxx11__list_int__std__allocator_int_____pop_back(&t1960->c);
  return;
}

// function: _Z11popElementsISt5stackIiNSt7__cxx114listIiSaIiEEEEEvRT_
void void_popElements_std__stack_int__std____cxx11__list_int__std__allocator_int_______(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* v1967) {
bb1968:
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* stackRef1969;
  stackRef1969 = v1967;
    while (1) {
      struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t1970 = stackRef1969;
      _Bool r1971 = std__stack_int__std____cxx11__list_int__std__allocator_int_______empty___const(t1970);
      if (__cir_exc_active) {
        return;
      }
      _Bool u1972 = !r1971;
      if (!u1972) break;
        struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t1973 = stackRef1969;
        int* r1974 = std__stack_int__std____cxx11__list_int__std__allocator_int_______top(t1973);
        if (__cir_exc_active) {
          return;
        }
        int t1975 = *r1974;
        struct std__basic_ostream_char__std__char_traits_char__* r1976 = std__ostream__operator__(&_ZSt4cout, t1975);
        if (__cir_exc_active) {
          return;
        }
        char c1977 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r1978 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1976, c1977);
        if (__cir_exc_active) {
          return;
        }
        struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t1979 = stackRef1969;
        std__stack_int__std____cxx11__list_int__std__allocator_int_______pop(t1979);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1980, void* v1981) {
bb1982:
  struct std__basic_ostream_char__std__char_traits_char__* this1983;
  void* __pf1984;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1985;
  this1983 = v1980;
  __pf1984 = v1981;
  struct std__basic_ostream_char__std__char_traits_char__* t1986 = this1983;
  void* t1987 = __pf1984;
  struct std__basic_ostream_char__std__char_traits_char__* r1988 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1987)(t1986);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1985 = r1988;
  struct std__basic_ostream_char__std__char_traits_char__* t1989 = __retval1985;
  return t1989;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1990) {
bb1991:
  struct std__basic_ostream_char__std__char_traits_char__* __os1992;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1993;
  __os1992 = v1990;
  struct std__basic_ostream_char__std__char_traits_char__* t1994 = __os1992;
  struct std__basic_ostream_char__std__char_traits_char__* r1995 = std__ostream__flush(t1994);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1993 = r1995;
  struct std__basic_ostream_char__std__char_traits_char__* t1996 = __retval1993;
  return t1996;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1997) {
bb1998:
  struct std__ctype_char_* __f1999;
  struct std__ctype_char_* __retval2000;
  __f1999 = v1997;
    struct std__ctype_char_* t2001 = __f1999;
    _Bool cast2002 = (_Bool)t2001;
    _Bool u2003 = !cast2002;
    if (u2003) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t2004 = __f1999;
  __retval2000 = t2004;
  struct std__ctype_char_* t2005 = __retval2000;
  return t2005;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v2006, char v2007) {
bb2008:
  struct std__ctype_char_* this2009;
  char __c2010;
  char __retval2011;
  this2009 = v2006;
  __c2010 = v2007;
  struct std__ctype_char_* t2012 = this2009;
    char t2013 = t2012->_M_widen_ok;
    _Bool cast2014 = (_Bool)t2013;
    if (cast2014) {
      char t2015 = __c2010;
      unsigned char cast2016 = (unsigned char)t2015;
      unsigned long cast2017 = (unsigned long)cast2016;
      char t2018 = t2012->_M_widen[cast2017];
      __retval2011 = t2018;
      char t2019 = __retval2011;
      return t2019;
    }
  std__ctype_char____M_widen_init___const(t2012);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t2020 = __c2010;
  void** v2021 = (void**)t2012;
  void* v2022 = *((void**)v2021);
  char vcall2025 = (char)__VERIFIER_virtual_call_char_char(t2012, 6, t2020);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval2011 = vcall2025;
  char t2026 = __retval2011;
  return t2026;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v2027, char v2028) {
bb2029:
  struct std__basic_ios_char__std__char_traits_char__* this2030;
  char __c2031;
  char __retval2032;
  this2030 = v2027;
  __c2031 = v2028;
  struct std__basic_ios_char__std__char_traits_char__* t2033 = this2030;
  struct std__ctype_char_* t2034 = t2033->_M_ctype;
  struct std__ctype_char_* r2035 = std__ctype_char__const__std____check_facet_std__ctype_char___(t2034);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t2036 = __c2031;
  char r2037 = std__ctype_char___widen_char__const(r2035, t2036);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval2032 = r2037;
  char t2038 = __retval2032;
  return t2038;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2039) {
bb2040:
  struct std__basic_ostream_char__std__char_traits_char__* __os2041;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2042;
  __os2041 = v2039;
  struct std__basic_ostream_char__std__char_traits_char__* t2043 = __os2041;
  struct std__basic_ostream_char__std__char_traits_char__* t2044 = __os2041;
  void** v2045 = (void**)t2044;
  void* v2046 = *((void**)v2045);
  unsigned char* cast2047 = (unsigned char*)v2046;
  long c2048 = -24;
  unsigned char* ptr2049 = &(cast2047)[c2048];
  long* cast2050 = (long*)ptr2049;
  long t2051 = *cast2050;
  unsigned char* cast2052 = (unsigned char*)t2044;
  unsigned char* ptr2053 = &(cast2052)[t2051];
  struct std__basic_ostream_char__std__char_traits_char__* cast2054 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr2053;
  struct std__basic_ios_char__std__char_traits_char__* cast2055 = (struct std__basic_ios_char__std__char_traits_char__*)cast2054;
  char c2056 = 10;
  char r2057 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast2055, c2056);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r2058 = std__ostream__put(t2043, r2057);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r2059 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r2058);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2042 = r2059;
  struct std__basic_ostream_char__std__char_traits_char__* t2060 = __retval2042;
  return t2060;
}

// function: _ZNSt5stackIiNSt7__cxx114listIiSaIiEEEED2Ev
void std__stack_int__std____cxx11__list_int__std__allocator_int________stack(struct std__stack_int__std____cxx11__list_int__std__allocator_int___* v2061) {
bb2062:
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* this2063;
  this2063 = v2061;
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___* t2064 = this2063;
  {
    std____cxx11__list_int__std__allocator_int______list(&t2064->c);
  }
  return;
}

// function: _ZNSt5stackIiSt6vectorIiSaIiEEED2Ev
void std__stack_int__std__vector_int__std__allocator_int________stack(struct std__stack_int__std__vector_int__std__allocator_int___* v2065) {
bb2066:
  struct std__stack_int__std__vector_int__std__allocator_int___* this2067;
  this2067 = v2065;
  struct std__stack_int__std__vector_int__std__allocator_int___* t2068 = this2067;
  {
    std__vector_int__std__allocator_int______vector(&t2068->c);
  }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEED2Ev
void std__stack_int__std__deque_int__std__allocator_int________stack(struct std__stack_int__std__deque_int__std__allocator_int___* v2069) {
bb2070:
  struct std__stack_int__std__deque_int__std__allocator_int___* this2071;
  this2071 = v2069;
  struct std__stack_int__std__deque_int__std__allocator_int___* t2072 = this2071;
  {
    std__deque_int__std__allocator_int______deque(&t2072->c);
  }
  return;
}

// function: main
int main() {
bb2073:
  int __retval2074;
  struct std__stack_int__std__deque_int__std__allocator_int___ intDequeStack2075;
  struct std__stack_int__std__vector_int__std__allocator_int___ intVectorStack2076;
  struct std__stack_int__std____cxx11__list_int__std__allocator_int___ intListStack2077;
  int c2078 = 0;
  __retval2074 = c2078;
  std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(&intDequeStack2075);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std__stack_int__std__vector_int__std__allocator_int_______stack_std__vector_int__std__allocator_int_____void_(&intVectorStack2076);
    if (__cir_exc_active) {
      {
        std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      std__stack_int__std____cxx11__list_int__std__allocator_int_______stack_std____cxx11__list_int__std__allocator_int_____void_(&intListStack2077);
      if (__cir_exc_active) {
        {
          std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
        }
        {
          std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
          int i2079;
          int c2080 = 0;
          i2079 = c2080;
          while (1) {
            int t2082 = i2079;
            int c2083 = 10;
            _Bool c2084 = ((t2082 < c2083)) ? 1 : 0;
            if (!c2084) break;
              std__stack_int__std__deque_int__std__allocator_int_______push(&intDequeStack2075, &i2079);
              if (__cir_exc_active) {
                {
                  std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              std__stack_int__std__vector_int__std__allocator_int_______push(&intVectorStack2076, &i2079);
              if (__cir_exc_active) {
                {
                  std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              std__stack_int__std____cxx11__list_int__std__allocator_int_______push(&intListStack2077, &i2079);
              if (__cir_exc_active) {
                {
                  std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
          for_step2081: ;
            int t2085 = i2079;
            int u2086 = t2085 + 1;
            i2079 = u2086;
          }
        char* cast2087 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r2088 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2087);
        if (__cir_exc_active) {
          {
            std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
          }
          {
            std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
          }
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        void_popElements_std__stack_int__std__deque_int__std__allocator_int_______(&intDequeStack2075);
        if (__cir_exc_active) {
          {
            std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
          }
          {
            std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
          }
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast2089 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r2090 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2089);
        if (__cir_exc_active) {
          {
            std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
          }
          {
            std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
          }
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        void_popElements_std__stack_int__std__vector_int__std__allocator_int_______(&intVectorStack2076);
        if (__cir_exc_active) {
          {
            std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
          }
          {
            std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
          }
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast2091 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r2092 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2091);
        if (__cir_exc_active) {
          {
            std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
          }
          {
            std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
          }
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        void_popElements_std__stack_int__std____cxx11__list_int__std__allocator_int_______(&intListStack2077);
        if (__cir_exc_active) {
          {
            std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
          }
          {
            std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
          }
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r2093 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
          }
          {
            std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
          }
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c2094 = 0;
        __retval2074 = c2094;
        int t2095 = __retval2074;
        int ret_val2096 = t2095;
        {
          std__stack_int__std____cxx11__list_int__std__allocator_int________stack(&intListStack2077);
        }
        {
          std__stack_int__std__vector_int__std__allocator_int________stack(&intVectorStack2076);
        }
        {
          std__stack_int__std__deque_int__std__allocator_int________stack(&intDequeStack2075);
        }
        return ret_val2096;
  int t2097 = __retval2074;
  return t2097;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v2098) {
bb2099:
  struct std____cxx11__list_int__std__allocator_int__* this2100;
  this2100 = v2098;
  struct std____cxx11__list_int__std__allocator_int__* t2101 = this2100;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base2102 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t2101 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base2102);
  }
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v2103) {
bb2104:
  struct std____detail___List_node_header* this2105;
  struct std____detail___List_node_base* __retval2106;
  this2105 = v2103;
  struct std____detail___List_node_header* t2107 = this2105;
  struct std____detail___List_node_base* base2108 = (struct std____detail___List_node_base*)((char *)t2107 + 0);
  __retval2106 = base2108;
  struct std____detail___List_node_base* t2109 = __retval2106;
  return t2109;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v2110) {
bb2111:
  int* __location2112;
  __location2112 = v2110;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v2113, int* v2114) {
bb2115:
  struct std__allocator_std___List_node_int__* __a2116;
  int* __p2117;
  __a2116 = v2113;
  __p2117 = v2114;
  int* t2118 = __p2117;
  void_std__destroy_at_int_(t2118);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v2119) {
bb2120:
  struct __gnu_cxx____aligned_membuf_int_* this2121;
  void* __retval2122;
  this2121 = v2119;
  struct __gnu_cxx____aligned_membuf_int_* t2123 = this2121;
  void* cast2124 = (void*)&(t2123->_M_storage);
  __retval2122 = cast2124;
  void* t2125 = __retval2122;
  return t2125;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v2126) {
bb2127:
  struct __gnu_cxx____aligned_membuf_int_* this2128;
  int* __retval2129;
  this2128 = v2126;
  struct __gnu_cxx____aligned_membuf_int_* t2130 = this2128;
  void* r2131 = __gnu_cxx____aligned_membuf_int____M_addr(t2130);
  int* cast2132 = (int*)r2131;
  __retval2129 = cast2132;
  int* t2133 = __retval2129;
  return t2133;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v2134) {
bb2135:
  struct std___List_node_int_* this2136;
  int* __retval2137;
  this2136 = v2134;
  struct std___List_node_int_* t2138 = this2136;
  int* r2139 = __gnu_cxx____aligned_membuf_int____M_ptr(&t2138->_M_storage);
  __retval2137 = r2139;
  int* t2140 = __retval2137;
  return t2140;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb2141:
  _Bool __retval2142;
    _Bool c2143 = 0;
    __retval2142 = c2143;
    _Bool t2144 = __retval2142;
    return t2144;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v2145, struct std___List_node_int_* v2146, unsigned long v2147) {
bb2148:
  struct std____new_allocator_std___List_node_int__* this2149;
  struct std___List_node_int_* __p2150;
  unsigned long __n2151;
  this2149 = v2145;
  __p2150 = v2146;
  __n2151 = v2147;
  struct std____new_allocator_std___List_node_int__* t2152 = this2149;
    unsigned long c2153 = 8;
    unsigned long c2154 = 16;
    _Bool c2155 = ((c2153 > c2154)) ? 1 : 0;
    if (c2155) {
      struct std___List_node_int_* t2156 = __p2150;
      void* cast2157 = (void*)t2156;
      unsigned long t2158 = __n2151;
      unsigned long c2159 = 24;
      unsigned long b2160 = t2158 * c2159;
      unsigned long c2161 = 8;
      operator_delete_3(cast2157, b2160, c2161);
      return;
    }
  struct std___List_node_int_* t2162 = __p2150;
  void* cast2163 = (void*)t2162;
  unsigned long t2164 = __n2151;
  unsigned long c2165 = 24;
  unsigned long b2166 = t2164 * c2165;
  operator_delete_2(cast2163, b2166);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v2167, struct std___List_node_int_* v2168, unsigned long v2169) {
bb2170:
  struct std__allocator_std___List_node_int__* this2171;
  struct std___List_node_int_* __p2172;
  unsigned long __n2173;
  this2171 = v2167;
  __p2172 = v2168;
  __n2173 = v2169;
  struct std__allocator_std___List_node_int__* t2174 = this2171;
    _Bool r2175 = std____is_constant_evaluated();
    if (r2175) {
      struct std___List_node_int_* t2176 = __p2172;
      void* cast2177 = (void*)t2176;
      operator_delete(cast2177);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base2178 = (struct std____new_allocator_std___List_node_int__*)((char *)t2174 + 0);
  struct std___List_node_int_* t2179 = __p2172;
  unsigned long t2180 = __n2173;
  std____new_allocator_std___List_node_int_____deallocate(base2178, t2179, t2180);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v2181, struct std___List_node_int_* v2182, unsigned long v2183) {
bb2184:
  struct std__allocator_std___List_node_int__* __a2185;
  struct std___List_node_int_* __p2186;
  unsigned long __n2187;
  __a2185 = v2181;
  __p2186 = v2182;
  __n2187 = v2183;
  struct std__allocator_std___List_node_int__* t2188 = __a2185;
  struct std___List_node_int_* t2189 = __p2186;
  unsigned long t2190 = __n2187;
  std__allocator_std___List_node_int_____deallocate(t2188, t2189, t2190);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v2191, struct std___List_node_int_* v2192) {
bb2193:
  struct std____cxx11___List_base_int__std__allocator_int__* this2194;
  struct std___List_node_int_* __p2195;
  this2194 = v2191;
  __p2195 = v2192;
  struct std____cxx11___List_base_int__std__allocator_int__* t2196 = this2194;
  struct std__allocator_std___List_node_int__* base2197 = (struct std__allocator_std___List_node_int__*)((char *)&(t2196->_M_impl) + 0);
  struct std___List_node_int_* t2198 = __p2195;
  unsigned long c2199 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base2197, t2198, c2199);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v2200, struct std___List_node_int_* v2201) {
bb2202:
  struct std____cxx11___List_base_int__std__allocator_int__* this2203;
  struct std___List_node_int_* __p2204;
  this2203 = v2200;
  __p2204 = v2201;
  struct std____cxx11___List_base_int__std__allocator_int__* t2205 = this2203;
  struct std__allocator_std___List_node_int__* base2206 = (struct std__allocator_std___List_node_int__*)((char *)&(t2205->_M_impl) + 0);
  struct std___List_node_int_* t2207 = __p2204;
  int* r2208 = std___List_node_int____M_valptr(t2207);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base2206, r2208);
  struct std___List_node_int_* t2209 = __p2204;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t2205, t2209);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v2210) {
bb2211:
  struct std___List_node_int_* this2212;
  struct std___List_node_int_* __retval2213;
  this2212 = v2210;
  struct std___List_node_int_* t2214 = this2212;
  __retval2213 = t2214;
  struct std___List_node_int_* t2215 = __retval2213;
  return t2215;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v2216) {
bb2217:
  struct std____cxx11___List_base_int__std__allocator_int__* this2218;
  struct std____detail___List_node_base* __cur2219;
  this2218 = v2216;
  struct std____cxx11___List_base_int__std__allocator_int__* t2220 = this2218;
  struct std____detail___List_node_base* base2221 = (struct std____detail___List_node_base*)((char *)&(t2220->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t2222 = base2221->_M_next;
  __cur2219 = t2222;
    while (1) {
      struct std____detail___List_node_base* t2223 = __cur2219;
      struct std____detail___List_node_base* r2224 = std____detail___List_node_header___M_base(&t2220->_M_impl._M_node);
      if (__cir_exc_active) {
        return;
      }
      _Bool c2225 = ((t2223 != r2224)) ? 1 : 0;
      if (!c2225) break;
        struct std___List_node_int_* __tmp2226;
        struct std____detail___List_node_base* t2227 = __cur2219;
        struct std___List_node_int_* derived2228 = (struct std___List_node_int_*)((char *)t2227 - 0);
        __tmp2226 = derived2228;
        struct std___List_node_int_* t2229 = __tmp2226;
        struct std____detail___List_node_base* base2230 = (struct std____detail___List_node_base*)((char *)t2229 + 0);
        struct std____detail___List_node_base* t2231 = base2230->_M_next;
        __cur2219 = t2231;
        struct std___List_node_int_* t2232 = __tmp2226;
        struct std___List_node_int_* r2233 = std___List_node_int____M_node_ptr(t2232);
        if (__cir_exc_active) {
          return;
        }
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t2220, r2233);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v2234) {
bb2235:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this2236;
  this2236 = v2234;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t2237 = this2236;
  {
    struct std__allocator_std___List_node_int__* base2238 = (struct std__allocator_std___List_node_int__*)((char *)t2237 + 0);
    std__allocator_std___List_node_int______allocator(base2238);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v2239) {
bb2240:
  struct std____cxx11___List_base_int__std__allocator_int__* this2241;
  this2241 = v2239;
  struct std____cxx11___List_base_int__std__allocator_int__* t2242 = this2241;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t2242);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t2242->_M_impl);
  }
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v2243) {
bb2244:
  struct std__allocator_std___List_node_int__* this2245;
  this2245 = v2243;
  struct std__allocator_std___List_node_int__* t2246 = this2245;
  return;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v2247) {
bb2248:
  struct std__vector_int__std__allocator_int__* this2249;
  this2249 = v2247;
  struct std__vector_int__std__allocator_int__* t2250 = this2249;
    struct std___Vector_base_int__std__allocator_int__* base2251 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2250 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2252 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2251->_M_impl) + 0);
    int* t2253 = base2252->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base2254 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2250 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2255 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2254->_M_impl) + 0);
    int* t2256 = base2255->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base2257 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2250 + 0);
    struct std__allocator_int_* r2258 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2257);
    void_std___Destroy_int___int_(t2253, t2256, r2258);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base2259 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2250 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base2259);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base2260 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2250 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base2260);
  }
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v2261, int* v2262) {
bb2263:
  int* __first2264;
  int* __last2265;
  __first2264 = v2261;
  __last2265 = v2262;
      _Bool r2266 = std____is_constant_evaluated();
      if (r2266) {
          while (1) {
            int* t2268 = __first2264;
            int* t2269 = __last2265;
            _Bool c2270 = ((t2268 != t2269)) ? 1 : 0;
            if (!c2270) break;
            int* t2271 = __first2264;
            void_std__destroy_at_int_(t2271);
            if (__cir_exc_active) {
              return;
            }
          for_step2267: ;
            int* t2272 = __first2264;
            int c2273 = 1;
            int* ptr2274 = &(t2272)[c2273];
            __first2264 = ptr2274;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v2275, int* v2276, struct std__allocator_int_* v2277) {
bb2278:
  int* __first2279;
  int* __last2280;
  struct std__allocator_int_* unnamed2281;
  __first2279 = v2275;
  __last2280 = v2276;
  unnamed2281 = v2277;
  int* t2282 = __first2279;
  int* t2283 = __last2280;
  void_std___Destroy_int__(t2282, t2283);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v2284) {
bb2285:
  struct std___Vector_base_int__std__allocator_int__* this2286;
  struct std__allocator_int_* __retval2287;
  this2286 = v2284;
  struct std___Vector_base_int__std__allocator_int__* t2288 = this2286;
  struct std__allocator_int_* base2289 = (struct std__allocator_int_*)((char *)&(t2288->_M_impl) + 0);
  __retval2287 = base2289;
  struct std__allocator_int_* t2290 = __retval2287;
  return t2290;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v2291, int* v2292, unsigned long v2293) {
bb2294:
  struct std____new_allocator_int_* this2295;
  int* __p2296;
  unsigned long __n2297;
  this2295 = v2291;
  __p2296 = v2292;
  __n2297 = v2293;
  struct std____new_allocator_int_* t2298 = this2295;
    unsigned long c2299 = 4;
    unsigned long c2300 = 16;
    _Bool c2301 = ((c2299 > c2300)) ? 1 : 0;
    if (c2301) {
      int* t2302 = __p2296;
      void* cast2303 = (void*)t2302;
      unsigned long t2304 = __n2297;
      unsigned long c2305 = 4;
      unsigned long b2306 = t2304 * c2305;
      unsigned long c2307 = 4;
      operator_delete_3(cast2303, b2306, c2307);
      return;
    }
  int* t2308 = __p2296;
  void* cast2309 = (void*)t2308;
  unsigned long t2310 = __n2297;
  unsigned long c2311 = 4;
  unsigned long b2312 = t2310 * c2311;
  operator_delete_2(cast2309, b2312);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v2313, int* v2314, unsigned long v2315) {
bb2316:
  struct std__allocator_int_* this2317;
  int* __p2318;
  unsigned long __n2319;
  this2317 = v2313;
  __p2318 = v2314;
  __n2319 = v2315;
  struct std__allocator_int_* t2320 = this2317;
    _Bool r2321 = std____is_constant_evaluated();
    if (r2321) {
      int* t2322 = __p2318;
      void* cast2323 = (void*)t2322;
      operator_delete(cast2323);
      return;
    }
  struct std____new_allocator_int_* base2324 = (struct std____new_allocator_int_*)((char *)t2320 + 0);
  int* t2325 = __p2318;
  unsigned long t2326 = __n2319;
  std____new_allocator_int___deallocate(base2324, t2325, t2326);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v2327, int* v2328, unsigned long v2329) {
bb2330:
  struct std__allocator_int_* __a2331;
  int* __p2332;
  unsigned long __n2333;
  __a2331 = v2327;
  __p2332 = v2328;
  __n2333 = v2329;
  struct std__allocator_int_* t2334 = __a2331;
  int* t2335 = __p2332;
  unsigned long t2336 = __n2333;
  std__allocator_int___deallocate(t2334, t2335, t2336);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v2337, int* v2338, unsigned long v2339) {
bb2340:
  struct std___Vector_base_int__std__allocator_int__* this2341;
  int* __p2342;
  unsigned long __n2343;
  this2341 = v2337;
  __p2342 = v2338;
  __n2343 = v2339;
  struct std___Vector_base_int__std__allocator_int__* t2344 = this2341;
    int* t2345 = __p2342;
    _Bool cast2346 = (_Bool)t2345;
    if (cast2346) {
      struct std__allocator_int_* base2347 = (struct std__allocator_int_*)((char *)&(t2344->_M_impl) + 0);
      int* t2348 = __p2342;
      unsigned long t2349 = __n2343;
      std__allocator_traits_std__allocator_int_____deallocate(base2347, t2348, t2349);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v2350) {
bb2351:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this2352;
  this2352 = v2350;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t2353 = this2352;
  {
    struct std__allocator_int_* base2354 = (struct std__allocator_int_*)((char *)t2353 + 0);
    std__allocator_int____allocator(base2354);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v2355) {
bb2356:
  struct std___Vector_base_int__std__allocator_int__* this2357;
  this2357 = v2355;
  struct std___Vector_base_int__std__allocator_int__* t2358 = this2357;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2359 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2358->_M_impl) + 0);
    int* t2360 = base2359->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2361 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2358->_M_impl) + 0);
    int* t2362 = base2361->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2363 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2358->_M_impl) + 0);
    int* t2364 = base2363->_M_start;
    long diff2365 = t2362 - t2364;
    unsigned long cast2366 = (unsigned long)diff2365;
    std___Vector_base_int__std__allocator_int______M_deallocate(t2358, t2360, cast2366);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t2358->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t2358->_M_impl);
  }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v2367) {
bb2368:
  struct std__allocator_int_* this2369;
  this2369 = v2367;
  struct std__allocator_int_* t2370 = this2369;
  return;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v2371) {
bb2372:
  struct std__deque_int__std__allocator_int__* this2373;
  struct std___Deque_iterator_int__int____int___ agg_tmp02374;
  struct std___Deque_iterator_int__int____int___ agg_tmp12375;
  this2373 = v2371;
  struct std__deque_int__std__allocator_int__* t2376 = this2373;
    struct std___Deque_iterator_int__int____int___ r2377 = std__deque_int__std__allocator_int_____begin(t2376);
    agg_tmp02374 = r2377;
    struct std___Deque_iterator_int__int____int___ r2378 = std__deque_int__std__allocator_int_____end(t2376);
    agg_tmp12375 = r2378;
    struct std___Deque_base_int__std__allocator_int__* base2379 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2376 + 0);
    struct std__allocator_int_* r2380 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2379);
    struct std___Deque_iterator_int__int____int___ t2381 = agg_tmp02374;
    struct std___Deque_iterator_int__int____int___ t2382 = agg_tmp12375;
    std__deque_int__std__allocator_int______M_destroy_data(t2376, t2381, t2382, r2380);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base2383 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2376 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base2383);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base2384 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2376 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base2384);
  }
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v2385) {
bb2386:
  unsigned long __size2387;
  unsigned long __retval2388;
  __size2387 = v2385;
  unsigned long t2389 = __size2387;
  unsigned long c2390 = 512;
  _Bool c2391 = ((t2389 < c2390)) ? 1 : 0;
  unsigned long ternary2392;
  if (c2391) {
    unsigned long c2393 = 512;
    unsigned long t2394 = __size2387;
    unsigned long b2395 = c2393 / t2394;
    ternary2392 = (unsigned long)b2395;
  } else {
    unsigned long c2396 = 1;
    ternary2392 = (unsigned long)c2396;
  }
  __retval2388 = ternary2392;
  unsigned long t2397 = __retval2388;
  return t2397;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb2398:
  unsigned long __retval2399;
  unsigned long c2400 = 4;
  unsigned long r2401 = std____deque_buf_size(c2400);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval2399 = r2401;
  unsigned long t2402 = __retval2399;
  return t2402;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v2403, struct std___Deque_iterator_int__int____int___ v2404, struct std___Deque_iterator_int__int____int___ v2405) {
bb2406:
  struct std__deque_int__std__allocator_int__* this2407;
  struct std___Deque_iterator_int__int____int___ __first2408;
  struct std___Deque_iterator_int__int____int___ __last2409;
  this2407 = v2403;
  __first2408 = v2404;
  __last2409 = v2405;
  struct std__deque_int__std__allocator_int__* t2410 = this2407;
    int** __node2411;
    int** t2412 = __first2408._M_node;
    int c2413 = 1;
    int** ptr2414 = &(t2412)[c2413];
    __node2411 = ptr2414;
    while (1) {
      int** t2416 = __node2411;
      int** t2417 = __last2409._M_node;
      _Bool c2418 = ((t2416 < t2417)) ? 1 : 0;
      if (!c2418) break;
      int** t2419 = __node2411;
      int* t2420 = *t2419;
      int** t2421 = __node2411;
      int* t2422 = *t2421;
      unsigned long r2423 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr2424 = &(t2422)[r2423];
      struct std___Deque_base_int__std__allocator_int__* base2425 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2410 + 0);
      struct std__allocator_int_* r2426 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2425);
      void_std___Destroy_int___int_(t2420, ptr2424, r2426);
      if (__cir_exc_active) {
        return;
      }
    for_step2415: ;
      int** t2427 = __node2411;
      int c2428 = 1;
      int** ptr2429 = &(t2427)[c2428];
      __node2411 = ptr2429;
    }
    int** t2430 = __first2408._M_node;
    int** t2431 = __last2409._M_node;
    _Bool c2432 = ((t2430 != t2431)) ? 1 : 0;
    if (c2432) {
      int* t2433 = __first2408._M_cur;
      int* t2434 = __first2408._M_last;
      struct std___Deque_base_int__std__allocator_int__* base2435 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2410 + 0);
      struct std__allocator_int_* r2436 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2435);
      void_std___Destroy_int___int_(t2433, t2434, r2436);
      if (__cir_exc_active) {
        return;
      }
      int* t2437 = __last2409._M_first;
      int* t2438 = __last2409._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base2439 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2410 + 0);
      struct std__allocator_int_* r2440 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2439);
      void_std___Destroy_int___int_(t2437, t2438, r2440);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t2441 = __first2408._M_cur;
      int* t2442 = __last2409._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base2443 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2410 + 0);
      struct std__allocator_int_* r2444 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2443);
      void_std___Destroy_int___int_(t2441, t2442, r2444);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v2445, struct std___Deque_iterator_int__int____int___* v2446) {
bb2447:
  struct std___Deque_iterator_int__int____int___* this2448;
  struct std___Deque_iterator_int__int____int___* __x2449;
  this2448 = v2445;
  __x2449 = v2446;
  struct std___Deque_iterator_int__int____int___* t2450 = this2448;
  struct std___Deque_iterator_int__int____int___* t2451 = __x2449;
  int* t2452 = t2451->_M_cur;
  t2450->_M_cur = t2452;
  struct std___Deque_iterator_int__int____int___* t2453 = __x2449;
  int* t2454 = t2453->_M_first;
  t2450->_M_first = t2454;
  struct std___Deque_iterator_int__int____int___* t2455 = __x2449;
  int* t2456 = t2455->_M_last;
  t2450->_M_last = t2456;
  struct std___Deque_iterator_int__int____int___* t2457 = __x2449;
  int** t2458 = t2457->_M_node;
  t2450->_M_node = t2458;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v2459, struct std___Deque_iterator_int__int____int___ v2460, struct std___Deque_iterator_int__int____int___ v2461, struct std__allocator_int_* v2462) {
bb2463:
  struct std__deque_int__std__allocator_int__* this2464;
  struct std___Deque_iterator_int__int____int___ __first2465;
  struct std___Deque_iterator_int__int____int___ __last2466;
  struct std__allocator_int_* unnamed2467;
  this2464 = v2459;
  __first2465 = v2460;
  __last2466 = v2461;
  unnamed2467 = v2462;
  struct std__deque_int__std__allocator_int__* t2468 = this2464;
    _Bool c2469 = 0;
    if (c2469) {
      struct std___Deque_iterator_int__int____int___ agg_tmp02470;
      struct std___Deque_iterator_int__int____int___ agg_tmp12471;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02470, &__first2465);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12471, &__last2466);
      struct std___Deque_iterator_int__int____int___ t2472 = agg_tmp02470;
      struct std___Deque_iterator_int__int____int___ t2473 = agg_tmp12471;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t2468, t2472, t2473);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v2474) {
bb2475:
  struct std__deque_int__std__allocator_int__* this2476;
  struct std___Deque_iterator_int__int____int___ __retval2477;
  this2476 = v2474;
  struct std__deque_int__std__allocator_int__* t2478 = this2476;
  struct std___Deque_base_int__std__allocator_int__* base2479 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2478 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2480 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2479->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2477, &base2480->_M_start);
  struct std___Deque_iterator_int__int____int___ t2481 = __retval2477;
  return t2481;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v2482) {
bb2483:
  struct std__deque_int__std__allocator_int__* this2484;
  struct std___Deque_iterator_int__int____int___ __retval2485;
  this2484 = v2482;
  struct std__deque_int__std__allocator_int__* t2486 = this2484;
  struct std___Deque_base_int__std__allocator_int__* base2487 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2486 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2488 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2487->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2485, &base2488->_M_finish);
  struct std___Deque_iterator_int__int____int___ t2489 = __retval2485;
  return t2489;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v2490) {
bb2491:
  struct std___Deque_base_int__std__allocator_int__* this2492;
  struct std__allocator_int_* __retval2493;
  this2492 = v2490;
  struct std___Deque_base_int__std__allocator_int__* t2494 = this2492;
  struct std__allocator_int_* base2495 = (struct std__allocator_int_*)((char *)&(t2494->_M_impl) + 0);
  __retval2493 = base2495;
  struct std__allocator_int_* t2496 = __retval2493;
  return t2496;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v2497, int* v2498) {
bb2499:
  struct std___Deque_base_int__std__allocator_int__* this2500;
  int* __p2501;
  this2500 = v2497;
  __p2501 = v2498;
  struct std___Deque_base_int__std__allocator_int__* t2502 = this2500;
  struct std__allocator_int_* base2503 = (struct std__allocator_int_*)((char *)&(t2502->_M_impl) + 0);
  int* t2504 = __p2501;
  unsigned long c2505 = 4;
  unsigned long r2506 = std____deque_buf_size(c2505);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base2503, t2504, r2506);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v2507, int** v2508, int** v2509) {
bb2510:
  struct std___Deque_base_int__std__allocator_int__* this2511;
  int** __nstart2512;
  int** __nfinish2513;
  this2511 = v2507;
  __nstart2512 = v2508;
  __nfinish2513 = v2509;
  struct std___Deque_base_int__std__allocator_int__* t2514 = this2511;
    int** __n2515;
    int** t2516 = __nstart2512;
    __n2515 = t2516;
    while (1) {
      int** t2518 = __n2515;
      int** t2519 = __nfinish2513;
      _Bool c2520 = ((t2518 < t2519)) ? 1 : 0;
      if (!c2520) break;
      int** t2521 = __n2515;
      int* t2522 = *t2521;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t2514, t2522);
    for_step2517: ;
      int** t2523 = __n2515;
      int c2524 = 1;
      int** ptr2525 = &(t2523)[c2524];
      __n2515 = ptr2525;
    }
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v2526) {
bb2527:
  struct std___Deque_base_int__std__allocator_int__* this2528;
  struct std__allocator_int_* __retval2529;
  this2528 = v2526;
  struct std___Deque_base_int__std__allocator_int__* t2530 = this2528;
  struct std__allocator_int_* base2531 = (struct std__allocator_int_*)((char *)&(t2530->_M_impl) + 0);
  __retval2529 = base2531;
  struct std__allocator_int_* t2532 = __retval2529;
  return t2532;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v2533, struct std__allocator_int_* v2534) {
bb2535:
  struct std__allocator_int___* this2536;
  struct std__allocator_int_* unnamed2537;
  this2536 = v2533;
  unnamed2537 = v2534;
  struct std__allocator_int___* t2538 = this2536;
  struct std____new_allocator_int___* base2539 = (struct std____new_allocator_int___*)((char *)t2538 + 0);
  std____new_allocator_int______new_allocator(base2539);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v2540) {
bb2541:
  struct std___Deque_base_int__std__allocator_int__* this2542;
  struct std__allocator_int___ __retval2543;
  this2542 = v2540;
  struct std___Deque_base_int__std__allocator_int__* t2544 = this2542;
  struct std__allocator_int_* r2545 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t2544);
  std__allocator_int____allocator_int_(&__retval2543, r2545);
  struct std__allocator_int___ t2546 = __retval2543;
  return t2546;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v2547, int** v2548, unsigned long v2549) {
bb2550:
  struct std____new_allocator_int___* this2551;
  int** __p2552;
  unsigned long __n2553;
  this2551 = v2547;
  __p2552 = v2548;
  __n2553 = v2549;
  struct std____new_allocator_int___* t2554 = this2551;
    unsigned long c2555 = 8;
    unsigned long c2556 = 16;
    _Bool c2557 = ((c2555 > c2556)) ? 1 : 0;
    if (c2557) {
      int** t2558 = __p2552;
      void* cast2559 = (void*)t2558;
      unsigned long t2560 = __n2553;
      unsigned long c2561 = 8;
      unsigned long b2562 = t2560 * c2561;
      unsigned long c2563 = 8;
      operator_delete_3(cast2559, b2562, c2563);
      return;
    }
  int** t2564 = __p2552;
  void* cast2565 = (void*)t2564;
  unsigned long t2566 = __n2553;
  unsigned long c2567 = 8;
  unsigned long b2568 = t2566 * c2567;
  operator_delete_2(cast2565, b2568);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v2569, int** v2570, unsigned long v2571) {
bb2572:
  struct std__allocator_int___* this2573;
  int** __p2574;
  unsigned long __n2575;
  this2573 = v2569;
  __p2574 = v2570;
  __n2575 = v2571;
  struct std__allocator_int___* t2576 = this2573;
    _Bool r2577 = std____is_constant_evaluated();
    if (r2577) {
      int** t2578 = __p2574;
      void* cast2579 = (void*)t2578;
      operator_delete(cast2579);
      return;
    }
  struct std____new_allocator_int___* base2580 = (struct std____new_allocator_int___*)((char *)t2576 + 0);
  int** t2581 = __p2574;
  unsigned long t2582 = __n2575;
  std____new_allocator_int____deallocate(base2580, t2581, t2582);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v2583, int** v2584, unsigned long v2585) {
bb2586:
  struct std__allocator_int___* __a2587;
  int** __p2588;
  unsigned long __n2589;
  __a2587 = v2583;
  __p2588 = v2584;
  __n2589 = v2585;
  struct std__allocator_int___* t2590 = __a2587;
  int** t2591 = __p2588;
  unsigned long t2592 = __n2589;
  std__allocator_int____deallocate(t2590, t2591, t2592);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v2593, int** v2594, unsigned long v2595) {
bb2596:
  struct std___Deque_base_int__std__allocator_int__* this2597;
  int** __p2598;
  unsigned long __n2599;
  struct std__allocator_int___ __map_alloc2600;
  this2597 = v2593;
  __p2598 = v2594;
  __n2599 = v2595;
  struct std___Deque_base_int__std__allocator_int__* t2601 = this2597;
  struct std__allocator_int___ r2602 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t2601);
  __map_alloc2600 = r2602;
  int** t2603 = __p2598;
  unsigned long t2604 = __n2599;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc2600, t2603, t2604);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v2605) {
bb2606:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this2607;
  this2607 = v2605;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t2608 = this2607;
  {
    struct std__allocator_int_* base2609 = (struct std__allocator_int_*)((char *)t2608 + 0);
    std__allocator_int____allocator(base2609);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v2610) {
bb2611:
  struct std___Deque_base_int__std__allocator_int__* this2612;
  this2612 = v2610;
  struct std___Deque_base_int__std__allocator_int__* t2613 = this2612;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2614 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2613->_M_impl) + 0);
      int** t2615 = base2614->_M_map;
      _Bool cast2616 = (_Bool)t2615;
      if (cast2616) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2617 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2613->_M_impl) + 0);
        int** t2618 = base2617->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2619 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2613->_M_impl) + 0);
        int** t2620 = base2619->_M_finish._M_node;
        int c2621 = 1;
        int** ptr2622 = &(t2620)[c2621];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t2613, t2618, ptr2622);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2623 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2613->_M_impl) + 0);
        int** t2624 = base2623->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2625 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2613->_M_impl) + 0);
        unsigned long t2626 = base2625->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t2613, t2624, t2626);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t2613->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v2627) {
bb2628:
  struct std____new_allocator_int___* this2629;
  this2629 = v2627;
  struct std____new_allocator_int___* t2630 = this2629;
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v2631) {
bb2632:
  struct std__deque_int__std__allocator_int__* this2633;
  this2633 = v2631;
  struct std__deque_int__std__allocator_int__* t2634 = this2633;
  struct std___Deque_base_int__std__allocator_int__* base2635 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2634 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base2635);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v2636) {
bb2637:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this2638;
  this2638 = v2636;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t2639 = this2638;
  struct std__allocator_int_* base2640 = (struct std__allocator_int_*)((char *)t2639 + 0);
  std__allocator_int___allocator(base2640);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2641 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t2639 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base2641);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v2642, unsigned long* v2643) {
bb2644:
  unsigned long* __a2645;
  unsigned long* __b2646;
  unsigned long* __retval2647;
  __a2645 = v2642;
  __b2646 = v2643;
    unsigned long* t2648 = __a2645;
    unsigned long t2649 = *t2648;
    unsigned long* t2650 = __b2646;
    unsigned long t2651 = *t2650;
    _Bool c2652 = ((t2649 < t2651)) ? 1 : 0;
    if (c2652) {
      unsigned long* t2653 = __b2646;
      __retval2647 = t2653;
      unsigned long* t2654 = __retval2647;
      return t2654;
    }
  unsigned long* t2655 = __a2645;
  __retval2647 = t2655;
  unsigned long* t2656 = __retval2647;
  return t2656;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v2657) {
bb2658:
  struct std____new_allocator_int___* this2659;
  unsigned long __retval2660;
  this2659 = v2657;
  struct std____new_allocator_int___* t2661 = this2659;
  unsigned long c2662 = 9223372036854775807;
  unsigned long c2663 = 8;
  unsigned long b2664 = c2662 / c2663;
  __retval2660 = b2664;
  unsigned long t2665 = __retval2660;
  return t2665;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v2666, unsigned long v2667, void* v2668) {
bb2669:
  struct std____new_allocator_int___* this2670;
  unsigned long __n2671;
  void* unnamed2672;
  int** __retval2673;
  this2670 = v2666;
  __n2671 = v2667;
  unnamed2672 = v2668;
  struct std____new_allocator_int___* t2674 = this2670;
    unsigned long t2675 = __n2671;
    unsigned long r2676 = std____new_allocator_int_____M_max_size___const(t2674);
    _Bool c2677 = ((t2675 > r2676)) ? 1 : 0;
    if (c2677) {
        unsigned long t2678 = __n2671;
        unsigned long c2679 = -1;
        unsigned long c2680 = 8;
        unsigned long b2681 = c2679 / c2680;
        _Bool c2682 = ((t2678 > b2681)) ? 1 : 0;
        if (c2682) {
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
    unsigned long c2683 = 8;
    unsigned long c2684 = 16;
    _Bool c2685 = ((c2683 > c2684)) ? 1 : 0;
    if (c2685) {
      unsigned long __al2686;
      unsigned long c2687 = 8;
      __al2686 = c2687;
      unsigned long t2688 = __n2671;
      unsigned long c2689 = 8;
      unsigned long b2690 = t2688 * c2689;
      unsigned long t2691 = __al2686;
      void* r2692 = operator_new_2(b2690, t2691);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast2693 = (int**)r2692;
      __retval2673 = cast2693;
      int** t2694 = __retval2673;
      return t2694;
    }
  unsigned long t2695 = __n2671;
  unsigned long c2696 = 8;
  unsigned long b2697 = t2695 * c2696;
  void* r2698 = operator_new(b2697);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast2699 = (int**)r2698;
  __retval2673 = cast2699;
  int** t2700 = __retval2673;
  return t2700;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v2701, unsigned long v2702) {
bb2703:
  struct std__allocator_int___* this2704;
  unsigned long __n2705;
  int** __retval2706;
  this2704 = v2701;
  __n2705 = v2702;
  struct std__allocator_int___* t2707 = this2704;
    _Bool r2708 = std____is_constant_evaluated();
    if (r2708) {
        unsigned long t2709 = __n2705;
        unsigned long c2710 = 8;
        unsigned long ovr2711;
        _Bool ovf2712 = __builtin_mul_overflow(t2709, c2710, &ovr2711);
        __n2705 = ovr2711;
        if (ovf2712) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2713 = __n2705;
      void* r2714 = operator_new(t2713);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast2715 = (int**)r2714;
      __retval2706 = cast2715;
      int** t2716 = __retval2706;
      return t2716;
    }
  struct std____new_allocator_int___* base2717 = (struct std____new_allocator_int___*)((char *)t2707 + 0);
  unsigned long t2718 = __n2705;
  void* c2719 = ((void*)0);
  int** r2720 = std____new_allocator_int____allocate(base2717, t2718, c2719);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2706 = r2720;
  int** t2721 = __retval2706;
  return t2721;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v2722, unsigned long v2723) {
bb2724:
  struct std__allocator_int___* __a2725;
  unsigned long __n2726;
  int** __retval2727;
  __a2725 = v2722;
  __n2726 = v2723;
  struct std__allocator_int___* t2728 = __a2725;
  unsigned long t2729 = __n2726;
  int** r2730 = std__allocator_int____allocate(t2728, t2729);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2727 = r2730;
  int** t2731 = __retval2727;
  return t2731;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v2732, unsigned long v2733) {
bb2734:
  struct std___Deque_base_int__std__allocator_int__* this2735;
  unsigned long __n2736;
  int** __retval2737;
  struct std__allocator_int___ __map_alloc2738;
  this2735 = v2732;
  __n2736 = v2733;
  struct std___Deque_base_int__std__allocator_int__* t2739 = this2735;
  struct std__allocator_int___ r2740 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t2739);
  __map_alloc2738 = r2740;
  unsigned long t2741 = __n2736;
  int** r2742 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc2738, t2741);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2737 = r2742;
  int** t2743 = __retval2737;
  return t2743;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v2744) {
bb2745:
  struct std____new_allocator_int_* this2746;
  unsigned long __retval2747;
  this2746 = v2744;
  struct std____new_allocator_int_* t2748 = this2746;
  unsigned long c2749 = 9223372036854775807;
  unsigned long c2750 = 4;
  unsigned long b2751 = c2749 / c2750;
  __retval2747 = b2751;
  unsigned long t2752 = __retval2747;
  return t2752;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v2753, unsigned long v2754, void* v2755) {
bb2756:
  struct std____new_allocator_int_* this2757;
  unsigned long __n2758;
  void* unnamed2759;
  int* __retval2760;
  this2757 = v2753;
  __n2758 = v2754;
  unnamed2759 = v2755;
  struct std____new_allocator_int_* t2761 = this2757;
    unsigned long t2762 = __n2758;
    unsigned long r2763 = std____new_allocator_int____M_max_size___const(t2761);
    _Bool c2764 = ((t2762 > r2763)) ? 1 : 0;
    if (c2764) {
        unsigned long t2765 = __n2758;
        unsigned long c2766 = -1;
        unsigned long c2767 = 4;
        unsigned long b2768 = c2766 / c2767;
        _Bool c2769 = ((t2765 > b2768)) ? 1 : 0;
        if (c2769) {
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
    unsigned long c2770 = 4;
    unsigned long c2771 = 16;
    _Bool c2772 = ((c2770 > c2771)) ? 1 : 0;
    if (c2772) {
      unsigned long __al2773;
      unsigned long c2774 = 4;
      __al2773 = c2774;
      unsigned long t2775 = __n2758;
      unsigned long c2776 = 4;
      unsigned long b2777 = t2775 * c2776;
      unsigned long t2778 = __al2773;
      void* r2779 = operator_new_2(b2777, t2778);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast2780 = (int*)r2779;
      __retval2760 = cast2780;
      int* t2781 = __retval2760;
      return t2781;
    }
  unsigned long t2782 = __n2758;
  unsigned long c2783 = 4;
  unsigned long b2784 = t2782 * c2783;
  void* r2785 = operator_new(b2784);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast2786 = (int*)r2785;
  __retval2760 = cast2786;
  int* t2787 = __retval2760;
  return t2787;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v2788, unsigned long v2789) {
bb2790:
  struct std__allocator_int_* this2791;
  unsigned long __n2792;
  int* __retval2793;
  this2791 = v2788;
  __n2792 = v2789;
  struct std__allocator_int_* t2794 = this2791;
    _Bool r2795 = std____is_constant_evaluated();
    if (r2795) {
        unsigned long t2796 = __n2792;
        unsigned long c2797 = 4;
        unsigned long ovr2798;
        _Bool ovf2799 = __builtin_mul_overflow(t2796, c2797, &ovr2798);
        __n2792 = ovr2798;
        if (ovf2799) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2800 = __n2792;
      void* r2801 = operator_new(t2800);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast2802 = (int*)r2801;
      __retval2793 = cast2802;
      int* t2803 = __retval2793;
      return t2803;
    }
  struct std____new_allocator_int_* base2804 = (struct std____new_allocator_int_*)((char *)t2794 + 0);
  unsigned long t2805 = __n2792;
  void* c2806 = ((void*)0);
  int* r2807 = std____new_allocator_int___allocate(base2804, t2805, c2806);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2793 = r2807;
  int* t2808 = __retval2793;
  return t2808;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v2809, unsigned long v2810) {
bb2811:
  struct std__allocator_int_* __a2812;
  unsigned long __n2813;
  int* __retval2814;
  __a2812 = v2809;
  __n2813 = v2810;
  struct std__allocator_int_* t2815 = __a2812;
  unsigned long t2816 = __n2813;
  int* r2817 = std__allocator_int___allocate(t2815, t2816);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2814 = r2817;
  int* t2818 = __retval2814;
  return t2818;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v2819) {
bb2820:
  struct std___Deque_base_int__std__allocator_int__* this2821;
  int* __retval2822;
  this2821 = v2819;
  struct std___Deque_base_int__std__allocator_int__* t2823 = this2821;
  struct std__allocator_int_* base2824 = (struct std__allocator_int_*)((char *)&(t2823->_M_impl) + 0);
  unsigned long c2825 = 4;
  unsigned long r2826 = std____deque_buf_size(c2825);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r2827 = std__allocator_traits_std__allocator_int_____allocate(base2824, r2826);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2822 = r2827;
  int* t2828 = __retval2822;
  return t2828;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v2829, int** v2830, int** v2831) {
bb2832:
  struct std___Deque_base_int__std__allocator_int__* this2833;
  int** __nstart2834;
  int** __nfinish2835;
  int** __cur2836;
  this2833 = v2829;
  __nstart2834 = v2830;
  __nfinish2835 = v2831;
  struct std___Deque_base_int__std__allocator_int__* t2837 = this2833;
        int** t2839 = __nstart2834;
        __cur2836 = t2839;
        while (1) {
          int** t2841 = __cur2836;
          int** t2842 = __nfinish2835;
          _Bool c2843 = ((t2841 < t2842)) ? 1 : 0;
          if (!c2843) break;
          int* r2844 = std___Deque_base_int__std__allocator_int______M_allocate_node(t2837);
          if (__cir_exc_active) {
            goto cir_try_dispatch2838;
          }
          int** t2845 = __cur2836;
          *t2845 = r2844;
        for_step2840: ;
          int** t2846 = __cur2836;
          int c2847 = 1;
          int** ptr2848 = &(t2846)[c2847];
          __cur2836 = ptr2848;
        }
    cir_try_dispatch2838: ;
    if (__cir_exc_active) {
    {
      int ca_tok2849 = 0;
      void* ca_exn2850 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t2851 = __nstart2834;
        int** t2852 = __cur2836;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t2837, t2851, t2852);
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
bb2853:
  unsigned long __retval2854;
  unsigned long c2855 = 4;
  unsigned long r2856 = std____deque_buf_size(c2855);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval2854 = r2856;
  unsigned long t2857 = __retval2854;
  return t2857;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v2858, int** v2859) {
bb2860:
  struct std___Deque_iterator_int__int____int___* this2861;
  int** __new_node2862;
  this2861 = v2858;
  __new_node2862 = v2859;
  struct std___Deque_iterator_int__int____int___* t2863 = this2861;
  int** t2864 = __new_node2862;
  t2863->_M_node = t2864;
  int** t2865 = __new_node2862;
  int* t2866 = *t2865;
  t2863->_M_first = t2866;
  int* t2867 = t2863->_M_first;
  unsigned long r2868 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast2869 = (long)r2868;
  int* ptr2870 = &(t2867)[cast2869];
  t2863->_M_last = ptr2870;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v2871, unsigned long v2872) {
bb2873:
  struct std___Deque_base_int__std__allocator_int__* this2874;
  unsigned long __num_elements2875;
  unsigned long __num_nodes2876;
  unsigned long ref_tmp02877;
  unsigned long ref_tmp12878;
  int** __nstart2879;
  int** __nfinish2880;
  this2874 = v2871;
  __num_elements2875 = v2872;
  struct std___Deque_base_int__std__allocator_int__* t2881 = this2874;
  unsigned long t2882 = __num_elements2875;
  unsigned long c2883 = 4;
  unsigned long r2884 = std____deque_buf_size(c2883);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b2885 = t2882 / r2884;
  unsigned long c2886 = 1;
  unsigned long b2887 = b2885 + c2886;
  __num_nodes2876 = b2887;
  unsigned long c2888 = 8;
  ref_tmp02877 = c2888;
  unsigned long t2889 = __num_nodes2876;
  unsigned long c2890 = 2;
  unsigned long b2891 = t2889 + c2890;
  ref_tmp12878 = b2891;
  unsigned long* r2892 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp02877, &ref_tmp12878);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2893 = *r2892;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2894 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  base2894->_M_map_size = t2893;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2895 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  unsigned long t2896 = base2895->_M_map_size;
  int** r2897 = std___Deque_base_int__std__allocator_int______M_allocate_map(t2881, t2896);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2898 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  base2898->_M_map = r2897;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2899 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  int** t2900 = base2899->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2901 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  unsigned long t2902 = base2901->_M_map_size;
  unsigned long t2903 = __num_nodes2876;
  unsigned long b2904 = t2902 - t2903;
  unsigned long c2905 = 2;
  unsigned long b2906 = b2904 / c2905;
  int** ptr2907 = &(t2900)[b2906];
  __nstart2879 = ptr2907;
  int** t2908 = __nstart2879;
  unsigned long t2909 = __num_nodes2876;
  int** ptr2910 = &(t2908)[t2909];
  __nfinish2880 = ptr2910;
      int** t2912 = __nstart2879;
      int** t2913 = __nfinish2880;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t2881, t2912, t2913);
      if (__cir_exc_active) {
        goto cir_try_dispatch2911;
      }
    cir_try_dispatch2911: ;
    if (__cir_exc_active) {
    {
      int ca_tok2914 = 0;
      void* ca_exn2915 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2916 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
        int** t2917 = base2916->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2918 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
        unsigned long t2919 = base2918->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t2881, t2917, t2919);
        int** c2920 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2921 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
        base2921->_M_map = c2920;
        unsigned long c2922 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2923 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
        base2923->_M_map_size = c2922;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2924 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  int** t2925 = __nstart2879;
  std___Deque_iterator_int__int___int_____M_set_node(&base2924->_M_start, t2925);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2926 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  int** t2927 = __nfinish2880;
  int c2928 = -1;
  int** ptr2929 = &(t2927)[c2928];
  std___Deque_iterator_int__int___int_____M_set_node(&base2926->_M_finish, ptr2929);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2930 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  int* t2931 = base2930->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2932 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  base2932->_M_start._M_cur = t2931;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2933 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  int* t2934 = base2933->_M_finish._M_first;
  unsigned long t2935 = __num_elements2875;
  unsigned long c2936 = 4;
  unsigned long r2937 = std____deque_buf_size(c2936);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b2938 = t2935 % r2937;
  int* ptr2939 = &(t2934)[b2938];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2940 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t2881->_M_impl) + 0);
  base2940->_M_finish._M_cur = ptr2939;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v2941) {
bb2942:
  struct std___Deque_base_int__std__allocator_int__* this2943;
  this2943 = v2941;
  struct std___Deque_base_int__std__allocator_int__* t2944 = this2943;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t2944->_M_impl);
    unsigned long c2945 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t2944, c2945);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t2944->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v2946) {
bb2947:
  struct std____new_allocator_int_* this2948;
  this2948 = v2946;
  struct std____new_allocator_int_* t2949 = this2948;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v2950) {
bb2951:
  struct std__allocator_int_* this2952;
  this2952 = v2950;
  struct std__allocator_int_* t2953 = this2952;
  struct std____new_allocator_int_* base2954 = (struct std____new_allocator_int_*)((char *)t2953 + 0);
  std____new_allocator_int_____new_allocator(base2954);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v2955) {
bb2956:
  struct std___Deque_iterator_int__int____int___* this2957;
  this2957 = v2955;
  struct std___Deque_iterator_int__int____int___* t2958 = this2957;
  int* c2959 = ((void*)0);
  t2958->_M_cur = c2959;
  int* c2960 = ((void*)0);
  t2958->_M_first = c2960;
  int* c2961 = ((void*)0);
  t2958->_M_last = c2961;
  int** c2962 = ((void*)0);
  t2958->_M_node = c2962;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v2963) {
bb2964:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this2965;
  this2965 = v2963;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t2966 = this2965;
  int** c2967 = ((void*)0);
  t2966->_M_map = c2967;
  unsigned long c2968 = 0;
  t2966->_M_map_size = c2968;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t2966->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t2966->_M_finish);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v2969) {
bb2970:
  struct std__vector_int__std__allocator_int__* this2971;
  this2971 = v2969;
  struct std__vector_int__std__allocator_int__* t2972 = this2971;
  struct std___Vector_base_int__std__allocator_int__* base2973 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2972 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base2973);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v2974) {
bb2975:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this2976;
  this2976 = v2974;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t2977 = this2976;
  struct std__allocator_int_* base2978 = (struct std__allocator_int_*)((char *)t2977 + 0);
  std__allocator_int___allocator(base2978);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2979 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t2977 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base2979);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v2980) {
bb2981:
  struct std___Vector_base_int__std__allocator_int__* this2982;
  this2982 = v2980;
  struct std___Vector_base_int__std__allocator_int__* t2983 = this2982;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t2983->_M_impl);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v2984) {
bb2985:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this2986;
  this2986 = v2984;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t2987 = this2986;
  int* c2988 = ((void*)0);
  t2987->_M_start = c2988;
  int* c2989 = ((void*)0);
  t2987->_M_finish = c2989;
  int* c2990 = ((void*)0);
  t2987->_M_end_of_storage = c2990;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2Ev
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v2991) {
bb2992:
  struct std____cxx11__list_int__std__allocator_int__* this2993;
  this2993 = v2991;
  struct std____cxx11__list_int__std__allocator_int__* t2994 = this2993;
  struct std____cxx11___List_base_int__std__allocator_int__* base2995 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t2994 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base(base2995);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v2996) {
bb2997:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this2998;
  this2998 = v2996;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t2999 = this2998;
  struct std__allocator_std___List_node_int__* base3000 = (struct std__allocator_std___List_node_int__*)((char *)t2999 + 0);
  std__allocator_std___List_node_int_____allocator(base3000);
    std____detail___List_node_header___List_node_header(&t2999->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v3001) {
bb3002:
  struct std____cxx11___List_base_int__std__allocator_int__* this3003;
  this3003 = v3001;
  struct std____cxx11___List_base_int__std__allocator_int__* t3004 = this3003;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t3004->_M_impl);
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v3005) {
bb3006:
  struct std____new_allocator_std___List_node_int__* this3007;
  this3007 = v3005;
  struct std____new_allocator_std___List_node_int__* t3008 = this3007;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v3009) {
bb3010:
  struct std__allocator_std___List_node_int__* this3011;
  this3011 = v3009;
  struct std__allocator_std___List_node_int__* t3012 = this3011;
  struct std____new_allocator_std___List_node_int__* base3013 = (struct std____new_allocator_std___List_node_int__*)((char *)t3012 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base3013);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v3014) {
bb3015:
  struct std____detail___List_node_header* this3016;
  this3016 = v3014;
  struct std____detail___List_node_header* t3017 = this3016;
  struct std____detail___List_node_base* base3018 = (struct std____detail___List_node_base*)((char *)t3017 + 0);
  struct std____detail___List_size* base3019 = (struct std____detail___List_size*)((char *)t3017 + 16);
  std____detail___List_node_header___M_init(t3017);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v3020, struct std____detail___List_size* v3021) {
bb3022:
  struct std____detail___List_size* this3023;
  struct std____detail___List_size* unnamed3024;
  struct std____detail___List_size* __retval3025;
  this3023 = v3020;
  unnamed3024 = v3021;
  struct std____detail___List_size* t3026 = this3023;
  struct std____detail___List_size* t3027 = unnamed3024;
  unsigned long t3028 = t3027->_M_size;
  t3026->_M_size = t3028;
  __retval3025 = t3026;
  struct std____detail___List_size* t3029 = __retval3025;
  return t3029;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v3030) {
bb3031:
  struct std____detail___List_node_header* this3032;
  struct std____detail___List_size ref_tmp03033;
  this3032 = v3030;
  struct std____detail___List_node_header* t3034 = this3032;
  struct std____detail___List_node_base* base3035 = (struct std____detail___List_node_base*)((char *)t3034 + 0);
  struct std____detail___List_node_base* base3036 = (struct std____detail___List_node_base*)((char *)t3034 + 0);
  base3036->_M_prev = base3035;
  struct std____detail___List_node_base* base3037 = (struct std____detail___List_node_base*)((char *)t3034 + 0);
  base3037->_M_next = base3035;
  struct std____detail___List_size* base3038 = (struct std____detail___List_size*)((char *)t3034 + 16);
  ref_tmp03033 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r3039 = std____detail___List_size__operator_(base3038, &ref_tmp03033);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v3040, struct std____allocated_ptr_std__allocator_std___List_node_int___* v3041) {
bb3042:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this3043;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd3044;
  this3043 = v3040;
  __gd3044 = v3041;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t3045 = this3043;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t3046 = __gd3044;
  struct std__allocator_std___List_node_int__* t3047 = t3046->_M_alloc;
  t3045->_M_alloc = t3047;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t3048 = __gd3044;
  struct std___List_node_int_* t3049 = t3048->_M_ptr;
  t3045->_M_ptr = t3049;
  struct std___List_node_int_* c3050 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t3051 = __gd3044;
  t3051->_M_ptr = c3050;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v3052) {
bb3053:
  struct std___List_node_int_* __ptr3054;
  struct std___List_node_int_* __retval3055;
  __ptr3054 = v3052;
  struct std___List_node_int_* t3056 = __ptr3054;
  __retval3055 = t3056;
  struct std___List_node_int_* t3057 = __retval3055;
  return t3057;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v3058) {
bb3059:
  struct std___List_node_int_** __ptr3060;
  struct std___List_node_int_* __retval3061;
  __ptr3060 = v3058;
  struct std___List_node_int_** t3062 = __ptr3060;
  struct std___List_node_int_* t3063 = *t3062;
  struct std___List_node_int_* r3064 = std___List_node_int___std__to_address_std___List_node_int___(t3063);
  __retval3061 = r3064;
  struct std___List_node_int_* t3065 = __retval3061;
  return t3065;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v3066) {
bb3067:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this3068;
  struct std___List_node_int_* __retval3069;
  this3068 = v3066;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t3070 = this3068;
  struct std___List_node_int_* r3071 = auto_std____to_address_std___List_node_int___(&t3070->_M_ptr);
  __retval3069 = r3071;
  struct std___List_node_int_* t3072 = __retval3069;
  return t3072;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v3073) {
bb3074:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this3075;
  _Bool __retval3076;
  this3075 = v3073;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t3077 = this3075;
  struct std___List_node_int_* t3078 = t3077->_M_ptr;
  _Bool cast3079 = (_Bool)t3078;
  __retval3076 = cast3079;
  _Bool t3080 = __retval3076;
  return t3080;
}

