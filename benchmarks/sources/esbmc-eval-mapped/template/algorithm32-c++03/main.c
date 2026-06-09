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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[6] = "x==10";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/template/algorithm32-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[6] = "y==20";
char _str_3[6] = "x==20";
char _str_4[6] = "y==10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "first contains:";
char _str_6[2] = " ";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_[93] = "void std::vector<int>::swap(vector<_Tp, _Alloc> &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[104] = "_Alloc_traits::propagate_on_container_swap::value || _M_get_Tp_allocator() == __x._M_get_Tp_allocator()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int x2;
  int y3;
  struct std__vector_int__std__allocator_int__ first4;
  struct std__allocator_int_ ref_tmp05;
  struct std__vector_int__std__allocator_int__ second6;
  struct std__allocator_int_ ref_tmp17;
  int c8 = 0;
  __retval1 = c8;
  int c9 = 10;
  x2 = c9;
  int c10 = 20;
  y3 = c10;
  int t11 = x2;
  int c12 = 10;
  _Bool c13 = ((t11 == c12)) ? 1 : 0;
  if (c13) {
  } else {
    char* cast14 = (char*)&(_str);
    char* c15 = _str_1;
    unsigned int c16 = 19;
    char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast14, c15, c16, cast17);
  }
  int t18 = y3;
  int c19 = 20;
  _Bool c20 = ((t18 == c19)) ? 1 : 0;
  if (c20) {
  } else {
    char* cast21 = (char*)&(_str_2);
    char* c22 = _str_1;
    unsigned int c23 = 20;
    char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast21, c22, c23, cast24);
  }
  // externalized std:: op: std::enable_if<__and_<std::__not_<std::__is_tuple_like<int> >, std::is_move_constructible<int>, std::is_move_assignable<int> >::value, void>::type std::swap<int>(int&, int&)
  __VERIFIER_nondet_memory(&x2, sizeof(x2));
  __VERIFIER_nondet_memory(&y3, sizeof(y3));
  int t25 = x2;
  int c26 = 20;
  _Bool c27 = ((t25 == c26)) ? 1 : 0;
  if (c27) {
  } else {
    char* cast28 = (char*)&(_str_3);
    char* c29 = _str_1;
    unsigned int c30 = 23;
    char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast28, c29, c30, cast31);
  }
  int t32 = y3;
  int c33 = 10;
  _Bool c34 = ((t32 == c33)) ? 1 : 0;
  if (c34) {
  } else {
    char* cast35 = (char*)&(_str_4);
    char* c36 = _str_1;
    unsigned int c37 = 24;
    char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast35, c36, c37, cast38);
  }
  unsigned long c39 = 4;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&first4, sizeof(first4));
    __VERIFIER_nondet_memory(&x2, sizeof(x2));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    unsigned long c40 = 6;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second6, sizeof(second6));
      __VERIFIER_nondet_memory(&y3, sizeof(y3));
      __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
    }
      // externalized std:: op: void std::swap<int, std::allocator<int> >(std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&first4, sizeof(first4));
      __VERIFIER_nondet_memory(&second6, sizeof(second6));
      char* cast41 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it43;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp244;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        it43 = std45;
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
          __VERIFIER_nondet_memory(&std47, sizeof(std47));
          ref_tmp244 = std47;
          _Bool std48;
          __VERIFIER_nondet_memory(&std48, sizeof(std48));
          _Bool u49 = !std48;
          if (!u49) break;
          char* cast50 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std51;
          __VERIFIER_nondet_memory(&std51, sizeof(std51));
          int* std52;
          __VERIFIER_nondet_memory(&std52, sizeof(std52));
          int t53 = *std52;
          struct std__basic_ostream_char__std__char_traits_char__* std54;
          __VERIFIER_nondet_memory(&std54, sizeof(std54));
        for_step46: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std55;
          __VERIFIER_nondet_memory(&std55, sizeof(std55));
        }
      struct std__basic_ostream_char__std__char_traits_char__* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      int c57 = 0;
      __retval1 = c57;
      int t58 = __retval1;
      int ret_val59 = t58;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second6, sizeof(second6));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first4, sizeof(first4));
      }
      return ret_val59;
  int t60 = __retval1;
  return t60;
}

