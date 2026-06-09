char _str[6] = "v==10";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates8/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int A_int___some_function(int p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1AIiE13some_functionEi
int A_int___some_function(int v0) {
bb1:
  int v2;
  int __retval3;
  v2 = v0;
  int t4 = v2;
  __retval3 = t4;
  int t5 = __retval3;
  return t5;
}

// function: main
int main() {
bb6:
  int __retval7;
  int v8;
  int c9 = 0;
  __retval7 = c9;
  int c10 = 10;
  int r11 = A_int___some_function(c10);
  v8 = r11;
  int t12 = v8;
  int c13 = 10;
  _Bool c14 = ((t12 == c13)) ? 1 : 0;
  if (c14) {
  } else {
    char* cast15 = (char*)&(_str);
    char* c16 = _str_1;
    unsigned int c17 = 19;
    char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast15, c16, c17, cast18);
  }
  int t19 = __retval7;
  return t19;
}

