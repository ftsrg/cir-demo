// Struct definitions (auto-parsed)
struct A_int_ { int i; };

char _str[11] = "a2.i == 10";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates19/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "get_i<int>(a2) == 10";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int int_get_i_int_(struct A_int_ p0);
int main();

// function: _Z5get_iIiET_1AIS0_E
int int_get_i_int_(struct A_int_ v0) {
bb1: ;
  struct A_int_ a12;
  int __retval3;
  a12 = v0;
  int t4 = a12.i;
  __retval3 = t4;
  int t5 = __retval3;
  return t5;
}

// function: main
int main() {
bb6: ;
  int __retval7;
  struct A_int_ a28;
  struct A_int_ agg_tmp09;
  int c10 = 0;
  __retval7 = c10;
  int c11 = 10;
  a28.i = c11;
  int t12 = a28.i;
  int c13 = 10;
  _Bool c14 = ((t12 == c13)) ? 1 : 0;
  if (c14) {
  } else {
    char* cast15 = (char*)&(_str);
    char* c16 = (char*)_str_1;
    unsigned int c17 = 26;
    char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast15, c16, c17, cast18);
  }
  agg_tmp09 = a28; // copy
  struct A_int_ t19 = agg_tmp09;
  int r20 = int_get_i_int_(t19);
  int c21 = 10;
  _Bool c22 = ((r20 == c21)) ? 1 : 0;
  if (c22) {
  } else {
    char* cast23 = (char*)&(_str_2);
    char* c24 = (char*)_str_1;
    unsigned int c25 = 27;
    char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast23, c24, c25, cast26);
  }
  int t27 = __retval7;
  return t27;
}

