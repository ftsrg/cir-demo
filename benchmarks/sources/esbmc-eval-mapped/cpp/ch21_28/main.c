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
struct std__queue_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "myqueue.back()==75";
char _str_1[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch21_28/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "myqueue.front()==12";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[6] = "x is ";
char _str_4[6] = "x==63";
char _str_5[48] = "cannot create std::deque larger than max_size()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
char _str_8[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE4backEv[75] = "reference std::queue<int>::back() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv[76] = "reference std::queue<int>::front() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__queue_int__std__deque_int__std__allocator_int___ myqueue2;
  int x3;
  int ref_tmp04;
  int ref_tmp15;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::queue<std::deque<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&myqueue2, sizeof(myqueue2));
    int c7 = 12;
    ref_tmp04 = c7;
    // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::push(int&&)
    __VERIFIER_nondet_memory(&myqueue2, sizeof(myqueue2));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int c8 = 75;
    ref_tmp15 = c8;
    // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::push(int&&)
    __VERIFIER_nondet_memory(&myqueue2, sizeof(myqueue2));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
    int t10 = *std9;
    int c11 = 75;
    _Bool c12 = ((t10 == c11)) ? 1 : 0;
    if (c12) {
    } else {
      char* cast13 = (char*)&(_str);
      char* c14 = _str_1;
      unsigned int c15 = 22;
      char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast13, c14, c15, cast16);
    }
    int* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    int t18 = *std17;
    int c19 = 12;
    _Bool c20 = ((t18 == c19)) ? 1 : 0;
    if (c20) {
    } else {
      char* cast21 = (char*)&(_str_2);
      char* c22 = _str_1;
      unsigned int c23 = 23;
      char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast21, c22, c23, cast24);
    }
    int* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    int t26 = *std25;
    int* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    int t28 = *std27;
    int b29 = t26 - t28;
    x3 = b29;
    char* cast30 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = x3;
    struct std__basic_ostream_char__std__char_traits_char__* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    int t35 = x3;
    int c36 = 63;
    _Bool c37 = ((t35 == c36)) ? 1 : 0;
    if (c37) {
    } else {
      char* cast38 = (char*)&(_str_4);
      char* c39 = _str_1;
      unsigned int c40 = 29;
      char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast38, c39, c40, cast41);
    }
    int c42 = 0;
    __retval1 = c42;
    int t43 = __retval1;
    int ret_val44 = t43;
    {
      // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::~queue()
      __VERIFIER_nondet_memory(&myqueue2, sizeof(myqueue2));
    }
    return ret_val44;
  int t45 = __retval1;
  return t45;
}

