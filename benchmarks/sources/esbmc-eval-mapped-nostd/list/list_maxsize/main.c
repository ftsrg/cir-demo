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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[27] = "Enter number of elements: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[30] = "That size exceeds the limit.\n";
char _str_2[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_3[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv[74] = "void std::list<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0);
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_unsigned_int_(struct std__basic_istream_char__std__char_traits_char__* p0, unsigned int* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, unsigned int* p1);
unsigned long std__allocator_traits_std__allocator_std___List_node_int_______max_size(struct std__allocator_std___List_node_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____max_size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std___List_const_iterator_int____List_const_iterator_3(struct std___List_const_iterator_int_* p0);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator_(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator___2(struct std___List_const_iterator_int_* p0);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* p0);
void void_std____advance_std___List_const_iterator_int___long_(struct std___List_const_iterator_int_* p0, long p1, struct std__bidirectional_iterator_tag p2);
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(struct std___List_const_iterator_int_* p0);
void void_std__advance_std___List_const_iterator_int___unsigned_long_(struct std___List_const_iterator_int_* p0, unsigned long p1);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void void_std__advance_std___List_const_iterator_int___long_(struct std___List_const_iterator_int_* p0, long p1);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int______M_resize_pos_unsigned_long___const(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long* p1);
extern int __gxx_personality_v0();
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
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int_(struct std__allocator_std___List_node_int__* p0, int* p1);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node__(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back__(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
extern void std____detail___List_node_base___M_unhook(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int______M_default_append(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1);
_Bool std__operator__(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1);
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* p0);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std___List_const_iterator_int____List_const_iterator_2(struct std___List_const_iterator_int_* p0, struct std___List_iterator_int_* p1);
void std____cxx11__list_int__std__allocator_int_____resize(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1);
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
  if (__cir_exc_active) {
    return;
  }
  int t30 = __state27;
  int r31 = std__operator_(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  if (__cir_exc_active) {
    return;
  }
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
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
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
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
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
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZNSirsERj
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v104, unsigned int* v105) {
bb106:
  struct std__basic_istream_char__std__char_traits_char__* this107;
  unsigned int* __n108;
  struct std__basic_istream_char__std__char_traits_char__* __retval109;
  this107 = v104;
  __n108 = v105;
  struct std__basic_istream_char__std__char_traits_char__* t110 = this107;
  unsigned int* t111 = __n108;
  struct std__basic_istream_char__std__char_traits_char__* r112 = std__istream__std__istream___M_extract_unsigned_int_(t110, t111);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval109 = r112;
  struct std__basic_istream_char__std__char_traits_char__* t113 = __retval109;
  return t113;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8max_sizeERKS2_
unsigned long std__allocator_traits_std__allocator_std___List_node_int_______max_size(struct std__allocator_std___List_node_int__* v114) {
bb115:
  struct std__allocator_std___List_node_int__* __a116;
  unsigned long __retval117;
  __a116 = v114;
  unsigned long c118 = -1;
  unsigned long c119 = 24;
  unsigned long b120 = c118 / c119;
  __retval117 = b120;
  unsigned long t121 = __retval117;
  return t121;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v122) {
bb123:
  struct std____cxx11___List_base_int__std__allocator_int__* this124;
  struct std__allocator_std___List_node_int__* __retval125;
  this124 = v122;
  struct std____cxx11___List_base_int__std__allocator_int__* t126 = this124;
  struct std__allocator_std___List_node_int__* base127 = (struct std__allocator_std___List_node_int__*)((char *)&(t126->_M_impl) + 0);
  __retval125 = base127;
  struct std__allocator_std___List_node_int__* t128 = __retval125;
  return t128;
}

// function: _ZNKSt7__cxx114listIiSaIiEE8max_sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____max_size___const(struct std____cxx11__list_int__std__allocator_int__* v129) {
bb130:
  struct std____cxx11__list_int__std__allocator_int__* this131;
  unsigned long __retval132;
  this131 = v129;
  struct std____cxx11__list_int__std__allocator_int__* t133 = this131;
  struct std____cxx11___List_base_int__std__allocator_int__* base134 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t133 + 0);
  struct std__allocator_std___List_node_int__* r135 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base134);
  unsigned long r136 = std__allocator_traits_std__allocator_std___List_node_int_______max_size(r135);
  __retval132 = r136;
  unsigned long t137 = __retval132;
  return t137;
}

// function: _ZNSt20_List_const_iteratorIiEC2Ev
void std___List_const_iterator_int____List_const_iterator_3(struct std___List_const_iterator_int_* v138) {
bb139:
  struct std___List_const_iterator_int_* this140;
  this140 = v138;
  struct std___List_const_iterator_int_* t141 = this140;
  struct std____detail___List_node_base* c142 = ((void*)0);
  t141->_M_node = c142;
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v143) {
bb144:
  struct std____cxx11___List_base_int__std__allocator_int__* this145;
  unsigned long __retval146;
  this145 = v143;
  struct std____cxx11___List_base_int__std__allocator_int__* t147 = this145;
  struct std____detail___List_size* base148 = (struct std____detail___List_size*)((char *)&(t147->_M_impl._M_node) + 16);
  unsigned long t149 = base148->_M_size;
  __retval146 = t149;
  unsigned long t150 = __retval146;
  return t150;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v151) {
bb152:
  struct std____cxx11__list_int__std__allocator_int__* this153;
  unsigned long __retval154;
  this153 = v151;
  struct std____cxx11__list_int__std__allocator_int__* t155 = this153;
  struct std____cxx11___List_base_int__std__allocator_int__* base156 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t155 + 0);
  unsigned long r157 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base156);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval154 = r157;
  unsigned long t158 = __retval154;
  return t158;
}

// function: _ZNSt20_List_const_iteratorIiEC2EPKNSt8__detail15_List_node_baseE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v159, struct std____detail___List_node_base* v160) {
bb161:
  struct std___List_const_iterator_int_* this162;
  struct std____detail___List_node_base* __x163;
  this162 = v159;
  __x163 = v160;
  struct std___List_const_iterator_int_* t164 = this162;
  struct std____detail___List_node_base* t165 = __x163;
  t164->_M_node = t165;
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5beginEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* v166) {
bb167:
  struct std____cxx11__list_int__std__allocator_int__* this168;
  struct std___List_const_iterator_int_ __retval169;
  this168 = v166;
  struct std____cxx11__list_int__std__allocator_int__* t170 = this168;
  struct std____cxx11___List_base_int__std__allocator_int__* base171 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t170 + 0);
  struct std____detail___List_node_base* base172 = (struct std____detail___List_node_base*)((char *)&(base171->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t173 = base172->_M_next;
  std___List_const_iterator_int____List_const_iterator(&__retval169, t173);
  struct std___List_const_iterator_int_ t174 = __retval169;
  return t174;
}

// function: _ZNSt20_List_const_iteratorIiEaSEOS0_
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator_(struct std___List_const_iterator_int_* v175, struct std___List_const_iterator_int_* v176) {
bb177:
  struct std___List_const_iterator_int_* this178;
  struct std___List_const_iterator_int_* unnamed179;
  struct std___List_const_iterator_int_* __retval180;
  this178 = v175;
  unnamed179 = v176;
  struct std___List_const_iterator_int_* t181 = this178;
  struct std___List_const_iterator_int_* t182 = unnamed179;
  struct std____detail___List_node_base* t183 = t182->_M_node;
  t181->_M_node = t183;
  __retval180 = t181;
  struct std___List_const_iterator_int_* t184 = __retval180;
  return t184;
}

// function: _ZNSt20_List_const_iteratorIiEppEv
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator___2(struct std___List_const_iterator_int_* v185) {
bb186:
  struct std___List_const_iterator_int_* this187;
  struct std___List_const_iterator_int_* __retval188;
  this187 = v185;
  struct std___List_const_iterator_int_* t189 = this187;
  struct std____detail___List_node_base* t190 = t189->_M_node;
  struct std____detail___List_node_base* t191 = t190->_M_next;
  t189->_M_node = t191;
  __retval188 = t189;
  struct std___List_const_iterator_int_* t192 = __retval188;
  return t192;
}

// function: _ZNSt20_List_const_iteratorIiEmmEv
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* v193) {
bb194:
  struct std___List_const_iterator_int_* this195;
  struct std___List_const_iterator_int_* __retval196;
  this195 = v193;
  struct std___List_const_iterator_int_* t197 = this195;
  struct std____detail___List_node_base* t198 = t197->_M_node;
  struct std____detail___List_node_base* t199 = t198->_M_prev;
  t197->_M_node = t199;
  __retval196 = t197;
  struct std___List_const_iterator_int_* t200 = __retval196;
  return t200;
}

