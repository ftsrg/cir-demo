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
struct std___Deque_iterator_int_int___int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
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
char _str[21] = "mydeque1 != mydeque2";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_end_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[23] = "*(mydeque1.end()) != 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[18] = "mydeque contains:";
char _str_4[9] = "*it == 1";
char _str_5[2] = " ";
char _str_6[48] = "cannot create std::deque larger than max_size()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque12;
  struct std__deque_int__std__allocator_int__ mydeque23;
  struct std___Deque_iterator_int__int____int___ it4;
  struct std___Deque_iterator_int__int____int___ ref_tmp15;
  struct std___Deque_iterator_int__int____int___ ref_tmp26;
  int c7 = 0;
  __retval1 = c7;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque12, sizeof(mydeque12));
    // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
    __VERIFIER_nondet_memory(&mydeque23, sizeof(mydeque23));
      // externalized std:: op: std::_Deque_iterator<int, int&, int*>::_Deque_iterator()
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
        int i8;
        struct std___Deque_iterator_int_int___int___ agg_tmp09;
        struct std___Deque_iterator_int__int____int___ ref_tmp010;
        struct std___Deque_iterator_int__int____int___ agg_tmp111;
        int c12 = 1;
        i8 = c12;
        while (1) {
          int t14 = i8;
          int c15 = 5;
          _Bool c16 = ((t14 <= c15)) ? 1 : 0;
          if (!c16) break;
          struct std___Deque_iterator_int__int____int___ std17;
          __VERIFIER_nondet_memory(&std17, sizeof(std17));
          ref_tmp010 = std17;
          // externalized std:: op: std::_Deque_iterator<int, int const&, int const*>::_Deque_iterator<std::_Deque_iterator<int, int&, int*>, void>(std::_Deque_iterator<int, int&, int*> const&)
          __VERIFIER_nondet_memory(&agg_tmp09, sizeof(agg_tmp09));
          __VERIFIER_nondet_memory(&ref_tmp010, sizeof(ref_tmp010));
          struct std___Deque_iterator_int_int___int___ t18 = agg_tmp09;
          struct std___Deque_iterator_int__int____int___ std19;
          __VERIFIER_nondet_memory(&std19, sizeof(std19));
          agg_tmp111 = std19;
        for_step13: ;
          int t20 = i8;
          int u21 = t20 + 1;
          i8 = u21;
        }
        int i22;
        int c23 = 1;
        i22 = c23;
        while (1) {
          int t25 = i22;
          int c26 = 5;
          _Bool c27 = ((t25 <= c26)) ? 1 : 0;
          if (!c27) break;
          // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int const&)
          __VERIFIER_nondet_memory(&mydeque23, sizeof(mydeque23));
          __VERIFIER_nondet_memory(&i22, sizeof(i22));
        for_step24: ;
          int t28 = i22;
          int u29 = t28 + 1;
          i22 = u29;
        }
      _Bool std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      _Bool u31 = !std30;
      if (u31) {
      } else {
        char* cast32 = (char*)&(_str);
        char* c33 = _str_1;
        unsigned int c34 = 24;
        char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast32, c33, c34, cast35);
      }
      struct std___Deque_iterator_int__int____int___ std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      ref_tmp15 = std36;
      int* std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      int t38 = *std37;
      int c39 = 0;
      _Bool c40 = ((t38 != c39)) ? 1 : 0;
      if (c40) {
      } else {
        char* cast41 = (char*)&(_str_2);
        char* c42 = _str_1;
        unsigned int c43 = 25;
        char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast41, c42, c43, cast44);
      }
      char* cast45 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      struct std___Deque_iterator_int__int____int___ std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      ref_tmp26 = std47;
      struct std___Deque_iterator_int__int____int___* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      int* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      int t50 = *std49;
      int c51 = 1;
      _Bool c52 = ((t50 == c51)) ? 1 : 0;
      if (c52) {
      } else {
        char* cast53 = (char*)&(_str_4);
        char* c54 = _str_1;
        unsigned int c55 = 29;
        char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast53, c54, c55, cast56);
      }
        struct std___Deque_iterator_int__int____int___ ref_tmp357;
        struct std___Deque_iterator_int__int____int___ ref_tmp458;
        while (1) {
          struct std___Deque_iterator_int__int____int___ std59;
          __VERIFIER_nondet_memory(&std59, sizeof(std59));
          ref_tmp357 = std59;
          _Bool std60;
          __VERIFIER_nondet_memory(&std60, sizeof(std60));
          _Bool u61 = !std60;
          if (!u61) break;
          char* cast62 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std63;
          __VERIFIER_nondet_memory(&std63, sizeof(std63));
          int c64 = 0;
          struct std___Deque_iterator_int__int____int___ std65;
          __VERIFIER_nondet_memory(&std65, sizeof(std65));
          ref_tmp458 = std65;
          int* std66;
          __VERIFIER_nondet_memory(&std66, sizeof(std66));
          int t67 = *std66;
          struct std__basic_ostream_char__std__char_traits_char__* std68;
          __VERIFIER_nondet_memory(&std68, sizeof(std68));
        }
      struct std__basic_ostream_char__std__char_traits_char__* std69;
      __VERIFIER_nondet_memory(&std69, sizeof(std69));
      int c70 = 0;
      __retval1 = c70;
      int t71 = __retval1;
      int ret_val72 = t71;
      {
        // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
        __VERIFIER_nondet_memory(&mydeque23, sizeof(mydeque23));
      }
      {
        // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
        __VERIFIER_nondet_memory(&mydeque12, sizeof(mydeque12));
      }
      return ret_val72;
  int t73 = __retval1;
  return t73;
}

