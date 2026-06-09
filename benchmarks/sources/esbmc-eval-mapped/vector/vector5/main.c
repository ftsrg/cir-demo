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
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

char _str[24] = "vectorTwo.front() == 10";
char _str_1[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector5/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_4[9] = "__n >= 0";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ vectorOne2;
  int ref_tmp03;
  struct std__allocator_int_ ref_tmp14;
  struct std__vector_int__std__allocator_int__ vectorTwo5;
  int c6 = 0;
  __retval1 = c6;
  unsigned long c7 = 10;
  int c8 = 5;
  ref_tmp03 = c8;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&vectorOne2, sizeof(vectorOne2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  }
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(std::vector<int, std::allocator<int> > const&)
    __VERIFIER_nondet_memory(&vectorTwo5, sizeof(vectorTwo5));
    __VERIFIER_nondet_memory(&vectorOne2, sizeof(vectorOne2));
      int* std9;
      __VERIFIER_nondet_memory(&std9, sizeof(std9));
      int t10 = *std9;
      int c11 = 10;
      _Bool c12 = ((t10 == c11)) ? 1 : 0;
      if (c12) {
      } else {
        char* cast13 = (char*)&(_str);
        char* c14 = _str_1;
        unsigned int c15 = 15;
        char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast13, c14, c15, cast16);
      }
      int c17 = 0;
      __retval1 = c17;
      int t18 = __retval1;
      int ret_val19 = t18;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&vectorTwo5, sizeof(vectorTwo5));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&vectorOne2, sizeof(vectorOne2));
      }
      return ret_val19;
  int t20 = __retval1;
  return t20;
}