// function: _ZSt9__advanceISt20_List_const_iteratorIiElEvRT_T0_St26bidirectional_iterator_tag
void void_std____advance_std___List_const_iterator_int___long_(struct std___List_const_iterator_int_* v201, long v202, struct std__bidirectional_iterator_tag v203) {
bb204:
  struct std___List_const_iterator_int_* __i205;
  long __n206;
  struct std__bidirectional_iterator_tag unnamed207;
  __i205 = v201;
  __n206 = v202;
  unnamed207 = v203;
    long t208 = __n206;
    long c209 = 0;
    _Bool c210 = ((t208 > c209)) ? 1 : 0;
    if (c210) {
        while (1) {
          long t211 = __n206;
          long u212 = t211 - 1;
          __n206 = u212;
          _Bool cast213 = (_Bool)t211;
          if (!cast213) break;
          struct std___List_const_iterator_int_* t214 = __i205;
          struct std___List_const_iterator_int_* r215 = std___List_const_iterator_int___operator___2(t214);
        }
    } else {
        while (1) {
          long t216 = __n206;
          long u217 = t216 + 1;
          __n206 = u217;
          _Bool cast218 = (_Bool)t216;
          if (!cast218) break;
          struct std___List_const_iterator_int_* t219 = __i205;
          struct std___List_const_iterator_int_* r220 = std___List_const_iterator_int___operator__(t219);
        }
    }
  return;
}

// function: _ZSt19__iterator_categoryISt20_List_const_iteratorIiEENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(struct std___List_const_iterator_int_* v221) {
bb222:
  struct std___List_const_iterator_int_* unnamed223;
  struct std__bidirectional_iterator_tag __retval224;
  unnamed223 = v221;
  struct std__bidirectional_iterator_tag t225 = __retval224;
  return t225;
}

// function: _ZSt7advanceISt20_List_const_iteratorIiEmEvRT_T0_
void void_std__advance_std___List_const_iterator_int___unsigned_long_(struct std___List_const_iterator_int_* v226, unsigned long v227) {
bb228:
  struct std___List_const_iterator_int_* __i229;
  unsigned long __n230;
  long __d231;
  struct std__bidirectional_iterator_tag agg_tmp0232;
  __i229 = v226;
  __n230 = v227;
  unsigned long t233 = __n230;
  long cast234 = (long)t233;
  __d231 = cast234;
  struct std___List_const_iterator_int_* t235 = __i229;
  long t236 = __d231;
  struct std___List_const_iterator_int_* t237 = __i229;
  struct std__bidirectional_iterator_tag r238 = std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(t237);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0232 = r238;
  struct std__bidirectional_iterator_tag t239 = agg_tmp0232;
  void_std____advance_std___List_const_iterator_int___long_(t235, t236, t239);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v240) {
bb241:
  struct std____detail___List_node_base* this242;
  struct std____detail___List_node_base* __retval243;
  this242 = v240;
  struct std____detail___List_node_base* t244 = this242;
  __retval243 = t244;
  struct std____detail___List_node_base* t245 = __retval243;
  return t245;
}

