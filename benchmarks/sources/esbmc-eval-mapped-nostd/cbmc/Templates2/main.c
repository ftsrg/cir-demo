// Struct definitions (auto-parsed)
struct int_array_3_ { int array[3]; };

char _str[14] = "a.array[0]==1";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  struct int_array_3_ a2;
  int c3 = 0;
  __retval1 = c3;
  int c4 = 1;
  long c5 = 0;
  a2.array[c5] = c4;
  long c6 = 0;
  int t7 = a2.array[c6];
  int c8 = 1;
  _Bool c9 = ((t7 == c8)) ? 1 : 0;
  if (c9) {
  } else {
    char* cast10 = (char*)&(_str);
    char* c11 = _str_1;
    unsigned int c12 = 22;
    char* cast13 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast10, c11, c12, cast13);
  }
  int t14 = __retval1;
  return t14;
}

