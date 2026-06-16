// Struct definitions (auto-parsed)
struct o_32_ { unsigned char __field0; };

char _str[22] = "0 == ( (a != 0x3000))";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/spec10/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void void_o_32___do_add_int_(int* p0, int p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1oILi32EE6do_addIiEEvPT_S2_
void void_o_32___do_add_int_(int* v0, int v1) {
bb2: ;
  int* p3;
  int v4;
  p3 = v0;
  v4 = v1;
  int t5 = v4;
  int* t6 = p3;
  int t7 = *t6;
  int b8 = t7 + t5;
  *t6 = b8;
  return;
}

// function: main
int main() {
bb9: ;
  int __retval10;
  int a11;
  struct o_32_ agg_tmp_ensured12;
  int c13 = 0;
  __retval10 = c13;
  int c14 = 4096;
  a11 = c14;
  int c15 = 8192;
  void_o_32___do_add_int_(&a11, c15);
  int c16 = 0;
  int t17 = a11;
  int c18 = 12288;
  _Bool c19 = ((t17 != c18)) ? 1 : 0;
  int cast20 = (int)c19;
  _Bool c21 = ((c16 == cast20)) ? 1 : 0;
  if (c21) {
  } else {
    char* cast22 = (char*)&(_str);
    char* c23 = (char*)_str_1;
    unsigned int c24 = 34;
    char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast22, c23, c24, cast25);
  }
  int t26 = __retval10;
  return t26;
}

