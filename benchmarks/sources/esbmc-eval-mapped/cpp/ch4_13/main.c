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

int __const__Z18automaticArrayInitv_array2[3] = {1, 2, 3};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZZ15staticArrayInitvE6array1[3] __attribute__((aligned(4)));
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[30] = "First call to each function:\n";
char _str_1[33] = "\n\nSecond call to each function:\n";
char _str_2[38] = "\nValues on entering staticArrayInit:\n";
char _str_3[8] = "array1[";
char _str_4[5] = "] = ";
char _str_5[3] = "  ";
char _str_6[37] = "\nValues on exiting staticArrayInit:\n";
char _str_7[42] = "\n\nValues on entering automaticArrayInit:\n";
char _str_8[8] = "array2[";
char _str_9[40] = "\nValues on exiting automaticArrayInit:\n";
void staticArrayInit();
void automaticArrayInit();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z15staticArrayInitv
void staticArrayInit() {
bb0:
  char* cast1 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std2;
  __VERIFIER_nondet_memory(&std2, sizeof(std2));
    int i3;
    int c4 = 0;
    i3 = c4;
    while (1) {
      int t6 = i3;
      int c7 = 3;
      _Bool c8 = ((t6 < c7)) ? 1 : 0;
      if (!c8) break;
      char* cast9 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std10;
      __VERIFIER_nondet_memory(&std10, sizeof(std10));
      int t11 = i3;
      struct std__basic_ostream_char__std__char_traits_char__* std12;
      __VERIFIER_nondet_memory(&std12, sizeof(std12));
      char* cast13 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std14;
      __VERIFIER_nondet_memory(&std14, sizeof(std14));
      int t15 = i3;
      long cast16 = (long)t15;
      int t17 = _ZZ15staticArrayInitvE6array1[cast16];
      struct std__basic_ostream_char__std__char_traits_char__* std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      char* cast19 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
    for_step5: ;
      int t21 = i3;
      int u22 = t21 + 1;
      i3 = u22;
    }
  char* cast23 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
    int j25;
    int c26 = 0;
    j25 = c26;
    while (1) {
      int t28 = j25;
      int c29 = 3;
      _Bool c30 = ((t28 < c29)) ? 1 : 0;
      if (!c30) break;
      char* cast31 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      int t33 = j25;
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      char* cast35 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      int c37 = 5;
      int t38 = j25;
      long cast39 = (long)t38;
      int t40 = _ZZ15staticArrayInitvE6array1[cast39];
      int b41 = t40 + c37;
      _ZZ15staticArrayInitvE6array1[cast39] = b41;
      struct std__basic_ostream_char__std__char_traits_char__* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      char* cast43 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
    for_step27: ;
      int t45 = j25;
      int u46 = t45 + 1;
      j25 = u46;
    }
  return;
}

// function: _Z18automaticArrayInitv
void automaticArrayInit() {
bb47:
  int array248[3];
  // array copy
  __builtin_memcpy(array248, __const__Z18automaticArrayInitv_array2, (unsigned long)3 * sizeof(__const__Z18automaticArrayInitv_array2[0]));
  char* cast49 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int i51;
    int c52 = 0;
    i51 = c52;
    while (1) {
      int t54 = i51;
      int c55 = 3;
      _Bool c56 = ((t54 < c55)) ? 1 : 0;
      if (!c56) break;
      char* cast57 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      int t59 = i51;
      struct std__basic_ostream_char__std__char_traits_char__* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      char* cast61 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      int t63 = i51;
      long cast64 = (long)t63;
      int t65 = array248[cast64];
      struct std__basic_ostream_char__std__char_traits_char__* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      char* cast67 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
    for_step53: ;
      int t69 = i51;
      int u70 = t69 + 1;
      i51 = u70;
    }
  char* cast71 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std72;
  __VERIFIER_nondet_memory(&std72, sizeof(std72));
    int j73;
    int c74 = 0;
    j73 = c74;
    while (1) {
      int t76 = j73;
      int c77 = 3;
      _Bool c78 = ((t76 < c77)) ? 1 : 0;
      if (!c78) break;
      char* cast79 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      int t81 = j73;
      struct std__basic_ostream_char__std__char_traits_char__* std82;
      __VERIFIER_nondet_memory(&std82, sizeof(std82));
      char* cast83 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std84;
      __VERIFIER_nondet_memory(&std84, sizeof(std84));
      int c85 = 5;
      int t86 = j73;
      long cast87 = (long)t86;
      int t88 = array248[cast87];
      int b89 = t88 + c85;
      array248[cast87] = b89;
      struct std__basic_ostream_char__std__char_traits_char__* std90;
      __VERIFIER_nondet_memory(&std90, sizeof(std90));
      char* cast91 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std92;
      __VERIFIER_nondet_memory(&std92, sizeof(std92));
    for_step75: ;
      int t93 = j73;
      int u94 = t93 + 1;
      j73 = u94;
    }
  return;
}

// function: main
int main() {
bb95:
  int __retval96;
  int c97 = 0;
  __retval96 = c97;
  char* cast98 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std99;
  __VERIFIER_nondet_memory(&std99, sizeof(std99));
  staticArrayInit();
  automaticArrayInit();
  char* cast100 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std101;
  __VERIFIER_nondet_memory(&std101, sizeof(std101));
  staticArrayInit();
  automaticArrayInit();
  struct std__basic_ostream_char__std__char_traits_char__* std102;
  __VERIFIER_nondet_memory(&std102, sizeof(std102));
  int c103 = 0;
  __retval96 = c103;
  int t104 = __retval96;
  return t104;
}

