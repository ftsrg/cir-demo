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
char _str[17] = "first != second1";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_swap_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "second != first1";
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
          _Bool u425 = !r424;
          if (u425) {
          } else {
            char* cast426 = (char*)&(_str);
            char* c427 = _str_1;
            unsigned int c428 = 23;
            char* cast429 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast426, c427, c428, cast429);
          }
          _Bool r430 = bool_std__operator___int__std__allocator_int___(&second413, &first1416);
          _Bool u431 = !r430;
          if (u431) {
          } else {
            char* cast432 = (char*)&(_str_2);
            char* c433 = _str_1;
            unsigned int c434 = 24;
            char* cast435 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast432, c433, c434, cast435);
          }
          char* cast436 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r437 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast436);
            struct std___List_iterator_int_ ref_tmp4438;
            struct std___List_iterator_int_ ref_tmp5439;
            struct std___List_iterator_int_ agg_tmp0440;
            struct std___List_iterator_int_ r441 = std____cxx11__list_int__std__allocator_int_____begin(&first410);
            ref_tmp4438 = r441;
            struct std___List_iterator_int_* r442 = std___List_iterator_int___operator_(&it418, &ref_tmp4438);
            while (1) {
              struct std___List_iterator_int_ r444 = std____cxx11__list_int__std__allocator_int_____end(&first410);
              ref_tmp5439 = r444;
              _Bool r445 = std__operator__(&it418, &ref_tmp5439);
              _Bool u446 = !r445;
              if (!u446) break;
              char* cast447 = (char*)&(_str_4);
              struct std__basic_ostream_char__std__char_traits_char__* r448 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast447);
              int* r449 = std___List_iterator_int___operator____const(&it418);
              int t450 = *r449;
              struct std__basic_ostream_char__std__char_traits_char__* r451 = std__ostream__operator__(r448, t450);
            for_step443: ;
              int c452 = 0;
              struct std___List_iterator_int_ r453 = std___List_iterator_int___operator___2(&it418, c452);
              agg_tmp0440 = r453;
            }
          char* cast454 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r455 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast454);
            struct std___List_iterator_int_ ref_tmp6456;
            struct std___List_iterator_int_ ref_tmp7457;
            struct std___List_iterator_int_ agg_tmp1458;
            struct std___List_iterator_int_ r459 = std____cxx11__list_int__std__allocator_int_____begin(&second413);
            ref_tmp6456 = r459;
            struct std___List_iterator_int_* r460 = std___List_iterator_int___operator_(&it418, &ref_tmp6456);
            while (1) {
              struct std___List_iterator_int_ r462 = std____cxx11__list_int__std__allocator_int_____end(&second413);
              ref_tmp7457 = r462;
              _Bool r463 = std__operator__(&it418, &ref_tmp7457);
              _Bool u464 = !r463;
              if (!u464) break;
              char* cast465 = (char*)&(_str_4);
              struct std__basic_ostream_char__std__char_traits_char__* r466 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast465);
              int* r467 = std___List_iterator_int___operator____const(&it418);
              int t468 = *r467;
              struct std__basic_ostream_char__std__char_traits_char__* r469 = std__ostream__operator__(r466, t468);
            for_step461: ;
              int c470 = 0;
              struct std___List_iterator_int_ r471 = std___List_iterator_int___operator___2(&it418, c470);
              agg_tmp1458 = r471;
            }
          struct std__basic_ostream_char__std__char_traits_char__* r472 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          int c473 = 0;
          __retval409 = c473;
          int t474 = __retval409;
          int ret_val475 = t474;
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
          return ret_val475;
  int t476 = __retval409;
  return t476;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v477) {
bb478:
  struct std____new_allocator_int_* this479;
  this479 = v477;
  struct std____new_allocator_int_* t480 = this479;
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v481) {
bb482:
  struct std____detail___List_node_header* this483;
  struct std____detail___List_node_base* __retval484;
  this483 = v481;
  struct std____detail___List_node_header* t485 = this483;
  struct std____detail___List_node_base* base486 = (struct std____detail___List_node_base*)((char *)t485 + 0);
  __retval484 = base486;
  struct std____detail___List_node_base* t487 = __retval484;
  return t487;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v488) {
bb489:
  int* __location490;
  __location490 = v488;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v491, int* v492) {
bb493:
  struct std__allocator_std___List_node_int__* __a494;
  int* __p495;
  __a494 = v491;
  __p495 = v492;
  int* t496 = __p495;
  void_std__destroy_at_int_(t496);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v497) {
bb498:
  struct __gnu_cxx____aligned_membuf_int_* this499;
  void* __retval500;
  this499 = v497;
  struct __gnu_cxx____aligned_membuf_int_* t501 = this499;
  void* cast502 = (void*)&(t501->_M_storage);
  __retval500 = cast502;
  void* t503 = __retval500;
  return t503;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v504) {
bb505:
  struct __gnu_cxx____aligned_membuf_int_* this506;
  int* __retval507;
  this506 = v504;
  struct __gnu_cxx____aligned_membuf_int_* t508 = this506;
  void* r509 = __gnu_cxx____aligned_membuf_int____M_addr(t508);
  int* cast510 = (int*)r509;
  __retval507 = cast510;
  int* t511 = __retval507;
  return t511;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v512) {
bb513:
  struct std___List_node_int_* this514;
  int* __retval515;
  this514 = v512;
  struct std___List_node_int_* t516 = this514;
  int* r517 = __gnu_cxx____aligned_membuf_int____M_ptr(&t516->_M_storage);
  __retval515 = r517;
  int* t518 = __retval515;
  return t518;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb519:
  _Bool __retval520;
    _Bool c521 = 0;
    __retval520 = c521;
    _Bool t522 = __retval520;
    return t522;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v523, struct std___List_node_int_* v524, unsigned long v525) {
bb526:
  struct std____new_allocator_std___List_node_int__* this527;
  struct std___List_node_int_* __p528;
  unsigned long __n529;
  this527 = v523;
  __p528 = v524;
  __n529 = v525;
  struct std____new_allocator_std___List_node_int__* t530 = this527;
    unsigned long c531 = 8;
    unsigned long c532 = 16;
    _Bool c533 = ((c531 > c532)) ? 1 : 0;
    if (c533) {
      struct std___List_node_int_* t534 = __p528;
      void* cast535 = (void*)t534;
      unsigned long t536 = __n529;
      unsigned long c537 = 24;
      unsigned long b538 = t536 * c537;
      unsigned long c539 = 8;
      operator_delete_3(cast535, b538, c539);
      return;
    }
  struct std___List_node_int_* t540 = __p528;
  void* cast541 = (void*)t540;
  unsigned long t542 = __n529;
  unsigned long c543 = 24;
  unsigned long b544 = t542 * c543;
  operator_delete_2(cast541, b544);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v545, struct std___List_node_int_* v546, unsigned long v547) {
bb548:
  struct std__allocator_std___List_node_int__* this549;
  struct std___List_node_int_* __p550;
  unsigned long __n551;
  this549 = v545;
  __p550 = v546;
  __n551 = v547;
  struct std__allocator_std___List_node_int__* t552 = this549;
    _Bool r553 = std____is_constant_evaluated();
    if (r553) {
      struct std___List_node_int_* t554 = __p550;
      void* cast555 = (void*)t554;
      operator_delete(cast555);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base556 = (struct std____new_allocator_std___List_node_int__*)((char *)t552 + 0);
  struct std___List_node_int_* t557 = __p550;
  unsigned long t558 = __n551;
  std____new_allocator_std___List_node_int_____deallocate(base556, t557, t558);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v559, struct std___List_node_int_* v560, unsigned long v561) {
bb562:
  struct std__allocator_std___List_node_int__* __a563;
  struct std___List_node_int_* __p564;
  unsigned long __n565;
  __a563 = v559;
  __p564 = v560;
  __n565 = v561;
  struct std__allocator_std___List_node_int__* t566 = __a563;
  struct std___List_node_int_* t567 = __p564;
  unsigned long t568 = __n565;
  std__allocator_std___List_node_int_____deallocate(t566, t567, t568);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v569, struct std___List_node_int_* v570) {
bb571:
  struct std____cxx11___List_base_int__std__allocator_int__* this572;
  struct std___List_node_int_* __p573;
  this572 = v569;
  __p573 = v570;
  struct std____cxx11___List_base_int__std__allocator_int__* t574 = this572;
  struct std__allocator_std___List_node_int__* base575 = (struct std__allocator_std___List_node_int__*)((char *)&(t574->_M_impl) + 0);
  struct std___List_node_int_* t576 = __p573;
  unsigned long c577 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base575, t576, c577);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v578, struct std___List_node_int_* v579) {
bb580:
  struct std____cxx11___List_base_int__std__allocator_int__* this581;
  struct std___List_node_int_* __p582;
  this581 = v578;
  __p582 = v579;
  struct std____cxx11___List_base_int__std__allocator_int__* t583 = this581;
  struct std__allocator_std___List_node_int__* base584 = (struct std__allocator_std___List_node_int__*)((char *)&(t583->_M_impl) + 0);
  struct std___List_node_int_* t585 = __p582;
  int* r586 = std___List_node_int____M_valptr(t585);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base584, r586);
  struct std___List_node_int_* t587 = __p582;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t583, t587);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v588) {
bb589:
  struct std___List_node_int_* this590;
  struct std___List_node_int_* __retval591;
  this590 = v588;
  struct std___List_node_int_* t592 = this590;
  __retval591 = t592;
  struct std___List_node_int_* t593 = __retval591;
  return t593;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v594) {
bb595:
  struct std____cxx11___List_base_int__std__allocator_int__* this596;
  struct std____detail___List_node_base* __cur597;
  this596 = v594;
  struct std____cxx11___List_base_int__std__allocator_int__* t598 = this596;
  struct std____detail___List_node_base* base599 = (struct std____detail___List_node_base*)((char *)&(t598->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t600 = base599->_M_next;
  __cur597 = t600;
    while (1) {
      struct std____detail___List_node_base* t601 = __cur597;
      struct std____detail___List_node_base* r602 = std____detail___List_node_header___M_base(&t598->_M_impl._M_node);
      _Bool c603 = ((t601 != r602)) ? 1 : 0;
      if (!c603) break;
        struct std___List_node_int_* __tmp604;
        struct std____detail___List_node_base* t605 = __cur597;
        struct std___List_node_int_* derived606 = (struct std___List_node_int_*)((char *)t605 - 0);
        __tmp604 = derived606;
        struct std___List_node_int_* t607 = __tmp604;
        struct std____detail___List_node_base* base608 = (struct std____detail___List_node_base*)((char *)t607 + 0);
        struct std____detail___List_node_base* t609 = base608->_M_next;
        __cur597 = t609;
        struct std___List_node_int_* t610 = __tmp604;
        struct std___List_node_int_* r611 = std___List_node_int____M_node_ptr(t610);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t598, r611);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v612) {
bb613:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this614;
  this614 = v612;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t615 = this614;
  {
    struct std__allocator_std___List_node_int__* base616 = (struct std__allocator_std___List_node_int__*)((char *)t615 + 0);
    std__allocator_std___List_node_int______allocator(base616);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v617) {
bb618:
  struct std____cxx11___List_base_int__std__allocator_int__* this619;
  this619 = v617;
  struct std____cxx11___List_base_int__std__allocator_int__* t620 = this619;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t620);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t620->_M_impl);
  }
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v621, struct std__allocator_int_* v622) {
bb623:
  struct std__allocator_std___List_node_int__* this624;
  struct std__allocator_int_* unnamed625;
  this624 = v621;
  unnamed625 = v622;
  struct std__allocator_std___List_node_int__* t626 = this624;
  struct std____new_allocator_std___List_node_int__* base627 = (struct std____new_allocator_std___List_node_int__*)((char *)t626 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base627);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v628, struct std__allocator_std___List_node_int__* v629) {
bb630:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this631;
  struct std__allocator_std___List_node_int__* __a632;
  this631 = v628;
  __a632 = v629;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t633 = this631;
  struct std__allocator_std___List_node_int__* base634 = (struct std__allocator_std___List_node_int__*)((char *)t633 + 0);
  struct std__allocator_std___List_node_int__* t635 = __a632;
  std__allocator_std___List_node_int_____allocator(base634, t635);
    std____detail___List_node_header___List_node_header(&t633->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v636, struct std__allocator_std___List_node_int__* v637) {
bb638:
  struct std____cxx11___List_base_int__std__allocator_int__* this639;
  struct std__allocator_std___List_node_int__* __a640;
  this639 = v636;
  __a640 = v637;
  struct std____cxx11___List_base_int__std__allocator_int__* t641 = this639;
  struct std__allocator_std___List_node_int__* t642 = __a640;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t641->_M_impl, t642);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v643) {
bb644:
  struct std__allocator_std___List_node_int__* this645;
  this645 = v643;
  struct std__allocator_std___List_node_int__* t646 = this645;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v647) {
bb648:
  struct std____cxx11___List_base_int__std__allocator_int__* this649;
  struct std__allocator_std___List_node_int__* __retval650;
  this649 = v647;
  struct std____cxx11___List_base_int__std__allocator_int__* t651 = this649;
  struct std__allocator_std___List_node_int__* base652 = (struct std__allocator_std___List_node_int__*)((char *)&(t651->_M_impl) + 0);
  __retval650 = base652;
  struct std__allocator_std___List_node_int__* t653 = __retval650;
  return t653;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v654) {
bb655:
  struct std____new_allocator_std___List_node_int__* this656;
  unsigned long __retval657;
  this656 = v654;
  struct std____new_allocator_std___List_node_int__* t658 = this656;
  unsigned long c659 = 9223372036854775807;
  unsigned long c660 = 24;
  unsigned long b661 = c659 / c660;
  __retval657 = b661;
  unsigned long t662 = __retval657;
  return t662;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v663, unsigned long v664, void* v665) {
bb666:
  struct std____new_allocator_std___List_node_int__* this667;
  unsigned long __n668;
  void* unnamed669;
  struct std___List_node_int_* __retval670;
  this667 = v663;
  __n668 = v664;
  unnamed669 = v665;
  struct std____new_allocator_std___List_node_int__* t671 = this667;
    unsigned long t672 = __n668;
    unsigned long r673 = std____new_allocator_std___List_node_int______M_max_size___const(t671);
    _Bool c674 = ((t672 > r673)) ? 1 : 0;
    if (c674) {
        unsigned long t675 = __n668;
        unsigned long c676 = -1;
        unsigned long c677 = 24;
        unsigned long b678 = c676 / c677;
        _Bool c679 = ((t675 > b678)) ? 1 : 0;
        if (c679) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c680 = 8;
    unsigned long c681 = 16;
    _Bool c682 = ((c680 > c681)) ? 1 : 0;
    if (c682) {
      unsigned long __al683;
      unsigned long c684 = 8;
      __al683 = c684;
      unsigned long t685 = __n668;
      unsigned long c686 = 24;
      unsigned long b687 = t685 * c686;
      unsigned long t688 = __al683;
      void* r689 = operator_new_2(b687, t688);
      struct std___List_node_int_* cast690 = (struct std___List_node_int_*)r689;
      __retval670 = cast690;
      struct std___List_node_int_* t691 = __retval670;
      return t691;
    }
  unsigned long t692 = __n668;
  unsigned long c693 = 24;
  unsigned long b694 = t692 * c693;
  void* r695 = operator_new(b694);
  struct std___List_node_int_* cast696 = (struct std___List_node_int_*)r695;
  __retval670 = cast696;
  struct std___List_node_int_* t697 = __retval670;
  return t697;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v698, unsigned long v699) {
bb700:
  struct std__allocator_std___List_node_int__* this701;
  unsigned long __n702;
  struct std___List_node_int_* __retval703;
  this701 = v698;
  __n702 = v699;
  struct std__allocator_std___List_node_int__* t704 = this701;
    _Bool r705 = std____is_constant_evaluated();
    if (r705) {
        unsigned long t706 = __n702;
        unsigned long c707 = 24;
        unsigned long ovr708;
        _Bool ovf709 = __builtin_mul_overflow(t706, c707, &ovr708);
        __n702 = ovr708;
        if (ovf709) {
          std____throw_bad_array_new_length();
        }
      unsigned long t710 = __n702;
      void* r711 = operator_new(t710);
      struct std___List_node_int_* cast712 = (struct std___List_node_int_*)r711;
      __retval703 = cast712;
      struct std___List_node_int_* t713 = __retval703;
      return t713;
    }
  struct std____new_allocator_std___List_node_int__* base714 = (struct std____new_allocator_std___List_node_int__*)((char *)t704 + 0);
  unsigned long t715 = __n702;
  void* c716 = ((void*)0);
  struct std___List_node_int_* r717 = std____new_allocator_std___List_node_int_____allocate(base714, t715, c716);
  __retval703 = r717;
  struct std___List_node_int_* t718 = __retval703;
  return t718;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v719, unsigned long v720) {
bb721:
  struct std__allocator_std___List_node_int__* __a722;
  unsigned long __n723;
  struct std___List_node_int_* __retval724;
  __a722 = v719;
  __n723 = v720;
  struct std__allocator_std___List_node_int__* t725 = __a722;
  unsigned long t726 = __n723;
  struct std___List_node_int_* r727 = std__allocator_std___List_node_int_____allocate(t725, t726);
  __retval724 = r727;
  struct std___List_node_int_* t728 = __retval724;
  return t728;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v729, struct std__allocator_std___List_node_int__* v730, struct std___List_node_int_* v731) {
bb732:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this733;
  struct std__allocator_std___List_node_int__* __a734;
  struct std___List_node_int_* __ptr735;
  this733 = v729;
  __a734 = v730;
  __ptr735 = v731;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t736 = this733;
  struct std__allocator_std___List_node_int__* t737 = __a734;
  t736->_M_alloc = t737;
  struct std___List_node_int_* t738 = __ptr735;
  t736->_M_ptr = t738;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v739) {
bb740:
  struct std__allocator_std___List_node_int__* __a741;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval742;
  __a741 = v739;
  struct std__allocator_std___List_node_int__* t743 = __a741;
  struct std__allocator_std___List_node_int__* t744 = __a741;
  unsigned long c745 = 1;
  struct std___List_node_int_* r746 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t744, c745);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval742, t743, r746);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t747 = __retval742;
  return t747;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v748, struct std____allocated_ptr_std__allocator_std___List_node_int___* v749) {
bb750:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this751;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr752;
  this751 = v748;
  __ptr752 = v749;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t753 = this751;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base754 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t753 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t755 = __ptr752;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base754, t755);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base756 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t753 + 0);
    struct std___List_node_int_* r757 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base756);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v758) {
bb759:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this760;
  this760 = v758;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t761 = this760;
    struct std___List_node_int_* t762 = t761->_M_ptr;
    struct std___List_node_int_* c763 = ((void*)0);
    _Bool c764 = ((t762 != c763)) ? 1 : 0;
    if (c764) {
      struct std__allocator_std___List_node_int__* t765 = t761->_M_alloc;
      struct std___List_node_int_* t766 = t761->_M_ptr;
      unsigned long c767 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t765, t766, c767);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v768) {
bb769:
  struct std__allocator_std___List_node_int__* __a770;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval771;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0772;
  __a770 = v768;
  struct std__allocator_std___List_node_int__* t773 = __a770;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r774 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t773);
  ref_tmp0772 = r774;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval771, &ref_tmp0772);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0772);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t775 = __retval771;
  return t775;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v776, int* v777) {
bb778:
  int* __location779;
  int* __args780;
  int* __retval781;
  void* __loc782;
  __location779 = v776;
  __args780 = v777;
  int* t783 = __location779;
  void* cast784 = (void*)t783;
  __loc782 = cast784;
    void* t785 = __loc782;
    int* cast786 = (int*)t785;
    int* t787 = __args780;
    int t788 = *t787;
    *cast786 = t788;
    __retval781 = cast786;
    int* t789 = __retval781;
    return t789;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v790, int* v791, int* v792) {
bb793:
  struct std__allocator_std___List_node_int__* __a794;
  int* __p795;
  int* __args796;
  __a794 = v790;
  __p795 = v791;
  __args796 = v792;
  int* t797 = __p795;
  int* t798 = __args796;
  int* r799 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t797, t798);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v800) {
bb801:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this802;
  struct std___List_node_int_* __retval803;
  this802 = v800;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t804 = this802;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base805 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t804 + 0);
  struct std___List_node_int_* r806 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base805);
  __retval803 = r806;
  struct std___List_node_int_* t807 = __retval803;
  return t807;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v808, void** v809) {
bb810:
  struct std___List_node_int_** __obj811;
  void** __new_val812;
  struct std___List_node_int_* __retval813;
  struct std___List_node_int_* __old_val814;
  __obj811 = v808;
  __new_val812 = v809;
  struct std___List_node_int_** t815 = __obj811;
  struct std___List_node_int_* t816 = *t815;
  __old_val814 = t816;
  void** t817 = __new_val812;
  struct std___List_node_int_* c818 = ((void*)0);
  struct std___List_node_int_** t819 = __obj811;
  *t819 = c818;
  struct std___List_node_int_* t820 = __old_val814;
  __retval813 = t820;
  struct std___List_node_int_* t821 = __retval813;
  return t821;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v822) {
bb823:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this824;
  struct std___List_node_int_* __retval825;
  void* ref_tmp0826;
  this824 = v822;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t827 = this824;
  void* c828 = ((void*)0);
  ref_tmp0826 = c828;
  struct std___List_node_int_* r829 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t827->_M_ptr, &ref_tmp0826);
  __retval825 = r829;
  struct std___List_node_int_* t830 = __retval825;
  return t830;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v831) {
bb832:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this833;
  this833 = v831;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t834 = this833;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base835 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t834 + 0);
      _Bool r836 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base835);
      if (r836) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base837 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t834 + 0);
        struct std___List_node_int_* r838 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base837);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base839 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t834 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base839);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v840, int* v841) {
bb842:
  struct std____cxx11__list_int__std__allocator_int__* this843;
  int* __args844;
  struct std___List_node_int_* __retval845;
  struct std__allocator_std___List_node_int__* __alloc846;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard847;
  this843 = v840;
  __args844 = v841;
  struct std____cxx11__list_int__std__allocator_int__* t848 = this843;
  struct std____cxx11___List_base_int__std__allocator_int__* base849 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t848 + 0);
  struct std__allocator_std___List_node_int__* r850 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base849);
  __alloc846 = r850;
  struct std__allocator_std___List_node_int__* t851 = __alloc846;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r852 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t851);
  __guard847 = r852;
    struct std__allocator_std___List_node_int__* t853 = __alloc846;
    struct std___List_node_int_* r854 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard847);
    int* r855 = std___List_node_int____M_valptr(r854);
    int* t856 = __args844;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t853, r855, t856);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base857 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard847) + 0);
    struct std___List_node_int_* r858 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base857);
    __retval845 = r858;
    struct std___List_node_int_* t859 = __retval845;
    struct std___List_node_int_* ret_val860 = t859;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard847);
    }
    return ret_val860;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v861, unsigned long v862) {
bb863:
  struct std____cxx11___List_base_int__std__allocator_int__* this864;
  unsigned long __n865;
  this864 = v861;
  __n865 = v862;
  struct std____cxx11___List_base_int__std__allocator_int__* t866 = this864;
  unsigned long t867 = __n865;
  struct std____detail___List_size* base868 = (struct std____detail___List_size*)((char *)&(t866->_M_impl._M_node) + 16);
  unsigned long t869 = base868->_M_size;
  unsigned long b870 = t869 + t867;
  base868->_M_size = b870;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v871, struct std___List_iterator_int_ v872, int* v873) {
bb874:
  struct std____cxx11__list_int__std__allocator_int__* this875;
  struct std___List_iterator_int_ __position876;
  int* __args877;
  struct std___List_node_int_* __tmp878;
  this875 = v871;
  __position876 = v872;
  __args877 = v873;
  struct std____cxx11__list_int__std__allocator_int__* t879 = this875;
  int* t880 = __args877;
  struct std___List_node_int_* r881 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t879, t880);
  __tmp878 = r881;
  struct std___List_node_int_* t882 = __tmp878;
  struct std____detail___List_node_base* base883 = (struct std____detail___List_node_base*)((char *)t882 + 0);
  struct std____detail___List_node_base* t884 = __position876._M_node;
  std____detail___List_node_base___M_hook(base883, t884);
  struct std____cxx11___List_base_int__std__allocator_int__* base885 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t879 + 0);
  unsigned long c886 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base885, c886);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v887, int* v888) {
bb889:
  struct std____cxx11__list_int__std__allocator_int__* this890;
  int* __x891;
  struct std___List_iterator_int_ agg_tmp0892;
  this890 = v887;
  __x891 = v888;
  struct std____cxx11__list_int__std__allocator_int__* t893 = this890;
  struct std___List_iterator_int_ r894 = std____cxx11__list_int__std__allocator_int_____end(t893);
  agg_tmp0892 = r894;
  int* t895 = __x891;
  struct std___List_iterator_int_ t896 = agg_tmp0892;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t893, t896, t895);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_fill_initializeEmRKi
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* v897, unsigned long v898, int* v899) {
bb900:
  struct std____cxx11__list_int__std__allocator_int__* this901;
  unsigned long __n902;
  int* __x903;
  this901 = v897;
  __n902 = v898;
  __x903 = v899;
  struct std____cxx11__list_int__std__allocator_int__* t904 = this901;
    while (1) {
      unsigned long t906 = __n902;
      _Bool cast907 = (_Bool)t906;
      if (!cast907) break;
      int* t908 = __x903;
      std____cxx11__list_int__std__allocator_int_____push_back(t904, t908);
    for_step905: ;
      unsigned long t909 = __n902;
      unsigned long u910 = t909 - 1;
      __n902 = u910;
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v911) {
bb912:
  struct std____new_allocator_std___List_node_int__* this913;
  this913 = v911;
  struct std____new_allocator_std___List_node_int__* t914 = this913;
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v915, struct std____new_allocator_std___List_node_int__* v916) {
bb917:
  struct std____new_allocator_std___List_node_int__* this918;
  struct std____new_allocator_std___List_node_int__* unnamed919;
  this918 = v915;
  unnamed919 = v916;
  struct std____new_allocator_std___List_node_int__* t920 = this918;
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v921) {
bb922:
  struct std____detail___List_node_header* this923;
  this923 = v921;
  struct std____detail___List_node_header* t924 = this923;
  struct std____detail___List_node_base* base925 = (struct std____detail___List_node_base*)((char *)t924 + 0);
  struct std____detail___List_size* base926 = (struct std____detail___List_size*)((char *)t924 + 16);
  std____detail___List_node_header___M_init(t924);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v927, struct std____detail___List_size* v928) {
bb929:
  struct std____detail___List_size* this930;
  struct std____detail___List_size* unnamed931;
  struct std____detail___List_size* __retval932;
  this930 = v927;
  unnamed931 = v928;
  struct std____detail___List_size* t933 = this930;
  struct std____detail___List_size* t934 = unnamed931;
  unsigned long t935 = t934->_M_size;
  t933->_M_size = t935;
  __retval932 = t933;
  struct std____detail___List_size* t936 = __retval932;
  return t936;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v937) {
bb938:
  struct std____detail___List_node_header* this939;
  struct std____detail___List_size ref_tmp0940;
  this939 = v937;
  struct std____detail___List_node_header* t941 = this939;
  struct std____detail___List_node_base* base942 = (struct std____detail___List_node_base*)((char *)t941 + 0);
  struct std____detail___List_node_base* base943 = (struct std____detail___List_node_base*)((char *)t941 + 0);
  base943->_M_prev = base942;
  struct std____detail___List_node_base* base944 = (struct std____detail___List_node_base*)((char *)t941 + 0);
  base944->_M_next = base942;
  struct std____detail___List_size* base945 = (struct std____detail___List_size*)((char *)t941 + 16);
  ref_tmp0940 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r946 = std____detail___List_size__operator_(base945, &ref_tmp0940);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v947, struct std____allocated_ptr_std__allocator_std___List_node_int___* v948) {
bb949:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this950;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd951;
  this950 = v947;
  __gd951 = v948;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t952 = this950;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t953 = __gd951;
  struct std__allocator_std___List_node_int__* t954 = t953->_M_alloc;
  t952->_M_alloc = t954;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t955 = __gd951;
  struct std___List_node_int_* t956 = t955->_M_ptr;
  t952->_M_ptr = t956;
  struct std___List_node_int_* c957 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t958 = __gd951;
  t958->_M_ptr = c957;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v959) {
bb960:
  struct std___List_node_int_* __ptr961;
  struct std___List_node_int_* __retval962;
  __ptr961 = v959;
  struct std___List_node_int_* t963 = __ptr961;
  __retval962 = t963;
  struct std___List_node_int_* t964 = __retval962;
  return t964;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v965) {
bb966:
  struct std___List_node_int_** __ptr967;
  struct std___List_node_int_* __retval968;
  __ptr967 = v965;
  struct std___List_node_int_** t969 = __ptr967;
  struct std___List_node_int_* t970 = *t969;
  struct std___List_node_int_* r971 = std___List_node_int___std__to_address_std___List_node_int___(t970);
  __retval968 = r971;
  struct std___List_node_int_* t972 = __retval968;
  return t972;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v973) {
bb974:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this975;
  struct std___List_node_int_* __retval976;
  this975 = v973;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t977 = this975;
  struct std___List_node_int_* r978 = auto_std____to_address_std___List_node_int___(&t977->_M_ptr);
  __retval976 = r978;
  struct std___List_node_int_* t979 = __retval976;
  return t979;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v980) {
bb981:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this982;
  _Bool __retval983;
  this982 = v980;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t984 = this982;
  struct std___List_node_int_* t985 = t984->_M_ptr;
  _Bool cast986 = (_Bool)t985;
  __retval983 = cast986;
  _Bool t987 = __retval983;
  return t987;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v988, struct std__allocator_std___List_node_int__* v989) {
bb990:
  struct std__allocator_std___List_node_int__* this991;
  struct std__allocator_std___List_node_int__* __a992;
  this991 = v988;
  __a992 = v989;
  struct std__allocator_std___List_node_int__* t993 = this991;
  struct std____new_allocator_std___List_node_int__* base994 = (struct std____new_allocator_std___List_node_int__*)((char *)t993 + 0);
  struct std__allocator_std___List_node_int__* t995 = __a992;
  struct std____new_allocator_std___List_node_int__* base996 = (struct std____new_allocator_std___List_node_int__*)((char *)t995 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base994, base996);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE37select_on_container_copy_constructionERKS2_
struct std__allocator_std___List_node_int__ std__allocator_traits_std__allocator_std___List_node_int_______select_on_container_copy_construction(struct std__allocator_std___List_node_int__* v997) {
bb998:
  struct std__allocator_std___List_node_int__* __rhs999;
  struct std__allocator_std___List_node_int__ __retval1000;
  __rhs999 = v997;
  struct std__allocator_std___List_node_int__* t1001 = __rhs999;
  std__allocator_std___List_node_int_____allocator(&__retval1000, t1001);
  struct std__allocator_std___List_node_int__ t1002 = __retval1000;
  return t1002;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaISt10_List_nodeIiEES2_E17_S_select_on_copyERKS3_
struct std__allocator_std___List_node_int__ __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_select_on_copy(struct std__allocator_std___List_node_int__* v1003) {
bb1004:
  struct std__allocator_std___List_node_int__* __a1005;
  struct std__allocator_std___List_node_int__ __retval1006;
  __a1005 = v1003;
  struct std__allocator_std___List_node_int__* t1007 = __a1005;
  struct std__allocator_std___List_node_int__ r1008 = std__allocator_traits_std__allocator_std___List_node_int_______select_on_container_copy_construction(t1007);
  __retval1006 = r1008;
  struct std__allocator_std___List_node_int__ t1009 = __retval1006;
  return t1009;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v1010) {
bb1011:
  struct std____cxx11___List_base_int__std__allocator_int__* this1012;
  struct std__allocator_std___List_node_int__* __retval1013;
  this1012 = v1010;
  struct std____cxx11___List_base_int__std__allocator_int__* t1014 = this1012;
  struct std__allocator_std___List_node_int__* base1015 = (struct std__allocator_std___List_node_int__*)((char *)&(t1014->_M_impl) + 0);
  __retval1013 = base1015;
  struct std__allocator_std___List_node_int__* t1016 = __retval1013;
  return t1016;
}

// function: _ZSteqRKSt20_List_const_iteratorIiES2_
_Bool std__operator___2(struct std___List_const_iterator_int_* v1017, struct std___List_const_iterator_int_* v1018) {
bb1019:
  struct std___List_const_iterator_int_* __x1020;
  struct std___List_const_iterator_int_* __y1021;
  _Bool __retval1022;
  __x1020 = v1017;
  __y1021 = v1018;
  struct std___List_const_iterator_int_* t1023 = __x1020;
  struct std____detail___List_node_base* t1024 = t1023->_M_node;
  struct std___List_const_iterator_int_* t1025 = __y1021;
  struct std____detail___List_node_base* t1026 = t1025->_M_node;
  _Bool c1027 = ((t1024 == t1026)) ? 1 : 0;
  __retval1022 = c1027;
  _Bool t1028 = __retval1022;
  return t1028;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v1029) {
bb1030:
  struct std____detail___List_node_base* this1031;
  struct std____detail___List_node_base* __retval1032;
  this1031 = v1029;
  struct std____detail___List_node_base* t1033 = this1031;
  __retval1032 = t1033;
  struct std____detail___List_node_base* t1034 = __retval1032;
  return t1034;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v1035) {
bb1036:
  struct std____cxx11__list_int__std__allocator_int__* this1037;
  _Bool __retval1038;
  this1037 = v1035;
  struct std____cxx11__list_int__std__allocator_int__* t1039 = this1037;
  struct std____cxx11___List_base_int__std__allocator_int__* base1040 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1039 + 0);
  struct std____detail___List_node_base* base1041 = (struct std____detail___List_node_base*)((char *)&(base1040->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1042 = base1041->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base1043 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1039 + 0);
  struct std____detail___List_node_base* base1044 = (struct std____detail___List_node_base*)((char *)&(base1043->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1045 = std____detail___List_node_base___M_base___const(base1044);
  _Bool c1046 = ((t1042 == r1045)) ? 1 : 0;
  __retval1038 = c1046;
  _Bool t1047 = __retval1038;
  return t1047;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v1048) {
bb1049:
  struct std___List_iterator_int_* this1050;
  struct std___List_iterator_int_* __retval1051;
  this1050 = v1048;
  struct std___List_iterator_int_* t1052 = this1050;
  struct std____detail___List_node_base* t1053 = t1052->_M_node;
  struct std____detail___List_node_base* t1054 = t1053->_M_prev;
  t1052->_M_node = t1054;
  __retval1051 = t1052;
  struct std___List_iterator_int_* t1055 = __retval1051;
  return t1055;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v1056) {
bb1057:
  struct std____cxx11__list_int__std__allocator_int__* this1058;
  int* __retval1059;
  struct std___List_iterator_int_ __tmp1060;
  this1058 = v1056;
  struct std____cxx11__list_int__std__allocator_int__* t1061 = this1058;
    do {
          _Bool r1062 = std____cxx11__list_int__std__allocator_int_____empty___const(t1061);
          if (r1062) {
            char* cast1063 = (char*)&(_str_6);
            int c1064 = 1674;
            char* cast1065 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast1066 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast1063, c1064, cast1065, cast1066);
          }
      _Bool c1067 = 0;
      if (!c1067) break;
    } while (1);
  struct std___List_iterator_int_ r1068 = std____cxx11__list_int__std__allocator_int_____end(t1061);
  __tmp1060 = r1068;
  struct std___List_iterator_int_* r1069 = std___List_iterator_int___operator__(&__tmp1060);
  int* r1070 = std___List_iterator_int___operator____const(&__tmp1060);
  __retval1059 = r1070;
  int* t1071 = __retval1059;
  return t1071;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRKiEEERiDpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1072, int* v1073) {
bb1074:
  struct std____cxx11__list_int__std__allocator_int__* this1075;
  int* __args1076;
  int* __retval1077;
  struct std___List_iterator_int_ agg_tmp01078;
  this1075 = v1072;
  __args1076 = v1073;
  struct std____cxx11__list_int__std__allocator_int__* t1079 = this1075;
  struct std___List_iterator_int_ r1080 = std____cxx11__list_int__std__allocator_int_____end(t1079);
  agg_tmp01078 = r1080;
  int* t1081 = __args1076;
  struct std___List_iterator_int_ t1082 = agg_tmp01078;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t1079, t1082, t1081);
  int* r1083 = std____cxx11__list_int__std__allocator_int_____back(t1079);
  __retval1077 = r1083;
  int* t1084 = __retval1077;
  return t1084;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v1085) {
bb1086:
  struct __gnu_cxx____aligned_membuf_int_* this1087;
  void* __retval1088;
  this1087 = v1085;
  struct __gnu_cxx____aligned_membuf_int_* t1089 = this1087;
  void* cast1090 = (void*)&(t1089->_M_storage);
  __retval1088 = cast1090;
  void* t1091 = __retval1088;
  return t1091;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v1092) {
bb1093:
  struct __gnu_cxx____aligned_membuf_int_* this1094;
  int* __retval1095;
  this1094 = v1092;
  struct __gnu_cxx____aligned_membuf_int_* t1096 = this1094;
  void* r1097 = __gnu_cxx____aligned_membuf_int____M_addr___const(t1096);
  int* cast1098 = (int*)r1097;
  __retval1095 = cast1098;
  int* t1099 = __retval1095;
  return t1099;
}

// function: _ZNKSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr___const(struct std___List_node_int_* v1100) {
bb1101:
  struct std___List_node_int_* this1102;
  int* __retval1103;
  this1102 = v1100;
  struct std___List_node_int_* t1104 = this1102;
  int* r1105 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t1104->_M_storage);
  __retval1103 = r1105;
  int* t1106 = __retval1103;
  return t1106;
}

// function: _ZNKSt20_List_const_iteratorIiEdeEv
int* std___List_const_iterator_int___operator____const(struct std___List_const_iterator_int_* v1107) {
bb1108:
  struct std___List_const_iterator_int_* this1109;
  int* __retval1110;
  this1109 = v1107;
  struct std___List_const_iterator_int_* t1111 = this1109;
  struct std____detail___List_node_base* t1112 = t1111->_M_node;
  struct std___List_node_int_* derived1113 = ((t1112) ? (struct std___List_node_int_*)((char *)t1112 - 0) : (struct std___List_node_int_*)0);
  int* r1114 = std___List_node_int____M_valptr___const(derived1113);
  __retval1110 = r1114;
  int* t1115 = __retval1110;
  return t1115;
}

// function: _ZNSt20_List_const_iteratorIiEppEv
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* v1116) {
bb1117:
  struct std___List_const_iterator_int_* this1118;
  struct std___List_const_iterator_int_* __retval1119;
  this1118 = v1116;
  struct std___List_const_iterator_int_* t1120 = this1118;
  struct std____detail___List_node_base* t1121 = t1120->_M_node;
  struct std____detail___List_node_base* t1122 = t1121->_M_next;
  t1120->_M_node = t1122;
  __retval1119 = t1120;
  struct std___List_const_iterator_int_* t1123 = __retval1119;
  return t1123;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchISt20_List_const_iteratorIiEEEvT_S6_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_const_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* v1124, struct std___List_const_iterator_int_ v1125, struct std___List_const_iterator_int_ v1126, struct std____false_type v1127) {
bb1128:
  struct std____cxx11__list_int__std__allocator_int__* this1129;
  struct std___List_const_iterator_int_ __first1130;
  struct std___List_const_iterator_int_ __last1131;
  struct std____false_type unnamed1132;
  _Bool __notempty1133;
  this1129 = v1124;
  __first1130 = v1125;
  __last1131 = v1126;
  unnamed1132 = v1127;
  struct std____cxx11__list_int__std__allocator_int__* t1134 = this1129;
  _Bool r1135 = std__operator___2(&__first1130, &__last1131);
  _Bool u1136 = !r1135;
  __notempty1133 = u1136;
    while (1) {
      _Bool r1138 = std__operator___2(&__first1130, &__last1131);
      _Bool u1139 = !r1138;
      if (!u1139) break;
      int* r1140 = std___List_const_iterator_int___operator____const(&__first1130);
      int* r1141 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(t1134, r1140);
    for_step1137: ;
      struct std___List_const_iterator_int_* r1142 = std___List_const_iterator_int___operator__(&__first1130);
    }
    _Bool t1143 = __notempty1133;
    if (t1143) {
        struct std___List_iterator_int_ ref_tmp01144;
        struct std___List_iterator_int_ ref_tmp11145;
        struct std___List_iterator_int_ r1146 = std____cxx11__list_int__std__allocator_int_____begin(t1134);
        ref_tmp01144 = r1146;
        struct std___List_iterator_int_ r1147 = std____cxx11__list_int__std__allocator_int_____end(t1134);
        ref_tmp11145 = r1147;
        _Bool r1148 = std__operator__(&ref_tmp01144, &ref_tmp11145);
        if (r1148) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt20_List_const_iteratorIiEC2EPKNSt8__detail15_List_node_baseE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v1149, struct std____detail___List_node_base* v1150) {
bb1151:
  struct std___List_const_iterator_int_* this1152;
  struct std____detail___List_node_base* __x1153;
  this1152 = v1149;
  __x1153 = v1150;
  struct std___List_const_iterator_int_* t1154 = this1152;
  struct std____detail___List_node_base* t1155 = __x1153;
  t1154->_M_node = t1155;
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5beginEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* v1156) {
bb1157:
  struct std____cxx11__list_int__std__allocator_int__* this1158;
  struct std___List_const_iterator_int_ __retval1159;
  this1158 = v1156;
  struct std____cxx11__list_int__std__allocator_int__* t1160 = this1158;
  struct std____cxx11___List_base_int__std__allocator_int__* base1161 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1160 + 0);
  struct std____detail___List_node_base* base1162 = (struct std____detail___List_node_base*)((char *)&(base1161->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1163 = base1162->_M_next;
  std___List_const_iterator_int____List_const_iterator(&__retval1159, t1163);
  struct std___List_const_iterator_int_ t1164 = __retval1159;
  return t1164;
}

// function: _ZNKSt7__cxx114listIiSaIiEE3endEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* v1165) {
bb1166:
  struct std____cxx11__list_int__std__allocator_int__* this1167;
  struct std___List_const_iterator_int_ __retval1168;
  this1167 = v1165;
  struct std____cxx11__list_int__std__allocator_int__* t1169 = this1167;
  struct std____cxx11___List_base_int__std__allocator_int__* base1170 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1169 + 0);
  struct std____detail___List_node_base* base1171 = (struct std____detail___List_node_base*)((char *)&(base1170->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1172 = std____detail___List_node_base___M_base___const(base1171);
  std___List_const_iterator_int____List_const_iterator(&__retval1168, r1172);
  struct std___List_const_iterator_int_ t1173 = __retval1168;
  return t1173;
}

