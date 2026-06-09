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
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_;
struct std__allocator_int___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

char _str[19] = "d.back() == 10 - i";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_deque-test/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "d.front() == 8 - i";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv[76] = "void std::deque<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ d2;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&d2, sizeof(d2));
      int i4;
      int c5 = 0;
      i4 = c5;
      while (1) {
        int t7 = i4;
        int c8 = 10;
        _Bool c9 = ((t7 < c8)) ? 1 : 0;
        if (!c9) break;
            int t10 = i4;
            int c11 = 2;
            int b12 = t10 % c11;
            _Bool cast13 = (_Bool)b12;
            if (cast13) {
              // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int const&)
              __VERIFIER_nondet_memory(&d2, sizeof(d2));
              __VERIFIER_nondet_memory(&i4, sizeof(i4));
            } else {
              // externalized std:: op: std::deque<int, std::allocator<int> >::push_front(int const&)
              __VERIFIER_nondet_memory(&d2, sizeof(d2));
              __VERIFIER_nondet_memory(&i4, sizeof(i4));
            }
      for_step6: ;
        int t14 = i4;
        int u15 = t14 + 1;
        i4 = u15;
      }
      int i16;
      int c17 = 0;
      i16 = c17;
      while (1) {
        int t19 = i16;
        int c20 = 10;
        _Bool c21 = ((t19 < c20)) ? 1 : 0;
        if (!c21) break;
            int t22 = i16;
            int c23 = 2;
            int b24 = t22 % c23;
            _Bool cast25 = (_Bool)b24;
            if (cast25) {
              int* std26;
              __VERIFIER_nondet_memory(&std26, sizeof(std26));
              int t27 = *std26;
              int c28 = 10;
              int t29 = i16;
              int b30 = c28 - t29;
              _Bool c31 = ((t27 == b30)) ? 1 : 0;
              if (c31) {
              } else {
                char* cast32 = (char*)&(_str);
                char* c33 = _str_1;
                unsigned int c34 = 24;
                char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast32, c33, c34, cast35);
              }
              // externalized std:: op: std::deque<int, std::allocator<int> >::pop_back()
              __VERIFIER_nondet_memory(&d2, sizeof(d2));
            } else {
              int* std36;
              __VERIFIER_nondet_memory(&std36, sizeof(std36));
              int t37 = *std36;
              int c38 = 8;
              int t39 = i16;
              int b40 = c38 - t39;
              _Bool c41 = ((t37 == b40)) ? 1 : 0;
              if (c41) {
              } else {
                char* cast42 = (char*)&(_str_2);
                char* c43 = _str_1;
                unsigned int c44 = 27;
                char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast42, c43, c44, cast45);
              }
              // externalized std:: op: std::deque<int, std::allocator<int> >::pop_front()
              __VERIFIER_nondet_memory(&d2, sizeof(d2));
            }
      for_step18: ;
        int t46 = i16;
        int u47 = t46 + 1;
        i16 = u47;
      }
    int c48 = 0;
    __retval1 = c48;
    int t49 = __retval1;
    int ret_val50 = t49;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&d2, sizeof(d2));
    }
    return ret_val50;
  int t51 = __retval1;
  return t51;
}

