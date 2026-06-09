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
char _str_1[2] = " ";
char _str_2[19] = "mylist.size() == 3";
char _str_3[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_clear_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[19] = "mylist.size() != 0";
char _str_5[19] = "mylist.size() == 2";
char _str_6[18] = "\nmylist contains:";
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
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
_Bool std__operator__(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11___List_base_int__std__allocator_int______M_init(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____clear(struct std____cxx11__list_int__std__allocator_int__* p0);
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

// function: _ZNSt7__cxx114listIiSaIiEE9push_backEOi
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
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_(t256, t259, t258);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v260, int v261) {
bb262:
  int __a263;
  int __b264;
  int __retval265;
  __a263 = v260;
  __b264 = v261;
  int t266 = __a263;
  int t267 = __b264;
  int b268 = t266 | t267;
  __retval265 = b268;
  int t269 = __retval265;
  return t269;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v270) {
bb271:
  struct std__basic_ios_char__std__char_traits_char__* this272;
  int __retval273;
  this272 = v270;
  struct std__basic_ios_char__std__char_traits_char__* t274 = this272;
  struct std__ios_base* base275 = (struct std__ios_base*)((char *)t274 + 0);
  int t276 = base275->_M_streambuf_state;
  __retval273 = t276;
  int t277 = __retval273;
  return t277;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v278, int v279) {
bb280:
  struct std__basic_ios_char__std__char_traits_char__* this281;
  int __state282;
  this281 = v278;
  __state282 = v279;
  struct std__basic_ios_char__std__char_traits_char__* t283 = this281;
  int r284 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t283);
  int t285 = __state282;
  int r286 = std__operator_(r284, t285);
  std__basic_ios_char__std__char_traits_char_____clear(t283, r286);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v287, char* v288) {
bb289:
  char* __c1290;
  char* __c2291;
  _Bool __retval292;
  __c1290 = v287;
  __c2291 = v288;
  char* t293 = __c1290;
  char t294 = *t293;
  int cast295 = (int)t294;
  char* t296 = __c2291;
  char t297 = *t296;
  int cast298 = (int)t297;
  _Bool c299 = ((cast295 == cast298)) ? 1 : 0;
  __retval292 = c299;
  _Bool t300 = __retval292;
  return t300;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v301) {
bb302:
  char* __p303;
  unsigned long __retval304;
  unsigned long __i305;
  __p303 = v301;
  unsigned long c306 = 0;
  __i305 = c306;
    char ref_tmp0307;
    while (1) {
      unsigned long t308 = __i305;
      char* t309 = __p303;
      char* ptr310 = &(t309)[t308];
      char c311 = 0;
      ref_tmp0307 = c311;
      _Bool r312 = __gnu_cxx__char_traits_char___eq(ptr310, &ref_tmp0307);
      _Bool u313 = !r312;
      if (!u313) break;
      unsigned long t314 = __i305;
      unsigned long u315 = t314 + 1;
      __i305 = u315;
    }
  unsigned long t316 = __i305;
  __retval304 = t316;
  unsigned long t317 = __retval304;
  return t317;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v318) {
bb319:
  char* __s320;
  unsigned long __retval321;
  __s320 = v318;
    _Bool r322 = std____is_constant_evaluated();
    if (r322) {
      char* t323 = __s320;
      unsigned long r324 = __gnu_cxx__char_traits_char___length(t323);
      __retval321 = r324;
      unsigned long t325 = __retval321;
      return t325;
    }
  char* t326 = __s320;
  unsigned long r327 = strlen(t326);
  __retval321 = r327;
  unsigned long t328 = __retval321;
  return t328;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v329, char* v330) {
bb331:
  struct std__basic_ostream_char__std__char_traits_char__* __out332;
  char* __s333;
  struct std__basic_ostream_char__std__char_traits_char__* __retval334;
  __out332 = v329;
  __s333 = v330;
    char* t335 = __s333;
    _Bool cast336 = (_Bool)t335;
    _Bool u337 = !cast336;
    if (u337) {
      struct std__basic_ostream_char__std__char_traits_char__* t338 = __out332;
      void** v339 = (void**)t338;
      void* v340 = *((void**)v339);
      unsigned char* cast341 = (unsigned char*)v340;
      long c342 = -24;
      unsigned char* ptr343 = &(cast341)[c342];
      long* cast344 = (long*)ptr343;
      long t345 = *cast344;
      unsigned char* cast346 = (unsigned char*)t338;
      unsigned char* ptr347 = &(cast346)[t345];
      struct std__basic_ostream_char__std__char_traits_char__* cast348 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr347;
      struct std__basic_ios_char__std__char_traits_char__* cast349 = (struct std__basic_ios_char__std__char_traits_char__*)cast348;
      int t350 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast349, t350);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t351 = __out332;
      char* t352 = __s333;
      char* t353 = __s333;
      unsigned long r354 = std__char_traits_char___length(t353);
      long cast355 = (long)r354;
      struct std__basic_ostream_char__std__char_traits_char__* r356 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t351, t352, cast355);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t357 = __out332;
  __retval334 = t357;
  struct std__basic_ostream_char__std__char_traits_char__* t358 = __retval334;
  return t358;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v359, struct std____detail___List_node_base* v360) {
bb361:
  struct std___List_iterator_int_* this362;
  struct std____detail___List_node_base* __x363;
  this362 = v359;
  __x363 = v360;
  struct std___List_iterator_int_* t364 = this362;
  struct std____detail___List_node_base* t365 = __x363;
  t364->_M_node = t365;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v366) {
bb367:
  struct std____cxx11__list_int__std__allocator_int__* this368;
  struct std___List_iterator_int_ __retval369;
  this368 = v366;
  struct std____cxx11__list_int__std__allocator_int__* t370 = this368;
  struct std____cxx11___List_base_int__std__allocator_int__* base371 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t370 + 0);
  struct std____detail___List_node_base* base372 = (struct std____detail___List_node_base*)((char *)&(base371->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t373 = base372->_M_next;
  std___List_iterator_int____List_iterator(&__retval369, t373);
  struct std___List_iterator_int_ t374 = __retval369;
  return t374;
}

// function: _ZNSt14_List_iteratorIiEaSEOS0_
struct std___List_iterator_int_* std___List_iterator_int___operator_(struct std___List_iterator_int_* v375, struct std___List_iterator_int_* v376) {
bb377:
  struct std___List_iterator_int_* this378;
  struct std___List_iterator_int_* unnamed379;
  struct std___List_iterator_int_* __retval380;
  this378 = v375;
  unnamed379 = v376;
  struct std___List_iterator_int_* t381 = this378;
  struct std___List_iterator_int_* t382 = unnamed379;
  struct std____detail___List_node_base* t383 = t382->_M_node;
  t381->_M_node = t383;
  __retval380 = t381;
  struct std___List_iterator_int_* t384 = __retval380;
  return t384;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator__(struct std___List_iterator_int_* v385, struct std___List_iterator_int_* v386) {
bb387:
  struct std___List_iterator_int_* __x388;
  struct std___List_iterator_int_* __y389;
  _Bool __retval390;
  __x388 = v385;
  __y389 = v386;
  struct std___List_iterator_int_* t391 = __x388;
  struct std____detail___List_node_base* t392 = t391->_M_node;
  struct std___List_iterator_int_* t393 = __y389;
  struct std____detail___List_node_base* t394 = t393->_M_node;
  _Bool c395 = ((t392 == t394)) ? 1 : 0;
  __retval390 = c395;
  _Bool t396 = __retval390;
  return t396;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v397) {
bb398:
  struct std____cxx11__list_int__std__allocator_int__* this399;
  struct std___List_iterator_int_ __retval400;
  this399 = v397;
  struct std____cxx11__list_int__std__allocator_int__* t401 = this399;
  struct std____cxx11___List_base_int__std__allocator_int__* base402 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t401 + 0);
  struct std____detail___List_node_base* r403 = std____detail___List_node_header___M_base(&base402->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval400, r403);
  struct std___List_iterator_int_ t404 = __retval400;
  return t404;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v405) {
bb406:
  struct std___List_iterator_int_* this407;
  int* __retval408;
  this407 = v405;
  struct std___List_iterator_int_* t409 = this407;
  struct std____detail___List_node_base* t410 = t409->_M_node;
  struct std___List_node_int_* derived411 = ((t410) ? (struct std___List_node_int_*)((char *)t410 - 0) : (struct std___List_node_int_*)0);
  int* r412 = std___List_node_int____M_valptr(derived411);
  __retval408 = r412;
  int* t413 = __retval408;
  return t413;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v414) {
bb415:
  struct std___List_iterator_int_* this416;
  struct std___List_iterator_int_* __retval417;
  this416 = v414;
  struct std___List_iterator_int_* t418 = this416;
  struct std____detail___List_node_base* t419 = t418->_M_node;
  struct std____detail___List_node_base* t420 = t419->_M_next;
  t418->_M_node = t420;
  __retval417 = t418;
  struct std___List_iterator_int_* t421 = __retval417;
  return t421;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v422) {
bb423:
  struct std____cxx11___List_base_int__std__allocator_int__* this424;
  unsigned long __retval425;
  this424 = v422;
  struct std____cxx11___List_base_int__std__allocator_int__* t426 = this424;
  struct std____detail___List_size* base427 = (struct std____detail___List_size*)((char *)&(t426->_M_impl._M_node) + 16);
  unsigned long t428 = base427->_M_size;
  __retval425 = t428;
  unsigned long t429 = __retval425;
  return t429;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v430) {
bb431:
  struct std____cxx11__list_int__std__allocator_int__* this432;
  unsigned long __retval433;
  this432 = v430;
  struct std____cxx11__list_int__std__allocator_int__* t434 = this432;
  struct std____cxx11___List_base_int__std__allocator_int__* base435 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t434 + 0);
  unsigned long r436 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base435);
  __retval433 = r436;
  unsigned long t437 = __retval433;
  return t437;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE7_M_initEv
