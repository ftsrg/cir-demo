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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____cxx11__list_int__std__allocator_int_____Finalize_merge { struct std____cxx11__list_int__std__allocator_int__* _M_dest; struct std____cxx11__list_int__std__allocator_int__* _M_src; struct std___List_iterator_int_* _M_next; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
struct std____list___Scratch_list_std____detail___List_node_base_ { struct std____detail___List_node_base __field0; };
struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_std___List_node_int__ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
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
int __const_main_array[4] = {2, 6, 4, 8};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "values contains: ";
char _str_1[33] = "\nvalues after sorting contains: ";
char _str_2[38] = "\nAfter insert, otherValues contains: ";
char _str_3[33] = "\nAfter splice, values contains: ";
char _str_4[31] = "\nAfter sort, values contains: ";
char _str_5[35] = "\nAfter merge:\n   values contains: ";
char _str_6[27] = "\n   otherValues contains: ";
char _str_7[31] = "\nAfter pop_front and pop_back:";
char _str_8[22] = "\n   values contains: ";
char _str_9[33] = "\nAfter unique, values contains: ";
char _str_10[34] = "\nAfter swap:\n   values contains: ";
char _str_11[33] = "\nAfter assign, values contains: ";
char _str_12[32] = "\nAfter merge, values contains: ";
char _str_13[38] = "\nAfter remove( 4 ), values contains: ";
char _str_14[14] = "List is empty";
char _str_15[2] = " ";
char _str_16[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_17[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE9pop_frontEv[75] = "void std::list<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv[74] = "void std::list<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* p0);
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
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std____cxx11__list_int__std__allocator_int_____push_front(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
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
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__ostream_iterator_int__char__std__char_traits_char__ p1);
_Bool std__operator___3(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___List_node_int____M_valptr___const(struct std___List_node_int_* p0);
int* std___List_const_iterator_int___operator____const(struct std___List_const_iterator_int_* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, int* p1);
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____std___List_const_iterator_int___(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std___List_const_iterator_int_* p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__std___List_const_iterator_int___std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(struct std___List_const_iterator_int_ p0, struct std___List_const_iterator_int_ p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(struct std___List_const_iterator_int_ p0, struct std___List_const_iterator_int_ p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
struct std___List_const_iterator_int_ std___List_const_iterator_int__std____niter_base_std___List_const_iterator_int___(struct std___List_const_iterator_int_ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(struct std___List_const_iterator_int_ p0, struct std___List_const_iterator_int_ p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
struct std___List_const_iterator_int_ std___List_const_iterator_int__std____miter_base_std___List_const_iterator_int___(struct std___List_const_iterator_int_ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy_std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(struct std___List_const_iterator_int_ p0, struct std___List_const_iterator_int_ p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__ostream_iterator_int__char__std__char_traits_char__* p1);
void void_printList_int_(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool std__operator___2(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
void std____list___Scratch_list_std____detail___List_node_base____Scratch_list(struct std____list___Scratch_list_std____detail___List_node_base_* p0);
extern int __gxx_personality_v0();
extern void std____detail___List_node_base___M_transfer(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void std____list___Scratch_list_std____detail___List_node_base____M_take_one(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
_Bool std____list___Scratch_list_std____detail___List_node_base___empty___const(struct std____list___Scratch_list_std____detail___List_node_base_* p0);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
_Bool std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1, struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ p2);
extern void std____detail___List_node_base__swap(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____list___Scratch_list_std____detail___List_node_base___swap(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
void std____list___Scratch_list_std____detail___List_node_base____M_put_all(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
void std____cxx11__list_int__std__allocator_int_____sort(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* p0, struct std__allocator_std___List_node_int__* p1);
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* p0);
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, int* p2, int* p3);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
void std___List_const_iterator_int____List_const_iterator_2(struct std___List_const_iterator_int_* p0, struct std___List_iterator_int_* p1);
_Bool std__operator__(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
extern void abort();
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std___List_iterator_int_ p3);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
void std____cxx11__list_int__std__allocator_int_____splice_3(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int______Finalize_merge___Finalize_merge(struct std____cxx11__list_int__std__allocator_int_____Finalize_merge* p0, struct std____cxx11__list_int__std__allocator_int__* p1, struct std____cxx11__list_int__std__allocator_int__* p2, struct std___List_iterator_int_* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
void std____cxx11__list_int__std__allocator_int______Finalize_merge____Finalize_merge(struct std____cxx11__list_int__std__allocator_int_____Finalize_merge* p0);
void std____cxx11__list_int__std__allocator_int_____merge(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
void std____cxx11__list_int__std__allocator_int_____merge_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
extern void std____detail___List_node_base___M_unhook(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
void std____cxx11__list_int__std__allocator_int_____pop_front(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2, struct std___List_const_iterator_int_ p3);
void std____cxx11__list_int__std__allocator_int_____splice_4(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2, struct std___List_const_iterator_int_ p3);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____unique(struct std____cxx11__list_int__std__allocator_int__* p0);
void void_std____alloc_on_swap_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
void __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_on_swap(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std____cxx11__list_int__std__allocator_int_____swap(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator_(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2);
void std____cxx11__list_int__std__allocator_int_____list_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std__allocator_int_* p3);
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std___List_iterator_int_ p3);
void void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_std___List_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std____false_type p3);
void void_std____cxx11__list_int__std__allocator_int_____assign_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2);
unsigned long std____cxx11__list_int__std__allocator_int_____remove(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
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
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* p0, struct std__allocator_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0, struct std__allocator_std___List_node_int__* p1);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std____false_type p3);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0, struct std____new_allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
long long_std____distance_int__2(struct std___List_const_iterator_int_ p0, struct std___List_const_iterator_int_ p1, struct std__input_iterator_tag p2);
long long_std____distance_int_(struct std___List_iterator_int_ p0, struct std___List_iterator_int_ p1, struct std__input_iterator_tag p2);
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_iterator_int_____iterator_category_std____iterator_category_std___List_iterator_int___(struct std___List_iterator_int_* p0);
long std__iterator_traits_std___List_iterator_int_____difference_type_std__distance_std___List_iterator_int___(struct std___List_iterator_int_ p0, struct std___List_iterator_int_ p1);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std____false_type p3);

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

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v5) {
bb6:
  struct std____cxx11___List_base_int__std__allocator_int__* this7;
  struct std__allocator_std___List_node_int__* __retval8;
  this7 = v5;
  struct std____cxx11___List_base_int__std__allocator_int__* t9 = this7;
  struct std__allocator_std___List_node_int__* base10 = (struct std__allocator_std___List_node_int__*)((char *)&(t9->_M_impl) + 0);
  __retval8 = base10;
  struct std__allocator_std___List_node_int__* t11 = __retval8;
  return t11;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v12) {
bb13:
  struct std____new_allocator_std___List_node_int__* this14;
  unsigned long __retval15;
  this14 = v12;
  struct std____new_allocator_std___List_node_int__* t16 = this14;
  unsigned long c17 = 9223372036854775807;
  unsigned long c18 = 24;
  unsigned long b19 = c17 / c18;
  __retval15 = b19;
  unsigned long t20 = __retval15;
  return t20;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v21, unsigned long v22, void* v23) {
bb24:
  struct std____new_allocator_std___List_node_int__* this25;
  unsigned long __n26;
  void* unnamed27;
  struct std___List_node_int_* __retval28;
  this25 = v21;
  __n26 = v22;
  unnamed27 = v23;
  struct std____new_allocator_std___List_node_int__* t29 = this25;
    unsigned long t30 = __n26;
    unsigned long r31 = std____new_allocator_std___List_node_int______M_max_size___const(t29);
    _Bool c32 = ((t30 > r31)) ? 1 : 0;
    if (c32) {
        unsigned long t33 = __n26;
        unsigned long c34 = -1;
        unsigned long c35 = 24;
        unsigned long b36 = c34 / c35;
        _Bool c37 = ((t33 > b36)) ? 1 : 0;
        if (c37) {
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
    unsigned long c38 = 8;
    unsigned long c39 = 16;
    _Bool c40 = ((c38 > c39)) ? 1 : 0;
    if (c40) {
      unsigned long __al41;
      unsigned long c42 = 8;
      __al41 = c42;
      unsigned long t43 = __n26;
      unsigned long c44 = 24;
      unsigned long b45 = t43 * c44;
      unsigned long t46 = __al41;
      void* r47 = operator_new_2(b45, t46);
      if (__cir_exc_active) {
        struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_int_* cast48 = (struct std___List_node_int_*)r47;
      __retval28 = cast48;
      struct std___List_node_int_* t49 = __retval28;
      return t49;
    }
  unsigned long t50 = __n26;
  unsigned long c51 = 24;
  unsigned long b52 = t50 * c51;
  void* r53 = operator_new(b52);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___List_node_int_* cast54 = (struct std___List_node_int_*)r53;
  __retval28 = cast54;
  struct std___List_node_int_* t55 = __retval28;
  return t55;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v56, unsigned long v57) {
bb58:
  struct std__allocator_std___List_node_int__* this59;
  unsigned long __n60;
  struct std___List_node_int_* __retval61;
  this59 = v56;
  __n60 = v57;
  struct std__allocator_std___List_node_int__* t62 = this59;
    _Bool r63 = std____is_constant_evaluated();
    if (r63) {
        unsigned long t64 = __n60;
        unsigned long c65 = 24;
        unsigned long ovr66;
        _Bool ovf67 = __builtin_mul_overflow(t64, c65, &ovr66);
        __n60 = ovr66;
        if (ovf67) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t68 = __n60;
      void* r69 = operator_new(t68);
      if (__cir_exc_active) {
        struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_int_* cast70 = (struct std___List_node_int_*)r69;
      __retval61 = cast70;
      struct std___List_node_int_* t71 = __retval61;
      return t71;
    }
  struct std____new_allocator_std___List_node_int__* base72 = (struct std____new_allocator_std___List_node_int__*)((char *)t62 + 0);
  unsigned long t73 = __n60;
  void* c74 = ((void*)0);
  struct std___List_node_int_* r75 = std____new_allocator_std___List_node_int_____allocate(base72, t73, c74);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval61 = r75;
  struct std___List_node_int_* t76 = __retval61;
  return t76;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v77, unsigned long v78) {
bb79:
  struct std__allocator_std___List_node_int__* __a80;
  unsigned long __n81;
  struct std___List_node_int_* __retval82;
  __a80 = v77;
  __n81 = v78;
  struct std__allocator_std___List_node_int__* t83 = __a80;
  unsigned long t84 = __n81;
  struct std___List_node_int_* r85 = std__allocator_std___List_node_int_____allocate(t83, t84);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval82 = r85;
  struct std___List_node_int_* t86 = __retval82;
  return t86;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v87, struct std__allocator_std___List_node_int__* v88, struct std___List_node_int_* v89) {
bb90:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this91;
  struct std__allocator_std___List_node_int__* __a92;
  struct std___List_node_int_* __ptr93;
  this91 = v87;
  __a92 = v88;
  __ptr93 = v89;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t94 = this91;
  struct std__allocator_std___List_node_int__* t95 = __a92;
  t94->_M_alloc = t95;
  struct std___List_node_int_* t96 = __ptr93;
  t94->_M_ptr = t96;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v97) {
bb98:
  struct std__allocator_std___List_node_int__* __a99;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval100;
  __a99 = v97;
  struct std__allocator_std___List_node_int__* t101 = __a99;
  struct std__allocator_std___List_node_int__* t102 = __a99;
  unsigned long c103 = 1;
  struct std___List_node_int_* r104 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t102, c103);
  if (__cir_exc_active) {
    struct std____allocated_ptr_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval100, t101, r104);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t105 = __retval100;
  return t105;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v106, struct std____allocated_ptr_std__allocator_std___List_node_int___* v107) {
bb108:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this109;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr110;
  this109 = v106;
  __ptr110 = v107;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t111 = this109;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base112 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t111 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t113 = __ptr110;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base112, t113);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base114 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t111 + 0);
    struct std___List_node_int_* r115 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base114);
    if (__cir_exc_active) {
      {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base116 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t111 + 0);
        std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base116);
      }
      return;
    }
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v117) {
bb118:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this119;
  this119 = v117;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t120 = this119;
    struct std___List_node_int_* t121 = t120->_M_ptr;
    struct std___List_node_int_* c122 = ((void*)0);
    _Bool c123 = ((t121 != c122)) ? 1 : 0;
    if (c123) {
      struct std__allocator_std___List_node_int__* t124 = t120->_M_alloc;
      struct std___List_node_int_* t125 = t120->_M_ptr;
      unsigned long c126 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t124, t125, c126);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v127) {
bb128:
  struct std__allocator_std___List_node_int__* __a129;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval130;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0131;
  __a129 = v127;
  struct std__allocator_std___List_node_int__* t132 = __a129;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r133 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t132);
  if (__cir_exc_active) {
    struct std____allocated_obj_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0131 = r133;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval130, &ref_tmp0131);
    if (__cir_exc_active) {
      {
        std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0131);
      }
      struct std____allocated_obj_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0131);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t134 = __retval130;
  return t134;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v135, int* v136) {
bb137:
  int* __location138;
  int* __args139;
  int* __retval140;
  void* __loc141;
  __location138 = v135;
  __args139 = v136;
  int* t142 = __location138;
  void* cast143 = (void*)t142;
  __loc141 = cast143;
    void* t144 = __loc141;
    int* cast145 = (int*)t144;
    int* t146 = __args139;
    int t147 = *t146;
    *cast145 = t147;
    __retval140 = cast145;
    int* t148 = __retval140;
    return t148;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* v149, int* v150, int* v151) {
bb152:
  struct std__allocator_std___List_node_int__* __a153;
  int* __p154;
  int* __args155;
  __a153 = v149;
  __p154 = v150;
  __args155 = v151;
  int* t156 = __p154;
  int* t157 = __args155;
  int* r158 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t156, t157);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v159) {
bb160:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this161;
  struct std___List_node_int_* __retval162;
  this161 = v159;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t163 = this161;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base164 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t163 + 0);
  struct std___List_node_int_* r165 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base164);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval162 = r165;
  struct std___List_node_int_* t166 = __retval162;
  return t166;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v167, void** v168) {
bb169:
  struct std___List_node_int_** __obj170;
  void** __new_val171;
  struct std___List_node_int_* __retval172;
  struct std___List_node_int_* __old_val173;
  __obj170 = v167;
  __new_val171 = v168;
  struct std___List_node_int_** t174 = __obj170;
  struct std___List_node_int_* t175 = *t174;
  __old_val173 = t175;
  void** t176 = __new_val171;
  struct std___List_node_int_* c177 = ((void*)0);
  struct std___List_node_int_** t178 = __obj170;
  *t178 = c177;
  struct std___List_node_int_* t179 = __old_val173;
  __retval172 = t179;
  struct std___List_node_int_* t180 = __retval172;
  return t180;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v181) {
bb182:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this183;
  struct std___List_node_int_* __retval184;
  void* ref_tmp0185;
  this183 = v181;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t186 = this183;
  void* c187 = ((void*)0);
  ref_tmp0185 = c187;
  struct std___List_node_int_* r188 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t186->_M_ptr, &ref_tmp0185);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval184 = r188;
  struct std___List_node_int_* t189 = __retval184;
  return t189;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v190) {
bb191:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this192;
  this192 = v190;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t193 = this192;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base194 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t193 + 0);
      _Bool r195 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base194);
      if (r195) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base196 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t193 + 0);
        struct std___List_node_int_* r197 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base196);
        if (__cir_exc_active) {
          {
            struct std____allocated_ptr_std__allocator_std___List_node_int___* base198 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t193 + 0);
            std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base198);
          }
          return;
        }
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base199 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t193 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base199);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* v200, int* v201) {
bb202:
  struct std____cxx11__list_int__std__allocator_int__* this203;
  int* __args204;
  struct std___List_node_int_* __retval205;
  struct std__allocator_std___List_node_int__* __alloc206;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard207;
  this203 = v200;
  __args204 = v201;
  struct std____cxx11__list_int__std__allocator_int__* t208 = this203;
  struct std____cxx11___List_base_int__std__allocator_int__* base209 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t208 + 0);
  struct std__allocator_std___List_node_int__* r210 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base209);
  __alloc206 = r210;
  struct std__allocator_std___List_node_int__* t211 = __alloc206;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r212 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t211);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __guard207 = r212;
    struct std__allocator_std___List_node_int__* t213 = __alloc206;
    struct std___List_node_int_* r214 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard207);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard207);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* r215 = std___List_node_int____M_valptr(r214);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard207);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* t216 = __args204;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(t213, r215, t216);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base217 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard207) + 0);
    struct std___List_node_int_* r218 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base217);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard207);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    __retval205 = r218;
    struct std___List_node_int_* t219 = __retval205;
    struct std___List_node_int_* ret_val220 = t219;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard207);
    }
    return ret_val220;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v221, unsigned long v222) {
bb223:
  struct std____cxx11___List_base_int__std__allocator_int__* this224;
  unsigned long __n225;
  this224 = v221;
  __n225 = v222;
  struct std____cxx11___List_base_int__std__allocator_int__* t226 = this224;
  unsigned long t227 = __n225;
  struct std____detail___List_size* base228 = (struct std____detail___List_size*)((char *)&(t226->_M_impl._M_node) + 16);
  unsigned long t229 = base228->_M_size;
  unsigned long b230 = t229 + t227;
  base228->_M_size = b230;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* v231, struct std___List_iterator_int_ v232, int* v233) {
bb234:
  struct std____cxx11__list_int__std__allocator_int__* this235;
  struct std___List_iterator_int_ __position236;
  int* __args237;
  struct std___List_node_int_* __tmp238;
  this235 = v231;
  __position236 = v232;
  __args237 = v233;
  struct std____cxx11__list_int__std__allocator_int__* t239 = this235;
  int* t240 = __args237;
  struct std___List_node_int_* r241 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(t239, t240);
  if (__cir_exc_active) {
    return;
  }
  __tmp238 = r241;
  struct std___List_node_int_* t242 = __tmp238;
  struct std____detail___List_node_base* base243 = (struct std____detail___List_node_base*)((char *)t242 + 0);
  struct std____detail___List_node_base* t244 = __position236._M_node;
  std____detail___List_node_base___M_hook(base243, t244);
  struct std____cxx11___List_base_int__std__allocator_int__* base245 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t239 + 0);
  unsigned long c246 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base245, c246);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE10push_frontEOi
