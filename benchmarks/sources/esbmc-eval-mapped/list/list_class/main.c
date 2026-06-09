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
struct A_bool_ { _Bool a; };
struct __gnu_cxx____aligned_membuf_A_bool__ { unsigned char _M_storage[1]; };
struct std___List_iterator_A_bool__ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_A_bool____ { struct std__allocator_std___List_node_A_bool___* _M_alloc; struct std___List_node_A_bool__* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_std___List_node_A_bool___;
struct std__allocator_std___List_node_A_bool___;
struct std___List_node_A_bool__;
struct std____allocated_obj_std__allocator_std___List_node_A_bool____ { struct std____allocated_ptr_std__allocator_std___List_node_A_bool____ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_A_bool___std__allocator_A_bool______List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_A_bool___std__allocator_A_bool___ { struct std____cxx11___List_base_A_bool___std__allocator_A_bool______List_impl _M_impl; };
struct std____cxx11__list_A_bool___std__allocator_A_bool___ { struct std____cxx11___List_base_A_bool___std__allocator_A_bool___ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
char _str[18] = "(x.front()).get()";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_class/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listI1AIbESaIS2_EE5frontEv[88] = "reference std::list<A<bool>>::front() [_Tp = A<bool>, _Alloc = std::allocator<A<bool>>]";
char _str_3[15] = "!this->empty()";
_Bool A_bool___get(struct A_bool_* p0);
_Bool operator___2(struct A_bool_ p0, struct A_bool_ p1);
_Bool operator__(struct A_bool_ p0, struct A_bool_ p1);
_Bool operator_(struct A_bool_ p0, struct A_bool_ p1);
void A_bool___A(struct A_bool_* p0);
void A_bool___set(struct A_bool_* p0, _Bool p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN1AIbE3getEv
_Bool A_bool___get(struct A_bool_* v0) {
bb1:
  struct A_bool_* this2;
  _Bool __retval3;
  this2 = v0;
  struct A_bool_* t4 = this2;
  _Bool t5 = t4->a;
  __retval3 = t5;
  _Bool t6 = __retval3;
  return t6;
}

// function: _Zne1AIbES0_
_Bool operator___2(struct A_bool_ v7, struct A_bool_ v8) {
bb9:
  struct A_bool_ x10;
  struct A_bool_ y11;
  _Bool __retval12;
  x10 = v7;
  y11 = v8;
    _Bool r13 = A_bool___get(&x10);
    int cast14 = (int)r13;
    _Bool r15 = A_bool___get(&y11);
    int cast16 = (int)r15;
    _Bool c17 = ((cast14 != cast16)) ? 1 : 0;
    if (c17) {
      _Bool c18 = 1;
      __retval12 = c18;
      _Bool t19 = __retval12;
      return t19;
    }
  _Bool c20 = 0;
  __retval12 = c20;
  _Bool t21 = __retval12;
  return t21;
}

// function: _Zeq1AIbES0_
_Bool operator__(struct A_bool_ v22, struct A_bool_ v23) {
bb24:
  struct A_bool_ x25;
  struct A_bool_ y26;
  _Bool __retval27;
  x25 = v22;
  y26 = v23;
    _Bool r28 = A_bool___get(&x25);
    int cast29 = (int)r28;
    _Bool r30 = A_bool___get(&y26);
    int cast31 = (int)r30;
    _Bool c32 = ((cast29 == cast31)) ? 1 : 0;
    if (c32) {
      _Bool c33 = 1;
      __retval27 = c33;
      _Bool t34 = __retval27;
      return t34;
    }
  _Bool c35 = 0;
  __retval27 = c35;
  _Bool t36 = __retval27;
  return t36;
}

// function: _Zlt1AIbES0_
_Bool operator_(struct A_bool_ v37, struct A_bool_ v38) {
bb39:
  struct A_bool_ x40;
  struct A_bool_ y41;
  _Bool __retval42;
  x40 = v37;
  y41 = v38;
  _Bool c43 = 0;
  __retval42 = c43;
  _Bool t44 = __retval42;
  return t44;
}

// function: _ZN1AIbEC2Ev
void A_bool___A(struct A_bool_* v45) {
bb46:
  struct A_bool_* this47;
  this47 = v45;
  struct A_bool_* t48 = this47;
  _Bool c49 = 1;
  t48->a = c49;
  return;
}

// function: _ZN1AIbE3setEb
void A_bool___set(struct A_bool_* v50, _Bool v51) {
bb52:
  struct A_bool_* this53;
  _Bool x54;
  this53 = v50;
  x54 = v51;
  struct A_bool_* t55 = this53;
  _Bool t56 = x54;
  t55->a = t56;
  return;
}

// function: main
int main() {
bb57:
  int __retval58;
  struct std____cxx11__list_A_bool___std__allocator_A_bool___ x59;
  struct A_bool_ a160;
  struct A_bool_ a261;
  int c62 = 0;
  __retval58 = c62;
  // externalized std:: op: std::__cxx11::list<A<bool>, std::allocator<A<bool> > >::list()
  __VERIFIER_nondet_memory(&x59, sizeof(x59));
    A_bool___A(&a160);
    A_bool___A(&a261);
    _Bool c63 = 1;
    A_bool___set(&a160, c63);
    _Bool c64 = 0;
    A_bool___set(&a261, c64);
    // externalized std:: op: std::__cxx11::list<A<bool>, std::allocator<A<bool> > >::push_back(A<bool> const&)
    __VERIFIER_nondet_memory(&x59, sizeof(x59));
    __VERIFIER_nondet_memory(&a160, sizeof(a160));
    // externalized std:: op: std::__cxx11::list<A<bool>, std::allocator<A<bool> > >::push_back(A<bool> const&)
    __VERIFIER_nondet_memory(&x59, sizeof(x59));
    __VERIFIER_nondet_memory(&a261, sizeof(a261));
    struct A_bool_* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    _Bool r66 = A_bool___get(std65);
    if (r66) {
    } else {
      char* cast67 = (char*)&(_str);
      char* c68 = _str_1;
      unsigned int c69 = 55;
      char* cast70 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast67, c68, c69, cast70);
    }
    int c71 = 0;
    __retval58 = c71;
    int t72 = __retval58;
    int ret_val73 = t72;
    {
      // externalized std:: op: std::__cxx11::list<A<bool>, std::allocator<A<bool> > >::~list()
      __VERIFIER_nondet_memory(&x59, sizeof(x59));
    }
    return ret_val73;
  int t74 = __retval58;
  return t74;
}

