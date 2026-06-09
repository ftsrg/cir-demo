char __const_main_c[6] = "HELLO";
double __const_main_b[7] = {0x1.199999999999ap0, 0x1.199999999999ap1, 0x1.a666666666666p1, 0x1.199999999999ap2, 0x1.6p2, 0x1.a666666666666p2, 0x1.ecccccccccccdp2};
int __const_main_a[5] = {1, 2, 3, 4, 5};
void void_printArray_int_(int* p0, int p1);
void void_printArray_double_(double* p0, int p1);
void void_printArray_char_(char* p0, int p1);
int main();

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
      _Bool c10 = ((t8 <= t9)) ? 1 : 0;
      if (!c10) break;
      int t11 = i5;
      long cast12 = (long)t11;
      int* t13 = array3;
      int* ptr14 = &(t13)[cast12];
    for_step7: ;
      int t15 = i5;
      int u16 = t15 + 1;
      i5 = u16;
    }
  return;
}

// function: _Z10printArrayIdEvPKT_i
void void_printArray_double_(double* v17, int v18) {
bb19:
  double* array20;
  int count21;
  array20 = v17;
  count21 = v18;
    int i22;
    int c23 = 0;
    i22 = c23;
    while (1) {
      int t25 = i22;
      int t26 = count21;
      _Bool c27 = ((t25 <= t26)) ? 1 : 0;
      if (!c27) break;
      int t28 = i22;
      long cast29 = (long)t28;
      double* t30 = array20;
      double* ptr31 = &(t30)[cast29];
    for_step24: ;
      int t32 = i22;
      int u33 = t32 + 1;
      i22 = u33;
    }
  return;
}

// function: _Z10printArrayIcEvPKT_i
void void_printArray_char_(char* v34, int v35) {
bb36:
  char* array37;
  int count38;
  array37 = v34;
  count38 = v35;
    int i39;
    int c40 = 0;
    i39 = c40;
    while (1) {
      int t42 = i39;
      int t43 = count38;
      _Bool c44 = ((t42 <= t43)) ? 1 : 0;
      if (!c44) break;
      int t45 = i39;
      long cast46 = (long)t45;
      char* t47 = array37;
      char* ptr48 = &(t47)[cast46];
    for_step41: ;
      int t49 = i39;
      int u50 = t49 + 1;
      i39 = u50;
    }
  return;
}

// function: main
int main() {
bb51:
  int __retval52;
  int aCount53;
  int bCount54;
  int cCount55;
  int a56[5];
  double b57[7];
  char c58[6];
  int c59 = 0;
  __retval52 = c59;
  int c60 = 5;
  aCount53 = c60;
  int c61 = 7;
  bCount54 = c61;
  int c62 = 6;
  cCount55 = c62;
  // array copy
  __builtin_memcpy(a56, __const_main_a, (unsigned long)5 * sizeof(__const_main_a[0]));
  // array copy
  __builtin_memcpy(b57, __const_main_b, (unsigned long)7 * sizeof(__const_main_b[0]));
  // array copy
  __builtin_memcpy(c58, __const_main_c, (unsigned long)6 * sizeof(__const_main_c[0]));
  int* cast63 = (int*)&(a56);
  int t64 = aCount53;
  void_printArray_int_(cast63, t64);
  double* cast65 = (double*)&(b57);
  int t66 = bCount54;
  void_printArray_double_(cast65, t66);
  char* cast67 = (char*)&(c58);
  int t68 = cCount55;
  void_printArray_char_(cast67, t68);
  int c69 = 0;
  __retval52 = c69;
  int t70 = __retval52;
  return t70;
}

