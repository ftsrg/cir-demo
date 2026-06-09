extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Test { int x; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[13] = "        x = ";
char _str_1[14] = "\n  this->x = ";
char _str_2[14] = "\n(*this).x = ";
void Test__Test_2(struct Test* p0, int p1);
void Test__Test(struct Test* p0, int p1) { Test__Test_2(p0, p1); }
void Test__print___const(struct Test* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN4TestC2Ei
void Test__Test_2(struct Test* v0, int v1) {
bb2:
  struct Test* this3;
  int value4;
  this3 = v0;
  value4 = v1;
  struct Test* t5 = this3;
  int t6 = value4;
  t5->x = t6;
  return;
}

// function: _ZNK4Test5printEv
void Test__print___const(struct Test* v7) {
bb8:
  struct Test* this9;
  this9 = v7;
  struct Test* t10 = this9;
  char* cast11 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  int t13 = t10->x;
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char* cast15 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  int t17 = t10->x;
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  char* cast19 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  int t21 = t10->x;
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  return;
}

// function: main
int main() {
bb24:
  int __retval25;
  struct Test testObject26;
  int c27 = 0;
  __retval25 = c27;
  int c28 = 12;
  Test__Test(&testObject26, c28);
  Test__print___const(&testObject26);
  int c29 = 0;
  __retval25 = c29;
  int t30 = __retval25;
  return t30;
}

