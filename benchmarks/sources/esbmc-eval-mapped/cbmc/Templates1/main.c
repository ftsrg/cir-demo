char _str[5] = "i==z";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates1/main.cpp";
char __PRETTY_FUNCTION____Z2eqILi2EEvi[21] = "void eq(int) [i = 2]";
char _str_2[2] = "x";
char __PRETTY_FUNCTION____Z1fIiEvT_[20] = "void f(T) [T = int]";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_eq_2_(int p0);
void void_f_int_(int p0);
int main();

// function: _Z2eqILi2EEvi
void void_eq_2_(int v0) {
bb1: ;
  int z2;
  z2 = v0;
  int c3 = 2;
  int t4 = z2;
  _Bool c5 = ((c3 == t4)) ? 1 : 0;
  if (c5) {
  } else {
    char* cast6 = (char*)&(_str);
    char* c7 = (char*)_str_1;
    unsigned int c8 = 19;
    char* cast9 = (char*)&(__PRETTY_FUNCTION____Z2eqILi2EEvi);
    reach_error();
    __assert_fail(cast6, c7, c8, cast9);
  }
  return;
}

// function: _Z1fIiEvT_
void void_f_int_(int v10) {
bb11: ;
  int x12;
  x12 = v10;
  int t13 = x12;
  _Bool cast14 = (_Bool)t13;
  if (cast14) {
  } else {
    char* cast15 = (char*)&(_str_2);
    char* c16 = (char*)_str_1;
    unsigned int c17 = 13;
    char* cast18 = (char*)&(__PRETTY_FUNCTION____Z1fIiEvT_);
    reach_error();
    __assert_fail(cast15, c16, c17, cast18);
  }
  return;
}

// function: main
int main() {
bb19: ;
  int __retval20;
  int c21 = 0;
  __retval20 = c21;
  int c22 = 2;
  void_eq_2_(c22);
  int c23 = 1;
  void_f_int_(c23);
  int t24 = __retval20;
  return t24;
}

