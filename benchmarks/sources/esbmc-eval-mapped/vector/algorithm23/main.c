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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[3] == 0";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm23/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[3] == 5";
char _str_3[17] = "myvector[3] != 8";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[19] = "myvector contains:";
char _str_5[2] = " ";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_fill_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10fill_esbmcIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RKT0_
void void_fill_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1, int* v2) {
bb3:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first4;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last5;
  int* val6;
  first4 = v0;
  last5 = v1;
  val6 = v2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp07;
    while (1) {
      _Bool std8;
      __VERIFIER_nondet_memory(&std8, sizeof(std8));
      _Bool u9 = !std8;
      if (!u9) break;
      int* t10 = val6;
      int t11 = *t10;
      int c12 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std13;
      __VERIFIER_nondet_memory(&std13, sizeof(std13));
      ref_tmp07 = std13;
      int* std14;
      __VERIFIER_nondet_memory(&std14, sizeof(std14));
      *std14 = t11;
    }
  return;
}

// function: main
int main() {
bb15:
  int __retval16;
  struct std__vector_int__std__allocator_int__ myvector17;
  struct std__allocator_int_ ref_tmp018;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp019;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp121;
  int ref_tmp222;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp223;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp324;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp325;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp426;
  int ref_tmp527;
  int c28 = 0;
  __retval16 = c28;
  unsigned long c29 = 8;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp018, sizeof(ref_tmp018));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector17, sizeof(myvector17));
    __VERIFIER_nondet_memory(&ref_tmp018, sizeof(ref_tmp018));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp018, sizeof(ref_tmp018));
  }
    unsigned long c30 = 3;
    int* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = *std31;
    int c33 = 0;
    _Bool c34 = ((t32 == c33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str);
      char* c36 = _str_1;
      unsigned int c37 = 22;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    agg_tmp019 = std39;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    ref_tmp121 = std40;
    long c41 = 4;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    agg_tmp120 = std42;
    int c43 = 5;
    ref_tmp222 = c43;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t44 = agg_tmp019;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t45 = agg_tmp120;
    void_fill_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t44, t45, &ref_tmp222);
    unsigned long c46 = 3;
    int* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    int t48 = *std47;
    int c49 = 5;
    _Bool c50 = ((t48 == c49)) ? 1 : 0;
    if (c50) {
    } else {
      char* cast51 = (char*)&(_str_2);
      char* c52 = _str_1;
      unsigned int c53 = 24;
      char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast51, c52, c53, cast54);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    ref_tmp324 = std55;
    long c56 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    agg_tmp223 = std57;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    ref_tmp426 = std58;
    long c59 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    agg_tmp325 = std60;
    int c61 = 8;
    ref_tmp527 = c61;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t62 = agg_tmp223;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t63 = agg_tmp325;
    void_fill_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t62, t63, &ref_tmp527);
    unsigned long c64 = 3;
    int* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    int t66 = *std65;
    int c67 = 8;
    _Bool c68 = ((t66 != c67)) ? 1 : 0;
    if (c68) {
    } else {
      char* cast69 = (char*)&(_str_3);
      char* c70 = _str_1;
      unsigned int c71 = 26;
      char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast69, c70, c71, cast72);
    }
    char* cast73 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it75;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp676;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std77;
      __VERIFIER_nondet_memory(&std77, sizeof(std77));
      it75 = std77;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
        ref_tmp676 = std79;
        _Bool std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        _Bool u81 = !std80;
        if (!u81) break;
        char* cast82 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        int* std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        int t85 = *std84;
        struct std__basic_ostream_char__std__char_traits_char__* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
      for_step78: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std88;
    __VERIFIER_nondet_memory(&std88, sizeof(std88));
    int c89 = 0;
    __retval16 = c89;
    int t90 = __retval16;
    int ret_val91 = t90;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector17, sizeof(myvector17));
    }
    return ret_val91;
  int t92 = __retval16;
  return t92;
}

