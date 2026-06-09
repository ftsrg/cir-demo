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
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_continent[4] = {40, 30, 20, 10};
int __const_main_container[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[30] = "container includes continent!";
char _str_1[58] = "!(includes(container,container+10,continent,continent+4))";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm110-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[70] = "!(includes(container,container+10,continent,continent+4, myfunction))";
_Bool myfunction(int p0, int p1);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(struct __gnu_cxx____ops___Iter_less_val* p0, int* p1, int* p2);
void void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(int* p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_val* p4);
void void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(int* p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* p0, int* p1, int* p2);
void void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter* p3);
void void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
void void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap_int___int__(int* p0, int* p1);
void void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____ops___Iter_less_iter p4);
int* int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
int* int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, long p2, struct __gnu_cxx____ops___Iter_less_iter p3);
int int_std____countl_zero_unsigned_long_(unsigned long p0);
int int_std____bit_width_unsigned_long_(unsigned long p0);
long long_std____lg_long_(long p0);
int* int__std____niter_wrap_int__(int** p0, int* p1);
_Bool std__is_constant_evaluated();
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int__(int* p0);
int* int__std____copy_move_backward_a_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__move_backward_int___int__(int* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(struct __gnu_cxx____ops___Val_less_iter* p0, int* p1, int* p2);
void void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(int* p0, struct __gnu_cxx____ops___Val_less_iter p1);
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_comp_iter(struct __gnu_cxx____ops___Iter_less_iter p0);
void void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
void void_std__sort_int__(int* p0, int* p1);
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____ops___Iter_less_iter p4);
_Bool bool_std__includes_int___int__(int* p0, int* p1, int* p2, int* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, int* p1, int* p2);
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int___int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p4);
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* p0);
_Bool bool_std__includes_int___int___bool_____int__int___int___int___int___int___bool____(int* p0, int* p1, int* p2, int* p3, void* p4);
int main();

// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclIPiiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(struct __gnu_cxx____ops___Iter_less_val* v10, int* v11, int* v12) {
bb13:
  struct __gnu_cxx____ops___Iter_less_val* this14;
  int* __it15;
  int* __val16;
  _Bool __retval17;
  this14 = v10;
  __it15 = v11;
  __val16 = v12;
  struct __gnu_cxx____ops___Iter_less_val* t18 = this14;
  int* t19 = __it15;
  int t20 = *t19;
  int* t21 = __val16;
  int t22 = *t21;
  _Bool c23 = ((t20 < t22)) ? 1 : 0;
  __retval17 = c23;
  _Bool t24 = __retval17;
  return t24;
}

// function: _ZSt11__push_heapIPiliN9__gnu_cxx5__ops14_Iter_less_valEEvT_T0_S5_T1_RT2_
void void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(int* v25, long v26, long v27, int v28, struct __gnu_cxx____ops___Iter_less_val* v29) {
bb30:
  int* __first31;
  long __holeIndex32;
  long __topIndex33;
  int __value34;
  struct __gnu_cxx____ops___Iter_less_val* __comp35;
  long __parent36;
  __first31 = v25;
  __holeIndex32 = v26;
  __topIndex33 = v27;
  __value34 = v28;
  __comp35 = v29;
  long t37 = __holeIndex32;
  long c38 = 1;
  long b39 = t37 - c38;
  long c40 = 2;
  long b41 = b39 / c40;
  __parent36 = b41;
    while (1) {
      long t42 = __holeIndex32;
      long t43 = __topIndex33;
      _Bool c44 = ((t42 > t43)) ? 1 : 0;
      _Bool ternary45;
      if (c44) {
        struct __gnu_cxx____ops___Iter_less_val* t46 = __comp35;
        int* t47 = __first31;
        long t48 = __parent36;
        int* ptr49 = &(t47)[t48];
        _Bool r50 = bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(t46, ptr49, &__value34);
        ternary45 = (_Bool)r50;
      } else {
        _Bool c51 = 0;
        ternary45 = (_Bool)c51;
      }
      if (!ternary45) break;
        int* t52 = __first31;
        long t53 = __parent36;
        int* ptr54 = &(t52)[t53];
        int t55 = *ptr54;
        int* t56 = __first31;
        long t57 = __holeIndex32;
        int* ptr58 = &(t56)[t57];
        *ptr58 = t55;
        long t59 = __parent36;
        __holeIndex32 = t59;
        long t60 = __holeIndex32;
        long c61 = 1;
        long b62 = t60 - c61;
        long c63 = 2;
        long b64 = b62 / c63;
        __parent36 = b64;
    }
  int t65 = __value34;
  int* t66 = __first31;
  long t67 = __holeIndex32;
  int* ptr68 = &(t66)[t67];
  *ptr68 = t65;
  return;
}

// function: _ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2_
void void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(int* v69, long v70, long v71, int v72, struct __gnu_cxx____ops___Iter_less_iter v73) {
bb74:
  int* __first75;
  long __holeIndex76;
  long __len77;
  int __value78;
  struct __gnu_cxx____ops___Iter_less_iter __comp79;
  long __topIndex80;
  long __secondChild81;
  struct __gnu_cxx____ops___Iter_less_val __cmp82;
  __first75 = v69;
  __holeIndex76 = v70;
  __len77 = v71;
  __value78 = v72;
  __comp79 = v73;
  long t83 = __holeIndex76;
  __topIndex80 = t83;
  long t84 = __holeIndex76;
  __secondChild81 = t84;
    while (1) {
      long t85 = __secondChild81;
      long t86 = __len77;
      long c87 = 1;
      long b88 = t86 - c87;
      long c89 = 2;
      long b90 = b88 / c89;
      _Bool c91 = ((t85 < b90)) ? 1 : 0;
      if (!c91) break;
        long c92 = 2;
        long t93 = __secondChild81;
        long c94 = 1;
        long b95 = t93 + c94;
        long b96 = c92 * b95;
        __secondChild81 = b96;
          int* t97 = __first75;
          long t98 = __secondChild81;
          int* ptr99 = &(t97)[t98];
          int* t100 = __first75;
          long t101 = __secondChild81;
          long c102 = 1;
          long b103 = t101 - c102;
          int* ptr104 = &(t100)[b103];
          _Bool r105 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp79, ptr99, ptr104);
          if (r105) {
            long t106 = __secondChild81;
            long u107 = t106 - 1;
            __secondChild81 = u107;
          }
        int* t108 = __first75;
        long t109 = __secondChild81;
        int* ptr110 = &(t108)[t109];
        int t111 = *ptr110;
        int* t112 = __first75;
        long t113 = __holeIndex76;
        int* ptr114 = &(t112)[t113];
        *ptr114 = t111;
        long t115 = __secondChild81;
        __holeIndex76 = t115;
    }
    long t116 = __len77;
    long c117 = 1;
    long b118 = t116 & c117;
    long c119 = 0;
    _Bool c120 = ((b118 == c119)) ? 1 : 0;
    _Bool ternary121;
    if (c120) {
      long t122 = __secondChild81;
      long t123 = __len77;
      long c124 = 2;
      long b125 = t123 - c124;
      long c126 = 2;
      long b127 = b125 / c126;
      _Bool c128 = ((t122 == b127)) ? 1 : 0;
      ternary121 = (_Bool)c128;
    } else {
      _Bool c129 = 0;
      ternary121 = (_Bool)c129;
    }
    if (ternary121) {
      long c130 = 2;
      long t131 = __secondChild81;
      long c132 = 1;
      long b133 = t131 + c132;
      long b134 = c130 * b133;
      __secondChild81 = b134;
      int* t135 = __first75;
      long t136 = __secondChild81;
      long c137 = 1;
      long b138 = t136 - c137;
      int* ptr139 = &(t135)[b138];
      int t140 = *ptr139;
      int* t141 = __first75;
      long t142 = __holeIndex76;
      int* ptr143 = &(t141)[t142];
      *ptr143 = t140;
      long t144 = __secondChild81;
      long c145 = 1;
      long b146 = t144 - c145;
      __holeIndex76 = b146;
    }
  __cmp82 = *&__const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp; // copy
  int* t147 = __first75;
  long t148 = __holeIndex76;
  long t149 = __topIndex80;
  int t150 = __value78;
  void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(t147, t148, t149, t150, &__cmp82);
  return;
}

