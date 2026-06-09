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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "mydeque contains:";
char _str_1[19] = "mydeque.at(i) == i";
char _str_2[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_at/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[72] = "deque::_M_range_check: __n (which is %zu)>= this->size() (which is %zu)";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
void std__deque_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
int* std__deque_int__std__allocator_int_____at(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
extern void std____throw_length_error(char* p0);
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0, struct std__allocator_int_* p1);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator_int_(struct std__allocator_int___* p0, struct std__allocator_int_* p1);
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* p0, unsigned long p1, void* p2);
int** std__allocator_int____allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
extern int __gxx_personality_v0();
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_int____deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, unsigned long p2);
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size();
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* p0, int** p1);
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1, unsigned long p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
void void_std____uninitialized_default_1_false_____uninit_default_int__(int* p0, int* p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
void void_std__fill_int___int_(int* p0, int* p1, int* p2);
void void_std____uninitialized_default_1_true_____uninit_default_int__(int* p0, int* p1);
void void_std____uninitialized_default_int__(int* p0, int* p1);
void void_std____uninitialized_default_a_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* p0);
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std__allocator_int_* p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0, int* p1, int** p2);
void std__deque_int__std__allocator_int______M_default_initialize(struct std__deque_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2EmRKS0_
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v5, unsigned long v6, struct std__allocator_int_* v7) {
bb8:
  struct std__deque_int__std__allocator_int__* this9;
  unsigned long __n10;
  struct std__allocator_int_* __a11;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std__deque_int__std__allocator_int__* t12 = this9;
  struct std___Deque_base_int__std__allocator_int__* base13 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t12 + 0);
  struct std__allocator_int_* t14 = __a11;
  unsigned long t15 = __n10;
  struct std__allocator_int_* t16 = __a11;
  unsigned long r17 = std__deque_int__std__allocator_int______S_check_init_len(t15, t16);
  if (__cir_exc_active) {
    return;
  }
  std___Deque_base_int__std__allocator_int______Deque_base(base13, t14, r17);
  if (__cir_exc_active) {
    return;
  }
    std__deque_int__std__allocator_int______M_default_initialize(t12);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base18 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t12 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base18);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v19) {
bb20:
  struct std__allocator_int_* this21;
  this21 = v19;
  struct std__allocator_int_* t22 = this21;
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v23, struct std___Deque_iterator_int__int____int___* v24) {
bb25:
  struct std___Deque_iterator_int__int____int___* __x26;
  struct std___Deque_iterator_int__int____int___* __y27;
  long __retval28;
  __x26 = v23;
  __y27 = v24;
  unsigned long r29 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast30 = (long)r29;
  struct std___Deque_iterator_int__int____int___* t31 = __x26;
  int** t32 = t31->_M_node;
  struct std___Deque_iterator_int__int____int___* t33 = __y27;
  int** t34 = t33->_M_node;
  long diff35 = t32 - t34;
  struct std___Deque_iterator_int__int____int___* t36 = __x26;
  int** t37 = t36->_M_node;
  _Bool cast38 = (_Bool)t37;
  long cast39 = (long)cast38;
  long b40 = diff35 - cast39;
  long b41 = cast30 * b40;
  struct std___Deque_iterator_int__int____int___* t42 = __x26;
  int* t43 = t42->_M_cur;
  struct std___Deque_iterator_int__int____int___* t44 = __x26;
  int* t45 = t44->_M_first;
  long diff46 = t43 - t45;
  long b47 = b41 + diff46;
  struct std___Deque_iterator_int__int____int___* t48 = __y27;
  int* t49 = t48->_M_last;
  struct std___Deque_iterator_int__int____int___* t50 = __y27;
  int* t51 = t50->_M_cur;
  long diff52 = t49 - t51;
  long b53 = b47 + diff52;
  __retval28 = b53;
  long t54 = __retval28;
  return t54;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v55) {
bb56:
  struct std__deque_int__std__allocator_int__* this57;
  unsigned long __retval58;
  this57 = v55;
  struct std__deque_int__std__allocator_int__* t59 = this57;
  struct std___Deque_base_int__std__allocator_int__* base60 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t59 + 0);
  struct std__allocator_int_* r61 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base60);
  unsigned long r62 = std__deque_int__std__allocator_int______S_max_size(r61);
  __retval58 = r62;
  unsigned long t63 = __retval58;
  return t63;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v64) {
bb65:
  struct std__deque_int__std__allocator_int__* this66;
  unsigned long __retval67;
  unsigned long __sz68;
  this66 = v64;
  struct std__deque_int__std__allocator_int__* t69 = this66;
  struct std___Deque_base_int__std__allocator_int__* base70 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t69 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base71 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base70->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base72 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t69 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base73 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base72->_M_impl) + 0);
  long r74 = std__operator_(&base71->_M_finish, &base73->_M_start);
  unsigned long cast75 = (unsigned long)r74;
  __sz68 = cast75;
    unsigned long t76 = __sz68;
    unsigned long r77 = std__deque_int__std__allocator_int_____max_size___const(t69);
    _Bool c78 = ((t76 > r77)) ? 1 : 0;
    if (c78) {
      __builtin_unreachable();
    }
  unsigned long t79 = __sz68;
  __retval67 = t79;
  unsigned long t80 = __retval67;
  return t80;
}

// function: _ZNKSt5dequeIiSaIiEE14_M_range_checkEm
void std__deque_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__deque_int__std__allocator_int__* v81, unsigned long v82) {
bb83:
  struct std__deque_int__std__allocator_int__* this84;
  unsigned long __n85;
  this84 = v81;
  __n85 = v82;
  struct std__deque_int__std__allocator_int__* t86 = this84;
    unsigned long t87 = __n85;
    unsigned long r88 = std__deque_int__std__allocator_int_____size___const(t86);
    _Bool c89 = ((t87 >= r88)) ? 1 : 0;
    if (c89) {
      char* cast90 = (char*)&(_str_4);
      unsigned long t91 = __n85;
      unsigned long r92 = std__deque_int__std__allocator_int_____size___const(t86);
      std____throw_out_of_range_fmt(cast90, t91, r92);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEpLEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v93, long v94) {
bb95:
  struct std___Deque_iterator_int__int____int___* this96;
  long __n97;
  struct std___Deque_iterator_int__int____int___* __retval98;
  long __offset99;
  this96 = v93;
  __n97 = v94;
  struct std___Deque_iterator_int__int____int___* t100 = this96;
  long t101 = __n97;
  int* t102 = t100->_M_cur;
  int* t103 = t100->_M_first;
  long diff104 = t102 - t103;
  long b105 = t101 + diff104;
  __offset99 = b105;
    long t106 = __offset99;
    long c107 = 0;
    _Bool c108 = ((t106 >= c107)) ? 1 : 0;
    _Bool ternary109;
    if (c108) {
      long t110 = __offset99;
      unsigned long r111 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast112 = (long)r111;
      _Bool c113 = ((t110 < cast112)) ? 1 : 0;
      ternary109 = (_Bool)c113;
    } else {
      _Bool c114 = 0;
      ternary109 = (_Bool)c114;
    }
    if (ternary109) {
      long t115 = __n97;
      int* t116 = t100->_M_cur;
      int* ptr117 = &(t116)[t115];
      t100->_M_cur = ptr117;
    } else {
      long __node_offset118;
      long t119 = __offset99;
      long c120 = 0;
      _Bool c121 = ((t119 > c120)) ? 1 : 0;
      long ternary122;
      if (c121) {
        long t123 = __offset99;
        unsigned long r124 = std___Deque_iterator_int__int___int_____S_buffer_size();
        long cast125 = (long)r124;
        long b126 = t123 / cast125;
        ternary122 = (long)b126;
      } else {
        long t127 = __offset99;
        long u128 = -t127;
        long c129 = 1;
        long b130 = u128 - c129;
        unsigned long cast131 = (unsigned long)b130;
        unsigned long r132 = std___Deque_iterator_int__int___int_____S_buffer_size();
        unsigned long b133 = cast131 / r132;
        long cast134 = (long)b133;
        long u135 = -cast134;
        long c136 = 1;
        long b137 = u135 - c136;
        ternary122 = (long)b137;
      }
      __node_offset118 = ternary122;
      int** t138 = t100->_M_node;
      long t139 = __node_offset118;
      int** ptr140 = &(t138)[t139];
      std___Deque_iterator_int__int___int_____M_set_node(t100, ptr140);
      int* t141 = t100->_M_first;
      long t142 = __offset99;
      long t143 = __node_offset118;
      unsigned long r144 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast145 = (long)r144;
      long b146 = t143 * cast145;
      long b147 = t142 - b146;
      int* ptr148 = &(t141)[b147];
      t100->_M_cur = ptr148;
    }
  __retval98 = t100;
  struct std___Deque_iterator_int__int____int___* t149 = __retval98;
  return t149;
}

// function: _ZStplRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* v150, long v151) {
bb152:
  struct std___Deque_iterator_int__int____int___* __x153;
  long __n154;
  struct std___Deque_iterator_int__int____int___ __retval155;
  __x153 = v150;
  __n154 = v151;
  struct std___Deque_iterator_int__int____int___* t156 = __x153;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval155, t156);
  long t157 = __n154;
  struct std___Deque_iterator_int__int____int___* r158 = std___Deque_iterator_int__int___int____operator__(&__retval155, t157);
  struct std___Deque_iterator_int__int____int___ t159 = __retval155;
  return t159;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEixEl
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* v160, long v161) {
bb162:
  struct std___Deque_iterator_int__int____int___* this163;
  long __n164;
  int* __retval165;
  struct std___Deque_iterator_int__int____int___ ref_tmp0166;
  this163 = v160;
  __n164 = v161;
  struct std___Deque_iterator_int__int____int___* t167 = this163;
  long t168 = __n164;
  struct std___Deque_iterator_int__int____int___ r169 = std__operator__3(t167, t168);
  ref_tmp0166 = r169;
  int* r170 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0166);
  __retval165 = r170;
  int* t171 = __retval165;
  return t171;
}

