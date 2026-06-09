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
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

char _str[24] = "myset.max_size() < 1000";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-max_size-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
unsigned long std__allocator_traits_std__allocator_std___Rb_tree_node_int_______max_size(struct std__allocator_std___Rb_tree_node_int__* p0);
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____max_size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____max_size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8max_sizeERKS2_
unsigned long std__allocator_traits_std__allocator_std___Rb_tree_node_int_______max_size(struct std__allocator_std___Rb_tree_node_int__* v4) {
bb5:
  struct std__allocator_std___Rb_tree_node_int__* __a6;
  unsigned long __retval7;
  __a6 = v4;
  unsigned long c8 = -1;
  unsigned long c9 = 40;
  unsigned long b10 = c8 / c9;
  __retval7 = b10;
  unsigned long t11 = __retval7;
  return t11;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v12) {
bb13:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this14;
  struct std__allocator_std___Rb_tree_node_int__* __retval15;
  this14 = v12;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t16 = this14;
  struct std__allocator_std___Rb_tree_node_int__* base17 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t16->_M_impl) + 0);
  __retval15 = base17;
  struct std__allocator_std___Rb_tree_node_int__* t18 = __retval15;
  return t18;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8max_sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____max_size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v19) {
bb20:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this21;
  unsigned long __retval22;
  this21 = v19;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t23 = this21;
  struct std__allocator_std___Rb_tree_node_int__* r24 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator___const(t23);
  unsigned long r25 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______max_size(r24);
  __retval22 = r25;
  unsigned long t26 = __retval22;
  return t26;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE8max_sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____max_size___const(struct std__set_int__std__less_int___std__allocator_int__* v27) {
bb28:
  struct std__set_int__std__less_int___std__allocator_int__* this29;
  unsigned long __retval30;
  this29 = v27;
  struct std__set_int__std__less_int___std__allocator_int__* t31 = this29;
  unsigned long r32 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____max_size___const(&t31->_M_t);
  __retval30 = r32;
  unsigned long t33 = __retval30;
  return t33;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v34) {
bb35:
  struct std__set_int__std__less_int___std__allocator_int__* this36;
  this36 = v34;
  struct std__set_int__std__less_int___std__allocator_int__* t37 = this36;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t37->_M_t);
  }
  return;
}

