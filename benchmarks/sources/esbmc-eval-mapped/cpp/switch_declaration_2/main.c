char _str[2] = "0";
char _str_1[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/switch_declaration_2/main.cpp";
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
    int x3;
    int c4 = 5;
    x3 = c4;
    int t5 = x3;
    switch (t5) {
    case 0: ;
      char* cast6 = (char*)&(_str);
      char* c7 = (char*)_str_1;
      unsigned int c8 = 15;
      char* cast9 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast6, c7, c8, cast9);
      break;
    case 1: ;
      char* cast10 = (char*)&(_str);
      char* c11 = (char*)_str_1;
      unsigned int c12 = 19;
      char* cast13 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast10, c11, c12, cast13);
      break;
    default: ;
      break;
    }
  int c14 = 0;
  __retval1 = c14;
  int t15 = __retval1;
  return t15;
}