// function: _ZNSt5dequeIiSaIiEEixEm
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* v172, unsigned long v173) {
bb174:
  struct std__deque_int__std__allocator_int__* this175;
  unsigned long __n176;
  int* __retval177;
  this175 = v172;
  __n176 = v173;
  struct std__deque_int__std__allocator_int__* t178 = this175;
    do {
          unsigned long t179 = __n176;
          unsigned long r180 = std__deque_int__std__allocator_int_____size___const(t178);
          _Bool c181 = ((t179 < r180)) ? 1 : 0;
          _Bool u182 = !c181;
          if (u182) {
            char* cast183 = (char*)&(_str_5);
            int c184 = 1433;
            char* cast185 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm);
            char* cast186 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast183, c184, cast185, cast186);
          }
      _Bool c187 = 0;
      if (!c187) break;
    } while (1);
  struct std___Deque_base_int__std__allocator_int__* base188 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t178 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base189 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base188->_M_impl) + 0);
  unsigned long t190 = __n176;
  long cast191 = (long)t190;
  int* r192 = std___Deque_iterator_int__int___int____operator___long__const(&base189->_M_start, cast191);
  __retval177 = r192;
  int* t193 = __retval177;
  return t193;
}

// function: _ZNSt5dequeIiSaIiEE2atEm
int* std__deque_int__std__allocator_int_____at(struct std__deque_int__std__allocator_int__* v194, unsigned long v195) {
bb196:
  struct std__deque_int__std__allocator_int__* this197;
  unsigned long __n198;
  int* __retval199;
  this197 = v194;
  __n198 = v195;
  struct std__deque_int__std__allocator_int__* t200 = this197;
  unsigned long t201 = __n198;
  std__deque_int__std__allocator_int______M_range_check_unsigned_long__const(t200, t201);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  unsigned long t202 = __n198;
  int* r203 = std__deque_int__std__allocator_int_____operator__(t200, t202);
  __retval199 = r203;
  int* t204 = __retval199;
  return t204;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v205, int v206) {
bb207:
  int __a208;
  int __b209;
  int __retval210;
  __a208 = v205;
  __b209 = v206;
  int t211 = __a208;
  int t212 = __b209;
  int b213 = t211 | t212;
  __retval210 = b213;
  int t214 = __retval210;
  return t214;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v215) {
bb216:
  struct std__basic_ios_char__std__char_traits_char__* this217;
  int __retval218;
  this217 = v215;
  struct std__basic_ios_char__std__char_traits_char__* t219 = this217;
  struct std__ios_base* base220 = (struct std__ios_base*)((char *)t219 + 0);
  int t221 = base220->_M_streambuf_state;
  __retval218 = t221;
  int t222 = __retval218;
  return t222;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v223, int v224) {
bb225:
  struct std__basic_ios_char__std__char_traits_char__* this226;
  int __state227;
  this226 = v223;
  __state227 = v224;
  struct std__basic_ios_char__std__char_traits_char__* t228 = this226;
  int r229 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t228);
  if (__cir_exc_active) {
    return;
  }
  int t230 = __state227;
  int r231 = std__operator__2(r229, t230);
  std__basic_ios_char__std__char_traits_char_____clear(t228, r231);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v232, char* v233) {
bb234:
  char* __c1235;
  char* __c2236;
  _Bool __retval237;
  __c1235 = v232;
  __c2236 = v233;
  char* t238 = __c1235;
  char t239 = *t238;
  int cast240 = (int)t239;
  char* t241 = __c2236;
  char t242 = *t241;
  int cast243 = (int)t242;
  _Bool c244 = ((cast240 == cast243)) ? 1 : 0;
  __retval237 = c244;
  _Bool t245 = __retval237;
  return t245;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v246) {
bb247:
  char* __p248;
  unsigned long __retval249;
  unsigned long __i250;
  __p248 = v246;
  unsigned long c251 = 0;
  __i250 = c251;
    char ref_tmp0252;
    while (1) {
      unsigned long t253 = __i250;
      char* t254 = __p248;
      char* ptr255 = &(t254)[t253];
      char c256 = 0;
      ref_tmp0252 = c256;
      _Bool r257 = __gnu_cxx__char_traits_char___eq(ptr255, &ref_tmp0252);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u258 = !r257;
      if (!u258) break;
      unsigned long t259 = __i250;
      unsigned long u260 = t259 + 1;
      __i250 = u260;
    }
  unsigned long t261 = __i250;
  __retval249 = t261;
  unsigned long t262 = __retval249;
  return t262;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v263) {
bb264:
  char* __s265;
  unsigned long __retval266;
  __s265 = v263;
    _Bool r267 = std____is_constant_evaluated();
    if (r267) {
      char* t268 = __s265;
      unsigned long r269 = __gnu_cxx__char_traits_char___length(t268);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval266 = r269;
      unsigned long t270 = __retval266;
      return t270;
    }
  char* t271 = __s265;
  unsigned long r272 = strlen(t271);
  __retval266 = r272;
  unsigned long t273 = __retval266;
  return t273;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v274, char* v275) {
bb276:
  struct std__basic_ostream_char__std__char_traits_char__* __out277;
  char* __s278;
  struct std__basic_ostream_char__std__char_traits_char__* __retval279;
  __out277 = v274;
  __s278 = v275;
    char* t280 = __s278;
    _Bool cast281 = (_Bool)t280;
    _Bool u282 = !cast281;
    if (u282) {
      struct std__basic_ostream_char__std__char_traits_char__* t283 = __out277;
      void** v284 = (void**)t283;
      void* v285 = *((void**)v284);
      unsigned char* cast286 = (unsigned char*)v285;
      long c287 = -24;
      unsigned char* ptr288 = &(cast286)[c287];
      long* cast289 = (long*)ptr288;
      long t290 = *cast289;
      unsigned char* cast291 = (unsigned char*)t283;
      unsigned char* ptr292 = &(cast291)[t290];
      struct std__basic_ostream_char__std__char_traits_char__* cast293 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr292;
      struct std__basic_ios_char__std__char_traits_char__* cast294 = (struct std__basic_ios_char__std__char_traits_char__*)cast293;
      int t295 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast294, t295);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t296 = __out277;
      char* t297 = __s278;
      char* t298 = __s278;
      unsigned long r299 = std__char_traits_char___length(t298);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast300 = (long)r299;
      struct std__basic_ostream_char__std__char_traits_char__* r301 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t296, t297, cast300);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t302 = __out277;
  __retval279 = t302;
  struct std__basic_ostream_char__std__char_traits_char__* t303 = __retval279;
  return t303;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v304, void* v305) {
bb306:
  struct std__basic_ostream_char__std__char_traits_char__* this307;
  void* __pf308;
  struct std__basic_ostream_char__std__char_traits_char__* __retval309;
  this307 = v304;
  __pf308 = v305;
  struct std__basic_ostream_char__std__char_traits_char__* t310 = this307;
  void* t311 = __pf308;
  struct std__basic_ostream_char__std__char_traits_char__* r312 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t311)(t310);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval309 = r312;
  struct std__basic_ostream_char__std__char_traits_char__* t313 = __retval309;
  return t313;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v314) {
bb315:
  struct std__basic_ostream_char__std__char_traits_char__* __os316;
  struct std__basic_ostream_char__std__char_traits_char__* __retval317;
  __os316 = v314;
  struct std__basic_ostream_char__std__char_traits_char__* t318 = __os316;
  struct std__basic_ostream_char__std__char_traits_char__* r319 = std__ostream__flush(t318);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval317 = r319;
  struct std__basic_ostream_char__std__char_traits_char__* t320 = __retval317;
  return t320;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v321) {
bb322:
  struct std__ctype_char_* __f323;
  struct std__ctype_char_* __retval324;
  __f323 = v321;
    struct std__ctype_char_* t325 = __f323;
    _Bool cast326 = (_Bool)t325;
    _Bool u327 = !cast326;
    if (u327) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t328 = __f323;
  __retval324 = t328;
  struct std__ctype_char_* t329 = __retval324;
  return t329;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v330, char v331) {
bb332:
  struct std__ctype_char_* this333;
  char __c334;
  char __retval335;
  this333 = v330;
  __c334 = v331;
  struct std__ctype_char_* t336 = this333;
    char t337 = t336->_M_widen_ok;
    _Bool cast338 = (_Bool)t337;
    if (cast338) {
      char t339 = __c334;
      unsigned char cast340 = (unsigned char)t339;
      unsigned long cast341 = (unsigned long)cast340;
      char t342 = t336->_M_widen[cast341];
      __retval335 = t342;
      char t343 = __retval335;
      return t343;
    }
  std__ctype_char____M_widen_init___const(t336);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t344 = __c334;
  void** v345 = (void**)t336;
  void* v346 = *((void**)v345);
  char vcall349 = (char)__VERIFIER_virtual_call_char_char(t336, 6, t344);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval335 = vcall349;
  char t350 = __retval335;
  return t350;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v351, char v352) {
bb353:
  struct std__basic_ios_char__std__char_traits_char__* this354;
  char __c355;
  char __retval356;
  this354 = v351;
  __c355 = v352;
  struct std__basic_ios_char__std__char_traits_char__* t357 = this354;
  struct std__ctype_char_* t358 = t357->_M_ctype;
  struct std__ctype_char_* r359 = std__ctype_char__const__std____check_facet_std__ctype_char___(t358);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t360 = __c355;
  char r361 = std__ctype_char___widen_char__const(r359, t360);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval356 = r361;
  char t362 = __retval356;
  return t362;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v363) {
bb364:
  struct std__basic_ostream_char__std__char_traits_char__* __os365;
  struct std__basic_ostream_char__std__char_traits_char__* __retval366;
  __os365 = v363;
  struct std__basic_ostream_char__std__char_traits_char__* t367 = __os365;
  struct std__basic_ostream_char__std__char_traits_char__* t368 = __os365;
  void** v369 = (void**)t368;
  void* v370 = *((void**)v369);
  unsigned char* cast371 = (unsigned char*)v370;
  long c372 = -24;
  unsigned char* ptr373 = &(cast371)[c372];
  long* cast374 = (long*)ptr373;
  long t375 = *cast374;
  unsigned char* cast376 = (unsigned char*)t368;
  unsigned char* ptr377 = &(cast376)[t375];
  struct std__basic_ostream_char__std__char_traits_char__* cast378 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr377;
  struct std__basic_ios_char__std__char_traits_char__* cast379 = (struct std__basic_ios_char__std__char_traits_char__*)cast378;
  char c380 = 10;
  char r381 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast379, c380);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r382 = std__ostream__put(t367, r381);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r383 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r382);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval366 = r383;
  struct std__basic_ostream_char__std__char_traits_char__* t384 = __retval366;
  return t384;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v385) {
bb386:
  struct std__deque_int__std__allocator_int__* this387;
  struct std___Deque_iterator_int__int____int___ agg_tmp0388;
  struct std___Deque_iterator_int__int____int___ agg_tmp1389;
  this387 = v385;
  struct std__deque_int__std__allocator_int__* t390 = this387;
    struct std___Deque_iterator_int__int____int___ r391 = std__deque_int__std__allocator_int_____begin(t390);
    agg_tmp0388 = r391;
    struct std___Deque_iterator_int__int____int___ r392 = std__deque_int__std__allocator_int_____end(t390);
    agg_tmp1389 = r392;
    struct std___Deque_base_int__std__allocator_int__* base393 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t390 + 0);
    struct std__allocator_int_* r394 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base393);
    struct std___Deque_iterator_int__int____int___ t395 = agg_tmp0388;
    struct std___Deque_iterator_int__int____int___ t396 = agg_tmp1389;
    std__deque_int__std__allocator_int______M_destroy_data(t390, t395, t396, r394);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base397 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t390 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base397);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base398 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t390 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base398);
  }
  return;
}

