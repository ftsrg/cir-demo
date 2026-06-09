extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_myints[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "myints[0] == 2";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm28/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[15] = "myints[1] == 4";
char _str_3[15] = "myints[2] == 6";
char _str_4[15] = "myints[3] == 8";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "range contains:";
char _str_6[2] = " ";
_Bool IsOdd(int p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = ((b6 == c7)) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int myints12[9];
  int* pbegin13;
  int* pend14;
  int c15 = 0;
  __retval11 = c15;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  int* cast16 = (int*)&(myints12);
  pbegin13 = cast16;
  int* cast17 = (int*)&(myints12);
  unsigned long c18 = 36;
  unsigned long c19 = 4;
  unsigned long b20 = c18 / c19;
  int* ptr21 = &(cast17)[b20];
  pend14 = ptr21;
  int* t22 = pbegin13;
  int* t23 = pend14;
  int* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  pend14 = std24;
  long c25 = 0;
  int t26 = myints12[c25];
  int c27 = 2;
  _Bool c28 = ((t26 == c27)) ? 1 : 0;
  if (c28) {
  } else {
    char* cast29 = (char*)&(_str);
    char* c30 = _str_1;
    unsigned int c31 = 25;
    char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast29, c30, c31, cast32);
  }
  long c33 = 1;
  int t34 = myints12[c33];
  int c35 = 4;
  _Bool c36 = ((t34 == c35)) ? 1 : 0;
  if (c36) {
  } else {
    char* cast37 = (char*)&(_str_2);
    char* c38 = _str_1;
    unsigned int c39 = 26;
    char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast37, c38, c39, cast40);
  }
  long c41 = 2;
  int t42 = myints12[c41];
  int c43 = 6;
  _Bool c44 = ((t42 == c43)) ? 1 : 0;
  if (c44) {
  } else {
    char* cast45 = (char*)&(_str_3);
    char* c46 = _str_1;
    unsigned int c47 = 27;
    char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast45, c46, c47, cast48);
  }
  long c49 = 3;
  int t50 = myints12[c49];
  int c51 = 8;
  _Bool c52 = ((t50 == c51)) ? 1 : 0;
  if (c52) {
  } else {
    char* cast53 = (char*)&(_str_4);
    char* c54 = _str_1;
    unsigned int c55 = 28;
    char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast53, c54, c55, cast56);
  }
  char* cast57 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
    int* p59;
    int* t60 = pbegin13;
    p59 = t60;
    while (1) {
      int* t62 = p59;
      int* t63 = pend14;
      _Bool c64 = ((t62 != t63)) ? 1 : 0;
      if (!c64) break;
      char* cast65 = (char*)&(_str_6);
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
  __retval11 = c74;
  int t75 = __retval11;
  return t75;
}