void std____cxx11__list_int__std__allocator_int_____push_front(struct std____cxx11__list_int__std__allocator_int__* v247, int* v248) {
bb249:
  struct std____cxx11__list_int__std__allocator_int__* this250;
  int* __x251;
  struct std___List_iterator_int_ agg_tmp0252;
  this250 = v247;
  __x251 = v248;
  struct std____cxx11__list_int__std__allocator_int__* t253 = this250;
  struct std___List_iterator_int_ r254 = std____cxx11__list_int__std__allocator_int_____begin(t253);
  agg_tmp0252 = r254;
  int* t255 = __x251;
  struct std___List_iterator_int_ t256 = agg_tmp0252;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_(t253, t256, t255);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backEOi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v257, int* v258) {
bb259:
  struct std____cxx11__list_int__std__allocator_int__* this260;
  int* __x261;
  struct std___List_iterator_int_ agg_tmp0262;
  this260 = v257;
  __x261 = v258;
  struct std____cxx11__list_int__std__allocator_int__* t263 = this260;
  struct std___List_iterator_int_ r264 = std____cxx11__list_int__std__allocator_int_____end(t263);
  agg_tmp0262 = r264;
  int* t265 = __x261;
  struct std___List_iterator_int_ t266 = agg_tmp0262;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_(t263, t266, t265);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v267, int v268) {
bb269:
  int __a270;
  int __b271;
  int __retval272;
  __a270 = v267;
  __b271 = v268;
  int t273 = __a270;
  int t274 = __b271;
  int b275 = t273 | t274;
  __retval272 = b275;
  int t276 = __retval272;
  return t276;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v277) {
bb278:
  struct std__basic_ios_char__std__char_traits_char__* this279;
  int __retval280;
  this279 = v277;
  struct std__basic_ios_char__std__char_traits_char__* t281 = this279;
  struct std__ios_base* base282 = (struct std__ios_base*)((char *)t281 + 0);
  int t283 = base282->_M_streambuf_state;
  __retval280 = t283;
  int t284 = __retval280;
  return t284;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v285, int v286) {
bb287:
  struct std__basic_ios_char__std__char_traits_char__* this288;
  int __state289;
  this288 = v285;
  __state289 = v286;
  struct std__basic_ios_char__std__char_traits_char__* t290 = this288;
  int r291 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t290);
  if (__cir_exc_active) {
    return;
  }
  int t292 = __state289;
  int r293 = std__operator_(r291, t292);
  std__basic_ios_char__std__char_traits_char_____clear(t290, r293);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v294, char* v295) {
bb296:
  char* __c1297;
  char* __c2298;
  _Bool __retval299;
  __c1297 = v294;
  __c2298 = v295;
  char* t300 = __c1297;
  char t301 = *t300;
  int cast302 = (int)t301;
  char* t303 = __c2298;
  char t304 = *t303;
  int cast305 = (int)t304;
  _Bool c306 = ((cast302 == cast305)) ? 1 : 0;
  __retval299 = c306;
  _Bool t307 = __retval299;
  return t307;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v308) {
bb309:
  char* __p310;
  unsigned long __retval311;
  unsigned long __i312;
  __p310 = v308;
  unsigned long c313 = 0;
  __i312 = c313;
    char ref_tmp0314;
    while (1) {
      unsigned long t315 = __i312;
      char* t316 = __p310;
      char* ptr317 = &(t316)[t315];
      char c318 = 0;
      ref_tmp0314 = c318;
      _Bool r319 = __gnu_cxx__char_traits_char___eq(ptr317, &ref_tmp0314);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u320 = !r319;
      if (!u320) break;
      unsigned long t321 = __i312;
      unsigned long u322 = t321 + 1;
      __i312 = u322;
    }
  unsigned long t323 = __i312;
  __retval311 = t323;
  unsigned long t324 = __retval311;
  return t324;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v325) {
bb326:
  char* __s327;
  unsigned long __retval328;
  __s327 = v325;
    _Bool r329 = std____is_constant_evaluated();
    if (r329) {
      char* t330 = __s327;
      unsigned long r331 = __gnu_cxx__char_traits_char___length(t330);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval328 = r331;
      unsigned long t332 = __retval328;
      return t332;
    }
  char* t333 = __s327;
  unsigned long r334 = strlen(t333);
  __retval328 = r334;
  unsigned long t335 = __retval328;
  return t335;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v336, char* v337) {
bb338:
  struct std__basic_ostream_char__std__char_traits_char__* __out339;
  char* __s340;
  struct std__basic_ostream_char__std__char_traits_char__* __retval341;
  __out339 = v336;
  __s340 = v337;
    char* t342 = __s340;
    _Bool cast343 = (_Bool)t342;
    _Bool u344 = !cast343;
    if (u344) {
      struct std__basic_ostream_char__std__char_traits_char__* t345 = __out339;
      void** v346 = (void**)t345;
      void* v347 = *((void**)v346);
      unsigned char* cast348 = (unsigned char*)v347;
      long c349 = -24;
      unsigned char* ptr350 = &(cast348)[c349];
      long* cast351 = (long*)ptr350;
      long t352 = *cast351;
      unsigned char* cast353 = (unsigned char*)t345;
      unsigned char* ptr354 = &(cast353)[t352];
      struct std__basic_ostream_char__std__char_traits_char__* cast355 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr354;
      struct std__basic_ios_char__std__char_traits_char__* cast356 = (struct std__basic_ios_char__std__char_traits_char__*)cast355;
      int t357 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast356, t357);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t358 = __out339;
      char* t359 = __s340;
      char* t360 = __s340;
      unsigned long r361 = std__char_traits_char___length(t360);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast362 = (long)r361;
      struct std__basic_ostream_char__std__char_traits_char__* r363 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t358, t359, cast362);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t364 = __out339;
  __retval341 = t364;
  struct std__basic_ostream_char__std__char_traits_char__* t365 = __retval341;
  return t365;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v366) {
bb367:
  struct std____detail___List_node_base* this368;
  struct std____detail___List_node_base* __retval369;
  this368 = v366;
  struct std____detail___List_node_base* t370 = this368;
  __retval369 = t370;
  struct std____detail___List_node_base* t371 = __retval369;
  return t371;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v372) {
bb373:
  struct std____cxx11__list_int__std__allocator_int__* this374;
  _Bool __retval375;
  this374 = v372;
  struct std____cxx11__list_int__std__allocator_int__* t376 = this374;
  struct std____cxx11___List_base_int__std__allocator_int__* base377 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t376 + 0);
  struct std____detail___List_node_base* base378 = (struct std____detail___List_node_base*)((char *)&(base377->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t379 = base378->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base380 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t376 + 0);
  struct std____detail___List_node_base* base381 = (struct std____detail___List_node_base*)((char *)&(base380->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r382 = std____detail___List_node_base___M_base___const(base381);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c383 = ((t379 == r382)) ? 1 : 0;
  __retval375 = c383;
  _Bool t384 = __retval375;
  return t384;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSoPKc
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* v385, struct std__basic_ostream_char__std__char_traits_char__* v386, char* v387) {
bb388:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this389;
  struct std__basic_ostream_char__std__char_traits_char__* __s390;
  char* __c391;
  this389 = v385;
  __s390 = v386;
  __c391 = v387;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t392 = this389;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base393 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t392 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t394 = __s390;
  t392->_M_stream = t394;
  char* t395 = __c391;
  t392->_M_string = t395;
  return;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIicSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* v396, struct std__ostream_iterator_int__char__std__char_traits_char__ v397) {
bb398:
  struct std__ostream_iterator_int__char__std__char_traits_char__* unnamed399;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __res400;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval401;
  unnamed399 = v396;
  __res400 = v397;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval401, &__res400);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t402 = __retval401;
  return t402;
}

// function: _ZSteqRKSt20_List_const_iteratorIiES2_
_Bool std__operator___3(struct std___List_const_iterator_int_* v403, struct std___List_const_iterator_int_* v404) {
bb405:
  struct std___List_const_iterator_int_* __x406;
  struct std___List_const_iterator_int_* __y407;
  _Bool __retval408;
  __x406 = v403;
  __y407 = v404;
  struct std___List_const_iterator_int_* t409 = __x406;
  struct std____detail___List_node_base* t410 = t409->_M_node;
  struct std___List_const_iterator_int_* t411 = __y407;
  struct std____detail___List_node_base* t412 = t411->_M_node;
  _Bool c413 = ((t410 == t412)) ? 1 : 0;
  __retval408 = c413;
  _Bool t414 = __retval408;
  return t414;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v415) {
bb416:
  struct __gnu_cxx____aligned_membuf_int_* this417;
  void* __retval418;
  this417 = v415;
  struct __gnu_cxx____aligned_membuf_int_* t419 = this417;
  void* cast420 = (void*)&(t419->_M_storage);
  __retval418 = cast420;
  void* t421 = __retval418;
  return t421;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v422) {
bb423:
  struct __gnu_cxx____aligned_membuf_int_* this424;
  int* __retval425;
  this424 = v422;
  struct __gnu_cxx____aligned_membuf_int_* t426 = this424;
  void* r427 = __gnu_cxx____aligned_membuf_int____M_addr___const(t426);
  int* cast428 = (int*)r427;
  __retval425 = cast428;
  int* t429 = __retval425;
  return t429;
}

// function: _ZNKSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr___const(struct std___List_node_int_* v430) {
bb431:
  struct std___List_node_int_* this432;
  int* __retval433;
  this432 = v430;
  struct std___List_node_int_* t434 = this432;
  int* r435 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t434->_M_storage);
  __retval433 = r435;
  int* t436 = __retval433;
  return t436;
}

// function: _ZNKSt20_List_const_iteratorIiEdeEv
int* std___List_const_iterator_int___operator____const(struct std___List_const_iterator_int_* v437) {
bb438:
  struct std___List_const_iterator_int_* this439;
  int* __retval440;
  this439 = v437;
  struct std___List_const_iterator_int_* t441 = this439;
  struct std____detail___List_node_base* t442 = t441->_M_node;
  struct std___List_node_int_* derived443 = ((t442) ? (struct std___List_node_int_*)((char *)t442 - 0) : (struct std___List_node_int_*)0);
  int* r444 = std___List_node_int____M_valptr___const(derived443);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval440 = r444;
  int* t445 = __retval440;
  return t445;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEdeEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* v446) {
bb447:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this448;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval449;
  this448 = v446;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t450 = this448;
  __retval449 = t450;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t451 = __retval449;
  return t451;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEaSERKi
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* v452, int* v453) {
bb454:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this455;
  int* __value456;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval457;
  this455 = v452;
  __value456 = v453;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t458 = this455;
  struct std__basic_ostream_char__std__char_traits_char__* t459 = t458->_M_stream;
  int* t460 = __value456;
  int t461 = *t460;
  struct std__basic_ostream_char__std__char_traits_char__* r462 = std__ostream__operator__(t459, t461);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__* __cir_eh_ret = (struct std__ostream_iterator_int__char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
    char* t463 = t458->_M_string;
    _Bool cast464 = (_Bool)t463;
    if (cast464) {
      struct std__basic_ostream_char__std__char_traits_char__* t465 = t458->_M_stream;
      char* t466 = t458->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r467 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t465, t466);
      if (__cir_exc_active) {
        struct std__ostream_iterator_int__char__std__char_traits_char__* __cir_eh_ret = (struct std__ostream_iterator_int__char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  __retval457 = t458;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t468 = __retval457;
  return t468;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIicSt11char_traitsIcEESt20_List_const_iteratorIiEEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____std___List_const_iterator_int___(struct std__ostream_iterator_int__char__std__char_traits_char__* v469, struct std___List_const_iterator_int_* v470) {
bb471:
  struct std__ostream_iterator_int__char__std__char_traits_char__* __out472;
  struct std___List_const_iterator_int_* __in473;
  __out472 = v469;
  __in473 = v470;
    struct std___List_const_iterator_int_* t474 = __in473;
    int* r475 = std___List_const_iterator_int___operator____const(t474);
    struct std__ostream_iterator_int__char__std__char_traits_char__* t476 = __out472;
    struct std__ostream_iterator_int__char__std__char_traits_char__* r477 = std__ostream_iterator_int__char__std__char_traits_char_____operator__2(t476);
    struct std__ostream_iterator_int__char__std__char_traits_char__* r478 = std__ostream_iterator_int__char__std__char_traits_char_____operator_(r477, r475);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEppEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* v479) {
bb480:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this481;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval482;
  this481 = v479;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t483 = this481;
  __retval482 = t483;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t484 = __retval482;
  return t484;
}

// function: _ZNSt20_List_const_iteratorIiEppEv
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* v485) {
bb486:
  struct std___List_const_iterator_int_* this487;
  struct std___List_const_iterator_int_* __retval488;
  this487 = v485;
  struct std___List_const_iterator_int_* t489 = this487;
  struct std____detail___List_node_base* t490 = t489->_M_node;
  struct std____detail___List_node_base* t491 = t490->_M_next;
  t489->_M_node = t491;
  __retval488 = t489;
  struct std___List_const_iterator_int_* t492 = __retval488;
  return t492;
}

// function: _ZSt14__copy_move_a2ILb0ESt20_List_const_iteratorIiES1_St16ostream_iteratorIicSt11char_traitsIcEEET2_T0_T1_S6_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__std___List_const_iterator_int___std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(struct std___List_const_iterator_int_ v493, struct std___List_const_iterator_int_ v494, struct std__ostream_iterator_int__char__std__char_traits_char__ v495) {
bb496:
  struct std___List_const_iterator_int_ __first497;
  struct std___List_const_iterator_int_ __last498;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result499;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval500;
  __first497 = v493;
  __last498 = v494;
  __result499 = v495;
    while (1) {
      _Bool r502 = std__operator___3(&__first497, &__last498);
      _Bool u503 = !r502;
      if (!u503) break;
      void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____std___List_const_iterator_int___(&__result499, &__first497);
      if (__cir_exc_active) {
        struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    for_step501: ;
      struct std__ostream_iterator_int__char__std__char_traits_char__* r504 = std__ostream_iterator_int__char__std__char_traits_char_____operator__(&__result499);
      struct std___List_const_iterator_int_* r505 = std___List_const_iterator_int___operator__(&__first497);
    }
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval500, &__result499);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t506 = __retval500;
  return t506;
}

// function: _ZSt14__copy_move_a1ILb0ESt20_List_const_iteratorIiESt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S7_S6_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(struct std___List_const_iterator_int_ v507, struct std___List_const_iterator_int_ v508, struct std__ostream_iterator_int__char__std__char_traits_char__ v509) {
bb510:
  struct std___List_const_iterator_int_ __first511;
  struct std___List_const_iterator_int_ __last512;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result513;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval514;
  struct std___List_const_iterator_int_ agg_tmp0515;
  struct std___List_const_iterator_int_ agg_tmp1516;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2517;
  __first511 = v507;
  __last512 = v508;
  __result513 = v509;
  agg_tmp0515 = __first511; // copy
  agg_tmp1516 = __last512; // copy
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2517, &__result513);
  struct std___List_const_iterator_int_ t518 = agg_tmp0515;
  struct std___List_const_iterator_int_ t519 = agg_tmp1516;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t520 = agg_tmp2517;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r521 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__std___List_const_iterator_int___std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(t518, t519, t520);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval514 = r521;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t522 = __retval514;
  return t522;
}

// function: _ZSt12__niter_baseISt20_List_const_iteratorIiEET_S2_
struct std___List_const_iterator_int_ std___List_const_iterator_int__std____niter_base_std___List_const_iterator_int___(struct std___List_const_iterator_int_ v523) {
bb524:
  struct std___List_const_iterator_int_ __it525;
  struct std___List_const_iterator_int_ __retval526;
  __it525 = v523;
  __retval526 = __it525; // copy
  struct std___List_const_iterator_int_ t527 = __retval526;
  return t527;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIicSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ v528) {
bb529:
  struct std__ostream_iterator_int__char__std__char_traits_char__ __it530;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval531;
  __it530 = v528;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval531, &__it530);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t532 = __retval531;
  return t532;
}

// function: _ZSt13__copy_move_aILb0ESt20_List_const_iteratorIiESt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S7_S6_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(struct std___List_const_iterator_int_ v533, struct std___List_const_iterator_int_ v534, struct std__ostream_iterator_int__char__std__char_traits_char__ v535) {
bb536:
  struct std___List_const_iterator_int_ __first537;
  struct std___List_const_iterator_int_ __last538;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result539;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval540;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0541;
  struct std___List_const_iterator_int_ agg_tmp1542;
  struct std___List_const_iterator_int_ agg_tmp2543;
  struct std___List_const_iterator_int_ agg_tmp3544;
  struct std___List_const_iterator_int_ agg_tmp4545;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp5546;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp6547;
  __first537 = v533;
  __last538 = v534;
  __result539 = v535;
  agg_tmp2543 = __first537; // copy
  struct std___List_const_iterator_int_ t548 = agg_tmp2543;
  struct std___List_const_iterator_int_ r549 = std___List_const_iterator_int__std____niter_base_std___List_const_iterator_int___(t548);
  agg_tmp1542 = r549;
  agg_tmp4545 = __last538; // copy
  struct std___List_const_iterator_int_ t550 = agg_tmp4545;
  struct std___List_const_iterator_int_ r551 = std___List_const_iterator_int__std____niter_base_std___List_const_iterator_int___(t550);
  agg_tmp3544 = r551;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp6547, &__result539);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t552 = agg_tmp6547;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r553 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(t552);
  agg_tmp5546 = r553;
  struct std___List_const_iterator_int_ t554 = agg_tmp1542;
  struct std___List_const_iterator_int_ t555 = agg_tmp3544;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t556 = agg_tmp5546;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r557 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(t554, t555, t556);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp0541 = r557;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t558 = agg_tmp0541;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r559 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(&__result539, t558);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval540 = r559;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t560 = __retval540;
  return t560;
}

// function: _ZSt12__miter_baseISt20_List_const_iteratorIiEET_S2_
struct std___List_const_iterator_int_ std___List_const_iterator_int__std____miter_base_std___List_const_iterator_int___(struct std___List_const_iterator_int_ v561) {
bb562:
  struct std___List_const_iterator_int_ __it563;
  struct std___List_const_iterator_int_ __retval564;
  __it563 = v561;
  __retval564 = __it563; // copy
  struct std___List_const_iterator_int_ t565 = __retval564;
  return t565;
}

// function: _ZSt4copyISt20_List_const_iteratorIiESt16ostream_iteratorIicSt11char_traitsIcEEET0_T_S7_S6_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy_std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(struct std___List_const_iterator_int_ v566, struct std___List_const_iterator_int_ v567, struct std__ostream_iterator_int__char__std__char_traits_char__ v568) {
bb569:
  struct std___List_const_iterator_int_ __first570;
  struct std___List_const_iterator_int_ __last571;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result572;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval573;
  struct std___List_const_iterator_int_ agg_tmp0574;
  struct std___List_const_iterator_int_ agg_tmp1575;
  struct std___List_const_iterator_int_ agg_tmp2576;
  struct std___List_const_iterator_int_ agg_tmp3577;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4578;
  __first570 = v566;
  __last571 = v567;
  __result572 = v568;
  agg_tmp1575 = __first570; // copy
  struct std___List_const_iterator_int_ t579 = agg_tmp1575;
  struct std___List_const_iterator_int_ r580 = std___List_const_iterator_int__std____miter_base_std___List_const_iterator_int___(t579);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp0574 = r580;
  agg_tmp3577 = __last571; // copy
  struct std___List_const_iterator_int_ t581 = agg_tmp3577;
  struct std___List_const_iterator_int_ r582 = std___List_const_iterator_int__std____miter_base_std___List_const_iterator_int___(t581);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp2576 = r582;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4578, &__result572);
  struct std___List_const_iterator_int_ t583 = agg_tmp0574;
  struct std___List_const_iterator_int_ t584 = agg_tmp2576;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t585 = agg_tmp4578;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r586 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(t583, t584, t585);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval573 = r586;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t587 = __retval573;
  return t587;
}

