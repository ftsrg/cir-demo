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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_size/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[20] = "myints.size() == 10";
char _str_5[10] = "2. size: ";
char _str_6[20] = "myints.size() == 20";
char _str_7[10] = "3. size: ";
char _str_8[20] = "myints.size() == 19";
char _str_9[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv[74] = "void std::list<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[15] = "!this->empty()";
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
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
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* p0, struct std__allocator_std___List_node_int__* p1);
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool std__operator__(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
extern void abort();
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
extern void std____detail___List_node_base___M_transfer(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std___List_iterator_int_ p3);
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* p0);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, unsigned long p2, int* p3);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std___List_iterator_int_* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
extern void std____detail___List_node_base___M_unhook(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* p0);
int main();
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_base_2(struct std____cxx11___List_base_int__std__allocator_int__* p0);
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___List_node_int____M_valptr(struct std___List_node_int_* p0);
_Bool std____is_constant_evaluated();
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
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* p0);
void std__allocator_std___List_node_int_____allocator_2(struct std__allocator_std___List_node_int__* p0);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* p0, struct std__allocator_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0, struct std__allocator_std___List_node_int__* p1);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0, struct std____new_allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);

// function: _ZNSt7__cxx114listIiSaIiEEC2Ev
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* v0) {
bb1:
  struct std____cxx11__list_int__std__allocator_int__* this2;
  this2 = v0;
  struct std____cxx11__list_int__std__allocator_int__* t3 = this2;
  struct std____cxx11___List_base_int__std__allocator_int__* base4 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t3 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base_2(base4);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  int t30 = __state27;
  int r31 = std__operator_(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v32, char* v33) {
bb34:
  char* __c135;
  char* __c236;
  _Bool __retval37;
  __c135 = v32;
  __c236 = v33;
  char* t38 = __c135;
  char t39 = *t38;
  int cast40 = (int)t39;
  char* t41 = __c236;
  char t42 = *t41;
  int cast43 = (int)t42;
  _Bool c44 = ((cast40 == cast43)) ? 1 : 0;
  __retval37 = c44;
  _Bool t45 = __retval37;
  return t45;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v46) {
bb47:
  char* __p48;
  unsigned long __retval49;
  unsigned long __i50;
  __p48 = v46;
  unsigned long c51 = 0;
  __i50 = c51;
    char ref_tmp052;
    while (1) {
      unsigned long t53 = __i50;
      char* t54 = __p48;
      char* ptr55 = &(t54)[t53];
      char c56 = 0;
      ref_tmp052 = c56;
      _Bool r57 = __gnu_cxx__char_traits_char___eq(ptr55, &ref_tmp052);
      _Bool u58 = !r57;
      if (!u58) break;
      unsigned long t59 = __i50;
      unsigned long u60 = t59 + 1;
      __i50 = u60;
    }
  unsigned long t61 = __i50;
  __retval49 = t61;
  unsigned long t62 = __retval49;
  return t62;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v63) {
bb64:
  char* __s65;
  unsigned long __retval66;
  __s65 = v63;
    _Bool r67 = std____is_constant_evaluated();
    if (r67) {
      char* t68 = __s65;
      unsigned long r69 = __gnu_cxx__char_traits_char___length(t68);
      __retval66 = r69;
      unsigned long t70 = __retval66;
      return t70;
    }
  char* t71 = __s65;
  unsigned long r72 = strlen(t71);
  __retval66 = r72;
  unsigned long t73 = __retval66;
  return t73;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76:
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v104) {
bb105:
  struct std____cxx11___List_base_int__std__allocator_int__* this106;
  unsigned long __retval107;
  this106 = v104;
  struct std____cxx11___List_base_int__std__allocator_int__* t108 = this106;
  struct std____detail___List_size* base109 = (struct std____detail___List_size*)((char *)&(t108->_M_impl._M_node) + 16);
  unsigned long t110 = base109->_M_size;
  __retval107 = t110;
  unsigned long t111 = __retval107;
  return t111;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v112) {
bb113:
  struct std____cxx11__list_int__std__allocator_int__* this114;
  unsigned long __retval115;
  this114 = v112;
  struct std____cxx11__list_int__std__allocator_int__* t116 = this114;
  struct std____cxx11___List_base_int__std__allocator_int__* base117 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t116 + 0);
  unsigned long r118 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base117);
  __retval115 = r118;
  unsigned long t119 = __retval115;
  return t119;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v120, void* v121) {
bb122:
  struct std__basic_ostream_char__std__char_traits_char__* this123;
  void* __pf124;
  struct std__basic_ostream_char__std__char_traits_char__* __retval125;
  this123 = v120;
  __pf124 = v121;
  struct std__basic_ostream_char__std__char_traits_char__* t126 = this123;
  void* t127 = __pf124;
  struct std__basic_ostream_char__std__char_traits_char__* r128 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t127)(t126);
  __retval125 = r128;
  struct std__basic_ostream_char__std__char_traits_char__* t129 = __retval125;
  return t129;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v130) {
bb131:
  struct std__basic_ostream_char__std__char_traits_char__* __os132;
  struct std__basic_ostream_char__std__char_traits_char__* __retval133;
  __os132 = v130;
  struct std__basic_ostream_char__std__char_traits_char__* t134 = __os132;
  struct std__basic_ostream_char__std__char_traits_char__* r135 = std__ostream__flush(t134);
  __retval133 = r135;
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __retval133;
  return t136;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v137) {
bb138:
  struct std__ctype_char_* __f139;
  struct std__ctype_char_* __retval140;
  __f139 = v137;
    struct std__ctype_char_* t141 = __f139;
    _Bool cast142 = (_Bool)t141;
    _Bool u143 = !cast142;
    if (u143) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t144 = __f139;
  __retval140 = t144;
  struct std__ctype_char_* t145 = __retval140;
  return t145;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v146, char v147) {
bb148:
  struct std__ctype_char_* this149;
  char __c150;
  char __retval151;
  this149 = v146;
  __c150 = v147;
  struct std__ctype_char_* t152 = this149;
    char t153 = t152->_M_widen_ok;
    _Bool cast154 = (_Bool)t153;
    if (cast154) {
      char t155 = __c150;
      unsigned char cast156 = (unsigned char)t155;
      unsigned long cast157 = (unsigned long)cast156;
      char t158 = t152->_M_widen[cast157];
      __retval151 = t158;
      char t159 = __retval151;
      return t159;
    }
  std__ctype_char____M_widen_init___const(t152);
  char t160 = __c150;
  void** v161 = (void**)t152;
  void* v162 = *((void**)v161);
  char vcall165 = (char)__VERIFIER_virtual_call_char_char(t152, 6, t160);
  __retval151 = vcall165;
  char t166 = __retval151;
  return t166;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v167, char v168) {
bb169:
  struct std__basic_ios_char__std__char_traits_char__* this170;
  char __c171;
  char __retval172;
  this170 = v167;
  __c171 = v168;
  struct std__basic_ios_char__std__char_traits_char__* t173 = this170;
  struct std__ctype_char_* t174 = t173->_M_ctype;
  struct std__ctype_char_* r175 = std__ctype_char__const__std____check_facet_std__ctype_char___(t174);
  char t176 = __c171;
  char r177 = std__ctype_char___widen_char__const(r175, t176);
  __retval172 = r177;
  char t178 = __retval172;
  return t178;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v179) {
bb180:
  struct std__basic_ostream_char__std__char_traits_char__* __os181;
  struct std__basic_ostream_char__std__char_traits_char__* __retval182;
  __os181 = v179;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __os181;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = __os181;
  void** v185 = (void**)t184;
  void* v186 = *((void**)v185);
  unsigned char* cast187 = (unsigned char*)v186;
  long c188 = -24;
  unsigned char* ptr189 = &(cast187)[c188];
  long* cast190 = (long*)ptr189;
  long t191 = *cast190;
  unsigned char* cast192 = (unsigned char*)t184;
  unsigned char* ptr193 = &(cast192)[t191];
  struct std__basic_ostream_char__std__char_traits_char__* cast194 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr193;
  struct std__basic_ios_char__std__char_traits_char__* cast195 = (struct std__basic_ios_char__std__char_traits_char__*)cast194;
  char c196 = 10;
  char r197 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast195, c196);
  struct std__basic_ostream_char__std__char_traits_char__* r198 = std__ostream__put(t183, r197);
  struct std__basic_ostream_char__std__char_traits_char__* r199 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r198);
  __retval182 = r199;
  struct std__basic_ostream_char__std__char_traits_char__* t200 = __retval182;
  return t200;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v201) {
bb202:
  struct std____cxx11___List_base_int__std__allocator_int__* this203;
  struct std__allocator_std___List_node_int__* __retval204;
  this203 = v201;
  struct std____cxx11___List_base_int__std__allocator_int__* t205 = this203;
  struct std__allocator_std___List_node_int__* base206 = (struct std__allocator_std___List_node_int__*)((char *)&(t205->_M_impl) + 0);
  __retval204 = base206;
  struct std__allocator_std___List_node_int__* t207 = __retval204;
  return t207;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v208) {
bb209:
  struct std____new_allocator_std___List_node_int__* this210;
  unsigned long __retval211;
  this210 = v208;
  struct std____new_allocator_std___List_node_int__* t212 = this210;
  unsigned long c213 = 9223372036854775807;
  unsigned long c214 = 24;
  unsigned long b215 = c213 / c214;
  __retval211 = b215;
  unsigned long t216 = __retval211;
  return t216;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v217, unsigned long v218, void* v219) {
bb220:
  struct std____new_allocator_std___List_node_int__* this221;
  unsigned long __n222;
  void* unnamed223;
  struct std___List_node_int_* __retval224;
  this221 = v217;
  __n222 = v218;
  unnamed223 = v219;
  struct std____new_allocator_std___List_node_int__* t225 = this221;
    unsigned long t226 = __n222;
    unsigned long r227 = std____new_allocator_std___List_node_int______M_max_size___const(t225);
    _Bool c228 = ((t226 > r227)) ? 1 : 0;
    if (c228) {
        unsigned long t229 = __n222;
        unsigned long c230 = -1;
        unsigned long c231 = 24;
        unsigned long b232 = c230 / c231;
        _Bool c233 = ((t229 > b232)) ? 1 : 0;
        if (c233) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c234 = 8;
    unsigned long c235 = 16;
    _Bool c236 = ((c234 > c235)) ? 1 : 0;
    if (c236) {
      unsigned long __al237;
      unsigned long c238 = 8;
      __al237 = c238;
      unsigned long t239 = __n222;
      unsigned long c240 = 24;
      unsigned long b241 = t239 * c240;
      unsigned long t242 = __al237;
      void* r243 = operator_new_2(b241, t242);
      struct std___List_node_int_* cast244 = (struct std___List_node_int_*)r243;
      __retval224 = cast244;
      struct std___List_node_int_* t245 = __retval224;
      return t245;
    }
  unsigned long t246 = __n222;
  unsigned long c247 = 24;
  unsigned long b248 = t246 * c247;
  void* r249 = operator_new(b248);
  struct std___List_node_int_* cast250 = (struct std___List_node_int_*)r249;
  __retval224 = cast250;
  struct std___List_node_int_* t251 = __retval224;
  return t251;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v252, unsigned long v253) {
bb254:
  struct std__allocator_std___List_node_int__* this255;
  unsigned long __n256;
  struct std___List_node_int_* __retval257;
  this255 = v252;
  __n256 = v253;
  struct std__allocator_std___List_node_int__* t258 = this255;
    _Bool r259 = std____is_constant_evaluated();
    if (r259) {
        unsigned long t260 = __n256;
        unsigned long c261 = 24;
        unsigned long ovr262;
        _Bool ovf263 = __builtin_mul_overflow(t260, c261, &ovr262);
        __n256 = ovr262;
        if (ovf263) {
          std____throw_bad_array_new_length();
        }
      unsigned long t264 = __n256;
      void* r265 = operator_new(t264);
      struct std___List_node_int_* cast266 = (struct std___List_node_int_*)r265;
      __retval257 = cast266;
      struct std___List_node_int_* t267 = __retval257;
      return t267;
    }
  struct std____new_allocator_std___List_node_int__* base268 = (struct std____new_allocator_std___List_node_int__*)((char *)t258 + 0);
  unsigned long t269 = __n256;
  void* c270 = ((void*)0);
  struct std___List_node_int_* r271 = std____new_allocator_std___List_node_int_____allocate(base268, t269, c270);
  __retval257 = r271;
  struct std___List_node_int_* t272 = __retval257;
  return t272;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v273, unsigned long v274) {
bb275:
  struct std__allocator_std___List_node_int__* __a276;
  unsigned long __n277;
  struct std___List_node_int_* __retval278;
  __a276 = v273;
  __n277 = v274;
  struct std__allocator_std___List_node_int__* t279 = __a276;
  unsigned long t280 = __n277;
  struct std___List_node_int_* r281 = std__allocator_std___List_node_int_____allocate(t279, t280);
  __retval278 = r281;
  struct std___List_node_int_* t282 = __retval278;
  return t282;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v283, struct std__allocator_std___List_node_int__* v284, struct std___List_node_int_* v285) {
bb286:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this287;
  struct std__allocator_std___List_node_int__* __a288;
  struct std___List_node_int_* __ptr289;
  this287 = v283;
  __a288 = v284;
  __ptr289 = v285;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t290 = this287;
  struct std__allocator_std___List_node_int__* t291 = __a288;
  t290->_M_alloc = t291;
  struct std___List_node_int_* t292 = __ptr289;
  t290->_M_ptr = t292;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v293) {
bb294:
  struct std__allocator_std___List_node_int__* __a295;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval296;
  __a295 = v293;
  struct std__allocator_std___List_node_int__* t297 = __a295;
  struct std__allocator_std___List_node_int__* t298 = __a295;
  unsigned long c299 = 1;
  struct std___List_node_int_* r300 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t298, c299);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval296, t297, r300);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t301 = __retval296;
  return t301;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v302, struct std____allocated_ptr_std__allocator_std___List_node_int___* v303) {
bb304:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this305;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr306;
  this305 = v302;
  __ptr306 = v303;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t307 = this305;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base308 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t307 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t309 = __ptr306;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base308, t309);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base310 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t307 + 0);
    struct std___List_node_int_* r311 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base310);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v312) {
bb313:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this314;
  this314 = v312;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t315 = this314;
    struct std___List_node_int_* t316 = t315->_M_ptr;
    struct std___List_node_int_* c317 = ((void*)0);
    _Bool c318 = ((t316 != c317)) ? 1 : 0;
    if (c318) {
      struct std__allocator_std___List_node_int__* t319 = t315->_M_alloc;
      struct std___List_node_int_* t320 = t315->_M_ptr;
      unsigned long c321 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t319, t320, c321);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v322) {
bb323:
  struct std__allocator_std___List_node_int__* __a324;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval325;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0326;
  __a324 = v322;
  struct std__allocator_std___List_node_int__* t327 = __a324;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r328 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t327);
  ref_tmp0326 = r328;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval325, &ref_tmp0326);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0326);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t329 = __retval325;
  return t329;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v330, int* v331) {
bb332:
  int* __location333;
  int* __args334;
  int* __retval335;
  void* __loc336;
  __location333 = v330;
  __args334 = v331;
  int* t337 = __location333;
  void* cast338 = (void*)t337;
  __loc336 = cast338;
    void* t339 = __loc336;
    int* cast340 = (int*)t339;
    int* t341 = __args334;
    int t342 = *t341;
    *cast340 = t342;
    __retval335 = cast340;
    int* t343 = __retval335;
    return t343;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v344, int* v345, int* v346) {
bb347:
  struct std__allocator_std___List_node_int__* __a348;
  int* __p349;
  int* __args350;
  __a348 = v344;
  __p349 = v345;
  __args350 = v346;
  int* t351 = __p349;
  int* t352 = __args350;
  int* r353 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t351, t352);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v354) {
bb355:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this356;
  struct std___List_node_int_* __retval357;
  this356 = v354;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t358 = this356;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base359 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t358 + 0);
  struct std___List_node_int_* r360 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base359);
  __retval357 = r360;
  struct std___List_node_int_* t361 = __retval357;
  return t361;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v362, void** v363) {
bb364:
  struct std___List_node_int_** __obj365;
  void** __new_val366;
  struct std___List_node_int_* __retval367;
  struct std___List_node_int_* __old_val368;
  __obj365 = v362;
  __new_val366 = v363;
  struct std___List_node_int_** t369 = __obj365;
  struct std___List_node_int_* t370 = *t369;
  __old_val368 = t370;
  void** t371 = __new_val366;
  struct std___List_node_int_* c372 = ((void*)0);
  struct std___List_node_int_** t373 = __obj365;
  *t373 = c372;
  struct std___List_node_int_* t374 = __old_val368;
  __retval367 = t374;
  struct std___List_node_int_* t375 = __retval367;
  return t375;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v376) {
bb377:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this378;
  struct std___List_node_int_* __retval379;
  void* ref_tmp0380;
  this378 = v376;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t381 = this378;
  void* c382 = ((void*)0);
  ref_tmp0380 = c382;
  struct std___List_node_int_* r383 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t381->_M_ptr, &ref_tmp0380);
  __retval379 = r383;
  struct std___List_node_int_* t384 = __retval379;
  return t384;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v385) {
bb386:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this387;
  this387 = v385;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t388 = this387;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base389 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t388 + 0);
      _Bool r390 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base389);
      if (r390) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base391 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t388 + 0);
        struct std___List_node_int_* r392 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base391);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base393 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t388 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base393);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v394, int* v395) {
bb396:
  struct std____cxx11__list_int__std__allocator_int__* this397;
  int* __args398;
  struct std___List_node_int_* __retval399;
  struct std__allocator_std___List_node_int__* __alloc400;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard401;
  this397 = v394;
  __args398 = v395;
  struct std____cxx11__list_int__std__allocator_int__* t402 = this397;
  struct std____cxx11___List_base_int__std__allocator_int__* base403 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t402 + 0);
  struct std__allocator_std___List_node_int__* r404 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base403);
  __alloc400 = r404;
  struct std__allocator_std___List_node_int__* t405 = __alloc400;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r406 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t405);
  __guard401 = r406;
    struct std__allocator_std___List_node_int__* t407 = __alloc400;
    struct std___List_node_int_* r408 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard401);
    int* r409 = std___List_node_int____M_valptr(r408);
    int* t410 = __args398;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t407, r409, t410);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base411 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard401) + 0);
    struct std___List_node_int_* r412 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base411);
    __retval399 = r412;
    struct std___List_node_int_* t413 = __retval399;
    struct std___List_node_int_* ret_val414 = t413;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard401);
    }
    return ret_val414;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v415, unsigned long v416) {
bb417:
  struct std____cxx11___List_base_int__std__allocator_int__* this418;
  unsigned long __n419;
  this418 = v415;
  __n419 = v416;
  struct std____cxx11___List_base_int__std__allocator_int__* t420 = this418;
  unsigned long t421 = __n419;
  struct std____detail___List_size* base422 = (struct std____detail___List_size*)((char *)&(t420->_M_impl._M_node) + 16);
  unsigned long t423 = base422->_M_size;
  unsigned long b424 = t423 + t421;
  base422->_M_size = b424;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v425, struct std___List_iterator_int_ v426, int* v427) {
bb428:
  struct std____cxx11__list_int__std__allocator_int__* this429;
  struct std___List_iterator_int_ __position430;
  int* __args431;
  struct std___List_node_int_* __tmp432;
  this429 = v425;
  __position430 = v426;
  __args431 = v427;
  struct std____cxx11__list_int__std__allocator_int__* t433 = this429;
  int* t434 = __args431;
  struct std___List_node_int_* r435 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t433, t434);
  __tmp432 = r435;
  struct std___List_node_int_* t436 = __tmp432;
  struct std____detail___List_node_base* base437 = (struct std____detail___List_node_base*)((char *)t436 + 0);
  struct std____detail___List_node_base* t438 = __position430._M_node;
  std____detail___List_node_base___M_hook(base437, t438);
  struct std____cxx11___List_base_int__std__allocator_int__* base439 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t433 + 0);
  unsigned long c440 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base439, c440);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v441, struct std____detail___List_node_base* v442) {
bb443:
  struct std___List_iterator_int_* this444;
  struct std____detail___List_node_base* __x445;
  this444 = v441;
  __x445 = v442;
  struct std___List_iterator_int_* t446 = this444;
  struct std____detail___List_node_base* t447 = __x445;
  t446->_M_node = t447;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v448) {
bb449:
  struct std____cxx11__list_int__std__allocator_int__* this450;
  struct std___List_iterator_int_ __retval451;
  this450 = v448;
  struct std____cxx11__list_int__std__allocator_int__* t452 = this450;
  struct std____cxx11___List_base_int__std__allocator_int__* base453 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t452 + 0);
  struct std____detail___List_node_base* r454 = std____detail___List_node_header___M_base(&base453->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval451, r454);
  struct std___List_iterator_int_ t455 = __retval451;
  return t455;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v456, int* v457) {
bb458:
  struct std____cxx11__list_int__std__allocator_int__* this459;
  int* __x460;
  struct std___List_iterator_int_ agg_tmp0461;
  this459 = v456;
  __x460 = v457;
  struct std____cxx11__list_int__std__allocator_int__* t462 = this459;
  struct std___List_iterator_int_ r463 = std____cxx11__list_int__std__allocator_int_____end(t462);
  agg_tmp0461 = r463;
  int* t464 = __x460;
  struct std___List_iterator_int_ t465 = agg_tmp0461;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t462, t465, t464);
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v466) {
bb467:
  struct std____cxx11___List_base_int__std__allocator_int__* this468;
  struct std__allocator_std___List_node_int__* __retval469;
  this468 = v466;
  struct std____cxx11___List_base_int__std__allocator_int__* t470 = this468;
  struct std__allocator_std___List_node_int__* base471 = (struct std__allocator_std___List_node_int__*)((char *)&(t470->_M_impl) + 0);
  __retval469 = base471;
  struct std__allocator_std___List_node_int__* t472 = __retval469;
  return t472;
}

