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
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_;
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__less_int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[3] = {5, 10, 15};
char _str[18] = "myset.size() == 3";
char _str_1[127] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-insert-with-iterators/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[9] = "*it == 5";
char _str_3[10] = "*it == 10";
char _str_4[10] = "*it == 15";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset2;
  struct std___Rb_tree_const_iterator_int_ it3;
  int myints4[3];
  struct std___Rb_tree_const_iterator_int_ ref_tmp05;
  struct std___Rb_tree_const_iterator_int_ agg_tmp06;
  struct std___Rb_tree_const_iterator_int_ agg_tmp17;
  int c8 = 0;
  __retval1 = c8;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    // array copy
    __builtin_memcpy(myints4, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
    int* cast9 = (int*)&(myints4);
    int* cast10 = (int*)&(myints4);
    int c11 = 3;
    int* ptr12 = &(cast10)[c11];
    // externalized std:: op: void std::multiset<int, std::less<int>, std::allocator<int> >::insert<int*>(int*, int*)
    __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
    __VERIFIER_nondet_memory(ptr12, sizeof(*ptr12));
    unsigned long std13 = __VERIFIER_nondet_unsigned_long();
    unsigned long c14 = 3;
    _Bool c15 = ((std13 == c14)) ? 1 : 0;
    if (c15) {
    } else {
      char* cast16 = (char*)&(_str);
      char* c17 = _str_1;
      unsigned int c18 = 22;
      char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast16, c17, c18, cast19);
    }
    struct std___Rb_tree_const_iterator_int_ std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    ref_tmp05 = std20;
    struct std___Rb_tree_const_iterator_int_* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    int* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    int t23 = *std22;
    int c24 = 5;
    _Bool c25 = ((t23 == c24)) ? 1 : 0;
    if (c25) {
    } else {
      char* cast26 = (char*)&(_str_2);
      char* c27 = _str_1;
      unsigned int c28 = 25;
      char* cast29 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast26, c27, c28, cast29);
    }
    int c30 = 0;
    struct std___Rb_tree_const_iterator_int_ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    agg_tmp06 = std31;
    int* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int t33 = *std32;
    int c34 = 10;
    _Bool c35 = ((t33 == c34)) ? 1 : 0;
    if (c35) {
    } else {
      char* cast36 = (char*)&(_str_3);
      char* c37 = _str_1;
      unsigned int c38 = 27;
      char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast36, c37, c38, cast39);
    }
    int c40 = 0;
    struct std___Rb_tree_const_iterator_int_ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    agg_tmp17 = std41;
    int* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int t43 = *std42;
    int c44 = 15;
    _Bool c45 = ((t43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str_4);
      char* c47 = _str_1;
      unsigned int c48 = 29;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    int c50 = 0;
    __retval1 = c50;
    int t51 = __retval1;
    int ret_val52 = t51;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val52;
  int t53 = __retval1;
  return t53;
}