// function: _ZNSt20_List_const_iteratorIiEC2EPKNSt8__detail15_List_node_baseE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v588, struct std____detail___List_node_base* v589) {
bb590:
  struct std___List_const_iterator_int_* this591;
  struct std____detail___List_node_base* __x592;
  this591 = v588;
  __x592 = v589;
  struct std___List_const_iterator_int_* t593 = this591;
  struct std____detail___List_node_base* t594 = __x592;
  t593->_M_node = t594;
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5beginEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* v595) {
bb596:
  struct std____cxx11__list_int__std__allocator_int__* this597;
  struct std___List_const_iterator_int_ __retval598;
  this597 = v595;
  struct std____cxx11__list_int__std__allocator_int__* t599 = this597;
  struct std____cxx11___List_base_int__std__allocator_int__* base600 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t599 + 0);
  struct std____detail___List_node_base* base601 = (struct std____detail___List_node_base*)((char *)&(base600->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t602 = base601->_M_next;
  std___List_const_iterator_int____List_const_iterator(&__retval598, t602);
  struct std___List_const_iterator_int_ t603 = __retval598;
  return t603;
}

// function: _ZNKSt7__cxx114listIiSaIiEE3endEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* v604) {
bb605:
  struct std____cxx11__list_int__std__allocator_int__* this606;
  struct std___List_const_iterator_int_ __retval607;
  this606 = v604;
  struct std____cxx11__list_int__std__allocator_int__* t608 = this606;
  struct std____cxx11___List_base_int__std__allocator_int__* base609 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t608 + 0);
  struct std____detail___List_node_base* base610 = (struct std____detail___List_node_base*)((char *)&(base609->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r611 = std____detail___List_node_base___M_base___const(base610);
  if (__cir_exc_active) {
    struct std___List_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_const_iterator_int____List_const_iterator(&__retval607, r611);
  struct std___List_const_iterator_int_ t612 = __retval607;
  return t612;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* v613, struct std__ostream_iterator_int__char__std__char_traits_char__* v614) {
bb615:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this616;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __obj617;
  this616 = v613;
  __obj617 = v614;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t618 = this616;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base619 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t618 + 0);
  struct std__ostream_iterator_int__char__std__char_traits_char__* t620 = __obj617;
  struct std__basic_ostream_char__std__char_traits_char__* t621 = t620->_M_stream;
  t618->_M_stream = t621;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t622 = __obj617;
  char* t623 = t622->_M_string;
  t618->_M_string = t623;
  return;
}

// function: _Z9printListIiEvRKNSt7__cxx114listIT_SaIS2_EEE
void void_printList_int_(struct std____cxx11__list_int__std__allocator_int__* v624) {
bb625:
  struct std____cxx11__list_int__std__allocator_int__* listRef626;
  listRef626 = v624;
    struct std____cxx11__list_int__std__allocator_int__* t627 = listRef626;
    _Bool r628 = std____cxx11__list_int__std__allocator_int_____empty___const(t627);
    if (r628) {
      char* cast629 = (char*)&(_str_14);
      struct std__basic_ostream_char__std__char_traits_char__* r630 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast629);
      if (__cir_exc_active) {
        return;
      }
    } else {
      struct std__ostream_iterator_int__char__std__char_traits_char__ output631;
      struct std___List_const_iterator_int_ agg_tmp0632;
      struct std___List_const_iterator_int_ agg_tmp1633;
      struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2634;
      struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3635;
      char* cast636 = (char*)&(_str_15);
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output631, &_ZSt4cout, cast636);
      struct std____cxx11__list_int__std__allocator_int__* t637 = listRef626;
      struct std___List_const_iterator_int_ r638 = std____cxx11__list_int__std__allocator_int_____begin___const(t637);
      agg_tmp0632 = r638;
      struct std____cxx11__list_int__std__allocator_int__* t639 = listRef626;
      struct std___List_const_iterator_int_ r640 = std____cxx11__list_int__std__allocator_int_____end___const(t639);
      agg_tmp1633 = r640;
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2634, &output631);
      struct std___List_const_iterator_int_ t641 = agg_tmp0632;
      struct std___List_const_iterator_int_ t642 = agg_tmp1633;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t643 = agg_tmp2634;
      struct std__ostream_iterator_int__char__std__char_traits_char__ r644 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_std___List_const_iterator_int___std__ostream_iterator_int__char__std__char_traits_char_____(t641, t642, t643);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp3635 = r644;
    }
  return;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator___2(struct std___List_iterator_int_* v645, struct std___List_iterator_int_* v646) {
bb647:
  struct std___List_iterator_int_* __x648;
  struct std___List_iterator_int_* __y649;
  _Bool __retval650;
  __x648 = v645;
  __y649 = v646;
  struct std___List_iterator_int_* t651 = __x648;
  struct std____detail___List_node_base* t652 = t651->_M_node;
  struct std___List_iterator_int_* t653 = __y649;
  struct std____detail___List_node_base* t654 = t653->_M_node;
  _Bool c655 = ((t652 == t654)) ? 1 : 0;
  __retval650 = c655;
  _Bool t656 = __retval650;
  return t656;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v657) {
bb658:
  struct std___List_iterator_int_* this659;
  struct std___List_iterator_int_* __retval660;
  this659 = v657;
  struct std___List_iterator_int_* t661 = this659;
  struct std____detail___List_node_base* t662 = t661->_M_node;
  struct std____detail___List_node_base* t663 = t662->_M_next;
  t661->_M_node = t663;
  __retval660 = t661;
  struct std___List_iterator_int_* t664 = __retval660;
  return t664;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEEC2Ev
void std____list___Scratch_list_std____detail___List_node_base____Scratch_list(struct std____list___Scratch_list_std____detail___List_node_base_* v665) {
bb666:
  struct std____list___Scratch_list_std____detail___List_node_base_* this667;
  this667 = v665;
  struct std____list___Scratch_list_std____detail___List_node_base_* t668 = this667;
  struct std____detail___List_node_base* base669 = (struct std____detail___List_node_base*)((char *)t668 + 0);
  struct std____detail___List_node_base* base670 = (struct std____detail___List_node_base*)((char *)t668 + 0);
  struct std____detail___List_node_base* r671 = std____detail___List_node_base___M_base(base670);
  if (__cir_exc_active) {
    return;
  }
  struct std____detail___List_node_base* base672 = (struct std____detail___List_node_base*)((char *)t668 + 0);
  base672->_M_prev = r671;
  struct std____detail___List_node_base* base673 = (struct std____detail___List_node_base*)((char *)t668 + 0);
  base673->_M_next = r671;
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE11_M_take_oneEPS2_
void std____list___Scratch_list_std____detail___List_node_base____M_take_one(struct std____list___Scratch_list_std____detail___List_node_base_* v674, struct std____detail___List_node_base* v675) {
bb676:
  struct std____list___Scratch_list_std____detail___List_node_base_* this677;
  struct std____detail___List_node_base* __i678;
  this677 = v674;
  __i678 = v675;
  struct std____list___Scratch_list_std____detail___List_node_base_* t679 = this677;
  struct std____detail___List_node_base* base680 = (struct std____detail___List_node_base*)((char *)t679 + 0);
  struct std____detail___List_node_base* t681 = __i678;
  struct std____detail___List_node_base* t682 = __i678;
  struct std____detail___List_node_base* t683 = t682->_M_next;
  std____detail___List_node_base___M_transfer(base680, t681, t683);
  return;
}

// function: _ZNKSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE5emptyEv
_Bool std____list___Scratch_list_std____detail___List_node_base___empty___const(struct std____list___Scratch_list_std____detail___List_node_base_* v684) {
bb685:
  struct std____list___Scratch_list_std____detail___List_node_base_* this686;
  _Bool __retval687;
  this686 = v684;
  struct std____list___Scratch_list_std____detail___List_node_base_* t688 = this686;
  struct std____detail___List_node_base* base689 = (struct std____detail___List_node_base*)((char *)t688 + 0);
  struct std____detail___List_node_base* t690 = base689->_M_next;
  struct std____detail___List_node_base* base691 = (struct std____detail___List_node_base*)((char *)t688 + 0);
  struct std____detail___List_node_base* r692 = std____detail___List_node_base___M_base___const(base691);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c693 = ((t690 == r692)) ? 1 : 0;
  __retval687 = c693;
  _Bool t694 = __retval687;
  return t694;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v695, struct std____detail___List_node_base* v696) {
bb697:
  struct std___List_iterator_int_* this698;
  struct std____detail___List_node_base* __x699;
  this698 = v695;
  __x699 = v696;
  struct std___List_iterator_int_* t700 = this698;
  struct std____detail___List_node_base* t701 = __x699;
  t700->_M_node = t701;
  return;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v702) {
bb703:
  struct std___List_iterator_int_* this704;
  int* __retval705;
  this704 = v702;
  struct std___List_iterator_int_* t706 = this704;
  struct std____detail___List_node_base* t707 = t706->_M_node;
  struct std___List_node_int_* derived708 = ((t707) ? (struct std___List_node_int_*)((char *)t707 - 0) : (struct std___List_node_int_*)0);
  int* r709 = std___List_node_int____M_valptr(derived708);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval705 = r709;
  int* t710 = __retval705;
  return t710;
}

// function: _ZNKSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE8_Ptr_cmpISt14_List_iteratorIiEvEclEPS2_S8_
_Bool std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_* v711, struct std____detail___List_node_base* v712, struct std____detail___List_node_base* v713) {
bb714:
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_* this715;
  struct std____detail___List_node_base* __lhs716;
  struct std____detail___List_node_base* __rhs717;
  _Bool __retval718;
  struct std___List_iterator_int_ ref_tmp0719;
  struct std___List_iterator_int_ ref_tmp1720;
  this715 = v711;
  __lhs716 = v712;
  __rhs717 = v713;
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_* t721 = this715;
  struct std____detail___List_node_base* t722 = __lhs716;
  std___List_iterator_int____List_iterator(&ref_tmp0719, t722);
  int* r723 = std___List_iterator_int___operator____const(&ref_tmp0719);
  int t724 = *r723;
  struct std____detail___List_node_base* t725 = __rhs717;
  std___List_iterator_int____List_iterator(&ref_tmp1720, t725);
  int* r726 = std___List_iterator_int___operator____const(&ref_tmp1720);
  int t727 = *r726;
  _Bool c728 = ((t724 < t727)) ? 1 : 0;
  __retval718 = c728;
  _Bool t729 = __retval718;
  return t729;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE5mergeINS3_8_Ptr_cmpISt14_List_iteratorIiEvEEEEvRS2_T_
void void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___(struct std____list___Scratch_list_std____detail___List_node_base_* v730, struct std____detail___List_node_base* v731, struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ v732) {
bb733:
  struct std____list___Scratch_list_std____detail___List_node_base_* this734;
  struct std____detail___List_node_base* __x735;
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ __comp736;
  struct std____detail___List_node_base* __first1737;
  struct std____detail___List_node_base* __last1738;
  struct std____detail___List_node_base* __first2739;
  struct std____detail___List_node_base* __last2740;
  this734 = v730;
  __x735 = v731;
  __comp736 = v732;
  struct std____list___Scratch_list_std____detail___List_node_base_* t741 = this734;
  struct std____detail___List_node_base* base742 = (struct std____detail___List_node_base*)((char *)t741 + 0);
  struct std____detail___List_node_base* t743 = base742->_M_next;
  __first1737 = t743;
  struct std____detail___List_node_base* base744 = (struct std____detail___List_node_base*)((char *)t741 + 0);
  struct std____detail___List_node_base* r745 = std____detail___List_node_base___M_base(base744);
  if (__cir_exc_active) {
    return;
  }
  __last1738 = r745;
  struct std____detail___List_node_base* t746 = __x735;
  struct std____detail___List_node_base* t747 = t746->_M_next;
  __first2739 = t747;
  struct std____detail___List_node_base* t748 = __x735;
  struct std____detail___List_node_base* r749 = std____detail___List_node_base___M_base(t748);
  if (__cir_exc_active) {
    return;
  }
  __last2740 = r749;
    while (1) {
      struct std____detail___List_node_base* t750 = __first1737;
      struct std____detail___List_node_base* t751 = __last1738;
      _Bool c752 = ((t750 != t751)) ? 1 : 0;
      _Bool ternary753;
      if (c752) {
        struct std____detail___List_node_base* t754 = __first2739;
        struct std____detail___List_node_base* t755 = __last2740;
        _Bool c756 = ((t754 != t755)) ? 1 : 0;
        ternary753 = (_Bool)c756;
      } else {
        _Bool c757 = 0;
        ternary753 = (_Bool)c757;
      }
      if (!ternary753) break;
          struct std____detail___List_node_base* t758 = __first2739;
          struct std____detail___List_node_base* t759 = __first1737;
          _Bool r760 = std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(&__comp736, t758, t759);
          if (__cir_exc_active) {
            return;
          }
          if (r760) {
            struct std____detail___List_node_base* __next761;
            struct std____detail___List_node_base* t762 = __first2739;
            struct std____detail___List_node_base* t763 = t762->_M_next;
            __next761 = t763;
            struct std____detail___List_node_base* t764 = __first1737;
            struct std____detail___List_node_base* t765 = __first2739;
            struct std____detail___List_node_base* t766 = __next761;
            std____detail___List_node_base___M_transfer(t764, t765, t766);
            struct std____detail___List_node_base* t767 = __next761;
            __first2739 = t767;
          } else {
            struct std____detail___List_node_base* t768 = __first1737;
            struct std____detail___List_node_base* t769 = t768->_M_next;
            __first1737 = t769;
          }
    }
    struct std____detail___List_node_base* t770 = __first2739;
    struct std____detail___List_node_base* t771 = __last2740;
    _Bool c772 = ((t770 != t771)) ? 1 : 0;
    if (c772) {
      struct std____detail___List_node_base* base773 = (struct std____detail___List_node_base*)((char *)t741 + 0);
      struct std____detail___List_node_base* t774 = __first2739;
      struct std____detail___List_node_base* t775 = __last2740;
      std____detail___List_node_base___M_transfer(base773, t774, t775);
    }
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE4swapERS2_
void std____list___Scratch_list_std____detail___List_node_base___swap(struct std____list___Scratch_list_std____detail___List_node_base_* v776, struct std____detail___List_node_base* v777) {
bb778:
  struct std____list___Scratch_list_std____detail___List_node_base_* this779;
  struct std____detail___List_node_base* __l780;
  this779 = v776;
  __l780 = v777;
  struct std____list___Scratch_list_std____detail___List_node_base_* t781 = this779;
  struct std____detail___List_node_base* base782 = (struct std____detail___List_node_base*)((char *)t781 + 0);
  struct std____detail___List_node_base* t783 = __l780;
  std____detail___List_node_base__swap(base782, t783);
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE10_M_put_allEPS2_
void std____list___Scratch_list_std____detail___List_node_base____M_put_all(struct std____list___Scratch_list_std____detail___List_node_base_* v784, struct std____detail___List_node_base* v785) {
bb786:
  struct std____list___Scratch_list_std____detail___List_node_base_* this787;
  struct std____detail___List_node_base* __i788;
  this787 = v784;
  __i788 = v785;
  struct std____list___Scratch_list_std____detail___List_node_base_* t789 = this787;
    _Bool r790 = std____list___Scratch_list_std____detail___List_node_base___empty___const(t789);
    if (__cir_exc_active) {
      return;
    }
    _Bool u791 = !r790;
    if (u791) {
      struct std____detail___List_node_base* t792 = __i788;
      struct std____detail___List_node_base* base793 = (struct std____detail___List_node_base*)((char *)t789 + 0);
      struct std____detail___List_node_base* t794 = base793->_M_next;
      struct std____detail___List_node_base* base795 = (struct std____detail___List_node_base*)((char *)t789 + 0);
      struct std____detail___List_node_base* r796 = std____detail___List_node_base___M_base(base795);
      if (__cir_exc_active) {
        return;
      }
      std____detail___List_node_base___M_transfer(t792, t794, r796);
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE4sortEv
void std____cxx11__list_int__std__allocator_int_____sort(struct std____cxx11__list_int__std__allocator_int__* v797) {
bb798:
  struct std____cxx11__list_int__std__allocator_int__* this799;
  this799 = v797;
  struct std____cxx11__list_int__std__allocator_int__* t800 = this799;
    _Bool r801 = std____cxx11__list_int__std__allocator_int_____empty___const(t800);
    _Bool ternary802;
    if (r801) {
      _Bool c803 = 1;
      ternary802 = (_Bool)c803;
    } else {
      struct std___List_iterator_int_ ref_tmp0804;
      struct std___List_iterator_int_ ref_tmp1805;
      struct std___List_iterator_int_ r806 = std____cxx11__list_int__std__allocator_int_____begin(t800);
      ref_tmp0804 = r806;
      struct std___List_iterator_int_* r807 = std___List_iterator_int___operator___2(&ref_tmp0804);
      struct std___List_iterator_int_ r808 = std____cxx11__list_int__std__allocator_int_____end(t800);
      ref_tmp1805 = r808;
      _Bool r809 = std__operator___2(r807, &ref_tmp1805);
      ternary802 = (_Bool)r809;
    }
    if (ternary802) {
      return;
    }
    struct std____list___Scratch_list_std____detail___List_node_base_ __carry810;
    struct std____list___Scratch_list_std____detail___List_node_base_ __tmp811[64];
    struct std____list___Scratch_list_std____detail___List_node_base_* __fill812;
    struct std____list___Scratch_list_std____detail___List_node_base_* __counter813;
    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ __ptr_comp814;
    std____list___Scratch_list_std____detail___List_node_base____Scratch_list(&__carry810);
    if (__cir_exc_active) {
      return;
    }
    unsigned long c815 = 64;
    struct std____list___Scratch_list_std____detail___List_node_base_* cast816 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp811);
    struct std____list___Scratch_list_std____detail___List_node_base_* ptr817 = &(cast816)[c815];
    struct std____list___Scratch_list_std____detail___List_node_base_* __array_idx818;
    __array_idx818 = cast816;
    do {
      struct std____list___Scratch_list_std____detail___List_node_base_* t819 = __array_idx818;
      std____list___Scratch_list_std____detail___List_node_base____Scratch_list(t819);
      if (__cir_exc_active) {
        return;
      }
      unsigned long c820 = 1;
      struct std____list___Scratch_list_std____detail___List_node_base_* ptr821 = &(t819)[c820];
      __array_idx818 = ptr821;
      struct std____list___Scratch_list_std____detail___List_node_base_* t822 = __array_idx818;
      _Bool c823 = ((t822 != ptr817)) ? 1 : 0;
      if (!c823) break;
    } while (1);
    struct std____list___Scratch_list_std____detail___List_node_base_* cast824 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp811);
    __fill812 = cast824;
      struct std___List_iterator_int_ ref_tmp3825;
          do {
              struct std___List_iterator_int_ ref_tmp2827;
              struct std___List_iterator_int_ r828 = std____cxx11__list_int__std__allocator_int_____begin(t800);
              ref_tmp2827 = r828;
              struct std____detail___List_node_base* t829 = ref_tmp2827._M_node;
              std____list___Scratch_list_std____detail___List_node_base____M_take_one(&__carry810, t829);
              if (__cir_exc_active) {
                goto cir_try_dispatch826;
              }
                struct std____list___Scratch_list_std____detail___List_node_base_* cast830 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp811);
                __counter813 = cast830;
                while (1) {
                  struct std____list___Scratch_list_std____detail___List_node_base_* t832 = __counter813;
                  struct std____list___Scratch_list_std____detail___List_node_base_* t833 = __fill812;
                  _Bool c834 = ((t832 != t833)) ? 1 : 0;
                  _Bool ternary835;
                  if (c834) {
                    struct std____list___Scratch_list_std____detail___List_node_base_* t836 = __counter813;
                    _Bool r837 = std____list___Scratch_list_std____detail___List_node_base___empty___const(t836);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch826;
                    }
                    _Bool u838 = !r837;
                    ternary835 = (_Bool)u838;
                  } else {
                    _Bool c839 = 0;
                    ternary835 = (_Bool)c839;
                  }
                  if (!ternary835) break;
                    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ agg_tmp0840;
                    struct std____list___Scratch_list_std____detail___List_node_base_* t841 = __counter813;
                    struct std____detail___List_node_base* base842 = (struct std____detail___List_node_base*)((char *)&(__carry810) + 0);
                    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ t843 = agg_tmp0840;
                    void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___(t841, base842, t843);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch826;
                    }
                    struct std____list___Scratch_list_std____detail___List_node_base_* t844 = __counter813;
                    struct std____detail___List_node_base* base845 = (struct std____detail___List_node_base*)((char *)t844 + 0);
                    std____list___Scratch_list_std____detail___List_node_base___swap(&__carry810, base845);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch826;
                    }
                for_step831: ;
                  struct std____list___Scratch_list_std____detail___List_node_base_* t846 = __counter813;
                  int c847 = 1;
                  struct std____list___Scratch_list_std____detail___List_node_base_* ptr848 = &(t846)[c847];
                  __counter813 = ptr848;
                }
              struct std____list___Scratch_list_std____detail___List_node_base_* t849 = __counter813;
              struct std____detail___List_node_base* base850 = (struct std____detail___List_node_base*)((char *)t849 + 0);
              std____list___Scratch_list_std____detail___List_node_base___swap(&__carry810, base850);
              if (__cir_exc_active) {
                goto cir_try_dispatch826;
              }
                struct std____list___Scratch_list_std____detail___List_node_base_* t851 = __counter813;
                struct std____list___Scratch_list_std____detail___List_node_base_* t852 = __fill812;
                _Bool c853 = ((t851 == t852)) ? 1 : 0;
                if (c853) {
                  struct std____list___Scratch_list_std____detail___List_node_base_* t854 = __fill812;
                  int c855 = 1;
                  struct std____list___Scratch_list_std____detail___List_node_base_* ptr856 = &(t854)[c855];
                  __fill812 = ptr856;
                }
            _Bool r857 = std____cxx11__list_int__std__allocator_int_____empty___const(t800);
            _Bool u858 = !r857;
            if (!u858) break;
          } while (1);
          struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ agg_tmp1859;
          struct std____list___Scratch_list_std____detail___List_node_base_* cast860 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp811);
          int c861 = 1;
          struct std____list___Scratch_list_std____detail___List_node_base_* ptr862 = &(cast860)[c861];
          __counter813 = ptr862;
          while (1) {
            struct std____list___Scratch_list_std____detail___List_node_base_* t864 = __counter813;
            struct std____list___Scratch_list_std____detail___List_node_base_* t865 = __fill812;
            _Bool c866 = ((t864 != t865)) ? 1 : 0;
            if (!c866) break;
            struct std____list___Scratch_list_std____detail___List_node_base_* t867 = __counter813;
            long c868 = -1;
            struct std____list___Scratch_list_std____detail___List_node_base_* t869 = __counter813;
            struct std____list___Scratch_list_std____detail___List_node_base_* ptr870 = &(t869)[c868];
            struct std____detail___List_node_base* base871 = (struct std____detail___List_node_base*)((char *)ptr870 + 0);
            struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ t872 = agg_tmp1859;
            void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___(t867, base871, t872);
            if (__cir_exc_active) {
              goto cir_try_dispatch826;
            }
          for_step863: ;
            struct std____list___Scratch_list_std____detail___List_node_base_* t873 = __counter813;
            int c874 = 1;
            struct std____list___Scratch_list_std____detail___List_node_base_* ptr875 = &(t873)[c874];
            __counter813 = ptr875;
          }
        long c876 = -1;
        struct std____list___Scratch_list_std____detail___List_node_base_* t877 = __fill812;
        struct std____list___Scratch_list_std____detail___List_node_base_* ptr878 = &(t877)[c876];
        struct std____cxx11___List_base_int__std__allocator_int__* base879 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t800 + 0);
        struct std____detail___List_node_base* base880 = (struct std____detail___List_node_base*)((char *)&(base879->_M_impl._M_node) + 0);
        std____list___Scratch_list_std____detail___List_node_base___swap(ptr878, base880);
        if (__cir_exc_active) {
          goto cir_try_dispatch826;
        }
      cir_try_dispatch826: ;
      if (__cir_exc_active) {
      {
        int ca_tok881 = 0;
        void* ca_exn882 = (void*)__cir_exc_ptr;
        __cir_exc_active = 0;
          struct std___List_iterator_int_ r883 = std____cxx11__list_int__std__allocator_int_____end(t800);
          ref_tmp3825 = r883;
          struct std____detail___List_node_base* t884 = ref_tmp3825._M_node;
          std____list___Scratch_list_std____detail___List_node_base____M_put_all(&__carry810, t884);
          if (__cir_exc_active) {
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
          }
            int __i885;
            struct std___List_iterator_int_ ref_tmp4886;
            int c887 = 0;
            __i885 = c887;
            while (1) {
              int t889 = __i885;
              unsigned long cast890 = (unsigned long)t889;
              unsigned long c891 = 1024;
              unsigned long c892 = 16;
              unsigned long b893 = c891 / c892;
              _Bool c894 = ((cast890 < b893)) ? 1 : 0;
              if (!c894) break;
              int t895 = __i885;
              long cast896 = (long)t895;
              struct std___List_iterator_int_ r897 = std____cxx11__list_int__std__allocator_int_____end(t800);
              ref_tmp4886 = r897;
              struct std____detail___List_node_base* t898 = ref_tmp4886._M_node;
              std____list___Scratch_list_std____detail___List_node_base____M_put_all(&__tmp811[cast896], t898);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                return;
              }
            for_step888: ;
              int t899 = __i885;
              int u900 = t899 + 1;
              __i885 = u900;
            }
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

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v901) {
bb902:
  struct std____cxx11___List_base_int__std__allocator_int__* this903;
  struct std__allocator_std___List_node_int__* __retval904;
  this903 = v901;
  struct std____cxx11___List_base_int__std__allocator_int__* t905 = this903;
  struct std__allocator_std___List_node_int__* base906 = (struct std__allocator_std___List_node_int__*)((char *)&(t905->_M_impl) + 0);
  __retval904 = base906;
  struct std__allocator_std___List_node_int__* t907 = __retval904;
  return t907;
}

