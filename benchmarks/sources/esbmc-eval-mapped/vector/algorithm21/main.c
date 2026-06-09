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
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[1] == 99";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm21/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______replace_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, int* p3, int* p4);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z12replace_copyIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET0_PT_S9_S7_RKT1_SC_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______replace_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(int* v0, int* v1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2, int* v3, int* v4) {
bb5:
  int* first6;
  int* last7;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest8;
  int* oldval9;
  int* newval10;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval11;
  first6 = v0;
  last7 = v1;
  dest8 = v2;
  oldval9 = v3;
  newval10 = v4;
    while (1) {
      int* t13 = first6;
      int* t14 = last7;
      _Bool c15 = ((t13 != t14)) ? 1 : 0;
      if (!c15) break;
      int* t16 = first6;
      int t17 = *t16;
      int* t18 = oldval9;
      int t19 = *t18;
      _Bool c20 = ((t17 == t19)) ? 1 : 0;
      int ternary21;
      if (c20) {
        int* t22 = newval10;
        int t23 = *t22;
        ternary21 = (int)t23;
      } else {
        int* t24 = first6;
        int t25 = *t24;
        ternary21 = (int)t25;
      }
      int* std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      *std26 = ternary21;
    for_step12: ;
      int* t27 = first6;
      int c28 = 1;
      int* ptr29 = &(t27)[c28];
      first6 = ptr29;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
    }
  __retval11 = dest8; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t31 = __retval11;
  return t31;
}

// function: main
int main() {
bb32:
  int __retval33;
  int myints34[8];
  struct std__vector_int__std__allocator_int__ myvector35;
  struct std__allocator_int_ ref_tmp036;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp037;
  int ref_tmp138;
  int ref_tmp239;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp140;
  int c41 = 0;
  __retval33 = c41;
  // array copy
  __builtin_memcpy(myints34, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  unsigned long c42 = 8;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp036, sizeof(ref_tmp036));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector35, sizeof(myvector35));
    __VERIFIER_nondet_memory(&ref_tmp036, sizeof(ref_tmp036));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp036, sizeof(ref_tmp036));
  }
    int* cast43 = (int*)&(myints34);
    int* cast44 = (int*)&(myints34);
    int c45 = 8;
    int* ptr46 = &(cast44)[c45];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp037 = std47;
    int c48 = 20;
    ref_tmp138 = c48;
    int c49 = 99;
    ref_tmp239 = c49;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t50 = agg_tmp037;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r51 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______replace_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(cast43, ptr46, t50, &ref_tmp138, &ref_tmp239);
    agg_tmp140 = r51;
    unsigned long c52 = 1;
    int* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int t54 = *std53;
    int c55 = 99;
    _Bool c56 = ((t54 == c55)) ? 1 : 0;
    if (c56) {
    } else {
      char* cast57 = (char*)&(_str);
      char* c58 = _str_1;
      unsigned int c59 = 36;
      char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast57, c58, c59, cast60);
    }
    char* cast61 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it63;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp364;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      it63 = std65;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        ref_tmp364 = std67;
        _Bool std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        _Bool u69 = !std68;
        if (!u69) break;
        char* cast70 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        int* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        int t73 = *std72;
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
      for_step66: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std76;
    __VERIFIER_nondet_memory(&std76, sizeof(std76));
    int c77 = 0;
    __retval33 = c77;
    int t78 = __retval33;
    int ret_val79 = t78;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector35, sizeof(myvector35));
    }
    return ret_val79;
  int t80 = __retval33;
  return t80;
}

