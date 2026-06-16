// Struct definitions (auto-parsed)
struct a { int b; };

int f __attribute__((aligned(4))) = 42;
char _str[10] = "a.b == 11";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/unnamed-parameter-fail/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void a__a(struct a* p0, int p1, int* p2);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1aC2EiPi
void a__a(struct a* v0, int v1, int* v2) {
bb3: ;
  struct a* this4;
  int unnamed5;
  int* c6;
  this4 = v0;
  unnamed5 = v1;
  c6 = v2;
  struct a* t7 = this4;
  int* t8 = c6;
  int t9 = *t8;
  t7->b = t9;
  return;
}

// function: main
int main() {
bb10: ;
  int __retval11;
  struct a a12;
  int c13 = 0;
  __retval11 = c13;
  int c14 = 0;
  a__a(&a12, c14, &f);
  int t15 = a12.b;
  int c16 = 11;
  _Bool c17 = ((t15 == c16)) ? 1 : 0;
  if (c17) {
  } else {
    char* cast18 = (char*)&(_str);
    char* c19 = (char*)_str_1;
    unsigned int c20 = 21;
    char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast18, c19, c20, cast21);
  }
  int t22 = __retval11;
  return t22;
}

