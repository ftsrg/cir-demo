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
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____;
struct std__allocator_int_ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first; struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ second; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

char __const_main_c2[10] = "BYE BYE";
char __const_main_c1[10] = "HELLO";
int __const_main_a2[10] = {1, 2, 3, 4, 1000, 6, 7, 8, 9, 10};
int __const_main_a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[21] = "Vector v1 contains: ";
char _str_2[22] = "\nVector v2 contains: ";
char _str_3[22] = "\nVector v3 contains: ";
char _str_4[13] = "\n\nVector v1 ";
char _str_5[3] = "is";
char _str_6[7] = "is not";
char _str_7[22] = " equal to vector v2.\n";
char _str_8[11] = "Vector v1 ";
char _str_9[22] = " equal to vector v3.\n";
char _str_10[43] = "\nThere is a mismatch between v1 and v3 at ";
char _str_11[10] = "location ";
char _str_12[20] = "\nwhere v1 contains ";
char _str_13[18] = " and v3 contains ";
char _str_14[3] = "\n\n";
char _str_15[15] = " is less than ";
char _str_16[30] = " is greater than or equal to ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_17[49] = "cannot create std::vector larger than max_size()";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int SIZE2;
  int a13[10];
  int a24[10];
  struct std__vector_int__std__allocator_int__ v15;
  struct std__allocator_int_ ref_tmp06;
  struct std__vector_int__std__allocator_int__ v27;
  struct std__allocator_int_ ref_tmp18;
  struct std__vector_int__std__allocator_int__ v39;
  struct std__allocator_int_ ref_tmp210;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output11;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp012;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp113;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp214;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp315;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp416;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp517;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp618;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp719;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp820;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp921;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1022;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1123;
  _Bool result24;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1225;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1326;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1427;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1528;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1629;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1730;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ location31;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp332;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1833;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1934;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2035;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp436;
  char c137[10];
  char c238[10];
  int c39 = 0;
  __retval1 = c39;
  int c40 = 10;
  SIZE2 = c40;
  // array copy
  __builtin_memcpy(a13, __const_main_a1, (unsigned long)10 * sizeof(__const_main_a1[0]));
  // array copy
  __builtin_memcpy(a24, __const_main_a2, (unsigned long)10 * sizeof(__const_main_a2[0]));
  int* cast41 = (int*)&(a13);
  int* cast42 = (int*)&(a13);
  int t43 = SIZE2;
  int* ptr44 = &(cast42)[t43];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v15, sizeof(v15));
    __VERIFIER_nondet_memory(cast41, sizeof(*cast41));
    __VERIFIER_nondet_memory(ptr44, sizeof(*ptr44));
    __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
  }
    int* cast45 = (int*)&(a13);
    int* cast46 = (int*)&(a13);
    int t47 = SIZE2;
    int* ptr48 = &(cast46)[t47];
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&v27, sizeof(v27));
      __VERIFIER_nondet_memory(cast45, sizeof(*cast45));
      __VERIFIER_nondet_memory(ptr48, sizeof(*ptr48));
      __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
    }
      int* cast49 = (int*)&(a24);
      int* cast50 = (int*)&(a24);
      int t51 = SIZE2;
      int* ptr52 = &(cast50)[t51];
      // externalized std:: op: std::allocator<int>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
        // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
        __VERIFIER_nondet_memory(&v39, sizeof(v39));
        __VERIFIER_nondet_memory(cast49, sizeof(*cast49));
        __VERIFIER_nondet_memory(ptr52, sizeof(*ptr52));
        __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
      {
        // externalized std:: op: std::allocator<int>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
      }
        char* cast53 = (char*)&(_str);
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
        __VERIFIER_nondet_memory(&output11, sizeof(output11));
        __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
        __VERIFIER_nondet_memory(cast53, sizeof(*cast53));
        char* cast54 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std55;
        __VERIFIER_nondet_memory(&std55, sizeof(std55));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        agg_tmp012 = std56;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std57;
        __VERIFIER_nondet_memory(&std57, sizeof(std57));
        agg_tmp113 = std57;
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
        __VERIFIER_nondet_memory(&agg_tmp214, sizeof(agg_tmp214));
        __VERIFIER_nondet_memory(&output11, sizeof(output11));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t58 = agg_tmp012;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t59 = agg_tmp113;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t60 = agg_tmp214;
        struct std__ostream_iterator_int__char__std__char_traits_char__ std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        agg_tmp315 = std61;
        char* cast62 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std63;
        __VERIFIER_nondet_memory(&std63, sizeof(std63));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        agg_tmp416 = std64;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        agg_tmp517 = std65;
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
        __VERIFIER_nondet_memory(&agg_tmp618, sizeof(agg_tmp618));
        __VERIFIER_nondet_memory(&output11, sizeof(output11));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t66 = agg_tmp416;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t67 = agg_tmp517;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t68 = agg_tmp618;
        struct std__ostream_iterator_int__char__std__char_traits_char__ std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
        agg_tmp719 = std69;
        char* cast70 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        agg_tmp820 = std72;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
        agg_tmp921 = std73;
        // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
        __VERIFIER_nondet_memory(&agg_tmp1022, sizeof(agg_tmp1022));
        __VERIFIER_nondet_memory(&output11, sizeof(output11));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t74 = agg_tmp820;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t75 = agg_tmp921;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t76 = agg_tmp1022;
        struct std__ostream_iterator_int__char__std__char_traits_char__ std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
        agg_tmp1123 = std77;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        agg_tmp1225 = std78;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
        agg_tmp1326 = std79;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        agg_tmp1427 = std80;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t81 = agg_tmp1225;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t82 = agg_tmp1326;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t83 = agg_tmp1427;
        _Bool std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        result24 = std84;
        char* cast85 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        _Bool t87 = result24;
        char* cast88 = (char*)&(_str_5);
        char* cast89 = (char*)&(_str_6);
        char* sel90 = t87 ? cast88 : cast89;
        struct std__basic_ostream_char__std__char_traits_char__* std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
        char* cast92 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std94;
        __VERIFIER_nondet_memory(&std94, sizeof(std94));
        agg_tmp1528 = std94;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std95;
        __VERIFIER_nondet_memory(&std95, sizeof(std95));
        agg_tmp1629 = std95;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
        agg_tmp1730 = std96;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t97 = agg_tmp1528;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t98 = agg_tmp1629;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t99 = agg_tmp1730;
        _Bool std100;
        __VERIFIER_nondet_memory(&std100, sizeof(std100));
        result24 = std100;
        char* cast101 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
        _Bool t103 = result24;
        char* cast104 = (char*)&(_str_5);
        char* cast105 = (char*)&(_str_6);
        char* sel106 = t103 ? cast104 : cast105;
        struct std__basic_ostream_char__std__char_traits_char__* std107;
        __VERIFIER_nondet_memory(&std107, sizeof(std107));
        char* cast108 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* std109;
        __VERIFIER_nondet_memory(&std109, sizeof(std109));
        // externalized std:: op: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
        __VERIFIER_nondet_memory(&location31, sizeof(location31));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std110;
        __VERIFIER_nondet_memory(&std110, sizeof(std110));
        agg_tmp1833 = std110;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std111;
        __VERIFIER_nondet_memory(&std111, sizeof(std111));
        agg_tmp1934 = std111;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std112;
        __VERIFIER_nondet_memory(&std112, sizeof(std112));
        agg_tmp2035 = std112;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t113 = agg_tmp1833;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t114 = agg_tmp1934;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t115 = agg_tmp2035;
        struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std116;
        __VERIFIER_nondet_memory(&std116, sizeof(std116));
        ref_tmp332 = std116;
        struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std117;
        __VERIFIER_nondet_memory(&std117, sizeof(std117));
        char* cast118 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std119;
        __VERIFIER_nondet_memory(&std119, sizeof(std119));
        char* cast120 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std121;
        __VERIFIER_nondet_memory(&std121, sizeof(std121));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std122;
        __VERIFIER_nondet_memory(&std122, sizeof(std122));
        ref_tmp436 = std122;
        long std123 = __VERIFIER_nondet_long();
        struct std__basic_ostream_char__std__char_traits_char__* std124;
        __VERIFIER_nondet_memory(&std124, sizeof(std124));
        char* cast125 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std126;
        __VERIFIER_nondet_memory(&std126, sizeof(std126));
        int* std127;
        __VERIFIER_nondet_memory(&std127, sizeof(std127));
        int t128 = *std127;
        struct std__basic_ostream_char__std__char_traits_char__* std129;
        __VERIFIER_nondet_memory(&std129, sizeof(std129));
        char* cast130 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std131;
        __VERIFIER_nondet_memory(&std131, sizeof(std131));
        int* std132;
        __VERIFIER_nondet_memory(&std132, sizeof(std132));
        int t133 = *std132;
        struct std__basic_ostream_char__std__char_traits_char__* std134;
        __VERIFIER_nondet_memory(&std134, sizeof(std134));
        char* cast135 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std136;
        __VERIFIER_nondet_memory(&std136, sizeof(std136));
        // array copy
        __builtin_memcpy(c137, __const_main_c1, (unsigned long)10 * sizeof(__const_main_c1[0]));
        // array copy
        __builtin_memcpy(c238, __const_main_c2, (unsigned long)10 * sizeof(__const_main_c2[0]));
        char* cast137 = (char*)&(c137);
        char* cast138 = (char*)&(c137);
        int t139 = SIZE2;
        char* ptr140 = &(cast138)[t139];
        char* cast141 = (char*)&(c238);
        char* cast142 = (char*)&(c238);
        int t143 = SIZE2;
        char* ptr144 = &(cast142)[t143];
        _Bool std145;
        __VERIFIER_nondet_memory(&std145, sizeof(std145));
        result24 = std145;
        char* cast146 = (char*)&(c137);
        struct std__basic_ostream_char__std__char_traits_char__* std147;
        __VERIFIER_nondet_memory(&std147, sizeof(std147));
        _Bool t148 = result24;
        char* cast149 = (char*)&(_str_15);
        char* cast150 = (char*)&(_str_16);
        char* sel151 = t148 ? cast149 : cast150;
        struct std__basic_ostream_char__std__char_traits_char__* std152;
        __VERIFIER_nondet_memory(&std152, sizeof(std152));
        char* cast153 = (char*)&(c238);
        struct std__basic_ostream_char__std__char_traits_char__* std154;
        __VERIFIER_nondet_memory(&std154, sizeof(std154));
        struct std__basic_ostream_char__std__char_traits_char__* std155;
        __VERIFIER_nondet_memory(&std155, sizeof(std155));
        int c156 = 0;
        __retval1 = c156;
        int t157 = __retval1;
        int ret_val158 = t157;
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&v39, sizeof(v39));
        }
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&v27, sizeof(v27));
        }
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&v15, sizeof(v15));
        }
        return ret_val158;
  int t159 = __retval1;
  return t159;
}

