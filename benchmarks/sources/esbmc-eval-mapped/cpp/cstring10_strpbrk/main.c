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

char __const_main_key[6] = "aeiou";
char __const_main_str[24] = "This is a sample string";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[13] = "Vowels in ' ";
char _str_1[5] = " ': ";
char _str_2[2] = "\n";
extern char* strpbrk(char* p0, char* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char str2[24];
  char key3[6];
  char* pch4;
  int c5 = 0;
  __retval1 = c5;
  // array copy
  __builtin_memcpy(str2, __const_main_str, (unsigned long)24 * sizeof(__const_main_str[0]));
  // array copy
  __builtin_memcpy(key3, __const_main_key, (unsigned long)6 * sizeof(__const_main_key[0]));
  char* cast6 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  char* cast8 = (char*)&(str2);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* cast10 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char* cast13 = (char*)&(str2);
  char* cast14 = (char*)&(key3);
  char* r15 = strpbrk(cast13, cast14);
  pch4 = r15;
    while (1) {
      char* t16 = pch4;
      char* c17 = ((void*)0);
      _Bool c18 = ((t16 != c17)) ? 1 : 0;
      if (!c18) break;
        char* t19 = pch4;
        char t20 = *t19;
        struct std__basic_ostream_char__std__char_traits_char__* std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        char* t23 = pch4;
        int c24 = 1;
        char* ptr25 = &(t23)[c24];
        char* cast26 = (char*)&(key3);
        char* r27 = strpbrk(ptr25, cast26);
        pch4 = r27;
    }
  char* cast28 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  int c30 = 0;
  __retval1 = c30;
  int t31 = __retval1;
  return t31;
}

