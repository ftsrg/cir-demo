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
char _str[20] = "Enter two strings: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[15] = "The result is ";
_Bool mystery3(char* p0, char* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8mystery3PKcS0_
_Bool mystery3(char* v0, char* v1) {
bb2:
  char* s13;
  char* s24;
  _Bool __retval5;
  s13 = v0;
  s24 = v1;
    while (1) {
      char* t7 = s13;
      char t8 = *t7;
      int cast9 = (int)t8;
      int c10 = 0;
      _Bool c11 = ((cast9 != c10)) ? 1 : 0;
      _Bool ternary12;
      if (c11) {
        char* t13 = s24;
        char t14 = *t13;
        int cast15 = (int)t14;
        int c16 = 0;
        _Bool c17 = ((cast15 != c16)) ? 1 : 0;
        ternary12 = (_Bool)c17;
      } else {
        _Bool c18 = 0;
        ternary12 = (_Bool)c18;
      }
      if (!ternary12) break;
        char* t19 = s13;
        char t20 = *t19;
        int cast21 = (int)t20;
        char* t22 = s24;
        char t23 = *t22;
        int cast24 = (int)t23;
        _Bool c25 = ((cast21 != cast24)) ? 1 : 0;
        if (c25) {
          _Bool c26 = 0;
          __retval5 = c26;
          _Bool t27 = __retval5;
          _Bool ret_val28 = t27;
          return ret_val28;
        }
    for_step6: ;
      char* t29 = s13;
      int c30 = 1;
      char* ptr31 = &(t29)[c30];
      s13 = ptr31;
      char* t32 = s24;
      int c33 = 1;
      char* ptr34 = &(t32)[c33];
      s24 = ptr34;
    }
  _Bool c35 = 1;
  __retval5 = c35;
  _Bool t36 = __retval5;
  return t36;
}

// function: main
int main() {
bb37:
  int __retval38;
  char string139[80];
  char string240[80];
  int c41 = 0;
  __retval38 = c41;
  char* cast42 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  struct std__basic_istream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  struct std__basic_istream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  char* cast46 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  char* cast48 = (char*)&(string139);
  char* cast49 = (char*)&(string240);
  _Bool r50 = mystery3(cast48, cast49);
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  int c53 = 0;
  __retval38 = c53;
  int t54 = __retval38;
  return t54;
}

