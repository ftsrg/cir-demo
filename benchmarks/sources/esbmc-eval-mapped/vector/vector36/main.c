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
struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ { unsigned int* _M_current; };
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ { unsigned int* _M_current; };
struct __gnu_cxx____normal_iterator_unsigned_int____void_ { unsigned int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data { unsigned int* _M_start; unsigned int* _M_finish; unsigned int* _M_end_of_storage; };
struct std____new_allocator_unsigned_int_;
struct std__allocator_unsigned_int_;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc { unsigned int* _M_storage; unsigned long _M_len; struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* _M_vect; };
struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl { struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__ { struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_unsigned_int__std__allocator_unsigned_int__ { struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[5] == 7";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector36/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[2] == 7";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[19] = "myvector contains:";
char _str_4[2] = " ";
char _str_5[26] = "vector::_M_realloc_append";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIjSaIjEEixEm[119] = "reference std::vector<unsigned int>::operator[](size_type) [_Tp = unsigned int, _Alloc = std::allocator<unsigned int>]";
char _str_7[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__ myvector3;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp04;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp05;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp16;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp17;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp28;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp29;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp310;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp311;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp412;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp413;
  int c14 = 0;
  __retval1 = c14;
  // externalized std:: op: std::vector<unsigned int, std::allocator<unsigned int> >::vector()
  __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
      unsigned int c15 = 1;
      i2 = c15;
      while (1) {
        unsigned int t17 = i2;
        unsigned int c18 = 10;
        _Bool c19 = ((t17 <= c18)) ? 1 : 0;
        if (!c19) break;
        // externalized std:: op: std::vector<unsigned int, std::allocator<unsigned int> >::push_back(unsigned int const&)
        __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
        __VERIFIER_nondet_memory(&i2, sizeof(i2));
      for_step16: ;
        unsigned int t20 = i2;
        unsigned int u21 = t20 + 1;
        i2 = u21;
      }
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    ref_tmp16 = std22;
    long c23 = 5;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    ref_tmp05 = std24;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEC2IPjQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp04, sizeof(agg_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t25 = agg_tmp04;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp17 = std26;
    unsigned long c27 = 5;
    unsigned int* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    unsigned int t29 = *std28;
    unsigned int c30 = 7;
    _Bool c31 = ((t29 == c30)) ? 1 : 0;
    if (c31) {
    } else {
      char* cast32 = (char*)&(_str);
      char* c33 = _str_1;
      unsigned int c34 = 24;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast32, c33, c34, cast35);
    }
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    ref_tmp29 = std36;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEC2IPjQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp28, sizeof(agg_tmp28));
    __VERIFIER_nondet_memory(&ref_tmp29, sizeof(ref_tmp29));
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    ref_tmp412 = std37;
    long c38 = 3;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    ref_tmp311 = std39;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEC2IPjQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp310, sizeof(agg_tmp310));
    __VERIFIER_nondet_memory(&ref_tmp311, sizeof(ref_tmp311));
    struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t40 = agg_tmp28;
    struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t41 = agg_tmp310;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    agg_tmp413 = std42;
    unsigned long c43 = 2;
    unsigned int* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    unsigned int t45 = *std44;
    unsigned int c46 = 7;
    _Bool c47 = ((t45 == c46)) ? 1 : 0;
    if (c47) {
    } else {
      char* cast48 = (char*)&(_str_2);
      char* c49 = _str_1;
      unsigned int c50 = 27;
      char* cast51 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast48, c49, c50, cast51);
    }
    char* cast52 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
      unsigned int c54 = 0;
      i2 = c54;
      while (1) {
        unsigned int t56 = i2;
        unsigned long cast57 = (unsigned long)t56;
        unsigned long std58 = __VERIFIER_nondet_unsigned_long();
        _Bool c59 = ((cast57 < std58)) ? 1 : 0;
        if (!c59) break;
        char* cast60 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        unsigned int t62 = i2;
        unsigned long cast63 = (unsigned long)t62;
        unsigned int* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        unsigned int t65 = *std64;
        struct std__basic_ostream_char__std__char_traits_char__* std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
      for_step55: ;
        unsigned int t67 = i2;
        unsigned int u68 = t67 + 1;
        i2 = u68;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    int c70 = 0;
    __retval1 = c70;
    int t71 = __retval1;
    int ret_val72 = t71;
    {
      // externalized std:: op: std::vector<unsigned int, std::allocator<unsigned int> >::~vector()
      __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    }
    return ret_val72;
  int t73 = __retval1;
  return t73;
}

