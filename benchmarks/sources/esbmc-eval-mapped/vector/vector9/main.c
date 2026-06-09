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
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __gnu_cxx____normal_iterator_char____void_ { char* _M_current; };
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl_data { char* _M_start; char* _M_finish; char* _M_end_of_storage; };
struct std____new_allocator_char_;
struct std__allocator_char_;
struct std__vector_char__std__allocator_char_____Guard_alloc { char* _M_storage; unsigned long _M_len; struct std___Vector_base_char__std__allocator_char__* _M_vect; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl { struct std___Vector_base_char__std__allocator_char_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[23] = "letters.front() == 'a'";
char _str_1[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector9/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[25] = "The first character is: ";
char _str_3[22] = "letters.back() == 'g'";
char _str_4[22] = "letters.back() == 'f'";
char _str_5[26] = "vector::_M_realloc_append";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE5frontEv[37] = "reference std::vector<char>::front()";
char _str_7[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE4backEv[36] = "reference std::vector<char>::back()";
char __PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE8pop_backEv[35] = "void std::vector<char>::pop_back()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_char__std__allocator_char__ letters2;
  char ref_tmp03;
  char ref_tmp14;
  char ref_tmp25;
  char ref_tmp36;
  char ref_tmp47;
  char ref_tmp58;
  char ref_tmp69;
  int c10 = 0;
  __retval1 = c10;
  // externalized std:: op: std::vector<char, std::allocator<char> >::vector()
  __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    char c11 = 97;
    ref_tmp03 = c11;
    // externalized std:: op: std::vector<char, std::allocator<char> >::push_back(char&&)
    __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    char c12 = 98;
    ref_tmp14 = c12;
    // externalized std:: op: std::vector<char, std::allocator<char> >::push_back(char&&)
    __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    char c13 = 99;
    ref_tmp25 = c13;
    // externalized std:: op: std::vector<char, std::allocator<char> >::push_back(char&&)
    __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    char c14 = 100;
    ref_tmp36 = c14;
    // externalized std:: op: std::vector<char, std::allocator<char> >::push_back(char&&)
    __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    __VERIFIER_nondet_memory(&ref_tmp36, sizeof(ref_tmp36));
    char c15 = 101;
    ref_tmp47 = c15;
    // externalized std:: op: std::vector<char, std::allocator<char> >::push_back(char&&)
    __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    __VERIFIER_nondet_memory(&ref_tmp47, sizeof(ref_tmp47));
    char c16 = 102;
    ref_tmp58 = c16;
    // externalized std:: op: std::vector<char, std::allocator<char> >::push_back(char&&)
    __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    __VERIFIER_nondet_memory(&ref_tmp58, sizeof(ref_tmp58));
    char c17 = 103;
    ref_tmp69 = c17;
    // externalized std:: op: std::vector<char, std::allocator<char> >::push_back(char&&)
    __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    __VERIFIER_nondet_memory(&ref_tmp69, sizeof(ref_tmp69));
      _Bool std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      _Bool u19 = !std18;
      if (u19) {
        char* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        char t21 = *std20;
        int cast22 = (int)t21;
        int c23 = 97;
        _Bool c24 = ((cast22 == c23)) ? 1 : 0;
        if (c24) {
        } else {
          char* cast25 = (char*)&(_str);
          char* c26 = _str_1;
          unsigned int c27 = 24;
          char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast25, c26, c27, cast28);
        }
        char* cast29 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        char* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        char t32 = *std31;
        struct std__basic_ostream_char__std__char_traits_char__* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
      }
    char* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    char t36 = *std35;
    int cast37 = (int)t36;
    int c38 = 103;
    _Bool c39 = ((cast37 == c38)) ? 1 : 0;
    if (c39) {
    } else {
      char* cast40 = (char*)&(_str_3);
      char* c41 = _str_1;
      unsigned int c42 = 27;
      char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast40, c41, c42, cast43);
    }
    // externalized std:: op: std::vector<char, std::allocator<char> >::pop_back()
    __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    char* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    char t45 = *std44;
    int cast46 = (int)t45;
    int c47 = 102;
    _Bool c48 = ((cast46 == c47)) ? 1 : 0;
    if (c48) {
    } else {
      char* cast49 = (char*)&(_str_4);
      char* c50 = _str_1;
      unsigned int c51 = 29;
      char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast49, c50, c51, cast52);
    }
    int c53 = 0;
    __retval1 = c53;
    int t54 = __retval1;
    int ret_val55 = t54;
    {
      // externalized std:: op: std::vector<char, std::allocator<char> >::~vector()
      __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    }
    return ret_val55;
  int t56 = __retval1;
  return t56;
}

