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
struct std__bidirectional_iterator_tag { unsigned char __field0; };
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
int __const_main_myints[8] = {15, 36, 7, 17, 20, 39, 4, 1};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "mylist.size() != 5";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_remove_if_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it != 17";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[17] = "mylist contains:";
char _str_4[2] = " ";
char _str_5[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
_Bool single_digit(int* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* p0, struct std__allocator_std___List_node_int__* p1);
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* p0);
_Bool std__operator___3(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
_Bool std__operator__(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
extern void abort();
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
extern void std____detail___List_node_base___M_transfer(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std___List_iterator_int_ p3);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2, struct std___List_const_iterator_int_ p3);
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2, struct std___List_const_iterator_int_ p3);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_* std___List_iterator_int___operator__2(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
unsigned long unsigned_long_std____cxx11__list_int__std__allocator_int_____remove_if_bool_____int_const____bool____(struct std____cxx11__list_int__std__allocator_int__* p0, void* p1);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
void void_std____advance_std___List_iterator_int___long_(struct std___List_iterator_int_* p0, long p1, struct std__bidirectional_iterator_tag p2);
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_iterator_int_____iterator_category_std____iterator_category_std___List_iterator_int___(struct std___List_iterator_int_* p0);
void void_std__advance_std___List_iterator_int___int_(struct std___List_iterator_int_* p0, int p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
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
_Bool std__operator___2(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
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
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std____false_type p3);
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* p0);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0, struct std____new_allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);

// function: _Z12single_digitRKi
_Bool single_digit(int* v0) {
bb1:
  int* value2;
  _Bool __retval3;
  value2 = v0;
  int* t4 = value2;
  int t5 = *t4;
  int c6 = 10;
  _Bool c7 = ((t5 < c6)) ? 1 : 0;
  __retval3 = c7;
  _Bool t8 = __retval3;
  return t8;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v9) {
bb10:
  struct std__allocator_int_* this11;
  this11 = v9;
  struct std__allocator_int_* t12 = this11;
  struct std____new_allocator_int_* base13 = (struct std____new_allocator_int_*)((char *)t12 + 0);
  std____new_allocator_int_____new_allocator(base13);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2IPivEET_S5_RKS1_
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* v14, int* v15, int* v16, struct std__allocator_int_* v17) {
bb18:
  struct std____cxx11__list_int__std__allocator_int__* this19;
  int* __first20;
  int* __last21;
  struct std__allocator_int_* __a22;
  struct std__allocator_std___List_node_int__ ref_tmp023;
  struct std____false_type agg_tmp024;
  this19 = v14;
  __first20 = v15;
  __last21 = v16;
  __a22 = v17;
  struct std____cxx11__list_int__std__allocator_int__* t25 = this19;
  struct std____cxx11___List_base_int__std__allocator_int__* base26 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t25 + 0);
  struct std__allocator_int_* t27 = __a22;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp023, t27);
    std____cxx11___List_base_int__std__allocator_int______List_base(base26, &ref_tmp023);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp023);
  }
    int* t28 = __first20;
    int* t29 = __last21;
    struct std____false_type t30 = agg_tmp024;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(t25, t28, t29, t30);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v31) {
bb32:
  struct std__allocator_int_* this33;
  this33 = v31;
  struct std__allocator_int_* t34 = this33;
  return;
}

// function: _ZNSt14_List_iteratorIiEC2Ev
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* v35) {
bb36:
  struct std___List_iterator_int_* this37;
  this37 = v35;
  struct std___List_iterator_int_* t38 = this37;
  struct std____detail___List_node_base* c39 = ((void*)0);
  t38->_M_node = c39;
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v40) {
bb41:
  struct std____cxx11___List_base_int__std__allocator_int__* this42;
  struct std__allocator_std___List_node_int__* __retval43;
  this42 = v40;
  struct std____cxx11___List_base_int__std__allocator_int__* t44 = this42;
  struct std__allocator_std___List_node_int__* base45 = (struct std__allocator_std___List_node_int__*)((char *)&(t44->_M_impl) + 0);
  __retval43 = base45;
  struct std__allocator_std___List_node_int__* t46 = __retval43;
  return t46;
}

// function: _ZNSaIiEC2ISt10_List_nodeIiEEERKSaIT_E
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* v47, struct std__allocator_std___List_node_int__* v48) {
bb49:
  struct std__allocator_int_* this50;
  struct std__allocator_std___List_node_int__* unnamed51;
  this50 = v47;
  unnamed51 = v48;
  struct std__allocator_int_* t52 = this50;
  struct std____new_allocator_int_* base53 = (struct std____new_allocator_int_*)((char *)t52 + 0);
  std____new_allocator_int_____new_allocator(base53);
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE13get_allocatorEv
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* v54) {
bb55:
  struct std____cxx11__list_int__std__allocator_int__* this56;
  struct std__allocator_int_ __retval57;
  this56 = v54;
  struct std____cxx11__list_int__std__allocator_int__* t58 = this56;
  struct std____cxx11___List_base_int__std__allocator_int__* base59 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t58 + 0);
  struct std__allocator_std___List_node_int__* r60 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base59);
  std__allocator_int___allocator_std___List_node_int___(&__retval57, r60);
  struct std__allocator_int_ t61 = __retval57;
  return t61;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2ERKS1_
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v62, struct std__allocator_int_* v63) {
bb64:
  struct std____cxx11__list_int__std__allocator_int__* this65;
  struct std__allocator_int_* __a66;
  struct std__allocator_std___List_node_int__ ref_tmp067;
  this65 = v62;
  __a66 = v63;
  struct std____cxx11__list_int__std__allocator_int__* t68 = this65;
  struct std____cxx11___List_base_int__std__allocator_int__* base69 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t68 + 0);
  struct std__allocator_int_* t70 = __a66;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp067, t70);
    std____cxx11___List_base_int__std__allocator_int______List_base(base69, &ref_tmp067);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp067);
  }
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v71, struct std____detail___List_node_base* v72) {
bb73:
  struct std___List_iterator_int_* this74;
  struct std____detail___List_node_base* __x75;
  this74 = v71;
  __x75 = v72;
  struct std___List_iterator_int_* t76 = this74;
  struct std____detail___List_node_base* t77 = __x75;
  t76->_M_node = t77;
  return;
}

// function: _ZNKSt20_List_const_iteratorIiE13_M_const_castEv
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* v78) {
bb79:
  struct std___List_const_iterator_int_* this80;
  struct std___List_iterator_int_ __retval81;
  this80 = v78;
  struct std___List_const_iterator_int_* t82 = this80;
  struct std____detail___List_node_base* t83 = t82->_M_node;
  std___List_iterator_int____List_iterator(&__retval81, t83);
  struct std___List_iterator_int_ t84 = __retval81;
  return t84;
}

// function: _ZSteqRKSt20_List_const_iteratorIiES2_
_Bool std__operator___3(struct std___List_const_iterator_int_* v85, struct std___List_const_iterator_int_* v86) {
bb87:
  struct std___List_const_iterator_int_* __x88;
  struct std___List_const_iterator_int_* __y89;
  _Bool __retval90;
  __x88 = v85;
  __y89 = v86;
  struct std___List_const_iterator_int_* t91 = __x88;
  struct std____detail___List_node_base* t92 = t91->_M_node;
  struct std___List_const_iterator_int_* t93 = __y89;
  struct std____detail___List_node_base* t94 = t93->_M_node;
  _Bool c95 = ((t92 == t94)) ? 1 : 0;
  __retval90 = c95;
  _Bool t96 = __retval90;
  return t96;
}

// function: _ZSteqRKSaISt10_List_nodeIiEES3_
_Bool std__operator__(struct std__allocator_std___List_node_int__* v97, struct std__allocator_std___List_node_int__* v98) {
bb99:
  struct std__allocator_std___List_node_int__* unnamed100;
  struct std__allocator_std___List_node_int__* unnamed101;
  _Bool __retval102;
  unnamed100 = v97;
  unnamed101 = v98;
  _Bool c103 = 1;
  __retval102 = c103;
  _Bool t104 = __retval102;
  return t104;
}