// function: _ZNSaIiEC2ISt10_List_nodeIiEEERKSaIT_E
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* v908, struct std__allocator_std___List_node_int__* v909) {
bb910:
  struct std__allocator_int_* this911;
  struct std__allocator_std___List_node_int__* unnamed912;
  this911 = v908;
  unnamed912 = v909;
  struct std__allocator_int_* t913 = this911;
  struct std____new_allocator_int_* base914 = (struct std____new_allocator_int_*)((char *)t913 + 0);
  std____new_allocator_int_____new_allocator(base914);
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE13get_allocatorEv
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* v915) {
bb916:
  struct std____cxx11__list_int__std__allocator_int__* this917;
  struct std__allocator_int_ __retval918;
  this917 = v915;
  struct std____cxx11__list_int__std__allocator_int__* t919 = this917;
  struct std____cxx11___List_base_int__std__allocator_int__* base920 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t919 + 0);
  struct std__allocator_std___List_node_int__* r921 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base920);
  std__allocator_int___allocator_std___List_node_int___(&__retval918, r921);
  struct std__allocator_int_ t922 = __retval918;
  return t922;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2IPivEET_S5_RKS1_
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* v923, int* v924, int* v925, struct std__allocator_int_* v926) {
bb927:
  struct std____cxx11__list_int__std__allocator_int__* this928;
  int* __first929;
  int* __last930;
  struct std__allocator_int_* __a931;
  struct std__allocator_std___List_node_int__ ref_tmp0932;
  struct std____false_type agg_tmp0933;
  this928 = v923;
  __first929 = v924;
  __last930 = v925;
  __a931 = v926;
  struct std____cxx11__list_int__std__allocator_int__* t934 = this928;
  struct std____cxx11___List_base_int__std__allocator_int__* base935 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t934 + 0);
  struct std__allocator_int_* t936 = __a931;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp0932, t936);
    std____cxx11___List_base_int__std__allocator_int______List_base(base935, &ref_tmp0932);
    if (__cir_exc_active) {
      {
        std__allocator_std___List_node_int______allocator(&ref_tmp0932);
      }
      return;
    }
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0932);
  }
    int* t937 = __first929;
    int* t938 = __last930;
    struct std____false_type t939 = agg_tmp0933;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(t934, t937, t938, t939);
    if (__cir_exc_active) {
      {
        struct std____cxx11___List_base_int__std__allocator_int__* base940 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t934 + 0);
        std____cxx11___List_base_int__std__allocator_int_______List_base(base940);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v941) {
bb942:
  struct std__allocator_int_* this943;
  this943 = v941;
  struct std__allocator_int_* t944 = this943;
  return;
}

// function: _ZNKSt20_List_const_iteratorIiE13_M_const_castEv
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* v945) {
bb946:
  struct std___List_const_iterator_int_* this947;
  struct std___List_iterator_int_ __retval948;
  this947 = v945;
  struct std___List_const_iterator_int_* t949 = this947;
  struct std____detail___List_node_base* t950 = t949->_M_node;
  std___List_iterator_int____List_iterator(&__retval948, t950);
  struct std___List_iterator_int_ t951 = __retval948;
  return t951;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertIPivEESt14_List_iteratorIiESt20_List_const_iteratorIiET_S9_
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_int___void_(struct std____cxx11__list_int__std__allocator_int__* v952, struct std___List_const_iterator_int_ v953, int* v954, int* v955) {
bb956:
  struct std____cxx11__list_int__std__allocator_int__* this957;
  struct std___List_const_iterator_int_ __position958;
  int* __first959;
  int* __last960;
  struct std___List_iterator_int_ __retval961;
  struct std____cxx11__list_int__std__allocator_int__ __tmp962;
  struct std__allocator_int_ ref_tmp0963;
  this957 = v952;
  __position958 = v953;
  __first959 = v954;
  __last960 = v955;
  struct std____cxx11__list_int__std__allocator_int__* t964 = this957;
  int* t965 = __first959;
  int* t966 = __last960;
  struct std__allocator_int_ r967 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t964);
  ref_tmp0963 = r967;
    std____cxx11__list_int__std__allocator_int_____list_int___void_(&__tmp962, t965, t966, &ref_tmp0963);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp0963);
      }
      struct std___List_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp0963);
  }
      _Bool r968 = std____cxx11__list_int__std__allocator_int_____empty___const(&__tmp962);
      _Bool u969 = !r968;
      if (u969) {
        struct std___List_const_iterator_int_ agg_tmp0970;
        struct std___List_iterator_int_ r971 = std____cxx11__list_int__std__allocator_int_____begin(&__tmp962);
        __retval961 = r971;
        agg_tmp0970 = __position958; // copy
        struct std___List_const_iterator_int_ t972 = agg_tmp0970;
        std____cxx11__list_int__std__allocator_int_____splice_3(t964, t972, &__tmp962);
        struct std___List_iterator_int_ t973 = __retval961;
        struct std___List_iterator_int_ ret_val974 = t973;
        {
          std____cxx11__list_int__std__allocator_int______list(&__tmp962);
        }
        return ret_val974;
      }
    struct std___List_iterator_int_ r975 = std___List_const_iterator_int____M_const_cast___const(&__position958);
    __retval961 = r975;
    struct std___List_iterator_int_ t976 = __retval961;
    struct std___List_iterator_int_ ret_val977 = t976;
    return ret_val977;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v978) {
bb979:
  struct std____cxx11__list_int__std__allocator_int__* this980;
  struct std___List_iterator_int_ __retval981;
  this980 = v978;
  struct std____cxx11__list_int__std__allocator_int__* t982 = this980;
  struct std____cxx11___List_base_int__std__allocator_int__* base983 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t982 + 0);
  struct std____detail___List_node_base* base984 = (struct std____detail___List_node_base*)((char *)&(base983->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t985 = base984->_M_next;
  std___List_iterator_int____List_iterator(&__retval981, t985);
  struct std___List_iterator_int_ t986 = __retval981;
  return t986;
}

// function: _ZNSt20_List_const_iteratorIiEC2ERKSt14_List_iteratorIiE
void std___List_const_iterator_int____List_const_iterator_2(struct std___List_const_iterator_int_* v987, struct std___List_iterator_int_* v988) {
bb989:
  struct std___List_const_iterator_int_* this990;
  struct std___List_iterator_int_* __x991;
  this990 = v987;
  __x991 = v988;
  struct std___List_const_iterator_int_* t992 = this990;
  struct std___List_iterator_int_* t993 = __x991;
  struct std____detail___List_node_base* t994 = t993->_M_node;
  t992->_M_node = t994;
  return;
}

// function: _ZSteqRKSaISt10_List_nodeIiEES3_
_Bool std__operator__(struct std__allocator_std___List_node_int__* v995, struct std__allocator_std___List_node_int__* v996) {
bb997:
  struct std__allocator_std___List_node_int__* unnamed998;
  struct std__allocator_std___List_node_int__* unnamed999;
  _Bool __retval1000;
  unnamed998 = v995;
  unnamed999 = v996;
  _Bool c1001 = 1;
  __retval1000 = c1001;
  _Bool t1002 = __retval1000;
  return t1002;
}

// function: _ZNSt7__cxx114listIiSaIiEE25_M_check_equal_allocatorsERKS2_
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* v1003, struct std____cxx11__list_int__std__allocator_int__* v1004) {
bb1005:
  struct std____cxx11__list_int__std__allocator_int__* this1006;
  struct std____cxx11__list_int__std__allocator_int__* __x1007;
  this1006 = v1003;
  __x1007 = v1004;
  struct std____cxx11__list_int__std__allocator_int__* t1008 = this1006;
    struct std____cxx11___List_base_int__std__allocator_int__* base1009 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1008 + 0);
    struct std__allocator_std___List_node_int__* r1010 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1009);
    struct std____cxx11__list_int__std__allocator_int__* t1011 = __x1007;
    struct std____cxx11___List_base_int__std__allocator_int__* base1012 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1011 + 0);
    struct std__allocator_std___List_node_int__* r1013 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base1012);
    _Bool r1014 = std__operator__(r1010, r1013);
    _Bool u1015 = !r1014;
    if (u1015) {
      abort();
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE11_M_transferESt14_List_iteratorIiES4_S4_
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* v1016, struct std___List_iterator_int_ v1017, struct std___List_iterator_int_ v1018, struct std___List_iterator_int_ v1019) {
bb1020:
  struct std____cxx11__list_int__std__allocator_int__* this1021;
  struct std___List_iterator_int_ __position1022;
  struct std___List_iterator_int_ __first1023;
  struct std___List_iterator_int_ __last1024;
  this1021 = v1016;
  __position1022 = v1017;
  __first1023 = v1018;
  __last1024 = v1019;
  struct std____cxx11__list_int__std__allocator_int__* t1025 = this1021;
  struct std____detail___List_node_base* t1026 = __position1022._M_node;
  struct std____detail___List_node_base* t1027 = __first1023._M_node;
  struct std____detail___List_node_base* t1028 = __last1024._M_node;
  std____detail___List_node_base___M_transfer(t1026, t1027, t1028);
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v1029) {
bb1030:
  struct std____cxx11___List_base_int__std__allocator_int__* this1031;
  unsigned long __retval1032;
  this1031 = v1029;
  struct std____cxx11___List_base_int__std__allocator_int__* t1033 = this1031;
  struct std____detail___List_size* base1034 = (struct std____detail___List_size*)((char *)&(t1033->_M_impl._M_node) + 16);
  unsigned long t1035 = base1034->_M_size;
  __retval1032 = t1035;
  unsigned long t1036 = __retval1032;
  return t1036;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_set_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* v1037, unsigned long v1038) {
bb1039:
  struct std____cxx11___List_base_int__std__allocator_int__* this1040;
  unsigned long __n1041;
  this1040 = v1037;
  __n1041 = v1038;
  struct std____cxx11___List_base_int__std__allocator_int__* t1042 = this1040;
  unsigned long t1043 = __n1041;
  struct std____detail___List_size* base1044 = (struct std____detail___List_size*)((char *)&(t1042->_M_impl._M_node) + 16);
  base1044->_M_size = t1043;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* v1045, struct std___List_const_iterator_int_ v1046, struct std____cxx11__list_int__std__allocator_int__* v1047) {
bb1048:
  struct std____cxx11__list_int__std__allocator_int__* this1049;
  struct std___List_const_iterator_int_ __position1050;
  struct std____cxx11__list_int__std__allocator_int__* __x1051;
  this1049 = v1045;
  __position1050 = v1046;
  __x1051 = v1047;
  struct std____cxx11__list_int__std__allocator_int__* t1052 = this1049;
    struct std____cxx11__list_int__std__allocator_int__* t1053 = __x1051;
    _Bool r1054 = std____cxx11__list_int__std__allocator_int_____empty___const(t1053);
    _Bool u1055 = !r1054;
    if (u1055) {
      struct std___List_iterator_int_ agg_tmp01056;
      struct std___List_iterator_int_ agg_tmp11057;
      struct std___List_iterator_int_ agg_tmp21058;
      struct std____cxx11__list_int__std__allocator_int__* t1059 = __x1051;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t1052, t1059);
      struct std___List_iterator_int_ r1060 = std___List_const_iterator_int____M_const_cast___const(&__position1050);
      agg_tmp01056 = r1060;
      struct std____cxx11__list_int__std__allocator_int__* t1061 = __x1051;
      struct std___List_iterator_int_ r1062 = std____cxx11__list_int__std__allocator_int_____begin(t1061);
      agg_tmp11057 = r1062;
      struct std____cxx11__list_int__std__allocator_int__* t1063 = __x1051;
      struct std___List_iterator_int_ r1064 = std____cxx11__list_int__std__allocator_int_____end(t1063);
      agg_tmp21058 = r1064;
      struct std___List_iterator_int_ t1065 = agg_tmp01056;
      struct std___List_iterator_int_ t1066 = agg_tmp11057;
      struct std___List_iterator_int_ t1067 = agg_tmp21058;
      std____cxx11__list_int__std__allocator_int______M_transfer(t1052, t1065, t1066, t1067);
      if (__cir_exc_active) {
        return;
      }
      struct std____cxx11___List_base_int__std__allocator_int__* base1068 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1052 + 0);
      struct std____cxx11__list_int__std__allocator_int__* t1069 = __x1051;
      struct std____cxx11___List_base_int__std__allocator_int__* base1070 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1069 + 0);
      unsigned long r1071 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base1070);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1068, r1071);
      if (__cir_exc_active) {
        return;
      }
      struct std____cxx11__list_int__std__allocator_int__* t1072 = __x1051;
      struct std____cxx11___List_base_int__std__allocator_int__* base1073 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1072 + 0);
      unsigned long c1074 = 0;
      std____cxx11___List_base_int__std__allocator_int______M_set_size(base1073, c1074);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_
void std____cxx11__list_int__std__allocator_int_____splice_3(struct std____cxx11__list_int__std__allocator_int__* v1075, struct std___List_const_iterator_int_ v1076, struct std____cxx11__list_int__std__allocator_int__* v1077) {
bb1078:
  struct std____cxx11__list_int__std__allocator_int__* this1079;
  struct std___List_const_iterator_int_ __position1080;
  struct std____cxx11__list_int__std__allocator_int__* __x1081;
  struct std___List_const_iterator_int_ agg_tmp01082;
  this1079 = v1075;
  __position1080 = v1076;
  __x1081 = v1077;
  struct std____cxx11__list_int__std__allocator_int__* t1083 = this1079;
  agg_tmp01082 = __position1080; // copy
  struct std____cxx11__list_int__std__allocator_int__* t1084 = __x1081;
  struct std___List_const_iterator_int_ t1085 = agg_tmp01082;
  std____cxx11__list_int__std__allocator_int_____splice(t1083, t1085, t1084);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v1086) {
bb1087:
  struct std____cxx11__list_int__std__allocator_int__* this1088;
  struct std___List_iterator_int_ __retval1089;
  this1088 = v1086;
  struct std____cxx11__list_int__std__allocator_int__* t1090 = this1088;
  struct std____cxx11___List_base_int__std__allocator_int__* base1091 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1090 + 0);
  struct std____detail___List_node_base* r1092 = std____detail___List_node_header___M_base(&base1091->_M_impl._M_node);
  if (__cir_exc_active) {
    struct std___List_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_iterator_int____List_iterator(&__retval1089, r1092);
  struct std___List_iterator_int_ t1093 = __retval1089;
  return t1093;
}

// function: _ZNSt7__cxx114listIiSaIiEE15_Finalize_mergeC2ERS2_S4_RKSt14_List_iteratorIiE
void std____cxx11__list_int__std__allocator_int______Finalize_merge___Finalize_merge(struct std____cxx11__list_int__std__allocator_int_____Finalize_merge* v1094, struct std____cxx11__list_int__std__allocator_int__* v1095, struct std____cxx11__list_int__std__allocator_int__* v1096, struct std___List_iterator_int_* v1097) {
bb1098:
  struct std____cxx11__list_int__std__allocator_int_____Finalize_merge* this1099;
  struct std____cxx11__list_int__std__allocator_int__* __dest1100;
  struct std____cxx11__list_int__std__allocator_int__* __src1101;
  struct std___List_iterator_int_* __src_next1102;
  this1099 = v1094;
  __dest1100 = v1095;
  __src1101 = v1096;
  __src_next1102 = v1097;
  struct std____cxx11__list_int__std__allocator_int_____Finalize_merge* t1103 = this1099;
  struct std____cxx11__list_int__std__allocator_int__* t1104 = __dest1100;
  t1103->_M_dest = t1104;
  struct std____cxx11__list_int__std__allocator_int__* t1105 = __src1101;
  t1103->_M_src = t1105;
  struct std___List_iterator_int_* t1106 = __src_next1102;
  t1103->_M_next = t1106;
  return;
}

// function: _ZNSt14_List_iteratorIiEaSERKS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v1107, struct std___List_iterator_int_* v1108) {
bb1109:
  struct std___List_iterator_int_* this1110;
  struct std___List_iterator_int_* unnamed1111;
  struct std___List_iterator_int_* __retval1112;
  this1110 = v1107;
  unnamed1111 = v1108;
  struct std___List_iterator_int_* t1113 = this1110;
  struct std___List_iterator_int_* t1114 = unnamed1111;
  struct std____detail___List_node_base* t1115 = t1114->_M_node;
  t1113->_M_node = t1115;
  __retval1112 = t1113;
  struct std___List_iterator_int_* t1116 = __retval1112;
  return t1116;
}

// function: _ZNSt7__cxx114listIiSaIiEE15_Finalize_mergeD2Ev
void std____cxx11__list_int__std__allocator_int______Finalize_merge____Finalize_merge(struct std____cxx11__list_int__std__allocator_int_____Finalize_merge* v1117) {
bb1118:
  struct std____cxx11__list_int__std__allocator_int_____Finalize_merge* this1119;
  unsigned long __num_unmerged1120;
  struct std___List_iterator_int_ agg_tmp01121;
  struct std___List_iterator_int_ agg_tmp11122;
  unsigned long __orig_size1123;
  this1119 = v1117;
  struct std____cxx11__list_int__std__allocator_int_____Finalize_merge* t1124 = this1119;
  struct std___List_iterator_int_* t1125 = t1124->_M_next;
  agg_tmp01121 = *t1125; // copy
  struct std____cxx11__list_int__std__allocator_int__* t1126 = t1124->_M_src;
  struct std___List_iterator_int_ r1127 = std____cxx11__list_int__std__allocator_int_____end(t1126);
  agg_tmp11122 = r1127;
  struct std___List_iterator_int_ t1128 = agg_tmp01121;
  struct std___List_iterator_int_ t1129 = agg_tmp11122;
  long r1130 = std__iterator_traits_std___List_iterator_int_____difference_type_std__distance_std___List_iterator_int___(t1128, t1129);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast1131 = (unsigned long)r1130;
  __num_unmerged1120 = cast1131;
  struct std____cxx11__list_int__std__allocator_int__* t1132 = t1124->_M_src;
  struct std____cxx11___List_base_int__std__allocator_int__* base1133 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1132 + 0);
  unsigned long r1134 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base1133);
  if (__cir_exc_active) {
    return;
  }
  __orig_size1123 = r1134;
  struct std____cxx11__list_int__std__allocator_int__* t1135 = t1124->_M_dest;
  struct std____cxx11___List_base_int__std__allocator_int__* base1136 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1135 + 0);
  unsigned long t1137 = __orig_size1123;
  unsigned long t1138 = __num_unmerged1120;
  unsigned long b1139 = t1137 - t1138;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1136, b1139);
  if (__cir_exc_active) {
    return;
  }
  struct std____cxx11__list_int__std__allocator_int__* t1140 = t1124->_M_src;
  struct std____cxx11___List_base_int__std__allocator_int__* base1141 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1140 + 0);
  unsigned long t1142 = __num_unmerged1120;
  std____cxx11___List_base_int__std__allocator_int______M_set_size(base1141, t1142);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5mergeEOS2_
