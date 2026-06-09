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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
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
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[9] = "*it == 2";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_insert/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "mylist.size() == 6";
char _str_3[10] = "*it == 20";
char _str_4[19] = "mylist.size() == 8";
char _str_5[20] = "mylist.size() == 10";
char _str_6[10] = "*it == 30";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_7[17] = "mylist contains:";
char _str_8[2] = " ";
char _str_9[49] = "cannot create std::vector larger than max_size()";
char _str_10[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_11[9] = "__n >= 0";
char _str_12[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_13[15] = "!this->empty()";
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* p0);
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* p0);
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
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_* std___List_iterator_int___operator___4(struct std___List_iterator_int_* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* p0);
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* p0);
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____emplace_int_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, int* p2);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, int* p2);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std___List_iterator_int_* p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* p0, struct std__allocator_std___List_node_int__* p1);
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
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
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, unsigned long p2, int* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std____cxx11__list_int__std__allocator_int_____list___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct std__allocator_int_* p3);
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct std___List_iterator_int_ std___List_iterator_int___operator__(struct std___List_iterator_int_* p0, int p1);
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
struct std___List_iterator_int_ std___List_iterator_int___operator___3(struct std___List_iterator_int_* p0, int p1);
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
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
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
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* p0);
void std__allocator_std___List_node_int_____allocator_2(struct std__allocator_std___List_node_int__* p0);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* p0, struct std__allocator_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0, struct std__allocator_std___List_node_int__* p1);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0, struct std____new_allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std____cxx11__list_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct std____false_type p3);

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

// function: _ZNSt14_List_iteratorIiEC2Ev
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* v5) {
bb6:
  struct std___List_iterator_int_* this7;
  this7 = v5;
  struct std___List_iterator_int_* t8 = this7;
  struct std____detail___List_node_base* c9 = ((void*)0);
  t8->_M_node = c9;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v10) {
bb11:
  struct std____cxx11___List_base_int__std__allocator_int__* this12;
  struct std__allocator_std___List_node_int__* __retval13;
  this12 = v10;
  struct std____cxx11___List_base_int__std__allocator_int__* t14 = this12;
  struct std__allocator_std___List_node_int__* base15 = (struct std__allocator_std___List_node_int__*)((char *)&(t14->_M_impl) + 0);
  __retval13 = base15;
  struct std__allocator_std___List_node_int__* t16 = __retval13;
  return t16;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v17) {
bb18:
  struct std____new_allocator_std___List_node_int__* this19;
  unsigned long __retval20;
  this19 = v17;
  struct std____new_allocator_std___List_node_int__* t21 = this19;
  unsigned long c22 = 9223372036854775807;
  unsigned long c23 = 24;
  unsigned long b24 = c22 / c23;
  __retval20 = b24;
  unsigned long t25 = __retval20;
  return t25;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v26, unsigned long v27, void* v28) {
bb29:
  struct std____new_allocator_std___List_node_int__* this30;
  unsigned long __n31;
  void* unnamed32;
  struct std___List_node_int_* __retval33;
  this30 = v26;
  __n31 = v27;
  unnamed32 = v28;
  struct std____new_allocator_std___List_node_int__* t34 = this30;
    unsigned long t35 = __n31;
    unsigned long r36 = std____new_allocator_std___List_node_int______M_max_size___const(t34);
    _Bool c37 = ((t35 > r36)) ? 1 : 0;
    if (c37) {
        unsigned long t38 = __n31;
        unsigned long c39 = -1;
        unsigned long c40 = 24;
        unsigned long b41 = c39 / c40;
        _Bool c42 = ((t38 > b41)) ? 1 : 0;
        if (c42) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c43 = 8;
    unsigned long c44 = 16;
    _Bool c45 = ((c43 > c44)) ? 1 : 0;
    if (c45) {
      unsigned long __al46;
      unsigned long c47 = 8;
      __al46 = c47;
      unsigned long t48 = __n31;
      unsigned long c49 = 24;
      unsigned long b50 = t48 * c49;
      unsigned long t51 = __al46;
      void* r52 = operator_new_2(b50, t51);
      struct std___List_node_int_* cast53 = (struct std___List_node_int_*)r52;
      __retval33 = cast53;
      struct std___List_node_int_* t54 = __retval33;
      return t54;
    }
  unsigned long t55 = __n31;
  unsigned long c56 = 24;
  unsigned long b57 = t55 * c56;
  void* r58 = operator_new(b57);
  struct std___List_node_int_* cast59 = (struct std___List_node_int_*)r58;
  __retval33 = cast59;
  struct std___List_node_int_* t60 = __retval33;
  return t60;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v61, unsigned long v62) {
bb63:
  struct std__allocator_std___List_node_int__* this64;
  unsigned long __n65;
  struct std___List_node_int_* __retval66;
  this64 = v61;
  __n65 = v62;
  struct std__allocator_std___List_node_int__* t67 = this64;
    _Bool r68 = std____is_constant_evaluated();
    if (r68) {
        unsigned long t69 = __n65;
        unsigned long c70 = 24;
        unsigned long ovr71;
        _Bool ovf72 = __builtin_mul_overflow(t69, c70, &ovr71);
        __n65 = ovr71;
        if (ovf72) {
          std____throw_bad_array_new_length();
        }
      unsigned long t73 = __n65;
      void* r74 = operator_new(t73);
      struct std___List_node_int_* cast75 = (struct std___List_node_int_*)r74;
      __retval66 = cast75;
      struct std___List_node_int_* t76 = __retval66;
      return t76;
    }
  struct std____new_allocator_std___List_node_int__* base77 = (struct std____new_allocator_std___List_node_int__*)((char *)t67 + 0);
  unsigned long t78 = __n65;
  void* c79 = ((void*)0);
  struct std___List_node_int_* r80 = std____new_allocator_std___List_node_int_____allocate(base77, t78, c79);
  __retval66 = r80;
  struct std___List_node_int_* t81 = __retval66;
  return t81;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v82, unsigned long v83) {
bb84:
  struct std__allocator_std___List_node_int__* __a85;
  unsigned long __n86;
  struct std___List_node_int_* __retval87;
  __a85 = v82;
  __n86 = v83;
  struct std__allocator_std___List_node_int__* t88 = __a85;
  unsigned long t89 = __n86;
  struct std___List_node_int_* r90 = std__allocator_std___List_node_int_____allocate(t88, t89);
  __retval87 = r90;
  struct std___List_node_int_* t91 = __retval87;
  return t91;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v92, struct std__allocator_std___List_node_int__* v93, struct std___List_node_int_* v94) {
bb95:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this96;
  struct std__allocator_std___List_node_int__* __a97;
  struct std___List_node_int_* __ptr98;
  this96 = v92;
  __a97 = v93;
  __ptr98 = v94;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t99 = this96;
  struct std__allocator_std___List_node_int__* t100 = __a97;
  t99->_M_alloc = t100;
  struct std___List_node_int_* t101 = __ptr98;
  t99->_M_ptr = t101;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v102) {
bb103:
  struct std__allocator_std___List_node_int__* __a104;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval105;
  __a104 = v102;
  struct std__allocator_std___List_node_int__* t106 = __a104;
  struct std__allocator_std___List_node_int__* t107 = __a104;
  unsigned long c108 = 1;
  struct std___List_node_int_* r109 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t107, c108);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval105, t106, r109);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t110 = __retval105;
  return t110;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v111, struct std____allocated_ptr_std__allocator_std___List_node_int___* v112) {
bb113:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this114;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr115;
  this114 = v111;
  __ptr115 = v112;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t116 = this114;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base117 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t116 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t118 = __ptr115;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base117, t118);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base119 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t116 + 0);
    struct std___List_node_int_* r120 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base119);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v121) {
bb122:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this123;
  this123 = v121;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t124 = this123;
    struct std___List_node_int_* t125 = t124->_M_ptr;
    struct std___List_node_int_* c126 = ((void*)0);
    _Bool c127 = ((t125 != c126)) ? 1 : 0;
    if (c127) {
      struct std__allocator_std___List_node_int__* t128 = t124->_M_alloc;
      struct std___List_node_int_* t129 = t124->_M_ptr;
      unsigned long c130 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t128, t129, c130);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v131) {
bb132:
  struct std__allocator_std___List_node_int__* __a133;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval134;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0135;
  __a133 = v131;
  struct std__allocator_std___List_node_int__* t136 = __a133;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r137 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t136);
  ref_tmp0135 = r137;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval134, &ref_tmp0135);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0135);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t138 = __retval134;
  return t138;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v139, int* v140, int* v141) {
bb142:
  struct std__allocator_std___List_node_int__* __a143;
  int* __p144;
  int* __args145;
  __a143 = v139;
  __p144 = v140;
  __args145 = v141;
  int* t146 = __p144;
  int* t147 = __args145;
  int* r148 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t146, t147);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v149) {
bb150:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this151;
  struct std___List_node_int_* __retval152;
  this151 = v149;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t153 = this151;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base154 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t153 + 0);
  struct std___List_node_int_* r155 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base154);
  __retval152 = r155;
  struct std___List_node_int_* t156 = __retval152;
  return t156;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v157, void** v158) {
bb159:
  struct std___List_node_int_** __obj160;
  void** __new_val161;
  struct std___List_node_int_* __retval162;
  struct std___List_node_int_* __old_val163;
  __obj160 = v157;
  __new_val161 = v158;
  struct std___List_node_int_** t164 = __obj160;
  struct std___List_node_int_* t165 = *t164;
  __old_val163 = t165;
  void** t166 = __new_val161;
  struct std___List_node_int_* c167 = ((void*)0);
  struct std___List_node_int_** t168 = __obj160;
  *t168 = c167;
  struct std___List_node_int_* t169 = __old_val163;
  __retval162 = t169;
  struct std___List_node_int_* t170 = __retval162;
  return t170;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v171) {
bb172:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this173;
  struct std___List_node_int_* __retval174;
  void* ref_tmp0175;
  this173 = v171;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t176 = this173;
  void* c177 = ((void*)0);
  ref_tmp0175 = c177;
  struct std___List_node_int_* r178 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t176->_M_ptr, &ref_tmp0175);
  __retval174 = r178;
  struct std___List_node_int_* t179 = __retval174;
  return t179;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v180) {
bb181:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this182;
  this182 = v180;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t183 = this182;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base184 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t183 + 0);
      _Bool r185 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base184);
      if (r185) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base186 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t183 + 0);
        struct std___List_node_int_* r187 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base186);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base188 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t183 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base188);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v189, int* v190) {
bb191:
  struct std____cxx11__list_int__std__allocator_int__* this192;
  int* __args193;
  struct std___List_node_int_* __retval194;
  struct std__allocator_std___List_node_int__* __alloc195;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard196;
  this192 = v189;
  __args193 = v190;
  struct std____cxx11__list_int__std__allocator_int__* t197 = this192;
  struct std____cxx11___List_base_int__std__allocator_int__* base198 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t197 + 0);
  struct std__allocator_std___List_node_int__* r199 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base198);
  __alloc195 = r199;
  struct std__allocator_std___List_node_int__* t200 = __alloc195;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r201 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t200);
  __guard196 = r201;
    struct std__allocator_std___List_node_int__* t202 = __alloc195;
    struct std___List_node_int_* r203 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard196);
    int* r204 = std___List_node_int____M_valptr(r203);
    int* t205 = __args193;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t202, r204, t205);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base206 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard196) + 0);
    struct std___List_node_int_* r207 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base206);
    __retval194 = r207;
    struct std___List_node_int_* t208 = __retval194;
    struct std___List_node_int_* ret_val209 = t208;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard196);
    }
    return ret_val209;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v210, unsigned long v211) {
bb212:
  struct std____cxx11___List_base_int__std__allocator_int__* this213;
  unsigned long __n214;
  this213 = v210;
  __n214 = v211;
  struct std____cxx11___List_base_int__std__allocator_int__* t215 = this213;
  unsigned long t216 = __n214;
  struct std____detail___List_size* base217 = (struct std____detail___List_size*)((char *)&(t215->_M_impl._M_node) + 16);
  unsigned long t218 = base217->_M_size;
  unsigned long b219 = t218 + t216;
  base217->_M_size = b219;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v220, struct std___List_iterator_int_ v221, int* v222) {
bb223:
  struct std____cxx11__list_int__std__allocator_int__* this224;
  struct std___List_iterator_int_ __position225;
  int* __args226;
  struct std___List_node_int_* __tmp227;
  this224 = v220;
  __position225 = v221;
  __args226 = v222;
  struct std____cxx11__list_int__std__allocator_int__* t228 = this224;
  int* t229 = __args226;
  struct std___List_node_int_* r230 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t228, t229);
  __tmp227 = r230;
  struct std___List_node_int_* t231 = __tmp227;
  struct std____detail___List_node_base* base232 = (struct std____detail___List_node_base*)((char *)t231 + 0);
  struct std____detail___List_node_base* t233 = __position225._M_node;
  std____detail___List_node_base___M_hook(base232, t233);
  struct std____cxx11___List_base_int__std__allocator_int__* base234 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t228 + 0);
  unsigned long c235 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base234, c235);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v236, int* v237) {
bb238:
  struct std____cxx11__list_int__std__allocator_int__* this239;
  int* __x240;
  struct std___List_iterator_int_ agg_tmp0241;
  this239 = v236;
  __x240 = v237;
  struct std____cxx11__list_int__std__allocator_int__* t242 = this239;
  struct std___List_iterator_int_ r243 = std____cxx11__list_int__std__allocator_int_____end(t242);
  agg_tmp0241 = r243;
  int* t244 = __x240;
  struct std___List_iterator_int_ t245 = agg_tmp0241;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t242, t245, t244);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v246, struct std____detail___List_node_base* v247) {
bb248:
  struct std___List_iterator_int_* this249;
  struct std____detail___List_node_base* __x250;
  this249 = v246;
  __x250 = v247;
  struct std___List_iterator_int_* t251 = this249;
  struct std____detail___List_node_base* t252 = __x250;
  t251->_M_node = t252;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v253) {
bb254:
  struct std____cxx11__list_int__std__allocator_int__* this255;
  struct std___List_iterator_int_ __retval256;
  this255 = v253;
  struct std____cxx11__list_int__std__allocator_int__* t257 = this255;
  struct std____cxx11___List_base_int__std__allocator_int__* base258 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t257 + 0);
  struct std____detail___List_node_base* base259 = (struct std____detail___List_node_base*)((char *)&(base258->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t260 = base259->_M_next;
  std___List_iterator_int____List_iterator(&__retval256, t260);
  struct std___List_iterator_int_ t261 = __retval256;
  return t261;
}

// function: _ZNSt14_List_iteratorIiEaSEOS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v262, struct std___List_iterator_int_* v263) {
bb264:
  struct std___List_iterator_int_* this265;
  struct std___List_iterator_int_* unnamed266;
  struct std___List_iterator_int_* __retval267;
  this265 = v262;
  unnamed266 = v263;
  struct std___List_iterator_int_* t268 = this265;
  struct std___List_iterator_int_* t269 = unnamed266;
  struct std____detail___List_node_base* t270 = t269->_M_node;
  t268->_M_node = t270;
  __retval267 = t268;
  struct std___List_iterator_int_* t271 = __retval267;
  return t271;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___4(struct std___List_iterator_int_* v272) {
bb273:
  struct std___List_iterator_int_* this274;
  struct std___List_iterator_int_* __retval275;
  this274 = v272;
  struct std___List_iterator_int_* t276 = this274;
  struct std____detail___List_node_base* t277 = t276->_M_node;
  struct std____detail___List_node_base* t278 = t277->_M_next;
  t276->_M_node = t278;
  __retval275 = t276;
  struct std___List_iterator_int_* t279 = __retval275;
  return t279;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v280, int* v281) {
bb282:
  int* __location283;
  int* __args284;
  int* __retval285;
  void* __loc286;
  __location283 = v280;
  __args284 = v281;
  int* t287 = __location283;
  void* cast288 = (void*)t287;
  __loc286 = cast288;
    void* t289 = __loc286;
    int* cast290 = (int*)t289;
    int* t291 = __args284;
    int t292 = *t291;
    *cast290 = t292;
    __retval285 = cast290;
    int* t293 = __retval285;
    return t293;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* v294, int* v295, int* v296) {
bb297:
  struct std__allocator_std___List_node_int__* __a298;
  int* __p299;
  int* __args300;
  __a298 = v294;
  __p299 = v295;
  __args300 = v296;
  int* t301 = __p299;
  int* t302 = __args300;
  int* r303 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t301, t302);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* v304, int* v305) {
bb306:
  struct std____cxx11__list_int__std__allocator_int__* this307;
  int* __args308;
  struct std___List_node_int_* __retval309;
  struct std__allocator_std___List_node_int__* __alloc310;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard311;
  this307 = v304;
  __args308 = v305;
  struct std____cxx11__list_int__std__allocator_int__* t312 = this307;
  struct std____cxx11___List_base_int__std__allocator_int__* base313 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t312 + 0);
  struct std__allocator_std___List_node_int__* r314 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base313);
  __alloc310 = r314;
  struct std__allocator_std___List_node_int__* t315 = __alloc310;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r316 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t315);
  __guard311 = r316;
    struct std__allocator_std___List_node_int__* t317 = __alloc310;
    struct std___List_node_int_* r318 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard311);
    int* r319 = std___List_node_int____M_valptr(r318);
    int* t320 = __args308;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(t317, r319, t320);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base321 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard311) + 0);
    struct std___List_node_int_* r322 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base321);
    __retval309 = r322;
    struct std___List_node_int_* t323 = __retval309;
    struct std___List_node_int_* ret_val324 = t323;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard311);
    }
    return ret_val324;
  abort();
}

