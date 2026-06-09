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

char __const_main_c[6] = "HELLO";
double __const_main_b[7] = {0x1.199999999999ap0, 0x1.199999999999ap1, 0x1.a666666666666p1, 0x1.199999999999ap2, 0x1.6p2, 0x1.a666666666666p2, 0x1.ecccccccccccdp2};
int __const_main_a[5] = {1, 2, 3, 4, 5};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "Array a contains:";
char _str_1[18] = "Array b contains:";
char _str_2[18] = "Array c contains:";
char _str_3[2] = " ";
void void_printArray_int_(int* p0, int p1);
void void_printArray_double_(double* p0, int p1);
void void_printArray_char_(char* p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10printArrayIiEvPKT_i
void void_printArray_int_(int* v0, int v1) {
bb2:
  int* array3;
  int count4;
  array3 = v0;
  count4 = v1;
    int i5;
    int c6 = 0;
    i5 = c6;
    while (1) {
      int t8 = i5;
      int t9 = count4;
      _Bool c10 = ((t8 < t9)) ? 1 : 0;
      if (!c10) break;
      int t11 = i5;
      long cast12 = (long)t11;
      int* t13 = array3;
      int* ptr14 = &(t13)[cast12];
      int t15 = *ptr14;
      struct std__basic_ostream_char__std__char_traits_char__* std16;
      __VERIFIER_nondet_memory(&std16, sizeof(std16));
      char* cast17 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
    for_step7: ;
      int t19 = i5;
      int u20 = t19 + 1;
      i5 = u20;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  return;
}

// function: _Z10printArrayIdEvPKT_i
void void_printArray_double_(double* v22, int v23) {
bb24:
  double* array25;
  int count26;
  array25 = v22;
  count26 = v23;
    int i27;
    int c28 = 0;
    i27 = c28;
    while (1) {
      int t30 = i27;
      int t31 = count26;
      _Bool c32 = ((t30 < t31)) ? 1 : 0;
      if (!c32) break;
      int t33 = i27;
      long cast34 = (long)t33;
      double* t35 = array25;
      double* ptr36 = &(t35)[cast34];
      double t37 = *ptr36;
      struct std__basic_ostream_char__std__char_traits_char__* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      char* cast39 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
    for_step29: ;
      int t41 = i27;
      int u42 = t41 + 1;
      i27 = u42;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  return;
}

// function: _Z10printArrayIcEvPKT_i
void void_printArray_char_(char* v44, int v45) {
bb46:
  char* array47;
  int count48;
  array47 = v44;
  count48 = v45;
    int i49;
    int c50 = 0;
    i49 = c50;
    while (1) {
      int t52 = i49;
      int t53 = count48;
      _Bool c54 = ((t52 < t53)) ? 1 : 0;
      if (!c54) break;
      int t55 = i49;
      long cast56 = (long)t55;
      char* t57 = array47;
      char* ptr58 = &(t57)[cast56];
      char t59 = *ptr58;
      struct std__basic_ostream_char__std__char_traits_char__* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      char* cast61 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
    for_step51: ;
      int t63 = i49;
      int u64 = t63 + 1;
      i49 = u64;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std65;
  __VERIFIER_nondet_memory(&std65, sizeof(std65));
  return;
}

// function: main
int main() {
bb66:
  int __retval67;
  int aCount68;
  int bCount69;
  int cCount70;
  int a71[5];
  double b72[7];
  char c73[6];
  int c74 = 0;
  __retval67 = c74;
  int c75 = 5;
  aCount68 = c75;
  int c76 = 7;
  bCount69 = c76;
  int c77 = 6;
  cCount70 = c77;
  // array copy
  __builtin_memcpy(a71, __const_main_a, (unsigned long)5 * sizeof(__const_main_a[0]));
  // array copy
  __builtin_memcpy(b72, __const_main_b, (unsigned long)7 * sizeof(__const_main_b[0]));
  // array copy
  __builtin_memcpy(c73, __const_main_c, (unsigned long)6 * sizeof(__const_main_c[0]));
  char* cast78 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std79;
  __VERIFIER_nondet_memory(&std79, sizeof(std79));
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  int* cast81 = (int*)&(a71);
  int t82 = aCount68;
  void_printArray_int_(cast81, t82);
  char* cast83 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std84;
  __VERIFIER_nondet_memory(&std84, sizeof(std84));
  struct std__basic_ostream_char__std__char_traits_char__* std85;
  __VERIFIER_nondet_memory(&std85, sizeof(std85));
  double* cast86 = (double*)&(b72);
  int t87 = bCount69;
  void_printArray_double_(cast86, t87);
  char* cast88 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std89;
  __VERIFIER_nondet_memory(&std89, sizeof(std89));
  struct std__basic_ostream_char__std__char_traits_char__* std90;
  __VERIFIER_nondet_memory(&std90, sizeof(std90));
  char* cast91 = (char*)&(c73);
  int t92 = cCount70;
  void_printArray_char_(cast91, t92);
  int c93 = 0;
  __retval67 = c93;
  int t94 = __retval67;
  return t94;
}

