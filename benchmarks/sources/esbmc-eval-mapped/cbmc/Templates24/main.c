// Struct definitions (auto-parsed)
struct A_int_ { unsigned char __field0; };

char _str[17] = "a.True() == true";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates24/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
_Bool A_int___True(struct A_int_* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1AIiE4TrueEv
_Bool A_int___True(struct A_int_* v0) {
bb1: ;
  struct A_int_* this2;
  _Bool __retval3;
  this2 = v0;
  struct A_int_* t4 = this2;
  _Bool c5 = 1;
  __retval3 = c5;
  _Bool t6 = __retval3;
  return t6;
}

// function: main
int main() {
bb7: ;
  int __retval8;
  struct A_int_ a9;
  int c10 = 0;
  __retval8 = c10;
  _Bool r11 = A_int___True(&a9);
  int cast12 = (int)r11;
  _Bool c13 = 1;
  int cast14 = (int)c13;
  _Bool c15 = ((cast12 == cast14)) ? 1 : 0;
  if (c15) {
  } else {
    char* cast16 = (char*)&(_str);
    char* c17 = (char*)_str_1;
    unsigned int c18 = 21;
    char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast16, c17, c18, cast19);
  }
  int t20 = __retval8;
  return t20;
}

