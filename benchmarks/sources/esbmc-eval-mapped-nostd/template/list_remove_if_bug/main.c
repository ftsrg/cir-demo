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
struct is_odd { unsigned char __field0; };
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
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/template/list_remove_if_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it != 17";
char _str_3[19] = "mylist.size() != 2";
char _str_4[10] = "*it != 20";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[17] = "mylist contains:";
char _str_6[2] = " ";
char _str_7[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
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
_Bool is_odd__operator__(struct is_odd* p0, int* p1);
unsigned long unsigned_long_std____cxx11__list_int__std__allocator_int_____remove_if_is_odd_(struct std____cxx11__list_int__std__allocator_int__* p0, struct is_odd p1);
struct std___List_iterator_int_ std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0, int p1);
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
struct std___List_iterator_int_* std___List_iterator_int___operator___3(struct std___List_iterator_int_* p0);
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
  struct std___List_iterator_int_* r156 = std___List_iterator_int___operator___3(&__j150);
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
          struct std___List_iterator_int_* r225 = std___List_iterator_int___operator___3(&__next224);
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
          struct std___List_iterator_int_* r296 = std___List_iterator_int___operator___3(t295);
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

// function: _ZN6is_oddclERKi
_Bool is_odd__operator__(struct is_odd* v330, int* v331) {
bb332:
  struct is_odd* this333;
  int* value334;
  _Bool __retval335;
  this333 = v330;
  value334 = v331;
  struct is_odd* t336 = this333;
  int* t337 = value334;
  int t338 = *t337;
  int c339 = 2;
  int b340 = t338 % c339;
  int c341 = 1;
  _Bool c342 = ((b340 == c341)) ? 1 : 0;
  __retval335 = c342;
  _Bool t343 = __retval335;
  return t343;
}

// function: _ZNSt7__cxx114listIiSaIiEE9remove_ifI6is_oddEEmT_
unsigned long unsigned_long_std____cxx11__list_int__std__allocator_int_____remove_if_is_odd_(struct std____cxx11__list_int__std__allocator_int__* v344, struct is_odd v345) {
bb346:
  struct std____cxx11__list_int__std__allocator_int__* this347;
  struct is_odd __pred348;
  unsigned long __retval349;
  struct std____cxx11__list_int__std__allocator_int__ __to_destroy350;
  struct std__allocator_int_ ref_tmp0351;
  struct std___List_iterator_int_ __first352;
  struct std___List_iterator_int_ __last353;
  this347 = v344;
  __pred348 = v345;
  struct std____cxx11__list_int__std__allocator_int__* t354 = this347;
  struct std__allocator_int_ r355 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t354);
  ref_tmp0351 = r355;
    std____cxx11__list_int__std__allocator_int_____list(&__to_destroy350, &ref_tmp0351);
  {
    std__allocator_int____allocator(&ref_tmp0351);
  }
    struct std___List_iterator_int_ r356 = std____cxx11__list_int__std__allocator_int_____begin(t354);
    __first352 = r356;
    struct std___List_iterator_int_ r357 = std____cxx11__list_int__std__allocator_int_____end(t354);
    __last353 = r357;
      while (1) {
        _Bool r358 = std__operator___2(&__first352, &__last353);
        _Bool u359 = !r358;
        if (!u359) break;
          struct std___List_iterator_int_ __next360;
          __next360 = __first352; // copy
          struct std___List_iterator_int_* r361 = std___List_iterator_int___operator___3(&__next360);
            int* r362 = std___List_iterator_int___operator____const(&__first352);
            _Bool r363 = is_odd__operator__(&__pred348, r362);
            if (r363) {
              struct std___List_const_iterator_int_ agg_tmp0364;
              struct std___List_iterator_int_ ref_tmp1365;
              struct std___List_const_iterator_int_ agg_tmp1366;
              struct std___List_iterator_int_ r367 = std____cxx11__list_int__std__allocator_int_____begin(&__to_destroy350);
              ref_tmp1365 = r367;
              std___List_const_iterator_int____List_const_iterator(&agg_tmp0364, &ref_tmp1365);
              std___List_const_iterator_int____List_const_iterator(&agg_tmp1366, &__first352);
              struct std___List_const_iterator_int_ t368 = agg_tmp0364;
              struct std___List_const_iterator_int_ t369 = agg_tmp1366;
              std____cxx11__list_int__std__allocator_int_____splice_2(&__to_destroy350, t368, t354, t369);
            }
          struct std___List_iterator_int_* r370 = std___List_iterator_int___operator__2(&__first352, &__next360);
      }
    unsigned long r371 = std____cxx11__list_int__std__allocator_int_____size___const(&__to_destroy350);
    __retval349 = r371;
    unsigned long t372 = __retval349;
    unsigned long ret_val373 = t372;
    {
      std____cxx11__list_int__std__allocator_int______list(&__to_destroy350);
    }
    return ret_val373;
  abort();
}