// function: _ZSt11__make_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_RT0_
void void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v151, int* v152, struct __gnu_cxx____ops___Iter_less_iter* v153) {
bb154:
  int* __first155;
  int* __last156;
  struct __gnu_cxx____ops___Iter_less_iter* __comp157;
  long __len158;
  long __parent159;
  __first155 = v151;
  __last156 = v152;
  __comp157 = v153;
    int* t160 = __last156;
    int* t161 = __first155;
    long diff162 = t160 - t161;
    long c163 = 2;
    _Bool c164 = ((diff162 < c163)) ? 1 : 0;
    if (c164) {
      return;
    }
  int* t165 = __last156;
  int* t166 = __first155;
  long diff167 = t165 - t166;
  __len158 = diff167;
  long t168 = __len158;
  long c169 = 2;
  long b170 = t168 - c169;
  long c171 = 2;
  long b172 = b170 / c171;
  __parent159 = b172;
    while (1) {
      _Bool c173 = 1;
      if (!c173) break;
        int __value174;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp0175;
        int* t176 = __first155;
        long t177 = __parent159;
        int* ptr178 = &(t176)[t177];
        int t179 = *ptr178;
        __value174 = t179;
        int* t180 = __first155;
        long t181 = __parent159;
        long t182 = __len158;
        int t183 = __value174;
        struct __gnu_cxx____ops___Iter_less_iter* t184 = __comp157;
        struct __gnu_cxx____ops___Iter_less_iter t185 = agg_tmp0175;
        void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(t180, t181, t182, t183, t185);
          long t186 = __parent159;
          long c187 = 0;
          _Bool c188 = ((t186 == c187)) ? 1 : 0;
          if (c188) {
            return;
          }
        long t189 = __parent159;
        long u190 = t189 - 1;
        __parent159 = u190;
    }
  return;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* v191, int* v192, int* v193) {
bb194:
  struct __gnu_cxx____ops___Iter_less_iter* this195;
  int* __it1196;
  int* __it2197;
  _Bool __retval198;
  this195 = v191;
  __it1196 = v192;
  __it2197 = v193;
  struct __gnu_cxx____ops___Iter_less_iter* t199 = this195;
  int* t200 = __it1196;
  int t201 = *t200;
  int* t202 = __it2197;
  int t203 = *t202;
  _Bool c204 = ((t201 < t203)) ? 1 : 0;
  __retval198 = c204;
  _Bool t205 = __retval198;
  return t205;
}

// function: _ZSt10__pop_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_RT0_
void void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v206, int* v207, int* v208, struct __gnu_cxx____ops___Iter_less_iter* v209) {
bb210:
  int* __first211;
  int* __last212;
  int* __result213;
  struct __gnu_cxx____ops___Iter_less_iter* __comp214;
  int __value215;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0216;
  __first211 = v206;
  __last212 = v207;
  __result213 = v208;
  __comp214 = v209;
  int* t217 = __result213;
  int t218 = *t217;
  __value215 = t218;
  int* t219 = __first211;
  int t220 = *t219;
  int* t221 = __result213;
  *t221 = t220;
  int* t222 = __first211;
  long c223 = 0;
  int* t224 = __last212;
  int* t225 = __first211;
  long diff226 = t224 - t225;
  int t227 = __value215;
  struct __gnu_cxx____ops___Iter_less_iter* t228 = __comp214;
  struct __gnu_cxx____ops___Iter_less_iter t229 = agg_tmp0216;
  void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(t222, c223, diff226, t227, t229);
  return;
}

// function: _ZSt13__heap_selectIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_T0_
void void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(int* v230, int* v231, int* v232, struct __gnu_cxx____ops___Iter_less_iter v233) {
bb234:
  int* __first235;
  int* __middle236;
  int* __last237;
  struct __gnu_cxx____ops___Iter_less_iter __comp238;
  __first235 = v230;
  __middle236 = v231;
  __last237 = v232;
  __comp238 = v233;
  int* t239 = __first235;
  int* t240 = __middle236;
  void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(t239, t240, &__comp238);
    int* __i241;
    int* t242 = __middle236;
    __i241 = t242;
    while (1) {
      int* t244 = __i241;
      int* t245 = __last237;
      _Bool c246 = ((t244 < t245)) ? 1 : 0;
      if (!c246) break;
        int* t247 = __i241;
        int* t248 = __first235;
        _Bool r249 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp238, t247, t248);
        if (r249) {
          int* t250 = __first235;
          int* t251 = __middle236;
          int* t252 = __i241;
          void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(t250, t251, t252, &__comp238);
        }
    for_step243: ;
      int* t253 = __i241;
      int c254 = 1;
      int* ptr255 = &(t253)[c254];
      __i241 = ptr255;
    }
  return;
}

// function: _ZSt11__sort_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_RT0_
void void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v256, int* v257, struct __gnu_cxx____ops___Iter_less_iter* v258) {
bb259:
  int* __first260;
  int* __last261;
  struct __gnu_cxx____ops___Iter_less_iter* __comp262;
  __first260 = v256;
  __last261 = v257;
  __comp262 = v258;
    while (1) {
      int* t263 = __last261;
      int* t264 = __first260;
      long diff265 = t263 - t264;
      long c266 = 1;
      _Bool c267 = ((diff265 > c266)) ? 1 : 0;
      if (!c267) break;
        int* t268 = __last261;
        int c269 = -1;
        int* ptr270 = &(t268)[c269];
        __last261 = ptr270;
        int* t271 = __first260;
        int* t272 = __last261;
        int* t273 = __last261;
        struct __gnu_cxx____ops___Iter_less_iter* t274 = __comp262;
        void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(t271, t272, t273, t274);
    }
  return;
}

// function: _ZSt14__partial_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_T0_
void void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v275, int* v276, int* v277, struct __gnu_cxx____ops___Iter_less_iter v278) {
bb279:
  int* __first280;
  int* __middle281;
  int* __last282;
  struct __gnu_cxx____ops___Iter_less_iter __comp283;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0284;
  __first280 = v275;
  __middle281 = v276;
  __last282 = v277;
  __comp283 = v278;
  int* t285 = __first280;
  int* t286 = __middle281;
  int* t287 = __last282;
  struct __gnu_cxx____ops___Iter_less_iter t288 = agg_tmp0284;
  void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(t285, t286, t287, t288);
  int* t289 = __first280;
  int* t290 = __middle281;
  void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(t289, t290, &__comp283);
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v291, int* v292) {
bb293:
  int* __a294;
  int* __b295;
  int __tmp296;
  __a294 = v291;
  __b295 = v292;
  int* t297 = __a294;
  int t298 = *t297;
  __tmp296 = t298;
  int* t299 = __b295;
  int t300 = *t299;
  int* t301 = __a294;
  *t301 = t300;
  int t302 = __tmp296;
  int* t303 = __b295;
  *t303 = t302;
  return;
}

// function: _ZSt9iter_swapIPiS0_EvT_T0_
void void_std__iter_swap_int___int__(int* v304, int* v305) {
bb306:
  int* __a307;
  int* __b308;
  __a307 = v304;
  __b308 = v305;
  int* t309 = __a307;
  int* t310 = __b308;
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(t309, t310);
  return;
}

