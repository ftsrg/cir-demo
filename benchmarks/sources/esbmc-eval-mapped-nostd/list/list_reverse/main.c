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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "mylist contains:";
char _str_1[11] = "*it == n--";
char _str_2[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_reverse/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
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
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_reverse(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int_____reverse(struct std____cxx11__list_int__std__allocator_int__* p0);
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
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
_Bool std__operator__(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
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
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v250, int* v251) {
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

// function: _ZNSt7__cxx114listIiSaIiEE7reverseEv
void std____cxx11__list_int__std__allocator_int_____reverse(struct std____cxx11__list_int__std__allocator_int__* v260) {
bb261:
  struct std____cxx11__list_int__std__allocator_int__* this262;
  this262 = v260;
  struct std____cxx11__list_int__std__allocator_int__* t263 = this262;
  struct std____cxx11___List_base_int__std__allocator_int__* base264 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t263 + 0);
  struct std____detail___List_node_base* base265 = (struct std____detail___List_node_base*)((char *)&(base264->_M_impl._M_node) + 0);
  std____detail___List_node_base___M_reverse(base265);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v266, int v267) {
bb268:
  int __a269;
  int __b270;
  int __retval271;
  __a269 = v266;
  __b270 = v267;
  int t272 = __a269;
  int t273 = __b270;
  int b274 = t272 | t273;
  __retval271 = b274;
  int t275 = __retval271;
  return t275;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v276) {
bb277:
  struct std__basic_ios_char__std__char_traits_char__* this278;
  int __retval279;
  this278 = v276;
  struct std__basic_ios_char__std__char_traits_char__* t280 = this278;
  struct std__ios_base* base281 = (struct std__ios_base*)((char *)t280 + 0);
  int t282 = base281->_M_streambuf_state;
  __retval279 = t282;
  int t283 = __retval279;
  return t283;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v284, int v285) {
bb286:
  struct std__basic_ios_char__std__char_traits_char__* this287;
  int __state288;
  this287 = v284;
  __state288 = v285;
  struct std__basic_ios_char__std__char_traits_char__* t289 = this287;
  int r290 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t289);
  int t291 = __state288;
  int r292 = std__operator_(r290, t291);
  std__basic_ios_char__std__char_traits_char_____clear(t289, r292);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v293, char* v294) {
bb295:
  char* __c1296;
  char* __c2297;
  _Bool __retval298;
  __c1296 = v293;
  __c2297 = v294;
  char* t299 = __c1296;
  char t300 = *t299;
  int cast301 = (int)t300;
  char* t302 = __c2297;
  char t303 = *t302;
  int cast304 = (int)t303;
  _Bool c305 = ((cast301 == cast304)) ? 1 : 0;
  __retval298 = c305;
  _Bool t306 = __retval298;
  return t306;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v307) {
bb308:
  char* __p309;
  unsigned long __retval310;
  unsigned long __i311;
  __p309 = v307;
  unsigned long c312 = 0;
  __i311 = c312;
    char ref_tmp0313;
    while (1) {
      unsigned long t314 = __i311;
      char* t315 = __p309;
      char* ptr316 = &(t315)[t314];
      char c317 = 0;
      ref_tmp0313 = c317;
      _Bool r318 = __gnu_cxx__char_traits_char___eq(ptr316, &ref_tmp0313);
      _Bool u319 = !r318;
      if (!u319) break;
      unsigned long t320 = __i311;
      unsigned long u321 = t320 + 1;
      __i311 = u321;
    }
  unsigned long t322 = __i311;
  __retval310 = t322;
  unsigned long t323 = __retval310;
  return t323;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v324) {
bb325:
  char* __s326;
  unsigned long __retval327;
  __s326 = v324;
    _Bool r328 = std____is_constant_evaluated();
    if (r328) {
      char* t329 = __s326;
      unsigned long r330 = __gnu_cxx__char_traits_char___length(t329);
      __retval327 = r330;
      unsigned long t331 = __retval327;
      return t331;
    }
  char* t332 = __s326;
  unsigned long r333 = strlen(t332);
  __retval327 = r333;
  unsigned long t334 = __retval327;
  return t334;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v335, char* v336) {
bb337:
  struct std__basic_ostream_char__std__char_traits_char__* __out338;
  char* __s339;
  struct std__basic_ostream_char__std__char_traits_char__* __retval340;
  __out338 = v335;
  __s339 = v336;
    char* t341 = __s339;
    _Bool cast342 = (_Bool)t341;
    _Bool u343 = !cast342;
    if (u343) {
      struct std__basic_ostream_char__std__char_traits_char__* t344 = __out338;
      void** v345 = (void**)t344;
      void* v346 = *((void**)v345);
      unsigned char* cast347 = (unsigned char*)v346;
      long c348 = -24;
      unsigned char* ptr349 = &(cast347)[c348];
      long* cast350 = (long*)ptr349;
      long t351 = *cast350;
      unsigned char* cast352 = (unsigned char*)t344;
      unsigned char* ptr353 = &(cast352)[t351];
      struct std__basic_ostream_char__std__char_traits_char__* cast354 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr353;
      struct std__basic_ios_char__std__char_traits_char__* cast355 = (struct std__basic_ios_char__std__char_traits_char__*)cast354;
      int t356 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast355, t356);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t357 = __out338;
      char* t358 = __s339;
      char* t359 = __s339;
      unsigned long r360 = std__char_traits_char___length(t359);
      long cast361 = (long)r360;
      struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t357, t358, cast361);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t363 = __out338;
  __retval340 = t363;
  struct std__basic_ostream_char__std__char_traits_char__* t364 = __retval340;
  return t364;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v365, struct std____detail___List_node_base* v366) {
bb367:
  struct std___List_iterator_int_* this368;
  struct std____detail___List_node_base* __x369;
  this368 = v365;
  __x369 = v366;
  struct std___List_iterator_int_* t370 = this368;
  struct std____detail___List_node_base* t371 = __x369;
  t370->_M_node = t371;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v372) {
bb373:
  struct std____cxx11__list_int__std__allocator_int__* this374;
  struct std___List_iterator_int_ __retval375;
  this374 = v372;
  struct std____cxx11__list_int__std__allocator_int__* t376 = this374;
  struct std____cxx11___List_base_int__std__allocator_int__* base377 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t376 + 0);
  struct std____detail___List_node_base* base378 = (struct std____detail___List_node_base*)((char *)&(base377->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t379 = base378->_M_next;
  std___List_iterator_int____List_iterator(&__retval375, t379);
  struct std___List_iterator_int_ t380 = __retval375;
  return t380;
}

// function: _ZNSt14_List_iteratorIiEaSEOS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v381, struct std___List_iterator_int_* v382) {
bb383:
  struct std___List_iterator_int_* this384;
  struct std___List_iterator_int_* unnamed385;
  struct std___List_iterator_int_* __retval386;
  this384 = v381;
  unnamed385 = v382;
  struct std___List_iterator_int_* t387 = this384;
  struct std___List_iterator_int_* t388 = unnamed385;
  struct std____detail___List_node_base* t389 = t388->_M_node;
  t387->_M_node = t389;
  __retval386 = t387;
  struct std___List_iterator_int_* t390 = __retval386;
  return t390;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator__(struct std___List_iterator_int_* v391, struct std___List_iterator_int_* v392) {
bb393:
  struct std___List_iterator_int_* __x394;
  struct std___List_iterator_int_* __y395;
  _Bool __retval396;
  __x394 = v391;
  __y395 = v392;
  struct std___List_iterator_int_* t397 = __x394;
  struct std____detail___List_node_base* t398 = t397->_M_node;
  struct std___List_iterator_int_* t399 = __y395;
  struct std____detail___List_node_base* t400 = t399->_M_node;
  _Bool c401 = ((t398 == t400)) ? 1 : 0;
  __retval396 = c401;
  _Bool t402 = __retval396;
  return t402;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v403) {
bb404:
  struct std____cxx11__list_int__std__allocator_int__* this405;
  struct std___List_iterator_int_ __retval406;
  this405 = v403;
  struct std____cxx11__list_int__std__allocator_int__* t407 = this405;
  struct std____cxx11___List_base_int__std__allocator_int__* base408 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t407 + 0);
  struct std____detail___List_node_base* r409 = std____detail___List_node_header___M_base(&base408->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval406, r409);
  struct std___List_iterator_int_ t410 = __retval406;
  return t410;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v411) {
bb412:
  struct std___List_iterator_int_* this413;
  int* __retval414;
  this413 = v411;
  struct std___List_iterator_int_* t415 = this413;
  struct std____detail___List_node_base* t416 = t415->_M_node;
  struct std___List_node_int_* derived417 = ((t416) ? (struct std___List_node_int_*)((char *)t416 - 0) : (struct std___List_node_int_*)0);
  int* r418 = std___List_node_int____M_valptr(derived417);
  __retval414 = r418;
  int* t419 = __retval414;
  return t419;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v420) {
bb421:
  struct std___List_iterator_int_* this422;
  struct std___List_iterator_int_* __retval423;
  this422 = v420;
  struct std___List_iterator_int_* t424 = this422;
  struct std____detail___List_node_base* t425 = t424->_M_node;
  struct std____detail___List_node_base* t426 = t425->_M_next;
  t424->_M_node = t426;
  __retval423 = t424;
  struct std___List_iterator_int_* t427 = __retval423;
  return t427;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v428, void* v429) {
bb430:
  struct std__basic_ostream_char__std__char_traits_char__* this431;
  void* __pf432;
  struct std__basic_ostream_char__std__char_traits_char__* __retval433;
  this431 = v428;
  __pf432 = v429;
  struct std__basic_ostream_char__std__char_traits_char__* t434 = this431;
  void* t435 = __pf432;
  struct std__basic_ostream_char__std__char_traits_char__* r436 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t435)(t434);
  __retval433 = r436;
  struct std__basic_ostream_char__std__char_traits_char__* t437 = __retval433;
  return t437;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v438) {
bb439:
  struct std__basic_ostream_char__std__char_traits_char__* __os440;
  struct std__basic_ostream_char__std__char_traits_char__* __retval441;
  __os440 = v438;
  struct std__basic_ostream_char__std__char_traits_char__* t442 = __os440;
  struct std__basic_ostream_char__std__char_traits_char__* r443 = std__ostream__flush(t442);
  __retval441 = r443;
  struct std__basic_ostream_char__std__char_traits_char__* t444 = __retval441;
  return t444;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v445) {
bb446:
  struct std__ctype_char_* __f447;
  struct std__ctype_char_* __retval448;
  __f447 = v445;
    struct std__ctype_char_* t449 = __f447;
    _Bool cast450 = (_Bool)t449;
    _Bool u451 = !cast450;
    if (u451) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t452 = __f447;
  __retval448 = t452;
  struct std__ctype_char_* t453 = __retval448;
  return t453;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v454, char v455) {
bb456:
  struct std__ctype_char_* this457;
  char __c458;
  char __retval459;
  this457 = v454;
  __c458 = v455;
  struct std__ctype_char_* t460 = this457;
    char t461 = t460->_M_widen_ok;
    _Bool cast462 = (_Bool)t461;
    if (cast462) {
      char t463 = __c458;
      unsigned char cast464 = (unsigned char)t463;
      unsigned long cast465 = (unsigned long)cast464;
      char t466 = t460->_M_widen[cast465];
      __retval459 = t466;
      char t467 = __retval459;
      return t467;
    }
  std__ctype_char____M_widen_init___const(t460);
  char t468 = __c458;
  void** v469 = (void**)t460;
  void* v470 = *((void**)v469);
  char vcall473 = (char)__VERIFIER_virtual_call_char_char(t460, 6, t468);
  __retval459 = vcall473;
  char t474 = __retval459;
  return t474;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v475, char v476) {
bb477:
  struct std__basic_ios_char__std__char_traits_char__* this478;
  char __c479;
  char __retval480;
  this478 = v475;
  __c479 = v476;
  struct std__basic_ios_char__std__char_traits_char__* t481 = this478;
  struct std__ctype_char_* t482 = t481->_M_ctype;
  struct std__ctype_char_* r483 = std__ctype_char__const__std____check_facet_std__ctype_char___(t482);
  char t484 = __c479;
  char r485 = std__ctype_char___widen_char__const(r483, t484);
  __retval480 = r485;
  char t486 = __retval480;
  return t486;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v487) {
bb488:
  struct std__basic_ostream_char__std__char_traits_char__* __os489;
  struct std__basic_ostream_char__std__char_traits_char__* __retval490;
  __os489 = v487;
  struct std__basic_ostream_char__std__char_traits_char__* t491 = __os489;
  struct std__basic_ostream_char__std__char_traits_char__* t492 = __os489;
  void** v493 = (void**)t492;
  void* v494 = *((void**)v493);
  unsigned char* cast495 = (unsigned char*)v494;
  long c496 = -24;
  unsigned char* ptr497 = &(cast495)[c496];
  long* cast498 = (long*)ptr497;
  long t499 = *cast498;
  unsigned char* cast500 = (unsigned char*)t492;
  unsigned char* ptr501 = &(cast500)[t499];
  struct std__basic_ostream_char__std__char_traits_char__* cast502 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr501;
  struct std__basic_ios_char__std__char_traits_char__* cast503 = (struct std__basic_ios_char__std__char_traits_char__*)cast502;
  char c504 = 10;
  char r505 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast503, c504);
  struct std__basic_ostream_char__std__char_traits_char__* r506 = std__ostream__put(t491, r505);
  struct std__basic_ostream_char__std__char_traits_char__* r507 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r506);
  __retval490 = r507;
  struct std__basic_ostream_char__std__char_traits_char__* t508 = __retval490;
  return t508;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v509) {
bb510:
  struct std____cxx11__list_int__std__allocator_int__* this511;
  this511 = v509;
  struct std____cxx11__list_int__std__allocator_int__* t512 = this511;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base513 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t512 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base513);
  }
  return;
}

