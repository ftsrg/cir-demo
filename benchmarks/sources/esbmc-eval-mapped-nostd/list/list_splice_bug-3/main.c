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
struct std____new_allocator_std___List_node_int__ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
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
char _str[20] = "mylist1.size() != 7";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_splice_bug-3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "!mylist2.empty()";
char _str_3[9] = "*it != 2";
char _str_4[10] = "*it != 30";
char _str_5[20] = "mylist1.size() != 6";
char _str_6[20] = "mylist2.size() != 1";
char _str_7[20] = "mylist1.size() == 6";
char _str_8[9] = "*it == 3";
char _str_9[9] = "*it == 4";
char _str_10[9] = "*it != 1";
char _str_11[10] = "*it == 10";
char _str_12[10] = "*it != 20";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_13[18] = "mylist1 contains:";
char _str_14[2] = " ";
char _str_15[19] = "\nmylist2 contains:";
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0);
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* p0);
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
void std____cxx11__list_int__std__allocator_int_____push_back_2(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_* std___List_iterator_int___operator___4(struct std___List_iterator_int_* p0);
_Bool std__operator__(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
extern void abort();
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
extern void std____detail___List_node_base___M_transfer(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std___List_iterator_int_ p3);
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* p0);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
void std____cxx11__list_int__std__allocator_int_____splice_4(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std___List_iterator_int_* p1);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
struct std___List_iterator_int_ std___List_iterator_int___operator__(struct std___List_iterator_int_* p0, int p1);
struct std___List_iterator_int_ std___List_iterator_int___operator___3(struct std___List_iterator_int_* p0, int p1);
_Bool std__operator___3(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2, struct std___List_const_iterator_int_ p3);
void std____cxx11__list_int__std__allocator_int_____splice_5(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2, struct std___List_const_iterator_int_ p3);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
void void_std____advance_std___List_iterator_int___long_(struct std___List_iterator_int_* p0, long p1, struct std__bidirectional_iterator_tag p2);
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_iterator_int_____iterator_category_std____iterator_category_std___List_iterator_int___(struct std___List_iterator_int_* p0);
void void_std__advance_std___List_iterator_int___int_(struct std___List_iterator_int_* p0, int p1);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* p0);
long long_std____distance_int_(struct std___List_const_iterator_int_ p0, struct std___List_const_iterator_int_ p1, struct std__input_iterator_tag p2);
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(struct std___List_const_iterator_int_* p0);
long std__iterator_traits_std___List_const_iterator_int_____difference_type_std__distance_std___List_const_iterator_int___(struct std___List_const_iterator_int_ p0, struct std___List_const_iterator_int_ p1);
void std____cxx11__list_int__std__allocator_int_____splice_3(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2, struct std___List_const_iterator_int_ p3, struct std___List_const_iterator_int_ p4);
void std____cxx11__list_int__std__allocator_int_____splice_6(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2, struct std___List_const_iterator_int_ p3, struct std___List_const_iterator_int_ p4);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
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
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);

// function: _ZNSt7__cxx114listIiSaIiEEC2Ev
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v0) {
bb1:
  struct std____cxx11__list_int__std__allocator_int__* this2;
  this2 = v0;
  struct std____cxx11__list_int__std__allocator_int__* t3 = this2;
  struct std____cxx11___List_base_int__std__allocator_int__* base4 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t3 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base(base4);
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

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v139, int* v140) {
bb141:
  int* __location142;
  int* __args143;
  int* __retval144;
  void* __loc145;
  __location142 = v139;
  __args143 = v140;
  int* t146 = __location142;
  void* cast147 = (void*)t146;
  __loc145 = cast147;
    void* t148 = __loc145;
    int* cast149 = (int*)t148;
    int* t150 = __args143;
    int t151 = *t150;
    *cast149 = t151;
    __retval144 = cast149;
    int* t152 = __retval144;
    return t152;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v153, int* v154, int* v155) {
bb156:
  struct std__allocator_std___List_node_int__* __a157;
  int* __p158;
  int* __args159;
  __a157 = v153;
  __p158 = v154;
  __args159 = v155;
  int* t160 = __p158;
  int* t161 = __args159;
  int* r162 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t160, t161);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v163) {
bb164:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this165;
  struct std___List_node_int_* __retval166;
  this165 = v163;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t167 = this165;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base168 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t167 + 0);
  struct std___List_node_int_* r169 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base168);
  __retval166 = r169;
  struct std___List_node_int_* t170 = __retval166;
  return t170;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v171, void** v172) {
bb173:
  struct std___List_node_int_** __obj174;
  void** __new_val175;
  struct std___List_node_int_* __retval176;
  struct std___List_node_int_* __old_val177;
  __obj174 = v171;
  __new_val175 = v172;
  struct std___List_node_int_** t178 = __obj174;
  struct std___List_node_int_* t179 = *t178;
  __old_val177 = t179;
  void** t180 = __new_val175;
  struct std___List_node_int_* c181 = ((void*)0);
  struct std___List_node_int_** t182 = __obj174;
  *t182 = c181;
  struct std___List_node_int_* t183 = __old_val177;
  __retval176 = t183;
  struct std___List_node_int_* t184 = __retval176;
  return t184;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v185) {
bb186:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this187;
  struct std___List_node_int_* __retval188;
  void* ref_tmp0189;
  this187 = v185;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t190 = this187;
  void* c191 = ((void*)0);
  ref_tmp0189 = c191;
  struct std___List_node_int_* r192 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t190->_M_ptr, &ref_tmp0189);
  __retval188 = r192;
  struct std___List_node_int_* t193 = __retval188;
  return t193;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v194) {
bb195:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this196;
  this196 = v194;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t197 = this196;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base198 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t197 + 0);
      _Bool r199 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base198);
      if (r199) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base200 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t197 + 0);
        struct std___List_node_int_* r201 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base200);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base202 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t197 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base202);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v203, int* v204) {
bb205:
  struct std____cxx11__list_int__std__allocator_int__* this206;
  int* __args207;
  struct std___List_node_int_* __retval208;
  struct std__allocator_std___List_node_int__* __alloc209;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard210;
  this206 = v203;
  __args207 = v204;
  struct std____cxx11__list_int__std__allocator_int__* t211 = this206;
  struct std____cxx11___List_base_int__std__allocator_int__* base212 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t211 + 0);
  struct std__allocator_std___List_node_int__* r213 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base212);
  __alloc209 = r213;
  struct std__allocator_std___List_node_int__* t214 = __alloc209;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r215 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t214);
  __guard210 = r215;
    struct std__allocator_std___List_node_int__* t216 = __alloc209;
    struct std___List_node_int_* r217 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard210);
    int* r218 = std___List_node_int____M_valptr(r217);
    int* t219 = __args207;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t216, r218, t219);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base220 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard210) + 0);
    struct std___List_node_int_* r221 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base220);
    __retval208 = r221;
    struct std___List_node_int_* t222 = __retval208;
    struct std___List_node_int_* ret_val223 = t222;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard210);
    }
    return ret_val223;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v224, unsigned long v225) {
bb226:
  struct std____cxx11___List_base_int__std__allocator_int__* this227;
  unsigned long __n228;
  this227 = v224;
  __n228 = v225;
  struct std____cxx11___List_base_int__std__allocator_int__* t229 = this227;
  unsigned long t230 = __n228;
  struct std____detail___List_size* base231 = (struct std____detail___List_size*)((char *)&(t229->_M_impl._M_node) + 16);
  unsigned long t232 = base231->_M_size;
  unsigned long b233 = t232 + t230;
  base231->_M_size = b233;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v234, struct std___List_iterator_int_ v235, int* v236) {
bb237:
  struct std____cxx11__list_int__std__allocator_int__* this238;
  struct std___List_iterator_int_ __position239;
  int* __args240;
  struct std___List_node_int_* __tmp241;
  this238 = v234;
  __position239 = v235;
  __args240 = v236;
  struct std____cxx11__list_int__std__allocator_int__* t242 = this238;
  int* t243 = __args240;
  struct std___List_node_int_* r244 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t242, t243);
  __tmp241 = r244;
  struct std___List_node_int_* t245 = __tmp241;
  struct std____detail___List_node_base* base246 = (struct std____detail___List_node_base*)((char *)t245 + 0);
  struct std____detail___List_node_base* t247 = __position239._M_node;
  std____detail___List_node_base___M_hook(base246, t247);
  struct std____cxx11___List_base_int__std__allocator_int__* base248 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t242 + 0);
  unsigned long c249 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base248, c249);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back_2(struct std____cxx11__list_int__std__allocator_int__* v250, int* v251) {
bb252:
  struct std____cxx11__list_int__std__allocator_int__* this253;
  int* __x254;
  struct std___List_iterator_int_ agg_tmp0255;
  this253 = v250;
  __x254 = v251;
  struct std____cxx11__list_int__std__allocator_int__* t256 = this253;
  struct std___List_iterator_int_ r257 = std____cxx11__list_int__std__allocator_int_____end(t256);
  agg_tmp0255 = r257;
  int* t258 = __x254;
  struct std___List_iterator_int_ t259 = agg_tmp0255;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t256, t259, t258);
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v260, int* v261) {
bb262:
  int* __location263;
  int* __args264;
  int* __retval265;
  void* __loc266;
  __location263 = v260;
  __args264 = v261;
  int* t267 = __location263;
  void* cast268 = (void*)t267;
  __loc266 = cast268;
    void* t269 = __loc266;
    int* cast270 = (int*)t269;
    int* t271 = __args264;
    int t272 = *t271;
    *cast270 = t272;
    __retval265 = cast270;
    int* t273 = __retval265;
    return t273;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* v274, int* v275, int* v276) {
bb277:
  struct std__allocator_std___List_node_int__* __a278;
  int* __p279;
  int* __args280;
  __a278 = v274;
  __p279 = v275;
  __args280 = v276;
  int* t281 = __p279;
  int* t282 = __args280;
  int* r283 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t281, t282);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* v284, int* v285) {
bb286:
  struct std____cxx11__list_int__std__allocator_int__* this287;
  int* __args288;
  struct std___List_node_int_* __retval289;
  struct std__allocator_std___List_node_int__* __alloc290;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard291;
  this287 = v284;
  __args288 = v285;
  struct std____cxx11__list_int__std__allocator_int__* t292 = this287;
  struct std____cxx11___List_base_int__std__allocator_int__* base293 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t292 + 0);
  struct std__allocator_std___List_node_int__* r294 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base293);
  __alloc290 = r294;
  struct std__allocator_std___List_node_int__* t295 = __alloc290;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r296 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t295);
  __guard291 = r296;
    struct std__allocator_std___List_node_int__* t297 = __alloc290;
    struct std___List_node_int_* r298 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard291);
    int* r299 = std___List_node_int____M_valptr(r298);
    int* t300 = __args288;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(t297, r299, t300);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base301 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard291) + 0);
    struct std___List_node_int_* r302 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base301);
    __retval289 = r302;
    struct std___List_node_int_* t303 = __retval289;
    struct std___List_node_int_* ret_val304 = t303;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard291);
    }
    return ret_val304;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* v305, struct std___List_iterator_int_ v306, int* v307) {
bb308:
  struct std____cxx11__list_int__std__allocator_int__* this309;
  struct std___List_iterator_int_ __position310;
  int* __args311;
  struct std___List_node_int_* __tmp312;
  this309 = v305;
  __position310 = v306;
  __args311 = v307;
  struct std____cxx11__list_int__std__allocator_int__* t313 = this309;
  int* t314 = __args311;
  struct std___List_node_int_* r315 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(t313, t314);
  __tmp312 = r315;
  struct std___List_node_int_* t316 = __tmp312;
  struct std____detail___List_node_base* base317 = (struct std____detail___List_node_base*)((char *)t316 + 0);
  struct std____detail___List_node_base* t318 = __position310._M_node;
  std____detail___List_node_base___M_hook(base317, t318);
  struct std____cxx11___List_base_int__std__allocator_int__* base319 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t313 + 0);
  unsigned long c320 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base319, c320);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backEOi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v321, int* v322) {
bb323:
  struct std____cxx11__list_int__std__allocator_int__* this324;
  int* __x325;
  struct std___List_iterator_int_ agg_tmp0326;
  this324 = v321;
  __x325 = v322;
  struct std____cxx11__list_int__std__allocator_int__* t327 = this324;
  struct std___List_iterator_int_ r328 = std____cxx11__list_int__std__allocator_int_____end(t327);
  agg_tmp0326 = r328;
  int* t329 = __x325;
  struct std___List_iterator_int_ t330 = agg_tmp0326;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_(t327, t330, t329);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v331, struct std____detail___List_node_base* v332) {
bb333:
  struct std___List_iterator_int_* this334;
  struct std____detail___List_node_base* __x335;
  this334 = v331;
  __x335 = v332;
  struct std___List_iterator_int_* t336 = this334;
  struct std____detail___List_node_base* t337 = __x335;
  t336->_M_node = t337;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v338) {
bb339:
  struct std____cxx11__list_int__std__allocator_int__* this340;
  struct std___List_iterator_int_ __retval341;
  this340 = v338;
  struct std____cxx11__list_int__std__allocator_int__* t342 = this340;
  struct std____cxx11___List_base_int__std__allocator_int__* base343 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t342 + 0);
  struct std____detail___List_node_base* base344 = (struct std____detail___List_node_base*)((char *)&(base343->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t345 = base344->_M_next;
  std___List_iterator_int____List_iterator(&__retval341, t345);
  struct std___List_iterator_int_ t346 = __retval341;
  return t346;
}

// function: _ZNSt14_List_iteratorIiEaSEOS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v347, struct std___List_iterator_int_* v348) {
bb349:
  struct std___List_iterator_int_* this350;
  struct std___List_iterator_int_* unnamed351;
  struct std___List_iterator_int_* __retval352;
  this350 = v347;
  unnamed351 = v348;
  struct std___List_iterator_int_* t353 = this350;
  struct std___List_iterator_int_* t354 = unnamed351;
  struct std____detail___List_node_base* t355 = t354->_M_node;
  t353->_M_node = t355;
  __retval352 = t353;
  struct std___List_iterator_int_* t356 = __retval352;
  return t356;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___4(struct std___List_iterator_int_* v357) {
bb358:
  struct std___List_iterator_int_* this359;
  struct std___List_iterator_int_* __retval360;
  this359 = v357;
  struct std___List_iterator_int_* t361 = this359;
  struct std____detail___List_node_base* t362 = t361->_M_node;
  struct std____detail___List_node_base* t363 = t362->_M_next;
  t361->_M_node = t363;
  __retval360 = t361;
  struct std___List_iterator_int_* t364 = __retval360;
  return t364;
}

// function: _ZSteqRKSaISt10_List_nodeIiEES3_
_Bool std__operator__(struct std__allocator_std___List_node_int__* v365, struct std__allocator_std___List_node_int__* v366) {
bb367:
  struct std__allocator_std___List_node_int__* unnamed368;
  struct std__allocator_std___List_node_int__* unnamed369;
  _Bool __retval370;
  unnamed368 = v365;
  unnamed369 = v366;
  _Bool c371 = 1;
  __retval370 = c371;
  _Bool t372 = __retval370;
  return t372;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v373) {
bb374:
  struct std____cxx11___List_base_int__std__allocator_int__* this375;
  struct std__allocator_std___List_node_int__* __retval376;
  this375 = v373;
  struct std____cxx11___List_base_int__std__allocator_int__* t377 = this375;
  struct std__allocator_std___List_node_int__* base378 = (struct std__allocator_std___List_node_int__*)((char *)&(t377->_M_impl) + 0);
  __retval376 = base378;
  struct std__allocator_std___List_node_int__* t379 = __retval376;
  return t379;
}

// function: _ZNSt7__cxx114listIiSaIiEE25_M_check_equal_allocatorsERKS2_
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* v380, struct std____cxx11__list_int__std__allocator_int__* v381) {
bb382:
  struct std____cxx11__list_int__std__allocator_int__* this383;
  struct std____cxx11__list_int__std__allocator_int__* __x384;
  this383 = v380;
  __x384 = v381;
  struct std____cxx11__list_int__std__allocator_int__* t385 = this383;
    struct std____cxx11___List_base_int__std__allocator_int__* base386 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t385 + 0);
    struct std__allocator_std___List_node_int__* r387 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base386);
    struct std____cxx11__list_int__std__allocator_int__* t388 = __x384;
    struct std____cxx11___List_base_int__std__allocator_int__* base389 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t388 + 0);
    struct std__allocator_std___List_node_int__* r390 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base389);
    _Bool r391 = std__operator__(r387, r390);
    _Bool u392 = !r391;
    if (u392) {
      abort();
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE11_M_transferESt14_List_iteratorIiES4_S4_
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* v393, struct std___List_iterator_int_ v394, struct std___List_iterator_int_ v395, struct std___List_iterator_int_ v396) {
bb397:
  struct std____cxx11__list_int__std__allocator_int__* this398;
  struct std___List_iterator_int_ __position399;
  struct std___List_iterator_int_ __first400;
  struct std___List_iterator_int_ __last401;
  this398 = v393;
  __position399 = v394;
  __first400 = v395;
  __last401 = v396;
  struct std____cxx11__list_int__std__allocator_int__* t402 = this398;
  struct std____detail___List_node_base* t403 = __position399._M_node;
  struct std____detail___List_node_base* t404 = __first400._M_node;
  struct std____detail___List_node_base* t405 = __last401._M_node;
  std____detail___List_node_base___M_transfer(t403, t404, t405);
  return;
}

