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

char __const_main_str[24] = "This is a sample string";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[32] = "Last occurence of 's' found at ";
extern char* strrchr(char* p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char str2[24];
  char* pch3;
  int c4 = 0;
  __retval1 = c4;
  // array copy
  __builtin_memcpy(str2, __const_main_str, (unsigned long)24 * sizeof(__const_main_str[0]));
  char* cast5 = (char*)&(str2);
  int c6 = 115;
  char* r7 = strrchr(cast5, c6);
  pch3 = r7;
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* t10 = pch3;
  char* cast11 = (char*)&(str2);
  long diff12 = t10 - cast11;
  long c13 = 1;
  long b14 = diff12 + c13;
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  int c17 = 0;
  __retval1 = c17;
  int t18 = __retval1;
  return t18;
}

