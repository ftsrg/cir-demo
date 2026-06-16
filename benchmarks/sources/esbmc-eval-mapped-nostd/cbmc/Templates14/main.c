// Struct definitions (auto-parsed)
struct n1__A_bool_ { _Bool a; };
struct B_bool_ { struct n1__A_bool_ b; };

char _str[12] = "o.b.a==true";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates14/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0: ;
  int __retval1;
  struct B_bool_ o2;
  int c3 = 0;
  __retval1 = c3;
  _Bool c4 = 1;
  o2.b.a = c4;
  _Bool t5 = o2.b.a;
  int cast6 = (int)t5;
  _Bool c7 = 1;
  int cast8 = (int)c7;
  _Bool c9 = ((cast6 == cast8)) ? 1 : 0;
  if (c9) {
  } else {
    char* cast10 = (char*)&(_str);
    char* c11 = (char*)_str_1;
    unsigned int c12 = 27;
    char* cast13 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast10, c11, c12, cast13);
  }
  int t14 = __retval1;
  return t14;
}

