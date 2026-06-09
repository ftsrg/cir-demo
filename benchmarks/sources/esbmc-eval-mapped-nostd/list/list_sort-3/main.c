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
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____list___Scratch_list_std____detail___List_node_base_ { struct std____detail___List_node_base __field0; };
struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ { unsigned char __field0; };
struct std____new_allocator_std___List_node_int__ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std___List_node_int_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
char _str[20] = "mylist.front() == 1";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_sort-3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "mylist.back() == 4";
char _str_3[19] = "mylist.size() == 4";
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv[76] = "reference std::list<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0);
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
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool std__operator__(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
void std____list___Scratch_list_std____detail___List_node_base____Scratch_list(struct std____list___Scratch_list_std____detail___List_node_base_* p0);
extern int __gxx_personality_v0();
extern void std____detail___List_node_base___M_transfer(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void std____list___Scratch_list_std____detail___List_node_base____M_take_one(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
_Bool std____list___Scratch_list_std____detail___List_node_base___empty___const(struct std____list___Scratch_list_std____detail___List_node_base_* p0);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
_Bool std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1, struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ p2);
extern void std____detail___List_node_base__swap(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____list___Scratch_list_std____detail___List_node_base___swap(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
void std____list___Scratch_list_std____detail___List_node_base____M_put_all(struct std____list___Scratch_list_std____detail___List_node_base_* p0, struct std____detail___List_node_base* p1);
void std____cxx11__list_int__std__allocator_int_____sort(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std____cxx11__list_int__std__allocator_int_____front(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
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
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* p0);

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

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v247, struct std____detail___List_node_base* v248) {
bb249:
  struct std___List_iterator_int_* this250;
  struct std____detail___List_node_base* __x251;
  this250 = v247;
  __x251 = v248;
  struct std___List_iterator_int_* t252 = this250;
  struct std____detail___List_node_base* t253 = __x251;
  t252->_M_node = t253;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v254) {
bb255:
  struct std____cxx11__list_int__std__allocator_int__* this256;
  struct std___List_iterator_int_ __retval257;
  this256 = v254;
  struct std____cxx11__list_int__std__allocator_int__* t258 = this256;
  struct std____cxx11___List_base_int__std__allocator_int__* base259 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t258 + 0);
  struct std____detail___List_node_base* r260 = std____detail___List_node_header___M_base(&base259->_M_impl._M_node);
  if (__cir_exc_active) {
    struct std___List_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_iterator_int____List_iterator(&__retval257, r260);
  struct std___List_iterator_int_ t261 = __retval257;
  return t261;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backEOi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v262, int* v263) {
bb264:
  struct std____cxx11__list_int__std__allocator_int__* this265;
  int* __x266;
  struct std___List_iterator_int_ agg_tmp0267;
  this265 = v262;
  __x266 = v263;
  struct std____cxx11__list_int__std__allocator_int__* t268 = this265;
  struct std___List_iterator_int_ r269 = std____cxx11__list_int__std__allocator_int_____end(t268);
  agg_tmp0267 = r269;
  int* t270 = __x266;
  struct std___List_iterator_int_ t271 = agg_tmp0267;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_(t268, t271, t270);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v272) {
bb273:
  struct std____detail___List_node_base* this274;
  struct std____detail___List_node_base* __retval275;
  this274 = v272;
  struct std____detail___List_node_base* t276 = this274;
  __retval275 = t276;
  struct std____detail___List_node_base* t277 = __retval275;
  return t277;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v278) {
bb279:
  struct std____cxx11__list_int__std__allocator_int__* this280;
  _Bool __retval281;
  this280 = v278;
  struct std____cxx11__list_int__std__allocator_int__* t282 = this280;
  struct std____cxx11___List_base_int__std__allocator_int__* base283 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t282 + 0);
  struct std____detail___List_node_base* base284 = (struct std____detail___List_node_base*)((char *)&(base283->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t285 = base284->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base286 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t282 + 0);
  struct std____detail___List_node_base* base287 = (struct std____detail___List_node_base*)((char *)&(base286->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r288 = std____detail___List_node_base___M_base___const(base287);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c289 = ((t285 == r288)) ? 1 : 0;
  __retval281 = c289;
  _Bool t290 = __retval281;
  return t290;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator__(struct std___List_iterator_int_* v291, struct std___List_iterator_int_* v292) {
bb293:
  struct std___List_iterator_int_* __x294;
  struct std___List_iterator_int_* __y295;
  _Bool __retval296;
  __x294 = v291;
  __y295 = v292;
  struct std___List_iterator_int_* t297 = __x294;
  struct std____detail___List_node_base* t298 = t297->_M_node;
  struct std___List_iterator_int_* t299 = __y295;
  struct std____detail___List_node_base* t300 = t299->_M_node;
  _Bool c301 = ((t298 == t300)) ? 1 : 0;
  __retval296 = c301;
  _Bool t302 = __retval296;
  return t302;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v303) {
bb304:
  struct std____cxx11__list_int__std__allocator_int__* this305;
  struct std___List_iterator_int_ __retval306;
  this305 = v303;
  struct std____cxx11__list_int__std__allocator_int__* t307 = this305;
  struct std____cxx11___List_base_int__std__allocator_int__* base308 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t307 + 0);
  struct std____detail___List_node_base* base309 = (struct std____detail___List_node_base*)((char *)&(base308->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t310 = base309->_M_next;
  std___List_iterator_int____List_iterator(&__retval306, t310);
  struct std___List_iterator_int_ t311 = __retval306;
  return t311;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v312) {
bb313:
  struct std___List_iterator_int_* this314;
  struct std___List_iterator_int_* __retval315;
  this314 = v312;
  struct std___List_iterator_int_* t316 = this314;
  struct std____detail___List_node_base* t317 = t316->_M_node;
  struct std____detail___List_node_base* t318 = t317->_M_next;
  t316->_M_node = t318;
  __retval315 = t316;
  struct std___List_iterator_int_* t319 = __retval315;
  return t319;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEEC2Ev
void std____list___Scratch_list_std____detail___List_node_base____Scratch_list(struct std____list___Scratch_list_std____detail___List_node_base_* v320) {
bb321:
  struct std____list___Scratch_list_std____detail___List_node_base_* this322;
  this322 = v320;
  struct std____list___Scratch_list_std____detail___List_node_base_* t323 = this322;
  struct std____detail___List_node_base* base324 = (struct std____detail___List_node_base*)((char *)t323 + 0);
  struct std____detail___List_node_base* base325 = (struct std____detail___List_node_base*)((char *)t323 + 0);
  struct std____detail___List_node_base* r326 = std____detail___List_node_base___M_base(base325);
  if (__cir_exc_active) {
    return;
  }
  struct std____detail___List_node_base* base327 = (struct std____detail___List_node_base*)((char *)t323 + 0);
  base327->_M_prev = r326;
  struct std____detail___List_node_base* base328 = (struct std____detail___List_node_base*)((char *)t323 + 0);
  base328->_M_next = r326;
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE11_M_take_oneEPS2_
void std____list___Scratch_list_std____detail___List_node_base____M_take_one(struct std____list___Scratch_list_std____detail___List_node_base_* v329, struct std____detail___List_node_base* v330) {
bb331:
  struct std____list___Scratch_list_std____detail___List_node_base_* this332;
  struct std____detail___List_node_base* __i333;
  this332 = v329;
  __i333 = v330;
  struct std____list___Scratch_list_std____detail___List_node_base_* t334 = this332;
  struct std____detail___List_node_base* base335 = (struct std____detail___List_node_base*)((char *)t334 + 0);
  struct std____detail___List_node_base* t336 = __i333;
  struct std____detail___List_node_base* t337 = __i333;
  struct std____detail___List_node_base* t338 = t337->_M_next;
  std____detail___List_node_base___M_transfer(base335, t336, t338);
  return;
}

// function: _ZNKSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE5emptyEv
_Bool std____list___Scratch_list_std____detail___List_node_base___empty___const(struct std____list___Scratch_list_std____detail___List_node_base_* v339) {
bb340:
  struct std____list___Scratch_list_std____detail___List_node_base_* this341;
  _Bool __retval342;
  this341 = v339;
  struct std____list___Scratch_list_std____detail___List_node_base_* t343 = this341;
  struct std____detail___List_node_base* base344 = (struct std____detail___List_node_base*)((char *)t343 + 0);
  struct std____detail___List_node_base* t345 = base344->_M_next;
  struct std____detail___List_node_base* base346 = (struct std____detail___List_node_base*)((char *)t343 + 0);
  struct std____detail___List_node_base* r347 = std____detail___List_node_base___M_base___const(base346);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c348 = ((t345 == r347)) ? 1 : 0;
  __retval342 = c348;
  _Bool t349 = __retval342;
  return t349;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v350) {
bb351:
  struct std___List_iterator_int_* this352;
  int* __retval353;
  this352 = v350;
  struct std___List_iterator_int_* t354 = this352;
  struct std____detail___List_node_base* t355 = t354->_M_node;
  struct std___List_node_int_* derived356 = ((t355) ? (struct std___List_node_int_*)((char *)t355 - 0) : (struct std___List_node_int_*)0);
  int* r357 = std___List_node_int____M_valptr(derived356);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval353 = r357;
  int* t358 = __retval353;
  return t358;
}

// function: _ZNKSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE8_Ptr_cmpISt14_List_iteratorIiEvEclEPS2_S8_
_Bool std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_* v359, struct std____detail___List_node_base* v360, struct std____detail___List_node_base* v361) {
bb362:
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_* this363;
  struct std____detail___List_node_base* __lhs364;
  struct std____detail___List_node_base* __rhs365;
  _Bool __retval366;
  struct std___List_iterator_int_ ref_tmp0367;
  struct std___List_iterator_int_ ref_tmp1368;
  this363 = v359;
  __lhs364 = v360;
  __rhs365 = v361;
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_* t369 = this363;
  struct std____detail___List_node_base* t370 = __lhs364;
  std___List_iterator_int____List_iterator(&ref_tmp0367, t370);
  int* r371 = std___List_iterator_int___operator____const(&ref_tmp0367);
  int t372 = *r371;
  struct std____detail___List_node_base* t373 = __rhs365;
  std___List_iterator_int____List_iterator(&ref_tmp1368, t373);
  int* r374 = std___List_iterator_int___operator____const(&ref_tmp1368);
  int t375 = *r374;
  _Bool c376 = ((t372 < t375)) ? 1 : 0;
  __retval366 = c376;
  _Bool t377 = __retval366;
  return t377;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE5mergeINS3_8_Ptr_cmpISt14_List_iteratorIiEvEEEEvRS2_T_
void void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___(struct std____list___Scratch_list_std____detail___List_node_base_* v378, struct std____detail___List_node_base* v379, struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ v380) {
bb381:
  struct std____list___Scratch_list_std____detail___List_node_base_* this382;
  struct std____detail___List_node_base* __x383;
  struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ __comp384;
  struct std____detail___List_node_base* __first1385;
  struct std____detail___List_node_base* __last1386;
  struct std____detail___List_node_base* __first2387;
  struct std____detail___List_node_base* __last2388;
  this382 = v378;
  __x383 = v379;
  __comp384 = v380;
  struct std____list___Scratch_list_std____detail___List_node_base_* t389 = this382;
  struct std____detail___List_node_base* base390 = (struct std____detail___List_node_base*)((char *)t389 + 0);
  struct std____detail___List_node_base* t391 = base390->_M_next;
  __first1385 = t391;
  struct std____detail___List_node_base* base392 = (struct std____detail___List_node_base*)((char *)t389 + 0);
  struct std____detail___List_node_base* r393 = std____detail___List_node_base___M_base(base392);
  if (__cir_exc_active) {
    return;
  }
  __last1386 = r393;
  struct std____detail___List_node_base* t394 = __x383;
  struct std____detail___List_node_base* t395 = t394->_M_next;
  __first2387 = t395;
  struct std____detail___List_node_base* t396 = __x383;
  struct std____detail___List_node_base* r397 = std____detail___List_node_base___M_base(t396);
  if (__cir_exc_active) {
    return;
  }
  __last2388 = r397;
    while (1) {
      struct std____detail___List_node_base* t398 = __first1385;
      struct std____detail___List_node_base* t399 = __last1386;
      _Bool c400 = ((t398 != t399)) ? 1 : 0;
      _Bool ternary401;
      if (c400) {
        struct std____detail___List_node_base* t402 = __first2387;
        struct std____detail___List_node_base* t403 = __last2388;
        _Bool c404 = ((t402 != t403)) ? 1 : 0;
        ternary401 = (_Bool)c404;
      } else {
        _Bool c405 = 0;
        ternary401 = (_Bool)c405;
      }
      if (!ternary401) break;
          struct std____detail___List_node_base* t406 = __first2387;
          struct std____detail___List_node_base* t407 = __first1385;
          _Bool r408 = std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___operator___std____detail___List_node_base___std____detail___List_node_base___const(&__comp384, t406, t407);
          if (__cir_exc_active) {
            return;
          }
          if (r408) {
            struct std____detail___List_node_base* __next409;
            struct std____detail___List_node_base* t410 = __first2387;
            struct std____detail___List_node_base* t411 = t410->_M_next;
            __next409 = t411;
            struct std____detail___List_node_base* t412 = __first1385;
            struct std____detail___List_node_base* t413 = __first2387;
            struct std____detail___List_node_base* t414 = __next409;
            std____detail___List_node_base___M_transfer(t412, t413, t414);
            struct std____detail___List_node_base* t415 = __next409;
            __first2387 = t415;
          } else {
            struct std____detail___List_node_base* t416 = __first1385;
            struct std____detail___List_node_base* t417 = t416->_M_next;
            __first1385 = t417;
          }
    }
    struct std____detail___List_node_base* t418 = __first2387;
    struct std____detail___List_node_base* t419 = __last2388;
    _Bool c420 = ((t418 != t419)) ? 1 : 0;
    if (c420) {
      struct std____detail___List_node_base* base421 = (struct std____detail___List_node_base*)((char *)t389 + 0);
      struct std____detail___List_node_base* t422 = __first2387;
      struct std____detail___List_node_base* t423 = __last2388;
      std____detail___List_node_base___M_transfer(base421, t422, t423);
    }
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE4swapERS2_
void std____list___Scratch_list_std____detail___List_node_base___swap(struct std____list___Scratch_list_std____detail___List_node_base_* v424, struct std____detail___List_node_base* v425) {
bb426:
  struct std____list___Scratch_list_std____detail___List_node_base_* this427;
  struct std____detail___List_node_base* __l428;
  this427 = v424;
  __l428 = v425;
  struct std____list___Scratch_list_std____detail___List_node_base_* t429 = this427;
  struct std____detail___List_node_base* base430 = (struct std____detail___List_node_base*)((char *)t429 + 0);
  struct std____detail___List_node_base* t431 = __l428;
  std____detail___List_node_base__swap(base430, t431);
  return;
}

// function: _ZNSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE10_M_put_allEPS2_
void std____list___Scratch_list_std____detail___List_node_base____M_put_all(struct std____list___Scratch_list_std____detail___List_node_base_* v432, struct std____detail___List_node_base* v433) {
bb434:
  struct std____list___Scratch_list_std____detail___List_node_base_* this435;
  struct std____detail___List_node_base* __i436;
  this435 = v432;
  __i436 = v433;
  struct std____list___Scratch_list_std____detail___List_node_base_* t437 = this435;
    _Bool r438 = std____list___Scratch_list_std____detail___List_node_base___empty___const(t437);
    if (__cir_exc_active) {
      return;
    }
    _Bool u439 = !r438;
    if (u439) {
      struct std____detail___List_node_base* t440 = __i436;
      struct std____detail___List_node_base* base441 = (struct std____detail___List_node_base*)((char *)t437 + 0);
      struct std____detail___List_node_base* t442 = base441->_M_next;
      struct std____detail___List_node_base* base443 = (struct std____detail___List_node_base*)((char *)t437 + 0);
      struct std____detail___List_node_base* r444 = std____detail___List_node_base___M_base(base443);
      if (__cir_exc_active) {
        return;
      }
      std____detail___List_node_base___M_transfer(t440, t442, r444);
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE4sortEv
void std____cxx11__list_int__std__allocator_int_____sort(struct std____cxx11__list_int__std__allocator_int__* v445) {
bb446:
  struct std____cxx11__list_int__std__allocator_int__* this447;
  this447 = v445;
  struct std____cxx11__list_int__std__allocator_int__* t448 = this447;
    _Bool r449 = std____cxx11__list_int__std__allocator_int_____empty___const(t448);
    _Bool ternary450;
    if (r449) {
      _Bool c451 = 1;
      ternary450 = (_Bool)c451;
    } else {
      struct std___List_iterator_int_ ref_tmp0452;
      struct std___List_iterator_int_ ref_tmp1453;
      struct std___List_iterator_int_ r454 = std____cxx11__list_int__std__allocator_int_____begin(t448);
      ref_tmp0452 = r454;
      struct std___List_iterator_int_* r455 = std___List_iterator_int___operator___2(&ref_tmp0452);
      struct std___List_iterator_int_ r456 = std____cxx11__list_int__std__allocator_int_____end(t448);
      ref_tmp1453 = r456;
      _Bool r457 = std__operator__(r455, &ref_tmp1453);
      ternary450 = (_Bool)r457;
    }
    if (ternary450) {
      return;
    }
    struct std____list___Scratch_list_std____detail___List_node_base_ __carry458;
    struct std____list___Scratch_list_std____detail___List_node_base_ __tmp459[64];
    struct std____list___Scratch_list_std____detail___List_node_base_* __fill460;
    struct std____list___Scratch_list_std____detail___List_node_base_* __counter461;
    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ __ptr_comp462;
    std____list___Scratch_list_std____detail___List_node_base____Scratch_list(&__carry458);
    if (__cir_exc_active) {
      return;
    }
    unsigned long c463 = 64;
    struct std____list___Scratch_list_std____detail___List_node_base_* cast464 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp459);
    struct std____list___Scratch_list_std____detail___List_node_base_* ptr465 = &(cast464)[c463];
    struct std____list___Scratch_list_std____detail___List_node_base_* __array_idx466;
    __array_idx466 = cast464;
    do {
      struct std____list___Scratch_list_std____detail___List_node_base_* t467 = __array_idx466;
      std____list___Scratch_list_std____detail___List_node_base____Scratch_list(t467);
      if (__cir_exc_active) {
        return;
      }
      unsigned long c468 = 1;
      struct std____list___Scratch_list_std____detail___List_node_base_* ptr469 = &(t467)[c468];
      __array_idx466 = ptr469;
      struct std____list___Scratch_list_std____detail___List_node_base_* t470 = __array_idx466;
      _Bool c471 = ((t470 != ptr465)) ? 1 : 0;
      if (!c471) break;
    } while (1);
    struct std____list___Scratch_list_std____detail___List_node_base_* cast472 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp459);
    __fill460 = cast472;
      struct std___List_iterator_int_ ref_tmp3473;
          do {
              struct std___List_iterator_int_ ref_tmp2475;
              struct std___List_iterator_int_ r476 = std____cxx11__list_int__std__allocator_int_____begin(t448);
              ref_tmp2475 = r476;
              struct std____detail___List_node_base* t477 = ref_tmp2475._M_node;
              std____list___Scratch_list_std____detail___List_node_base____M_take_one(&__carry458, t477);
              if (__cir_exc_active) {
                goto cir_try_dispatch474;
              }
                struct std____list___Scratch_list_std____detail___List_node_base_* cast478 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp459);
                __counter461 = cast478;
                while (1) {
                  struct std____list___Scratch_list_std____detail___List_node_base_* t480 = __counter461;
                  struct std____list___Scratch_list_std____detail___List_node_base_* t481 = __fill460;
                  _Bool c482 = ((t480 != t481)) ? 1 : 0;
                  _Bool ternary483;
                  if (c482) {
                    struct std____list___Scratch_list_std____detail___List_node_base_* t484 = __counter461;
                    _Bool r485 = std____list___Scratch_list_std____detail___List_node_base___empty___const(t484);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch474;
                    }
                    _Bool u486 = !r485;
                    ternary483 = (_Bool)u486;
                  } else {
                    _Bool c487 = 0;
                    ternary483 = (_Bool)c487;
                  }
                  if (!ternary483) break;
                    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ agg_tmp0488;
                    struct std____list___Scratch_list_std____detail___List_node_base_* t489 = __counter461;
                    struct std____detail___List_node_base* base490 = (struct std____detail___List_node_base*)((char *)&(__carry458) + 0);
                    struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ t491 = agg_tmp0488;
                    void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___(t489, base490, t491);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch474;
                    }
                    struct std____list___Scratch_list_std____detail___List_node_base_* t492 = __counter461;
                    struct std____detail___List_node_base* base493 = (struct std____detail___List_node_base*)((char *)t492 + 0);
                    std____list___Scratch_list_std____detail___List_node_base___swap(&__carry458, base493);
                    if (__cir_exc_active) {
                      goto cir_try_dispatch474;
                    }
                for_step479: ;
                  struct std____list___Scratch_list_std____detail___List_node_base_* t494 = __counter461;
                  int c495 = 1;
                  struct std____list___Scratch_list_std____detail___List_node_base_* ptr496 = &(t494)[c495];
                  __counter461 = ptr496;
                }
              struct std____list___Scratch_list_std____detail___List_node_base_* t497 = __counter461;
              struct std____detail___List_node_base* base498 = (struct std____detail___List_node_base*)((char *)t497 + 0);
              std____list___Scratch_list_std____detail___List_node_base___swap(&__carry458, base498);
              if (__cir_exc_active) {
                goto cir_try_dispatch474;
              }
                struct std____list___Scratch_list_std____detail___List_node_base_* t499 = __counter461;
                struct std____list___Scratch_list_std____detail___List_node_base_* t500 = __fill460;
                _Bool c501 = ((t499 == t500)) ? 1 : 0;
                if (c501) {
                  struct std____list___Scratch_list_std____detail___List_node_base_* t502 = __fill460;
                  int c503 = 1;
                  struct std____list___Scratch_list_std____detail___List_node_base_* ptr504 = &(t502)[c503];
                  __fill460 = ptr504;
                }
            _Bool r505 = std____cxx11__list_int__std__allocator_int_____empty___const(t448);
            _Bool u506 = !r505;
            if (!u506) break;
          } while (1);
          struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ agg_tmp1507;
          struct std____list___Scratch_list_std____detail___List_node_base_* cast508 = (struct std____list___Scratch_list_std____detail___List_node_base_*)&(__tmp459);
          int c509 = 1;
          struct std____list___Scratch_list_std____detail___List_node_base_* ptr510 = &(cast508)[c509];
          __counter461 = ptr510;
          while (1) {
            struct std____list___Scratch_list_std____detail___List_node_base_* t512 = __counter461;
            struct std____list___Scratch_list_std____detail___List_node_base_* t513 = __fill460;
            _Bool c514 = ((t512 != t513)) ? 1 : 0;
            if (!c514) break;
            struct std____list___Scratch_list_std____detail___List_node_base_* t515 = __counter461;
            long c516 = -1;
            struct std____list___Scratch_list_std____detail___List_node_base_* t517 = __counter461;
            struct std____list___Scratch_list_std____detail___List_node_base_* ptr518 = &(t517)[c516];
            struct std____detail___List_node_base* base519 = (struct std____detail___List_node_base*)((char *)ptr518 + 0);
            struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ t520 = agg_tmp1507;
            void_std____list___Scratch_list_std____detail___List_node_base___merge_std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void___(t515, base519, t520);
            if (__cir_exc_active) {
              goto cir_try_dispatch474;
            }
          for_step511: ;
            struct std____list___Scratch_list_std____detail___List_node_base_* t521 = __counter461;
            int c522 = 1;
            struct std____list___Scratch_list_std____detail___List_node_base_* ptr523 = &(t521)[c522];
            __counter461 = ptr523;
          }
        long c524 = -1;
        struct std____list___Scratch_list_std____detail___List_node_base_* t525 = __fill460;
        struct std____list___Scratch_list_std____detail___List_node_base_* ptr526 = &(t525)[c524];
        struct std____cxx11___List_base_int__std__allocator_int__* base527 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t448 + 0);
        struct std____detail___List_node_base* base528 = (struct std____detail___List_node_base*)((char *)&(base527->_M_impl._M_node) + 0);
        std____list___Scratch_list_std____detail___List_node_base___swap(ptr526, base528);
        if (__cir_exc_active) {
          goto cir_try_dispatch474;
        }
      cir_try_dispatch474: ;
      if (__cir_exc_active) {
      {
        int ca_tok529 = 0;
        void* ca_exn530 = (void*)__cir_exc_ptr;
        __cir_exc_active = 0;
          struct std___List_iterator_int_ r531 = std____cxx11__list_int__std__allocator_int_____end(t448);
          ref_tmp3473 = r531;
          struct std____detail___List_node_base* t532 = ref_tmp3473._M_node;
          std____list___Scratch_list_std____detail___List_node_base____M_put_all(&__carry458, t532);
          if (__cir_exc_active) {
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
          }
            int __i533;
            struct std___List_iterator_int_ ref_tmp4534;
            int c535 = 0;
            __i533 = c535;
            while (1) {
              int t537 = __i533;
              unsigned long cast538 = (unsigned long)t537;
              unsigned long c539 = 1024;
              unsigned long c540 = 16;
              unsigned long b541 = c539 / c540;
              _Bool c542 = ((cast538 < b541)) ? 1 : 0;
              if (!c542) break;
              int t543 = __i533;
              long cast544 = (long)t543;
              struct std___List_iterator_int_ r545 = std____cxx11__list_int__std__allocator_int_____end(t448);
              ref_tmp4534 = r545;
              struct std____detail___List_node_base* t546 = ref_tmp4534._M_node;
              std____list___Scratch_list_std____detail___List_node_base____M_put_all(&__tmp459[cast544], t546);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                return;
              }
            for_step536: ;
              int t547 = __i533;
              int u548 = t547 + 1;
              __i533 = u548;
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

// function: _ZNSt7__cxx114listIiSaIiEE5frontEv
int* std____cxx11__list_int__std__allocator_int_____front(struct std____cxx11__list_int__std__allocator_int__* v549) {
bb550:
  struct std____cxx11__list_int__std__allocator_int__* this551;
  int* __retval552;
  struct std___List_iterator_int_ ref_tmp0553;
  this551 = v549;
  struct std____cxx11__list_int__std__allocator_int__* t554 = this551;
    do {
          _Bool r555 = std____cxx11__list_int__std__allocator_int_____empty___const(t554);
          if (r555) {
            char* cast556 = (char*)&(_str_4);
            int c557 = 1650;
            char* cast558 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv);
            char* cast559 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast556, c557, cast558, cast559);
          }
      _Bool c560 = 0;
      if (!c560) break;
    } while (1);
  struct std___List_iterator_int_ r561 = std____cxx11__list_int__std__allocator_int_____begin(t554);
  ref_tmp0553 = r561;
  int* r562 = std___List_iterator_int___operator____const(&ref_tmp0553);
  __retval552 = r562;
  int* t563 = __retval552;
  return t563;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v564) {
bb565:
  struct std___List_iterator_int_* this566;
  struct std___List_iterator_int_* __retval567;
  this566 = v564;
  struct std___List_iterator_int_* t568 = this566;
  struct std____detail___List_node_base* t569 = t568->_M_node;
  struct std____detail___List_node_base* t570 = t569->_M_prev;
  t568->_M_node = t570;
  __retval567 = t568;
  struct std___List_iterator_int_* t571 = __retval567;
  return t571;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v572) {
bb573:
  struct std____cxx11__list_int__std__allocator_int__* this574;
  int* __retval575;
  struct std___List_iterator_int_ __tmp576;
  this574 = v572;
  struct std____cxx11__list_int__std__allocator_int__* t577 = this574;
    do {
          _Bool r578 = std____cxx11__list_int__std__allocator_int_____empty___const(t577);
          if (r578) {
            char* cast579 = (char*)&(_str_4);
            int c580 = 1674;
            char* cast581 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast582 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast579, c580, cast581, cast582);
          }
      _Bool c583 = 0;
      if (!c583) break;
    } while (1);
  struct std___List_iterator_int_ r584 = std____cxx11__list_int__std__allocator_int_____end(t577);
  __tmp576 = r584;
  struct std___List_iterator_int_* r585 = std___List_iterator_int___operator__(&__tmp576);
  int* r586 = std___List_iterator_int___operator____const(&__tmp576);
  __retval575 = r586;
  int* t587 = __retval575;
  return t587;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v588) {
bb589:
  struct std____cxx11___List_base_int__std__allocator_int__* this590;
  unsigned long __retval591;
  this590 = v588;
  struct std____cxx11___List_base_int__std__allocator_int__* t592 = this590;
  struct std____detail___List_size* base593 = (struct std____detail___List_size*)((char *)&(t592->_M_impl._M_node) + 16);
  unsigned long t594 = base593->_M_size;
  __retval591 = t594;
  unsigned long t595 = __retval591;
  return t595;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v596) {
bb597:
  struct std____cxx11__list_int__std__allocator_int__* this598;
  unsigned long __retval599;
  this598 = v596;
  struct std____cxx11__list_int__std__allocator_int__* t600 = this598;
  struct std____cxx11___List_base_int__std__allocator_int__* base601 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t600 + 0);
  unsigned long r602 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base601);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval599 = r602;
  unsigned long t603 = __retval599;
  return t603;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v604) {
bb605:
  struct std____cxx11__list_int__std__allocator_int__* this606;
  this606 = v604;
  struct std____cxx11__list_int__std__allocator_int__* t607 = this606;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base608 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t607 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base608);
  }
  return;
}

// function: main
int main() {
bb609:
  int __retval610;
  struct std____cxx11__list_int__std__allocator_int__ mylist611;
  int ref_tmp0612;
  int ref_tmp1613;
  int ref_tmp2614;
  int ref_tmp3615;
  int c616 = 0;
  __retval610 = c616;
  std____cxx11__list_int__std__allocator_int_____list(&mylist611);
    int c617 = 3;
    ref_tmp0612 = c617;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist611, &ref_tmp0612);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist611);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c618 = 2;
    ref_tmp1613 = c618;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist611, &ref_tmp1613);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist611);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c619 = 4;
    ref_tmp2614 = c619;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist611, &ref_tmp2614);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist611);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c620 = 1;
    ref_tmp3615 = c620;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist611, &ref_tmp3615);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist611);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    std____cxx11__list_int__std__allocator_int_____sort(&mylist611);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist611);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r621 = std____cxx11__list_int__std__allocator_int_____front(&mylist611);
    int t622 = *r621;
    int c623 = 1;
    _Bool c624 = ((t622 == c623)) ? 1 : 0;
    if (c624) {
    } else {
      char* cast625 = (char*)&(_str);
      char* c626 = _str_1;
      unsigned int c627 = 24;
      char* cast628 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast625, c626, c627, cast628);
    }
    int* r629 = std____cxx11__list_int__std__allocator_int_____back(&mylist611);
    int t630 = *r629;
    int c631 = 4;
    _Bool c632 = ((t630 == c631)) ? 1 : 0;
    if (c632) {
    } else {
      char* cast633 = (char*)&(_str_2);
      char* c634 = _str_1;
      unsigned int c635 = 25;
      char* cast636 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast633, c634, c635, cast636);
    }
    unsigned long r637 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist611);
    unsigned long c638 = 4;
    _Bool c639 = ((r637 == c638)) ? 1 : 0;
    if (c639) {
    } else {
      char* cast640 = (char*)&(_str_3);
      char* c641 = _str_1;
      unsigned int c642 = 26;
      char* cast643 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast640, c641, c642, cast643);
    }
    int c644 = 0;
    __retval610 = c644;
    int t645 = __retval610;
    int ret_val646 = t645;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist611);
    }
    return ret_val646;
  int t647 = __retval610;
  return t647;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v648) {
bb649:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this650;
  this650 = v648;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t651 = this650;
  struct std__allocator_std___List_node_int__* base652 = (struct std__allocator_std___List_node_int__*)((char *)t651 + 0);
  std__allocator_std___List_node_int_____allocator(base652);
    std____detail___List_node_header___List_node_header(&t651->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v653) {
bb654:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this655;
  this655 = v653;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t656 = this655;
  {
    struct std__allocator_std___List_node_int__* base657 = (struct std__allocator_std___List_node_int__*)((char *)t656 + 0);
    std__allocator_std___List_node_int______allocator(base657);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v658) {
bb659:
  struct std____cxx11___List_base_int__std__allocator_int__* this660;
  this660 = v658;
  struct std____cxx11___List_base_int__std__allocator_int__* t661 = this660;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t661->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v662) {
bb663:
  struct std____detail___List_node_header* this664;
  struct std____detail___List_node_base* __retval665;
  this664 = v662;
  struct std____detail___List_node_header* t666 = this664;
  struct std____detail___List_node_base* base667 = (struct std____detail___List_node_base*)((char *)t666 + 0);
  __retval665 = base667;
  struct std____detail___List_node_base* t668 = __retval665;
  return t668;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v669) {
bb670:
  int* __location671;
  __location671 = v669;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v672, int* v673) {
bb674:
  struct std__allocator_std___List_node_int__* __a675;
  int* __p676;
  __a675 = v672;
  __p676 = v673;
  int* t677 = __p676;
  void_std__destroy_at_int_(t677);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v678) {
bb679:
  struct __gnu_cxx____aligned_membuf_int_* this680;
  void* __retval681;
  this680 = v678;
  struct __gnu_cxx____aligned_membuf_int_* t682 = this680;
  void* cast683 = (void*)&(t682->_M_storage);
  __retval681 = cast683;
  void* t684 = __retval681;
  return t684;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v685) {
bb686:
  struct __gnu_cxx____aligned_membuf_int_* this687;
  int* __retval688;
  this687 = v685;
  struct __gnu_cxx____aligned_membuf_int_* t689 = this687;
  void* r690 = __gnu_cxx____aligned_membuf_int____M_addr(t689);
  int* cast691 = (int*)r690;
  __retval688 = cast691;
  int* t692 = __retval688;
  return t692;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v693) {
bb694:
  struct std___List_node_int_* this695;
  int* __retval696;
  this695 = v693;
  struct std___List_node_int_* t697 = this695;
  int* r698 = __gnu_cxx____aligned_membuf_int____M_ptr(&t697->_M_storage);
  __retval696 = r698;
  int* t699 = __retval696;
  return t699;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb700:
  _Bool __retval701;
    _Bool c702 = 0;
    __retval701 = c702;
    _Bool t703 = __retval701;
    return t703;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v704, struct std___List_node_int_* v705, unsigned long v706) {
bb707:
  struct std____new_allocator_std___List_node_int__* this708;
  struct std___List_node_int_* __p709;
  unsigned long __n710;
  this708 = v704;
  __p709 = v705;
  __n710 = v706;
  struct std____new_allocator_std___List_node_int__* t711 = this708;
    unsigned long c712 = 8;
    unsigned long c713 = 16;
    _Bool c714 = ((c712 > c713)) ? 1 : 0;
    if (c714) {
      struct std___List_node_int_* t715 = __p709;
      void* cast716 = (void*)t715;
      unsigned long t717 = __n710;
      unsigned long c718 = 24;
      unsigned long b719 = t717 * c718;
      unsigned long c720 = 8;
      operator_delete_3(cast716, b719, c720);
      return;
    }
  struct std___List_node_int_* t721 = __p709;
  void* cast722 = (void*)t721;
  unsigned long t723 = __n710;
  unsigned long c724 = 24;
  unsigned long b725 = t723 * c724;
  operator_delete_2(cast722, b725);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v726, struct std___List_node_int_* v727, unsigned long v728) {
bb729:
  struct std__allocator_std___List_node_int__* this730;
  struct std___List_node_int_* __p731;
  unsigned long __n732;
  this730 = v726;
  __p731 = v727;
  __n732 = v728;
  struct std__allocator_std___List_node_int__* t733 = this730;
    _Bool r734 = std____is_constant_evaluated();
    if (r734) {
      struct std___List_node_int_* t735 = __p731;
      void* cast736 = (void*)t735;
      operator_delete(cast736);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base737 = (struct std____new_allocator_std___List_node_int__*)((char *)t733 + 0);
  struct std___List_node_int_* t738 = __p731;
  unsigned long t739 = __n732;
  std____new_allocator_std___List_node_int_____deallocate(base737, t738, t739);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v740, struct std___List_node_int_* v741, unsigned long v742) {
bb743:
  struct std__allocator_std___List_node_int__* __a744;
  struct std___List_node_int_* __p745;
  unsigned long __n746;
  __a744 = v740;
  __p745 = v741;
  __n746 = v742;
  struct std__allocator_std___List_node_int__* t747 = __a744;
  struct std___List_node_int_* t748 = __p745;
  unsigned long t749 = __n746;
  std__allocator_std___List_node_int_____deallocate(t747, t748, t749);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v750, struct std___List_node_int_* v751) {
bb752:
  struct std____cxx11___List_base_int__std__allocator_int__* this753;
  struct std___List_node_int_* __p754;
  this753 = v750;
  __p754 = v751;
  struct std____cxx11___List_base_int__std__allocator_int__* t755 = this753;
  struct std__allocator_std___List_node_int__* base756 = (struct std__allocator_std___List_node_int__*)((char *)&(t755->_M_impl) + 0);
  struct std___List_node_int_* t757 = __p754;
  unsigned long c758 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base756, t757, c758);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v759, struct std___List_node_int_* v760) {
bb761:
  struct std____cxx11___List_base_int__std__allocator_int__* this762;
  struct std___List_node_int_* __p763;
  this762 = v759;
  __p763 = v760;
  struct std____cxx11___List_base_int__std__allocator_int__* t764 = this762;
  struct std__allocator_std___List_node_int__* base765 = (struct std__allocator_std___List_node_int__*)((char *)&(t764->_M_impl) + 0);
  struct std___List_node_int_* t766 = __p763;
  int* r767 = std___List_node_int____M_valptr(t766);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base765, r767);
  struct std___List_node_int_* t768 = __p763;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t764, t768);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v769) {
bb770:
  struct std___List_node_int_* this771;
  struct std___List_node_int_* __retval772;
  this771 = v769;
  struct std___List_node_int_* t773 = this771;
  __retval772 = t773;
  struct std___List_node_int_* t774 = __retval772;
  return t774;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v775) {
bb776:
  struct std____cxx11___List_base_int__std__allocator_int__* this777;
  struct std____detail___List_node_base* __cur778;
  this777 = v775;
  struct std____cxx11___List_base_int__std__allocator_int__* t779 = this777;
  struct std____detail___List_node_base* base780 = (struct std____detail___List_node_base*)((char *)&(t779->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t781 = base780->_M_next;
  __cur778 = t781;
    while (1) {
      struct std____detail___List_node_base* t782 = __cur778;
      struct std____detail___List_node_base* r783 = std____detail___List_node_header___M_base(&t779->_M_impl._M_node);
      if (__cir_exc_active) {
        return;
      }
      _Bool c784 = ((t782 != r783)) ? 1 : 0;
      if (!c784) break;
        struct std___List_node_int_* __tmp785;
        struct std____detail___List_node_base* t786 = __cur778;
        struct std___List_node_int_* derived787 = (struct std___List_node_int_*)((char *)t786 - 0);
        __tmp785 = derived787;
        struct std___List_node_int_* t788 = __tmp785;
        struct std____detail___List_node_base* base789 = (struct std____detail___List_node_base*)((char *)t788 + 0);
        struct std____detail___List_node_base* t790 = base789->_M_next;
        __cur778 = t790;
        struct std___List_node_int_* t791 = __tmp785;
        struct std___List_node_int_* r792 = std___List_node_int____M_node_ptr(t791);
        if (__cir_exc_active) {
          return;
        }
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t779, r792);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v793) {
bb794:
  struct std____cxx11___List_base_int__std__allocator_int__* this795;
  this795 = v793;
  struct std____cxx11___List_base_int__std__allocator_int__* t796 = this795;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t796);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t796->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v797) {
bb798:
  struct std____new_allocator_std___List_node_int__* this799;
  this799 = v797;
  struct std____new_allocator_std___List_node_int__* t800 = this799;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v801) {
bb802:
  struct std__allocator_std___List_node_int__* this803;
  this803 = v801;
  struct std__allocator_std___List_node_int__* t804 = this803;
  struct std____new_allocator_std___List_node_int__* base805 = (struct std____new_allocator_std___List_node_int__*)((char *)t804 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base805);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v806) {
bb807:
  struct std____detail___List_node_header* this808;
  this808 = v806;
  struct std____detail___List_node_header* t809 = this808;
  struct std____detail___List_node_base* base810 = (struct std____detail___List_node_base*)((char *)t809 + 0);
  struct std____detail___List_size* base811 = (struct std____detail___List_size*)((char *)t809 + 16);
  std____detail___List_node_header___M_init(t809);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v812) {
bb813:
  struct std__allocator_std___List_node_int__* this814;
  this814 = v812;
  struct std__allocator_std___List_node_int__* t815 = this814;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v816, struct std____detail___List_size* v817) {
bb818:
  struct std____detail___List_size* this819;
  struct std____detail___List_size* unnamed820;
  struct std____detail___List_size* __retval821;
  this819 = v816;
  unnamed820 = v817;
  struct std____detail___List_size* t822 = this819;
  struct std____detail___List_size* t823 = unnamed820;
  unsigned long t824 = t823->_M_size;
  t822->_M_size = t824;
  __retval821 = t822;
  struct std____detail___List_size* t825 = __retval821;
  return t825;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v826) {
bb827:
  struct std____detail___List_node_header* this828;
  struct std____detail___List_size ref_tmp0829;
  this828 = v826;
  struct std____detail___List_node_header* t830 = this828;
  struct std____detail___List_node_base* base831 = (struct std____detail___List_node_base*)((char *)t830 + 0);
  struct std____detail___List_node_base* base832 = (struct std____detail___List_node_base*)((char *)t830 + 0);
  base832->_M_prev = base831;
  struct std____detail___List_node_base* base833 = (struct std____detail___List_node_base*)((char *)t830 + 0);
  base833->_M_next = base831;
  struct std____detail___List_size* base834 = (struct std____detail___List_size*)((char *)t830 + 16);
  ref_tmp0829 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r835 = std____detail___List_size__operator_(base834, &ref_tmp0829);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v836, struct std____allocated_ptr_std__allocator_std___List_node_int___* v837) {
bb838:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this839;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd840;
  this839 = v836;
  __gd840 = v837;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t841 = this839;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t842 = __gd840;
  struct std__allocator_std___List_node_int__* t843 = t842->_M_alloc;
  t841->_M_alloc = t843;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t844 = __gd840;
  struct std___List_node_int_* t845 = t844->_M_ptr;
  t841->_M_ptr = t845;
  struct std___List_node_int_* c846 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t847 = __gd840;
  t847->_M_ptr = c846;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v848) {
bb849:
  struct std___List_node_int_* __ptr850;
  struct std___List_node_int_* __retval851;
  __ptr850 = v848;
  struct std___List_node_int_* t852 = __ptr850;
  __retval851 = t852;
  struct std___List_node_int_* t853 = __retval851;
  return t853;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v854) {
bb855:
  struct std___List_node_int_** __ptr856;
  struct std___List_node_int_* __retval857;
  __ptr856 = v854;
  struct std___List_node_int_** t858 = __ptr856;
  struct std___List_node_int_* t859 = *t858;
  struct std___List_node_int_* r860 = std___List_node_int___std__to_address_std___List_node_int___(t859);
  __retval857 = r860;
  struct std___List_node_int_* t861 = __retval857;
  return t861;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v862) {
bb863:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this864;
  struct std___List_node_int_* __retval865;
  this864 = v862;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t866 = this864;
  struct std___List_node_int_* r867 = auto_std____to_address_std___List_node_int___(&t866->_M_ptr);
  __retval865 = r867;
  struct std___List_node_int_* t868 = __retval865;
  return t868;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v869) {
bb870:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this871;
  _Bool __retval872;
  this871 = v869;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t873 = this871;
  struct std___List_node_int_* t874 = t873->_M_ptr;
  _Bool cast875 = (_Bool)t874;
  __retval872 = cast875;
  _Bool t876 = __retval872;
  return t876;
}

// function: _ZNSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* v877) {
bb878:
  struct std____detail___List_node_base* this879;
  struct std____detail___List_node_base* __retval880;
  this879 = v877;
  struct std____detail___List_node_base* t881 = this879;
  __retval880 = t881;
  struct std____detail___List_node_base* t882 = __retval880;
  return t882;
}

