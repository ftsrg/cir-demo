extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_comp_iter_bool_____char__char__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char __const_main_second[10] = "apartment";
char __const_main_first[6] = "Apple";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[39] = "Using default comparison (operator<): ";
char _str_1[55] = "lexicographical_compare(first,first+5,second,second+9)";
char _str_2[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm62/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[15] = " is less than ";
char _str_4[18] = " is greater than ";
char _str_5[6] = " and ";
char _str_6[17] = " are equivalent\n";
char _str_7[62] = "lexicographical_compare(second,second+9,first,first+5,mycomp)";
char _str_8[36] = "Using mycomp as comparison object: ";
extern int tolower(int p0);
_Bool mycomp(char p0, char p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z6mycompcc
_Bool mycomp(char v0, char v1) {
bb2:
  char c13;
  char c24;
  _Bool __retval5;
  c13 = v0;
  c24 = v1;
  char t6 = c13;
  int cast7 = (int)t6;
  int r8 = tolower(cast7);
  char t9 = c24;
  int cast10 = (int)t9;
  int r11 = tolower(cast10);
  _Bool c12 = ((r8 < r11)) ? 1 : 0;
  __retval5 = c12;
  _Bool t13 = __retval5;
  return t13;
}

// function: main
int main() {
bb14:
  int __retval15;
  char first16[6];
  char second17[10];
  int c18 = 0;
  __retval15 = c18;
  // array copy
  __builtin_memcpy(first16, __const_main_first, (unsigned long)6 * sizeof(__const_main_first[0]));
  // array copy
  __builtin_memcpy(second17, __const_main_second, (unsigned long)10 * sizeof(__const_main_second[0]));
  char* cast19 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  char* cast21 = (char*)&(first16);
  char* cast22 = (char*)&(first16);
  int c23 = 5;
  char* ptr24 = &(cast22)[c23];
  char* cast25 = (char*)&(second17);
  char* cast26 = (char*)&(second17);
  int c27 = 9;
  char* ptr28 = &(cast26)[c27];
  _Bool std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  if (std29) {
  } else {
    char* cast30 = (char*)&(_str_1);
    char* c31 = _str_2;
    unsigned int c32 = 24;
    char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast30, c31, c32, cast33);
  }
    char* cast34 = (char*)&(first16);
    char* cast35 = (char*)&(first16);
    int c36 = 5;
    char* ptr37 = &(cast35)[c36];
    char* cast38 = (char*)&(second17);
    char* cast39 = (char*)&(second17);
    int c40 = 9;
    char* ptr41 = &(cast39)[c40];
    _Bool std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    if (std42) {
      char* cast43 = (char*)&(first16);
      struct std__basic_ostream_char__std__char_traits_char__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      char* cast45 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      char* cast47 = (char*)&(second17);
      struct std__basic_ostream_char__std__char_traits_char__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      struct std__basic_ostream_char__std__char_traits_char__* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
    } else {
        char* cast50 = (char*)&(second17);
        char* cast51 = (char*)&(second17);
        int c52 = 9;
        char* ptr53 = &(cast51)[c52];
        char* cast54 = (char*)&(first16);
        char* cast55 = (char*)&(first16);
        int c56 = 5;
        char* ptr57 = &(cast55)[c56];
        _Bool std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
        if (std58) {
          char* cast59 = (char*)&(first16);
          struct std__basic_ostream_char__std__char_traits_char__* std60;
          __VERIFIER_nondet_memory(&std60, sizeof(std60));
          char* cast61 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std62;
          __VERIFIER_nondet_memory(&std62, sizeof(std62));
          char* cast63 = (char*)&(second17);
          struct std__basic_ostream_char__std__char_traits_char__* std64;
          __VERIFIER_nondet_memory(&std64, sizeof(std64));
          struct std__basic_ostream_char__std__char_traits_char__* std65;
          __VERIFIER_nondet_memory(&std65, sizeof(std65));
        } else {
          char* cast66 = (char*)&(first16);
          struct std__basic_ostream_char__std__char_traits_char__* std67;
          __VERIFIER_nondet_memory(&std67, sizeof(std67));
          char* cast68 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std69;
          __VERIFIER_nondet_memory(&std69, sizeof(std69));
          char* cast70 = (char*)&(second17);
          struct std__basic_ostream_char__std__char_traits_char__* std71;
          __VERIFIER_nondet_memory(&std71, sizeof(std71));
          char* cast72 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std73;
          __VERIFIER_nondet_memory(&std73, sizeof(std73));
        }
    }
  char* cast74 = (char*)&(second17);
  char* cast75 = (char*)&(second17);
  int c76 = 9;
  char* ptr77 = &(cast75)[c76];
  char* cast78 = (char*)&(first16);
  char* cast79 = (char*)&(first16);
  int c80 = 5;
  char* ptr81 = &(cast79)[c80];
  _Bool std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  if (std82) {
  } else {
    char* cast83 = (char*)&(_str_7);
    char* c84 = _str_2;
    unsigned int c85 = 33;
    char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast83, c84, c85, cast86);
  }
  char* cast87 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std88;
  __VERIFIER_nondet_memory(&std88, sizeof(std88));
    char* cast89 = (char*)&(first16);
    char* cast90 = (char*)&(first16);
    int c91 = 5;
    char* ptr92 = &(cast90)[c91];
    char* cast93 = (char*)&(second17);
    char* cast94 = (char*)&(second17);
    int c95 = 9;
    char* ptr96 = &(cast94)[c95];
    _Bool std97;
    __VERIFIER_nondet_memory(&std97, sizeof(std97));
    if (std97) {
      char* cast98 = (char*)&(first16);
      struct std__basic_ostream_char__std__char_traits_char__* std99;
      __VERIFIER_nondet_memory(&std99, sizeof(std99));
      char* cast100 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std101;
      __VERIFIER_nondet_memory(&std101, sizeof(std101));
      char* cast102 = (char*)&(second17);
      struct std__basic_ostream_char__std__char_traits_char__* std103;
      __VERIFIER_nondet_memory(&std103, sizeof(std103));
      struct std__basic_ostream_char__std__char_traits_char__* std104;
      __VERIFIER_nondet_memory(&std104, sizeof(std104));
    } else {
        char* cast105 = (char*)&(second17);
        char* cast106 = (char*)&(second17);
        int c107 = 9;
        char* ptr108 = &(cast106)[c107];
        char* cast109 = (char*)&(first16);
        char* cast110 = (char*)&(first16);
        int c111 = 5;
        char* ptr112 = &(cast110)[c111];
        _Bool std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
        if (std113) {
          char* cast114 = (char*)&(first16);
          struct std__basic_ostream_char__std__char_traits_char__* std115;
          __VERIFIER_nondet_memory(&std115, sizeof(std115));
          char* cast116 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std117;
          __VERIFIER_nondet_memory(&std117, sizeof(std117));
          char* cast118 = (char*)&(second17);
          struct std__basic_ostream_char__std__char_traits_char__* std119;
          __VERIFIER_nondet_memory(&std119, sizeof(std119));
          struct std__basic_ostream_char__std__char_traits_char__* std120;
          __VERIFIER_nondet_memory(&std120, sizeof(std120));
        } else {
          char* cast121 = (char*)&(first16);
          struct std__basic_ostream_char__std__char_traits_char__* std122;
          __VERIFIER_nondet_memory(&std122, sizeof(std122));
          char* cast123 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std124;
          __VERIFIER_nondet_memory(&std124, sizeof(std124));
          char* cast125 = (char*)&(second17);
          struct std__basic_ostream_char__std__char_traits_char__* std126;
          __VERIFIER_nondet_memory(&std126, sizeof(std126));
          char* cast127 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std128;
          __VERIFIER_nondet_memory(&std128, sizeof(std128));
        }
    }
  int c129 = 0;
  __retval15 = c129;
  int t130 = __retval15;
  return t130;
}