// function: _ZNKSt20_List_const_iteratorIiE13_M_const_castEv
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* v406) {
bb407:
  struct std___List_const_iterator_int_* this408;
  struct std___List_iterator_int_ __retval409;
  this408 = v406;
  struct std___List_const_iterator_int_* t410 = this408;
  struct std____detail___List_node_base* t411 = t410->_M_node;
  std___List_iterator_int____List_iterator(&__retval409, t411);
  struct std___List_iterator_int_ t412 = __retval409;
  return t412;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v413) {
bb414:
  struct std____cxx11___List_base_int__std__allocator_int__* this415;
  unsigned long __retval416;
  this415 = v413;
  struct std____cxx11___List_base_int__std__allocator_int__* t417 = this415;
  struct std____detail___List_size* base418 = (struct std____detail___List_size*)((char *)&(t417->_M_impl._M_node) + 16);
  unsigned long t419 = base418->_M_size;
  __retval416 = t419;
  unsigned long t420 = __retval416;
  return t420;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_set_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* v421, unsigned long v422) {
bb423:
  struct std____cxx11___List_base_int__std__allocator_int__* this424;
  unsigned long __n425;
  this424 = v421;
  __n425 = v422;
  struct std____cxx11___List_base_int__std__allocator_int__* t426 = this424;
  unsigned long t427 = __n425;
  struct std____detail___List_size* base428 = (struct std____detail___List_size*)((char *)&(t426->_M_impl._M_node) + 16);
  base428->_M_size = t427;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* v429, struct std___List_const_iterator_int_ v430, struct std____cxx11__list_int__std__allocator_int__* v431) {
bb432:
  struct std____cxx11__list_int__std__allocator_int__* this433;
  struct std___List_const_iterator_int_ __position434;
  struct std____cxx11__list_int__std__allocator_int__* __x435;
  this433 = v429;
  __position434 = v430;
  __x435 = v431;
  struct std____cxx11__list_int__std__allocator_int__* t436 = this433;
    struct std____cxx11__list_int__std__allocator_int__* t437 = __x435;
    _Bool r438 = std____cxx11__list_int__std__allocator_int_____empty___const(t437);
    _Bool u439 = !r438;
    if (u439) {
      struct std___List_iterator_int_ agg_tmp0440;
      struct std___List_iterator_int_ agg_tmp1441;
      struct std___List_iterator_int_ agg_tmp2442;
      struct std____cxx11__list_int__std__allocator_int__* t443 = __x435;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t436, t443);
      struct std___List_iterator_int_ r444 = std___List_const_iterator_int____M_const_cast___const(&__position434);
      agg_tmp0440 = r444;
      struct std____cxx11__list_int__std__allocator_int__* t445 = __x435;
      struct std___List_iterator_int_ r446 = std____cxx11__list_int__std__allocator_int_____begin(t445);
      agg_tmp1441 = r446;
      struct std____cxx11__list_int__std__allocator_int__* t447 = __x435;
      struct std___List_iterator_int_ r448 = std____cxx11__list_int__std__allocator_int_____end(t447);
      agg_tmp2442 = r448;
      struct std___List_iterator_int_ t449 = agg_tmp0440;
      struct std___List_iterator_int_ t450 = agg_tmp1441;
      struct std___List_iterator_int_ t451 = agg_tmp2442;
      std____cxx11__list_int__std__allocator_int______M_transfer(t436, t449, t450, t451);
      struct std____cxx11___List_base_int__std__allocator_int__* base452 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t436 + 0);
      struct std____cxx11__list_int__std__allocator_int__* t453 = __x435;
      struct std____cxx11___List_base_int__std__allocator_int__* base454 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t453 + 0);
      unsigned long r455 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base454);
      std____cxx11___List_base_int__std__allocator_int______M_inc_size(base452, r455);
      struct std____cxx11__list_int__std__allocator_int__* t456 = __x435;
      struct std____cxx11___List_base_int__std__allocator_int__* base457 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t456 + 0);
      unsigned long c458 = 0;
      std____cxx11___List_base_int__std__allocator_int______M_set_size(base457, c458);
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_
void std____cxx11__list_int__std__allocator_int_____splice_4(struct std____cxx11__list_int__std__allocator_int__* v459, struct std___List_const_iterator_int_ v460, struct std____cxx11__list_int__std__allocator_int__* v461) {
bb462:
  struct std____cxx11__list_int__std__allocator_int__* this463;
  struct std___List_const_iterator_int_ __position464;
  struct std____cxx11__list_int__std__allocator_int__* __x465;
  struct std___List_const_iterator_int_ agg_tmp0466;
  this463 = v459;
  __position464 = v460;
  __x465 = v461;
  struct std____cxx11__list_int__std__allocator_int__* t467 = this463;
  agg_tmp0466 = __position464; // copy
  struct std____cxx11__list_int__std__allocator_int__* t468 = __x465;
  struct std___List_const_iterator_int_ t469 = agg_tmp0466;
  std____cxx11__list_int__std__allocator_int_____splice(t467, t469, t468);
  return;
}