// function: _ZNSt7__cxx114listIiSaIiEE25_M_check_equal_allocatorsERKS2_
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* v105, struct std____cxx11__list_int__std__allocator_int__* v106) {
bb107:
  struct std____cxx11__list_int__std__allocator_int__* this108;
  struct std____cxx11__list_int__std__allocator_int__* __x109;
  this108 = v105;
  __x109 = v106;
  struct std____cxx11__list_int__std__allocator_int__* t110 = this108;
    struct std____cxx11___List_base_int__std__allocator_int__* base111 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t110 + 0);
    struct std__allocator_std___List_node_int__* r112 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base111);
    struct std____cxx11__list_int__std__allocator_int__* t113 = __x109;
    struct std____cxx11___List_base_int__std__allocator_int__* base114 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t113 + 0);
    struct std__allocator_std___List_node_int__* r115 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base114);
    _Bool r116 = std__operator__(r112, r115);
    _Bool u117 = !r116;
    if (u117) {
      abort();
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE11_M_transferESt14_List_iteratorIiES4_S4_
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* v118, struct std___List_iterator_int_ v119, struct std___List_iterator_int_ v120, struct std___List_iterator_int_ v121) {
bb122:
  struct std____cxx11__list_int__std__allocator_int__* this123;
  struct std___List_iterator_int_ __position124;
  struct std___List_iterator_int_ __first125;
  struct std___List_iterator_int_ __last126;
  this123 = v118;
  __position124 = v119;
  __first125 = v120;
  __last126 = v121;
  struct std____cxx11__list_int__std__allocator_int__* t127 = this123;
  struct std____detail___List_node_base* t128 = __position124._M_node;
  struct std____detail___List_node_base* t129 = __first125._M_node;
  struct std____detail___List_node_base* t130 = __last126._M_node;
  std____detail___List_node_base___M_transfer(t128, t129, t130);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v131, unsigned long v132) {
bb133:
  struct std____cxx11___List_base_int__std__allocator_int__* this134;
  unsigned long __n135;
  this134 = v131;
  __n135 = v132;
  struct std____cxx11___List_base_int__std__allocator_int__* t136 = this134;
  unsigned long t137 = __n135;
  struct std____detail___List_size* base138 = (struct std____detail___List_size*)((char *)&(t136->_M_impl._M_node) + 16);
  unsigned long t139 = base138->_M_size;
  unsigned long b140 = t139 - t137;
  base138->_M_size = b140;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_S4_
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* v141, struct std___List_const_iterator_int_ v142, struct std____cxx11__list_int__std__allocator_int__* v143, struct std___List_const_iterator_int_ v144) {
bb145:
  struct std____cxx11__list_int__std__allocator_int__* this146;
  struct std___List_const_iterator_int_ __position147;
  struct std____cxx11__list_int__std__allocator_int__* __x148;
  struct std___List_const_iterator_int_ __i149;
  struct std___List_iterator_int_ __j150;
  struct std___List_iterator_int_ agg_tmp0151;
  struct std___List_iterator_int_ agg_tmp1152;
  struct std___List_iterator_int_ agg_tmp2153;
  this146 = v141;
  __position147 = v142;
  __x148 = v143;
  __i149 = v144;
  struct std____cxx11__list_int__std__allocator_int__* t154 = this146;
  struct std___List_iterator_int_ r155 = std___List_const_iterator_int____M_const_cast___const(&__i149);
  __j150 = r155;
  struct std___List_iterator_int_* r156 = std___List_iterator_int___operator___2(&__j150);
    _Bool r157 = std__operator___3(&__position147, &__i149);
    _Bool ternary158;
    if (r157) {
      _Bool c159 = 1;
      ternary158 = (_Bool)c159;
    } else {
      struct std___List_const_iterator_int_ ref_tmp0160;
      std___List_const_iterator_int____List_const_iterator(&ref_tmp0160, &__j150);
      _Bool r161 = std__operator___3(&__position147, &ref_tmp0160);
      ternary158 = (_Bool)r161;
    }
    if (ternary158) {
      return;
    }
    struct std____cxx11__list_int__std__allocator_int__* t162 = __x148;
    _Bool c163 = ((t154 != t162)) ? 1 : 0;
    if (c163) {
      struct std____cxx11__list_int__std__allocator_int__* t164 = __x148;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t154, t164);
    }
  struct std___List_iterator_int_ r165 = std___List_const_iterator_int____M_const_cast___const(&__position147);
  agg_tmp0151 = r165;
  struct std___List_iterator_int_ r166 = std___List_const_iterator_int____M_const_cast___const(&__i149);
  agg_tmp1152 = r166;
  agg_tmp2153 = __j150; // copy
  struct std___List_iterator_int_ t167 = agg_tmp0151;
  struct std___List_iterator_int_ t168 = agg_tmp1152;
  struct std___List_iterator_int_ t169 = agg_tmp2153;
  std____cxx11__list_int__std__allocator_int______M_transfer(t154, t167, t168, t169);
  struct std____cxx11___List_base_int__std__allocator_int__* base170 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t154 + 0);
  unsigned long c171 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base170, c171);
  struct std____cxx11__list_int__std__allocator_int__* t172 = __x148;
  struct std____cxx11___List_base_int__std__allocator_int__* base173 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t172 + 0);
  unsigned long c174 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base173, c174);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_S4_
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* v175, struct std___List_const_iterator_int_ v176, struct std____cxx11__list_int__std__allocator_int__* v177, struct std___List_const_iterator_int_ v178) {
bb179:
  struct std____cxx11__list_int__std__allocator_int__* this180;
  struct std___List_const_iterator_int_ __position181;
  struct std____cxx11__list_int__std__allocator_int__* __x182;
  struct std___List_const_iterator_int_ __i183;
  struct std___List_const_iterator_int_ agg_tmp0184;
  struct std___List_const_iterator_int_ agg_tmp1185;
  this180 = v175;
  __position181 = v176;
  __x182 = v177;
  __i183 = v178;
  struct std____cxx11__list_int__std__allocator_int__* t186 = this180;
  agg_tmp0184 = __position181; // copy
  struct std____cxx11__list_int__std__allocator_int__* t187 = __x182;
  agg_tmp1185 = __i183; // copy
  struct std___List_const_iterator_int_ t188 = agg_tmp0184;
  struct std___List_const_iterator_int_ t189 = agg_tmp1185;
  std____cxx11__list_int__std__allocator_int_____splice(t186, t188, t187, t189);
  return;
}

// function: _ZNSt20_List_const_iteratorIiEC2ERKSt14_List_iteratorIiE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v190, struct std___List_iterator_int_* v191) {
bb192:
  struct std___List_const_iterator_int_* this193;
  struct std___List_iterator_int_* __x194;
  this193 = v190;
  __x194 = v191;
  struct std___List_const_iterator_int_* t195 = this193;
  struct std___List_iterator_int_* t196 = __x194;
  struct std____detail___List_node_base* t197 = t196->_M_node;
  t195->_M_node = t197;
  return;
}

// function: _ZNSt14_List_iteratorIiEaSERKS0_
struct std___List_iterator_int_* std___List_iterator_int___operator__2(struct std___List_iterator_int_* v198, struct std___List_iterator_int_* v199) {
bb200:
  struct std___List_iterator_int_* this201;
  struct std___List_iterator_int_* unnamed202;
  struct std___List_iterator_int_* __retval203;
  this201 = v198;
  unnamed202 = v199;
  struct std___List_iterator_int_* t204 = this201;
  struct std___List_iterator_int_* t205 = unnamed202;
  struct std____detail___List_node_base* t206 = t205->_M_node;
  t204->_M_node = t206;
  __retval203 = t204;
  struct std___List_iterator_int_* t207 = __retval203;
  return t207;
}

