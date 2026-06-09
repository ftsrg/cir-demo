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

char __const_main_phrase[29] = "print characters of a string";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "The string is:\n";
void printCharacters(char* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z15printCharactersPKc
void printCharacters(char* v0) {
bb1:
  char* sPtr2;
  sPtr2 = v0;
    while (1) {
      char* t4 = sPtr2;
      char t5 = *t4;
      int cast6 = (int)t5;
      int c7 = 0;
      _Bool c8 = ((cast6 != c7)) ? 1 : 0;
      if (!c8) break;
      char* t9 = sPtr2;
      char t10 = *t9;
      struct std__basic_ostream_char__std__char_traits_char__* std11;
      __VERIFIER_nondet_memory(&std11, sizeof(std11));
    for_step3: ;
      char* t12 = sPtr2;
      int c13 = 1;
      char* ptr14 = &(t12)[c13];
      sPtr2 = ptr14;
    }
  return;
}

// function: main
int main() {
bb15:
  int __retval16;
  char phrase17[29];
  int c18 = 0;
  __retval16 = c18;
  // array copy
  __builtin_memcpy(phrase17, __const_main_phrase, (unsigned long)29 * sizeof(__const_main_phrase[0]));
  char* cast19 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  char* cast21 = (char*)&(phrase17);
  printCharacters(cast21);
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int c23 = 0;
  __retval16 = c23;
  int t24 = __retval16;
  return t24;
}

