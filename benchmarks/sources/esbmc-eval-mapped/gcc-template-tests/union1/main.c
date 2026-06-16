// Struct definitions (auto-parsed)
union anon_0 { char c; int t_; };

char _str[2] = "0";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/union1/main.cpp";
char __PRETTY_FUNCTION____Z1gc[13] = "void g(char)";
char __PRETTY_FUNCTION____Z1hi[12] = "void h(int)";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void g(char p0);
void h(int p0);
void void_f_int_(int* p0);
int main();

// function: _Z1gc
void g(char v0) {
bb1: ;
  char c2;
  c2 = v0;
    char t3 = c2;
    int cast4 = (int)t3;
    int c5 = 97;
    _Bool c6 = ((cast4 != c5)) ? 1 : 0;
    if (c6) {
      char* cast7 = (char*)&(_str);
      char* c8 = (char*)_str_1;
      unsigned int c9 = 15;
      char* cast10 = (char*)&(__PRETTY_FUNCTION____Z1gc);
      reach_error();
      __assert_fail(cast7, c8, c9, cast10);
    }
  return;
}

// function: _Z1hi
void h(int v11) {
bb12: ;
  int i13;
  i13 = v11;
    int t14 = i13;
    int c15 = 3;
    _Bool c16 = ((t14 != c15)) ? 1 : 0;
    if (c16) {
      char* cast17 = (char*)&(_str);
      char* c18 = (char*)_str_1;
      unsigned int c19 = 21;
      char* cast20 = (char*)&(__PRETTY_FUNCTION____Z1hi);
      reach_error();
      __assert_fail(cast17, c18, c19, cast20);
    }
  return;
}

// function: _Z1fIiEvRKT_
void void_f_int_(int* v21) {
bb22: ;
  int* t23;
  union anon_0 unnamed24;
  t23 = v21;
  char c25 = 97;
  unnamed24.c = c25;
  char t26 = unnamed24.c;
  g(t26);
  int c27 = 3;
  unnamed24.t_ = c27;
  int t28 = unnamed24.t_;
  h(t28);
  return;
}

// function: main
int main() {
bb29: ;
  int __retval30;
  int ref_tmp031;
  int c32 = 0;
  __retval30 = c32;
  int c33 = 3;
  ref_tmp031 = c33;
  void_f_int_(&ref_tmp031);
  int t34 = __retval30;
  return t34;
}