// function: _ZNSaIiEC2ISt10_List_nodeIiEEERKSaIT_E
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* v473, struct std__allocator_std___List_node_int__* v474) {
bb475:
  struct std__allocator_int_* this476;
  struct std__allocator_std___List_node_int__* unnamed477;
  this476 = v473;
  unnamed477 = v474;
  struct std__allocator_int_* t478 = this476;
  struct std____new_allocator_int_* base479 = (struct std____new_allocator_int_*)((char *)t478 + 0);
  std____new_allocator_int_____new_allocator(base479);
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE13get_allocatorEv
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* v480) {
bb481:
  struct std____cxx11__list_int__std__allocator_int__* this482;
  struct std__allocator_int_ __retval483;
  this482 = v480;
  struct std____cxx11__list_int__std__allocator_int__* t484 = this482;
  struct std____cxx11___List_base_int__std__allocator_int__* base485 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t484 + 0);
  struct std__allocator_std___List_node_int__* r486 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base485);
  std__allocator_int___allocator_std___List_node_int___(&__retval483, r486);
  struct std__allocator_int_ t487 = __retval483;
  return t487;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2EmRKiRKS1_
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v488, unsigned long v489, int* v490, struct std__allocator_int_* v491) {
bb492:
  struct std____cxx11__list_int__std__allocator_int__* this493;
  unsigned long __n494;
  int* __value495;
  struct std__allocator_int_* __a496;
  struct std__allocator_std___List_node_int__ ref_tmp0497;
  this493 = v488;
  __n494 = v489;
  __value495 = v490;
  __a496 = v491;
  struct std____cxx11__list_int__std__allocator_int__* t498 = this493;
  struct std____cxx11___List_base_int__std__allocator_int__* base499 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t498 + 0);
  struct std__allocator_int_* t500 = __a496;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp0497, t500);
    std____cxx11___List_base_int__std__allocator_int______List_base(base499, &ref_tmp0497);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0497);
  }
    unsigned long t501 = __n494;
    int* t502 = __value495;
    std____cxx11__list_int__std__allocator_int______M_fill_initialize(t498, t501, t502);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v503) {
bb504:
  struct std__allocator_int_* this505;
  this505 = v503;
  struct std__allocator_int_* t506 = this505;
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v507) {
bb508:
  struct std____detail___List_node_base* this509;
  struct std____detail___List_node_base* __retval510;
  this509 = v507;
  struct std____detail___List_node_base* t511 = this509;
  __retval510 = t511;
  struct std____detail___List_node_base* t512 = __retval510;
  return t512;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v513) {
bb514:
  struct std____cxx11__list_int__std__allocator_int__* this515;
  _Bool __retval516;
  this515 = v513;
  struct std____cxx11__list_int__std__allocator_int__* t517 = this515;
  struct std____cxx11___List_base_int__std__allocator_int__* base518 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t517 + 0);
  struct std____detail___List_node_base* base519 = (struct std____detail___List_node_base*)((char *)&(base518->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t520 = base519->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base521 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t517 + 0);
  struct std____detail___List_node_base* base522 = (struct std____detail___List_node_base*)((char *)&(base521->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r523 = std____detail___List_node_base___M_base___const(base522);
  _Bool c524 = ((t520 == r523)) ? 1 : 0;
  __retval516 = c524;
  _Bool t525 = __retval516;
  return t525;
}

// function: _ZSteqRKSaISt10_List_nodeIiEES3_
_Bool std__operator__(struct std__allocator_std___List_node_int__* v526, struct std__allocator_std___List_node_int__* v527) {
bb528:
  struct std__allocator_std___List_node_int__* unnamed529;
  struct std__allocator_std___List_node_int__* unnamed530;
  _Bool __retval531;
  unnamed529 = v526;
  unnamed530 = v527;
  _Bool c532 = 1;
  __retval531 = c532;
  _Bool t533 = __retval531;
  return t533;
}

// function: _ZNSt7__cxx114listIiSaIiEE25_M_check_equal_allocatorsERKS2_
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* v534, struct std____cxx11__list_int__std__allocator_int__* v535) {
bb536:
  struct std____cxx11__list_int__std__allocator_int__* this537;
  struct std____cxx11__list_int__std__allocator_int__* __x538;
  this537 = v534;
  __x538 = v535;
  struct std____cxx11__list_int__std__allocator_int__* t539 = this537;
    struct std____cxx11___List_base_int__std__allocator_int__* base540 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t539 + 0);
    struct std__allocator_std___List_node_int__* r541 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base540);
    struct std____cxx11__list_int__std__allocator_int__* t542 = __x538;
    struct std____cxx11___List_base_int__std__allocator_int__* base543 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t542 + 0);
    struct std__allocator_std___List_node_int__* r544 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base543);
    _Bool r545 = std__operator__(r541, r544);
    _Bool u546 = !r545;
    if (u546) {
      abort();
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE11_M_transferESt14_List_iteratorIiES4_S4_
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* v547, struct std___List_iterator_int_ v548, struct std___List_iterator_int_ v549, struct std___List_iterator_int_ v550) {
bb551:
  struct std____cxx11__list_int__std__allocator_int__* this552;
  struct std___List_iterator_int_ __position553;
  struct std___List_iterator_int_ __first554;
  struct std___List_iterator_int_ __last555;
  this552 = v547;
  __position553 = v548;
  __first554 = v549;
  __last555 = v550;
  struct std____cxx11__list_int__std__allocator_int__* t556 = this552;
  struct std____detail___List_node_base* t557 = __position553._M_node;
  struct std____detail___List_node_base* t558 = __first554._M_node;
  struct std____detail___List_node_base* t559 = __last555._M_node;
  std____detail___List_node_base___M_transfer(t557, t558, t559);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_set_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* v560, unsigned long v561) {
bb562:
  struct std____cxx11___List_base_int__std__allocator_int__* this563;
  unsigned long __n564;
  this563 = v560;
  __n564 = v561;
  struct std____cxx11___List_base_int__std__allocator_int__* t565 = this563;
  unsigned long t566 = __n564;
  struct std____detail___List_size* base567 = (struct std____detail___List_size*)((char *)&(t565->_M_impl._M_node) + 16);
  base567->_M_size = t566;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* v568, struct std___List_const_iterator_int_ v569, struct std____cxx11__list_int__std__allocator_int__* v570) {
bb571:
  struct std____cxx11__list_int__std__allocator_int__* this572;
  struct std___List_const_iterator_int_ __position573;
  struct std____cxx11__list_int__std__allocator_int__* __x574;
  this572 = v568;
  __position573 = v569;
  __x574 = v570;
  struct std____cxx11__list_int__std__allocator_int__* t575 = this572;
    struct std____cxx11__list_int__std__allocator_int__* t576 = __x574;
    _Bool r577 = std____cxx11__list_int__std__allocator_int_____empty___const(t576);
    _Bool u578 = !r577;
    if (u578) {
      struct std___List_iterator_int_ agg_tmp0579;
      struct std___List_iterator_int_ agg_tmp1580;
      struct std___List_iterator_int_ agg_tmp2581;
      struct std____cxx11__list_int__std__allocator_int__* t582 = __x574;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t575, t582);
      struct std___List_iterator_int_ r583 = std___List_const_iterator_int____M_const_cast___const(&__position573);
      agg_tmp0579 = r583;
      struct std____cxx11__list_int__std__allocator_int__* t584 = __x574;
      struct std___List_iterator_int_ r585 = std____cxx11__list_int__std__allocator_int_____begin(t584);
      agg_tmp1580 = r585;
      struct std____cxx11__list_int__std__allocator_int__* t586 = __x574;
      struct std___List_iterator_int_ r587 = std____cxx11__list_int__std__allocator_int_____end(t586);
      agg_tmp2581 = r587;
      struct std___List_iterator_int_ t588 = agg_tmp0579;
      struct std___List_iterator_int_ t589 = agg_tmp1580;
      struct std___List_iterator_int_ t590 = agg_tmp2581;
      std____cxx11__list_int__std__allocator_int______M_transfer(t575, t588, t589, t590);
      struct std____cxx11___List_base_int__std__allocator_int__* base591 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t575 + 0);
      struct std____cxx11__list_int__std__allocator_int__* t592 = __x574;
      struct std____cxx11___List_base_int__std__allocator_int__* base593 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t592 + 0);
      unsigned long r594 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base593);
      std____cxx11___List_base_int__std__allocator_int______M_inc_size(base591, r594);
      struct std____cxx11__list_int__std__allocator_int__* t595 = __x574;
      struct std____cxx11___List_base_int__std__allocator_int__* base596 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t595 + 0);
      unsigned long c597 = 0;
      std____cxx11___List_base_int__std__allocator_int______M_set_size(base596, c597);
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* v598, struct std___List_const_iterator_int_ v599, struct std____cxx11__list_int__std__allocator_int__* v600) {
bb601:
  struct std____cxx11__list_int__std__allocator_int__* this602;
  struct std___List_const_iterator_int_ __position603;
  struct std____cxx11__list_int__std__allocator_int__* __x604;
  struct std___List_const_iterator_int_ agg_tmp0605;
  this602 = v598;
  __position603 = v599;
  __x604 = v600;
  struct std____cxx11__list_int__std__allocator_int__* t606 = this602;
  agg_tmp0605 = __position603; // copy
  struct std____cxx11__list_int__std__allocator_int__* t607 = __x604;
  struct std___List_const_iterator_int_ t608 = agg_tmp0605;
  std____cxx11__list_int__std__allocator_int_____splice(t606, t608, t607);
  return;
}