// function: _ZNSt14_List_iteratorIiEppEi
struct std___List_iterator_int_ std___List_iterator_int___operator___2(struct std___List_iterator_int_* v374, int v375) {
bb376:
  struct std___List_iterator_int_* this377;
  int unnamed378;
  struct std___List_iterator_int_ __retval379;
  this377 = v374;
  unnamed378 = v375;
  struct std___List_iterator_int_* t380 = this377;
  __retval379 = *t380; // copy
  struct std____detail___List_node_base* t381 = t380->_M_node;
  struct std____detail___List_node_base* t382 = t381->_M_next;
  t380->_M_node = t382;
  struct std___List_iterator_int_ t383 = __retval379;
  return t383;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v384, int v385) {
bb386:
  int __a387;
  int __b388;
  int __retval389;
  __a387 = v384;
  __b388 = v385;
  int t390 = __a387;
  int t391 = __b388;
  int b392 = t390 | t391;
  __retval389 = b392;
  int t393 = __retval389;
  return t393;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v394) {
bb395:
  struct std__basic_ios_char__std__char_traits_char__* this396;
  int __retval397;
  this396 = v394;
  struct std__basic_ios_char__std__char_traits_char__* t398 = this396;
  struct std__ios_base* base399 = (struct std__ios_base*)((char *)t398 + 0);
  int t400 = base399->_M_streambuf_state;
  __retval397 = t400;
  int t401 = __retval397;
  return t401;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v402, int v403) {
bb404:
  struct std__basic_ios_char__std__char_traits_char__* this405;
  int __state406;
  this405 = v402;
  __state406 = v403;
  struct std__basic_ios_char__std__char_traits_char__* t407 = this405;
  int r408 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t407);
  int t409 = __state406;
  int r410 = std__operator_(r408, t409);
  std__basic_ios_char__std__char_traits_char_____clear(t407, r410);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v411, char* v412) {
bb413:
  char* __c1414;
  char* __c2415;
  _Bool __retval416;
  __c1414 = v411;
  __c2415 = v412;
  char* t417 = __c1414;
  char t418 = *t417;
  int cast419 = (int)t418;
  char* t420 = __c2415;
  char t421 = *t420;
  int cast422 = (int)t421;
  _Bool c423 = ((cast419 == cast422)) ? 1 : 0;
  __retval416 = c423;
  _Bool t424 = __retval416;
  return t424;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v425) {
bb426:
  char* __p427;
  unsigned long __retval428;
  unsigned long __i429;
  __p427 = v425;
  unsigned long c430 = 0;
  __i429 = c430;
    char ref_tmp0431;
    while (1) {
      unsigned long t432 = __i429;
      char* t433 = __p427;
      char* ptr434 = &(t433)[t432];
      char c435 = 0;
      ref_tmp0431 = c435;
      _Bool r436 = __gnu_cxx__char_traits_char___eq(ptr434, &ref_tmp0431);
      _Bool u437 = !r436;
      if (!u437) break;
      unsigned long t438 = __i429;
      unsigned long u439 = t438 + 1;
      __i429 = u439;
    }
  unsigned long t440 = __i429;
  __retval428 = t440;
  unsigned long t441 = __retval428;
  return t441;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v442) {
bb443:
  char* __s444;
  unsigned long __retval445;
  __s444 = v442;
    _Bool r446 = std____is_constant_evaluated();
    if (r446) {
      char* t447 = __s444;
      unsigned long r448 = __gnu_cxx__char_traits_char___length(t447);
      __retval445 = r448;
      unsigned long t449 = __retval445;
      return t449;
    }
  char* t450 = __s444;
  unsigned long r451 = strlen(t450);
  __retval445 = r451;
  unsigned long t452 = __retval445;
  return t452;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v453, char* v454) {
bb455:
  struct std__basic_ostream_char__std__char_traits_char__* __out456;
  char* __s457;
  struct std__basic_ostream_char__std__char_traits_char__* __retval458;
  __out456 = v453;
  __s457 = v454;
    char* t459 = __s457;
    _Bool cast460 = (_Bool)t459;
    _Bool u461 = !cast460;
    if (u461) {
      struct std__basic_ostream_char__std__char_traits_char__* t462 = __out456;
      void** v463 = (void**)t462;
      void* v464 = *((void**)v463);
      unsigned char* cast465 = (unsigned char*)v464;
      long c466 = -24;
      unsigned char* ptr467 = &(cast465)[c466];
      long* cast468 = (long*)ptr467;
      long t469 = *cast468;
      unsigned char* cast470 = (unsigned char*)t462;
      unsigned char* ptr471 = &(cast470)[t469];
      struct std__basic_ostream_char__std__char_traits_char__* cast472 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr471;
      struct std__basic_ios_char__std__char_traits_char__* cast473 = (struct std__basic_ios_char__std__char_traits_char__*)cast472;
      int t474 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast473, t474);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t475 = __out456;
      char* t476 = __s457;
      char* t477 = __s457;
      unsigned long r478 = std__char_traits_char___length(t477);
      long cast479 = (long)r478;
      struct std__basic_ostream_char__std__char_traits_char__* r480 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t475, t476, cast479);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t481 = __out456;
  __retval458 = t481;
  struct std__basic_ostream_char__std__char_traits_char__* t482 = __retval458;
  return t482;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator___2(struct std___List_iterator_int_* v483, struct std___List_iterator_int_* v484) {
bb485:
  struct std___List_iterator_int_* __x486;
  struct std___List_iterator_int_* __y487;
  _Bool __retval488;
  __x486 = v483;
  __y487 = v484;
  struct std___List_iterator_int_* t489 = __x486;
  struct std____detail___List_node_base* t490 = t489->_M_node;
  struct std___List_iterator_int_* t491 = __y487;
  struct std____detail___List_node_base* t492 = t491->_M_node;
  _Bool c493 = ((t490 == t492)) ? 1 : 0;
  __retval488 = c493;
  _Bool t494 = __retval488;
  return t494;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v495) {
bb496:
  struct std____cxx11__list_int__std__allocator_int__* this497;
  struct std___List_iterator_int_ __retval498;
  this497 = v495;
  struct std____cxx11__list_int__std__allocator_int__* t499 = this497;
  struct std____cxx11___List_base_int__std__allocator_int__* base500 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t499 + 0);
  struct std____detail___List_node_base* r501 = std____detail___List_node_header___M_base(&base500->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval498, r501);
  struct std___List_iterator_int_ t502 = __retval498;
  return t502;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___3(struct std___List_iterator_int_* v503) {
bb504:
  struct std___List_iterator_int_* this505;
  struct std___List_iterator_int_* __retval506;
  this505 = v503;
  struct std___List_iterator_int_* t507 = this505;
  struct std____detail___List_node_base* t508 = t507->_M_node;
  struct std____detail___List_node_base* t509 = t508->_M_next;
  t507->_M_node = t509;
  __retval506 = t507;
  struct std___List_iterator_int_* t510 = __retval506;
  return t510;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v511, void* v512) {
bb513:
  struct std__basic_ostream_char__std__char_traits_char__* this514;
  void* __pf515;
  struct std__basic_ostream_char__std__char_traits_char__* __retval516;
  this514 = v511;
  __pf515 = v512;
  struct std__basic_ostream_char__std__char_traits_char__* t517 = this514;
  void* t518 = __pf515;
  struct std__basic_ostream_char__std__char_traits_char__* r519 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t518)(t517);
  __retval516 = r519;
  struct std__basic_ostream_char__std__char_traits_char__* t520 = __retval516;
  return t520;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v521) {
bb522:
  struct std__basic_ostream_char__std__char_traits_char__* __os523;
  struct std__basic_ostream_char__std__char_traits_char__* __retval524;
  __os523 = v521;
  struct std__basic_ostream_char__std__char_traits_char__* t525 = __os523;
  struct std__basic_ostream_char__std__char_traits_char__* r526 = std__ostream__flush(t525);
  __retval524 = r526;
  struct std__basic_ostream_char__std__char_traits_char__* t527 = __retval524;
  return t527;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v528) {
bb529:
  struct std__ctype_char_* __f530;
  struct std__ctype_char_* __retval531;
  __f530 = v528;
    struct std__ctype_char_* t532 = __f530;
    _Bool cast533 = (_Bool)t532;
    _Bool u534 = !cast533;
    if (u534) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t535 = __f530;
  __retval531 = t535;
  struct std__ctype_char_* t536 = __retval531;
  return t536;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v537, char v538) {
bb539:
  struct std__ctype_char_* this540;
  char __c541;
  char __retval542;
  this540 = v537;
  __c541 = v538;
  struct std__ctype_char_* t543 = this540;
    char t544 = t543->_M_widen_ok;
    _Bool cast545 = (_Bool)t544;
    if (cast545) {
      char t546 = __c541;
      unsigned char cast547 = (unsigned char)t546;
      unsigned long cast548 = (unsigned long)cast547;
      char t549 = t543->_M_widen[cast548];
      __retval542 = t549;
      char t550 = __retval542;
      return t550;
    }
  std__ctype_char____M_widen_init___const(t543);
  char t551 = __c541;
  void** v552 = (void**)t543;
  void* v553 = *((void**)v552);
  char vcall556 = (char)__VERIFIER_virtual_call_char_char(t543, 6, t551);
  __retval542 = vcall556;
  char t557 = __retval542;
  return t557;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v558, char v559) {
bb560:
  struct std__basic_ios_char__std__char_traits_char__* this561;
  char __c562;
  char __retval563;
  this561 = v558;
  __c562 = v559;
  struct std__basic_ios_char__std__char_traits_char__* t564 = this561;
  struct std__ctype_char_* t565 = t564->_M_ctype;
  struct std__ctype_char_* r566 = std__ctype_char__const__std____check_facet_std__ctype_char___(t565);
  char t567 = __c562;
  char r568 = std__ctype_char___widen_char__const(r566, t567);
  __retval563 = r568;
  char t569 = __retval563;
  return t569;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v570) {
bb571:
  struct std__basic_ostream_char__std__char_traits_char__* __os572;
  struct std__basic_ostream_char__std__char_traits_char__* __retval573;
  __os572 = v570;
  struct std__basic_ostream_char__std__char_traits_char__* t574 = __os572;
  struct std__basic_ostream_char__std__char_traits_char__* t575 = __os572;
  void** v576 = (void**)t575;
  void* v577 = *((void**)v576);
  unsigned char* cast578 = (unsigned char*)v577;
  long c579 = -24;
  unsigned char* ptr580 = &(cast578)[c579];
  long* cast581 = (long*)ptr580;
  long t582 = *cast581;
  unsigned char* cast583 = (unsigned char*)t575;
  unsigned char* ptr584 = &(cast583)[t582];
  struct std__basic_ostream_char__std__char_traits_char__* cast585 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr584;
  struct std__basic_ios_char__std__char_traits_char__* cast586 = (struct std__basic_ios_char__std__char_traits_char__*)cast585;
  char c587 = 10;
  char r588 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast586, c587);
  struct std__basic_ostream_char__std__char_traits_char__* r589 = std__ostream__put(t574, r588);
  struct std__basic_ostream_char__std__char_traits_char__* r590 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r589);
  __retval573 = r590;
  struct std__basic_ostream_char__std__char_traits_char__* t591 = __retval573;
  return t591;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v592) {
bb593:
  struct std____cxx11__list_int__std__allocator_int__* this594;
  this594 = v592;
  struct std____cxx11__list_int__std__allocator_int__* t595 = this594;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base596 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t595 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base596);
  }
  return;
}

