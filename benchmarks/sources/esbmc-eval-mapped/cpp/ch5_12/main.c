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
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[30] = "Data items in original order\n";
char _str_1[32] = "\nData items in ascending order\n";
void swap(int* p0, int* p1);
void bubbleSort(int* p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z4swapPiS_
void swap(int* v0, int* v1) {
bb2:
  int* element1Ptr3;
  int* element2Ptr4;
  int hold5;
  element1Ptr3 = v0;
  element2Ptr4 = v1;
  int* t6 = element1Ptr3;
  int t7 = *t6;
  hold5 = t7;
  int* t8 = element2Ptr4;
  int t9 = *t8;
  int* t10 = element1Ptr3;
  *t10 = t9;
  int t11 = hold5;
  int* t12 = element2Ptr4;
  *t12 = t11;
  return;
}

// function: _Z10bubbleSortPii
void bubbleSort(int* v13, int v14) {
bb15:
  int* array16;
  int size17;
  array16 = v13;
  size17 = v14;
    int pass18;
    int c19 = 0;
    pass18 = c19;
    while (1) {
      int t21 = pass18;
      int t22 = size17;
      int c23 = 1;
      int b24 = t22 - c23;
      _Bool c25 = ((t21 < b24)) ? 1 : 0;
      if (!c25) break;
        int k26;
        int c27 = 0;
        k26 = c27;
        while (1) {
          int t29 = k26;
          int t30 = size17;
          int c31 = 1;
          int b32 = t30 - c31;
          _Bool c33 = ((t29 < b32)) ? 1 : 0;
          if (!c33) break;
            int t34 = k26;
            long cast35 = (long)t34;
            int* t36 = array16;
            int* ptr37 = &(t36)[cast35];
            int t38 = *ptr37;
            int t39 = k26;
            int c40 = 1;
            int b41 = t39 + c40;
            long cast42 = (long)b41;
            int* t43 = array16;
            int* ptr44 = &(t43)[cast42];
            int t45 = *ptr44;
            _Bool c46 = ((t38 > t45)) ? 1 : 0;
            if (c46) {
              int t47 = k26;
              long cast48 = (long)t47;
              int* t49 = array16;
              int* ptr50 = &(t49)[cast48];
              int t51 = k26;
              int c52 = 1;
              int b53 = t51 + c52;
              long cast54 = (long)b53;
              int* t55 = array16;
              int* ptr56 = &(t55)[cast54];
              swap(ptr50, ptr56);
            }
        for_step28: ;
          int t57 = k26;
          int u58 = t57 + 1;
          k26 = u58;
        }
    for_step20: ;
      int t59 = pass18;
      int u60 = t59 + 1;
      pass18 = u60;
    }
  return;
}

// function: main
int main() {
bb61:
  int __retval62;
  int arraySize63;
  int a64[10];
  int c65 = 0;
  __retval62 = c65;
  int c66 = 10;
  arraySize63 = c66;
  // array copy
  __builtin_memcpy(a64, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast67 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
    int i69;
    struct std___Setw agg_tmp070;
    int c71 = 0;
    i69 = c71;
    while (1) {
      int t73 = i69;
      int t74 = arraySize63;
      _Bool c75 = ((t73 < t74)) ? 1 : 0;
      if (!c75) break;
      int c76 = 4;
      struct std___Setw std77;
      __VERIFIER_nondet_memory(&std77, sizeof(std77));
      agg_tmp070 = std77;
      struct std___Setw t78 = agg_tmp070;
      struct std__basic_ostream_char__std__char_traits_char__* std79;
      __VERIFIER_nondet_memory(&std79, sizeof(std79));
      int t80 = i69;
      long cast81 = (long)t80;
      int t82 = a64[cast81];
      struct std__basic_ostream_char__std__char_traits_char__* std83;
      __VERIFIER_nondet_memory(&std83, sizeof(std83));
    for_step72: ;
      int t84 = i69;
      int u85 = t84 + 1;
      i69 = u85;
    }
  int* cast86 = (int*)&(a64);
  int t87 = arraySize63;
  bubbleSort(cast86, t87);
  char* cast88 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std89;
  __VERIFIER_nondet_memory(&std89, sizeof(std89));
    int j90;
    struct std___Setw agg_tmp191;
    int c92 = 0;
    j90 = c92;
    while (1) {
      int t94 = j90;
      int t95 = arraySize63;
      _Bool c96 = ((t94 < t95)) ? 1 : 0;
      if (!c96) break;
      int c97 = 4;
      struct std___Setw std98;
      __VERIFIER_nondet_memory(&std98, sizeof(std98));
      agg_tmp191 = std98;
      struct std___Setw t99 = agg_tmp191;
      struct std__basic_ostream_char__std__char_traits_char__* std100;
      __VERIFIER_nondet_memory(&std100, sizeof(std100));
      int t101 = j90;
      long cast102 = (long)t101;
      int t103 = a64[cast102];
      struct std__basic_ostream_char__std__char_traits_char__* std104;
      __VERIFIER_nondet_memory(&std104, sizeof(std104));
    for_step93: ;
      int t105 = j90;
      int u106 = t105 + 1;
      j90 = u106;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std107;
  __VERIFIER_nondet_memory(&std107, sizeof(std107));
  int c108 = 0;
  __retval62 = c108;
  int t109 = __retval62;
  return t109;
}

