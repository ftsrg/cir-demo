char _str[7] = "c!=a+b";
char _str_1[84] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_6/main.cpp";
char _str_2[11] = "int main()";
// function: _Z10nondet_intv
int nondet_int();

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int __retval4;
  int a5;
  int b6;
  int c7;
  int r8 = nondet_int();
  a5 = r8;
  int r9 = nondet_int();
  b6 = r9;
  int t10 = a5;
  int t11 = b6;
  int b12 = t10 + t11;
  c7 = b12;
  int t13 = c7;
  int t14 = a5;
  int t15 = b6;
  int b16 = t14 + t15;
  _Bool c17 = (t13 != b16) ? 1 : 0;
  if (c17) goto bb1; else goto bb2;
bb1:
  int c18 = 0;
  goto bb3;
bb2:
  char* cast19 = (char*)_str;