// function: _ZSt22__move_median_to_firstIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_S4_T0_
void void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(int* v311, int* v312, int* v313, int* v314, struct __gnu_cxx____ops___Iter_less_iter v315) {
bb316:
  int* __result317;
  int* __a318;
  int* __b319;
  int* __c320;
  struct __gnu_cxx____ops___Iter_less_iter __comp321;
  __result317 = v311;
  __a318 = v312;
  __b319 = v313;
  __c320 = v314;
  __comp321 = v315;
    int* t322 = __a318;
    int* t323 = __b319;
    _Bool r324 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp321, t322, t323);
    if (r324) {
        int* t325 = __b319;
        int* t326 = __c320;
        _Bool r327 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp321, t325, t326);
        if (r327) {
          int* t328 = __result317;
          int* t329 = __b319;
          void_std__iter_swap_int___int__(t328, t329);
        } else {
            int* t330 = __a318;
            int* t331 = __c320;
            _Bool r332 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp321, t330, t331);
            if (r332) {
              int* t333 = __result317;
              int* t334 = __c320;
              void_std__iter_swap_int___int__(t333, t334);
            } else {
              int* t335 = __result317;
              int* t336 = __a318;
              void_std__iter_swap_int___int__(t335, t336);
            }
        }
    } else {
        int* t337 = __a318;
        int* t338 = __c320;
        _Bool r339 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp321, t337, t338);
        if (r339) {
          int* t340 = __result317;
          int* t341 = __a318;
          void_std__iter_swap_int___int__(t340, t341);
        } else {
            int* t342 = __b319;
            int* t343 = __c320;
            _Bool r344 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp321, t342, t343);
            if (r344) {
              int* t345 = __result317;
              int* t346 = __c320;
              void_std__iter_swap_int___int__(t345, t346);
            } else {
              int* t347 = __result317;
              int* t348 = __b319;
              void_std__iter_swap_int___int__(t347, t348);
            }
        }
    }
  return;
}

// function: _ZSt21__unguarded_partitionIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_S4_T0_
int* int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(int* v349, int* v350, int* v351, struct __gnu_cxx____ops___Iter_less_iter v352) {
bb353:
  int* __first354;
  int* __last355;
  int* __pivot356;
  struct __gnu_cxx____ops___Iter_less_iter __comp357;
  int* __retval358;
  __first354 = v349;
  __last355 = v350;
  __pivot356 = v351;
  __comp357 = v352;
    while (1) {
      _Bool c359 = 1;
      if (!c359) break;
          while (1) {
            int* t360 = __first354;
            int* t361 = __pivot356;
            _Bool r362 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp357, t360, t361);
            if (!r362) break;
            int* t363 = __first354;
            int c364 = 1;
            int* ptr365 = &(t363)[c364];
            __first354 = ptr365;
          }
        int* t366 = __last355;
        int c367 = -1;
        int* ptr368 = &(t366)[c367];
        __last355 = ptr368;
          while (1) {
            int* t369 = __pivot356;
            int* t370 = __last355;
            _Bool r371 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp357, t369, t370);
            if (!r371) break;
            int* t372 = __last355;
            int c373 = -1;
            int* ptr374 = &(t372)[c373];
            __last355 = ptr374;
          }
          int* t375 = __first354;
          int* t376 = __last355;
          _Bool c377 = ((t375 < t376)) ? 1 : 0;
          _Bool u378 = !c377;
          if (u378) {
            int* t379 = __first354;
            __retval358 = t379;
            int* t380 = __retval358;
            int* ret_val381 = t380;
            return ret_val381;
          }
        int* t382 = __first354;
        int* t383 = __last355;
        void_std__iter_swap_int___int__(t382, t383);
        int* t384 = __first354;
        int c385 = 1;
        int* ptr386 = &(t384)[c385];
        __first354 = ptr386;
    }
  abort();
}

// function: _ZSt27__unguarded_partition_pivotIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_T0_
int* int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(int* v387, int* v388, struct __gnu_cxx____ops___Iter_less_iter v389) {
bb390:
  int* __first391;
  int* __last392;
  struct __gnu_cxx____ops___Iter_less_iter __comp393;
  int* __retval394;
  int* __mid395;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0396;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp1397;
  __first391 = v387;
  __last392 = v388;
  __comp393 = v389;
  int* t398 = __first391;
  int* t399 = __last392;
  int* t400 = __first391;
  long diff401 = t399 - t400;
  long c402 = 2;
  long b403 = diff401 / c402;
  int* ptr404 = &(t398)[b403];
  __mid395 = ptr404;
  int* t405 = __first391;
  int* t406 = __first391;
  int c407 = 1;
  int* ptr408 = &(t406)[c407];
  int* t409 = __mid395;
  int* t410 = __last392;
  int c411 = -1;
  int* ptr412 = &(t410)[c411];
  struct __gnu_cxx____ops___Iter_less_iter t413 = agg_tmp0396;
  void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(t405, ptr408, t409, ptr412, t413);
  int* t414 = __first391;
  int c415 = 1;
  int* ptr416 = &(t414)[c415];
  int* t417 = __last392;
  int* t418 = __first391;
  struct __gnu_cxx____ops___Iter_less_iter t419 = agg_tmp1397;
  int* r420 = int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(ptr416, t417, t418, t419);
  __retval394 = r420;
  int* t421 = __retval394;
  return t421;
}

// function: _ZSt16__introsort_loopIPilN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_T1_
void void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(int* v422, int* v423, long v424, struct __gnu_cxx____ops___Iter_less_iter v425) {
bb426:
  int* __first427;
  int* __last428;
  long __depth_limit429;
  struct __gnu_cxx____ops___Iter_less_iter __comp430;
  __first427 = v422;
  __last428 = v423;
  __depth_limit429 = v424;
  __comp430 = v425;
    while (1) {
      int* t431 = __last428;
      int* t432 = __first427;
      long diff433 = t431 - t432;
      long c434 = 16;
      _Bool c435 = ((diff433 > c434)) ? 1 : 0;
      if (!c435) break;
        int* __cut436;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp1437;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp2438;
          long t439 = __depth_limit429;
          long c440 = 0;
          _Bool c441 = ((t439 == c440)) ? 1 : 0;
          if (c441) {
            struct __gnu_cxx____ops___Iter_less_iter agg_tmp0442;
            int* t443 = __first427;
            int* t444 = __last428;
            int* t445 = __last428;
            struct __gnu_cxx____ops___Iter_less_iter t446 = agg_tmp0442;
            void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(t443, t444, t445, t446);
            return;
          }
        long t447 = __depth_limit429;
        long u448 = t447 - 1;
        __depth_limit429 = u448;
        int* t449 = __first427;
        int* t450 = __last428;
        struct __gnu_cxx____ops___Iter_less_iter t451 = agg_tmp1437;
        int* r452 = int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(t449, t450, t451);
        __cut436 = r452;
        int* t453 = __cut436;
        int* t454 = __last428;
        long t455 = __depth_limit429;
        struct __gnu_cxx____ops___Iter_less_iter t456 = agg_tmp2438;
        void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(t453, t454, t455, t456);
        int* t457 = __cut436;
        __last428 = t457;
    }
  return;
}

// function: _ZSt13__countl_zeroImEiT_
int int_std____countl_zero_unsigned_long_(unsigned long v458) {
bb459:
  unsigned long __x460;
  int __retval461;
  int _Nd462;
  __x460 = v458;
  int c463 = 64;
  _Nd462 = c463;
  unsigned long t464 = __x460;
  unsigned long clz465 = (unsigned long)__builtin_clzll((unsigned long)t464);
  int cast466 = (int)clz465;
  unsigned long c467 = 0;
  _Bool c468 = ((t464 == c467)) ? 1 : 0;
  int t469 = _Nd462;
  int sel470 = c468 ? t469 : cast466;
  __retval461 = sel470;
  int t471 = __retval461;
  return t471;
}

