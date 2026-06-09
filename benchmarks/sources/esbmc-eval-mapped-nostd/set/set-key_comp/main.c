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
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__binary_function_int__int__bool_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

char _str[18] = "!mycomp(*it,*it2)";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-key_comp/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0);
struct std__less_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____key_comp___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__less_int_ std__set_int__std__less_int___std__allocator_int_____key_comp___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std__binary_function_int__int__bool_* std__binary_function_int__int__bool___operator_(struct std__binary_function_int__int__bool_* p0, struct std__binary_function_int__int__bool_* p1);
struct std__less_int_* std__less_int___operator_(struct std__less_int_* p0, struct std__less_int_* p1);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
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
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* p0);
int main();
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1);
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);

// function: _ZNSt3setIiSt4lessIiESaIiEEC2Ev
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* v0) {
bb1:
  struct std__set_int__std__less_int___std__allocator_int__* this2;
  this2 = v0;
  struct std__set_int__std__less_int___std__allocator_int__* t3 = this2;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t3->_M_t);
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v4) {
bb5:
  struct std___Rb_tree_const_iterator_int_* this6;
  this6 = v4;
  struct std___Rb_tree_const_iterator_int_* t7 = this6;
  struct std___Rb_tree_node_base* c8 = ((void*)0);
  t7->_M_node = c8;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8key_compEv
struct std__less_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____key_comp___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v9) {
bb10:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this11;
  struct std__less_int_ __retval12;
  this11 = v9;
  struct std__less_int_ t13 = __retval12;
  return t13;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE8key_compEv
struct std__less_int_ std__set_int__std__less_int___std__allocator_int_____key_comp___const(struct std__set_int__std__less_int___std__allocator_int__* v14) {
bb15:
  struct std__set_int__std__less_int___std__allocator_int__* this16;
  struct std__less_int_ __retval17;
  this16 = v14;
  struct std__set_int__std__less_int___std__allocator_int__* t18 = this16;
  struct std__less_int_ r19 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____key_comp___const(&t18->_M_t);
  __retval17 = r19;
  struct std__less_int_ t20 = __retval17;
  return t20;
}

// function: _ZNSt15binary_functionIiibEaSEOS0_
struct std__binary_function_int__int__bool_* std__binary_function_int__int__bool___operator_(struct std__binary_function_int__int__bool_* v21, struct std__binary_function_int__int__bool_* v22) {
bb23:
  struct std__binary_function_int__int__bool_* this24;
  struct std__binary_function_int__int__bool_* unnamed25;
  struct std__binary_function_int__int__bool_* __retval26;
  this24 = v21;
  unnamed25 = v22;
  struct std__binary_function_int__int__bool_* t27 = this24;
  __retval26 = t27;
  struct std__binary_function_int__int__bool_* t28 = __retval26;
  return t28;
}

// function: _ZNSt4lessIiEaSEOS0_
struct std__less_int_* std__less_int___operator_(struct std__less_int_* v29, struct std__less_int_* v30) {
bb31:
  struct std__less_int_* this32;
  struct std__less_int_* unnamed33;
  struct std__less_int_* __retval34;
  this32 = v29;
  unnamed33 = v30;
  struct std__less_int_* t35 = this32;
  struct std__binary_function_int__int__bool_* base36 = (struct std__binary_function_int__int__bool_*)((char *)t35 + 0);
  struct std__less_int_* t37 = unnamed33;
  struct std__binary_function_int__int__bool_* base38 = (struct std__binary_function_int__int__bool_*)((char *)t37 + 0);
  struct std__binary_function_int__int__bool_* r39 = std__binary_function_int__int__bool___operator_(base36, base38);
  __retval34 = t35;
  struct std__less_int_* t40 = __retval34;
  return t40;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v41, struct std___Rb_tree_node_base* v42) {
bb43:
  struct std___Rb_tree_const_iterator_int_* this44;
  struct std___Rb_tree_node_base* __x45;
  this44 = v41;
  __x45 = v42;
  struct std___Rb_tree_const_iterator_int_* t46 = this44;
  struct std___Rb_tree_node_base* t47 = __x45;
  t46->_M_node = t47;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v48) {
bb49:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this50;
  struct std___Rb_tree_const_iterator_int_ __retval51;
  this50 = v48;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t52 = this50;
  struct std___Rb_tree_header* base53 = (struct std___Rb_tree_header*)((char *)&(t52->_M_impl) + 8);
  struct std___Rb_tree_node_base* t54 = base53->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval51, t54);
  struct std___Rb_tree_const_iterator_int_ t55 = __retval51;
  return t55;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v56) {
bb57:
  struct std__set_int__std__less_int___std__allocator_int__* this58;
  struct std___Rb_tree_const_iterator_int_ __retval59;
  this58 = v56;
  struct std__set_int__std__less_int___std__allocator_int__* t60 = this58;
  struct std___Rb_tree_const_iterator_int_ r61 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t60->_M_t);
  __retval59 = r61;
  struct std___Rb_tree_const_iterator_int_ t62 = __retval59;
  return t62;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v63, struct std___Rb_tree_const_iterator_int_* v64) {
bb65:
  struct std___Rb_tree_const_iterator_int_* this66;
  struct std___Rb_tree_const_iterator_int_* unnamed67;
  struct std___Rb_tree_const_iterator_int_* __retval68;
  this66 = v63;
  unnamed67 = v64;
  struct std___Rb_tree_const_iterator_int_* t69 = this66;
  struct std___Rb_tree_const_iterator_int_* t70 = unnamed67;
  struct std___Rb_tree_node_base* t71 = t70->_M_node;
  t69->_M_node = t71;
  __retval68 = t69;
  struct std___Rb_tree_const_iterator_int_* t72 = __retval68;
  return t72;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v73, int* v74, int* v75) {
bb76:
  struct std__less_int_* this77;
  int* __x78;
  int* __y79;
  _Bool __retval80;
  this77 = v73;
  __x78 = v74;
  __y79 = v75;
  struct std__less_int_* t81 = this77;
  int* t82 = __x78;
  int t83 = *t82;
  int* t84 = __y79;
  int t85 = *t84;
  _Bool c86 = ((t83 < t85)) ? 1 : 0;
  __retval80 = c86;
  _Bool t87 = __retval80;
  return t87;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v88) {
bb89:
  struct __gnu_cxx____aligned_membuf_int_* this90;
  void* __retval91;
  this90 = v88;
  struct __gnu_cxx____aligned_membuf_int_* t92 = this90;
  void* cast93 = (void*)&(t92->_M_storage);
  __retval91 = cast93;
  void* t94 = __retval91;
  return t94;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v95) {
bb96:
  struct __gnu_cxx____aligned_membuf_int_* this97;
  int* __retval98;
  this97 = v95;
  struct __gnu_cxx____aligned_membuf_int_* t99 = this97;
  void* r100 = __gnu_cxx____aligned_membuf_int____M_addr___const(t99);
  int* cast101 = (int*)r100;
  __retval98 = cast101;
  int* t102 = __retval98;
  return t102;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v103) {
bb104:
  struct std___Rb_tree_node_int_* this105;
  int* __retval106;
  this105 = v103;
  struct std___Rb_tree_node_int_* t107 = this105;
  int* r108 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t107->_M_storage);
  __retval106 = r108;
  int* t109 = __retval106;
  return t109;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v110) {
bb111:
  struct std___Rb_tree_const_iterator_int_* this112;
  int* __retval113;
  this112 = v110;
  struct std___Rb_tree_const_iterator_int_* t114 = this112;
  struct std___Rb_tree_node_base* t115 = t114->_M_node;
  struct std___Rb_tree_node_int_* derived116 = ((t115) ? (struct std___Rb_tree_node_int_*)((char *)t115 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r117 = std___Rb_tree_node_int____M_valptr___const(derived116);
  __retval113 = r117;
  int* t118 = __retval113;
  return t118;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v119, void* v120) {
bb121:
  struct std__basic_ostream_char__std__char_traits_char__* this122;
  void* __pf123;
  struct std__basic_ostream_char__std__char_traits_char__* __retval124;
  this122 = v119;
  __pf123 = v120;
  struct std__basic_ostream_char__std__char_traits_char__* t125 = this122;
  void* t126 = __pf123;
  struct std__basic_ostream_char__std__char_traits_char__* r127 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t126)(t125);
  __retval124 = r127;
  struct std__basic_ostream_char__std__char_traits_char__* t128 = __retval124;
  return t128;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v129) {
bb130:
  struct std__basic_ostream_char__std__char_traits_char__* __os131;
  struct std__basic_ostream_char__std__char_traits_char__* __retval132;
  __os131 = v129;
  struct std__basic_ostream_char__std__char_traits_char__* t133 = __os131;
  struct std__basic_ostream_char__std__char_traits_char__* r134 = std__ostream__flush(t133);
  __retval132 = r134;
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __retval132;
  return t135;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v136) {
bb137:
  struct std__ctype_char_* __f138;
  struct std__ctype_char_* __retval139;
  __f138 = v136;
    struct std__ctype_char_* t140 = __f138;
    _Bool cast141 = (_Bool)t140;
    _Bool u142 = !cast141;
    if (u142) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t143 = __f138;
  __retval139 = t143;
  struct std__ctype_char_* t144 = __retval139;
  return t144;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v145, char v146) {
bb147:
  struct std__ctype_char_* this148;
  char __c149;
  char __retval150;
  this148 = v145;
  __c149 = v146;
  struct std__ctype_char_* t151 = this148;
    char t152 = t151->_M_widen_ok;
    _Bool cast153 = (_Bool)t152;
    if (cast153) {
      char t154 = __c149;
      unsigned char cast155 = (unsigned char)t154;
      unsigned long cast156 = (unsigned long)cast155;
      char t157 = t151->_M_widen[cast156];
      __retval150 = t157;
      char t158 = __retval150;
      return t158;
    }
  std__ctype_char____M_widen_init___const(t151);
  char t159 = __c149;
  void** v160 = (void**)t151;
  void* v161 = *((void**)v160);
  char vcall164 = (char)__VERIFIER_virtual_call_char_char(t151, 6, t159);
  __retval150 = vcall164;
  char t165 = __retval150;
  return t165;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v166, char v167) {
bb168:
  struct std__basic_ios_char__std__char_traits_char__* this169;
  char __c170;
  char __retval171;
  this169 = v166;
  __c170 = v167;
  struct std__basic_ios_char__std__char_traits_char__* t172 = this169;
  struct std__ctype_char_* t173 = t172->_M_ctype;
  struct std__ctype_char_* r174 = std__ctype_char__const__std____check_facet_std__ctype_char___(t173);
  char t175 = __c170;
  char r176 = std__ctype_char___widen_char__const(r174, t175);
  __retval171 = r176;
  char t177 = __retval171;
  return t177;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v178) {
bb179:
  struct std__basic_ostream_char__std__char_traits_char__* __os180;
  struct std__basic_ostream_char__std__char_traits_char__* __retval181;
  __os180 = v178;
  struct std__basic_ostream_char__std__char_traits_char__* t182 = __os180;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __os180;
  void** v184 = (void**)t183;
  void* v185 = *((void**)v184);
  unsigned char* cast186 = (unsigned char*)v185;
  long c187 = -24;
  unsigned char* ptr188 = &(cast186)[c187];
  long* cast189 = (long*)ptr188;
  long t190 = *cast189;
  unsigned char* cast191 = (unsigned char*)t183;
  unsigned char* ptr192 = &(cast191)[t190];
  struct std__basic_ostream_char__std__char_traits_char__* cast193 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr192;
  struct std__basic_ios_char__std__char_traits_char__* cast194 = (struct std__basic_ios_char__std__char_traits_char__*)cast193;
  char c195 = 10;
  char r196 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast194, c195);
  struct std__basic_ostream_char__std__char_traits_char__* r197 = std__ostream__put(t182, r196);
  struct std__basic_ostream_char__std__char_traits_char__* r198 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r197);
  __retval181 = r198;
  struct std__basic_ostream_char__std__char_traits_char__* t199 = __retval181;
  return t199;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v200) {
bb201:
  struct std__set_int__std__less_int___std__allocator_int__* this202;
  this202 = v200;
  struct std__set_int__std__less_int___std__allocator_int__* t203 = this202;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t203->_M_t);
  }
  return;
}

