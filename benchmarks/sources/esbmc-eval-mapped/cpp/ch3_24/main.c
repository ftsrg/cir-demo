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
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Input three integer values: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[31] = "The maximum integer value is: ";
char _str_2[30] = "\n\nInput three double values: ";
char _str_3[30] = "The maximum double value is: ";
char _str_4[27] = "\n\nInput three characters: ";
char _str_5[33] = "The maximum character value is: ";
int int_maximum_int_(int p0, int p1, int p2);
double double_maximum_double_(double p0, double p1, double p2);
char char_maximum_char_(char p0, char p1, char p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z7maximumIiET_S0_S0_S0_
int int_maximum_int_(int v0, int v1, int v2) {
bb3:
  int value14;
  int value25;
  int value36;
  int __retval7;
  int max8;
  value14 = v0;
  value25 = v1;
  value36 = v2;
  int t9 = value14;
  max8 = t9;
    int t10 = value25;
    int t11 = max8;
    _Bool c12 = ((t10 > t11)) ? 1 : 0;
    if (c12) {
      int t13 = value25;
      max8 = t13;
    }
    int t14 = value36;
    int t15 = max8;
    _Bool c16 = ((t14 > t15)) ? 1 : 0;
    if (c16) {
      int t17 = value36;
      max8 = t17;
    }
  int t18 = max8;
  __retval7 = t18;
  int t19 = __retval7;
  return t19;
}

// function: _Z7maximumIdET_S0_S0_S0_
double double_maximum_double_(double v20, double v21, double v22) {
bb23:
  double value124;
  double value225;
  double value326;
  double __retval27;
  double max28;
  value124 = v20;
  value225 = v21;
  value326 = v22;
  double t29 = value124;
  max28 = t29;
    double t30 = value225;
    double t31 = max28;
    _Bool c32 = ((t30 > t31)) ? 1 : 0;
    if (c32) {
      double t33 = value225;
      max28 = t33;
    }
    double t34 = value326;
    double t35 = max28;
    _Bool c36 = ((t34 > t35)) ? 1 : 0;
    if (c36) {
      double t37 = value326;
      max28 = t37;
    }
  double t38 = max28;
  __retval27 = t38;
  double t39 = __retval27;
  return t39;
}

// function: _Z7maximumIcET_S0_S0_S0_
char char_maximum_char_(char v40, char v41, char v42) {
bb43:
  char value144;
  char value245;
  char value346;
  char __retval47;
  char max48;
  value144 = v40;
  value245 = v41;
  value346 = v42;
  char t49 = value144;
  max48 = t49;
    char t50 = value245;
    int cast51 = (int)t50;
    char t52 = max48;
    int cast53 = (int)t52;
    _Bool c54 = ((cast51 > cast53)) ? 1 : 0;
    if (c54) {
      char t55 = value245;
      max48 = t55;
    }
    char t56 = value346;
    int cast57 = (int)t56;
    char t58 = max48;
    int cast59 = (int)t58;
    _Bool c60 = ((cast57 > cast59)) ? 1 : 0;
    if (c60) {
      char t61 = value346;
      max48 = t61;
    }
  char t62 = max48;
  __retval47 = t62;
  char t63 = __retval47;
  return t63;
}

// function: main
int main() {
bb64:
  int __retval65;
  int int166;
  int int267;
  int int368;
  double double169;
  double double270;
  double double371;
  char char172;
  char char273;
  char char374;
  int c75 = 0;
  __retval65 = c75;
  int c76 = 2;
  int c77 = 3;
  int c78 = 4;
  int r79 = int_maximum_int_(c76, c77, c78);
  char* cast80 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std81;
  __VERIFIER_nondet_memory(&std81, sizeof(std81));
  struct std__basic_istream_char__std__char_traits_char__* std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  struct std__basic_istream_char__std__char_traits_char__* std83;
  __VERIFIER_nondet_memory(&std83, sizeof(std83));
  struct std__basic_istream_char__std__char_traits_char__* std84;
  __VERIFIER_nondet_memory(&std84, sizeof(std84));
  char* cast85 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std86;
  __VERIFIER_nondet_memory(&std86, sizeof(std86));
  int t87 = int166;
  int t88 = int267;
  int t89 = int368;
  int r90 = int_maximum_int_(t87, t88, t89);
  struct std__basic_ostream_char__std__char_traits_char__* std91;
  __VERIFIER_nondet_memory(&std91, sizeof(std91));
  char* cast92 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std93;
  __VERIFIER_nondet_memory(&std93, sizeof(std93));
  struct std__basic_istream_char__std__char_traits_char__* std94;
  __VERIFIER_nondet_memory(&std94, sizeof(std94));
  struct std__basic_istream_char__std__char_traits_char__* std95;
  __VERIFIER_nondet_memory(&std95, sizeof(std95));
  struct std__basic_istream_char__std__char_traits_char__* std96;
  __VERIFIER_nondet_memory(&std96, sizeof(std96));
  char* cast97 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std98;
  __VERIFIER_nondet_memory(&std98, sizeof(std98));
  double t99 = double169;
  double t100 = double270;
  double t101 = double371;
  double r102 = double_maximum_double_(t99, t100, t101);
  struct std__basic_ostream_char__std__char_traits_char__* std103;
  __VERIFIER_nondet_memory(&std103, sizeof(std103));
  char* cast104 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std105;
  __VERIFIER_nondet_memory(&std105, sizeof(std105));
  struct std__basic_istream_char__std__char_traits_char__* std106;
  __VERIFIER_nondet_memory(&std106, sizeof(std106));
  struct std__basic_istream_char__std__char_traits_char__* std107;
  __VERIFIER_nondet_memory(&std107, sizeof(std107));
  struct std__basic_istream_char__std__char_traits_char__* std108;
  __VERIFIER_nondet_memory(&std108, sizeof(std108));
  char* cast109 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std110;
  __VERIFIER_nondet_memory(&std110, sizeof(std110));
  char t111 = char172;
  char t112 = char273;
  char t113 = char374;
  char r114 = char_maximum_char_(t111, t112, t113);
  struct std__basic_ostream_char__std__char_traits_char__* std115;
  __VERIFIER_nondet_memory(&std115, sizeof(std115));
  struct std__basic_ostream_char__std__char_traits_char__* std116;
  __VERIFIER_nondet_memory(&std116, sizeof(std116));
  int c117 = 0;
  __retval65 = c117;
  int t118 = __retval65;
  return t118;
}