// function: _ZSt11__bit_widthImEiT_
int int_std____bit_width_unsigned_long_(unsigned long v472) {
bb473:
  unsigned long __x474;
  int __retval475;
  int _Nd476;
  __x474 = v472;
  int c477 = 64;
  _Nd476 = c477;
  int t478 = _Nd476;
  unsigned long t479 = __x474;
  int r480 = int_std____countl_zero_unsigned_long_(t479);
  int b481 = t478 - r480;
  __retval475 = b481;
  int t482 = __retval475;
  return t482;
}

// function: _ZSt4__lgIlET_S0_
long long_std____lg_long_(long v483) {
bb484:
  long __n485;
  long __retval486;
  __n485 = v483;
  long t487 = __n485;
  unsigned long cast488 = (unsigned long)t487;
  int r489 = int_std____bit_width_unsigned_long_(cast488);
  int c490 = 1;
  int b491 = r489 - c490;
  long cast492 = (long)b491;
  __retval486 = cast492;
  long t493 = __retval486;
  return t493;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v494, int* v495) {
bb496:
  int** unnamed497;
  int* __res498;
  int* __retval499;
  unnamed497 = v494;
  __res498 = v495;
  int* t500 = __res498;
  __retval499 = t500;
  int* t501 = __retval499;
  return t501;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb502:
  _Bool __retval503;
    _Bool c504 = 0;
    __retval503 = c504;
    _Bool t505 = __retval503;
    return t505;
  abort();
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v506, int* v507, struct std__random_access_iterator_tag v508) {
bb509:
  int* __first510;
  int* __last511;
  struct std__random_access_iterator_tag unnamed512;
  long __retval513;
  __first510 = v506;
  __last511 = v507;
  unnamed512 = v508;
  int* t514 = __last511;
  int* t515 = __first510;
  long diff516 = t514 - t515;
  __retval513 = diff516;
  long t517 = __retval513;
  return t517;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v518) {
bb519:
  int** unnamed520;
  struct std__random_access_iterator_tag __retval521;
  unnamed520 = v518;
  struct std__random_access_iterator_tag t522 = __retval521;
  return t522;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v523, int* v524) {
bb525:
  int* __first526;
  int* __last527;
  long __retval528;
  struct std__random_access_iterator_tag agg_tmp0529;
  __first526 = v523;
  __last527 = v524;
  int* t530 = __first526;
  int* t531 = __last527;
  struct std__random_access_iterator_tag r532 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first526);
  agg_tmp0529 = r532;
  struct std__random_access_iterator_tag t533 = agg_tmp0529;
  long r534 = std__iterator_traits_int____difference_type_std____distance_int__(t530, t531, t533);
  __retval528 = r534;
  long t535 = __retval528;
  return t535;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v536, long v537, struct std__random_access_iterator_tag v538) {
bb539:
  int** __i540;
  long __n541;
  struct std__random_access_iterator_tag unnamed542;
  __i540 = v536;
  __n541 = v537;
  unnamed542 = v538;
    long t543 = __n541;
    _Bool isconst544 = 0;
    _Bool ternary545;
    if (isconst544) {
      long t546 = __n541;
      long c547 = 1;
      _Bool c548 = ((t546 == c547)) ? 1 : 0;
      ternary545 = (_Bool)c548;
    } else {
      _Bool c549 = 0;
      ternary545 = (_Bool)c549;
    }
    if (ternary545) {
      int** t550 = __i540;
      int* t551 = *t550;
      int c552 = 1;
      int* ptr553 = &(t551)[c552];
      *t550 = ptr553;
    } else {
        long t554 = __n541;
        _Bool isconst555 = 0;
        _Bool ternary556;
        if (isconst555) {
          long t557 = __n541;
          long c558 = -1;
          _Bool c559 = ((t557 == c558)) ? 1 : 0;
          ternary556 = (_Bool)c559;
        } else {
          _Bool c560 = 0;
          ternary556 = (_Bool)c560;
        }
        if (ternary556) {
          int** t561 = __i540;
          int* t562 = *t561;
          int c563 = -1;
          int* ptr564 = &(t562)[c563];
          *t561 = ptr564;
        } else {
          long t565 = __n541;
          int** t566 = __i540;
          int* t567 = *t566;
          int* ptr568 = &(t567)[t565];
          *t566 = ptr568;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v569, long v570) {
bb571:
  int** __i572;
  long __n573;
  long __d574;
  struct std__random_access_iterator_tag agg_tmp0575;
  __i572 = v569;
  __n573 = v570;
  long t576 = __n573;
  __d574 = t576;
  int** t577 = __i572;
  long t578 = __d574;
  int** t579 = __i572;
  struct std__random_access_iterator_tag r580 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t579);
  agg_tmp0575 = r580;
  struct std__random_access_iterator_tag t581 = agg_tmp0575;
  void_std____advance_int___long_(t577, t578, t581);
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v582, int** v583) {
bb584:
  int** __out585;
  int** __in586;
  __out585 = v582;
  __in586 = v583;
    int** t587 = __in586;
    int* t588 = *t587;
    int t589 = *t588;
    int** t590 = __out585;
    int* t591 = *t590;
    *t591 = t589;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v592, int* v593, int* v594) {
bb595:
  int* __first596;
  int* __last597;
  int* __result598;
  int* __retval599;
  __first596 = v592;
  __last597 = v593;
  __result598 = v594;
      _Bool r600 = std__is_constant_evaluated();
      if (r600) {
      } else {
          long __n601;
          int* t602 = __first596;
          int* t603 = __last597;
          long r604 = std__iterator_traits_int____difference_type_std__distance_int__(t602, t603);
          __n601 = r604;
          long t605 = __n601;
          long u606 = -t605;
          void_std__advance_int___long_(&__result598, u606);
            long t607 = __n601;
            long c608 = 1;
            _Bool c609 = ((t607 > c608)) ? 1 : 0;
            if (c609) {
              int* t610 = __result598;
              void* cast611 = (void*)t610;
              int* t612 = __first596;
              void* cast613 = (void*)t612;
              long t614 = __n601;
              unsigned long cast615 = (unsigned long)t614;
              unsigned long c616 = 4;
              unsigned long b617 = cast615 * c616;
              void* r618 = memmove(cast611, cast613, b617);
            } else {
                long t619 = __n601;
                long c620 = 1;
                _Bool c621 = ((t619 == c620)) ? 1 : 0;
                if (c621) {
                  void_std____assign_one_true__int___int__(&__result598, &__first596);
                }
            }
          int* t622 = __result598;
          __retval599 = t622;
          int* t623 = __retval599;
          return t623;
      }
    while (1) {
      int* t624 = __first596;
      int* t625 = __last597;
      _Bool c626 = ((t624 != t625)) ? 1 : 0;
      if (!c626) break;
        int* t627 = __last597;
        int c628 = -1;
        int* ptr629 = &(t627)[c628];
        __last597 = ptr629;
        int* t630 = __result598;
        int c631 = -1;
        int* ptr632 = &(t630)[c631];
        __result598 = ptr632;
        void_std____assign_one_true__int___int__(&__result598, &__last597);
    }
  int* t633 = __result598;
  __retval599 = t633;
  int* t634 = __retval599;
  return t634;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v635, int* v636, int* v637) {
bb638:
  int* __first639;
  int* __last640;
  int* __result641;
  int* __retval642;
  __first639 = v635;
  __last640 = v636;
  __result641 = v637;
  int* t643 = __first639;
  int* t644 = __last640;
  int* t645 = __result641;
  int* r646 = int__std____copy_move_backward_a2_true__int___int__(t643, t644, t645);
  __retval642 = r646;
  int* t647 = __retval642;
  return t647;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v648) {
bb649:
  int* __it650;
  int* __retval651;
  __it650 = v648;
  int* t652 = __it650;
  __retval651 = t652;
  int* t653 = __retval651;
  return t653;
}

// function: _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a_true__int___int__(int* v654, int* v655, int* v656) {
bb657:
  int* __first658;
  int* __last659;
  int* __result660;
  int* __retval661;
  __first658 = v654;
  __last659 = v655;
  __result660 = v656;
  int* t662 = __first658;
  int* r663 = int__std____niter_base_int__(t662);
  int* t664 = __last659;
  int* r665 = int__std____niter_base_int__(t664);
  int* t666 = __result660;
  int* r667 = int__std____niter_base_int__(t666);
  int* r668 = int__std____copy_move_backward_a1_true__int___int__(r663, r665, r667);
  int* r669 = int__std____niter_wrap_int__(&__result660, r668);
  __retval661 = r669;
  int* t670 = __retval661;
  return t670;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v671) {
bb672:
  int* __it673;
  int* __retval674;
  __it673 = v671;
  int* t675 = __it673;
  __retval674 = t675;
  int* t676 = __retval674;
  return t676;
}

