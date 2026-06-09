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
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[24] = "Popping out elements...";
char _str_1[2] = " ";
char _str_2[24] = "n - 1 != mystack.size()";
char _str_3[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stack/stack_pop_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[16] = "mystack.empty()";
char _str_5[48] = "cannot create std::deque larger than max_size()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv[74] = "reference std::stack<int>::top() [_Tp = int, _Sequence = std::deque<int>]";
char _str_7[15] = "!this->empty()";
char _str_8[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv[69] = "void std::stack<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__stack_int__std__deque_int__std__allocator_int___ mystack2;
  int n3;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::stack<std::deque<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
      int i5;
      int c6 = 0;
      i5 = c6;
      while (1) {
        int t8 = i5;
        int c9 = 5;
        _Bool c10 = ((t8 < c9)) ? 1 : 0;
        if (!c10) break;
        // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::push(int const&)
        __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
        __VERIFIER_nondet_memory(&i5, sizeof(i5));
      for_step7: ;
        int t11 = i5;
        int u12 = t11 + 1;
        i5 = u12;
      }
    char* cast13 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
      while (1) {
        _Bool std15;
        __VERIFIER_nondet_memory(&std15, sizeof(std15));
        _Bool u16 = !std15;
        if (!u16) break;
          unsigned long std17 = __VERIFIER_nondet_unsigned_long();
          int cast18 = (int)std17;
          n3 = cast18;
          char* cast19 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std20;
          __VERIFIER_nondet_memory(&std20, sizeof(std20));
          int* std21;
          __VERIFIER_nondet_memory(&std21, sizeof(std21));
          int t22 = *std21;
          struct std__basic_ostream_char__std__char_traits_char__* std23;
          __VERIFIER_nondet_memory(&std23, sizeof(std23));
          // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::pop()
          __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
          int t24 = n3;
          int c25 = 1;
          int b26 = t24 - c25;
          unsigned long cast27 = (unsigned long)b26;
          unsigned long std28 = __VERIFIER_nondet_unsigned_long();
          _Bool c29 = ((cast27 != std28)) ? 1 : 0;
          if (c29) {
          } else {
            char* cast30 = (char*)&(_str_2);
            char* c31 = _str_3;
            unsigned int c32 = 26;
            char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast30, c31, c32, cast33);
          }
      }
    _Bool std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    if (std34) {
    } else {
      char* cast35 = (char*)&(_str_4);
      char* c36 = _str_3;
      unsigned int c37 = 28;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    int c40 = 0;
    __retval1 = c40;
    int t41 = __retval1;
    int ret_val42 = t41;
    {
      // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::~stack()
      __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
    }
    return ret_val42;
  int t43 = __retval1;
  return t43;
}