// function: _ZNKSt20_List_const_iteratorIiE13_M_const_castEv
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* v325) {
bb326:
  struct std___List_const_iterator_int_* this327;
  struct std___List_iterator_int_ __retval328;
  this327 = v325;
  struct std___List_const_iterator_int_* t329 = this327;
  struct std____detail___List_node_base* t330 = t329->_M_node;
  std___List_iterator_int____List_iterator(&__retval328, t330);
  struct std___List_iterator_int_ t331 = __retval328;
  return t331;
}

// function: _ZNSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* v332) {
bb333:
  struct std____detail___List_node_base* this334;
  struct std____detail___List_node_base* __retval335;
  this334 = v332;
  struct std____detail___List_node_base* t336 = this334;
  __retval335 = t336;
  struct std____detail___List_node_base* t337 = __retval335;
  return t337;
}

// function: _ZNSt7__cxx114listIiSaIiEE7emplaceIJiEEESt14_List_iteratorIiESt20_List_const_iteratorIiEDpOT_
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____emplace_int_(struct std____cxx11__list_int__std__allocator_int__* v338, struct std___List_const_iterator_int_ v339, int* v340) {
bb341:
  struct std____cxx11__list_int__std__allocator_int__* this342;
  struct std___List_const_iterator_int_ __position343;
  int* __args344;
  struct std___List_iterator_int_ __retval345;
  struct std___List_node_int_* __tmp346;
  struct std___List_iterator_int_ ref_tmp0347;
  this342 = v338;
  __position343 = v339;
  __args344 = v340;
  struct std____cxx11__list_int__std__allocator_int__* t348 = this342;
  int* t349 = __args344;
  struct std___List_node_int_* r350 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(t348, t349);
  __tmp346 = r350;
  struct std___List_node_int_* t351 = __tmp346;
  struct std____detail___List_node_base* base352 = (struct std____detail___List_node_base*)((char *)t351 + 0);
  struct std___List_iterator_int_ r353 = std___List_const_iterator_int____M_const_cast___const(&__position343);
  ref_tmp0347 = r353;
  struct std____detail___List_node_base* t354 = ref_tmp0347._M_node;
  std____detail___List_node_base___M_hook(base352, t354);
  struct std____cxx11___List_base_int__std__allocator_int__* base355 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t348 + 0);
  unsigned long c356 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base355, c356);
  struct std___List_node_int_* t357 = __tmp346;
  struct std____detail___List_node_base* base358 = (struct std____detail___List_node_base*)((char *)t357 + 0);
  struct std____detail___List_node_base* r359 = std____detail___List_node_base___M_base(base358);
  std___List_iterator_int____List_iterator(&__retval345, r359);
  struct std___List_iterator_int_ t360 = __retval345;
  return t360;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertESt20_List_const_iteratorIiEOi
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert(struct std____cxx11__list_int__std__allocator_int__* v361, struct std___List_const_iterator_int_ v362, int* v363) {
bb364:
  struct std____cxx11__list_int__std__allocator_int__* this365;
  struct std___List_const_iterator_int_ __position366;
  int* __x367;
  struct std___List_iterator_int_ __retval368;
  struct std___List_const_iterator_int_ agg_tmp0369;
  this365 = v361;
  __position366 = v362;
  __x367 = v363;
  struct std____cxx11__list_int__std__allocator_int__* t370 = this365;
  agg_tmp0369 = __position366; // copy
  int* t371 = __x367;
  struct std___List_const_iterator_int_ t372 = agg_tmp0369;
  struct std___List_iterator_int_ r373 = std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____emplace_int_(t370, t372, t371);
  __retval368 = r373;
  struct std___List_iterator_int_ t374 = __retval368;
  return t374;
}

// function: _ZNSt20_List_const_iteratorIiEC2ERKSt14_List_iteratorIiE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v375, struct std___List_iterator_int_* v376) {
bb377:
  struct std___List_const_iterator_int_* this378;
  struct std___List_iterator_int_* __x379;
  this378 = v375;
  __x379 = v376;
  struct std___List_const_iterator_int_* t380 = this378;
  struct std___List_iterator_int_* t381 = __x379;
  struct std____detail___List_node_base* t382 = t381->_M_node;
  t380->_M_node = t382;
  return;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v383) {
bb384:
  struct std___List_iterator_int_* this385;
  int* __retval386;
  this385 = v383;
  struct std___List_iterator_int_* t387 = this385;
  struct std____detail___List_node_base* t388 = t387->_M_node;
  struct std___List_node_int_* derived389 = ((t388) ? (struct std___List_node_int_*)((char *)t388 - 0) : (struct std___List_node_int_*)0);
  int* r390 = std___List_node_int____M_valptr(derived389);
  __retval386 = r390;
  int* t391 = __retval386;
  return t391;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v392) {
bb393:
  struct std____cxx11___List_base_int__std__allocator_int__* this394;
  unsigned long __retval395;
  this394 = v392;
  struct std____cxx11___List_base_int__std__allocator_int__* t396 = this394;
  struct std____detail___List_size* base397 = (struct std____detail___List_size*)((char *)&(t396->_M_impl._M_node) + 16);
  unsigned long t398 = base397->_M_size;
  __retval395 = t398;
  unsigned long t399 = __retval395;
  return t399;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v400) {
bb401:
  struct std____cxx11__list_int__std__allocator_int__* this402;
  unsigned long __retval403;
  this402 = v400;
  struct std____cxx11__list_int__std__allocator_int__* t404 = this402;
  struct std____cxx11___List_base_int__std__allocator_int__* base405 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t404 + 0);
  unsigned long r406 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base405);
  __retval403 = r406;
  unsigned long t407 = __retval403;
  return t407;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v408) {
bb409:
  struct std____cxx11___List_base_int__std__allocator_int__* this410;
  struct std__allocator_std___List_node_int__* __retval411;
  this410 = v408;
  struct std____cxx11___List_base_int__std__allocator_int__* t412 = this410;
  struct std__allocator_std___List_node_int__* base413 = (struct std__allocator_std___List_node_int__*)((char *)&(t412->_M_impl) + 0);
  __retval411 = base413;
  struct std__allocator_std___List_node_int__* t414 = __retval411;
  return t414;
}

