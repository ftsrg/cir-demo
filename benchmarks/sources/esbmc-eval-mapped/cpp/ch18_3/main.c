extern void abort(void);
// Struct definitions (auto-parsed)
struct Card { char* face; char* suit; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setw { int _M_n; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
char _str[4] = "Ace";
char _str_1[6] = "Deuce";
char _str_2[6] = "Three";
char _str_3[5] = "Four";
char _str_4[5] = "Five";
char _str_5[4] = "Six";
char _str_6[6] = "Seven";
char _str_7[6] = "Eight";
char _str_8[5] = "Nine";
char _str_9[4] = "Ten";
char _str_10[5] = "Jack";
char _str_11[6] = "Queen";
char _str_12[5] = "King";
char _str_13[7] = "Hearts";
char _str_14[9] = "Diamonds";
char _str_15[6] = "Clubs";
char _str_16[7] = "Spades";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_17[5] = " of ";
extern void srand(unsigned int p0);
extern long time(long* p0);
void fillDeck(struct Card* p0, char** p1, char** p2);
extern int rand();
struct Card* Card__operator_(struct Card* p0, struct Card* p1);
void shuffle(struct Card* p0);
void deal(struct Card* p0);
int main();

char* __const_main_suit[4] = {(char*)(_str_13), (char*)(_str_14), (char*)(_str_15), (char*)(_str_16)};
char* __const_main_face[13] = {(char*)(_str), (char*)(_str_1), (char*)(_str_2), (char*)(_str_3), (char*)(_str_4), (char*)(_str_5), (char*)(_str_6), (char*)(_str_7), (char*)(_str_8), (char*)(_str_9), (char*)(_str_10), (char*)(_str_11), (char*)(_str_12)};
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8fillDeckP4CardPPcS2_
void fillDeck(struct Card* v0, char** v1, char** v2) {
bb3:
  struct Card* wDeck4;
  char** wFace5;
  char** wSuit6;
  wDeck4 = v0;
  wFace5 = v1;
  wSuit6 = v2;
    int i7;
    int c8 = 0;
    i7 = c8;
    while (1) {
      int t10 = i7;
      int c11 = 52;
      _Bool c12 = ((t10 < c11)) ? 1 : 0;
      if (!c12) break;
        int t13 = i7;
        int c14 = 13;
        int b15 = t13 % c14;
        long cast16 = (long)b15;
        char** t17 = wFace5;
        char** ptr18 = &(t17)[cast16];
        char* t19 = *ptr18;
        int t20 = i7;
        long cast21 = (long)t20;
        struct Card* t22 = wDeck4;
        struct Card* ptr23 = &(t22)[cast21];
        ptr23->face = t19;
        int t24 = i7;
        int c25 = 13;
        int b26 = t24 / c25;
        long cast27 = (long)b26;
        char** t28 = wSuit6;
        char** ptr29 = &(t28)[cast27];
        char* t30 = *ptr29;
        int t31 = i7;
        long cast32 = (long)t31;
        struct Card* t33 = wDeck4;
        struct Card* ptr34 = &(t33)[cast32];
        ptr34->suit = t30;
    for_step9: ;
      int t35 = i7;
      int u36 = t35 + 1;
      i7 = u36;
    }
  return;
}

// function: _ZN4CardaSERKS_
struct Card* Card__operator_(struct Card* v37, struct Card* v38) {
bb39:
  struct Card* this40;
  struct Card* unnamed41;
  struct Card* __retval42;
  this40 = v37;
  unnamed41 = v38;
  struct Card* t43 = this40;
  struct Card* t44 = unnamed41;
  char* t45 = t44->face;
  t43->face = t45;
  struct Card* t46 = unnamed41;
  char* t47 = t46->suit;
  t43->suit = t47;
  __retval42 = t43;
  struct Card* t48 = __retval42;
  return t48;
}

// function: _Z7shuffleP4Card
void shuffle(struct Card* v49) {
bb50:
  struct Card* wDeck51;
  wDeck51 = v49;
    int i52;
    int c53 = 0;
    i52 = c53;
    while (1) {
      int t55 = i52;
      int c56 = 52;
      _Bool c57 = ((t55 < c56)) ? 1 : 0;
      if (!c57) break;
        int j58;
        struct Card temp59;
        int r60 = rand();
        int c61 = 52;
        int b62 = r60 % c61;
        j58 = b62;
        int t63 = i52;
        long cast64 = (long)t63;
        struct Card* t65 = wDeck51;
        struct Card* ptr66 = &(t65)[cast64];
        temp59 = *ptr66; // copy
        int t67 = j58;
        long cast68 = (long)t67;
        struct Card* t69 = wDeck51;
        struct Card* ptr70 = &(t69)[cast68];
        int t71 = i52;
        long cast72 = (long)t71;
        struct Card* t73 = wDeck51;
        struct Card* ptr74 = &(t73)[cast72];
        struct Card* r75 = Card__operator_(ptr74, ptr70);
        int t76 = j58;
        long cast77 = (long)t76;
        struct Card* t78 = wDeck51;
        struct Card* ptr79 = &(t78)[cast77];
        struct Card* r80 = Card__operator_(ptr79, &temp59);
    for_step54: ;
      int t81 = i52;
      int u82 = t81 + 1;
      i52 = u82;
    }
  return;
}

// function: _Z4dealP4Card
void deal(struct Card* v83) {
bb84:
  struct Card* wDeck85;
  wDeck85 = v83;
    int i86;
    struct std___Setw agg_tmp087;
    struct std___Setw agg_tmp188;
    int c89 = 0;
    i86 = c89;
    while (1) {
      int t91 = i86;
      int c92 = 52;
      _Bool c93 = ((t91 < c92)) ? 1 : 0;
      if (!c93) break;
      struct std__basic_ostream_char__std__char_traits_char__* std94;
      __VERIFIER_nondet_memory(&std94, sizeof(std94));
      int c95 = 5;
      struct std___Setw std96;
      __VERIFIER_nondet_memory(&std96, sizeof(std96));
      agg_tmp087 = std96;
      struct std___Setw t97 = agg_tmp087;
      struct std__basic_ostream_char__std__char_traits_char__* std98;
      __VERIFIER_nondet_memory(&std98, sizeof(std98));
      int t99 = i86;
      long cast100 = (long)t99;
      struct Card* t101 = wDeck85;
      struct Card* ptr102 = &(t101)[cast100];
      char* t103 = ptr102->face;
      struct std__basic_ostream_char__std__char_traits_char__* std104;
      __VERIFIER_nondet_memory(&std104, sizeof(std104));
      char* cast105 = (char*)&(_str_17);
      struct std__basic_ostream_char__std__char_traits_char__* std106;
      __VERIFIER_nondet_memory(&std106, sizeof(std106));
      struct std__basic_ostream_char__std__char_traits_char__* std107;
      __VERIFIER_nondet_memory(&std107, sizeof(std107));
      int c108 = 8;
      struct std___Setw std109;
      __VERIFIER_nondet_memory(&std109, sizeof(std109));
      agg_tmp188 = std109;
      struct std___Setw t110 = agg_tmp188;
      struct std__basic_ostream_char__std__char_traits_char__* std111;
      __VERIFIER_nondet_memory(&std111, sizeof(std111));
      int t112 = i86;
      long cast113 = (long)t112;
      struct Card* t114 = wDeck85;
      struct Card* ptr115 = &(t114)[cast113];
      char* t116 = ptr115->suit;
      struct std__basic_ostream_char__std__char_traits_char__* std117;
      __VERIFIER_nondet_memory(&std117, sizeof(std117));
      int t118 = i86;
      int c119 = 1;
      int b120 = t118 + c119;
      int c121 = 2;
      int b122 = b120 % c121;
      _Bool cast123 = (_Bool)b122;
      char c124 = 9;
      char c125 = 10;
      char sel126 = cast123 ? c124 : c125;
      struct std__basic_ostream_char__std__char_traits_char__* std127;
      __VERIFIER_nondet_memory(&std127, sizeof(std127));
    for_step90: ;
      int t128 = i86;
      int u129 = t128 + 1;
      i86 = u129;
    }
  return;
}

// function: main
int main() {
bb130:
  int __retval131;
  struct Card deck132[52];
  char* face133[13];
  char* suit134[4];
  int c135 = 0;
  __retval131 = c135;
  // array copy
  __builtin_memcpy(face133, __const_main_face, (unsigned long)13 * sizeof(__const_main_face[0]));
  // array copy
  __builtin_memcpy(suit134, __const_main_suit, (unsigned long)4 * sizeof(__const_main_suit[0]));
  long* c136 = ((void*)0);
  long r137 = time(c136);
  unsigned int cast138 = (unsigned int)r137;
  srand(cast138);
  struct Card* cast139 = (struct Card*)&(deck132);
  char** cast140 = (char**)&(face133);
  char** cast141 = (char**)&(suit134);
  fillDeck(cast139, cast140, cast141);
  struct Card* cast142 = (struct Card*)&(deck132);
  shuffle(cast142);
  struct Card* cast143 = (struct Card*)&(deck132);
  deal(cast143);
  int c144 = 0;
  __retval131 = c144;
  int t145 = __retval131;
  return t145;
}