// function: main
int main() {
bb597:
  int __retval598;
  int myints599[8];
  struct std____cxx11__list_int__std__allocator_int__ mylist600;
  struct std__allocator_int_ ref_tmp0601;
  struct std___List_iterator_int_ it602;
  struct std___List_iterator_int_ ref_tmp1603;
  struct is_odd agg_tmp0604;
  struct std___List_iterator_int_ ref_tmp2605;
  struct std___List_iterator_int_ agg_tmp1606;
  int c607 = 0;
  __retval598 = c607;
  // array copy
  __builtin_memcpy(myints599, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  int* cast608 = (int*)&(myints599);
  int* cast609 = (int*)&(myints599);
  int c610 = 8;
  int* ptr611 = &(cast609)[c610];
  std__allocator_int___allocator(&ref_tmp0601);
    std____cxx11__list_int__std__allocator_int_____list_int___void_(&mylist600, cast608, ptr611, &ref_tmp0601);
  {
    std__allocator_int____allocator(&ref_tmp0601);
  }
    std___List_iterator_int____List_iterator_2(&it602);
    unsigned long r612 = unsigned_long_std____cxx11__list_int__std__allocator_int_____remove_if_bool_____int_const____bool____(&mylist600, &single_digit);
    unsigned long r613 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist600);
    unsigned long c614 = 5;
    _Bool c615 = ((r613 != c614)) ? 1 : 0;
    if (c615) {
    } else {
      char* cast616 = (char*)&(_str);
      char* c617 = _str_1;
      unsigned int c618 = 31;
      char* cast619 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast616, c617, c618, cast619);
    }
    struct std___List_iterator_int_ r620 = std____cxx11__list_int__std__allocator_int_____begin(&mylist600);
    ref_tmp1603 = r620;
    struct std___List_iterator_int_* r621 = std___List_iterator_int___operator_(&it602, &ref_tmp1603);
    int c622 = 2;
    void_std__advance_std___List_iterator_int___int_(&it602, c622);
    int* r623 = std___List_iterator_int___operator____const(&it602);
    int t624 = *r623;
    int c625 = 17;
    _Bool c626 = ((t624 != c625)) ? 1 : 0;
    if (c626) {
    } else {
      char* cast627 = (char*)&(_str_2);
      char* c628 = _str_1;
      unsigned int c629 = 34;
      char* cast630 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast627, c628, c629, cast630);
    }
    struct is_odd t631 = agg_tmp0604;
    unsigned long r632 = unsigned_long_std____cxx11__list_int__std__allocator_int_____remove_if_is_odd_(&mylist600, t631);
    unsigned long r633 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist600);
    unsigned long c634 = 2;
    _Bool c635 = ((r633 != c634)) ? 1 : 0;
    if (c635) {
    } else {
      char* cast636 = (char*)&(_str_3);
      char* c637 = _str_1;
      unsigned int c638 = 37;
      char* cast639 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast636, c637, c638, cast639);
    }
    struct std___List_iterator_int_ r640 = std____cxx11__list_int__std__allocator_int_____begin(&mylist600);
    ref_tmp2605 = r640;
    struct std___List_iterator_int_* r641 = std___List_iterator_int___operator_(&it602, &ref_tmp2605);
    int c642 = 0;
    struct std___List_iterator_int_ r643 = std___List_iterator_int___operator___2(&it602, c642);
    agg_tmp1606 = r643;
    int* r644 = std___List_iterator_int___operator____const(&it602);
    int t645 = *r644;
    int c646 = 20;
    _Bool c647 = ((t645 != c646)) ? 1 : 0;
    if (c647) {
    } else {
      char* cast648 = (char*)&(_str_4);
      char* c649 = _str_1;
      unsigned int c650 = 40;
      char* cast651 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast648, c649, c650, cast651);
    }
    char* cast652 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r653 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast652);
      struct std___List_iterator_int_ it654;
      struct std___List_iterator_int_ ref_tmp3655;
      struct std___List_iterator_int_ r656 = std____cxx11__list_int__std__allocator_int_____begin(&mylist600);
      it654 = r656;
      while (1) {
        struct std___List_iterator_int_ r658 = std____cxx11__list_int__std__allocator_int_____end(&mylist600);
        ref_tmp3655 = r658;
        _Bool r659 = std__operator___2(&it654, &ref_tmp3655);
        _Bool u660 = !r659;
        if (!u660) break;
        char* cast661 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r662 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast661);
        int* r663 = std___List_iterator_int___operator____const(&it654);
        int t664 = *r663;
        struct std__basic_ostream_char__std__char_traits_char__* r665 = std__ostream__operator__(r662, t664);
      for_step657: ;
        struct std___List_iterator_int_* r666 = std___List_iterator_int___operator___3(&it654);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r667 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c668 = 0;
    __retval598 = c668;
    int t669 = __retval598;
    int ret_val670 = t669;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist600);
    }
    return ret_val670;
  int t671 = __retval598;
  return t671;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v672) {
bb673:
  struct std____new_allocator_int_* this674;
  this674 = v672;
  struct std____new_allocator_int_* t675 = this674;
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v676) {
bb677:
  struct std____detail___List_node_header* this678;
  struct std____detail___List_node_base* __retval679;
  this678 = v676;
  struct std____detail___List_node_header* t680 = this678;
  struct std____detail___List_node_base* base681 = (struct std____detail___List_node_base*)((char *)t680 + 0);
  __retval679 = base681;
  struct std____detail___List_node_base* t682 = __retval679;
  return t682;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v683) {
bb684:
  int* __location685;
  __location685 = v683;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v686, int* v687) {
bb688:
  struct std__allocator_std___List_node_int__* __a689;
  int* __p690;
  __a689 = v686;
  __p690 = v687;
  int* t691 = __p690;
  void_std__destroy_at_int_(t691);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v692) {
bb693:
  struct __gnu_cxx____aligned_membuf_int_* this694;
  void* __retval695;
  this694 = v692;
  struct __gnu_cxx____aligned_membuf_int_* t696 = this694;
  void* cast697 = (void*)&(t696->_M_storage);
  __retval695 = cast697;
  void* t698 = __retval695;
  return t698;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v699) {
bb700:
  struct __gnu_cxx____aligned_membuf_int_* this701;
  int* __retval702;
  this701 = v699;
  struct __gnu_cxx____aligned_membuf_int_* t703 = this701;
  void* r704 = __gnu_cxx____aligned_membuf_int____M_addr(t703);
  int* cast705 = (int*)r704;
  __retval702 = cast705;
  int* t706 = __retval702;
  return t706;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v707) {
bb708:
  struct std___List_node_int_* this709;
  int* __retval710;
  this709 = v707;
  struct std___List_node_int_* t711 = this709;
  int* r712 = __gnu_cxx____aligned_membuf_int____M_ptr(&t711->_M_storage);
  __retval710 = r712;
  int* t713 = __retval710;
  return t713;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb714:
  _Bool __retval715;
    _Bool c716 = 0;
    __retval715 = c716;
    _Bool t717 = __retval715;
    return t717;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v718, struct std___List_node_int_* v719, unsigned long v720) {
bb721:
  struct std____new_allocator_std___List_node_int__* this722;
  struct std___List_node_int_* __p723;
  unsigned long __n724;
  this722 = v718;
  __p723 = v719;
  __n724 = v720;
  struct std____new_allocator_std___List_node_int__* t725 = this722;
    unsigned long c726 = 8;
    unsigned long c727 = 16;
    _Bool c728 = ((c726 > c727)) ? 1 : 0;
    if (c728) {
      struct std___List_node_int_* t729 = __p723;
      void* cast730 = (void*)t729;
      unsigned long t731 = __n724;
      unsigned long c732 = 24;
      unsigned long b733 = t731 * c732;
      unsigned long c734 = 8;
      operator_delete_3(cast730, b733, c734);
      return;
    }
  struct std___List_node_int_* t735 = __p723;
  void* cast736 = (void*)t735;
  unsigned long t737 = __n724;
  unsigned long c738 = 24;
  unsigned long b739 = t737 * c738;
  operator_delete_2(cast736, b739);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v740, struct std___List_node_int_* v741, unsigned long v742) {
bb743:
  struct std__allocator_std___List_node_int__* this744;
  struct std___List_node_int_* __p745;
  unsigned long __n746;
  this744 = v740;
  __p745 = v741;
  __n746 = v742;
  struct std__allocator_std___List_node_int__* t747 = this744;
    _Bool r748 = std____is_constant_evaluated();
    if (r748) {
      struct std___List_node_int_* t749 = __p745;
      void* cast750 = (void*)t749;
      operator_delete(cast750);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base751 = (struct std____new_allocator_std___List_node_int__*)((char *)t747 + 0);
  struct std___List_node_int_* t752 = __p745;
  unsigned long t753 = __n746;
  std____new_allocator_std___List_node_int_____deallocate(base751, t752, t753);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v754, struct std___List_node_int_* v755, unsigned long v756) {
bb757:
  struct std__allocator_std___List_node_int__* __a758;
  struct std___List_node_int_* __p759;
  unsigned long __n760;
  __a758 = v754;
  __p759 = v755;
  __n760 = v756;
  struct std__allocator_std___List_node_int__* t761 = __a758;
  struct std___List_node_int_* t762 = __p759;
  unsigned long t763 = __n760;
  std__allocator_std___List_node_int_____deallocate(t761, t762, t763);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v764, struct std___List_node_int_* v765) {
bb766:
  struct std____cxx11___List_base_int__std__allocator_int__* this767;
  struct std___List_node_int_* __p768;
  this767 = v764;
  __p768 = v765;
  struct std____cxx11___List_base_int__std__allocator_int__* t769 = this767;
  struct std__allocator_std___List_node_int__* base770 = (struct std__allocator_std___List_node_int__*)((char *)&(t769->_M_impl) + 0);
  struct std___List_node_int_* t771 = __p768;
  unsigned long c772 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base770, t771, c772);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v773, struct std___List_node_int_* v774) {
bb775:
  struct std____cxx11___List_base_int__std__allocator_int__* this776;
  struct std___List_node_int_* __p777;
  this776 = v773;
  __p777 = v774;
  struct std____cxx11___List_base_int__std__allocator_int__* t778 = this776;
  struct std__allocator_std___List_node_int__* base779 = (struct std__allocator_std___List_node_int__*)((char *)&(t778->_M_impl) + 0);
  struct std___List_node_int_* t780 = __p777;
  int* r781 = std___List_node_int____M_valptr(t780);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base779, r781);
  struct std___List_node_int_* t782 = __p777;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t778, t782);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v783) {
bb784:
  struct std___List_node_int_* this785;
  struct std___List_node_int_* __retval786;
  this785 = v783;
  struct std___List_node_int_* t787 = this785;
  __retval786 = t787;
  struct std___List_node_int_* t788 = __retval786;
  return t788;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v789) {
bb790:
  struct std____cxx11___List_base_int__std__allocator_int__* this791;
  struct std____detail___List_node_base* __cur792;
  this791 = v789;
  struct std____cxx11___List_base_int__std__allocator_int__* t793 = this791;
  struct std____detail___List_node_base* base794 = (struct std____detail___List_node_base*)((char *)&(t793->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t795 = base794->_M_next;
  __cur792 = t795;
    while (1) {
      struct std____detail___List_node_base* t796 = __cur792;
      struct std____detail___List_node_base* r797 = std____detail___List_node_header___M_base(&t793->_M_impl._M_node);
      _Bool c798 = ((t796 != r797)) ? 1 : 0;
      if (!c798) break;
        struct std___List_node_int_* __tmp799;
        struct std____detail___List_node_base* t800 = __cur792;
        struct std___List_node_int_* derived801 = (struct std___List_node_int_*)((char *)t800 - 0);
        __tmp799 = derived801;
        struct std___List_node_int_* t802 = __tmp799;
        struct std____detail___List_node_base* base803 = (struct std____detail___List_node_base*)((char *)t802 + 0);
        struct std____detail___List_node_base* t804 = base803->_M_next;
        __cur792 = t804;
        struct std___List_node_int_* t805 = __tmp799;
        struct std___List_node_int_* r806 = std___List_node_int____M_node_ptr(t805);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t793, r806);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v807) {
bb808:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this809;
  this809 = v807;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t810 = this809;
  {
    struct std__allocator_std___List_node_int__* base811 = (struct std__allocator_std___List_node_int__*)((char *)t810 + 0);
    std__allocator_std___List_node_int______allocator(base811);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v812) {
bb813:
  struct std____cxx11___List_base_int__std__allocator_int__* this814;
  this814 = v812;
  struct std____cxx11___List_base_int__std__allocator_int__* t815 = this814;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t815);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t815->_M_impl);
  }
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v816, struct std__allocator_int_* v817) {
bb818:
  struct std__allocator_std___List_node_int__* this819;
  struct std__allocator_int_* unnamed820;
  this819 = v816;
  unnamed820 = v817;
  struct std__allocator_std___List_node_int__* t821 = this819;
  struct std____new_allocator_std___List_node_int__* base822 = (struct std____new_allocator_std___List_node_int__*)((char *)t821 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base822);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v823, struct std__allocator_std___List_node_int__* v824) {
bb825:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this826;
  struct std__allocator_std___List_node_int__* __a827;
  this826 = v823;
  __a827 = v824;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t828 = this826;
  struct std__allocator_std___List_node_int__* base829 = (struct std__allocator_std___List_node_int__*)((char *)t828 + 0);
  struct std__allocator_std___List_node_int__* t830 = __a827;
  std__allocator_std___List_node_int_____allocator(base829, t830);
    std____detail___List_node_header___List_node_header(&t828->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v831, struct std__allocator_std___List_node_int__* v832) {
bb833:
  struct std____cxx11___List_base_int__std__allocator_int__* this834;
  struct std__allocator_std___List_node_int__* __a835;
  this834 = v831;
  __a835 = v832;
  struct std____cxx11___List_base_int__std__allocator_int__* t836 = this834;
  struct std__allocator_std___List_node_int__* t837 = __a835;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t836->_M_impl, t837);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v838) {
bb839:
  struct std__allocator_std___List_node_int__* this840;
  this840 = v838;
  struct std__allocator_std___List_node_int__* t841 = this840;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v842) {
bb843:
  struct std____cxx11___List_base_int__std__allocator_int__* this844;
  struct std__allocator_std___List_node_int__* __retval845;
  this844 = v842;
  struct std____cxx11___List_base_int__std__allocator_int__* t846 = this844;
  struct std__allocator_std___List_node_int__* base847 = (struct std__allocator_std___List_node_int__*)((char *)&(t846->_M_impl) + 0);
  __retval845 = base847;
  struct std__allocator_std___List_node_int__* t848 = __retval845;
  return t848;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v849) {
bb850:
  struct std____new_allocator_std___List_node_int__* this851;
  unsigned long __retval852;
  this851 = v849;
  struct std____new_allocator_std___List_node_int__* t853 = this851;
  unsigned long c854 = 9223372036854775807;
  unsigned long c855 = 24;
  unsigned long b856 = c854 / c855;
  __retval852 = b856;
  unsigned long t857 = __retval852;
  return t857;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v858, unsigned long v859, void* v860) {
bb861:
  struct std____new_allocator_std___List_node_int__* this862;
  unsigned long __n863;
  void* unnamed864;
  struct std___List_node_int_* __retval865;
  this862 = v858;
  __n863 = v859;
  unnamed864 = v860;
  struct std____new_allocator_std___List_node_int__* t866 = this862;
    unsigned long t867 = __n863;
    unsigned long r868 = std____new_allocator_std___List_node_int______M_max_size___const(t866);
    _Bool c869 = ((t867 > r868)) ? 1 : 0;
    if (c869) {
        unsigned long t870 = __n863;
        unsigned long c871 = -1;
        unsigned long c872 = 24;
        unsigned long b873 = c871 / c872;
        _Bool c874 = ((t870 > b873)) ? 1 : 0;
        if (c874) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c875 = 8;
    unsigned long c876 = 16;
    _Bool c877 = ((c875 > c876)) ? 1 : 0;
    if (c877) {
      unsigned long __al878;
      unsigned long c879 = 8;
      __al878 = c879;
      unsigned long t880 = __n863;
      unsigned long c881 = 24;
      unsigned long b882 = t880 * c881;
      unsigned long t883 = __al878;
      void* r884 = operator_new_2(b882, t883);
      struct std___List_node_int_* cast885 = (struct std___List_node_int_*)r884;
      __retval865 = cast885;
      struct std___List_node_int_* t886 = __retval865;
      return t886;
    }
  unsigned long t887 = __n863;
  unsigned long c888 = 24;
  unsigned long b889 = t887 * c888;
  void* r890 = operator_new(b889);
  struct std___List_node_int_* cast891 = (struct std___List_node_int_*)r890;
  __retval865 = cast891;
  struct std___List_node_int_* t892 = __retval865;
  return t892;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v893, unsigned long v894) {
bb895:
  struct std__allocator_std___List_node_int__* this896;
  unsigned long __n897;
  struct std___List_node_int_* __retval898;
  this896 = v893;
  __n897 = v894;
  struct std__allocator_std___List_node_int__* t899 = this896;
    _Bool r900 = std____is_constant_evaluated();
    if (r900) {
        unsigned long t901 = __n897;
        unsigned long c902 = 24;
        unsigned long ovr903;
        _Bool ovf904 = __builtin_mul_overflow(t901, c902, &ovr903);
        __n897 = ovr903;
        if (ovf904) {
          std____throw_bad_array_new_length();
        }
      unsigned long t905 = __n897;
      void* r906 = operator_new(t905);
      struct std___List_node_int_* cast907 = (struct std___List_node_int_*)r906;
      __retval898 = cast907;
      struct std___List_node_int_* t908 = __retval898;
      return t908;
    }
  struct std____new_allocator_std___List_node_int__* base909 = (struct std____new_allocator_std___List_node_int__*)((char *)t899 + 0);
  unsigned long t910 = __n897;
  void* c911 = ((void*)0);
  struct std___List_node_int_* r912 = std____new_allocator_std___List_node_int_____allocate(base909, t910, c911);
  __retval898 = r912;
  struct std___List_node_int_* t913 = __retval898;
  return t913;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v914, unsigned long v915) {
bb916:
  struct std__allocator_std___List_node_int__* __a917;
  unsigned long __n918;
  struct std___List_node_int_* __retval919;
  __a917 = v914;
  __n918 = v915;
  struct std__allocator_std___List_node_int__* t920 = __a917;
  unsigned long t921 = __n918;
  struct std___List_node_int_* r922 = std__allocator_std___List_node_int_____allocate(t920, t921);
  __retval919 = r922;
  struct std___List_node_int_* t923 = __retval919;
  return t923;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v924, struct std__allocator_std___List_node_int__* v925, struct std___List_node_int_* v926) {
bb927:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this928;
  struct std__allocator_std___List_node_int__* __a929;
  struct std___List_node_int_* __ptr930;
  this928 = v924;
  __a929 = v925;
  __ptr930 = v926;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t931 = this928;
  struct std__allocator_std___List_node_int__* t932 = __a929;
  t931->_M_alloc = t932;
  struct std___List_node_int_* t933 = __ptr930;
  t931->_M_ptr = t933;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v934) {
bb935:
  struct std__allocator_std___List_node_int__* __a936;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval937;
  __a936 = v934;
  struct std__allocator_std___List_node_int__* t938 = __a936;
  struct std__allocator_std___List_node_int__* t939 = __a936;
  unsigned long c940 = 1;
  struct std___List_node_int_* r941 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t939, c940);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval937, t938, r941);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t942 = __retval937;
  return t942;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v943, struct std____allocated_ptr_std__allocator_std___List_node_int___* v944) {
bb945:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this946;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr947;
  this946 = v943;
  __ptr947 = v944;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t948 = this946;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base949 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t948 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t950 = __ptr947;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base949, t950);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base951 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t948 + 0);
    struct std___List_node_int_* r952 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base951);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v953) {
bb954:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this955;
  this955 = v953;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t956 = this955;
    struct std___List_node_int_* t957 = t956->_M_ptr;
    struct std___List_node_int_* c958 = ((void*)0);
    _Bool c959 = ((t957 != c958)) ? 1 : 0;
    if (c959) {
      struct std__allocator_std___List_node_int__* t960 = t956->_M_alloc;
      struct std___List_node_int_* t961 = t956->_M_ptr;
      unsigned long c962 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t960, t961, c962);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v963) {
bb964:
  struct std__allocator_std___List_node_int__* __a965;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval966;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0967;
  __a965 = v963;
  struct std__allocator_std___List_node_int__* t968 = __a965;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r969 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t968);
  ref_tmp0967 = r969;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval966, &ref_tmp0967);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0967);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t970 = __retval966;
  return t970;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v971, int* v972) {
bb973:
  int* __location974;
  int* __args975;
  int* __retval976;
  void* __loc977;
  __location974 = v971;
  __args975 = v972;
  int* t978 = __location974;
  void* cast979 = (void*)t978;
  __loc977 = cast979;
    void* t980 = __loc977;
    int* cast981 = (int*)t980;
    int* t982 = __args975;
    int t983 = *t982;
    *cast981 = t983;
    __retval976 = cast981;
    int* t984 = __retval976;
    return t984;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* v985, int* v986, int* v987) {
bb988:
  struct std__allocator_std___List_node_int__* __a989;
  int* __p990;
  int* __args991;
  __a989 = v985;
  __p990 = v986;
  __args991 = v987;
  int* t992 = __p990;
  int* t993 = __args991;
  int* r994 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t992, t993);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v995) {
bb996:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this997;
  struct std___List_node_int_* __retval998;
  this997 = v995;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t999 = this997;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base1000 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t999 + 0);
  struct std___List_node_int_* r1001 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1000);
  __retval998 = r1001;
  struct std___List_node_int_* t1002 = __retval998;
  return t1002;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v1003, void** v1004) {
bb1005:
  struct std___List_node_int_** __obj1006;
  void** __new_val1007;
  struct std___List_node_int_* __retval1008;
  struct std___List_node_int_* __old_val1009;
  __obj1006 = v1003;
  __new_val1007 = v1004;
  struct std___List_node_int_** t1010 = __obj1006;
  struct std___List_node_int_* t1011 = *t1010;
  __old_val1009 = t1011;
  void** t1012 = __new_val1007;
  struct std___List_node_int_* c1013 = ((void*)0);
  struct std___List_node_int_** t1014 = __obj1006;
  *t1014 = c1013;
  struct std___List_node_int_* t1015 = __old_val1009;
  __retval1008 = t1015;
  struct std___List_node_int_* t1016 = __retval1008;
  return t1016;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1017) {
bb1018:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1019;
  struct std___List_node_int_* __retval1020;
  void* ref_tmp01021;
  this1019 = v1017;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1022 = this1019;
  void* c1023 = ((void*)0);
  ref_tmp01021 = c1023;
  struct std___List_node_int_* r1024 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t1022->_M_ptr, &ref_tmp01021);
  __retval1020 = r1024;
  struct std___List_node_int_* t1025 = __retval1020;
  return t1025;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v1026) {
bb1027:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this1028;
  this1028 = v1026;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t1029 = this1028;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base1030 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1029 + 0);
      _Bool r1031 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base1030);
      if (r1031) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base1032 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1029 + 0);
        struct std___List_node_int_* r1033 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1032);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1034 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1029 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base1034);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* v1035, int* v1036) {
bb1037:
  struct std____cxx11__list_int__std__allocator_int__* this1038;
  int* __args1039;
  struct std___List_node_int_* __retval1040;
  struct std__allocator_std___List_node_int__* __alloc1041;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard1042;
  this1038 = v1035;
  __args1039 = v1036;
  struct std____cxx11__list_int__std__allocator_int__* t1043 = this1038;
  struct std____cxx11___List_base_int__std__allocator_int__* base1044 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1043 + 0);
  struct std__allocator_std___List_node_int__* r1045 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1044);
  __alloc1041 = r1045;
  struct std__allocator_std___List_node_int__* t1046 = __alloc1041;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r1047 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t1046);
  __guard1042 = r1047;
    struct std__allocator_std___List_node_int__* t1048 = __alloc1041;
    struct std___List_node_int_* r1049 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard1042);
    int* r1050 = std___List_node_int____M_valptr(r1049);
    int* t1051 = __args1039;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(t1048, r1050, t1051);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1052 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard1042) + 0);
    struct std___List_node_int_* r1053 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base1052);
    __retval1040 = r1053;
    struct std___List_node_int_* t1054 = __retval1040;
    struct std___List_node_int_* ret_val1055 = t1054;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1042);
    }
    return ret_val1055;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v1056, unsigned long v1057) {
bb1058:
  struct std____cxx11___List_base_int__std__allocator_int__* this1059;
  unsigned long __n1060;
  this1059 = v1056;
  __n1060 = v1057;
  struct std____cxx11___List_base_int__std__allocator_int__* t1061 = this1059;
  unsigned long t1062 = __n1060;
  struct std____detail___List_size* base1063 = (struct std____detail___List_size*)((char *)&(t1061->_M_impl._M_node) + 16);
  unsigned long t1064 = base1063->_M_size;
  unsigned long b1065 = t1064 + t1062;
  base1063->_M_size = b1065;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* v1066, struct std___List_iterator_int_ v1067, int* v1068) {
bb1069:
  struct std____cxx11__list_int__std__allocator_int__* this1070;
  struct std___List_iterator_int_ __position1071;
  int* __args1072;
  struct std___List_node_int_* __tmp1073;
  this1070 = v1066;
  __position1071 = v1067;
  __args1072 = v1068;
  struct std____cxx11__list_int__std__allocator_int__* t1074 = this1070;
  int* t1075 = __args1072;
  struct std___List_node_int_* r1076 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(t1074, t1075);
  __tmp1073 = r1076;
  struct std___List_node_int_* t1077 = __tmp1073;
  struct std____detail___List_node_base* base1078 = (struct std____detail___List_node_base*)((char *)t1077 + 0);
  struct std____detail___List_node_base* t1079 = __position1071._M_node;
  std____detail___List_node_base___M_hook(base1078, t1079);
  struct std____cxx11___List_base_int__std__allocator_int__* base1080 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1074 + 0);
  unsigned long c1081 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1080, c1081);
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v1082) {
bb1083:
  struct std____detail___List_node_base* this1084;
  struct std____detail___List_node_base* __retval1085;
  this1084 = v1082;
  struct std____detail___List_node_base* t1086 = this1084;
  __retval1085 = t1086;
  struct std____detail___List_node_base* t1087 = __retval1085;
  return t1087;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v1088) {
bb1089:
  struct std____cxx11__list_int__std__allocator_int__* this1090;
  _Bool __retval1091;
  this1090 = v1088;
  struct std____cxx11__list_int__std__allocator_int__* t1092 = this1090;
  struct std____cxx11___List_base_int__std__allocator_int__* base1093 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1092 + 0);
  struct std____detail___List_node_base* base1094 = (struct std____detail___List_node_base*)((char *)&(base1093->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1095 = base1094->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base1096 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1092 + 0);
  struct std____detail___List_node_base* base1097 = (struct std____detail___List_node_base*)((char *)&(base1096->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1098 = std____detail___List_node_base___M_base___const(base1097);
  _Bool c1099 = ((t1095 == r1098)) ? 1 : 0;
  __retval1091 = c1099;
  _Bool t1100 = __retval1091;
  return t1100;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v1101) {
bb1102:
  struct std____cxx11__list_int__std__allocator_int__* this1103;
  int* __retval1104;
  struct std___List_iterator_int_ __tmp1105;
  this1103 = v1101;
  struct std____cxx11__list_int__std__allocator_int__* t1106 = this1103;
    do {
          _Bool r1107 = std____cxx11__list_int__std__allocator_int_____empty___const(t1106);
          if (r1107) {
            char* cast1108 = (char*)&(_str_7);
            int c1109 = 1674;
            char* cast1110 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast1111 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast1108, c1109, cast1110, cast1111);
          }
      _Bool c1112 = 0;
      if (!c1112) break;
    } while (1);
  struct std___List_iterator_int_ r1113 = std____cxx11__list_int__std__allocator_int_____end(t1106);
  __tmp1105 = r1113;
  struct std___List_iterator_int_* r1114 = std___List_iterator_int___operator__(&__tmp1105);
  int* r1115 = std___List_iterator_int___operator____const(&__tmp1105);
  __retval1104 = r1115;
  int* t1116 = __retval1104;
  return t1116;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRiEEES4_DpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* v1117, int* v1118) {
bb1119:
  struct std____cxx11__list_int__std__allocator_int__* this1120;
  int* __args1121;
  int* __retval1122;
  struct std___List_iterator_int_ agg_tmp01123;
  this1120 = v1117;
  __args1121 = v1118;
  struct std____cxx11__list_int__std__allocator_int__* t1124 = this1120;
  struct std___List_iterator_int_ r1125 = std____cxx11__list_int__std__allocator_int_____end(t1124);
  agg_tmp01123 = r1125;
  int* t1126 = __args1121;
  struct std___List_iterator_int_ t1127 = agg_tmp01123;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int__(t1124, t1127, t1126);
  int* r1128 = std____cxx11__list_int__std__allocator_int_____back(t1124);
  __retval1122 = r1128;
  int* t1129 = __retval1122;
  return t1129;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchIPiEEvT_S5_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* v1130, int* v1131, int* v1132, struct std____false_type v1133) {
bb1134:
  struct std____cxx11__list_int__std__allocator_int__* this1135;
  int* __first1136;
  int* __last1137;
  struct std____false_type unnamed1138;
  _Bool __notempty1139;
  this1135 = v1130;
  __first1136 = v1131;
  __last1137 = v1132;
  unnamed1138 = v1133;
  struct std____cxx11__list_int__std__allocator_int__* t1140 = this1135;
  int* t1141 = __first1136;
  int* t1142 = __last1137;
  _Bool c1143 = ((t1141 != t1142)) ? 1 : 0;
  __notempty1139 = c1143;
    while (1) {
      int* t1145 = __first1136;
      int* t1146 = __last1137;
      _Bool c1147 = ((t1145 != t1146)) ? 1 : 0;
      if (!c1147) break;
      int* t1148 = __first1136;
      int* r1149 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t1140, t1148);
    for_step1144: ;
      int* t1150 = __first1136;
      int c1151 = 1;
      int* ptr1152 = &(t1150)[c1151];
      __first1136 = ptr1152;
    }
    _Bool t1153 = __notempty1139;
    if (t1153) {
        struct std___List_iterator_int_ ref_tmp01154;
        struct std___List_iterator_int_ ref_tmp11155;
        struct std___List_iterator_int_ r1156 = std____cxx11__list_int__std__allocator_int_____begin(t1140);
        ref_tmp01154 = r1156;
        struct std___List_iterator_int_ r1157 = std____cxx11__list_int__std__allocator_int_____end(t1140);
        ref_tmp11155 = r1157;
        _Bool r1158 = std__operator___2(&ref_tmp01154, &ref_tmp11155);
        if (r1158) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v1159) {
bb1160:
  struct std____new_allocator_std___List_node_int__* this1161;
  this1161 = v1159;
  struct std____new_allocator_std___List_node_int__* t1162 = this1161;
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v1163, struct std____new_allocator_std___List_node_int__* v1164) {
bb1165:
  struct std____new_allocator_std___List_node_int__* this1166;
  struct std____new_allocator_std___List_node_int__* unnamed1167;
  this1166 = v1163;
  unnamed1167 = v1164;
  struct std____new_allocator_std___List_node_int__* t1168 = this1166;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v1169, struct std__allocator_std___List_node_int__* v1170) {
bb1171:
  struct std__allocator_std___List_node_int__* this1172;
  struct std__allocator_std___List_node_int__* __a1173;
  this1172 = v1169;
  __a1173 = v1170;
  struct std__allocator_std___List_node_int__* t1174 = this1172;
  struct std____new_allocator_std___List_node_int__* base1175 = (struct std____new_allocator_std___List_node_int__*)((char *)t1174 + 0);
  struct std__allocator_std___List_node_int__* t1176 = __a1173;
  struct std____new_allocator_std___List_node_int__* base1177 = (struct std____new_allocator_std___List_node_int__*)((char *)t1176 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base1175, base1177);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1178) {
bb1179:
  struct std____detail___List_node_header* this1180;
  this1180 = v1178;
  struct std____detail___List_node_header* t1181 = this1180;
  struct std____detail___List_node_base* base1182 = (struct std____detail___List_node_base*)((char *)t1181 + 0);
  struct std____detail___List_size* base1183 = (struct std____detail___List_size*)((char *)t1181 + 16);
  std____detail___List_node_header___M_init(t1181);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1184, struct std____detail___List_size* v1185) {
bb1186:
  struct std____detail___List_size* this1187;
  struct std____detail___List_size* unnamed1188;
  struct std____detail___List_size* __retval1189;
  this1187 = v1184;
  unnamed1188 = v1185;
  struct std____detail___List_size* t1190 = this1187;
  struct std____detail___List_size* t1191 = unnamed1188;
  unsigned long t1192 = t1191->_M_size;
  t1190->_M_size = t1192;
  __retval1189 = t1190;
  struct std____detail___List_size* t1193 = __retval1189;
  return t1193;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1194) {
bb1195:
  struct std____detail___List_node_header* this1196;
  struct std____detail___List_size ref_tmp01197;
  this1196 = v1194;
  struct std____detail___List_node_header* t1198 = this1196;
  struct std____detail___List_node_base* base1199 = (struct std____detail___List_node_base*)((char *)t1198 + 0);
  struct std____detail___List_node_base* base1200 = (struct std____detail___List_node_base*)((char *)t1198 + 0);
  base1200->_M_prev = base1199;
  struct std____detail___List_node_base* base1201 = (struct std____detail___List_node_base*)((char *)t1198 + 0);
  base1201->_M_next = base1199;
  struct std____detail___List_size* base1202 = (struct std____detail___List_size*)((char *)t1198 + 16);
  ref_tmp01197 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1203 = std____detail___List_size__operator_(base1202, &ref_tmp01197);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1204, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1205) {
bb1206:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1207;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd1208;
  this1207 = v1204;
  __gd1208 = v1205;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1209 = this1207;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1210 = __gd1208;
  struct std__allocator_std___List_node_int__* t1211 = t1210->_M_alloc;
  t1209->_M_alloc = t1211;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1212 = __gd1208;
  struct std___List_node_int_* t1213 = t1212->_M_ptr;
  t1209->_M_ptr = t1213;
  struct std___List_node_int_* c1214 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1215 = __gd1208;
  t1215->_M_ptr = c1214;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v1216) {
bb1217:
  struct std___List_node_int_* __ptr1218;
  struct std___List_node_int_* __retval1219;
  __ptr1218 = v1216;
  struct std___List_node_int_* t1220 = __ptr1218;
  __retval1219 = t1220;
  struct std___List_node_int_* t1221 = __retval1219;
  return t1221;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v1222) {
bb1223:
  struct std___List_node_int_** __ptr1224;
  struct std___List_node_int_* __retval1225;
  __ptr1224 = v1222;
  struct std___List_node_int_** t1226 = __ptr1224;
  struct std___List_node_int_* t1227 = *t1226;
  struct std___List_node_int_* r1228 = std___List_node_int___std__to_address_std___List_node_int___(t1227);
  __retval1225 = r1228;
  struct std___List_node_int_* t1229 = __retval1225;
  return t1229;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1230) {
bb1231:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1232;
  struct std___List_node_int_* __retval1233;
  this1232 = v1230;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1234 = this1232;
  struct std___List_node_int_* r1235 = auto_std____to_address_std___List_node_int___(&t1234->_M_ptr);
  __retval1233 = r1235;
  struct std___List_node_int_* t1236 = __retval1233;
  return t1236;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1237) {
bb1238:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1239;
  _Bool __retval1240;
  this1239 = v1237;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1241 = this1239;
  struct std___List_node_int_* t1242 = t1241->_M_ptr;
  _Bool cast1243 = (_Bool)t1242;
  __retval1240 = cast1243;
  _Bool t1244 = __retval1240;
  return t1244;
}

