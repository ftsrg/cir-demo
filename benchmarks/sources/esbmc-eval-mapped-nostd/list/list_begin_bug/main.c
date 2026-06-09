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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int __const_main_myints[5] = {75, 23, 65, 42, 13};
char _str[10] = "*it != 75";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_begin_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_3[15] = "!this->empty()";
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* p0);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
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

// function: _ZNSt7__cxx114listIiSaIiEEC2IPivEET_S5_RKS1_
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* v5, int* v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std____cxx11__list_int__std__allocator_int__* this10;
  int* __first11;
  int* __last12;
  struct std__allocator_int_* __a13;
  struct std__allocator_std___List_node_int__ ref_tmp014;
  struct std____false_type agg_tmp015;
  this10 = v5;
  __first11 = v6;
  __last12 = v7;
  __a13 = v8;
  struct std____cxx11__list_int__std__allocator_int__* t16 = this10;
  struct std____cxx11___List_base_int__std__allocator_int__* base17 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t16 + 0);
  struct std__allocator_int_* t18 = __a13;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp014, t18);
    std____cxx11___List_base_int__std__allocator_int______List_base(base17, &ref_tmp014);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp014);
  }
    int* t19 = __first11;
    int* t20 = __last12;
    struct std____false_type t21 = agg_tmp015;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(t16, t19, t20, t21);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v22) {
bb23:
  struct std__allocator_int_* this24;
  this24 = v22;
  struct std__allocator_int_* t25 = this24;
  return;
}

// function: _ZNSt14_List_iteratorIiEC2Ev
void std___List_iterator_int____List_iterator_2(struct std___List_iterator_int_* v26) {
bb27:
  struct std___List_iterator_int_* this28;
  this28 = v26;
  struct std___List_iterator_int_* t29 = this28;
  struct std____detail___List_node_base* c30 = ((void*)0);
  t29->_M_node = c30;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v31) {
bb32:
  struct std____cxx11__list_int__std__allocator_int__* this33;
  struct std___List_iterator_int_ __retval34;
  this33 = v31;
  struct std____cxx11__list_int__std__allocator_int__* t35 = this33;
  struct std____cxx11___List_base_int__std__allocator_int__* base36 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t35 + 0);
  struct std____detail___List_node_base* base37 = (struct std____detail___List_node_base*)((char *)&(base36->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t38 = base37->_M_next;
  std___List_iterator_int____List_iterator(&__retval34, t38);
  struct std___List_iterator_int_ t39 = __retval34;
  return t39;
}

// function: _ZNSt14_List_iteratorIiEaSEOS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v40, struct std___List_iterator_int_* v41) {
bb42:
  struct std___List_iterator_int_* this43;
  struct std___List_iterator_int_* unnamed44;
  struct std___List_iterator_int_* __retval45;
  this43 = v40;
  unnamed44 = v41;
  struct std___List_iterator_int_* t46 = this43;
  struct std___List_iterator_int_* t47 = unnamed44;
  struct std____detail___List_node_base* t48 = t47->_M_node;
  t46->_M_node = t48;
  __retval45 = t46;
  struct std___List_iterator_int_* t49 = __retval45;
  return t49;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v50) {
bb51:
  struct std___List_iterator_int_* this52;
  int* __retval53;
  this52 = v50;
  struct std___List_iterator_int_* t54 = this52;
  struct std____detail___List_node_base* t55 = t54->_M_node;
  struct std___List_node_int_* derived56 = ((t55) ? (struct std___List_node_int_*)((char *)t55 - 0) : (struct std___List_node_int_*)0);
  int* r57 = std___List_node_int____M_valptr(derived56);
  __retval53 = r57;
  int* t58 = __retval53;
  return t58;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v59, void* v60) {
bb61:
  struct std__basic_ostream_char__std__char_traits_char__* this62;
  void* __pf63;
  struct std__basic_ostream_char__std__char_traits_char__* __retval64;
  this62 = v59;
  __pf63 = v60;
  struct std__basic_ostream_char__std__char_traits_char__* t65 = this62;
  void* t66 = __pf63;
  struct std__basic_ostream_char__std__char_traits_char__* r67 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t66)(t65);
  __retval64 = r67;
  struct std__basic_ostream_char__std__char_traits_char__* t68 = __retval64;
  return t68;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v69) {
bb70:
  struct std__basic_ostream_char__std__char_traits_char__* __os71;
  struct std__basic_ostream_char__std__char_traits_char__* __retval72;
  __os71 = v69;
  struct std__basic_ostream_char__std__char_traits_char__* t73 = __os71;
  struct std__basic_ostream_char__std__char_traits_char__* r74 = std__ostream__flush(t73);
  __retval72 = r74;
  struct std__basic_ostream_char__std__char_traits_char__* t75 = __retval72;
  return t75;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v76) {
bb77:
  struct std__ctype_char_* __f78;
  struct std__ctype_char_* __retval79;
  __f78 = v76;
    struct std__ctype_char_* t80 = __f78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t83 = __f78;
  __retval79 = t83;
  struct std__ctype_char_* t84 = __retval79;
  return t84;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v85, char v86) {
bb87:
  struct std__ctype_char_* this88;
  char __c89;
  char __retval90;
  this88 = v85;
  __c89 = v86;
  struct std__ctype_char_* t91 = this88;
    char t92 = t91->_M_widen_ok;
    _Bool cast93 = (_Bool)t92;
    if (cast93) {
      char t94 = __c89;
      unsigned char cast95 = (unsigned char)t94;
      unsigned long cast96 = (unsigned long)cast95;
      char t97 = t91->_M_widen[cast96];
      __retval90 = t97;
      char t98 = __retval90;
      return t98;
    }
  std__ctype_char____M_widen_init___const(t91);
  char t99 = __c89;
  void** v100 = (void**)t91;
  void* v101 = *((void**)v100);
  char vcall104 = (char)__VERIFIER_virtual_call_char_char(t91, 6, t99);
  __retval90 = vcall104;
  char t105 = __retval90;
  return t105;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v106, char v107) {
bb108:
  struct std__basic_ios_char__std__char_traits_char__* this109;
  char __c110;
  char __retval111;
  this109 = v106;
  __c110 = v107;
  struct std__basic_ios_char__std__char_traits_char__* t112 = this109;
  struct std__ctype_char_* t113 = t112->_M_ctype;
  struct std__ctype_char_* r114 = std__ctype_char__const__std____check_facet_std__ctype_char___(t113);
  char t115 = __c110;
  char r116 = std__ctype_char___widen_char__const(r114, t115);
  __retval111 = r116;
  char t117 = __retval111;
  return t117;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v118) {
bb119:
  struct std__basic_ostream_char__std__char_traits_char__* __os120;
  struct std__basic_ostream_char__std__char_traits_char__* __retval121;
  __os120 = v118;
  struct std__basic_ostream_char__std__char_traits_char__* t122 = __os120;
  struct std__basic_ostream_char__std__char_traits_char__* t123 = __os120;
  void** v124 = (void**)t123;
  void* v125 = *((void**)v124);
  unsigned char* cast126 = (unsigned char*)v125;
  long c127 = -24;
  unsigned char* ptr128 = &(cast126)[c127];
  long* cast129 = (long*)ptr128;
  long t130 = *cast129;
  unsigned char* cast131 = (unsigned char*)t123;
  unsigned char* ptr132 = &(cast131)[t130];
  struct std__basic_ostream_char__std__char_traits_char__* cast133 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr132;
  struct std__basic_ios_char__std__char_traits_char__* cast134 = (struct std__basic_ios_char__std__char_traits_char__*)cast133;
  char c135 = 10;
  char r136 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast134, c135);
  struct std__basic_ostream_char__std__char_traits_char__* r137 = std__ostream__put(t122, r136);
  struct std__basic_ostream_char__std__char_traits_char__* r138 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r137);
  __retval121 = r138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval121;
  return t139;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v140) {
bb141:
  struct std____cxx11__list_int__std__allocator_int__* this142;
  this142 = v140;
  struct std____cxx11__list_int__std__allocator_int__* t143 = this142;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base144 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t143 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base144);
  }
  return;
}