// function: _ZSt13move_backwardIPiS0_ET0_T_S2_S1_
int* int__std__move_backward_int___int__(int* v677, int* v678, int* v679) {
bb680:
  int* __first681;
  int* __last682;
  int* __result683;
  int* __retval684;
  __first681 = v677;
  __last682 = v678;
  __result683 = v679;
  int* t685 = __first681;
  int* r686 = int__std____miter_base_int__(t685);
  int* t687 = __last682;
  int* r688 = int__std____miter_base_int__(t687);
  int* t689 = __result683;
  int* r690 = int__std____copy_move_backward_a_true__int___int__(r686, r688, t689);
  __retval684 = r690;
  int* t691 = __retval684;
  return t691;
}

// function: _ZNK9__gnu_cxx5__ops14_Val_less_iterclIiPiEEbRT_T0_
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(struct __gnu_cxx____ops___Val_less_iter* v692, int* v693, int* v694) {
bb695:
  struct __gnu_cxx____ops___Val_less_iter* this696;
  int* __val697;
  int* __it698;
  _Bool __retval699;
  this696 = v692;
  __val697 = v693;
  __it698 = v694;
  struct __gnu_cxx____ops___Val_less_iter* t700 = this696;
  int* t701 = __val697;
  int t702 = *t701;
  int* t703 = __it698;
  int t704 = *t703;
  _Bool c705 = ((t702 < t704)) ? 1 : 0;
  __retval699 = c705;
  _Bool t706 = __retval699;
  return t706;
}

// function: _ZSt25__unguarded_linear_insertIPiN9__gnu_cxx5__ops14_Val_less_iterEEvT_T0_
void void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(int* v707, struct __gnu_cxx____ops___Val_less_iter v708) {
bb709:
  int* __last710;
  struct __gnu_cxx____ops___Val_less_iter __comp711;
  int __val712;
  int* __next713;
  __last710 = v707;
  __comp711 = v708;
  int* t714 = __last710;
  int t715 = *t714;
  __val712 = t715;
  int* t716 = __last710;
  __next713 = t716;
  int* t717 = __next713;
  int c718 = -1;
  int* ptr719 = &(t717)[c718];
  __next713 = ptr719;
    while (1) {
      int* t720 = __next713;
      _Bool r721 = bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(&__comp711, &__val712, t720);
      if (!r721) break;
        int* t722 = __next713;
        int t723 = *t722;
        int* t724 = __last710;
        *t724 = t723;
        int* t725 = __next713;
        __last710 = t725;
        int* t726 = __next713;
        int c727 = -1;
        int* ptr728 = &(t726)[c727];
        __next713 = ptr728;
    }
  int t729 = __val712;
  int* t730 = __last710;
  *t730 = t729;
  return;
}

// function: _ZN9__gnu_cxx5__ops15__val_comp_iterENS0_15_Iter_less_iterE
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_comp_iter(struct __gnu_cxx____ops___Iter_less_iter v731) {
bb732:
  struct __gnu_cxx____ops___Iter_less_iter unnamed733;
  struct __gnu_cxx____ops___Val_less_iter __retval734;
  unnamed733 = v731;
  struct __gnu_cxx____ops___Val_less_iter t735 = __retval734;
  return t735;
}

// function: _ZSt16__insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v736, int* v737, struct __gnu_cxx____ops___Iter_less_iter v738) {
bb739:
  int* __first740;
  int* __last741;
  struct __gnu_cxx____ops___Iter_less_iter __comp742;
  __first740 = v736;
  __last741 = v737;
  __comp742 = v738;
    int* t743 = __first740;
    int* t744 = __last741;
    _Bool c745 = ((t743 == t744)) ? 1 : 0;
    if (c745) {
      return;
    }
    int* __i746;
    int* t747 = __first740;
    int c748 = 1;
    int* ptr749 = &(t747)[c748];
    __i746 = ptr749;
    while (1) {
      int* t751 = __i746;
      int* t752 = __last741;
      _Bool c753 = ((t751 != t752)) ? 1 : 0;
      if (!c753) break;
          int* t754 = __i746;
          int* t755 = __first740;
          _Bool r756 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp742, t754, t755);
          if (r756) {
            int __val757;
            int* t758 = __i746;
            int t759 = *t758;
            __val757 = t759;
            int* t760 = __first740;
            int* t761 = __i746;
            int* t762 = __i746;
            int c763 = 1;
            int* ptr764 = &(t762)[c763];
            int* r765 = int__std__move_backward_int___int__(t760, t761, ptr764);
            int t766 = __val757;
            int* t767 = __first740;
            *t767 = t766;
          } else {
            struct __gnu_cxx____ops___Val_less_iter agg_tmp0768;
            struct __gnu_cxx____ops___Iter_less_iter agg_tmp1769;
            int* t770 = __i746;
            struct __gnu_cxx____ops___Iter_less_iter t771 = agg_tmp1769;
            struct __gnu_cxx____ops___Val_less_iter r772 = __gnu_cxx____ops____val_comp_iter(t771);
            agg_tmp0768 = r772;
            struct __gnu_cxx____ops___Val_less_iter t773 = agg_tmp0768;
            void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(t770, t773);
          }
    for_step750: ;
      int* t774 = __i746;
      int c775 = 1;
      int* ptr776 = &(t774)[c775];
      __i746 = ptr776;
    }
  return;
}

// function: _ZSt26__unguarded_insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v777, int* v778, struct __gnu_cxx____ops___Iter_less_iter v779) {
bb780:
  int* __first781;
  int* __last782;
  struct __gnu_cxx____ops___Iter_less_iter __comp783;
  __first781 = v777;
  __last782 = v778;
  __comp783 = v779;
    int* __i784;
    struct __gnu_cxx____ops___Val_less_iter agg_tmp0785;
    struct __gnu_cxx____ops___Iter_less_iter agg_tmp1786;
    int* t787 = __first781;
    __i784 = t787;
    while (1) {
      int* t789 = __i784;
      int* t790 = __last782;
      _Bool c791 = ((t789 != t790)) ? 1 : 0;
      if (!c791) break;
      int* t792 = __i784;
      struct __gnu_cxx____ops___Iter_less_iter t793 = agg_tmp1786;
      struct __gnu_cxx____ops___Val_less_iter r794 = __gnu_cxx____ops____val_comp_iter(t793);
      agg_tmp0785 = r794;
      struct __gnu_cxx____ops___Val_less_iter t795 = agg_tmp0785;
      void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(t792, t795);
    for_step788: ;
      int* t796 = __i784;
      int c797 = 1;
      int* ptr798 = &(t796)[c797];
      __i784 = ptr798;
    }
  return;
}

