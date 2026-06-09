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
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
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
char _str_1[19] = "mydeque.at(i) != i";
char _str_2[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_at_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[72] = "deque::_M_range_check: __n (which is %zu)>= this->size() (which is %zu)";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  struct std__allocator_int_ ref_tmp03;
  unsigned int i4;
  int c5 = 0;
  __retval1 = c5;
  unsigned long c6 = 10;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::deque<int, std::allocator<int> >::deque(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
      unsigned int c7 = 0;
      i4 = c7;
      while (1) {
        unsigned int t9 = i4;
        unsigned long cast10 = (unsigned long)t9;
        unsigned long std11 = __VERIFIER_nondet_unsigned_long();
        _Bool c12 = ((cast10 < std11)) ? 1 : 0;
        if (!c12) break;
        unsigned int t13 = i4;
        int cast14 = (int)t13;
        unsigned int t15 = i4;
        unsigned long cast16 = (unsigned long)t15;
        int* std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        *std17 = cast14;
      for_step8: ;
        unsigned int t18 = i4;
        unsigned int u19 = t18 + 1;
        i4 = u19;
      }
    char* cast20 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
      unsigned int c22 = 0;
      i4 = c22;
      while (1) {
        unsigned int t24 = i4;
        unsigned long cast25 = (unsigned long)t24;
        unsigned long std26 = __VERIFIER_nondet_unsigned_long();
        _Bool c27 = ((cast25 < std26)) ? 1 : 0;
        if (!c27) break;
        unsigned int t28 = i4;
        unsigned long cast29 = (unsigned long)t28;
        int* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        int t31 = *std30;
        unsigned int cast32 = (unsigned int)t31;
        unsigned int t33 = i4;
        _Bool c34 = ((cast32 != t33)) ? 1 : 0;
        if (c34) {
        } else {
          char* cast35 = (char*)&(_str_1);
          char* c36 = _str_2;
          unsigned int c37 = 25;
          char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast35, c36, c37, cast38);
        }
      for_step23: ;
        unsigned int t39 = i4;
        unsigned int u40 = t39 + 1;
        i4 = u40;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int c42 = 0;
    __retval1 = c42;
    int t43 = __retval1;
    int ret_val44 = t43;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    }
    return ret_val44;
  int t45 = __retval1;
  return t45;
}

