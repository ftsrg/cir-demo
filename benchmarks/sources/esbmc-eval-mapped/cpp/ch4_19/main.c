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
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[34] = "Enter a number between 0 and 28: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[25] = " found in array element ";
char _str_2[11] = " not found";
char _str_3[14] = "\nSubscripts:\n";
char _str_4[5] = "    ";
void printHeader(int p0);
void printRow(int* p0, int p1, int p2, int p3, int p4);
int binarySearch(int* p0, int p1, int p2, int p3, int p4);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11printHeaderi
void printHeader(int v0) {
bb1:
  int size2;
  size2 = v0;
  char* cast3 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
    int j5;
    struct std___Setw agg_tmp06;
    int c7 = 0;
    j5 = c7;
    while (1) {
      int t9 = j5;
      int t10 = size2;
      _Bool c11 = ((t9 < t10)) ? 1 : 0;
      if (!c11) break;
      int c12 = 3;
      struct std___Setw std13;
      __VERIFIER_nondet_memory(&std13, sizeof(std13));
      agg_tmp06 = std13;
      struct std___Setw t14 = agg_tmp06;
      struct std__basic_ostream_char__std__char_traits_char__* std15;
      __VERIFIER_nondet_memory(&std15, sizeof(std15));
      int t16 = j5;
      struct std__basic_ostream_char__std__char_traits_char__* std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      char c18 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* std19;
      __VERIFIER_nondet_memory(&std19, sizeof(std19));
    for_step8: ;
      int t20 = j5;
      int u21 = t20 + 1;
      j5 = u21;
    }
  char c22 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int k24;
    int c25 = 1;
    k24 = c25;
    while (1) {
      int t27 = k24;
      int c28 = 4;
      int t29 = size2;
      int b30 = c28 * t29;
      _Bool c31 = ((t27 <= b30)) ? 1 : 0;
      if (!c31) break;
      char c32 = 45;
      struct std__basic_ostream_char__std__char_traits_char__* std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
    for_step26: ;
      int t34 = k24;
      int u35 = t34 + 1;
      k24 = u35;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  return;
}

// function: _Z8printRowPKiiiii
void printRow(int* v37, int v38, int v39, int v40, int v41) {
bb42:
  int* b43;
  int low44;
  int mid45;
  int high46;
  int size47;
  b43 = v37;
  low44 = v38;
  mid45 = v39;
  high46 = v40;
  size47 = v41;
    int m48;
    int c49 = 0;
    m48 = c49;
    while (1) {
      int t51 = m48;
      int t52 = size47;
      _Bool c53 = ((t51 < t52)) ? 1 : 0;
      if (!c53) break;
        int t54 = m48;
        int t55 = low44;
        _Bool c56 = ((t54 < t55)) ? 1 : 0;
        _Bool ternary57;
        if (c56) {
          _Bool c58 = 1;
          ternary57 = (_Bool)c58;
        } else {
          int t59 = m48;
          int t60 = high46;
          _Bool c61 = ((t59 > t60)) ? 1 : 0;
          ternary57 = (_Bool)c61;
        }
        if (ternary57) {
          char* cast62 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std63;
          __VERIFIER_nondet_memory(&std63, sizeof(std63));
        } else {
            int t64 = m48;
            int t65 = mid45;
            _Bool c66 = ((t64 == t65)) ? 1 : 0;
            if (c66) {
              struct std___Setw agg_tmp067;
              int c68 = 3;
              struct std___Setw std69;
              __VERIFIER_nondet_memory(&std69, sizeof(std69));
              agg_tmp067 = std69;
              struct std___Setw t70 = agg_tmp067;
              struct std__basic_ostream_char__std__char_traits_char__* std71;
              __VERIFIER_nondet_memory(&std71, sizeof(std71));
              int t72 = m48;
              long cast73 = (long)t72;
              int* t74 = b43;
              int* ptr75 = &(t74)[cast73];
              int t76 = *ptr75;
              struct std__basic_ostream_char__std__char_traits_char__* std77;
              __VERIFIER_nondet_memory(&std77, sizeof(std77));
              char c78 = 42;
              struct std__basic_ostream_char__std__char_traits_char__* std79;
              __VERIFIER_nondet_memory(&std79, sizeof(std79));
            } else {
              struct std___Setw agg_tmp180;
              int c81 = 3;
              struct std___Setw std82;
              __VERIFIER_nondet_memory(&std82, sizeof(std82));
              agg_tmp180 = std82;
              struct std___Setw t83 = agg_tmp180;
              struct std__basic_ostream_char__std__char_traits_char__* std84;
              __VERIFIER_nondet_memory(&std84, sizeof(std84));
              int t85 = m48;
              long cast86 = (long)t85;
              int* t87 = b43;
              int* ptr88 = &(t87)[cast86];
              int t89 = *ptr88;
              struct std__basic_ostream_char__std__char_traits_char__* std90;
              __VERIFIER_nondet_memory(&std90, sizeof(std90));
              char c91 = 32;
              struct std__basic_ostream_char__std__char_traits_char__* std92;
              __VERIFIER_nondet_memory(&std92, sizeof(std92));
            }
        }
    for_step50: ;
      int t93 = m48;
      int u94 = t93 + 1;
      m48 = u94;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std95;
  __VERIFIER_nondet_memory(&std95, sizeof(std95));
  return;
}

// function: _Z12binarySearchPKiiiii
int binarySearch(int* v96, int v97, int v98, int v99, int v100) {
bb101:
  int* b102;
  int searchKey103;
  int low104;
  int high105;
  int size106;
  int __retval107;
  int middle108;
  b102 = v96;
  searchKey103 = v97;
  low104 = v98;
  high105 = v99;
  size106 = v100;
    while (1) {
      int t109 = low104;
      int t110 = high105;
      _Bool c111 = ((t109 <= t110)) ? 1 : 0;
      if (!c111) break;
        int t112 = low104;
        int t113 = high105;
        int b114 = t112 + t113;
        int c115 = 2;
        int b116 = b114 / c115;
        middle108 = b116;
        int* t117 = b102;
        int t118 = low104;
        int t119 = middle108;
        int t120 = high105;
        int t121 = size106;
        printRow(t117, t118, t119, t120, t121);
          int t122 = searchKey103;
          int t123 = middle108;
          long cast124 = (long)t123;
          int* t125 = b102;
          int* ptr126 = &(t125)[cast124];
          int t127 = *ptr126;
          _Bool c128 = ((t122 == t127)) ? 1 : 0;
          if (c128) {
            int t129 = middle108;
            __retval107 = t129;
            int t130 = __retval107;
            int ret_val131 = t130;
            return ret_val131;
          } else {
              int t132 = searchKey103;
              int t133 = middle108;
              long cast134 = (long)t133;
              int* t135 = b102;
              int* ptr136 = &(t135)[cast134];
              int t137 = *ptr136;
              _Bool c138 = ((t132 < t137)) ? 1 : 0;
              if (c138) {
                int t139 = middle108;
                int c140 = 1;
                int b141 = t139 - c140;
                high105 = b141;
              } else {
                int t142 = middle108;
                int c143 = 1;
                int b144 = t142 + c143;
                low104 = b144;
              }
          }
    }
  int c145 = -1;
  __retval107 = c145;
  int t146 = __retval107;
  return t146;
}

// function: main
int main() {
bb147:
  int __retval148;
  int arraySize149;
  int a150[15];
  int key151;
  int result152;
  int c153 = 0;
  __retval148 = c153;
  int c154 = 15;
  arraySize149 = c154;
    int i155;
    int c156 = 0;
    i155 = c156;
    while (1) {
      int t158 = i155;
      int t159 = arraySize149;
      _Bool c160 = ((t158 < t159)) ? 1 : 0;
      if (!c160) break;
      int c161 = 2;
      int t162 = i155;
      int b163 = c161 * t162;
      int t164 = i155;
      long cast165 = (long)t164;
      a150[cast165] = b163;
    for_step157: ;
      int t166 = i155;
      int u167 = t166 + 1;
      i155 = u167;
    }
  char* cast168 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std169;
  __VERIFIER_nondet_memory(&std169, sizeof(std169));
  struct std__basic_istream_char__std__char_traits_char__* std170;
  __VERIFIER_nondet_memory(&std170, sizeof(std170));
  int t171 = arraySize149;
  printHeader(t171);
  int* cast172 = (int*)&(a150);
  int t173 = key151;
  int c174 = 0;
  int t175 = arraySize149;
  int c176 = 1;
  int b177 = t175 - c176;
  int t178 = arraySize149;
  int r179 = binarySearch(cast172, t173, c174, b177, t178);
  result152 = r179;
    int t180 = result152;
    int c181 = -1;
    _Bool c182 = ((t180 != c181)) ? 1 : 0;
    if (c182) {
      char c183 = 10;
      struct std__basic_ostream_char__std__char_traits_char__* std184;
      __VERIFIER_nondet_memory(&std184, sizeof(std184));
      int t185 = key151;
      struct std__basic_ostream_char__std__char_traits_char__* std186;
      __VERIFIER_nondet_memory(&std186, sizeof(std186));
      char* cast187 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std188;
      __VERIFIER_nondet_memory(&std188, sizeof(std188));
      int t189 = result152;
      struct std__basic_ostream_char__std__char_traits_char__* std190;
      __VERIFIER_nondet_memory(&std190, sizeof(std190));
      struct std__basic_ostream_char__std__char_traits_char__* std191;
      __VERIFIER_nondet_memory(&std191, sizeof(std191));
    } else {
      char c192 = 10;
      struct std__basic_ostream_char__std__char_traits_char__* std193;
      __VERIFIER_nondet_memory(&std193, sizeof(std193));
      int t194 = key151;
      struct std__basic_ostream_char__std__char_traits_char__* std195;
      __VERIFIER_nondet_memory(&std195, sizeof(std195));
      char* cast196 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std197;
      __VERIFIER_nondet_memory(&std197, sizeof(std197));
      struct std__basic_ostream_char__std__char_traits_char__* std198;
      __VERIFIER_nondet_memory(&std198, sizeof(std198));
    }
  int c199 = 0;
  __retval148 = c199;
  int t200 = __retval148;
  return t200;
}