// function: _ZNSt7__cxx114listIiSaIiEE9remove_ifIPFbRKiEEEmT_
unsigned long unsigned_long_std____cxx11__list_int__std__allocator_int_____remove_if_bool_____int_const____bool____(struct std____cxx11__list_int__std__allocator_int__* v208, void* v209) {
bb210:
  struct std____cxx11__list_int__std__allocator_int__* this211;
  void* __pred212;
  unsigned long __retval213;
  struct std____cxx11__list_int__std__allocator_int__ __to_destroy214;
  struct std__allocator_int_ ref_tmp0215;
  struct std___List_iterator_int_ __first216;
  struct std___List_iterator_int_ __last217;
  this211 = v208;
  __pred212 = v209;
  struct std____cxx11__list_int__std__allocator_int__* t218 = this211;
  struct std__allocator_int_ r219 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t218);
  ref_tmp0215 = r219;
    std____cxx11__list_int__std__allocator_int_____list(&__to_destroy214, &ref_tmp0215);
  {
    std__allocator_int____allocator(&ref_tmp0215);
  }
    struct std___List_iterator_int_ r220 = std____cxx11__list_int__std__allocator_int_____begin(t218);
    __first216 = r220;
    struct std___List_iterator_int_ r221 = std____cxx11__list_int__std__allocator_int_____end(t218);
    __last217 = r221;
      while (1) {
        _Bool r222 = std__operator___2(&__first216, &__last217);
        _Bool u223 = !r222;
        if (!u223) break;
          struct std___List_iterator_int_ __next224;
          __next224 = __first216; // copy
          struct std___List_iterator_int_* r225 = std___List_iterator_int___operator___2(&__next224);
            void* t226 = __pred212;
            int* r227 = std___List_iterator_int___operator____const(&__first216);
            _Bool r228 = ((_Bool (*)(int*))t226)(r227);
            if (r228) {
              struct std___List_const_iterator_int_ agg_tmp0229;
              struct std___List_iterator_int_ ref_tmp1230;
              struct std___List_const_iterator_int_ agg_tmp1231;
              struct std___List_iterator_int_ r232 = std____cxx11__list_int__std__allocator_int_____begin(&__to_destroy214);
              ref_tmp1230 = r232;
              std___List_const_iterator_int____List_const_iterator(&agg_tmp0229, &ref_tmp1230);
              std___List_const_iterator_int____List_const_iterator(&agg_tmp1231, &__first216);
              struct std___List_const_iterator_int_ t233 = agg_tmp0229;
              struct std___List_const_iterator_int_ t234 = agg_tmp1231;
              std____cxx11__list_int__std__allocator_int_____splice_2(&__to_destroy214, t233, t218, t234);
            }
          struct std___List_iterator_int_* r235 = std___List_iterator_int___operator__2(&__first216, &__next224);
      }
    unsigned long r236 = std____cxx11__list_int__std__allocator_int_____size___const(&__to_destroy214);
    __retval213 = r236;
    unsigned long t237 = __retval213;
    unsigned long ret_val238 = t237;
    {
      std____cxx11__list_int__std__allocator_int______list(&__to_destroy214);
    }
    return ret_val238;
  abort();
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v239) {
bb240:
  struct std____cxx11___List_base_int__std__allocator_int__* this241;
  unsigned long __retval242;
  this241 = v239;
  struct std____cxx11___List_base_int__std__allocator_int__* t243 = this241;
  struct std____detail___List_size* base244 = (struct std____detail___List_size*)((char *)&(t243->_M_impl._M_node) + 16);
  unsigned long t245 = base244->_M_size;
  __retval242 = t245;
  unsigned long t246 = __retval242;
  return t246;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v247) {
bb248:
  struct std____cxx11__list_int__std__allocator_int__* this249;
  unsigned long __retval250;
  this249 = v247;
  struct std____cxx11__list_int__std__allocator_int__* t251 = this249;
  struct std____cxx11___List_base_int__std__allocator_int__* base252 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t251 + 0);
  unsigned long r253 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base252);
  __retval250 = r253;
  unsigned long t254 = __retval250;
  return t254;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v255) {
bb256:
  struct std____cxx11__list_int__std__allocator_int__* this257;
  struct std___List_iterator_int_ __retval258;
  this257 = v255;
  struct std____cxx11__list_int__std__allocator_int__* t259 = this257;
  struct std____cxx11___List_base_int__std__allocator_int__* base260 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t259 + 0);
  struct std____detail___List_node_base* base261 = (struct std____detail___List_node_base*)((char *)&(base260->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t262 = base261->_M_next;
  std___List_iterator_int____List_iterator(&__retval258, t262);
  struct std___List_iterator_int_ t263 = __retval258;
  return t263;
}

// function: _ZNSt14_List_iteratorIiEaSEOS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v264, struct std___List_iterator_int_* v265) {
bb266:
  struct std___List_iterator_int_* this267;
  struct std___List_iterator_int_* unnamed268;
  struct std___List_iterator_int_* __retval269;
  this267 = v264;
  unnamed268 = v265;
  struct std___List_iterator_int_* t270 = this267;
  struct std___List_iterator_int_* t271 = unnamed268;
  struct std____detail___List_node_base* t272 = t271->_M_node;
  t270->_M_node = t272;
  __retval269 = t270;
  struct std___List_iterator_int_* t273 = __retval269;
  return t273;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v274) {
bb275:
  struct std___List_iterator_int_* this276;
  struct std___List_iterator_int_* __retval277;
  this276 = v274;
  struct std___List_iterator_int_* t278 = this276;
  struct std____detail___List_node_base* t279 = t278->_M_node;
  struct std____detail___List_node_base* t280 = t279->_M_prev;
  t278->_M_node = t280;
  __retval277 = t278;
  struct std___List_iterator_int_* t281 = __retval277;
  return t281;
}

// function: _ZSt9__advanceISt14_List_iteratorIiElEvRT_T0_St26bidirectional_iterator_tag
void void_std____advance_std___List_iterator_int___long_(struct std___List_iterator_int_* v282, long v283, struct std__bidirectional_iterator_tag v284) {
bb285:
  struct std___List_iterator_int_* __i286;
  long __n287;
  struct std__bidirectional_iterator_tag unnamed288;
  __i286 = v282;
  __n287 = v283;
  unnamed288 = v284;
    long t289 = __n287;
    long c290 = 0;
    _Bool c291 = ((t289 > c290)) ? 1 : 0;
    if (c291) {
        while (1) {
          long t292 = __n287;
          long u293 = t292 - 1;
          __n287 = u293;
          _Bool cast294 = (_Bool)t292;
          if (!cast294) break;
          struct std___List_iterator_int_* t295 = __i286;
          struct std___List_iterator_int_* r296 = std___List_iterator_int___operator___2(t295);
        }
    } else {
        while (1) {
          long t297 = __n287;
          long u298 = t297 + 1;
          __n287 = u298;
          _Bool cast299 = (_Bool)t297;
          if (!cast299) break;
          struct std___List_iterator_int_* t300 = __i286;
          struct std___List_iterator_int_* r301 = std___List_iterator_int___operator__(t300);
        }
    }
  return;
}

// function: _ZSt19__iterator_categoryISt14_List_iteratorIiEENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_iterator_int_____iterator_category_std____iterator_category_std___List_iterator_int___(struct std___List_iterator_int_* v302) {
bb303:
  struct std___List_iterator_int_* unnamed304;
  struct std__bidirectional_iterator_tag __retval305;
  unnamed304 = v302;
  struct std__bidirectional_iterator_tag t306 = __retval305;
  return t306;
}

