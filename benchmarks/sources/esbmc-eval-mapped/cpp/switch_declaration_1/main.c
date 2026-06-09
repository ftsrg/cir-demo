char _str[2] = "0";
char _str_1[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/switch_declaration_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    int x3;
    int c4 = 0;
    x3 = c4;
    int t5 = x3;
    switch (t5) {
    case 0:
      break;
    case 1:
      char* cast6 = (char*)&(_str);
      char* c7 = _str_1;
      unsigned int c8 = 18;
      char* cast9 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast6, c7, c8, cast9);
      break;
    default:
      char* cast10 = (char*)&(_str);
      char* c11 = _str_1;
      unsigned int c12 = 22;
      char* cast13 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast10, c11, c12, cast13);
      break;
    }
  int c14 = 0;
  __retval1 = c14;
  int t15 = __retval1;
  return t15;
}

