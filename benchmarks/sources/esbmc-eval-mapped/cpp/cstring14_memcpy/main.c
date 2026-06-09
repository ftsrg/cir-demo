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

char __const_main_str1[14] = "Sample string";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "copy successful";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[7] = "str1: ";
char _str_2[8] = "\nstr2: ";
char _str_3[8] = "\nstr3: ";
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char str12[14];
  char str23[40];
  char str34[40];
  int c5 = 0;
  __retval1 = c5;
  // array copy
  __builtin_memcpy(str12, __const_main_str1, (unsigned long)14 * sizeof(__const_main_str1[0]));
  char* cast6 = (char*)&(str23);
  void* cast7 = (void*)cast6;
  char* cast8 = (char*)&(str12);
  void* cast9 = (void*)cast8;
  unsigned long c10 = 14;
  void* r11 = memcpy(cast7, cast9, c10);
  char* cast12 = (char*)&(str34);
  void* cast13 = (void*)cast12;
  char* cast14 = (char*)&(_str);
  void* cast15 = (void*)cast14;
  unsigned long c16 = 16;
  void* r17 = memcpy(cast13, cast15, c16);
  char* cast18 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(str12);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  char* cast24 = (char*)&(str23);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  char* cast28 = (char*)&(str34);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  int c31 = 0;
  __retval1 = c31;
  int t32 = __retval1;
  return t32;
}