// function: main
int main() {
bb514:
  int __retval515;
  struct std____cxx11__list_int__std__allocator_int__ mylist516;
  struct std___List_iterator_int_ it517;
  int n518;
  int c519 = 0;
  __retval515 = c519;
  std____cxx11__list_int__std__allocator_int_____list(&mylist516);
    std___List_iterator_int____List_iterator_2(&it517);
      int i520;
      int c521 = 1;
      i520 = c521;
      while (1) {
        int t523 = i520;
        int c524 = 10;
        _Bool c525 = ((t523 < c524)) ? 1 : 0;
        if (!c525) break;
        std____cxx11__list_int__std__allocator_int_____push_back(&mylist516, &i520);
      for_step522: ;
        int t526 = i520;
        int u527 = t526 + 1;
        i520 = u527;
      }
    std____cxx11__list_int__std__allocator_int_____reverse(&mylist516);
    int c528 = 9;
    n518 = c528;
    char* cast529 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r530 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast529);
      struct std___List_iterator_int_ ref_tmp0531;
      struct std___List_iterator_int_ ref_tmp1532;
      struct std___List_iterator_int_ r533 = std____cxx11__list_int__std__allocator_int_____begin(&mylist516);
      ref_tmp0531 = r533;
      struct std___List_iterator_int_* r534 = std___List_iterator_int___operator_(&it517, &ref_tmp0531);
      while (1) {
        struct std___List_iterator_int_ r536 = std____cxx11__list_int__std__allocator_int_____end(&mylist516);
        ref_tmp1532 = r536;
        _Bool r537 = std__operator__(&it517, &ref_tmp1532);
        _Bool u538 = !r537;
        if (!u538) break;
        int* r539 = std___List_iterator_int___operator____const(&it517);
        int t540 = *r539;
        int t541 = n518;
        int u542 = t541 - 1;
        n518 = u542;
        _Bool c543 = ((t540 == t541)) ? 1 : 0;
        if (c543) {
        } else {
          char* cast544 = (char*)&(_str_1);
          char* c545 = _str_2;
          unsigned int c546 = 25;
          char* cast547 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast544, c545, c546, cast547);
        }
      for_step535: ;
        struct std___List_iterator_int_* r548 = std___List_iterator_int___operator__(&it517);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r549 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c550 = 0;
    __retval515 = c550;
    int t551 = __retval515;
    int ret_val552 = t551;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist516);
    }
    return ret_val552;
  int t553 = __retval515;
  return t553;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v554) {
bb555:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this556;
  this556 = v554;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t557 = this556;
  struct std__allocator_std___List_node_int__* base558 = (struct std__allocator_std___List_node_int__*)((char *)t557 + 0);
  std__allocator_std___List_node_int_____allocator(base558);
    std____detail___List_node_header___List_node_header(&t557->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v559) {
bb560:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this561;
  this561 = v559;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t562 = this561;
  {
    struct std__allocator_std___List_node_int__* base563 = (struct std__allocator_std___List_node_int__*)((char *)t562 + 0);
    std__allocator_std___List_node_int______allocator(base563);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v564) {
bb565:
  struct std____cxx11___List_base_int__std__allocator_int__* this566;
  this566 = v564;
  struct std____cxx11___List_base_int__std__allocator_int__* t567 = this566;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t567->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v568) {
bb569:
  struct std____detail___List_node_header* this570;
  struct std____detail___List_node_base* __retval571;
  this570 = v568;
  struct std____detail___List_node_header* t572 = this570;
  struct std____detail___List_node_base* base573 = (struct std____detail___List_node_base*)((char *)t572 + 0);
  __retval571 = base573;
  struct std____detail___List_node_base* t574 = __retval571;
  return t574;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v575) {
bb576:
  int* __location577;
  __location577 = v575;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v578, int* v579) {
bb580:
  struct std__allocator_std___List_node_int__* __a581;
  int* __p582;
  __a581 = v578;
  __p582 = v579;
  int* t583 = __p582;
  void_std__destroy_at_int_(t583);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v584) {
bb585:
  struct __gnu_cxx____aligned_membuf_int_* this586;
  void* __retval587;
  this586 = v584;
  struct __gnu_cxx____aligned_membuf_int_* t588 = this586;
  void* cast589 = (void*)&(t588->_M_storage);
  __retval587 = cast589;
  void* t590 = __retval587;
  return t590;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v591) {
bb592:
  struct __gnu_cxx____aligned_membuf_int_* this593;
  int* __retval594;
  this593 = v591;
  struct __gnu_cxx____aligned_membuf_int_* t595 = this593;
  void* r596 = __gnu_cxx____aligned_membuf_int____M_addr(t595);
  int* cast597 = (int*)r596;
  __retval594 = cast597;
  int* t598 = __retval594;
  return t598;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v599) {
bb600:
  struct std___List_node_int_* this601;
  int* __retval602;
  this601 = v599;
  struct std___List_node_int_* t603 = this601;
  int* r604 = __gnu_cxx____aligned_membuf_int____M_ptr(&t603->_M_storage);
  __retval602 = r604;
  int* t605 = __retval602;
  return t605;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb606:
  _Bool __retval607;
    _Bool c608 = 0;
    __retval607 = c608;
    _Bool t609 = __retval607;
    return t609;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v610, struct std___List_node_int_* v611, unsigned long v612) {
bb613:
  struct std____new_allocator_std___List_node_int__* this614;
  struct std___List_node_int_* __p615;
  unsigned long __n616;
  this614 = v610;
  __p615 = v611;
  __n616 = v612;
  struct std____new_allocator_std___List_node_int__* t617 = this614;
    unsigned long c618 = 8;
    unsigned long c619 = 16;
    _Bool c620 = ((c618 > c619)) ? 1 : 0;
    if (c620) {
      struct std___List_node_int_* t621 = __p615;
      void* cast622 = (void*)t621;
      unsigned long t623 = __n616;
      unsigned long c624 = 24;
      unsigned long b625 = t623 * c624;
      unsigned long c626 = 8;
      operator_delete_3(cast622, b625, c626);
      return;
    }
  struct std___List_node_int_* t627 = __p615;
  void* cast628 = (void*)t627;
  unsigned long t629 = __n616;
  unsigned long c630 = 24;
  unsigned long b631 = t629 * c630;
  operator_delete_2(cast628, b631);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v632, struct std___List_node_int_* v633, unsigned long v634) {
bb635:
  struct std__allocator_std___List_node_int__* this636;
  struct std___List_node_int_* __p637;
  unsigned long __n638;
  this636 = v632;
  __p637 = v633;
  __n638 = v634;
  struct std__allocator_std___List_node_int__* t639 = this636;
    _Bool r640 = std____is_constant_evaluated();
    if (r640) {
      struct std___List_node_int_* t641 = __p637;
      void* cast642 = (void*)t641;
      operator_delete(cast642);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base643 = (struct std____new_allocator_std___List_node_int__*)((char *)t639 + 0);
  struct std___List_node_int_* t644 = __p637;
  unsigned long t645 = __n638;
  std____new_allocator_std___List_node_int_____deallocate(base643, t644, t645);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v646, struct std___List_node_int_* v647, unsigned long v648) {
bb649:
  struct std__allocator_std___List_node_int__* __a650;
  struct std___List_node_int_* __p651;
  unsigned long __n652;
  __a650 = v646;
  __p651 = v647;
  __n652 = v648;
  struct std__allocator_std___List_node_int__* t653 = __a650;
  struct std___List_node_int_* t654 = __p651;
  unsigned long t655 = __n652;
  std__allocator_std___List_node_int_____deallocate(t653, t654, t655);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v656, struct std___List_node_int_* v657) {
bb658:
  struct std____cxx11___List_base_int__std__allocator_int__* this659;
  struct std___List_node_int_* __p660;
  this659 = v656;
  __p660 = v657;
  struct std____cxx11___List_base_int__std__allocator_int__* t661 = this659;
  struct std__allocator_std___List_node_int__* base662 = (struct std__allocator_std___List_node_int__*)((char *)&(t661->_M_impl) + 0);
  struct std___List_node_int_* t663 = __p660;
  unsigned long c664 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base662, t663, c664);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v665, struct std___List_node_int_* v666) {
bb667:
  struct std____cxx11___List_base_int__std__allocator_int__* this668;
  struct std___List_node_int_* __p669;
  this668 = v665;
  __p669 = v666;
  struct std____cxx11___List_base_int__std__allocator_int__* t670 = this668;
  struct std__allocator_std___List_node_int__* base671 = (struct std__allocator_std___List_node_int__*)((char *)&(t670->_M_impl) + 0);
  struct std___List_node_int_* t672 = __p669;
  int* r673 = std___List_node_int____M_valptr(t672);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base671, r673);
  struct std___List_node_int_* t674 = __p669;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t670, t674);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v675) {
bb676:
  struct std___List_node_int_* this677;
  struct std___List_node_int_* __retval678;
  this677 = v675;
  struct std___List_node_int_* t679 = this677;
  __retval678 = t679;
  struct std___List_node_int_* t680 = __retval678;
  return t680;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v681) {
bb682:
  struct std____cxx11___List_base_int__std__allocator_int__* this683;
  struct std____detail___List_node_base* __cur684;
  this683 = v681;
  struct std____cxx11___List_base_int__std__allocator_int__* t685 = this683;
  struct std____detail___List_node_base* base686 = (struct std____detail___List_node_base*)((char *)&(t685->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t687 = base686->_M_next;
  __cur684 = t687;
    while (1) {
      struct std____detail___List_node_base* t688 = __cur684;
      struct std____detail___List_node_base* r689 = std____detail___List_node_header___M_base(&t685->_M_impl._M_node);
      _Bool c690 = ((t688 != r689)) ? 1 : 0;
      if (!c690) break;
        struct std___List_node_int_* __tmp691;
        struct std____detail___List_node_base* t692 = __cur684;
        struct std___List_node_int_* derived693 = (struct std___List_node_int_*)((char *)t692 - 0);
        __tmp691 = derived693;
        struct std___List_node_int_* t694 = __tmp691;
        struct std____detail___List_node_base* base695 = (struct std____detail___List_node_base*)((char *)t694 + 0);
        struct std____detail___List_node_base* t696 = base695->_M_next;
        __cur684 = t696;
        struct std___List_node_int_* t697 = __tmp691;
        struct std___List_node_int_* r698 = std___List_node_int____M_node_ptr(t697);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t685, r698);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v699) {
bb700:
  struct std____cxx11___List_base_int__std__allocator_int__* this701;
  this701 = v699;
  struct std____cxx11___List_base_int__std__allocator_int__* t702 = this701;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t702);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t702->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v703) {
bb704:
  struct std____new_allocator_std___List_node_int__* this705;
  this705 = v703;
  struct std____new_allocator_std___List_node_int__* t706 = this705;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v707) {
bb708:
  struct std__allocator_std___List_node_int__* this709;
  this709 = v707;
  struct std__allocator_std___List_node_int__* t710 = this709;
  struct std____new_allocator_std___List_node_int__* base711 = (struct std____new_allocator_std___List_node_int__*)((char *)t710 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base711);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v712) {
bb713:
  struct std____detail___List_node_header* this714;
  this714 = v712;
  struct std____detail___List_node_header* t715 = this714;
  struct std____detail___List_node_base* base716 = (struct std____detail___List_node_base*)((char *)t715 + 0);
  struct std____detail___List_size* base717 = (struct std____detail___List_size*)((char *)t715 + 16);
  std____detail___List_node_header___M_init(t715);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v718) {
bb719:
  struct std__allocator_std___List_node_int__* this720;
  this720 = v718;
  struct std__allocator_std___List_node_int__* t721 = this720;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v722, struct std____detail___List_size* v723) {
bb724:
  struct std____detail___List_size* this725;
  struct std____detail___List_size* unnamed726;
  struct std____detail___List_size* __retval727;
  this725 = v722;
  unnamed726 = v723;
  struct std____detail___List_size* t728 = this725;
  struct std____detail___List_size* t729 = unnamed726;
  unsigned long t730 = t729->_M_size;
  t728->_M_size = t730;
  __retval727 = t728;
  struct std____detail___List_size* t731 = __retval727;
  return t731;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v732) {
bb733:
  struct std____detail___List_node_header* this734;
  struct std____detail___List_size ref_tmp0735;
  this734 = v732;
  struct std____detail___List_node_header* t736 = this734;
  struct std____detail___List_node_base* base737 = (struct std____detail___List_node_base*)((char *)t736 + 0);
  struct std____detail___List_node_base* base738 = (struct std____detail___List_node_base*)((char *)t736 + 0);
  base738->_M_prev = base737;
  struct std____detail___List_node_base* base739 = (struct std____detail___List_node_base*)((char *)t736 + 0);
  base739->_M_next = base737;
  struct std____detail___List_size* base740 = (struct std____detail___List_size*)((char *)t736 + 16);
  ref_tmp0735 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r741 = std____detail___List_size__operator_(base740, &ref_tmp0735);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v742, struct std____allocated_ptr_std__allocator_std___List_node_int___* v743) {
bb744:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this745;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd746;
  this745 = v742;
  __gd746 = v743;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t747 = this745;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t748 = __gd746;
  struct std__allocator_std___List_node_int__* t749 = t748->_M_alloc;
  t747->_M_alloc = t749;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t750 = __gd746;
  struct std___List_node_int_* t751 = t750->_M_ptr;
  t747->_M_ptr = t751;
  struct std___List_node_int_* c752 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t753 = __gd746;
  t753->_M_ptr = c752;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v754) {
bb755:
  struct std___List_node_int_* __ptr756;
  struct std___List_node_int_* __retval757;
  __ptr756 = v754;
  struct std___List_node_int_* t758 = __ptr756;
  __retval757 = t758;
  struct std___List_node_int_* t759 = __retval757;
  return t759;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v760) {
bb761:
  struct std___List_node_int_** __ptr762;
  struct std___List_node_int_* __retval763;
  __ptr762 = v760;
  struct std___List_node_int_** t764 = __ptr762;
  struct std___List_node_int_* t765 = *t764;
  struct std___List_node_int_* r766 = std___List_node_int___std__to_address_std___List_node_int___(t765);
  __retval763 = r766;
  struct std___List_node_int_* t767 = __retval763;
  return t767;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v768) {
bb769:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this770;
  struct std___List_node_int_* __retval771;
  this770 = v768;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t772 = this770;
  struct std___List_node_int_* r773 = auto_std____to_address_std___List_node_int___(&t772->_M_ptr);
  __retval771 = r773;
  struct std___List_node_int_* t774 = __retval771;
  return t774;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v775) {
bb776:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this777;
  _Bool __retval778;
  this777 = v775;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t779 = this777;
  struct std___List_node_int_* t780 = t779->_M_ptr;
  _Bool cast781 = (_Bool)t780;
  __retval778 = cast781;
  _Bool t782 = __retval778;
  return t782;
}

