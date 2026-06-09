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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[5] = {10, 20, 30, 40, 50};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[14] = "*myints == 99";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm17-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[26] = "*(myvector.begin()) == 10";
char _str_3[18] = "*(myints+3) == 99";
char _str_4[28] = "*(myvector.begin()+2) == 40";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[19] = "myvector contains:";
char _str_6[2] = " ";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[5];
  struct std__vector_int__std__allocator_int__ myvector3;
  int ref_tmp04;
  struct std__allocator_int_ ref_tmp15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp06;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp27;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp39;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp511;
  int c12 = 0;
  __retval1 = c12;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  unsigned long c13 = 4;
  int c14 = 99;
  ref_tmp04 = c14;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  }
    int* cast15 = (int*)&(myints2);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    agg_tmp06 = std16;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t17 = agg_tmp06;
    // externalized std:: op: void std::iter_swap<int*, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(int*, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
    int* cast18 = (int*)&(myints2);
    int t19 = *cast18;
    int c20 = 99;
    _Bool c21 = ((t19 == c20)) ? 1 : 0;
    if (c21) {
    } else {
      char* cast22 = (char*)&(_str);
      char* c23 = _str_1;
      unsigned int c24 = 22;
      char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast22, c23, c24, cast25);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    ref_tmp27 = std26;
    int* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    int t28 = *std27;
    int c29 = 10;
    _Bool c30 = ((t28 == c29)) ? 1 : 0;
    if (c30) {
    } else {
      char* cast31 = (char*)&(_str_2);
      char* c32 = _str_1;
      unsigned int c33 = 23;
      char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast31, c32, c33, cast34);
    }
    int* cast35 = (int*)&(myints2);
    int c36 = 3;
    int* ptr37 = &(cast35)[c36];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    ref_tmp39 = std38;
    long c39 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    agg_tmp18 = std40;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t41 = agg_tmp18;
    // externalized std:: op: void std::iter_swap<int*, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(int*, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    __VERIFIER_nondet_memory(ptr37, sizeof(*ptr37));
    int* cast42 = (int*)&(myints2);
    int c43 = 3;
    int* ptr44 = &(cast42)[c43];
    int t45 = *ptr44;
    int c46 = 99;
    _Bool c47 = ((t45 == c46)) ? 1 : 0;
    if (c47) {
    } else {
      char* cast48 = (char*)&(_str_3);
      char* c49 = _str_1;
      unsigned int c50 = 27;
      char* cast51 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast48, c49, c50, cast51);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    ref_tmp511 = std52;
    long c53 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    ref_tmp410 = std54;
    int* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    int t56 = *std55;
    int c57 = 40;
    _Bool c58 = ((t56 == c57)) ? 1 : 0;
    if (c58) {
    } else {
      char* cast59 = (char*)&(_str_4);
      char* c60 = _str_1;
      unsigned int c61 = 28;
      char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast59, c60, c61, cast62);
    }
    char* cast63 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it65;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp666;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std67;
      __VERIFIER_nondet_memory(&std67, sizeof(std67));
      it65 = std67;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
        ref_tmp666 = std69;
        _Bool std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        _Bool u71 = !std70;
        if (!u71) break;
        char* cast72 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
        int* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        int t75 = *std74;
        struct std__basic_ostream_char__std__char_traits_char__* std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
      for_step68: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    int c79 = 0;
    __retval1 = c79;
    int t80 = __retval1;
    int ret_val81 = t80;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    }
    return ret_val81;
  int t82 = __retval1;
  return t82;
}