// function: main
int main() {
bb399:
  int __retval400;
  struct std__deque_int__std__allocator_int__ mydeque401;
  struct std__allocator_int_ ref_tmp0402;
  unsigned int i403;
  int c404 = 0;
  __retval400 = c404;
  unsigned long c405 = 10;
  std__allocator_int___allocator_2(&ref_tmp0402);
    std__deque_int__std__allocator_int_____deque(&mydeque401, c405, &ref_tmp0402);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp0402);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp0402);
  }
      unsigned int c406 = 0;
      i403 = c406;
      while (1) {
        unsigned int t408 = i403;
        unsigned long cast409 = (unsigned long)t408;
        unsigned long r410 = std__deque_int__std__allocator_int_____size___const(&mydeque401);
        _Bool c411 = ((cast409 < r410)) ? 1 : 0;
        if (!c411) break;
        unsigned int t412 = i403;
        int cast413 = (int)t412;
        unsigned int t414 = i403;
        unsigned long cast415 = (unsigned long)t414;
        int* r416 = std__deque_int__std__allocator_int_____at(&mydeque401, cast415);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque401);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        *r416 = cast413;
      for_step407: ;
        unsigned int t417 = i403;
        unsigned int u418 = t417 + 1;
        i403 = u418;
      }
    char* cast419 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r420 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast419);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque401);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      unsigned int c421 = 0;
      i403 = c421;
      while (1) {
        unsigned int t423 = i403;
        unsigned long cast424 = (unsigned long)t423;
        unsigned long r425 = std__deque_int__std__allocator_int_____size___const(&mydeque401);
        _Bool c426 = ((cast424 < r425)) ? 1 : 0;
        if (!c426) break;
        unsigned int t427 = i403;
        unsigned long cast428 = (unsigned long)t427;
        int* r429 = std__deque_int__std__allocator_int_____at(&mydeque401, cast428);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque401);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int t430 = *r429;
        unsigned int cast431 = (unsigned int)t430;
        unsigned int t432 = i403;
        _Bool c433 = ((cast431 == t432)) ? 1 : 0;
        if (c433) {
        } else {
          char* cast434 = (char*)&(_str_1);
          char* c435 = _str_2;
          unsigned int c436 = 25;
          char* cast437 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast434, c435, c436, cast437);
        }
      for_step422: ;
        unsigned int t438 = i403;
        unsigned int u439 = t438 + 1;
        i403 = u439;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r440 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque401);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c441 = 0;
    __retval400 = c441;
    int t442 = __retval400;
    int ret_val443 = t442;
    {
      std__deque_int__std__allocator_int______deque(&mydeque401);
    }
    return ret_val443;
  int t444 = __retval400;
  return t444;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v445) {
bb446:
  struct std____new_allocator_int_* this447;
  this447 = v445;
  struct std____new_allocator_int_* t448 = this447;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v449, unsigned long* v450) {
bb451:
  unsigned long* __a452;
  unsigned long* __b453;
  unsigned long* __retval454;
  __a452 = v449;
  __b453 = v450;
    unsigned long* t455 = __b453;
    unsigned long t456 = *t455;
    unsigned long* t457 = __a452;
    unsigned long t458 = *t457;
    _Bool c459 = ((t456 < t458)) ? 1 : 0;
    if (c459) {
      unsigned long* t460 = __b453;
      __retval454 = t460;
      unsigned long* t461 = __retval454;
      return t461;
    }
  unsigned long* t462 = __a452;
  __retval454 = t462;
  unsigned long* t463 = __retval454;
  return t463;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v464) {
bb465:
  struct std__allocator_int_* __a466;
  unsigned long __retval467;
  unsigned long __diffmax468;
  unsigned long __allocmax469;
  __a466 = v464;
  unsigned long c470 = 9223372036854775807;
  __diffmax468 = c470;
  unsigned long c471 = 4611686018427387903;
  __allocmax469 = c471;
  unsigned long* r472 = unsigned_long_const__std__min_unsigned_long_(&__diffmax468, &__allocmax469);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t473 = *r472;
  __retval467 = t473;
  unsigned long t474 = __retval467;
  return t474;
}

