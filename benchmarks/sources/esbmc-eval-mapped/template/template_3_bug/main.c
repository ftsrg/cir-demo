// Struct definitions (auto-parsed)
struct FixedArray25_float__char_ { float anValue[25]; };

char _str[28] = "sMyArray.anValue[10] == 5.0";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/template/template_3_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[29] = "sMyArray.anValue[15] == 10.0";
char _str_3[28] = "sMyArray.anValue[10] != 5.0";
float* float__Value_float__char_(struct FixedArray25_float__char_* p0, int p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z5ValueIfcERT_R12FixedArray25IS0_T0_Ei
float* float__Value_float__char_(struct FixedArray25_float__char_* v0, int v1) {
bb2: ;
  struct FixedArray25_float__char_* rArray3;
  int nIndex4;
  float* __retval5;
  rArray3 = v0;
  nIndex4 = v1;
  int t6 = nIndex4;
  long cast7 = (long)t6;
  struct FixedArray25_float__char_* t8 = rArray3;
  __retval5 = &t8->anValue[cast7];
  float* t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10: ;
  int __retval11;
  struct FixedArray25_float__char_ sMyArray12;
  int c13 = 0;
  __retval11 = c13;
  double c14 = 0x1.4p2;
  float cast15 = (float)c14;
  int c16 = 10;
  float* r17 = float__Value_float__char_(&sMyArray12, c16);
  *r17 = cast15;
  long c18 = 10;
  float t19 = sMyArray12.anValue[c18];
  double cast20 = (double)t19;
  double c21 = 0x1.4p2;
  _Bool c22 = ((cast20 == c21)) ? 1 : 0;
  if (c22) {
  } else {
    char* cast23 = (char*)&(_str);
    char* c24 = (char*)_str_1;
    unsigned int c25 = 33;
    char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast23, c24, c25, cast26);
  }
  double c27 = 0x1.4p3;
  float cast28 = (float)c27;
  int c29 = 15;
  float* r30 = float__Value_float__char_(&sMyArray12, c29);
  *r30 = cast28;
  long c31 = 15;
  float t32 = sMyArray12.anValue[c31];
  double cast33 = (double)t32;
  double c34 = 0x1.4p3;
  _Bool c35 = ((cast33 == c34)) ? 1 : 0;
  if (c35) {
  } else {
    char* cast36 = (char*)&(_str_2);
    char* c37 = (char*)_str_1;
    unsigned int c38 = 35;
    char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast36, c37, c38, cast39);
  }
  long c40 = 10;
  float t41 = sMyArray12.anValue[c40];
  double cast42 = (double)t41;
  double c43 = 0x1.4p2;
  _Bool c44 = ((cast42 != c43)) ? 1 : 0;
  if (c44) {
  } else {
    char* cast45 = (char*)&(_str_3);
    char* c46 = (char*)_str_1;
    unsigned int c47 = 36;
    char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast45, c46, c47, cast48);
  }
  int c49 = 0;
  __retval11 = c49;
  int t50 = __retval11;
  return t50;
}

