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
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_std___List_node_int__ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___List_node_int_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "first == second1";
char _str_1[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_swap/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "second == first1";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "first contains:";
char _str_4[2] = " ";
char _str_5[18] = "\nsecond contains:";
char _str_6[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* p0);
extern void std____detail___List_node_base__swap(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____alloc_on_swap_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
void __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_on_swap(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std____cxx11__list_int__std__allocator_int_____swap(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool bool_std__operator___int__std__allocator_int___(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
_Bool std__operator__(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
struct std___List_iterator_int_ std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0, int p1);
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
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
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
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* p0, struct std__allocator_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0, struct std__allocator_std___List_node_int__* p1);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* p0);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* p0, unsigned long p1, void* p2);
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* p0, unsigned long p1);
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* p0, unsigned long p1);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std__allocator_std___List_node_int__* p1, struct std___List_node_int_* p2);
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0);
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* p0);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0, struct std____new_allocator_std___List_node_int__* p1);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
struct std__allocator_std___List_node_int__ std__allocator_traits_std__allocator_std___List_node_int_______select_on_container_copy_construction(struct std__allocator_std___List_node_int__* p0);
struct std__allocator_std___List_node_int__ __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_select_on_copy(struct std__allocator_std___List_node_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
_Bool std__operator___2(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___List_node_int____M_valptr___const(struct std___List_node_int_* p0);
int* std___List_const_iterator_int___operator____const(struct std___List_const_iterator_int_* p0);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* p0);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_const_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2, struct std____false_type p3);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* p0);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator(base4);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2EmRKiRKS1_
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* v5, unsigned long v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std____cxx11__list_int__std__allocator_int__* this10;
  unsigned long __n11;
  int* __value12;
  struct std__allocator_int_* __a13;
  struct std__allocator_std___List_node_int__ ref_tmp014;
  this10 = v5;
  __n11 = v6;
  __value12 = v7;
  __a13 = v8;
  struct std____cxx11__list_int__std__allocator_int__* t15 = this10;
  struct std____cxx11___List_base_int__std__allocator_int__* base16 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t15 + 0);
  struct std__allocator_int_* t17 = __a13;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp014, t17);
    std____cxx11___List_base_int__std__allocator_int______List_base(base16, &ref_tmp014);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp014);
  }
    unsigned long t18 = __n11;
    int* t19 = __value12;
    std____cxx11__list_int__std__allocator_int______M_fill_initialize(t15, t18, t19);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v20) {
bb21:
  struct std__allocator_int_* this22;
  this22 = v20;
  struct std__allocator_int_* t23 = this22;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2ERKS2_
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v24, struct std____cxx11__list_int__std__allocator_int__* v25) {
bb26:
  struct std____cxx11__list_int__std__allocator_int__* this27;
  struct std____cxx11__list_int__std__allocator_int__* __x28;
  struct std__allocator_std___List_node_int__ ref_tmp029;
  struct std___List_const_iterator_int_ agg_tmp030;
  struct std___List_const_iterator_int_ agg_tmp131;
  struct std____false_type agg_tmp232;
  this27 = v24;
  __x28 = v25;
  struct std____cxx11__list_int__std__allocator_int__* t33 = this27;
  struct std____cxx11___List_base_int__std__allocator_int__* base34 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t33 + 0);
  struct std____cxx11__list_int__std__allocator_int__* t35 = __x28;
  struct std____cxx11___List_base_int__std__allocator_int__* base36 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t35 + 0);
  struct std__allocator_std___List_node_int__* r37 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base36);
  struct std__allocator_std___List_node_int__ r38 = __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_select_on_copy(r37);
  ref_tmp029 = r38;
    std____cxx11___List_base_int__std__allocator_int______List_base(base34, &ref_tmp029);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp029);
  }
    struct std____cxx11__list_int__std__allocator_int__* t39 = __x28;
    struct std___List_const_iterator_int_ r40 = std____cxx11__list_int__std__allocator_int_____begin___const(t39);
    agg_tmp030 = r40;
    struct std____cxx11__list_int__std__allocator_int__* t41 = __x28;
    struct std___List_const_iterator_int_ r42 = std____cxx11__list_int__std__allocator_int_____end___const(t41);
    agg_tmp131 = r42;
    struct std___List_const_iterator_int_ t43 = agg_tmp030;
    struct std___List_const_iterator_int_ t44 = agg_tmp131;
    struct std____false_type t45 = agg_tmp232;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_const_iterator_int___(t33, t43, t44, t45);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2Ev
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* v46) {
bb47:
  struct std___List_iterator_int_* this48;
  this48 = v46;
  struct std___List_iterator_int_* t49 = this48;
  struct std____detail___List_node_base* c50 = ((void*)0);
  t49->_M_node = c50;
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v51) {
bb52:
  struct std____cxx11___List_base_int__std__allocator_int__* this53;
  unsigned long __retval54;
  this53 = v51;
  struct std____cxx11___List_base_int__std__allocator_int__* t55 = this53;
  struct std____detail___List_size* base56 = (struct std____detail___List_size*)((char *)&(t55->_M_impl._M_node) + 16);
  unsigned long t57 = base56->_M_size;
  __retval54 = t57;
  unsigned long t58 = __retval54;
  return t58;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_set_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* v59, unsigned long v60) {
bb61:
  struct std____cxx11___List_base_int__std__allocator_int__* this62;
  unsigned long __n63;
  this62 = v59;
  __n63 = v60;
  struct std____cxx11___List_base_int__std__allocator_int__* t64 = this62;
  unsigned long t65 = __n63;
  struct std____detail___List_size* base66 = (struct std____detail___List_size*)((char *)&(t64->_M_impl._M_node) + 16);
  base66->_M_size = t65;
  return;
}

// function: _ZSt15__alloc_on_swapISaISt10_List_nodeIiEEEvRT_S4_
void void_std____alloc_on_swap_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v67, struct std__allocator_std___List_node_int__* v68) {
bb69:
  struct std__allocator_std___List_node_int__* __one70;
  struct std__allocator_std___List_node_int__* __two71;
  __one70 = v67;
  __two71 = v68;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaISt10_List_nodeIiEES2_E10_S_on_swapERS3_S5_
void __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_on_swap(struct std__allocator_std___List_node_int__* v72, struct std__allocator_std___List_node_int__* v73) {
bb74:
  struct std__allocator_std___List_node_int__* __a75;
  struct std__allocator_std___List_node_int__* __b76;
  __a75 = v72;
  __b76 = v73;
  struct std__allocator_std___List_node_int__* t77 = __a75;
  struct std__allocator_std___List_node_int__* t78 = __b76;
  void_std____alloc_on_swap_std__allocator_std___List_node_int_____(t77, t78);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE4swapERS2_
void std____cxx11__list_int__std__allocator_int_____swap(struct std____cxx11__list_int__std__allocator_int__* v79, struct std____cxx11__list_int__std__allocator_int__* v80) {
bb81:
  struct std____cxx11__list_int__std__allocator_int__* this82;
  struct std____cxx11__list_int__std__allocator_int__* __x83;
  unsigned long __xsize84;
  this82 = v79;
  __x83 = v80;
  struct std____cxx11__list_int__std__allocator_int__* t85 = this82;
  struct std____cxx11___List_base_int__std__allocator_int__* base86 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t85 + 0);
  struct std____detail___List_node_base* base87 = (struct std____detail___List_node_base*)((char *)&(base86->_M_impl._M_node) + 0);
  struct std____cxx11__list_int__std__allocator_int__* t88 = __x83;
  struct std____cxx11___List_base_int__std__allocator_int__* base89 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t88 + 0);
  struct std____detail___List_node_base* base90 = (struct std____detail___List_node_base*)((char *)&(base89->_M_impl._M_node) + 0);
  std____detail___List_node_base__swap(base87, base90);
  struct std____cxx11__list_int__std__allocator_int__* t91 = __x83;
  struct std____cxx11___List_base_int__std__allocator_int__* base92 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t91 + 0);
  unsigned long r93 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base92);
  __xsize84 = r93;
  struct std____cxx11__list_int__std__allocator_int__* t94 = __x83;
  struct std____cxx11___List_base_int__std__allocator_int__* base95 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t94 + 0);
  struct std____cxx11___List_base_int__std__allocator_int__* base96 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t85 + 0);
  unsigned long r97 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base96);
  std____cxx11___List_base_int__std__allocator_int______M_set_size(base95, r97);
  struct std____cxx11___List_base_int__std__allocator_int__* base98 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t85 + 0);
  unsigned long t99 = __xsize84;
  std____cxx11___List_base_int__std__allocator_int______M_set_size(base98, t99);
  struct std____cxx11___List_base_int__std__allocator_int__* base100 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t85 + 0);
  struct std__allocator_std___List_node_int__* r101 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base100);
  struct std____cxx11__list_int__std__allocator_int__* t102 = __x83;
  struct std____cxx11___List_base_int__std__allocator_int__* base103 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t102 + 0);
  struct std__allocator_std___List_node_int__* r104 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base103);
  __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_on_swap(r101, r104);
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v105) {
bb106:
  struct std____cxx11__list_int__std__allocator_int__* this107;
  unsigned long __retval108;
  this107 = v105;
  struct std____cxx11__list_int__std__allocator_int__* t109 = this107;
  struct std____cxx11___List_base_int__std__allocator_int__* base110 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t109 + 0);
  unsigned long r111 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base110);
  __retval108 = r111;
  unsigned long t112 = __retval108;
  return t112;
}

