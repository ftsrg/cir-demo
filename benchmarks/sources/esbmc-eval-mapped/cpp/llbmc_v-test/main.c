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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

char _str[10] = "v[i] == i";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_v-test/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ v2;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&v2, sizeof(v2));
      int i4;
      int c5 = 0;
      i4 = c5;
      while (1) {
        int t7 = i4;
        int c8 = 10;
        _Bool c9 = ((t7 < c8)) ? 1 : 0;
        if (!c9) break;
          // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
          __VERIFIER_nondet_memory(&v2, sizeof(v2));
          __VERIFIER_nondet_memory(&i4, sizeof(i4));
      for_step6: ;
        int t10 = i4;
        int u11 = t10 + 1;
        i4 = u11;
      }
      int i12;
      int c13 = 0;
      i12 = c13;
      while (1) {
        int t15 = i12;
        int c16 = 10;
        _Bool c17 = ((t15 < c16)) ? 1 : 0;
        if (!c17) break;
          int t18 = i12;
          unsigned long cast19 = (unsigned long)t18;
          int* std20;
          __VERIFIER_nondet_memory(&std20, sizeof(std20));
          int t21 = *std20;
          int t22 = i12;
          _Bool c23 = ((t21 == t22)) ? 1 : 0;
          if (c23) {
          } else {
            char* cast24 = (char*)&(_str);
            char* c25 = _str_1;
            unsigned int c26 = 20;
            char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast24, c25, c26, cast27);
          }
      for_step14: ;
        int t28 = i12;
        int u29 = t28 + 1;
        i12 = u29;
      }
    int c30 = 0;
    __retval1 = c30;
    int t31 = __retval1;
    int ret_val32 = t31;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v2, sizeof(v2));
    }
    return ret_val32;
  int t33 = __retval1;
  return t33;
}

