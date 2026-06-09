// Struct definitions (auto-parsed)
struct Z_FF_ { int some; };

struct Z_FF_ z __attribute__((aligned(4)));
char _str[11] = "z.some==36";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates36/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
  int c3 = 36;
  (&z)->some = c3;
  int t4 = (&z)->some;
  int c5 = 36;
  _Bool c6 = ((t4 == c5)) ? 1 : 0;
  if (c6) {
  } else {
    char* cast7 = (char*)&(_str);
    char* c8 = _str_1;
    unsigned int c9 = 42;
    char* cast10 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast7, c8, c9, cast10);
  }
  int c11 = 0;
  __retval1 = c11;
  int t12 = __retval1;
  return t12;
}