// function: _ZSteqIiSaIiEEbRKNSt7__cxx114listIT_T0_EES7_
_Bool bool_std__operator___int__std__allocator_int___(struct std____cxx11__list_int__std__allocator_int__* v113, struct std____cxx11__list_int__std__allocator_int__* v114) {
bb115:
  struct std____cxx11__list_int__std__allocator_int__* __x116;
  struct std____cxx11__list_int__std__allocator_int__* __y117;
  _Bool __retval118;
  struct std___List_const_iterator_int_ __end1119;
  struct std___List_const_iterator_int_ __end2120;
  struct std___List_const_iterator_int_ __i1121;
  struct std___List_const_iterator_int_ __i2122;
  __x116 = v113;
  __y117 = v114;
    struct std____cxx11__list_int__std__allocator_int__* t123 = __x116;
    unsigned long r124 = std____cxx11__list_int__std__allocator_int_____size___const(t123);
    struct std____cxx11__list_int__std__allocator_int__* t125 = __y117;
    unsigned long r126 = std____cxx11__list_int__std__allocator_int_____size___const(t125);
    _Bool c127 = ((r124 != r126)) ? 1 : 0;
    if (c127) {
      _Bool c128 = 0;
      __retval118 = c128;
      _Bool t129 = __retval118;
      return t129;
    }
  struct std____cxx11__list_int__std__allocator_int__* t130 = __x116;
  struct std___List_const_iterator_int_ r131 = std____cxx11__list_int__std__allocator_int_____end___const(t130);
  __end1119 = r131;
  struct std____cxx11__list_int__std__allocator_int__* t132 = __y117;
  struct std___List_const_iterator_int_ r133 = std____cxx11__list_int__std__allocator_int_____end___const(t132);
  __end2120 = r133;
  struct std____cxx11__list_int__std__allocator_int__* t134 = __x116;
  struct std___List_const_iterator_int_ r135 = std____cxx11__list_int__std__allocator_int_____begin___const(t134);
  __i1121 = r135;
  struct std____cxx11__list_int__std__allocator_int__* t136 = __y117;
  struct std___List_const_iterator_int_ r137 = std____cxx11__list_int__std__allocator_int_____begin___const(t136);
  __i2122 = r137;
    while (1) {
      _Bool r138 = std__operator___2(&__i1121, &__end1119);
      _Bool u139 = !r138;
      _Bool ternary140;
      if (u139) {
        _Bool r141 = std__operator___2(&__i2122, &__end2120);
        _Bool u142 = !r141;
        ternary140 = (_Bool)u142;
      } else {
        _Bool c143 = 0;
        ternary140 = (_Bool)c143;
      }
      _Bool ternary144;
      if (ternary140) {
        int* r145 = std___List_const_iterator_int___operator____const(&__i1121);
        int t146 = *r145;
        int* r147 = std___List_const_iterator_int___operator____const(&__i2122);
        int t148 = *r147;
        _Bool c149 = ((t146 == t148)) ? 1 : 0;
        ternary144 = (_Bool)c149;
      } else {
        _Bool c150 = 0;
        ternary144 = (_Bool)c150;
      }
      if (!ternary144) break;
        struct std___List_const_iterator_int_* r151 = std___List_const_iterator_int___operator__(&__i1121);
        struct std___List_const_iterator_int_* r152 = std___List_const_iterator_int___operator__(&__i2122);
    }
  _Bool r153 = std__operator___2(&__i1121, &__end1119);
  _Bool ternary154;
  if (r153) {
    _Bool r155 = std__operator___2(&__i2122, &__end2120);
    ternary154 = (_Bool)r155;
  } else {
    _Bool c156 = 0;
    ternary154 = (_Bool)c156;
  }
  __retval118 = ternary154;
  _Bool t157 = __retval118;
  return t157;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v158, int v159) {
bb160:
  int __a161;
  int __b162;
  int __retval163;
  __a161 = v158;
  __b162 = v159;
  int t164 = __a161;
  int t165 = __b162;
  int b166 = t164 | t165;
  __retval163 = b166;
  int t167 = __retval163;
  return t167;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v168) {
bb169:
  struct std__basic_ios_char__std__char_traits_char__* this170;
  int __retval171;
  this170 = v168;
  struct std__basic_ios_char__std__char_traits_char__* t172 = this170;
  struct std__ios_base* base173 = (struct std__ios_base*)((char *)t172 + 0);
  int t174 = base173->_M_streambuf_state;
  __retval171 = t174;
  int t175 = __retval171;
  return t175;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v176, int v177) {
bb178:
  struct std__basic_ios_char__std__char_traits_char__* this179;
  int __state180;
  this179 = v176;
  __state180 = v177;
  struct std__basic_ios_char__std__char_traits_char__* t181 = this179;
  int r182 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t181);
  int t183 = __state180;
  int r184 = std__operator_(r182, t183);
  std__basic_ios_char__std__char_traits_char_____clear(t181, r184);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v185, char* v186) {
bb187:
  char* __c1188;
  char* __c2189;
  _Bool __retval190;
  __c1188 = v185;
  __c2189 = v186;
  char* t191 = __c1188;
  char t192 = *t191;
  int cast193 = (int)t192;
  char* t194 = __c2189;
  char t195 = *t194;
  int cast196 = (int)t195;
  _Bool c197 = ((cast193 == cast196)) ? 1 : 0;
  __retval190 = c197;
  _Bool t198 = __retval190;
  return t198;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v199) {
bb200:
  char* __p201;
  unsigned long __retval202;
  unsigned long __i203;
  __p201 = v199;
  unsigned long c204 = 0;
  __i203 = c204;
    char ref_tmp0205;
    while (1) {
      unsigned long t206 = __i203;
      char* t207 = __p201;
      char* ptr208 = &(t207)[t206];
      char c209 = 0;
      ref_tmp0205 = c209;
      _Bool r210 = __gnu_cxx__char_traits_char___eq(ptr208, &ref_tmp0205);
      _Bool u211 = !r210;
      if (!u211) break;
      unsigned long t212 = __i203;
      unsigned long u213 = t212 + 1;
      __i203 = u213;
    }
  unsigned long t214 = __i203;
  __retval202 = t214;
  unsigned long t215 = __retval202;
  return t215;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v216) {
bb217:
  char* __s218;
  unsigned long __retval219;
  __s218 = v216;
    _Bool r220 = std____is_constant_evaluated();
    if (r220) {
      char* t221 = __s218;
      unsigned long r222 = __gnu_cxx__char_traits_char___length(t221);
      __retval219 = r222;
      unsigned long t223 = __retval219;
      return t223;
    }
  char* t224 = __s218;
  unsigned long r225 = strlen(t224);
  __retval219 = r225;
  unsigned long t226 = __retval219;
  return t226;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v227, char* v228) {
bb229:
  struct std__basic_ostream_char__std__char_traits_char__* __out230;
  char* __s231;
  struct std__basic_ostream_char__std__char_traits_char__* __retval232;
  __out230 = v227;
  __s231 = v228;
    char* t233 = __s231;
    _Bool cast234 = (_Bool)t233;
    _Bool u235 = !cast234;
    if (u235) {
      struct std__basic_ostream_char__std__char_traits_char__* t236 = __out230;
      void** v237 = (void**)t236;
      void* v238 = *((void**)v237);
      unsigned char* cast239 = (unsigned char*)v238;
      long c240 = -24;
      unsigned char* ptr241 = &(cast239)[c240];
      long* cast242 = (long*)ptr241;
      long t243 = *cast242;
      unsigned char* cast244 = (unsigned char*)t236;
      unsigned char* ptr245 = &(cast244)[t243];
      struct std__basic_ostream_char__std__char_traits_char__* cast246 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr245;
      struct std__basic_ios_char__std__char_traits_char__* cast247 = (struct std__basic_ios_char__std__char_traits_char__*)cast246;
      int t248 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast247, t248);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t249 = __out230;
      char* t250 = __s231;
      char* t251 = __s231;
      unsigned long r252 = std__char_traits_char___length(t251);
      long cast253 = (long)r252;
      struct std__basic_ostream_char__std__char_traits_char__* r254 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t249, t250, cast253);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t255 = __out230;
  __retval232 = t255;
  struct std__basic_ostream_char__std__char_traits_char__* t256 = __retval232;
  return t256;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v257, struct std____detail___List_node_base* v258) {
bb259:
  struct std___List_iterator_int_* this260;
  struct std____detail___List_node_base* __x261;
  this260 = v257;
  __x261 = v258;
  struct std___List_iterator_int_* t262 = this260;
  struct std____detail___List_node_base* t263 = __x261;
  t262->_M_node = t263;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v264) {
bb265:
  struct std____cxx11__list_int__std__allocator_int__* this266;
  struct std___List_iterator_int_ __retval267;
  this266 = v264;
  struct std____cxx11__list_int__std__allocator_int__* t268 = this266;
  struct std____cxx11___List_base_int__std__allocator_int__* base269 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t268 + 0);
  struct std____detail___List_node_base* base270 = (struct std____detail___List_node_base*)((char *)&(base269->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t271 = base270->_M_next;
  std___List_iterator_int____List_iterator(&__retval267, t271);
  struct std___List_iterator_int_ t272 = __retval267;
  return t272;
}

// function: _ZNSt14_List_iteratorIiEaSEOS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v273, struct std___List_iterator_int_* v274) {
bb275:
  struct std___List_iterator_int_* this276;
  struct std___List_iterator_int_* unnamed277;
  struct std___List_iterator_int_* __retval278;
  this276 = v273;
  unnamed277 = v274;
  struct std___List_iterator_int_* t279 = this276;
  struct std___List_iterator_int_* t280 = unnamed277;
  struct std____detail___List_node_base* t281 = t280->_M_node;
  t279->_M_node = t281;
  __retval278 = t279;
  struct std___List_iterator_int_* t282 = __retval278;
  return t282;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator__(struct std___List_iterator_int_* v283, struct std___List_iterator_int_* v284) {
bb285:
  struct std___List_iterator_int_* __x286;
  struct std___List_iterator_int_* __y287;
  _Bool __retval288;
  __x286 = v283;
  __y287 = v284;
  struct std___List_iterator_int_* t289 = __x286;
  struct std____detail___List_node_base* t290 = t289->_M_node;
  struct std___List_iterator_int_* t291 = __y287;
  struct std____detail___List_node_base* t292 = t291->_M_node;
  _Bool c293 = ((t290 == t292)) ? 1 : 0;
  __retval288 = c293;
  _Bool t294 = __retval288;
  return t294;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v295) {
bb296:
  struct std____cxx11__list_int__std__allocator_int__* this297;
  struct std___List_iterator_int_ __retval298;
  this297 = v295;
  struct std____cxx11__list_int__std__allocator_int__* t299 = this297;
  struct std____cxx11___List_base_int__std__allocator_int__* base300 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t299 + 0);
  struct std____detail___List_node_base* r301 = std____detail___List_node_header___M_base(&base300->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval298, r301);
  struct std___List_iterator_int_ t302 = __retval298;
  return t302;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v303) {
bb304:
  struct std___List_iterator_int_* this305;
  int* __retval306;
  this305 = v303;
  struct std___List_iterator_int_* t307 = this305;
  struct std____detail___List_node_base* t308 = t307->_M_node;
  struct std___List_node_int_* derived309 = ((t308) ? (struct std___List_node_int_*)((char *)t308 - 0) : (struct std___List_node_int_*)0);
  int* r310 = std___List_node_int____M_valptr(derived309);
  __retval306 = r310;
  int* t311 = __retval306;
  return t311;
}

