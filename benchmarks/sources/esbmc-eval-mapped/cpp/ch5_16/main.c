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

char __const_main_string4[9] = "Good Bye";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[6] = "Hello";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[11] = "string1 = ";
char _str_2[11] = "string3 = ";
void copy1(char* p0, char* p1);
void copy2(char* p0, char* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z5copy1PcPKc
void copy1(char* v0, char* v1) {
bb2:
  char* s13;
  char* s24;
  s13 = v0;
  s24 = v1;
    int i5;
    int c6 = 0;
    i5 = c6;
    while (1) {
      int t8 = i5;
      long cast9 = (long)t8;
      char* t10 = s24;
      char* ptr11 = &(t10)[cast9];
      char t12 = *ptr11;
      int t13 = i5;
      long cast14 = (long)t13;
      char* t15 = s13;
      char* ptr16 = &(t15)[cast14];
      *ptr16 = t12;
      int cast17 = (int)t12;
      int c18 = 0;
      _Bool c19 = ((cast17 != c18)) ? 1 : 0;
      if (!c19) break;
    for_step7: ;
      int t20 = i5;
      int u21 = t20 + 1;
      i5 = u21;
    }
  return;
}

// function: _Z5copy2PcPKc
void copy2(char* v22, char* v23) {
bb24:
  char* s125;
  char* s226;
  s125 = v22;
  s226 = v23;
    while (1) {
      char* t28 = s226;
      char t29 = *t28;
      char* t30 = s125;
      *t30 = t29;
      int cast31 = (int)t29;
      int c32 = 0;
      _Bool c33 = ((cast31 != c32)) ? 1 : 0;
      if (!c33) break;
    for_step27: ;
      char* t34 = s125;
      int c35 = 1;
      char* ptr36 = &(t34)[c35];
      s125 = ptr36;
      char* t37 = s226;
      int c38 = 1;
      char* ptr39 = &(t37)[c38];
      s226 = ptr39;
    }
  return;
}

// function: main
int main() {
bb40:
  int __retval41;
  char string142[10];
  char* string243;
  char string344[10];
  char string445[9];
  int c46 = 0;
  __retval41 = c46;
  char* cast47 = (char*)&(_str);
  string243 = cast47;
  // array copy
  __builtin_memcpy(string445, __const_main_string4, (unsigned long)9 * sizeof(__const_main_string4[0]));
  char* cast48 = (char*)&(string142);
  char* t49 = string243;
  copy1(cast48, t49);
  char* cast50 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  char* cast52 = (char*)&(string142);
  struct std__basic_ostream_char__std__char_traits_char__* std53;
  __VERIFIER_nondet_memory(&std53, sizeof(std53));
  struct std__basic_ostream_char__std__char_traits_char__* std54;
  __VERIFIER_nondet_memory(&std54, sizeof(std54));
  char* cast55 = (char*)&(string344);
  char* cast56 = (char*)&(string445);
  copy2(cast55, cast56);
  char* cast57 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  char* cast59 = (char*)&(string344);
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  int c62 = 0;
  __retval41 = c62;
  int t63 = __retval41;
  return t63;
}