// function: _ZNSt20_List_const_iteratorIiEC2ERKSt14_List_iteratorIiE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v470, struct std___List_iterator_int_* v471) {
bb472:
  struct std___List_const_iterator_int_* this473;
  struct std___List_iterator_int_* __x474;
  this473 = v470;
  __x474 = v471;
  struct std___List_const_iterator_int_* t475 = this473;
  struct std___List_iterator_int_* t476 = __x474;
  struct std____detail___List_node_base* t477 = t476->_M_node;
  t475->_M_node = t477;
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v478) {
bb479:
  struct std____cxx11__list_int__std__allocator_int__* this480;
  unsigned long __retval481;
  this480 = v478;
  struct std____cxx11__list_int__std__allocator_int__* t482 = this480;
  struct std____cxx11___List_base_int__std__allocator_int__* base483 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t482 + 0);
  unsigned long r484 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base483);
  __retval481 = r484;
  unsigned long t485 = __retval481;
  return t485;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v486) {
bb487:
  struct std____detail___List_node_base* this488;
  struct std____detail___List_node_base* __retval489;
  this488 = v486;
  struct std____detail___List_node_base* t490 = this488;
  __retval489 = t490;
  struct std____detail___List_node_base* t491 = __retval489;
  return t491;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v492) {
bb493:
  struct std____cxx11__list_int__std__allocator_int__* this494;
  _Bool __retval495;
  this494 = v492;
  struct std____cxx11__list_int__std__allocator_int__* t496 = this494;
  struct std____cxx11___List_base_int__std__allocator_int__* base497 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t496 + 0);
  struct std____detail___List_node_base* base498 = (struct std____detail___List_node_base*)((char *)&(base497->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t499 = base498->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base500 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t496 + 0);
  struct std____detail___List_node_base* base501 = (struct std____detail___List_node_base*)((char *)&(base500->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r502 = std____detail___List_node_base___M_base___const(base501);
  _Bool c503 = ((t499 == r502)) ? 1 : 0;
  __retval495 = c503;
  _Bool t504 = __retval495;
  return t504;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v505) {
bb506:
  struct std___List_iterator_int_* this507;
  int* __retval508;
  this507 = v505;
  struct std___List_iterator_int_* t509 = this507;
  struct std____detail___List_node_base* t510 = t509->_M_node;
  struct std___List_node_int_* derived511 = ((t510) ? (struct std___List_node_int_*)((char *)t510 - 0) : (struct std___List_node_int_*)0);
  int* r512 = std___List_node_int____M_valptr(derived511);
  __retval508 = r512;
  int* t513 = __retval508;
  return t513;
}

// function: _ZNSt14_List_iteratorIiEmmEi
struct std___List_iterator_int_ std___List_iterator_int___operator__(struct std___List_iterator_int_* v514, int v515) {
bb516:
  struct std___List_iterator_int_* this517;
  int unnamed518;
  struct std___List_iterator_int_ __retval519;
  this517 = v514;
  unnamed518 = v515;
  struct std___List_iterator_int_* t520 = this517;
  __retval519 = *t520; // copy
  struct std____detail___List_node_base* t521 = t520->_M_node;
  struct std____detail___List_node_base* t522 = t521->_M_prev;
  t520->_M_node = t522;
  struct std___List_iterator_int_ t523 = __retval519;
  return t523;
}

// function: _ZNSt14_List_iteratorIiEppEi
struct std___List_iterator_int_ std___List_iterator_int___operator___3(struct std___List_iterator_int_* v524, int v525) {
bb526:
  struct std___List_iterator_int_* this527;
  int unnamed528;
  struct std___List_iterator_int_ __retval529;
  this527 = v524;
  unnamed528 = v525;
  struct std___List_iterator_int_* t530 = this527;
  __retval529 = *t530; // copy
  struct std____detail___List_node_base* t531 = t530->_M_node;
  struct std____detail___List_node_base* t532 = t531->_M_next;
  t530->_M_node = t532;
  struct std___List_iterator_int_ t533 = __retval529;
  return t533;
}

// function: _ZSteqRKSt20_List_const_iteratorIiES2_
_Bool std__operator___3(struct std___List_const_iterator_int_* v534, struct std___List_const_iterator_int_* v535) {
bb536:
  struct std___List_const_iterator_int_* __x537;
  struct std___List_const_iterator_int_* __y538;
  _Bool __retval539;
  __x537 = v534;
  __y538 = v535;
  struct std___List_const_iterator_int_* t540 = __x537;
  struct std____detail___List_node_base* t541 = t540->_M_node;
  struct std___List_const_iterator_int_* t542 = __y538;
  struct std____detail___List_node_base* t543 = t542->_M_node;
  _Bool c544 = ((t541 == t543)) ? 1 : 0;
  __retval539 = c544;
  _Bool t545 = __retval539;
  return t545;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v546, unsigned long v547) {
bb548:
  struct std____cxx11___List_base_int__std__allocator_int__* this549;
  unsigned long __n550;
  this549 = v546;
  __n550 = v547;
  struct std____cxx11___List_base_int__std__allocator_int__* t551 = this549;
  unsigned long t552 = __n550;
  struct std____detail___List_size* base553 = (struct std____detail___List_size*)((char *)&(t551->_M_impl._M_node) + 16);
  unsigned long t554 = base553->_M_size;
  unsigned long b555 = t554 - t552;
  base553->_M_size = b555;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_S4_
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* v556, struct std___List_const_iterator_int_ v557, struct std____cxx11__list_int__std__allocator_int__* v558, struct std___List_const_iterator_int_ v559) {
bb560:
  struct std____cxx11__list_int__std__allocator_int__* this561;
  struct std___List_const_iterator_int_ __position562;
  struct std____cxx11__list_int__std__allocator_int__* __x563;
  struct std___List_const_iterator_int_ __i564;
  struct std___List_iterator_int_ __j565;
  struct std___List_iterator_int_ agg_tmp0566;
  struct std___List_iterator_int_ agg_tmp1567;
  struct std___List_iterator_int_ agg_tmp2568;
  this561 = v556;
  __position562 = v557;
  __x563 = v558;
  __i564 = v559;
  struct std____cxx11__list_int__std__allocator_int__* t569 = this561;
  struct std___List_iterator_int_ r570 = std___List_const_iterator_int____M_const_cast___const(&__i564);
  __j565 = r570;
  struct std___List_iterator_int_* r571 = std___List_iterator_int___operator___4(&__j565);
    _Bool r572 = std__operator___3(&__position562, &__i564);
    _Bool ternary573;
    if (r572) {
      _Bool c574 = 1;
      ternary573 = (_Bool)c574;
    } else {
      struct std___List_const_iterator_int_ ref_tmp0575;
      std___List_const_iterator_int____List_const_iterator(&ref_tmp0575, &__j565);
      _Bool r576 = std__operator___3(&__position562, &ref_tmp0575);
      ternary573 = (_Bool)r576;
    }
    if (ternary573) {
      return;
    }
    struct std____cxx11__list_int__std__allocator_int__* t577 = __x563;
    _Bool c578 = ((t569 != t577)) ? 1 : 0;
    if (c578) {
      struct std____cxx11__list_int__std__allocator_int__* t579 = __x563;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t569, t579);
    }
  struct std___List_iterator_int_ r580 = std___List_const_iterator_int____M_const_cast___const(&__position562);
  agg_tmp0566 = r580;
  struct std___List_iterator_int_ r581 = std___List_const_iterator_int____M_const_cast___const(&__i564);
  agg_tmp1567 = r581;
  agg_tmp2568 = __j565; // copy
  struct std___List_iterator_int_ t582 = agg_tmp0566;
  struct std___List_iterator_int_ t583 = agg_tmp1567;
  struct std___List_iterator_int_ t584 = agg_tmp2568;
  std____cxx11__list_int__std__allocator_int______M_transfer(t569, t582, t583, t584);
  struct std____cxx11___List_base_int__std__allocator_int__* base585 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t569 + 0);
  unsigned long c586 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base585, c586);
  struct std____cxx11__list_int__std__allocator_int__* t587 = __x563;
  struct std____cxx11___List_base_int__std__allocator_int__* base588 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t587 + 0);
  unsigned long c589 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base588, c589);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_S4_