// function: main
int main() {
bb38:
  int __retval39;
  int i40;
  struct std__set_int__std__less_int___std__allocator_int__ myset41;
  int c42 = 0;
  __retval39 = c42;
  std__set_int__std__less_int___std__allocator_int_____set(&myset41);
    unsigned long r43 = std__set_int__std__less_int___std__allocator_int_____max_size___const(&myset41);
    unsigned long c44 = 1000;
    _Bool c45 = ((r43 < c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str);
      char* c47 = _str_1;
      unsigned int c48 = 18;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    int c50 = 0;
    __retval39 = c50;
    int t51 = __retval39;
    int ret_val52 = t51;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset41);
    }
    return ret_val52;
  int t53 = __retval39;
  return t53;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v54) {
bb55:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this56;
  this56 = v54;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t57 = this56;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t57->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v58) {
bb59:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this60;
  this60 = v58;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t61 = this60;
    struct std___Rb_tree_node_int_* r62 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t61);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t61, r62);
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t61->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v63) {
bb64:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this65;
  this65 = v63;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t66 = this65;
  struct std__allocator_std___Rb_tree_node_int__* base67 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t66 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base67);
    struct std___Rb_tree_key_compare_std__less_int__* base68 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t66 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base68);
    struct std___Rb_tree_header* base69 = (struct std___Rb_tree_header*)((char *)t66 + 8);
    std___Rb_tree_header___Rb_tree_header(base69);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v70) {
bb71:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this72;
  this72 = v70;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t73 = this72;
  {
    struct std__allocator_std___Rb_tree_node_int__* base74 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t73 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base74);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v75) {
bb76:
  struct std____new_allocator_std___Rb_tree_node_int__* this77;
  this77 = v75;
  struct std____new_allocator_std___Rb_tree_node_int__* t78 = this77;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v79) {
bb80:
  struct std__allocator_std___Rb_tree_node_int__* this81;
  this81 = v79;
  struct std__allocator_std___Rb_tree_node_int__* t82 = this81;
  struct std____new_allocator_std___Rb_tree_node_int__* base83 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t82 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base83);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v84) {
bb85:
  struct std___Rb_tree_key_compare_std__less_int__* this86;
  this86 = v84;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v87) {
bb88:
  struct std___Rb_tree_header* this89;
  this89 = v87;
  struct std___Rb_tree_header* t90 = this89;
  struct std___Rb_tree_node_base* c91 = ((void*)0);
  t90->_M_header._M_parent = c91;
  t90->_M_header._M_left = &t90->_M_header;
  t90->_M_header._M_right = &t90->_M_header;
  unsigned long c92 = 0;
  t90->_M_node_count = c92;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v93) {
bb94:
  struct std___Rb_tree_header* this95;
  this95 = v93;
  struct std___Rb_tree_header* t96 = this95;
  unsigned int c97 = 0;
  t96->_M_header._M_color = c97;
  std___Rb_tree_header___M_reset(t96);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v98) {
bb99:
  struct std__allocator_std___Rb_tree_node_int__* this100;
  this100 = v98;
  struct std__allocator_std___Rb_tree_node_int__* t101 = this100;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v102) {
bb103:
  struct std___Rb_tree_node_int_* this104;
  struct std___Rb_tree_node_int_* __retval105;
  this104 = v102;
  struct std___Rb_tree_node_int_* t106 = this104;
  __retval105 = t106;
  struct std___Rb_tree_node_int_* t107 = __retval105;
  return t107;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v108) {
bb109:
  struct std___Rb_tree_node_int_* __x110;
  struct std___Rb_tree_node_int_* __retval111;
  __x110 = v108;
  struct std___Rb_tree_node_int_* t112 = __x110;
  struct std___Rb_tree_node_base* base113 = (struct std___Rb_tree_node_base*)((char *)t112 + 0);
  struct std___Rb_tree_node_base* t114 = base113->_M_right;
  _Bool cast115 = (_Bool)t114;
  struct std___Rb_tree_node_int_* ternary116;
  if (cast115) {
    struct std___Rb_tree_node_int_* t117 = __x110;
    struct std___Rb_tree_node_base* base118 = (struct std___Rb_tree_node_base*)((char *)t117 + 0);
    struct std___Rb_tree_node_base* t119 = base118->_M_right;
    struct std___Rb_tree_node_int_* derived120 = (struct std___Rb_tree_node_int_*)((char *)t119 - 0);
    struct std___Rb_tree_node_int_* r121 = std___Rb_tree_node_int____M_node_ptr(derived120);
    ternary116 = (struct std___Rb_tree_node_int_*)r121;
  } else {
    struct std___Rb_tree_node_int_* c122 = ((void*)0);
    ternary116 = (struct std___Rb_tree_node_int_*)c122;
  }
  __retval111 = ternary116;
  struct std___Rb_tree_node_int_* t123 = __retval111;
  return t123;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v124) {
bb125:
  struct std___Rb_tree_node_int_* __x126;
  struct std___Rb_tree_node_int_* __retval127;
  __x126 = v124;
  struct std___Rb_tree_node_int_* t128 = __x126;
  struct std___Rb_tree_node_base* base129 = (struct std___Rb_tree_node_base*)((char *)t128 + 0);
  struct std___Rb_tree_node_base* t130 = base129->_M_left;
  _Bool cast131 = (_Bool)t130;
  struct std___Rb_tree_node_int_* ternary132;
  if (cast131) {
    struct std___Rb_tree_node_int_* t133 = __x126;
    struct std___Rb_tree_node_base* base134 = (struct std___Rb_tree_node_base*)((char *)t133 + 0);
    struct std___Rb_tree_node_base* t135 = base134->_M_left;
    struct std___Rb_tree_node_int_* derived136 = (struct std___Rb_tree_node_int_*)((char *)t135 - 0);
    struct std___Rb_tree_node_int_* r137 = std___Rb_tree_node_int____M_node_ptr(derived136);
    ternary132 = (struct std___Rb_tree_node_int_*)r137;
  } else {
    struct std___Rb_tree_node_int_* c138 = ((void*)0);
    ternary132 = (struct std___Rb_tree_node_int_*)c138;
  }
  __retval127 = ternary132;
  struct std___Rb_tree_node_int_* t139 = __retval127;
  return t139;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v140) {
bb141:
  int* __location142;
  __location142 = v140;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v143, int* v144) {
bb145:
  struct std__allocator_std___Rb_tree_node_int__* __a146;
  int* __p147;
  __a146 = v143;
  __p147 = v144;
  int* t148 = __p147;
  void_std__destroy_at_int_(t148);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v149) {
bb150:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this151;
  struct std__allocator_std___Rb_tree_node_int__* __retval152;
  this151 = v149;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t153 = this151;
  struct std__allocator_std___Rb_tree_node_int__* base154 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t153->_M_impl) + 0);
  __retval152 = base154;
  struct std__allocator_std___Rb_tree_node_int__* t155 = __retval152;
  return t155;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v156) {
bb157:
  struct __gnu_cxx____aligned_membuf_int_* this158;
  void* __retval159;
  this158 = v156;
  struct __gnu_cxx____aligned_membuf_int_* t160 = this158;
  void* cast161 = (void*)&(t160->_M_storage);
  __retval159 = cast161;
  void* t162 = __retval159;
  return t162;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v163) {
bb164:
  struct __gnu_cxx____aligned_membuf_int_* this165;
  int* __retval166;
  this165 = v163;
  struct __gnu_cxx____aligned_membuf_int_* t167 = this165;
  void* r168 = __gnu_cxx____aligned_membuf_int____M_addr(t167);
  int* cast169 = (int*)r168;
  __retval166 = cast169;
  int* t170 = __retval166;
  return t170;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v171) {
bb172:
  struct std___Rb_tree_node_int_* this173;
  int* __retval174;
  this173 = v171;
  struct std___Rb_tree_node_int_* t175 = this173;
  int* r176 = __gnu_cxx____aligned_membuf_int____M_ptr(&t175->_M_storage);
  __retval174 = r176;
  int* t177 = __retval174;
  return t177;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v178, struct std___Rb_tree_node_int_* v179) {
bb180:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this181;
  struct std___Rb_tree_node_int_* __p182;
  this181 = v178;
  __p182 = v179;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t183 = this181;
  struct std__allocator_std___Rb_tree_node_int__* r184 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t183);
  struct std___Rb_tree_node_int_* t185 = __p182;
  int* r186 = std___Rb_tree_node_int____M_valptr(t185);
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r184, r186);
  struct std___Rb_tree_node_int_* t187 = __p182;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb188:
  _Bool __retval189;
    _Bool c190 = 0;
    __retval189 = c190;
    _Bool t191 = __retval189;
    return t191;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v192, struct std___Rb_tree_node_int_* v193, unsigned long v194) {
bb195:
  struct std____new_allocator_std___Rb_tree_node_int__* this196;
  struct std___Rb_tree_node_int_* __p197;
  unsigned long __n198;
  this196 = v192;
  __p197 = v193;
  __n198 = v194;
  struct std____new_allocator_std___Rb_tree_node_int__* t199 = this196;
    unsigned long c200 = 8;
    unsigned long c201 = 16;
    _Bool c202 = ((c200 > c201)) ? 1 : 0;
    if (c202) {
      struct std___Rb_tree_node_int_* t203 = __p197;
      void* cast204 = (void*)t203;
      unsigned long t205 = __n198;
      unsigned long c206 = 40;
      unsigned long b207 = t205 * c206;
      unsigned long c208 = 8;
      operator_delete_3(cast204, b207, c208);
      return;
    }
  struct std___Rb_tree_node_int_* t209 = __p197;
  void* cast210 = (void*)t209;
  unsigned long t211 = __n198;
  unsigned long c212 = 40;
  unsigned long b213 = t211 * c212;
  operator_delete_2(cast210, b213);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v214, struct std___Rb_tree_node_int_* v215, unsigned long v216) {
bb217:
  struct std__allocator_std___Rb_tree_node_int__* this218;
  struct std___Rb_tree_node_int_* __p219;
  unsigned long __n220;
  this218 = v214;
  __p219 = v215;
  __n220 = v216;
  struct std__allocator_std___Rb_tree_node_int__* t221 = this218;
    _Bool r222 = std____is_constant_evaluated();
    if (r222) {
      struct std___Rb_tree_node_int_* t223 = __p219;
      void* cast224 = (void*)t223;
      operator_delete(cast224);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base225 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t221 + 0);
  struct std___Rb_tree_node_int_* t226 = __p219;
  unsigned long t227 = __n220;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base225, t226, t227);
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v228, struct std___Rb_tree_node_int_* v229, unsigned long v230) {
bb231:
  struct std__allocator_std___Rb_tree_node_int__* __a232;
  struct std___Rb_tree_node_int_* __p233;
  unsigned long __n234;
  __a232 = v228;
  __p233 = v229;
  __n234 = v230;
  struct std__allocator_std___Rb_tree_node_int__* t235 = __a232;
  struct std___Rb_tree_node_int_* t236 = __p233;
  unsigned long t237 = __n234;
  std__allocator_std___Rb_tree_node_int_____deallocate(t235, t236, t237);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v238, struct std___Rb_tree_node_int_* v239) {
bb240:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this241;
  struct std___Rb_tree_node_int_* __p242;
  this241 = v238;
  __p242 = v239;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t243 = this241;
  struct std__allocator_std___Rb_tree_node_int__* r244 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t243);
  struct std___Rb_tree_node_int_* t245 = __p242;
  unsigned long c246 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r244, t245, c246);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v247, struct std___Rb_tree_node_int_* v248) {
bb249:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this250;
  struct std___Rb_tree_node_int_* __p251;
  this250 = v247;
  __p251 = v248;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t252 = this250;
  struct std___Rb_tree_node_int_* t253 = __p251;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t252, t253);
  struct std___Rb_tree_node_int_* t254 = __p251;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t252, t254);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v255, struct std___Rb_tree_node_int_* v256) {
bb257:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this258;
  struct std___Rb_tree_node_int_* __x259;
  this258 = v255;
  __x259 = v256;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t260 = this258;
    while (1) {
      struct std___Rb_tree_node_int_* t261 = __x259;
      _Bool cast262 = (_Bool)t261;
      if (!cast262) break;
        struct std___Rb_tree_node_int_* __y263;
        struct std___Rb_tree_node_int_* t264 = __x259;
        struct std___Rb_tree_node_int_* r265 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t264);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t260, r265);
        struct std___Rb_tree_node_int_* t266 = __x259;
        struct std___Rb_tree_node_int_* r267 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t266);
        __y263 = r267;
        struct std___Rb_tree_node_int_* t268 = __x259;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t260, t268);
        struct std___Rb_tree_node_int_* t269 = __y263;
        __x259 = t269;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v270) {
bb271:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this272;
  struct std___Rb_tree_node_int_* __retval273;
  struct std___Rb_tree_node_base* __begin274;
  this272 = v270;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t275 = this272;
  struct std___Rb_tree_header* base276 = (struct std___Rb_tree_header*)((char *)&(t275->_M_impl) + 8);
  struct std___Rb_tree_node_base* t277 = base276->_M_header._M_parent;
  __begin274 = t277;
  struct std___Rb_tree_node_base* t278 = __begin274;
  _Bool cast279 = (_Bool)t278;
  struct std___Rb_tree_node_int_* ternary280;
  if (cast279) {
    struct std___Rb_tree_node_base* t281 = __begin274;
    struct std___Rb_tree_node_int_* derived282 = (struct std___Rb_tree_node_int_*)((char *)t281 - 0);
    struct std___Rb_tree_node_int_* r283 = std___Rb_tree_node_int____M_node_ptr(derived282);
    ternary280 = (struct std___Rb_tree_node_int_*)r283;
  } else {
    struct std___Rb_tree_node_int_* c284 = ((void*)0);
    ternary280 = (struct std___Rb_tree_node_int_*)c284;
  }
  __retval273 = ternary280;
  struct std___Rb_tree_node_int_* t285 = __retval273;
  return t285;
}