// function: _ZSt22__final_insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v799, int* v800, struct __gnu_cxx____ops___Iter_less_iter v801) {
bb802:
  int* __first803;
  int* __last804;
  struct __gnu_cxx____ops___Iter_less_iter __comp805;
  __first803 = v799;
  __last804 = v800;
  __comp805 = v801;
    int* t806 = __last804;
    int* t807 = __first803;
    long diff808 = t806 - t807;
    long c809 = 16;
    _Bool c810 = ((diff808 > c809)) ? 1 : 0;
    if (c810) {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp0811;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp1812;
      int* t813 = __first803;
      int* t814 = __first803;
      int c815 = 16;
      int* ptr816 = &(t814)[c815];
      struct __gnu_cxx____ops___Iter_less_iter t817 = agg_tmp0811;
      void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t813, ptr816, t817);
      int* t818 = __first803;
      int c819 = 16;
      int* ptr820 = &(t818)[c819];
      int* t821 = __last804;
      struct __gnu_cxx____ops___Iter_less_iter t822 = agg_tmp1812;
      void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(ptr820, t821, t822);
    } else {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp2823;
      int* t824 = __first803;
      int* t825 = __last804;
      struct __gnu_cxx____ops___Iter_less_iter t826 = agg_tmp2823;
      void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t824, t825, t826);
    }
  return;
}

// function: _ZSt6__sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v827, int* v828, struct __gnu_cxx____ops___Iter_less_iter v829) {
bb830:
  int* __first831;
  int* __last832;
  struct __gnu_cxx____ops___Iter_less_iter __comp833;
  __first831 = v827;
  __last832 = v828;
  __comp833 = v829;
    int* t834 = __first831;
    int* t835 = __last832;
    _Bool c836 = ((t834 != t835)) ? 1 : 0;
    if (c836) {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp0837;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp1838;
      int* t839 = __first831;
      int* t840 = __last832;
      int* t841 = __last832;
      int* t842 = __first831;
      long diff843 = t841 - t842;
      long r844 = long_std____lg_long_(diff843);
      long c845 = 2;
      long b846 = r844 * c845;
      struct __gnu_cxx____ops___Iter_less_iter t847 = agg_tmp0837;
      void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(t839, t840, b846, t847);
      int* t848 = __first831;
      int* t849 = __last832;
      struct __gnu_cxx____ops___Iter_less_iter t850 = agg_tmp1838;
      void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t848, t849, t850);
    }
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb851:
  struct __gnu_cxx____ops___Iter_less_iter __retval852;
  struct __gnu_cxx____ops___Iter_less_iter t853 = __retval852;
  return t853;
}

// function: _ZSt4sortIPiEvT_S1_
void void_std__sort_int__(int* v854, int* v855) {
bb856:
  int* __first857;
  int* __last858;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0859;
  __first857 = v854;
  __last858 = v855;
  int* t860 = __first857;
  int* t861 = __last858;
  struct __gnu_cxx____ops___Iter_less_iter r862 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0859 = r862;
  struct __gnu_cxx____ops___Iter_less_iter t863 = agg_tmp0859;
  void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(t860, t861, t863);
  return;
}

// function: _ZSt10__includesIPiS0_N9__gnu_cxx5__ops15_Iter_less_iterEEbT_S4_T0_S5_T1_
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(int* v864, int* v865, int* v866, int* v867, struct __gnu_cxx____ops___Iter_less_iter v868) {
bb869:
  int* __first1870;
  int* __last1871;
  int* __first2872;
  int* __last2873;
  struct __gnu_cxx____ops___Iter_less_iter __comp874;
  _Bool __retval875;
  __first1870 = v864;
  __last1871 = v865;
  __first2872 = v866;
  __last2873 = v867;
  __comp874 = v868;
    while (1) {
      int* t876 = __first1870;
      int* t877 = __last1871;
      _Bool c878 = ((t876 != t877)) ? 1 : 0;
      _Bool ternary879;
      if (c878) {
        int* t880 = __first2872;
        int* t881 = __last2873;
        _Bool c882 = ((t880 != t881)) ? 1 : 0;
        ternary879 = (_Bool)c882;
      } else {
        _Bool c883 = 0;
        ternary879 = (_Bool)c883;
      }
      if (!ternary879) break;
          int* t884 = __first2872;
          int* t885 = __first1870;
          _Bool r886 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp874, t884, t885);
          if (r886) {
            _Bool c887 = 0;
            __retval875 = c887;
            _Bool t888 = __retval875;
            _Bool ret_val889 = t888;
            return ret_val889;
          }
          int* t890 = __first1870;
          int* t891 = __first2872;
          _Bool r892 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp874, t890, t891);
          _Bool u893 = !r892;
          if (u893) {
            int* t894 = __first2872;
            int c895 = 1;
            int* ptr896 = &(t894)[c895];
            __first2872 = ptr896;
          }
        int* t897 = __first1870;
        int c898 = 1;
        int* ptr899 = &(t897)[c898];
        __first1870 = ptr899;
    }
  int* t900 = __first2872;
  int* t901 = __last2873;
  _Bool c902 = ((t900 == t901)) ? 1 : 0;
  __retval875 = c902;
  _Bool t903 = __retval875;
  return t903;
}

