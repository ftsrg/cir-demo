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
char _str[5] = "x = ";
char _str_1[23] = " before squareByValue\n";
char _str_2[34] = "Value returned by squareByValue: ";
char _str_3[22] = " after squareByValue\n";
char _str_4[5] = "z = ";
char _str_5[26] = " before squareByReference";
char _str_6[25] = " after squareByReference";
int squareByValue(int p0);
void squareByReference(int* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z13squareByValuei
int squareByValue(int v0) {
bb1:
  int number2;
  int __retval3;
  number2 = v0;
  int t4 = number2;
  int t5 = number2;
  int b6 = t5 * t4;
  number2 = b6;
  __retval3 = b6;
  int t7 = __retval3;
  return t7;
}

// function: _Z17squareByReferenceRi
void squareByReference(int* v8) {
bb9:
  int* numberRef10;
  numberRef10 = v8;
  int* t11 = numberRef10;
  int t12 = *t11;
  int* t13 = numberRef10;
  int t14 = *t13;
  int b15 = t14 * t12;
  *t13 = b15;
  return;
}

// function: main
int main() {
bb16:
  int __retval17;
  int x18;
  int z19;
  int c20 = 0;
  __retval17 = c20;
  int c21 = 2;
  x18 = c21;
  int c22 = 4;
  z19 = c22;
  char* cast23 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  int t25 = x18;
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char* cast27 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  char* cast29 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  int t31 = x18;
  int r32 = squareByValue(t31);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  char* cast35 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  int t37 = x18;
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  char* cast39 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  char* cast42 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  int t44 = z19;
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  char* cast46 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  squareByReference(&z19);
  char* cast49 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  int t51 = z19;
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  char* cast53 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std54;
  __VERIFIER_nondet_memory(&std54, sizeof(std54));
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  int c56 = 0;
  __retval17 = c56;
  int t57 = __retval17;
  return t57;
}

