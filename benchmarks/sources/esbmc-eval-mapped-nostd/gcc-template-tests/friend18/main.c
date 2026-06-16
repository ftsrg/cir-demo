// Struct definitions (auto-parsed)
struct X_1234_ { unsigned char __field0; };

struct X_1234_ bring;
char _str[38] = "0 == ( foo<5678> (bring) != 12345678)";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/friend18/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int int_foo_5678_(struct X_1234_* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z3fooILi5678EEiRK1XILi1234EE
int int_foo_5678_(struct X_1234_* v0) {
bb1: ;
  struct X_1234_* unnamed2;
  int __retval3;
  unnamed2 = v0;
  int c4 = 1234;
  int c5 = 10000;
  int b6 = c4 * c5;
  int c7 = 5678;
  int b8 = b6 + c7;
  __retval3 = b8;
  int t9 = __retval3;
  return t9;
}

// function: main
int main() {
bb10: ;
  int __retval11;
  int c12 = 0;
  __retval11 = c12;
  int c13 = 0;
  int r14 = int_foo_5678_(&bring);
  int c15 = 12345678;
  _Bool c16 = ((r14 != c15)) ? 1 : 0;
  int cast17 = (int)c16;
  _Bool c18 = ((c13 == cast17)) ? 1 : 0;
  if (c18) {
  } else {
    char* cast19 = (char*)&(_str);
    char* c20 = (char*)_str_1;
    unsigned int c21 = 26;
    char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast19, c20, c21, cast22);
  }
  int t23 = __retval11;
  return t23;
}