// function: _ZSt8includesIPiS0_EbT_S1_T0_S2_
_Bool bool_std__includes_int___int__(int* v904, int* v905, int* v906, int* v907) {
bb908:
  int* __first1909;
  int* __last1910;
  int* __first2911;
  int* __last2912;
  _Bool __retval913;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0914;
  __first1909 = v904;
  __last1910 = v905;
  __first2911 = v906;
  __last2912 = v907;
  int* t915 = __first1909;
  int* t916 = __last1910;
  int* t917 = __first2911;
  int* t918 = __last2912;
  struct __gnu_cxx____ops___Iter_less_iter r919 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0914 = r919;
  struct __gnu_cxx____ops___Iter_less_iter t920 = agg_tmp0914;
  _Bool r921 = bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(t915, t916, t917, t918, t920);
  __retval913 = r921;
  _Bool t922 = __retval913;
  return t922;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v923, int v924) {
bb925:
  int __a926;
  int __b927;
  int __retval928;
  __a926 = v923;
  __b927 = v924;
  int t929 = __a926;
  int t930 = __b927;
  int b931 = t929 | t930;
  __retval928 = b931;
  int t932 = __retval928;
  return t932;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v933) {
bb934:
  struct std__basic_ios_char__std__char_traits_char__* this935;
  int __retval936;
  this935 = v933;
  struct std__basic_ios_char__std__char_traits_char__* t937 = this935;
  struct std__ios_base* base938 = (struct std__ios_base*)((char *)t937 + 0);
  int t939 = base938->_M_streambuf_state;
  __retval936 = t939;
  int t940 = __retval936;
  return t940;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v941, int v942) {
bb943:
  struct std__basic_ios_char__std__char_traits_char__* this944;
  int __state945;
  this944 = v941;
  __state945 = v942;
  struct std__basic_ios_char__std__char_traits_char__* t946 = this944;
  int r947 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t946);
  int t948 = __state945;
  int r949 = std__operator_(r947, t948);
  std__basic_ios_char__std__char_traits_char_____clear(t946, r949);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb950:
  _Bool __retval951;
    _Bool c952 = 0;
    __retval951 = c952;
    _Bool t953 = __retval951;
    return t953;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v954, char* v955) {
bb956:
  char* __c1957;
  char* __c2958;
  _Bool __retval959;
  __c1957 = v954;
  __c2958 = v955;
  char* t960 = __c1957;
  char t961 = *t960;
  int cast962 = (int)t961;
  char* t963 = __c2958;
  char t964 = *t963;
  int cast965 = (int)t964;
  _Bool c966 = ((cast962 == cast965)) ? 1 : 0;
  __retval959 = c966;
  _Bool t967 = __retval959;
  return t967;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v968) {
bb969:
  char* __p970;
  unsigned long __retval971;
  unsigned long __i972;
  __p970 = v968;
  unsigned long c973 = 0;
  __i972 = c973;
    char ref_tmp0974;
    while (1) {
      unsigned long t975 = __i972;
      char* t976 = __p970;
      char* ptr977 = &(t976)[t975];
      char c978 = 0;
      ref_tmp0974 = c978;
      _Bool r979 = __gnu_cxx__char_traits_char___eq(ptr977, &ref_tmp0974);
      _Bool u980 = !r979;
      if (!u980) break;
      unsigned long t981 = __i972;
      unsigned long u982 = t981 + 1;
      __i972 = u982;
    }
  unsigned long t983 = __i972;
  __retval971 = t983;
  unsigned long t984 = __retval971;
  return t984;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v985) {
bb986:
  char* __s987;
  unsigned long __retval988;
  __s987 = v985;
    _Bool r989 = std____is_constant_evaluated();
    if (r989) {
      char* t990 = __s987;
      unsigned long r991 = __gnu_cxx__char_traits_char___length(t990);
      __retval988 = r991;
      unsigned long t992 = __retval988;
      return t992;
    }
  char* t993 = __s987;
  unsigned long r994 = strlen(t993);
  __retval988 = r994;
  unsigned long t995 = __retval988;
  return t995;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v996, char* v997) {
bb998:
  struct std__basic_ostream_char__std__char_traits_char__* __out999;
  char* __s1000;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1001;
  __out999 = v996;
  __s1000 = v997;
    char* t1002 = __s1000;
    _Bool cast1003 = (_Bool)t1002;
    _Bool u1004 = !cast1003;
    if (u1004) {
      struct std__basic_ostream_char__std__char_traits_char__* t1005 = __out999;
      void** v1006 = (void**)t1005;
      void* v1007 = *((void**)v1006);
      unsigned char* cast1008 = (unsigned char*)v1007;
      long c1009 = -24;
      unsigned char* ptr1010 = &(cast1008)[c1009];
      long* cast1011 = (long*)ptr1010;
      long t1012 = *cast1011;
      unsigned char* cast1013 = (unsigned char*)t1005;
      unsigned char* ptr1014 = &(cast1013)[t1012];
      struct std__basic_ostream_char__std__char_traits_char__* cast1015 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1014;
      struct std__basic_ios_char__std__char_traits_char__* cast1016 = (struct std__basic_ios_char__std__char_traits_char__*)cast1015;
      int t1017 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1016, t1017);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1018 = __out999;
      char* t1019 = __s1000;
      char* t1020 = __s1000;
      unsigned long r1021 = std__char_traits_char___length(t1020);
      long cast1022 = (long)r1021;
      struct std__basic_ostream_char__std__char_traits_char__* r1023 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1018, t1019, cast1022);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1024 = __out999;
  __retval1001 = t1024;
  struct std__basic_ostream_char__std__char_traits_char__* t1025 = __retval1001;
  return t1025;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1026, void* v1027) {
bb1028:
  struct std__basic_ostream_char__std__char_traits_char__* this1029;
  void* __pf1030;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1031;
  this1029 = v1026;
  __pf1030 = v1027;
  struct std__basic_ostream_char__std__char_traits_char__* t1032 = this1029;
  void* t1033 = __pf1030;
  struct std__basic_ostream_char__std__char_traits_char__* r1034 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1033)(t1032);
  __retval1031 = r1034;
  struct std__basic_ostream_char__std__char_traits_char__* t1035 = __retval1031;
  return t1035;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1036) {
bb1037:
  struct std__basic_ostream_char__std__char_traits_char__* __os1038;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1039;
  __os1038 = v1036;
  struct std__basic_ostream_char__std__char_traits_char__* t1040 = __os1038;
  struct std__basic_ostream_char__std__char_traits_char__* r1041 = std__ostream__flush(t1040);
  __retval1039 = r1041;
  struct std__basic_ostream_char__std__char_traits_char__* t1042 = __retval1039;
  return t1042;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1043) {
bb1044:
  struct std__ctype_char_* __f1045;
  struct std__ctype_char_* __retval1046;
  __f1045 = v1043;
    struct std__ctype_char_* t1047 = __f1045;
    _Bool cast1048 = (_Bool)t1047;
    _Bool u1049 = !cast1048;
    if (u1049) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1050 = __f1045;
  __retval1046 = t1050;
  struct std__ctype_char_* t1051 = __retval1046;
  return t1051;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1052, char v1053) {
bb1054:
  struct std__ctype_char_* this1055;
  char __c1056;
  char __retval1057;
  this1055 = v1052;
  __c1056 = v1053;
  struct std__ctype_char_* t1058 = this1055;
    char t1059 = t1058->_M_widen_ok;
    _Bool cast1060 = (_Bool)t1059;
    if (cast1060) {
      char t1061 = __c1056;
      unsigned char cast1062 = (unsigned char)t1061;
      unsigned long cast1063 = (unsigned long)cast1062;
      char t1064 = t1058->_M_widen[cast1063];
      __retval1057 = t1064;
      char t1065 = __retval1057;
      return t1065;
    }
  std__ctype_char____M_widen_init___const(t1058);
  char t1066 = __c1056;
  void** v1067 = (void**)t1058;
  void* v1068 = *((void**)v1067);
  char vcall1071 = (char)__VERIFIER_virtual_call_char_char(t1058, 6, t1066);
  __retval1057 = vcall1071;
  char t1072 = __retval1057;
  return t1072;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1073, char v1074) {
bb1075:
  struct std__basic_ios_char__std__char_traits_char__* this1076;
  char __c1077;
  char __retval1078;
  this1076 = v1073;
  __c1077 = v1074;
  struct std__basic_ios_char__std__char_traits_char__* t1079 = this1076;
  struct std__ctype_char_* t1080 = t1079->_M_ctype;
  struct std__ctype_char_* r1081 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1080);
  char t1082 = __c1077;
  char r1083 = std__ctype_char___widen_char__const(r1081, t1082);
  __retval1078 = r1083;
  char t1084 = __retval1078;
  return t1084;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1085) {
bb1086:
  struct std__basic_ostream_char__std__char_traits_char__* __os1087;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1088;
  __os1087 = v1085;
  struct std__basic_ostream_char__std__char_traits_char__* t1089 = __os1087;
  struct std__basic_ostream_char__std__char_traits_char__* t1090 = __os1087;
  void** v1091 = (void**)t1090;
  void* v1092 = *((void**)v1091);
  unsigned char* cast1093 = (unsigned char*)v1092;
  long c1094 = -24;
  unsigned char* ptr1095 = &(cast1093)[c1094];
  long* cast1096 = (long*)ptr1095;
  long t1097 = *cast1096;
  unsigned char* cast1098 = (unsigned char*)t1090;
  unsigned char* ptr1099 = &(cast1098)[t1097];
  struct std__basic_ostream_char__std__char_traits_char__* cast1100 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1099;
  struct std__basic_ios_char__std__char_traits_char__* cast1101 = (struct std__basic_ios_char__std__char_traits_char__*)cast1100;
  char c1102 = 10;
  char r1103 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1101, c1102);
  struct std__basic_ostream_char__std__char_traits_char__* r1104 = std__ostream__put(t1089, r1103);
  struct std__basic_ostream_char__std__char_traits_char__* r1105 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1104);
  __retval1088 = r1105;
  struct std__basic_ostream_char__std__char_traits_char__* t1106 = __retval1088;
  return t1106;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclIPiS6_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v1107, int* v1108, int* v1109) {
bb1110:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this1111;
  int* __it11112;
  int* __it21113;
  _Bool __retval1114;
  this1111 = v1107;
  __it11112 = v1108;
  __it21113 = v1109;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t1115 = this1111;
  void* t1116 = t1115->_M_comp;
  int* t1117 = __it11112;
  int t1118 = *t1117;
  int* t1119 = __it21113;
  int t1120 = *t1119;
  _Bool r1121 = ((_Bool (*)(int, int))t1116)(t1118, t1120);
  __retval1114 = r1121;
  _Bool t1122 = __retval1114;
  return t1122;
}