void std____cxx11__list_int__std__allocator_int_____merge(struct std____cxx11__list_int__std__allocator_int__* v1143, struct std____cxx11__list_int__std__allocator_int__* v1144) {
bb1145:
  struct std____cxx11__list_int__std__allocator_int__* this1146;
  struct std____cxx11__list_int__std__allocator_int__* __x1147;
  this1146 = v1143;
  __x1147 = v1144;
  struct std____cxx11__list_int__std__allocator_int__* t1148 = this1146;
    struct std____cxx11__list_int__std__allocator_int__* t1149 = __x1147;
    _Bool c1150 = ((t1148 != t1149)) ? 1 : 0;
    if (c1150) {
      struct std___List_iterator_int_ __first11151;
      struct std___List_iterator_int_ __last11152;
      struct std___List_iterator_int_ __first21153;
      struct std___List_iterator_int_ __last21154;
      struct std____cxx11__list_int__std__allocator_int_____Finalize_merge __fin1155;
      struct std____cxx11__list_int__std__allocator_int__* t1156 = __x1147;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t1148, t1156);
      struct std___List_iterator_int_ r1157 = std____cxx11__list_int__std__allocator_int_____begin(t1148);
      __first11151 = r1157;
      struct std___List_iterator_int_ r1158 = std____cxx11__list_int__std__allocator_int_____end(t1148);
      __last11152 = r1158;
      struct std____cxx11__list_int__std__allocator_int__* t1159 = __x1147;
      struct std___List_iterator_int_ r1160 = std____cxx11__list_int__std__allocator_int_____begin(t1159);
      __first21153 = r1160;
      struct std____cxx11__list_int__std__allocator_int__* t1161 = __x1147;
      struct std___List_iterator_int_ r1162 = std____cxx11__list_int__std__allocator_int_____end(t1161);
      __last21154 = r1162;
      struct std____cxx11__list_int__std__allocator_int__* t1163 = __x1147;
      std____cxx11__list_int__std__allocator_int______Finalize_merge___Finalize_merge(&__fin1155, t1148, t1163, &__first21153);
      if (__cir_exc_active) {
        return;
      }
          while (1) {
            _Bool r1164 = std__operator___2(&__first11151, &__last11152);
            _Bool u1165 = !r1164;
            _Bool ternary1166;
            if (u1165) {
              _Bool r1167 = std__operator___2(&__first21153, &__last21154);
              _Bool u1168 = !r1167;
              ternary1166 = (_Bool)u1168;
            } else {
              _Bool c1169 = 0;
              ternary1166 = (_Bool)c1169;
            }
            if (!ternary1166) break;
              int* r1170 = std___List_iterator_int___operator____const(&__first21153);
              int t1171 = *r1170;
              int* r1172 = std___List_iterator_int___operator____const(&__first11151);
              int t1173 = *r1172;
              _Bool c1174 = ((t1171 < t1173)) ? 1 : 0;
              if (c1174) {
                struct std___List_iterator_int_ __next1175;
                struct std___List_iterator_int_ agg_tmp01176;
                struct std___List_iterator_int_ agg_tmp11177;
                struct std___List_iterator_int_ agg_tmp21178;
                __next1175 = __first21153; // copy
                agg_tmp01176 = __first11151; // copy
                agg_tmp11177 = __first21153; // copy
                struct std___List_iterator_int_* r1179 = std___List_iterator_int___operator___2(&__next1175);
                agg_tmp21178 = *r1179; // copy
                struct std___List_iterator_int_ t1180 = agg_tmp01176;
                struct std___List_iterator_int_ t1181 = agg_tmp11177;
                struct std___List_iterator_int_ t1182 = agg_tmp21178;
                std____cxx11__list_int__std__allocator_int______M_transfer(t1148, t1180, t1181, t1182);
                if (__cir_exc_active) {
                  {
                    std____cxx11__list_int__std__allocator_int______Finalize_merge____Finalize_merge(&__fin1155);
                  }
                  return;
                }
                struct std___List_iterator_int_* r1183 = std___List_iterator_int___operator_(&__first21153, &__next1175);
              } else {
                struct std___List_iterator_int_* r1184 = std___List_iterator_int___operator___2(&__first11151);
              }
          }
          _Bool r1185 = std__operator___2(&__first21153, &__last21154);
          _Bool u1186 = !r1185;
          if (u1186) {
            struct std___List_iterator_int_ agg_tmp31187;
            struct std___List_iterator_int_ agg_tmp41188;
            struct std___List_iterator_int_ agg_tmp51189;
            agg_tmp31187 = __last11152; // copy
            agg_tmp41188 = __first21153; // copy
            agg_tmp51189 = __last21154; // copy
            struct std___List_iterator_int_ t1190 = agg_tmp31187;
            struct std___List_iterator_int_ t1191 = agg_tmp41188;
            struct std___List_iterator_int_ t1192 = agg_tmp51189;
            std____cxx11__list_int__std__allocator_int______M_transfer(t1148, t1190, t1191, t1192);
            if (__cir_exc_active) {
              {
                std____cxx11__list_int__std__allocator_int______Finalize_merge____Finalize_merge(&__fin1155);
              }
              return;
            }
            struct std___List_iterator_int_* r1193 = std___List_iterator_int___operator_(&__first21153, &__last21154);
          }
      {
        std____cxx11__list_int__std__allocator_int______Finalize_merge____Finalize_merge(&__fin1155);
      }
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5mergeERS2_
void std____cxx11__list_int__std__allocator_int_____merge_2(struct std____cxx11__list_int__std__allocator_int__* v1194, struct std____cxx11__list_int__std__allocator_int__* v1195) {
bb1196:
  struct std____cxx11__list_int__std__allocator_int__* this1197;
  struct std____cxx11__list_int__std__allocator_int__* __x1198;
  this1197 = v1194;
  __x1198 = v1195;
  struct std____cxx11__list_int__std__allocator_int__* t1199 = this1197;
  struct std____cxx11__list_int__std__allocator_int__* t1200 = __x1198;
  std____cxx11__list_int__std__allocator_int_____merge(t1199, t1200);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v1201, unsigned long v1202) {
bb1203:
  struct std____cxx11___List_base_int__std__allocator_int__* this1204;
  unsigned long __n1205;
  this1204 = v1201;
  __n1205 = v1202;
  struct std____cxx11___List_base_int__std__allocator_int__* t1206 = this1204;
  unsigned long t1207 = __n1205;
  struct std____detail___List_size* base1208 = (struct std____detail___List_size*)((char *)&(t1206->_M_impl._M_node) + 16);
  unsigned long t1209 = base1208->_M_size;
  unsigned long b1210 = t1209 - t1207;
  base1208->_M_size = b1210;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* v1211, struct std___List_iterator_int_ v1212) {
bb1213:
  struct std____cxx11__list_int__std__allocator_int__* this1214;
  struct std___List_iterator_int_ __position1215;
  struct std___List_node_int_* __n1216;
  this1214 = v1211;
  __position1215 = v1212;
  struct std____cxx11__list_int__std__allocator_int__* t1217 = this1214;
  struct std____cxx11___List_base_int__std__allocator_int__* base1218 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1217 + 0);
  unsigned long c1219 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base1218, c1219);
  if (__cir_exc_active) {
    return;
  }
  struct std____detail___List_node_base* t1220 = __position1215._M_node;
  std____detail___List_node_base___M_unhook(t1220);
  struct std____detail___List_node_base* t1221 = __position1215._M_node;
  struct std___List_node_int_* derived1222 = (struct std___List_node_int_*)((char *)t1221 - 0);
  __n1216 = derived1222;
  struct std____cxx11___List_base_int__std__allocator_int__* base1223 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1217 + 0);
  struct std___List_node_int_* t1224 = __n1216;
  struct std___List_node_int_* r1225 = std___List_node_int____M_node_ptr(t1224);
  if (__cir_exc_active) {
    return;
  }
  std____cxx11___List_base_int__std__allocator_int______M_destroy_node(base1223, r1225);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9pop_frontEv
void std____cxx11__list_int__std__allocator_int_____pop_front(struct std____cxx11__list_int__std__allocator_int__* v1226) {
bb1227:
  struct std____cxx11__list_int__std__allocator_int__* this1228;
  struct std___List_iterator_int_ agg_tmp01229;
  this1228 = v1226;
  struct std____cxx11__list_int__std__allocator_int__* t1230 = this1228;
    do {
          _Bool r1231 = std____cxx11__list_int__std__allocator_int_____empty___const(t1230);
          if (r1231) {
            char* cast1232 = (char*)&(_str_16);
            int c1233 = 1788;
            char* cast1234 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE9pop_frontEv);
            char* cast1235 = (char*)&(_str_17);
            std____glibcxx_assert_fail(cast1232, c1233, cast1234, cast1235);
          }
      _Bool c1236 = 0;
      if (!c1236) break;
    } while (1);
  struct std___List_iterator_int_ r1237 = std____cxx11__list_int__std__allocator_int_____begin(t1230);
  agg_tmp01229 = r1237;
  struct std___List_iterator_int_ t1238 = agg_tmp01229;
  std____cxx11__list_int__std__allocator_int______M_erase(t1230, t1238);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8pop_backEv
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* v1239) {
bb1240:
  struct std____cxx11__list_int__std__allocator_int__* this1241;
  struct std___List_iterator_int_ agg_tmp01242;
  this1241 = v1239;
  struct std____cxx11__list_int__std__allocator_int__* t1243 = this1241;
    do {
          _Bool r1244 = std____cxx11__list_int__std__allocator_int_____empty___const(t1243);
          if (r1244) {
            char* cast1245 = (char*)&(_str_16);
            int c1246 = 1840;
            char* cast1247 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv);
            char* cast1248 = (char*)&(_str_17);
            std____glibcxx_assert_fail(cast1245, c1246, cast1247, cast1248);
          }
      _Bool c1249 = 0;
      if (!c1249) break;
    } while (1);
  struct std____cxx11___List_base_int__std__allocator_int__* base1250 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1243 + 0);
  struct std____detail___List_node_base* base1251 = (struct std____detail___List_node_base*)((char *)&(base1250->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1252 = base1251->_M_prev;
  std___List_iterator_int____List_iterator(&agg_tmp01242, t1252);
  struct std___List_iterator_int_ t1253 = agg_tmp01242;
  std____cxx11__list_int__std__allocator_int______M_erase(t1243, t1253);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2ERKS1_
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v1254, struct std__allocator_int_* v1255) {
bb1256:
  struct std____cxx11__list_int__std__allocator_int__* this1257;
  struct std__allocator_int_* __a1258;
  struct std__allocator_std___List_node_int__ ref_tmp01259;
  this1257 = v1254;
  __a1258 = v1255;
  struct std____cxx11__list_int__std__allocator_int__* t1260 = this1257;
  struct std____cxx11___List_base_int__std__allocator_int__* base1261 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1260 + 0);
  struct std__allocator_int_* t1262 = __a1258;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp01259, t1262);
    std____cxx11___List_base_int__std__allocator_int______List_base(base1261, &ref_tmp01259);
    if (__cir_exc_active) {
      {
        std__allocator_std___List_node_int______allocator(&ref_tmp01259);
      }
      return;
    }
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp01259);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_S4_
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* v1263, struct std___List_const_iterator_int_ v1264, struct std____cxx11__list_int__std__allocator_int__* v1265, struct std___List_const_iterator_int_ v1266) {
bb1267:
  struct std____cxx11__list_int__std__allocator_int__* this1268;
  struct std___List_const_iterator_int_ __position1269;
  struct std____cxx11__list_int__std__allocator_int__* __x1270;
  struct std___List_const_iterator_int_ __i1271;
  struct std___List_iterator_int_ __j1272;
  struct std___List_iterator_int_ agg_tmp01273;
  struct std___List_iterator_int_ agg_tmp11274;
  struct std___List_iterator_int_ agg_tmp21275;
  this1268 = v1263;
  __position1269 = v1264;
  __x1270 = v1265;
  __i1271 = v1266;
  struct std____cxx11__list_int__std__allocator_int__* t1276 = this1268;
  struct std___List_iterator_int_ r1277 = std___List_const_iterator_int____M_const_cast___const(&__i1271);
  __j1272 = r1277;
  struct std___List_iterator_int_* r1278 = std___List_iterator_int___operator___2(&__j1272);
    _Bool r1279 = std__operator___3(&__position1269, &__i1271);
    _Bool ternary1280;
    if (r1279) {
      _Bool c1281 = 1;
      ternary1280 = (_Bool)c1281;
    } else {
      struct std___List_const_iterator_int_ ref_tmp01282;
      std___List_const_iterator_int____List_const_iterator_2(&ref_tmp01282, &__j1272);
      _Bool r1283 = std__operator___3(&__position1269, &ref_tmp01282);
      ternary1280 = (_Bool)r1283;
    }
    if (ternary1280) {
      return;
    }
    struct std____cxx11__list_int__std__allocator_int__* t1284 = __x1270;
    _Bool c1285 = ((t1276 != t1284)) ? 1 : 0;
    if (c1285) {
      struct std____cxx11__list_int__std__allocator_int__* t1286 = __x1270;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t1276, t1286);
    }
  struct std___List_iterator_int_ r1287 = std___List_const_iterator_int____M_const_cast___const(&__position1269);
  agg_tmp01273 = r1287;
  struct std___List_iterator_int_ r1288 = std___List_const_iterator_int____M_const_cast___const(&__i1271);
  agg_tmp11274 = r1288;
  agg_tmp21275 = __j1272; // copy
  struct std___List_iterator_int_ t1289 = agg_tmp01273;
  struct std___List_iterator_int_ t1290 = agg_tmp11274;
  struct std___List_iterator_int_ t1291 = agg_tmp21275;
  std____cxx11__list_int__std__allocator_int______M_transfer(t1276, t1289, t1290, t1291);
  if (__cir_exc_active) {
    return;
  }
  struct std____cxx11___List_base_int__std__allocator_int__* base1292 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1276 + 0);
  unsigned long c1293 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1292, c1293);
  if (__cir_exc_active) {
    return;
  }
  struct std____cxx11__list_int__std__allocator_int__* t1294 = __x1270;
  struct std____cxx11___List_base_int__std__allocator_int__* base1295 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1294 + 0);
  unsigned long c1296 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base1295, c1296);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_S4_
void std____cxx11__list_int__std__allocator_int_____splice_4(struct std____cxx11__list_int__std__allocator_int__* v1297, struct std___List_const_iterator_int_ v1298, struct std____cxx11__list_int__std__allocator_int__* v1299, struct std___List_const_iterator_int_ v1300) {
bb1301:
  struct std____cxx11__list_int__std__allocator_int__* this1302;
  struct std___List_const_iterator_int_ __position1303;
  struct std____cxx11__list_int__std__allocator_int__* __x1304;
  struct std___List_const_iterator_int_ __i1305;
  struct std___List_const_iterator_int_ agg_tmp01306;
  struct std___List_const_iterator_int_ agg_tmp11307;
  this1302 = v1297;
  __position1303 = v1298;
  __x1304 = v1299;
  __i1305 = v1300;
  struct std____cxx11__list_int__std__allocator_int__* t1308 = this1302;
  agg_tmp01306 = __position1303; // copy
  struct std____cxx11__list_int__std__allocator_int__* t1309 = __x1304;
  agg_tmp11307 = __i1305; // copy
  struct std___List_const_iterator_int_ t1310 = agg_tmp01306;
  struct std___List_const_iterator_int_ t1311 = agg_tmp11307;
  std____cxx11__list_int__std__allocator_int_____splice_2(t1308, t1310, t1309, t1311);
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v1312) {
bb1313:
  struct std____cxx11__list_int__std__allocator_int__* this1314;
  unsigned long __retval1315;
  this1314 = v1312;
  struct std____cxx11__list_int__std__allocator_int__* t1316 = this1314;
  struct std____cxx11___List_base_int__std__allocator_int__* base1317 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1316 + 0);
  unsigned long r1318 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base1317);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1315 = r1318;
  unsigned long t1319 = __retval1315;
  return t1319;
}

// function: _ZNSt7__cxx114listIiSaIiEE6uniqueEv
unsigned long std____cxx11__list_int__std__allocator_int_____unique(struct std____cxx11__list_int__std__allocator_int__* v1320) {
bb1321:
  struct std____cxx11__list_int__std__allocator_int__* this1322;
  unsigned long __retval1323;
  struct std___List_iterator_int_ __first1324;
  struct std___List_iterator_int_ __last1325;
  struct std____cxx11__list_int__std__allocator_int__ __to_destroy1326;
  struct std__allocator_int_ ref_tmp01327;
  struct std___List_iterator_int_ __next1328;
  this1322 = v1320;
  struct std____cxx11__list_int__std__allocator_int__* t1329 = this1322;
  struct std___List_iterator_int_ r1330 = std____cxx11__list_int__std__allocator_int_____begin(t1329);
  __first1324 = r1330;
  struct std___List_iterator_int_ r1331 = std____cxx11__list_int__std__allocator_int_____end(t1329);
  __last1325 = r1331;
    _Bool r1332 = std__operator___2(&__first1324, &__last1325);
    if (r1332) {
      unsigned long c1333 = 0;
      __retval1323 = c1333;
      unsigned long t1334 = __retval1323;
      return t1334;
    }
  struct std__allocator_int_ r1335 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t1329);
  ref_tmp01327 = r1335;
    std____cxx11__list_int__std__allocator_int_____list(&__to_destroy1326, &ref_tmp01327);
  {
    std__allocator_int____allocator(&ref_tmp01327);
  }
    __next1328 = __first1324; // copy
      while (1) {
        struct std___List_iterator_int_* r1336 = std___List_iterator_int___operator___2(&__next1328);
        _Bool r1337 = std__operator___2(r1336, &__last1325);
        _Bool u1338 = !r1337;
        if (!u1338) break;
            int* r1339 = std___List_iterator_int___operator____const(&__first1324);
            int t1340 = *r1339;
            int* r1341 = std___List_iterator_int___operator____const(&__next1328);
            int t1342 = *r1341;
            _Bool c1343 = ((t1340 == t1342)) ? 1 : 0;
            if (c1343) {
              struct std___List_const_iterator_int_ agg_tmp01344;
              struct std___List_iterator_int_ ref_tmp11345;
              struct std___List_const_iterator_int_ agg_tmp11346;
              struct std___List_iterator_int_ r1347 = std____cxx11__list_int__std__allocator_int_____begin(&__to_destroy1326);
              ref_tmp11345 = r1347;
              std___List_const_iterator_int____List_const_iterator_2(&agg_tmp01344, &ref_tmp11345);
              std___List_const_iterator_int____List_const_iterator_2(&agg_tmp11346, &__next1328);
              struct std___List_const_iterator_int_ t1348 = agg_tmp01344;
              struct std___List_const_iterator_int_ t1349 = agg_tmp11346;
              std____cxx11__list_int__std__allocator_int_____splice_4(&__to_destroy1326, t1348, t1329, t1349);
            } else {
              struct std___List_iterator_int_* r1350 = std___List_iterator_int___operator_(&__first1324, &__next1328);
            }
          struct std___List_iterator_int_* r1351 = std___List_iterator_int___operator_(&__next1328, &__first1324);
      }
    unsigned long r1352 = std____cxx11__list_int__std__allocator_int_____size___const(&__to_destroy1326);
    __retval1323 = r1352;
    unsigned long t1353 = __retval1323;
    unsigned long ret_val1354 = t1353;
    {
      std____cxx11__list_int__std__allocator_int______list(&__to_destroy1326);
    }
    return ret_val1354;
  abort();
}

