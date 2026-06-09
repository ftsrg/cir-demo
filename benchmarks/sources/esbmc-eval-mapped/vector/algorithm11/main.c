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
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_match1[4] = {40, 50, 60, 70};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "*it == 40";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm11/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[13] = "search *it: ";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
_Bool mypredicate(int p0, int p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______search___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11mypredicateii
_Bool mypredicate(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _Z6searchIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_PT0_S9_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______search___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v10, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v11, int* v12, int* v13) {
bb14:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last116;
  int* first217;
  int* last218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval19;
  first115 = v10;
  last116 = v11;
  first217 = v12;
  last218 = v13;
    int* t20 = first217;
    int* t21 = last218;
    _Bool c22 = ((t20 == t21)) ? 1 : 0;
    if (c22) {
      __retval19 = first115; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t23 = __retval19;
      return t23;
    }
    while (1) {
      _Bool std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      _Bool u25 = !std24;
      if (!u25) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it126;
        int* it227;
        it126 = first115; // copy
        int* t28 = first217;
        it227 = t28;
          while (1) {
            int* std29;
            __VERIFIER_nondet_memory(&std29, sizeof(std29));
            int t30 = *std29;
            int* t31 = it227;
            int t32 = *t31;
            _Bool c33 = ((t30 == t32)) ? 1 : 0;
            if (!c33) break;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std34;
              __VERIFIER_nondet_memory(&std34, sizeof(std34));
              int* t35 = it227;
              int c36 = 1;
              int* ptr37 = &(t35)[c36];
              it227 = ptr37;
                int* t38 = it227;
                int* t39 = last218;
                _Bool c40 = ((t38 == t39)) ? 1 : 0;
                if (c40) {
                  __retval19 = first115; // copy
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t41 = __retval19;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val42 = t41;
                  return ret_val42;
                }
                _Bool std43;
                __VERIFIER_nondet_memory(&std43, sizeof(std43));
                if (std43) {
                  __retval19 = last116; // copy
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t44 = __retval19;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val45 = t44;
                  return ret_val45;
                }
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
    }
  __retval19 = last116; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t47 = __retval19;
  return t47;
}

// function: main
int main() {
bb48:
  int __retval49;
  struct std__vector_int__std__allocator_int__ myvector50;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it51;
  int match152[4];
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp054;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp155;
  int c56 = 0;
  __retval49 = c56;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector50, sizeof(myvector50));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it51, sizeof(it51));
      int i57;
      int ref_tmp058;
      int c59 = 1;
      i57 = c59;
      while (1) {
        int t61 = i57;
        int c62 = 10;
        _Bool c63 = ((t61 < c62)) ? 1 : 0;
        if (!c63) break;
        int t64 = i57;
        int c65 = 10;
        int b66 = t64 * c65;
        ref_tmp058 = b66;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&myvector50, sizeof(myvector50));
        __VERIFIER_nondet_memory(&ref_tmp058, sizeof(ref_tmp058));
      for_step60: ;
        int t67 = i57;
        int u68 = t67 + 1;
        i57 = u68;
      }
    // array copy
    __builtin_memcpy(match152, __const_main_match1, (unsigned long)4 * sizeof(__const_main_match1[0]));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    agg_tmp054 = std69;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    agg_tmp155 = std70;
    int* cast71 = (int*)&(match152);
    int* cast72 = (int*)&(match152);
    int c73 = 4;
    int* ptr74 = &(cast72)[c73];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t75 = agg_tmp054;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t76 = agg_tmp155;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r77 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______search___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t75, t76, cast71, ptr74);
    ref_tmp153 = r77;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    int* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    int t80 = *std79;
    int c81 = 40;
    _Bool c82 = ((t80 == c81)) ? 1 : 0;
    if (c82) {
    } else {
      char* cast83 = (char*)&(_str);
      char* c84 = _str_1;
      unsigned int c85 = 93;
      char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast83, c84, c85, cast86);
    }
    char* cast87 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std88;
    __VERIFIER_nondet_memory(&std88, sizeof(std88));
    int* std89;
    __VERIFIER_nondet_memory(&std89, sizeof(std89));
    int t90 = *std89;
    struct std__basic_ostream_char__std__char_traits_char__* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    struct std__basic_ostream_char__std__char_traits_char__* std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    int c93 = 0;
    __retval49 = c93;
    int t94 = __retval49;
    int ret_val95 = t94;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector50, sizeof(myvector50));
    }
    return ret_val95;
  int t96 = __retval49;
  return t96;
}

