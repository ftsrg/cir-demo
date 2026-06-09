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
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[4] = "art";
char _str_1[6] = "earth";
char _str_2[7] = "artist";
char _str_3[39] = "( i != 0 ) && ( j != 0 ) && ( k != 0 )";
char _str_4[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_compare_10_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_7[22] = "basic_string::compare";
char _str_8[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str23;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str34;
  int i5;
  int j6;
  int k7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp08;
  struct std__allocator_char_ ref_tmp19;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup10;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp211;
  struct std__allocator_char_ ref_tmp312;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup13;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp414;
  struct std__allocator_char_ ref_tmp515;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup16;
  int c17 = 0;
  __retval1 = c17;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        char* cast18 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
          __VERIFIER_nondet_memory(cast18, sizeof(*cast18));
          __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std19;
            __VERIFIER_nondet_memory(&std19, sizeof(std19));
            tmp_exprcleanup10 = std19;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t20 = tmp_exprcleanup10;
        char* cast21 = (char*)&(_str_1);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
          __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
          __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std22;
            __VERIFIER_nondet_memory(&std22, sizeof(std22));
            tmp_exprcleanup13 = std22;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t23 = tmp_exprcleanup13;
        char* cast24 = (char*)&(_str_2);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp515, sizeof(ref_tmp515));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
          __VERIFIER_nondet_memory(cast24, sizeof(*cast24));
          __VERIFIER_nondet_memory(&ref_tmp515, sizeof(ref_tmp515));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std25;
            __VERIFIER_nondet_memory(&std25, sizeof(std25));
            tmp_exprcleanup16 = std25;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp515, sizeof(ref_tmp515));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t26 = tmp_exprcleanup16;
        unsigned long c27 = 1;
        unsigned long c28 = 3;
        int std29 = __VERIFIER_nondet_int();
        i5 = std29;
        unsigned long c30 = 0;
        unsigned long c31 = 3;
        int std32 = __VERIFIER_nondet_int();
        j6 = std32;
        unsigned long c33 = 1;
        unsigned long c34 = 3;
        unsigned long c35 = 0;
        unsigned long c36 = 3;
        int std37 = __VERIFIER_nondet_int();
        k7 = std37;
        int t38 = i5;
        int c39 = 0;
        _Bool c40 = ((t38 != c39)) ? 1 : 0;
        _Bool ternary41;
        if (c40) {
          int t42 = j6;
          int c43 = 0;
          _Bool c44 = ((t42 != c43)) ? 1 : 0;
          ternary41 = (_Bool)c44;
        } else {
          _Bool c45 = 0;
          ternary41 = (_Bool)c45;
        }
        _Bool ternary46;
        if (ternary41) {
          int t47 = k7;
          int c48 = 0;
          _Bool c49 = ((t47 != c48)) ? 1 : 0;
          ternary46 = (_Bool)c49;
        } else {
          _Bool c50 = 0;
          ternary46 = (_Bool)c50;
        }
        if (ternary46) {
        } else {
          char* cast51 = (char*)&(_str_3);
          char* c52 = _str_4;
          unsigned int c53 = 24;
          char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast51, c52, c53, cast54);
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str34, sizeof(str34));
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str23, sizeof(str23));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
  }
  int t55 = __retval1;
  return t55;
}

