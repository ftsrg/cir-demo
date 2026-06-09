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
struct std___Rb_tree_node_int_;
struct std____new_allocator_std___Rb_tree_node_int__;
struct std__allocator_std___Rb_tree_node_int__;
struct std__binary_function_int__int__bool_;
struct std__less_int_ { unsigned char __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

char _str[18] = "!mycomp(*it,*it2)";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-key_comp/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__set_int__std__less_int___std__allocator_int__ myset2;
  struct std__less_int_ mycomp3;
  struct std___Rb_tree_const_iterator_int_ it4;
  struct std___Rb_tree_const_iterator_int_ it25;
  int i6;
  int highest7;
  struct std__less_int_ ref_tmp08;
  struct std___Rb_tree_const_iterator_int_ ref_tmp19;
  struct std___Rb_tree_const_iterator_int_ ref_tmp210;
  int c11 = 0;
  __retval1 = c11;
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it25, sizeof(it25));
    struct std__less_int_ std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    ref_tmp08 = std12;
    struct std__less_int_* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    struct std___Rb_tree_const_iterator_int_ std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    ref_tmp19 = std14;
    struct std___Rb_tree_const_iterator_int_* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    struct std___Rb_tree_const_iterator_int_ std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    ref_tmp210 = std16;
    struct std___Rb_tree_const_iterator_int_* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    int* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    int* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    _Bool std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    _Bool u21 = !std20;
    if (u21) {
    } else {
      char* cast22 = (char*)&(_str);
      char* c23 = _str_1;
      unsigned int c24 = 24;
      char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast22, c23, c24, cast25);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    int c27 = 0;
    __retval1 = c27;
    int t28 = __retval1;
    int ret_val29 = t28;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val29;
  int t30 = __retval1;
  return t30;
}

