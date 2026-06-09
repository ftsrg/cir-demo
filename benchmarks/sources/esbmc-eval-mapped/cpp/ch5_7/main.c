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

char __const_main_phrase[22] = "characters and $32.98";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[34] = "The phrase before conversion is: ";
char _str_1[35] = "\nThe phrase after conversion is:  ";
extern int islower(int p0);
extern int toupper(int p0);
void convertToUppercase(char* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z18convertToUppercasePc
void convertToUppercase(char* v0) {
bb1:
  char* sPtr2;
  sPtr2 = v0;
    while (1) {
      char* t3 = sPtr2;
      char t4 = *t3;
      int cast5 = (int)t4;
      int c6 = 0;
      _Bool c7 = ((cast5 != c6)) ? 1 : 0;
      if (!c7) break;
          char* t8 = sPtr2;
          char t9 = *t8;
          int cast10 = (int)t9;
          int r11 = islower(cast10);
          _Bool cast12 = (_Bool)r11;
          if (cast12) {
            char* t13 = sPtr2;
            char t14 = *t13;
            int cast15 = (int)t14;
            int r16 = toupper(cast15);
            char cast17 = (char)r16;
            char* t18 = sPtr2;
            *t18 = cast17;
          }
        char* t19 = sPtr2;
        int c20 = 1;
        char* ptr21 = &(t19)[c20];
        sPtr2 = ptr21;
    }
  return;
}

// function: main
int main() {
bb22:
  int __retval23;
  char phrase24[22];
  int c25 = 0;
  __retval23 = c25;
  // array copy
  __builtin_memcpy(phrase24, __const_main_phrase, (unsigned long)22 * sizeof(__const_main_phrase[0]));
  char* cast26 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  char* cast28 = (char*)&(phrase24);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char* cast30 = (char*)&(phrase24);
  convertToUppercase(cast30);
  char* cast31 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  char* cast33 = (char*)&(phrase24);
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  int c36 = 0;
  __retval23 = c36;
  int t37 = __retval23;
  return t37;
}

