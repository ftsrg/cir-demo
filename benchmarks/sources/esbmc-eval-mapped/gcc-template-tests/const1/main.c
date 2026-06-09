// Struct definitions (auto-parsed)
struct Foo { unsigned char __field0; };

int barcnt __attribute__((aligned(4))) = 0;
char _str[2] = "0";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/const1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void bar();
void void_Foo__operator___void_____void___const__(struct Foo* p0, void* p1);
void void_Foo__operator___void________void____const__(struct Foo* p0, void** p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z3barv
void bar() {
bb0:
  int t1 = barcnt;
  int u2 = t1 + 1;
  *&barcnt = u2;
  return;
}

// function: _ZN3FooclIFvvEEEvRKT_
void void_Foo__operator___void_____void___const__(struct Foo* v3, void* v4) {
bb5:
  struct Foo* this6;
  void* fcn7;
  this6 = v3;
  fcn7 = v4;
  struct Foo* t8 = this6;
  void* t9 = fcn7;
  ((void (*)())t9)();
  return;
}

// function: _ZN3FooclIPFvvEEEvRKT_
void void_Foo__operator___void________void____const__(struct Foo* v10, void** v11) {
bb12:
  struct Foo* this13;
  void** fcn14;
  this13 = v10;
  fcn14 = v11;
  struct Foo* t15 = this13;
  void** t16 = fcn14;
  void* t17 = *t16;
  ((void (*)())t17)();
  return;
}

// function: main
int main() {
bb18:
  int __retval19;
  struct Foo myFoo20;
  void* ref_tmp021;
  int c22 = 0;
  __retval19 = c22;
  void_Foo__operator___void_____void___const__(&myFoo20, &bar);
  ref_tmp021 = &bar;
  void_Foo__operator___void________void____const__(&myFoo20, &ref_tmp021);
    int t23 = barcnt;
    int c24 = 2;
    _Bool c25 = ((t23 != c24)) ? 1 : 0;
    if (c25) {
      char* cast26 = (char*)&(_str);
      char* c27 = _str_1;
      unsigned int c28 = 35;
      char* cast29 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast26, c27, c28, cast29);
    }
  int t30 = __retval19;
  return t30;
}

