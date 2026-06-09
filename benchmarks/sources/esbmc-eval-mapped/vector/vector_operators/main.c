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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

struct std____cmp_cat____unspec __const_main_agg_tmp1;
struct std____cmp_cat____unspec __const__ZSt33lexicographical_compare_three_wayIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_NSt8__detail10_Synth3wayEEDTclfp3_defp_defp1_EET_SB_T0_SC_T1__agg_tmp1;
char _str[9] = "v1 == v2";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector_operators/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[9] = "v1 != v2";
char _str_3[9] = "v1 >= v2";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[26] = "vector::_M_realloc_append";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
struct std__strong_ordering _ZNSt15strong_ordering7greaterE = {1};
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ v12;
  struct std__allocator_int_ ref_tmp03;
  struct std__vector_int__std__allocator_int__ v24;
  struct std__allocator_int_ ref_tmp15;
  int ref_tmp26;
  int ref_tmp37;
  int ref_tmp48;
  struct std__strong_ordering agg_tmp09;
  struct std____cmp_cat____unspec agg_tmp110;
  int c11 = 0;
  __retval1 = c11;
  unsigned long c12 = 5;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v12, sizeof(v12));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    unsigned long c13 = 3;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&v24, sizeof(v24));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      int c14 = 0;
      ref_tmp26 = c14;
      // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
      __VERIFIER_nondet_memory(&v24, sizeof(v24));
      __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
      int c15 = 0;
      ref_tmp37 = c15;
      // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
      __VERIFIER_nondet_memory(&v24, sizeof(v24));
      __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
      _Bool std16;
      __VERIFIER_nondet_memory(&std16, sizeof(std16));
      if (std16) {
      } else {
        char* cast17 = (char*)&(_str);
        char* c18 = _str_1;
        unsigned int c19 = 17;
        char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast17, c18, c19, cast20);
      }
      int c21 = 2;
      ref_tmp48 = c21;
      // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
      __VERIFIER_nondet_memory(&v12, sizeof(v12));
      __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
      _Bool std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      _Bool u23 = !std22;
      if (u23) {
      } else {
        char* cast24 = (char*)&(_str_2);
        char* c25 = _str_1;
        unsigned int c26 = 19;
        char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast24, c25, c26, cast27);
      }
      struct std__strong_ordering std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      agg_tmp09 = std28;
      agg_tmp110 = *&__const_main_agg_tmp1; // copy
      struct std__strong_ordering t29 = agg_tmp09;
      struct std____cmp_cat____unspec t30 = agg_tmp110;
      _Bool std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      if (std31) {
      } else {
        char* cast32 = (char*)&(_str_3);
        char* c33 = _str_1;
        unsigned int c34 = 20;
        char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast32, c33, c34, cast35);
      }
      int c36 = 0;
      __retval1 = c36;
      int t37 = __retval1;
      int ret_val38 = t37;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&v24, sizeof(v24));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&v12, sizeof(v12));
      }
      return ret_val38;
  int t39 = __retval1;
  return t39;
}

