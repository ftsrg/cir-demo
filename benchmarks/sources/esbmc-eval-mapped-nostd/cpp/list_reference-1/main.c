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
char _str[9] = "*it == 4";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/list_reference-1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
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
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* p0);
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* p0);
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____emplace_int_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, int* p2);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, int* p2);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_ std___List_iterator_int___operator__(struct std___List_iterator_int_* p0, int p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v139, int* v140) {
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

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* v153, int* v154, int* v155) {
bb156:
  struct std__allocator_std___List_node_int__* __a157;
  int* __p158;
  int* __args159;
  __a157 = v153;
  __p158 = v154;
  __args159 = v155;
  int* t160 = __p158;
  int* t161 = __args159;
  int* r162 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t160, t161);
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

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* v203, int* v204) {
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
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(t216, r218, t219);
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

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* v234, struct std___List_iterator_int_ v235, int* v236) {
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
  struct std___List_node_int_* r244 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(t242, t243);
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

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v250, struct std____detail___List_node_base* v251) {
bb252:
  struct std___List_iterator_int_* this253;
  struct std____detail___List_node_base* __x254;
  this253 = v250;
  __x254 = v251;
  struct std___List_iterator_int_* t255 = this253;
  struct std____detail___List_node_base* t256 = __x254;
  t255->_M_node = t256;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v257) {
bb258:
  struct std____cxx11__list_int__std__allocator_int__* this259;
  struct std___List_iterator_int_ __retval260;
  this259 = v257;
  struct std____cxx11__list_int__std__allocator_int__* t261 = this259;
  struct std____cxx11___List_base_int__std__allocator_int__* base262 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t261 + 0);
  struct std____detail___List_node_base* r263 = std____detail___List_node_header___M_base(&base262->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval260, r263);
  struct std___List_iterator_int_ t264 = __retval260;
  return t264;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backEOi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v265, int* v266) {
bb267:
  struct std____cxx11__list_int__std__allocator_int__* this268;
  int* __x269;
  struct std___List_iterator_int_ agg_tmp0270;
  this268 = v265;
  __x269 = v266;
  struct std____cxx11__list_int__std__allocator_int__* t271 = this268;
  struct std___List_iterator_int_ r272 = std____cxx11__list_int__std__allocator_int_____end(t271);
  agg_tmp0270 = r272;
  int* t273 = __x269;
  struct std___List_iterator_int_ t274 = agg_tmp0270;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_(t271, t274, t273);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v275) {
bb276:
  struct std____cxx11__list_int__std__allocator_int__* this277;
  struct std___List_iterator_int_ __retval278;
  this277 = v275;
  struct std____cxx11__list_int__std__allocator_int__* t279 = this277;
  struct std____cxx11___List_base_int__std__allocator_int__* base280 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t279 + 0);
  struct std____detail___List_node_base* base281 = (struct std____detail___List_node_base*)((char *)&(base280->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t282 = base281->_M_next;
  std___List_iterator_int____List_iterator(&__retval278, t282);
  struct std___List_iterator_int_ t283 = __retval278;
  return t283;
}

// function: _ZNSt14_List_iteratorIiEaSEOS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v284, struct std___List_iterator_int_* v285) {
bb286:
  struct std___List_iterator_int_* this287;
  struct std___List_iterator_int_* unnamed288;
  struct std___List_iterator_int_* __retval289;
  this287 = v284;
  unnamed288 = v285;
  struct std___List_iterator_int_* t290 = this287;
  struct std___List_iterator_int_* t291 = unnamed288;
  struct std____detail___List_node_base* t292 = t291->_M_node;
  t290->_M_node = t292;
  __retval289 = t290;
  struct std___List_iterator_int_* t293 = __retval289;
  return t293;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v294) {
bb295:
  struct std___List_iterator_int_* this296;
  struct std___List_iterator_int_* __retval297;
  this296 = v294;
  struct std___List_iterator_int_* t298 = this296;
  struct std____detail___List_node_base* t299 = t298->_M_node;
  struct std____detail___List_node_base* t300 = t299->_M_next;
  t298->_M_node = t300;
  __retval297 = t298;
  struct std___List_iterator_int_* t301 = __retval297;
  return t301;
}