// function: _ZNKSt7__cxx114listIiSaIiEE3endEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* v246) {
bb247:
  struct std____cxx11__list_int__std__allocator_int__* this248;
  struct std___List_const_iterator_int_ __retval249;
  this248 = v246;
  struct std____cxx11__list_int__std__allocator_int__* t250 = this248;
  struct std____cxx11___List_base_int__std__allocator_int__* base251 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t250 + 0);
  struct std____detail___List_node_base* base252 = (struct std____detail___List_node_base*)((char *)&(base251->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r253 = std____detail___List_node_base___M_base___const(base252);
  if (__cir_exc_active) {
    struct std___List_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_const_iterator_int____List_const_iterator(&__retval249, r253);
  struct std___List_const_iterator_int_ t254 = __retval249;
  return t254;
}

// function: _ZSt7advanceISt20_List_const_iteratorIiElEvRT_T0_
void void_std__advance_std___List_const_iterator_int___long_(struct std___List_const_iterator_int_* v255, long v256) {
bb257:
  struct std___List_const_iterator_int_* __i258;
  long __n259;
  long __d260;
  struct std__bidirectional_iterator_tag agg_tmp0261;
  __i258 = v255;
  __n259 = v256;
  long t262 = __n259;
  __d260 = t262;
  struct std___List_const_iterator_int_* t263 = __i258;
  long t264 = __d260;
  struct std___List_const_iterator_int_* t265 = __i258;
  struct std__bidirectional_iterator_tag r266 = std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(t265);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0261 = r266;
  struct std__bidirectional_iterator_tag t267 = agg_tmp0261;
  void_std____advance_std___List_const_iterator_int___long_(t263, t264, t267);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE13_M_resize_posERm
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int______M_resize_pos_unsigned_long___const(struct std____cxx11__list_int__std__allocator_int__* v268, unsigned long* v269) {
bb270:
  struct std____cxx11__list_int__std__allocator_int__* this271;
  unsigned long* __new_size272;
  struct std___List_const_iterator_int_ __retval273;
  unsigned long __len274;
  this271 = v268;
  __new_size272 = v269;
  struct std____cxx11__list_int__std__allocator_int__* t275 = this271;
  std___List_const_iterator_int____List_const_iterator_3(&__retval273);
  unsigned long r276 = std____cxx11__list_int__std__allocator_int_____size___const(t275);
  __len274 = r276;
    unsigned long* t277 = __new_size272;
    unsigned long t278 = *t277;
    unsigned long t279 = __len274;
    _Bool c280 = ((t278 < t279)) ? 1 : 0;
    if (c280) {
        unsigned long* t281 = __new_size272;
        unsigned long t282 = *t281;
        unsigned long t283 = __len274;
        unsigned long c284 = 2;
        unsigned long b285 = t283 / c284;
        _Bool c286 = ((t282 <= b285)) ? 1 : 0;
        if (c286) {
          struct std___List_const_iterator_int_ ref_tmp0287;
          struct std___List_const_iterator_int_ r288 = std____cxx11__list_int__std__allocator_int_____begin___const(t275);
          ref_tmp0287 = r288;
          struct std___List_const_iterator_int_* r289 = std___List_const_iterator_int___operator_(&__retval273, &ref_tmp0287);
          unsigned long* t290 = __new_size272;
          unsigned long t291 = *t290;
          void_std__advance_std___List_const_iterator_int___unsigned_long_(&__retval273, t291);
          if (__cir_exc_active) {
            struct std___List_const_iterator_int_ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
        } else {
          struct std___List_const_iterator_int_ ref_tmp1292;
          long __num_erase293;
          struct std___List_const_iterator_int_ r294 = std____cxx11__list_int__std__allocator_int_____end___const(t275);
          ref_tmp1292 = r294;
          struct std___List_const_iterator_int_* r295 = std___List_const_iterator_int___operator_(&__retval273, &ref_tmp1292);
          unsigned long t296 = __len274;
          unsigned long* t297 = __new_size272;
          unsigned long t298 = *t297;
          unsigned long b299 = t296 - t298;
          long cast300 = (long)b299;
          __num_erase293 = cast300;
          long t301 = __num_erase293;
          long u302 = -t301;
          void_std__advance_std___List_const_iterator_int___long_(&__retval273, u302);
          if (__cir_exc_active) {
            struct std___List_const_iterator_int_ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
        }
      unsigned long c303 = 0;
      unsigned long* t304 = __new_size272;
      *t304 = c303;
      struct std___List_const_iterator_int_ t305 = __retval273;
      return t305;
    } else {
      struct std___List_const_iterator_int_ ref_tmp2306;
      struct std___List_const_iterator_int_ r307 = std____cxx11__list_int__std__allocator_int_____end___const(t275);
      ref_tmp2306 = r307;
      struct std___List_const_iterator_int_* r308 = std___List_const_iterator_int___operator_(&__retval273, &ref_tmp2306);
    }
  unsigned long t309 = __len274;
  unsigned long* t310 = __new_size272;
  unsigned long t311 = *t310;
  unsigned long b312 = t311 - t309;
  *t310 = b312;
  struct std___List_const_iterator_int_ t313 = __retval273;
  return t313;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v314) {
bb315:
  struct std____cxx11___List_base_int__std__allocator_int__* this316;
  struct std__allocator_std___List_node_int__* __retval317;
  this316 = v314;
  struct std____cxx11___List_base_int__std__allocator_int__* t318 = this316;
  struct std__allocator_std___List_node_int__* base319 = (struct std__allocator_std___List_node_int__*)((char *)&(t318->_M_impl) + 0);
  __retval317 = base319;
  struct std__allocator_std___List_node_int__* t320 = __retval317;
  return t320;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v321) {
bb322:
  struct std____new_allocator_std___List_node_int__* this323;
  unsigned long __retval324;
  this323 = v321;
  struct std____new_allocator_std___List_node_int__* t325 = this323;
  unsigned long c326 = 9223372036854775807;
  unsigned long c327 = 24;
  unsigned long b328 = c326 / c327;
  __retval324 = b328;
  unsigned long t329 = __retval324;
  return t329;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v330, unsigned long v331, void* v332) {
bb333:
  struct std____new_allocator_std___List_node_int__* this334;
  unsigned long __n335;
  void* unnamed336;
  struct std___List_node_int_* __retval337;
  this334 = v330;
  __n335 = v331;
  unnamed336 = v332;
  struct std____new_allocator_std___List_node_int__* t338 = this334;
    unsigned long t339 = __n335;
    unsigned long r340 = std____new_allocator_std___List_node_int______M_max_size___const(t338);
    _Bool c341 = ((t339 > r340)) ? 1 : 0;
    if (c341) {
        unsigned long t342 = __n335;
        unsigned long c343 = -1;
        unsigned long c344 = 24;
        unsigned long b345 = c343 / c344;
        _Bool c346 = ((t342 > b345)) ? 1 : 0;
        if (c346) {
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
    unsigned long c347 = 8;
    unsigned long c348 = 16;
    _Bool c349 = ((c347 > c348)) ? 1 : 0;
    if (c349) {
      unsigned long __al350;
      unsigned long c351 = 8;
      __al350 = c351;
      unsigned long t352 = __n335;
      unsigned long c353 = 24;
      unsigned long b354 = t352 * c353;
      unsigned long t355 = __al350;
      void* r356 = operator_new_2(b354, t355);
      if (__cir_exc_active) {
        struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_int_* cast357 = (struct std___List_node_int_*)r356;
      __retval337 = cast357;
      struct std___List_node_int_* t358 = __retval337;
      return t358;
    }
  unsigned long t359 = __n335;
  unsigned long c360 = 24;
  unsigned long b361 = t359 * c360;
  void* r362 = operator_new(b361);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___List_node_int_* cast363 = (struct std___List_node_int_*)r362;
  __retval337 = cast363;
  struct std___List_node_int_* t364 = __retval337;
  return t364;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v365, unsigned long v366) {
bb367:
  struct std__allocator_std___List_node_int__* this368;
  unsigned long __n369;
  struct std___List_node_int_* __retval370;
  this368 = v365;
  __n369 = v366;
  struct std__allocator_std___List_node_int__* t371 = this368;
    _Bool r372 = std____is_constant_evaluated();
    if (r372) {
        unsigned long t373 = __n369;
        unsigned long c374 = 24;
        unsigned long ovr375;
        _Bool ovf376 = __builtin_mul_overflow(t373, c374, &ovr375);
        __n369 = ovr375;
        if (ovf376) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t377 = __n369;
      void* r378 = operator_new(t377);
      if (__cir_exc_active) {
        struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_int_* cast379 = (struct std___List_node_int_*)r378;
      __retval370 = cast379;
      struct std___List_node_int_* t380 = __retval370;
      return t380;
    }
  struct std____new_allocator_std___List_node_int__* base381 = (struct std____new_allocator_std___List_node_int__*)((char *)t371 + 0);
  unsigned long t382 = __n369;
  void* c383 = ((void*)0);
  struct std___List_node_int_* r384 = std____new_allocator_std___List_node_int_____allocate(base381, t382, c383);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval370 = r384;
  struct std___List_node_int_* t385 = __retval370;
  return t385;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v386, unsigned long v387) {
bb388:
  struct std__allocator_std___List_node_int__* __a389;
  unsigned long __n390;
  struct std___List_node_int_* __retval391;
  __a389 = v386;
  __n390 = v387;
  struct std__allocator_std___List_node_int__* t392 = __a389;
  unsigned long t393 = __n390;
  struct std___List_node_int_* r394 = std__allocator_std___List_node_int_____allocate(t392, t393);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval391 = r394;
  struct std___List_node_int_* t395 = __retval391;
  return t395;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v396, struct std__allocator_std___List_node_int__* v397, struct std___List_node_int_* v398) {
bb399:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this400;
  struct std__allocator_std___List_node_int__* __a401;
  struct std___List_node_int_* __ptr402;
  this400 = v396;
  __a401 = v397;
  __ptr402 = v398;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t403 = this400;
  struct std__allocator_std___List_node_int__* t404 = __a401;
  t403->_M_alloc = t404;
  struct std___List_node_int_* t405 = __ptr402;
  t403->_M_ptr = t405;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v406) {
bb407:
  struct std__allocator_std___List_node_int__* __a408;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval409;
  __a408 = v406;
  struct std__allocator_std___List_node_int__* t410 = __a408;
  struct std__allocator_std___List_node_int__* t411 = __a408;
  unsigned long c412 = 1;
  struct std___List_node_int_* r413 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t411, c412);
  if (__cir_exc_active) {
    struct std____allocated_ptr_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval409, t410, r413);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t414 = __retval409;
  return t414;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v415, struct std____allocated_ptr_std__allocator_std___List_node_int___* v416) {
bb417:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this418;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr419;
  this418 = v415;
  __ptr419 = v416;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t420 = this418;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base421 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t420 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t422 = __ptr419;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base421, t422);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base423 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t420 + 0);
    struct std___List_node_int_* r424 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base423);
    if (__cir_exc_active) {
      {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base425 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t420 + 0);
        std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base425);
      }
      return;
    }
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v426) {
bb427:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this428;
  this428 = v426;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t429 = this428;
    struct std___List_node_int_* t430 = t429->_M_ptr;
    struct std___List_node_int_* c431 = ((void*)0);
    _Bool c432 = ((t430 != c431)) ? 1 : 0;
    if (c432) {
      struct std__allocator_std___List_node_int__* t433 = t429->_M_alloc;
      struct std___List_node_int_* t434 = t429->_M_ptr;
      unsigned long c435 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t433, t434, c435);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v436) {
bb437:
  struct std__allocator_std___List_node_int__* __a438;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval439;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0440;
  __a438 = v436;
  struct std__allocator_std___List_node_int__* t441 = __a438;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r442 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t441);
  if (__cir_exc_active) {
    struct std____allocated_obj_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0440 = r442;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval439, &ref_tmp0440);
    if (__cir_exc_active) {
      {
        std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0440);
      }
      struct std____allocated_obj_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0440);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t443 = __retval439;
  return t443;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v444) {
bb445:
  int* __location446;
  int* __retval447;
  void* __loc448;
  __location446 = v444;
  int* t449 = __location446;
  void* cast450 = (void*)t449;
  __loc448 = cast450;
    void* t451 = __loc448;
    int* cast452 = (int*)t451;
    int c453 = 0;
    *cast452 = c453;
    __retval447 = cast452;
    int* t454 = __retval447;
    return t454;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int_(struct std__allocator_std___List_node_int__* v455, int* v456) {
bb457:
  struct std__allocator_std___List_node_int__* __a458;
  int* __p459;
  __a458 = v455;
  __p459 = v456;
  int* t460 = __p459;
  int* r461 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t460);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v462) {
bb463:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this464;
  struct std___List_node_int_* __retval465;
  this464 = v462;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t466 = this464;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base467 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t466 + 0);
  struct std___List_node_int_* r468 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base467);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval465 = r468;
  struct std___List_node_int_* t469 = __retval465;
  return t469;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v470, void** v471) {
bb472:
  struct std___List_node_int_** __obj473;
  void** __new_val474;
  struct std___List_node_int_* __retval475;
  struct std___List_node_int_* __old_val476;
  __obj473 = v470;
  __new_val474 = v471;
  struct std___List_node_int_** t477 = __obj473;
  struct std___List_node_int_* t478 = *t477;
  __old_val476 = t478;
  void** t479 = __new_val474;
  struct std___List_node_int_* c480 = ((void*)0);
  struct std___List_node_int_** t481 = __obj473;
  *t481 = c480;
  struct std___List_node_int_* t482 = __old_val476;
  __retval475 = t482;
  struct std___List_node_int_* t483 = __retval475;
  return t483;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v484) {
bb485:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this486;
  struct std___List_node_int_* __retval487;
  void* ref_tmp0488;
  this486 = v484;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t489 = this486;
  void* c490 = ((void*)0);
  ref_tmp0488 = c490;
  struct std___List_node_int_* r491 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t489->_M_ptr, &ref_tmp0488);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval487 = r491;
  struct std___List_node_int_* t492 = __retval487;
  return t492;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v493) {
bb494:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this495;
  this495 = v493;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t496 = this495;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base497 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t496 + 0);
      _Bool r498 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base497);
      if (r498) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base499 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t496 + 0);
        struct std___List_node_int_* r500 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base499);
        if (__cir_exc_active) {
          {
            struct std____allocated_ptr_std__allocator_std___List_node_int___* base501 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t496 + 0);
            std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base501);
          }
          return;
        }
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base502 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t496 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base502);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node__(struct std____cxx11__list_int__std__allocator_int__* v503) {
bb504:
  struct std____cxx11__list_int__std__allocator_int__* this505;
  struct std___List_node_int_* __retval506;
  struct std__allocator_std___List_node_int__* __alloc507;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard508;
  this505 = v503;
  struct std____cxx11__list_int__std__allocator_int__* t509 = this505;
  struct std____cxx11___List_base_int__std__allocator_int__* base510 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t509 + 0);
  struct std__allocator_std___List_node_int__* r511 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base510);
  __alloc507 = r511;
  struct std__allocator_std___List_node_int__* t512 = __alloc507;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r513 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t512);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __guard508 = r513;
    struct std__allocator_std___List_node_int__* t514 = __alloc507;
    struct std___List_node_int_* r515 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard508);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard508);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* r516 = std___List_node_int____M_valptr(r515);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard508);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int_(t514, r516);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base517 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard508) + 0);
    struct std___List_node_int_* r518 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base517);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard508);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    __retval506 = r518;
    struct std___List_node_int_* t519 = __retval506;
    struct std___List_node_int_* ret_val520 = t519;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard508);
    }
    return ret_val520;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v521, unsigned long v522) {
bb523:
  struct std____cxx11___List_base_int__std__allocator_int__* this524;
  unsigned long __n525;
  this524 = v521;
  __n525 = v522;
  struct std____cxx11___List_base_int__std__allocator_int__* t526 = this524;
  unsigned long t527 = __n525;
  struct std____detail___List_size* base528 = (struct std____detail___List_size*)((char *)&(t526->_M_impl._M_node) + 16);
  unsigned long t529 = base528->_M_size;
  unsigned long b530 = t529 + t527;
  base528->_M_size = b530;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert__(struct std____cxx11__list_int__std__allocator_int__* v531, struct std___List_iterator_int_ v532) {
bb533:
  struct std____cxx11__list_int__std__allocator_int__* this534;
  struct std___List_iterator_int_ __position535;
  struct std___List_node_int_* __tmp536;
  this534 = v531;
  __position535 = v532;
  struct std____cxx11__list_int__std__allocator_int__* t537 = this534;
  struct std___List_node_int_* r538 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node__(t537);
  if (__cir_exc_active) {
    return;
  }
  __tmp536 = r538;
  struct std___List_node_int_* t539 = __tmp536;
  struct std____detail___List_node_base* base540 = (struct std____detail___List_node_base*)((char *)t539 + 0);
  struct std____detail___List_node_base* t541 = __position535._M_node;
  std____detail___List_node_base___M_hook(base540, t541);
  struct std____cxx11___List_base_int__std__allocator_int__* base542 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t537 + 0);
  unsigned long c543 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base542, c543);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v544) {
bb545:
  struct std____cxx11__list_int__std__allocator_int__* this546;
  _Bool __retval547;
  this546 = v544;
  struct std____cxx11__list_int__std__allocator_int__* t548 = this546;
  struct std____cxx11___List_base_int__std__allocator_int__* base549 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t548 + 0);
  struct std____detail___List_node_base* base550 = (struct std____detail___List_node_base*)((char *)&(base549->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t551 = base550->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base552 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t548 + 0);
  struct std____detail___List_node_base* base553 = (struct std____detail___List_node_base*)((char *)&(base552->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r554 = std____detail___List_node_base___M_base___const(base553);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c555 = ((t551 == r554)) ? 1 : 0;
  __retval547 = c555;
  _Bool t556 = __retval547;
  return t556;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v557) {
bb558:
  struct std___List_iterator_int_* this559;
  struct std___List_iterator_int_* __retval560;
  this559 = v557;
  struct std___List_iterator_int_* t561 = this559;
  struct std____detail___List_node_base* t562 = t561->_M_node;
  struct std____detail___List_node_base* t563 = t562->_M_prev;
  t561->_M_node = t563;
  __retval560 = t561;
  struct std___List_iterator_int_* t564 = __retval560;
  return t564;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v565) {
bb566:
  struct std___List_iterator_int_* this567;
  int* __retval568;
  this567 = v565;
  struct std___List_iterator_int_* t569 = this567;
  struct std____detail___List_node_base* t570 = t569->_M_node;
  struct std___List_node_int_* derived571 = ((t570) ? (struct std___List_node_int_*)((char *)t570 - 0) : (struct std___List_node_int_*)0);
  int* r572 = std___List_node_int____M_valptr(derived571);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval568 = r572;
  int* t573 = __retval568;
  return t573;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v574) {
bb575:
  struct std____cxx11__list_int__std__allocator_int__* this576;
  int* __retval577;
  struct std___List_iterator_int_ __tmp578;
  this576 = v574;
  struct std____cxx11__list_int__std__allocator_int__* t579 = this576;
    do {
          _Bool r580 = std____cxx11__list_int__std__allocator_int_____empty___const(t579);
          if (r580) {
            char* cast581 = (char*)&(_str_2);
            int c582 = 1674;
            char* cast583 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast584 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast581, c582, cast583, cast584);
          }
      _Bool c585 = 0;
      if (!c585) break;
    } while (1);
  struct std___List_iterator_int_ r586 = std____cxx11__list_int__std__allocator_int_____end(t579);
  __tmp578 = r586;
  struct std___List_iterator_int_* r587 = std___List_iterator_int___operator__(&__tmp578);
  int* r588 = std___List_iterator_int___operator____const(&__tmp578);
  __retval577 = r588;
  int* t589 = __retval577;
  return t589;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJEEERiDpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back__(struct std____cxx11__list_int__std__allocator_int__* v590) {
bb591:
  struct std____cxx11__list_int__std__allocator_int__* this592;
  int* __retval593;
  struct std___List_iterator_int_ agg_tmp0594;
  this592 = v590;
  struct std____cxx11__list_int__std__allocator_int__* t595 = this592;
  struct std___List_iterator_int_ r596 = std____cxx11__list_int__std__allocator_int_____end(t595);
  agg_tmp0594 = r596;
  struct std___List_iterator_int_ t597 = agg_tmp0594;
  void_std____cxx11__list_int__std__allocator_int______M_insert__(t595, t597);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r598 = std____cxx11__list_int__std__allocator_int_____back(t595);
  __retval593 = r598;
  int* t599 = __retval593;
  return t599;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v600, unsigned long v601) {
bb602:
  struct std____cxx11___List_base_int__std__allocator_int__* this603;
  unsigned long __n604;
  this603 = v600;
  __n604 = v601;
  struct std____cxx11___List_base_int__std__allocator_int__* t605 = this603;
  unsigned long t606 = __n604;
  struct std____detail___List_size* base607 = (struct std____detail___List_size*)((char *)&(t605->_M_impl._M_node) + 16);
  unsigned long t608 = base607->_M_size;
  unsigned long b609 = t608 - t606;
  base607->_M_size = b609;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* v610, struct std___List_iterator_int_ v611) {
bb612:
  struct std____cxx11__list_int__std__allocator_int__* this613;
  struct std___List_iterator_int_ __position614;
  struct std___List_node_int_* __n615;
  this613 = v610;
  __position614 = v611;
  struct std____cxx11__list_int__std__allocator_int__* t616 = this613;
  struct std____cxx11___List_base_int__std__allocator_int__* base617 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t616 + 0);
  unsigned long c618 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base617, c618);
  if (__cir_exc_active) {
    return;
  }
  struct std____detail___List_node_base* t619 = __position614._M_node;
  std____detail___List_node_base___M_unhook(t619);
  struct std____detail___List_node_base* t620 = __position614._M_node;
  struct std___List_node_int_* derived621 = (struct std___List_node_int_*)((char *)t620 - 0);
  __n615 = derived621;
  struct std____cxx11___List_base_int__std__allocator_int__* base622 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t616 + 0);
  struct std___List_node_int_* t623 = __n615;
  struct std___List_node_int_* r624 = std___List_node_int____M_node_ptr(t623);
  if (__cir_exc_active) {
    return;
  }
  std____cxx11___List_base_int__std__allocator_int______M_destroy_node(base622, r624);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v625, struct std____detail___List_node_base* v626) {
bb627:
  struct std___List_iterator_int_* this628;
  struct std____detail___List_node_base* __x629;
  this628 = v625;
  __x629 = v626;
  struct std___List_iterator_int_* t630 = this628;
  struct std____detail___List_node_base* t631 = __x629;
  t630->_M_node = t631;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8pop_backEv
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* v632) {
bb633:
  struct std____cxx11__list_int__std__allocator_int__* this634;
  struct std___List_iterator_int_ agg_tmp0635;
  this634 = v632;
  struct std____cxx11__list_int__std__allocator_int__* t636 = this634;
    do {
          _Bool r637 = std____cxx11__list_int__std__allocator_int_____empty___const(t636);
          if (r637) {
            char* cast638 = (char*)&(_str_2);
            int c639 = 1840;
            char* cast640 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv);
            char* cast641 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast638, c639, cast640, cast641);
          }
      _Bool c642 = 0;
      if (!c642) break;
    } while (1);
  struct std____cxx11___List_base_int__std__allocator_int__* base643 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t636 + 0);
  struct std____detail___List_node_base* base644 = (struct std____detail___List_node_base*)((char *)&(base643->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t645 = base644->_M_prev;
  std___List_iterator_int____List_iterator(&agg_tmp0635, t645);
  struct std___List_iterator_int_ t646 = agg_tmp0635;
  std____cxx11__list_int__std__allocator_int______M_erase(t636, t646);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE17_M_default_appendEm
void std____cxx11__list_int__std__allocator_int______M_default_append(struct std____cxx11__list_int__std__allocator_int__* v647, unsigned long v648) {
bb649:
  struct std____cxx11__list_int__std__allocator_int__* this650;
  unsigned long __n651;
  unsigned long __i652;
  this650 = v647;
  __n651 = v648;
  struct std____cxx11__list_int__std__allocator_int__* t653 = this650;
  unsigned long c654 = 0;
  __i652 = c654;
        while (1) {
          unsigned long t657 = __i652;
          unsigned long t658 = __n651;
          _Bool c659 = ((t657 < t658)) ? 1 : 0;
          if (!c659) break;
          int* r660 = int__std____cxx11__list_int__std__allocator_int_____emplace_back__(t653);
          if (__cir_exc_active) {
            goto cir_try_dispatch655;
          }
        for_step656: ;
          unsigned long t661 = __i652;
          unsigned long u662 = t661 + 1;
          __i652 = u662;
        }
    cir_try_dispatch655: ;
    if (__cir_exc_active) {
    {
      int ca_tok663 = 0;
      void* ca_exn664 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
          while (1) {
            unsigned long t666 = __i652;
            _Bool cast667 = (_Bool)t666;
            if (!cast667) break;
            std____cxx11__list_int__std__allocator_int_____pop_back(t653);
          for_step665: ;
            unsigned long t668 = __i652;
            unsigned long u669 = t668 - 1;
            __i652 = u669;
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

// function: _ZSteqRKSt20_List_const_iteratorIiES2_
_Bool std__operator__(struct std___List_const_iterator_int_* v670, struct std___List_const_iterator_int_* v671) {
bb672:
  struct std___List_const_iterator_int_* __x673;
  struct std___List_const_iterator_int_* __y674;
  _Bool __retval675;
  __x673 = v670;
  __y674 = v671;
  struct std___List_const_iterator_int_* t676 = __x673;
  struct std____detail___List_node_base* t677 = t676->_M_node;
  struct std___List_const_iterator_int_* t678 = __y674;
  struct std____detail___List_node_base* t679 = t678->_M_node;
  _Bool c680 = ((t677 == t679)) ? 1 : 0;
  __retval675 = c680;
  _Bool t681 = __retval675;
  return t681;
}

// function: _ZNSt7__cxx114listIiSaIiEE5eraseESt20_List_const_iteratorIiE
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase(struct std____cxx11__list_int__std__allocator_int__* v682, struct std___List_const_iterator_int_ v683) {
bb684:
  struct std____cxx11__list_int__std__allocator_int__* this685;
  struct std___List_const_iterator_int_ __position686;
  struct std___List_iterator_int_ __retval687;
  struct std___List_iterator_int_ agg_tmp0688;
  this685 = v682;
  __position686 = v683;
  struct std____cxx11__list_int__std__allocator_int__* t689 = this685;
  struct std____detail___List_node_base* t690 = __position686._M_node;
  struct std____detail___List_node_base* t691 = t690->_M_next;
  std___List_iterator_int____List_iterator(&__retval687, t691);
  struct std___List_iterator_int_ r692 = std___List_const_iterator_int____M_const_cast___const(&__position686);
  agg_tmp0688 = r692;
  struct std___List_iterator_int_ t693 = agg_tmp0688;
  std____cxx11__list_int__std__allocator_int______M_erase(t689, t693);
  struct std___List_iterator_int_ t694 = __retval687;
  return t694;
}

// function: _ZNKSt20_List_const_iteratorIiE13_M_const_castEv
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* v695) {
bb696:
  struct std___List_const_iterator_int_* this697;
  struct std___List_iterator_int_ __retval698;
  this697 = v695;
  struct std___List_const_iterator_int_* t699 = this697;
  struct std____detail___List_node_base* t700 = t699->_M_node;
  std___List_iterator_int____List_iterator(&__retval698, t700);
  struct std___List_iterator_int_ t701 = __retval698;
  return t701;
}

// function: _ZNSt7__cxx114listIiSaIiEE5eraseESt20_List_const_iteratorIiES4_
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase_2(struct std____cxx11__list_int__std__allocator_int__* v702, struct std___List_const_iterator_int_ v703, struct std___List_const_iterator_int_ v704) {
bb705:
  struct std____cxx11__list_int__std__allocator_int__* this706;
  struct std___List_const_iterator_int_ __first707;
  struct std___List_const_iterator_int_ __last708;
  struct std___List_iterator_int_ __retval709;
  this706 = v702;
  __first707 = v703;
  __last708 = v704;
  struct std____cxx11__list_int__std__allocator_int__* t710 = this706;
    struct std___List_const_iterator_int_ ref_tmp0711;
    struct std___List_iterator_int_ ref_tmp1712;
    struct std___List_const_iterator_int_ agg_tmp0713;
    while (1) {
      _Bool r714 = std__operator__(&__first707, &__last708);
      _Bool u715 = !r714;
      if (!u715) break;
      agg_tmp0713 = __first707; // copy
      struct std___List_const_iterator_int_ t716 = agg_tmp0713;
      struct std___List_iterator_int_ r717 = std____cxx11__list_int__std__allocator_int_____erase(t710, t716);
      ref_tmp1712 = r717;
      std___List_const_iterator_int____List_const_iterator_2(&ref_tmp0711, &ref_tmp1712);
      struct std___List_const_iterator_int_* r718 = std___List_const_iterator_int___operator_(&__first707, &ref_tmp0711);
    }
  struct std___List_iterator_int_ r719 = std___List_const_iterator_int____M_const_cast___const(&__last708);
  __retval709 = r719;
  struct std___List_iterator_int_ t720 = __retval709;
  return t720;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v721) {
bb722:
  struct std____cxx11__list_int__std__allocator_int__* this723;
  struct std___List_iterator_int_ __retval724;
  this723 = v721;
  struct std____cxx11__list_int__std__allocator_int__* t725 = this723;
  struct std____cxx11___List_base_int__std__allocator_int__* base726 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t725 + 0);
  struct std____detail___List_node_base* r727 = std____detail___List_node_header___M_base(&base726->_M_impl._M_node);
  if (__cir_exc_active) {
    struct std___List_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_iterator_int____List_iterator(&__retval724, r727);
  struct std___List_iterator_int_ t728 = __retval724;
  return t728;
}

// function: _ZNSt20_List_const_iteratorIiEC2ERKSt14_List_iteratorIiE
void std___List_const_iterator_int____List_const_iterator_2(struct std___List_const_iterator_int_* v729, struct std___List_iterator_int_* v730) {
bb731:
  struct std___List_const_iterator_int_* this732;
  struct std___List_iterator_int_* __x733;
  this732 = v729;
  __x733 = v730;
  struct std___List_const_iterator_int_* t734 = this732;
  struct std___List_iterator_int_* t735 = __x733;
  struct std____detail___List_node_base* t736 = t735->_M_node;
  t734->_M_node = t736;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6resizeEm
void std____cxx11__list_int__std__allocator_int_____resize(struct std____cxx11__list_int__std__allocator_int__* v737, unsigned long v738) {
bb739:
  struct std____cxx11__list_int__std__allocator_int__* this740;
  unsigned long __new_size741;
  struct std___List_const_iterator_int_ __i742;
  this740 = v737;
  __new_size741 = v738;
  struct std____cxx11__list_int__std__allocator_int__* t743 = this740;
  struct std___List_const_iterator_int_ r744 = std____cxx11__list_int__std__allocator_int______M_resize_pos_unsigned_long___const(t743, &__new_size741);
  if (__cir_exc_active) {
    return;
  }
  __i742 = r744;
    unsigned long t745 = __new_size741;
    _Bool cast746 = (_Bool)t745;
    if (cast746) {
      unsigned long t747 = __new_size741;
      std____cxx11__list_int__std__allocator_int______M_default_append(t743, t747);
      if (__cir_exc_active) {
        return;
      }
    } else {
      struct std___List_const_iterator_int_ agg_tmp0748;
      struct std___List_const_iterator_int_ agg_tmp1749;
      struct std___List_iterator_int_ ref_tmp0750;
      struct std___List_iterator_int_ agg_tmp2751;
      agg_tmp0748 = __i742; // copy
      struct std___List_iterator_int_ r752 = std____cxx11__list_int__std__allocator_int_____end(t743);
      ref_tmp0750 = r752;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp1749, &ref_tmp0750);
      struct std___List_const_iterator_int_ t753 = agg_tmp0748;
      struct std___List_const_iterator_int_ t754 = agg_tmp1749;
      struct std___List_iterator_int_ r755 = std____cxx11__list_int__std__allocator_int_____erase_2(t743, t753, t754);
      agg_tmp2751 = r755;
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v756) {
bb757:
  struct std____cxx11__list_int__std__allocator_int__* this758;
  this758 = v756;
  struct std____cxx11__list_int__std__allocator_int__* t759 = this758;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base760 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t759 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base760);
  }
  return;
}

// function: main
int main() {
bb761:
  int __retval762;
  unsigned int i763;
  struct std____cxx11__list_int__std__allocator_int__ mylist764;
  int c765 = 0;
  __retval762 = c765;
  std____cxx11__list_int__std__allocator_int_____list(&mylist764);
    char* cast766 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r767 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast766);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist764);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_istream_char__std__char_traits_char__* r768 = std__istream__operator__(&_ZSt3cin, &i763);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist764);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      unsigned int t769 = i763;
      unsigned long cast770 = (unsigned long)t769;
      unsigned long r771 = std____cxx11__list_int__std__allocator_int_____max_size___const(&mylist764);
      _Bool c772 = ((cast770 < r771)) ? 1 : 0;
      if (c772) {
        unsigned int t773 = i763;
        unsigned long cast774 = (unsigned long)t773;
        std____cxx11__list_int__std__allocator_int_____resize(&mylist764, cast774);
        if (__cir_exc_active) {
          {
            std____cxx11__list_int__std__allocator_int______list(&mylist764);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      } else {
        char* cast775 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r776 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast775);
        if (__cir_exc_active) {
          {
            std____cxx11__list_int__std__allocator_int______list(&mylist764);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      }
    int c777 = 0;
    __retval762 = c777;
    int t778 = __retval762;
    int ret_val779 = t778;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist764);
    }
    return ret_val779;
  int t780 = __retval762;
  return t780;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v781) {
bb782:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this783;
  this783 = v781;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t784 = this783;
  struct std__allocator_std___List_node_int__* base785 = (struct std__allocator_std___List_node_int__*)((char *)t784 + 0);
  std__allocator_std___List_node_int_____allocator(base785);
    std____detail___List_node_header___List_node_header(&t784->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v786) {
bb787:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this788;
  this788 = v786;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t789 = this788;
  {
    struct std__allocator_std___List_node_int__* base790 = (struct std__allocator_std___List_node_int__*)((char *)t789 + 0);
    std__allocator_std___List_node_int______allocator(base790);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v791) {
bb792:
  struct std____cxx11___List_base_int__std__allocator_int__* this793;
  this793 = v791;
  struct std____cxx11___List_base_int__std__allocator_int__* t794 = this793;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t794->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v795) {
bb796:
  struct std____detail___List_node_header* this797;
  struct std____detail___List_node_base* __retval798;
  this797 = v795;
  struct std____detail___List_node_header* t799 = this797;
  struct std____detail___List_node_base* base800 = (struct std____detail___List_node_base*)((char *)t799 + 0);
  __retval798 = base800;
  struct std____detail___List_node_base* t801 = __retval798;
  return t801;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v802) {
bb803:
  int* __location804;
  __location804 = v802;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v805, int* v806) {
bb807:
  struct std__allocator_std___List_node_int__* __a808;
  int* __p809;
  __a808 = v805;
  __p809 = v806;
  int* t810 = __p809;
  void_std__destroy_at_int_(t810);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v811) {
bb812:
  struct __gnu_cxx____aligned_membuf_int_* this813;
  void* __retval814;
  this813 = v811;
  struct __gnu_cxx____aligned_membuf_int_* t815 = this813;
  void* cast816 = (void*)&(t815->_M_storage);
  __retval814 = cast816;
  void* t817 = __retval814;
  return t817;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v818) {
bb819:
  struct __gnu_cxx____aligned_membuf_int_* this820;
  int* __retval821;
  this820 = v818;
  struct __gnu_cxx____aligned_membuf_int_* t822 = this820;
  void* r823 = __gnu_cxx____aligned_membuf_int____M_addr(t822);
  int* cast824 = (int*)r823;
  __retval821 = cast824;
  int* t825 = __retval821;
  return t825;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v826) {
bb827:
  struct std___List_node_int_* this828;
  int* __retval829;
  this828 = v826;
  struct std___List_node_int_* t830 = this828;
  int* r831 = __gnu_cxx____aligned_membuf_int____M_ptr(&t830->_M_storage);
  __retval829 = r831;
  int* t832 = __retval829;
  return t832;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb833:
  _Bool __retval834;
    _Bool c835 = 0;
    __retval834 = c835;
    _Bool t836 = __retval834;
    return t836;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v837, struct std___List_node_int_* v838, unsigned long v839) {
bb840:
  struct std____new_allocator_std___List_node_int__* this841;
  struct std___List_node_int_* __p842;
  unsigned long __n843;
  this841 = v837;
  __p842 = v838;
  __n843 = v839;
  struct std____new_allocator_std___List_node_int__* t844 = this841;
    unsigned long c845 = 8;
    unsigned long c846 = 16;
    _Bool c847 = ((c845 > c846)) ? 1 : 0;
    if (c847) {
      struct std___List_node_int_* t848 = __p842;
      void* cast849 = (void*)t848;
      unsigned long t850 = __n843;
      unsigned long c851 = 24;
      unsigned long b852 = t850 * c851;
      unsigned long c853 = 8;
      operator_delete_3(cast849, b852, c853);
      return;
    }
  struct std___List_node_int_* t854 = __p842;
  void* cast855 = (void*)t854;
  unsigned long t856 = __n843;
  unsigned long c857 = 24;
  unsigned long b858 = t856 * c857;
  operator_delete_2(cast855, b858);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v859, struct std___List_node_int_* v860, unsigned long v861) {
bb862:
  struct std__allocator_std___List_node_int__* this863;
  struct std___List_node_int_* __p864;
  unsigned long __n865;
  this863 = v859;
  __p864 = v860;
  __n865 = v861;
  struct std__allocator_std___List_node_int__* t866 = this863;
    _Bool r867 = std____is_constant_evaluated();
    if (r867) {
      struct std___List_node_int_* t868 = __p864;
      void* cast869 = (void*)t868;
      operator_delete(cast869);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base870 = (struct std____new_allocator_std___List_node_int__*)((char *)t866 + 0);
  struct std___List_node_int_* t871 = __p864;
  unsigned long t872 = __n865;
  std____new_allocator_std___List_node_int_____deallocate(base870, t871, t872);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v873, struct std___List_node_int_* v874, unsigned long v875) {
bb876:
  struct std__allocator_std___List_node_int__* __a877;
  struct std___List_node_int_* __p878;
  unsigned long __n879;
  __a877 = v873;
  __p878 = v874;
  __n879 = v875;
  struct std__allocator_std___List_node_int__* t880 = __a877;
  struct std___List_node_int_* t881 = __p878;
  unsigned long t882 = __n879;
  std__allocator_std___List_node_int_____deallocate(t880, t881, t882);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v883, struct std___List_node_int_* v884) {
bb885:
  struct std____cxx11___List_base_int__std__allocator_int__* this886;
  struct std___List_node_int_* __p887;
  this886 = v883;
  __p887 = v884;
  struct std____cxx11___List_base_int__std__allocator_int__* t888 = this886;
  struct std__allocator_std___List_node_int__* base889 = (struct std__allocator_std___List_node_int__*)((char *)&(t888->_M_impl) + 0);
  struct std___List_node_int_* t890 = __p887;
  unsigned long c891 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base889, t890, c891);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v892, struct std___List_node_int_* v893) {
bb894:
  struct std____cxx11___List_base_int__std__allocator_int__* this895;
  struct std___List_node_int_* __p896;
  this895 = v892;
  __p896 = v893;
  struct std____cxx11___List_base_int__std__allocator_int__* t897 = this895;
  struct std__allocator_std___List_node_int__* base898 = (struct std__allocator_std___List_node_int__*)((char *)&(t897->_M_impl) + 0);
  struct std___List_node_int_* t899 = __p896;
  int* r900 = std___List_node_int____M_valptr(t899);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base898, r900);
  struct std___List_node_int_* t901 = __p896;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t897, t901);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v902) {
bb903:
  struct std___List_node_int_* this904;
  struct std___List_node_int_* __retval905;
  this904 = v902;
  struct std___List_node_int_* t906 = this904;
  __retval905 = t906;
  struct std___List_node_int_* t907 = __retval905;
  return t907;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v908) {
bb909:
  struct std____cxx11___List_base_int__std__allocator_int__* this910;
  struct std____detail___List_node_base* __cur911;
  this910 = v908;
  struct std____cxx11___List_base_int__std__allocator_int__* t912 = this910;
  struct std____detail___List_node_base* base913 = (struct std____detail___List_node_base*)((char *)&(t912->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t914 = base913->_M_next;
  __cur911 = t914;
    while (1) {
      struct std____detail___List_node_base* t915 = __cur911;
      struct std____detail___List_node_base* r916 = std____detail___List_node_header___M_base(&t912->_M_impl._M_node);
      if (__cir_exc_active) {
        return;
      }
      _Bool c917 = ((t915 != r916)) ? 1 : 0;
      if (!c917) break;
        struct std___List_node_int_* __tmp918;
        struct std____detail___List_node_base* t919 = __cur911;
        struct std___List_node_int_* derived920 = (struct std___List_node_int_*)((char *)t919 - 0);
        __tmp918 = derived920;
        struct std___List_node_int_* t921 = __tmp918;
        struct std____detail___List_node_base* base922 = (struct std____detail___List_node_base*)((char *)t921 + 0);
        struct std____detail___List_node_base* t923 = base922->_M_next;
        __cur911 = t923;
        struct std___List_node_int_* t924 = __tmp918;
        struct std___List_node_int_* r925 = std___List_node_int____M_node_ptr(t924);
        if (__cir_exc_active) {
          return;
        }
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t912, r925);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v926) {
bb927:
  struct std____cxx11___List_base_int__std__allocator_int__* this928;
  this928 = v926;
  struct std____cxx11___List_base_int__std__allocator_int__* t929 = this928;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t929);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t929->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v930) {
bb931:
  struct std____new_allocator_std___List_node_int__* this932;
  this932 = v930;
  struct std____new_allocator_std___List_node_int__* t933 = this932;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v934) {
bb935:
  struct std__allocator_std___List_node_int__* this936;
  this936 = v934;
  struct std__allocator_std___List_node_int__* t937 = this936;
  struct std____new_allocator_std___List_node_int__* base938 = (struct std____new_allocator_std___List_node_int__*)((char *)t937 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base938);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v939) {
bb940:
  struct std____detail___List_node_header* this941;
  this941 = v939;
  struct std____detail___List_node_header* t942 = this941;
  struct std____detail___List_node_base* base943 = (struct std____detail___List_node_base*)((char *)t942 + 0);
  struct std____detail___List_size* base944 = (struct std____detail___List_size*)((char *)t942 + 16);
  std____detail___List_node_header___M_init(t942);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v945) {
bb946:
  struct std__allocator_std___List_node_int__* this947;
  this947 = v945;
  struct std__allocator_std___List_node_int__* t948 = this947;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v949, struct std____detail___List_size* v950) {
bb951:
  struct std____detail___List_size* this952;
  struct std____detail___List_size* unnamed953;
  struct std____detail___List_size* __retval954;
  this952 = v949;
  unnamed953 = v950;
  struct std____detail___List_size* t955 = this952;
  struct std____detail___List_size* t956 = unnamed953;
  unsigned long t957 = t956->_M_size;
  t955->_M_size = t957;
  __retval954 = t955;
  struct std____detail___List_size* t958 = __retval954;
  return t958;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v959) {
bb960:
  struct std____detail___List_node_header* this961;
  struct std____detail___List_size ref_tmp0962;
  this961 = v959;
  struct std____detail___List_node_header* t963 = this961;
  struct std____detail___List_node_base* base964 = (struct std____detail___List_node_base*)((char *)t963 + 0);
  struct std____detail___List_node_base* base965 = (struct std____detail___List_node_base*)((char *)t963 + 0);
  base965->_M_prev = base964;
  struct std____detail___List_node_base* base966 = (struct std____detail___List_node_base*)((char *)t963 + 0);
  base966->_M_next = base964;
  struct std____detail___List_size* base967 = (struct std____detail___List_size*)((char *)t963 + 16);
  ref_tmp0962 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r968 = std____detail___List_size__operator_(base967, &ref_tmp0962);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v969, struct std____allocated_ptr_std__allocator_std___List_node_int___* v970) {
bb971:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this972;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd973;
  this972 = v969;
  __gd973 = v970;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t974 = this972;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t975 = __gd973;
  struct std__allocator_std___List_node_int__* t976 = t975->_M_alloc;
  t974->_M_alloc = t976;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t977 = __gd973;
  struct std___List_node_int_* t978 = t977->_M_ptr;
  t974->_M_ptr = t978;
  struct std___List_node_int_* c979 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t980 = __gd973;
  t980->_M_ptr = c979;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v981) {
bb982:
  struct std___List_node_int_* __ptr983;
  struct std___List_node_int_* __retval984;
  __ptr983 = v981;
  struct std___List_node_int_* t985 = __ptr983;
  __retval984 = t985;
  struct std___List_node_int_* t986 = __retval984;
  return t986;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v987) {
bb988:
  struct std___List_node_int_** __ptr989;
  struct std___List_node_int_* __retval990;
  __ptr989 = v987;
  struct std___List_node_int_** t991 = __ptr989;
  struct std___List_node_int_* t992 = *t991;
  struct std___List_node_int_* r993 = std___List_node_int___std__to_address_std___List_node_int___(t992);
  __retval990 = r993;
  struct std___List_node_int_* t994 = __retval990;
  return t994;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v995) {
bb996:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this997;
  struct std___List_node_int_* __retval998;
  this997 = v995;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t999 = this997;
  struct std___List_node_int_* r1000 = auto_std____to_address_std___List_node_int___(&t999->_M_ptr);
  __retval998 = r1000;
  struct std___List_node_int_* t1001 = __retval998;
  return t1001;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1002) {
bb1003:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1004;
  _Bool __retval1005;
  this1004 = v1002;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1006 = this1004;
  struct std___List_node_int_* t1007 = t1006->_M_ptr;
  _Bool cast1008 = (_Bool)t1007;
  __retval1005 = cast1008;
  _Bool t1009 = __retval1005;
  return t1009;
}