// function: _ZNSaIiEC2ISt10_List_nodeIiEEERKSaIT_E
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* v415, struct std__allocator_std___List_node_int__* v416) {
bb417:
  struct std__allocator_int_* this418;
  struct std__allocator_std___List_node_int__* unnamed419;
  this418 = v415;
  unnamed419 = v416;
  struct std__allocator_int_* t420 = this418;
  struct std____new_allocator_int_* base421 = (struct std____new_allocator_int_*)((char *)t420 + 0);
  std____new_allocator_int_____new_allocator_2(base421);
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE13get_allocatorEv
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* v422) {
bb423:
  struct std____cxx11__list_int__std__allocator_int__* this424;
  struct std__allocator_int_ __retval425;
  this424 = v422;
  struct std____cxx11__list_int__std__allocator_int__* t426 = this424;
  struct std____cxx11___List_base_int__std__allocator_int__* base427 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t426 + 0);
  struct std__allocator_std___List_node_int__* r428 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base427);
  std__allocator_int___allocator_std___List_node_int___(&__retval425, r428);
  struct std__allocator_int_ t429 = __retval425;
  return t429;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2EmRKiRKS1_
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v430, unsigned long v431, int* v432, struct std__allocator_int_* v433) {
bb434:
  struct std____cxx11__list_int__std__allocator_int__* this435;
  unsigned long __n436;
  int* __value437;
  struct std__allocator_int_* __a438;
  struct std__allocator_std___List_node_int__ ref_tmp0439;
  this435 = v430;
  __n436 = v431;
  __value437 = v432;
  __a438 = v433;
  struct std____cxx11__list_int__std__allocator_int__* t440 = this435;
  struct std____cxx11___List_base_int__std__allocator_int__* base441 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t440 + 0);
  struct std__allocator_int_* t442 = __a438;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp0439, t442);
    std____cxx11___List_base_int__std__allocator_int______List_base(base441, &ref_tmp0439);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0439);
  }
    unsigned long t443 = __n436;
    int* t444 = __value437;
    std____cxx11__list_int__std__allocator_int______M_fill_initialize(t440, t443, t444);
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v445) {
bb446:
  struct std____detail___List_node_base* this447;
  struct std____detail___List_node_base* __retval448;
  this447 = v445;
  struct std____detail___List_node_base* t449 = this447;
  __retval448 = t449;
  struct std____detail___List_node_base* t450 = __retval448;
  return t450;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v451) {
bb452:
  struct std____cxx11__list_int__std__allocator_int__* this453;
  _Bool __retval454;
  this453 = v451;
  struct std____cxx11__list_int__std__allocator_int__* t455 = this453;
  struct std____cxx11___List_base_int__std__allocator_int__* base456 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t455 + 0);
  struct std____detail___List_node_base* base457 = (struct std____detail___List_node_base*)((char *)&(base456->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t458 = base457->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base459 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t455 + 0);
  struct std____detail___List_node_base* base460 = (struct std____detail___List_node_base*)((char *)&(base459->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r461 = std____detail___List_node_base___M_base___const(base460);
  _Bool c462 = ((t458 == r461)) ? 1 : 0;
  __retval454 = c462;
  _Bool t463 = __retval454;
  return t463;
}

// function: _ZSteqRKSaISt10_List_nodeIiEES3_
_Bool std__operator__(struct std__allocator_std___List_node_int__* v464, struct std__allocator_std___List_node_int__* v465) {
bb466:
  struct std__allocator_std___List_node_int__* unnamed467;
  struct std__allocator_std___List_node_int__* unnamed468;
  _Bool __retval469;
  unnamed467 = v464;
  unnamed468 = v465;
  _Bool c470 = 1;
  __retval469 = c470;
  _Bool t471 = __retval469;
  return t471;
}

// function: _ZNSt7__cxx114listIiSaIiEE25_M_check_equal_allocatorsERKS2_
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* v472, struct std____cxx11__list_int__std__allocator_int__* v473) {
bb474:
  struct std____cxx11__list_int__std__allocator_int__* this475;
  struct std____cxx11__list_int__std__allocator_int__* __x476;
  this475 = v472;
  __x476 = v473;
  struct std____cxx11__list_int__std__allocator_int__* t477 = this475;
    struct std____cxx11___List_base_int__std__allocator_int__* base478 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t477 + 0);
    struct std__allocator_std___List_node_int__* r479 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base478);
    struct std____cxx11__list_int__std__allocator_int__* t480 = __x476;
    struct std____cxx11___List_base_int__std__allocator_int__* base481 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t480 + 0);
    struct std__allocator_std___List_node_int__* r482 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base481);
    _Bool r483 = std__operator__(r479, r482);
    _Bool u484 = !r483;
    if (u484) {
      abort();
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE11_M_transferESt14_List_iteratorIiES4_S4_
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* v485, struct std___List_iterator_int_ v486, struct std___List_iterator_int_ v487, struct std___List_iterator_int_ v488) {
bb489:
  struct std____cxx11__list_int__std__allocator_int__* this490;
  struct std___List_iterator_int_ __position491;
  struct std___List_iterator_int_ __first492;
  struct std___List_iterator_int_ __last493;
  this490 = v485;
  __position491 = v486;
  __first492 = v487;
  __last493 = v488;
  struct std____cxx11__list_int__std__allocator_int__* t494 = this490;
  struct std____detail___List_node_base* t495 = __position491._M_node;
  struct std____detail___List_node_base* t496 = __first492._M_node;
  struct std____detail___List_node_base* t497 = __last493._M_node;
  std____detail___List_node_base___M_transfer(t495, t496, t497);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_set_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* v498, unsigned long v499) {
bb500:
  struct std____cxx11___List_base_int__std__allocator_int__* this501;
  unsigned long __n502;
  this501 = v498;
  __n502 = v499;
  struct std____cxx11___List_base_int__std__allocator_int__* t503 = this501;
  unsigned long t504 = __n502;
  struct std____detail___List_size* base505 = (struct std____detail___List_size*)((char *)&(t503->_M_impl._M_node) + 16);
  base505->_M_size = t504;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* v506, struct std___List_const_iterator_int_ v507, struct std____cxx11__list_int__std__allocator_int__* v508) {
bb509:
  struct std____cxx11__list_int__std__allocator_int__* this510;
  struct std___List_const_iterator_int_ __position511;
  struct std____cxx11__list_int__std__allocator_int__* __x512;
  this510 = v506;
  __position511 = v507;
  __x512 = v508;
  struct std____cxx11__list_int__std__allocator_int__* t513 = this510;
    struct std____cxx11__list_int__std__allocator_int__* t514 = __x512;
    _Bool r515 = std____cxx11__list_int__std__allocator_int_____empty___const(t514);
    _Bool u516 = !r515;
    if (u516) {
      struct std___List_iterator_int_ agg_tmp0517;
      struct std___List_iterator_int_ agg_tmp1518;
      struct std___List_iterator_int_ agg_tmp2519;
      struct std____cxx11__list_int__std__allocator_int__* t520 = __x512;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t513, t520);
      struct std___List_iterator_int_ r521 = std___List_const_iterator_int____M_const_cast___const(&__position511);
      agg_tmp0517 = r521;
      struct std____cxx11__list_int__std__allocator_int__* t522 = __x512;
      struct std___List_iterator_int_ r523 = std____cxx11__list_int__std__allocator_int_____begin(t522);
      agg_tmp1518 = r523;
      struct std____cxx11__list_int__std__allocator_int__* t524 = __x512;
      struct std___List_iterator_int_ r525 = std____cxx11__list_int__std__allocator_int_____end(t524);
      agg_tmp2519 = r525;
      struct std___List_iterator_int_ t526 = agg_tmp0517;
      struct std___List_iterator_int_ t527 = agg_tmp1518;
      struct std___List_iterator_int_ t528 = agg_tmp2519;
      std____cxx11__list_int__std__allocator_int______M_transfer(t513, t526, t527, t528);
      struct std____cxx11___List_base_int__std__allocator_int__* base529 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t513 + 0);
      struct std____cxx11__list_int__std__allocator_int__* t530 = __x512;
      struct std____cxx11___List_base_int__std__allocator_int__* base531 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t530 + 0);
      unsigned long r532 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base531);
      std____cxx11___List_base_int__std__allocator_int______M_inc_size(base529, r532);
      struct std____cxx11__list_int__std__allocator_int__* t533 = __x512;
      struct std____cxx11___List_base_int__std__allocator_int__* base534 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t533 + 0);
      unsigned long c535 = 0;
      std____cxx11___List_base_int__std__allocator_int______M_set_size(base534, c535);
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* v536, struct std___List_const_iterator_int_ v537, struct std____cxx11__list_int__std__allocator_int__* v538) {
bb539:
  struct std____cxx11__list_int__std__allocator_int__* this540;
  struct std___List_const_iterator_int_ __position541;
  struct std____cxx11__list_int__std__allocator_int__* __x542;
  struct std___List_const_iterator_int_ agg_tmp0543;
  this540 = v536;
  __position541 = v537;
  __x542 = v538;
  struct std____cxx11__list_int__std__allocator_int__* t544 = this540;
  agg_tmp0543 = __position541; // copy
  struct std____cxx11__list_int__std__allocator_int__* t545 = __x542;
  struct std___List_const_iterator_int_ t546 = agg_tmp0543;
  std____cxx11__list_int__std__allocator_int_____splice(t544, t546, t545);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertESt20_List_const_iteratorIiEmRKi
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert_2(struct std____cxx11__list_int__std__allocator_int__* v547, struct std___List_const_iterator_int_ v548, unsigned long v549, int* v550) {
bb551:
  struct std____cxx11__list_int__std__allocator_int__* this552;
  struct std___List_const_iterator_int_ __position553;
  unsigned long __n554;
  int* __x555;
  struct std___List_iterator_int_ __retval556;
  this552 = v547;
  __position553 = v548;
  __n554 = v549;
  __x555 = v550;
  struct std____cxx11__list_int__std__allocator_int__* t557 = this552;
    unsigned long t558 = __n554;
    _Bool cast559 = (_Bool)t558;
    if (cast559) {
      struct std____cxx11__list_int__std__allocator_int__ __tmp560;
      struct std__allocator_int_ ref_tmp0561;
      struct std___List_const_iterator_int_ agg_tmp0562;
      unsigned long t563 = __n554;
      int* t564 = __x555;
      struct std__allocator_int_ r565 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t557);
      ref_tmp0561 = r565;
        std____cxx11__list_int__std__allocator_int_____list(&__tmp560, t563, t564, &ref_tmp0561);
      {
        std__allocator_int____allocator(&ref_tmp0561);
      }
        struct std___List_iterator_int_ r566 = std____cxx11__list_int__std__allocator_int_____begin(&__tmp560);
        __retval556 = r566;
        agg_tmp0562 = __position553; // copy
        struct std___List_const_iterator_int_ t567 = agg_tmp0562;
        std____cxx11__list_int__std__allocator_int_____splice_2(t557, t567, &__tmp560);
        struct std___List_iterator_int_ t568 = __retval556;
        struct std___List_iterator_int_ ret_val569 = t568;
        {
          std____cxx11__list_int__std__allocator_int______list(&__tmp560);
        }
        return ret_val569;
    }
  struct std___List_iterator_int_ r570 = std___List_const_iterator_int____M_const_cast___const(&__position553);
  __retval556 = r570;
  struct std___List_iterator_int_ t571 = __retval556;
  return t571;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v572) {
bb573:
  struct std___List_iterator_int_* this574;
  struct std___List_iterator_int_* __retval575;
  this574 = v572;
  struct std___List_iterator_int_* t576 = this574;
  struct std____detail___List_node_base* t577 = t576->_M_node;
  struct std____detail___List_node_base* t578 = t577->_M_prev;
  t576->_M_node = t578;
  __retval575 = t576;
  struct std___List_iterator_int_* t579 = __retval575;
  return t579;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v580) {
bb581:
  struct std__allocator_int_* this582;
  this582 = v580;
  struct std__allocator_int_* t583 = this582;
  struct std____new_allocator_int_* base584 = (struct std____new_allocator_int_*)((char *)t583 + 0);
  std____new_allocator_int_____new_allocator_2(base584);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v585, unsigned long v586, int* v587, struct std__allocator_int_* v588) {
bb589:
  struct std__vector_int__std__allocator_int__* this590;
  unsigned long __n591;
  int* __value592;
  struct std__allocator_int_* __a593;
  this590 = v585;
  __n591 = v586;
  __value592 = v587;
  __a593 = v588;
  struct std__vector_int__std__allocator_int__* t594 = this590;
  struct std___Vector_base_int__std__allocator_int__* base595 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t594 + 0);
  unsigned long t596 = __n591;
  struct std__allocator_int_* t597 = __a593;
  unsigned long r598 = std__vector_int__std__allocator_int______S_check_init_len(t596, t597);
  struct std__allocator_int_* t599 = __a593;
  std___Vector_base_int__std__allocator_int______Vector_base(base595, r598, t599);
    unsigned long t600 = __n591;
    int* t601 = __value592;
    std__vector_int__std__allocator_int______M_fill_initialize(t594, t600, t601);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v602) {
bb603:
  struct std__allocator_int_* this604;
  this604 = v602;
  struct std__allocator_int_* t605 = this604;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2IN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiS1_EEEvEET_SA_RKS1_
void std____cxx11__list_int__std__allocator_int_____list___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std____cxx11__list_int__std__allocator_int__* v606, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v607, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v608, struct std__allocator_int_* v609) {
bb610:
  struct std____cxx11__list_int__std__allocator_int__* this611;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first612;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last613;
  struct std__allocator_int_* __a614;
  struct std__allocator_std___List_node_int__ ref_tmp0615;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0616;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1617;
  struct std____false_type agg_tmp2618;
  this611 = v606;
  __first612 = v607;
  __last613 = v608;
  __a614 = v609;
  struct std____cxx11__list_int__std__allocator_int__* t619 = this611;
  struct std____cxx11___List_base_int__std__allocator_int__* base620 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t619 + 0);
  struct std__allocator_int_* t621 = __a614;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp0615, t621);
    std____cxx11___List_base_int__std__allocator_int______List_base(base620, &ref_tmp0615);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0615);
  }
    agg_tmp0616 = __first612; // copy
    agg_tmp1617 = __last613; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t622 = agg_tmp0616;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t623 = agg_tmp1617;
    struct std____false_type t624 = agg_tmp2618;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t619, t622, t623, t624);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiS1_EEEvEESt14_List_iteratorIiESt20_List_const_iteratorIiET_SE_
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std____cxx11__list_int__std__allocator_int__* v625, struct std___List_const_iterator_int_ v626, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v627, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v628) {
bb629:
  struct std____cxx11__list_int__std__allocator_int__* this630;
  struct std___List_const_iterator_int_ __position631;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first632;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last633;
  struct std___List_iterator_int_ __retval634;
  struct std____cxx11__list_int__std__allocator_int__ __tmp635;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0636;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1637;
  struct std__allocator_int_ ref_tmp0638;
  this630 = v625;
  __position631 = v626;
  __first632 = v627;
  __last633 = v628;
  struct std____cxx11__list_int__std__allocator_int__* t639 = this630;
  agg_tmp0636 = __first632; // copy
  agg_tmp1637 = __last633; // copy
  struct std__allocator_int_ r640 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t639);
  ref_tmp0638 = r640;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t641 = agg_tmp0636;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t642 = agg_tmp1637;
    std____cxx11__list_int__std__allocator_int_____list___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(&__tmp635, t641, t642, &ref_tmp0638);
  {
    std__allocator_int____allocator(&ref_tmp0638);
  }
      _Bool r643 = std____cxx11__list_int__std__allocator_int_____empty___const(&__tmp635);
      _Bool u644 = !r643;
      if (u644) {
        struct std___List_const_iterator_int_ agg_tmp2645;
        struct std___List_iterator_int_ r646 = std____cxx11__list_int__std__allocator_int_____begin(&__tmp635);
        __retval634 = r646;
        agg_tmp2645 = __position631; // copy
        struct std___List_const_iterator_int_ t647 = agg_tmp2645;
        std____cxx11__list_int__std__allocator_int_____splice_2(t639, t647, &__tmp635);
        struct std___List_iterator_int_ t648 = __retval634;
        struct std___List_iterator_int_ ret_val649 = t648;
        {
          std____cxx11__list_int__std__allocator_int______list(&__tmp635);
        }
        return ret_val649;
      }
    struct std___List_iterator_int_ r650 = std___List_const_iterator_int____M_const_cast___const(&__position631);
    __retval634 = r650;
    struct std___List_iterator_int_ t651 = __retval634;
    struct std___List_iterator_int_ ret_val652 = t651;
    return ret_val652;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v653, int** v654) {
bb655:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this656;
  int** __i657;
  this656 = v653;
  __i657 = v654;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t658 = this656;
  int** t659 = __i657;
  int* t660 = *t659;
  t658->_M_current = t660;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v661) {
bb662:
  struct std__vector_int__std__allocator_int__* this663;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval664;
  this663 = v661;
  struct std__vector_int__std__allocator_int__* t665 = this663;
  struct std___Vector_base_int__std__allocator_int__* base666 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t665 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base667 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base666->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval664, &base667->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t668 = __retval664;
  return t668;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v669) {
bb670:
  struct std__vector_int__std__allocator_int__* this671;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval672;
  this671 = v669;
  struct std__vector_int__std__allocator_int__* t673 = this671;
  struct std___Vector_base_int__std__allocator_int__* base674 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t673 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base675 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base674->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval672, &base675->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t676 = __retval672;
  return t676;
}