// function: main
int main() {
bb145:
  int __retval146;
  int myints147[5];
  struct std____cxx11__list_int__std__allocator_int__ mylist148;
  struct std__allocator_int_ ref_tmp0149;
  struct std___List_iterator_int_ it150;
  struct std___List_iterator_int_ ref_tmp1151;
  int c152 = 0;
  __retval146 = c152;
  // array copy
  __builtin_memcpy(myints147, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast153 = (int*)&(myints147);
  int* cast154 = (int*)&(myints147);
  int c155 = 5;
  int* ptr156 = &(cast154)[c155];
  std__allocator_int___allocator(&ref_tmp0149);
    std____cxx11__list_int__std__allocator_int_____list_int___void_(&mylist148, cast153, ptr156, &ref_tmp0149);
  {
    std__allocator_int____allocator(&ref_tmp0149);
  }
    std___List_iterator_int____List_iterator_2(&it150);
    struct std___List_iterator_int_ r157 = std____cxx11__list_int__std__allocator_int_____begin(&mylist148);
    ref_tmp1151 = r157;
    struct std___List_iterator_int_* r158 = std___List_iterator_int___operator_(&it150, &ref_tmp1151);
    int* r159 = std___List_iterator_int___operator____const(&it150);
    int t160 = *r159;
    int c161 = 75;
    _Bool c162 = ((t160 != c161)) ? 1 : 0;
    if (c162) {
    } else {
      char* cast163 = (char*)&(_str);
      char* c164 = _str_1;
      unsigned int c165 = 22;
      char* cast166 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast163, c164, c165, cast166);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r167 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c168 = 0;
    __retval146 = c168;
    int t169 = __retval146;
    int ret_val170 = t169;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist148);
    }
    return ret_val170;
  int t171 = __retval146;
  return t171;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v172) {
bb173:
  struct std____new_allocator_int_* this174;
  this174 = v172;
  struct std____new_allocator_int_* t175 = this174;
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v176) {
bb177:
  struct std____detail___List_node_header* this178;
  struct std____detail___List_node_base* __retval179;
  this178 = v176;
  struct std____detail___List_node_header* t180 = this178;
  struct std____detail___List_node_base* base181 = (struct std____detail___List_node_base*)((char *)t180 + 0);
  __retval179 = base181;
  struct std____detail___List_node_base* t182 = __retval179;
  return t182;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v183) {
bb184:
  int* __location185;
  __location185 = v183;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v186, int* v187) {
bb188:
  struct std__allocator_std___List_node_int__* __a189;
  int* __p190;
  __a189 = v186;
  __p190 = v187;
  int* t191 = __p190;
  void_std__destroy_at_int_(t191);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v192) {
bb193:
  struct __gnu_cxx____aligned_membuf_int_* this194;
  void* __retval195;
  this194 = v192;
  struct __gnu_cxx____aligned_membuf_int_* t196 = this194;
  void* cast197 = (void*)&(t196->_M_storage);
  __retval195 = cast197;
  void* t198 = __retval195;
  return t198;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v199) {
bb200:
  struct __gnu_cxx____aligned_membuf_int_* this201;
  int* __retval202;
  this201 = v199;
  struct __gnu_cxx____aligned_membuf_int_* t203 = this201;
  void* r204 = __gnu_cxx____aligned_membuf_int____M_addr(t203);
  int* cast205 = (int*)r204;
  __retval202 = cast205;
  int* t206 = __retval202;
  return t206;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v207) {
bb208:
  struct std___List_node_int_* this209;
  int* __retval210;
  this209 = v207;
  struct std___List_node_int_* t211 = this209;
  int* r212 = __gnu_cxx____aligned_membuf_int____M_ptr(&t211->_M_storage);
  __retval210 = r212;
  int* t213 = __retval210;
  return t213;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb214:
  _Bool __retval215;
    _Bool c216 = 0;
    __retval215 = c216;
    _Bool t217 = __retval215;
    return t217;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v218, struct std___List_node_int_* v219, unsigned long v220) {
bb221:
  struct std____new_allocator_std___List_node_int__* this222;
  struct std___List_node_int_* __p223;
  unsigned long __n224;
  this222 = v218;
  __p223 = v219;
  __n224 = v220;
  struct std____new_allocator_std___List_node_int__* t225 = this222;
    unsigned long c226 = 8;
    unsigned long c227 = 16;
    _Bool c228 = ((c226 > c227)) ? 1 : 0;
    if (c228) {
      struct std___List_node_int_* t229 = __p223;
      void* cast230 = (void*)t229;
      unsigned long t231 = __n224;
      unsigned long c232 = 24;
      unsigned long b233 = t231 * c232;
      unsigned long c234 = 8;
      operator_delete_3(cast230, b233, c234);
      return;
    }
  struct std___List_node_int_* t235 = __p223;
  void* cast236 = (void*)t235;
  unsigned long t237 = __n224;
  unsigned long c238 = 24;
  unsigned long b239 = t237 * c238;
  operator_delete_2(cast236, b239);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v240, struct std___List_node_int_* v241, unsigned long v242) {
bb243:
  struct std__allocator_std___List_node_int__* this244;
  struct std___List_node_int_* __p245;
  unsigned long __n246;
  this244 = v240;
  __p245 = v241;
  __n246 = v242;
  struct std__allocator_std___List_node_int__* t247 = this244;
    _Bool r248 = std____is_constant_evaluated();
    if (r248) {
      struct std___List_node_int_* t249 = __p245;
      void* cast250 = (void*)t249;
      operator_delete(cast250);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base251 = (struct std____new_allocator_std___List_node_int__*)((char *)t247 + 0);
  struct std___List_node_int_* t252 = __p245;
  unsigned long t253 = __n246;
  std____new_allocator_std___List_node_int_____deallocate(base251, t252, t253);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v254, struct std___List_node_int_* v255, unsigned long v256) {
bb257:
  struct std__allocator_std___List_node_int__* __a258;
  struct std___List_node_int_* __p259;
  unsigned long __n260;
  __a258 = v254;
  __p259 = v255;
  __n260 = v256;
  struct std__allocator_std___List_node_int__* t261 = __a258;
  struct std___List_node_int_* t262 = __p259;
  unsigned long t263 = __n260;
  std__allocator_std___List_node_int_____deallocate(t261, t262, t263);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v264, struct std___List_node_int_* v265) {
bb266:
  struct std____cxx11___List_base_int__std__allocator_int__* this267;
  struct std___List_node_int_* __p268;
  this267 = v264;
  __p268 = v265;
  struct std____cxx11___List_base_int__std__allocator_int__* t269 = this267;
  struct std__allocator_std___List_node_int__* base270 = (struct std__allocator_std___List_node_int__*)((char *)&(t269->_M_impl) + 0);
  struct std___List_node_int_* t271 = __p268;
  unsigned long c272 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base270, t271, c272);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v273, struct std___List_node_int_* v274) {
bb275:
  struct std____cxx11___List_base_int__std__allocator_int__* this276;
  struct std___List_node_int_* __p277;
  this276 = v273;
  __p277 = v274;
  struct std____cxx11___List_base_int__std__allocator_int__* t278 = this276;
  struct std__allocator_std___List_node_int__* base279 = (struct std__allocator_std___List_node_int__*)((char *)&(t278->_M_impl) + 0);
  struct std___List_node_int_* t280 = __p277;
  int* r281 = std___List_node_int____M_valptr(t280);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base279, r281);
  struct std___List_node_int_* t282 = __p277;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t278, t282);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v283) {
bb284:
  struct std___List_node_int_* this285;
  struct std___List_node_int_* __retval286;
  this285 = v283;
  struct std___List_node_int_* t287 = this285;
  __retval286 = t287;
  struct std___List_node_int_* t288 = __retval286;
  return t288;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v289) {
bb290:
  struct std____cxx11___List_base_int__std__allocator_int__* this291;
  struct std____detail___List_node_base* __cur292;
  this291 = v289;
  struct std____cxx11___List_base_int__std__allocator_int__* t293 = this291;
  struct std____detail___List_node_base* base294 = (struct std____detail___List_node_base*)((char *)&(t293->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t295 = base294->_M_next;
  __cur292 = t295;
    while (1) {
      struct std____detail___List_node_base* t296 = __cur292;
      struct std____detail___List_node_base* r297 = std____detail___List_node_header___M_base(&t293->_M_impl._M_node);
      _Bool c298 = ((t296 != r297)) ? 1 : 0;
      if (!c298) break;
        struct std___List_node_int_* __tmp299;
        struct std____detail___List_node_base* t300 = __cur292;
        struct std___List_node_int_* derived301 = (struct std___List_node_int_*)((char *)t300 - 0);
        __tmp299 = derived301;
        struct std___List_node_int_* t302 = __tmp299;
        struct std____detail___List_node_base* base303 = (struct std____detail___List_node_base*)((char *)t302 + 0);
        struct std____detail___List_node_base* t304 = base303->_M_next;
        __cur292 = t304;
        struct std___List_node_int_* t305 = __tmp299;
        struct std___List_node_int_* r306 = std___List_node_int____M_node_ptr(t305);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t293, r306);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v307) {
bb308:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this309;
  this309 = v307;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t310 = this309;
  {
    struct std__allocator_std___List_node_int__* base311 = (struct std__allocator_std___List_node_int__*)((char *)t310 + 0);
    std__allocator_std___List_node_int______allocator(base311);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v312) {
bb313:
  struct std____cxx11___List_base_int__std__allocator_int__* this314;
  this314 = v312;
  struct std____cxx11___List_base_int__std__allocator_int__* t315 = this314;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t315);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t315->_M_impl);
  }
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v316, struct std__allocator_int_* v317) {
bb318:
  struct std__allocator_std___List_node_int__* this319;
  struct std__allocator_int_* unnamed320;
  this319 = v316;
  unnamed320 = v317;
  struct std__allocator_std___List_node_int__* t321 = this319;
  struct std____new_allocator_std___List_node_int__* base322 = (struct std____new_allocator_std___List_node_int__*)((char *)t321 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base322);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v323, struct std__allocator_std___List_node_int__* v324) {
bb325:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this326;
  struct std__allocator_std___List_node_int__* __a327;
  this326 = v323;
  __a327 = v324;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t328 = this326;
  struct std__allocator_std___List_node_int__* base329 = (struct std__allocator_std___List_node_int__*)((char *)t328 + 0);
  struct std__allocator_std___List_node_int__* t330 = __a327;
  std__allocator_std___List_node_int_____allocator(base329, t330);
    std____detail___List_node_header___List_node_header(&t328->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v331, struct std__allocator_std___List_node_int__* v332) {
bb333:
  struct std____cxx11___List_base_int__std__allocator_int__* this334;
  struct std__allocator_std___List_node_int__* __a335;
  this334 = v331;
  __a335 = v332;
  struct std____cxx11___List_base_int__std__allocator_int__* t336 = this334;
  struct std__allocator_std___List_node_int__* t337 = __a335;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t336->_M_impl, t337);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v338) {
bb339:
  struct std__allocator_std___List_node_int__* this340;
  this340 = v338;
  struct std__allocator_std___List_node_int__* t341 = this340;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v342) {
bb343:
  struct std____cxx11___List_base_int__std__allocator_int__* this344;
  struct std__allocator_std___List_node_int__* __retval345;
  this344 = v342;
  struct std____cxx11___List_base_int__std__allocator_int__* t346 = this344;
  struct std__allocator_std___List_node_int__* base347 = (struct std__allocator_std___List_node_int__*)((char *)&(t346->_M_impl) + 0);
  __retval345 = base347;
  struct std__allocator_std___List_node_int__* t348 = __retval345;
  return t348;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v349) {
bb350:
  struct std____new_allocator_std___List_node_int__* this351;
  unsigned long __retval352;
  this351 = v349;
  struct std____new_allocator_std___List_node_int__* t353 = this351;
  unsigned long c354 = 9223372036854775807;
  unsigned long c355 = 24;
  unsigned long b356 = c354 / c355;
  __retval352 = b356;
  unsigned long t357 = __retval352;
  return t357;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v358, unsigned long v359, void* v360) {
bb361:
  struct std____new_allocator_std___List_node_int__* this362;
  unsigned long __n363;
  void* unnamed364;
  struct std___List_node_int_* __retval365;
  this362 = v358;
  __n363 = v359;
  unnamed364 = v360;
  struct std____new_allocator_std___List_node_int__* t366 = this362;
    unsigned long t367 = __n363;
    unsigned long r368 = std____new_allocator_std___List_node_int______M_max_size___const(t366);
    _Bool c369 = ((t367 > r368)) ? 1 : 0;
    if (c369) {
        unsigned long t370 = __n363;
        unsigned long c371 = -1;
        unsigned long c372 = 24;
        unsigned long b373 = c371 / c372;
        _Bool c374 = ((t370 > b373)) ? 1 : 0;
        if (c374) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c375 = 8;
    unsigned long c376 = 16;
    _Bool c377 = ((c375 > c376)) ? 1 : 0;
    if (c377) {
      unsigned long __al378;
      unsigned long c379 = 8;
      __al378 = c379;
      unsigned long t380 = __n363;
      unsigned long c381 = 24;
      unsigned long b382 = t380 * c381;
      unsigned long t383 = __al378;
      void* r384 = operator_new_2(b382, t383);
      struct std___List_node_int_* cast385 = (struct std___List_node_int_*)r384;
      __retval365 = cast385;
      struct std___List_node_int_* t386 = __retval365;
      return t386;
    }
  unsigned long t387 = __n363;
  unsigned long c388 = 24;
  unsigned long b389 = t387 * c388;
  void* r390 = operator_new(b389);
  struct std___List_node_int_* cast391 = (struct std___List_node_int_*)r390;
  __retval365 = cast391;
  struct std___List_node_int_* t392 = __retval365;
  return t392;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v393, unsigned long v394) {
bb395:
  struct std__allocator_std___List_node_int__* this396;
  unsigned long __n397;
  struct std___List_node_int_* __retval398;
  this396 = v393;
  __n397 = v394;
  struct std__allocator_std___List_node_int__* t399 = this396;
    _Bool r400 = std____is_constant_evaluated();
    if (r400) {
        unsigned long t401 = __n397;
        unsigned long c402 = 24;
        unsigned long ovr403;
        _Bool ovf404 = __builtin_mul_overflow(t401, c402, &ovr403);
        __n397 = ovr403;
        if (ovf404) {
          std____throw_bad_array_new_length();
        }
      unsigned long t405 = __n397;
      void* r406 = operator_new(t405);
      struct std___List_node_int_* cast407 = (struct std___List_node_int_*)r406;
      __retval398 = cast407;
      struct std___List_node_int_* t408 = __retval398;
      return t408;
    }
  struct std____new_allocator_std___List_node_int__* base409 = (struct std____new_allocator_std___List_node_int__*)((char *)t399 + 0);
  unsigned long t410 = __n397;
  void* c411 = ((void*)0);
  struct std___List_node_int_* r412 = std____new_allocator_std___List_node_int_____allocate(base409, t410, c411);
  __retval398 = r412;
  struct std___List_node_int_* t413 = __retval398;
  return t413;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v414, unsigned long v415) {
bb416:
  struct std__allocator_std___List_node_int__* __a417;
  unsigned long __n418;
  struct std___List_node_int_* __retval419;
  __a417 = v414;
  __n418 = v415;
  struct std__allocator_std___List_node_int__* t420 = __a417;
  unsigned long t421 = __n418;
  struct std___List_node_int_* r422 = std__allocator_std___List_node_int_____allocate(t420, t421);
  __retval419 = r422;
  struct std___List_node_int_* t423 = __retval419;
  return t423;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v424, struct std__allocator_std___List_node_int__* v425, struct std___List_node_int_* v426) {
bb427:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this428;
  struct std__allocator_std___List_node_int__* __a429;
  struct std___List_node_int_* __ptr430;
  this428 = v424;
  __a429 = v425;
  __ptr430 = v426;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t431 = this428;
  struct std__allocator_std___List_node_int__* t432 = __a429;
  t431->_M_alloc = t432;
  struct std___List_node_int_* t433 = __ptr430;
  t431->_M_ptr = t433;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v434) {
bb435:
  struct std__allocator_std___List_node_int__* __a436;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval437;
  __a436 = v434;
  struct std__allocator_std___List_node_int__* t438 = __a436;
  struct std__allocator_std___List_node_int__* t439 = __a436;
  unsigned long c440 = 1;
  struct std___List_node_int_* r441 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t439, c440);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval437, t438, r441);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t442 = __retval437;
  return t442;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v443, struct std____allocated_ptr_std__allocator_std___List_node_int___* v444) {
bb445:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this446;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr447;
  this446 = v443;
  __ptr447 = v444;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t448 = this446;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base449 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t448 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t450 = __ptr447;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base449, t450);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base451 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t448 + 0);
    struct std___List_node_int_* r452 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base451);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v453) {
bb454:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this455;
  this455 = v453;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t456 = this455;
    struct std___List_node_int_* t457 = t456->_M_ptr;
    struct std___List_node_int_* c458 = ((void*)0);
    _Bool c459 = ((t457 != c458)) ? 1 : 0;
    if (c459) {
      struct std__allocator_std___List_node_int__* t460 = t456->_M_alloc;
      struct std___List_node_int_* t461 = t456->_M_ptr;
      unsigned long c462 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t460, t461, c462);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v463) {
bb464:
  struct std__allocator_std___List_node_int__* __a465;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval466;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0467;
  __a465 = v463;
  struct std__allocator_std___List_node_int__* t468 = __a465;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r469 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t468);
  ref_tmp0467 = r469;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval466, &ref_tmp0467);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0467);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t470 = __retval466;
  return t470;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v471, int* v472) {
bb473:
  int* __location474;
  int* __args475;
  int* __retval476;
  void* __loc477;
  __location474 = v471;
  __args475 = v472;
  int* t478 = __location474;
  void* cast479 = (void*)t478;
  __loc477 = cast479;
    void* t480 = __loc477;
    int* cast481 = (int*)t480;
    int* t482 = __args475;
    int t483 = *t482;
    *cast481 = t483;
    __retval476 = cast481;
    int* t484 = __retval476;
    return t484;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* v485, int* v486, int* v487) {
bb488:
  struct std__allocator_std___List_node_int__* __a489;
  int* __p490;
  int* __args491;
  __a489 = v485;
  __p490 = v486;
  __args491 = v487;
  int* t492 = __p490;
  int* t493 = __args491;
  int* r494 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t492, t493);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v495) {
bb496:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this497;
  struct std___List_node_int_* __retval498;
  this497 = v495;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t499 = this497;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base500 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t499 + 0);
  struct std___List_node_int_* r501 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base500);
  __retval498 = r501;
  struct std___List_node_int_* t502 = __retval498;
  return t502;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v503, void** v504) {
bb505:
  struct std___List_node_int_** __obj506;
  void** __new_val507;
  struct std___List_node_int_* __retval508;
  struct std___List_node_int_* __old_val509;
  __obj506 = v503;
  __new_val507 = v504;
  struct std___List_node_int_** t510 = __obj506;
  struct std___List_node_int_* t511 = *t510;
  __old_val509 = t511;
  void** t512 = __new_val507;
  struct std___List_node_int_* c513 = ((void*)0);
  struct std___List_node_int_** t514 = __obj506;
  *t514 = c513;
  struct std___List_node_int_* t515 = __old_val509;
  __retval508 = t515;
  struct std___List_node_int_* t516 = __retval508;
  return t516;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v517) {
bb518:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this519;
  struct std___List_node_int_* __retval520;
  void* ref_tmp0521;
  this519 = v517;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t522 = this519;
  void* c523 = ((void*)0);
  ref_tmp0521 = c523;
  struct std___List_node_int_* r524 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t522->_M_ptr, &ref_tmp0521);
  __retval520 = r524;
  struct std___List_node_int_* t525 = __retval520;
  return t525;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v526) {
bb527:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this528;
  this528 = v526;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t529 = this528;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base530 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t529 + 0);
      _Bool r531 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base530);
      if (r531) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base532 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t529 + 0);
        struct std___List_node_int_* r533 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base532);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base534 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t529 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base534);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* v535, int* v536) {
bb537:
  struct std____cxx11__list_int__std__allocator_int__* this538;
  int* __args539;
  struct std___List_node_int_* __retval540;
  struct std__allocator_std___List_node_int__* __alloc541;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard542;
  this538 = v535;
  __args539 = v536;
  struct std____cxx11__list_int__std__allocator_int__* t543 = this538;
  struct std____cxx11___List_base_int__std__allocator_int__* base544 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t543 + 0);
  struct std__allocator_std___List_node_int__* r545 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base544);
  __alloc541 = r545;
  struct std__allocator_std___List_node_int__* t546 = __alloc541;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r547 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t546);
  __guard542 = r547;
    struct std__allocator_std___List_node_int__* t548 = __alloc541;
    struct std___List_node_int_* r549 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard542);
    int* r550 = std___List_node_int____M_valptr(r549);
    int* t551 = __args539;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(t548, r550, t551);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base552 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard542) + 0);
    struct std___List_node_int_* r553 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base552);
    __retval540 = r553;
    struct std___List_node_int_* t554 = __retval540;
    struct std___List_node_int_* ret_val555 = t554;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard542);
    }
    return ret_val555;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v556, unsigned long v557) {
bb558:
  struct std____cxx11___List_base_int__std__allocator_int__* this559;
  unsigned long __n560;
  this559 = v556;
  __n560 = v557;
  struct std____cxx11___List_base_int__std__allocator_int__* t561 = this559;
  unsigned long t562 = __n560;
  struct std____detail___List_size* base563 = (struct std____detail___List_size*)((char *)&(t561->_M_impl._M_node) + 16);
  unsigned long t564 = base563->_M_size;
  unsigned long b565 = t564 + t562;
  base563->_M_size = b565;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* v566, struct std___List_iterator_int_ v567, int* v568) {
bb569:
  struct std____cxx11__list_int__std__allocator_int__* this570;
  struct std___List_iterator_int_ __position571;
  int* __args572;
  struct std___List_node_int_* __tmp573;
  this570 = v566;
  __position571 = v567;
  __args572 = v568;
  struct std____cxx11__list_int__std__allocator_int__* t574 = this570;
  int* t575 = __args572;
  struct std___List_node_int_* r576 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(t574, t575);
  __tmp573 = r576;
  struct std___List_node_int_* t577 = __tmp573;
  struct std____detail___List_node_base* base578 = (struct std____detail___List_node_base*)((char *)t577 + 0);
  struct std____detail___List_node_base* t579 = __position571._M_node;
  std____detail___List_node_base___M_hook(base578, t579);
  struct std____cxx11___List_base_int__std__allocator_int__* base580 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t574 + 0);
  unsigned long c581 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base580, c581);
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v582) {
bb583:
  struct std____detail___List_node_base* this584;
  struct std____detail___List_node_base* __retval585;
  this584 = v582;
  struct std____detail___List_node_base* t586 = this584;
  __retval585 = t586;
  struct std____detail___List_node_base* t587 = __retval585;
  return t587;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v588) {
bb589:
  struct std____cxx11__list_int__std__allocator_int__* this590;
  _Bool __retval591;
  this590 = v588;
  struct std____cxx11__list_int__std__allocator_int__* t592 = this590;
  struct std____cxx11___List_base_int__std__allocator_int__* base593 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t592 + 0);
  struct std____detail___List_node_base* base594 = (struct std____detail___List_node_base*)((char *)&(base593->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t595 = base594->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base596 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t592 + 0);
  struct std____detail___List_node_base* base597 = (struct std____detail___List_node_base*)((char *)&(base596->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r598 = std____detail___List_node_base___M_base___const(base597);
  _Bool c599 = ((t595 == r598)) ? 1 : 0;
  __retval591 = c599;
  _Bool t600 = __retval591;
  return t600;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v601) {
bb602:
  struct std___List_iterator_int_* this603;
  struct std___List_iterator_int_* __retval604;
  this603 = v601;
  struct std___List_iterator_int_* t605 = this603;
  struct std____detail___List_node_base* t606 = t605->_M_node;
  struct std____detail___List_node_base* t607 = t606->_M_prev;
  t605->_M_node = t607;
  __retval604 = t605;
  struct std___List_iterator_int_* t608 = __retval604;
  return t608;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v609) {
bb610:
  struct std____cxx11__list_int__std__allocator_int__* this611;
  int* __retval612;
  struct std___List_iterator_int_ __tmp613;
  this611 = v609;
  struct std____cxx11__list_int__std__allocator_int__* t614 = this611;
    do {
          _Bool r615 = std____cxx11__list_int__std__allocator_int_____empty___const(t614);
          if (r615) {
            char* cast616 = (char*)&(_str_2);
            int c617 = 1674;
            char* cast618 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast619 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast616, c617, cast618, cast619);
          }
      _Bool c620 = 0;
      if (!c620) break;
    } while (1);
  struct std___List_iterator_int_ r621 = std____cxx11__list_int__std__allocator_int_____end(t614);
  __tmp613 = r621;
  struct std___List_iterator_int_* r622 = std___List_iterator_int___operator__(&__tmp613);
  int* r623 = std___List_iterator_int___operator____const(&__tmp613);
  __retval612 = r623;
  int* t624 = __retval612;
  return t624;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRiEEES4_DpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* v625, int* v626) {
bb627:
  struct std____cxx11__list_int__std__allocator_int__* this628;
  int* __args629;
  int* __retval630;
  struct std___List_iterator_int_ agg_tmp0631;
  this628 = v625;
  __args629 = v626;
  struct std____cxx11__list_int__std__allocator_int__* t632 = this628;
  struct std___List_iterator_int_ r633 = std____cxx11__list_int__std__allocator_int_____end(t632);
  agg_tmp0631 = r633;
  int* t634 = __args629;
  struct std___List_iterator_int_ t635 = agg_tmp0631;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int__(t632, t635, t634);
  int* r636 = std____cxx11__list_int__std__allocator_int_____back(t632);
  __retval630 = r636;
  int* t637 = __retval630;
  return t637;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator__(struct std___List_iterator_int_* v638, struct std___List_iterator_int_* v639) {
bb640:
  struct std___List_iterator_int_* __x641;
  struct std___List_iterator_int_* __y642;
  _Bool __retval643;
  __x641 = v638;
  __y642 = v639;
  struct std___List_iterator_int_* t644 = __x641;
  struct std____detail___List_node_base* t645 = t644->_M_node;
  struct std___List_iterator_int_* t646 = __y642;
  struct std____detail___List_node_base* t647 = t646->_M_node;
  _Bool c648 = ((t645 == t647)) ? 1 : 0;
  __retval643 = c648;
  _Bool t649 = __retval643;
  return t649;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v650, struct std____detail___List_node_base* v651) {
bb652:
  struct std___List_iterator_int_* this653;
  struct std____detail___List_node_base* __x654;
  this653 = v650;
  __x654 = v651;
  struct std___List_iterator_int_* t655 = this653;
  struct std____detail___List_node_base* t656 = __x654;
  t655->_M_node = t656;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v657) {
bb658:
  struct std____cxx11__list_int__std__allocator_int__* this659;
  struct std___List_iterator_int_ __retval660;
  this659 = v657;
  struct std____cxx11__list_int__std__allocator_int__* t661 = this659;
  struct std____cxx11___List_base_int__std__allocator_int__* base662 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t661 + 0);
  struct std____detail___List_node_base* r663 = std____detail___List_node_header___M_base(&base662->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval660, r663);
  struct std___List_iterator_int_ t664 = __retval660;
  return t664;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchIPiEEvT_S5_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* v665, int* v666, int* v667, struct std____false_type v668) {
bb669:
  struct std____cxx11__list_int__std__allocator_int__* this670;
  int* __first671;
  int* __last672;
  struct std____false_type unnamed673;
  _Bool __notempty674;
  this670 = v665;
  __first671 = v666;
  __last672 = v667;
  unnamed673 = v668;
  struct std____cxx11__list_int__std__allocator_int__* t675 = this670;
  int* t676 = __first671;
  int* t677 = __last672;
  _Bool c678 = ((t676 != t677)) ? 1 : 0;
  __notempty674 = c678;
    while (1) {
      int* t680 = __first671;
      int* t681 = __last672;
      _Bool c682 = ((t680 != t681)) ? 1 : 0;
      if (!c682) break;
      int* t683 = __first671;
      int* r684 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t675, t683);
    for_step679: ;
      int* t685 = __first671;
      int c686 = 1;
      int* ptr687 = &(t685)[c686];
      __first671 = ptr687;
    }
    _Bool t688 = __notempty674;
    if (t688) {
        struct std___List_iterator_int_ ref_tmp0689;
        struct std___List_iterator_int_ ref_tmp1690;
        struct std___List_iterator_int_ r691 = std____cxx11__list_int__std__allocator_int_____begin(t675);
        ref_tmp0689 = r691;
        struct std___List_iterator_int_ r692 = std____cxx11__list_int__std__allocator_int_____end(t675);
        ref_tmp1690 = r692;
        _Bool r693 = std__operator__(&ref_tmp0689, &ref_tmp1690);
        if (r693) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v694) {
bb695:
  struct std____new_allocator_std___List_node_int__* this696;
  this696 = v694;
  struct std____new_allocator_std___List_node_int__* t697 = this696;
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v698, struct std____new_allocator_std___List_node_int__* v699) {
bb700:
  struct std____new_allocator_std___List_node_int__* this701;
  struct std____new_allocator_std___List_node_int__* unnamed702;
  this701 = v698;
  unnamed702 = v699;
  struct std____new_allocator_std___List_node_int__* t703 = this701;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v704, struct std__allocator_std___List_node_int__* v705) {
bb706:
  struct std__allocator_std___List_node_int__* this707;
  struct std__allocator_std___List_node_int__* __a708;
  this707 = v704;
  __a708 = v705;
  struct std__allocator_std___List_node_int__* t709 = this707;
  struct std____new_allocator_std___List_node_int__* base710 = (struct std____new_allocator_std___List_node_int__*)((char *)t709 + 0);
  struct std__allocator_std___List_node_int__* t711 = __a708;
  struct std____new_allocator_std___List_node_int__* base712 = (struct std____new_allocator_std___List_node_int__*)((char *)t711 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base710, base712);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v713) {
bb714:
  struct std____detail___List_node_header* this715;
  this715 = v713;
  struct std____detail___List_node_header* t716 = this715;
  struct std____detail___List_node_base* base717 = (struct std____detail___List_node_base*)((char *)t716 + 0);
  struct std____detail___List_size* base718 = (struct std____detail___List_size*)((char *)t716 + 16);
  std____detail___List_node_header___M_init(t716);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v719, struct std____detail___List_size* v720) {
bb721:
  struct std____detail___List_size* this722;
  struct std____detail___List_size* unnamed723;
  struct std____detail___List_size* __retval724;
  this722 = v719;
  unnamed723 = v720;
  struct std____detail___List_size* t725 = this722;
  struct std____detail___List_size* t726 = unnamed723;
  unsigned long t727 = t726->_M_size;
  t725->_M_size = t727;
  __retval724 = t725;
  struct std____detail___List_size* t728 = __retval724;
  return t728;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v729) {
bb730:
  struct std____detail___List_node_header* this731;
  struct std____detail___List_size ref_tmp0732;
  this731 = v729;
  struct std____detail___List_node_header* t733 = this731;
  struct std____detail___List_node_base* base734 = (struct std____detail___List_node_base*)((char *)t733 + 0);
  struct std____detail___List_node_base* base735 = (struct std____detail___List_node_base*)((char *)t733 + 0);
  base735->_M_prev = base734;
  struct std____detail___List_node_base* base736 = (struct std____detail___List_node_base*)((char *)t733 + 0);
  base736->_M_next = base734;
  struct std____detail___List_size* base737 = (struct std____detail___List_size*)((char *)t733 + 16);
  ref_tmp0732 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r738 = std____detail___List_size__operator_(base737, &ref_tmp0732);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v739, struct std____allocated_ptr_std__allocator_std___List_node_int___* v740) {
bb741:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this742;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd743;
  this742 = v739;
  __gd743 = v740;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t744 = this742;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t745 = __gd743;
  struct std__allocator_std___List_node_int__* t746 = t745->_M_alloc;
  t744->_M_alloc = t746;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t747 = __gd743;
  struct std___List_node_int_* t748 = t747->_M_ptr;
  t744->_M_ptr = t748;
  struct std___List_node_int_* c749 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t750 = __gd743;
  t750->_M_ptr = c749;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v751) {
bb752:
  struct std___List_node_int_* __ptr753;
  struct std___List_node_int_* __retval754;
  __ptr753 = v751;
  struct std___List_node_int_* t755 = __ptr753;
  __retval754 = t755;
  struct std___List_node_int_* t756 = __retval754;
  return t756;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v757) {
bb758:
  struct std___List_node_int_** __ptr759;
  struct std___List_node_int_* __retval760;
  __ptr759 = v757;
  struct std___List_node_int_** t761 = __ptr759;
  struct std___List_node_int_* t762 = *t761;
  struct std___List_node_int_* r763 = std___List_node_int___std__to_address_std___List_node_int___(t762);
  __retval760 = r763;
  struct std___List_node_int_* t764 = __retval760;
  return t764;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v765) {
bb766:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this767;
  struct std___List_node_int_* __retval768;
  this767 = v765;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t769 = this767;
  struct std___List_node_int_* r770 = auto_std____to_address_std___List_node_int___(&t769->_M_ptr);
  __retval768 = r770;
  struct std___List_node_int_* t771 = __retval768;
  return t771;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v772) {
bb773:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this774;
  _Bool __retval775;
  this774 = v772;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t776 = this774;
  struct std___List_node_int_* t777 = t776->_M_ptr;
  _Bool cast778 = (_Bool)t777;
  __retval775 = cast778;
  _Bool t779 = __retval775;
  return t779;
}

