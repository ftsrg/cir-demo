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
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a[10] = {10, 2, 10, 4, 16, 6, 14, 8, 12, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[38] = "Vector v before removing all 10s:\n   ";
char _str_2[38] = "\nVector v after removing all 10s:\n   ";
char _str_3[37] = "\n\nVector v2 before removing all 10s ";
char _str_4[17] = "and copying:\n   ";
char _str_5[46] = "\nVector c after removing all 10s from v2:\n   ";
char _str_6[41] = "\n\nVector v3 before removing all elements";
char _str_7[21] = "\ngreater than 9:\n   ";
char _str_8[39] = "\nVector v3 after removing all elements";
char _str_9[41] = "\n\nVector v4 before removing all elements";
char _str_10[33] = "\ngreater than 9 and copying:\n   ";
char _str_11[39] = "\nVector c2 after removing all elements";
char _str_12[29] = "\ngreater than 9 from v4:\n   ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_13[49] = "cannot create std::vector larger than max_size()";
char _str_14[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_15[9] = "__n >= 0";
_Bool greater9(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8greater9i
_Bool greater9(int v0) {
bb1:
  int x2;
  _Bool __retval3;
  x2 = v0;
  int t4 = x2;
  int c5 = 9;
  _Bool c6 = ((t4 > c5)) ? 1 : 0;
  __retval3 = c6;
  _Bool t7 = __retval3;
  return t7;
}

// function: main
int main() {
bb8:
  int __retval9;
  int SIZE10;
  int a11[10];
  struct std__ostream_iterator_int__char__std__char_traits_char__ output12;
  struct std__vector_int__std__allocator_int__ v13;
  struct std__allocator_int_ ref_tmp014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ newLastElement15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp117;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp218;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp319;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp421;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp522;
  int ref_tmp223;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp624;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp725;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp826;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp927;
  struct std__vector_int__std__allocator_int__ v228;
  struct std__allocator_int_ ref_tmp329;
  struct std__vector_int__std__allocator_int__ c30;
  int ref_tmp431;
  struct std__allocator_int_ ref_tmp532;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1033;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1134;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1235;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1336;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1437;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1538;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1639;
  int ref_tmp640;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1741;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1842;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1943;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2044;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2145;
  struct std__vector_int__std__allocator_int__ v346;
  struct std__allocator_int_ ref_tmp747;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2248;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2349;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2450;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2551;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp852;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2653;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2754;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2855;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2956;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3057;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3158;
  struct std__vector_int__std__allocator_int__ v459;
  struct std__allocator_int_ ref_tmp960;
  struct std__vector_int__std__allocator_int__ c261;
  int ref_tmp1062;
  struct std__allocator_int_ ref_tmp1163;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3264;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3365;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3466;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3567;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3668;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3769;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3870;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3971;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4072;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4173;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4274;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4375;
  int c76 = 0;
  __retval9 = c76;
  int c77 = 10;
  SIZE10 = c77;
  // array copy
  __builtin_memcpy(a11, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast78 = (char*)&(_str);
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
  __VERIFIER_nondet_memory(&output12, sizeof(output12));
  __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
  __VERIFIER_nondet_memory(cast78, sizeof(*cast78));
  int* cast79 = (int*)&(a11);
  int* cast80 = (int*)&(a11);
  int t81 = SIZE10;
  int* ptr82 = &(cast80)[t81];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v13, sizeof(v13));
    __VERIFIER_nondet_memory(cast79, sizeof(*cast79));
    __VERIFIER_nondet_memory(ptr82, sizeof(*ptr82));
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&newLastElement15, sizeof(newLastElement15));
    char* cast83 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std84;
    __VERIFIER_nondet_memory(&std84, sizeof(std84));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std85;
    __VERIFIER_nondet_memory(&std85, sizeof(std85));
    agg_tmp016 = std85;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
    agg_tmp117 = std86;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp218, sizeof(agg_tmp218));
    __VERIFIER_nondet_memory(&output12, sizeof(output12));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t87 = agg_tmp016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t88 = agg_tmp117;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t89 = agg_tmp218;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std90;
    __VERIFIER_nondet_memory(&std90, sizeof(std90));
    agg_tmp319 = std90;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    agg_tmp421 = std91;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    agg_tmp522 = std92;
    int c93 = 10;
    ref_tmp223 = c93;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t94 = agg_tmp421;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t95 = agg_tmp522;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std96;
    __VERIFIER_nondet_memory(&std96, sizeof(std96));
    ref_tmp120 = std96;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std97;
    __VERIFIER_nondet_memory(&std97, sizeof(std97));
    char* cast98 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std100;
    __VERIFIER_nondet_memory(&std100, sizeof(std100));
    agg_tmp624 = std100;
    agg_tmp725 = newLastElement15; // copy
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp826, sizeof(agg_tmp826));
    __VERIFIER_nondet_memory(&output12, sizeof(output12));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t101 = agg_tmp624;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t102 = agg_tmp725;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t103 = agg_tmp826;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std104;
    __VERIFIER_nondet_memory(&std104, sizeof(std104));
    agg_tmp927 = std104;
    int* cast105 = (int*)&(a11);
    int* cast106 = (int*)&(a11);
    int t107 = SIZE10;
    int* ptr108 = &(cast106)[t107];
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp329, sizeof(ref_tmp329));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&v228, sizeof(v228));
      __VERIFIER_nondet_memory(cast105, sizeof(*cast105));
      __VERIFIER_nondet_memory(ptr108, sizeof(*ptr108));
      __VERIFIER_nondet_memory(&ref_tmp329, sizeof(ref_tmp329));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp329, sizeof(ref_tmp329));
    }
      int t109 = SIZE10;
      unsigned long cast110 = (unsigned long)t109;
      int c111 = 0;
      ref_tmp431 = c111;
      // externalized std:: op: std::allocator<int>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp532, sizeof(ref_tmp532));
        // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
        __VERIFIER_nondet_memory(&c30, sizeof(c30));
        __VERIFIER_nondet_memory(&ref_tmp431, sizeof(ref_tmp431));
        __VERIFIER_nondet_memory(&ref_tmp532, sizeof(ref_tmp532));
      {
        // externalized std:: op: std::allocator<int>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp532, sizeof(ref_tmp532));
      }
        char* cast112 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
        char* cast114 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std115;
        __VERIFIER_nondet_memory(&std115, sizeof(std115));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std116;
        __VERIFIER_nondet_memory(&std116, sizeof(std116));
        agg_tmp1033 = std116;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std117;
        __VERIFIER_nondet_memory(&std117, sizeof(std117));
        agg_tmp1134 = std117;
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
        __VERIFIER_nondet_memory(&agg_tmp1235, sizeof(agg_tmp1235));
        __VERIFIER_nondet_memory(&output12, sizeof(output12));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t118 = agg_tmp1033;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t119 = agg_tmp1134;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t120 = agg_tmp1235;
        struct std__ostream_iterator_int__char__std__char_traits_char__ std121;
        __VERIFIER_nondet_memory(&std121, sizeof(std121));
        agg_tmp1336 = std121;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std122;
        __VERIFIER_nondet_memory(&std122, sizeof(std122));
        agg_tmp1437 = std122;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std123;
        __VERIFIER_nondet_memory(&std123, sizeof(std123));
        agg_tmp1538 = std123;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std124;
        __VERIFIER_nondet_memory(&std124, sizeof(std124));
        agg_tmp1639 = std124;
        int c125 = 10;
        ref_tmp640 = c125;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t126 = agg_tmp1437;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t127 = agg_tmp1538;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t128 = agg_tmp1639;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std129;
        __VERIFIER_nondet_memory(&std129, sizeof(std129));
        agg_tmp1741 = std129;
        char* cast130 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std131;
        __VERIFIER_nondet_memory(&std131, sizeof(std131));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std132;
        __VERIFIER_nondet_memory(&std132, sizeof(std132));
        agg_tmp1842 = std132;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std133;
        __VERIFIER_nondet_memory(&std133, sizeof(std133));
        agg_tmp1943 = std133;
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
        __VERIFIER_nondet_memory(&agg_tmp2044, sizeof(agg_tmp2044));
        __VERIFIER_nondet_memory(&output12, sizeof(output12));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t134 = agg_tmp1842;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t135 = agg_tmp1943;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t136 = agg_tmp2044;
        struct std__ostream_iterator_int__char__std__char_traits_char__ std137;
        __VERIFIER_nondet_memory(&std137, sizeof(std137));
        agg_tmp2145 = std137;
        int* cast138 = (int*)&(a11);
        int* cast139 = (int*)&(a11);
        int t140 = SIZE10;
        int* ptr141 = &(cast139)[t140];
        // externalized std:: op: std::allocator<int>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp747, sizeof(ref_tmp747));
          // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
          __VERIFIER_nondet_memory(&v346, sizeof(v346));
          __VERIFIER_nondet_memory(cast138, sizeof(*cast138));
          __VERIFIER_nondet_memory(ptr141, sizeof(*ptr141));
          __VERIFIER_nondet_memory(&ref_tmp747, sizeof(ref_tmp747));
        {
          // externalized std:: op: std::allocator<int>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp747, sizeof(ref_tmp747));
        }
          char* cast142 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std143;
          __VERIFIER_nondet_memory(&std143, sizeof(std143));
          char* cast144 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std145;
          __VERIFIER_nondet_memory(&std145, sizeof(std145));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std146;
          __VERIFIER_nondet_memory(&std146, sizeof(std146));
          agg_tmp2248 = std146;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std147;
          __VERIFIER_nondet_memory(&std147, sizeof(std147));
          agg_tmp2349 = std147;
          // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
          __VERIFIER_nondet_memory(&agg_tmp2450, sizeof(agg_tmp2450));
          __VERIFIER_nondet_memory(&output12, sizeof(output12));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t148 = agg_tmp2248;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t149 = agg_tmp2349;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t150 = agg_tmp2450;
          struct std__ostream_iterator_int__char__std__char_traits_char__ std151;
          __VERIFIER_nondet_memory(&std151, sizeof(std151));
          agg_tmp2551 = std151;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std152;
          __VERIFIER_nondet_memory(&std152, sizeof(std152));
          agg_tmp2653 = std152;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std153;
          __VERIFIER_nondet_memory(&std153, sizeof(std153));
          agg_tmp2754 = std153;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t154 = agg_tmp2653;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t155 = agg_tmp2754;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std156;
          __VERIFIER_nondet_memory(&std156, sizeof(std156));
          ref_tmp852 = std156;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std157;
          __VERIFIER_nondet_memory(&std157, sizeof(std157));
          char* cast158 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* std159;
          __VERIFIER_nondet_memory(&std159, sizeof(std159));
          char* cast160 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std161;
          __VERIFIER_nondet_memory(&std161, sizeof(std161));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std162;
          __VERIFIER_nondet_memory(&std162, sizeof(std162));
          agg_tmp2855 = std162;
          agg_tmp2956 = newLastElement15; // copy
          // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
          __VERIFIER_nondet_memory(&agg_tmp3057, sizeof(agg_tmp3057));
          __VERIFIER_nondet_memory(&output12, sizeof(output12));
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t163 = agg_tmp2855;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t164 = agg_tmp2956;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t165 = agg_tmp3057;
          struct std__ostream_iterator_int__char__std__char_traits_char__ std166;
          __VERIFIER_nondet_memory(&std166, sizeof(std166));
          agg_tmp3158 = std166;
          int* cast167 = (int*)&(a11);
          int* cast168 = (int*)&(a11);
          int t169 = SIZE10;
          int* ptr170 = &(cast168)[t169];
          // externalized std:: op: std::allocator<int>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp960, sizeof(ref_tmp960));
            // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
            __VERIFIER_nondet_memory(&v459, sizeof(v459));
            __VERIFIER_nondet_memory(cast167, sizeof(*cast167));
            __VERIFIER_nondet_memory(ptr170, sizeof(*ptr170));
            __VERIFIER_nondet_memory(&ref_tmp960, sizeof(ref_tmp960));
          {
            // externalized std:: op: std::allocator<int>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp960, sizeof(ref_tmp960));
          }
            int t171 = SIZE10;
            unsigned long cast172 = (unsigned long)t171;
            int c173 = 0;
            ref_tmp1062 = c173;
            // externalized std:: op: std::allocator<int>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp1163, sizeof(ref_tmp1163));
              // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
              __VERIFIER_nondet_memory(&c261, sizeof(c261));
              __VERIFIER_nondet_memory(&ref_tmp1062, sizeof(ref_tmp1062));
              __VERIFIER_nondet_memory(&ref_tmp1163, sizeof(ref_tmp1163));
            {
              // externalized std:: op: std::allocator<int>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp1163, sizeof(ref_tmp1163));
            }
              char* cast174 = (char*)&(_str_9);
              struct std__basic_ostream_char__std__char_traits_char__* std175;
              __VERIFIER_nondet_memory(&std175, sizeof(std175));
              char* cast176 = (char*)&(_str_10);
              struct std__basic_ostream_char__std__char_traits_char__* std177;
              __VERIFIER_nondet_memory(&std177, sizeof(std177));
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std178;
              __VERIFIER_nondet_memory(&std178, sizeof(std178));
              agg_tmp3264 = std178;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std179;
              __VERIFIER_nondet_memory(&std179, sizeof(std179));
              agg_tmp3365 = std179;
              // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
              __VERIFIER_nondet_memory(&agg_tmp3466, sizeof(agg_tmp3466));
              __VERIFIER_nondet_memory(&output12, sizeof(output12));
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t180 = agg_tmp3264;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t181 = agg_tmp3365;
              struct std__ostream_iterator_int__char__std__char_traits_char__ t182 = agg_tmp3466;
              struct std__ostream_iterator_int__char__std__char_traits_char__ std183;
              __VERIFIER_nondet_memory(&std183, sizeof(std183));
              agg_tmp3567 = std183;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std184;
              __VERIFIER_nondet_memory(&std184, sizeof(std184));
              agg_tmp3668 = std184;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std185;
              __VERIFIER_nondet_memory(&std185, sizeof(std185));
              agg_tmp3769 = std185;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std186;
              __VERIFIER_nondet_memory(&std186, sizeof(std186));
              agg_tmp3870 = std186;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t187 = agg_tmp3668;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t188 = agg_tmp3769;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t189 = agg_tmp3870;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std190;
              __VERIFIER_nondet_memory(&std190, sizeof(std190));
              agg_tmp3971 = std190;
              char* cast191 = (char*)&(_str_11);
              struct std__basic_ostream_char__std__char_traits_char__* std192;
              __VERIFIER_nondet_memory(&std192, sizeof(std192));
              char* cast193 = (char*)&(_str_12);
              struct std__basic_ostream_char__std__char_traits_char__* std194;
              __VERIFIER_nondet_memory(&std194, sizeof(std194));
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std195;
              __VERIFIER_nondet_memory(&std195, sizeof(std195));
              agg_tmp4072 = std195;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std196;
              __VERIFIER_nondet_memory(&std196, sizeof(std196));
              agg_tmp4173 = std196;
              // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
              __VERIFIER_nondet_memory(&agg_tmp4274, sizeof(agg_tmp4274));
              __VERIFIER_nondet_memory(&output12, sizeof(output12));
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t197 = agg_tmp4072;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t198 = agg_tmp4173;
              struct std__ostream_iterator_int__char__std__char_traits_char__ t199 = agg_tmp4274;
              struct std__ostream_iterator_int__char__std__char_traits_char__ std200;
              __VERIFIER_nondet_memory(&std200, sizeof(std200));
              agg_tmp4375 = std200;
              struct std__basic_ostream_char__std__char_traits_char__* std201;
              __VERIFIER_nondet_memory(&std201, sizeof(std201));
              int c202 = 0;
              __retval9 = c202;
              int t203 = __retval9;
              int ret_val204 = t203;
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&c261, sizeof(c261));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&v459, sizeof(v459));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&v346, sizeof(v346));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&c30, sizeof(c30));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&v228, sizeof(v228));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&v13, sizeof(v13));
              }
              return ret_val204;
  int t205 = __retval9;
  return t205;
}

