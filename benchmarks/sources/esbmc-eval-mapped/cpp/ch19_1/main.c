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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[12] = "__LINE__ = ";
char _str_1[12] = "__FILE__ = ";
char _str_2[98] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch19_1/main.cpp";
char _str_3[12] = "__DATE__ = ";
char _str_4[12] = "Jun  9 2026";
char _str_5[12] = "__TIME__ = ";
char _str_6[9] = "14:32:23";
char _str_7[17] = "__TIMESTAMP__ = ";
char _str_8[25] = "Fri Jun  5 12:59:43 2026";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
  char* cast3 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  int c5 = 16;
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  char* cast8 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* cast10 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char* cast13 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char* cast15 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char* cast18 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  char* cast23 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  char* cast25 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  int c28 = 0;
  __retval1 = c28;
  int t29 = __retval1;
  return t29;
}

