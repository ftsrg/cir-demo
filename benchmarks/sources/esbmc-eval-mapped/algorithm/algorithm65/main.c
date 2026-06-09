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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_equals_val_const_int_ { int* _M_value; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[4] = {10, 20, 30, 40};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "The element following 30 is ";
char _str_1[10] = "*it != 30";
char _str_2[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm65/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_3[49] = "cannot create std::vector larger than max_size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[4];
  int* p3;
  struct std__vector_int__std__allocator_int__ myvector4;
  struct std__allocator_int_ ref_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it6;
  int ref_tmp17;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp28;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp09;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp110;
  int ref_tmp311;
  int c12 = 0;
  __retval1 = c12;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
  int* cast13 = (int*)&(myints2);
  int* cast14 = (int*)&(myints2);
  int c15 = 4;
  int* ptr16 = &(cast14)[c15];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector4, sizeof(myvector4));
    __VERIFIER_nondet_memory(cast13, sizeof(*cast13));
    __VERIFIER_nondet_memory(ptr16, sizeof(*ptr16));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it6, sizeof(it6));
    int* cast17 = (int*)&(myints2);
    int* cast18 = (int*)&(myints2);
    int c19 = 4;
    int* ptr20 = &(cast18)[c19];
    int c21 = 30;
    ref_tmp17 = c21;
    int* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    p3 = std22;
    int* t23 = p3;
    int c24 = 1;
    int* ptr25 = &(t23)[c24];
    p3 = ptr25;
    char* cast26 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    int* t28 = p3;
    int t29 = *t28;
    struct std__basic_ostream_char__std__char_traits_char__* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    struct std__basic_ostream_char__std__char_traits_char__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp09 = std32;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp110 = std33;
    int c34 = 30;
    ref_tmp311 = c34;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t35 = agg_tmp09;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t36 = agg_tmp110;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    ref_tmp28 = std37;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    int t40 = *std39;
    int c41 = 30;
    _Bool c42 = ((t40 != c41)) ? 1 : 0;
    if (c42) {
    } else {
      char* cast43 = (char*)&(_str_1);
      char* c44 = _str_2;
      unsigned int c45 = 29;
      char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast43, c44, c45, cast46);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    char* cast48 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    int* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int t51 = *std50;
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int c54 = 0;
    __retval1 = c54;
    int t55 = __retval1;
    int ret_val56 = t55;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector4, sizeof(myvector4));
    }
    return ret_val56;
  int t57 = __retval1;
  return t57;
}

