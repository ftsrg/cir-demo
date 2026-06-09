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
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a2[10] = {100, 2, 8, 1, 50, 3, 8, 8, 9, 10};
int __const_main_a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[33] = "Vector v before random_shuffle: ";
char _str_2[33] = "\nVector v after random_shuffle: ";
char _str_3[23] = "\n\nVector v2 contains: ";
char _str_4[33] = "\nNumber of elements matching 8: ";
char _str_5[37] = "\nNumber of elements greater than 9: ";
char _str_6[36] = "\n\nMinimum element in Vector v2 is: ";
char _str_7[35] = "\nMaximum element in Vector v2 is: ";
char _str_8[45] = "\n\nThe total of the elements in Vector v is: ";
char _str_9[47] = "\n\nThe square of every integer in Vector v is:\n";
char _str_10[45] = "\n\nThe cube of every integer in Vector v is:\n";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_11[49] = "cannot create std::vector larger than max_size()";
_Bool greater9(int p0);
void outputSquare(int p0);
int calculateCube(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
extern int __VERIFIER_nondet_int(void);
// function: _Z8greater9i
_Bool greater9(int v0) {
bb1:
  int value2;
  _Bool __retval3;
  value2 = v0;
  int t4 = value2;
  int c5 = 9;
  _Bool c6 = ((t4 > c5)) ? 1 : 0;
  __retval3 = c6;
  _Bool t7 = __retval3;
  return t7;
}

// function: _Z12outputSquarei
void outputSquare(int v8) {
bb9:
  int value10;
  value10 = v8;
  int t11 = value10;
  int t12 = value10;
  int b13 = t11 * t12;
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char c15 = 32;
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  return;
}

// function: _Z13calculateCubei
int calculateCube(int v17) {
bb18:
  int value19;
  int __retval20;
  value19 = v17;
  int t21 = value19;
  int t22 = value19;
  int b23 = t21 * t22;
  int t24 = value19;
  int b25 = b23 * t24;
  __retval20 = b25;
  int t26 = __retval20;
  return t26;
}

// function: main
int main() {
bb27:
  int __retval28;
  int SIZE29;
  int a130[10];
  struct std__vector_int__std__allocator_int__ v31;
  struct std__allocator_int_ ref_tmp032;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output33;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp034;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp135;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp236;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp337;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp438;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp539;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp640;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp741;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp842;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp943;
  int a244[10];
  struct std__vector_int__std__allocator_int__ v245;
  struct std__allocator_int_ ref_tmp146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1047;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1148;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1249;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1350;
  int result51;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1452;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1553;
  int ref_tmp254;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1655;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1756;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1858;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1959;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp460;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2061;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2162;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2263;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2364;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2465;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2566;
  struct std__vector_int__std__allocator_int__ cubes67;
  struct std__allocator_int_ ref_tmp568;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2669;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2770;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2871;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2972;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3073;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3174;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3275;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3376;
  int c77 = 0;
  __retval28 = c77;
  int c78 = 10;
  SIZE29 = c78;
  // array copy
  __builtin_memcpy(a130, __const_main_a1, (unsigned long)10 * sizeof(__const_main_a1[0]));
  int* cast79 = (int*)&(a130);
  int* cast80 = (int*)&(a130);
  int t81 = SIZE29;
  int* ptr82 = &(cast80)[t81];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp032, sizeof(ref_tmp032));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v31, sizeof(v31));
    __VERIFIER_nondet_memory(cast79, sizeof(*cast79));
    __VERIFIER_nondet_memory(ptr82, sizeof(*ptr82));
    __VERIFIER_nondet_memory(&ref_tmp032, sizeof(ref_tmp032));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp032, sizeof(ref_tmp032));
  }
    char* cast83 = (char*)&(_str);
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
    __VERIFIER_nondet_memory(&output33, sizeof(output33));
    __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
    __VERIFIER_nondet_memory(cast83, sizeof(*cast83));
    char* cast84 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std85;
    __VERIFIER_nondet_memory(&std85, sizeof(std85));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
    agg_tmp034 = std86;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std87;
    __VERIFIER_nondet_memory(&std87, sizeof(std87));
    agg_tmp135 = std87;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp236, sizeof(agg_tmp236));
    __VERIFIER_nondet_memory(&output33, sizeof(output33));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t88 = agg_tmp034;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t89 = agg_tmp135;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t90 = agg_tmp236;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    agg_tmp337 = std91;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    agg_tmp438 = std92;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std93;
    __VERIFIER_nondet_memory(&std93, sizeof(std93));
    agg_tmp539 = std93;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t94 = agg_tmp438;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t95 = agg_tmp539;
    // externalized std:: op: void std::random_shuffle<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    char* cast96 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std97;
    __VERIFIER_nondet_memory(&std97, sizeof(std97));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std98;
    __VERIFIER_nondet_memory(&std98, sizeof(std98));
    agg_tmp640 = std98;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    agg_tmp741 = std99;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp842, sizeof(agg_tmp842));
    __VERIFIER_nondet_memory(&output33, sizeof(output33));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t100 = agg_tmp640;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t101 = agg_tmp741;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t102 = agg_tmp842;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std103;
    __VERIFIER_nondet_memory(&std103, sizeof(std103));
    agg_tmp943 = std103;
    // array copy
    __builtin_memcpy(a244, __const_main_a2, (unsigned long)10 * sizeof(__const_main_a2[0]));
    int* cast104 = (int*)&(a244);
    int* cast105 = (int*)&(a244);
    int t106 = SIZE29;
    int* ptr107 = &(cast105)[t106];
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp146, sizeof(ref_tmp146));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&v245, sizeof(v245));
      __VERIFIER_nondet_memory(cast104, sizeof(*cast104));
      __VERIFIER_nondet_memory(ptr107, sizeof(*ptr107));
      __VERIFIER_nondet_memory(&ref_tmp146, sizeof(ref_tmp146));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp146, sizeof(ref_tmp146));
    }
      char* cast108 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std109;
      __VERIFIER_nondet_memory(&std109, sizeof(std109));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std110;
      __VERIFIER_nondet_memory(&std110, sizeof(std110));
      agg_tmp1047 = std110;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std111;
      __VERIFIER_nondet_memory(&std111, sizeof(std111));
      agg_tmp1148 = std111;
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
      __VERIFIER_nondet_memory(&agg_tmp1249, sizeof(agg_tmp1249));
      __VERIFIER_nondet_memory(&output33, sizeof(output33));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t112 = agg_tmp1047;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t113 = agg_tmp1148;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t114 = agg_tmp1249;
      struct std__ostream_iterator_int__char__std__char_traits_char__ std115;
      __VERIFIER_nondet_memory(&std115, sizeof(std115));
      agg_tmp1350 = std115;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std116;
      __VERIFIER_nondet_memory(&std116, sizeof(std116));
      agg_tmp1452 = std116;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std117;
      __VERIFIER_nondet_memory(&std117, sizeof(std117));
      agg_tmp1553 = std117;
      int c118 = 8;
      ref_tmp254 = c118;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t119 = agg_tmp1452;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t120 = agg_tmp1553;
      long std121 = __VERIFIER_nondet_long();
      int cast122 = (int)std121;
      result51 = cast122;
      char* cast123 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std124;
      __VERIFIER_nondet_memory(&std124, sizeof(std124));
      int t125 = result51;
      struct std__basic_ostream_char__std__char_traits_char__* std126;
      __VERIFIER_nondet_memory(&std126, sizeof(std126));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std127;
      __VERIFIER_nondet_memory(&std127, sizeof(std127));
      agg_tmp1655 = std127;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std128;
      __VERIFIER_nondet_memory(&std128, sizeof(std128));
      agg_tmp1756 = std128;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t129 = agg_tmp1655;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t130 = agg_tmp1756;
      long std131 = __VERIFIER_nondet_long();
      int cast132 = (int)std131;
      result51 = cast132;
      char* cast133 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std134;
      __VERIFIER_nondet_memory(&std134, sizeof(std134));
      int t135 = result51;
      struct std__basic_ostream_char__std__char_traits_char__* std136;
      __VERIFIER_nondet_memory(&std136, sizeof(std136));
      char* cast137 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std138;
      __VERIFIER_nondet_memory(&std138, sizeof(std138));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std139;
      __VERIFIER_nondet_memory(&std139, sizeof(std139));
      agg_tmp1858 = std139;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std140;
      __VERIFIER_nondet_memory(&std140, sizeof(std140));
      agg_tmp1959 = std140;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t141 = agg_tmp1858;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t142 = agg_tmp1959;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std143;
      __VERIFIER_nondet_memory(&std143, sizeof(std143));
      ref_tmp357 = std143;
      int* std144;
      __VERIFIER_nondet_memory(&std144, sizeof(std144));
      int t145 = *std144;
      struct std__basic_ostream_char__std__char_traits_char__* std146;
      __VERIFIER_nondet_memory(&std146, sizeof(std146));
      char* cast147 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std148;
      __VERIFIER_nondet_memory(&std148, sizeof(std148));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std149;
      __VERIFIER_nondet_memory(&std149, sizeof(std149));
      agg_tmp2061 = std149;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std150;
      __VERIFIER_nondet_memory(&std150, sizeof(std150));
      agg_tmp2162 = std150;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t151 = agg_tmp2061;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t152 = agg_tmp2162;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std153;
      __VERIFIER_nondet_memory(&std153, sizeof(std153));
      ref_tmp460 = std153;
      int* std154;
      __VERIFIER_nondet_memory(&std154, sizeof(std154));
      int t155 = *std154;
      struct std__basic_ostream_char__std__char_traits_char__* std156;
      __VERIFIER_nondet_memory(&std156, sizeof(std156));
      char* cast157 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* std158;
      __VERIFIER_nondet_memory(&std158, sizeof(std158));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std159;
      __VERIFIER_nondet_memory(&std159, sizeof(std159));
      agg_tmp2263 = std159;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std160;
      __VERIFIER_nondet_memory(&std160, sizeof(std160));
      agg_tmp2364 = std160;
      int c161 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t162 = agg_tmp2263;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t163 = agg_tmp2364;
      int std164 = __VERIFIER_nondet_int();
      struct std__basic_ostream_char__std__char_traits_char__* std165;
      __VERIFIER_nondet_memory(&std165, sizeof(std165));
      char* cast166 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* std167;
      __VERIFIER_nondet_memory(&std167, sizeof(std167));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std168;
      __VERIFIER_nondet_memory(&std168, sizeof(std168));
      agg_tmp2465 = std168;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std169;
      __VERIFIER_nondet_memory(&std169, sizeof(std169));
      agg_tmp2566 = std169;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t170 = agg_tmp2465;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t171 = agg_tmp2566;
      void* std172;
      __VERIFIER_nondet_memory(&std172, sizeof(std172));
      int t173 = SIZE29;
      unsigned long cast174 = (unsigned long)t173;
      // externalized std:: op: std::allocator<int>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp568, sizeof(ref_tmp568));
        // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
        __VERIFIER_nondet_memory(&cubes67, sizeof(cubes67));
        __VERIFIER_nondet_memory(&ref_tmp568, sizeof(ref_tmp568));
      {
        // externalized std:: op: std::allocator<int>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp568, sizeof(ref_tmp568));
      }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std175;
        __VERIFIER_nondet_memory(&std175, sizeof(std175));
        agg_tmp2669 = std175;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std176;
        __VERIFIER_nondet_memory(&std176, sizeof(std176));
        agg_tmp2770 = std176;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std177;
        __VERIFIER_nondet_memory(&std177, sizeof(std177));
        agg_tmp2871 = std177;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t178 = agg_tmp2669;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t179 = agg_tmp2770;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t180 = agg_tmp2871;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std181;
        __VERIFIER_nondet_memory(&std181, sizeof(std181));
        agg_tmp2972 = std181;
        char* cast182 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std183;
        __VERIFIER_nondet_memory(&std183, sizeof(std183));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std184;
        __VERIFIER_nondet_memory(&std184, sizeof(std184));
        agg_tmp3073 = std184;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std185;
        __VERIFIER_nondet_memory(&std185, sizeof(std185));
        agg_tmp3174 = std185;
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
        __VERIFIER_nondet_memory(&agg_tmp3275, sizeof(agg_tmp3275));
        __VERIFIER_nondet_memory(&output33, sizeof(output33));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t186 = agg_tmp3073;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t187 = agg_tmp3174;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t188 = agg_tmp3275;
        struct std__ostream_iterator_int__char__std__char_traits_char__ std189;
        __VERIFIER_nondet_memory(&std189, sizeof(std189));
        agg_tmp3376 = std189;
        struct std__basic_ostream_char__std__char_traits_char__* std190;
        __VERIFIER_nondet_memory(&std190, sizeof(std190));
        int c191 = 0;
        __retval28 = c191;
        int t192 = __retval28;
        int ret_val193 = t192;
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&cubes67, sizeof(cubes67));
        }
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&v245, sizeof(v245));
        }
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&v31, sizeof(v31));
        }
        return ret_val193;
  int t194 = __retval28;
  return t194;
}

