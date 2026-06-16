char _str[2] = "0";
char _str_1[97] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch1_7/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0: ;
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    int c3 = 1;
    _Bool cast4 = (_Bool)c3;
    _Bool ternary5;
    if (cast4) {
      int c6 = 1;
      _Bool cast7 = (_Bool)c6;
      ternary5 = (_Bool)cast7;
    } else {
      _Bool c8 = 0;
      ternary5 = (_Bool)c8;
    }
    if (ternary5) {
      char* cast9 = (char*)&(_str);
      char* c10 = (char*)_str_1;
      unsigned int c11 = 13;
      char* cast12 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast9, c10, c11, cast12);
    }
  int c13 = 0;
  __retval1 = c13;
  int t14 = __retval1;
  return t14;
}