// function: _ZSt7advanceISt14_List_iteratorIiEiEvRT_T0_
void void_std__advance_std___List_iterator_int___int_(struct std___List_iterator_int_* v307, int v308) {
bb309:
  struct std___List_iterator_int_* __i310;
  int __n311;
  long __d312;
  struct std__bidirectional_iterator_tag agg_tmp0313;
  __i310 = v307;
  __n311 = v308;
  int t314 = __n311;
  long cast315 = (long)t314;
  __d312 = cast315;
  struct std___List_iterator_int_* t316 = __i310;
  long t317 = __d312;
  struct std___List_iterator_int_* t318 = __i310;
  struct std__bidirectional_iterator_tag r319 = std__iterator_traits_std___List_iterator_int_____iterator_category_std____iterator_category_std___List_iterator_int___(t318);
  agg_tmp0313 = r319;
  struct std__bidirectional_iterator_tag t320 = agg_tmp0313;
  void_std____advance_std___List_iterator_int___long_(t316, t317, t320);
  return;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v321) {
bb322:
  struct std___List_iterator_int_* this323;
  int* __retval324;
  this323 = v321;
  struct std___List_iterator_int_* t325 = this323;
  struct std____detail___List_node_base* t326 = t325->_M_node;
  struct std___List_node_int_* derived327 = ((t326) ? (struct std___List_node_int_*)((char *)t326 - 0) : (struct std___List_node_int_*)0);
  int* r328 = std___List_node_int____M_valptr(derived327);
  __retval324 = r328;
  int* t329 = __retval324;
  return t329;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v330, int v331) {
bb332:
  int __a333;
  int __b334;
  int __retval335;
  __a333 = v330;
  __b334 = v331;
  int t336 = __a333;
  int t337 = __b334;
  int b338 = t336 | t337;
  __retval335 = b338;
  int t339 = __retval335;
  return t339;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v340) {
bb341:
  struct std__basic_ios_char__std__char_traits_char__* this342;
  int __retval343;
  this342 = v340;
  struct std__basic_ios_char__std__char_traits_char__* t344 = this342;
  struct std__ios_base* base345 = (struct std__ios_base*)((char *)t344 + 0);
  int t346 = base345->_M_streambuf_state;
  __retval343 = t346;
  int t347 = __retval343;
  return t347;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v348, int v349) {
bb350:
  struct std__basic_ios_char__std__char_traits_char__* this351;
  int __state352;
  this351 = v348;
  __state352 = v349;
  struct std__basic_ios_char__std__char_traits_char__* t353 = this351;
  int r354 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t353);
  int t355 = __state352;
  int r356 = std__operator_(r354, t355);
  std__basic_ios_char__std__char_traits_char_____clear(t353, r356);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v357, char* v358) {
bb359:
  char* __c1360;
  char* __c2361;
  _Bool __retval362;
  __c1360 = v357;
  __c2361 = v358;
  char* t363 = __c1360;
  char t364 = *t363;
  int cast365 = (int)t364;
  char* t366 = __c2361;
  char t367 = *t366;
  int cast368 = (int)t367;
  _Bool c369 = ((cast365 == cast368)) ? 1 : 0;
  __retval362 = c369;
  _Bool t370 = __retval362;
  return t370;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v371) {
bb372:
  char* __p373;
  unsigned long __retval374;
  unsigned long __i375;
  __p373 = v371;
  unsigned long c376 = 0;
  __i375 = c376;
    char ref_tmp0377;
    while (1) {
      unsigned long t378 = __i375;
      char* t379 = __p373;
      char* ptr380 = &(t379)[t378];
      char c381 = 0;
      ref_tmp0377 = c381;
      _Bool r382 = __gnu_cxx__char_traits_char___eq(ptr380, &ref_tmp0377);
      _Bool u383 = !r382;
      if (!u383) break;
      unsigned long t384 = __i375;
      unsigned long u385 = t384 + 1;
      __i375 = u385;
    }
  unsigned long t386 = __i375;
  __retval374 = t386;
  unsigned long t387 = __retval374;
  return t387;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v388) {
bb389:
  char* __s390;
  unsigned long __retval391;
  __s390 = v388;
    _Bool r392 = std____is_constant_evaluated();
    if (r392) {
      char* t393 = __s390;
      unsigned long r394 = __gnu_cxx__char_traits_char___length(t393);
      __retval391 = r394;
      unsigned long t395 = __retval391;
      return t395;
    }
  char* t396 = __s390;
  unsigned long r397 = strlen(t396);
  __retval391 = r397;
  unsigned long t398 = __retval391;
  return t398;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v399, char* v400) {
bb401:
  struct std__basic_ostream_char__std__char_traits_char__* __out402;
  char* __s403;
  struct std__basic_ostream_char__std__char_traits_char__* __retval404;
  __out402 = v399;
  __s403 = v400;
    char* t405 = __s403;
    _Bool cast406 = (_Bool)t405;
    _Bool u407 = !cast406;
    if (u407) {
      struct std__basic_ostream_char__std__char_traits_char__* t408 = __out402;
      void** v409 = (void**)t408;
      void* v410 = *((void**)v409);
      unsigned char* cast411 = (unsigned char*)v410;
      long c412 = -24;
      unsigned char* ptr413 = &(cast411)[c412];
      long* cast414 = (long*)ptr413;
      long t415 = *cast414;
      unsigned char* cast416 = (unsigned char*)t408;
      unsigned char* ptr417 = &(cast416)[t415];
      struct std__basic_ostream_char__std__char_traits_char__* cast418 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr417;
      struct std__basic_ios_char__std__char_traits_char__* cast419 = (struct std__basic_ios_char__std__char_traits_char__*)cast418;
      int t420 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast419, t420);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t421 = __out402;
      char* t422 = __s403;
      char* t423 = __s403;
      unsigned long r424 = std__char_traits_char___length(t423);
      long cast425 = (long)r424;
      struct std__basic_ostream_char__std__char_traits_char__* r426 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t421, t422, cast425);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t427 = __out402;
  __retval404 = t427;
  struct std__basic_ostream_char__std__char_traits_char__* t428 = __retval404;
  return t428;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator___2(struct std___List_iterator_int_* v429, struct std___List_iterator_int_* v430) {
bb431:
  struct std___List_iterator_int_* __x432;
  struct std___List_iterator_int_* __y433;
  _Bool __retval434;
  __x432 = v429;
  __y433 = v430;
  struct std___List_iterator_int_* t435 = __x432;
  struct std____detail___List_node_base* t436 = t435->_M_node;
  struct std___List_iterator_int_* t437 = __y433;
  struct std____detail___List_node_base* t438 = t437->_M_node;
  _Bool c439 = ((t436 == t438)) ? 1 : 0;
  __retval434 = c439;
  _Bool t440 = __retval434;
  return t440;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v441) {
bb442:
  struct std____cxx11__list_int__std__allocator_int__* this443;
  struct std___List_iterator_int_ __retval444;
  this443 = v441;
  struct std____cxx11__list_int__std__allocator_int__* t445 = this443;
  struct std____cxx11___List_base_int__std__allocator_int__* base446 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t445 + 0);
  struct std____detail___List_node_base* r447 = std____detail___List_node_header___M_base(&base446->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval444, r447);
  struct std___List_iterator_int_ t448 = __retval444;
  return t448;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v449) {
bb450:
  struct std___List_iterator_int_* this451;
  struct std___List_iterator_int_* __retval452;
  this451 = v449;
  struct std___List_iterator_int_* t453 = this451;
  struct std____detail___List_node_base* t454 = t453->_M_node;
  struct std____detail___List_node_base* t455 = t454->_M_next;
  t453->_M_node = t455;
  __retval452 = t453;
  struct std___List_iterator_int_* t456 = __retval452;
  return t456;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v457, void* v458) {
bb459:
  struct std__basic_ostream_char__std__char_traits_char__* this460;
  void* __pf461;
  struct std__basic_ostream_char__std__char_traits_char__* __retval462;
  this460 = v457;
  __pf461 = v458;
  struct std__basic_ostream_char__std__char_traits_char__* t463 = this460;
  void* t464 = __pf461;
  struct std__basic_ostream_char__std__char_traits_char__* r465 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t464)(t463);
  __retval462 = r465;
  struct std__basic_ostream_char__std__char_traits_char__* t466 = __retval462;
  return t466;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v467) {
bb468:
  struct std__basic_ostream_char__std__char_traits_char__* __os469;
  struct std__basic_ostream_char__std__char_traits_char__* __retval470;
  __os469 = v467;
  struct std__basic_ostream_char__std__char_traits_char__* t471 = __os469;
  struct std__basic_ostream_char__std__char_traits_char__* r472 = std__ostream__flush(t471);
  __retval470 = r472;
  struct std__basic_ostream_char__std__char_traits_char__* t473 = __retval470;
  return t473;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v474) {
bb475:
  struct std__ctype_char_* __f476;
  struct std__ctype_char_* __retval477;
  __f476 = v474;
    struct std__ctype_char_* t478 = __f476;
    _Bool cast479 = (_Bool)t478;
    _Bool u480 = !cast479;
    if (u480) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t481 = __f476;
  __retval477 = t481;
  struct std__ctype_char_* t482 = __retval477;
  return t482;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v483, char v484) {
bb485:
  struct std__ctype_char_* this486;
  char __c487;
  char __retval488;
  this486 = v483;
  __c487 = v484;
  struct std__ctype_char_* t489 = this486;
    char t490 = t489->_M_widen_ok;
    _Bool cast491 = (_Bool)t490;
    if (cast491) {
      char t492 = __c487;
      unsigned char cast493 = (unsigned char)t492;
      unsigned long cast494 = (unsigned long)cast493;
      char t495 = t489->_M_widen[cast494];
      __retval488 = t495;
      char t496 = __retval488;
      return t496;
    }
  std__ctype_char____M_widen_init___const(t489);
  char t497 = __c487;
  void** v498 = (void**)t489;
  void* v499 = *((void**)v498);
  char vcall502 = (char)__VERIFIER_virtual_call_char_char(t489, 6, t497);
  __retval488 = vcall502;
  char t503 = __retval488;
  return t503;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v504, char v505) {
bb506:
  struct std__basic_ios_char__std__char_traits_char__* this507;
  char __c508;
  char __retval509;
  this507 = v504;
  __c508 = v505;
  struct std__basic_ios_char__std__char_traits_char__* t510 = this507;
  struct std__ctype_char_* t511 = t510->_M_ctype;
  struct std__ctype_char_* r512 = std__ctype_char__const__std____check_facet_std__ctype_char___(t511);
  char t513 = __c508;
  char r514 = std__ctype_char___widen_char__const(r512, t513);
  __retval509 = r514;
  char t515 = __retval509;
  return t515;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v516) {
bb517:
  struct std__basic_ostream_char__std__char_traits_char__* __os518;
  struct std__basic_ostream_char__std__char_traits_char__* __retval519;
  __os518 = v516;
  struct std__basic_ostream_char__std__char_traits_char__* t520 = __os518;
  struct std__basic_ostream_char__std__char_traits_char__* t521 = __os518;
  void** v522 = (void**)t521;
  void* v523 = *((void**)v522);
  unsigned char* cast524 = (unsigned char*)v523;
  long c525 = -24;
  unsigned char* ptr526 = &(cast524)[c525];
  long* cast527 = (long*)ptr526;
  long t528 = *cast527;
  unsigned char* cast529 = (unsigned char*)t521;
  unsigned char* ptr530 = &(cast529)[t528];
  struct std__basic_ostream_char__std__char_traits_char__* cast531 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr530;
  struct std__basic_ios_char__std__char_traits_char__* cast532 = (struct std__basic_ios_char__std__char_traits_char__*)cast531;
  char c533 = 10;
  char r534 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast532, c533);
  struct std__basic_ostream_char__std__char_traits_char__* r535 = std__ostream__put(t520, r534);
  struct std__basic_ostream_char__std__char_traits_char__* r536 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r535);
  __retval519 = r536;
  struct std__basic_ostream_char__std__char_traits_char__* t537 = __retval519;
  return t537;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v538) {
bb539:
  struct std____cxx11__list_int__std__allocator_int__* this540;
  this540 = v538;
  struct std____cxx11__list_int__std__allocator_int__* t541 = this540;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base542 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t541 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base542);
  }
  return;
}

