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
struct Time { int hour; int minute; int second; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setfill_char_ { char _M_c; };
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = ":";
char _str_1[4] = " AM";
char _str_2[4] = " PM";
char _str_3[31] = "The initial universal time is ";
char _str_4[31] = "\nThe initial standard time is ";
char _str_5[35] = "\n\nUniversal time after setTime is ";
char _str_6[33] = "\nStandard time after setTime is ";
char _str_7[37] = "\n\nAfter attempting invalid settings:";
char _str_8[18] = "\nUniversal time: ";
char _str_9[17] = "\nStandard time: ";
void Time__Time_2(struct Time* p0);
void Time__Time(struct Time* p0) { Time__Time_2(p0); }
void Time__setTime(struct Time* p0, int p1, int p2, int p3);
void Time__printUniversal(struct Time* p0);
void Time__printStandard(struct Time* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN4TimeC2Ev
void Time__Time_2(struct Time* v0) {
bb1:
  struct Time* this2;
  this2 = v0;
  struct Time* t3 = this2;
  int c4 = 0;
  t3->second = c4;
  t3->minute = c4;
  t3->hour = c4;
  return;
}

// function: _ZN4Time7setTimeEiii
void Time__setTime(struct Time* v5, int v6, int v7, int v8) {
bb9:
  struct Time* this10;
  int h11;
  int m12;
  int s13;
  this10 = v5;
  h11 = v6;
  m12 = v7;
  s13 = v8;
  struct Time* t14 = this10;
  int t15 = h11;
  int c16 = 0;
  _Bool c17 = ((t15 >= c16)) ? 1 : 0;
  _Bool ternary18;
  if (c17) {
    int t19 = h11;
    int c20 = 24;
    _Bool c21 = ((t19 < c20)) ? 1 : 0;
    ternary18 = (_Bool)c21;
  } else {
    _Bool c22 = 0;
    ternary18 = (_Bool)c22;
  }
  int ternary23;
  if (ternary18) {
    int t24 = h11;
    ternary23 = (int)t24;
  } else {
    int c25 = 0;
    ternary23 = (int)c25;
  }
  t14->hour = ternary23;
  int t26 = m12;
  int c27 = 0;
  _Bool c28 = ((t26 >= c27)) ? 1 : 0;
  _Bool ternary29;
  if (c28) {
    int t30 = m12;
    int c31 = 60;
    _Bool c32 = ((t30 < c31)) ? 1 : 0;
    ternary29 = (_Bool)c32;
  } else {
    _Bool c33 = 0;
    ternary29 = (_Bool)c33;
  }
  int ternary34;
  if (ternary29) {
    int t35 = m12;
    ternary34 = (int)t35;
  } else {
    int c36 = 0;
    ternary34 = (int)c36;
  }
  t14->minute = ternary34;
  int t37 = s13;
  int c38 = 0;
  _Bool c39 = ((t37 >= c38)) ? 1 : 0;
  _Bool ternary40;
  if (c39) {
    int t41 = s13;
    int c42 = 60;
    _Bool c43 = ((t41 < c42)) ? 1 : 0;
    ternary40 = (_Bool)c43;
  } else {
    _Bool c44 = 0;
    ternary40 = (_Bool)c44;
  }
  int ternary45;
  if (ternary40) {
    int t46 = s13;
    ternary45 = (int)t46;
  } else {
    int c47 = 0;
    ternary45 = (int)c47;
  }
  t14->second = ternary45;
  return;
}

// function: _ZN4Time14printUniversalEv
void Time__printUniversal(struct Time* v48) {
bb49:
  struct Time* this50;
  struct std___Setfill_char_ agg_tmp051;
  struct std___Setw agg_tmp152;
  struct std___Setw agg_tmp253;
  struct std___Setw agg_tmp354;
  this50 = v48;
  struct Time* t55 = this50;
  char c56 = 48;
  struct std___Setfill_char_ std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  agg_tmp051 = std57;
  struct std___Setfill_char_ t58 = agg_tmp051;
  struct std__basic_ostream_char__std__char_traits_char__* std59;
  __VERIFIER_nondet_memory(&std59, sizeof(std59));
  int c60 = 2;
  struct std___Setw std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  agg_tmp152 = std61;
  struct std___Setw t62 = agg_tmp152;
  struct std__basic_ostream_char__std__char_traits_char__* std63;
  __VERIFIER_nondet_memory(&std63, sizeof(std63));
  int t64 = t55->hour;
  struct std__basic_ostream_char__std__char_traits_char__* std65;
  __VERIFIER_nondet_memory(&std65, sizeof(std65));
  char* cast66 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std67;
  __VERIFIER_nondet_memory(&std67, sizeof(std67));
  int c68 = 2;
  struct std___Setw std69;
  __VERIFIER_nondet_memory(&std69, sizeof(std69));
  agg_tmp253 = std69;
  struct std___Setw t70 = agg_tmp253;
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  int t72 = t55->minute;
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  char* cast74 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std75;
  __VERIFIER_nondet_memory(&std75, sizeof(std75));
  int c76 = 2;
  struct std___Setw std77;
  __VERIFIER_nondet_memory(&std77, sizeof(std77));
  agg_tmp354 = std77;
  struct std___Setw t78 = agg_tmp354;
  struct std__basic_ostream_char__std__char_traits_char__* std79;
  __VERIFIER_nondet_memory(&std79, sizeof(std79));
  int t80 = t55->second;
  struct std__basic_ostream_char__std__char_traits_char__* std81;
  __VERIFIER_nondet_memory(&std81, sizeof(std81));
  return;
}

// function: _ZN4Time13printStandardEv
void Time__printStandard(struct Time* v82) {
bb83:
  struct Time* this84;
  struct std___Setfill_char_ agg_tmp085;
  struct std___Setw agg_tmp186;
  struct std___Setw agg_tmp287;
  this84 = v82;
  struct Time* t88 = this84;
  int t89 = t88->hour;
  int c90 = 0;
  _Bool c91 = ((t89 == c90)) ? 1 : 0;
  _Bool ternary92;
  if (c91) {
    _Bool c93 = 1;
    ternary92 = (_Bool)c93;
  } else {
    int t94 = t88->hour;
    int c95 = 12;
    _Bool c96 = ((t94 == c95)) ? 1 : 0;
    ternary92 = (_Bool)c96;
  }
  int ternary97;
  if (ternary92) {
    int c98 = 12;
    ternary97 = (int)c98;
  } else {
    int t99 = t88->hour;
    int c100 = 12;
    int b101 = t99 % c100;
    ternary97 = (int)b101;
  }
  struct std__basic_ostream_char__std__char_traits_char__* std102;
  __VERIFIER_nondet_memory(&std102, sizeof(std102));
  char* cast103 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std104;
  __VERIFIER_nondet_memory(&std104, sizeof(std104));
  char c105 = 48;
  struct std___Setfill_char_ std106;
  __VERIFIER_nondet_memory(&std106, sizeof(std106));
  agg_tmp085 = std106;
  struct std___Setfill_char_ t107 = agg_tmp085;
  struct std__basic_ostream_char__std__char_traits_char__* std108;
  __VERIFIER_nondet_memory(&std108, sizeof(std108));
  int c109 = 2;
  struct std___Setw std110;
  __VERIFIER_nondet_memory(&std110, sizeof(std110));
  agg_tmp186 = std110;
  struct std___Setw t111 = agg_tmp186;
  struct std__basic_ostream_char__std__char_traits_char__* std112;
  __VERIFIER_nondet_memory(&std112, sizeof(std112));
  int t113 = t88->minute;
  struct std__basic_ostream_char__std__char_traits_char__* std114;
  __VERIFIER_nondet_memory(&std114, sizeof(std114));
  char* cast115 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std116;
  __VERIFIER_nondet_memory(&std116, sizeof(std116));
  int c117 = 2;
  struct std___Setw std118;
  __VERIFIER_nondet_memory(&std118, sizeof(std118));
  agg_tmp287 = std118;
  struct std___Setw t119 = agg_tmp287;
  struct std__basic_ostream_char__std__char_traits_char__* std120;
  __VERIFIER_nondet_memory(&std120, sizeof(std120));
  int t121 = t88->second;
  struct std__basic_ostream_char__std__char_traits_char__* std122;
  __VERIFIER_nondet_memory(&std122, sizeof(std122));
  int t123 = t88->hour;
  int c124 = 12;
  _Bool c125 = ((t123 < c124)) ? 1 : 0;
  char* ternary126;
  if (c125) {
    ternary126 = (char*)_str_1;
  } else {
    ternary126 = (char*)_str_2;
  }
  char* cast127 = (char*)ternary126;
  struct std__basic_ostream_char__std__char_traits_char__* std128;
  __VERIFIER_nondet_memory(&std128, sizeof(std128));
  return;
}

// function: main
int main() {
bb129:
  int __retval130;
  struct Time t131;
  int c132 = 0;
  __retval130 = c132;
  Time__Time(&t131);
  char* cast133 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std134;
  __VERIFIER_nondet_memory(&std134, sizeof(std134));
  Time__printUniversal(&t131);
  char* cast135 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std136;
  __VERIFIER_nondet_memory(&std136, sizeof(std136));
  Time__printStandard(&t131);
  int c137 = 13;
  int c138 = 27;
  int c139 = 6;
  Time__setTime(&t131, c137, c138, c139);
  char* cast140 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std141;
  __VERIFIER_nondet_memory(&std141, sizeof(std141));
  Time__printUniversal(&t131);
  char* cast142 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std143;
  __VERIFIER_nondet_memory(&std143, sizeof(std143));
  Time__printStandard(&t131);
  int c144 = 99;
  int c145 = 99;
  int c146 = 99;
  Time__setTime(&t131, c144, c145, c146);
  char* cast147 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std148;
  __VERIFIER_nondet_memory(&std148, sizeof(std148));
  char* cast149 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std150;
  __VERIFIER_nondet_memory(&std150, sizeof(std150));
  Time__printUniversal(&t131);
  char* cast151 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std152;
  __VERIFIER_nondet_memory(&std152, sizeof(std152));
  Time__printStandard(&t131);
  struct std__basic_ostream_char__std__char_traits_char__* std153;
  __VERIFIER_nondet_memory(&std153, sizeof(std153));
  int c154 = 0;
  __retval130 = c154;
  int t155 = __retval130;
  return t155;
}

