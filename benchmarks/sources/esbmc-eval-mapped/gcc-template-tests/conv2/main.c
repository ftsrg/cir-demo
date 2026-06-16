// Struct definitions (auto-parsed)
struct C { unsigned char __field0; };

char _str[7] = "0 == r";
char _str_1[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/conv2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[14] = "0 == ( r + 2)";
int C__operator_int(struct C* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1CcviEv
int C__operator_int(struct C* v0) {
bb1: ;
  struct C* this2;
  int __retval3;
  this2 = v0;
  struct C* t4 = this2;
  int c5 = 0;
  __retval3 = c5;
  int t6 = __retval3;
  return t6;
}

// function: main
int main() {
bb7: ;
  int __retval8;
  struct C p9;
  int r10;
  int c11 = 0;
  __retval8 = c11;
  int r12 = C__operator_int(&p9);
  r10 = r12;
    int t13 = r10;
    _Bool cast14 = (_Bool)t13;
    if (cast14) {
      int c15 = 0;
      int t16 = r10;
      _Bool c17 = ((c15 == t16)) ? 1 : 0;
      if (c17) {
      } else {
        char* cast18 = (char*)&(_str);
        char* c19 = (char*)_str_1;
        unsigned int c20 = 40;
        char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast18, c19, c20, cast21);
      }
    }
  int r22 = C__operator_int(&p9);
  r10 = r22;
    int t23 = r10;
    _Bool cast24 = (_Bool)t23;
    if (cast24) {
      int c25 = 0;
      int t26 = r10;
      int c27 = 2;
      int b28 = t26 + c27;
      _Bool c29 = ((c25 == b28)) ? 1 : 0;
      if (c29) {
      } else {
        char* cast30 = (char*)&(_str_2);
        char* c31 = (char*)_str_1;
        unsigned int c32 = 44;
        char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast30, c31, c32, cast33);
      }
    }
  int c34 = 0;
  __retval8 = c34;
  int t35 = __retval8;
  return t35;
}