// function: main
int main() {
bb543:
  int __retval544;
  int myints545[8];
  struct std____cxx11__list_int__std__allocator_int__ mylist546;
  struct std__allocator_int_ ref_tmp0547;
  struct std___List_iterator_int_ it548;
  struct std___List_iterator_int_ ref_tmp1549;
  int c550 = 0;
  __retval544 = c550;
  // array copy
  __builtin_memcpy(myints545, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  int* cast551 = (int*)&(myints545);
  int* cast552 = (int*)&(myints545);
  int c553 = 8;
  int* ptr554 = &(cast552)[c553];
  std__allocator_int___allocator(&ref_tmp0547);
    std____cxx11__list_int__std__allocator_int_____list_int___void_(&mylist546, cast551, ptr554, &ref_tmp0547);
  {
    std__allocator_int____allocator(&ref_tmp0547);
  }
    std___List_iterator_int____List_iterator_2(&it548);
    unsigned long r555 = unsigned_long_std____cxx11__list_int__std__allocator_int_____remove_if_bool_____int_const____bool____(&mylist546, &single_digit);
    unsigned long r556 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist546);
    unsigned long c557 = 5;
    _Bool c558 = ((r556 != c557)) ? 1 : 0;
    if (c558) {
    } else {
      char* cast559 = (char*)&(_str);
      char* c560 = _str_1;
      unsigned int c561 = 31;
      char* cast562 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast559, c560, c561, cast562);
    }
    struct std___List_iterator_int_ r563 = std____cxx11__list_int__std__allocator_int_____begin(&mylist546);
    ref_tmp1549 = r563;
    struct std___List_iterator_int_* r564 = std___List_iterator_int___operator_(&it548, &ref_tmp1549);
    int c565 = 2;
    void_std__advance_std___List_iterator_int___int_(&it548, c565);
    int* r566 = std___List_iterator_int___operator____const(&it548);
    int t567 = *r566;
    int c568 = 17;
    _Bool c569 = ((t567 != c568)) ? 1 : 0;
    if (c569) {
    } else {
      char* cast570 = (char*)&(_str_2);
      char* c571 = _str_1;
      unsigned int c572 = 34;
      char* cast573 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast570, c571, c572, cast573);
    }
    char* cast574 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r575 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast574);
      struct std___List_iterator_int_ it576;
      struct std___List_iterator_int_ ref_tmp2577;
      struct std___List_iterator_int_ r578 = std____cxx11__list_int__std__allocator_int_____begin(&mylist546);
      it576 = r578;
      while (1) {
        struct std___List_iterator_int_ r580 = std____cxx11__list_int__std__allocator_int_____end(&mylist546);
        ref_tmp2577 = r580;
        _Bool r581 = std__operator___2(&it576, &ref_tmp2577);
        _Bool u582 = !r581;
        if (!u582) break;
        char* cast583 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r584 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast583);
        int* r585 = std___List_iterator_int___operator____const(&it576);
        int t586 = *r585;
        struct std__basic_ostream_char__std__char_traits_char__* r587 = std__ostream__operator__(r584, t586);
      for_step579: ;
        struct std___List_iterator_int_* r588 = std___List_iterator_int___operator___2(&it576);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r589 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c590 = 0;
    __retval544 = c590;
    int t591 = __retval544;
    int ret_val592 = t591;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist546);
    }
    return ret_val592;
  int t593 = __retval544;
  return t593;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v594) {
bb595:
  struct std____new_allocator_int_* this596;
  this596 = v594;
  struct std____new_allocator_int_* t597 = this596;
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v598) {
bb599:
  struct std____detail___List_node_header* this600;
  struct std____detail___List_node_base* __retval601;
  this600 = v598;
  struct std____detail___List_node_header* t602 = this600;
  struct std____detail___List_node_base* base603 = (struct std____detail___List_node_base*)((char *)t602 + 0);
  __retval601 = base603;
  struct std____detail___List_node_base* t604 = __retval601;
  return t604;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v605) {
bb606:
  int* __location607;
  __location607 = v605;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v608, int* v609) {
bb610:
  struct std__allocator_std___List_node_int__* __a611;
  int* __p612;
  __a611 = v608;
  __p612 = v609;
  int* t613 = __p612;
  void_std__destroy_at_int_(t613);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v614) {
bb615:
  struct __gnu_cxx____aligned_membuf_int_* this616;
  void* __retval617;
  this616 = v614;
  struct __gnu_cxx____aligned_membuf_int_* t618 = this616;
  void* cast619 = (void*)&(t618->_M_storage);
  __retval617 = cast619;
  void* t620 = __retval617;
  return t620;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v621) {
bb622:
  struct __gnu_cxx____aligned_membuf_int_* this623;
  int* __retval624;
  this623 = v621;
  struct __gnu_cxx____aligned_membuf_int_* t625 = this623;
  void* r626 = __gnu_cxx____aligned_membuf_int____M_addr(t625);
  int* cast627 = (int*)r626;
  __retval624 = cast627;
  int* t628 = __retval624;
  return t628;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v629) {
bb630:
  struct std___List_node_int_* this631;
  int* __retval632;
  this631 = v629;
  struct std___List_node_int_* t633 = this631;
  int* r634 = __gnu_cxx____aligned_membuf_int____M_ptr(&t633->_M_storage);
  __retval632 = r634;
  int* t635 = __retval632;
  return t635;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb636:
  _Bool __retval637;
    _Bool c638 = 0;
    __retval637 = c638;
    _Bool t639 = __retval637;
    return t639;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v640, struct std___List_node_int_* v641, unsigned long v642) {
bb643:
  struct std____new_allocator_std___List_node_int__* this644;
  struct std___List_node_int_* __p645;
  unsigned long __n646;
  this644 = v640;
  __p645 = v641;
  __n646 = v642;
  struct std____new_allocator_std___List_node_int__* t647 = this644;
    unsigned long c648 = 8;
    unsigned long c649 = 16;
    _Bool c650 = ((c648 > c649)) ? 1 : 0;
    if (c650) {
      struct std___List_node_int_* t651 = __p645;
      void* cast652 = (void*)t651;
      unsigned long t653 = __n646;
      unsigned long c654 = 24;
      unsigned long b655 = t653 * c654;
      unsigned long c656 = 8;
      operator_delete_3(cast652, b655, c656);
      return;
    }
  struct std___List_node_int_* t657 = __p645;
  void* cast658 = (void*)t657;
  unsigned long t659 = __n646;
  unsigned long c660 = 24;
  unsigned long b661 = t659 * c660;
  operator_delete_2(cast658, b661);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v662, struct std___List_node_int_* v663, unsigned long v664) {
bb665:
  struct std__allocator_std___List_node_int__* this666;
  struct std___List_node_int_* __p667;
  unsigned long __n668;
  this666 = v662;
  __p667 = v663;
  __n668 = v664;
  struct std__allocator_std___List_node_int__* t669 = this666;
    _Bool r670 = std____is_constant_evaluated();
    if (r670) {
      struct std___List_node_int_* t671 = __p667;
      void* cast672 = (void*)t671;
      operator_delete(cast672);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base673 = (struct std____new_allocator_std___List_node_int__*)((char *)t669 + 0);
  struct std___List_node_int_* t674 = __p667;
  unsigned long t675 = __n668;
  std____new_allocator_std___List_node_int_____deallocate(base673, t674, t675);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v676, struct std___List_node_int_* v677, unsigned long v678) {
bb679:
  struct std__allocator_std___List_node_int__* __a680;
  struct std___List_node_int_* __p681;
  unsigned long __n682;
  __a680 = v676;
  __p681 = v677;
  __n682 = v678;
  struct std__allocator_std___List_node_int__* t683 = __a680;
  struct std___List_node_int_* t684 = __p681;
  unsigned long t685 = __n682;
  std__allocator_std___List_node_int_____deallocate(t683, t684, t685);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v686, struct std___List_node_int_* v687) {
bb688:
  struct std____cxx11___List_base_int__std__allocator_int__* this689;
  struct std___List_node_int_* __p690;
  this689 = v686;
  __p690 = v687;
  struct std____cxx11___List_base_int__std__allocator_int__* t691 = this689;
  struct std__allocator_std___List_node_int__* base692 = (struct std__allocator_std___List_node_int__*)((char *)&(t691->_M_impl) + 0);
  struct std___List_node_int_* t693 = __p690;
  unsigned long c694 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base692, t693, c694);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v695, struct std___List_node_int_* v696) {
bb697:
  struct std____cxx11___List_base_int__std__allocator_int__* this698;
  struct std___List_node_int_* __p699;
  this698 = v695;
  __p699 = v696;
  struct std____cxx11___List_base_int__std__allocator_int__* t700 = this698;
  struct std__allocator_std___List_node_int__* base701 = (struct std__allocator_std___List_node_int__*)((char *)&(t700->_M_impl) + 0);
  struct std___List_node_int_* t702 = __p699;
  int* r703 = std___List_node_int____M_valptr(t702);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base701, r703);
  struct std___List_node_int_* t704 = __p699;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t700, t704);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v705) {
bb706:
  struct std___List_node_int_* this707;
  struct std___List_node_int_* __retval708;
  this707 = v705;
  struct std___List_node_int_* t709 = this707;
  __retval708 = t709;
  struct std___List_node_int_* t710 = __retval708;
  return t710;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v711) {
bb712:
  struct std____cxx11___List_base_int__std__allocator_int__* this713;
  struct std____detail___List_node_base* __cur714;
  this713 = v711;
  struct std____cxx11___List_base_int__std__allocator_int__* t715 = this713;
  struct std____detail___List_node_base* base716 = (struct std____detail___List_node_base*)((char *)&(t715->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t717 = base716->_M_next;
  __cur714 = t717;
    while (1) {
      struct std____detail___List_node_base* t718 = __cur714;
      struct std____detail___List_node_base* r719 = std____detail___List_node_header___M_base(&t715->_M_impl._M_node);
      _Bool c720 = ((t718 != r719)) ? 1 : 0;
      if (!c720) break;
        struct std___List_node_int_* __tmp721;
        struct std____detail___List_node_base* t722 = __cur714;
        struct std___List_node_int_* derived723 = (struct std___List_node_int_*)((char *)t722 - 0);
        __tmp721 = derived723;
        struct std___List_node_int_* t724 = __tmp721;
        struct std____detail___List_node_base* base725 = (struct std____detail___List_node_base*)((char *)t724 + 0);
        struct std____detail___List_node_base* t726 = base725->_M_next;
        __cur714 = t726;
        struct std___List_node_int_* t727 = __tmp721;
        struct std___List_node_int_* r728 = std___List_node_int____M_node_ptr(t727);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t715, r728);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v729) {
bb730:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this731;
  this731 = v729;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t732 = this731;
  {
    struct std__allocator_std___List_node_int__* base733 = (struct std__allocator_std___List_node_int__*)((char *)t732 + 0);
    std__allocator_std___List_node_int______allocator(base733);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v734) {
bb735:
  struct std____cxx11___List_base_int__std__allocator_int__* this736;
  this736 = v734;
  struct std____cxx11___List_base_int__std__allocator_int__* t737 = this736;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t737);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t737->_M_impl);
  }
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v738, struct std__allocator_int_* v739) {
bb740:
  struct std__allocator_std___List_node_int__* this741;
  struct std__allocator_int_* unnamed742;
  this741 = v738;
  unnamed742 = v739;
  struct std__allocator_std___List_node_int__* t743 = this741;
  struct std____new_allocator_std___List_node_int__* base744 = (struct std____new_allocator_std___List_node_int__*)((char *)t743 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base744);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v745, struct std__allocator_std___List_node_int__* v746) {
bb747:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this748;
  struct std__allocator_std___List_node_int__* __a749;
  this748 = v745;
  __a749 = v746;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t750 = this748;
  struct std__allocator_std___List_node_int__* base751 = (struct std__allocator_std___List_node_int__*)((char *)t750 + 0);
  struct std__allocator_std___List_node_int__* t752 = __a749;
  std__allocator_std___List_node_int_____allocator(base751, t752);
    std____detail___List_node_header___List_node_header(&t750->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v753, struct std__allocator_std___List_node_int__* v754) {
bb755:
  struct std____cxx11___List_base_int__std__allocator_int__* this756;
  struct std__allocator_std___List_node_int__* __a757;
  this756 = v753;
  __a757 = v754;
  struct std____cxx11___List_base_int__std__allocator_int__* t758 = this756;
  struct std__allocator_std___List_node_int__* t759 = __a757;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t758->_M_impl, t759);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v760) {
bb761:
  struct std__allocator_std___List_node_int__* this762;
  this762 = v760;
  struct std__allocator_std___List_node_int__* t763 = this762;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v764) {
bb765:
  struct std____cxx11___List_base_int__std__allocator_int__* this766;
  struct std__allocator_std___List_node_int__* __retval767;
  this766 = v764;
  struct std____cxx11___List_base_int__std__allocator_int__* t768 = this766;
  struct std__allocator_std___List_node_int__* base769 = (struct std__allocator_std___List_node_int__*)((char *)&(t768->_M_impl) + 0);
  __retval767 = base769;
  struct std__allocator_std___List_node_int__* t770 = __retval767;
  return t770;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v771) {
bb772:
  struct std____new_allocator_std___List_node_int__* this773;
  unsigned long __retval774;
  this773 = v771;
  struct std____new_allocator_std___List_node_int__* t775 = this773;
  unsigned long c776 = 9223372036854775807;
  unsigned long c777 = 24;
  unsigned long b778 = c776 / c777;
  __retval774 = b778;
  unsigned long t779 = __retval774;
  return t779;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v780, unsigned long v781, void* v782) {
bb783:
  struct std____new_allocator_std___List_node_int__* this784;
  unsigned long __n785;
  void* unnamed786;
  struct std___List_node_int_* __retval787;
  this784 = v780;
  __n785 = v781;
  unnamed786 = v782;
  struct std____new_allocator_std___List_node_int__* t788 = this784;
    unsigned long t789 = __n785;
    unsigned long r790 = std____new_allocator_std___List_node_int______M_max_size___const(t788);
    _Bool c791 = ((t789 > r790)) ? 1 : 0;
    if (c791) {
        unsigned long t792 = __n785;
        unsigned long c793 = -1;
        unsigned long c794 = 24;
        unsigned long b795 = c793 / c794;
        _Bool c796 = ((t792 > b795)) ? 1 : 0;
        if (c796) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c797 = 8;
    unsigned long c798 = 16;
    _Bool c799 = ((c797 > c798)) ? 1 : 0;
    if (c799) {
      unsigned long __al800;
      unsigned long c801 = 8;
      __al800 = c801;
      unsigned long t802 = __n785;
      unsigned long c803 = 24;
      unsigned long b804 = t802 * c803;
      unsigned long t805 = __al800;
      void* r806 = operator_new_2(b804, t805);
      struct std___List_node_int_* cast807 = (struct std___List_node_int_*)r806;
      __retval787 = cast807;
      struct std___List_node_int_* t808 = __retval787;
      return t808;
    }
  unsigned long t809 = __n785;
  unsigned long c810 = 24;
  unsigned long b811 = t809 * c810;
  void* r812 = operator_new(b811);
  struct std___List_node_int_* cast813 = (struct std___List_node_int_*)r812;
  __retval787 = cast813;
  struct std___List_node_int_* t814 = __retval787;
  return t814;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v815, unsigned long v816) {
bb817:
  struct std__allocator_std___List_node_int__* this818;
  unsigned long __n819;
  struct std___List_node_int_* __retval820;
  this818 = v815;
  __n819 = v816;
  struct std__allocator_std___List_node_int__* t821 = this818;
    _Bool r822 = std____is_constant_evaluated();
    if (r822) {
        unsigned long t823 = __n819;
        unsigned long c824 = 24;
        unsigned long ovr825;
        _Bool ovf826 = __builtin_mul_overflow(t823, c824, &ovr825);
        __n819 = ovr825;
        if (ovf826) {
          std____throw_bad_array_new_length();
        }
      unsigned long t827 = __n819;
      void* r828 = operator_new(t827);
      struct std___List_node_int_* cast829 = (struct std___List_node_int_*)r828;
      __retval820 = cast829;
      struct std___List_node_int_* t830 = __retval820;
      return t830;
    }
  struct std____new_allocator_std___List_node_int__* base831 = (struct std____new_allocator_std___List_node_int__*)((char *)t821 + 0);
  unsigned long t832 = __n819;
  void* c833 = ((void*)0);
  struct std___List_node_int_* r834 = std____new_allocator_std___List_node_int_____allocate(base831, t832, c833);
  __retval820 = r834;
  struct std___List_node_int_* t835 = __retval820;
  return t835;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v836, unsigned long v837) {
bb838:
  struct std__allocator_std___List_node_int__* __a839;
  unsigned long __n840;
  struct std___List_node_int_* __retval841;
  __a839 = v836;
  __n840 = v837;
  struct std__allocator_std___List_node_int__* t842 = __a839;
  unsigned long t843 = __n840;
  struct std___List_node_int_* r844 = std__allocator_std___List_node_int_____allocate(t842, t843);
  __retval841 = r844;
  struct std___List_node_int_* t845 = __retval841;
  return t845;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v846, struct std__allocator_std___List_node_int__* v847, struct std___List_node_int_* v848) {
bb849:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this850;
  struct std__allocator_std___List_node_int__* __a851;
  struct std___List_node_int_* __ptr852;
  this850 = v846;
  __a851 = v847;
  __ptr852 = v848;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t853 = this850;
  struct std__allocator_std___List_node_int__* t854 = __a851;
  t853->_M_alloc = t854;
  struct std___List_node_int_* t855 = __ptr852;
  t853->_M_ptr = t855;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v856) {
bb857:
  struct std__allocator_std___List_node_int__* __a858;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval859;
  __a858 = v856;
  struct std__allocator_std___List_node_int__* t860 = __a858;
  struct std__allocator_std___List_node_int__* t861 = __a858;
  unsigned long c862 = 1;
  struct std___List_node_int_* r863 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t861, c862);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval859, t860, r863);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t864 = __retval859;
  return t864;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v865, struct std____allocated_ptr_std__allocator_std___List_node_int___* v866) {
bb867:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this868;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr869;
  this868 = v865;
  __ptr869 = v866;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t870 = this868;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base871 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t870 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t872 = __ptr869;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base871, t872);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base873 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t870 + 0);
    struct std___List_node_int_* r874 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base873);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v875) {
bb876:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this877;
  this877 = v875;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t878 = this877;
    struct std___List_node_int_* t879 = t878->_M_ptr;
    struct std___List_node_int_* c880 = ((void*)0);
    _Bool c881 = ((t879 != c880)) ? 1 : 0;
    if (c881) {
      struct std__allocator_std___List_node_int__* t882 = t878->_M_alloc;
      struct std___List_node_int_* t883 = t878->_M_ptr;
      unsigned long c884 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t882, t883, c884);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v885) {
bb886:
  struct std__allocator_std___List_node_int__* __a887;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval888;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0889;
  __a887 = v885;
  struct std__allocator_std___List_node_int__* t890 = __a887;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r891 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t890);
  ref_tmp0889 = r891;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval888, &ref_tmp0889);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0889);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t892 = __retval888;
  return t892;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v893, int* v894) {
bb895:
  int* __location896;
  int* __args897;
  int* __retval898;
  void* __loc899;
  __location896 = v893;
  __args897 = v894;
  int* t900 = __location896;
  void* cast901 = (void*)t900;
  __loc899 = cast901;
    void* t902 = __loc899;
    int* cast903 = (int*)t902;
    int* t904 = __args897;
    int t905 = *t904;
    *cast903 = t905;
    __retval898 = cast903;
    int* t906 = __retval898;
    return t906;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* v907, int* v908, int* v909) {
bb910:
  struct std__allocator_std___List_node_int__* __a911;
  int* __p912;
  int* __args913;
  __a911 = v907;
  __p912 = v908;
  __args913 = v909;
  int* t914 = __p912;
  int* t915 = __args913;
  int* r916 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t914, t915);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v917) {
bb918:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this919;
  struct std___List_node_int_* __retval920;
  this919 = v917;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t921 = this919;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base922 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t921 + 0);
  struct std___List_node_int_* r923 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base922);
  __retval920 = r923;
  struct std___List_node_int_* t924 = __retval920;
  return t924;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v925, void** v926) {
bb927:
  struct std___List_node_int_** __obj928;
  void** __new_val929;
  struct std___List_node_int_* __retval930;
  struct std___List_node_int_* __old_val931;
  __obj928 = v925;
  __new_val929 = v926;
  struct std___List_node_int_** t932 = __obj928;
  struct std___List_node_int_* t933 = *t932;
  __old_val931 = t933;
  void** t934 = __new_val929;
  struct std___List_node_int_* c935 = ((void*)0);
  struct std___List_node_int_** t936 = __obj928;
  *t936 = c935;
  struct std___List_node_int_* t937 = __old_val931;
  __retval930 = t937;
  struct std___List_node_int_* t938 = __retval930;
  return t938;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v939) {
bb940:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this941;
  struct std___List_node_int_* __retval942;
  void* ref_tmp0943;
  this941 = v939;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t944 = this941;
  void* c945 = ((void*)0);
  ref_tmp0943 = c945;
  struct std___List_node_int_* r946 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t944->_M_ptr, &ref_tmp0943);
  __retval942 = r946;
  struct std___List_node_int_* t947 = __retval942;
  return t947;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v948) {
bb949:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this950;
  this950 = v948;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t951 = this950;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base952 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t951 + 0);
      _Bool r953 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base952);
      if (r953) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base954 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t951 + 0);
        struct std___List_node_int_* r955 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base954);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base956 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t951 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base956);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* v957, int* v958) {
bb959:
  struct std____cxx11__list_int__std__allocator_int__* this960;
  int* __args961;
  struct std___List_node_int_* __retval962;
  struct std__allocator_std___List_node_int__* __alloc963;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard964;
  this960 = v957;
  __args961 = v958;
  struct std____cxx11__list_int__std__allocator_int__* t965 = this960;
  struct std____cxx11___List_base_int__std__allocator_int__* base966 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t965 + 0);
  struct std__allocator_std___List_node_int__* r967 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base966);
  __alloc963 = r967;
  struct std__allocator_std___List_node_int__* t968 = __alloc963;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r969 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t968);
  __guard964 = r969;
    struct std__allocator_std___List_node_int__* t970 = __alloc963;
    struct std___List_node_int_* r971 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard964);
    int* r972 = std___List_node_int____M_valptr(r971);
    int* t973 = __args961;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(t970, r972, t973);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base974 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard964) + 0);
    struct std___List_node_int_* r975 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base974);
    __retval962 = r975;
    struct std___List_node_int_* t976 = __retval962;
    struct std___List_node_int_* ret_val977 = t976;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard964);
    }
    return ret_val977;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v978, unsigned long v979) {
bb980:
  struct std____cxx11___List_base_int__std__allocator_int__* this981;
  unsigned long __n982;
  this981 = v978;
  __n982 = v979;
  struct std____cxx11___List_base_int__std__allocator_int__* t983 = this981;
  unsigned long t984 = __n982;
  struct std____detail___List_size* base985 = (struct std____detail___List_size*)((char *)&(t983->_M_impl._M_node) + 16);
  unsigned long t986 = base985->_M_size;
  unsigned long b987 = t986 + t984;
  base985->_M_size = b987;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* v988, struct std___List_iterator_int_ v989, int* v990) {
bb991:
  struct std____cxx11__list_int__std__allocator_int__* this992;
  struct std___List_iterator_int_ __position993;
  int* __args994;
  struct std___List_node_int_* __tmp995;
  this992 = v988;
  __position993 = v989;
  __args994 = v990;
  struct std____cxx11__list_int__std__allocator_int__* t996 = this992;
  int* t997 = __args994;
  struct std___List_node_int_* r998 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(t996, t997);
  __tmp995 = r998;
  struct std___List_node_int_* t999 = __tmp995;
  struct std____detail___List_node_base* base1000 = (struct std____detail___List_node_base*)((char *)t999 + 0);
  struct std____detail___List_node_base* t1001 = __position993._M_node;
  std____detail___List_node_base___M_hook(base1000, t1001);
  struct std____cxx11___List_base_int__std__allocator_int__* base1002 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t996 + 0);
  unsigned long c1003 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1002, c1003);
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v1004) {
bb1005:
  struct std____detail___List_node_base* this1006;
  struct std____detail___List_node_base* __retval1007;
  this1006 = v1004;
  struct std____detail___List_node_base* t1008 = this1006;
  __retval1007 = t1008;
  struct std____detail___List_node_base* t1009 = __retval1007;
  return t1009;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v1010) {
bb1011:
  struct std____cxx11__list_int__std__allocator_int__* this1012;
  _Bool __retval1013;
  this1012 = v1010;
  struct std____cxx11__list_int__std__allocator_int__* t1014 = this1012;
  struct std____cxx11___List_base_int__std__allocator_int__* base1015 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1014 + 0);
  struct std____detail___List_node_base* base1016 = (struct std____detail___List_node_base*)((char *)&(base1015->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1017 = base1016->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base1018 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1014 + 0);
  struct std____detail___List_node_base* base1019 = (struct std____detail___List_node_base*)((char *)&(base1018->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1020 = std____detail___List_node_base___M_base___const(base1019);
  _Bool c1021 = ((t1017 == r1020)) ? 1 : 0;
  __retval1013 = c1021;
  _Bool t1022 = __retval1013;
  return t1022;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v1023) {
bb1024:
  struct std____cxx11__list_int__std__allocator_int__* this1025;
  int* __retval1026;
  struct std___List_iterator_int_ __tmp1027;
  this1025 = v1023;
  struct std____cxx11__list_int__std__allocator_int__* t1028 = this1025;
    do {
          _Bool r1029 = std____cxx11__list_int__std__allocator_int_____empty___const(t1028);
          if (r1029) {
            char* cast1030 = (char*)&(_str_5);
            int c1031 = 1674;
            char* cast1032 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast1033 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1030, c1031, cast1032, cast1033);
          }
      _Bool c1034 = 0;
      if (!c1034) break;
    } while (1);
  struct std___List_iterator_int_ r1035 = std____cxx11__list_int__std__allocator_int_____end(t1028);
  __tmp1027 = r1035;
  struct std___List_iterator_int_* r1036 = std___List_iterator_int___operator__(&__tmp1027);
  int* r1037 = std___List_iterator_int___operator____const(&__tmp1027);
  __retval1026 = r1037;
  int* t1038 = __retval1026;
  return t1038;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRiEEES4_DpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* v1039, int* v1040) {
bb1041:
  struct std____cxx11__list_int__std__allocator_int__* this1042;
  int* __args1043;
  int* __retval1044;
  struct std___List_iterator_int_ agg_tmp01045;
  this1042 = v1039;
  __args1043 = v1040;
  struct std____cxx11__list_int__std__allocator_int__* t1046 = this1042;
  struct std___List_iterator_int_ r1047 = std____cxx11__list_int__std__allocator_int_____end(t1046);
  agg_tmp01045 = r1047;
  int* t1048 = __args1043;
  struct std___List_iterator_int_ t1049 = agg_tmp01045;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int__(t1046, t1049, t1048);
  int* r1050 = std____cxx11__list_int__std__allocator_int_____back(t1046);
  __retval1044 = r1050;
  int* t1051 = __retval1044;
  return t1051;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchIPiEEvT_S5_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* v1052, int* v1053, int* v1054, struct std____false_type v1055) {
bb1056:
  struct std____cxx11__list_int__std__allocator_int__* this1057;
  int* __first1058;
  int* __last1059;
  struct std____false_type unnamed1060;
  _Bool __notempty1061;
  this1057 = v1052;
  __first1058 = v1053;
  __last1059 = v1054;
  unnamed1060 = v1055;
  struct std____cxx11__list_int__std__allocator_int__* t1062 = this1057;
  int* t1063 = __first1058;
  int* t1064 = __last1059;
  _Bool c1065 = ((t1063 != t1064)) ? 1 : 0;
  __notempty1061 = c1065;
    while (1) {
      int* t1067 = __first1058;
      int* t1068 = __last1059;
      _Bool c1069 = ((t1067 != t1068)) ? 1 : 0;
      if (!c1069) break;
      int* t1070 = __first1058;
      int* r1071 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t1062, t1070);
    for_step1066: ;
      int* t1072 = __first1058;
      int c1073 = 1;
      int* ptr1074 = &(t1072)[c1073];
      __first1058 = ptr1074;
    }
    _Bool t1075 = __notempty1061;
    if (t1075) {
        struct std___List_iterator_int_ ref_tmp01076;
        struct std___List_iterator_int_ ref_tmp11077;
        struct std___List_iterator_int_ r1078 = std____cxx11__list_int__std__allocator_int_____begin(t1062);
        ref_tmp01076 = r1078;
        struct std___List_iterator_int_ r1079 = std____cxx11__list_int__std__allocator_int_____end(t1062);
        ref_tmp11077 = r1079;
        _Bool r1080 = std__operator___2(&ref_tmp01076, &ref_tmp11077);
        if (r1080) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v1081) {
bb1082:
  struct std____new_allocator_std___List_node_int__* this1083;
  this1083 = v1081;
  struct std____new_allocator_std___List_node_int__* t1084 = this1083;
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v1085, struct std____new_allocator_std___List_node_int__* v1086) {
bb1087:
  struct std____new_allocator_std___List_node_int__* this1088;
  struct std____new_allocator_std___List_node_int__* unnamed1089;
  this1088 = v1085;
  unnamed1089 = v1086;
  struct std____new_allocator_std___List_node_int__* t1090 = this1088;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v1091, struct std__allocator_std___List_node_int__* v1092) {
bb1093:
  struct std__allocator_std___List_node_int__* this1094;
  struct std__allocator_std___List_node_int__* __a1095;
  this1094 = v1091;
  __a1095 = v1092;
  struct std__allocator_std___List_node_int__* t1096 = this1094;
  struct std____new_allocator_std___List_node_int__* base1097 = (struct std____new_allocator_std___List_node_int__*)((char *)t1096 + 0);
  struct std__allocator_std___List_node_int__* t1098 = __a1095;
  struct std____new_allocator_std___List_node_int__* base1099 = (struct std____new_allocator_std___List_node_int__*)((char *)t1098 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base1097, base1099);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1100) {
bb1101:
  struct std____detail___List_node_header* this1102;
  this1102 = v1100;
  struct std____detail___List_node_header* t1103 = this1102;
  struct std____detail___List_node_base* base1104 = (struct std____detail___List_node_base*)((char *)t1103 + 0);
  struct std____detail___List_size* base1105 = (struct std____detail___List_size*)((char *)t1103 + 16);
  std____detail___List_node_header___M_init(t1103);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1106, struct std____detail___List_size* v1107) {
bb1108:
  struct std____detail___List_size* this1109;
  struct std____detail___List_size* unnamed1110;
  struct std____detail___List_size* __retval1111;
  this1109 = v1106;
  unnamed1110 = v1107;
  struct std____detail___List_size* t1112 = this1109;
  struct std____detail___List_size* t1113 = unnamed1110;
  unsigned long t1114 = t1113->_M_size;
  t1112->_M_size = t1114;
  __retval1111 = t1112;
  struct std____detail___List_size* t1115 = __retval1111;
  return t1115;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1116) {
bb1117:
  struct std____detail___List_node_header* this1118;
  struct std____detail___List_size ref_tmp01119;
  this1118 = v1116;
  struct std____detail___List_node_header* t1120 = this1118;
  struct std____detail___List_node_base* base1121 = (struct std____detail___List_node_base*)((char *)t1120 + 0);
  struct std____detail___List_node_base* base1122 = (struct std____detail___List_node_base*)((char *)t1120 + 0);
  base1122->_M_prev = base1121;
  struct std____detail___List_node_base* base1123 = (struct std____detail___List_node_base*)((char *)t1120 + 0);
  base1123->_M_next = base1121;
  struct std____detail___List_size* base1124 = (struct std____detail___List_size*)((char *)t1120 + 16);
  ref_tmp01119 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1125 = std____detail___List_size__operator_(base1124, &ref_tmp01119);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1126, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1127) {
bb1128:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1129;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd1130;
  this1129 = v1126;
  __gd1130 = v1127;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1131 = this1129;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1132 = __gd1130;
  struct std__allocator_std___List_node_int__* t1133 = t1132->_M_alloc;
  t1131->_M_alloc = t1133;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1134 = __gd1130;
  struct std___List_node_int_* t1135 = t1134->_M_ptr;
  t1131->_M_ptr = t1135;
  struct std___List_node_int_* c1136 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1137 = __gd1130;
  t1137->_M_ptr = c1136;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v1138) {
bb1139:
  struct std___List_node_int_* __ptr1140;
  struct std___List_node_int_* __retval1141;
  __ptr1140 = v1138;
  struct std___List_node_int_* t1142 = __ptr1140;
  __retval1141 = t1142;
  struct std___List_node_int_* t1143 = __retval1141;
  return t1143;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v1144) {
bb1145:
  struct std___List_node_int_** __ptr1146;
  struct std___List_node_int_* __retval1147;
  __ptr1146 = v1144;
  struct std___List_node_int_** t1148 = __ptr1146;
  struct std___List_node_int_* t1149 = *t1148;
  struct std___List_node_int_* r1150 = std___List_node_int___std__to_address_std___List_node_int___(t1149);
  __retval1147 = r1150;
  struct std___List_node_int_* t1151 = __retval1147;
  return t1151;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1152) {
bb1153:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1154;
  struct std___List_node_int_* __retval1155;
  this1154 = v1152;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1156 = this1154;
  struct std___List_node_int_* r1157 = auto_std____to_address_std___List_node_int___(&t1156->_M_ptr);
  __retval1155 = r1157;
  struct std___List_node_int_* t1158 = __retval1155;
  return t1158;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1159) {
bb1160:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1161;
  _Bool __retval1162;
  this1161 = v1159;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1163 = this1161;
  struct std___List_node_int_* t1164 = t1163->_M_ptr;
  _Bool cast1165 = (_Bool)t1164;
  __retval1162 = cast1165;
  _Bool t1166 = __retval1162;
  return t1166;
}