void std____cxx11__list_int__std__allocator_int_____splice_5(struct std____cxx11__list_int__std__allocator_int__* v590, struct std___List_const_iterator_int_ v591, struct std____cxx11__list_int__std__allocator_int__* v592, struct std___List_const_iterator_int_ v593) {
bb594:
  struct std____cxx11__list_int__std__allocator_int__* this595;
  struct std___List_const_iterator_int_ __position596;
  struct std____cxx11__list_int__std__allocator_int__* __x597;
  struct std___List_const_iterator_int_ __i598;
  struct std___List_const_iterator_int_ agg_tmp0599;
  struct std___List_const_iterator_int_ agg_tmp1600;
  this595 = v590;
  __position596 = v591;
  __x597 = v592;
  __i598 = v593;
  struct std____cxx11__list_int__std__allocator_int__* t601 = this595;
  agg_tmp0599 = __position596; // copy
  struct std____cxx11__list_int__std__allocator_int__* t602 = __x597;
  agg_tmp1600 = __i598; // copy
  struct std___List_const_iterator_int_ t603 = agg_tmp0599;
  struct std___List_const_iterator_int_ t604 = agg_tmp1600;
  std____cxx11__list_int__std__allocator_int_____splice_2(t601, t603, t602, t604);
  return;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v605) {
bb606:
  struct std___List_iterator_int_* this607;
  struct std___List_iterator_int_* __retval608;
  this607 = v605;
  struct std___List_iterator_int_* t609 = this607;
  struct std____detail___List_node_base* t610 = t609->_M_node;
  struct std____detail___List_node_base* t611 = t610->_M_prev;
  t609->_M_node = t611;
  __retval608 = t609;
  struct std___List_iterator_int_* t612 = __retval608;
  return t612;
}

// function: _ZSt9__advanceISt14_List_iteratorIiElEvRT_T0_St26bidirectional_iterator_tag
void void_std____advance_std___List_iterator_int___long_(struct std___List_iterator_int_* v613, long v614, struct std__bidirectional_iterator_tag v615) {
bb616:
  struct std___List_iterator_int_* __i617;
  long __n618;
  struct std__bidirectional_iterator_tag unnamed619;
  __i617 = v613;
  __n618 = v614;
  unnamed619 = v615;
    long t620 = __n618;
    long c621 = 0;
    _Bool c622 = ((t620 > c621)) ? 1 : 0;
    if (c622) {
        while (1) {
          long t623 = __n618;
          long u624 = t623 - 1;
          __n618 = u624;
          _Bool cast625 = (_Bool)t623;
          if (!cast625) break;
          struct std___List_iterator_int_* t626 = __i617;
          struct std___List_iterator_int_* r627 = std___List_iterator_int___operator___4(t626);
        }
    } else {
        while (1) {
          long t628 = __n618;
          long u629 = t628 + 1;
          __n618 = u629;
          _Bool cast630 = (_Bool)t628;
          if (!cast630) break;
          struct std___List_iterator_int_* t631 = __i617;
          struct std___List_iterator_int_* r632 = std___List_iterator_int___operator___2(t631);
        }
    }
  return;
}

// function: _ZSt19__iterator_categoryISt14_List_iteratorIiEENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_iterator_int_____iterator_category_std____iterator_category_std___List_iterator_int___(struct std___List_iterator_int_* v633) {
bb634:
  struct std___List_iterator_int_* unnamed635;
  struct std__bidirectional_iterator_tag __retval636;
  unnamed635 = v633;
  struct std__bidirectional_iterator_tag t637 = __retval636;
  return t637;
}

// function: _ZSt7advanceISt14_List_iteratorIiEiEvRT_T0_
void void_std__advance_std___List_iterator_int___int_(struct std___List_iterator_int_* v638, int v639) {
bb640:
  struct std___List_iterator_int_* __i641;
  int __n642;
  long __d643;
  struct std__bidirectional_iterator_tag agg_tmp0644;
  __i641 = v638;
  __n642 = v639;
  int t645 = __n642;
  long cast646 = (long)t645;
  __d643 = cast646;
  struct std___List_iterator_int_* t647 = __i641;
  long t648 = __d643;
  struct std___List_iterator_int_* t649 = __i641;
  struct std__bidirectional_iterator_tag r650 = std__iterator_traits_std___List_iterator_int_____iterator_category_std____iterator_category_std___List_iterator_int___(t649);
  agg_tmp0644 = r650;
  struct std__bidirectional_iterator_tag t651 = agg_tmp0644;
  void_std____advance_std___List_iterator_int___long_(t647, t648, t651);
  return;
}

// function: _ZNSt20_List_const_iteratorIiEppEv
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* v652) {
bb653:
  struct std___List_const_iterator_int_* this654;
  struct std___List_const_iterator_int_* __retval655;
  this654 = v652;
  struct std___List_const_iterator_int_* t656 = this654;
  struct std____detail___List_node_base* t657 = t656->_M_node;
  struct std____detail___List_node_base* t658 = t657->_M_next;
  t656->_M_node = t658;
  __retval655 = t656;
  struct std___List_const_iterator_int_* t659 = __retval655;
  return t659;
}

// function: _ZSt10__distanceIiElSt20_List_const_iteratorIT_ES2_St18input_iterator_tag
long long_std____distance_int_(struct std___List_const_iterator_int_ v660, struct std___List_const_iterator_int_ v661, struct std__input_iterator_tag v662) {
bb663:
  struct std___List_const_iterator_int_ __first664;
  struct std___List_const_iterator_int_ __last665;
  struct std__input_iterator_tag unnamed666;
  long __retval667;
  struct std___List_const_iterator_int_ __beyond668;
  _Bool __whole669;
  long __n670;
  __first664 = v660;
  __last665 = v661;
  unnamed666 = v662;
  __beyond668 = __last665; // copy
  struct std___List_const_iterator_int_* r671 = std___List_const_iterator_int___operator__(&__beyond668);
  _Bool r672 = std__operator___3(&__first664, &__beyond668);
  __whole669 = r672;
    _Bool t673 = __whole669;
    _Bool isconst674 = 0;
    _Bool ternary675;
    if (isconst674) {
      _Bool t676 = __whole669;
      ternary675 = (_Bool)t676;
    } else {
      _Bool c677 = 0;
      ternary675 = (_Bool)c677;
    }
    if (ternary675) {
      struct std____detail___List_node_base* t678 = __last665._M_node;
      struct std____detail___List_node_header* derived679 = ((t678) ? (struct std____detail___List_node_header*)((char *)t678 - 0) : (struct std____detail___List_node_header*)0);
      struct std____detail___List_size* base680 = (struct std____detail___List_size*)((char *)derived679 + 16);
      unsigned long t681 = base680->_M_size;
      long cast682 = (long)t681;
      __retval667 = cast682;
      long t683 = __retval667;
      return t683;
    }
  long c684 = 0;
  __n670 = c684;
    while (1) {
      _Bool r685 = std__operator___3(&__first664, &__last665);
      _Bool u686 = !r685;
      if (!u686) break;
        struct std___List_const_iterator_int_* r687 = std___List_const_iterator_int___operator__(&__first664);
        long t688 = __n670;
        long u689 = t688 + 1;
        __n670 = u689;
    }
  long t690 = __n670;
  __retval667 = t690;
  long t691 = __retval667;
  return t691;
}

// function: _ZSt19__iterator_categoryISt20_List_const_iteratorIiEENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(struct std___List_const_iterator_int_* v692) {
bb693:
  struct std___List_const_iterator_int_* unnamed694;
  struct std__bidirectional_iterator_tag __retval695;
  unnamed694 = v692;
  struct std__bidirectional_iterator_tag t696 = __retval695;
  return t696;
}

// function: _ZSt8distanceISt20_List_const_iteratorIiEENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_std___List_const_iterator_int_____difference_type_std__distance_std___List_const_iterator_int___(struct std___List_const_iterator_int_ v697, struct std___List_const_iterator_int_ v698) {
bb699:
  struct std___List_const_iterator_int_ __first700;
  struct std___List_const_iterator_int_ __last701;
  long __retval702;
  struct std___List_const_iterator_int_ agg_tmp0703;
  struct std___List_const_iterator_int_ agg_tmp1704;
  struct std__input_iterator_tag agg_tmp2705;
  struct std__bidirectional_iterator_tag ref_tmp0706;
  __first700 = v697;
  __last701 = v698;
  agg_tmp0703 = __first700; // copy
  agg_tmp1704 = __last701; // copy
  struct std__bidirectional_iterator_tag r707 = std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(&__first700);
  ref_tmp0706 = r707;
  struct std__input_iterator_tag* base708 = (struct std__input_iterator_tag*)((char *)&(ref_tmp0706) + 0);
  struct std___List_const_iterator_int_ t709 = agg_tmp0703;
  struct std___List_const_iterator_int_ t710 = agg_tmp1704;
  struct std__input_iterator_tag t711 = agg_tmp2705;
  long r712 = long_std____distance_int_(t709, t710, t711);
  __retval702 = r712;
  long t713 = __retval702;
  return t713;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_S4_S4_
