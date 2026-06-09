extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct BitCard { unsigned char face; unsigned char __field1[3]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[6] = "Card:";
char _str_1[8] = "  Suit:";
char _str_2[9] = "  Color:";
char _str_3[4] = "   ";
void fillDeck(struct BitCard* p0);
void deal(struct BitCard* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8fillDeckP7BitCard
void fillDeck(struct BitCard* v0) {
bb1:
  struct BitCard* wDeck2;
  wDeck2 = v0;
    int i3;
    int c4 = 0;
    i3 = c4;
    while (1) {
      int t6 = i3;
      int c7 = 51;
      _Bool c8 = ((t6 <= c7)) ? 1 : 0;
      if (!c8) break;
        int t9 = i3;
        int c10 = 13;
        int b11 = t9 % c10;
        unsigned int cast12 = (unsigned int)b11;
        int t13 = i3;
        long cast14 = (long)t13;
        struct BitCard* t15 = wDeck2;
        struct BitCard* ptr16 = &(t15)[cast14];
        unsigned long bf_st17 = (unsigned long)(ptr16->face);
        unsigned int bf18 = (unsigned int)(bf_st17 >> 0 & 15ULL);
        bf_st17 = bf_st17 & ~(15ULL << 0) | ((unsigned long)(cast12) & 15ULL) << 0;
        ptr16->face = bf_st17;
        int t19 = i3;
        int c20 = 13;
        int b21 = t19 / c20;
        unsigned int cast22 = (unsigned int)b21;
        int t23 = i3;
        long cast24 = (long)t23;
        struct BitCard* t25 = wDeck2;
        struct BitCard* ptr26 = &(t25)[cast24];
        unsigned long bf_st27 = (unsigned long)(ptr26->face);
        unsigned int bf28 = (unsigned int)(bf_st27 >> 4 & 3ULL);
        bf_st27 = bf_st27 & ~(3ULL << 4) | ((unsigned long)(cast22) & 3ULL) << 4;
        ptr26->face = bf_st27;
        int t29 = i3;
        int c30 = 26;
        int b31 = t29 / c30;
        unsigned int cast32 = (unsigned int)b31;
        int t33 = i3;
        long cast34 = (long)t33;
        struct BitCard* t35 = wDeck2;
        struct BitCard* ptr36 = &(t35)[cast34];
        unsigned long bf_st37 = (unsigned long)(ptr36->face);
        unsigned int bf38 = (unsigned int)(bf_st37 >> 6 & 1ULL);
        bf_st37 = bf_st37 & ~(1ULL << 6) | ((unsigned long)(cast32) & 1ULL) << 6;
        ptr36->face = bf_st37;
    for_step5: ;
      int t39 = i3;
      int u40 = t39 + 1;
      i3 = u40;
    }
  return;
}

// function: _Z4dealPK7BitCard
void deal(struct BitCard* v41) {
bb42:
  struct BitCard* wDeck43;
  wDeck43 = v41;
    int k144;
    int k245;
    int c46 = 0;
    k144 = c46;
    int t47 = k144;
    int c48 = 26;
    int b49 = t47 + c48;
    k245 = b49;
    while (1) {
      int t51 = k144;
      int c52 = 25;
      _Bool c53 = ((t51 <= c52)) ? 1 : 0;
      if (!c53) break;
        struct std___Setw agg_tmp054;
        struct std___Setw agg_tmp155;
        struct std___Setw agg_tmp256;
        struct std___Setw agg_tmp357;
        struct std___Setw agg_tmp458;
        struct std___Setw agg_tmp559;
        char* cast60 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        int c62 = 3;
        struct std___Setw std63;
        __VERIFIER_nondet_memory(&std63, sizeof(std63));
        agg_tmp054 = std63;
        struct std___Setw t64 = agg_tmp054;
        struct std__basic_ostream_char__std__char_traits_char__* std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        int t66 = k144;
        long cast67 = (long)t66;
        struct BitCard* t68 = wDeck43;
        struct BitCard* ptr69 = &(t68)[cast67];
        unsigned long bf_st70 = (unsigned long)(ptr69->face);
        unsigned int bf71 = (unsigned int)(bf_st70 >> 0 & 15ULL);
        struct std__basic_ostream_char__std__char_traits_char__* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        char* cast73 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        int c75 = 2;
        struct std___Setw std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        agg_tmp155 = std76;
        struct std___Setw t77 = agg_tmp155;
        struct std__basic_ostream_char__std__char_traits_char__* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        int t79 = k144;
        long cast80 = (long)t79;
        struct BitCard* t81 = wDeck43;
        struct BitCard* ptr82 = &(t81)[cast80];
        unsigned long bf_st83 = (unsigned long)(ptr82->face);
        unsigned int bf84 = (unsigned int)(bf_st83 >> 4 & 3ULL);
        struct std__basic_ostream_char__std__char_traits_char__* std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
        char* cast86 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
        int c88 = 2;
        struct std___Setw std89;
        __VERIFIER_nondet_memory(&std89, sizeof(std89));
        agg_tmp256 = std89;
        struct std___Setw t90 = agg_tmp256;
        struct std__basic_ostream_char__std__char_traits_char__* std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
        int t92 = k144;
        long cast93 = (long)t92;
        struct BitCard* t94 = wDeck43;
        struct BitCard* ptr95 = &(t94)[cast93];
        unsigned long bf_st96 = (unsigned long)(ptr95->face);
        unsigned int bf97 = (unsigned int)(bf_st96 >> 6 & 1ULL);
        struct std__basic_ostream_char__std__char_traits_char__* std98;
        __VERIFIER_nondet_memory(&std98, sizeof(std98));
        char* cast99 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std100;
        __VERIFIER_nondet_memory(&std100, sizeof(std100));
        char* cast101 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
        int c103 = 3;
        struct std___Setw std104;
        __VERIFIER_nondet_memory(&std104, sizeof(std104));
        agg_tmp357 = std104;
        struct std___Setw t105 = agg_tmp357;
        struct std__basic_ostream_char__std__char_traits_char__* std106;
        __VERIFIER_nondet_memory(&std106, sizeof(std106));
        int t107 = k245;
        long cast108 = (long)t107;
        struct BitCard* t109 = wDeck43;
        struct BitCard* ptr110 = &(t109)[cast108];
        unsigned long bf_st111 = (unsigned long)(ptr110->face);
        unsigned int bf112 = (unsigned int)(bf_st111 >> 0 & 15ULL);
        struct std__basic_ostream_char__std__char_traits_char__* std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
        char* cast114 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std115;
        __VERIFIER_nondet_memory(&std115, sizeof(std115));
        int c116 = 2;
        struct std___Setw std117;
        __VERIFIER_nondet_memory(&std117, sizeof(std117));
        agg_tmp458 = std117;
        struct std___Setw t118 = agg_tmp458;
        struct std__basic_ostream_char__std__char_traits_char__* std119;
        __VERIFIER_nondet_memory(&std119, sizeof(std119));
        int t120 = k245;
        long cast121 = (long)t120;
        struct BitCard* t122 = wDeck43;
        struct BitCard* ptr123 = &(t122)[cast121];
        unsigned long bf_st124 = (unsigned long)(ptr123->face);
        unsigned int bf125 = (unsigned int)(bf_st124 >> 4 & 3ULL);
        struct std__basic_ostream_char__std__char_traits_char__* std126;
        __VERIFIER_nondet_memory(&std126, sizeof(std126));
        char* cast127 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std128;
        __VERIFIER_nondet_memory(&std128, sizeof(std128));
        int c129 = 2;
        struct std___Setw std130;
        __VERIFIER_nondet_memory(&std130, sizeof(std130));
        agg_tmp559 = std130;
        struct std___Setw t131 = agg_tmp559;
        struct std__basic_ostream_char__std__char_traits_char__* std132;
        __VERIFIER_nondet_memory(&std132, sizeof(std132));
        int t133 = k245;
        long cast134 = (long)t133;
        struct BitCard* t135 = wDeck43;
        struct BitCard* ptr136 = &(t135)[cast134];
        unsigned long bf_st137 = (unsigned long)(ptr136->face);
        unsigned int bf138 = (unsigned int)(bf_st137 >> 6 & 1ULL);
        struct std__basic_ostream_char__std__char_traits_char__* std139;
        __VERIFIER_nondet_memory(&std139, sizeof(std139));
        struct std__basic_ostream_char__std__char_traits_char__* std140;
        __VERIFIER_nondet_memory(&std140, sizeof(std140));
    for_step50: ;
      int t141 = k144;
      int u142 = t141 + 1;
      k144 = u142;
      int t143 = k245;
      int u144 = t143 + 1;
      k245 = u144;
    }
  return;
}

// function: main
int main() {
bb145:
  int __retval146;
  struct BitCard deck147[52];
  int c148 = 0;
  __retval146 = c148;
  struct BitCard* cast149 = (struct BitCard*)&(deck147);
  fillDeck(cast149);
  struct BitCard* cast150 = (struct BitCard*)&(deck147);
  deal(cast150);
  int c151 = 0;
  __retval146 = c151;
  int t152 = __retval146;
  return t152;
}