// function: _ZSt15__alloc_on_swapISaISt10_List_nodeIiEEEvRT_S4_
void void_std____alloc_on_swap_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v1355, struct std__allocator_std___List_node_int__* v1356) {
bb1357:
  struct std__allocator_std___List_node_int__* __one1358;
  struct std__allocator_std___List_node_int__* __two1359;
  __one1358 = v1355;
  __two1359 = v1356;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaISt10_List_nodeIiEES2_E10_S_on_swapERS3_S5_
void __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_on_swap(struct std__allocator_std___List_node_int__* v1360, struct std__allocator_std___List_node_int__* v1361) {
bb1362:
  struct std__allocator_std___List_node_int__* __a1363;
  struct std__allocator_std___List_node_int__* __b1364;
  __a1363 = v1360;
  __b1364 = v1361;
  struct std__allocator_std___List_node_int__* t1365 = __a1363;
  struct std__allocator_std___List_node_int__* t1366 = __b1364;
  void_std____alloc_on_swap_std__allocator_std___List_node_int_____(t1365, t1366);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE4swapERS2_
void std____cxx11__list_int__std__allocator_int_____swap(struct std____cxx11__list_int__std__allocator_int__* v1367, struct std____cxx11__list_int__std__allocator_int__* v1368) {
bb1369:
  struct std____cxx11__list_int__std__allocator_int__* this1370;
  struct std____cxx11__list_int__std__allocator_int__* __x1371;
  unsigned long __xsize1372;
  this1370 = v1367;
  __x1371 = v1368;
  struct std____cxx11__list_int__std__allocator_int__* t1373 = this1370;
  struct std____cxx11___List_base_int__std__allocator_int__* base1374 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1373 + 0);
  struct std____detail___List_node_base* base1375 = (struct std____detail___List_node_base*)((char *)&(base1374->_M_impl._M_node) + 0);
  struct std____cxx11__list_int__std__allocator_int__* t1376 = __x1371;
  struct std____cxx11___List_base_int__std__allocator_int__* base1377 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1376 + 0);
  struct std____detail___List_node_base* base1378 = (struct std____detail___List_node_base*)((char *)&(base1377->_M_impl._M_node) + 0);
  std____detail___List_node_base__swap(base1375, base1378);
  struct std____cxx11__list_int__std__allocator_int__* t1379 = __x1371;
  struct std____cxx11___List_base_int__std__allocator_int__* base1380 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1379 + 0);
  unsigned long r1381 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base1380);
  if (__cir_exc_active) {
    return;
  }
  __xsize1372 = r1381;
  struct std____cxx11__list_int__std__allocator_int__* t1382 = __x1371;
  struct std____cxx11___List_base_int__std__allocator_int__* base1383 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1382 + 0);
  struct std____cxx11___List_base_int__std__allocator_int__* base1384 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1373 + 0);
  unsigned long r1385 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base1384);
  if (__cir_exc_active) {
    return;
  }
  std____cxx11___List_base_int__std__allocator_int______M_set_size(base1383, r1385);
  if (__cir_exc_active) {
    return;
  }
  struct std____cxx11___List_base_int__std__allocator_int__* base1386 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1373 + 0);
  unsigned long t1387 = __xsize1372;
  std____cxx11___List_base_int__std__allocator_int______M_set_size(base1386, t1387);
  if (__cir_exc_active) {
    return;
  }
  struct std____cxx11___List_base_int__std__allocator_int__* base1388 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1373 + 0);
  struct std__allocator_std___List_node_int__* r1389 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1388);
  struct std____cxx11__list_int__std__allocator_int__* t1390 = __x1371;
  struct std____cxx11___List_base_int__std__allocator_int__* base1391 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1390 + 0);
  struct std__allocator_std___List_node_int__* r1392 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1391);
  __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_on_swap(r1389, r1392);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5eraseESt20_List_const_iteratorIiE
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase(struct std____cxx11__list_int__std__allocator_int__* v1393, struct std___List_const_iterator_int_ v1394) {
bb1395:
  struct std____cxx11__list_int__std__allocator_int__* this1396;
  struct std___List_const_iterator_int_ __position1397;
  struct std___List_iterator_int_ __retval1398;
  struct std___List_iterator_int_ agg_tmp01399;
  this1396 = v1393;
  __position1397 = v1394;
  struct std____cxx11__list_int__std__allocator_int__* t1400 = this1396;
  struct std____detail___List_node_base* t1401 = __position1397._M_node;
  struct std____detail___List_node_base* t1402 = t1401->_M_next;
  std___List_iterator_int____List_iterator(&__retval1398, t1402);
  struct std___List_iterator_int_ r1403 = std___List_const_iterator_int____M_const_cast___const(&__position1397);
  agg_tmp01399 = r1403;
  struct std___List_iterator_int_ t1404 = agg_tmp01399;
  std____cxx11__list_int__std__allocator_int______M_erase(t1400, t1404);
  struct std___List_iterator_int_ t1405 = __retval1398;
  return t1405;
}

// function: _ZNSt20_List_const_iteratorIiEaSEOS0_
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator_(struct std___List_const_iterator_int_* v1406, struct std___List_const_iterator_int_* v1407) {
bb1408:
  struct std___List_const_iterator_int_* this1409;
  struct std___List_const_iterator_int_* unnamed1410;
  struct std___List_const_iterator_int_* __retval1411;
  this1409 = v1406;
  unnamed1410 = v1407;
  struct std___List_const_iterator_int_* t1412 = this1409;
  struct std___List_const_iterator_int_* t1413 = unnamed1410;
  struct std____detail___List_node_base* t1414 = t1413->_M_node;
  t1412->_M_node = t1414;
  __retval1411 = t1412;
  struct std___List_const_iterator_int_* t1415 = __retval1411;
  return t1415;
}

// function: _ZNSt7__cxx114listIiSaIiEE5eraseESt20_List_const_iteratorIiES4_
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase_2(struct std____cxx11__list_int__std__allocator_int__* v1416, struct std___List_const_iterator_int_ v1417, struct std___List_const_iterator_int_ v1418) {
bb1419:
  struct std____cxx11__list_int__std__allocator_int__* this1420;
  struct std___List_const_iterator_int_ __first1421;
  struct std___List_const_iterator_int_ __last1422;
  struct std___List_iterator_int_ __retval1423;
  this1420 = v1416;
  __first1421 = v1417;
  __last1422 = v1418;
  struct std____cxx11__list_int__std__allocator_int__* t1424 = this1420;
    struct std___List_const_iterator_int_ ref_tmp01425;
    struct std___List_iterator_int_ ref_tmp11426;
    struct std___List_const_iterator_int_ agg_tmp01427;
    while (1) {
      _Bool r1428 = std__operator___3(&__first1421, &__last1422);
      _Bool u1429 = !r1428;
      if (!u1429) break;
      agg_tmp01427 = __first1421; // copy
      struct std___List_const_iterator_int_ t1430 = agg_tmp01427;
      struct std___List_iterator_int_ r1431 = std____cxx11__list_int__std__allocator_int_____erase(t1424, t1430);
      ref_tmp11426 = r1431;
      std___List_const_iterator_int____List_const_iterator_2(&ref_tmp01425, &ref_tmp11426);
      struct std___List_const_iterator_int_* r1432 = std___List_const_iterator_int___operator_(&__first1421, &ref_tmp01425);
    }
  struct std___List_iterator_int_ r1433 = std___List_const_iterator_int____M_const_cast___const(&__last1422);
  __retval1423 = r1433;
  struct std___List_iterator_int_ t1434 = __retval1423;
  return t1434;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2ISt14_List_iteratorIiEvEET_S6_RKS1_
void std____cxx11__list_int__std__allocator_int_____list_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* v1435, struct std___List_iterator_int_ v1436, struct std___List_iterator_int_ v1437, struct std__allocator_int_* v1438) {
bb1439:
  struct std____cxx11__list_int__std__allocator_int__* this1440;
  struct std___List_iterator_int_ __first1441;
  struct std___List_iterator_int_ __last1442;
  struct std__allocator_int_* __a1443;
  struct std__allocator_std___List_node_int__ ref_tmp01444;
  struct std___List_iterator_int_ agg_tmp01445;
  struct std___List_iterator_int_ agg_tmp11446;
  struct std____false_type agg_tmp21447;
  this1440 = v1435;
  __first1441 = v1436;
  __last1442 = v1437;
  __a1443 = v1438;
  struct std____cxx11__list_int__std__allocator_int__* t1448 = this1440;
  struct std____cxx11___List_base_int__std__allocator_int__* base1449 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1448 + 0);
  struct std__allocator_int_* t1450 = __a1443;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp01444, t1450);
    std____cxx11___List_base_int__std__allocator_int______List_base(base1449, &ref_tmp01444);
    if (__cir_exc_active) {
      {
        std__allocator_std___List_node_int______allocator(&ref_tmp01444);
      }
      return;
    }
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp01444);
  }
    agg_tmp01445 = __first1441; // copy
    agg_tmp11446 = __last1442; // copy
    struct std___List_iterator_int_ t1451 = agg_tmp01445;
    struct std___List_iterator_int_ t1452 = agg_tmp11446;
    struct std____false_type t1453 = agg_tmp21447;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_iterator_int___(t1448, t1451, t1452, t1453);
    if (__cir_exc_active) {
      {
        struct std____cxx11___List_base_int__std__allocator_int__* base1454 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1448 + 0);
        std____cxx11___List_base_int__std__allocator_int_______List_base(base1454);
      }
      return;
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertISt14_List_iteratorIiEvEES5_St20_List_const_iteratorIiET_S8_
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* v1455, struct std___List_const_iterator_int_ v1456, struct std___List_iterator_int_ v1457, struct std___List_iterator_int_ v1458) {
bb1459:
  struct std____cxx11__list_int__std__allocator_int__* this1460;
  struct std___List_const_iterator_int_ __position1461;
  struct std___List_iterator_int_ __first1462;
  struct std___List_iterator_int_ __last1463;
  struct std___List_iterator_int_ __retval1464;
  struct std____cxx11__list_int__std__allocator_int__ __tmp1465;
  struct std___List_iterator_int_ agg_tmp01466;
  struct std___List_iterator_int_ agg_tmp11467;
  struct std__allocator_int_ ref_tmp01468;
  this1460 = v1455;
  __position1461 = v1456;
  __first1462 = v1457;
  __last1463 = v1458;
  struct std____cxx11__list_int__std__allocator_int__* t1469 = this1460;
  agg_tmp01466 = __first1462; // copy
  agg_tmp11467 = __last1463; // copy
  struct std__allocator_int_ r1470 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t1469);
  ref_tmp01468 = r1470;
    struct std___List_iterator_int_ t1471 = agg_tmp01466;
    struct std___List_iterator_int_ t1472 = agg_tmp11467;
    std____cxx11__list_int__std__allocator_int_____list_std___List_iterator_int___void_(&__tmp1465, t1471, t1472, &ref_tmp01468);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp01468);
      }
      struct std___List_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp01468);
  }
      _Bool r1473 = std____cxx11__list_int__std__allocator_int_____empty___const(&__tmp1465);
      _Bool u1474 = !r1473;
      if (u1474) {
        struct std___List_const_iterator_int_ agg_tmp21475;
        struct std___List_iterator_int_ r1476 = std____cxx11__list_int__std__allocator_int_____begin(&__tmp1465);
        __retval1464 = r1476;
        agg_tmp21475 = __position1461; // copy
        struct std___List_const_iterator_int_ t1477 = agg_tmp21475;
        std____cxx11__list_int__std__allocator_int_____splice_3(t1469, t1477, &__tmp1465);
        struct std___List_iterator_int_ t1478 = __retval1464;
        struct std___List_iterator_int_ ret_val1479 = t1478;
        {
          std____cxx11__list_int__std__allocator_int______list(&__tmp1465);
        }
        return ret_val1479;
      }
    struct std___List_iterator_int_ r1480 = std___List_const_iterator_int____M_const_cast___const(&__position1461);
    __retval1464 = r1480;
    struct std___List_iterator_int_ t1481 = __retval1464;
    struct std___List_iterator_int_ ret_val1482 = t1481;
    return ret_val1482;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_assign_dispatchISt14_List_iteratorIiEEEvT_S6_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_std___List_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* v1483, struct std___List_iterator_int_ v1484, struct std___List_iterator_int_ v1485, struct std____false_type v1486) {
bb1487:
  struct std____cxx11__list_int__std__allocator_int__* this1488;
  struct std___List_iterator_int_ __first21489;
  struct std___List_iterator_int_ __last21490;
  struct std____false_type unnamed1491;
  struct std___List_iterator_int_ __first11492;
  struct std___List_iterator_int_ __last11493;
  this1488 = v1483;
  __first21489 = v1484;
  __last21490 = v1485;
  unnamed1491 = v1486;
  struct std____cxx11__list_int__std__allocator_int__* t1494 = this1488;
  struct std___List_iterator_int_ r1495 = std____cxx11__list_int__std__allocator_int_____begin(t1494);
  __first11492 = r1495;
  struct std___List_iterator_int_ r1496 = std____cxx11__list_int__std__allocator_int_____end(t1494);
  __last11493 = r1496;
    while (1) {
      _Bool r1498 = std__operator___2(&__first11492, &__last11493);
      _Bool u1499 = !r1498;
      _Bool ternary1500;
      if (u1499) {
        _Bool r1501 = std__operator___2(&__first21489, &__last21490);
        _Bool u1502 = !r1501;
        ternary1500 = (_Bool)u1502;
      } else {
        _Bool c1503 = 0;
        ternary1500 = (_Bool)c1503;
      }
      if (!ternary1500) break;
      int* r1504 = std___List_iterator_int___operator____const(&__first21489);
      int t1505 = *r1504;
      int* r1506 = std___List_iterator_int___operator____const(&__first11492);
      *r1506 = t1505;
    for_step1497: ;
      struct std___List_iterator_int_* r1507 = std___List_iterator_int___operator___2(&__first11492);
      struct std___List_iterator_int_* r1508 = std___List_iterator_int___operator___2(&__first21489);
    }
    _Bool r1509 = std__operator___2(&__first21489, &__last21490);
    if (r1509) {
      struct std___List_const_iterator_int_ agg_tmp01510;
      struct std___List_const_iterator_int_ agg_tmp11511;
      struct std___List_iterator_int_ agg_tmp21512;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp01510, &__first11492);
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp11511, &__last11493);
      struct std___List_const_iterator_int_ t1513 = agg_tmp01510;
      struct std___List_const_iterator_int_ t1514 = agg_tmp11511;
      struct std___List_iterator_int_ r1515 = std____cxx11__list_int__std__allocator_int_____erase_2(t1494, t1513, t1514);
      agg_tmp21512 = r1515;
    } else {
      struct std___List_const_iterator_int_ agg_tmp31516;
      struct std___List_iterator_int_ agg_tmp41517;
      struct std___List_iterator_int_ agg_tmp51518;
      struct std___List_iterator_int_ agg_tmp61519;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp31516, &__last11493);
      agg_tmp41517 = __first21489; // copy
      agg_tmp51518 = __last21490; // copy
      struct std___List_const_iterator_int_ t1520 = agg_tmp31516;
      struct std___List_iterator_int_ t1521 = agg_tmp41517;
      struct std___List_iterator_int_ t1522 = agg_tmp51518;
      struct std___List_iterator_int_ r1523 = std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_std___List_iterator_int___void_(t1494, t1520, t1521, t1522);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp61519 = r1523;
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6assignISt14_List_iteratorIiEvEEvT_S6_
void void_std____cxx11__list_int__std__allocator_int_____assign_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* v1524, struct std___List_iterator_int_ v1525, struct std___List_iterator_int_ v1526) {
bb1527:
  struct std____cxx11__list_int__std__allocator_int__* this1528;
  struct std___List_iterator_int_ __first1529;
  struct std___List_iterator_int_ __last1530;
  struct std___List_iterator_int_ agg_tmp01531;
  struct std___List_iterator_int_ agg_tmp11532;
  struct std____false_type agg_tmp21533;
  this1528 = v1524;
  __first1529 = v1525;
  __last1530 = v1526;
  struct std____cxx11__list_int__std__allocator_int__* t1534 = this1528;
  agg_tmp01531 = __first1529; // copy
  agg_tmp11532 = __last1530; // copy
  struct std___List_iterator_int_ t1535 = agg_tmp01531;
  struct std___List_iterator_int_ t1536 = agg_tmp11532;
  struct std____false_type t1537 = agg_tmp21533;
  void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_std___List_iterator_int___(t1534, t1535, t1536, t1537);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6removeERKi
unsigned long std____cxx11__list_int__std__allocator_int_____remove(struct std____cxx11__list_int__std__allocator_int__* v1538, int* v1539) {
bb1540:
  struct std____cxx11__list_int__std__allocator_int__* this1541;
  int* __value1542;
  unsigned long __retval1543;
  struct std____cxx11__list_int__std__allocator_int__ __to_destroy1544;
  struct std__allocator_int_ ref_tmp01545;
  struct std___List_iterator_int_ __first1546;
  struct std___List_iterator_int_ __last1547;
  this1541 = v1538;
  __value1542 = v1539;
  struct std____cxx11__list_int__std__allocator_int__* t1548 = this1541;
  struct std__allocator_int_ r1549 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t1548);
  ref_tmp01545 = r1549;
    std____cxx11__list_int__std__allocator_int_____list(&__to_destroy1544, &ref_tmp01545);
  {
    std__allocator_int____allocator(&ref_tmp01545);
  }
    struct std___List_iterator_int_ r1550 = std____cxx11__list_int__std__allocator_int_____begin(t1548);
    __first1546 = r1550;
    struct std___List_iterator_int_ r1551 = std____cxx11__list_int__std__allocator_int_____end(t1548);
    __last1547 = r1551;
      while (1) {
        _Bool r1552 = std__operator___2(&__first1546, &__last1547);
        _Bool u1553 = !r1552;
        if (!u1553) break;
          struct std___List_iterator_int_ __next1554;
          __next1554 = __first1546; // copy
          struct std___List_iterator_int_* r1555 = std___List_iterator_int___operator___2(&__next1554);
            int* r1556 = std___List_iterator_int___operator____const(&__first1546);
            int t1557 = *r1556;
            int* t1558 = __value1542;
            int t1559 = *t1558;
            _Bool c1560 = ((t1557 == t1559)) ? 1 : 0;
            if (c1560) {
              struct std___List_const_iterator_int_ agg_tmp01561;
              struct std___List_iterator_int_ ref_tmp11562;
              struct std___List_const_iterator_int_ agg_tmp11563;
              struct std___List_iterator_int_ r1564 = std____cxx11__list_int__std__allocator_int_____begin(&__to_destroy1544);
              ref_tmp11562 = r1564;
              std___List_const_iterator_int____List_const_iterator_2(&agg_tmp01561, &ref_tmp11562);
              std___List_const_iterator_int____List_const_iterator_2(&agg_tmp11563, &__first1546);
              struct std___List_const_iterator_int_ t1565 = agg_tmp01561;
              struct std___List_const_iterator_int_ t1566 = agg_tmp11563;
              std____cxx11__list_int__std__allocator_int_____splice_4(&__to_destroy1544, t1565, t1548, t1566);
            }
          struct std___List_iterator_int_* r1567 = std___List_iterator_int___operator_(&__first1546, &__next1554);
      }
    unsigned long r1568 = std____cxx11__list_int__std__allocator_int_____size___const(&__to_destroy1544);
    __retval1543 = r1568;
    unsigned long t1569 = __retval1543;
    unsigned long ret_val1570 = t1569;
    {
      std____cxx11__list_int__std__allocator_int______list(&__to_destroy1544);
    }
    return ret_val1570;
  abort();
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1571, void* v1572) {
bb1573:
  struct std__basic_ostream_char__std__char_traits_char__* this1574;
  void* __pf1575;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1576;
  this1574 = v1571;
  __pf1575 = v1572;
  struct std__basic_ostream_char__std__char_traits_char__* t1577 = this1574;
  void* t1578 = __pf1575;
  struct std__basic_ostream_char__std__char_traits_char__* r1579 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1578)(t1577);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1576 = r1579;
  struct std__basic_ostream_char__std__char_traits_char__* t1580 = __retval1576;
  return t1580;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1581) {
bb1582:
  struct std__basic_ostream_char__std__char_traits_char__* __os1583;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1584;
  __os1583 = v1581;
  struct std__basic_ostream_char__std__char_traits_char__* t1585 = __os1583;
  struct std__basic_ostream_char__std__char_traits_char__* r1586 = std__ostream__flush(t1585);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1584 = r1586;
  struct std__basic_ostream_char__std__char_traits_char__* t1587 = __retval1584;
  return t1587;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1588) {
bb1589:
  struct std__ctype_char_* __f1590;
  struct std__ctype_char_* __retval1591;
  __f1590 = v1588;
    struct std__ctype_char_* t1592 = __f1590;
    _Bool cast1593 = (_Bool)t1592;
    _Bool u1594 = !cast1593;
    if (u1594) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t1595 = __f1590;
  __retval1591 = t1595;
  struct std__ctype_char_* t1596 = __retval1591;
  return t1596;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1597, char v1598) {
bb1599:
  struct std__ctype_char_* this1600;
  char __c1601;
  char __retval1602;
  this1600 = v1597;
  __c1601 = v1598;
  struct std__ctype_char_* t1603 = this1600;
    char t1604 = t1603->_M_widen_ok;
    _Bool cast1605 = (_Bool)t1604;
    if (cast1605) {
      char t1606 = __c1601;
      unsigned char cast1607 = (unsigned char)t1606;
      unsigned long cast1608 = (unsigned long)cast1607;
      char t1609 = t1603->_M_widen[cast1608];
      __retval1602 = t1609;
      char t1610 = __retval1602;
      return t1610;
    }
  std__ctype_char____M_widen_init___const(t1603);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1611 = __c1601;
  void** v1612 = (void**)t1603;
  void* v1613 = *((void**)v1612);
  char vcall1616 = (char)__VERIFIER_virtual_call_char_char(t1603, 6, t1611);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1602 = vcall1616;
  char t1617 = __retval1602;
  return t1617;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1618, char v1619) {
bb1620:
  struct std__basic_ios_char__std__char_traits_char__* this1621;
  char __c1622;
  char __retval1623;
  this1621 = v1618;
  __c1622 = v1619;
  struct std__basic_ios_char__std__char_traits_char__* t1624 = this1621;
  struct std__ctype_char_* t1625 = t1624->_M_ctype;
  struct std__ctype_char_* r1626 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1625);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1627 = __c1622;
  char r1628 = std__ctype_char___widen_char__const(r1626, t1627);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1623 = r1628;
  char t1629 = __retval1623;
  return t1629;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1630) {
bb1631:
  struct std__basic_ostream_char__std__char_traits_char__* __os1632;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1633;
  __os1632 = v1630;
  struct std__basic_ostream_char__std__char_traits_char__* t1634 = __os1632;
  struct std__basic_ostream_char__std__char_traits_char__* t1635 = __os1632;
  void** v1636 = (void**)t1635;
  void* v1637 = *((void**)v1636);
  unsigned char* cast1638 = (unsigned char*)v1637;
  long c1639 = -24;
  unsigned char* ptr1640 = &(cast1638)[c1639];
  long* cast1641 = (long*)ptr1640;
  long t1642 = *cast1641;
  unsigned char* cast1643 = (unsigned char*)t1635;
  unsigned char* ptr1644 = &(cast1643)[t1642];
  struct std__basic_ostream_char__std__char_traits_char__* cast1645 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1644;
  struct std__basic_ios_char__std__char_traits_char__* cast1646 = (struct std__basic_ios_char__std__char_traits_char__*)cast1645;
  char c1647 = 10;
  char r1648 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1646, c1647);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1649 = std__ostream__put(t1634, r1648);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1650 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1649);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1633 = r1650;
  struct std__basic_ostream_char__std__char_traits_char__* t1651 = __retval1633;
  return t1651;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v1652) {
bb1653:
  struct std____cxx11__list_int__std__allocator_int__* this1654;
  this1654 = v1652;
  struct std____cxx11__list_int__std__allocator_int__* t1655 = this1654;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base1656 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1655 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base1656);
  }
  return;
}

