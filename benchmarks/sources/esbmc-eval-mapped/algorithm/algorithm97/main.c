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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[12] = "*bound != 6";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm97/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[13] = "odd members:";
char _str_3[2] = " ";
char _str_4[15] = "\neven members:";
char _str_5[26] = "vector::_M_realloc_append";
_Bool IsOdd(int p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = ((b6 == c7)) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  struct std__vector_int__std__allocator_int__ myvector12;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it13;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ bound14;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp117;
  int c18 = 0;
  __retval11 = c18;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it13, sizeof(it13));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&bound14, sizeof(bound14));
      int i19;
      int c20 = 1;
      i19 = c20;
      while (1) {
        int t22 = i19;
        int c23 = 10;
        _Bool c24 = ((t22 < c23)) ? 1 : 0;
        if (!c24) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
        __VERIFIER_nondet_memory(&i19, sizeof(i19));
      for_step21: ;
        int t25 = i19;
        int u26 = t25 + 1;
        i19 = u26;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp016 = std27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp117 = std28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t29 = agg_tmp016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp117;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    ref_tmp015 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = *std33;
    int c35 = 6;
    _Bool c36 = ((t34 != c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str);
      char* c38 = _str_1;
      unsigned int c39 = 25;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    char* cast41 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp143;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      ref_tmp143 = std44;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
      while (1) {
        _Bool std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        _Bool u48 = !std47;
        if (!u48) break;
        char* cast49 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        int* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        int t52 = *std51;
        struct std__basic_ostream_char__std__char_traits_char__* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
      for_step46: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std54;
        __VERIFIER_nondet_memory(&std54, sizeof(std54));
      }
    char* cast55 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp257;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        ref_tmp257 = std60;
        _Bool std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        _Bool u62 = !std61;
        if (!u62) break;
        char* cast63 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        int* std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        int t66 = *std65;
        struct std__basic_ostream_char__std__char_traits_char__* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
      for_step59: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    int c70 = 0;
    __retval11 = c70;
    int t71 = __retval11;
    int ret_val72 = t71;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    }
    return ret_val72;
  int t73 = __retval11;
  return t73;
}