// function: _ZNSt14_List_iteratorIiEmmEi
struct std___List_iterator_int_ std___List_iterator_int___operator__(struct std___List_iterator_int_* v677, int v678) {
bb679:
  struct std___List_iterator_int_* this680;
  int unnamed681;
  struct std___List_iterator_int_ __retval682;
  this680 = v677;
  unnamed681 = v678;
  struct std___List_iterator_int_* t683 = this680;
  __retval682 = *t683; // copy
  struct std____detail___List_node_base* t684 = t683->_M_node;
  struct std____detail___List_node_base* t685 = t684->_M_prev;
  t683->_M_node = t685;
  struct std___List_iterator_int_ t686 = __retval682;
  return t686;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v687, int v688) {
bb689:
  int __a690;
  int __b691;
  int __retval692;
  __a690 = v687;
  __b691 = v688;
  int t693 = __a690;
  int t694 = __b691;
  int b695 = t693 | t694;
  __retval692 = b695;
  int t696 = __retval692;
  return t696;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v697) {
bb698:
  struct std__basic_ios_char__std__char_traits_char__* this699;
  int __retval700;
  this699 = v697;
  struct std__basic_ios_char__std__char_traits_char__* t701 = this699;
  struct std__ios_base* base702 = (struct std__ios_base*)((char *)t701 + 0);
  int t703 = base702->_M_streambuf_state;
  __retval700 = t703;
  int t704 = __retval700;
  return t704;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v705, int v706) {
bb707:
  struct std__basic_ios_char__std__char_traits_char__* this708;
  int __state709;
  this708 = v705;
  __state709 = v706;
  struct std__basic_ios_char__std__char_traits_char__* t710 = this708;
  int r711 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t710);
  int t712 = __state709;
  int r713 = std__operator_(r711, t712);
  std__basic_ios_char__std__char_traits_char_____clear(t710, r713);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v714, char* v715) {
bb716:
  char* __c1717;
  char* __c2718;
  _Bool __retval719;
  __c1717 = v714;
  __c2718 = v715;
  char* t720 = __c1717;
  char t721 = *t720;
  int cast722 = (int)t721;
  char* t723 = __c2718;
  char t724 = *t723;
  int cast725 = (int)t724;
  _Bool c726 = ((cast722 == cast725)) ? 1 : 0;
  __retval719 = c726;
  _Bool t727 = __retval719;
  return t727;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v728) {
bb729:
  char* __p730;
  unsigned long __retval731;
  unsigned long __i732;
  __p730 = v728;
  unsigned long c733 = 0;
  __i732 = c733;
    char ref_tmp0734;
    while (1) {
      unsigned long t735 = __i732;
      char* t736 = __p730;
      char* ptr737 = &(t736)[t735];
      char c738 = 0;
      ref_tmp0734 = c738;
      _Bool r739 = __gnu_cxx__char_traits_char___eq(ptr737, &ref_tmp0734);
      _Bool u740 = !r739;
      if (!u740) break;
      unsigned long t741 = __i732;
      unsigned long u742 = t741 + 1;
      __i732 = u742;
    }
  unsigned long t743 = __i732;
  __retval731 = t743;
  unsigned long t744 = __retval731;
  return t744;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v745) {
bb746:
  char* __s747;
  unsigned long __retval748;
  __s747 = v745;
    _Bool r749 = std____is_constant_evaluated();
    if (r749) {
      char* t750 = __s747;
      unsigned long r751 = __gnu_cxx__char_traits_char___length(t750);
      __retval748 = r751;
      unsigned long t752 = __retval748;
      return t752;
    }
  char* t753 = __s747;
  unsigned long r754 = strlen(t753);
  __retval748 = r754;
  unsigned long t755 = __retval748;
  return t755;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v756, char* v757) {
bb758:
  struct std__basic_ostream_char__std__char_traits_char__* __out759;
  char* __s760;
  struct std__basic_ostream_char__std__char_traits_char__* __retval761;
  __out759 = v756;
  __s760 = v757;
    char* t762 = __s760;
    _Bool cast763 = (_Bool)t762;
    _Bool u764 = !cast763;
    if (u764) {
      struct std__basic_ostream_char__std__char_traits_char__* t765 = __out759;
      void** v766 = (void**)t765;
      void* v767 = *((void**)v766);
      unsigned char* cast768 = (unsigned char*)v767;
      long c769 = -24;
      unsigned char* ptr770 = &(cast768)[c769];
      long* cast771 = (long*)ptr770;
      long t772 = *cast771;
      unsigned char* cast773 = (unsigned char*)t765;
      unsigned char* ptr774 = &(cast773)[t772];
      struct std__basic_ostream_char__std__char_traits_char__* cast775 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr774;
      struct std__basic_ios_char__std__char_traits_char__* cast776 = (struct std__basic_ios_char__std__char_traits_char__*)cast775;
      int t777 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast776, t777);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t778 = __out759;
      char* t779 = __s760;
      char* t780 = __s760;
      unsigned long r781 = std__char_traits_char___length(t780);
      long cast782 = (long)r781;
      struct std__basic_ostream_char__std__char_traits_char__* r783 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t778, t779, cast782);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t784 = __out759;
  __retval761 = t784;
  struct std__basic_ostream_char__std__char_traits_char__* t785 = __retval761;
  return t785;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator___2(struct std___List_iterator_int_* v786, struct std___List_iterator_int_* v787) {
bb788:
  struct std___List_iterator_int_* __x789;
  struct std___List_iterator_int_* __y790;
  _Bool __retval791;
  __x789 = v786;
  __y790 = v787;
  struct std___List_iterator_int_* t792 = __x789;
  struct std____detail___List_node_base* t793 = t792->_M_node;
  struct std___List_iterator_int_* t794 = __y790;
  struct std____detail___List_node_base* t795 = t794->_M_node;
  _Bool c796 = ((t793 == t795)) ? 1 : 0;
  __retval791 = c796;
  _Bool t797 = __retval791;
  return t797;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v798) {
bb799:
  struct std____cxx11__list_int__std__allocator_int__* this800;
  struct std___List_iterator_int_ __retval801;
  this800 = v798;
  struct std____cxx11__list_int__std__allocator_int__* t802 = this800;
  struct std____cxx11___List_base_int__std__allocator_int__* base803 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t802 + 0);
  struct std____detail___List_node_base* r804 = std____detail___List_node_header___M_base(&base803->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval801, r804);
  struct std___List_iterator_int_ t805 = __retval801;
  return t805;
}

// function: _ZNSt14_List_iteratorIiEppEi
struct std___List_iterator_int_ std___List_iterator_int___operator___3(struct std___List_iterator_int_* v806, int v807) {
bb808:
  struct std___List_iterator_int_* this809;
  int unnamed810;
  struct std___List_iterator_int_ __retval811;
  this809 = v806;
  unnamed810 = v807;
  struct std___List_iterator_int_* t812 = this809;
  __retval811 = *t812; // copy
  struct std____detail___List_node_base* t813 = t812->_M_node;
  struct std____detail___List_node_base* t814 = t813->_M_next;
  t812->_M_node = t814;
  struct std___List_iterator_int_ t815 = __retval811;
  return t815;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v816, void* v817) {
bb818:
  struct std__basic_ostream_char__std__char_traits_char__* this819;
  void* __pf820;
  struct std__basic_ostream_char__std__char_traits_char__* __retval821;
  this819 = v816;
  __pf820 = v817;
  struct std__basic_ostream_char__std__char_traits_char__* t822 = this819;
  void* t823 = __pf820;
  struct std__basic_ostream_char__std__char_traits_char__* r824 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t823)(t822);
  __retval821 = r824;
  struct std__basic_ostream_char__std__char_traits_char__* t825 = __retval821;
  return t825;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v826) {
bb827:
  struct std__basic_ostream_char__std__char_traits_char__* __os828;
  struct std__basic_ostream_char__std__char_traits_char__* __retval829;
  __os828 = v826;
  struct std__basic_ostream_char__std__char_traits_char__* t830 = __os828;
  struct std__basic_ostream_char__std__char_traits_char__* r831 = std__ostream__flush(t830);
  __retval829 = r831;
  struct std__basic_ostream_char__std__char_traits_char__* t832 = __retval829;
  return t832;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v833) {
bb834:
  struct std__ctype_char_* __f835;
  struct std__ctype_char_* __retval836;
  __f835 = v833;
    struct std__ctype_char_* t837 = __f835;
    _Bool cast838 = (_Bool)t837;
    _Bool u839 = !cast838;
    if (u839) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t840 = __f835;
  __retval836 = t840;
  struct std__ctype_char_* t841 = __retval836;
  return t841;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v842, char v843) {
bb844:
  struct std__ctype_char_* this845;
  char __c846;
  char __retval847;
  this845 = v842;
  __c846 = v843;
  struct std__ctype_char_* t848 = this845;
    char t849 = t848->_M_widen_ok;
    _Bool cast850 = (_Bool)t849;
    if (cast850) {
      char t851 = __c846;
      unsigned char cast852 = (unsigned char)t851;
      unsigned long cast853 = (unsigned long)cast852;
      char t854 = t848->_M_widen[cast853];
      __retval847 = t854;
      char t855 = __retval847;
      return t855;
    }
  std__ctype_char____M_widen_init___const(t848);
  char t856 = __c846;
  void** v857 = (void**)t848;
  void* v858 = *((void**)v857);
  char vcall861 = (char)__VERIFIER_virtual_call_char_char(t848, 6, t856);
  __retval847 = vcall861;
  char t862 = __retval847;
  return t862;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v863, char v864) {
bb865:
  struct std__basic_ios_char__std__char_traits_char__* this866;
  char __c867;
  char __retval868;
  this866 = v863;
  __c867 = v864;
  struct std__basic_ios_char__std__char_traits_char__* t869 = this866;
  struct std__ctype_char_* t870 = t869->_M_ctype;
  struct std__ctype_char_* r871 = std__ctype_char__const__std____check_facet_std__ctype_char___(t870);
  char t872 = __c867;
  char r873 = std__ctype_char___widen_char__const(r871, t872);
  __retval868 = r873;
  char t874 = __retval868;
  return t874;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v875) {
bb876:
  struct std__basic_ostream_char__std__char_traits_char__* __os877;
  struct std__basic_ostream_char__std__char_traits_char__* __retval878;
  __os877 = v875;
  struct std__basic_ostream_char__std__char_traits_char__* t879 = __os877;
  struct std__basic_ostream_char__std__char_traits_char__* t880 = __os877;
  void** v881 = (void**)t880;
  void* v882 = *((void**)v881);
  unsigned char* cast883 = (unsigned char*)v882;
  long c884 = -24;
  unsigned char* ptr885 = &(cast883)[c884];
  long* cast886 = (long*)ptr885;
  long t887 = *cast886;
  unsigned char* cast888 = (unsigned char*)t880;
  unsigned char* ptr889 = &(cast888)[t887];
  struct std__basic_ostream_char__std__char_traits_char__* cast890 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr889;
  struct std__basic_ios_char__std__char_traits_char__* cast891 = (struct std__basic_ios_char__std__char_traits_char__*)cast890;
  char c892 = 10;
  char r893 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast891, c892);
  struct std__basic_ostream_char__std__char_traits_char__* r894 = std__ostream__put(t879, r893);
  struct std__basic_ostream_char__std__char_traits_char__* r895 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r894);
  __retval878 = r895;
  struct std__basic_ostream_char__std__char_traits_char__* t896 = __retval878;
  return t896;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v897) {
bb898:
  struct std__vector_int__std__allocator_int__* this899;
  this899 = v897;
  struct std__vector_int__std__allocator_int__* t900 = this899;
    struct std___Vector_base_int__std__allocator_int__* base901 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t900 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base902 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base901->_M_impl) + 0);
    int* t903 = base902->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base904 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t900 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base905 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base904->_M_impl) + 0);
    int* t906 = base905->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base907 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t900 + 0);
    struct std__allocator_int_* r908 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base907);
    void_std___Destroy_int___int_(t903, t906, r908);
  {
    struct std___Vector_base_int__std__allocator_int__* base909 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t900 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base909);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v910) {
bb911:
  struct std____cxx11__list_int__std__allocator_int__* this912;
  this912 = v910;
  struct std____cxx11__list_int__std__allocator_int__* t913 = this912;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base914 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t913 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base914);
  }
  return;
}

