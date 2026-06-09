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
char _str[46] = "Please enter some integers (enter 0 to end):\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[15] = "mylist stores ";
char _str_2[11] = " numbers.\n";
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
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
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
  int t30 = __state27;
  int r31 = std__operator_(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
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
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v104) {
bb105:
  struct std____cxx11___List_base_int__std__allocator_int__* this106;
  struct std__allocator_std___List_node_int__* __retval107;
  this106 = v104;
  struct std____cxx11___List_base_int__std__allocator_int__* t108 = this106;
  struct std__allocator_std___List_node_int__* base109 = (struct std__allocator_std___List_node_int__*)((char *)&(t108->_M_impl) + 0);
  __retval107 = base109;
  struct std__allocator_std___List_node_int__* t110 = __retval107;
  return t110;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v111) {
bb112:
  struct std____new_allocator_std___List_node_int__* this113;
  unsigned long __retval114;
  this113 = v111;
  struct std____new_allocator_std___List_node_int__* t115 = this113;
  unsigned long c116 = 9223372036854775807;
  unsigned long c117 = 24;
  unsigned long b118 = c116 / c117;
  __retval114 = b118;
  unsigned long t119 = __retval114;
  return t119;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v120, unsigned long v121, void* v122) {
bb123:
  struct std____new_allocator_std___List_node_int__* this124;
  unsigned long __n125;
  void* unnamed126;
  struct std___List_node_int_* __retval127;
  this124 = v120;
  __n125 = v121;
  unnamed126 = v122;
  struct std____new_allocator_std___List_node_int__* t128 = this124;
    unsigned long t129 = __n125;
    unsigned long r130 = std____new_allocator_std___List_node_int______M_max_size___const(t128);
    _Bool c131 = ((t129 > r130)) ? 1 : 0;
    if (c131) {
        unsigned long t132 = __n125;
        unsigned long c133 = -1;
        unsigned long c134 = 24;
        unsigned long b135 = c133 / c134;
        _Bool c136 = ((t132 > b135)) ? 1 : 0;
        if (c136) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c137 = 8;
    unsigned long c138 = 16;
    _Bool c139 = ((c137 > c138)) ? 1 : 0;
    if (c139) {
      unsigned long __al140;
      unsigned long c141 = 8;
      __al140 = c141;
      unsigned long t142 = __n125;
      unsigned long c143 = 24;
      unsigned long b144 = t142 * c143;
      unsigned long t145 = __al140;
      void* r146 = operator_new_2(b144, t145);
      struct std___List_node_int_* cast147 = (struct std___List_node_int_*)r146;
      __retval127 = cast147;
      struct std___List_node_int_* t148 = __retval127;
      return t148;
    }
  unsigned long t149 = __n125;
  unsigned long c150 = 24;
  unsigned long b151 = t149 * c150;
  void* r152 = operator_new(b151);
  struct std___List_node_int_* cast153 = (struct std___List_node_int_*)r152;
  __retval127 = cast153;
  struct std___List_node_int_* t154 = __retval127;
  return t154;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v155, unsigned long v156) {
bb157:
  struct std__allocator_std___List_node_int__* this158;
  unsigned long __n159;
  struct std___List_node_int_* __retval160;
  this158 = v155;
  __n159 = v156;
  struct std__allocator_std___List_node_int__* t161 = this158;
    _Bool r162 = std____is_constant_evaluated();
    if (r162) {
        unsigned long t163 = __n159;
        unsigned long c164 = 24;
        unsigned long ovr165;
        _Bool ovf166 = __builtin_mul_overflow(t163, c164, &ovr165);
        __n159 = ovr165;
        if (ovf166) {
          std____throw_bad_array_new_length();
        }
      unsigned long t167 = __n159;
      void* r168 = operator_new(t167);
      struct std___List_node_int_* cast169 = (struct std___List_node_int_*)r168;
      __retval160 = cast169;
      struct std___List_node_int_* t170 = __retval160;
      return t170;
    }
  struct std____new_allocator_std___List_node_int__* base171 = (struct std____new_allocator_std___List_node_int__*)((char *)t161 + 0);
  unsigned long t172 = __n159;
  void* c173 = ((void*)0);
  struct std___List_node_int_* r174 = std____new_allocator_std___List_node_int_____allocate(base171, t172, c173);
  __retval160 = r174;
  struct std___List_node_int_* t175 = __retval160;
  return t175;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v176, unsigned long v177) {
bb178:
  struct std__allocator_std___List_node_int__* __a179;
  unsigned long __n180;
  struct std___List_node_int_* __retval181;
  __a179 = v176;
  __n180 = v177;
  struct std__allocator_std___List_node_int__* t182 = __a179;
  unsigned long t183 = __n180;
  struct std___List_node_int_* r184 = std__allocator_std___List_node_int_____allocate(t182, t183);
  __retval181 = r184;
  struct std___List_node_int_* t185 = __retval181;
  return t185;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v186, struct std__allocator_std___List_node_int__* v187, struct std___List_node_int_* v188) {
bb189:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this190;
  struct std__allocator_std___List_node_int__* __a191;
  struct std___List_node_int_* __ptr192;
  this190 = v186;
  __a191 = v187;
  __ptr192 = v188;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t193 = this190;
  struct std__allocator_std___List_node_int__* t194 = __a191;
  t193->_M_alloc = t194;
  struct std___List_node_int_* t195 = __ptr192;
  t193->_M_ptr = t195;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v196) {
bb197:
  struct std__allocator_std___List_node_int__* __a198;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval199;
  __a198 = v196;
  struct std__allocator_std___List_node_int__* t200 = __a198;
  struct std__allocator_std___List_node_int__* t201 = __a198;
  unsigned long c202 = 1;
  struct std___List_node_int_* r203 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t201, c202);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval199, t200, r203);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t204 = __retval199;
  return t204;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v205, struct std____allocated_ptr_std__allocator_std___List_node_int___* v206) {
bb207:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this208;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr209;
  this208 = v205;
  __ptr209 = v206;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t210 = this208;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base211 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t210 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t212 = __ptr209;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base211, t212);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base213 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t210 + 0);
    struct std___List_node_int_* r214 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base213);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v215) {
bb216:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this217;
  this217 = v215;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t218 = this217;
    struct std___List_node_int_* t219 = t218->_M_ptr;
    struct std___List_node_int_* c220 = ((void*)0);
    _Bool c221 = ((t219 != c220)) ? 1 : 0;
    if (c221) {
      struct std__allocator_std___List_node_int__* t222 = t218->_M_alloc;
      struct std___List_node_int_* t223 = t218->_M_ptr;
      unsigned long c224 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t222, t223, c224);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v225) {
bb226:
  struct std__allocator_std___List_node_int__* __a227;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval228;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0229;
  __a227 = v225;
  struct std__allocator_std___List_node_int__* t230 = __a227;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r231 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t230);
  ref_tmp0229 = r231;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval228, &ref_tmp0229);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0229);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t232 = __retval228;
  return t232;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v233, int* v234) {
bb235:
  int* __location236;
  int* __args237;
  int* __retval238;
  void* __loc239;
  __location236 = v233;
  __args237 = v234;
  int* t240 = __location236;
  void* cast241 = (void*)t240;
  __loc239 = cast241;
    void* t242 = __loc239;
    int* cast243 = (int*)t242;
    int* t244 = __args237;
    int t245 = *t244;
    *cast243 = t245;
    __retval238 = cast243;
    int* t246 = __retval238;
    return t246;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v247, int* v248, int* v249) {
bb250:
  struct std__allocator_std___List_node_int__* __a251;
  int* __p252;
  int* __args253;
  __a251 = v247;
  __p252 = v248;
  __args253 = v249;
  int* t254 = __p252;
  int* t255 = __args253;
  int* r256 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t254, t255);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v257) {
bb258:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this259;
  struct std___List_node_int_* __retval260;
  this259 = v257;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t261 = this259;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base262 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t261 + 0);
  struct std___List_node_int_* r263 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base262);
  __retval260 = r263;
  struct std___List_node_int_* t264 = __retval260;
  return t264;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v265, void** v266) {
bb267:
  struct std___List_node_int_** __obj268;
  void** __new_val269;
  struct std___List_node_int_* __retval270;
  struct std___List_node_int_* __old_val271;
  __obj268 = v265;
  __new_val269 = v266;
  struct std___List_node_int_** t272 = __obj268;
  struct std___List_node_int_* t273 = *t272;
  __old_val271 = t273;
  void** t274 = __new_val269;
  struct std___List_node_int_* c275 = ((void*)0);
  struct std___List_node_int_** t276 = __obj268;
  *t276 = c275;
  struct std___List_node_int_* t277 = __old_val271;
  __retval270 = t277;
  struct std___List_node_int_* t278 = __retval270;
  return t278;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v279) {
bb280:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this281;
  struct std___List_node_int_* __retval282;
  void* ref_tmp0283;
  this281 = v279;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t284 = this281;
  void* c285 = ((void*)0);
  ref_tmp0283 = c285;
  struct std___List_node_int_* r286 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t284->_M_ptr, &ref_tmp0283);
  __retval282 = r286;
  struct std___List_node_int_* t287 = __retval282;
  return t287;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v288) {
bb289:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this290;
  this290 = v288;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t291 = this290;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base292 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t291 + 0);
      _Bool r293 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base292);
      if (r293) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base294 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t291 + 0);
        struct std___List_node_int_* r295 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base294);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base296 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t291 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base296);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v297, int* v298) {
bb299:
  struct std____cxx11__list_int__std__allocator_int__* this300;
  int* __args301;
  struct std___List_node_int_* __retval302;
  struct std__allocator_std___List_node_int__* __alloc303;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard304;
  this300 = v297;
  __args301 = v298;
  struct std____cxx11__list_int__std__allocator_int__* t305 = this300;
  struct std____cxx11___List_base_int__std__allocator_int__* base306 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t305 + 0);
  struct std__allocator_std___List_node_int__* r307 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base306);
  __alloc303 = r307;
  struct std__allocator_std___List_node_int__* t308 = __alloc303;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r309 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t308);
  __guard304 = r309;
    struct std__allocator_std___List_node_int__* t310 = __alloc303;
    struct std___List_node_int_* r311 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard304);
    int* r312 = std___List_node_int____M_valptr(r311);
    int* t313 = __args301;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t310, r312, t313);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base314 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard304) + 0);
    struct std___List_node_int_* r315 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base314);
    __retval302 = r315;
    struct std___List_node_int_* t316 = __retval302;
    struct std___List_node_int_* ret_val317 = t316;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard304);
    }
    return ret_val317;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v318, unsigned long v319) {
bb320:
  struct std____cxx11___List_base_int__std__allocator_int__* this321;
  unsigned long __n322;
  this321 = v318;
  __n322 = v319;
  struct std____cxx11___List_base_int__std__allocator_int__* t323 = this321;
  unsigned long t324 = __n322;
  struct std____detail___List_size* base325 = (struct std____detail___List_size*)((char *)&(t323->_M_impl._M_node) + 16);
  unsigned long t326 = base325->_M_size;
  unsigned long b327 = t326 + t324;
  base325->_M_size = b327;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v328, struct std___List_iterator_int_ v329, int* v330) {
bb331:
  struct std____cxx11__list_int__std__allocator_int__* this332;
  struct std___List_iterator_int_ __position333;
  int* __args334;
  struct std___List_node_int_* __tmp335;
  this332 = v328;
  __position333 = v329;
  __args334 = v330;
  struct std____cxx11__list_int__std__allocator_int__* t336 = this332;
  int* t337 = __args334;
  struct std___List_node_int_* r338 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t336, t337);
  __tmp335 = r338;
  struct std___List_node_int_* t339 = __tmp335;
  struct std____detail___List_node_base* base340 = (struct std____detail___List_node_base*)((char *)t339 + 0);
  struct std____detail___List_node_base* t341 = __position333._M_node;
  std____detail___List_node_base___M_hook(base340, t341);
  struct std____cxx11___List_base_int__std__allocator_int__* base342 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t336 + 0);
  unsigned long c343 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base342, c343);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v344, struct std____detail___List_node_base* v345) {
bb346:
  struct std___List_iterator_int_* this347;
  struct std____detail___List_node_base* __x348;
  this347 = v344;
  __x348 = v345;
  struct std___List_iterator_int_* t349 = this347;
  struct std____detail___List_node_base* t350 = __x348;
  t349->_M_node = t350;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v351) {
bb352:
  struct std____cxx11__list_int__std__allocator_int__* this353;
  struct std___List_iterator_int_ __retval354;
  this353 = v351;
  struct std____cxx11__list_int__std__allocator_int__* t355 = this353;
  struct std____cxx11___List_base_int__std__allocator_int__* base356 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t355 + 0);
  struct std____detail___List_node_base* r357 = std____detail___List_node_header___M_base(&base356->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval354, r357);
  struct std___List_iterator_int_ t358 = __retval354;
  return t358;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v359, int* v360) {
bb361:
  struct std____cxx11__list_int__std__allocator_int__* this362;
  int* __x363;
  struct std___List_iterator_int_ agg_tmp0364;
  this362 = v359;
  __x363 = v360;
  struct std____cxx11__list_int__std__allocator_int__* t365 = this362;
  struct std___List_iterator_int_ r366 = std____cxx11__list_int__std__allocator_int_____end(t365);
  agg_tmp0364 = r366;
  int* t367 = __x363;
  struct std___List_iterator_int_ t368 = agg_tmp0364;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t365, t368, t367);
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v369) {
bb370:
  struct std____cxx11___List_base_int__std__allocator_int__* this371;
  unsigned long __retval372;
  this371 = v369;
  struct std____cxx11___List_base_int__std__allocator_int__* t373 = this371;
  struct std____detail___List_size* base374 = (struct std____detail___List_size*)((char *)&(t373->_M_impl._M_node) + 16);
  unsigned long t375 = base374->_M_size;
  __retval372 = t375;
  unsigned long t376 = __retval372;
  return t376;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v377) {
bb378:
  struct std____cxx11__list_int__std__allocator_int__* this379;
  unsigned long __retval380;
  this379 = v377;
  struct std____cxx11__list_int__std__allocator_int__* t381 = this379;
  struct std____cxx11___List_base_int__std__allocator_int__* base382 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t381 + 0);
  unsigned long r383 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base382);
  __retval380 = r383;
  unsigned long t384 = __retval380;
  return t384;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v385) {
bb386:
  struct std____cxx11__list_int__std__allocator_int__* this387;
  this387 = v385;
  struct std____cxx11__list_int__std__allocator_int__* t388 = this387;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base389 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t388 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base389);
  }
  return;
}