// function: _ZNKSt20_List_const_iteratorIiE13_M_const_castEv
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* v609) {
bb610:
  struct std___List_const_iterator_int_* this611;
  struct std___List_iterator_int_ __retval612;
  this611 = v609;
  struct std___List_const_iterator_int_* t613 = this611;
  struct std____detail___List_node_base* t614 = t613->_M_node;
  std___List_iterator_int____List_iterator(&__retval612, t614);
  struct std___List_iterator_int_ t615 = __retval612;
  return t615;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertESt20_List_const_iteratorIiEmRKi
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert(struct std____cxx11__list_int__std__allocator_int__* v616, struct std___List_const_iterator_int_ v617, unsigned long v618, int* v619) {
bb620:
  struct std____cxx11__list_int__std__allocator_int__* this621;
  struct std___List_const_iterator_int_ __position622;
  unsigned long __n623;
  int* __x624;
  struct std___List_iterator_int_ __retval625;
  this621 = v616;
  __position622 = v617;
  __n623 = v618;
  __x624 = v619;
  struct std____cxx11__list_int__std__allocator_int__* t626 = this621;
    unsigned long t627 = __n623;
    _Bool cast628 = (_Bool)t627;
    if (cast628) {
      struct std____cxx11__list_int__std__allocator_int__ __tmp629;
      struct std__allocator_int_ ref_tmp0630;
      struct std___List_const_iterator_int_ agg_tmp0631;
      unsigned long t632 = __n623;
      int* t633 = __x624;
      struct std__allocator_int_ r634 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t626);
      ref_tmp0630 = r634;
        std____cxx11__list_int__std__allocator_int_____list(&__tmp629, t632, t633, &ref_tmp0630);
      {
        std__allocator_int____allocator(&ref_tmp0630);
      }
        struct std___List_iterator_int_ r635 = std____cxx11__list_int__std__allocator_int_____begin(&__tmp629);
        __retval625 = r635;
        agg_tmp0631 = __position622; // copy
        struct std___List_const_iterator_int_ t636 = agg_tmp0631;
        std____cxx11__list_int__std__allocator_int_____splice_2(t626, t636, &__tmp629);
        struct std___List_iterator_int_ t637 = __retval625;
        struct std___List_iterator_int_ ret_val638 = t637;
        {
          std____cxx11__list_int__std__allocator_int______list(&__tmp629);
        }
        return ret_val638;
    }
  struct std___List_iterator_int_ r639 = std___List_const_iterator_int____M_const_cast___const(&__position622);
  __retval625 = r639;
  struct std___List_iterator_int_ t640 = __retval625;
  return t640;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v641) {
bb642:
  struct std____cxx11__list_int__std__allocator_int__* this643;
  struct std___List_iterator_int_ __retval644;
  this643 = v641;
  struct std____cxx11__list_int__std__allocator_int__* t645 = this643;
  struct std____cxx11___List_base_int__std__allocator_int__* base646 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t645 + 0);
  struct std____detail___List_node_base* base647 = (struct std____detail___List_node_base*)((char *)&(base646->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t648 = base647->_M_next;
  std___List_iterator_int____List_iterator(&__retval644, t648);
  struct std___List_iterator_int_ t649 = __retval644;
  return t649;
}

// function: _ZNSt20_List_const_iteratorIiEC2ERKSt14_List_iteratorIiE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v650, struct std___List_iterator_int_* v651) {
bb652:
  struct std___List_const_iterator_int_* this653;
  struct std___List_iterator_int_* __x654;
  this653 = v650;
  __x654 = v651;
  struct std___List_const_iterator_int_* t655 = this653;
  struct std___List_iterator_int_* t656 = __x654;
  struct std____detail___List_node_base* t657 = t656->_M_node;
  t655->_M_node = t657;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v658, unsigned long v659) {
bb660:
  struct std____cxx11___List_base_int__std__allocator_int__* this661;
  unsigned long __n662;
  this661 = v658;
  __n662 = v659;
  struct std____cxx11___List_base_int__std__allocator_int__* t663 = this661;
  unsigned long t664 = __n662;
  struct std____detail___List_size* base665 = (struct std____detail___List_size*)((char *)&(t663->_M_impl._M_node) + 16);
  unsigned long t666 = base665->_M_size;
  unsigned long b667 = t666 - t664;
  base665->_M_size = b667;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* v668, struct std___List_iterator_int_ v669) {
bb670:
  struct std____cxx11__list_int__std__allocator_int__* this671;
  struct std___List_iterator_int_ __position672;
  struct std___List_node_int_* __n673;
  this671 = v668;
  __position672 = v669;
  struct std____cxx11__list_int__std__allocator_int__* t674 = this671;
  struct std____cxx11___List_base_int__std__allocator_int__* base675 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t674 + 0);
  unsigned long c676 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base675, c676);
  struct std____detail___List_node_base* t677 = __position672._M_node;
  std____detail___List_node_base___M_unhook(t677);
  struct std____detail___List_node_base* t678 = __position672._M_node;
  struct std___List_node_int_* derived679 = (struct std___List_node_int_*)((char *)t678 - 0);
  __n673 = derived679;
  struct std____cxx11___List_base_int__std__allocator_int__* base680 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t674 + 0);
  struct std___List_node_int_* t681 = __n673;
  struct std___List_node_int_* r682 = std___List_node_int____M_node_ptr(t681);
  std____cxx11___List_base_int__std__allocator_int______M_destroy_node(base680, r682);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8pop_backEv
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* v683) {
bb684:
  struct std____cxx11__list_int__std__allocator_int__* this685;
  struct std___List_iterator_int_ agg_tmp0686;
  this685 = v683;
  struct std____cxx11__list_int__std__allocator_int__* t687 = this685;
    do {
          _Bool r688 = std____cxx11__list_int__std__allocator_int_____empty___const(t687);
          if (r688) {
            char* cast689 = (char*)&(_str_9);
            int c690 = 1840;
            char* cast691 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv);
            char* cast692 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast689, c690, cast691, cast692);
          }
      _Bool c693 = 0;
      if (!c693) break;
    } while (1);
  struct std____cxx11___List_base_int__std__allocator_int__* base694 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t687 + 0);
  struct std____detail___List_node_base* base695 = (struct std____detail___List_node_base*)((char *)&(base694->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t696 = base695->_M_prev;
  std___List_iterator_int____List_iterator(&agg_tmp0686, t696);
  struct std___List_iterator_int_ t697 = agg_tmp0686;
  std____cxx11__list_int__std__allocator_int______M_erase(t687, t697);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v698) {
bb699:
  struct std____cxx11__list_int__std__allocator_int__* this700;
  this700 = v698;
  struct std____cxx11__list_int__std__allocator_int__* t701 = this700;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base702 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t701 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base702);
  }
  return;
}

