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
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

struct std____cmp_cat____unspec __const_main_agg_tmp1;
char _str[2] = "D";
char _str_1[12] = "aux >= str2";
char _str_2[123] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_greater_eq_2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[29] = "basic_string::_M_replace_aux";
char _str_4[24] = "basic_string::_M_create";
char _str_5[50] = "basic_string: construction from null is not valid";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ aux2;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str13;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp05;
  struct std__allocator_char_ ref_tmp16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp28;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup9;
  struct std__strong_ordering agg_tmp010;
  struct std____cmp_cat____unspec agg_tmp111;
  int c12 = 0;
  __retval1 = c12;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&aux2, sizeof(aux2));
    char c13 = 68;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str13, sizeof(str13));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
        char* cast15 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
          __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
          __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std16;
            __VERIFIER_nondet_memory(&std16, sizeof(std16));
            tmp_exprcleanup7 = std16;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t17 = tmp_exprcleanup7;
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        __VERIFIER_nondet_memory(&str13, sizeof(str13));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std18;
          __VERIFIER_nondet_memory(&std18, sizeof(std18));
          tmp_exprcleanup9 = std18;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t19 = tmp_exprcleanup9;
        struct std__strong_ordering std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        agg_tmp010 = std20;
        agg_tmp111 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t21 = agg_tmp010;
        struct std____cmp_cat____unspec t22 = agg_tmp111;
        _Bool std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        if (std23) {
        } else {
          char* cast24 = (char*)&(_str_1);
          char* c25 = _str_2;
          unsigned int c26 = 18;
          char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast24, c25, c26, cast27);
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str24, sizeof(str24));
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str13, sizeof(str13));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&aux2, sizeof(aux2));
  }
  int t28 = __retval1;
  return t28;
}

