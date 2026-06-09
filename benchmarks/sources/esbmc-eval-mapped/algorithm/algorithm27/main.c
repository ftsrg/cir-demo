extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_equals_val_const_int_ { int* _M_value; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "myints[0] == 10";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm27/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "myints[1] == 30";
char _str_3[16] = "myints[2] == 30";
char _str_4[16] = "myints[3] == 10";
char _str_5[16] = "myints[4] == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[16] = "range contains:";
char _str_7[2] = " ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[8];
  int* pbegin3;
  int* pend4;
  int ref_tmp05;
  int c6 = 0;
  __retval1 = c6;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  int* cast7 = (int*)&(myints2);
  pbegin3 = cast7;
  int* cast8 = (int*)&(myints2);
  unsigned long c9 = 32;
  unsigned long c10 = 4;
  unsigned long b11 = c9 / c10;
  int* ptr12 = &(cast8)[b11];
  pend4 = ptr12;
  int* t13 = pbegin3;
  int* t14 = pend4;
  int c15 = 20;
  ref_tmp05 = c15;
  int* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  pend4 = std16;
  long c17 = 0;
  int t18 = myints2[c17];
  int c19 = 10;
  _Bool c20 = ((t18 == c19)) ? 1 : 0;
  if (c20) {
  } else {
    char* cast21 = (char*)&(_str);
    char* c22 = _str_1;
    unsigned int c23 = 23;
    char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast21, c22, c23, cast24);
  }
  long c25 = 1;
  int t26 = myints2[c25];
  int c27 = 30;
  _Bool c28 = ((t26 == c27)) ? 1 : 0;
  if (c28) {
  } else {
    char* cast29 = (char*)&(_str_2);
    char* c30 = _str_1;
    unsigned int c31 = 24;
    char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast29, c30, c31, cast32);
  }
  long c33 = 2;
  int t34 = myints2[c33];
  int c35 = 30;
  _Bool c36 = ((t34 == c35)) ? 1 : 0;
  if (c36) {
  } else {
    char* cast37 = (char*)&(_str_3);
    char* c38 = _str_1;
    unsigned int c39 = 25;
    char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast37, c38, c39, cast40);
  }
  long c41 = 3;
  int t42 = myints2[c41];
  int c43 = 10;
  _Bool c44 = ((t42 == c43)) ? 1 : 0;
  if (c44) {
  } else {
    char* cast45 = (char*)&(_str_4);
    char* c46 = _str_1;
    unsigned int c47 = 26;
    char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast45, c46, c47, cast48);
  }
  long c49 = 4;
  int t50 = myints2[c49];
  int c51 = 10;
  _Bool c52 = ((t50 == c51)) ? 1 : 0;
  if (c52) {
  } else {
    char* cast53 = (char*)&(_str_5);
    char* c54 = _str_1;
    unsigned int c55 = 27;
    char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast53, c54, c55, cast56);
  }
  char* cast57 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
    int* p59;
    int* t60 = pbegin3;
    p59 = t60;
    while (1) {
      int* t62 = p59;
      int* t63 = pend4;
      _Bool c64 = ((t62 != t63)) ? 1 : 0;
      if (!c64) break;
      char* cast65 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      int* t67 = p59;
      int t68 = *t67;
      struct std__basic_ostream_char__std__char_traits_char__* std69;
      __VERIFIER_nondet_memory(&std69, sizeof(std69));
    for_step61: ;
      int* t70 = p59;
      int c71 = 1;
      int* ptr72 = &(t70)[c71];
      p59 = ptr72;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  int c74 = 0;
  __retval1 = c74;
  int t75 = __retval1;
  return t75;
}