// function: _ZNKSt20_List_const_iteratorIiE13_M_const_castEv
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* v302) {
bb303:
  struct std___List_const_iterator_int_* this304;
  struct std___List_iterator_int_ __retval305;
  this304 = v302;
  struct std___List_const_iterator_int_* t306 = this304;
  struct std____detail___List_node_base* t307 = t306->_M_node;
  std___List_iterator_int____List_iterator(&__retval305, t307);
  struct std___List_iterator_int_ t308 = __retval305;
  return t308;
}

// function: _ZNSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base(struct std____detail___List_node_base* v309) {
bb310:
  struct std____detail___List_node_base* this311;
  struct std____detail___List_node_base* __retval312;
  this311 = v309;
  struct std____detail___List_node_base* t313 = this311;
  __retval312 = t313;
  struct std____detail___List_node_base* t314 = __retval312;
  return t314;
}

// function: _ZNSt7__cxx114listIiSaIiEE7emplaceIJiEEESt14_List_iteratorIiESt20_List_const_iteratorIiEDpOT_
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____emplace_int_(struct std____cxx11__list_int__std__allocator_int__* v315, struct std___List_const_iterator_int_ v316, int* v317) {
bb318:
  struct std____cxx11__list_int__std__allocator_int__* this319;
  struct std___List_const_iterator_int_ __position320;
  int* __args321;
  struct std___List_iterator_int_ __retval322;
  struct std___List_node_int_* __tmp323;
  struct std___List_iterator_int_ ref_tmp0324;
  this319 = v315;
  __position320 = v316;
  __args321 = v317;
  struct std____cxx11__list_int__std__allocator_int__* t325 = this319;
  int* t326 = __args321;
  struct std___List_node_int_* r327 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(t325, t326);
  __tmp323 = r327;
  struct std___List_node_int_* t328 = __tmp323;
  struct std____detail___List_node_base* base329 = (struct std____detail___List_node_base*)((char *)t328 + 0);
  struct std___List_iterator_int_ r330 = std___List_const_iterator_int____M_const_cast___const(&__position320);
  ref_tmp0324 = r330;
  struct std____detail___List_node_base* t331 = ref_tmp0324._M_node;
  std____detail___List_node_base___M_hook(base329, t331);
  struct std____cxx11___List_base_int__std__allocator_int__* base332 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t325 + 0);
  unsigned long c333 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base332, c333);
  struct std___List_node_int_* t334 = __tmp323;
  struct std____detail___List_node_base* base335 = (struct std____detail___List_node_base*)((char *)t334 + 0);
  struct std____detail___List_node_base* r336 = std____detail___List_node_base___M_base(base335);
  std___List_iterator_int____List_iterator(&__retval322, r336);
  struct std___List_iterator_int_ t337 = __retval322;
  return t337;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertESt20_List_const_iteratorIiEOi
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert(struct std____cxx11__list_int__std__allocator_int__* v338, struct std___List_const_iterator_int_ v339, int* v340) {
bb341:
  struct std____cxx11__list_int__std__allocator_int__* this342;
  struct std___List_const_iterator_int_ __position343;
  int* __x344;
  struct std___List_iterator_int_ __retval345;
  struct std___List_const_iterator_int_ agg_tmp0346;
  this342 = v338;
  __position343 = v339;
  __x344 = v340;
  struct std____cxx11__list_int__std__allocator_int__* t347 = this342;
  agg_tmp0346 = __position343; // copy
  int* t348 = __x344;
  struct std___List_const_iterator_int_ t349 = agg_tmp0346;
  struct std___List_iterator_int_ r350 = std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____emplace_int_(t347, t349, t348);
  __retval345 = r350;
  struct std___List_iterator_int_ t351 = __retval345;
  return t351;
}