void std____cxx11___List_base_int__std__allocator_int______M_init(struct std____cxx11___List_base_int__std__allocator_int__* v438) {
bb439:
  struct std____cxx11___List_base_int__std__allocator_int__* this440;
  this440 = v438;
  struct std____cxx11___List_base_int__std__allocator_int__* t441 = this440;
  std____detail___List_node_header___M_init(&t441->_M_impl._M_node);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5clearEv
void std____cxx11__list_int__std__allocator_int_____clear(struct std____cxx11__list_int__std__allocator_int__* v442) {
bb443:
  struct std____cxx11__list_int__std__allocator_int__* this444;
  this444 = v442;
  struct std____cxx11__list_int__std__allocator_int__* t445 = this444;
  struct std____cxx11___List_base_int__std__allocator_int__* base446 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t445 + 0);
  std____cxx11___List_base_int__std__allocator_int______M_clear(base446);
  struct std____cxx11___List_base_int__std__allocator_int__* base447 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t445 + 0);
  std____cxx11___List_base_int__std__allocator_int______M_init(base447);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v448, void* v449) {
bb450:
  struct std__basic_ostream_char__std__char_traits_char__* this451;
  void* __pf452;
  struct std__basic_ostream_char__std__char_traits_char__* __retval453;
  this451 = v448;
  __pf452 = v449;
  struct std__basic_ostream_char__std__char_traits_char__* t454 = this451;
  void* t455 = __pf452;
  struct std__basic_ostream_char__std__char_traits_char__* r456 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t455)(t454);
  __retval453 = r456;
  struct std__basic_ostream_char__std__char_traits_char__* t457 = __retval453;
  return t457;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v458) {
bb459:
  struct std__basic_ostream_char__std__char_traits_char__* __os460;
  struct std__basic_ostream_char__std__char_traits_char__* __retval461;
  __os460 = v458;
  struct std__basic_ostream_char__std__char_traits_char__* t462 = __os460;
  struct std__basic_ostream_char__std__char_traits_char__* r463 = std__ostream__flush(t462);
  __retval461 = r463;
  struct std__basic_ostream_char__std__char_traits_char__* t464 = __retval461;
  return t464;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v465) {
bb466:
  struct std__ctype_char_* __f467;
  struct std__ctype_char_* __retval468;
  __f467 = v465;
    struct std__ctype_char_* t469 = __f467;
    _Bool cast470 = (_Bool)t469;
    _Bool u471 = !cast470;
    if (u471) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t472 = __f467;
  __retval468 = t472;
  struct std__ctype_char_* t473 = __retval468;
  return t473;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v474, char v475) {
bb476:
  struct std__ctype_char_* this477;
  char __c478;
  char __retval479;
  this477 = v474;
  __c478 = v475;
  struct std__ctype_char_* t480 = this477;
    char t481 = t480->_M_widen_ok;
    _Bool cast482 = (_Bool)t481;
    if (cast482) {
      char t483 = __c478;
      unsigned char cast484 = (unsigned char)t483;
      unsigned long cast485 = (unsigned long)cast484;
      char t486 = t480->_M_widen[cast485];
      __retval479 = t486;
      char t487 = __retval479;
      return t487;
    }
  std__ctype_char____M_widen_init___const(t480);
  char t488 = __c478;
  void** v489 = (void**)t480;
  void* v490 = *((void**)v489);
  char vcall493 = (char)__VERIFIER_virtual_call_char_char(t480, 6, t488);
  __retval479 = vcall493;
  char t494 = __retval479;
  return t494;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v495, char v496) {
bb497:
  struct std__basic_ios_char__std__char_traits_char__* this498;
  char __c499;
  char __retval500;
  this498 = v495;
  __c499 = v496;
  struct std__basic_ios_char__std__char_traits_char__* t501 = this498;
  struct std__ctype_char_* t502 = t501->_M_ctype;
  struct std__ctype_char_* r503 = std__ctype_char__const__std____check_facet_std__ctype_char___(t502);
  char t504 = __c499;
  char r505 = std__ctype_char___widen_char__const(r503, t504);
  __retval500 = r505;
  char t506 = __retval500;
  return t506;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v507) {
bb508:
  struct std__basic_ostream_char__std__char_traits_char__* __os509;
  struct std__basic_ostream_char__std__char_traits_char__* __retval510;
  __os509 = v507;
  struct std__basic_ostream_char__std__char_traits_char__* t511 = __os509;
  struct std__basic_ostream_char__std__char_traits_char__* t512 = __os509;
  void** v513 = (void**)t512;
  void* v514 = *((void**)v513);
  unsigned char* cast515 = (unsigned char*)v514;
  long c516 = -24;
  unsigned char* ptr517 = &(cast515)[c516];
  long* cast518 = (long*)ptr517;
  long t519 = *cast518;
  unsigned char* cast520 = (unsigned char*)t512;
  unsigned char* ptr521 = &(cast520)[t519];
  struct std__basic_ostream_char__std__char_traits_char__* cast522 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr521;
  struct std__basic_ios_char__std__char_traits_char__* cast523 = (struct std__basic_ios_char__std__char_traits_char__*)cast522;
  char c524 = 10;
  char r525 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast523, c524);
  struct std__basic_ostream_char__std__char_traits_char__* r526 = std__ostream__put(t511, r525);
  struct std__basic_ostream_char__std__char_traits_char__* r527 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r526);
  __retval510 = r527;
  struct std__basic_ostream_char__std__char_traits_char__* t528 = __retval510;
  return t528;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v529) {
bb530:
  struct std____cxx11__list_int__std__allocator_int__* this531;
  this531 = v529;
  struct std____cxx11__list_int__std__allocator_int__* t532 = this531;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base533 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t532 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base533);
  }
  return;
}