// function: _ZSt10__includesIPiS0_N9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEEEbT_S7_T0_S8_T1_
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int___int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* v1123, int* v1124, int* v1125, int* v1126, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v1127) {
bb1128:
  int* __first11129;
  int* __last11130;
  int* __first21131;
  int* __last21132;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __comp1133;
  _Bool __retval1134;
  __first11129 = v1123;
  __last11130 = v1124;
  __first21131 = v1125;
  __last21132 = v1126;
  __comp1133 = v1127;
    while (1) {
      int* t1135 = __first11129;
      int* t1136 = __last11130;
      _Bool c1137 = ((t1135 != t1136)) ? 1 : 0;
      _Bool ternary1138;
      if (c1137) {
        int* t1139 = __first21131;
        int* t1140 = __last21132;
        _Bool c1141 = ((t1139 != t1140)) ? 1 : 0;
        ternary1138 = (_Bool)c1141;
      } else {
        _Bool c1142 = 0;
        ternary1138 = (_Bool)c1142;
      }
      if (!ternary1138) break;
          int* t1143 = __first21131;
          int* t1144 = __first11129;
          _Bool r1145 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(&__comp1133, t1143, t1144);
          if (r1145) {
            _Bool c1146 = 0;
            __retval1134 = c1146;
            _Bool t1147 = __retval1134;
            _Bool ret_val1148 = t1147;
            return ret_val1148;
          }
          int* t1149 = __first11129;
          int* t1150 = __first21131;
          _Bool r1151 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(&__comp1133, t1149, t1150);
          _Bool u1152 = !r1151;
          if (u1152) {
            int* t1153 = __first21131;
            int c1154 = 1;
            int* ptr1155 = &(t1153)[c1154];
            __first21131 = ptr1155;
          }
        int* t1156 = __first11129;
        int c1157 = 1;
        int* ptr1158 = &(t1156)[c1157];
        __first11129 = ptr1158;
    }
  int* t1159 = __first21131;
  int* t1160 = __last21132;
  _Bool c1161 = ((t1159 == t1160)) ? 1 : 0;
  __retval1134 = c1161;
  _Bool t1162 = __retval1134;
  return t1162;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v1163, void* v1164) {
bb1165:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this1166;
  void* __comp1167;
  this1166 = v1163;
  __comp1167 = v1164;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t1168 = this1166;
  void* t1169 = __comp1167;
  t1168->_M_comp = t1169;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v1170) {
bb1171:
  void* __comp1172;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __retval1173;
  __comp1172 = v1170;
  void* t1174 = __comp1172;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval1173, t1174);
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t1175 = __retval1173;
  return t1175;
}

// function: _ZSt8includesIPiS0_PFbiiEEbT_S3_T0_S4_T1_
_Bool bool_std__includes_int___int___bool_____int__int___int___int___int___int___bool____(int* v1176, int* v1177, int* v1178, int* v1179, void* v1180) {
bb1181:
  int* __first11182;
  int* __last11183;
  int* __first21184;
  int* __last21185;
  void* __comp1186;
  _Bool __retval1187;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp01188;
  __first11182 = v1176;
  __last11183 = v1177;
  __first21184 = v1178;
  __last21185 = v1179;
  __comp1186 = v1180;
  int* t1189 = __first11182;
  int* t1190 = __last11183;
  int* t1191 = __first21184;
  int* t1192 = __last21185;
  void* t1193 = __comp1186;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ r1194 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t1193);
  agg_tmp01188 = r1194;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t1195 = agg_tmp01188;
  _Bool r1196 = bool_std____includes_int___int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int___int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(t1189, t1190, t1191, t1192, t1195);
  __retval1187 = r1196;
  _Bool t1197 = __retval1187;
  return t1197;
}

// function: main
int main() {
bb1198:
  int __retval1199;
  int container1200[10];
  int continent1201[4];
  int c1202 = 0;
  __retval1199 = c1202;
  // array copy
  __builtin_memcpy(container1200, __const_main_container, (unsigned long)10 * sizeof(__const_main_container[0]));
  // array copy
  __builtin_memcpy(continent1201, __const_main_continent, (unsigned long)4 * sizeof(__const_main_continent[0]));
  int* cast1203 = (int*)&(container1200);
  int* cast1204 = (int*)&(container1200);
  int c1205 = 10;
  int* ptr1206 = &(cast1204)[c1205];
  void_std__sort_int__(cast1203, ptr1206);
  int* cast1207 = (int*)&(continent1201);
  int* cast1208 = (int*)&(continent1201);
  int c1209 = 4;
  int* ptr1210 = &(cast1208)[c1209];
  void_std__sort_int__(cast1207, ptr1210);
    int* cast1211 = (int*)&(container1200);
    int* cast1212 = (int*)&(container1200);
    int c1213 = 10;
    int* ptr1214 = &(cast1212)[c1213];
    int* cast1215 = (int*)&(continent1201);
    int* cast1216 = (int*)&(continent1201);
    int c1217 = 4;
    int* ptr1218 = &(cast1216)[c1217];
    _Bool r1219 = bool_std__includes_int___int__(cast1211, ptr1214, cast1215, ptr1218);
    if (r1219) {
      char* cast1220 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r1221 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1220);
      struct std__basic_ostream_char__std__char_traits_char__* r1222 = std__ostream__operator___std__ostream_____(r1221, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    }
  int* cast1223 = (int*)&(container1200);
  int* cast1224 = (int*)&(container1200);
  int c1225 = 10;
  int* ptr1226 = &(cast1224)[c1225];
  int* cast1227 = (int*)&(continent1201);
  int* cast1228 = (int*)&(continent1201);
  int c1229 = 4;
  int* ptr1230 = &(cast1228)[c1229];
  _Bool r1231 = bool_std__includes_int___int__(cast1223, ptr1226, cast1227, ptr1230);
  _Bool u1232 = !r1231;
  if (u1232) {
  } else {
    char* cast1233 = (char*)&(_str_1);
    char* c1234 = _str_2;
    unsigned int c1235 = 27;
    char* cast1236 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast1233, c1234, c1235, cast1236);
  }
    int* cast1237 = (int*)&(container1200);
    int* cast1238 = (int*)&(container1200);
    int c1239 = 10;
    int* ptr1240 = &(cast1238)[c1239];
    int* cast1241 = (int*)&(continent1201);
    int* cast1242 = (int*)&(continent1201);
    int c1243 = 4;
    int* ptr1244 = &(cast1242)[c1243];
    _Bool r1245 = bool_std__includes_int___int___bool_____int__int___int___int___int___int___bool____(cast1237, ptr1240, cast1241, ptr1244, &myfunction);
    if (r1245) {
      char* cast1246 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r1247 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1246);
      struct std__basic_ostream_char__std__char_traits_char__* r1248 = std__ostream__operator___std__ostream_____(r1247, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    }
  int* cast1249 = (int*)&(container1200);
  int* cast1250 = (int*)&(container1200);
  int c1251 = 10;
  int* ptr1252 = &(cast1250)[c1251];
  int* cast1253 = (int*)&(continent1201);
  int* cast1254 = (int*)&(continent1201);
  int c1255 = 4;
  int* ptr1256 = &(cast1254)[c1255];
  _Bool r1257 = bool_std__includes_int___int___bool_____int__int___int___int___int___int___bool____(cast1249, ptr1252, cast1253, ptr1256, &myfunction);
  _Bool u1258 = !r1257;
  if (u1258) {
  } else {
    char* cast1259 = (char*)&(_str_3);
    char* c1260 = _str_2;
    unsigned int c1261 = 33;
    char* cast1262 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast1259, c1260, c1261, cast1262);
  }
  int c1263 = 0;
  __retval1199 = c1263;
  int t1264 = __retval1199;
  return t1264;
}