// function: main
int main() {
bb915:
  int __retval916;
  struct std____cxx11__list_int__std__allocator_int__ mylist917;
  struct std___List_iterator_int_ it918;
  struct std___List_iterator_int_ ref_tmp0919;
  struct std___List_const_iterator_int_ agg_tmp0920;
  int ref_tmp1921;
  struct std___List_iterator_int_ agg_tmp1922;
  struct std___List_const_iterator_int_ agg_tmp2923;
  int ref_tmp2924;
  struct std___List_iterator_int_ agg_tmp3925;
  struct std__vector_int__std__allocator_int__ myvector926;
  int ref_tmp3927;
  struct std__allocator_int_ ref_tmp4928;
  struct std___List_const_iterator_int_ agg_tmp4929;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5930;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6931;
  struct std___List_iterator_int_ agg_tmp7932;
  struct std___List_iterator_int_ agg_tmp8933;
  int c934 = 0;
  __retval916 = c934;
  std____cxx11__list_int__std__allocator_int_____list_2(&mylist917);
    std___List_iterator_int____List_iterator_2(&it918);
      int i935;
      int c936 = 1;
      i935 = c936;
      while (1) {
        int t938 = i935;
        int c939 = 5;
        _Bool c940 = ((t938 <= c939)) ? 1 : 0;
        if (!c940) break;
        std____cxx11__list_int__std__allocator_int_____push_back(&mylist917, &i935);
      for_step937: ;
        int t941 = i935;
        int u942 = t941 + 1;
        i935 = u942;
      }
    struct std___List_iterator_int_ r943 = std____cxx11__list_int__std__allocator_int_____begin(&mylist917);
    ref_tmp0919 = r943;
    struct std___List_iterator_int_* r944 = std___List_iterator_int___operator_(&it918, &ref_tmp0919);
    struct std___List_iterator_int_* r945 = std___List_iterator_int___operator___4(&it918);
    std___List_const_iterator_int____List_const_iterator(&agg_tmp0920, &it918);
    int c946 = 10;
    ref_tmp1921 = c946;
    struct std___List_const_iterator_int_ t947 = agg_tmp0920;
    struct std___List_iterator_int_ r948 = std____cxx11__list_int__std__allocator_int_____insert(&mylist917, t947, &ref_tmp1921);
    agg_tmp1922 = r948;
    int* r949 = std___List_iterator_int___operator____const(&it918);
    int t950 = *r949;
    int c951 = 2;
    _Bool c952 = ((t950 == c951)) ? 1 : 0;
    if (c952) {
    } else {
      char* cast953 = (char*)&(_str);
      char* c954 = _str_1;
      unsigned int c955 = 27;
      char* cast956 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast953, c954, c955, cast956);
    }
    unsigned long r957 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist917);
    unsigned long c958 = 6;
    _Bool c959 = ((r957 == c958)) ? 1 : 0;
    if (c959) {
    } else {
      char* cast960 = (char*)&(_str_2);
      char* c961 = _str_1;
      unsigned int c962 = 28;
      char* cast963 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast960, c961, c962, cast963);
    }
    std___List_const_iterator_int____List_const_iterator(&agg_tmp2923, &it918);
    unsigned long c964 = 2;
    int c965 = 20;
    ref_tmp2924 = c965;
    struct std___List_const_iterator_int_ t966 = agg_tmp2923;
    struct std___List_iterator_int_ r967 = std____cxx11__list_int__std__allocator_int_____insert_2(&mylist917, t966, c964, &ref_tmp2924);
    agg_tmp3925 = r967;
    struct std___List_iterator_int_* r968 = std___List_iterator_int___operator___2(&it918);
    int* r969 = std___List_iterator_int___operator____const(&it918);
    int t970 = *r969;
    int c971 = 20;
    _Bool c972 = ((t970 == c971)) ? 1 : 0;
    if (c972) {
    } else {
      char* cast973 = (char*)&(_str_3);
      char* c974 = _str_1;
      unsigned int c975 = 34;
      char* cast976 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast973, c974, c975, cast976);
    }
    unsigned long r977 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist917);
    unsigned long c978 = 8;
    _Bool c979 = ((r977 == c978)) ? 1 : 0;
    if (c979) {
    } else {
      char* cast980 = (char*)&(_str_4);
      char* c981 = _str_1;
      unsigned int c982 = 35;
      char* cast983 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast980, c981, c982, cast983);
    }
    unsigned long c984 = 2;
    int c985 = 30;
    ref_tmp3927 = c985;
    std__allocator_int___allocator_2(&ref_tmp4928);
      std__vector_int__std__allocator_int_____vector(&myvector926, c984, &ref_tmp3927, &ref_tmp4928);
    {
      std__allocator_int____allocator(&ref_tmp4928);
    }
      std___List_const_iterator_int____List_const_iterator(&agg_tmp4929, &it918);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r986 = std__vector_int__std__allocator_int_____begin(&myvector926);
      agg_tmp5930 = r986;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r987 = std__vector_int__std__allocator_int_____end(&myvector926);
      agg_tmp6931 = r987;
      struct std___List_const_iterator_int_ t988 = agg_tmp4929;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t989 = agg_tmp5930;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t990 = agg_tmp6931;
      struct std___List_iterator_int_ r991 = std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(&mylist917, t988, t989, t990);
      agg_tmp7932 = r991;
      int c992 = 0;
      struct std___List_iterator_int_ r993 = std___List_iterator_int___operator__(&it918, c992);
      agg_tmp8933 = r993;
      unsigned long r994 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist917);
      unsigned long c995 = 10;
      _Bool c996 = ((r994 == c995)) ? 1 : 0;
      if (c996) {
      } else {
        char* cast997 = (char*)&(_str_5);
        char* c998 = _str_1;
        unsigned int c999 = 42;
        char* cast1000 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast997, c998, c999, cast1000);
      }
      int* r1001 = std___List_iterator_int___operator____const(&it918);
      int t1002 = *r1001;
      int c1003 = 30;
      _Bool c1004 = ((t1002 == c1003)) ? 1 : 0;
      if (c1004) {
      } else {
        char* cast1005 = (char*)&(_str_6);
        char* c1006 = _str_1;
        unsigned int c1007 = 43;
        char* cast1008 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1005, c1006, c1007, cast1008);
      }
      char* cast1009 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r1010 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1009);
        struct std___List_iterator_int_ ref_tmp51011;
        struct std___List_iterator_int_ ref_tmp61012;
        struct std___List_iterator_int_ agg_tmp91013;
        struct std___List_iterator_int_ r1014 = std____cxx11__list_int__std__allocator_int_____begin(&mylist917);
        ref_tmp51011 = r1014;
        struct std___List_iterator_int_* r1015 = std___List_iterator_int___operator_(&it918, &ref_tmp51011);
        while (1) {
          struct std___List_iterator_int_ r1017 = std____cxx11__list_int__std__allocator_int_____end(&mylist917);
          ref_tmp61012 = r1017;
          _Bool r1018 = std__operator___2(&it918, &ref_tmp61012);
          _Bool u1019 = !r1018;
          if (!u1019) break;
          char* cast1020 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* r1021 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1020);
          int* r1022 = std___List_iterator_int___operator____const(&it918);
          int t1023 = *r1022;
          struct std__basic_ostream_char__std__char_traits_char__* r1024 = std__ostream__operator__(r1021, t1023);
        for_step1016: ;
          int c1025 = 0;
          struct std___List_iterator_int_ r1026 = std___List_iterator_int___operator___3(&it918, c1025);
          agg_tmp91013 = r1026;
        }
      struct std__basic_ostream_char__std__char_traits_char__* r1027 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c1028 = 0;
      __retval916 = c1028;
      int t1029 = __retval916;
      int ret_val1030 = t1029;
      {
        std__vector_int__std__allocator_int______vector(&myvector926);
      }
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist917);
      }
      return ret_val1030;
  int t1031 = __retval916;
  return t1031;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1032) {
bb1033:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1034;
  this1034 = v1032;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1035 = this1034;
  struct std__allocator_std___List_node_int__* base1036 = (struct std__allocator_std___List_node_int__*)((char *)t1035 + 0);
  std__allocator_std___List_node_int_____allocator_2(base1036);
    std____detail___List_node_header___List_node_header(&t1035->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1037) {
bb1038:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1039;
  this1039 = v1037;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1040 = this1039;
  {
    struct std__allocator_std___List_node_int__* base1041 = (struct std__allocator_std___List_node_int__*)((char *)t1040 + 0);
    std__allocator_std___List_node_int______allocator(base1041);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base_2(struct std____cxx11___List_base_int__std__allocator_int__* v1042) {
bb1043:
  struct std____cxx11___List_base_int__std__allocator_int__* this1044;
  this1044 = v1042;
  struct std____cxx11___List_base_int__std__allocator_int__* t1045 = this1044;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(&t1045->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v1046) {
bb1047:
  struct std____detail___List_node_header* this1048;
  struct std____detail___List_node_base* __retval1049;
  this1048 = v1046;
  struct std____detail___List_node_header* t1050 = this1048;
  struct std____detail___List_node_base* base1051 = (struct std____detail___List_node_base*)((char *)t1050 + 0);
  __retval1049 = base1051;
  struct std____detail___List_node_base* t1052 = __retval1049;
  return t1052;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1053) {
bb1054:
  int* __location1055;
  __location1055 = v1053;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v1056, int* v1057) {
bb1058:
  struct std__allocator_std___List_node_int__* __a1059;
  int* __p1060;
  __a1059 = v1056;
  __p1060 = v1057;
  int* t1061 = __p1060;
  void_std__destroy_at_int_(t1061);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1062) {
bb1063:
  struct __gnu_cxx____aligned_membuf_int_* this1064;
  void* __retval1065;
  this1064 = v1062;
  struct __gnu_cxx____aligned_membuf_int_* t1066 = this1064;
  void* cast1067 = (void*)&(t1066->_M_storage);
  __retval1065 = cast1067;
  void* t1068 = __retval1065;
  return t1068;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1069) {
bb1070:
  struct __gnu_cxx____aligned_membuf_int_* this1071;
  int* __retval1072;
  this1071 = v1069;
  struct __gnu_cxx____aligned_membuf_int_* t1073 = this1071;
  void* r1074 = __gnu_cxx____aligned_membuf_int____M_addr(t1073);
  int* cast1075 = (int*)r1074;
  __retval1072 = cast1075;
  int* t1076 = __retval1072;
  return t1076;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v1077) {
bb1078:
  struct std___List_node_int_* this1079;
  int* __retval1080;
  this1079 = v1077;
  struct std___List_node_int_* t1081 = this1079;
  int* r1082 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1081->_M_storage);
  __retval1080 = r1082;
  int* t1083 = __retval1080;
  return t1083;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1084:
  _Bool __retval1085;
    _Bool c1086 = 0;
    __retval1085 = c1086;
    _Bool t1087 = __retval1085;
    return t1087;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v1088, struct std___List_node_int_* v1089, unsigned long v1090) {
bb1091:
  struct std____new_allocator_std___List_node_int__* this1092;
  struct std___List_node_int_* __p1093;
  unsigned long __n1094;
  this1092 = v1088;
  __p1093 = v1089;
  __n1094 = v1090;
  struct std____new_allocator_std___List_node_int__* t1095 = this1092;
    unsigned long c1096 = 8;
    unsigned long c1097 = 16;
    _Bool c1098 = ((c1096 > c1097)) ? 1 : 0;
    if (c1098) {
      struct std___List_node_int_* t1099 = __p1093;
      void* cast1100 = (void*)t1099;
      unsigned long t1101 = __n1094;
      unsigned long c1102 = 24;
      unsigned long b1103 = t1101 * c1102;
      unsigned long c1104 = 8;
      operator_delete_3(cast1100, b1103, c1104);
      return;
    }
  struct std___List_node_int_* t1105 = __p1093;
  void* cast1106 = (void*)t1105;
  unsigned long t1107 = __n1094;
  unsigned long c1108 = 24;
  unsigned long b1109 = t1107 * c1108;
  operator_delete_2(cast1106, b1109);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v1110, struct std___List_node_int_* v1111, unsigned long v1112) {
bb1113:
  struct std__allocator_std___List_node_int__* this1114;
  struct std___List_node_int_* __p1115;
  unsigned long __n1116;
  this1114 = v1110;
  __p1115 = v1111;
  __n1116 = v1112;
  struct std__allocator_std___List_node_int__* t1117 = this1114;
    _Bool r1118 = std____is_constant_evaluated();
    if (r1118) {
      struct std___List_node_int_* t1119 = __p1115;
      void* cast1120 = (void*)t1119;
      operator_delete(cast1120);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base1121 = (struct std____new_allocator_std___List_node_int__*)((char *)t1117 + 0);
  struct std___List_node_int_* t1122 = __p1115;
  unsigned long t1123 = __n1116;
  std____new_allocator_std___List_node_int_____deallocate(base1121, t1122, t1123);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v1124, struct std___List_node_int_* v1125, unsigned long v1126) {
bb1127:
  struct std__allocator_std___List_node_int__* __a1128;
  struct std___List_node_int_* __p1129;
  unsigned long __n1130;
  __a1128 = v1124;
  __p1129 = v1125;
  __n1130 = v1126;
  struct std__allocator_std___List_node_int__* t1131 = __a1128;
  struct std___List_node_int_* t1132 = __p1129;
  unsigned long t1133 = __n1130;
  std__allocator_std___List_node_int_____deallocate(t1131, t1132, t1133);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v1134, struct std___List_node_int_* v1135) {
bb1136:
  struct std____cxx11___List_base_int__std__allocator_int__* this1137;
  struct std___List_node_int_* __p1138;
  this1137 = v1134;
  __p1138 = v1135;
  struct std____cxx11___List_base_int__std__allocator_int__* t1139 = this1137;
  struct std__allocator_std___List_node_int__* base1140 = (struct std__allocator_std___List_node_int__*)((char *)&(t1139->_M_impl) + 0);
  struct std___List_node_int_* t1141 = __p1138;
  unsigned long c1142 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base1140, t1141, c1142);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v1143, struct std___List_node_int_* v1144) {
bb1145:
  struct std____cxx11___List_base_int__std__allocator_int__* this1146;
  struct std___List_node_int_* __p1147;
  this1146 = v1143;
  __p1147 = v1144;
  struct std____cxx11___List_base_int__std__allocator_int__* t1148 = this1146;
  struct std__allocator_std___List_node_int__* base1149 = (struct std__allocator_std___List_node_int__*)((char *)&(t1148->_M_impl) + 0);
  struct std___List_node_int_* t1150 = __p1147;
  int* r1151 = std___List_node_int____M_valptr(t1150);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base1149, r1151);
  struct std___List_node_int_* t1152 = __p1147;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t1148, t1152);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v1153) {
bb1154:
  struct std___List_node_int_* this1155;
  struct std___List_node_int_* __retval1156;
  this1155 = v1153;
  struct std___List_node_int_* t1157 = this1155;
  __retval1156 = t1157;
  struct std___List_node_int_* t1158 = __retval1156;
  return t1158;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v1159) {
bb1160:
  struct std____cxx11___List_base_int__std__allocator_int__* this1161;
  struct std____detail___List_node_base* __cur1162;
  this1161 = v1159;
  struct std____cxx11___List_base_int__std__allocator_int__* t1163 = this1161;
  struct std____detail___List_node_base* base1164 = (struct std____detail___List_node_base*)((char *)&(t1163->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1165 = base1164->_M_next;
  __cur1162 = t1165;
    while (1) {
      struct std____detail___List_node_base* t1166 = __cur1162;
      struct std____detail___List_node_base* r1167 = std____detail___List_node_header___M_base(&t1163->_M_impl._M_node);
      _Bool c1168 = ((t1166 != r1167)) ? 1 : 0;
      if (!c1168) break;
        struct std___List_node_int_* __tmp1169;
        struct std____detail___List_node_base* t1170 = __cur1162;
        struct std___List_node_int_* derived1171 = (struct std___List_node_int_*)((char *)t1170 - 0);
        __tmp1169 = derived1171;
        struct std___List_node_int_* t1172 = __tmp1169;
        struct std____detail___List_node_base* base1173 = (struct std____detail___List_node_base*)((char *)t1172 + 0);
        struct std____detail___List_node_base* t1174 = base1173->_M_next;
        __cur1162 = t1174;
        struct std___List_node_int_* t1175 = __tmp1169;
        struct std___List_node_int_* r1176 = std___List_node_int____M_node_ptr(t1175);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t1163, r1176);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1177) {
bb1178:
  struct std____cxx11___List_base_int__std__allocator_int__* this1179;
  this1179 = v1177;
  struct std____cxx11___List_base_int__std__allocator_int__* t1180 = this1179;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t1180);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t1180->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v1181) {
bb1182:
  struct std____new_allocator_std___List_node_int__* this1183;
  this1183 = v1181;
  struct std____new_allocator_std___List_node_int__* t1184 = this1183;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator_2(struct std__allocator_std___List_node_int__* v1185) {
bb1186:
  struct std__allocator_std___List_node_int__* this1187;
  this1187 = v1185;
  struct std__allocator_std___List_node_int__* t1188 = this1187;
  struct std____new_allocator_std___List_node_int__* base1189 = (struct std____new_allocator_std___List_node_int__*)((char *)t1188 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1189);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1190) {
bb1191:
  struct std____detail___List_node_header* this1192;
  this1192 = v1190;
  struct std____detail___List_node_header* t1193 = this1192;
  struct std____detail___List_node_base* base1194 = (struct std____detail___List_node_base*)((char *)t1193 + 0);
  struct std____detail___List_size* base1195 = (struct std____detail___List_size*)((char *)t1193 + 16);
  std____detail___List_node_header___M_init(t1193);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1196, struct std____detail___List_size* v1197) {
bb1198:
  struct std____detail___List_size* this1199;
  struct std____detail___List_size* unnamed1200;
  struct std____detail___List_size* __retval1201;
  this1199 = v1196;
  unnamed1200 = v1197;
  struct std____detail___List_size* t1202 = this1199;
  struct std____detail___List_size* t1203 = unnamed1200;
  unsigned long t1204 = t1203->_M_size;
  t1202->_M_size = t1204;
  __retval1201 = t1202;
  struct std____detail___List_size* t1205 = __retval1201;
  return t1205;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1206) {
bb1207:
  struct std____detail___List_node_header* this1208;
  struct std____detail___List_size ref_tmp01209;
  this1208 = v1206;
  struct std____detail___List_node_header* t1210 = this1208;
  struct std____detail___List_node_base* base1211 = (struct std____detail___List_node_base*)((char *)t1210 + 0);
  struct std____detail___List_node_base* base1212 = (struct std____detail___List_node_base*)((char *)t1210 + 0);
  base1212->_M_prev = base1211;
  struct std____detail___List_node_base* base1213 = (struct std____detail___List_node_base*)((char *)t1210 + 0);
  base1213->_M_next = base1211;
  struct std____detail___List_size* base1214 = (struct std____detail___List_size*)((char *)t1210 + 16);
  ref_tmp01209 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1215 = std____detail___List_size__operator_(base1214, &ref_tmp01209);
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1216) {
bb1217:
  struct std____new_allocator_int_* this1218;
  this1218 = v1216;
  struct std____new_allocator_int_* t1219 = this1218;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1220, unsigned long* v1221) {
bb1222:
  unsigned long* __a1223;
  unsigned long* __b1224;
  unsigned long* __retval1225;
  __a1223 = v1220;
  __b1224 = v1221;
    unsigned long* t1226 = __b1224;
    unsigned long t1227 = *t1226;
    unsigned long* t1228 = __a1223;
    unsigned long t1229 = *t1228;
    _Bool c1230 = ((t1227 < t1229)) ? 1 : 0;
    if (c1230) {
      unsigned long* t1231 = __b1224;
      __retval1225 = t1231;
      unsigned long* t1232 = __retval1225;
      return t1232;
    }
  unsigned long* t1233 = __a1223;
  __retval1225 = t1233;
  unsigned long* t1234 = __retval1225;
  return t1234;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1235) {
bb1236:
  struct std__allocator_int_* __a1237;
  unsigned long __retval1238;
  unsigned long __diffmax1239;
  unsigned long __allocmax1240;
  __a1237 = v1235;
  unsigned long c1241 = 2305843009213693951;
  __diffmax1239 = c1241;
  unsigned long c1242 = 4611686018427387903;
  __allocmax1240 = c1242;
  unsigned long* r1243 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1239, &__allocmax1240);
  unsigned long t1244 = *r1243;
  __retval1238 = t1244;
  unsigned long t1245 = __retval1238;
  return t1245;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1246, struct std__allocator_int_* v1247) {
bb1248:
  struct std__allocator_int_* this1249;
  struct std__allocator_int_* __a1250;
  this1249 = v1246;
  __a1250 = v1247;
  struct std__allocator_int_* t1251 = this1249;
  struct std____new_allocator_int_* base1252 = (struct std____new_allocator_int_*)((char *)t1251 + 0);
  struct std__allocator_int_* t1253 = __a1250;
  struct std____new_allocator_int_* base1254 = (struct std____new_allocator_int_*)((char *)t1253 + 0);
  std____new_allocator_int_____new_allocator(base1252, base1254);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1255, struct std__allocator_int_* v1256) {
bb1257:
  unsigned long __n1258;
  struct std__allocator_int_* __a1259;
  unsigned long __retval1260;
  __n1258 = v1255;
  __a1259 = v1256;
    struct std__allocator_int_ ref_tmp01261;
    _Bool tmp_exprcleanup1262;
    unsigned long t1263 = __n1258;
    struct std__allocator_int_* t1264 = __a1259;
    std__allocator_int___allocator(&ref_tmp01261, t1264);
      unsigned long r1265 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01261);
      _Bool c1266 = ((t1263 > r1265)) ? 1 : 0;
      tmp_exprcleanup1262 = c1266;
    {
      std__allocator_int____allocator(&ref_tmp01261);
    }
    _Bool t1267 = tmp_exprcleanup1262;
    if (t1267) {
      char* cast1268 = (char*)&(_str_9);
      std____throw_length_error(cast1268);
    }
  unsigned long t1269 = __n1258;
  __retval1260 = t1269;
  unsigned long t1270 = __retval1260;
  return t1270;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1271, struct std__allocator_int_* v1272) {
bb1273:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1274;
  struct std__allocator_int_* __a1275;
  this1274 = v1271;
  __a1275 = v1272;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1276 = this1274;
  struct std__allocator_int_* base1277 = (struct std__allocator_int_*)((char *)t1276 + 0);
  struct std__allocator_int_* t1278 = __a1275;
  std__allocator_int___allocator(base1277, t1278);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1279 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1276 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1279);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1280) {
bb1281:
  struct std____new_allocator_int_* this1282;
  unsigned long __retval1283;
  this1282 = v1280;
  struct std____new_allocator_int_* t1284 = this1282;
  unsigned long c1285 = 9223372036854775807;
  unsigned long c1286 = 4;
  unsigned long b1287 = c1285 / c1286;
  __retval1283 = b1287;
  unsigned long t1288 = __retval1283;
  return t1288;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1289, unsigned long v1290, void* v1291) {
bb1292:
  struct std____new_allocator_int_* this1293;
  unsigned long __n1294;
  void* unnamed1295;
  int* __retval1296;
  this1293 = v1289;
  __n1294 = v1290;
  unnamed1295 = v1291;
  struct std____new_allocator_int_* t1297 = this1293;
    unsigned long t1298 = __n1294;
    unsigned long r1299 = std____new_allocator_int____M_max_size___const(t1297);
    _Bool c1300 = ((t1298 > r1299)) ? 1 : 0;
    if (c1300) {
        unsigned long t1301 = __n1294;
        unsigned long c1302 = -1;
        unsigned long c1303 = 4;
        unsigned long b1304 = c1302 / c1303;
        _Bool c1305 = ((t1301 > b1304)) ? 1 : 0;
        if (c1305) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1306 = 4;
    unsigned long c1307 = 16;
    _Bool c1308 = ((c1306 > c1307)) ? 1 : 0;
    if (c1308) {
      unsigned long __al1309;
      unsigned long c1310 = 4;
      __al1309 = c1310;
      unsigned long t1311 = __n1294;
      unsigned long c1312 = 4;
      unsigned long b1313 = t1311 * c1312;
      unsigned long t1314 = __al1309;
      void* r1315 = operator_new_2(b1313, t1314);
      int* cast1316 = (int*)r1315;
      __retval1296 = cast1316;
      int* t1317 = __retval1296;
      return t1317;
    }
  unsigned long t1318 = __n1294;
  unsigned long c1319 = 4;
  unsigned long b1320 = t1318 * c1319;
  void* r1321 = operator_new(b1320);
  int* cast1322 = (int*)r1321;
  __retval1296 = cast1322;
  int* t1323 = __retval1296;
  return t1323;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1324, unsigned long v1325) {
bb1326:
  struct std__allocator_int_* this1327;
  unsigned long __n1328;
  int* __retval1329;
  this1327 = v1324;
  __n1328 = v1325;
  struct std__allocator_int_* t1330 = this1327;
    _Bool r1331 = std____is_constant_evaluated();
    if (r1331) {
        unsigned long t1332 = __n1328;
        unsigned long c1333 = 4;
        unsigned long ovr1334;
        _Bool ovf1335 = __builtin_mul_overflow(t1332, c1333, &ovr1334);
        __n1328 = ovr1334;
        if (ovf1335) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1336 = __n1328;
      void* r1337 = operator_new(t1336);
      int* cast1338 = (int*)r1337;
      __retval1329 = cast1338;
      int* t1339 = __retval1329;
      return t1339;
    }
  struct std____new_allocator_int_* base1340 = (struct std____new_allocator_int_*)((char *)t1330 + 0);
  unsigned long t1341 = __n1328;
  void* c1342 = ((void*)0);
  int* r1343 = std____new_allocator_int___allocate(base1340, t1341, c1342);
  __retval1329 = r1343;
  int* t1344 = __retval1329;
  return t1344;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1345, unsigned long v1346) {
bb1347:
  struct std__allocator_int_* __a1348;
  unsigned long __n1349;
  int* __retval1350;
  __a1348 = v1345;
  __n1349 = v1346;
  struct std__allocator_int_* t1351 = __a1348;
  unsigned long t1352 = __n1349;
  int* r1353 = std__allocator_int___allocate(t1351, t1352);
  __retval1350 = r1353;
  int* t1354 = __retval1350;
  return t1354;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1355, unsigned long v1356) {
bb1357:
  struct std___Vector_base_int__std__allocator_int__* this1358;
  unsigned long __n1359;
  int* __retval1360;
  this1358 = v1355;
  __n1359 = v1356;
  struct std___Vector_base_int__std__allocator_int__* t1361 = this1358;
  unsigned long t1362 = __n1359;
  unsigned long c1363 = 0;
  _Bool c1364 = ((t1362 != c1363)) ? 1 : 0;
  int* ternary1365;
  if (c1364) {
    struct std__allocator_int_* base1366 = (struct std__allocator_int_*)((char *)&(t1361->_M_impl) + 0);
    unsigned long t1367 = __n1359;
    int* r1368 = std__allocator_traits_std__allocator_int_____allocate(base1366, t1367);
    ternary1365 = (int*)r1368;
  } else {
    int* c1369 = ((void*)0);
    ternary1365 = (int*)c1369;
  }
  __retval1360 = ternary1365;
  int* t1370 = __retval1360;
  return t1370;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1371, unsigned long v1372) {
bb1373:
  struct std___Vector_base_int__std__allocator_int__* this1374;
  unsigned long __n1375;
  this1374 = v1371;
  __n1375 = v1372;
  struct std___Vector_base_int__std__allocator_int__* t1376 = this1374;
  unsigned long t1377 = __n1375;
  int* r1378 = std___Vector_base_int__std__allocator_int______M_allocate(t1376, t1377);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1379 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1376->_M_impl) + 0);
  base1379->_M_start = r1378;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1380 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1376->_M_impl) + 0);
  int* t1381 = base1380->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1382 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1376->_M_impl) + 0);
  base1382->_M_finish = t1381;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1383 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1376->_M_impl) + 0);
  int* t1384 = base1383->_M_start;
  unsigned long t1385 = __n1375;
  int* ptr1386 = &(t1384)[t1385];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1387 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1376->_M_impl) + 0);
  base1387->_M_end_of_storage = ptr1386;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1388) {
bb1389:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1390;
  this1390 = v1388;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1391 = this1390;
  {
    struct std__allocator_int_* base1392 = (struct std__allocator_int_*)((char *)t1391 + 0);
    std__allocator_int____allocator(base1392);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1393, unsigned long v1394, struct std__allocator_int_* v1395) {
bb1396:
  struct std___Vector_base_int__std__allocator_int__* this1397;
  unsigned long __n1398;
  struct std__allocator_int_* __a1399;
  this1397 = v1393;
  __n1398 = v1394;
  __a1399 = v1395;
  struct std___Vector_base_int__std__allocator_int__* t1400 = this1397;
  struct std__allocator_int_* t1401 = __a1399;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1400->_M_impl, t1401);
    unsigned long t1402 = __n1398;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1400, t1402);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1403:
  _Bool __retval1404;
    _Bool c1405 = 0;
    __retval1404 = c1405;
    _Bool t1406 = __retval1404;
    return t1406;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1407, int** v1408) {
bb1409:
  struct std___UninitDestroyGuard_int____void_* this1410;
  int** __first1411;
  this1410 = v1407;
  __first1411 = v1408;
  struct std___UninitDestroyGuard_int____void_* t1412 = this1410;
  int** t1413 = __first1411;
  int* t1414 = *t1413;
  t1412->_M_first = t1414;
  int** t1415 = __first1411;
  t1412->_M_cur = t1415;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1416, int* v1417) {
bb1418:
  int* __location1419;
  int* __args1420;
  int* __retval1421;
  void* __loc1422;
  __location1419 = v1416;
  __args1420 = v1417;
  int* t1423 = __location1419;
  void* cast1424 = (void*)t1423;
  __loc1422 = cast1424;
    void* t1425 = __loc1422;
    int* cast1426 = (int*)t1425;
    int* t1427 = __args1420;
    int t1428 = *t1427;
    *cast1426 = t1428;
    __retval1421 = cast1426;
    int* t1429 = __retval1421;
    return t1429;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1430, int* v1431) {
bb1432:
  int* __p1433;
  int* __args1434;
  __p1433 = v1430;
  __args1434 = v1431;
    _Bool r1435 = std____is_constant_evaluated();
    if (r1435) {
      int* t1436 = __p1433;
      int* t1437 = __args1434;
      int* r1438 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1436, t1437);
      return;
    }
  int* t1439 = __p1433;
  void* cast1440 = (void*)t1439;
  int* cast1441 = (int*)cast1440;
  int* t1442 = __args1434;
  int t1443 = *t1442;
  *cast1441 = t1443;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1444) {
bb1445:
  struct std___UninitDestroyGuard_int____void_* this1446;
  this1446 = v1444;
  struct std___UninitDestroyGuard_int____void_* t1447 = this1446;
  int** c1448 = ((void*)0);
  t1447->_M_cur = c1448;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1449) {
bb1450:
  struct std___UninitDestroyGuard_int____void_* this1451;
  this1451 = v1449;
  struct std___UninitDestroyGuard_int____void_* t1452 = this1451;
    int** t1453 = t1452->_M_cur;
    int** c1454 = ((void*)0);
    _Bool c1455 = ((t1453 != c1454)) ? 1 : 0;
    if (c1455) {
      int* t1456 = t1452->_M_first;
      int** t1457 = t1452->_M_cur;
      int* t1458 = *t1457;
      void_std___Destroy_int__(t1456, t1458);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v1459, unsigned long v1460, int* v1461) {
bb1462:
  int* __first1463;
  unsigned long __n1464;
  int* __x1465;
  int* __retval1466;
  struct std___UninitDestroyGuard_int____void_ __guard1467;
  __first1463 = v1459;
  __n1464 = v1460;
  __x1465 = v1461;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1467, &__first1463);
        do {
              unsigned long t1468 = __n1464;
              unsigned long c1469 = 0;
              _Bool c1470 = ((t1468 >= c1469)) ? 1 : 0;
              _Bool u1471 = !c1470;
              if (u1471) {
                char* cast1472 = (char*)&(_str_10);
                int c1473 = 463;
                char* cast1474 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast1475 = (char*)&(_str_11);
                std____glibcxx_assert_fail(cast1472, c1473, cast1474, cast1475);
              }
          _Bool c1476 = 0;
          if (!c1476) break;
        } while (1);
      while (1) {
        unsigned long t1478 = __n1464;
        unsigned long u1479 = t1478 - 1;
        __n1464 = u1479;
        _Bool cast1480 = (_Bool)t1478;
        if (!cast1480) break;
        int* t1481 = __first1463;
        int* t1482 = __x1465;
        void_std___Construct_int__int_const__(t1481, t1482);
      for_step1477: ;
        int* t1483 = __first1463;
        int c1484 = 1;
        int* ptr1485 = &(t1483)[c1484];
        __first1463 = ptr1485;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1467);
    int* t1486 = __first1463;
    __retval1466 = t1486;
    int* t1487 = __retval1466;
    int* ret_val1488 = t1487;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1467);
    }
    return ret_val1488;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v1489, unsigned long v1490, int* v1491) {
bb1492:
  int* __first1493;
  unsigned long __n1494;
  int* __x1495;
  int* __retval1496;
  __first1493 = v1489;
  __n1494 = v1490;
  __x1495 = v1491;
  int* t1497 = __first1493;
  unsigned long t1498 = __n1494;
  int* t1499 = __x1495;
  int* r1500 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1497, t1498, t1499);
  __retval1496 = r1500;
  int* t1501 = __retval1496;
  return t1501;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v1502, unsigned long v1503, int* v1504, struct std__allocator_int_* v1505) {
bb1506:
  int* __first1507;
  unsigned long __n1508;
  int* __x1509;
  struct std__allocator_int_* unnamed1510;
  int* __retval1511;
  __first1507 = v1502;
  __n1508 = v1503;
  __x1509 = v1504;
  unnamed1510 = v1505;
    _Bool r1512 = std__is_constant_evaluated();
    if (r1512) {
      int* t1513 = __first1507;
      unsigned long t1514 = __n1508;
      int* t1515 = __x1509;
      int* r1516 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1513, t1514, t1515);
      __retval1511 = r1516;
      int* t1517 = __retval1511;
      return t1517;
    }
  int* t1518 = __first1507;
  unsigned long t1519 = __n1508;
  int* t1520 = __x1509;
  int* r1521 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t1518, t1519, t1520);
  __retval1511 = r1521;
  int* t1522 = __retval1511;
  return t1522;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1523) {
bb1524:
  struct std___Vector_base_int__std__allocator_int__* this1525;
  struct std__allocator_int_* __retval1526;
  this1525 = v1523;
  struct std___Vector_base_int__std__allocator_int__* t1527 = this1525;
  struct std__allocator_int_* base1528 = (struct std__allocator_int_*)((char *)&(t1527->_M_impl) + 0);
  __retval1526 = base1528;
  struct std__allocator_int_* t1529 = __retval1526;
  return t1529;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v1530, unsigned long v1531, int* v1532) {
bb1533:
  struct std__vector_int__std__allocator_int__* this1534;
  unsigned long __n1535;
  int* __value1536;
  this1534 = v1530;
  __n1535 = v1531;
  __value1536 = v1532;
  struct std__vector_int__std__allocator_int__* t1537 = this1534;
  struct std___Vector_base_int__std__allocator_int__* base1538 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1537 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1539 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1538->_M_impl) + 0);
  int* t1540 = base1539->_M_start;
  unsigned long t1541 = __n1535;
  int* t1542 = __value1536;
  struct std___Vector_base_int__std__allocator_int__* base1543 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1537 + 0);
  struct std__allocator_int_* r1544 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1543);
  int* r1545 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1540, t1541, t1542, r1544);
  struct std___Vector_base_int__std__allocator_int__* base1546 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1537 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1547 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1546->_M_impl) + 0);
  base1547->_M_finish = r1545;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1548, int* v1549, unsigned long v1550) {
bb1551:
  struct std____new_allocator_int_* this1552;
  int* __p1553;
  unsigned long __n1554;
  this1552 = v1548;
  __p1553 = v1549;
  __n1554 = v1550;
  struct std____new_allocator_int_* t1555 = this1552;
    unsigned long c1556 = 4;
    unsigned long c1557 = 16;
    _Bool c1558 = ((c1556 > c1557)) ? 1 : 0;
    if (c1558) {
      int* t1559 = __p1553;
      void* cast1560 = (void*)t1559;
      unsigned long t1561 = __n1554;
      unsigned long c1562 = 4;
      unsigned long b1563 = t1561 * c1562;
      unsigned long c1564 = 4;
      operator_delete_3(cast1560, b1563, c1564);
      return;
    }
  int* t1565 = __p1553;
  void* cast1566 = (void*)t1565;
  unsigned long t1567 = __n1554;
  unsigned long c1568 = 4;
  unsigned long b1569 = t1567 * c1568;
  operator_delete_2(cast1566, b1569);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1570, int* v1571, unsigned long v1572) {
bb1573:
  struct std__allocator_int_* this1574;
  int* __p1575;
  unsigned long __n1576;
  this1574 = v1570;
  __p1575 = v1571;
  __n1576 = v1572;
  struct std__allocator_int_* t1577 = this1574;
    _Bool r1578 = std____is_constant_evaluated();
    if (r1578) {
      int* t1579 = __p1575;
      void* cast1580 = (void*)t1579;
      operator_delete(cast1580);
      return;
    }
  struct std____new_allocator_int_* base1581 = (struct std____new_allocator_int_*)((char *)t1577 + 0);
  int* t1582 = __p1575;
  unsigned long t1583 = __n1576;
  std____new_allocator_int___deallocate(base1581, t1582, t1583);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1584, int* v1585, unsigned long v1586) {
bb1587:
  struct std__allocator_int_* __a1588;
  int* __p1589;
  unsigned long __n1590;
  __a1588 = v1584;
  __p1589 = v1585;
  __n1590 = v1586;
  struct std__allocator_int_* t1591 = __a1588;
  int* t1592 = __p1589;
  unsigned long t1593 = __n1590;
  std__allocator_int___deallocate(t1591, t1592, t1593);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1594, int* v1595, unsigned long v1596) {
bb1597:
  struct std___Vector_base_int__std__allocator_int__* this1598;
  int* __p1599;
  unsigned long __n1600;
  this1598 = v1594;
  __p1599 = v1595;
  __n1600 = v1596;
  struct std___Vector_base_int__std__allocator_int__* t1601 = this1598;
    int* t1602 = __p1599;
    _Bool cast1603 = (_Bool)t1602;
    if (cast1603) {
      struct std__allocator_int_* base1604 = (struct std__allocator_int_*)((char *)&(t1601->_M_impl) + 0);
      int* t1605 = __p1599;
      unsigned long t1606 = __n1600;
      std__allocator_traits_std__allocator_int_____deallocate(base1604, t1605, t1606);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1607) {
bb1608:
  struct std___Vector_base_int__std__allocator_int__* this1609;
  this1609 = v1607;
  struct std___Vector_base_int__std__allocator_int__* t1610 = this1609;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1611 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1610->_M_impl) + 0);
    int* t1612 = base1611->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1613 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1610->_M_impl) + 0);
    int* t1614 = base1613->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1615 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1610->_M_impl) + 0);
    int* t1616 = base1615->_M_start;
    long diff1617 = t1614 - t1616;
    unsigned long cast1618 = (unsigned long)diff1617;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1610, t1612, cast1618);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1610->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1619, struct std____new_allocator_int_* v1620) {
bb1621:
  struct std____new_allocator_int_* this1622;
  struct std____new_allocator_int_* unnamed1623;
  this1622 = v1619;
  unnamed1623 = v1620;
  struct std____new_allocator_int_* t1624 = this1622;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1625) {
bb1626:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1627;
  this1627 = v1625;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1628 = this1627;
  int* c1629 = ((void*)0);
  t1628->_M_start = c1629;
  int* c1630 = ((void*)0);
  t1628->_M_finish = c1630;
  int* c1631 = ((void*)0);
  t1628->_M_end_of_storage = c1631;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1632, int* v1633) {
bb1634:
  int* __first1635;
  int* __last1636;
  __first1635 = v1632;
  __last1636 = v1633;
      _Bool r1637 = std____is_constant_evaluated();
      if (r1637) {
          while (1) {
            int* t1639 = __first1635;
            int* t1640 = __last1636;
            _Bool c1641 = ((t1639 != t1640)) ? 1 : 0;
            if (!c1641) break;
            int* t1642 = __first1635;
            void_std__destroy_at_int_(t1642);
          for_step1638: ;
            int* t1643 = __first1635;
            int c1644 = 1;
            int* ptr1645 = &(t1643)[c1644];
            __first1635 = ptr1645;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1646, int* v1647, struct std__allocator_int_* v1648) {
bb1649:
  int* __first1650;
  int* __last1651;
  struct std__allocator_int_* unnamed1652;
  __first1650 = v1646;
  __last1651 = v1647;
  unnamed1652 = v1648;
  int* t1653 = __first1650;
  int* t1654 = __last1651;
  void_std___Destroy_int__(t1653, t1654);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1655, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1656) {
bb1657:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1658;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd1659;
  this1658 = v1655;
  __gd1659 = v1656;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1660 = this1658;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1661 = __gd1659;
  struct std__allocator_std___List_node_int__* t1662 = t1661->_M_alloc;
  t1660->_M_alloc = t1662;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1663 = __gd1659;
  struct std___List_node_int_* t1664 = t1663->_M_ptr;
  t1660->_M_ptr = t1664;
  struct std___List_node_int_* c1665 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1666 = __gd1659;
  t1666->_M_ptr = c1665;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v1667) {
bb1668:
  struct std___List_node_int_* __ptr1669;
  struct std___List_node_int_* __retval1670;
  __ptr1669 = v1667;
  struct std___List_node_int_* t1671 = __ptr1669;
  __retval1670 = t1671;
  struct std___List_node_int_* t1672 = __retval1670;
  return t1672;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v1673) {
bb1674:
  struct std___List_node_int_** __ptr1675;
  struct std___List_node_int_* __retval1676;
  __ptr1675 = v1673;
  struct std___List_node_int_** t1677 = __ptr1675;
  struct std___List_node_int_* t1678 = *t1677;
  struct std___List_node_int_* r1679 = std___List_node_int___std__to_address_std___List_node_int___(t1678);
  __retval1676 = r1679;
  struct std___List_node_int_* t1680 = __retval1676;
  return t1680;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1681) {
bb1682:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1683;
  struct std___List_node_int_* __retval1684;
  this1683 = v1681;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1685 = this1683;
  struct std___List_node_int_* r1686 = auto_std____to_address_std___List_node_int___(&t1685->_M_ptr);
  __retval1684 = r1686;
  struct std___List_node_int_* t1687 = __retval1684;
  return t1687;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1688) {
bb1689:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1690;
  _Bool __retval1691;
  this1690 = v1688;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1692 = this1690;
  struct std___List_node_int_* t1693 = t1692->_M_ptr;
  _Bool cast1694 = (_Bool)t1693;
  __retval1691 = cast1694;
  _Bool t1695 = __retval1691;
  return t1695;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v1696, struct std__allocator_int_* v1697) {
bb1698:
  struct std__allocator_std___List_node_int__* this1699;
  struct std__allocator_int_* unnamed1700;
  this1699 = v1696;
  unnamed1700 = v1697;
  struct std__allocator_std___List_node_int__* t1701 = this1699;
  struct std____new_allocator_std___List_node_int__* base1702 = (struct std____new_allocator_std___List_node_int__*)((char *)t1701 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1702);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1703, struct std__allocator_std___List_node_int__* v1704) {
bb1705:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1706;
  struct std__allocator_std___List_node_int__* __a1707;
  this1706 = v1703;
  __a1707 = v1704;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1708 = this1706;
  struct std__allocator_std___List_node_int__* base1709 = (struct std__allocator_std___List_node_int__*)((char *)t1708 + 0);
  struct std__allocator_std___List_node_int__* t1710 = __a1707;
  std__allocator_std___List_node_int_____allocator(base1709, t1710);
    std____detail___List_node_header___List_node_header(&t1708->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1711, struct std__allocator_std___List_node_int__* v1712) {
bb1713:
  struct std____cxx11___List_base_int__std__allocator_int__* this1714;
  struct std__allocator_std___List_node_int__* __a1715;
  this1714 = v1711;
  __a1715 = v1712;
  struct std____cxx11___List_base_int__std__allocator_int__* t1716 = this1714;
  struct std__allocator_std___List_node_int__* t1717 = __a1715;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t1716->_M_impl, t1717);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v1718) {
bb1719:
  struct std__allocator_std___List_node_int__* this1720;
  this1720 = v1718;
  struct std__allocator_std___List_node_int__* t1721 = this1720;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_fill_initializeEmRKi
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* v1722, unsigned long v1723, int* v1724) {
bb1725:
  struct std____cxx11__list_int__std__allocator_int__* this1726;
  unsigned long __n1727;
  int* __x1728;
  this1726 = v1722;
  __n1727 = v1723;
  __x1728 = v1724;
  struct std____cxx11__list_int__std__allocator_int__* t1729 = this1726;
    while (1) {
      unsigned long t1731 = __n1727;
      _Bool cast1732 = (_Bool)t1731;
      if (!cast1732) break;
      int* t1733 = __x1728;
      std____cxx11__list_int__std__allocator_int_____push_back(t1729, t1733);
    for_step1730: ;
      unsigned long t1734 = __n1727;
      unsigned long u1735 = t1734 - 1;
      __n1727 = u1735;
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v1736, struct std____new_allocator_std___List_node_int__* v1737) {
bb1738:
  struct std____new_allocator_std___List_node_int__* this1739;
  struct std____new_allocator_std___List_node_int__* unnamed1740;
  this1739 = v1736;
  unnamed1740 = v1737;
  struct std____new_allocator_std___List_node_int__* t1741 = this1739;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v1742, struct std__allocator_std___List_node_int__* v1743) {
bb1744:
  struct std__allocator_std___List_node_int__* this1745;
  struct std__allocator_std___List_node_int__* __a1746;
  this1745 = v1742;
  __a1746 = v1743;
  struct std__allocator_std___List_node_int__* t1747 = this1745;
  struct std____new_allocator_std___List_node_int__* base1748 = (struct std____new_allocator_std___List_node_int__*)((char *)t1747 + 0);
  struct std__allocator_std___List_node_int__* t1749 = __a1746;
  struct std____new_allocator_std___List_node_int__* base1750 = (struct std____new_allocator_std___List_node_int__*)((char *)t1749 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base1748, base1750);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1751) {
bb1752:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1753;
  int** __retval1754;
  this1753 = v1751;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1755 = this1753;
  __retval1754 = &t1755->_M_current;
  int** t1756 = __retval1754;
  return t1756;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1757, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1758) {
bb1759:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1760;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1761;
  _Bool __retval1762;
  __lhs1760 = v1757;
  __rhs1761 = v1758;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1763 = __lhs1760;
  int** r1764 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1763);
  int* t1765 = *r1764;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1766 = __rhs1761;
  int** r1767 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1766);
  int* t1768 = *r1767;
  _Bool c1769 = ((t1765 == t1768)) ? 1 : 0;
  __retval1762 = c1769;
  _Bool t1770 = __retval1762;
  return t1770;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1771, int* v1772) {
bb1773:
  int* __location1774;
  int* __args1775;
  int* __retval1776;
  void* __loc1777;
  __location1774 = v1771;
  __args1775 = v1772;
  int* t1778 = __location1774;
  void* cast1779 = (void*)t1778;
  __loc1777 = cast1779;
    void* t1780 = __loc1777;
    int* cast1781 = (int*)t1780;
    int* t1782 = __args1775;
    int t1783 = *t1782;
    *cast1781 = t1783;
    __retval1776 = cast1781;
    int* t1784 = __retval1776;
    return t1784;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* v1785, int* v1786, int* v1787) {
bb1788:
  struct std__allocator_std___List_node_int__* __a1789;
  int* __p1790;
  int* __args1791;
  __a1789 = v1785;
  __p1790 = v1786;
  __args1791 = v1787;
  int* t1792 = __p1790;
  int* t1793 = __args1791;
  int* r1794 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1792, t1793);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* v1795, int* v1796) {
bb1797:
  struct std____cxx11__list_int__std__allocator_int__* this1798;
  int* __args1799;
  struct std___List_node_int_* __retval1800;
  struct std__allocator_std___List_node_int__* __alloc1801;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard1802;
  this1798 = v1795;
  __args1799 = v1796;
  struct std____cxx11__list_int__std__allocator_int__* t1803 = this1798;
  struct std____cxx11___List_base_int__std__allocator_int__* base1804 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1803 + 0);
  struct std__allocator_std___List_node_int__* r1805 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1804);
  __alloc1801 = r1805;
  struct std__allocator_std___List_node_int__* t1806 = __alloc1801;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r1807 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t1806);
  __guard1802 = r1807;
    struct std__allocator_std___List_node_int__* t1808 = __alloc1801;
    struct std___List_node_int_* r1809 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard1802);
    int* r1810 = std___List_node_int____M_valptr(r1809);
    int* t1811 = __args1799;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(t1808, r1810, t1811);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1812 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard1802) + 0);
    struct std___List_node_int_* r1813 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base1812);
    __retval1800 = r1813;
    struct std___List_node_int_* t1814 = __retval1800;
    struct std___List_node_int_* ret_val1815 = t1814;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1802);
    }
    return ret_val1815;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* v1816, struct std___List_iterator_int_ v1817, int* v1818) {
bb1819:
  struct std____cxx11__list_int__std__allocator_int__* this1820;
  struct std___List_iterator_int_ __position1821;
  int* __args1822;
  struct std___List_node_int_* __tmp1823;
  this1820 = v1816;
  __position1821 = v1817;
  __args1822 = v1818;
  struct std____cxx11__list_int__std__allocator_int__* t1824 = this1820;
  int* t1825 = __args1822;
  struct std___List_node_int_* r1826 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(t1824, t1825);
  __tmp1823 = r1826;
  struct std___List_node_int_* t1827 = __tmp1823;
  struct std____detail___List_node_base* base1828 = (struct std____detail___List_node_base*)((char *)t1827 + 0);
  struct std____detail___List_node_base* t1829 = __position1821._M_node;
  std____detail___List_node_base___M_hook(base1828, t1829);
  struct std____cxx11___List_base_int__std__allocator_int__* base1830 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1824 + 0);
  unsigned long c1831 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1830, c1831);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v1832) {
bb1833:
  struct std____cxx11__list_int__std__allocator_int__* this1834;
  int* __retval1835;
  struct std___List_iterator_int_ __tmp1836;
  this1834 = v1832;
  struct std____cxx11__list_int__std__allocator_int__* t1837 = this1834;
    do {
          _Bool r1838 = std____cxx11__list_int__std__allocator_int_____empty___const(t1837);
          if (r1838) {
            char* cast1839 = (char*)&(_str_12);
            int c1840 = 1674;
            char* cast1841 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast1842 = (char*)&(_str_13);
            std____glibcxx_assert_fail(cast1839, c1840, cast1841, cast1842);
          }
      _Bool c1843 = 0;
      if (!c1843) break;
    } while (1);
  struct std___List_iterator_int_ r1844 = std____cxx11__list_int__std__allocator_int_____end(t1837);
  __tmp1836 = r1844;
  struct std___List_iterator_int_* r1845 = std___List_iterator_int___operator___2(&__tmp1836);
  int* r1846 = std___List_iterator_int___operator____const(&__tmp1836);
  __retval1835 = r1846;
  int* t1847 = __retval1835;
  return t1847;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRiEEES4_DpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* v1848, int* v1849) {
bb1850:
  struct std____cxx11__list_int__std__allocator_int__* this1851;
  int* __args1852;
  int* __retval1853;
  struct std___List_iterator_int_ agg_tmp01854;
  this1851 = v1848;
  __args1852 = v1849;
  struct std____cxx11__list_int__std__allocator_int__* t1855 = this1851;
  struct std___List_iterator_int_ r1856 = std____cxx11__list_int__std__allocator_int_____end(t1855);
  agg_tmp01854 = r1856;
  int* t1857 = __args1852;
  struct std___List_iterator_int_ t1858 = agg_tmp01854;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int__(t1855, t1858, t1857);
  int* r1859 = std____cxx11__list_int__std__allocator_int_____back(t1855);
  __retval1853 = r1859;
  int* t1860 = __retval1853;
  return t1860;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1861) {
bb1862:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1863;
  int* __retval1864;
  this1863 = v1861;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1865 = this1863;
  int* t1866 = t1865->_M_current;
  __retval1864 = t1866;
  int* t1867 = __retval1864;
  return t1867;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1868) {
bb1869:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1870;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1871;
  this1870 = v1868;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1872 = this1870;
  int* t1873 = t1872->_M_current;
  int c1874 = 1;
  int* ptr1875 = &(t1873)[c1874];
  t1872->_M_current = ptr1875;
  __retval1871 = t1872;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1876 = __retval1871;
  return t1876;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiS1_EEEEEvT_SA_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std____cxx11__list_int__std__allocator_int__* v1877, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1878, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1879, struct std____false_type v1880) {
bb1881:
  struct std____cxx11__list_int__std__allocator_int__* this1882;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1883;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1884;
  struct std____false_type unnamed1885;
  _Bool __notempty1886;
  this1882 = v1877;
  __first1883 = v1878;
  __last1884 = v1879;
  unnamed1885 = v1880;
  struct std____cxx11__list_int__std__allocator_int__* t1887 = this1882;
  _Bool r1888 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1883, &__last1884);
  _Bool u1889 = !r1888;
  __notempty1886 = u1889;
    while (1) {
      _Bool r1891 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1883, &__last1884);
      _Bool u1892 = !r1891;
      if (!u1892) break;
      int* r1893 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first1883);
      int* r1894 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t1887, r1893);
    for_step1890: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1895 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first1883);
    }
    _Bool t1896 = __notempty1886;
    if (t1896) {
        struct std___List_iterator_int_ ref_tmp01897;
        struct std___List_iterator_int_ ref_tmp11898;
        struct std___List_iterator_int_ r1899 = std____cxx11__list_int__std__allocator_int_____begin(t1887);
        ref_tmp01897 = r1899;
        struct std___List_iterator_int_ r1900 = std____cxx11__list_int__std__allocator_int_____end(t1887);
        ref_tmp11898 = r1900;
        _Bool r1901 = std__operator___2(&ref_tmp01897, &ref_tmp11898);
        if (r1901) {
          __builtin_unreachable();
        }
    }
  return;
}

