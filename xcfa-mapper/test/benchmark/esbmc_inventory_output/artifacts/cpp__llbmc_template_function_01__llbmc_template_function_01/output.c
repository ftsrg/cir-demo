char _str[7] = "k == 6";
char _str_1[105] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/llbmc_template_function_01/main.cpp";
char _str_2[11] = "int main()";
char _str_3[8] = "n == 10";
// function: _Z6getMaxIiET_S0_S0_
int int_getMax_int_(int v0, int v1) {
  int v2;
bb3:
  int a7;
  int b8;
  int __retval9;
  int res10;
  a7 = v0;
  b8 = v1;
  int t11 = a7;
  int t12 = b8;
  _Bool c13 = (t11 > t12) ? 1 : 0;
  if (c13) goto bb4; else goto bb5;
bb4:
  int t14 = a7;
  v2 = t14;
  goto bb6;
bb5:
  int t15 = b8;
  v2 = t15;
  goto bb6;
bb6:
  res10 = v2;
  int t16 = res10;
  __retval9 = t16;
  int t17 = __retval9;
  return t17;
}

// function: _Z6getMaxIlET_S0_S0_
long long long_getMax_long_(long long v18, long long v19) {
  long long v20;
bb21:
  long long a25;
  long long b26;
  long long __retval27;
  long long res28;
  a25 = v18;
  b26 = v19;
  long long t29 = a25;
  long long t30 = b26;
  _Bool c31 = (t29 > t30) ? 1 : 0;
  if (c31) goto bb22; else goto bb23;
bb22:
  long long t32 = a25;
  v20 = t32;
  goto bb24;
bb23:
  long long t33 = b26;
  v20 = t33;
  goto bb24;
bb24:
  res28 = v20;
  long long t34 = res28;
  __retval27 = t34;
  long long t35 = __retval27;
  return t35;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb36:
  int __retval43;
  int i44;
  int j45;
  int k46;
  long long l47;
  long long m48;
  long long n49;
  int c50 = 5;
  i44 = c50;
  int c51 = 6;
  j45 = c51;
  int c52 = 10;
  long long cast53 = (long long)c52;
  l47 = cast53;
  int c54 = 5;
  long long cast55 = (long long)c54;
  m48 = cast55;
  int t56 = i44;
  int t57 = j45;
  int r58 = int_getMax_int_(t56, t57);
  k46 = r58;
  long long t59 = l47;
  long long t60 = m48;
  long long r61 = long_getMax_long_(t59, t60);
  n49 = r61;
  int t62 = k46;
  int c63 = 6;
  _Bool c64 = (t62 == c63) ? 1 : 0;
  if (c64) goto bb37; else goto bb38;
bb37:
  int c65 = 0;
  goto bb39;
bb38:
  char* cast66 = (char*)_str;
