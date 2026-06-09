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
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a[10] = {10, 2, 17, 5, 16, 8, 13, 11, 20, 7};
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEET_S9_S9_S9_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0__agg_tmp3;
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[20] = "Vector v contains: ";
char _str_2[24] = "\n\nFound 16 at location ";
char _str_3[15] = "\n\n16 not found";
char _str_4[24] = "\nFound 100 at location ";
char _str_5[15] = "\n100 not found";
char _str_6[38] = "\n\nThe first value greater than 10 is ";
char _str_7[20] = "\nfound at location ";
char _str_8[39] = "\n\nNo values greater than 10 were found";
char _str_9[24] = "\n\nVector v after sort: ";
char _str_10[20] = "\n\n13 was found in v";
char _str_11[24] = "\n\n13 was not found in v";
char _str_12[20] = "\n100 was found in v";
char _str_13[24] = "\n100 was not found in v";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_14[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
_Bool greater10(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: _Z9greater10i
_Bool greater10(int v0) {
bb1:
  int value2;
  _Bool __retval3;
  value2 = v0;
  int t4 = value2;
  int c5 = 10;
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
  struct std__vector_int__std__allocator_int__ v12;
  struct std__allocator_int_ ref_tmp013;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output14;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp116;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp217;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp318;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ location19;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp421;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp522;
  int ref_tmp223;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp524;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp625;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp726;
  int ref_tmp627;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp928;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp829;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp930;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1031;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1132;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1233;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1334;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1435;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1536;
  int c37 = 0;
  __retval9 = c37;
  int c38 = 10;
  SIZE10 = c38;
  // array copy
  __builtin_memcpy(a11, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  int* cast39 = (int*)&(a11);
  int* cast40 = (int*)&(a11);
  int t41 = SIZE10;
  int* ptr42 = &(cast40)[t41];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v12, sizeof(v12));
    __VERIFIER_nondet_memory(cast39, sizeof(*cast39));
    __VERIFIER_nondet_memory(ptr42, sizeof(*ptr42));
    __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
  }
    char* cast43 = (char*)&(_str);
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
    __VERIFIER_nondet_memory(&output14, sizeof(output14));
    __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
    __VERIFIER_nondet_memory(cast43, sizeof(*cast43));
    char* cast44 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp015 = std46;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp116 = std47;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp217, sizeof(agg_tmp217));
    __VERIFIER_nondet_memory(&output14, sizeof(output14));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t48 = agg_tmp015;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t49 = agg_tmp116;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t50 = agg_tmp217;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    agg_tmp318 = std51;
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&location19, sizeof(location19));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp421 = std52;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    agg_tmp522 = std53;
    int c54 = 16;
    ref_tmp223 = c54;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t55 = agg_tmp421;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t56 = agg_tmp522;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    ref_tmp120 = std57;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp359;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      ref_tmp359 = std60;
      _Bool std61;
      __VERIFIER_nondet_memory(&std61, sizeof(std61));
      _Bool u62 = !std61;
      if (u62) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp463;
        char* cast64 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        ref_tmp463 = std66;
        long std67 = __VERIFIER_nondet_long();
        struct std__basic_ostream_char__std__char_traits_char__* std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
      } else {
        char* cast69 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    agg_tmp625 = std71;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    agg_tmp726 = std72;
    int c73 = 100;
    ref_tmp627 = c73;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t74 = agg_tmp625;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t75 = agg_tmp726;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std76;
    __VERIFIER_nondet_memory(&std76, sizeof(std76));
    ref_tmp524 = std76;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp778;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std79;
      __VERIFIER_nondet_memory(&std79, sizeof(std79));
      ref_tmp778 = std79;
      _Bool std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      _Bool u81 = !std80;
      if (u81) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp882;
        char* cast83 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
        ref_tmp882 = std85;
        long std86 = __VERIFIER_nondet_long();
        struct std__basic_ostream_char__std__char_traits_char__* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
      } else {
        char* cast88 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std89;
        __VERIFIER_nondet_memory(&std89, sizeof(std89));
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std90;
    __VERIFIER_nondet_memory(&std90, sizeof(std90));
    agg_tmp829 = std90;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    agg_tmp930 = std91;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t92 = agg_tmp829;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t93 = agg_tmp930;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std94;
    __VERIFIER_nondet_memory(&std94, sizeof(std94));
    ref_tmp928 = std94;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std95;
    __VERIFIER_nondet_memory(&std95, sizeof(std95));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1096;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std97;
      __VERIFIER_nondet_memory(&std97, sizeof(std97));
      ref_tmp1096 = std97;
      _Bool std98;
      __VERIFIER_nondet_memory(&std98, sizeof(std98));
      _Bool u99 = !std98;
      if (u99) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11100;
        char* cast101 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
        int* std103;
        __VERIFIER_nondet_memory(&std103, sizeof(std103));
        int t104 = *std103;
        struct std__basic_ostream_char__std__char_traits_char__* std105;
        __VERIFIER_nondet_memory(&std105, sizeof(std105));
        char* cast106 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std107;
        __VERIFIER_nondet_memory(&std107, sizeof(std107));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std108;
        __VERIFIER_nondet_memory(&std108, sizeof(std108));
        ref_tmp11100 = std108;
        long std109 = __VERIFIER_nondet_long();
        struct std__basic_ostream_char__std__char_traits_char__* std110;
        __VERIFIER_nondet_memory(&std110, sizeof(std110));
      } else {
        char* cast111 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std112;
        __VERIFIER_nondet_memory(&std112, sizeof(std112));
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std113;
    __VERIFIER_nondet_memory(&std113, sizeof(std113));
    agg_tmp1031 = std113;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std114;
    __VERIFIER_nondet_memory(&std114, sizeof(std114));
    agg_tmp1132 = std114;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t115 = agg_tmp1031;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t116 = agg_tmp1132;
    // externalized std:: op: void std::sort<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    char* cast117 = (char*)&(_str_9);
    struct std__basic_ostream_char__std__char_traits_char__* std118;
    __VERIFIER_nondet_memory(&std118, sizeof(std118));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std119;
    __VERIFIER_nondet_memory(&std119, sizeof(std119));
    agg_tmp1233 = std119;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std120;
    __VERIFIER_nondet_memory(&std120, sizeof(std120));
    agg_tmp1334 = std120;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp1435, sizeof(agg_tmp1435));
    __VERIFIER_nondet_memory(&output14, sizeof(output14));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t121 = agg_tmp1233;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t122 = agg_tmp1334;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t123 = agg_tmp1435;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std124;
    __VERIFIER_nondet_memory(&std124, sizeof(std124));
    agg_tmp1536 = std124;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16125;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17126;
      int ref_tmp12127;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std128;
      __VERIFIER_nondet_memory(&std128, sizeof(std128));
      agg_tmp16125 = std128;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std129;
      __VERIFIER_nondet_memory(&std129, sizeof(std129));
      agg_tmp17126 = std129;
      int c130 = 13;
      ref_tmp12127 = c130;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t131 = agg_tmp16125;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t132 = agg_tmp17126;
      _Bool std133;
      __VERIFIER_nondet_memory(&std133, sizeof(std133));
      if (std133) {
        char* cast134 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std135;
        __VERIFIER_nondet_memory(&std135, sizeof(std135));
      } else {
        char* cast136 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std137;
        __VERIFIER_nondet_memory(&std137, sizeof(std137));
      }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18138;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19139;
      int ref_tmp13140;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std141;
      __VERIFIER_nondet_memory(&std141, sizeof(std141));
      agg_tmp18138 = std141;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std142;
      __VERIFIER_nondet_memory(&std142, sizeof(std142));
      agg_tmp19139 = std142;
      int c143 = 100;
      ref_tmp13140 = c143;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t144 = agg_tmp18138;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t145 = agg_tmp19139;
      _Bool std146;
      __VERIFIER_nondet_memory(&std146, sizeof(std146));
      if (std146) {
        char* cast147 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std148;
        __VERIFIER_nondet_memory(&std148, sizeof(std148));
      } else {
        char* cast149 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std150;
        __VERIFIER_nondet_memory(&std150, sizeof(std150));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std151;
    __VERIFIER_nondet_memory(&std151, sizeof(std151));
    int c152 = 0;
    __retval9 = c152;
    int t153 = __retval9;
    int ret_val154 = t153;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v12, sizeof(v12));
    }
    return ret_val154;
  int t155 = __retval9;
  return t155;
}

