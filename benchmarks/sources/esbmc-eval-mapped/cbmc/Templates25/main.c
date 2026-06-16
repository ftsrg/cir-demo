char _str[16] = "(True<int,0>())";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates25/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
_Bool bool_True_int__0_();
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z4TrueIiLi0EEbv
_Bool bool_True_int__0_() {
bb0: ;
  _Bool __retval1;
  _Bool c2 = 1;
  __retval1 = c2;
  _Bool t3 = __retval1;
  return t3;
}

// function: main
int main() {
bb4: ;
  int __retval5;
  int c6 = 0;
  __retval5 = c6;
  _Bool r7 = bool_True_int__0_();
  if (r7) {
  } else {
    char* cast8 = (char*)&(_str);
    char* c9 = (char*)_str_1;
    unsigned int c10 = 15;
    char* cast11 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast8, c9, c10, cast11);
  }
  int t12 = __retval5;
  return t12;
}