// function: _ZNSt14_List_iteratorIiEppEi
struct std___List_iterator_int_ std___List_iterator_int___operator___2(struct std___List_iterator_int_* v312, int v313) {
bb314:
  struct std___List_iterator_int_* this315;
  int unnamed316;
  struct std___List_iterator_int_ __retval317;
  this315 = v312;
  unnamed316 = v313;
  struct std___List_iterator_int_* t318 = this315;
  __retval317 = *t318; // copy
  struct std____detail___List_node_base* t319 = t318->_M_node;
  struct std____detail___List_node_base* t320 = t319->_M_next;
  t318->_M_node = t320;
  struct std___List_iterator_int_ t321 = __retval317;
  return t321;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v322, void* v323) {
bb324:
  struct std__basic_ostream_char__std__char_traits_char__* this325;
  void* __pf326;
  struct std__basic_ostream_char__std__char_traits_char__* __retval327;
  this325 = v322;
  __pf326 = v323;
  struct std__basic_ostream_char__std__char_traits_char__* t328 = this325;
  void* t329 = __pf326;
  struct std__basic_ostream_char__std__char_traits_char__* r330 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t329)(t328);
  __retval327 = r330;
  struct std__basic_ostream_char__std__char_traits_char__* t331 = __retval327;
  return t331;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v332) {
bb333:
  struct std__basic_ostream_char__std__char_traits_char__* __os334;
  struct std__basic_ostream_char__std__char_traits_char__* __retval335;
  __os334 = v332;
  struct std__basic_ostream_char__std__char_traits_char__* t336 = __os334;
  struct std__basic_ostream_char__std__char_traits_char__* r337 = std__ostream__flush(t336);
  __retval335 = r337;
  struct std__basic_ostream_char__std__char_traits_char__* t338 = __retval335;
  return t338;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v339) {
bb340:
  struct std__ctype_char_* __f341;
  struct std__ctype_char_* __retval342;
  __f341 = v339;
    struct std__ctype_char_* t343 = __f341;
    _Bool cast344 = (_Bool)t343;
    _Bool u345 = !cast344;
    if (u345) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t346 = __f341;
  __retval342 = t346;
  struct std__ctype_char_* t347 = __retval342;
  return t347;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v348, char v349) {
bb350:
  struct std__ctype_char_* this351;
  char __c352;
  char __retval353;
  this351 = v348;
  __c352 = v349;
  struct std__ctype_char_* t354 = this351;
    char t355 = t354->_M_widen_ok;
    _Bool cast356 = (_Bool)t355;
    if (cast356) {
      char t357 = __c352;
      unsigned char cast358 = (unsigned char)t357;
      unsigned long cast359 = (unsigned long)cast358;
      char t360 = t354->_M_widen[cast359];
      __retval353 = t360;
      char t361 = __retval353;
      return t361;
    }
  std__ctype_char____M_widen_init___const(t354);
  char t362 = __c352;
  void** v363 = (void**)t354;
  void* v364 = *((void**)v363);
  char vcall367 = (char)__VERIFIER_virtual_call_char_char(t354, 6, t362);
  __retval353 = vcall367;
  char t368 = __retval353;
  return t368;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v369, char v370) {
bb371:
  struct std__basic_ios_char__std__char_traits_char__* this372;
  char __c373;
  char __retval374;
  this372 = v369;
  __c373 = v370;
  struct std__basic_ios_char__std__char_traits_char__* t375 = this372;
  struct std__ctype_char_* t376 = t375->_M_ctype;
  struct std__ctype_char_* r377 = std__ctype_char__const__std____check_facet_std__ctype_char___(t376);
  char t378 = __c373;
  char r379 = std__ctype_char___widen_char__const(r377, t378);
  __retval374 = r379;
  char t380 = __retval374;
  return t380;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v381) {
bb382:
  struct std__basic_ostream_char__std__char_traits_char__* __os383;
  struct std__basic_ostream_char__std__char_traits_char__* __retval384;
  __os383 = v381;
  struct std__basic_ostream_char__std__char_traits_char__* t385 = __os383;
  struct std__basic_ostream_char__std__char_traits_char__* t386 = __os383;
  void** v387 = (void**)t386;
  void* v388 = *((void**)v387);
  unsigned char* cast389 = (unsigned char*)v388;
  long c390 = -24;
  unsigned char* ptr391 = &(cast389)[c390];
  long* cast392 = (long*)ptr391;
  long t393 = *cast392;
  unsigned char* cast394 = (unsigned char*)t386;
  unsigned char* ptr395 = &(cast394)[t393];
  struct std__basic_ostream_char__std__char_traits_char__* cast396 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr395;
  struct std__basic_ios_char__std__char_traits_char__* cast397 = (struct std__basic_ios_char__std__char_traits_char__*)cast396;
  char c398 = 10;
  char r399 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast397, c398);
  struct std__basic_ostream_char__std__char_traits_char__* r400 = std__ostream__put(t385, r399);
  struct std__basic_ostream_char__std__char_traits_char__* r401 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r400);
  __retval384 = r401;
  struct std__basic_ostream_char__std__char_traits_char__* t402 = __retval384;
  return t402;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v403) {
bb404:
  struct std____cxx11__list_int__std__allocator_int__* this405;
  this405 = v403;
  struct std____cxx11__list_int__std__allocator_int__* t406 = this405;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base407 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t406 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base407);
  }
  return;
}