// function: main
int main() {
bb1657:
  int __retval1658;
  int SIZE1659;
  int array1660[4];
  struct std____cxx11__list_int__std__allocator_int__ values1661;
  struct std____cxx11__list_int__std__allocator_int__ otherValues1662;
  int ref_tmp01663;
  int ref_tmp11664;
  int ref_tmp21665;
  int ref_tmp31666;
  struct std___List_const_iterator_int_ agg_tmp01667;
  struct std___List_iterator_int_ ref_tmp41668;
  struct std___List_iterator_int_ agg_tmp11669;
  struct std___List_const_iterator_int_ agg_tmp21670;
  struct std___List_iterator_int_ ref_tmp51671;
  struct std___List_const_iterator_int_ agg_tmp31672;
  struct std___List_iterator_int_ ref_tmp61673;
  struct std___List_iterator_int_ agg_tmp41674;
  struct std___List_iterator_int_ agg_tmp51675;
  struct std___List_iterator_int_ agg_tmp61676;
  int ref_tmp71677;
  int c1678 = 0;
  __retval1658 = c1678;
  int c1679 = 4;
  SIZE1659 = c1679;
  // array copy
  __builtin_memcpy(array1660, __const_main_array, (unsigned long)4 * sizeof(__const_main_array[0]));
  std____cxx11__list_int__std__allocator_int_____list_2(&values1661);
    std____cxx11__list_int__std__allocator_int_____list_2(&otherValues1662);
      int c1680 = 1;
      ref_tmp01663 = c1680;
      std____cxx11__list_int__std__allocator_int_____push_front(&values1661, &ref_tmp01663);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c1681 = 2;
      ref_tmp11664 = c1681;
      std____cxx11__list_int__std__allocator_int_____push_front(&values1661, &ref_tmp11664);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c1682 = 4;
      ref_tmp21665 = c1682;
      std____cxx11__list_int__std__allocator_int_____push_back(&values1661, &ref_tmp21665);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c1683 = 3;
      ref_tmp31666 = c1683;
      std____cxx11__list_int__std__allocator_int_____push_back(&values1661, &ref_tmp31666);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1684 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r1685 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1684);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      std____cxx11__list_int__std__allocator_int_____sort(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1686 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r1687 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1686);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std___List_iterator_int_ r1688 = std____cxx11__list_int__std__allocator_int_____begin(&otherValues1662);
      ref_tmp41668 = r1688;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp01667, &ref_tmp41668);
      int* cast1689 = (int*)&(array1660);
      int* cast1690 = (int*)&(array1660);
      int t1691 = SIZE1659;
      int* ptr1692 = &(cast1690)[t1691];
      struct std___List_const_iterator_int_ t1693 = agg_tmp01667;
      struct std___List_iterator_int_ r1694 = std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_int___void_(&otherValues1662, t1693, cast1689, ptr1692);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      agg_tmp11669 = r1694;
      char* cast1695 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r1696 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1695);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&otherValues1662);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std___List_iterator_int_ r1697 = std____cxx11__list_int__std__allocator_int_____end(&values1661);
      ref_tmp51671 = r1697;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp21670, &ref_tmp51671);
      struct std___List_const_iterator_int_ t1698 = agg_tmp21670;
      std____cxx11__list_int__std__allocator_int_____splice_3(&values1661, t1698, &otherValues1662);
      char* cast1699 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r1700 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1699);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      std____cxx11__list_int__std__allocator_int_____sort(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1701 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r1702 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1701);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std___List_iterator_int_ r1703 = std____cxx11__list_int__std__allocator_int_____begin(&otherValues1662);
      ref_tmp61673 = r1703;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp31672, &ref_tmp61673);
      int* cast1704 = (int*)&(array1660);
      int* cast1705 = (int*)&(array1660);
      int t1706 = SIZE1659;
      int* ptr1707 = &(cast1705)[t1706];
      struct std___List_const_iterator_int_ t1708 = agg_tmp31672;
      struct std___List_iterator_int_ r1709 = std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_int___void_(&otherValues1662, t1708, cast1704, ptr1707);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      agg_tmp41674 = r1709;
      std____cxx11__list_int__std__allocator_int_____sort(&otherValues1662);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1710 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r1711 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1710);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&otherValues1662);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      std____cxx11__list_int__std__allocator_int_____merge_2(&values1661, &otherValues1662);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1712 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r1713 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1712);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1714 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* r1715 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1714);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&otherValues1662);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      std____cxx11__list_int__std__allocator_int_____pop_front(&values1661);
      std____cxx11__list_int__std__allocator_int_____pop_back(&values1661);
      char* cast1716 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r1717 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1716);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1718 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* r1719 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1717, cast1718);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      unsigned long r1720 = std____cxx11__list_int__std__allocator_int_____unique(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1721 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* r1722 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1721);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      std____cxx11__list_int__std__allocator_int_____swap(&values1661, &otherValues1662);
      char* cast1723 = (char*)&(_str_10);
      struct std__basic_ostream_char__std__char_traits_char__* r1724 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1723);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1725 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* r1726 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1725);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&otherValues1662);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std___List_iterator_int_ r1727 = std____cxx11__list_int__std__allocator_int_____begin(&otherValues1662);
      agg_tmp51675 = r1727;
      struct std___List_iterator_int_ r1728 = std____cxx11__list_int__std__allocator_int_____end(&otherValues1662);
      agg_tmp61676 = r1728;
      struct std___List_iterator_int_ t1729 = agg_tmp51675;
      struct std___List_iterator_int_ t1730 = agg_tmp61676;
      void_std____cxx11__list_int__std__allocator_int_____assign_std___List_iterator_int___void_(&values1661, t1729, t1730);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1731 = (char*)&(_str_11);
      struct std__basic_ostream_char__std__char_traits_char__* r1732 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1731);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      std____cxx11__list_int__std__allocator_int_____merge_2(&values1661, &otherValues1662);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1733 = (char*)&(_str_12);
      struct std__basic_ostream_char__std__char_traits_char__* r1734 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1733);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c1735 = 4;
      ref_tmp71677 = c1735;
      unsigned long r1736 = std____cxx11__list_int__std__allocator_int_____remove(&values1661, &ref_tmp71677);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast1737 = (char*)&(_str_13);
      struct std__basic_ostream_char__std__char_traits_char__* r1738 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1737);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void_printList_int_(&values1661);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r1739 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        {
          std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
        }
        {
          std____cxx11__list_int__std__allocator_int______list(&values1661);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c1740 = 0;
      __retval1658 = c1740;
      int t1741 = __retval1658;
      int ret_val1742 = t1741;
      {
        std____cxx11__list_int__std__allocator_int______list(&otherValues1662);
      }
      {
        std____cxx11__list_int__std__allocator_int______list(&values1661);
      }
      return ret_val1742;
  int t1743 = __retval1658;
  return t1743;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1744) {
bb1745:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1746;
  this1746 = v1744;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1747 = this1746;
  struct std__allocator_std___List_node_int__* base1748 = (struct std__allocator_std___List_node_int__*)((char *)t1747 + 0);
  std__allocator_std___List_node_int_____allocator_2(base1748);
    std____detail___List_node_header___List_node_header(&t1747->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1749) {
bb1750:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1751;
  this1751 = v1749;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1752 = this1751;
  {
    struct std__allocator_std___List_node_int__* base1753 = (struct std__allocator_std___List_node_int__*)((char *)t1752 + 0);
    std__allocator_std___List_node_int______allocator(base1753);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base_2(struct std____cxx11___List_base_int__std__allocator_int__* v1754) {
bb1755:
  struct std____cxx11___List_base_int__std__allocator_int__* this1756;
  this1756 = v1754;
  struct std____cxx11___List_base_int__std__allocator_int__* t1757 = this1756;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(&t1757->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v1758) {
bb1759:
  struct std____detail___List_node_header* this1760;
  struct std____detail___List_node_base* __retval1761;
  this1760 = v1758;
  struct std____detail___List_node_header* t1762 = this1760;
  struct std____detail___List_node_base* base1763 = (struct std____detail___List_node_base*)((char *)t1762 + 0);
  __retval1761 = base1763;
  struct std____detail___List_node_base* t1764 = __retval1761;
  return t1764;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1765) {
bb1766:
  int* __location1767;
  __location1767 = v1765;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v1768, int* v1769) {
bb1770:
  struct std__allocator_std___List_node_int__* __a1771;
  int* __p1772;
  __a1771 = v1768;
  __p1772 = v1769;
  int* t1773 = __p1772;
  void_std__destroy_at_int_(t1773);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1774) {
bb1775:
  struct __gnu_cxx____aligned_membuf_int_* this1776;
  void* __retval1777;
  this1776 = v1774;
  struct __gnu_cxx____aligned_membuf_int_* t1778 = this1776;
  void* cast1779 = (void*)&(t1778->_M_storage);
  __retval1777 = cast1779;
  void* t1780 = __retval1777;
  return t1780;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1781) {
bb1782:
  struct __gnu_cxx____aligned_membuf_int_* this1783;
  int* __retval1784;
  this1783 = v1781;
  struct __gnu_cxx____aligned_membuf_int_* t1785 = this1783;
  void* r1786 = __gnu_cxx____aligned_membuf_int____M_addr(t1785);
  int* cast1787 = (int*)r1786;
  __retval1784 = cast1787;
  int* t1788 = __retval1784;
  return t1788;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v1789) {
bb1790:
  struct std___List_node_int_* this1791;
  int* __retval1792;
  this1791 = v1789;
  struct std___List_node_int_* t1793 = this1791;
  int* r1794 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1793->_M_storage);
  __retval1792 = r1794;
  int* t1795 = __retval1792;
  return t1795;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1796:
  _Bool __retval1797;
    _Bool c1798 = 0;
    __retval1797 = c1798;
    _Bool t1799 = __retval1797;
    return t1799;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v1800, struct std___List_node_int_* v1801, unsigned long v1802) {
bb1803:
  struct std____new_allocator_std___List_node_int__* this1804;
  struct std___List_node_int_* __p1805;
  unsigned long __n1806;
  this1804 = v1800;
  __p1805 = v1801;
  __n1806 = v1802;
  struct std____new_allocator_std___List_node_int__* t1807 = this1804;
    unsigned long c1808 = 8;
    unsigned long c1809 = 16;
    _Bool c1810 = ((c1808 > c1809)) ? 1 : 0;
    if (c1810) {
      struct std___List_node_int_* t1811 = __p1805;
      void* cast1812 = (void*)t1811;
      unsigned long t1813 = __n1806;
      unsigned long c1814 = 24;
      unsigned long b1815 = t1813 * c1814;
      unsigned long c1816 = 8;
      operator_delete_3(cast1812, b1815, c1816);
      return;
    }
  struct std___List_node_int_* t1817 = __p1805;
  void* cast1818 = (void*)t1817;
  unsigned long t1819 = __n1806;
  unsigned long c1820 = 24;
  unsigned long b1821 = t1819 * c1820;
  operator_delete_2(cast1818, b1821);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v1822, struct std___List_node_int_* v1823, unsigned long v1824) {
bb1825:
  struct std__allocator_std___List_node_int__* this1826;
  struct std___List_node_int_* __p1827;
  unsigned long __n1828;
  this1826 = v1822;
  __p1827 = v1823;
  __n1828 = v1824;
  struct std__allocator_std___List_node_int__* t1829 = this1826;
    _Bool r1830 = std____is_constant_evaluated();
    if (r1830) {
      struct std___List_node_int_* t1831 = __p1827;
      void* cast1832 = (void*)t1831;
      operator_delete(cast1832);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base1833 = (struct std____new_allocator_std___List_node_int__*)((char *)t1829 + 0);
  struct std___List_node_int_* t1834 = __p1827;
  unsigned long t1835 = __n1828;
  std____new_allocator_std___List_node_int_____deallocate(base1833, t1834, t1835);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v1836, struct std___List_node_int_* v1837, unsigned long v1838) {
bb1839:
  struct std__allocator_std___List_node_int__* __a1840;
  struct std___List_node_int_* __p1841;
  unsigned long __n1842;
  __a1840 = v1836;
  __p1841 = v1837;
  __n1842 = v1838;
  struct std__allocator_std___List_node_int__* t1843 = __a1840;
  struct std___List_node_int_* t1844 = __p1841;
  unsigned long t1845 = __n1842;
  std__allocator_std___List_node_int_____deallocate(t1843, t1844, t1845);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v1846, struct std___List_node_int_* v1847) {
bb1848:
  struct std____cxx11___List_base_int__std__allocator_int__* this1849;
  struct std___List_node_int_* __p1850;
  this1849 = v1846;
  __p1850 = v1847;
  struct std____cxx11___List_base_int__std__allocator_int__* t1851 = this1849;
  struct std__allocator_std___List_node_int__* base1852 = (struct std__allocator_std___List_node_int__*)((char *)&(t1851->_M_impl) + 0);
  struct std___List_node_int_* t1853 = __p1850;
  unsigned long c1854 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base1852, t1853, c1854);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v1855, struct std___List_node_int_* v1856) {
bb1857:
  struct std____cxx11___List_base_int__std__allocator_int__* this1858;
  struct std___List_node_int_* __p1859;
  this1858 = v1855;
  __p1859 = v1856;
  struct std____cxx11___List_base_int__std__allocator_int__* t1860 = this1858;
  struct std__allocator_std___List_node_int__* base1861 = (struct std__allocator_std___List_node_int__*)((char *)&(t1860->_M_impl) + 0);
  struct std___List_node_int_* t1862 = __p1859;
  int* r1863 = std___List_node_int____M_valptr(t1862);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base1861, r1863);
  struct std___List_node_int_* t1864 = __p1859;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t1860, t1864);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v1865) {
bb1866:
  struct std___List_node_int_* this1867;
  struct std___List_node_int_* __retval1868;
  this1867 = v1865;
  struct std___List_node_int_* t1869 = this1867;
  __retval1868 = t1869;
  struct std___List_node_int_* t1870 = __retval1868;
  return t1870;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v1871) {
bb1872:
  struct std____cxx11___List_base_int__std__allocator_int__* this1873;
  struct std____detail___List_node_base* __cur1874;
  this1873 = v1871;
  struct std____cxx11___List_base_int__std__allocator_int__* t1875 = this1873;
  struct std____detail___List_node_base* base1876 = (struct std____detail___List_node_base*)((char *)&(t1875->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1877 = base1876->_M_next;
  __cur1874 = t1877;
    while (1) {
      struct std____detail___List_node_base* t1878 = __cur1874;
      struct std____detail___List_node_base* r1879 = std____detail___List_node_header___M_base(&t1875->_M_impl._M_node);
      if (__cir_exc_active) {
        return;
      }
      _Bool c1880 = ((t1878 != r1879)) ? 1 : 0;
      if (!c1880) break;
        struct std___List_node_int_* __tmp1881;
        struct std____detail___List_node_base* t1882 = __cur1874;
        struct std___List_node_int_* derived1883 = (struct std___List_node_int_*)((char *)t1882 - 0);
        __tmp1881 = derived1883;
        struct std___List_node_int_* t1884 = __tmp1881;
        struct std____detail___List_node_base* base1885 = (struct std____detail___List_node_base*)((char *)t1884 + 0);
        struct std____detail___List_node_base* t1886 = base1885->_M_next;
        __cur1874 = t1886;
        struct std___List_node_int_* t1887 = __tmp1881;
        struct std___List_node_int_* r1888 = std___List_node_int____M_node_ptr(t1887);
        if (__cir_exc_active) {
          return;
        }
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t1875, r1888);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1889) {
bb1890:
  struct std____cxx11___List_base_int__std__allocator_int__* this1891;
  this1891 = v1889;
  struct std____cxx11___List_base_int__std__allocator_int__* t1892 = this1891;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t1892);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t1892->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v1893) {
bb1894:
  struct std____new_allocator_std___List_node_int__* this1895;
  this1895 = v1893;
  struct std____new_allocator_std___List_node_int__* t1896 = this1895;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator_2(struct std__allocator_std___List_node_int__* v1897) {
bb1898:
  struct std__allocator_std___List_node_int__* this1899;
  this1899 = v1897;
  struct std__allocator_std___List_node_int__* t1900 = this1899;
  struct std____new_allocator_std___List_node_int__* base1901 = (struct std____new_allocator_std___List_node_int__*)((char *)t1900 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1901);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1902) {
bb1903:
  struct std____detail___List_node_header* this1904;
  this1904 = v1902;
  struct std____detail___List_node_header* t1905 = this1904;
  struct std____detail___List_node_base* base1906 = (struct std____detail___List_node_base*)((char *)t1905 + 0);
  struct std____detail___List_size* base1907 = (struct std____detail___List_size*)((char *)t1905 + 16);
  std____detail___List_node_header___M_init(t1905);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1908, struct std____detail___List_size* v1909) {
bb1910:
  struct std____detail___List_size* this1911;
  struct std____detail___List_size* unnamed1912;
  struct std____detail___List_size* __retval1913;
  this1911 = v1908;
  unnamed1912 = v1909;
  struct std____detail___List_size* t1914 = this1911;
  struct std____detail___List_size* t1915 = unnamed1912;
  unsigned long t1916 = t1915->_M_size;
  t1914->_M_size = t1916;
  __retval1913 = t1914;
  struct std____detail___List_size* t1917 = __retval1913;
  return t1917;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1918) {
bb1919:
  struct std____detail___List_node_header* this1920;
  struct std____detail___List_size ref_tmp01921;
  this1920 = v1918;
  struct std____detail___List_node_header* t1922 = this1920;
  struct std____detail___List_node_base* base1923 = (struct std____detail___List_node_base*)((char *)t1922 + 0);
  struct std____detail___List_node_base* base1924 = (struct std____detail___List_node_base*)((char *)t1922 + 0);
  base1924->_M_prev = base1923;
  struct std____detail___List_node_base* base1925 = (struct std____detail___List_node_base*)((char *)t1922 + 0);
  base1925->_M_next = base1923;
  struct std____detail___List_size* base1926 = (struct std____detail___List_size*)((char *)t1922 + 16);
  ref_tmp01921 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1927 = std____detail___List_size__operator_(base1926, &ref_tmp01921);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1928, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1929) {
bb1930:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1931;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd1932;
  this1931 = v1928;
  __gd1932 = v1929;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1933 = this1931;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1934 = __gd1932;
  struct std__allocator_std___List_node_int__* t1935 = t1934->_M_alloc;
  t1933->_M_alloc = t1935;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1936 = __gd1932;
  struct std___List_node_int_* t1937 = t1936->_M_ptr;
  t1933->_M_ptr = t1937;
  struct std___List_node_int_* c1938 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1939 = __gd1932;
  t1939->_M_ptr = c1938;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v1940) {
bb1941:
  struct std___List_node_int_* __ptr1942;
  struct std___List_node_int_* __retval1943;
  __ptr1942 = v1940;
  struct std___List_node_int_* t1944 = __ptr1942;
  __retval1943 = t1944;
  struct std___List_node_int_* t1945 = __retval1943;
  return t1945;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v1946) {
bb1947:
  struct std___List_node_int_** __ptr1948;
  struct std___List_node_int_* __retval1949;
  __ptr1948 = v1946;
  struct std___List_node_int_** t1950 = __ptr1948;
  struct std___List_node_int_* t1951 = *t1950;
  struct std___List_node_int_* r1952 = std___List_node_int___std__to_address_std___List_node_int___(t1951);
  __retval1949 = r1952;
  struct std___List_node_int_* t1953 = __retval1949;
  return t1953;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1954) {
bb1955:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1956;
  struct std___List_node_int_* __retval1957;
  this1956 = v1954;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1958 = this1956;
  struct std___List_node_int_* r1959 = auto_std____to_address_std___List_node_int___(&t1958->_M_ptr);
  __retval1957 = r1959;
  struct std___List_node_int_* t1960 = __retval1957;
  return t1960;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1961) {
bb1962:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1963;
  _Bool __retval1964;
  this1963 = v1961;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1965 = this1963;
  struct std___List_node_int_* t1966 = t1965->_M_ptr;
  _Bool cast1967 = (_Bool)t1966;
  __retval1964 = cast1967;
  _Bool t1968 = __retval1964;
  return t1968;
}

// function: _ZNSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* v1969) {
bb1970:
  struct std____detail___List_node_base* this1971;
  struct std____detail___List_node_base* __retval1972;
  this1971 = v1969;
  struct std____detail___List_node_base* t1973 = this1971;
  __retval1972 = t1973;
  struct std____detail___List_node_base* t1974 = __retval1972;
  return t1974;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1975) {
bb1976:
  struct std____new_allocator_int_* this1977;
  this1977 = v1975;
  struct std____new_allocator_int_* t1978 = this1977;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v1979, struct std__allocator_int_* v1980) {
bb1981:
  struct std__allocator_std___List_node_int__* this1982;
  struct std__allocator_int_* unnamed1983;
  this1982 = v1979;
  unnamed1983 = v1980;
  struct std__allocator_std___List_node_int__* t1984 = this1982;
  struct std____new_allocator_std___List_node_int__* base1985 = (struct std____new_allocator_std___List_node_int__*)((char *)t1984 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1985);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1986, struct std__allocator_std___List_node_int__* v1987) {
bb1988:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1989;
  struct std__allocator_std___List_node_int__* __a1990;
  this1989 = v1986;
  __a1990 = v1987;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1991 = this1989;
  struct std__allocator_std___List_node_int__* base1992 = (struct std__allocator_std___List_node_int__*)((char *)t1991 + 0);
  struct std__allocator_std___List_node_int__* t1993 = __a1990;
  std__allocator_std___List_node_int_____allocator(base1992, t1993);
    std____detail___List_node_header___List_node_header(&t1991->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1994, struct std__allocator_std___List_node_int__* v1995) {
bb1996:
  struct std____cxx11___List_base_int__std__allocator_int__* this1997;
  struct std__allocator_std___List_node_int__* __a1998;
  this1997 = v1994;
  __a1998 = v1995;
  struct std____cxx11___List_base_int__std__allocator_int__* t1999 = this1997;
  struct std__allocator_std___List_node_int__* t2000 = __a1998;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t1999->_M_impl, t2000);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v2001) {
bb2002:
  struct std__allocator_std___List_node_int__* this2003;
  this2003 = v2001;
  struct std__allocator_std___List_node_int__* t2004 = this2003;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v2005, int* v2006) {
bb2007:
  int* __location2008;
  int* __args2009;
  int* __retval2010;
  void* __loc2011;
  __location2008 = v2005;
  __args2009 = v2006;
  int* t2012 = __location2008;
  void* cast2013 = (void*)t2012;
  __loc2011 = cast2013;
    void* t2014 = __loc2011;
    int* cast2015 = (int*)t2014;
    int* t2016 = __args2009;
    int t2017 = *t2016;
    *cast2015 = t2017;
    __retval2010 = cast2015;
    int* t2018 = __retval2010;
    return t2018;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* v2019, int* v2020, int* v2021) {
bb2022:
  struct std__allocator_std___List_node_int__* __a2023;
  int* __p2024;
  int* __args2025;
  __a2023 = v2019;
  __p2024 = v2020;
  __args2025 = v2021;
  int* t2026 = __p2024;
  int* t2027 = __args2025;
  int* r2028 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t2026, t2027);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* v2029, int* v2030) {
bb2031:
  struct std____cxx11__list_int__std__allocator_int__* this2032;
  int* __args2033;
  struct std___List_node_int_* __retval2034;
  struct std__allocator_std___List_node_int__* __alloc2035;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard2036;
  this2032 = v2029;
  __args2033 = v2030;
  struct std____cxx11__list_int__std__allocator_int__* t2037 = this2032;
  struct std____cxx11___List_base_int__std__allocator_int__* base2038 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t2037 + 0);
  struct std__allocator_std___List_node_int__* r2039 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base2038);
  __alloc2035 = r2039;
  struct std__allocator_std___List_node_int__* t2040 = __alloc2035;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r2041 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t2040);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __guard2036 = r2041;
    struct std__allocator_std___List_node_int__* t2042 = __alloc2035;
    struct std___List_node_int_* r2043 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard2036);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard2036);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* r2044 = std___List_node_int____M_valptr(r2043);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard2036);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* t2045 = __args2033;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(t2042, r2044, t2045);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base2046 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard2036) + 0);
    struct std___List_node_int_* r2047 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base2046);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard2036);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    __retval2034 = r2047;
    struct std___List_node_int_* t2048 = __retval2034;
    struct std___List_node_int_* ret_val2049 = t2048;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard2036);
    }
    return ret_val2049;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* v2050, struct std___List_iterator_int_ v2051, int* v2052) {
bb2053:
  struct std____cxx11__list_int__std__allocator_int__* this2054;
  struct std___List_iterator_int_ __position2055;
  int* __args2056;
  struct std___List_node_int_* __tmp2057;
  this2054 = v2050;
  __position2055 = v2051;
  __args2056 = v2052;
  struct std____cxx11__list_int__std__allocator_int__* t2058 = this2054;
  int* t2059 = __args2056;
  struct std___List_node_int_* r2060 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(t2058, t2059);
  if (__cir_exc_active) {
    return;
  }
  __tmp2057 = r2060;
  struct std___List_node_int_* t2061 = __tmp2057;
  struct std____detail___List_node_base* base2062 = (struct std____detail___List_node_base*)((char *)t2061 + 0);
  struct std____detail___List_node_base* t2063 = __position2055._M_node;
  std____detail___List_node_base___M_hook(base2062, t2063);
  struct std____cxx11___List_base_int__std__allocator_int__* base2064 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t2058 + 0);
  unsigned long c2065 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base2064, c2065);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v2066) {
bb2067:
  struct std___List_iterator_int_* this2068;
  struct std___List_iterator_int_* __retval2069;
  this2068 = v2066;
  struct std___List_iterator_int_* t2070 = this2068;
  struct std____detail___List_node_base* t2071 = t2070->_M_node;
  struct std____detail___List_node_base* t2072 = t2071->_M_prev;
  t2070->_M_node = t2072;
  __retval2069 = t2070;
  struct std___List_iterator_int_* t2073 = __retval2069;
  return t2073;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v2074) {
bb2075:
  struct std____cxx11__list_int__std__allocator_int__* this2076;
  int* __retval2077;
  struct std___List_iterator_int_ __tmp2078;
  this2076 = v2074;
  struct std____cxx11__list_int__std__allocator_int__* t2079 = this2076;
    do {
          _Bool r2080 = std____cxx11__list_int__std__allocator_int_____empty___const(t2079);
          if (r2080) {
            char* cast2081 = (char*)&(_str_16);
            int c2082 = 1674;
            char* cast2083 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast2084 = (char*)&(_str_17);
            std____glibcxx_assert_fail(cast2081, c2082, cast2083, cast2084);
          }
      _Bool c2085 = 0;
      if (!c2085) break;
    } while (1);
  struct std___List_iterator_int_ r2086 = std____cxx11__list_int__std__allocator_int_____end(t2079);
  __tmp2078 = r2086;
  struct std___List_iterator_int_* r2087 = std___List_iterator_int___operator__(&__tmp2078);
  int* r2088 = std___List_iterator_int___operator____const(&__tmp2078);
  __retval2077 = r2088;
  int* t2089 = __retval2077;
  return t2089;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRiEEES4_DpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* v2090, int* v2091) {
bb2092:
  struct std____cxx11__list_int__std__allocator_int__* this2093;
  int* __args2094;
  int* __retval2095;
  struct std___List_iterator_int_ agg_tmp02096;
  this2093 = v2090;
  __args2094 = v2091;
  struct std____cxx11__list_int__std__allocator_int__* t2097 = this2093;
  struct std___List_iterator_int_ r2098 = std____cxx11__list_int__std__allocator_int_____end(t2097);
  agg_tmp02096 = r2098;
  int* t2099 = __args2094;
  struct std___List_iterator_int_ t2100 = agg_tmp02096;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int__(t2097, t2100, t2099);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r2101 = std____cxx11__list_int__std__allocator_int_____back(t2097);
  __retval2095 = r2101;
  int* t2102 = __retval2095;
  return t2102;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchIPiEEvT_S5_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* v2103, int* v2104, int* v2105, struct std____false_type v2106) {
bb2107:
  struct std____cxx11__list_int__std__allocator_int__* this2108;
  int* __first2109;
  int* __last2110;
  struct std____false_type unnamed2111;
  _Bool __notempty2112;
  this2108 = v2103;
  __first2109 = v2104;
  __last2110 = v2105;
  unnamed2111 = v2106;
  struct std____cxx11__list_int__std__allocator_int__* t2113 = this2108;
  int* t2114 = __first2109;
  int* t2115 = __last2110;
  _Bool c2116 = ((t2114 != t2115)) ? 1 : 0;
  __notempty2112 = c2116;
    while (1) {
      int* t2118 = __first2109;
      int* t2119 = __last2110;
      _Bool c2120 = ((t2118 != t2119)) ? 1 : 0;
      if (!c2120) break;
      int* t2121 = __first2109;
      int* r2122 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t2113, t2121);
      if (__cir_exc_active) {
        return;
      }
    for_step2117: ;
      int* t2123 = __first2109;
      int c2124 = 1;
      int* ptr2125 = &(t2123)[c2124];
      __first2109 = ptr2125;
    }
    _Bool t2126 = __notempty2112;
    if (t2126) {
        struct std___List_iterator_int_ ref_tmp02127;
        struct std___List_iterator_int_ ref_tmp12128;
        struct std___List_iterator_int_ r2129 = std____cxx11__list_int__std__allocator_int_____begin(t2113);
        ref_tmp02127 = r2129;
        struct std___List_iterator_int_ r2130 = std____cxx11__list_int__std__allocator_int_____end(t2113);
        ref_tmp12128 = r2130;
        _Bool r2131 = std__operator___2(&ref_tmp02127, &ref_tmp12128);
        if (r2131) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v2132, struct std____new_allocator_std___List_node_int__* v2133) {
bb2134:
  struct std____new_allocator_std___List_node_int__* this2135;
  struct std____new_allocator_std___List_node_int__* unnamed2136;
  this2135 = v2132;
  unnamed2136 = v2133;
  struct std____new_allocator_std___List_node_int__* t2137 = this2135;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v2138, struct std__allocator_std___List_node_int__* v2139) {
bb2140:
  struct std__allocator_std___List_node_int__* this2141;
  struct std__allocator_std___List_node_int__* __a2142;
  this2141 = v2138;
  __a2142 = v2139;
  struct std__allocator_std___List_node_int__* t2143 = this2141;
  struct std____new_allocator_std___List_node_int__* base2144 = (struct std____new_allocator_std___List_node_int__*)((char *)t2143 + 0);
  struct std__allocator_std___List_node_int__* t2145 = __a2142;
  struct std____new_allocator_std___List_node_int__* base2146 = (struct std____new_allocator_std___List_node_int__*)((char *)t2145 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base2144, base2146);
  return;
}

