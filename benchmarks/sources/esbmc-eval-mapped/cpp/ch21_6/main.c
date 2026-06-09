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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_;
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__;
struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__less_int_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ first; struct std___Rb_tree_const_iterator_int_ second; };
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { struct std___Rb_tree_iterator_int_ first; struct std___Rb_tree_iterator_int_ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_a[10] = {7, 22, 9, 1, 18, 30, 100, 22, 85, 13};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[21] = "There are currently ";
char _str_2[31] = " values of 15 in the multiset\n";
char _str_3[26] = "After inserts, there are ";
char _str_4[32] = " values of 15 in the multiset\n\n";
char _str_5[16] = "Found value 15\n";
char _str_6[23] = "Did not find value 20\n";
char _str_7[38] = "\nAfter insert, intMultiset contains:\n";
char _str_8[22] = "\n\nLower bound of 22: ";
char _str_9[21] = "\nUpper bound of 22: ";
char _str_10[21] = "\n\nequal_range of 22:";
char _str_11[18] = "\n   Lower bound: ";
char _str_12[18] = "\n   Upper bound: ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int SIZE2;
  int a3[10];
  struct std__multiset_int__std__less_int___std__allocator_int__ intMultiset4;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output5;
  int ref_tmp06;
  int ref_tmp17;
  struct std___Rb_tree_const_iterator_int_ agg_tmp08;
  int ref_tmp29;
  struct std___Rb_tree_const_iterator_int_ agg_tmp110;
  int ref_tmp311;
  struct std___Rb_tree_const_iterator_int_ result12;
  struct std___Rb_tree_const_iterator_int_ ref_tmp413;
  int ref_tmp514;
  struct std___Rb_tree_const_iterator_int_ ref_tmp715;
  int ref_tmp816;
  struct std___Rb_tree_const_iterator_int_ agg_tmp217;
  struct std___Rb_tree_const_iterator_int_ agg_tmp318;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp419;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp520;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1021;
  int ref_tmp1122;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1223;
  int ref_tmp1324;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ p25;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ ref_tmp1426;
  int ref_tmp1527;
  int c28 = 0;
  __retval1 = c28;
  int c29 = 10;
  SIZE2 = c29;
  // array copy
  __builtin_memcpy(a3, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&intMultiset4, sizeof(intMultiset4));
    char* cast30 = (char*)&(_str);
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
    __VERIFIER_nondet_memory(&output5, sizeof(output5));
    __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
    __VERIFIER_nondet_memory(cast30, sizeof(*cast30));
    char* cast31 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int c33 = 15;
    ref_tmp06 = c33;
    unsigned long std34 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    char* cast36 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    int c38 = 15;
    ref_tmp17 = c38;
    struct std___Rb_tree_const_iterator_int_ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    agg_tmp08 = std39;
    int c40 = 15;
    ref_tmp29 = c40;
    struct std___Rb_tree_const_iterator_int_ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    agg_tmp110 = std41;
    char* cast42 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int c44 = 15;
    ref_tmp311 = c44;
    unsigned long std45 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    char* cast47 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&result12, sizeof(result12));
    int c49 = 15;
    ref_tmp514 = c49;
    struct std___Rb_tree_const_iterator_int_ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    ref_tmp413 = std50;
    struct std___Rb_tree_const_iterator_int_* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
      struct std___Rb_tree_const_iterator_int_ ref_tmp652;
      struct std___Rb_tree_const_iterator_int_ std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      ref_tmp652 = std53;
      _Bool std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      _Bool u55 = !std54;
      if (u55) {
        char* cast56 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std57;
        __VERIFIER_nondet_memory(&std57, sizeof(std57));
      }
    int c58 = 20;
    ref_tmp816 = c58;
    struct std___Rb_tree_const_iterator_int_ std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    ref_tmp715 = std59;
    struct std___Rb_tree_const_iterator_int_* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
      struct std___Rb_tree_const_iterator_int_ ref_tmp961;
      struct std___Rb_tree_const_iterator_int_ std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      ref_tmp961 = std62;
      _Bool std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
      if (std63) {
        char* cast64 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
      }
    int* cast66 = (int*)&(a3);
    int* cast67 = (int*)&(a3);
    int t68 = SIZE2;
    int* ptr69 = &(cast67)[t68];
    // externalized std:: op: void std::multiset<int, std::less<int>, std::allocator<int> >::insert<int*>(int*, int*)
    __VERIFIER_nondet_memory(&intMultiset4, sizeof(intMultiset4));
    __VERIFIER_nondet_memory(cast66, sizeof(*cast66));
    __VERIFIER_nondet_memory(ptr69, sizeof(*ptr69));
    char* cast70 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    struct std___Rb_tree_const_iterator_int_ std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    agg_tmp217 = std72;
    struct std___Rb_tree_const_iterator_int_ std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    agg_tmp318 = std73;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp419, sizeof(agg_tmp419));
    __VERIFIER_nondet_memory(&output5, sizeof(output5));
    struct std___Rb_tree_const_iterator_int_ t74 = agg_tmp217;
    struct std___Rb_tree_const_iterator_int_ t75 = agg_tmp318;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t76 = agg_tmp419;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
    agg_tmp520 = std77;
    char* cast78 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    int c80 = 22;
    ref_tmp1122 = c80;
    struct std___Rb_tree_const_iterator_int_ std81;
    __VERIFIER_nondet_memory(&std81, sizeof(std81));
    ref_tmp1021 = std81;
    int* std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    int t83 = *std82;
    struct std__basic_ostream_char__std__char_traits_char__* std84;
    __VERIFIER_nondet_memory(&std84, sizeof(std84));
    char* cast85 = (char*)&(_str_9);
    struct std__basic_ostream_char__std__char_traits_char__* std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
    int c87 = 22;
    ref_tmp1324 = c87;
    struct std___Rb_tree_const_iterator_int_ std88;
    __VERIFIER_nondet_memory(&std88, sizeof(std88));
    ref_tmp1223 = std88;
    int* std89;
    __VERIFIER_nondet_memory(&std89, sizeof(std89));
    int t90 = *std89;
    struct std__basic_ostream_char__std__char_traits_char__* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    // externalized std:: op: _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
    __VERIFIER_nondet_memory(&p25, sizeof(p25));
    int c92 = 22;
    ref_tmp1527 = c92;
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ std93;
    __VERIFIER_nondet_memory(&std93, sizeof(std93));
    ref_tmp1426 = std93;
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* std94;
    __VERIFIER_nondet_memory(&std94, sizeof(std94));
    char* cast95 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* std96;
    __VERIFIER_nondet_memory(&std96, sizeof(std96));
    char* cast97 = (char*)&(_str_11);
    struct std__basic_ostream_char__std__char_traits_char__* std98;
    __VERIFIER_nondet_memory(&std98, sizeof(std98));
    int* std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    int t100 = *std99;
    struct std__basic_ostream_char__std__char_traits_char__* std101;
    __VERIFIER_nondet_memory(&std101, sizeof(std101));
    char* cast102 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* std103;
    __VERIFIER_nondet_memory(&std103, sizeof(std103));
    int* std104;
    __VERIFIER_nondet_memory(&std104, sizeof(std104));
    int t105 = *std104;
    struct std__basic_ostream_char__std__char_traits_char__* std106;
    __VERIFIER_nondet_memory(&std106, sizeof(std106));
    struct std__basic_ostream_char__std__char_traits_char__* std107;
    __VERIFIER_nondet_memory(&std107, sizeof(std107));
    int c108 = 0;
    __retval1 = c108;
    int t109 = __retval1;
    int ret_val110 = t109;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&intMultiset4, sizeof(intMultiset4));
    }
    return ret_val110;
  int t111 = __retval1;
  return t111;
}

