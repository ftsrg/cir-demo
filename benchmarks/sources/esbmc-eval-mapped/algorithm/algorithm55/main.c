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
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_second[5] = {10, 20, 30, 40, 50};
int __const_main_first[5] = {5, 10, 15, 20, 25};
char _str[10] = "v[0] == 5";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm55/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[11] = "v[1] == 15";
char _str_3[11] = "v[2] == 25";
char _str_4[11] = "v[3] == 30";
char _str_5[11] = "v[4] == 40";
char _str_6[11] = "v[5] == 50";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int first2[5];
  int second3[5];
  struct std__vector_int__std__allocator_int__ v4;
  struct std__allocator_int_ ref_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it6;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp17;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp08;
  int c9 = 0;
  __retval1 = c9;
  // array copy
  __builtin_memcpy(first2, __const_main_first, (unsigned long)5 * sizeof(__const_main_first[0]));
  // array copy
  __builtin_memcpy(second3, __const_main_second, (unsigned long)5 * sizeof(__const_main_second[0]));
  unsigned long c10 = 10;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v4, sizeof(v4));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it6, sizeof(it6));
    int* cast11 = (int*)&(first2);
    int* cast12 = (int*)&(first2);
    int c13 = 5;
    int* ptr14 = &(cast12)[c13];
    int* cast15 = (int*)&(second3);
    int* cast16 = (int*)&(second3);
    int c17 = 5;
    int* ptr18 = &(cast16)[c17];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    agg_tmp08 = std19;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t20 = agg_tmp08;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    ref_tmp17 = std21;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    unsigned long c23 = 0;
    int* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    int t25 = *std24;
    int c26 = 5;
    _Bool c27 = ((t25 == c26)) ? 1 : 0;
    if (c27) {
    } else {
      char* cast28 = (char*)&(_str);
      char* c29 = _str_1;
      unsigned int c30 = 23;
      char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast28, c29, c30, cast31);
    }
    unsigned long c32 = 1;
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = *std33;
    int c35 = 15;
    _Bool c36 = ((t34 == c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str_2);
      char* c38 = _str_1;
      unsigned int c39 = 24;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    unsigned long c41 = 2;
    int* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int t43 = *std42;
    int c44 = 25;
    _Bool c45 = ((t43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str_3);
      char* c47 = _str_1;
      unsigned int c48 = 25;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    unsigned long c50 = 3;
    int* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    int t52 = *std51;
    int c53 = 30;
    _Bool c54 = ((t52 == c53)) ? 1 : 0;
    if (c54) {
    } else {
      char* cast55 = (char*)&(_str_4);
      char* c56 = _str_1;
      unsigned int c57 = 26;
      char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast55, c56, c57, cast58);
    }
    unsigned long c59 = 4;
    int* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    int t61 = *std60;
    int c62 = 40;
    _Bool c63 = ((t61 == c62)) ? 1 : 0;
    if (c63) {
    } else {
      char* cast64 = (char*)&(_str_5);
      char* c65 = _str_1;
      unsigned int c66 = 27;
      char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast64, c65, c66, cast67);
    }
    unsigned long c68 = 5;
    int* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    int t70 = *std69;
    int c71 = 50;
    _Bool c72 = ((t70 == c71)) ? 1 : 0;
    if (c72) {
    } else {
      char* cast73 = (char*)&(_str_6);
      char* c74 = _str_1;
      unsigned int c75 = 28;
      char* cast76 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast73, c74, c75, cast76);
    }
    int c77 = 0;
    __retval1 = c77;
    int t78 = __retval1;
    int ret_val79 = t78;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v4, sizeof(v4));
    }
    return ret_val79;
  int t80 = __retval1;
  return t80;
}

