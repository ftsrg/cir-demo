// Struct definitions (auto-parsed)
struct A_TWO__argt_ { unsigned int v; };

char _str[11] = "a.v == TWO";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates32/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void A__argt_1__argt___A(struct A_TWO__argt_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1AIL4argt1ES0_EC2Ev
void A__argt_1__argt___A(struct A_TWO__argt_* v0) {
bb1:
  struct A_TWO__argt_* this2;
  this2 = v0;
  struct A_TWO__argt_* t3 = this2;
  unsigned int c4 = 1;
  t3->v = c4;
  return;
}

// function: main
int main() {
bb5:
  int __retval6;
  struct A_TWO__argt_ a7;
  int c8 = 0;
  __retval6 = c8;
  A__argt_1__argt___A(&a7);
  unsigned int t9 = a7.v;
  int cast10 = (int)t9;
  int c11 = 1;
  _Bool c12 = ((cast10 == c11)) ? 1 : 0;
  if (c12) {
  } else {
    char* cast13 = (char*)&(_str);
    char* c14 = _str_1;
    unsigned int c15 = 23;
    char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast13, c14, c15, cast16);
  }
  int c17 = 0;
  __retval6 = c17;
  int t18 = __retval6;
  return t18;
}