// function: main
int main() {
bb390:
  int __retval391;
  struct std____cxx11__list_int__std__allocator_int__ mylist392;
  int myint393;
  int c394 = 0;
  __retval391 = c394;
  std____cxx11__list_int__std__allocator_int_____list(&mylist392);
    char* cast395 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r396 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast395);
      do {
          struct std__basic_istream_char__std__char_traits_char__* r397 = std__istream__operator__(&_ZSt3cin, &myint393);
          std____cxx11__list_int__std__allocator_int_____push_back(&mylist392, &myint393);
        int t398 = myint393;
        _Bool cast399 = (_Bool)t398;
        if (!cast399) break;
      } while (1);
    char* cast400 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r401 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast400);
    unsigned long r402 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist392);
    int cast403 = (int)r402;
    struct std__basic_ostream_char__std__char_traits_char__* r404 = std__ostream__operator__(r401, cast403);
    char* cast405 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r406 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r404, cast405);
    int c407 = 0;
    __retval391 = c407;
    int t408 = __retval391;
    int ret_val409 = t408;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist392);
    }
    return ret_val409;
  int t410 = __retval391;
  return t410;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v411) {
bb412:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this413;
  this413 = v411;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t414 = this413;
  struct std__allocator_std___List_node_int__* base415 = (struct std__allocator_std___List_node_int__*)((char *)t414 + 0);
  std__allocator_std___List_node_int_____allocator(base415);
    std____detail___List_node_header___List_node_header(&t414->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v416) {
bb417:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this418;
  this418 = v416;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t419 = this418;
  {
    struct std__allocator_std___List_node_int__* base420 = (struct std__allocator_std___List_node_int__*)((char *)t419 + 0);
    std__allocator_std___List_node_int______allocator(base420);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v421) {
bb422:
  struct std____cxx11___List_base_int__std__allocator_int__* this423;
  this423 = v421;
  struct std____cxx11___List_base_int__std__allocator_int__* t424 = this423;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t424->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v425) {
bb426:
  struct std____detail___List_node_header* this427;
  struct std____detail___List_node_base* __retval428;
  this427 = v425;
  struct std____detail___List_node_header* t429 = this427;
  struct std____detail___List_node_base* base430 = (struct std____detail___List_node_base*)((char *)t429 + 0);
  __retval428 = base430;
  struct std____detail___List_node_base* t431 = __retval428;
  return t431;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v432) {
bb433:
  int* __location434;
  __location434 = v432;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v435, int* v436) {
bb437:
  struct std__allocator_std___List_node_int__* __a438;
  int* __p439;
  __a438 = v435;
  __p439 = v436;
  int* t440 = __p439;
  void_std__destroy_at_int_(t440);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v441) {
bb442:
  struct __gnu_cxx____aligned_membuf_int_* this443;
  void* __retval444;
  this443 = v441;
  struct __gnu_cxx____aligned_membuf_int_* t445 = this443;
  void* cast446 = (void*)&(t445->_M_storage);
  __retval444 = cast446;
  void* t447 = __retval444;
  return t447;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v448) {
bb449:
  struct __gnu_cxx____aligned_membuf_int_* this450;
  int* __retval451;
  this450 = v448;
  struct __gnu_cxx____aligned_membuf_int_* t452 = this450;
  void* r453 = __gnu_cxx____aligned_membuf_int____M_addr(t452);
  int* cast454 = (int*)r453;
  __retval451 = cast454;
  int* t455 = __retval451;
  return t455;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v456) {
bb457:
  struct std___List_node_int_* this458;
  int* __retval459;
  this458 = v456;
  struct std___List_node_int_* t460 = this458;
  int* r461 = __gnu_cxx____aligned_membuf_int____M_ptr(&t460->_M_storage);
  __retval459 = r461;
  int* t462 = __retval459;
  return t462;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb463:
  _Bool __retval464;
    _Bool c465 = 0;
    __retval464 = c465;
    _Bool t466 = __retval464;
    return t466;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v467, struct std___List_node_int_* v468, unsigned long v469) {
bb470:
  struct std____new_allocator_std___List_node_int__* this471;
  struct std___List_node_int_* __p472;
  unsigned long __n473;
  this471 = v467;
  __p472 = v468;
  __n473 = v469;
  struct std____new_allocator_std___List_node_int__* t474 = this471;
    unsigned long c475 = 8;
    unsigned long c476 = 16;
    _Bool c477 = ((c475 > c476)) ? 1 : 0;
    if (c477) {
      struct std___List_node_int_* t478 = __p472;
      void* cast479 = (void*)t478;
      unsigned long t480 = __n473;
      unsigned long c481 = 24;
      unsigned long b482 = t480 * c481;
      unsigned long c483 = 8;
      operator_delete_3(cast479, b482, c483);
      return;
    }
  struct std___List_node_int_* t484 = __p472;
  void* cast485 = (void*)t484;
  unsigned long t486 = __n473;
  unsigned long c487 = 24;
  unsigned long b488 = t486 * c487;
  operator_delete_2(cast485, b488);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v489, struct std___List_node_int_* v490, unsigned long v491) {
bb492:
  struct std__allocator_std___List_node_int__* this493;
  struct std___List_node_int_* __p494;
  unsigned long __n495;
  this493 = v489;
  __p494 = v490;
  __n495 = v491;
  struct std__allocator_std___List_node_int__* t496 = this493;
    _Bool r497 = std____is_constant_evaluated();
    if (r497) {
      struct std___List_node_int_* t498 = __p494;
      void* cast499 = (void*)t498;
      operator_delete(cast499);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base500 = (struct std____new_allocator_std___List_node_int__*)((char *)t496 + 0);
  struct std___List_node_int_* t501 = __p494;
  unsigned long t502 = __n495;
  std____new_allocator_std___List_node_int_____deallocate(base500, t501, t502);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v503, struct std___List_node_int_* v504, unsigned long v505) {
bb506:
  struct std__allocator_std___List_node_int__* __a507;
  struct std___List_node_int_* __p508;
  unsigned long __n509;
  __a507 = v503;
  __p508 = v504;
  __n509 = v505;
  struct std__allocator_std___List_node_int__* t510 = __a507;
  struct std___List_node_int_* t511 = __p508;
  unsigned long t512 = __n509;
  std__allocator_std___List_node_int_____deallocate(t510, t511, t512);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v513, struct std___List_node_int_* v514) {
bb515:
  struct std____cxx11___List_base_int__std__allocator_int__* this516;
  struct std___List_node_int_* __p517;
  this516 = v513;
  __p517 = v514;
  struct std____cxx11___List_base_int__std__allocator_int__* t518 = this516;
  struct std__allocator_std___List_node_int__* base519 = (struct std__allocator_std___List_node_int__*)((char *)&(t518->_M_impl) + 0);
  struct std___List_node_int_* t520 = __p517;
  unsigned long c521 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base519, t520, c521);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v522, struct std___List_node_int_* v523) {
bb524:
  struct std____cxx11___List_base_int__std__allocator_int__* this525;
  struct std___List_node_int_* __p526;
  this525 = v522;
  __p526 = v523;
  struct std____cxx11___List_base_int__std__allocator_int__* t527 = this525;
  struct std__allocator_std___List_node_int__* base528 = (struct std__allocator_std___List_node_int__*)((char *)&(t527->_M_impl) + 0);
  struct std___List_node_int_* t529 = __p526;
  int* r530 = std___List_node_int____M_valptr(t529);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base528, r530);
  struct std___List_node_int_* t531 = __p526;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t527, t531);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v532) {
bb533:
  struct std___List_node_int_* this534;
  struct std___List_node_int_* __retval535;
  this534 = v532;
  struct std___List_node_int_* t536 = this534;
  __retval535 = t536;
  struct std___List_node_int_* t537 = __retval535;
  return t537;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v538) {
bb539:
  struct std____cxx11___List_base_int__std__allocator_int__* this540;
  struct std____detail___List_node_base* __cur541;
  this540 = v538;
  struct std____cxx11___List_base_int__std__allocator_int__* t542 = this540;
  struct std____detail___List_node_base* base543 = (struct std____detail___List_node_base*)((char *)&(t542->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t544 = base543->_M_next;
  __cur541 = t544;
    while (1) {
      struct std____detail___List_node_base* t545 = __cur541;
      struct std____detail___List_node_base* r546 = std____detail___List_node_header___M_base(&t542->_M_impl._M_node);
      _Bool c547 = ((t545 != r546)) ? 1 : 0;
      if (!c547) break;
        struct std___List_node_int_* __tmp548;
        struct std____detail___List_node_base* t549 = __cur541;
        struct std___List_node_int_* derived550 = (struct std___List_node_int_*)((char *)t549 - 0);
        __tmp548 = derived550;
        struct std___List_node_int_* t551 = __tmp548;
        struct std____detail___List_node_base* base552 = (struct std____detail___List_node_base*)((char *)t551 + 0);
        struct std____detail___List_node_base* t553 = base552->_M_next;
        __cur541 = t553;
        struct std___List_node_int_* t554 = __tmp548;
        struct std___List_node_int_* r555 = std___List_node_int____M_node_ptr(t554);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t542, r555);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v556) {
bb557:
  struct std____cxx11___List_base_int__std__allocator_int__* this558;
  this558 = v556;
  struct std____cxx11___List_base_int__std__allocator_int__* t559 = this558;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t559);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t559->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v560) {
bb561:
  struct std____new_allocator_std___List_node_int__* this562;
  this562 = v560;
  struct std____new_allocator_std___List_node_int__* t563 = this562;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v564) {
bb565:
  struct std__allocator_std___List_node_int__* this566;
  this566 = v564;
  struct std__allocator_std___List_node_int__* t567 = this566;
  struct std____new_allocator_std___List_node_int__* base568 = (struct std____new_allocator_std___List_node_int__*)((char *)t567 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base568);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v569) {
bb570:
  struct std____detail___List_node_header* this571;
  this571 = v569;
  struct std____detail___List_node_header* t572 = this571;
  struct std____detail___List_node_base* base573 = (struct std____detail___List_node_base*)((char *)t572 + 0);
  struct std____detail___List_size* base574 = (struct std____detail___List_size*)((char *)t572 + 16);
  std____detail___List_node_header___M_init(t572);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v575) {
bb576:
  struct std__allocator_std___List_node_int__* this577;
  this577 = v575;
  struct std__allocator_std___List_node_int__* t578 = this577;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v579, struct std____detail___List_size* v580) {
bb581:
  struct std____detail___List_size* this582;
  struct std____detail___List_size* unnamed583;
  struct std____detail___List_size* __retval584;
  this582 = v579;
  unnamed583 = v580;
  struct std____detail___List_size* t585 = this582;
  struct std____detail___List_size* t586 = unnamed583;
  unsigned long t587 = t586->_M_size;
  t585->_M_size = t587;
  __retval584 = t585;
  struct std____detail___List_size* t588 = __retval584;
  return t588;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v589) {
bb590:
  struct std____detail___List_node_header* this591;
  struct std____detail___List_size ref_tmp0592;
  this591 = v589;
  struct std____detail___List_node_header* t593 = this591;
  struct std____detail___List_node_base* base594 = (struct std____detail___List_node_base*)((char *)t593 + 0);
  struct std____detail___List_node_base* base595 = (struct std____detail___List_node_base*)((char *)t593 + 0);
  base595->_M_prev = base594;
  struct std____detail___List_node_base* base596 = (struct std____detail___List_node_base*)((char *)t593 + 0);
  base596->_M_next = base594;
  struct std____detail___List_size* base597 = (struct std____detail___List_size*)((char *)t593 + 16);
  ref_tmp0592 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r598 = std____detail___List_size__operator_(base597, &ref_tmp0592);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v599, struct std____allocated_ptr_std__allocator_std___List_node_int___* v600) {
bb601:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this602;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd603;
  this602 = v599;
  __gd603 = v600;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t604 = this602;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t605 = __gd603;
  struct std__allocator_std___List_node_int__* t606 = t605->_M_alloc;
  t604->_M_alloc = t606;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t607 = __gd603;
  struct std___List_node_int_* t608 = t607->_M_ptr;
  t604->_M_ptr = t608;
  struct std___List_node_int_* c609 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t610 = __gd603;
  t610->_M_ptr = c609;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v611) {
bb612:
  struct std___List_node_int_* __ptr613;
  struct std___List_node_int_* __retval614;
  __ptr613 = v611;
  struct std___List_node_int_* t615 = __ptr613;
  __retval614 = t615;
  struct std___List_node_int_* t616 = __retval614;
  return t616;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v617) {
bb618:
  struct std___List_node_int_** __ptr619;
  struct std___List_node_int_* __retval620;
  __ptr619 = v617;
  struct std___List_node_int_** t621 = __ptr619;
  struct std___List_node_int_* t622 = *t621;
  struct std___List_node_int_* r623 = std___List_node_int___std__to_address_std___List_node_int___(t622);
  __retval620 = r623;
  struct std___List_node_int_* t624 = __retval620;
  return t624;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v625) {
bb626:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this627;
  struct std___List_node_int_* __retval628;
  this627 = v625;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t629 = this627;
  struct std___List_node_int_* r630 = auto_std____to_address_std___List_node_int___(&t629->_M_ptr);
  __retval628 = r630;
  struct std___List_node_int_* t631 = __retval628;
  return t631;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v632) {
bb633:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this634;
  _Bool __retval635;
  this634 = v632;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t636 = this634;
  struct std___List_node_int_* t637 = t636->_M_ptr;
  _Bool cast638 = (_Bool)t637;
  __retval635 = cast638;
  _Bool t639 = __retval635;
  return t639;
}