void std____cxx11__list_int__std__allocator_int_____splice_3(struct std____cxx11__list_int__std__allocator_int__* v714, struct std___List_const_iterator_int_ v715, struct std____cxx11__list_int__std__allocator_int__* v716, struct std___List_const_iterator_int_ v717, struct std___List_const_iterator_int_ v718) {
bb719:
  struct std____cxx11__list_int__std__allocator_int__* this720;
  struct std___List_const_iterator_int_ __position721;
  struct std____cxx11__list_int__std__allocator_int__* __x722;
  struct std___List_const_iterator_int_ __first723;
  struct std___List_const_iterator_int_ __last724;
  this720 = v714;
  __position721 = v715;
  __x722 = v716;
  __first723 = v717;
  __last724 = v718;
  struct std____cxx11__list_int__std__allocator_int__* t725 = this720;
    _Bool r726 = std__operator___3(&__first723, &__last724);
    _Bool u727 = !r726;
    if (u727) {
      unsigned long __n728;
      struct std___List_const_iterator_int_ agg_tmp0729;
      struct std___List_const_iterator_int_ agg_tmp1730;
      struct std___List_iterator_int_ agg_tmp2731;
      struct std___List_iterator_int_ agg_tmp3732;
      struct std___List_iterator_int_ agg_tmp4733;
        struct std____cxx11__list_int__std__allocator_int__* t734 = __x722;
        _Bool c735 = ((t725 != t734)) ? 1 : 0;
        if (c735) {
          struct std____cxx11__list_int__std__allocator_int__* t736 = __x722;
          std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t725, t736);
        }
      agg_tmp0729 = __first723; // copy
      agg_tmp1730 = __last724; // copy
      struct std___List_const_iterator_int_ t737 = agg_tmp0729;
      struct std___List_const_iterator_int_ t738 = agg_tmp1730;
      long r739 = std__iterator_traits_std___List_const_iterator_int_____difference_type_std__distance_std___List_const_iterator_int___(t737, t738);
      unsigned long cast740 = (unsigned long)r739;
      __n728 = cast740;
      struct std____cxx11___List_base_int__std__allocator_int__* base741 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t725 + 0);
      unsigned long t742 = __n728;
      std____cxx11___List_base_int__std__allocator_int______M_inc_size(base741, t742);
      struct std____cxx11__list_int__std__allocator_int__* t743 = __x722;
      struct std____cxx11___List_base_int__std__allocator_int__* base744 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t743 + 0);
      unsigned long t745 = __n728;
      std____cxx11___List_base_int__std__allocator_int______M_dec_size(base744, t745);
      struct std___List_iterator_int_ r746 = std___List_const_iterator_int____M_const_cast___const(&__position721);
      agg_tmp2731 = r746;
      struct std___List_iterator_int_ r747 = std___List_const_iterator_int____M_const_cast___const(&__first723);
      agg_tmp3732 = r747;
      struct std___List_iterator_int_ r748 = std___List_const_iterator_int____M_const_cast___const(&__last724);
      agg_tmp4733 = r748;
      struct std___List_iterator_int_ t749 = agg_tmp2731;
      struct std___List_iterator_int_ t750 = agg_tmp3732;
      struct std___List_iterator_int_ t751 = agg_tmp4733;
      std____cxx11__list_int__std__allocator_int______M_transfer(t725, t749, t750, t751);
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_S4_S4_
void std____cxx11__list_int__std__allocator_int_____splice_6(struct std____cxx11__list_int__std__allocator_int__* v752, struct std___List_const_iterator_int_ v753, struct std____cxx11__list_int__std__allocator_int__* v754, struct std___List_const_iterator_int_ v755, struct std___List_const_iterator_int_ v756) {
bb757:
  struct std____cxx11__list_int__std__allocator_int__* this758;
  struct std___List_const_iterator_int_ __position759;
  struct std____cxx11__list_int__std__allocator_int__* __x760;
  struct std___List_const_iterator_int_ __first761;
  struct std___List_const_iterator_int_ __last762;
  struct std___List_const_iterator_int_ agg_tmp0763;
  struct std___List_const_iterator_int_ agg_tmp1764;
  struct std___List_const_iterator_int_ agg_tmp2765;
  this758 = v752;
  __position759 = v753;
  __x760 = v754;
  __first761 = v755;
  __last762 = v756;
  struct std____cxx11__list_int__std__allocator_int__* t766 = this758;
  agg_tmp0763 = __position759; // copy
  struct std____cxx11__list_int__std__allocator_int__* t767 = __x760;
  agg_tmp1764 = __first761; // copy
  agg_tmp2765 = __last762; // copy
  struct std___List_const_iterator_int_ t768 = agg_tmp0763;
  struct std___List_const_iterator_int_ t769 = agg_tmp1764;
  struct std___List_const_iterator_int_ t770 = agg_tmp2765;
  std____cxx11__list_int__std__allocator_int_____splice_3(t766, t768, t767, t769, t770);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v771) {
bb772:
  struct std____cxx11__list_int__std__allocator_int__* this773;
  struct std___List_iterator_int_ __retval774;
  this773 = v771;
  struct std____cxx11__list_int__std__allocator_int__* t775 = this773;
  struct std____cxx11___List_base_int__std__allocator_int__* base776 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t775 + 0);
  struct std____detail___List_node_base* r777 = std____detail___List_node_header___M_base(&base776->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval774, r777);
  struct std___List_iterator_int_ t778 = __retval774;
  return t778;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v779, int v780) {
bb781:
  int __a782;
  int __b783;
  int __retval784;
  __a782 = v779;
  __b783 = v780;
  int t785 = __a782;
  int t786 = __b783;
  int b787 = t785 | t786;
  __retval784 = b787;
  int t788 = __retval784;
  return t788;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v789) {
bb790:
  struct std__basic_ios_char__std__char_traits_char__* this791;
  int __retval792;
  this791 = v789;
  struct std__basic_ios_char__std__char_traits_char__* t793 = this791;
  struct std__ios_base* base794 = (struct std__ios_base*)((char *)t793 + 0);
  int t795 = base794->_M_streambuf_state;
  __retval792 = t795;
  int t796 = __retval792;
  return t796;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v797, int v798) {
bb799:
  struct std__basic_ios_char__std__char_traits_char__* this800;
  int __state801;
  this800 = v797;
  __state801 = v798;
  struct std__basic_ios_char__std__char_traits_char__* t802 = this800;
  int r803 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t802);
  int t804 = __state801;
  int r805 = std__operator_(r803, t804);
  std__basic_ios_char__std__char_traits_char_____clear(t802, r805);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v806, char* v807) {
bb808:
  char* __c1809;
  char* __c2810;
  _Bool __retval811;
  __c1809 = v806;
  __c2810 = v807;
  char* t812 = __c1809;
  char t813 = *t812;
  int cast814 = (int)t813;
  char* t815 = __c2810;
  char t816 = *t815;
  int cast817 = (int)t816;
  _Bool c818 = ((cast814 == cast817)) ? 1 : 0;
  __retval811 = c818;
  _Bool t819 = __retval811;
  return t819;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v820) {
bb821:
  char* __p822;
  unsigned long __retval823;
  unsigned long __i824;
  __p822 = v820;
  unsigned long c825 = 0;
  __i824 = c825;
    char ref_tmp0826;
    while (1) {
      unsigned long t827 = __i824;
      char* t828 = __p822;
      char* ptr829 = &(t828)[t827];
      char c830 = 0;
      ref_tmp0826 = c830;
      _Bool r831 = __gnu_cxx__char_traits_char___eq(ptr829, &ref_tmp0826);
      _Bool u832 = !r831;
      if (!u832) break;
      unsigned long t833 = __i824;
      unsigned long u834 = t833 + 1;
      __i824 = u834;
    }
  unsigned long t835 = __i824;
  __retval823 = t835;
  unsigned long t836 = __retval823;
  return t836;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v837) {
bb838:
  char* __s839;
  unsigned long __retval840;
  __s839 = v837;
    _Bool r841 = std____is_constant_evaluated();
    if (r841) {
      char* t842 = __s839;
      unsigned long r843 = __gnu_cxx__char_traits_char___length(t842);
      __retval840 = r843;
      unsigned long t844 = __retval840;
      return t844;
    }
  char* t845 = __s839;
  unsigned long r846 = strlen(t845);
  __retval840 = r846;
  unsigned long t847 = __retval840;
  return t847;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v848, char* v849) {
bb850:
  struct std__basic_ostream_char__std__char_traits_char__* __out851;
  char* __s852;
  struct std__basic_ostream_char__std__char_traits_char__* __retval853;
  __out851 = v848;
  __s852 = v849;
    char* t854 = __s852;
    _Bool cast855 = (_Bool)t854;
    _Bool u856 = !cast855;
    if (u856) {
      struct std__basic_ostream_char__std__char_traits_char__* t857 = __out851;
      void** v858 = (void**)t857;
      void* v859 = *((void**)v858);
      unsigned char* cast860 = (unsigned char*)v859;
      long c861 = -24;
      unsigned char* ptr862 = &(cast860)[c861];
      long* cast863 = (long*)ptr862;
      long t864 = *cast863;
      unsigned char* cast865 = (unsigned char*)t857;
      unsigned char* ptr866 = &(cast865)[t864];
      struct std__basic_ostream_char__std__char_traits_char__* cast867 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr866;
      struct std__basic_ios_char__std__char_traits_char__* cast868 = (struct std__basic_ios_char__std__char_traits_char__*)cast867;
      int t869 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast868, t869);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t870 = __out851;
      char* t871 = __s852;
      char* t872 = __s852;
      unsigned long r873 = std__char_traits_char___length(t872);
      long cast874 = (long)r873;
      struct std__basic_ostream_char__std__char_traits_char__* r875 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t870, t871, cast874);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t876 = __out851;
  __retval853 = t876;
  struct std__basic_ostream_char__std__char_traits_char__* t877 = __retval853;
  return t877;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator___2(struct std___List_iterator_int_* v878, struct std___List_iterator_int_* v879) {
bb880:
  struct std___List_iterator_int_* __x881;
  struct std___List_iterator_int_* __y882;
  _Bool __retval883;
  __x881 = v878;
  __y882 = v879;
  struct std___List_iterator_int_* t884 = __x881;
  struct std____detail___List_node_base* t885 = t884->_M_node;
  struct std___List_iterator_int_* t886 = __y882;
  struct std____detail___List_node_base* t887 = t886->_M_node;
  _Bool c888 = ((t885 == t887)) ? 1 : 0;
  __retval883 = c888;
  _Bool t889 = __retval883;
  return t889;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v890, void* v891) {
bb892:
  struct std__basic_ostream_char__std__char_traits_char__* this893;
  void* __pf894;
  struct std__basic_ostream_char__std__char_traits_char__* __retval895;
  this893 = v890;
  __pf894 = v891;
  struct std__basic_ostream_char__std__char_traits_char__* t896 = this893;
  void* t897 = __pf894;
  struct std__basic_ostream_char__std__char_traits_char__* r898 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t897)(t896);
  __retval895 = r898;
  struct std__basic_ostream_char__std__char_traits_char__* t899 = __retval895;
  return t899;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v900) {
bb901:
  struct std__basic_ostream_char__std__char_traits_char__* __os902;
  struct std__basic_ostream_char__std__char_traits_char__* __retval903;
  __os902 = v900;
  struct std__basic_ostream_char__std__char_traits_char__* t904 = __os902;
  struct std__basic_ostream_char__std__char_traits_char__* r905 = std__ostream__flush(t904);
  __retval903 = r905;
  struct std__basic_ostream_char__std__char_traits_char__* t906 = __retval903;
  return t906;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v907) {
bb908:
  struct std__ctype_char_* __f909;
  struct std__ctype_char_* __retval910;
  __f909 = v907;
    struct std__ctype_char_* t911 = __f909;
    _Bool cast912 = (_Bool)t911;
    _Bool u913 = !cast912;
    if (u913) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t914 = __f909;
  __retval910 = t914;
  struct std__ctype_char_* t915 = __retval910;
  return t915;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v916, char v917) {
bb918:
  struct std__ctype_char_* this919;
  char __c920;
  char __retval921;
  this919 = v916;
  __c920 = v917;
  struct std__ctype_char_* t922 = this919;
    char t923 = t922->_M_widen_ok;
    _Bool cast924 = (_Bool)t923;
    if (cast924) {
      char t925 = __c920;
      unsigned char cast926 = (unsigned char)t925;
      unsigned long cast927 = (unsigned long)cast926;
      char t928 = t922->_M_widen[cast927];
      __retval921 = t928;
      char t929 = __retval921;
      return t929;
    }
  std__ctype_char____M_widen_init___const(t922);
  char t930 = __c920;
  void** v931 = (void**)t922;
  void* v932 = *((void**)v931);
  char vcall935 = (char)__VERIFIER_virtual_call_char_char(t922, 6, t930);
  __retval921 = vcall935;
  char t936 = __retval921;
  return t936;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v937, char v938) {
bb939:
  struct std__basic_ios_char__std__char_traits_char__* this940;
  char __c941;
  char __retval942;
  this940 = v937;
  __c941 = v938;
  struct std__basic_ios_char__std__char_traits_char__* t943 = this940;
  struct std__ctype_char_* t944 = t943->_M_ctype;
  struct std__ctype_char_* r945 = std__ctype_char__const__std____check_facet_std__ctype_char___(t944);
  char t946 = __c941;
  char r947 = std__ctype_char___widen_char__const(r945, t946);
  __retval942 = r947;
  char t948 = __retval942;
  return t948;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v949) {
bb950:
  struct std__basic_ostream_char__std__char_traits_char__* __os951;
  struct std__basic_ostream_char__std__char_traits_char__* __retval952;
  __os951 = v949;
  struct std__basic_ostream_char__std__char_traits_char__* t953 = __os951;
  struct std__basic_ostream_char__std__char_traits_char__* t954 = __os951;
  void** v955 = (void**)t954;
  void* v956 = *((void**)v955);
  unsigned char* cast957 = (unsigned char*)v956;
  long c958 = -24;
  unsigned char* ptr959 = &(cast957)[c958];
  long* cast960 = (long*)ptr959;
  long t961 = *cast960;
  unsigned char* cast962 = (unsigned char*)t954;
  unsigned char* ptr963 = &(cast962)[t961];
  struct std__basic_ostream_char__std__char_traits_char__* cast964 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr963;
  struct std__basic_ios_char__std__char_traits_char__* cast965 = (struct std__basic_ios_char__std__char_traits_char__*)cast964;
  char c966 = 10;
  char r967 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast965, c966);
  struct std__basic_ostream_char__std__char_traits_char__* r968 = std__ostream__put(t953, r967);
  struct std__basic_ostream_char__std__char_traits_char__* r969 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r968);
  __retval952 = r969;
  struct std__basic_ostream_char__std__char_traits_char__* t970 = __retval952;
  return t970;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v971) {
bb972:
  struct std____cxx11__list_int__std__allocator_int__* this973;
  this973 = v971;
  struct std____cxx11__list_int__std__allocator_int__* t974 = this973;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base975 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t974 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base975);
  }
  return;
}