// function: main
int main() {
bb408:
  int __retval409;
  struct std____cxx11__list_int__std__allocator_int__ first410;
  int ref_tmp0411;
  struct std__allocator_int_ ref_tmp1412;
  struct std____cxx11__list_int__std__allocator_int__ second413;
  int ref_tmp2414;
  struct std__allocator_int_ ref_tmp3415;
  struct std____cxx11__list_int__std__allocator_int__ first1416;
  struct std____cxx11__list_int__std__allocator_int__ second1417;
  struct std___List_iterator_int_ it418;
  int c419 = 0;
  __retval409 = c419;
  unsigned long c420 = 3;
  int c421 = 100;
  ref_tmp0411 = c421;
  std__allocator_int___allocator(&ref_tmp1412);
    std____cxx11__list_int__std__allocator_int_____list_2(&first410, c420, &ref_tmp0411, &ref_tmp1412);
  {
    std__allocator_int____allocator(&ref_tmp1412);
  }
    unsigned long c422 = 5;
    int c423 = 200;
    ref_tmp2414 = c423;
    std__allocator_int___allocator(&ref_tmp3415);
      std____cxx11__list_int__std__allocator_int_____list_2(&second413, c422, &ref_tmp2414, &ref_tmp3415);
    {
      std__allocator_int____allocator(&ref_tmp3415);
    }
      std____cxx11__list_int__std__allocator_int_____list(&first1416, &first410);
        std____cxx11__list_int__std__allocator_int_____list(&second1417, &second413);
          std___List_iterator_int____List_iterator_2(&it418);
          std____cxx11__list_int__std__allocator_int_____swap(&first410, &second413);
          _Bool r424 = bool_std__operator___int__std__allocator_int___(&first410, &second1417);
          if (r424) {
          } else {
            char* cast425 = (char*)&(_str);
            char* c426 = _str_1;
            unsigned int c427 = 23;
            char* cast428 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast425, c426, c427, cast428);
          }
          _Bool r429 = bool_std__operator___int__std__allocator_int___(&second413, &first1416);
          if (r429) {
          } else {
            char* cast430 = (char*)&(_str_2);
            char* c431 = _str_1;
            unsigned int c432 = 24;
            char* cast433 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast430, c431, c432, cast433);
          }
          char* cast434 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r435 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast434);
            struct std___List_iterator_int_ ref_tmp4436;
            struct std___List_iterator_int_ ref_tmp5437;
            struct std___List_iterator_int_ agg_tmp0438;
            struct std___List_iterator_int_ r439 = std____cxx11__list_int__std__allocator_int_____begin(&first410);
            ref_tmp4436 = r439;
            struct std___List_iterator_int_* r440 = std___List_iterator_int___operator_(&it418, &ref_tmp4436);
            while (1) {
              struct std___List_iterator_int_ r442 = std____cxx11__list_int__std__allocator_int_____end(&first410);
              ref_tmp5437 = r442;
              _Bool r443 = std__operator__(&it418, &ref_tmp5437);
              _Bool u444 = !r443;
              if (!u444) break;
              char* cast445 = (char*)&(_str_4);
              struct std__basic_ostream_char__std__char_traits_char__* r446 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast445);
              int* r447 = std___List_iterator_int___operator____const(&it418);
              int t448 = *r447;
              struct std__basic_ostream_char__std__char_traits_char__* r449 = std__ostream__operator__(r446, t448);
            for_step441: ;
              int c450 = 0;
              struct std___List_iterator_int_ r451 = std___List_iterator_int___operator___2(&it418, c450);
              agg_tmp0438 = r451;
            }
          char* cast452 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r453 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast452);
            struct std___List_iterator_int_ ref_tmp6454;
            struct std___List_iterator_int_ ref_tmp7455;
            struct std___List_iterator_int_ agg_tmp1456;
            struct std___List_iterator_int_ r457 = std____cxx11__list_int__std__allocator_int_____begin(&second413);
            ref_tmp6454 = r457;
            struct std___List_iterator_int_* r458 = std___List_iterator_int___operator_(&it418, &ref_tmp6454);
            while (1) {
              struct std___List_iterator_int_ r460 = std____cxx11__list_int__std__allocator_int_____end(&second413);
              ref_tmp7455 = r460;
              _Bool r461 = std__operator__(&it418, &ref_tmp7455);
              _Bool u462 = !r461;
              if (!u462) break;
              char* cast463 = (char*)&(_str_4);
              struct std__basic_ostream_char__std__char_traits_char__* r464 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast463);
              int* r465 = std___List_iterator_int___operator____const(&it418);
              int t466 = *r465;
              struct std__basic_ostream_char__std__char_traits_char__* r467 = std__ostream__operator__(r464, t466);
            for_step459: ;
              int c468 = 0;
              struct std___List_iterator_int_ r469 = std___List_iterator_int___operator___2(&it418, c468);
              agg_tmp1456 = r469;
            }
          struct std__basic_ostream_char__std__char_traits_char__* r470 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          int c471 = 0;
          __retval409 = c471;
          int t472 = __retval409;
          int ret_val473 = t472;
          {
            std____cxx11__list_int__std__allocator_int______list(&second1417);
          }
          {
            std____cxx11__list_int__std__allocator_int______list(&first1416);
          }
          {
            std____cxx11__list_int__std__allocator_int______list(&second413);
          }
          {
            std____cxx11__list_int__std__allocator_int______list(&first410);
          }
          return ret_val473;
  int t474 = __retval409;
  return t474;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v475) {
bb476:
  struct std____new_allocator_int_* this477;
  this477 = v475;
  struct std____new_allocator_int_* t478 = this477;
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v479) {
bb480:
  struct std____detail___List_node_header* this481;
  struct std____detail___List_node_base* __retval482;
  this481 = v479;
  struct std____detail___List_node_header* t483 = this481;
  struct std____detail___List_node_base* base484 = (struct std____detail___List_node_base*)((char *)t483 + 0);
  __retval482 = base484;
  struct std____detail___List_node_base* t485 = __retval482;
  return t485;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v486) {
bb487:
  int* __location488;
  __location488 = v486;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v489, int* v490) {
bb491:
  struct std__allocator_std___List_node_int__* __a492;
  int* __p493;
  __a492 = v489;
  __p493 = v490;
  int* t494 = __p493;
  void_std__destroy_at_int_(t494);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v495) {
bb496:
  struct __gnu_cxx____aligned_membuf_int_* this497;
  void* __retval498;
  this497 = v495;
  struct __gnu_cxx____aligned_membuf_int_* t499 = this497;
  void* cast500 = (void*)&(t499->_M_storage);
  __retval498 = cast500;
  void* t501 = __retval498;
  return t501;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v502) {
bb503:
  struct __gnu_cxx____aligned_membuf_int_* this504;
  int* __retval505;
  this504 = v502;
  struct __gnu_cxx____aligned_membuf_int_* t506 = this504;
  void* r507 = __gnu_cxx____aligned_membuf_int____M_addr(t506);
  int* cast508 = (int*)r507;
  __retval505 = cast508;
  int* t509 = __retval505;
  return t509;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v510) {
bb511:
  struct std___List_node_int_* this512;
  int* __retval513;
  this512 = v510;
  struct std___List_node_int_* t514 = this512;
  int* r515 = __gnu_cxx____aligned_membuf_int____M_ptr(&t514->_M_storage);
  __retval513 = r515;
  int* t516 = __retval513;
  return t516;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb517:
  _Bool __retval518;
    _Bool c519 = 0;
    __retval518 = c519;
    _Bool t520 = __retval518;
    return t520;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v521, struct std___List_node_int_* v522, unsigned long v523) {
bb524:
  struct std____new_allocator_std___List_node_int__* this525;
  struct std___List_node_int_* __p526;
  unsigned long __n527;
  this525 = v521;
  __p526 = v522;
  __n527 = v523;
  struct std____new_allocator_std___List_node_int__* t528 = this525;
    unsigned long c529 = 8;
    unsigned long c530 = 16;
    _Bool c531 = ((c529 > c530)) ? 1 : 0;
    if (c531) {
      struct std___List_node_int_* t532 = __p526;
      void* cast533 = (void*)t532;
      unsigned long t534 = __n527;
      unsigned long c535 = 24;
      unsigned long b536 = t534 * c535;
      unsigned long c537 = 8;
      operator_delete_3(cast533, b536, c537);
      return;
    }
  struct std___List_node_int_* t538 = __p526;
  void* cast539 = (void*)t538;
  unsigned long t540 = __n527;
  unsigned long c541 = 24;
  unsigned long b542 = t540 * c541;
  operator_delete_2(cast539, b542);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v543, struct std___List_node_int_* v544, unsigned long v545) {
bb546:
  struct std__allocator_std___List_node_int__* this547;
  struct std___List_node_int_* __p548;
  unsigned long __n549;
  this547 = v543;
  __p548 = v544;
  __n549 = v545;
  struct std__allocator_std___List_node_int__* t550 = this547;
    _Bool r551 = std____is_constant_evaluated();
    if (r551) {
      struct std___List_node_int_* t552 = __p548;
      void* cast553 = (void*)t552;
      operator_delete(cast553);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base554 = (struct std____new_allocator_std___List_node_int__*)((char *)t550 + 0);
  struct std___List_node_int_* t555 = __p548;
  unsigned long t556 = __n549;
  std____new_allocator_std___List_node_int_____deallocate(base554, t555, t556);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v557, struct std___List_node_int_* v558, unsigned long v559) {
bb560:
  struct std__allocator_std___List_node_int__* __a561;
  struct std___List_node_int_* __p562;
  unsigned long __n563;
  __a561 = v557;
  __p562 = v558;
  __n563 = v559;
  struct std__allocator_std___List_node_int__* t564 = __a561;
  struct std___List_node_int_* t565 = __p562;
  unsigned long t566 = __n563;
  std__allocator_std___List_node_int_____deallocate(t564, t565, t566);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v567, struct std___List_node_int_* v568) {
bb569:
  struct std____cxx11___List_base_int__std__allocator_int__* this570;
  struct std___List_node_int_* __p571;
  this570 = v567;
  __p571 = v568;
  struct std____cxx11___List_base_int__std__allocator_int__* t572 = this570;
  struct std__allocator_std___List_node_int__* base573 = (struct std__allocator_std___List_node_int__*)((char *)&(t572->_M_impl) + 0);
  struct std___List_node_int_* t574 = __p571;
  unsigned long c575 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base573, t574, c575);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v576, struct std___List_node_int_* v577) {
bb578:
  struct std____cxx11___List_base_int__std__allocator_int__* this579;
  struct std___List_node_int_* __p580;
  this579 = v576;
  __p580 = v577;
  struct std____cxx11___List_base_int__std__allocator_int__* t581 = this579;
  struct std__allocator_std___List_node_int__* base582 = (struct std__allocator_std___List_node_int__*)((char *)&(t581->_M_impl) + 0);
  struct std___List_node_int_* t583 = __p580;
  int* r584 = std___List_node_int____M_valptr(t583);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base582, r584);
  struct std___List_node_int_* t585 = __p580;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t581, t585);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v586) {
bb587:
  struct std___List_node_int_* this588;
  struct std___List_node_int_* __retval589;
  this588 = v586;
  struct std___List_node_int_* t590 = this588;
  __retval589 = t590;
  struct std___List_node_int_* t591 = __retval589;
  return t591;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v592) {
bb593:
  struct std____cxx11___List_base_int__std__allocator_int__* this594;
  struct std____detail___List_node_base* __cur595;
  this594 = v592;
  struct std____cxx11___List_base_int__std__allocator_int__* t596 = this594;
  struct std____detail___List_node_base* base597 = (struct std____detail___List_node_base*)((char *)&(t596->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t598 = base597->_M_next;
  __cur595 = t598;
    while (1) {
      struct std____detail___List_node_base* t599 = __cur595;
      struct std____detail___List_node_base* r600 = std____detail___List_node_header___M_base(&t596->_M_impl._M_node);
      _Bool c601 = ((t599 != r600)) ? 1 : 0;
      if (!c601) break;
        struct std___List_node_int_* __tmp602;
        struct std____detail___List_node_base* t603 = __cur595;
        struct std___List_node_int_* derived604 = (struct std___List_node_int_*)((char *)t603 - 0);
        __tmp602 = derived604;
        struct std___List_node_int_* t605 = __tmp602;
        struct std____detail___List_node_base* base606 = (struct std____detail___List_node_base*)((char *)t605 + 0);
        struct std____detail___List_node_base* t607 = base606->_M_next;
        __cur595 = t607;
        struct std___List_node_int_* t608 = __tmp602;
        struct std___List_node_int_* r609 = std___List_node_int____M_node_ptr(t608);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t596, r609);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v610) {
bb611:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this612;
  this612 = v610;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t613 = this612;
  {
    struct std__allocator_std___List_node_int__* base614 = (struct std__allocator_std___List_node_int__*)((char *)t613 + 0);
    std__allocator_std___List_node_int______allocator(base614);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v615) {
bb616:
  struct std____cxx11___List_base_int__std__allocator_int__* this617;
  this617 = v615;
  struct std____cxx11___List_base_int__std__allocator_int__* t618 = this617;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t618);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t618->_M_impl);
  }
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v619, struct std__allocator_int_* v620) {
bb621:
  struct std__allocator_std___List_node_int__* this622;
  struct std__allocator_int_* unnamed623;
  this622 = v619;
  unnamed623 = v620;
  struct std__allocator_std___List_node_int__* t624 = this622;
  struct std____new_allocator_std___List_node_int__* base625 = (struct std____new_allocator_std___List_node_int__*)((char *)t624 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base625);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v626, struct std__allocator_std___List_node_int__* v627) {
bb628:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this629;
  struct std__allocator_std___List_node_int__* __a630;
  this629 = v626;
  __a630 = v627;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t631 = this629;
  struct std__allocator_std___List_node_int__* base632 = (struct std__allocator_std___List_node_int__*)((char *)t631 + 0);
  struct std__allocator_std___List_node_int__* t633 = __a630;
  std__allocator_std___List_node_int_____allocator(base632, t633);
    std____detail___List_node_header___List_node_header(&t631->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v634, struct std__allocator_std___List_node_int__* v635) {
bb636:
  struct std____cxx11___List_base_int__std__allocator_int__* this637;
  struct std__allocator_std___List_node_int__* __a638;
  this637 = v634;
  __a638 = v635;
  struct std____cxx11___List_base_int__std__allocator_int__* t639 = this637;
  struct std__allocator_std___List_node_int__* t640 = __a638;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t639->_M_impl, t640);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v641) {
bb642:
  struct std__allocator_std___List_node_int__* this643;
  this643 = v641;
  struct std__allocator_std___List_node_int__* t644 = this643;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v645) {
bb646:
  struct std____cxx11___List_base_int__std__allocator_int__* this647;
  struct std__allocator_std___List_node_int__* __retval648;
  this647 = v645;
  struct std____cxx11___List_base_int__std__allocator_int__* t649 = this647;
  struct std__allocator_std___List_node_int__* base650 = (struct std__allocator_std___List_node_int__*)((char *)&(t649->_M_impl) + 0);
  __retval648 = base650;
  struct std__allocator_std___List_node_int__* t651 = __retval648;
  return t651;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v652) {
bb653:
  struct std____new_allocator_std___List_node_int__* this654;
  unsigned long __retval655;
  this654 = v652;
  struct std____new_allocator_std___List_node_int__* t656 = this654;
  unsigned long c657 = 9223372036854775807;
  unsigned long c658 = 24;
  unsigned long b659 = c657 / c658;
  __retval655 = b659;
  unsigned long t660 = __retval655;
  return t660;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v661, unsigned long v662, void* v663) {
bb664:
  struct std____new_allocator_std___List_node_int__* this665;
  unsigned long __n666;
  void* unnamed667;
  struct std___List_node_int_* __retval668;
  this665 = v661;
  __n666 = v662;
  unnamed667 = v663;
  struct std____new_allocator_std___List_node_int__* t669 = this665;
    unsigned long t670 = __n666;
    unsigned long r671 = std____new_allocator_std___List_node_int______M_max_size___const(t669);
    _Bool c672 = ((t670 > r671)) ? 1 : 0;
    if (c672) {
        unsigned long t673 = __n666;
        unsigned long c674 = -1;
        unsigned long c675 = 24;
        unsigned long b676 = c674 / c675;
        _Bool c677 = ((t673 > b676)) ? 1 : 0;
        if (c677) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c678 = 8;
    unsigned long c679 = 16;
    _Bool c680 = ((c678 > c679)) ? 1 : 0;
    if (c680) {
      unsigned long __al681;
      unsigned long c682 = 8;
      __al681 = c682;
      unsigned long t683 = __n666;
      unsigned long c684 = 24;
      unsigned long b685 = t683 * c684;
      unsigned long t686 = __al681;
      void* r687 = operator_new_2(b685, t686);
      struct std___List_node_int_* cast688 = (struct std___List_node_int_*)r687;
      __retval668 = cast688;
      struct std___List_node_int_* t689 = __retval668;
      return t689;
    }
  unsigned long t690 = __n666;
  unsigned long c691 = 24;
  unsigned long b692 = t690 * c691;
  void* r693 = operator_new(b692);
  struct std___List_node_int_* cast694 = (struct std___List_node_int_*)r693;
  __retval668 = cast694;
  struct std___List_node_int_* t695 = __retval668;
  return t695;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v696, unsigned long v697) {
bb698:
  struct std__allocator_std___List_node_int__* this699;
  unsigned long __n700;
  struct std___List_node_int_* __retval701;
  this699 = v696;
  __n700 = v697;
  struct std__allocator_std___List_node_int__* t702 = this699;
    _Bool r703 = std____is_constant_evaluated();
    if (r703) {
        unsigned long t704 = __n700;
        unsigned long c705 = 24;
        unsigned long ovr706;
        _Bool ovf707 = __builtin_mul_overflow(t704, c705, &ovr706);
        __n700 = ovr706;
        if (ovf707) {
          std____throw_bad_array_new_length();
        }
      unsigned long t708 = __n700;
      void* r709 = operator_new(t708);
      struct std___List_node_int_* cast710 = (struct std___List_node_int_*)r709;
      __retval701 = cast710;
      struct std___List_node_int_* t711 = __retval701;
      return t711;
    }
  struct std____new_allocator_std___List_node_int__* base712 = (struct std____new_allocator_std___List_node_int__*)((char *)t702 + 0);
  unsigned long t713 = __n700;
  void* c714 = ((void*)0);
  struct std___List_node_int_* r715 = std____new_allocator_std___List_node_int_____allocate(base712, t713, c714);
  __retval701 = r715;
  struct std___List_node_int_* t716 = __retval701;
  return t716;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v717, unsigned long v718) {
bb719:
  struct std__allocator_std___List_node_int__* __a720;
  unsigned long __n721;
  struct std___List_node_int_* __retval722;
  __a720 = v717;
  __n721 = v718;
  struct std__allocator_std___List_node_int__* t723 = __a720;
  unsigned long t724 = __n721;
  struct std___List_node_int_* r725 = std__allocator_std___List_node_int_____allocate(t723, t724);
  __retval722 = r725;
  struct std___List_node_int_* t726 = __retval722;
  return t726;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v727, struct std__allocator_std___List_node_int__* v728, struct std___List_node_int_* v729) {
bb730:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this731;
  struct std__allocator_std___List_node_int__* __a732;
  struct std___List_node_int_* __ptr733;
  this731 = v727;
  __a732 = v728;
  __ptr733 = v729;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t734 = this731;
  struct std__allocator_std___List_node_int__* t735 = __a732;
  t734->_M_alloc = t735;
  struct std___List_node_int_* t736 = __ptr733;
  t734->_M_ptr = t736;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v737) {
bb738:
  struct std__allocator_std___List_node_int__* __a739;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval740;
  __a739 = v737;
  struct std__allocator_std___List_node_int__* t741 = __a739;
  struct std__allocator_std___List_node_int__* t742 = __a739;
  unsigned long c743 = 1;
  struct std___List_node_int_* r744 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t742, c743);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval740, t741, r744);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t745 = __retval740;
  return t745;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v746, struct std____allocated_ptr_std__allocator_std___List_node_int___* v747) {
bb748:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this749;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr750;
  this749 = v746;
  __ptr750 = v747;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t751 = this749;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base752 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t751 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t753 = __ptr750;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base752, t753);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base754 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t751 + 0);
    struct std___List_node_int_* r755 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base754);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v756) {
bb757:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this758;
  this758 = v756;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t759 = this758;
    struct std___List_node_int_* t760 = t759->_M_ptr;
    struct std___List_node_int_* c761 = ((void*)0);
    _Bool c762 = ((t760 != c761)) ? 1 : 0;
    if (c762) {
      struct std__allocator_std___List_node_int__* t763 = t759->_M_alloc;
      struct std___List_node_int_* t764 = t759->_M_ptr;
      unsigned long c765 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t763, t764, c765);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v766) {
bb767:
  struct std__allocator_std___List_node_int__* __a768;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval769;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0770;
  __a768 = v766;
  struct std__allocator_std___List_node_int__* t771 = __a768;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r772 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t771);
  ref_tmp0770 = r772;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval769, &ref_tmp0770);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0770);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t773 = __retval769;
  return t773;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v774, int* v775) {
bb776:
  int* __location777;
  int* __args778;
  int* __retval779;
  void* __loc780;
  __location777 = v774;
  __args778 = v775;
  int* t781 = __location777;
  void* cast782 = (void*)t781;
  __loc780 = cast782;
    void* t783 = __loc780;
    int* cast784 = (int*)t783;
    int* t785 = __args778;
    int t786 = *t785;
    *cast784 = t786;
    __retval779 = cast784;
    int* t787 = __retval779;
    return t787;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v788, int* v789, int* v790) {
bb791:
  struct std__allocator_std___List_node_int__* __a792;
  int* __p793;
  int* __args794;
  __a792 = v788;
  __p793 = v789;
  __args794 = v790;
  int* t795 = __p793;
  int* t796 = __args794;
  int* r797 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t795, t796);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v798) {
bb799:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this800;
  struct std___List_node_int_* __retval801;
  this800 = v798;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t802 = this800;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base803 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t802 + 0);
  struct std___List_node_int_* r804 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base803);
  __retval801 = r804;
  struct std___List_node_int_* t805 = __retval801;
  return t805;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v806, void** v807) {
bb808:
  struct std___List_node_int_** __obj809;
  void** __new_val810;
  struct std___List_node_int_* __retval811;
  struct std___List_node_int_* __old_val812;
  __obj809 = v806;
  __new_val810 = v807;
  struct std___List_node_int_** t813 = __obj809;
  struct std___List_node_int_* t814 = *t813;
  __old_val812 = t814;
  void** t815 = __new_val810;
  struct std___List_node_int_* c816 = ((void*)0);
  struct std___List_node_int_** t817 = __obj809;
  *t817 = c816;
  struct std___List_node_int_* t818 = __old_val812;
  __retval811 = t818;
  struct std___List_node_int_* t819 = __retval811;
  return t819;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v820) {
bb821:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this822;
  struct std___List_node_int_* __retval823;
  void* ref_tmp0824;
  this822 = v820;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t825 = this822;
  void* c826 = ((void*)0);
  ref_tmp0824 = c826;
  struct std___List_node_int_* r827 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t825->_M_ptr, &ref_tmp0824);
  __retval823 = r827;
  struct std___List_node_int_* t828 = __retval823;
  return t828;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v829) {
bb830:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this831;
  this831 = v829;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t832 = this831;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base833 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t832 + 0);
      _Bool r834 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base833);
      if (r834) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base835 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t832 + 0);
        struct std___List_node_int_* r836 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base835);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base837 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t832 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base837);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v838, int* v839) {
bb840:
  struct std____cxx11__list_int__std__allocator_int__* this841;
  int* __args842;
  struct std___List_node_int_* __retval843;
  struct std__allocator_std___List_node_int__* __alloc844;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard845;
  this841 = v838;
  __args842 = v839;
  struct std____cxx11__list_int__std__allocator_int__* t846 = this841;
  struct std____cxx11___List_base_int__std__allocator_int__* base847 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t846 + 0);
  struct std__allocator_std___List_node_int__* r848 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base847);
  __alloc844 = r848;
  struct std__allocator_std___List_node_int__* t849 = __alloc844;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r850 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t849);
  __guard845 = r850;
    struct std__allocator_std___List_node_int__* t851 = __alloc844;
    struct std___List_node_int_* r852 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard845);
    int* r853 = std___List_node_int____M_valptr(r852);
    int* t854 = __args842;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t851, r853, t854);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base855 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard845) + 0);
    struct std___List_node_int_* r856 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base855);
    __retval843 = r856;
    struct std___List_node_int_* t857 = __retval843;
    struct std___List_node_int_* ret_val858 = t857;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard845);
    }
    return ret_val858;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v859, unsigned long v860) {
bb861:
  struct std____cxx11___List_base_int__std__allocator_int__* this862;
  unsigned long __n863;
  this862 = v859;
  __n863 = v860;
  struct std____cxx11___List_base_int__std__allocator_int__* t864 = this862;
  unsigned long t865 = __n863;
  struct std____detail___List_size* base866 = (struct std____detail___List_size*)((char *)&(t864->_M_impl._M_node) + 16);
  unsigned long t867 = base866->_M_size;
  unsigned long b868 = t867 + t865;
  base866->_M_size = b868;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v869, struct std___List_iterator_int_ v870, int* v871) {
bb872:
  struct std____cxx11__list_int__std__allocator_int__* this873;
  struct std___List_iterator_int_ __position874;
  int* __args875;
  struct std___List_node_int_* __tmp876;
  this873 = v869;
  __position874 = v870;
  __args875 = v871;
  struct std____cxx11__list_int__std__allocator_int__* t877 = this873;
  int* t878 = __args875;
  struct std___List_node_int_* r879 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t877, t878);
  __tmp876 = r879;
  struct std___List_node_int_* t880 = __tmp876;
  struct std____detail___List_node_base* base881 = (struct std____detail___List_node_base*)((char *)t880 + 0);
  struct std____detail___List_node_base* t882 = __position874._M_node;
  std____detail___List_node_base___M_hook(base881, t882);
  struct std____cxx11___List_base_int__std__allocator_int__* base883 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t877 + 0);
  unsigned long c884 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base883, c884);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v885, int* v886) {
bb887:
  struct std____cxx11__list_int__std__allocator_int__* this888;
  int* __x889;
  struct std___List_iterator_int_ agg_tmp0890;
  this888 = v885;
  __x889 = v886;
  struct std____cxx11__list_int__std__allocator_int__* t891 = this888;
  struct std___List_iterator_int_ r892 = std____cxx11__list_int__std__allocator_int_____end(t891);
  agg_tmp0890 = r892;
  int* t893 = __x889;
  struct std___List_iterator_int_ t894 = agg_tmp0890;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t891, t894, t893);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_fill_initializeEmRKi
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* v895, unsigned long v896, int* v897) {
bb898:
  struct std____cxx11__list_int__std__allocator_int__* this899;
  unsigned long __n900;
  int* __x901;
  this899 = v895;
  __n900 = v896;
  __x901 = v897;
  struct std____cxx11__list_int__std__allocator_int__* t902 = this899;
    while (1) {
      unsigned long t904 = __n900;
      _Bool cast905 = (_Bool)t904;
      if (!cast905) break;
      int* t906 = __x901;
      std____cxx11__list_int__std__allocator_int_____push_back(t902, t906);
    for_step903: ;
      unsigned long t907 = __n900;
      unsigned long u908 = t907 - 1;
      __n900 = u908;
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v909) {
bb910:
  struct std____new_allocator_std___List_node_int__* this911;
  this911 = v909;
  struct std____new_allocator_std___List_node_int__* t912 = this911;
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v913, struct std____new_allocator_std___List_node_int__* v914) {
bb915:
  struct std____new_allocator_std___List_node_int__* this916;
  struct std____new_allocator_std___List_node_int__* unnamed917;
  this916 = v913;
  unnamed917 = v914;
  struct std____new_allocator_std___List_node_int__* t918 = this916;
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v919) {
bb920:
  struct std____detail___List_node_header* this921;
  this921 = v919;
  struct std____detail___List_node_header* t922 = this921;
  struct std____detail___List_node_base* base923 = (struct std____detail___List_node_base*)((char *)t922 + 0);
  struct std____detail___List_size* base924 = (struct std____detail___List_size*)((char *)t922 + 16);
  std____detail___List_node_header___M_init(t922);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v925, struct std____detail___List_size* v926) {
bb927:
  struct std____detail___List_size* this928;
  struct std____detail___List_size* unnamed929;
  struct std____detail___List_size* __retval930;
  this928 = v925;
  unnamed929 = v926;
  struct std____detail___List_size* t931 = this928;
  struct std____detail___List_size* t932 = unnamed929;
  unsigned long t933 = t932->_M_size;
  t931->_M_size = t933;
  __retval930 = t931;
  struct std____detail___List_size* t934 = __retval930;
  return t934;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v935) {
bb936:
  struct std____detail___List_node_header* this937;
  struct std____detail___List_size ref_tmp0938;
  this937 = v935;
  struct std____detail___List_node_header* t939 = this937;
  struct std____detail___List_node_base* base940 = (struct std____detail___List_node_base*)((char *)t939 + 0);
  struct std____detail___List_node_base* base941 = (struct std____detail___List_node_base*)((char *)t939 + 0);
  base941->_M_prev = base940;
  struct std____detail___List_node_base* base942 = (struct std____detail___List_node_base*)((char *)t939 + 0);
  base942->_M_next = base940;
  struct std____detail___List_size* base943 = (struct std____detail___List_size*)((char *)t939 + 16);
  ref_tmp0938 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r944 = std____detail___List_size__operator_(base943, &ref_tmp0938);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v945, struct std____allocated_ptr_std__allocator_std___List_node_int___* v946) {
bb947:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this948;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd949;
  this948 = v945;
  __gd949 = v946;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t950 = this948;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t951 = __gd949;
  struct std__allocator_std___List_node_int__* t952 = t951->_M_alloc;
  t950->_M_alloc = t952;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t953 = __gd949;
  struct std___List_node_int_* t954 = t953->_M_ptr;
  t950->_M_ptr = t954;
  struct std___List_node_int_* c955 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t956 = __gd949;
  t956->_M_ptr = c955;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v957) {
bb958:
  struct std___List_node_int_* __ptr959;
  struct std___List_node_int_* __retval960;
  __ptr959 = v957;
  struct std___List_node_int_* t961 = __ptr959;
  __retval960 = t961;
  struct std___List_node_int_* t962 = __retval960;
  return t962;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v963) {
bb964:
  struct std___List_node_int_** __ptr965;
  struct std___List_node_int_* __retval966;
  __ptr965 = v963;
  struct std___List_node_int_** t967 = __ptr965;
  struct std___List_node_int_* t968 = *t967;
  struct std___List_node_int_* r969 = std___List_node_int___std__to_address_std___List_node_int___(t968);
  __retval966 = r969;
  struct std___List_node_int_* t970 = __retval966;
  return t970;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v971) {
bb972:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this973;
  struct std___List_node_int_* __retval974;
  this973 = v971;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t975 = this973;
  struct std___List_node_int_* r976 = auto_std____to_address_std___List_node_int___(&t975->_M_ptr);
  __retval974 = r976;
  struct std___List_node_int_* t977 = __retval974;
  return t977;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v978) {
bb979:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this980;
  _Bool __retval981;
  this980 = v978;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t982 = this980;
  struct std___List_node_int_* t983 = t982->_M_ptr;
  _Bool cast984 = (_Bool)t983;
  __retval981 = cast984;
  _Bool t985 = __retval981;
  return t985;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v986, struct std__allocator_std___List_node_int__* v987) {
bb988:
  struct std__allocator_std___List_node_int__* this989;
  struct std__allocator_std___List_node_int__* __a990;
  this989 = v986;
  __a990 = v987;
  struct std__allocator_std___List_node_int__* t991 = this989;
  struct std____new_allocator_std___List_node_int__* base992 = (struct std____new_allocator_std___List_node_int__*)((char *)t991 + 0);
  struct std__allocator_std___List_node_int__* t993 = __a990;
  struct std____new_allocator_std___List_node_int__* base994 = (struct std____new_allocator_std___List_node_int__*)((char *)t993 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base992, base994);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE37select_on_container_copy_constructionERKS2_
struct std__allocator_std___List_node_int__ std__allocator_traits_std__allocator_std___List_node_int_______select_on_container_copy_construction(struct std__allocator_std___List_node_int__* v995) {
bb996:
  struct std__allocator_std___List_node_int__* __rhs997;
  struct std__allocator_std___List_node_int__ __retval998;
  __rhs997 = v995;
  struct std__allocator_std___List_node_int__* t999 = __rhs997;
  std__allocator_std___List_node_int_____allocator(&__retval998, t999);
  struct std__allocator_std___List_node_int__ t1000 = __retval998;
  return t1000;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaISt10_List_nodeIiEES2_E17_S_select_on_copyERKS3_
struct std__allocator_std___List_node_int__ __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_select_on_copy(struct std__allocator_std___List_node_int__* v1001) {
bb1002:
  struct std__allocator_std___List_node_int__* __a1003;
  struct std__allocator_std___List_node_int__ __retval1004;
  __a1003 = v1001;
  struct std__allocator_std___List_node_int__* t1005 = __a1003;
  struct std__allocator_std___List_node_int__ r1006 = std__allocator_traits_std__allocator_std___List_node_int_______select_on_container_copy_construction(t1005);
  __retval1004 = r1006;
  struct std__allocator_std___List_node_int__ t1007 = __retval1004;
  return t1007;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v1008) {
bb1009:
  struct std____cxx11___List_base_int__std__allocator_int__* this1010;
  struct std__allocator_std___List_node_int__* __retval1011;
  this1010 = v1008;
  struct std____cxx11___List_base_int__std__allocator_int__* t1012 = this1010;
  struct std__allocator_std___List_node_int__* base1013 = (struct std__allocator_std___List_node_int__*)((char *)&(t1012->_M_impl) + 0);
  __retval1011 = base1013;
  struct std__allocator_std___List_node_int__* t1014 = __retval1011;
  return t1014;
}

// function: _ZSteqRKSt20_List_const_iteratorIiES2_
_Bool std__operator___2(struct std___List_const_iterator_int_* v1015, struct std___List_const_iterator_int_* v1016) {
bb1017:
  struct std___List_const_iterator_int_* __x1018;
  struct std___List_const_iterator_int_* __y1019;
  _Bool __retval1020;
  __x1018 = v1015;
  __y1019 = v1016;
  struct std___List_const_iterator_int_* t1021 = __x1018;
  struct std____detail___List_node_base* t1022 = t1021->_M_node;
  struct std___List_const_iterator_int_* t1023 = __y1019;
  struct std____detail___List_node_base* t1024 = t1023->_M_node;
  _Bool c1025 = ((t1022 == t1024)) ? 1 : 0;
  __retval1020 = c1025;
  _Bool t1026 = __retval1020;
  return t1026;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v1027) {
bb1028:
  struct std____detail___List_node_base* this1029;
  struct std____detail___List_node_base* __retval1030;
  this1029 = v1027;
  struct std____detail___List_node_base* t1031 = this1029;
  __retval1030 = t1031;
  struct std____detail___List_node_base* t1032 = __retval1030;
  return t1032;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v1033) {
bb1034:
  struct std____cxx11__list_int__std__allocator_int__* this1035;
  _Bool __retval1036;
  this1035 = v1033;
  struct std____cxx11__list_int__std__allocator_int__* t1037 = this1035;
  struct std____cxx11___List_base_int__std__allocator_int__* base1038 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1037 + 0);
  struct std____detail___List_node_base* base1039 = (struct std____detail___List_node_base*)((char *)&(base1038->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1040 = base1039->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base1041 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1037 + 0);
  struct std____detail___List_node_base* base1042 = (struct std____detail___List_node_base*)((char *)&(base1041->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1043 = std____detail___List_node_base___M_base___const(base1042);
  _Bool c1044 = ((t1040 == r1043)) ? 1 : 0;
  __retval1036 = c1044;
  _Bool t1045 = __retval1036;
  return t1045;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v1046) {
bb1047:
  struct std___List_iterator_int_* this1048;
  struct std___List_iterator_int_* __retval1049;
  this1048 = v1046;
  struct std___List_iterator_int_* t1050 = this1048;
  struct std____detail___List_node_base* t1051 = t1050->_M_node;
  struct std____detail___List_node_base* t1052 = t1051->_M_prev;
  t1050->_M_node = t1052;
  __retval1049 = t1050;
  struct std___List_iterator_int_* t1053 = __retval1049;
  return t1053;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v1054) {
bb1055:
  struct std____cxx11__list_int__std__allocator_int__* this1056;
  int* __retval1057;
  struct std___List_iterator_int_ __tmp1058;
  this1056 = v1054;
  struct std____cxx11__list_int__std__allocator_int__* t1059 = this1056;
    do {
          _Bool r1060 = std____cxx11__list_int__std__allocator_int_____empty___const(t1059);
          if (r1060) {
            char* cast1061 = (char*)&(_str_6);
            int c1062 = 1674;
            char* cast1063 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast1064 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast1061, c1062, cast1063, cast1064);
          }
      _Bool c1065 = 0;
      if (!c1065) break;
    } while (1);
  struct std___List_iterator_int_ r1066 = std____cxx11__list_int__std__allocator_int_____end(t1059);
  __tmp1058 = r1066;
  struct std___List_iterator_int_* r1067 = std___List_iterator_int___operator__(&__tmp1058);
  int* r1068 = std___List_iterator_int___operator____const(&__tmp1058);
  __retval1057 = r1068;
  int* t1069 = __retval1057;
  return t1069;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRKiEEERiDpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1070, int* v1071) {
bb1072:
  struct std____cxx11__list_int__std__allocator_int__* this1073;
  int* __args1074;
  int* __retval1075;
  struct std___List_iterator_int_ agg_tmp01076;
  this1073 = v1070;
  __args1074 = v1071;
  struct std____cxx11__list_int__std__allocator_int__* t1077 = this1073;
  struct std___List_iterator_int_ r1078 = std____cxx11__list_int__std__allocator_int_____end(t1077);
  agg_tmp01076 = r1078;
  int* t1079 = __args1074;
  struct std___List_iterator_int_ t1080 = agg_tmp01076;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t1077, t1080, t1079);
  int* r1081 = std____cxx11__list_int__std__allocator_int_____back(t1077);
  __retval1075 = r1081;
  int* t1082 = __retval1075;
  return t1082;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v1083) {
bb1084:
  struct __gnu_cxx____aligned_membuf_int_* this1085;
  void* __retval1086;
  this1085 = v1083;
  struct __gnu_cxx____aligned_membuf_int_* t1087 = this1085;
  void* cast1088 = (void*)&(t1087->_M_storage);
  __retval1086 = cast1088;
  void* t1089 = __retval1086;
  return t1089;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v1090) {
bb1091:
  struct __gnu_cxx____aligned_membuf_int_* this1092;
  int* __retval1093;
  this1092 = v1090;
  struct __gnu_cxx____aligned_membuf_int_* t1094 = this1092;
  void* r1095 = __gnu_cxx____aligned_membuf_int____M_addr___const(t1094);
  int* cast1096 = (int*)r1095;
  __retval1093 = cast1096;
  int* t1097 = __retval1093;
  return t1097;
}

// function: _ZNKSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr___const(struct std___List_node_int_* v1098) {
bb1099:
  struct std___List_node_int_* this1100;
  int* __retval1101;
  this1100 = v1098;
  struct std___List_node_int_* t1102 = this1100;
  int* r1103 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t1102->_M_storage);
  __retval1101 = r1103;
  int* t1104 = __retval1101;
  return t1104;
}

// function: _ZNKSt20_List_const_iteratorIiEdeEv
int* std___List_const_iterator_int___operator____const(struct std___List_const_iterator_int_* v1105) {
bb1106:
  struct std___List_const_iterator_int_* this1107;
  int* __retval1108;
  this1107 = v1105;
  struct std___List_const_iterator_int_* t1109 = this1107;
  struct std____detail___List_node_base* t1110 = t1109->_M_node;
  struct std___List_node_int_* derived1111 = ((t1110) ? (struct std___List_node_int_*)((char *)t1110 - 0) : (struct std___List_node_int_*)0);
  int* r1112 = std___List_node_int____M_valptr___const(derived1111);
  __retval1108 = r1112;
  int* t1113 = __retval1108;
  return t1113;
}

// function: _ZNSt20_List_const_iteratorIiEppEv
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* v1114) {
bb1115:
  struct std___List_const_iterator_int_* this1116;
  struct std___List_const_iterator_int_* __retval1117;
  this1116 = v1114;
  struct std___List_const_iterator_int_* t1118 = this1116;
  struct std____detail___List_node_base* t1119 = t1118->_M_node;
  struct std____detail___List_node_base* t1120 = t1119->_M_next;
  t1118->_M_node = t1120;
  __retval1117 = t1118;
  struct std___List_const_iterator_int_* t1121 = __retval1117;
  return t1121;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchISt20_List_const_iteratorIiEEEvT_S6_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_const_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* v1122, struct std___List_const_iterator_int_ v1123, struct std___List_const_iterator_int_ v1124, struct std____false_type v1125) {
bb1126:
  struct std____cxx11__list_int__std__allocator_int__* this1127;
  struct std___List_const_iterator_int_ __first1128;
  struct std___List_const_iterator_int_ __last1129;
  struct std____false_type unnamed1130;
  _Bool __notempty1131;
  this1127 = v1122;
  __first1128 = v1123;
  __last1129 = v1124;
  unnamed1130 = v1125;
  struct std____cxx11__list_int__std__allocator_int__* t1132 = this1127;
  _Bool r1133 = std__operator___2(&__first1128, &__last1129);
  _Bool u1134 = !r1133;
  __notempty1131 = u1134;
    while (1) {
      _Bool r1136 = std__operator___2(&__first1128, &__last1129);
      _Bool u1137 = !r1136;
      if (!u1137) break;
      int* r1138 = std___List_const_iterator_int___operator____const(&__first1128);
      int* r1139 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(t1132, r1138);
    for_step1135: ;
      struct std___List_const_iterator_int_* r1140 = std___List_const_iterator_int___operator__(&__first1128);
    }
    _Bool t1141 = __notempty1131;
    if (t1141) {
        struct std___List_iterator_int_ ref_tmp01142;
        struct std___List_iterator_int_ ref_tmp11143;
        struct std___List_iterator_int_ r1144 = std____cxx11__list_int__std__allocator_int_____begin(t1132);
        ref_tmp01142 = r1144;
        struct std___List_iterator_int_ r1145 = std____cxx11__list_int__std__allocator_int_____end(t1132);
        ref_tmp11143 = r1145;
        _Bool r1146 = std__operator__(&ref_tmp01142, &ref_tmp11143);
        if (r1146) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt20_List_const_iteratorIiEC2EPKNSt8__detail15_List_node_baseE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v1147, struct std____detail___List_node_base* v1148) {
bb1149:
  struct std___List_const_iterator_int_* this1150;
  struct std____detail___List_node_base* __x1151;
  this1150 = v1147;
  __x1151 = v1148;
  struct std___List_const_iterator_int_* t1152 = this1150;
  struct std____detail___List_node_base* t1153 = __x1151;
  t1152->_M_node = t1153;
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5beginEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* v1154) {
bb1155:
  struct std____cxx11__list_int__std__allocator_int__* this1156;
  struct std___List_const_iterator_int_ __retval1157;
  this1156 = v1154;
  struct std____cxx11__list_int__std__allocator_int__* t1158 = this1156;
  struct std____cxx11___List_base_int__std__allocator_int__* base1159 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1158 + 0);
  struct std____detail___List_node_base* base1160 = (struct std____detail___List_node_base*)((char *)&(base1159->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1161 = base1160->_M_next;
  std___List_const_iterator_int____List_const_iterator(&__retval1157, t1161);
  struct std___List_const_iterator_int_ t1162 = __retval1157;
  return t1162;
}

// function: _ZNKSt7__cxx114listIiSaIiEE3endEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* v1163) {
bb1164:
  struct std____cxx11__list_int__std__allocator_int__* this1165;
  struct std___List_const_iterator_int_ __retval1166;
  this1165 = v1163;
  struct std____cxx11__list_int__std__allocator_int__* t1167 = this1165;
  struct std____cxx11___List_base_int__std__allocator_int__* base1168 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1167 + 0);
  struct std____detail___List_node_base* base1169 = (struct std____detail___List_node_base*)((char *)&(base1168->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1170 = std____detail___List_node_base___M_base___const(base1169);
  std___List_const_iterator_int____List_const_iterator(&__retval1166, r1170);
  struct std___List_const_iterator_int_ t1171 = __retval1166;
  return t1171;
}

