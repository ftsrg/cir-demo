char _str[7] = "k == 6";
char _str_1[118] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_template_function_01/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[8] = "n == 10";
int int_getMax_int_(int p0, int p1);
long long_getMax_long_(long p0, long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z6getMaxIiET_S0_S0_
int int_getMax_int_(int v0, int v1) {
bb2:
  int a3;
  int b4;
  int __retval5;
  int res6;
  a3 = v0;
  b4 = v1;
  int t7 = a3;
  int t8 = b4;
  _Bool c9 = ((t7 > t8)) ? 1 : 0;
  int ternary10;
  if (c9) {
    int t11 = a3;
    ternary10 = (int)t11;
  } else {
    int t12 = b4;
    ternary10 = (int)t12;
  }
  res6 = ternary10;
  int t13 = res6;
  __retval5 = t13;
  int t14 = __retval5;
  return t14;
}

// function: _Z6getMaxIlET_S0_S0_
long long_getMax_long_(long v15, long v16) {
bb17:
  long a18;
  long b19;
  long __retval20;
  long res21;
  a18 = v15;
  b19 = v16;
  long t22 = a18;
  long t23 = b19;
  _Bool c24 = ((t22 > t23)) ? 1 : 0;
  long ternary25;
  if (c24) {
    long t26 = a18;
    ternary25 = (long)t26;
  } else {
    long t27 = b19;
    ternary25 = (long)t27;
  }
  res21 = ternary25;
  long t28 = res21;
  __retval20 = t28;
  long t29 = __retval20;
  return t29;
}

// function: main
int main() {
bb30:
  int __retval31;
  int i32;
  int j33;
  int k34;
  long l35;
  long m36;
  long n37;
  int c38 = 0;
  __retval31 = c38;
  int c39 = 5;
  i32 = c39;
  int c40 = 6;
  j33 = c40;
  long c41 = 10;
  l35 = c41;
  long c42 = 5;
  m36 = c42;
  int t43 = i32;
  int t44 = j33;
  int r45 = int_getMax_int_(t43, t44);
  k34 = r45;
  long t46 = l35;
  long t47 = m36;
  long r48 = long_getMax_long_(t46, t47);
  n37 = r48;
  int t49 = k34;
  int c50 = 6;
  _Bool c51 = ((t49 == c50)) ? 1 : 0;
  if (c51) {
  } else {
    char* cast52 = (char*)&(_str);
    char* c53 = _str_1;
    unsigned int c54 = 23;
    char* cast55 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast52, c53, c54, cast55);
  }
  long t56 = n37;
  long c57 = 10;
  _Bool c58 = ((t56 == c57)) ? 1 : 0;
  if (c58) {
  } else {
    char* cast59 = (char*)&(_str_2);
    char* c60 = _str_1;
    unsigned int c61 = 24;
    char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast59, c60, c61, cast62);
  }
  int c63 = 0;
  __retval31 = c63;
  int t64 = __retval31;
  return t64;
}

