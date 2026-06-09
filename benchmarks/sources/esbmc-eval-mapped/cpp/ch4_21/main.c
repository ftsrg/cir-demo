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

int __const_main_studentGrades[3][4] = {{77, 68, 86, 73}, {96, 87, 89, 78}, {70, 90, 86, 81}};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[15] = "The array is:\n";
int _ZL8students __attribute__((aligned(4))) = 3;
int _ZL5exams __attribute__((aligned(4))) = 4;
char _str_1[17] = "\n\nLowest grade: ";
char _str_2[17] = "\nHighest grade: ";
char _str_3[31] = "The average grade for student ";
char _str_4[5] = " is ";
char _str_5[36] = "                 [0]  [1]  [2]  [3]";
char _str_6[16] = "\nstudentGrades[";
char _str_7[3] = "] ";
void printArray_int_(int* p0, int p1, int p2);
int minimum_int_(int* p0, int p1, int p2);
int maximum_int_(int* p0, int p1, int p2);
double average(int* p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10printArrayPA4_iii
void printArray_int_(int* v0, int v1, int v2) {
bb3:
  int* grades4;
  int pupils5;
  int tests6;
  grades4 = v0;
  pupils5 = v1;
  tests6 = v2;
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  char* cast8 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
    int i10;
    int c11 = 0;
    i10 = c11;
    while (1) {
      int t13 = i10;
      int t14 = pupils5;
      _Bool c15 = ((t13 < t14)) ? 1 : 0;
      if (!c15) break;
        char* cast16 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        int t18 = i10;
        struct std__basic_ostream_char__std__char_traits_char__* std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
        char* cast20 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
          int j22;
          struct std___Setw agg_tmp023;
          int c24 = 0;
          j22 = c24;
          while (1) {
            int t26 = j22;
            int t27 = tests6;
            _Bool c28 = ((t26 < t27)) ? 1 : 0;
            if (!c28) break;
            int c29 = 5;
            struct std___Setw std30;
            __VERIFIER_nondet_memory(&std30, sizeof(std30));
            agg_tmp023 = std30;
            struct std___Setw t31 = agg_tmp023;
            struct std__basic_ostream_char__std__char_traits_char__* std32;
            __VERIFIER_nondet_memory(&std32, sizeof(std32));
            int t33 = j22;
            long cast34 = (long)t33;
            int t35 = i10;
            long cast36 = (long)t35;
            int* t37 = grades4;
            int* ptr38 = &(t37)[(cast36) * 4];
            int t39 = ptr38[cast34];
            struct std__basic_ostream_char__std__char_traits_char__* std40;
            __VERIFIER_nondet_memory(&std40, sizeof(std40));
          for_step25: ;
            int t41 = j22;
            int u42 = t41 + 1;
            j22 = u42;
          }
    for_step12: ;
      int t43 = i10;
      int u44 = t43 + 1;
      i10 = u44;
    }
  return;
}

// function: _Z7minimumPA4_iii
int minimum_int_(int* v45, int v46, int v47) {
bb48:
  int* grades49;
  int pupils50;
  int tests51;
  int __retval52;
  int lowGrade53;
  grades49 = v45;
  pupils50 = v46;
  tests51 = v47;
  int c54 = 100;
  lowGrade53 = c54;
    int i55;
    int c56 = 0;
    i55 = c56;
    while (1) {
      int t58 = i55;
      int t59 = pupils50;
      _Bool c60 = ((t58 < t59)) ? 1 : 0;
      if (!c60) break;
        int j61;
        int c62 = 0;
        j61 = c62;
        while (1) {
          int t64 = j61;
          int t65 = tests51;
          _Bool c66 = ((t64 < t65)) ? 1 : 0;
          if (!c66) break;
            int t67 = j61;
            long cast68 = (long)t67;
            int t69 = i55;
            long cast70 = (long)t69;
            int* t71 = grades49;
            int* ptr72 = &(t71)[(cast70) * 4];
            int t73 = ptr72[cast68];
            int t74 = lowGrade53;
            _Bool c75 = ((t73 < t74)) ? 1 : 0;
            if (c75) {
              int t76 = j61;
              long cast77 = (long)t76;
              int t78 = i55;
              long cast79 = (long)t78;
              int* t80 = grades49;
              int* ptr81 = &(t80)[(cast79) * 4];
              int t82 = ptr81[cast77];
              lowGrade53 = t82;
            }
        for_step63: ;
          int t83 = j61;
          int u84 = t83 + 1;
          j61 = u84;
        }
    for_step57: ;
      int t85 = i55;
      int u86 = t85 + 1;
      i55 = u86;
    }
  int t87 = lowGrade53;
  __retval52 = t87;
  int t88 = __retval52;
  return t88;
}

// function: _Z7maximumPA4_iii
int maximum_int_(int* v89, int v90, int v91) {
bb92:
  int* grades93;
  int pupils94;
  int tests95;
  int __retval96;
  int highGrade97;
  grades93 = v89;
  pupils94 = v90;
  tests95 = v91;
  int c98 = 0;
  highGrade97 = c98;
    int i99;
    int c100 = 0;
    i99 = c100;
    while (1) {
      int t102 = i99;
      int t103 = pupils94;
      _Bool c104 = ((t102 < t103)) ? 1 : 0;
      if (!c104) break;
        int j105;
        int c106 = 0;
        j105 = c106;
        while (1) {
          int t108 = j105;
          int t109 = tests95;
          _Bool c110 = ((t108 < t109)) ? 1 : 0;
          if (!c110) break;
            int t111 = j105;
            long cast112 = (long)t111;
            int t113 = i99;
            long cast114 = (long)t113;
            int* t115 = grades93;
            int* ptr116 = &(t115)[(cast114) * 4];
            int t117 = ptr116[cast112];
            int t118 = highGrade97;
            _Bool c119 = ((t117 > t118)) ? 1 : 0;
            if (c119) {
              int t120 = j105;
              long cast121 = (long)t120;
              int t122 = i99;
              long cast123 = (long)t122;
              int* t124 = grades93;
              int* ptr125 = &(t124)[(cast123) * 4];
              int t126 = ptr125[cast121];
              highGrade97 = t126;
            }
        for_step107: ;
          int t127 = j105;
          int u128 = t127 + 1;
          j105 = u128;
        }
    for_step101: ;
      int t129 = i99;
      int u130 = t129 + 1;
      i99 = u130;
    }
  int t131 = highGrade97;
  __retval96 = t131;
  int t132 = __retval96;
  return t132;
}

// function: _Z7averagePii
double average(int* v133, int v134) {
bb135:
  int* setOfGrades136;
  int tests137;
  double __retval138;
  int total139;
  setOfGrades136 = v133;
  tests137 = v134;
  int c140 = 0;
  total139 = c140;
    int i141;
    int c142 = 0;
    i141 = c142;
    while (1) {
      int t144 = i141;
      int t145 = tests137;
      _Bool c146 = ((t144 < t145)) ? 1 : 0;
      if (!c146) break;
      int t147 = i141;
      long cast148 = (long)t147;
      int* t149 = setOfGrades136;
      int* ptr150 = &(t149)[cast148];
      int t151 = *ptr150;
      int t152 = total139;
      int b153 = t152 + t151;
      total139 = b153;
    for_step143: ;
      int t154 = i141;
      int u155 = t154 + 1;
      i141 = u155;
    }
  int t156 = total139;
  double cast157 = (double)t156;
  int t158 = tests137;
  double cast159 = (double)t158;
  double b160 = cast157 / cast159;
  __retval138 = b160;
  double t161 = __retval138;
  return t161;
}

// function: main
int main() {
bb162:
  int __retval163;
  int studentGrades164[3][4];
  struct std___Setprecision agg_tmp0165;
  int c166 = 0;
  __retval163 = c166;
  // array copy
  __builtin_memcpy(studentGrades164, __const_main_studentGrades, (unsigned long)3 * sizeof(__const_main_studentGrades[0]));
  char* cast167 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std168;
  __VERIFIER_nondet_memory(&std168, sizeof(std168));
  int* cast169 = (int*)&(studentGrades164);
  int t170 = _ZL8students;
  int t171 = _ZL5exams;
  printArray_int_(cast169, t170, t171);
  char* cast172 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std173;
  __VERIFIER_nondet_memory(&std173, sizeof(std173));
  int* cast174 = (int*)&(studentGrades164);
  int t175 = _ZL8students;
  int t176 = _ZL5exams;
  int r177 = minimum_int_(cast174, t175, t176);
  struct std__basic_ostream_char__std__char_traits_char__* std178;
  __VERIFIER_nondet_memory(&std178, sizeof(std178));
  char* cast179 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std180;
  __VERIFIER_nondet_memory(&std180, sizeof(std180));
  int* cast181 = (int*)&(studentGrades164);
  int t182 = _ZL8students;
  int t183 = _ZL5exams;
  int r184 = maximum_int_(cast181, t182, t183);
  struct std__basic_ostream_char__std__char_traits_char__* std185;
  __VERIFIER_nondet_memory(&std185, sizeof(std185));
  char c186 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std187;
  __VERIFIER_nondet_memory(&std187, sizeof(std187));
  struct std__basic_ostream_char__std__char_traits_char__* std188;
  __VERIFIER_nondet_memory(&std188, sizeof(std188));
  int c189 = 2;
  struct std___Setprecision std190;
  __VERIFIER_nondet_memory(&std190, sizeof(std190));
  agg_tmp0165 = std190;
  struct std___Setprecision t191 = agg_tmp0165;
  struct std__basic_ostream_char__std__char_traits_char__* std192;
  __VERIFIER_nondet_memory(&std192, sizeof(std192));
    int person193;
    int c194 = 0;
    person193 = c194;
    while (1) {
      int t196 = person193;
      int t197 = _ZL8students;
      _Bool c198 = ((t196 < t197)) ? 1 : 0;
      if (!c198) break;
      char* cast199 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std200;
      __VERIFIER_nondet_memory(&std200, sizeof(std200));
      int t201 = person193;
      struct std__basic_ostream_char__std__char_traits_char__* std202;
      __VERIFIER_nondet_memory(&std202, sizeof(std202));
      char* cast203 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std204;
      __VERIFIER_nondet_memory(&std204, sizeof(std204));
      int t205 = person193;
      long cast206 = (long)t205;
      int* cast207 = (int*)&(studentGrades164[cast206]);
      int t208 = _ZL5exams;
      double r209 = average(cast207, t208);
      struct std__basic_ostream_char__std__char_traits_char__* std210;
      __VERIFIER_nondet_memory(&std210, sizeof(std210));
      struct std__basic_ostream_char__std__char_traits_char__* std211;
      __VERIFIER_nondet_memory(&std211, sizeof(std211));
    for_step195: ;
      int t212 = person193;
      int u213 = t212 + 1;
      person193 = u213;
    }
  int c214 = 0;
  __retval163 = c214;
  int t215 = __retval163;
  return t215;
}