// function: _ZNSt20_List_const_iteratorIiEC2ERKSt14_List_iteratorIiE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v352, struct std___List_iterator_int_* v353) {
bb354:
  struct std___List_const_iterator_int_* this355;
  struct std___List_iterator_int_* __x356;
  this355 = v352;
  __x356 = v353;
  struct std___List_const_iterator_int_* t357 = this355;
  struct std___List_iterator_int_* t358 = __x356;
  struct std____detail___List_node_base* t359 = t358->_M_node;
  t357->_M_node = t359;
  return;
}

// function: _ZNSt14_List_iteratorIiEppEi
struct std___List_iterator_int_ std___List_iterator_int___operator__(struct std___List_iterator_int_* v360, int v361) {
bb362:
  struct std___List_iterator_int_* this363;
  int unnamed364;
  struct std___List_iterator_int_ __retval365;
  this363 = v360;
  unnamed364 = v361;
  struct std___List_iterator_int_* t366 = this363;
  __retval365 = *t366; // copy
  struct std____detail___List_node_base* t367 = t366->_M_node;
  struct std____detail___List_node_base* t368 = t367->_M_next;
  t366->_M_node = t368;
  struct std___List_iterator_int_ t369 = __retval365;
  return t369;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v370) {
bb371:
  struct std___List_iterator_int_* this372;
  int* __retval373;
  this372 = v370;
  struct std___List_iterator_int_* t374 = this372;
  struct std____detail___List_node_base* t375 = t374->_M_node;
  struct std___List_node_int_* derived376 = ((t375) ? (struct std___List_node_int_*)((char *)t375 - 0) : (struct std___List_node_int_*)0);
  int* r377 = std___List_node_int____M_valptr(derived376);
  __retval373 = r377;
  int* t378 = __retval373;
  return t378;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v379, void* v380) {
bb381:
  struct std__basic_ostream_char__std__char_traits_char__* this382;
  void* __pf383;
  struct std__basic_ostream_char__std__char_traits_char__* __retval384;
  this382 = v379;
  __pf383 = v380;
  struct std__basic_ostream_char__std__char_traits_char__* t385 = this382;
  void* t386 = __pf383;
  struct std__basic_ostream_char__std__char_traits_char__* r387 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t386)(t385);
  __retval384 = r387;
  struct std__basic_ostream_char__std__char_traits_char__* t388 = __retval384;
  return t388;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v389) {
bb390:
  struct std__basic_ostream_char__std__char_traits_char__* __os391;
  struct std__basic_ostream_char__std__char_traits_char__* __retval392;
  __os391 = v389;
  struct std__basic_ostream_char__std__char_traits_char__* t393 = __os391;
  struct std__basic_ostream_char__std__char_traits_char__* r394 = std__ostream__flush(t393);
  __retval392 = r394;
  struct std__basic_ostream_char__std__char_traits_char__* t395 = __retval392;
  return t395;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v396) {
bb397:
  struct std__ctype_char_* __f398;
  struct std__ctype_char_* __retval399;
  __f398 = v396;
    struct std__ctype_char_* t400 = __f398;
    _Bool cast401 = (_Bool)t400;
    _Bool u402 = !cast401;
    if (u402) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t403 = __f398;
  __retval399 = t403;
  struct std__ctype_char_* t404 = __retval399;
  return t404;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v405, char v406) {
bb407:
  struct std__ctype_char_* this408;
  char __c409;
  char __retval410;
  this408 = v405;
  __c409 = v406;
  struct std__ctype_char_* t411 = this408;
    char t412 = t411->_M_widen_ok;
    _Bool cast413 = (_Bool)t412;
    if (cast413) {
      char t414 = __c409;
      unsigned char cast415 = (unsigned char)t414;
      unsigned long cast416 = (unsigned long)cast415;
      char t417 = t411->_M_widen[cast416];
      __retval410 = t417;
      char t418 = __retval410;
      return t418;
    }
  std__ctype_char____M_widen_init___const(t411);
  char t419 = __c409;
  void** v420 = (void**)t411;
  void* v421 = *((void**)v420);
  char vcall424 = (char)__VERIFIER_virtual_call_char_char(t411, 6, t419);
  __retval410 = vcall424;
  char t425 = __retval410;
  return t425;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v426, char v427) {
bb428:
  struct std__basic_ios_char__std__char_traits_char__* this429;
  char __c430;
  char __retval431;
  this429 = v426;
  __c430 = v427;
  struct std__basic_ios_char__std__char_traits_char__* t432 = this429;
  struct std__ctype_char_* t433 = t432->_M_ctype;
  struct std__ctype_char_* r434 = std__ctype_char__const__std____check_facet_std__ctype_char___(t433);
  char t435 = __c430;
  char r436 = std__ctype_char___widen_char__const(r434, t435);
  __retval431 = r436;
  char t437 = __retval431;
  return t437;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v438) {
bb439:
  struct std__basic_ostream_char__std__char_traits_char__* __os440;
  struct std__basic_ostream_char__std__char_traits_char__* __retval441;
  __os440 = v438;
  struct std__basic_ostream_char__std__char_traits_char__* t442 = __os440;
  struct std__basic_ostream_char__std__char_traits_char__* t443 = __os440;
  void** v444 = (void**)t443;
  void* v445 = *((void**)v444);
  unsigned char* cast446 = (unsigned char*)v445;
  long c447 = -24;
  unsigned char* ptr448 = &(cast446)[c447];
  long* cast449 = (long*)ptr448;
  long t450 = *cast449;
  unsigned char* cast451 = (unsigned char*)t443;
  unsigned char* ptr452 = &(cast451)[t450];
  struct std__basic_ostream_char__std__char_traits_char__* cast453 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr452;
  struct std__basic_ios_char__std__char_traits_char__* cast454 = (struct std__basic_ios_char__std__char_traits_char__*)cast453;
  char c455 = 10;
  char r456 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast454, c455);
  struct std__basic_ostream_char__std__char_traits_char__* r457 = std__ostream__put(t442, r456);
  struct std__basic_ostream_char__std__char_traits_char__* r458 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r457);
  __retval441 = r458;
  struct std__basic_ostream_char__std__char_traits_char__* t459 = __retval441;
  return t459;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v460) {
bb461:
  struct std____cxx11__list_int__std__allocator_int__* this462;
  this462 = v460;
  struct std____cxx11__list_int__std__allocator_int__* t463 = this462;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base464 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t463 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base464);
  }
  return;
}

