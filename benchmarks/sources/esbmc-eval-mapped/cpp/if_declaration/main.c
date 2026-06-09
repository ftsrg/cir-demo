char _str[5] = "a==5";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/if_declaration/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int a2;
  int c3 = 0;
  __retval1 = c3;
  int c4 = 0;
  a2 = c4;
    int x5;
    int c6 = 6;
    x5 = c6;
    int t7 = x5;
    _Bool cast8 = (_Bool)t7;
    if (cast8) {
      int c9 = 5;
      a2 = c9;
    }
  int t10 = a2;
  int c11 = 5;
  _Bool c12 = ((t10 == c11)) ? 1 : 0;
  if (c12) {
  } else {
    char* cast13 = (char*)&(_str);
    char* c14 = _str_1;
    unsigned int c15 = 17;
    char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast13, c14, c15, cast16);
  }
  int c17 = 0;
  __retval1 = c17;
  int t18 = __retval1;
  return t18;
}

