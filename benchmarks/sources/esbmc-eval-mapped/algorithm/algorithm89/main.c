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
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int current __attribute__((aligned(4))) = 0;
char _str[16] = "myarray[1] == 1";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm89/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[18] = "myarray contains:";
char _str_3[2] = " ";
int UniqueNumber();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z12UniqueNumberv
int UniqueNumber() {
bb0:
  int __retval1;
  int t2 = current;
  int u3 = t2 + 1;
  *&current = u3;
  __retval1 = u3;
  int t4 = __retval1;
  return t4;
}

// function: main
int main() {
bb5:
  int __retval6;
  int myarray7[5];
  int c8 = 0;
  __retval6 = c8;
  int* cast9 = (int*)&(myarray7);
  int c10 = 5;
  int* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  long c12 = 1;
  int t13 = myarray7[c12];
  int c14 = 1;
  _Bool c15 = ((t13 == c14)) ? 1 : 0;
  if (c15) {
  } else {
    char* cast16 = (char*)&(_str);
    char* c17 = _str_1;
    unsigned int c18 = 22;
    char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast16, c17, c18, cast19);
  }
  char* cast20 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
    int i22;
    int c23 = 0;
    i22 = c23;
    while (1) {
      int t25 = i22;
      int c26 = 5;
      _Bool c27 = ((t25 < c26)) ? 1 : 0;
      if (!c27) break;
      char* cast28 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      int t30 = i22;
      long cast31 = (long)t30;
      int t32 = myarray7[cast31];
      struct std__basic_ostream_char__std__char_traits_char__* std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
    for_step24: ;
      int t34 = i22;
      int u35 = t34 + 1;
      i22 = u35;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  int c37 = 0;
  __retval6 = c37;
  int t38 = __retval6;
  return t38;
}

