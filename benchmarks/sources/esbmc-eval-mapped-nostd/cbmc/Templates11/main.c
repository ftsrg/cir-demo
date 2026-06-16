// Struct definitions (auto-parsed)
struct Test_int_ { unsigned char __field0; };

char _str[13] = "t1.f()==true";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates11/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
_Bool bool_func_int_(int p0);
_Bool Test_int___f(struct Test_int_* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z4funcIiEbT_
_Bool bool_func_int_(int v0) {
bb1: ;
  int t2;
  _Bool __retval3;
  t2 = v0;
  _Bool c4 = 1;
  __retval3 = c4;
  _Bool t5 = __retval3;
  return t5;
}

// function: _ZN4TestIiE1fEv
_Bool Test_int___f(struct Test_int_* v6) {
bb7: ;
  struct Test_int_* this8;
  _Bool __retval9;
  int a10;
  this8 = v6;
  struct Test_int_* t11 = this8;
  int t12 = a10;
  _Bool r13 = bool_func_int_(t12);
  __retval9 = r13;
  _Bool t14 = __retval9;
  return t14;
}

// function: main
int main() {
bb15: ;
  int __retval16;
  struct Test_int_ t117;
  int c18 = 0;
  __retval16 = c18;
  _Bool r19 = Test_int___f(&t117);
  int cast20 = (int)r19;
  _Bool c21 = 1;
  int cast22 = (int)c21;
  _Bool c23 = ((cast20 == cast22)) ? 1 : 0;
  if (c23) {
  } else {
    char* cast24 = (char*)&(_str);
    char* c25 = (char*)_str_1;
    unsigned int c26 = 30;
    char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast24, c25, c26, cast27);
  }
  int t28 = __retval16;
  return t28;
}

