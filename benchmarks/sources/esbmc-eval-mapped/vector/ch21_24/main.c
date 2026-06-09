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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a[10] = {3, 100, 52, 77, 22, 31, 1, 98, 13, 40};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[28] = "Vector v before make_heap:\n";
char _str_2[28] = "\nVector v after make_heap:\n";
char _str_3[28] = "\nVector v after sort_heap:\n";
char _str_4[21] = "\n\nArray a contains: ";
char _str_5[23] = "\nv2 after push_heap(a[";
char _str_6[5] = "]): ";
char _str_7[11] = "\nv2 after ";
char _str_8[19] = " popped from heap\n";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_9[49] = "cannot create std::vector larger than max_size()";
char _str_10[26] = "vector::_M_realloc_append";
char _str_11[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[19] = "__n < this->size()";
char _str_13[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_[145] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<int *, std::vector<int>>]";
char _str_14[18] = "__first != __last";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int SIZE2;
  int a3[10];
  struct std__vector_int__std__allocator_int__ v4;
  struct std__allocator_int_ ref_tmp05;
  struct std__vector_int__std__allocator_int__ v26;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output7;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp08;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp210;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp311;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp412;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp513;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp715;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp816;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp917;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1018;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1119;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1220;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1321;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1422;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1523;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1624;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1725;
  int c26 = 0;
  __retval1 = c26;
  int c27 = 10;
  SIZE2 = c27;
  // array copy
  __builtin_memcpy(a3, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  int* cast28 = (int*)&(a3);
  int* cast29 = (int*)&(a3);
  int t30 = SIZE2;
  int* ptr31 = &(cast29)[t30];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v4, sizeof(v4));
    __VERIFIER_nondet_memory(cast28, sizeof(*cast28));
    __VERIFIER_nondet_memory(ptr31, sizeof(*ptr31));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&v26, sizeof(v26));
      char* cast32 = (char*)&(_str);
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
      __VERIFIER_nondet_memory(&output7, sizeof(output7));
      __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
      __VERIFIER_nondet_memory(cast32, sizeof(*cast32));
      char* cast33 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      agg_tmp08 = std35;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      agg_tmp19 = std36;
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
      __VERIFIER_nondet_memory(&agg_tmp210, sizeof(agg_tmp210));
      __VERIFIER_nondet_memory(&output7, sizeof(output7));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t37 = agg_tmp08;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t38 = agg_tmp19;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t39 = agg_tmp210;
      struct std__ostream_iterator_int__char__std__char_traits_char__ std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
      agg_tmp311 = std40;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      agg_tmp412 = std41;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      agg_tmp513 = std42;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t43 = agg_tmp412;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t44 = agg_tmp513;
      // externalized std:: op: void std::make_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
      char* cast45 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      agg_tmp614 = std47;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      agg_tmp715 = std48;
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
      __VERIFIER_nondet_memory(&agg_tmp816, sizeof(agg_tmp816));
      __VERIFIER_nondet_memory(&output7, sizeof(output7));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t49 = agg_tmp614;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t50 = agg_tmp715;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t51 = agg_tmp816;
      struct std__ostream_iterator_int__char__std__char_traits_char__ std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      agg_tmp917 = std52;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      agg_tmp1018 = std53;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      agg_tmp1119 = std54;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t55 = agg_tmp1018;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t56 = agg_tmp1119;
      // externalized std:: op: void std::sort_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
      char* cast57 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std59;
      __VERIFIER_nondet_memory(&std59, sizeof(std59));
      agg_tmp1220 = std59;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      agg_tmp1321 = std60;
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
      __VERIFIER_nondet_memory(&agg_tmp1422, sizeof(agg_tmp1422));
      __VERIFIER_nondet_memory(&output7, sizeof(output7));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t61 = agg_tmp1220;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t62 = agg_tmp1321;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t63 = agg_tmp1422;
      struct std__ostream_iterator_int__char__std__char_traits_char__ std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      agg_tmp1523 = std64;
      char* cast65 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      int* cast67 = (int*)&(a3);
      int* cast68 = (int*)&(a3);
      int t69 = SIZE2;
      int* ptr70 = &(cast68)[t69];
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
      __VERIFIER_nondet_memory(&agg_tmp1624, sizeof(agg_tmp1624));
      __VERIFIER_nondet_memory(&output7, sizeof(output7));
      struct std__ostream_iterator_int__char__std__char_traits_char__ t71 = agg_tmp1624;
      struct std__ostream_iterator_int__char__std__char_traits_char__ std72;
      __VERIFIER_nondet_memory(&std72, sizeof(std72));
      agg_tmp1725 = std72;
      struct std__basic_ostream_char__std__char_traits_char__* std73;
      __VERIFIER_nondet_memory(&std73, sizeof(std73));
        int i74;
        int c75 = 0;
        i74 = c75;
        while (1) {
          int t77 = i74;
          int t78 = SIZE2;
          _Bool c79 = ((t77 < t78)) ? 1 : 0;
          if (!c79) break;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1880;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1981;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2082;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2183;
            struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2284;
            struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2385;
            int t86 = i74;
            long cast87 = (long)t86;
            // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
            __VERIFIER_nondet_memory(&v26, sizeof(v26));
            __VERIFIER_nondet_memory(&a3[cast87], sizeof(a3[cast87]));
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std88;
            __VERIFIER_nondet_memory(&std88, sizeof(std88));
            agg_tmp1880 = std88;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std89;
            __VERIFIER_nondet_memory(&std89, sizeof(std89));
            agg_tmp1981 = std89;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t90 = agg_tmp1880;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t91 = agg_tmp1981;
            // externalized std:: op: void std::push_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
            char* cast92 = (char*)&(_str_5);
            struct std__basic_ostream_char__std__char_traits_char__* std93;
            __VERIFIER_nondet_memory(&std93, sizeof(std93));
            int t94 = i74;
            struct std__basic_ostream_char__std__char_traits_char__* std95;
            __VERIFIER_nondet_memory(&std95, sizeof(std95));
            char* cast96 = (char*)&(_str_6);
            struct std__basic_ostream_char__std__char_traits_char__* std97;
            __VERIFIER_nondet_memory(&std97, sizeof(std97));
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std98;
            __VERIFIER_nondet_memory(&std98, sizeof(std98));
            agg_tmp2082 = std98;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std99;
            __VERIFIER_nondet_memory(&std99, sizeof(std99));
            agg_tmp2183 = std99;
            // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
            __VERIFIER_nondet_memory(&agg_tmp2284, sizeof(agg_tmp2284));
            __VERIFIER_nondet_memory(&output7, sizeof(output7));
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t100 = agg_tmp2082;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t101 = agg_tmp2183;
            struct std__ostream_iterator_int__char__std__char_traits_char__ t102 = agg_tmp2284;
            struct std__ostream_iterator_int__char__std__char_traits_char__ std103;
            __VERIFIER_nondet_memory(&std103, sizeof(std103));
            agg_tmp2385 = std103;
        for_step76: ;
          int t104 = i74;
          int u105 = t104 + 1;
          i74 = u105;
        }
      struct std__basic_ostream_char__std__char_traits_char__* std106;
      __VERIFIER_nondet_memory(&std106, sizeof(std106));
        int j107;
        int c108 = 0;
        j107 = c108;
        while (1) {
          int t110 = j107;
          unsigned long cast111 = (unsigned long)t110;
          unsigned long std112 = __VERIFIER_nondet_unsigned_long();
          _Bool c113 = ((cast111 < std112)) ? 1 : 0;
          if (!c113) break;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp24114;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp25115;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1116;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp26117;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp27118;
            struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp28119;
            struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp29120;
            char* cast121 = (char*)&(_str_7);
            struct std__basic_ostream_char__std__char_traits_char__* std122;
            __VERIFIER_nondet_memory(&std122, sizeof(std122));
            unsigned long c123 = 0;
            int* std124;
            __VERIFIER_nondet_memory(&std124, sizeof(std124));
            int t125 = *std124;
            struct std__basic_ostream_char__std__char_traits_char__* std126;
            __VERIFIER_nondet_memory(&std126, sizeof(std126));
            char* cast127 = (char*)&(_str_8);
            struct std__basic_ostream_char__std__char_traits_char__* std128;
            __VERIFIER_nondet_memory(&std128, sizeof(std128));
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std129;
            __VERIFIER_nondet_memory(&std129, sizeof(std129));
            agg_tmp24114 = std129;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std130;
            __VERIFIER_nondet_memory(&std130, sizeof(std130));
            ref_tmp1116 = std130;
            int t131 = j107;
            long cast132 = (long)t131;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std133;
            __VERIFIER_nondet_memory(&std133, sizeof(std133));
            agg_tmp25115 = std133;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t134 = agg_tmp24114;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t135 = agg_tmp25115;
            // externalized std:: op: void std::pop_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std136;
            __VERIFIER_nondet_memory(&std136, sizeof(std136));
            agg_tmp26117 = std136;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std137;
            __VERIFIER_nondet_memory(&std137, sizeof(std137));
            agg_tmp27118 = std137;
            // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
            __VERIFIER_nondet_memory(&agg_tmp28119, sizeof(agg_tmp28119));
            __VERIFIER_nondet_memory(&output7, sizeof(output7));
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t138 = agg_tmp26117;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t139 = agg_tmp27118;
            struct std__ostream_iterator_int__char__std__char_traits_char__ t140 = agg_tmp28119;
            struct std__ostream_iterator_int__char__std__char_traits_char__ std141;
            __VERIFIER_nondet_memory(&std141, sizeof(std141));
            agg_tmp29120 = std141;
        for_step109: ;
          int t142 = j107;
          int u143 = t142 + 1;
          j107 = u143;
        }
      struct std__basic_ostream_char__std__char_traits_char__* std144;
      __VERIFIER_nondet_memory(&std144, sizeof(std144));
      int c145 = 0;
      __retval1 = c145;
      int t146 = __retval1;
      int ret_val147 = t146;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&v26, sizeof(v26));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&v4, sizeof(v4));
      }
      return ret_val147;
  int t148 = __retval1;
  return t148;
}