// function: _ZNSt5dequeIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long v475, struct std__allocator_int_* v476) {
bb477:
  unsigned long __n478;
  struct std__allocator_int_* __a479;
  unsigned long __retval480;
  __n478 = v475;
  __a479 = v476;
    unsigned long t481 = __n478;
    struct std__allocator_int_* t482 = __a479;
    unsigned long r483 = std__deque_int__std__allocator_int______S_max_size(t482);
    _Bool c484 = ((t481 > r483)) ? 1 : 0;
    if (c484) {
      char* cast485 = (char*)&(_str_3);
      std____throw_length_error(cast485);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t486 = __n478;
  __retval480 = t486;
  unsigned long t487 = __retval480;
  return t487;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2ERKS0_
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v488, struct std__allocator_int_* v489) {
bb490:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this491;
  struct std__allocator_int_* __a492;
  this491 = v488;
  __a492 = v489;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t493 = this491;
  struct std__allocator_int_* base494 = (struct std__allocator_int_*)((char *)t493 + 0);
  struct std__allocator_int_* t495 = __a492;
  std__allocator_int___allocator(base494, t495);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base496 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t493 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base496);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v497) {
bb498:
  unsigned long __size499;
  unsigned long __retval500;
  __size499 = v497;
  unsigned long t501 = __size499;
  unsigned long c502 = 512;
  _Bool c503 = ((t501 < c502)) ? 1 : 0;
  unsigned long ternary504;
  if (c503) {
    unsigned long c505 = 512;
    unsigned long t506 = __size499;
    unsigned long b507 = c505 / t506;
    ternary504 = (unsigned long)b507;
  } else {
    unsigned long c508 = 1;
    ternary504 = (unsigned long)c508;
  }
  __retval500 = ternary504;
  unsigned long t509 = __retval500;
  return t509;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v510, unsigned long* v511) {
bb512:
  unsigned long* __a513;
  unsigned long* __b514;
  unsigned long* __retval515;
  __a513 = v510;
  __b514 = v511;
    unsigned long* t516 = __a513;
    unsigned long t517 = *t516;
    unsigned long* t518 = __b514;
    unsigned long t519 = *t518;
    _Bool c520 = ((t517 < t519)) ? 1 : 0;
    if (c520) {
      unsigned long* t521 = __b514;
      __retval515 = t521;
      unsigned long* t522 = __retval515;
      return t522;
    }
  unsigned long* t523 = __a513;
  __retval515 = t523;
  unsigned long* t524 = __retval515;
  return t524;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v525) {
bb526:
  struct std___Deque_base_int__std__allocator_int__* this527;
  struct std__allocator_int_* __retval528;
  this527 = v525;
  struct std___Deque_base_int__std__allocator_int__* t529 = this527;
  struct std__allocator_int_* base530 = (struct std__allocator_int_*)((char *)&(t529->_M_impl) + 0);
  __retval528 = base530;
  struct std__allocator_int_* t531 = __retval528;
  return t531;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v532, struct std__allocator_int_* v533) {
bb534:
  struct std__allocator_int___* this535;
  struct std__allocator_int_* unnamed536;
  this535 = v532;
  unnamed536 = v533;
  struct std__allocator_int___* t537 = this535;
  struct std____new_allocator_int___* base538 = (struct std____new_allocator_int___*)((char *)t537 + 0);
  std____new_allocator_int______new_allocator(base538);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v539) {
bb540:
  struct std___Deque_base_int__std__allocator_int__* this541;
  struct std__allocator_int___ __retval542;
  this541 = v539;
  struct std___Deque_base_int__std__allocator_int__* t543 = this541;
  struct std__allocator_int_* r544 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t543);
  std__allocator_int____allocator_int_(&__retval542, r544);
  struct std__allocator_int___ t545 = __retval542;
  return t545;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb546:
  _Bool __retval547;
    _Bool c548 = 0;
    __retval547 = c548;
    _Bool t549 = __retval547;
    return t549;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v550) {
bb551:
  struct std____new_allocator_int___* this552;
  unsigned long __retval553;
  this552 = v550;
  struct std____new_allocator_int___* t554 = this552;
  unsigned long c555 = 9223372036854775807;
  unsigned long c556 = 8;
  unsigned long b557 = c555 / c556;
  __retval553 = b557;
  unsigned long t558 = __retval553;
  return t558;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v559, unsigned long v560, void* v561) {
bb562:
  struct std____new_allocator_int___* this563;
  unsigned long __n564;
  void* unnamed565;
  int** __retval566;
  this563 = v559;
  __n564 = v560;
  unnamed565 = v561;
  struct std____new_allocator_int___* t567 = this563;
    unsigned long t568 = __n564;
    unsigned long r569 = std____new_allocator_int_____M_max_size___const(t567);
    _Bool c570 = ((t568 > r569)) ? 1 : 0;
    if (c570) {
        unsigned long t571 = __n564;
        unsigned long c572 = -1;
        unsigned long c573 = 8;
        unsigned long b574 = c572 / c573;
        _Bool c575 = ((t571 > b574)) ? 1 : 0;
        if (c575) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c576 = 8;
    unsigned long c577 = 16;
    _Bool c578 = ((c576 > c577)) ? 1 : 0;
    if (c578) {
      unsigned long __al579;
      unsigned long c580 = 8;
      __al579 = c580;
      unsigned long t581 = __n564;
      unsigned long c582 = 8;
      unsigned long b583 = t581 * c582;
      unsigned long t584 = __al579;
      void* r585 = operator_new_2(b583, t584);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast586 = (int**)r585;
      __retval566 = cast586;
      int** t587 = __retval566;
      return t587;
    }
  unsigned long t588 = __n564;
  unsigned long c589 = 8;
  unsigned long b590 = t588 * c589;
  void* r591 = operator_new(b590);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast592 = (int**)r591;
  __retval566 = cast592;
  int** t593 = __retval566;
  return t593;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v594, unsigned long v595) {
bb596:
  struct std__allocator_int___* this597;
  unsigned long __n598;
  int** __retval599;
  this597 = v594;
  __n598 = v595;
  struct std__allocator_int___* t600 = this597;
    _Bool r601 = std____is_constant_evaluated();
    if (r601) {
        unsigned long t602 = __n598;
        unsigned long c603 = 8;
        unsigned long ovr604;
        _Bool ovf605 = __builtin_mul_overflow(t602, c603, &ovr604);
        __n598 = ovr604;
        if (ovf605) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t606 = __n598;
      void* r607 = operator_new(t606);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast608 = (int**)r607;
      __retval599 = cast608;
      int** t609 = __retval599;
      return t609;
    }
  struct std____new_allocator_int___* base610 = (struct std____new_allocator_int___*)((char *)t600 + 0);
  unsigned long t611 = __n598;
  void* c612 = ((void*)0);
  int** r613 = std____new_allocator_int____allocate(base610, t611, c612);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval599 = r613;
  int** t614 = __retval599;
  return t614;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v615, unsigned long v616) {
bb617:
  struct std__allocator_int___* __a618;
  unsigned long __n619;
  int** __retval620;
  __a618 = v615;
  __n619 = v616;
  struct std__allocator_int___* t621 = __a618;
  unsigned long t622 = __n619;
  int** r623 = std__allocator_int____allocate(t621, t622);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval620 = r623;
  int** t624 = __retval620;
  return t624;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v625, unsigned long v626) {
bb627:
  struct std___Deque_base_int__std__allocator_int__* this628;
  unsigned long __n629;
  int** __retval630;
  struct std__allocator_int___ __map_alloc631;
  this628 = v625;
  __n629 = v626;
  struct std___Deque_base_int__std__allocator_int__* t632 = this628;
  struct std__allocator_int___ r633 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t632);
  __map_alloc631 = r633;
  unsigned long t634 = __n629;
  int** r635 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc631, t634);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval630 = r635;
  int** t636 = __retval630;
  return t636;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v637) {
bb638:
  struct std____new_allocator_int_* this639;
  unsigned long __retval640;
  this639 = v637;
  struct std____new_allocator_int_* t641 = this639;
  unsigned long c642 = 9223372036854775807;
  unsigned long c643 = 4;
  unsigned long b644 = c642 / c643;
  __retval640 = b644;
  unsigned long t645 = __retval640;
  return t645;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v646, unsigned long v647, void* v648) {
bb649:
  struct std____new_allocator_int_* this650;
  unsigned long __n651;
  void* unnamed652;
  int* __retval653;
  this650 = v646;
  __n651 = v647;
  unnamed652 = v648;
  struct std____new_allocator_int_* t654 = this650;
    unsigned long t655 = __n651;
    unsigned long r656 = std____new_allocator_int____M_max_size___const(t654);
    _Bool c657 = ((t655 > r656)) ? 1 : 0;
    if (c657) {
        unsigned long t658 = __n651;
        unsigned long c659 = -1;
        unsigned long c660 = 4;
        unsigned long b661 = c659 / c660;
        _Bool c662 = ((t658 > b661)) ? 1 : 0;
        if (c662) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c663 = 4;
    unsigned long c664 = 16;
    _Bool c665 = ((c663 > c664)) ? 1 : 0;
    if (c665) {
      unsigned long __al666;
      unsigned long c667 = 4;
      __al666 = c667;
      unsigned long t668 = __n651;
      unsigned long c669 = 4;
      unsigned long b670 = t668 * c669;
      unsigned long t671 = __al666;
      void* r672 = operator_new_2(b670, t671);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast673 = (int*)r672;
      __retval653 = cast673;
      int* t674 = __retval653;
      return t674;
    }
  unsigned long t675 = __n651;
  unsigned long c676 = 4;
  unsigned long b677 = t675 * c676;
  void* r678 = operator_new(b677);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast679 = (int*)r678;
  __retval653 = cast679;
  int* t680 = __retval653;
  return t680;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v681, unsigned long v682) {
bb683:
  struct std__allocator_int_* this684;
  unsigned long __n685;
  int* __retval686;
  this684 = v681;
  __n685 = v682;
  struct std__allocator_int_* t687 = this684;
    _Bool r688 = std____is_constant_evaluated();
    if (r688) {
        unsigned long t689 = __n685;
        unsigned long c690 = 4;
        unsigned long ovr691;
        _Bool ovf692 = __builtin_mul_overflow(t689, c690, &ovr691);
        __n685 = ovr691;
        if (ovf692) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t693 = __n685;
      void* r694 = operator_new(t693);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast695 = (int*)r694;
      __retval686 = cast695;
      int* t696 = __retval686;
      return t696;
    }
  struct std____new_allocator_int_* base697 = (struct std____new_allocator_int_*)((char *)t687 + 0);
  unsigned long t698 = __n685;
  void* c699 = ((void*)0);
  int* r700 = std____new_allocator_int___allocate(base697, t698, c699);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval686 = r700;
  int* t701 = __retval686;
  return t701;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v702, unsigned long v703) {
bb704:
  struct std__allocator_int_* __a705;
  unsigned long __n706;
  int* __retval707;
  __a705 = v702;
  __n706 = v703;
  struct std__allocator_int_* t708 = __a705;
  unsigned long t709 = __n706;
  int* r710 = std__allocator_int___allocate(t708, t709);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval707 = r710;
  int* t711 = __retval707;
  return t711;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v712) {
bb713:
  struct std___Deque_base_int__std__allocator_int__* this714;
  int* __retval715;
  this714 = v712;
  struct std___Deque_base_int__std__allocator_int__* t716 = this714;
  struct std__allocator_int_* base717 = (struct std__allocator_int_*)((char *)&(t716->_M_impl) + 0);
  unsigned long c718 = 4;
  unsigned long r719 = std____deque_buf_size(c718);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r720 = std__allocator_traits_std__allocator_int_____allocate(base717, r719);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval715 = r720;
  int* t721 = __retval715;
  return t721;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v722, int* v723, unsigned long v724) {
bb725:
  struct std____new_allocator_int_* this726;
  int* __p727;
  unsigned long __n728;
  this726 = v722;
  __p727 = v723;
  __n728 = v724;
  struct std____new_allocator_int_* t729 = this726;
    unsigned long c730 = 4;
    unsigned long c731 = 16;
    _Bool c732 = ((c730 > c731)) ? 1 : 0;
    if (c732) {
      int* t733 = __p727;
      void* cast734 = (void*)t733;
      unsigned long t735 = __n728;
      unsigned long c736 = 4;
      unsigned long b737 = t735 * c736;
      unsigned long c738 = 4;
      operator_delete_3(cast734, b737, c738);
      return;
    }
  int* t739 = __p727;
  void* cast740 = (void*)t739;
  unsigned long t741 = __n728;
  unsigned long c742 = 4;
  unsigned long b743 = t741 * c742;
  operator_delete_2(cast740, b743);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v744, int* v745, unsigned long v746) {
bb747:
  struct std__allocator_int_* this748;
  int* __p749;
  unsigned long __n750;
  this748 = v744;
  __p749 = v745;
  __n750 = v746;
  struct std__allocator_int_* t751 = this748;
    _Bool r752 = std____is_constant_evaluated();
    if (r752) {
      int* t753 = __p749;
      void* cast754 = (void*)t753;
      operator_delete(cast754);
      return;
    }
  struct std____new_allocator_int_* base755 = (struct std____new_allocator_int_*)((char *)t751 + 0);
  int* t756 = __p749;
  unsigned long t757 = __n750;
  std____new_allocator_int___deallocate(base755, t756, t757);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v758, int* v759, unsigned long v760) {
bb761:
  struct std__allocator_int_* __a762;
  int* __p763;
  unsigned long __n764;
  __a762 = v758;
  __p763 = v759;
  __n764 = v760;
  struct std__allocator_int_* t765 = __a762;
  int* t766 = __p763;
  unsigned long t767 = __n764;
  std__allocator_int___deallocate(t765, t766, t767);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v768, int* v769) {
bb770:
  struct std___Deque_base_int__std__allocator_int__* this771;
  int* __p772;
  this771 = v768;
  __p772 = v769;
  struct std___Deque_base_int__std__allocator_int__* t773 = this771;
  struct std__allocator_int_* base774 = (struct std__allocator_int_*)((char *)&(t773->_M_impl) + 0);
  int* t775 = __p772;
  unsigned long c776 = 4;
  unsigned long r777 = std____deque_buf_size(c776);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base774, t775, r777);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v778, int** v779, int** v780) {
bb781:
  struct std___Deque_base_int__std__allocator_int__* this782;
  int** __nstart783;
  int** __nfinish784;
  this782 = v778;
  __nstart783 = v779;
  __nfinish784 = v780;
  struct std___Deque_base_int__std__allocator_int__* t785 = this782;
    int** __n786;
    int** t787 = __nstart783;
    __n786 = t787;
    while (1) {
      int** t789 = __n786;
      int** t790 = __nfinish784;
      _Bool c791 = ((t789 < t790)) ? 1 : 0;
      if (!c791) break;
      int** t792 = __n786;
      int* t793 = *t792;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t785, t793);
    for_step788: ;
      int** t794 = __n786;
      int c795 = 1;
      int** ptr796 = &(t794)[c795];
      __n786 = ptr796;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v797, int** v798, int** v799) {
bb800:
  struct std___Deque_base_int__std__allocator_int__* this801;
  int** __nstart802;
  int** __nfinish803;
  int** __cur804;
  this801 = v797;
  __nstart802 = v798;
  __nfinish803 = v799;
  struct std___Deque_base_int__std__allocator_int__* t805 = this801;
        int** t807 = __nstart802;
        __cur804 = t807;
        while (1) {
          int** t809 = __cur804;
          int** t810 = __nfinish803;
          _Bool c811 = ((t809 < t810)) ? 1 : 0;
          if (!c811) break;
          int* r812 = std___Deque_base_int__std__allocator_int______M_allocate_node(t805);
          if (__cir_exc_active) {
            goto cir_try_dispatch806;
          }
          int** t813 = __cur804;
          *t813 = r812;
        for_step808: ;
          int** t814 = __cur804;
          int c815 = 1;
          int** ptr816 = &(t814)[c815];
          __cur804 = ptr816;
        }
    cir_try_dispatch806: ;
    if (__cir_exc_active) {
    {
      int ca_tok817 = 0;
      void* ca_exn818 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t819 = __nstart802;
        int** t820 = __cur804;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t805, t819, t820);
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

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v821, int** v822, unsigned long v823) {
bb824:
  struct std____new_allocator_int___* this825;
  int** __p826;
  unsigned long __n827;
  this825 = v821;
  __p826 = v822;
  __n827 = v823;
  struct std____new_allocator_int___* t828 = this825;
    unsigned long c829 = 8;
    unsigned long c830 = 16;
    _Bool c831 = ((c829 > c830)) ? 1 : 0;
    if (c831) {
      int** t832 = __p826;
      void* cast833 = (void*)t832;
      unsigned long t834 = __n827;
      unsigned long c835 = 8;
      unsigned long b836 = t834 * c835;
      unsigned long c837 = 8;
      operator_delete_3(cast833, b836, c837);
      return;
    }
  int** t838 = __p826;
  void* cast839 = (void*)t838;
  unsigned long t840 = __n827;
  unsigned long c841 = 8;
  unsigned long b842 = t840 * c841;
  operator_delete_2(cast839, b842);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v843, int** v844, unsigned long v845) {
bb846:
  struct std__allocator_int___* this847;
  int** __p848;
  unsigned long __n849;
  this847 = v843;
  __p848 = v844;
  __n849 = v845;
  struct std__allocator_int___* t850 = this847;
    _Bool r851 = std____is_constant_evaluated();
    if (r851) {
      int** t852 = __p848;
      void* cast853 = (void*)t852;
      operator_delete(cast853);
      return;
    }
  struct std____new_allocator_int___* base854 = (struct std____new_allocator_int___*)((char *)t850 + 0);
  int** t855 = __p848;
  unsigned long t856 = __n849;
  std____new_allocator_int____deallocate(base854, t855, t856);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v857, int** v858, unsigned long v859) {
bb860:
  struct std__allocator_int___* __a861;
  int** __p862;
  unsigned long __n863;
  __a861 = v857;
  __p862 = v858;
  __n863 = v859;
  struct std__allocator_int___* t864 = __a861;
  int** t865 = __p862;
  unsigned long t866 = __n863;
  std__allocator_int____deallocate(t864, t865, t866);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v867, int** v868, unsigned long v869) {
bb870:
  struct std___Deque_base_int__std__allocator_int__* this871;
  int** __p872;
  unsigned long __n873;
  struct std__allocator_int___ __map_alloc874;
  this871 = v867;
  __p872 = v868;
  __n873 = v869;
  struct std___Deque_base_int__std__allocator_int__* t875 = this871;
  struct std__allocator_int___ r876 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t875);
  __map_alloc874 = r876;
  int** t877 = __p872;
  unsigned long t878 = __n873;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc874, t877, t878);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb879:
  unsigned long __retval880;
  unsigned long c881 = 4;
  unsigned long r882 = std____deque_buf_size(c881);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval880 = r882;
  unsigned long t883 = __retval880;
  return t883;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v884, int** v885) {
bb886:
  struct std___Deque_iterator_int__int____int___* this887;
  int** __new_node888;
  this887 = v884;
  __new_node888 = v885;
  struct std___Deque_iterator_int__int____int___* t889 = this887;
  int** t890 = __new_node888;
  t889->_M_node = t890;
  int** t891 = __new_node888;
  int* t892 = *t891;
  t889->_M_first = t892;
  int* t893 = t889->_M_first;
  unsigned long r894 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast895 = (long)r894;
  int* ptr896 = &(t893)[cast895];
  t889->_M_last = ptr896;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v897, unsigned long v898) {
bb899:
  struct std___Deque_base_int__std__allocator_int__* this900;
  unsigned long __num_elements901;
  unsigned long __num_nodes902;
  unsigned long ref_tmp0903;
  unsigned long ref_tmp1904;
  int** __nstart905;
  int** __nfinish906;
  this900 = v897;
  __num_elements901 = v898;
  struct std___Deque_base_int__std__allocator_int__* t907 = this900;
  unsigned long t908 = __num_elements901;
  unsigned long c909 = 4;
  unsigned long r910 = std____deque_buf_size(c909);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b911 = t908 / r910;
  unsigned long c912 = 1;
  unsigned long b913 = b911 + c912;
  __num_nodes902 = b913;
  unsigned long c914 = 8;
  ref_tmp0903 = c914;
  unsigned long t915 = __num_nodes902;
  unsigned long c916 = 2;
  unsigned long b917 = t915 + c916;
  ref_tmp1904 = b917;
  unsigned long* r918 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0903, &ref_tmp1904);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t919 = *r918;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base920 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  base920->_M_map_size = t919;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base921 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  unsigned long t922 = base921->_M_map_size;
  int** r923 = std___Deque_base_int__std__allocator_int______M_allocate_map(t907, t922);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base924 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  base924->_M_map = r923;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base925 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  int** t926 = base925->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base927 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  unsigned long t928 = base927->_M_map_size;
  unsigned long t929 = __num_nodes902;
  unsigned long b930 = t928 - t929;
  unsigned long c931 = 2;
  unsigned long b932 = b930 / c931;
  int** ptr933 = &(t926)[b932];
  __nstart905 = ptr933;
  int** t934 = __nstart905;
  unsigned long t935 = __num_nodes902;
  int** ptr936 = &(t934)[t935];
  __nfinish906 = ptr936;
      int** t938 = __nstart905;
      int** t939 = __nfinish906;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t907, t938, t939);
      if (__cir_exc_active) {
        goto cir_try_dispatch937;
      }
    cir_try_dispatch937: ;
    if (__cir_exc_active) {
    {
      int ca_tok940 = 0;
      void* ca_exn941 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base942 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
        int** t943 = base942->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base944 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
        unsigned long t945 = base944->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t907, t943, t945);
        int** c946 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base947 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
        base947->_M_map = c946;
        unsigned long c948 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base949 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
        base949->_M_map_size = c948;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base950 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  int** t951 = __nstart905;
  std___Deque_iterator_int__int___int_____M_set_node(&base950->_M_start, t951);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base952 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  int** t953 = __nfinish906;
  int c954 = -1;
  int** ptr955 = &(t953)[c954];
  std___Deque_iterator_int__int___int_____M_set_node(&base952->_M_finish, ptr955);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base956 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  int* t957 = base956->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base958 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  base958->_M_start._M_cur = t957;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base959 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  int* t960 = base959->_M_finish._M_first;
  unsigned long t961 = __num_elements901;
  unsigned long c962 = 4;
  unsigned long r963 = std____deque_buf_size(c962);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b964 = t961 % r963;
  int* ptr965 = &(t960)[b964];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base966 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t907->_M_impl) + 0);
  base966->_M_finish._M_cur = ptr965;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v967) {
bb968:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this969;
  this969 = v967;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t970 = this969;
  {
    struct std__allocator_int_* base971 = (struct std__allocator_int_*)((char *)t970 + 0);
    std__allocator_int____allocator(base971);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2ERKS0_m
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v972, struct std__allocator_int_* v973, unsigned long v974) {
bb975:
  struct std___Deque_base_int__std__allocator_int__* this976;
  struct std__allocator_int_* __a977;
  unsigned long __num_elements978;
  this976 = v972;
  __a977 = v973;
  __num_elements978 = v974;
  struct std___Deque_base_int__std__allocator_int__* t979 = this976;
  struct std__allocator_int_* t980 = __a977;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t979->_M_impl, t980);
    unsigned long t981 = __num_elements978;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t979, t981);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t979->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb982:
  _Bool __retval983;
    _Bool c984 = 0;
    __retval983 = c984;
    _Bool t985 = __retval983;
    return t985;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v986, int** v987) {
bb988:
  struct std___UninitDestroyGuard_int____void_* this989;
  int** __first990;
  this989 = v986;
  __first990 = v987;
  struct std___UninitDestroyGuard_int____void_* t991 = this989;
  int** t992 = __first990;
  int* t993 = *t992;
  t991->_M_first = t993;
  int** t994 = __first990;
  t991->_M_cur = t994;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v995) {
bb996:
  int* __location997;
  int* __retval998;
  void* __loc999;
  __location997 = v995;
  int* t1000 = __location997;
  void* cast1001 = (void*)t1000;
  __loc999 = cast1001;
    void* t1002 = __loc999;
    int* cast1003 = (int*)t1002;
    int c1004 = 0;
    *cast1003 = c1004;
    __retval998 = cast1003;
    int* t1005 = __retval998;
    return t1005;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1006) {
bb1007:
  int* __p1008;
  __p1008 = v1006;
    _Bool r1009 = std____is_constant_evaluated();
    if (r1009) {
      int* t1010 = __p1008;
      int* r1011 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1010);
      return;
    }
  int* t1012 = __p1008;
  void* cast1013 = (void*)t1012;
  int* cast1014 = (int*)cast1013;
  int c1015 = 0;
  *cast1014 = c1015;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1016) {
bb1017:
  struct std___UninitDestroyGuard_int____void_* this1018;
  this1018 = v1016;
  struct std___UninitDestroyGuard_int____void_* t1019 = this1018;
  int** c1020 = ((void*)0);
  t1019->_M_cur = c1020;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1021) {
bb1022:
  struct std___UninitDestroyGuard_int____void_* this1023;
  this1023 = v1021;
  struct std___UninitDestroyGuard_int____void_* t1024 = this1023;
    int** t1025 = t1024->_M_cur;
    int** c1026 = ((void*)0);
    _Bool c1027 = ((t1025 != c1026)) ? 1 : 0;
    if (c1027) {
      int* t1028 = t1024->_M_first;
      int** t1029 = t1024->_M_cur;
      int* t1030 = *t1029;
      void_std___Destroy_int__(t1028, t1030);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt25__uninitialized_default_1ILb0EE16__uninit_defaultIPiEEvT_S3_
void void_std____uninitialized_default_1_false_____uninit_default_int__(int* v1031, int* v1032) {
bb1033:
  int* __first1034;
  int* __last1035;
  struct std___UninitDestroyGuard_int____void_ __guard1036;
  __first1034 = v1031;
  __last1035 = v1032;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1036, &__first1034);
  if (__cir_exc_active) {
    return;
  }
      while (1) {
        int* t1038 = __first1034;
        int* t1039 = __last1035;
        _Bool c1040 = ((t1038 != t1039)) ? 1 : 0;
        if (!c1040) break;
        int* t1041 = __first1034;
        void_std___Construct_int_(t1041);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1036);
          }
          return;
        }
      for_step1037: ;
        int* t1042 = __first1034;
        int c1043 = 1;
        int* ptr1044 = &(t1042)[c1043];
        __first1034 = ptr1044;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1036);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1036);
      }
      return;
    }
  {
    std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1036);
  }
  return;
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1045, int* v1046, int* v1047) {
bb1048:
  int* __first1049;
  int* __last1050;
  int* __value1051;
  _Bool __load_outside_loop1052;
  int __val1053;
  __first1049 = v1045;
  __last1050 = v1046;
  __value1051 = v1047;
  _Bool c1054 = 1;
  __load_outside_loop1052 = c1054;
  int* t1055 = __value1051;
  int t1056 = *t1055;
  __val1053 = t1056;
    while (1) {
      int* t1058 = __first1049;
      int* t1059 = __last1050;
      _Bool c1060 = ((t1058 != t1059)) ? 1 : 0;
      if (!c1060) break;
      int t1061 = __val1053;
      int* t1062 = __first1049;
      *t1062 = t1061;
    for_step1057: ;
      int* t1063 = __first1049;
      int c1064 = 1;
      int* ptr1065 = &(t1063)[c1064];
      __first1049 = ptr1065;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1066, int* v1067, int* v1068) {
bb1069:
  int* __first1070;
  int* __last1071;
  int* __value1072;
  __first1070 = v1066;
  __last1071 = v1067;
  __value1072 = v1068;
  int* t1073 = __first1070;
  int* t1074 = __last1071;
  int* t1075 = __value1072;
  void_std____fill_a1_int___int_(t1073, t1074, t1075);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt4fillIPiiEvT_S1_RKT0_
void void_std__fill_int___int_(int* v1076, int* v1077, int* v1078) {
bb1079:
  int* __first1080;
  int* __last1081;
  int* __value1082;
  __first1080 = v1076;
  __last1081 = v1077;
  __value1082 = v1078;
  int* t1083 = __first1080;
  int* t1084 = __last1081;
  int* t1085 = __value1082;
  void_std____fill_a_int___int_(t1083, t1084, t1085);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt25__uninitialized_default_1ILb1EE16__uninit_defaultIPiEEvT_S3_
void void_std____uninitialized_default_1_true_____uninit_default_int__(int* v1086, int* v1087) {
bb1088:
  int* __first1089;
  int* __last1090;
  int* __val1091;
  __first1089 = v1086;
  __last1090 = v1087;
    int* t1092 = __first1089;
    int* t1093 = __last1090;
    _Bool c1094 = ((t1092 == t1093)) ? 1 : 0;
    if (c1094) {
      return;
    }
  int* t1095 = __first1089;
  __val1091 = t1095;
  int* t1096 = __val1091;
  void_std___Construct_int_(t1096);
  if (__cir_exc_active) {
    return;
  }
    int* t1097 = __first1089;
    int c1098 = 1;
    int* ptr1099 = &(t1097)[c1098];
    __first1089 = ptr1099;
    int* t1100 = __last1090;
    _Bool c1101 = ((ptr1099 != t1100)) ? 1 : 0;
    if (c1101) {
      int* t1102 = __first1089;
      int* t1103 = __last1090;
      int* t1104 = __val1091;
      void_std__fill_int___int_(t1102, t1103, t1104);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt23__uninitialized_defaultIPiEvT_S1_
void void_std____uninitialized_default_int__(int* v1105, int* v1106) {
bb1107:
  int* __first1108;
  int* __last1109;
  _Bool __assignable1110;
  __first1108 = v1105;
  __last1109 = v1106;
    _Bool r1111 = std__is_constant_evaluated();
    if (r1111) {
      int* t1112 = __first1108;
      int* t1113 = __last1109;
      void_std____uninitialized_default_1_false_____uninit_default_int__(t1112, t1113);
      if (__cir_exc_active) {
        return;
      }
      return;
    }
  _Bool c1114 = 1;
  __assignable1110 = c1114;
  int* t1115 = __first1108;
  int* t1116 = __last1109;
  void_std____uninitialized_default_1_true_____uninit_default_int__(t1115, t1116);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt25__uninitialized_default_aIPiiEvT_S1_RSaIT0_E
void void_std____uninitialized_default_a_int___int_(int* v1117, int* v1118, struct std__allocator_int_* v1119) {
bb1120:
  int* __first1121;
  int* __last1122;
  struct std__allocator_int_* unnamed1123;
  __first1121 = v1117;
  __last1122 = v1118;
  unnamed1123 = v1119;
  int* t1124 = __first1121;
  int* t1125 = __last1122;
  void_std____uninitialized_default_int__(t1124, t1125);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1126:
  unsigned long __retval1127;
  unsigned long c1128 = 4;
  unsigned long r1129 = std____deque_buf_size(c1128);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1127 = r1129;
  unsigned long t1130 = __retval1127;
  return t1130;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1131) {
bb1132:
  struct std___Deque_base_int__std__allocator_int__* this1133;
  struct std__allocator_int_* __retval1134;
  this1133 = v1131;
  struct std___Deque_base_int__std__allocator_int__* t1135 = this1133;
  struct std__allocator_int_* base1136 = (struct std__allocator_int_*)((char *)&(t1135->_M_impl) + 0);
  __retval1134 = base1136;
  struct std__allocator_int_* t1137 = __retval1134;
  return t1137;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v1138, struct std___Deque_iterator_int__int____int___* v1139) {
bb1140:
  struct std___Deque_iterator_int__int____int___* __x1141;
  struct std___Deque_iterator_int__int____int___* __y1142;
  _Bool __retval1143;
  __x1141 = v1138;
  __y1142 = v1139;
  struct std___Deque_iterator_int__int____int___* t1144 = __x1141;
  int* t1145 = t1144->_M_cur;
  struct std___Deque_iterator_int__int____int___* t1146 = __y1142;
  int* t1147 = t1146->_M_cur;
  _Bool c1148 = ((t1145 == t1147)) ? 1 : 0;
  __retval1143 = c1148;
  _Bool t1149 = __retval1143;
  return t1149;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v1150) {
bb1151:
  struct std___Deque_iterator_int__int____int___* this1152;
  int* __retval1153;
  this1152 = v1150;
  struct std___Deque_iterator_int__int____int___* t1154 = this1152;
  int* t1155 = t1154->_M_cur;
  __retval1153 = t1155;
  int* t1156 = __retval1153;
  return t1156;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* v1157) {
bb1158:
  struct std___Deque_iterator_int__int____int___* this1159;
  struct std___Deque_iterator_int__int____int___* __retval1160;
  this1159 = v1157;
  struct std___Deque_iterator_int__int____int___* t1161 = this1159;
  int* t1162 = t1161->_M_cur;
  int c1163 = 1;
  int* ptr1164 = &(t1162)[c1163];
  t1161->_M_cur = ptr1164;
    int* t1165 = t1161->_M_cur;
    int* t1166 = t1161->_M_last;
    _Bool c1167 = ((t1165 == t1166)) ? 1 : 0;
    if (c1167) {
      int** t1168 = t1161->_M_node;
      int c1169 = 1;
      int** ptr1170 = &(t1168)[c1169];
      std___Deque_iterator_int__int___int_____M_set_node(t1161, ptr1170);
      int* t1171 = t1161->_M_first;
      t1161->_M_cur = t1171;
    }
  __retval1160 = t1161;
  struct std___Deque_iterator_int__int____int___* t1172 = __retval1160;
  return t1172;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEEvT_S4_
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1173, struct std___Deque_iterator_int__int____int___ v1174) {
bb1175:
  struct std___Deque_iterator_int__int____int___ __first1176;
  struct std___Deque_iterator_int__int____int___ __last1177;
  __first1176 = v1173;
  __last1177 = v1174;
      _Bool r1178 = std____is_constant_evaluated();
      if (r1178) {
          while (1) {
            _Bool r1180 = std__operator__(&__first1176, &__last1177);
            _Bool u1181 = !r1180;
            if (!u1181) break;
            int* r1182 = std___Deque_iterator_int__int___int____operator____const(&__first1176);
            void_std__destroy_at_int_(r1182);
            if (__cir_exc_active) {
              return;
            }
          for_step1179: ;
            struct std___Deque_iterator_int__int____int___* r1183 = std___Deque_iterator_int__int___int____operator___2(&__first1176);
          }
      }
  return;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEiEvT_S4_RSaIT0_E
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1184, struct std___Deque_iterator_int__int____int___ v1185, struct std__allocator_int_* v1186) {
bb1187:
  struct std___Deque_iterator_int__int____int___ __first1188;
  struct std___Deque_iterator_int__int____int___ __last1189;
  struct std__allocator_int_* unnamed1190;
  struct std___Deque_iterator_int__int____int___ agg_tmp01191;
  struct std___Deque_iterator_int__int____int___ agg_tmp11192;
  __first1188 = v1184;
  __last1189 = v1185;
  unnamed1190 = v1186;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01191, &__first1188);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11192, &__last1189);
  struct std___Deque_iterator_int__int____int___ t1193 = agg_tmp01191;
  struct std___Deque_iterator_int__int____int___ t1194 = agg_tmp11192;
  void_std___Destroy_std___Deque_iterator_int__int___int____(t1193, t1194);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1195, struct std___Deque_iterator_int__int____int___* v1196) {
bb1197:
  struct std___Deque_iterator_int__int____int___* this1198;
  struct std___Deque_iterator_int__int____int___* __x1199;
  this1198 = v1195;
  __x1199 = v1196;
  struct std___Deque_iterator_int__int____int___* t1200 = this1198;
  struct std___Deque_iterator_int__int____int___* t1201 = __x1199;
  int* t1202 = t1201->_M_cur;
  t1200->_M_cur = t1202;
  struct std___Deque_iterator_int__int____int___* t1203 = __x1199;
  int* t1204 = t1203->_M_first;
  t1200->_M_first = t1204;
  struct std___Deque_iterator_int__int____int___* t1205 = __x1199;
  int* t1206 = t1205->_M_last;
  t1200->_M_last = t1206;
  struct std___Deque_iterator_int__int____int___* t1207 = __x1199;
  int** t1208 = t1207->_M_node;
  t1200->_M_node = t1208;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ES1_PS1_
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1209, int* v1210, int** v1211) {
bb1212:
  struct std___Deque_iterator_int__int____int___* this1213;
  int* __x1214;
  int** __y1215;
  this1213 = v1209;
  __x1214 = v1210;
  __y1215 = v1211;
  struct std___Deque_iterator_int__int____int___* t1216 = this1213;
  int* t1217 = __x1214;
  t1216->_M_cur = t1217;
  int** t1218 = __y1215;
  int* t1219 = *t1218;
  t1216->_M_first = t1219;
  int** t1220 = __y1215;
  int* t1221 = *t1220;
  unsigned long r1222 = std___Deque_iterator_int__int___int_____S_buffer_size();
  int* ptr1223 = &(t1221)[r1222];
  t1216->_M_last = ptr1223;
  int** t1224 = __y1215;
  t1216->_M_node = t1224;
  return;
}

// function: _ZNSt5dequeIiSaIiEE21_M_default_initializeEv
void std__deque_int__std__allocator_int______M_default_initialize(struct std__deque_int__std__allocator_int__* v1225) {
bb1226:
  struct std__deque_int__std__allocator_int__* this1227;
  int** __cur1228;
  this1227 = v1225;
  struct std__deque_int__std__allocator_int__* t1229 = this1227;
    struct std___Deque_iterator_int__int____int___ agg_tmp01230;
    struct std___Deque_iterator_int__int____int___ agg_tmp11231;
        struct std___Deque_base_int__std__allocator_int__* base1233 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1229 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1234 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1233->_M_impl) + 0);
        int** t1235 = base1234->_M_start._M_node;
        __cur1228 = t1235;
        while (1) {
          int** t1237 = __cur1228;
          struct std___Deque_base_int__std__allocator_int__* base1238 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1229 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1239 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1238->_M_impl) + 0);
          int** t1240 = base1239->_M_finish._M_node;
          _Bool c1241 = ((t1237 < t1240)) ? 1 : 0;
          if (!c1241) break;
          int** t1242 = __cur1228;
          int* t1243 = *t1242;
          int** t1244 = __cur1228;
          int* t1245 = *t1244;
          unsigned long r1246 = std__deque_int__std__allocator_int______S_buffer_size();
          int* ptr1247 = &(t1245)[r1246];
          struct std___Deque_base_int__std__allocator_int__* base1248 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1229 + 0);
          struct std__allocator_int_* r1249 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1248);
          void_std____uninitialized_default_a_int___int_(t1243, ptr1247, r1249);
          if (__cir_exc_active) {
            goto cir_try_dispatch1232;
          }
        for_step1236: ;
          int** t1250 = __cur1228;
          int c1251 = 1;
          int** ptr1252 = &(t1250)[c1251];
          __cur1228 = ptr1252;
        }
      struct std___Deque_base_int__std__allocator_int__* base1253 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1229 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1254 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1253->_M_impl) + 0);
      int* t1255 = base1254->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base1256 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1229 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1257 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1256->_M_impl) + 0);
      int* t1258 = base1257->_M_finish._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1259 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1229 + 0);
      struct std__allocator_int_* r1260 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1259);
      void_std____uninitialized_default_a_int___int_(t1255, t1258, r1260);
      if (__cir_exc_active) {
        goto cir_try_dispatch1232;
      }
    cir_try_dispatch1232: ;
    if (__cir_exc_active) {
    {
      int ca_tok1261 = 0;
      void* ca_exn1262 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base1263 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1229 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1264 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1263->_M_impl) + 0);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01230, &base1264->_M_start);
        int** t1265 = __cur1228;
        int* t1266 = *t1265;
        int** t1267 = __cur1228;
        std___Deque_iterator_int__int___int_____Deque_iterator_2(&agg_tmp11231, t1266, t1267);
        struct std___Deque_base_int__std__allocator_int__* base1268 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1229 + 0);
        struct std__allocator_int_* r1269 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1268);
        struct std___Deque_iterator_int__int____int___ t1270 = agg_tmp01230;
        struct std___Deque_iterator_int__int____int___ t1271 = agg_tmp11231;
        void_std___Destroy_std___Deque_iterator_int__int___int____int_(t1270, t1271, r1269);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
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

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1272) {
bb1273:
  struct std___Deque_base_int__std__allocator_int__* this1274;
  this1274 = v1272;
  struct std___Deque_base_int__std__allocator_int__* t1275 = this1274;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1276 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1275->_M_impl) + 0);
      int** t1277 = base1276->_M_map;
      _Bool cast1278 = (_Bool)t1277;
      if (cast1278) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1279 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1275->_M_impl) + 0);
        int** t1280 = base1279->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1281 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1275->_M_impl) + 0);
        int** t1282 = base1281->_M_finish._M_node;
        int c1283 = 1;
        int** ptr1284 = &(t1282)[c1283];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1275, t1280, ptr1284);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1285 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1275->_M_impl) + 0);
        int** t1286 = base1285->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1287 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1275->_M_impl) + 0);
        unsigned long t1288 = base1287->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1275, t1286, t1288);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1275->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1289, struct std____new_allocator_int_* v1290) {
bb1291:
  struct std____new_allocator_int_* this1292;
  struct std____new_allocator_int_* unnamed1293;
  this1292 = v1289;
  unnamed1293 = v1290;
  struct std____new_allocator_int_* t1294 = this1292;
  return;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1295, struct std__allocator_int_* v1296) {
bb1297:
  struct std__allocator_int_* this1298;
  struct std__allocator_int_* __a1299;
  this1298 = v1295;
  __a1299 = v1296;
  struct std__allocator_int_* t1300 = this1298;
  struct std____new_allocator_int_* base1301 = (struct std____new_allocator_int_*)((char *)t1300 + 0);
  struct std__allocator_int_* t1302 = __a1299;
  struct std____new_allocator_int_* base1303 = (struct std____new_allocator_int_*)((char *)t1302 + 0);
  std____new_allocator_int_____new_allocator(base1301, base1303);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* v1304) {
bb1305:
  struct std___Deque_iterator_int__int____int___* this1306;
  this1306 = v1304;
  struct std___Deque_iterator_int__int____int___* t1307 = this1306;
  int* c1308 = ((void*)0);
  t1307->_M_cur = c1308;
  int* c1309 = ((void*)0);
  t1307->_M_first = c1309;
  int* c1310 = ((void*)0);
  t1307->_M_last = c1310;
  int** c1311 = ((void*)0);
  t1307->_M_node = c1311;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1312) {
bb1313:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1314;
  this1314 = v1312;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1315 = this1314;
  int** c1316 = ((void*)0);
  t1315->_M_map = c1316;
  unsigned long c1317 = 0;
  t1315->_M_map_size = c1317;
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t1315->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t1315->_M_finish);
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1318) {
bb1319:
  struct std____new_allocator_int___* this1320;
  this1320 = v1318;
  struct std____new_allocator_int___* t1321 = this1320;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1322) {
bb1323:
  int* __location1324;
  __location1324 = v1322;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1325, int* v1326) {
bb1327:
  int* __first1328;
  int* __last1329;
  __first1328 = v1325;
  __last1329 = v1326;
      _Bool r1330 = std____is_constant_evaluated();
      if (r1330) {
          while (1) {
            int* t1332 = __first1328;
            int* t1333 = __last1329;
            _Bool c1334 = ((t1332 != t1333)) ? 1 : 0;
            if (!c1334) break;
            int* t1335 = __first1328;
            void_std__destroy_at_int_(t1335);
            if (__cir_exc_active) {
              return;
            }
          for_step1331: ;
            int* t1336 = __first1328;
            int c1337 = 1;
            int* ptr1338 = &(t1336)[c1337];
            __first1328 = ptr1338;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1339, int* v1340, struct std__allocator_int_* v1341) {
bb1342:
  int* __first1343;
  int* __last1344;
  struct std__allocator_int_* unnamed1345;
  __first1343 = v1339;
  __last1344 = v1340;
  unnamed1345 = v1341;
  int* t1346 = __first1343;
  int* t1347 = __last1344;
  void_std___Destroy_int__(t1346, t1347);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1348, struct std___Deque_iterator_int__int____int___ v1349, struct std___Deque_iterator_int__int____int___ v1350) {
bb1351:
  struct std__deque_int__std__allocator_int__* this1352;
  struct std___Deque_iterator_int__int____int___ __first1353;
  struct std___Deque_iterator_int__int____int___ __last1354;
  this1352 = v1348;
  __first1353 = v1349;
  __last1354 = v1350;
  struct std__deque_int__std__allocator_int__* t1355 = this1352;
    int** __node1356;
    int** t1357 = __first1353._M_node;
    int c1358 = 1;
    int** ptr1359 = &(t1357)[c1358];
    __node1356 = ptr1359;
    while (1) {
      int** t1361 = __node1356;
      int** t1362 = __last1354._M_node;
      _Bool c1363 = ((t1361 < t1362)) ? 1 : 0;
      if (!c1363) break;
      int** t1364 = __node1356;
      int* t1365 = *t1364;
      int** t1366 = __node1356;
      int* t1367 = *t1366;
      unsigned long r1368 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1369 = &(t1367)[r1368];
      struct std___Deque_base_int__std__allocator_int__* base1370 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1355 + 0);
      struct std__allocator_int_* r1371 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1370);
      void_std___Destroy_int___int_(t1365, ptr1369, r1371);
      if (__cir_exc_active) {
        return;
      }
    for_step1360: ;
      int** t1372 = __node1356;
      int c1373 = 1;
      int** ptr1374 = &(t1372)[c1373];
      __node1356 = ptr1374;
    }
    int** t1375 = __first1353._M_node;
    int** t1376 = __last1354._M_node;
    _Bool c1377 = ((t1375 != t1376)) ? 1 : 0;
    if (c1377) {
      int* t1378 = __first1353._M_cur;
      int* t1379 = __first1353._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1380 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1355 + 0);
      struct std__allocator_int_* r1381 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1380);
      void_std___Destroy_int___int_(t1378, t1379, r1381);
      if (__cir_exc_active) {
        return;
      }
      int* t1382 = __last1354._M_first;
      int* t1383 = __last1354._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1384 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1355 + 0);
      struct std__allocator_int_* r1385 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1384);
      void_std___Destroy_int___int_(t1382, t1383, r1385);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1386 = __first1353._M_cur;
      int* t1387 = __last1354._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1388 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1355 + 0);
      struct std__allocator_int_* r1389 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1388);
      void_std___Destroy_int___int_(t1386, t1387, r1389);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1390, struct std___Deque_iterator_int__int____int___ v1391, struct std___Deque_iterator_int__int____int___ v1392, struct std__allocator_int_* v1393) {
bb1394:
  struct std__deque_int__std__allocator_int__* this1395;
  struct std___Deque_iterator_int__int____int___ __first1396;
  struct std___Deque_iterator_int__int____int___ __last1397;
  struct std__allocator_int_* unnamed1398;
  this1395 = v1390;
  __first1396 = v1391;
  __last1397 = v1392;
  unnamed1398 = v1393;
  struct std__deque_int__std__allocator_int__* t1399 = this1395;
    _Bool c1400 = 0;
    if (c1400) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01401;
      struct std___Deque_iterator_int__int____int___ agg_tmp11402;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01401, &__first1396);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11402, &__last1397);
      struct std___Deque_iterator_int__int____int___ t1403 = agg_tmp01401;
      struct std___Deque_iterator_int__int____int___ t1404 = agg_tmp11402;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1399, t1403, t1404);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1405) {
bb1406:
  struct std__deque_int__std__allocator_int__* this1407;
  struct std___Deque_iterator_int__int____int___ __retval1408;
  this1407 = v1405;
  struct std__deque_int__std__allocator_int__* t1409 = this1407;
  struct std___Deque_base_int__std__allocator_int__* base1410 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1409 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1411 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1410->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1408, &base1411->_M_start);
  struct std___Deque_iterator_int__int____int___ t1412 = __retval1408;
  return t1412;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1413) {
bb1414:
  struct std__deque_int__std__allocator_int__* this1415;
  struct std___Deque_iterator_int__int____int___ __retval1416;
  this1415 = v1413;
  struct std__deque_int__std__allocator_int__* t1417 = this1415;
  struct std___Deque_base_int__std__allocator_int__* base1418 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1417 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1419 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1418->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1416, &base1419->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1420 = __retval1416;
  return t1420;
}

