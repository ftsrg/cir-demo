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
int _ZZ14useStaticLocalvE1x __attribute__((aligned(4))) = 50;
int x __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[34] = "local x in main's outer scope is ";
char _str_1[34] = "local x in main's inner scope is ";
char _str_2[21] = "\nlocal x in main is ";
char _str_3[12] = "local x is ";
char _str_4[22] = " on entering useLocal";
char _str_5[21] = " on exiting useLocal";
char _str_6[19] = "local static x is ";
char _str_7[28] = " on entering useStaticLocal";
char _str_8[27] = " on exiting useStaticLocal";
char _str_9[13] = "global x is ";
char _str_10[23] = " on entering useGlobal";
char _str_11[22] = " on exiting useGlobal";
void useLocal();
void useStaticLocal();
void useGlobal();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8useLocalv
void useLocal() {
bb0:
  int x1;
  int c2 = 25;
  x1 = c2;
  struct std__basic_ostream_char__std__char_traits_char__* std3;
  __VERIFIER_nondet_memory(&std3, sizeof(std3));
  char* cast4 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  int t6 = x1;
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  char* cast8 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  int t11 = x1;
  int u12 = t11 + 1;
  x1 = u12;
  char* cast13 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  int t15 = x1;
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  return;
}

// function: _Z14useStaticLocalv
void useStaticLocal() {
bb20:
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int t24 = _ZZ14useStaticLocalvE1x;
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  int t29 = _ZZ14useStaticLocalvE1x;
  int u30 = t29 + 1;
  *&_ZZ14useStaticLocalvE1x = u30;
  char* cast31 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  int t33 = _ZZ14useStaticLocalvE1x;
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  char* cast35 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  return;
}

// function: _Z9useGlobalv
void useGlobal() {
bb38:
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  char* cast40 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  int t42 = x;
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  char* cast44 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  int c47 = 10;
  int t48 = x;
  int b49 = t48 * c47;
  *&x = b49;
  char* cast50 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  int t52 = x;
  struct std__basic_ostream_char__std__char_traits_char__* std53;
  __VERIFIER_nondet_memory(&std53, sizeof(std53));
  char* cast54 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  return;
}

// function: main
int main() {
bb57:
  int __retval58;
  int x59;
  int c60 = 0;
  __retval58 = c60;
  int c61 = 5;
  x59 = c61;
  char* cast62 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std63;
  __VERIFIER_nondet_memory(&std63, sizeof(std63));
  int t64 = x59;
  struct std__basic_ostream_char__std__char_traits_char__* std65;
  __VERIFIER_nondet_memory(&std65, sizeof(std65));
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
    int x67;
    int c68 = 7;
    x67 = c68;
    char* cast69 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    int t71 = x67;
    struct std__basic_ostream_char__std__char_traits_char__* std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    struct std__basic_ostream_char__std__char_traits_char__* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
  char* cast74 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std75;
  __VERIFIER_nondet_memory(&std75, sizeof(std75));
  int t76 = x59;
  struct std__basic_ostream_char__std__char_traits_char__* std77;
  __VERIFIER_nondet_memory(&std77, sizeof(std77));
  struct std__basic_ostream_char__std__char_traits_char__* std78;
  __VERIFIER_nondet_memory(&std78, sizeof(std78));
  useLocal();
  useStaticLocal();
  useGlobal();
  useLocal();
  useStaticLocal();
  useGlobal();
  char* cast79 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  int t81 = x59;
  struct std__basic_ostream_char__std__char_traits_char__* std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  struct std__basic_ostream_char__std__char_traits_char__* std83;
  __VERIFIER_nondet_memory(&std83, sizeof(std83));
  int c84 = 0;
  __retval58 = c84;
  int t85 = __retval58;
  return t85;
}