// function: main
int main() {
bb976:
  int __retval977;
  struct std____cxx11__list_int__std__allocator_int__ mylist1978;
  struct std____cxx11__list_int__std__allocator_int__ mylist2979;
  struct std___List_iterator_int_ it980;
  struct std___List_iterator_int_ ref_tmp1981;
  struct std___List_const_iterator_int_ agg_tmp0982;
  struct std___List_iterator_int_ agg_tmp1983;
  struct std___List_iterator_int_ agg_tmp2984;
  struct std___List_const_iterator_int_ agg_tmp3985;
  struct std___List_iterator_int_ ref_tmp2986;
  struct std___List_const_iterator_int_ agg_tmp4987;
  struct std___List_iterator_int_ ref_tmp3988;
  struct std___List_const_iterator_int_ agg_tmp5989;
  struct std___List_iterator_int_ ref_tmp4990;
  struct std___List_const_iterator_int_ agg_tmp6991;
  struct std___List_const_iterator_int_ agg_tmp7992;
  struct std___List_iterator_int_ ref_tmp5993;
  struct std___List_iterator_int_ ref_tmp6994;
  struct std___List_iterator_int_ agg_tmp8995;
  struct std___List_iterator_int_ agg_tmp9996;
  struct std___List_iterator_int_ agg_tmp10997;
  struct std___List_iterator_int_ agg_tmp11998;
  struct std___List_iterator_int_ agg_tmp12999;
  int c1000 = 0;
  __retval977 = c1000;
  std____cxx11__list_int__std__allocator_int_____list(&mylist1978);
    std____cxx11__list_int__std__allocator_int_____list(&mylist2979);
      std___List_iterator_int____List_iterator_2(&it980);
        int i1001;
        int c1002 = 1;
        i1001 = c1002;
        while (1) {
          int t1004 = i1001;
          int c1005 = 4;
          _Bool c1006 = ((t1004 <= c1005)) ? 1 : 0;
          if (!c1006) break;
          std____cxx11__list_int__std__allocator_int_____push_back_2(&mylist1978, &i1001);
        for_step1003: ;
          int t1007 = i1001;
          int u1008 = t1007 + 1;
          i1001 = u1008;
        }
        int i1009;
        int ref_tmp01010;
        int c1011 = 1;
        i1009 = c1011;
        while (1) {
          int t1013 = i1009;
          int c1014 = 3;
          _Bool c1015 = ((t1013 <= c1014)) ? 1 : 0;
          if (!c1015) break;
          int t1016 = i1009;
          int c1017 = 10;
          int b1018 = t1016 * c1017;
          ref_tmp01010 = b1018;
          std____cxx11__list_int__std__allocator_int_____push_back(&mylist2979, &ref_tmp01010);
        for_step1012: ;
          int t1019 = i1009;
          int u1020 = t1019 + 1;
          i1009 = u1020;
        }
      struct std___List_iterator_int_ r1021 = std____cxx11__list_int__std__allocator_int_____begin(&mylist1978);
      ref_tmp1981 = r1021;
      struct std___List_iterator_int_* r1022 = std___List_iterator_int___operator_(&it980, &ref_tmp1981);
      struct std___List_iterator_int_* r1023 = std___List_iterator_int___operator___4(&it980);
      std___List_const_iterator_int____List_const_iterator(&agg_tmp0982, &it980);
      struct std___List_const_iterator_int_ t1024 = agg_tmp0982;
      std____cxx11__list_int__std__allocator_int_____splice_4(&mylist1978, t1024, &mylist2979);
      unsigned long r1025 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist1978);
      unsigned long c1026 = 7;
      _Bool c1027 = ((r1025 != c1026)) ? 1 : 0;
      if (c1027) {
      } else {
        char* cast1028 = (char*)&(_str);
        char* c1029 = _str_1;
        unsigned int c1030 = 32;
        char* cast1031 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1028, c1029, c1030, cast1031);
      }
      _Bool r1032 = std____cxx11__list_int__std__allocator_int_____empty___const(&mylist2979);
      _Bool u1033 = !r1032;
      if (u1033) {
      } else {
        char* cast1034 = (char*)&(_str_2);
        char* c1035 = _str_1;
        unsigned int c1036 = 33;
        char* cast1037 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1034, c1035, c1036, cast1037);
      }
      int* r1038 = std___List_iterator_int___operator____const(&it980);
      int t1039 = *r1038;
      int c1040 = 2;
      _Bool c1041 = ((t1039 != c1040)) ? 1 : 0;
      if (c1041) {
      } else {
        char* cast1042 = (char*)&(_str_3);
        char* c1043 = _str_1;
        unsigned int c1044 = 34;
        char* cast1045 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1042, c1043, c1044, cast1045);
      }
      int c1046 = 0;
      struct std___List_iterator_int_ r1047 = std___List_iterator_int___operator__(&it980, c1046);
      agg_tmp1983 = r1047;
      int* r1048 = std___List_iterator_int___operator____const(&it980);
      int t1049 = *r1048;
      int c1050 = 30;
      _Bool c1051 = ((t1049 != c1050)) ? 1 : 0;
      if (c1051) {
      } else {
        char* cast1052 = (char*)&(_str_4);
        char* c1053 = _str_1;
        unsigned int c1054 = 36;
        char* cast1055 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1052, c1053, c1054, cast1055);
      }
      int c1056 = 0;
      struct std___List_iterator_int_ r1057 = std___List_iterator_int___operator___3(&it980, c1056);
      agg_tmp2984 = r1057;
      struct std___List_iterator_int_ r1058 = std____cxx11__list_int__std__allocator_int_____begin(&mylist2979);
      ref_tmp2986 = r1058;
      std___List_const_iterator_int____List_const_iterator(&agg_tmp3985, &ref_tmp2986);
      std___List_const_iterator_int____List_const_iterator(&agg_tmp4987, &it980);
      struct std___List_const_iterator_int_ t1059 = agg_tmp3985;
      struct std___List_const_iterator_int_ t1060 = agg_tmp4987;
      std____cxx11__list_int__std__allocator_int_____splice_5(&mylist2979, t1059, &mylist1978, t1060);
      unsigned long r1061 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist1978);
      unsigned long c1062 = 6;
      _Bool c1063 = ((r1061 != c1062)) ? 1 : 0;
      if (c1063) {
      } else {
        char* cast1064 = (char*)&(_str_5);
        char* c1065 = _str_1;
        unsigned int c1066 = 43;
        char* cast1067 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1064, c1065, c1066, cast1067);
      }
      unsigned long r1068 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist2979);
      unsigned long c1069 = 1;
      _Bool c1070 = ((r1068 != c1069)) ? 1 : 0;
      if (c1070) {
      } else {
        char* cast1071 = (char*)&(_str_6);
        char* c1072 = _str_1;
        unsigned int c1073 = 44;
        char* cast1074 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1071, c1072, c1073, cast1074);
      }
      struct std___List_iterator_int_ r1075 = std____cxx11__list_int__std__allocator_int_____begin(&mylist1978);
      ref_tmp3988 = r1075;
      struct std___List_iterator_int_* r1076 = std___List_iterator_int___operator_(&it980, &ref_tmp3988);
      int c1077 = 3;
      void_std__advance_std___List_iterator_int___int_(&it980, c1077);
      struct std___List_iterator_int_ r1078 = std____cxx11__list_int__std__allocator_int_____begin(&mylist1978);
      ref_tmp4990 = r1078;
      std___List_const_iterator_int____List_const_iterator(&agg_tmp5989, &ref_tmp4990);
      std___List_const_iterator_int____List_const_iterator(&agg_tmp6991, &it980);
      struct std___List_iterator_int_ r1079 = std____cxx11__list_int__std__allocator_int_____end(&mylist1978);
      ref_tmp5993 = r1079;
      std___List_const_iterator_int____List_const_iterator(&agg_tmp7992, &ref_tmp5993);
      struct std___List_const_iterator_int_ t1080 = agg_tmp5989;
      struct std___List_const_iterator_int_ t1081 = agg_tmp6991;
      struct std___List_const_iterator_int_ t1082 = agg_tmp7992;
      std____cxx11__list_int__std__allocator_int_____splice_6(&mylist1978, t1080, &mylist1978, t1081, t1082);
      unsigned long r1083 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist1978);
      unsigned long c1084 = 6;
      _Bool c1085 = ((r1083 == c1084)) ? 1 : 0;
      if (c1085) {
      } else {
        char* cast1086 = (char*)&(_str_7);
        char* c1087 = _str_1;
        unsigned int c1088 = 51;
        char* cast1089 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1086, c1087, c1088, cast1089);
      }
      struct std___List_iterator_int_ r1090 = std____cxx11__list_int__std__allocator_int_____begin(&mylist1978);
      ref_tmp6994 = r1090;
      struct std___List_iterator_int_* r1091 = std___List_iterator_int___operator_(&it980, &ref_tmp6994);
      int* r1092 = std___List_iterator_int___operator____const(&it980);
      int t1093 = *r1092;
      int c1094 = 30;
      _Bool c1095 = ((t1093 != c1094)) ? 1 : 0;
      if (c1095) {
      } else {
        char* cast1096 = (char*)&(_str_4);
        char* c1097 = _str_1;
        unsigned int c1098 = 53;
        char* cast1099 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1096, c1097, c1098, cast1099);
      }
      int c1100 = 0;
      struct std___List_iterator_int_ r1101 = std___List_iterator_int___operator___3(&it980, c1100);
      agg_tmp8995 = r1101;
      int* r1102 = std___List_iterator_int___operator____const(&it980);
      int t1103 = *r1102;
      int c1104 = 3;
      _Bool c1105 = ((t1103 == c1104)) ? 1 : 0;
      if (c1105) {
      } else {
        char* cast1106 = (char*)&(_str_8);
        char* c1107 = _str_1;
        unsigned int c1108 = 54;
        char* cast1109 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1106, c1107, c1108, cast1109);
      }
      int c1110 = 0;
      struct std___List_iterator_int_ r1111 = std___List_iterator_int___operator___3(&it980, c1110);
      agg_tmp9996 = r1111;
      int* r1112 = std___List_iterator_int___operator____const(&it980);
      int t1113 = *r1112;
      int c1114 = 4;
      _Bool c1115 = ((t1113 == c1114)) ? 1 : 0;
      if (c1115) {
      } else {
        char* cast1116 = (char*)&(_str_9);
        char* c1117 = _str_1;
        unsigned int c1118 = 55;
        char* cast1119 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1116, c1117, c1118, cast1119);
      }
      int c1120 = 0;
      struct std___List_iterator_int_ r1121 = std___List_iterator_int___operator___3(&it980, c1120);
      agg_tmp10997 = r1121;
      int* r1122 = std___List_iterator_int___operator____const(&it980);
      int t1123 = *r1122;
      int c1124 = 1;
      _Bool c1125 = ((t1123 != c1124)) ? 1 : 0;
      if (c1125) {
      } else {
        char* cast1126 = (char*)&(_str_10);
        char* c1127 = _str_1;
        unsigned int c1128 = 56;
        char* cast1129 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1126, c1127, c1128, cast1129);
      }
      int c1130 = 0;
      struct std___List_iterator_int_ r1131 = std___List_iterator_int___operator___3(&it980, c1130);
      agg_tmp11998 = r1131;
      int* r1132 = std___List_iterator_int___operator____const(&it980);
      int t1133 = *r1132;
      int c1134 = 10;
      _Bool c1135 = ((t1133 == c1134)) ? 1 : 0;
      if (c1135) {
      } else {
        char* cast1136 = (char*)&(_str_11);
        char* c1137 = _str_1;
        unsigned int c1138 = 57;
        char* cast1139 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1136, c1137, c1138, cast1139);
      }
      int c1140 = 0;
      struct std___List_iterator_int_ r1141 = std___List_iterator_int___operator___3(&it980, c1140);
      agg_tmp12999 = r1141;
      int* r1142 = std___List_iterator_int___operator____const(&it980);
      int t1143 = *r1142;
      int c1144 = 20;
      _Bool c1145 = ((t1143 != c1144)) ? 1 : 0;
      if (c1145) {
      } else {
        char* cast1146 = (char*)&(_str_12);
        char* c1147 = _str_1;
        unsigned int c1148 = 58;
        char* cast1149 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1146, c1147, c1148, cast1149);
      }
      char* cast1150 = (char*)&(_str_13);
      struct std__basic_ostream_char__std__char_traits_char__* r1151 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1150);
        struct std___List_iterator_int_ ref_tmp71152;
        struct std___List_iterator_int_ ref_tmp81153;
        struct std___List_iterator_int_ agg_tmp131154;
        struct std___List_iterator_int_ r1155 = std____cxx11__list_int__std__allocator_int_____begin(&mylist1978);
        ref_tmp71152 = r1155;
        struct std___List_iterator_int_* r1156 = std___List_iterator_int___operator_(&it980, &ref_tmp71152);
        while (1) {
          struct std___List_iterator_int_ r1158 = std____cxx11__list_int__std__allocator_int_____end(&mylist1978);
          ref_tmp81153 = r1158;
          _Bool r1159 = std__operator___2(&it980, &ref_tmp81153);
          _Bool u1160 = !r1159;
          if (!u1160) break;
          char* cast1161 = (char*)&(_str_14);
          struct std__basic_ostream_char__std__char_traits_char__* r1162 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1161);
          int* r1163 = std___List_iterator_int___operator____const(&it980);
          int t1164 = *r1163;
          struct std__basic_ostream_char__std__char_traits_char__* r1165 = std__ostream__operator__(r1162, t1164);
        for_step1157: ;
          int c1166 = 0;
          struct std___List_iterator_int_ r1167 = std___List_iterator_int___operator___3(&it980, c1166);
          agg_tmp131154 = r1167;
        }
      char* cast1168 = (char*)&(_str_15);
      struct std__basic_ostream_char__std__char_traits_char__* r1169 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1168);
        struct std___List_iterator_int_ ref_tmp91170;
        struct std___List_iterator_int_ ref_tmp101171;
        struct std___List_iterator_int_ agg_tmp141172;
        struct std___List_iterator_int_ r1173 = std____cxx11__list_int__std__allocator_int_____begin(&mylist2979);
        ref_tmp91170 = r1173;
        struct std___List_iterator_int_* r1174 = std___List_iterator_int___operator_(&it980, &ref_tmp91170);
        while (1) {
          struct std___List_iterator_int_ r1176 = std____cxx11__list_int__std__allocator_int_____end(&mylist2979);
          ref_tmp101171 = r1176;
          _Bool r1177 = std__operator___2(&it980, &ref_tmp101171);
          _Bool u1178 = !r1177;
          if (!u1178) break;
          char* cast1179 = (char*)&(_str_14);
          struct std__basic_ostream_char__std__char_traits_char__* r1180 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1179);
          int* r1181 = std___List_iterator_int___operator____const(&it980);
          int t1182 = *r1181;
          struct std__basic_ostream_char__std__char_traits_char__* r1183 = std__ostream__operator__(r1180, t1182);
        for_step1175: ;
          int c1184 = 0;
          struct std___List_iterator_int_ r1185 = std___List_iterator_int___operator___3(&it980, c1184);
          agg_tmp141172 = r1185;
        }
      struct std__basic_ostream_char__std__char_traits_char__* r1186 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c1187 = 0;
      __retval977 = c1187;
      int t1188 = __retval977;
      int ret_val1189 = t1188;
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist2979);
      }
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist1978);
      }
      return ret_val1189;
  int t1190 = __retval977;
  return t1190;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1191) {
bb1192:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1193;
  this1193 = v1191;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1194 = this1193;
  struct std__allocator_std___List_node_int__* base1195 = (struct std__allocator_std___List_node_int__*)((char *)t1194 + 0);
  std__allocator_std___List_node_int_____allocator(base1195);
    std____detail___List_node_header___List_node_header(&t1194->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1196) {
bb1197:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1198;
  this1198 = v1196;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1199 = this1198;
  {
    struct std__allocator_std___List_node_int__* base1200 = (struct std__allocator_std___List_node_int__*)((char *)t1199 + 0);
    std__allocator_std___List_node_int______allocator(base1200);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1201) {
bb1202:
  struct std____cxx11___List_base_int__std__allocator_int__* this1203;
  this1203 = v1201;
  struct std____cxx11___List_base_int__std__allocator_int__* t1204 = this1203;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t1204->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v1205) {
bb1206:
  struct std____detail___List_node_header* this1207;
  struct std____detail___List_node_base* __retval1208;
  this1207 = v1205;
  struct std____detail___List_node_header* t1209 = this1207;
  struct std____detail___List_node_base* base1210 = (struct std____detail___List_node_base*)((char *)t1209 + 0);
  __retval1208 = base1210;
  struct std____detail___List_node_base* t1211 = __retval1208;
  return t1211;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1212) {
bb1213:
  int* __location1214;
  __location1214 = v1212;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v1215, int* v1216) {
bb1217:
  struct std__allocator_std___List_node_int__* __a1218;
  int* __p1219;
  __a1218 = v1215;
  __p1219 = v1216;
  int* t1220 = __p1219;
  void_std__destroy_at_int_(t1220);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1221) {
bb1222:
  struct __gnu_cxx____aligned_membuf_int_* this1223;
  void* __retval1224;
  this1223 = v1221;
  struct __gnu_cxx____aligned_membuf_int_* t1225 = this1223;
  void* cast1226 = (void*)&(t1225->_M_storage);
  __retval1224 = cast1226;
  void* t1227 = __retval1224;
  return t1227;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1228) {
bb1229:
  struct __gnu_cxx____aligned_membuf_int_* this1230;
  int* __retval1231;
  this1230 = v1228;
  struct __gnu_cxx____aligned_membuf_int_* t1232 = this1230;
  void* r1233 = __gnu_cxx____aligned_membuf_int____M_addr(t1232);
  int* cast1234 = (int*)r1233;
  __retval1231 = cast1234;
  int* t1235 = __retval1231;
  return t1235;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v1236) {
bb1237:
  struct std___List_node_int_* this1238;
  int* __retval1239;
  this1238 = v1236;
  struct std___List_node_int_* t1240 = this1238;
  int* r1241 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1240->_M_storage);
  __retval1239 = r1241;
  int* t1242 = __retval1239;
  return t1242;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1243:
  _Bool __retval1244;
    _Bool c1245 = 0;
    __retval1244 = c1245;
    _Bool t1246 = __retval1244;
    return t1246;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v1247, struct std___List_node_int_* v1248, unsigned long v1249) {
bb1250:
  struct std____new_allocator_std___List_node_int__* this1251;
  struct std___List_node_int_* __p1252;
  unsigned long __n1253;
  this1251 = v1247;
  __p1252 = v1248;
  __n1253 = v1249;
  struct std____new_allocator_std___List_node_int__* t1254 = this1251;
    unsigned long c1255 = 8;
    unsigned long c1256 = 16;
    _Bool c1257 = ((c1255 > c1256)) ? 1 : 0;
    if (c1257) {
      struct std___List_node_int_* t1258 = __p1252;
      void* cast1259 = (void*)t1258;
      unsigned long t1260 = __n1253;
      unsigned long c1261 = 24;
      unsigned long b1262 = t1260 * c1261;
      unsigned long c1263 = 8;
      operator_delete_3(cast1259, b1262, c1263);
      return;
    }
  struct std___List_node_int_* t1264 = __p1252;
  void* cast1265 = (void*)t1264;
  unsigned long t1266 = __n1253;
  unsigned long c1267 = 24;
  unsigned long b1268 = t1266 * c1267;
  operator_delete_2(cast1265, b1268);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v1269, struct std___List_node_int_* v1270, unsigned long v1271) {
bb1272:
  struct std__allocator_std___List_node_int__* this1273;
  struct std___List_node_int_* __p1274;
  unsigned long __n1275;
  this1273 = v1269;
  __p1274 = v1270;
  __n1275 = v1271;
  struct std__allocator_std___List_node_int__* t1276 = this1273;
    _Bool r1277 = std____is_constant_evaluated();
    if (r1277) {
      struct std___List_node_int_* t1278 = __p1274;
      void* cast1279 = (void*)t1278;
      operator_delete(cast1279);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base1280 = (struct std____new_allocator_std___List_node_int__*)((char *)t1276 + 0);
  struct std___List_node_int_* t1281 = __p1274;
  unsigned long t1282 = __n1275;
  std____new_allocator_std___List_node_int_____deallocate(base1280, t1281, t1282);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v1283, struct std___List_node_int_* v1284, unsigned long v1285) {
bb1286:
  struct std__allocator_std___List_node_int__* __a1287;
  struct std___List_node_int_* __p1288;
  unsigned long __n1289;
  __a1287 = v1283;
  __p1288 = v1284;
  __n1289 = v1285;
  struct std__allocator_std___List_node_int__* t1290 = __a1287;
  struct std___List_node_int_* t1291 = __p1288;
  unsigned long t1292 = __n1289;
  std__allocator_std___List_node_int_____deallocate(t1290, t1291, t1292);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v1293, struct std___List_node_int_* v1294) {
bb1295:
  struct std____cxx11___List_base_int__std__allocator_int__* this1296;
  struct std___List_node_int_* __p1297;
  this1296 = v1293;
  __p1297 = v1294;
  struct std____cxx11___List_base_int__std__allocator_int__* t1298 = this1296;
  struct std__allocator_std___List_node_int__* base1299 = (struct std__allocator_std___List_node_int__*)((char *)&(t1298->_M_impl) + 0);
  struct std___List_node_int_* t1300 = __p1297;
  unsigned long c1301 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base1299, t1300, c1301);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v1302, struct std___List_node_int_* v1303) {
bb1304:
  struct std____cxx11___List_base_int__std__allocator_int__* this1305;
  struct std___List_node_int_* __p1306;
  this1305 = v1302;
  __p1306 = v1303;
  struct std____cxx11___List_base_int__std__allocator_int__* t1307 = this1305;
  struct std__allocator_std___List_node_int__* base1308 = (struct std__allocator_std___List_node_int__*)((char *)&(t1307->_M_impl) + 0);
  struct std___List_node_int_* t1309 = __p1306;
  int* r1310 = std___List_node_int____M_valptr(t1309);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base1308, r1310);
  struct std___List_node_int_* t1311 = __p1306;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t1307, t1311);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v1312) {
bb1313:
  struct std___List_node_int_* this1314;
  struct std___List_node_int_* __retval1315;
  this1314 = v1312;
  struct std___List_node_int_* t1316 = this1314;
  __retval1315 = t1316;
  struct std___List_node_int_* t1317 = __retval1315;
  return t1317;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v1318) {
bb1319:
  struct std____cxx11___List_base_int__std__allocator_int__* this1320;
  struct std____detail___List_node_base* __cur1321;
  this1320 = v1318;
  struct std____cxx11___List_base_int__std__allocator_int__* t1322 = this1320;
  struct std____detail___List_node_base* base1323 = (struct std____detail___List_node_base*)((char *)&(t1322->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1324 = base1323->_M_next;
  __cur1321 = t1324;
    while (1) {
      struct std____detail___List_node_base* t1325 = __cur1321;
      struct std____detail___List_node_base* r1326 = std____detail___List_node_header___M_base(&t1322->_M_impl._M_node);
      _Bool c1327 = ((t1325 != r1326)) ? 1 : 0;
      if (!c1327) break;
        struct std___List_node_int_* __tmp1328;
        struct std____detail___List_node_base* t1329 = __cur1321;
        struct std___List_node_int_* derived1330 = (struct std___List_node_int_*)((char *)t1329 - 0);
        __tmp1328 = derived1330;
        struct std___List_node_int_* t1331 = __tmp1328;
        struct std____detail___List_node_base* base1332 = (struct std____detail___List_node_base*)((char *)t1331 + 0);
        struct std____detail___List_node_base* t1333 = base1332->_M_next;
        __cur1321 = t1333;
        struct std___List_node_int_* t1334 = __tmp1328;
        struct std___List_node_int_* r1335 = std___List_node_int____M_node_ptr(t1334);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t1322, r1335);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1336) {
bb1337:
  struct std____cxx11___List_base_int__std__allocator_int__* this1338;
  this1338 = v1336;
  struct std____cxx11___List_base_int__std__allocator_int__* t1339 = this1338;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t1339);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t1339->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v1340) {
bb1341:
  struct std____new_allocator_std___List_node_int__* this1342;
  this1342 = v1340;
  struct std____new_allocator_std___List_node_int__* t1343 = this1342;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v1344) {
bb1345:
  struct std__allocator_std___List_node_int__* this1346;
  this1346 = v1344;
  struct std__allocator_std___List_node_int__* t1347 = this1346;
  struct std____new_allocator_std___List_node_int__* base1348 = (struct std____new_allocator_std___List_node_int__*)((char *)t1347 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base1348);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1349) {
bb1350:
  struct std____detail___List_node_header* this1351;
  this1351 = v1349;
  struct std____detail___List_node_header* t1352 = this1351;
  struct std____detail___List_node_base* base1353 = (struct std____detail___List_node_base*)((char *)t1352 + 0);
  struct std____detail___List_size* base1354 = (struct std____detail___List_size*)((char *)t1352 + 16);
  std____detail___List_node_header___M_init(t1352);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v1355) {
bb1356:
  struct std__allocator_std___List_node_int__* this1357;
  this1357 = v1355;
  struct std__allocator_std___List_node_int__* t1358 = this1357;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1359, struct std____detail___List_size* v1360) {
bb1361:
  struct std____detail___List_size* this1362;
  struct std____detail___List_size* unnamed1363;
  struct std____detail___List_size* __retval1364;
  this1362 = v1359;
  unnamed1363 = v1360;
  struct std____detail___List_size* t1365 = this1362;
  struct std____detail___List_size* t1366 = unnamed1363;
  unsigned long t1367 = t1366->_M_size;
  t1365->_M_size = t1367;
  __retval1364 = t1365;
  struct std____detail___List_size* t1368 = __retval1364;
  return t1368;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1369) {
bb1370:
  struct std____detail___List_node_header* this1371;
  struct std____detail___List_size ref_tmp01372;
  this1371 = v1369;
  struct std____detail___List_node_header* t1373 = this1371;
  struct std____detail___List_node_base* base1374 = (struct std____detail___List_node_base*)((char *)t1373 + 0);
  struct std____detail___List_node_base* base1375 = (struct std____detail___List_node_base*)((char *)t1373 + 0);
  base1375->_M_prev = base1374;
  struct std____detail___List_node_base* base1376 = (struct std____detail___List_node_base*)((char *)t1373 + 0);
  base1376->_M_next = base1374;
  struct std____detail___List_size* base1377 = (struct std____detail___List_size*)((char *)t1373 + 16);
  ref_tmp01372 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1378 = std____detail___List_size__operator_(base1377, &ref_tmp01372);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1379, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1380) {
bb1381:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1382;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd1383;
  this1382 = v1379;
  __gd1383 = v1380;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1384 = this1382;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1385 = __gd1383;
  struct std__allocator_std___List_node_int__* t1386 = t1385->_M_alloc;
  t1384->_M_alloc = t1386;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1387 = __gd1383;
  struct std___List_node_int_* t1388 = t1387->_M_ptr;
  t1384->_M_ptr = t1388;
  struct std___List_node_int_* c1389 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1390 = __gd1383;
  t1390->_M_ptr = c1389;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v1391) {
bb1392:
  struct std___List_node_int_* __ptr1393;
  struct std___List_node_int_* __retval1394;
  __ptr1393 = v1391;
  struct std___List_node_int_* t1395 = __ptr1393;
  __retval1394 = t1395;
  struct std___List_node_int_* t1396 = __retval1394;
  return t1396;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v1397) {
bb1398:
  struct std___List_node_int_** __ptr1399;
  struct std___List_node_int_* __retval1400;
  __ptr1399 = v1397;
  struct std___List_node_int_** t1401 = __ptr1399;
  struct std___List_node_int_* t1402 = *t1401;
  struct std___List_node_int_* r1403 = std___List_node_int___std__to_address_std___List_node_int___(t1402);
  __retval1400 = r1403;
  struct std___List_node_int_* t1404 = __retval1400;
  return t1404;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1405) {
bb1406:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1407;
  struct std___List_node_int_* __retval1408;
  this1407 = v1405;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1409 = this1407;
  struct std___List_node_int_* r1410 = auto_std____to_address_std___List_node_int___(&t1409->_M_ptr);
  __retval1408 = r1410;
  struct std___List_node_int_* t1411 = __retval1408;
  return t1411;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1412) {
bb1413:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1414;
  _Bool __retval1415;
  this1414 = v1412;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1416 = this1414;
  struct std___List_node_int_* t1417 = t1416->_M_ptr;
  _Bool cast1418 = (_Bool)t1417;
  __retval1415 = cast1418;
  _Bool t1419 = __retval1415;
  return t1419;
}

