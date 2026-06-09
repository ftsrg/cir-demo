char _str[20] = "0 == ( Foo (array))";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/deduce1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int _ZZ4mainE5array[4] __attribute__((aligned(16)));
int int_Foo_int__4ul__int_const_(int* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z3FooIiLm4EEiRAT0__KT_
int int_Foo_int__4ul__int_const_(int* v0) {
bb1:
  int* ref2;
  int __retval3;
  ref2 = v0;
  int c4 = 0;
  __retval3 = c4;
  int t5 = __retval3;
  return t5;
}

// function: main
int main() {
bb6:
  int __retval7;
  int c8 = 0;
  __retval7 = c8;
  int c9 = 0;
  int r10 = int_Foo_int__4ul__int_const_(_ZZ4mainE5array);
  _Bool c11 = ((c9 == r10)) ? 1 : 0;
  if (c11) {
  } else {
    char* cast12 = (char*)&(_str);
    char* c13 = _str_1;
    unsigned int c14 = 32;
    char* cast15 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast12, c13, c14, cast15);
  }
  int t16 = __retval7;
  return t16;
}

