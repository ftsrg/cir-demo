// Struct definitions (auto-parsed)
struct N__A_int_ { int i; };
struct B { struct N__A_int_ __field0; int __field1; };

char _str[10] = "b.i == 10";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates29/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void B__B(struct B* p0, int p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void N__A_int___A(struct N__A_int_* p0, int p1);

// function: _ZN1BC2Ei
void B__B(struct B* v0, int v1) {
bb2: ;
  struct B* this3;
  int i4;
  this3 = v0;
  i4 = v1;
  struct B* t5 = this3;
  struct N__A_int_* base6 = (struct N__A_int_*)((char *)t5 + 0);
  int t7 = i4;
  N__A_int___A(base6, t7);
  return;
}

// function: main
int main() {
bb8: ;
  int __retval9;
  struct B b10;
  int c11 = 0;
  __retval9 = c11;
  int c12 = 10;
  B__B(&b10, c12);
  struct N__A_int_* base13 = (struct N__A_int_*)((char *)&(b10) + 0);
  int t14 = base13->i;
  int c15 = 10;
  _Bool c16 = ((t14 == c15)) ? 1 : 0;
  if (c16) {
  } else {
    char* cast17 = (char*)&(_str);
    char* c18 = (char*)_str_1;
    unsigned int c19 = 29;
    char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast17, c18, c19, cast20);
  }
  int t21 = __retval9;
  return t21;
}

// function: _ZN1N1AIiEC2Ei
void N__A_int___A(struct N__A_int_* v22, int v23) {
bb24: ;
  struct N__A_int_* this25;
  int i26;
  this25 = v22;
  i26 = v23;
  struct N__A_int_* t27 = this25;
  int t28 = i26;
  t27->i = t28;
  return;
}

