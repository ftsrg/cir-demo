// Struct definitions (auto-parsed)
struct Add_HoldInt_1___HoldInt__1__ { unsigned char __field0; };
struct Add_HoldInt_1___HoldInt__2__ { unsigned char __field0; };

char _str[2] = "0";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/partial1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int Add_HoldInt_1___HoldInt__1_____f(struct Add_HoldInt_1___HoldInt__1__* p0);
int Add_HoldInt_1___HoldInt__2_____f(struct Add_HoldInt_1___HoldInt__2__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN3AddI7HoldIntILi1EES0_ILin1EEE1fEv
int Add_HoldInt_1___HoldInt__1_____f(struct Add_HoldInt_1___HoldInt__1__* v0) {
bb1:
  struct Add_HoldInt_1___HoldInt__1__* this2;
  int __retval3;
  this2 = v0;
  struct Add_HoldInt_1___HoldInt__1__* t4 = this2;
  int c5 = 0;
  __retval3 = c5;
  int t6 = __retval3;
  return t6;
}

// function: _ZN3AddI7HoldIntILi1EES0_ILin2EEE1fEv
int Add_HoldInt_1___HoldInt__2_____f(struct Add_HoldInt_1___HoldInt__2__* v7) {
bb8:
  struct Add_HoldInt_1___HoldInt__2__* this9;
  int __retval10;
  this9 = v7;
  struct Add_HoldInt_1___HoldInt__2__* t11 = this9;
  int c12 = 1;
  __retval10 = c12;
  int t13 = __retval10;
  return t13;
}

// function: main
int main() {
bb14:
  int __retval15;
  struct Add_HoldInt_1___HoldInt__1__ a16;
  struct Add_HoldInt_1___HoldInt__2__ b17;
  int c18 = 0;
  __retval15 = c18;
    int r19 = Add_HoldInt_1___HoldInt__1_____f(&a16);
    int c20 = 0;
    _Bool c21 = ((r19 != c20)) ? 1 : 0;
    _Bool ternary22;
    if (c21) {
      _Bool c23 = 1;
      ternary22 = (_Bool)c23;
    } else {
      int r24 = Add_HoldInt_1___HoldInt__2_____f(&b17);
      int c25 = 1;
      _Bool c26 = ((r24 != c25)) ? 1 : 0;
      ternary22 = (_Bool)c26;
    }
    if (ternary22) {
      char* cast27 = (char*)&(_str);
      char* c28 = _str_1;
      unsigned int c29 = 44;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast27, c28, c29, cast30);
    }
  int t31 = __retval15;
  return t31;
}