// function: _ZSt10__distanceIiElSt20_List_const_iteratorIT_ES2_St18input_iterator_tag
long long_std____distance_int__2(struct std___List_const_iterator_int_ v2147, struct std___List_const_iterator_int_ v2148, struct std__input_iterator_tag v2149) {
bb2150:
  struct std___List_const_iterator_int_ __first2151;
  struct std___List_const_iterator_int_ __last2152;
  struct std__input_iterator_tag unnamed2153;
  long __retval2154;
  struct std___List_const_iterator_int_ __beyond2155;
  _Bool __whole2156;
  long __n2157;
  __first2151 = v2147;
  __last2152 = v2148;
  unnamed2153 = v2149;
  __beyond2155 = __last2152; // copy
  struct std___List_const_iterator_int_* r2158 = std___List_const_iterator_int___operator__(&__beyond2155);
  _Bool r2159 = std__operator___3(&__first2151, &__beyond2155);
  __whole2156 = r2159;
    _Bool t2160 = __whole2156;
    _Bool isconst2161 = 0;
    _Bool ternary2162;
    if (isconst2161) {
      _Bool t2163 = __whole2156;
      ternary2162 = (_Bool)t2163;
    } else {
      _Bool c2164 = 0;
      ternary2162 = (_Bool)c2164;
    }
    if (ternary2162) {
      struct std____detail___List_node_base* t2165 = __last2152._M_node;
      struct std____detail___List_node_header* derived2166 = ((t2165) ? (struct std____detail___List_node_header*)((char *)t2165 - 0) : (struct std____detail___List_node_header*)0);
      struct std____detail___List_size* base2167 = (struct std____detail___List_size*)((char *)derived2166 + 16);
      unsigned long t2168 = base2167->_M_size;
      long cast2169 = (long)t2168;
      __retval2154 = cast2169;
      long t2170 = __retval2154;
      return t2170;
    }
  long c2171 = 0;
  __n2157 = c2171;
    while (1) {
      _Bool r2172 = std__operator___3(&__first2151, &__last2152);
      _Bool u2173 = !r2172;
      if (!u2173) break;
        struct std___List_const_iterator_int_* r2174 = std___List_const_iterator_int___operator__(&__first2151);
        long t2175 = __n2157;
        long u2176 = t2175 + 1;
        __n2157 = u2176;
    }
  long t2177 = __n2157;
  __retval2154 = t2177;
  long t2178 = __retval2154;
  return t2178;
}

// function: _ZSt10__distanceIiElSt14_List_iteratorIT_ES2_St18input_iterator_tag
long long_std____distance_int_(struct std___List_iterator_int_ v2179, struct std___List_iterator_int_ v2180, struct std__input_iterator_tag v2181) {
bb2182:
  struct std___List_iterator_int_ __first2183;
  struct std___List_iterator_int_ __last2184;
  struct std__input_iterator_tag __tag2185;
  long __retval2186;
  struct std___List_const_iterator_int_ agg_tmp02187;
  struct std___List_const_iterator_int_ agg_tmp12188;
  struct std__input_iterator_tag agg_tmp22189;
  __first2183 = v2179;
  __last2184 = v2180;
  __tag2185 = v2181;
  std___List_const_iterator_int____List_const_iterator_2(&agg_tmp02187, &__first2183);
  std___List_const_iterator_int____List_const_iterator_2(&agg_tmp12188, &__last2184);
  struct std___List_const_iterator_int_ t2190 = agg_tmp02187;
  struct std___List_const_iterator_int_ t2191 = agg_tmp12188;
  struct std__input_iterator_tag t2192 = agg_tmp22189;
  long r2193 = long_std____distance_int__2(t2190, t2191, t2192);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval2186 = r2193;
  long t2194 = __retval2186;
  return t2194;
}

// function: _ZSt19__iterator_categoryISt14_List_iteratorIiEENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_iterator_int_____iterator_category_std____iterator_category_std___List_iterator_int___(struct std___List_iterator_int_* v2195) {
bb2196:
  struct std___List_iterator_int_* unnamed2197;
  struct std__bidirectional_iterator_tag __retval2198;
  unnamed2197 = v2195;
  struct std__bidirectional_iterator_tag t2199 = __retval2198;
  return t2199;
}

// function: _ZSt8distanceISt14_List_iteratorIiEENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_std___List_iterator_int_____difference_type_std__distance_std___List_iterator_int___(struct std___List_iterator_int_ v2200, struct std___List_iterator_int_ v2201) {
bb2202:
  struct std___List_iterator_int_ __first2203;
  struct std___List_iterator_int_ __last2204;
  long __retval2205;
  struct std___List_iterator_int_ agg_tmp02206;
  struct std___List_iterator_int_ agg_tmp12207;
  struct std__input_iterator_tag agg_tmp22208;
  struct std__bidirectional_iterator_tag ref_tmp02209;
  __first2203 = v2200;
  __last2204 = v2201;
  agg_tmp02206 = __first2203; // copy
  agg_tmp12207 = __last2204; // copy
  struct std__bidirectional_iterator_tag r2210 = std__iterator_traits_std___List_iterator_int_____iterator_category_std____iterator_category_std___List_iterator_int___(&__first2203);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  ref_tmp02209 = r2210;
  struct std__input_iterator_tag* base2211 = (struct std__input_iterator_tag*)((char *)&(ref_tmp02209) + 0);
  struct std___List_iterator_int_ t2212 = agg_tmp02206;
  struct std___List_iterator_int_ t2213 = agg_tmp12207;
  struct std__input_iterator_tag t2214 = agg_tmp22208;
  long r2215 = long_std____distance_int_(t2212, t2213, t2214);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval2205 = r2215;
  long t2216 = __retval2205;
  return t2216;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchISt14_List_iteratorIiEEEvT_S6_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* v2217, struct std___List_iterator_int_ v2218, struct std___List_iterator_int_ v2219, struct std____false_type v2220) {
bb2221:
  struct std____cxx11__list_int__std__allocator_int__* this2222;
  struct std___List_iterator_int_ __first2223;
  struct std___List_iterator_int_ __last2224;
  struct std____false_type unnamed2225;
  _Bool __notempty2226;
  this2222 = v2217;
  __first2223 = v2218;
  __last2224 = v2219;
  unnamed2225 = v2220;
  struct std____cxx11__list_int__std__allocator_int__* t2227 = this2222;
  _Bool r2228 = std__operator___2(&__first2223, &__last2224);
  _Bool u2229 = !r2228;
  __notempty2226 = u2229;
    while (1) {
      _Bool r2231 = std__operator___2(&__first2223, &__last2224);
      _Bool u2232 = !r2231;
      if (!u2232) break;
      int* r2233 = std___List_iterator_int___operator____const(&__first2223);
      int* r2234 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t2227, r2233);
      if (__cir_exc_active) {
        return;
      }
    for_step2230: ;
      struct std___List_iterator_int_* r2235 = std___List_iterator_int___operator___2(&__first2223);
    }
    _Bool t2236 = __notempty2226;
    if (t2236) {
        struct std___List_iterator_int_ ref_tmp02237;
        struct std___List_iterator_int_ ref_tmp12238;
        struct std___List_iterator_int_ r2239 = std____cxx11__list_int__std__allocator_int_____begin(t2227);
        ref_tmp02237 = r2239;
        struct std___List_iterator_int_ r2240 = std____cxx11__list_int__std__allocator_int_____end(t2227);
        ref_tmp12238 = r2240;
        _Bool r2241 = std__operator___2(&ref_tmp02237, &ref_tmp12238);
        if (r2241) {
          __builtin_unreachable();
        }
    }
  return;
}

