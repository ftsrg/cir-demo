char _str[8] = "z==1.0f";
char _str_1[111] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/template_function_specialization/main.cpp";
char _str_2[11] = "int main()";
char _str_3[7] = "y==3.0";
char _str_4[5] = "x==2";
// function: _Z5testeIiET_S0_S0_S0_
int int_teste_int_(int v0, int v1, int v2) {
bb3:
  int value14;
  int value25;
  int value36;
  int __retval7;
  value14 = v0;
  value25 = v1;
  value36 = v2;
  int t8 = value25;
  __retval7 = t8;
  int t9 = __retval7;
  return t9;
}

// function: _Z5testeIdET_S0_S0_S0_
double double_teste_double_(double v10, double v11, double v12) {
bb13:
  double value114;
  double value215;
  double value316;
  double __retval17;
  value114 = v10;
  value215 = v11;
  value316 = v12;
  double t18 = value316;
  __retval17 = t18;
  double t19 = __retval17;
  return t19;
}

// function: _Z5testeIfET_S0_S0_S0_
float float_teste_float_(float v20, float v21, float v22) {
bb23:
  float value124;
  float value225;
  float value326;
  float __retval27;
  value124 = v20;
  value225 = v21;
  value326 = v22;
  float t28 = value124;
  __retval27 = t28;
  float t29 = __retval27;
  return t29;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb30:
  int __retval40;
  float z41;
  double y42;
  int x43;
  float c44 = 1;
  float c45 = 2;
  float c46 = 3;
  float r47 = float_teste_float_(c44, c45, c46);
  z41 = r47;
  float t48 = z41;
  float c49 = 1;
  _Bool c50 = (t48 == c49) ? 1 : 0;
  if (c50) goto bb31; else goto bb32;
bb31:
  int c51 = 0;
  goto bb33;
bb32:
  char* cast52 = (char*)_str;