// function: main
int main() {
bb465:
  int __retval466;
  struct std____cxx11__list_int__std__allocator_int__ mylist467;
  struct std___List_iterator_int_ it468;
  int ref_tmp0469;
  int ref_tmp1470;
  int ref_tmp2471;
  int ref_tmp3472;
  struct std___List_iterator_int_ ref_tmp4473;
  struct std___List_const_iterator_int_ agg_tmp0474;
  int ref_tmp5475;
  struct std___List_iterator_int_ agg_tmp1476;
  struct std___List_iterator_int_ ref_tmp6477;
  struct std___List_iterator_int_ agg_tmp2478;
  struct std___List_iterator_int_ agg_tmp3479;
  struct std___List_iterator_int_ agg_tmp4480;
  struct std___List_iterator_int_ agg_tmp5481;
  int c482 = 0;
  __retval466 = c482;
  std____cxx11__list_int__std__allocator_int_____list(&mylist467);
    std___List_iterator_int____List_iterator_2(&it468);
    int c483 = 1;
    ref_tmp0469 = c483;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist467, &ref_tmp0469);
    int c484 = 2;
    ref_tmp1470 = c484;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist467, &ref_tmp1470);
    int c485 = 3;
    ref_tmp2471 = c485;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist467, &ref_tmp2471);
    int c486 = 4;
    ref_tmp3472 = c486;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist467, &ref_tmp3472);
    struct std___List_iterator_int_ r487 = std____cxx11__list_int__std__allocator_int_____begin(&mylist467);
    ref_tmp4473 = r487;
    struct std___List_iterator_int_* r488 = std___List_iterator_int___operator_(&it468, &ref_tmp4473);
    struct std___List_iterator_int_* r489 = std___List_iterator_int___operator___2(&it468);
    std___List_const_iterator_int____List_const_iterator(&agg_tmp0474, &it468);
    int c490 = 10;
    ref_tmp5475 = c490;
    struct std___List_const_iterator_int_ t491 = agg_tmp0474;
    struct std___List_iterator_int_ r492 = std____cxx11__list_int__std__allocator_int_____insert(&mylist467, t491, &ref_tmp5475);
    agg_tmp1476 = r492;
    struct std___List_iterator_int_ r493 = std____cxx11__list_int__std__allocator_int_____begin(&mylist467);
    ref_tmp6477 = r493;
    struct std___List_iterator_int_* r494 = std___List_iterator_int___operator_(&it468, &ref_tmp6477);
    int c495 = 0;
    struct std___List_iterator_int_ r496 = std___List_iterator_int___operator__(&it468, c495);
    agg_tmp2478 = r496;
    int c497 = 0;
    struct std___List_iterator_int_ r498 = std___List_iterator_int___operator__(&it468, c497);
    agg_tmp3479 = r498;
    int c499 = 0;
    struct std___List_iterator_int_ r500 = std___List_iterator_int___operator__(&it468, c499);
    agg_tmp4480 = r500;
    int c501 = 0;
    struct std___List_iterator_int_ r502 = std___List_iterator_int___operator__(&it468, c501);
    agg_tmp5481 = r502;
    int* r503 = std___List_iterator_int___operator____const(&it468);
    int t504 = *r503;
    int c505 = 4;
    _Bool c506 = ((t504 == c505)) ? 1 : 0;
    if (c506) {
    } else {
      char* cast507 = (char*)&(_str);
      char* c508 = _str_1;
      unsigned int c509 = 34;
      char* cast510 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast507, c508, c509, cast510);
    }
    int* r511 = std___List_iterator_int___operator____const(&it468);
    int t512 = *r511;
    struct std__basic_ostream_char__std__char_traits_char__* r513 = std__ostream__operator__(&_ZSt4cout, t512);
    struct std__basic_ostream_char__std__char_traits_char__* r514 = std__ostream__operator___std__ostream_____(r513, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c515 = 0;
    __retval466 = c515;
    int t516 = __retval466;
    int ret_val517 = t516;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist467);
    }
    return ret_val517;
  int t518 = __retval466;
  return t518;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v519) {
bb520:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this521;
  this521 = v519;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t522 = this521;
  struct std__allocator_std___List_node_int__* base523 = (struct std__allocator_std___List_node_int__*)((char *)t522 + 0);
  std__allocator_std___List_node_int_____allocator(base523);
    std____detail___List_node_header___List_node_header(&t522->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v524) {
bb525:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this526;
  this526 = v524;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t527 = this526;
  {
    struct std__allocator_std___List_node_int__* base528 = (struct std__allocator_std___List_node_int__*)((char *)t527 + 0);
    std__allocator_std___List_node_int______allocator(base528);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v529) {
bb530:
  struct std____cxx11___List_base_int__std__allocator_int__* this531;
  this531 = v529;
  struct std____cxx11___List_base_int__std__allocator_int__* t532 = this531;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t532->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v533) {
bb534:
  struct std____detail___List_node_header* this535;
  struct std____detail___List_node_base* __retval536;
  this535 = v533;
  struct std____detail___List_node_header* t537 = this535;
  struct std____detail___List_node_base* base538 = (struct std____detail___List_node_base*)((char *)t537 + 0);
  __retval536 = base538;
  struct std____detail___List_node_base* t539 = __retval536;
  return t539;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v540) {
bb541:
  int* __location542;
  __location542 = v540;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v543, int* v544) {
bb545:
  struct std__allocator_std___List_node_int__* __a546;
  int* __p547;
  __a546 = v543;
  __p547 = v544;
  int* t548 = __p547;
  void_std__destroy_at_int_(t548);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v549) {
bb550:
  struct __gnu_cxx____aligned_membuf_int_* this551;
  void* __retval552;
  this551 = v549;
  struct __gnu_cxx____aligned_membuf_int_* t553 = this551;
  void* cast554 = (void*)&(t553->_M_storage);
  __retval552 = cast554;
  void* t555 = __retval552;
  return t555;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v556) {
bb557:
  struct __gnu_cxx____aligned_membuf_int_* this558;
  int* __retval559;
  this558 = v556;
  struct __gnu_cxx____aligned_membuf_int_* t560 = this558;
  void* r561 = __gnu_cxx____aligned_membuf_int____M_addr(t560);
  int* cast562 = (int*)r561;
  __retval559 = cast562;
  int* t563 = __retval559;
  return t563;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v564) {
bb565:
  struct std___List_node_int_* this566;
  int* __retval567;
  this566 = v564;
  struct std___List_node_int_* t568 = this566;
  int* r569 = __gnu_cxx____aligned_membuf_int____M_ptr(&t568->_M_storage);
  __retval567 = r569;
  int* t570 = __retval567;
  return t570;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb571:
  _Bool __retval572;
    _Bool c573 = 0;
    __retval572 = c573;
    _Bool t574 = __retval572;
    return t574;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v575, struct std___List_node_int_* v576, unsigned long v577) {
bb578:
  struct std____new_allocator_std___List_node_int__* this579;
  struct std___List_node_int_* __p580;
  unsigned long __n581;
  this579 = v575;
  __p580 = v576;
  __n581 = v577;
  struct std____new_allocator_std___List_node_int__* t582 = this579;
    unsigned long c583 = 8;
    unsigned long c584 = 16;
    _Bool c585 = ((c583 > c584)) ? 1 : 0;
    if (c585) {
      struct std___List_node_int_* t586 = __p580;
      void* cast587 = (void*)t586;
      unsigned long t588 = __n581;
      unsigned long c589 = 24;
      unsigned long b590 = t588 * c589;
      unsigned long c591 = 8;
      operator_delete_3(cast587, b590, c591);
      return;
    }
  struct std___List_node_int_* t592 = __p580;
  void* cast593 = (void*)t592;
  unsigned long t594 = __n581;
  unsigned long c595 = 24;
  unsigned long b596 = t594 * c595;
  operator_delete_2(cast593, b596);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v597, struct std___List_node_int_* v598, unsigned long v599) {
bb600:
  struct std__allocator_std___List_node_int__* this601;
  struct std___List_node_int_* __p602;
  unsigned long __n603;
  this601 = v597;
  __p602 = v598;
  __n603 = v599;
  struct std__allocator_std___List_node_int__* t604 = this601;
    _Bool r605 = std____is_constant_evaluated();
    if (r605) {
      struct std___List_node_int_* t606 = __p602;
      void* cast607 = (void*)t606;
      operator_delete(cast607);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base608 = (struct std____new_allocator_std___List_node_int__*)((char *)t604 + 0);
  struct std___List_node_int_* t609 = __p602;
  unsigned long t610 = __n603;
  std____new_allocator_std___List_node_int_____deallocate(base608, t609, t610);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v611, struct std___List_node_int_* v612, unsigned long v613) {
bb614:
  struct std__allocator_std___List_node_int__* __a615;
  struct std___List_node_int_* __p616;
  unsigned long __n617;
  __a615 = v611;
  __p616 = v612;
  __n617 = v613;
  struct std__allocator_std___List_node_int__* t618 = __a615;
  struct std___List_node_int_* t619 = __p616;
  unsigned long t620 = __n617;
  std__allocator_std___List_node_int_____deallocate(t618, t619, t620);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v621, struct std___List_node_int_* v622) {
bb623:
  struct std____cxx11___List_base_int__std__allocator_int__* this624;
  struct std___List_node_int_* __p625;
  this624 = v621;
  __p625 = v622;
  struct std____cxx11___List_base_int__std__allocator_int__* t626 = this624;
  struct std__allocator_std___List_node_int__* base627 = (struct std__allocator_std___List_node_int__*)((char *)&(t626->_M_impl) + 0);
  struct std___List_node_int_* t628 = __p625;
  unsigned long c629 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base627, t628, c629);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v630, struct std___List_node_int_* v631) {
bb632:
  struct std____cxx11___List_base_int__std__allocator_int__* this633;
  struct std___List_node_int_* __p634;
  this633 = v630;
  __p634 = v631;
  struct std____cxx11___List_base_int__std__allocator_int__* t635 = this633;
  struct std__allocator_std___List_node_int__* base636 = (struct std__allocator_std___List_node_int__*)((char *)&(t635->_M_impl) + 0);
  struct std___List_node_int_* t637 = __p634;
  int* r638 = std___List_node_int____M_valptr(t637);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base636, r638);
  struct std___List_node_int_* t639 = __p634;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t635, t639);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v640) {
bb641:
  struct std___List_node_int_* this642;
  struct std___List_node_int_* __retval643;
  this642 = v640;
  struct std___List_node_int_* t644 = this642;
  __retval643 = t644;
  struct std___List_node_int_* t645 = __retval643;
  return t645;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v646) {
bb647:
  struct std____cxx11___List_base_int__std__allocator_int__* this648;
  struct std____detail___List_node_base* __cur649;
  this648 = v646;
  struct std____cxx11___List_base_int__std__allocator_int__* t650 = this648;
  struct std____detail___List_node_base* base651 = (struct std____detail___List_node_base*)((char *)&(t650->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t652 = base651->_M_next;
  __cur649 = t652;
    while (1) {
      struct std____detail___List_node_base* t653 = __cur649;
      struct std____detail___List_node_base* r654 = std____detail___List_node_header___M_base(&t650->_M_impl._M_node);
      _Bool c655 = ((t653 != r654)) ? 1 : 0;
      if (!c655) break;
        struct std___List_node_int_* __tmp656;
        struct std____detail___List_node_base* t657 = __cur649;
        struct std___List_node_int_* derived658 = (struct std___List_node_int_*)((char *)t657 - 0);
        __tmp656 = derived658;
        struct std___List_node_int_* t659 = __tmp656;
        struct std____detail___List_node_base* base660 = (struct std____detail___List_node_base*)((char *)t659 + 0);
        struct std____detail___List_node_base* t661 = base660->_M_next;
        __cur649 = t661;
        struct std___List_node_int_* t662 = __tmp656;
        struct std___List_node_int_* r663 = std___List_node_int____M_node_ptr(t662);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t650, r663);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v664) {
bb665:
  struct std____cxx11___List_base_int__std__allocator_int__* this666;
  this666 = v664;
  struct std____cxx11___List_base_int__std__allocator_int__* t667 = this666;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t667);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t667->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v668) {
bb669:
  struct std____new_allocator_std___List_node_int__* this670;
  this670 = v668;
  struct std____new_allocator_std___List_node_int__* t671 = this670;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v672) {
bb673:
  struct std__allocator_std___List_node_int__* this674;
  this674 = v672;
  struct std__allocator_std___List_node_int__* t675 = this674;
  struct std____new_allocator_std___List_node_int__* base676 = (struct std____new_allocator_std___List_node_int__*)((char *)t675 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base676);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v677) {
bb678:
  struct std____detail___List_node_header* this679;
  this679 = v677;
  struct std____detail___List_node_header* t680 = this679;
  struct std____detail___List_node_base* base681 = (struct std____detail___List_node_base*)((char *)t680 + 0);
  struct std____detail___List_size* base682 = (struct std____detail___List_size*)((char *)t680 + 16);
  std____detail___List_node_header___M_init(t680);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v683) {
bb684:
  struct std__allocator_std___List_node_int__* this685;
  this685 = v683;
  struct std__allocator_std___List_node_int__* t686 = this685;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v687, struct std____detail___List_size* v688) {
bb689:
  struct std____detail___List_size* this690;
  struct std____detail___List_size* unnamed691;
  struct std____detail___List_size* __retval692;
  this690 = v687;
  unnamed691 = v688;
  struct std____detail___List_size* t693 = this690;
  struct std____detail___List_size* t694 = unnamed691;
  unsigned long t695 = t694->_M_size;
  t693->_M_size = t695;
  __retval692 = t693;
  struct std____detail___List_size* t696 = __retval692;
  return t696;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v697) {
bb698:
  struct std____detail___List_node_header* this699;
  struct std____detail___List_size ref_tmp0700;
  this699 = v697;
  struct std____detail___List_node_header* t701 = this699;
  struct std____detail___List_node_base* base702 = (struct std____detail___List_node_base*)((char *)t701 + 0);
  struct std____detail___List_node_base* base703 = (struct std____detail___List_node_base*)((char *)t701 + 0);
  base703->_M_prev = base702;
  struct std____detail___List_node_base* base704 = (struct std____detail___List_node_base*)((char *)t701 + 0);
  base704->_M_next = base702;
  struct std____detail___List_size* base705 = (struct std____detail___List_size*)((char *)t701 + 16);
  ref_tmp0700 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r706 = std____detail___List_size__operator_(base705, &ref_tmp0700);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v707, struct std____allocated_ptr_std__allocator_std___List_node_int___* v708) {
bb709:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this710;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd711;
  this710 = v707;
  __gd711 = v708;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t712 = this710;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t713 = __gd711;
  struct std__allocator_std___List_node_int__* t714 = t713->_M_alloc;
  t712->_M_alloc = t714;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t715 = __gd711;
  struct std___List_node_int_* t716 = t715->_M_ptr;
  t712->_M_ptr = t716;
  struct std___List_node_int_* c717 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t718 = __gd711;
  t718->_M_ptr = c717;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v719) {
bb720:
  struct std___List_node_int_* __ptr721;
  struct std___List_node_int_* __retval722;
  __ptr721 = v719;
  struct std___List_node_int_* t723 = __ptr721;
  __retval722 = t723;
  struct std___List_node_int_* t724 = __retval722;
  return t724;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v725) {
bb726:
  struct std___List_node_int_** __ptr727;
  struct std___List_node_int_* __retval728;
  __ptr727 = v725;
  struct std___List_node_int_** t729 = __ptr727;
  struct std___List_node_int_* t730 = *t729;
  struct std___List_node_int_* r731 = std___List_node_int___std__to_address_std___List_node_int___(t730);
  __retval728 = r731;
  struct std___List_node_int_* t732 = __retval728;
  return t732;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v733) {
bb734:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this735;
  struct std___List_node_int_* __retval736;
  this735 = v733;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t737 = this735;
  struct std___List_node_int_* r738 = auto_std____to_address_std___List_node_int___(&t737->_M_ptr);
  __retval736 = r738;
  struct std___List_node_int_* t739 = __retval736;
  return t739;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v740) {
bb741:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this742;
  _Bool __retval743;
  this742 = v740;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t744 = this742;
  struct std___List_node_int_* t745 = t744->_M_ptr;
  _Bool cast746 = (_Bool)t745;
  __retval743 = cast746;
  _Bool t747 = __retval743;
  return t747;
}

