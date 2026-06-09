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
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ { double* _M_current; };
struct __gnu_cxx____normal_iterator_double____void_ { double* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl_data { double* _M_start; double* _M_finish; double* _M_end_of_storage; };
struct std____new_allocator_double_;
struct std__allocator_double_;
struct std__vector_double__std__allocator_double_____Guard_alloc { double* _M_storage; unsigned long _M_len; struct std___Vector_base_double__std__allocator_double__* _M_vect; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl { struct std___Vector_base_double__std__allocator_double_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[20] = "Enter marks (y/n)? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[14] = "Enter value: ";
char _str_2[22] = "More students (y/n)? ";
char _str_3[26] = "vector::_M_realloc_append";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_double__std__allocator_double__ student_marks2;
  double mark3;
  char answer4;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::vector<double, std::allocator<double> >::vector()
  __VERIFIER_nondet_memory(&student_marks2, sizeof(student_marks2));
    char* cast6 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std7;
    __VERIFIER_nondet_memory(&std7, sizeof(std7));
    struct std__basic_ostream_char__std__char_traits_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    struct std__basic_istream_char__std__char_traits_char__* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
      while (1) {
        char t10 = answer4;
        int cast11 = (int)t10;
        int c12 = 121;
        _Bool c13 = ((cast11 == c12)) ? 1 : 0;
        _Bool ternary14;
        if (c13) {
          _Bool c15 = 1;
          ternary14 = (_Bool)c15;
        } else {
          char t16 = answer4;
          int cast17 = (int)t16;
          int c18 = 89;
          _Bool c19 = ((cast17 == c18)) ? 1 : 0;
          ternary14 = (_Bool)c19;
        }
        if (!ternary14) break;
          char* cast20 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std21;
          __VERIFIER_nondet_memory(&std21, sizeof(std21));
          struct std__basic_ostream_char__std__char_traits_char__* std22;
          __VERIFIER_nondet_memory(&std22, sizeof(std22));
          struct std__basic_istream_char__std__char_traits_char__* std23;
          __VERIFIER_nondet_memory(&std23, sizeof(std23));
          // externalized std:: op: std::vector<double, std::allocator<double> >::push_back(double const&)
          __VERIFIER_nondet_memory(&student_marks2, sizeof(student_marks2));
          __VERIFIER_nondet_memory(&mark3, sizeof(mark3));
          char* cast24 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* std25;
          __VERIFIER_nondet_memory(&std25, sizeof(std25));
          struct std__basic_ostream_char__std__char_traits_char__* std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          struct std__basic_istream_char__std__char_traits_char__* std27;
          __VERIFIER_nondet_memory(&std27, sizeof(std27));
      }
    int c28 = 0;
    __retval1 = c28;
    int t29 = __retval1;
    int ret_val30 = t29;
    {
      // externalized std:: op: std::vector<double, std::allocator<double> >::~vector()
      __VERIFIER_nondet_memory(&student_marks2, sizeof(student_marks2));
    }
    return ret_val30;
  int t31 = __retval1;
  return t31;
}