// function: main
int main() {
bb534:
  int __retval535;
  struct std____cxx11__list_int__std__allocator_int__ mylist536;
  struct std___List_iterator_int_ it537;
  int ref_tmp0538;
  int ref_tmp1539;
  int ref_tmp2540;
  int ref_tmp5541;
  int ref_tmp6542;
  int c543 = 0;
  __retval535 = c543;
  std____cxx11__list_int__std__allocator_int_____list(&mylist536);
    std___List_iterator_int____List_iterator_2(&it537);
    int c544 = 100;
    ref_tmp0538 = c544;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist536, &ref_tmp0538);
    int c545 = 200;
    ref_tmp1539 = c545;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist536, &ref_tmp1539);
    int c546 = 300;
    ref_tmp2540 = c546;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist536, &ref_tmp2540);
    char* cast547 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r548 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast547);
      struct std___List_iterator_int_ ref_tmp3549;
      struct std___List_iterator_int_ ref_tmp4550;
      struct std___List_iterator_int_ r551 = std____cxx11__list_int__std__allocator_int_____begin(&mylist536);
      ref_tmp3549 = r551;
      struct std___List_iterator_int_* r552 = std___List_iterator_int___operator_(&it537, &ref_tmp3549);
      while (1) {
        struct std___List_iterator_int_ r554 = std____cxx11__list_int__std__allocator_int_____end(&mylist536);
        ref_tmp4550 = r554;
        _Bool r555 = std__operator__(&it537, &ref_tmp4550);
        _Bool u556 = !r555;
        if (!u556) break;
        char* cast557 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r558 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast557);
        int* r559 = std___List_iterator_int___operator____const(&it537);
        int t560 = *r559;
        struct std__basic_ostream_char__std__char_traits_char__* r561 = std__ostream__operator__(r558, t560);
      for_step553: ;
        struct std___List_iterator_int_* r562 = std___List_iterator_int___operator__(&it537);
      }
    unsigned long r563 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist536);
    unsigned long c564 = 3;
    _Bool c565 = ((r563 == c564)) ? 1 : 0;
    if (c565) {
    } else {
      char* cast566 = (char*)&(_str_2);
      char* c567 = _str_3;
      unsigned int c568 = 26;
      char* cast569 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast566, c567, c568, cast569);
    }
    std____cxx11__list_int__std__allocator_int_____clear(&mylist536);
    unsigned long r570 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist536);
    unsigned long c571 = 0;
    _Bool c572 = ((r570 != c571)) ? 1 : 0;
    if (c572) {
    } else {
      char* cast573 = (char*)&(_str_4);
      char* c574 = _str_3;
      unsigned int c575 = 28;
      char* cast576 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast573, c574, c575, cast576);
    }
    int c577 = 1101;
    ref_tmp5541 = c577;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist536, &ref_tmp5541);
    int c578 = 2202;
    ref_tmp6542 = c578;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist536, &ref_tmp6542);
    unsigned long r579 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist536);
    unsigned long c580 = 2;
    _Bool c581 = ((r579 == c580)) ? 1 : 0;
    if (c581) {
    } else {
      char* cast582 = (char*)&(_str_5);
      char* c583 = _str_3;
      unsigned int c584 = 31;
      char* cast585 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast582, c583, c584, cast585);
    }
    char* cast586 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r587 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast586);
      struct std___List_iterator_int_ ref_tmp7588;
      struct std___List_iterator_int_ ref_tmp8589;
      struct std___List_iterator_int_ r590 = std____cxx11__list_int__std__allocator_int_____begin(&mylist536);
      ref_tmp7588 = r590;
      struct std___List_iterator_int_* r591 = std___List_iterator_int___operator_(&it537, &ref_tmp7588);
      while (1) {
        struct std___List_iterator_int_ r593 = std____cxx11__list_int__std__allocator_int_____end(&mylist536);
        ref_tmp8589 = r593;
        _Bool r594 = std__operator__(&it537, &ref_tmp8589);
        _Bool u595 = !r594;
        if (!u595) break;
        char* cast596 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r597 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast596);
        int* r598 = std___List_iterator_int___operator____const(&it537);
        int t599 = *r598;
        struct std__basic_ostream_char__std__char_traits_char__* r600 = std__ostream__operator__(r597, t599);
      for_step592: ;
        struct std___List_iterator_int_* r601 = std___List_iterator_int___operator__(&it537);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r602 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c603 = 0;
    __retval535 = c603;
    int t604 = __retval535;
    int ret_val605 = t604;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist536);
    }
    return ret_val605;
  int t606 = __retval535;
  return t606;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v607) {
bb608:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this609;
  this609 = v607;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t610 = this609;
  struct std__allocator_std___List_node_int__* base611 = (struct std__allocator_std___List_node_int__*)((char *)t610 + 0);
  std__allocator_std___List_node_int_____allocator(base611);
    std____detail___List_node_header___List_node_header(&t610->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v612) {
bb613:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this614;
  this614 = v612;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t615 = this614;
  {
    struct std__allocator_std___List_node_int__* base616 = (struct std__allocator_std___List_node_int__*)((char *)t615 + 0);
    std__allocator_std___List_node_int______allocator(base616);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v617) {
bb618:
  struct std____cxx11___List_base_int__std__allocator_int__* this619;
  this619 = v617;
  struct std____cxx11___List_base_int__std__allocator_int__* t620 = this619;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t620->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v621) {
bb622:
  struct std____detail___List_node_header* this623;
  struct std____detail___List_node_base* __retval624;
  this623 = v621;
  struct std____detail___List_node_header* t625 = this623;
  struct std____detail___List_node_base* base626 = (struct std____detail___List_node_base*)((char *)t625 + 0);
  __retval624 = base626;
  struct std____detail___List_node_base* t627 = __retval624;
  return t627;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v628) {
bb629:
  int* __location630;
  __location630 = v628;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v631, int* v632) {
bb633:
  struct std__allocator_std___List_node_int__* __a634;
  int* __p635;
  __a634 = v631;
  __p635 = v632;
  int* t636 = __p635;
  void_std__destroy_at_int_(t636);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v637) {
bb638:
  struct __gnu_cxx____aligned_membuf_int_* this639;
  void* __retval640;
  this639 = v637;
  struct __gnu_cxx____aligned_membuf_int_* t641 = this639;
  void* cast642 = (void*)&(t641->_M_storage);
  __retval640 = cast642;
  void* t643 = __retval640;
  return t643;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v644) {
bb645:
  struct __gnu_cxx____aligned_membuf_int_* this646;
  int* __retval647;
  this646 = v644;
  struct __gnu_cxx____aligned_membuf_int_* t648 = this646;
  void* r649 = __gnu_cxx____aligned_membuf_int____M_addr(t648);
  int* cast650 = (int*)r649;
  __retval647 = cast650;
  int* t651 = __retval647;
  return t651;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v652) {
bb653:
  struct std___List_node_int_* this654;
  int* __retval655;
  this654 = v652;
  struct std___List_node_int_* t656 = this654;
  int* r657 = __gnu_cxx____aligned_membuf_int____M_ptr(&t656->_M_storage);
  __retval655 = r657;
  int* t658 = __retval655;
  return t658;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb659:
  _Bool __retval660;
    _Bool c661 = 0;
    __retval660 = c661;
    _Bool t662 = __retval660;
    return t662;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v663, struct std___List_node_int_* v664, unsigned long v665) {
bb666:
  struct std____new_allocator_std___List_node_int__* this667;
  struct std___List_node_int_* __p668;
  unsigned long __n669;
  this667 = v663;
  __p668 = v664;
  __n669 = v665;
  struct std____new_allocator_std___List_node_int__* t670 = this667;
    unsigned long c671 = 8;
    unsigned long c672 = 16;
    _Bool c673 = ((c671 > c672)) ? 1 : 0;
    if (c673) {
      struct std___List_node_int_* t674 = __p668;
      void* cast675 = (void*)t674;
      unsigned long t676 = __n669;
      unsigned long c677 = 24;
      unsigned long b678 = t676 * c677;
      unsigned long c679 = 8;
      operator_delete_3(cast675, b678, c679);
      return;
    }
  struct std___List_node_int_* t680 = __p668;
  void* cast681 = (void*)t680;
  unsigned long t682 = __n669;
  unsigned long c683 = 24;
  unsigned long b684 = t682 * c683;
  operator_delete_2(cast681, b684);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v685, struct std___List_node_int_* v686, unsigned long v687) {
bb688:
  struct std__allocator_std___List_node_int__* this689;
  struct std___List_node_int_* __p690;
  unsigned long __n691;
  this689 = v685;
  __p690 = v686;
  __n691 = v687;
  struct std__allocator_std___List_node_int__* t692 = this689;
    _Bool r693 = std____is_constant_evaluated();
    if (r693) {
      struct std___List_node_int_* t694 = __p690;
      void* cast695 = (void*)t694;
      operator_delete(cast695);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base696 = (struct std____new_allocator_std___List_node_int__*)((char *)t692 + 0);
  struct std___List_node_int_* t697 = __p690;
  unsigned long t698 = __n691;
  std____new_allocator_std___List_node_int_____deallocate(base696, t697, t698);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v699, struct std___List_node_int_* v700, unsigned long v701) {
bb702:
  struct std__allocator_std___List_node_int__* __a703;
  struct std___List_node_int_* __p704;
  unsigned long __n705;
  __a703 = v699;
  __p704 = v700;
  __n705 = v701;
  struct std__allocator_std___List_node_int__* t706 = __a703;
  struct std___List_node_int_* t707 = __p704;
  unsigned long t708 = __n705;
  std__allocator_std___List_node_int_____deallocate(t706, t707, t708);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v709, struct std___List_node_int_* v710) {
bb711:
  struct std____cxx11___List_base_int__std__allocator_int__* this712;
  struct std___List_node_int_* __p713;
  this712 = v709;
  __p713 = v710;
  struct std____cxx11___List_base_int__std__allocator_int__* t714 = this712;
  struct std__allocator_std___List_node_int__* base715 = (struct std__allocator_std___List_node_int__*)((char *)&(t714->_M_impl) + 0);
  struct std___List_node_int_* t716 = __p713;
  unsigned long c717 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base715, t716, c717);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v718, struct std___List_node_int_* v719) {
bb720:
  struct std____cxx11___List_base_int__std__allocator_int__* this721;
  struct std___List_node_int_* __p722;
  this721 = v718;
  __p722 = v719;
  struct std____cxx11___List_base_int__std__allocator_int__* t723 = this721;
  struct std__allocator_std___List_node_int__* base724 = (struct std__allocator_std___List_node_int__*)((char *)&(t723->_M_impl) + 0);
  struct std___List_node_int_* t725 = __p722;
  int* r726 = std___List_node_int____M_valptr(t725);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base724, r726);
  struct std___List_node_int_* t727 = __p722;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t723, t727);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v728) {
bb729:
  struct std___List_node_int_* this730;
  struct std___List_node_int_* __retval731;
  this730 = v728;
  struct std___List_node_int_* t732 = this730;
  __retval731 = t732;
  struct std___List_node_int_* t733 = __retval731;
  return t733;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v734) {
bb735:
  struct std____cxx11___List_base_int__std__allocator_int__* this736;
  struct std____detail___List_node_base* __cur737;
  this736 = v734;
  struct std____cxx11___List_base_int__std__allocator_int__* t738 = this736;
  struct std____detail___List_node_base* base739 = (struct std____detail___List_node_base*)((char *)&(t738->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t740 = base739->_M_next;
  __cur737 = t740;
    while (1) {
      struct std____detail___List_node_base* t741 = __cur737;
      struct std____detail___List_node_base* r742 = std____detail___List_node_header___M_base(&t738->_M_impl._M_node);
      _Bool c743 = ((t741 != r742)) ? 1 : 0;
      if (!c743) break;
        struct std___List_node_int_* __tmp744;
        struct std____detail___List_node_base* t745 = __cur737;
        struct std___List_node_int_* derived746 = (struct std___List_node_int_*)((char *)t745 - 0);
        __tmp744 = derived746;
        struct std___List_node_int_* t747 = __tmp744;
        struct std____detail___List_node_base* base748 = (struct std____detail___List_node_base*)((char *)t747 + 0);
        struct std____detail___List_node_base* t749 = base748->_M_next;
        __cur737 = t749;
        struct std___List_node_int_* t750 = __tmp744;
        struct std___List_node_int_* r751 = std___List_node_int____M_node_ptr(t750);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t738, r751);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v752) {
bb753:
  struct std____cxx11___List_base_int__std__allocator_int__* this754;
  this754 = v752;
  struct std____cxx11___List_base_int__std__allocator_int__* t755 = this754;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t755);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t755->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v756) {
bb757:
  struct std____new_allocator_std___List_node_int__* this758;
  this758 = v756;
  struct std____new_allocator_std___List_node_int__* t759 = this758;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v760) {
bb761:
  struct std__allocator_std___List_node_int__* this762;
  this762 = v760;
  struct std__allocator_std___List_node_int__* t763 = this762;
  struct std____new_allocator_std___List_node_int__* base764 = (struct std____new_allocator_std___List_node_int__*)((char *)t763 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base764);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v765) {
bb766:
  struct std____detail___List_node_header* this767;
  this767 = v765;
  struct std____detail___List_node_header* t768 = this767;
  struct std____detail___List_node_base* base769 = (struct std____detail___List_node_base*)((char *)t768 + 0);
  struct std____detail___List_size* base770 = (struct std____detail___List_size*)((char *)t768 + 16);
  std____detail___List_node_header___M_init(t768);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v771) {
bb772:
  struct std__allocator_std___List_node_int__* this773;
  this773 = v771;
  struct std__allocator_std___List_node_int__* t774 = this773;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v775, struct std____detail___List_size* v776) {
bb777:
  struct std____detail___List_size* this778;
  struct std____detail___List_size* unnamed779;
  struct std____detail___List_size* __retval780;
  this778 = v775;
  unnamed779 = v776;
  struct std____detail___List_size* t781 = this778;
  struct std____detail___List_size* t782 = unnamed779;
  unsigned long t783 = t782->_M_size;
  t781->_M_size = t783;
  __retval780 = t781;
  struct std____detail___List_size* t784 = __retval780;
  return t784;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v785) {
bb786:
  struct std____detail___List_node_header* this787;
  struct std____detail___List_size ref_tmp0788;
  this787 = v785;
  struct std____detail___List_node_header* t789 = this787;
  struct std____detail___List_node_base* base790 = (struct std____detail___List_node_base*)((char *)t789 + 0);
  struct std____detail___List_node_base* base791 = (struct std____detail___List_node_base*)((char *)t789 + 0);
  base791->_M_prev = base790;
  struct std____detail___List_node_base* base792 = (struct std____detail___List_node_base*)((char *)t789 + 0);
  base792->_M_next = base790;
  struct std____detail___List_size* base793 = (struct std____detail___List_size*)((char *)t789 + 16);
  ref_tmp0788 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r794 = std____detail___List_size__operator_(base793, &ref_tmp0788);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v795, struct std____allocated_ptr_std__allocator_std___List_node_int___* v796) {
bb797:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this798;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd799;
  this798 = v795;
  __gd799 = v796;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t800 = this798;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t801 = __gd799;
  struct std__allocator_std___List_node_int__* t802 = t801->_M_alloc;
  t800->_M_alloc = t802;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t803 = __gd799;
  struct std___List_node_int_* t804 = t803->_M_ptr;
  t800->_M_ptr = t804;
  struct std___List_node_int_* c805 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t806 = __gd799;
  t806->_M_ptr = c805;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v807) {
bb808:
  struct std___List_node_int_* __ptr809;
  struct std___List_node_int_* __retval810;
  __ptr809 = v807;
  struct std___List_node_int_* t811 = __ptr809;
  __retval810 = t811;
  struct std___List_node_int_* t812 = __retval810;
  return t812;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v813) {
bb814:
  struct std___List_node_int_** __ptr815;
  struct std___List_node_int_* __retval816;
  __ptr815 = v813;
  struct std___List_node_int_** t817 = __ptr815;
  struct std___List_node_int_* t818 = *t817;
  struct std___List_node_int_* r819 = std___List_node_int___std__to_address_std___List_node_int___(t818);
  __retval816 = r819;
  struct std___List_node_int_* t820 = __retval816;
  return t820;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v821) {
bb822:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this823;
  struct std___List_node_int_* __retval824;
  this823 = v821;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t825 = this823;
  struct std___List_node_int_* r826 = auto_std____to_address_std___List_node_int___(&t825->_M_ptr);
  __retval824 = r826;
  struct std___List_node_int_* t827 = __retval824;
  return t827;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v828) {
bb829:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this830;
  _Bool __retval831;
  this830 = v828;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t832 = this830;
  struct std___List_node_int_* t833 = t832->_M_ptr;
  _Bool cast834 = (_Bool)t833;
  __retval831 = cast834;
  _Bool t835 = __retval831;
  return t835;
}

