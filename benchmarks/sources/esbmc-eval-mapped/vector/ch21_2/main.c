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
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___;
struct std__iterator_std__random_access_iterator_tag__int__long_int___int___;
struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ current; };
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ current; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_array[6] = {1, 2, 3, 4, 5, 6};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[34] = "The initial size of integers is: ";
char _str_1[39] = "\nThe initial capacity of integers is: ";
char _str_2[27] = "\nThe size of integers is: ";
char _str_3[31] = "\nThe capacity of integers is: ";
char _str_4[40] = "\n\nOutput array using pointer notation: ";
char _str_5[41] = "\nOutput vector using iterator notation: ";
char _str_6[40] = "\nReversed contents of vector integers: ";
char _str_7[26] = "vector::_M_realloc_append";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[15] = "!this->empty()";
void void_printVector_int_(struct std__vector_int__std__allocator_int__* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z11printVectorIiEvRKSt6vectorIT_SaIS1_EE
void void_printVector_int_(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* integers22;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ constIterator3;
  integers22 = v0;
  // externalized std:: op: __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator()
  __VERIFIER_nondet_memory(&constIterator3, sizeof(constIterator3));
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp04;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp15;
    struct std__vector_int__std__allocator_int__* t6 = integers22;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std7;
    __VERIFIER_nondet_memory(&std7, sizeof(std7));
    ref_tmp04 = std7;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    while (1) {
      struct std__vector_int__std__allocator_int__* t10 = integers22;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std11;
      __VERIFIER_nondet_memory(&std11, sizeof(std11));
      ref_tmp15 = std11;
      _Bool std12;
      __VERIFIER_nondet_memory(&std12, sizeof(std12));
      _Bool u13 = !std12;
      if (!u13) break;
      int* std14;
      __VERIFIER_nondet_memory(&std14, sizeof(std14));
      int t15 = *std14;
      struct std__basic_ostream_char__std__char_traits_char__* std16;
      __VERIFIER_nondet_memory(&std16, sizeof(std16));
      char c17 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
    for_step9: ;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* std19;
      __VERIFIER_nondet_memory(&std19, sizeof(std19));
    }
  return;
}

// function: main
int main() {
bb20:
  int __retval21;
  int SIZE22;
  int array23[6];
  struct std__vector_int__std__allocator_int__ integers24;
  int ref_tmp025;
  int ref_tmp126;
  int ref_tmp227;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____ reverseIterator28;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____ tempIterator29;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp330;
  int c31 = 0;
  __retval21 = c31;
  int c32 = 6;
  SIZE22 = c32;
  // array copy
  __builtin_memcpy(array23, __const_main_array, (unsigned long)6 * sizeof(__const_main_array[0]));
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&integers24, sizeof(integers24));
    char* cast33 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    unsigned long std35 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    char* cast37 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    unsigned long std39 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int c41 = 2;
    ref_tmp025 = c41;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&integers24, sizeof(integers24));
    __VERIFIER_nondet_memory(&ref_tmp025, sizeof(ref_tmp025));
    int c42 = 3;
    ref_tmp126 = c42;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&integers24, sizeof(integers24));
    __VERIFIER_nondet_memory(&ref_tmp126, sizeof(ref_tmp126));
    int c43 = 4;
    ref_tmp227 = c43;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&integers24, sizeof(integers24));
    __VERIFIER_nondet_memory(&ref_tmp227, sizeof(ref_tmp227));
    char* cast44 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    unsigned long std46 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    char* cast48 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    unsigned long std50 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    char* cast52 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
      int* ptr54;
      int* cast55 = (int*)&(array23);
      ptr54 = cast55;
      while (1) {
        int* t57 = ptr54;
        int* cast58 = (int*)&(array23);
        int t59 = SIZE22;
        int* ptr60 = &(cast58)[t59];
        _Bool c61 = ((t57 != ptr60)) ? 1 : 0;
        if (!c61) break;
        int* t62 = ptr54;
        int t63 = *t62;
        struct std__basic_ostream_char__std__char_traits_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        char c65 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
      for_step56: ;
        int* t67 = ptr54;
        int c68 = 1;
        int* ptr69 = &(t67)[c68];
        ptr54 = ptr69;
      }
    char* cast70 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    void_printVector_int_(&integers24);
    char* cast72 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    // externalized std:: op: std::reverse_iterator<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::reverse_iterator()
    __VERIFIER_nondet_memory(&reverseIterator28, sizeof(reverseIterator28));
    struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    ref_tmp330 = std74;
    // externalized std:: op: _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEC2INS1_IPiS6_EEQ13__convertibleITL0__EEERKS_IT_E
    __VERIFIER_nondet_memory(&tempIterator29, sizeof(tempIterator29));
    __VERIFIER_nondet_memory(&ref_tmp330, sizeof(ref_tmp330));
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp475;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std76;
      __VERIFIER_nondet_memory(&std76, sizeof(std76));
      ref_tmp475 = std76;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* std77;
      __VERIFIER_nondet_memory(&std77, sizeof(std77));
      while (1) {
        _Bool std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
        _Bool u80 = !std79;
        if (!u80) break;
        int* std81;
        __VERIFIER_nondet_memory(&std81, sizeof(std81));
        int t82 = *std81;
        struct std__basic_ostream_char__std__char_traits_char__* std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        char c84 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
      for_step78: ;
        struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std87;
    __VERIFIER_nondet_memory(&std87, sizeof(std87));
    int c88 = 0;
    __retval21 = c88;
    int t89 = __retval21;
    int ret_val90 = t89;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&integers24, sizeof(integers24));
    }
    return ret_val90;
  int t91 = __retval21;
  return t91;
}