// function: main
int main() {
bb703:
  int __retval704;
  struct std____cxx11__list_int__std__allocator_int__ myints705;
  struct std___List_const_iterator_int_ agg_tmp0706;
  struct std___List_iterator_int_ ref_tmp0707;
  int ref_tmp1708;
  struct std___List_iterator_int_ agg_tmp1709;
  int c710 = 0;
  __retval704 = c710;
  std____cxx11__list_int__std__allocator_int_____list_2(&myints705);
    char* cast711 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r712 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast711);
    unsigned long r713 = std____cxx11__list_int__std__allocator_int_____size___const(&myints705);
    int cast714 = (int)r713;
    struct std__basic_ostream_char__std__char_traits_char__* r715 = std__ostream__operator__(r712, cast714);
    struct std__basic_ostream_char__std__char_traits_char__* r716 = std__ostream__operator___std__ostream_____(r715, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long r717 = std____cxx11__list_int__std__allocator_int_____size___const(&myints705);
    unsigned long c718 = 0;
    _Bool c719 = ((r717 == c718)) ? 1 : 0;
    if (c719) {
    } else {
      char* cast720 = (char*)&(_str_1);
      char* c721 = _str_2;
      unsigned int c722 = 18;
      char* cast723 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast720, c721, c722, cast723);
    }
      int i724;
      int c725 = 0;
      i724 = c725;
      while (1) {
        int t727 = i724;
        int c728 = 10;
        _Bool c729 = ((t727 < c728)) ? 1 : 0;
        if (!c729) break;
        std____cxx11__list_int__std__allocator_int_____push_back(&myints705, &i724);
      for_step726: ;
        int t730 = i724;
        int u731 = t730 + 1;
        i724 = u731;
      }
    char* cast732 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r733 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast732);
    unsigned long r734 = std____cxx11__list_int__std__allocator_int_____size___const(&myints705);
    int cast735 = (int)r734;
    struct std__basic_ostream_char__std__char_traits_char__* r736 = std__ostream__operator__(r733, cast735);
    struct std__basic_ostream_char__std__char_traits_char__* r737 = std__ostream__operator___std__ostream_____(r736, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long r738 = std____cxx11__list_int__std__allocator_int_____size___const(&myints705);
    unsigned long c739 = 10;
    _Bool c740 = ((r738 == c739)) ? 1 : 0;
    if (c740) {
    } else {
      char* cast741 = (char*)&(_str_4);
      char* c742 = _str_2;
      unsigned int c743 = 21;
      char* cast744 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast741, c742, c743, cast744);
    }
    struct std___List_iterator_int_ r745 = std____cxx11__list_int__std__allocator_int_____begin(&myints705);
    ref_tmp0707 = r745;
    std___List_const_iterator_int____List_const_iterator(&agg_tmp0706, &ref_tmp0707);
    unsigned long c746 = 10;
    int c747 = 100;
    ref_tmp1708 = c747;
    struct std___List_const_iterator_int_ t748 = agg_tmp0706;
    struct std___List_iterator_int_ r749 = std____cxx11__list_int__std__allocator_int_____insert(&myints705, t748, c746, &ref_tmp1708);
    agg_tmp1709 = r749;
    char* cast750 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r751 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast750);
    unsigned long r752 = std____cxx11__list_int__std__allocator_int_____size___const(&myints705);
    int cast753 = (int)r752;
    struct std__basic_ostream_char__std__char_traits_char__* r754 = std__ostream__operator__(r751, cast753);
    struct std__basic_ostream_char__std__char_traits_char__* r755 = std__ostream__operator___std__ostream_____(r754, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long r756 = std____cxx11__list_int__std__allocator_int_____size___const(&myints705);
    unsigned long c757 = 20;
    _Bool c758 = ((r756 == c757)) ? 1 : 0;
    if (c758) {
    } else {
      char* cast759 = (char*)&(_str_6);
      char* c760 = _str_2;
      unsigned int c761 = 24;
      char* cast762 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast759, c760, c761, cast762);
    }
    std____cxx11__list_int__std__allocator_int_____pop_back(&myints705);
    char* cast763 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r764 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast763);
    unsigned long r765 = std____cxx11__list_int__std__allocator_int_____size___const(&myints705);
    int cast766 = (int)r765;
    struct std__basic_ostream_char__std__char_traits_char__* r767 = std__ostream__operator__(r764, cast766);
    struct std__basic_ostream_char__std__char_traits_char__* r768 = std__ostream__operator___std__ostream_____(r767, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long r769 = std____cxx11__list_int__std__allocator_int_____size___const(&myints705);
    unsigned long c770 = 19;
    _Bool c771 = ((r769 == c770)) ? 1 : 0;
    if (c771) {
    } else {
      char* cast772 = (char*)&(_str_8);
      char* c773 = _str_2;
      unsigned int c774 = 27;
      char* cast775 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast772, c773, c774, cast775);
    }
    int c776 = 0;
    __retval704 = c776;
    int t777 = __retval704;
    int ret_val778 = t777;
    {
      std____cxx11__list_int__std__allocator_int______list(&myints705);
    }
    return ret_val778;
  int t779 = __retval704;
  return t779;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v780) {
bb781:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this782;
  this782 = v780;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t783 = this782;
  struct std__allocator_std___List_node_int__* base784 = (struct std__allocator_std___List_node_int__*)((char *)t783 + 0);
  std__allocator_std___List_node_int_____allocator_2(base784);
    std____detail___List_node_header___List_node_header(&t783->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v785) {
bb786:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this787;
  this787 = v785;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t788 = this787;
  {
    struct std__allocator_std___List_node_int__* base789 = (struct std__allocator_std___List_node_int__*)((char *)t788 + 0);
    std__allocator_std___List_node_int______allocator(base789);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base_2(struct std____cxx11___List_base_int__std__allocator_int__* v790) {
bb791:
  struct std____cxx11___List_base_int__std__allocator_int__* this792;
  this792 = v790;
  struct std____cxx11___List_base_int__std__allocator_int__* t793 = this792;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(&t793->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v794) {
bb795:
  struct std____detail___List_node_header* this796;
  struct std____detail___List_node_base* __retval797;
  this796 = v794;
  struct std____detail___List_node_header* t798 = this796;
  struct std____detail___List_node_base* base799 = (struct std____detail___List_node_base*)((char *)t798 + 0);
  __retval797 = base799;
  struct std____detail___List_node_base* t800 = __retval797;
  return t800;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v801) {
bb802:
  int* __location803;
  __location803 = v801;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v804, int* v805) {
bb806:
  struct std__allocator_std___List_node_int__* __a807;
  int* __p808;
  __a807 = v804;
  __p808 = v805;
  int* t809 = __p808;
  void_std__destroy_at_int_(t809);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v810) {
bb811:
  struct __gnu_cxx____aligned_membuf_int_* this812;
  void* __retval813;
  this812 = v810;
  struct __gnu_cxx____aligned_membuf_int_* t814 = this812;
  void* cast815 = (void*)&(t814->_M_storage);
  __retval813 = cast815;
  void* t816 = __retval813;
  return t816;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v817) {
bb818:
  struct __gnu_cxx____aligned_membuf_int_* this819;
  int* __retval820;
  this819 = v817;
  struct __gnu_cxx____aligned_membuf_int_* t821 = this819;
  void* r822 = __gnu_cxx____aligned_membuf_int____M_addr(t821);
  int* cast823 = (int*)r822;
  __retval820 = cast823;
  int* t824 = __retval820;
  return t824;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v825) {
bb826:
  struct std___List_node_int_* this827;
  int* __retval828;
  this827 = v825;
  struct std___List_node_int_* t829 = this827;
  int* r830 = __gnu_cxx____aligned_membuf_int____M_ptr(&t829->_M_storage);
  __retval828 = r830;
  int* t831 = __retval828;
  return t831;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb832:
  _Bool __retval833;
    _Bool c834 = 0;
    __retval833 = c834;
    _Bool t835 = __retval833;
    return t835;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v836, struct std___List_node_int_* v837, unsigned long v838) {
bb839:
  struct std____new_allocator_std___List_node_int__* this840;
  struct std___List_node_int_* __p841;
  unsigned long __n842;
  this840 = v836;
  __p841 = v837;
  __n842 = v838;
  struct std____new_allocator_std___List_node_int__* t843 = this840;
    unsigned long c844 = 8;
    unsigned long c845 = 16;
    _Bool c846 = ((c844 > c845)) ? 1 : 0;
    if (c846) {
      struct std___List_node_int_* t847 = __p841;
      void* cast848 = (void*)t847;
      unsigned long t849 = __n842;
      unsigned long c850 = 24;
      unsigned long b851 = t849 * c850;
      unsigned long c852 = 8;
      operator_delete_3(cast848, b851, c852);
      return;
    }
  struct std___List_node_int_* t853 = __p841;
  void* cast854 = (void*)t853;
  unsigned long t855 = __n842;
  unsigned long c856 = 24;
  unsigned long b857 = t855 * c856;
  operator_delete_2(cast854, b857);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v858, struct std___List_node_int_* v859, unsigned long v860) {
bb861:
  struct std__allocator_std___List_node_int__* this862;
  struct std___List_node_int_* __p863;
  unsigned long __n864;
  this862 = v858;
  __p863 = v859;
  __n864 = v860;
  struct std__allocator_std___List_node_int__* t865 = this862;
    _Bool r866 = std____is_constant_evaluated();
    if (r866) {
      struct std___List_node_int_* t867 = __p863;
      void* cast868 = (void*)t867;
      operator_delete(cast868);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base869 = (struct std____new_allocator_std___List_node_int__*)((char *)t865 + 0);
  struct std___List_node_int_* t870 = __p863;
  unsigned long t871 = __n864;
  std____new_allocator_std___List_node_int_____deallocate(base869, t870, t871);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v872, struct std___List_node_int_* v873, unsigned long v874) {
bb875:
  struct std__allocator_std___List_node_int__* __a876;
  struct std___List_node_int_* __p877;
  unsigned long __n878;
  __a876 = v872;
  __p877 = v873;
  __n878 = v874;
  struct std__allocator_std___List_node_int__* t879 = __a876;
  struct std___List_node_int_* t880 = __p877;
  unsigned long t881 = __n878;
  std__allocator_std___List_node_int_____deallocate(t879, t880, t881);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v882, struct std___List_node_int_* v883) {
bb884:
  struct std____cxx11___List_base_int__std__allocator_int__* this885;
  struct std___List_node_int_* __p886;
  this885 = v882;
  __p886 = v883;
  struct std____cxx11___List_base_int__std__allocator_int__* t887 = this885;
  struct std__allocator_std___List_node_int__* base888 = (struct std__allocator_std___List_node_int__*)((char *)&(t887->_M_impl) + 0);
  struct std___List_node_int_* t889 = __p886;
  unsigned long c890 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base888, t889, c890);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v891, struct std___List_node_int_* v892) {
bb893:
  struct std____cxx11___List_base_int__std__allocator_int__* this894;
  struct std___List_node_int_* __p895;
  this894 = v891;
  __p895 = v892;
  struct std____cxx11___List_base_int__std__allocator_int__* t896 = this894;
  struct std__allocator_std___List_node_int__* base897 = (struct std__allocator_std___List_node_int__*)((char *)&(t896->_M_impl) + 0);
  struct std___List_node_int_* t898 = __p895;
  int* r899 = std___List_node_int____M_valptr(t898);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base897, r899);
  struct std___List_node_int_* t900 = __p895;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t896, t900);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v901) {
bb902:
  struct std___List_node_int_* this903;
  struct std___List_node_int_* __retval904;
  this903 = v901;
  struct std___List_node_int_* t905 = this903;
  __retval904 = t905;
  struct std___List_node_int_* t906 = __retval904;
  return t906;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v907) {
bb908:
  struct std____cxx11___List_base_int__std__allocator_int__* this909;
  struct std____detail___List_node_base* __cur910;
  this909 = v907;
  struct std____cxx11___List_base_int__std__allocator_int__* t911 = this909;
  struct std____detail___List_node_base* base912 = (struct std____detail___List_node_base*)((char *)&(t911->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t913 = base912->_M_next;
  __cur910 = t913;
    while (1) {
      struct std____detail___List_node_base* t914 = __cur910;
      struct std____detail___List_node_base* r915 = std____detail___List_node_header___M_base(&t911->_M_impl._M_node);
      _Bool c916 = ((t914 != r915)) ? 1 : 0;
      if (!c916) break;
        struct std___List_node_int_* __tmp917;
        struct std____detail___List_node_base* t918 = __cur910;
        struct std___List_node_int_* derived919 = (struct std___List_node_int_*)((char *)t918 - 0);
        __tmp917 = derived919;
        struct std___List_node_int_* t920 = __tmp917;
        struct std____detail___List_node_base* base921 = (struct std____detail___List_node_base*)((char *)t920 + 0);
        struct std____detail___List_node_base* t922 = base921->_M_next;
        __cur910 = t922;
        struct std___List_node_int_* t923 = __tmp917;
        struct std___List_node_int_* r924 = std___List_node_int____M_node_ptr(t923);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t911, r924);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v925) {
bb926:
  struct std____cxx11___List_base_int__std__allocator_int__* this927;
  this927 = v925;
  struct std____cxx11___List_base_int__std__allocator_int__* t928 = this927;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t928);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t928->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v929) {
bb930:
  struct std____new_allocator_std___List_node_int__* this931;
  this931 = v929;
  struct std____new_allocator_std___List_node_int__* t932 = this931;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator_2(struct std__allocator_std___List_node_int__* v933) {
bb934:
  struct std__allocator_std___List_node_int__* this935;
  this935 = v933;
  struct std__allocator_std___List_node_int__* t936 = this935;
  struct std____new_allocator_std___List_node_int__* base937 = (struct std____new_allocator_std___List_node_int__*)((char *)t936 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base937);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v938) {
bb939:
  struct std____detail___List_node_header* this940;
  this940 = v938;
  struct std____detail___List_node_header* t941 = this940;
  struct std____detail___List_node_base* base942 = (struct std____detail___List_node_base*)((char *)t941 + 0);
  struct std____detail___List_size* base943 = (struct std____detail___List_size*)((char *)t941 + 16);
  std____detail___List_node_header___M_init(t941);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v944, struct std____detail___List_size* v945) {
bb946:
  struct std____detail___List_size* this947;
  struct std____detail___List_size* unnamed948;
  struct std____detail___List_size* __retval949;
  this947 = v944;
  unnamed948 = v945;
  struct std____detail___List_size* t950 = this947;
  struct std____detail___List_size* t951 = unnamed948;
  unsigned long t952 = t951->_M_size;
  t950->_M_size = t952;
  __retval949 = t950;
  struct std____detail___List_size* t953 = __retval949;
  return t953;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v954) {
bb955:
  struct std____detail___List_node_header* this956;
  struct std____detail___List_size ref_tmp0957;
  this956 = v954;
  struct std____detail___List_node_header* t958 = this956;
  struct std____detail___List_node_base* base959 = (struct std____detail___List_node_base*)((char *)t958 + 0);
  struct std____detail___List_node_base* base960 = (struct std____detail___List_node_base*)((char *)t958 + 0);
  base960->_M_prev = base959;
  struct std____detail___List_node_base* base961 = (struct std____detail___List_node_base*)((char *)t958 + 0);
  base961->_M_next = base959;
  struct std____detail___List_size* base962 = (struct std____detail___List_size*)((char *)t958 + 16);
  ref_tmp0957 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r963 = std____detail___List_size__operator_(base962, &ref_tmp0957);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v964, struct std____allocated_ptr_std__allocator_std___List_node_int___* v965) {
bb966:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this967;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd968;
  this967 = v964;
  __gd968 = v965;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t969 = this967;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t970 = __gd968;
  struct std__allocator_std___List_node_int__* t971 = t970->_M_alloc;
  t969->_M_alloc = t971;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t972 = __gd968;
  struct std___List_node_int_* t973 = t972->_M_ptr;
  t969->_M_ptr = t973;
  struct std___List_node_int_* c974 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t975 = __gd968;
  t975->_M_ptr = c974;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v976) {
bb977:
  struct std___List_node_int_* __ptr978;
  struct std___List_node_int_* __retval979;
  __ptr978 = v976;
  struct std___List_node_int_* t980 = __ptr978;
  __retval979 = t980;
  struct std___List_node_int_* t981 = __retval979;
  return t981;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v982) {
bb983:
  struct std___List_node_int_** __ptr984;
  struct std___List_node_int_* __retval985;
  __ptr984 = v982;
  struct std___List_node_int_** t986 = __ptr984;
  struct std___List_node_int_* t987 = *t986;
  struct std___List_node_int_* r988 = std___List_node_int___std__to_address_std___List_node_int___(t987);
  __retval985 = r988;
  struct std___List_node_int_* t989 = __retval985;
  return t989;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v990) {
bb991:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this992;
  struct std___List_node_int_* __retval993;
  this992 = v990;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t994 = this992;
  struct std___List_node_int_* r995 = auto_std____to_address_std___List_node_int___(&t994->_M_ptr);
  __retval993 = r995;
  struct std___List_node_int_* t996 = __retval993;
  return t996;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v997) {
bb998:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this999;
  _Bool __retval1000;
  this999 = v997;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1001 = this999;
  struct std___List_node_int_* t1002 = t1001->_M_ptr;
  _Bool cast1003 = (_Bool)t1002;
  __retval1000 = cast1003;
  _Bool t1004 = __retval1000;
  return t1004;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1005) {
bb1006:
  struct std____new_allocator_int_* this1007;
  this1007 = v1005;
  struct std____new_allocator_int_* t1008 = this1007;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v1009, struct std__allocator_int_* v1010) {
bb1011:
  struct std__allocator_std___List_node_int__* this1012;
  struct std__allocator_int_* unnamed1013;
  this1012 = v1009;
  unnamed1013 = v1010;
  struct std__allocator_std___List_node_int__* t1014 = this1012;
  struct std____new_allocator_std___List_node_int__* base1015 = (struct std____new_allocator_std___List_node_int__*)((char *)t1014 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1015);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1016, struct std__allocator_std___List_node_int__* v1017) {
bb1018:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1019;
  struct std__allocator_std___List_node_int__* __a1020;
  this1019 = v1016;
  __a1020 = v1017;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1021 = this1019;
  struct std__allocator_std___List_node_int__* base1022 = (struct std__allocator_std___List_node_int__*)((char *)t1021 + 0);
  struct std__allocator_std___List_node_int__* t1023 = __a1020;
  std__allocator_std___List_node_int_____allocator(base1022, t1023);
    std____detail___List_node_header___List_node_header(&t1021->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1024, struct std__allocator_std___List_node_int__* v1025) {
bb1026:
  struct std____cxx11___List_base_int__std__allocator_int__* this1027;
  struct std__allocator_std___List_node_int__* __a1028;
  this1027 = v1024;
  __a1028 = v1025;
  struct std____cxx11___List_base_int__std__allocator_int__* t1029 = this1027;
  struct std__allocator_std___List_node_int__* t1030 = __a1028;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t1029->_M_impl, t1030);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v1031) {
bb1032:
  struct std__allocator_std___List_node_int__* this1033;
  this1033 = v1031;
  struct std__allocator_std___List_node_int__* t1034 = this1033;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_fill_initializeEmRKi
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* v1035, unsigned long v1036, int* v1037) {
bb1038:
  struct std____cxx11__list_int__std__allocator_int__* this1039;
  unsigned long __n1040;
  int* __x1041;
  this1039 = v1035;
  __n1040 = v1036;
  __x1041 = v1037;
  struct std____cxx11__list_int__std__allocator_int__* t1042 = this1039;
    while (1) {
      unsigned long t1044 = __n1040;
      _Bool cast1045 = (_Bool)t1044;
      if (!cast1045) break;
      int* t1046 = __x1041;
      std____cxx11__list_int__std__allocator_int_____push_back(t1042, t1046);
    for_step1043: ;
      unsigned long t1047 = __n1040;
      unsigned long u1048 = t1047 - 1;
      __n1040 = u1048;
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v1049, struct std____new_allocator_std___List_node_int__* v1050) {
bb1051:
  struct std____new_allocator_std___List_node_int__* this1052;
  struct std____new_allocator_std___List_node_int__* unnamed1053;
  this1052 = v1049;
  unnamed1053 = v1050;
  struct std____new_allocator_std___List_node_int__* t1054 = this1052;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v1055, struct std__allocator_std___List_node_int__* v1056) {
bb1057:
  struct std__allocator_std___List_node_int__* this1058;
  struct std__allocator_std___List_node_int__* __a1059;
  this1058 = v1055;
  __a1059 = v1056;
  struct std__allocator_std___List_node_int__* t1060 = this1058;
  struct std____new_allocator_std___List_node_int__* base1061 = (struct std____new_allocator_std___List_node_int__*)((char *)t1060 + 0);
  struct std__allocator_std___List_node_int__* t1062 = __a1059;
  struct std____new_allocator_std___List_node_int__* base1063 = (struct std____new_allocator_std___List_node_int__*)((char *)t1062 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base1061, base1063);
  return;
}

