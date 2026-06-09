char _str[7] = "0 == 1";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/spec21/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[7] = "0 == 2";
char _str_3[7] = "0 == 3";
int int_f_int_(int p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int int_checked_cast_int__int__2(int* p0);
int int_checked_cast_int__int_(int* p0);
int main();

// function: _Z1fIiET_i
int int_f_int_(int v0) {
bb1:
  int unnamed2;
  int __retval3;
  unnamed2 = v0;
  int c4 = 0;
  __retval3 = c4;
  int t5 = __retval3;
  return t5;
}

// function: _Z12checked_castIiiET_RKT0_
int int_checked_cast_int__int__2(int* v6) {
bb7:
  int* unnamed8;
  int __retval9;
  unnamed8 = v6;
  int c10 = 0;
  __retval9 = c10;
  int t11 = __retval9;
  return t11;
}

// function: _Z12checked_castIiiET_PT0_
int int_checked_cast_int__int_(int* v12) {
bb13:
  int* unnamed14;
  int __retval15;
  unnamed14 = v12;
  int c16 = 1;
  __retval15 = c16;
  int t17 = __retval15;
  return t17;
}

// function: main
int main() {
bb18:
  int __retval19;
  int i20;
  int c21 = 0;
  __retval19 = c21;
  int c22 = 0;
  i20 = c22;
    int c23 = 1;
    int r24 = int_f_int_(c23);
    _Bool cast25 = (_Bool)r24;
    if (cast25) {
      char* cast26 = (char*)&(_str);
      char* c27 = _str_1;
      unsigned int c28 = 27;
      char* cast29 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast26, c27, c28, cast29);
    }
    int r30 = int_checked_cast_int__int__2(&i20);
    int c31 = 0;
    _Bool c32 = ((r30 != c31)) ? 1 : 0;
    if (c32) {
      char* cast33 = (char*)&(_str_2);
      char* c34 = _str_1;
      unsigned int c35 = 30;
      char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast33, c34, c35, cast36);
    }
    int r37 = int_checked_cast_int__int_(&i20);
    int c38 = 1;
    _Bool c39 = ((r37 != c38)) ? 1 : 0;
    if (c39) {
      char* cast40 = (char*)&(_str_3);
      char* c41 = _str_1;
      unsigned int c42 = 33;
      char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast40, c41, c42, cast43);
    }
  int t44 = __retval19;
  return t44;
}

