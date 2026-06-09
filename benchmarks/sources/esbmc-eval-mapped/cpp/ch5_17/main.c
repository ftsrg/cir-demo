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
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setw { int _M_n; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_deck[4][13];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
char _str[7] = "Hearts";
char _str_1[9] = "Diamonds";
char _str_2[6] = "Clubs";
char _str_3[7] = "Spades";
char _str_4[4] = "Ace";
char _str_5[6] = "Deuce";
char _str_6[6] = "Three";
char _str_7[5] = "Four";
char _str_8[5] = "Five";
char _str_9[4] = "Six";
char _str_10[6] = "Seven";
char _str_11[6] = "Eight";
char _str_12[5] = "Nine";
char _str_13[4] = "Ten";
char _str_14[5] = "Jack";
char _str_15[6] = "Queen";
char _str_16[5] = "King";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_17[5] = " of ";
extern void srand(unsigned int p0);
extern long time(long* p0);
extern int rand();
void shuffle_int_(int* p0);
void deal_int_const_(int* p0, char** p1, char** p2);
int main();

char* __const_main_face[13] = {(char*)(_str_4), (char*)(_str_5), (char*)(_str_6), (char*)(_str_7), (char*)(_str_8), (char*)(_str_9), (char*)(_str_10), (char*)(_str_11), (char*)(_str_12), (char*)(_str_13), (char*)(_str_14), (char*)(_str_15), (char*)(_str_16)};
char* __const_main_suit[4] = {(char*)(_str), (char*)(_str_1), (char*)(_str_2), (char*)(_str_3)};
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z7shufflePA13_i
void shuffle_int_(int* v0) {
bb1:
  int* wDeck2;
  int row3;
  int column4;
  wDeck2 = v0;
    int card5;
    int c6 = 1;
    card5 = c6;
    while (1) {
      int t8 = card5;
      int c9 = 52;
      _Bool c10 = ((t8 <= c9)) ? 1 : 0;
      if (!c10) break;
          do {
              int r11 = rand();
              int c12 = 4;
              int b13 = r11 % c12;
              row3 = b13;
              int r14 = rand();
              int c15 = 13;
              int b16 = r14 % c15;
              column4 = b16;
            int t17 = column4;
            long cast18 = (long)t17;
            int t19 = row3;
            long cast20 = (long)t19;
            int* t21 = wDeck2;
            int* ptr22 = &(t21)[(cast20) * 13];
            int t23 = ptr22[cast18];
            int c24 = 0;
            _Bool c25 = ((t23 != c24)) ? 1 : 0;
            if (!c25) break;
          } while (1);
        int t26 = card5;
        int t27 = column4;
        long cast28 = (long)t27;
        int t29 = row3;
        long cast30 = (long)t29;
        int* t31 = wDeck2;
        int* ptr32 = &(t31)[(cast30) * 13];
        ptr32[cast28] = t26;
    for_step7: ;
      int t33 = card5;
      int u34 = t33 + 1;
      card5 = u34;
    }
  return;
}

// function: _Z4dealPA13_KiPPKcS4_
void deal_int_const_(int* v35, char** v36, char** v37) {
bb38:
  int* wDeck39;
  char** wFace40;
  char** wSuit41;
  wDeck39 = v35;
  wFace40 = v36;
  wSuit41 = v37;
    int card42;
    int c43 = 1;
    card42 = c43;
    while (1) {
      int t45 = card42;
      int c46 = 52;
      _Bool c47 = ((t45 <= c46)) ? 1 : 0;
      if (!c47) break;
        int row48;
        int c49 = 0;
        row48 = c49;
        while (1) {
          int t51 = row48;
          int c52 = 3;
          _Bool c53 = ((t51 <= c52)) ? 1 : 0;
          if (!c53) break;
            int column54;
            int c55 = 0;
            column54 = c55;
            while (1) {
              int t57 = column54;
              int c58 = 12;
              _Bool c59 = ((t57 <= c58)) ? 1 : 0;
              if (!c59) break;
                int t60 = column54;
                long cast61 = (long)t60;
                int t62 = row48;
                long cast63 = (long)t62;
                int* t64 = wDeck39;
                int* ptr65 = &(t64)[(cast63) * 13];
                int t66 = ptr65[cast61];
                int t67 = card42;
                _Bool c68 = ((t66 == t67)) ? 1 : 0;
                if (c68) {
                  struct std___Setw agg_tmp069;
                  struct std___Setw agg_tmp170;
                  int c71 = 5;
                  struct std___Setw std72;
                  __VERIFIER_nondet_memory(&std72, sizeof(std72));
                  agg_tmp069 = std72;
                  struct std___Setw t73 = agg_tmp069;
                  struct std__basic_ostream_char__std__char_traits_char__* std74;
                  __VERIFIER_nondet_memory(&std74, sizeof(std74));
                  struct std__basic_ostream_char__std__char_traits_char__* std75;
                  __VERIFIER_nondet_memory(&std75, sizeof(std75));
                  int t76 = column54;
                  long cast77 = (long)t76;
                  char** t78 = wFace40;
                  char** ptr79 = &(t78)[cast77];
                  char* t80 = *ptr79;
                  struct std__basic_ostream_char__std__char_traits_char__* std81;
                  __VERIFIER_nondet_memory(&std81, sizeof(std81));
                  char* cast82 = (char*)&(_str_17);
                  struct std__basic_ostream_char__std__char_traits_char__* std83;
                  __VERIFIER_nondet_memory(&std83, sizeof(std83));
                  int c84 = 8;
                  struct std___Setw std85;
                  __VERIFIER_nondet_memory(&std85, sizeof(std85));
                  agg_tmp170 = std85;
                  struct std___Setw t86 = agg_tmp170;
                  struct std__basic_ostream_char__std__char_traits_char__* std87;
                  __VERIFIER_nondet_memory(&std87, sizeof(std87));
                  struct std__basic_ostream_char__std__char_traits_char__* std88;
                  __VERIFIER_nondet_memory(&std88, sizeof(std88));
                  int t89 = row48;
                  long cast90 = (long)t89;
                  char** t91 = wSuit41;
                  char** ptr92 = &(t91)[cast90];
                  char* t93 = *ptr92;
                  struct std__basic_ostream_char__std__char_traits_char__* std94;
                  __VERIFIER_nondet_memory(&std94, sizeof(std94));
                  int t95 = card42;
                  int c96 = 2;
                  int b97 = t95 % c96;
                  int c98 = 0;
                  _Bool c99 = ((b97 == c98)) ? 1 : 0;
                  char c100 = 10;
                  char c101 = 9;
                  char sel102 = c99 ? c100 : c101;
                  struct std__basic_ostream_char__std__char_traits_char__* std103;
                  __VERIFIER_nondet_memory(&std103, sizeof(std103));
                }
            for_step56: ;
              int t104 = column54;
              int u105 = t104 + 1;
              column54 = u105;
            }
        for_step50: ;
          int t106 = row48;
          int u107 = t106 + 1;
          row48 = u107;
        }
    for_step44: ;
      int t108 = card42;
      int u109 = t108 + 1;
      card42 = u109;
    }
  return;
}

// function: main
int main() {
bb110:
  int __retval111;
  char* suit112[4];
  char* face113[13];
  int deck114[4][13];
  int c115 = 0;
  __retval111 = c115;
  // array copy
  __builtin_memcpy(suit112, __const_main_suit, (unsigned long)4 * sizeof(__const_main_suit[0]));
  // array copy
  __builtin_memcpy(face113, __const_main_face, (unsigned long)13 * sizeof(__const_main_face[0]));
  // array copy
  __builtin_memcpy(deck114, __const_main_deck, (unsigned long)4 * sizeof(__const_main_deck[0]));
  long* c116 = ((void*)0);
  long r117 = time(c116);
  unsigned int cast118 = (unsigned int)r117;
  srand(cast118);
  int* cast119 = (int*)&(deck114);
  shuffle_int_(cast119);
  int* cast120 = (int*)&(deck114);
  char** cast121 = (char**)&(face113);
  char** cast122 = (char**)&(suit112);
  deal_int_const_(cast120, cast121, cast122);
  int c123 = 0;
  __retval111 = c123;
  int t124 = __retval111;
  return t124;
}

