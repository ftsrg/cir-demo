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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "mydeque contains:";
char _str_1[2] = " ";
char _str_2[17] = "!mydeque.empty()";
char _str_3[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_clear_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[20] = "mydeque.size() != 2";
char _str_5[19] = "\nmydeque contains:";
char _str_6[48] = "cannot create std::deque larger than max_size()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std__deque_int__std__allocator_int__ mydeque3;
  int ref_tmp04;
  int ref_tmp15;
  int ref_tmp26;
  int ref_tmp37;
  int ref_tmp48;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    int c10 = 100;
    ref_tmp04 = c10;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int c11 = 200;
    ref_tmp15 = c11;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int c12 = 300;
    ref_tmp26 = c12;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    char* cast13 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
      unsigned int c15 = 0;
      i2 = c15;
      while (1) {
        unsigned int t17 = i2;
        unsigned long cast18 = (unsigned long)t17;
        unsigned long std19 = __VERIFIER_nondet_unsigned_long();
        _Bool c20 = ((cast18 < std19)) ? 1 : 0;
        if (!c20) break;
        char* cast21 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        unsigned int t23 = i2;
        unsigned long cast24 = (unsigned long)t23;
        int* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        int t26 = *std25;
        struct std__basic_ostream_char__std__char_traits_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
      for_step16: ;
        unsigned int t28 = i2;
        unsigned int u29 = t28 + 1;
        i2 = u29;
      }
    // externalized std:: op: std::deque<int, std::allocator<int> >::clear()
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    _Bool std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    _Bool u31 = !std30;
    if (u31) {
    } else {
      char* cast32 = (char*)&(_str_2);
      char* c33 = _str_3;
      unsigned int c34 = 26;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast32, c33, c34, cast35);
    }
    int c36 = 1101;
    ref_tmp37 = c36;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    int c37 = 2202;
    ref_tmp48 = c37;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    unsigned long std38 = __VERIFIER_nondet_unsigned_long();
    unsigned long c39 = 2;
    _Bool c40 = ((std38 != c39)) ? 1 : 0;
    if (c40) {
    } else {
      char* cast41 = (char*)&(_str_4);
      char* c42 = _str_3;
      unsigned int c43 = 29;
      char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast41, c42, c43, cast44);
    }
    char* cast45 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
      unsigned int c47 = 0;
      i2 = c47;
      while (1) {
        unsigned int t49 = i2;
        unsigned long cast50 = (unsigned long)t49;
        unsigned long std51 = __VERIFIER_nondet_unsigned_long();
        _Bool c52 = ((cast50 < std51)) ? 1 : 0;
        if (!c52) break;
        char* cast53 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std54;
        __VERIFIER_nondet_memory(&std54, sizeof(std54));
        unsigned int t55 = i2;
        unsigned long cast56 = (unsigned long)t55;
        int* std57;
        __VERIFIER_nondet_memory(&std57, sizeof(std57));
        int t58 = *std57;
        struct std__basic_ostream_char__std__char_traits_char__* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
      for_step48: ;
        unsigned int t60 = i2;
        unsigned int u61 = t60 + 1;
        i2 = u61;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    int c63 = 0;
    __retval1 = c63;
    int t64 = __retval1;
    int ret_val65 = t64;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    }
    return ret_val65;
  int t66 = __retval1;
  return t66;
}