// function: main
int main() {
bb204:
  int __retval205;
  struct std__set_int__std__less_int___std__allocator_int__ myset206;
  struct std__less_int_ mycomp207;
  struct std___Rb_tree_const_iterator_int_ it208;
  struct std___Rb_tree_const_iterator_int_ it2209;
  int i210;
  int highest211;
  struct std__less_int_ ref_tmp0212;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1213;
  struct std___Rb_tree_const_iterator_int_ ref_tmp2214;
  int c215 = 0;
  __retval205 = c215;
  std__set_int__std__less_int___std__allocator_int_____set(&myset206);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&it208);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&it2209);
    struct std__less_int_ r216 = std__set_int__std__less_int___std__allocator_int_____key_comp___const(&myset206);
    ref_tmp0212 = r216;
    struct std__less_int_* r217 = std__less_int___operator_(&mycomp207, &ref_tmp0212);
    struct std___Rb_tree_const_iterator_int_ r218 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset206);
    ref_tmp1213 = r218;
    struct std___Rb_tree_const_iterator_int_* r219 = std___Rb_tree_const_iterator_int___operator_(&it208, &ref_tmp1213);
    struct std___Rb_tree_const_iterator_int_ r220 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset206);
    ref_tmp2214 = r220;
    struct std___Rb_tree_const_iterator_int_* r221 = std___Rb_tree_const_iterator_int___operator_(&it2209, &ref_tmp2214);
    int* r222 = std___Rb_tree_const_iterator_int___operator____const(&it208);
    int* r223 = std___Rb_tree_const_iterator_int___operator____const(&it2209);
    _Bool r224 = std__less_int___operator___int_const___int_const___const(&mycomp207, r222, r223);
    _Bool u225 = !r224;
    if (u225) {
    } else {
      char* cast226 = (char*)&(_str);
      char* c227 = _str_1;
      unsigned int c228 = 24;
      char* cast229 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast226, c227, c228, cast229);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r230 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c231 = 0;
    __retval205 = c231;
    int t232 = __retval205;
    int ret_val233 = t232;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset206);
    }
    return ret_val233;
  int t234 = __retval205;
  return t234;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v235) {
bb236:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this237;
  this237 = v235;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t238 = this237;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t238->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v239) {
bb240:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this241;
  this241 = v239;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t242 = this241;
    struct std___Rb_tree_node_int_* r243 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t242);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t242, r243);
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t242->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v244) {
bb245:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this246;
  this246 = v244;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t247 = this246;
  struct std__allocator_std___Rb_tree_node_int__* base248 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t247 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base248);
    struct std___Rb_tree_key_compare_std__less_int__* base249 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t247 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base249);
    struct std___Rb_tree_header* base250 = (struct std___Rb_tree_header*)((char *)t247 + 8);
    std___Rb_tree_header___Rb_tree_header(base250);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v251) {
bb252:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this253;
  this253 = v251;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t254 = this253;
  {
    struct std__allocator_std___Rb_tree_node_int__* base255 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t254 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base255);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v256) {
bb257:
  struct std____new_allocator_std___Rb_tree_node_int__* this258;
  this258 = v256;
  struct std____new_allocator_std___Rb_tree_node_int__* t259 = this258;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v260) {
bb261:
  struct std__allocator_std___Rb_tree_node_int__* this262;
  this262 = v260;
  struct std__allocator_std___Rb_tree_node_int__* t263 = this262;
  struct std____new_allocator_std___Rb_tree_node_int__* base264 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t263 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base264);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v265) {
bb266:
  struct std___Rb_tree_key_compare_std__less_int__* this267;
  this267 = v265;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v268) {
bb269:
  struct std___Rb_tree_header* this270;
  this270 = v268;
  struct std___Rb_tree_header* t271 = this270;
  struct std___Rb_tree_node_base* c272 = ((void*)0);
  t271->_M_header._M_parent = c272;
  t271->_M_header._M_left = &t271->_M_header;
  t271->_M_header._M_right = &t271->_M_header;
  unsigned long c273 = 0;
  t271->_M_node_count = c273;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v274) {
bb275:
  struct std___Rb_tree_header* this276;
  this276 = v274;
  struct std___Rb_tree_header* t277 = this276;
  unsigned int c278 = 0;
  t277->_M_header._M_color = c278;
  std___Rb_tree_header___M_reset(t277);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v279) {
bb280:
  struct std__allocator_std___Rb_tree_node_int__* this281;
  this281 = v279;
  struct std__allocator_std___Rb_tree_node_int__* t282 = this281;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v283) {
bb284:
  struct std___Rb_tree_node_int_* this285;
  struct std___Rb_tree_node_int_* __retval286;
  this285 = v283;
  struct std___Rb_tree_node_int_* t287 = this285;
  __retval286 = t287;
  struct std___Rb_tree_node_int_* t288 = __retval286;
  return t288;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v289) {
bb290:
  struct std___Rb_tree_node_int_* __x291;
  struct std___Rb_tree_node_int_* __retval292;
  __x291 = v289;
  struct std___Rb_tree_node_int_* t293 = __x291;
  struct std___Rb_tree_node_base* base294 = (struct std___Rb_tree_node_base*)((char *)t293 + 0);
  struct std___Rb_tree_node_base* t295 = base294->_M_right;
  _Bool cast296 = (_Bool)t295;
  struct std___Rb_tree_node_int_* ternary297;
  if (cast296) {
    struct std___Rb_tree_node_int_* t298 = __x291;
    struct std___Rb_tree_node_base* base299 = (struct std___Rb_tree_node_base*)((char *)t298 + 0);
    struct std___Rb_tree_node_base* t300 = base299->_M_right;
    struct std___Rb_tree_node_int_* derived301 = (struct std___Rb_tree_node_int_*)((char *)t300 - 0);
    struct std___Rb_tree_node_int_* r302 = std___Rb_tree_node_int____M_node_ptr(derived301);
    ternary297 = (struct std___Rb_tree_node_int_*)r302;
  } else {
    struct std___Rb_tree_node_int_* c303 = ((void*)0);
    ternary297 = (struct std___Rb_tree_node_int_*)c303;
  }
  __retval292 = ternary297;
  struct std___Rb_tree_node_int_* t304 = __retval292;
  return t304;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v305) {
bb306:
  struct std___Rb_tree_node_int_* __x307;
  struct std___Rb_tree_node_int_* __retval308;
  __x307 = v305;
  struct std___Rb_tree_node_int_* t309 = __x307;
  struct std___Rb_tree_node_base* base310 = (struct std___Rb_tree_node_base*)((char *)t309 + 0);
  struct std___Rb_tree_node_base* t311 = base310->_M_left;
  _Bool cast312 = (_Bool)t311;
  struct std___Rb_tree_node_int_* ternary313;
  if (cast312) {
    struct std___Rb_tree_node_int_* t314 = __x307;
    struct std___Rb_tree_node_base* base315 = (struct std___Rb_tree_node_base*)((char *)t314 + 0);
    struct std___Rb_tree_node_base* t316 = base315->_M_left;
    struct std___Rb_tree_node_int_* derived317 = (struct std___Rb_tree_node_int_*)((char *)t316 - 0);
    struct std___Rb_tree_node_int_* r318 = std___Rb_tree_node_int____M_node_ptr(derived317);
    ternary313 = (struct std___Rb_tree_node_int_*)r318;
  } else {
    struct std___Rb_tree_node_int_* c319 = ((void*)0);
    ternary313 = (struct std___Rb_tree_node_int_*)c319;
  }
  __retval308 = ternary313;
  struct std___Rb_tree_node_int_* t320 = __retval308;
  return t320;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v321) {
bb322:
  int* __location323;
  __location323 = v321;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v324, int* v325) {
bb326:
  struct std__allocator_std___Rb_tree_node_int__* __a327;
  int* __p328;
  __a327 = v324;
  __p328 = v325;
  int* t329 = __p328;
  void_std__destroy_at_int_(t329);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v330) {
bb331:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this332;
  struct std__allocator_std___Rb_tree_node_int__* __retval333;
  this332 = v330;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t334 = this332;
  struct std__allocator_std___Rb_tree_node_int__* base335 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t334->_M_impl) + 0);
  __retval333 = base335;
  struct std__allocator_std___Rb_tree_node_int__* t336 = __retval333;
  return t336;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v337) {
bb338:
  struct __gnu_cxx____aligned_membuf_int_* this339;
  void* __retval340;
  this339 = v337;
  struct __gnu_cxx____aligned_membuf_int_* t341 = this339;
  void* cast342 = (void*)&(t341->_M_storage);
  __retval340 = cast342;
  void* t343 = __retval340;
  return t343;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v344) {
bb345:
  struct __gnu_cxx____aligned_membuf_int_* this346;
  int* __retval347;
  this346 = v344;
  struct __gnu_cxx____aligned_membuf_int_* t348 = this346;
  void* r349 = __gnu_cxx____aligned_membuf_int____M_addr(t348);
  int* cast350 = (int*)r349;
  __retval347 = cast350;
  int* t351 = __retval347;
  return t351;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v352) {
bb353:
  struct std___Rb_tree_node_int_* this354;
  int* __retval355;
  this354 = v352;
  struct std___Rb_tree_node_int_* t356 = this354;
  int* r357 = __gnu_cxx____aligned_membuf_int____M_ptr(&t356->_M_storage);
  __retval355 = r357;
  int* t358 = __retval355;
  return t358;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v359, struct std___Rb_tree_node_int_* v360) {
bb361:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this362;
  struct std___Rb_tree_node_int_* __p363;
  this362 = v359;
  __p363 = v360;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t364 = this362;
  struct std__allocator_std___Rb_tree_node_int__* r365 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t364);
  struct std___Rb_tree_node_int_* t366 = __p363;
  int* r367 = std___Rb_tree_node_int____M_valptr(t366);
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r365, r367);
  struct std___Rb_tree_node_int_* t368 = __p363;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb369:
  _Bool __retval370;
    _Bool c371 = 0;
    __retval370 = c371;
    _Bool t372 = __retval370;
    return t372;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v373, struct std___Rb_tree_node_int_* v374, unsigned long v375) {
bb376:
  struct std____new_allocator_std___Rb_tree_node_int__* this377;
  struct std___Rb_tree_node_int_* __p378;
  unsigned long __n379;
  this377 = v373;
  __p378 = v374;
  __n379 = v375;
  struct std____new_allocator_std___Rb_tree_node_int__* t380 = this377;
    unsigned long c381 = 8;
    unsigned long c382 = 16;
    _Bool c383 = ((c381 > c382)) ? 1 : 0;
    if (c383) {
      struct std___Rb_tree_node_int_* t384 = __p378;
      void* cast385 = (void*)t384;
      unsigned long t386 = __n379;
      unsigned long c387 = 40;
      unsigned long b388 = t386 * c387;
      unsigned long c389 = 8;
      operator_delete_3(cast385, b388, c389);
      return;
    }
  struct std___Rb_tree_node_int_* t390 = __p378;
  void* cast391 = (void*)t390;
  unsigned long t392 = __n379;
  unsigned long c393 = 40;
  unsigned long b394 = t392 * c393;
  operator_delete_2(cast391, b394);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v395, struct std___Rb_tree_node_int_* v396, unsigned long v397) {
bb398:
  struct std__allocator_std___Rb_tree_node_int__* this399;
  struct std___Rb_tree_node_int_* __p400;
  unsigned long __n401;
  this399 = v395;
  __p400 = v396;
  __n401 = v397;
  struct std__allocator_std___Rb_tree_node_int__* t402 = this399;
    _Bool r403 = std____is_constant_evaluated();
    if (r403) {
      struct std___Rb_tree_node_int_* t404 = __p400;
      void* cast405 = (void*)t404;
      operator_delete(cast405);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base406 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t402 + 0);
  struct std___Rb_tree_node_int_* t407 = __p400;
  unsigned long t408 = __n401;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base406, t407, t408);
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v409, struct std___Rb_tree_node_int_* v410, unsigned long v411) {
bb412:
  struct std__allocator_std___Rb_tree_node_int__* __a413;
  struct std___Rb_tree_node_int_* __p414;
  unsigned long __n415;
  __a413 = v409;
  __p414 = v410;
  __n415 = v411;
  struct std__allocator_std___Rb_tree_node_int__* t416 = __a413;
  struct std___Rb_tree_node_int_* t417 = __p414;
  unsigned long t418 = __n415;
  std__allocator_std___Rb_tree_node_int_____deallocate(t416, t417, t418);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v419, struct std___Rb_tree_node_int_* v420) {
bb421:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this422;
  struct std___Rb_tree_node_int_* __p423;
  this422 = v419;
  __p423 = v420;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t424 = this422;
  struct std__allocator_std___Rb_tree_node_int__* r425 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t424);
  struct std___Rb_tree_node_int_* t426 = __p423;
  unsigned long c427 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r425, t426, c427);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v428, struct std___Rb_tree_node_int_* v429) {
bb430:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this431;
  struct std___Rb_tree_node_int_* __p432;
  this431 = v428;
  __p432 = v429;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t433 = this431;
  struct std___Rb_tree_node_int_* t434 = __p432;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t433, t434);
  struct std___Rb_tree_node_int_* t435 = __p432;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t433, t435);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v436, struct std___Rb_tree_node_int_* v437) {
bb438:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this439;
  struct std___Rb_tree_node_int_* __x440;
  this439 = v436;
  __x440 = v437;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t441 = this439;
    while (1) {
      struct std___Rb_tree_node_int_* t442 = __x440;
      _Bool cast443 = (_Bool)t442;
      if (!cast443) break;
        struct std___Rb_tree_node_int_* __y444;
        struct std___Rb_tree_node_int_* t445 = __x440;
        struct std___Rb_tree_node_int_* r446 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t445);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t441, r446);
        struct std___Rb_tree_node_int_* t447 = __x440;
        struct std___Rb_tree_node_int_* r448 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t447);
        __y444 = r448;
        struct std___Rb_tree_node_int_* t449 = __x440;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t441, t449);
        struct std___Rb_tree_node_int_* t450 = __y444;
        __x440 = t450;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v451) {
bb452:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this453;
  struct std___Rb_tree_node_int_* __retval454;
  struct std___Rb_tree_node_base* __begin455;
  this453 = v451;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t456 = this453;
  struct std___Rb_tree_header* base457 = (struct std___Rb_tree_header*)((char *)&(t456->_M_impl) + 8);
  struct std___Rb_tree_node_base* t458 = base457->_M_header._M_parent;
  __begin455 = t458;
  struct std___Rb_tree_node_base* t459 = __begin455;
  _Bool cast460 = (_Bool)t459;
  struct std___Rb_tree_node_int_* ternary461;
  if (cast460) {
    struct std___Rb_tree_node_base* t462 = __begin455;
    struct std___Rb_tree_node_int_* derived463 = (struct std___Rb_tree_node_int_*)((char *)t462 - 0);
    struct std___Rb_tree_node_int_* r464 = std___Rb_tree_node_int____M_node_ptr(derived463);
    ternary461 = (struct std___Rb_tree_node_int_*)r464;
  } else {
    struct std___Rb_tree_node_int_* c465 = ((void*)0);
    ternary461 = (struct std___Rb_tree_node_int_*)c465;
  }
  __retval454 = ternary461;
  struct std___Rb_tree_node_int_* t466 = __retval454;
  return t466;
}

