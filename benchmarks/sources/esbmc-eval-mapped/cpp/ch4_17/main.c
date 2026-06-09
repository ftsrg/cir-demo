extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setprecision { int _M_n; };
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_response[99] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7};
int __const_main_frequency[10];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "********\n  Mean\n********\n";
char _str_1[43] = "The mean is the average value of the data\n";
char _str_2[42] = "items. The mean is equal to the total of\n";
char _str_3[42] = "all the data items divided by the number\n";
char _str_4[16] = "of data items (";
char _str_5[36] = "). The mean value for\nthis run is: ";
char _str_6[4] = " / ";
char _str_7[4] = " = ";
char _str_8[3] = "\n\n";
char _str_9[28] = "\n********\n Median\n********\n";
char _str_10[35] = "The unsorted array of responses is";
char _str_11[22] = "\n\nThe sorted array is";
char _str_12[25] = "\n\nThe median is element ";
char _str_13[16] = " of\nthe sorted ";
char _str_14[44] = " element array.\nFor this run the median is ";
char _str_15[27] = "\n********\n  Mode\n********\n";
char _str_16[9] = "Response";
char _str_17[10] = "Frequency";
char _str_18[12] = "Histogram\n\n";
char _str_19[18] = "1    1    2    2\n";
char _str_20[24] = "5    0    5    0    5\n\n";
char _str_21[11] = "          ";
char _str_22[38] = "The mode is the most frequent value.\n";
char _str_23[26] = "For this run the mode is ";
char _str_24[17] = " which occurred ";
char _str_25[8] = " times.";
void mean(int* p0, int p1);
void printArray(int* p0, int p1);
void bubbleSort(int* p0, int p1);
void median(int* p0, int p1);
void mode(int* p0, int* p1, int p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z4meanPKii
void mean(int* v0, int v1) {
bb2:
  int* answer3;
  int arraySize4;
  int total5;
  struct std___Setprecision agg_tmp06;
  answer3 = v0;
  arraySize4 = v1;
  int c7 = 0;
  total5 = c7;
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
    int i10;
    int c11 = 0;
    i10 = c11;
    while (1) {
      int t13 = i10;
      int t14 = arraySize4;
      _Bool c15 = ((t13 < t14)) ? 1 : 0;
      if (!c15) break;
      int t16 = i10;
      long cast17 = (long)t16;
      int* t18 = answer3;
      int* ptr19 = &(t18)[cast17];
      int t20 = *ptr19;
      int t21 = total5;
      int b22 = t21 + t20;
      total5 = b22;
    for_step12: ;
      int t23 = i10;
      int u24 = t23 + 1;
      i10 = u24;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  int c26 = 4;
  struct std___Setprecision std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  agg_tmp06 = std27;
  struct std___Setprecision t28 = agg_tmp06;
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char* cast30 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  char* cast32 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char* cast34 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  char* cast36 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  int t38 = arraySize4;
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  char* cast40 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  int t42 = total5;
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  char* cast44 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  int t46 = arraySize4;
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  char* cast48 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  int t50 = total5;
  double cast51 = (double)t50;
  int t52 = arraySize4;
  double cast53 = (double)t52;
  double b54 = cast51 / cast53;
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  char* cast56 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  return;
}

// function: _Z10printArrayPKii
void printArray(int* v58, int v59) {
bb60:
  int* a61;
  int size62;
  a61 = v58;
  size62 = v59;
    int i63;
    int c64 = 0;
    i63 = c64;
    while (1) {
      int t66 = i63;
      int t67 = size62;
      _Bool c68 = ((t66 < t67)) ? 1 : 0;
      if (!c68) break;
        struct std___Setw agg_tmp069;
          int t70 = i63;
          int c71 = 20;
          int b72 = t70 % c71;
          int c73 = 0;
          _Bool c74 = ((b72 == c73)) ? 1 : 0;
          if (c74) {
            struct std__basic_ostream_char__std__char_traits_char__* std75;
            __VERIFIER_nondet_memory(&std75, sizeof(std75));
          }
        int c76 = 2;
        struct std___Setw std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
        agg_tmp069 = std77;
        struct std___Setw t78 = agg_tmp069;
        struct std__basic_ostream_char__std__char_traits_char__* std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
        int t80 = i63;
        long cast81 = (long)t80;
        int* t82 = a61;
        int* ptr83 = &(t82)[cast81];
        int t84 = *ptr83;
        struct std__basic_ostream_char__std__char_traits_char__* std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
    for_step65: ;
      int t86 = i63;
      int u87 = t86 + 1;
      i63 = u87;
    }
  return;
}

// function: _Z10bubbleSortPii
void bubbleSort(int* v88, int v89) {
bb90:
  int* a91;
  int size92;
  int hold93;
  a91 = v88;
  size92 = v89;
    int pass94;
    int c95 = 1;
    pass94 = c95;
    while (1) {
      int t97 = pass94;
      int t98 = size92;
      _Bool c99 = ((t97 < t98)) ? 1 : 0;
      if (!c99) break;
        int j100;
        int c101 = 0;
        j100 = c101;
        while (1) {
          int t103 = j100;
          int t104 = size92;
          int c105 = 1;
          int b106 = t104 - c105;
          _Bool c107 = ((t103 < b106)) ? 1 : 0;
          if (!c107) break;
            int t108 = j100;
            long cast109 = (long)t108;
            int* t110 = a91;
            int* ptr111 = &(t110)[cast109];
            int t112 = *ptr111;
            int t113 = j100;
            int c114 = 1;
            int b115 = t113 + c114;
            long cast116 = (long)b115;
            int* t117 = a91;
            int* ptr118 = &(t117)[cast116];
            int t119 = *ptr118;
            _Bool c120 = ((t112 > t119)) ? 1 : 0;
            if (c120) {
              int t121 = j100;
              long cast122 = (long)t121;
              int* t123 = a91;
              int* ptr124 = &(t123)[cast122];
              int t125 = *ptr124;
              hold93 = t125;
              int t126 = j100;
              int c127 = 1;
              int b128 = t126 + c127;
              long cast129 = (long)b128;
              int* t130 = a91;
              int* ptr131 = &(t130)[cast129];
              int t132 = *ptr131;
              int t133 = j100;
              long cast134 = (long)t133;
              int* t135 = a91;
              int* ptr136 = &(t135)[cast134];
              *ptr136 = t132;
              int t137 = hold93;
              int t138 = j100;
              int c139 = 1;
              int b140 = t138 + c139;
              long cast141 = (long)b140;
              int* t142 = a91;
              int* ptr143 = &(t142)[cast141];
              *ptr143 = t137;
            }
        for_step102: ;
          int t144 = j100;
          int u145 = t144 + 1;
          j100 = u145;
        }
    for_step96: ;
      int t146 = pass94;
      int u147 = t146 + 1;
      pass94 = u147;
    }
  return;
}

// function: _Z6medianPii
void median(int* v148, int v149) {
bb150:
  int* answer151;
  int size152;
  answer151 = v148;
  size152 = v149;
  char* cast153 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std154;
  __VERIFIER_nondet_memory(&std154, sizeof(std154));
  char* cast155 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std156;
  __VERIFIER_nondet_memory(&std156, sizeof(std156));
  int* t157 = answer151;
  int t158 = size152;
  printArray(t157, t158);
  int* t159 = answer151;
  int t160 = size152;
  bubbleSort(t159, t160);
  char* cast161 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std162;
  __VERIFIER_nondet_memory(&std162, sizeof(std162));
  int* t163 = answer151;
  int t164 = size152;
  printArray(t163, t164);
  char* cast165 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* std166;
  __VERIFIER_nondet_memory(&std166, sizeof(std166));
  int t167 = size152;
  int c168 = 2;
  int b169 = t167 / c168;
  struct std__basic_ostream_char__std__char_traits_char__* std170;
  __VERIFIER_nondet_memory(&std170, sizeof(std170));
  char* cast171 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* std172;
  __VERIFIER_nondet_memory(&std172, sizeof(std172));
  int t173 = size152;
  struct std__basic_ostream_char__std__char_traits_char__* std174;
  __VERIFIER_nondet_memory(&std174, sizeof(std174));
  char* cast175 = (char*)&(_str_14);
  struct std__basic_ostream_char__std__char_traits_char__* std176;
  __VERIFIER_nondet_memory(&std176, sizeof(std176));
  int t177 = size152;
  int c178 = 2;
  int b179 = t177 / c178;
  long cast180 = (long)b179;
  int* t181 = answer151;
  int* ptr182 = &(t181)[cast180];
  int t183 = *ptr182;
  struct std__basic_ostream_char__std__char_traits_char__* std184;
  __VERIFIER_nondet_memory(&std184, sizeof(std184));
  char* cast185 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std186;
  __VERIFIER_nondet_memory(&std186, sizeof(std186));
  return;
}

// function: _Z4modePiS_i
void mode(int* v187, int* v188, int v189) {
bb190:
  int* freq191;
  int* answer192;
  int size193;
  int largest194;
  int modeValue195;
  struct std___Setw agg_tmp0196;
  struct std___Setw agg_tmp1197;
  struct std___Setw agg_tmp2198;
  struct std___Setw agg_tmp3199;
  freq191 = v187;
  answer192 = v188;
  size193 = v189;
  int c200 = 0;
  largest194 = c200;
  int c201 = 0;
  modeValue195 = c201;
  char* cast202 = (char*)&(_str_15);
  struct std__basic_ostream_char__std__char_traits_char__* std203;
  __VERIFIER_nondet_memory(&std203, sizeof(std203));
    int i204;
    int c205 = 1;
    i204 = c205;
    while (1) {
      int t207 = i204;
      int c208 = 9;
      _Bool c209 = ((t207 <= c208)) ? 1 : 0;
      if (!c209) break;
      int c210 = 0;
      int t211 = i204;
      long cast212 = (long)t211;
      int* t213 = freq191;
      int* ptr214 = &(t213)[cast212];
      *ptr214 = c210;
    for_step206: ;
      int t215 = i204;
      int u216 = t215 + 1;
      i204 = u216;
    }
    int j217;
    int c218 = 0;
    j217 = c218;
    while (1) {
      int t220 = j217;
      int t221 = size193;
      _Bool c222 = ((t220 < t221)) ? 1 : 0;
      if (!c222) break;
      int t223 = j217;
      long cast224 = (long)t223;
      int* t225 = answer192;
      int* ptr226 = &(t225)[cast224];
      int t227 = *ptr226;
      long cast228 = (long)t227;
      int* t229 = freq191;
      int* ptr230 = &(t229)[cast228];
      int t231 = *ptr230;
      int u232 = t231 + 1;
      *ptr230 = u232;
    for_step219: ;
      int t233 = j217;
      int u234 = t233 + 1;
      j217 = u234;
    }
  char* cast235 = (char*)&(_str_16);
  struct std__basic_ostream_char__std__char_traits_char__* std236;
  __VERIFIER_nondet_memory(&std236, sizeof(std236));
  int c237 = 11;
  struct std___Setw std238;
  __VERIFIER_nondet_memory(&std238, sizeof(std238));
  agg_tmp0196 = std238;
  struct std___Setw t239 = agg_tmp0196;
  struct std__basic_ostream_char__std__char_traits_char__* std240;
  __VERIFIER_nondet_memory(&std240, sizeof(std240));
  char* cast241 = (char*)&(_str_17);
  struct std__basic_ostream_char__std__char_traits_char__* std242;
  __VERIFIER_nondet_memory(&std242, sizeof(std242));
  int c243 = 19;
  struct std___Setw std244;
  __VERIFIER_nondet_memory(&std244, sizeof(std244));
  agg_tmp1197 = std244;
  struct std___Setw t245 = agg_tmp1197;
  struct std__basic_ostream_char__std__char_traits_char__* std246;
  __VERIFIER_nondet_memory(&std246, sizeof(std246));
  char* cast247 = (char*)&(_str_18);
  struct std__basic_ostream_char__std__char_traits_char__* std248;
  __VERIFIER_nondet_memory(&std248, sizeof(std248));
  int c249 = 55;
  struct std___Setw std250;
  __VERIFIER_nondet_memory(&std250, sizeof(std250));
  agg_tmp2198 = std250;
  struct std___Setw t251 = agg_tmp2198;
  struct std__basic_ostream_char__std__char_traits_char__* std252;
  __VERIFIER_nondet_memory(&std252, sizeof(std252));
  char* cast253 = (char*)&(_str_19);
  struct std__basic_ostream_char__std__char_traits_char__* std254;
  __VERIFIER_nondet_memory(&std254, sizeof(std254));
  int c255 = 56;
  struct std___Setw std256;
  __VERIFIER_nondet_memory(&std256, sizeof(std256));
  agg_tmp3199 = std256;
  struct std___Setw t257 = agg_tmp3199;
  struct std__basic_ostream_char__std__char_traits_char__* std258;
  __VERIFIER_nondet_memory(&std258, sizeof(std258));
  char* cast259 = (char*)&(_str_20);
  struct std__basic_ostream_char__std__char_traits_char__* std260;
  __VERIFIER_nondet_memory(&std260, sizeof(std260));
    int rating261;
    int c262 = 1;
    rating261 = c262;
    while (1) {
      int t264 = rating261;
      int c265 = 9;
      _Bool c266 = ((t264 <= c265)) ? 1 : 0;
      if (!c266) break;
        struct std___Setw agg_tmp4267;
        struct std___Setw agg_tmp5268;
        int c269 = 8;
        struct std___Setw std270;
        __VERIFIER_nondet_memory(&std270, sizeof(std270));
        agg_tmp4267 = std270;
        struct std___Setw t271 = agg_tmp4267;
        struct std__basic_ostream_char__std__char_traits_char__* std272;
        __VERIFIER_nondet_memory(&std272, sizeof(std272));
        int t273 = rating261;
        struct std__basic_ostream_char__std__char_traits_char__* std274;
        __VERIFIER_nondet_memory(&std274, sizeof(std274));
        int c275 = 11;
        struct std___Setw std276;
        __VERIFIER_nondet_memory(&std276, sizeof(std276));
        agg_tmp5268 = std276;
        struct std___Setw t277 = agg_tmp5268;
        struct std__basic_ostream_char__std__char_traits_char__* std278;
        __VERIFIER_nondet_memory(&std278, sizeof(std278));
        int t279 = rating261;
        long cast280 = (long)t279;
        int* t281 = freq191;
        int* ptr282 = &(t281)[cast280];
        int t283 = *ptr282;
        struct std__basic_ostream_char__std__char_traits_char__* std284;
        __VERIFIER_nondet_memory(&std284, sizeof(std284));
        char* cast285 = (char*)&(_str_21);
        struct std__basic_ostream_char__std__char_traits_char__* std286;
        __VERIFIER_nondet_memory(&std286, sizeof(std286));
          int t287 = rating261;
          long cast288 = (long)t287;
          int* t289 = freq191;
          int* ptr290 = &(t289)[cast288];
          int t291 = *ptr290;
          int t292 = largest194;
          _Bool c293 = ((t291 > t292)) ? 1 : 0;
          if (c293) {
            int t294 = rating261;
            long cast295 = (long)t294;
            int* t296 = freq191;
            int* ptr297 = &(t296)[cast295];
            int t298 = *ptr297;
            largest194 = t298;
            int t299 = rating261;
            modeValue195 = t299;
          }
          int k300;
          int c301 = 1;
          k300 = c301;
          while (1) {
            int t303 = k300;
            int t304 = rating261;
            long cast305 = (long)t304;
            int* t306 = freq191;
            int* ptr307 = &(t306)[cast305];
            int t308 = *ptr307;
            _Bool c309 = ((t303 <= t308)) ? 1 : 0;
            if (!c309) break;
            char c310 = 42;
            struct std__basic_ostream_char__std__char_traits_char__* std311;
            __VERIFIER_nondet_memory(&std311, sizeof(std311));
          for_step302: ;
            int t312 = k300;
            int u313 = t312 + 1;
            k300 = u313;
          }
        char c314 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* std315;
        __VERIFIER_nondet_memory(&std315, sizeof(std315));
    for_step263: ;
      int t316 = rating261;
      int u317 = t316 + 1;
      rating261 = u317;
    }
  char* cast318 = (char*)&(_str_22);
  struct std__basic_ostream_char__std__char_traits_char__* std319;
  __VERIFIER_nondet_memory(&std319, sizeof(std319));
  char* cast320 = (char*)&(_str_23);
  struct std__basic_ostream_char__std__char_traits_char__* std321;
  __VERIFIER_nondet_memory(&std321, sizeof(std321));
  int t322 = modeValue195;
  struct std__basic_ostream_char__std__char_traits_char__* std323;
  __VERIFIER_nondet_memory(&std323, sizeof(std323));
  char* cast324 = (char*)&(_str_24);
  struct std__basic_ostream_char__std__char_traits_char__* std325;
  __VERIFIER_nondet_memory(&std325, sizeof(std325));
  int t326 = largest194;
  struct std__basic_ostream_char__std__char_traits_char__* std327;
  __VERIFIER_nondet_memory(&std327, sizeof(std327));
  char* cast328 = (char*)&(_str_25);
  struct std__basic_ostream_char__std__char_traits_char__* std329;
  __VERIFIER_nondet_memory(&std329, sizeof(std329));
  struct std__basic_ostream_char__std__char_traits_char__* std330;
  __VERIFIER_nondet_memory(&std330, sizeof(std330));
  return;
}

// function: main
int main() {
bb331:
  int __retval332;
  int responseSize333;
  int frequency334[10];
  int response335[99];
  int c336 = 0;
  __retval332 = c336;
  int c337 = 99;
  responseSize333 = c337;
  // array copy
  __builtin_memcpy(frequency334, __const_main_frequency, (unsigned long)10 * sizeof(__const_main_frequency[0]));
  // array copy
  __builtin_memcpy(response335, __const_main_response, (unsigned long)99 * sizeof(__const_main_response[0]));
  int* cast338 = (int*)&(response335);
  int t339 = responseSize333;
  mean(cast338, t339);
  int* cast340 = (int*)&(response335);
  int t341 = responseSize333;
  median(cast340, t341);
  int* cast342 = (int*)&(frequency334);
  int* cast343 = (int*)&(response335);
  int t344 = responseSize333;
  mode(cast342, cast343, t344);
  int c345 = 0;
  __retval332 = c345;
  int t346 = __retval332;
  return t346;
}

