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
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int current __attribute__((aligned(4))) = 0;
char _str[18] = "myarray[i] == i+1";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm26/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
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
  int myarray7[9];
  int c8 = 0;
  __retval6 = c8;
  int* cast9 = (int*)&(myarray7);
  int c10 = 9;
  int* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
    int i12;
    int c13 = 0;
    i12 = c13;
    while (1) {
      int t15 = i12;
      int c16 = 9;
      _Bool c17 = ((t15 < c16)) ? 1 : 0;
      if (!c17) break;
      int t18 = i12;
      long cast19 = (long)t18;
      int t20 = myarray7[cast19];
      int t21 = i12;
      int c22 = 1;
      int b23 = t21 + c22;
      _Bool c24 = ((t20 == b23)) ? 1 : 0;
      if (c24) {
      } else {
        char* cast25 = (char*)&(_str);
        char* c26 = _str_1;
        unsigned int c27 = 24;
        char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast25, c26, c27, cast28);
      }
    for_step14: ;
      int t29 = i12;
      int u30 = t29 + 1;
      i12 = u30;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  int c32 = 0;
  __retval6 = c32;
  int t33 = __retval6;
  return t33;
}

