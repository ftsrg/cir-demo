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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_;
struct std__allocator_int___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[21] = "mydeque.back() == 10";
char _str_1[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_pop_back_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "mydeque.back() != 20";
char _str_3[21] = "mydeque.back() == 30";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[32] = "The elements of mydeque summed ";
char _str_5[48] = "cannot create std::deque larger than max_size()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  int sum3;
  int ref_tmp04;
  int ref_tmp15;
  int ref_tmp26;
  int c7 = 0;
  __retval1 = c7;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    int c8 = 0;
    sum3 = c8;
    int c9 = 10;
    ref_tmp04 = c9;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int* std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
    int t11 = *std10;
    int c12 = 10;
    _Bool c13 = ((t11 == c12)) ? 1 : 0;
    if (c13) {
    } else {
      char* cast14 = (char*)&(_str);
      char* c15 = _str_1;
      unsigned int c16 = 19;
      char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast14, c15, c16, cast17);
    }
    int c18 = 20;
    ref_tmp15 = c18;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    int t20 = *std19;
    int c21 = 20;
    _Bool c22 = ((t20 != c21)) ? 1 : 0;
    if (c22) {
    } else {
      char* cast23 = (char*)&(_str_2);
      char* c24 = _str_1;
      unsigned int c25 = 21;
      char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast23, c24, c25, cast26);
    }
    int c27 = 30;
    ref_tmp26 = c27;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    int* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int t29 = *std28;
    int c30 = 30;
    _Bool c31 = ((t29 == c30)) ? 1 : 0;
    if (c31) {
    } else {
      char* cast32 = (char*)&(_str_3);
      char* c33 = _str_1;
      unsigned int c34 = 23;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast32, c33, c34, cast35);
    }
      while (1) {
        _Bool std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        _Bool u37 = !std36;
        if (!u37) break;
          int* std38;
          __VERIFIER_nondet_memory(&std38, sizeof(std38));
          int t39 = *std38;
          int t40 = sum3;
          int b41 = t40 + t39;
          sum3 = b41;
          // externalized std:: op: std::deque<int, std::allocator<int> >::pop_back()
          __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
      }
    char* cast42 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int t44 = sum3;
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    struct std__basic_ostream_char__std__char_traits_char__* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    int c47 = 0;
    __retval1 = c47;
    int t48 = __retval1;
    int ret_val49 = t48;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    }
    return ret_val49;
  int t50 = __retval1;
  return t50;
}

