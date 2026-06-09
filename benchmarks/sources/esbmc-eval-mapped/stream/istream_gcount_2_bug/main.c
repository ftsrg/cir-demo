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
char _str[22] = "Type the letter 'a': ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[55] = "!((int)cin.gcount() >= 0) && !((int)cin.gcount() < 10)";
char _str_2[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_gcount_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  char c2[10];
  int c3 = 0;
  __retval1 = c3;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  struct std__basic_istream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  long c7 = 0;
  long c8 = 9;
  struct std__basic_istream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* cast10 = (char*)&(c2);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  long std13 = __VERIFIER_nondet_long();
  int cast14 = (int)std13;
  int c15 = 0;
  _Bool c16 = ((cast14 >= c15)) ? 1 : 0;
  _Bool u17 = !c16;
  _Bool ternary18;
  if (u17) {
    long std19 = __VERIFIER_nondet_long();
    int cast20 = (int)std19;
    int c21 = 10;
    _Bool c22 = ((cast20 < c21)) ? 1 : 0;
    _Bool u23 = !c22;
    ternary18 = (_Bool)u23;
  } else {
    _Bool c24 = 0;
    ternary18 = (_Bool)c24;
  }
  if (ternary18) {
  } else {
    char* cast25 = (char*)&(_str_1);
    char* c26 = _str_2;
    unsigned int c27 = 24;
    char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast25, c26, c27, cast28);
  }
  long std29 = __VERIFIER_nondet_long();
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  int t32 = __retval1;
  return t32;
}

