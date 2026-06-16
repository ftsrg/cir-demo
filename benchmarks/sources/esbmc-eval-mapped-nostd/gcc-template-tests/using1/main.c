// Struct definitions (auto-parsed)
struct Baz { int j; };
struct Foo_int_ { int i; };
struct Bar_int_ { struct Foo_int_ __field0; struct Baz __field1; };

char _str[10] = "0 == ( 1)";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/using1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int Bar_int___foo(struct Bar_int_* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int Bar_int___baz(struct Bar_int_* p0);
int main();

// function: _ZN3BarIiE3fooEv
int Bar_int___foo(struct Bar_int_* v0) {
bb1: ;
  struct Bar_int_* this2;
  int __retval3;
  this2 = v0;
  struct Bar_int_* t4 = this2;
  struct Foo_int_* base5 = (struct Foo_int_*)((char *)t4 + 0);
  int t6 = base5->i;
  __retval3 = t6;
  int t7 = __retval3;
  return t7;
}

// function: _ZN3BarIiE3bazEv
int Bar_int___baz(struct Bar_int_* v8) {
bb9: ;
  struct Bar_int_* this10;
  int __retval11;
  this10 = v8;
  struct Bar_int_* t12 = this10;
  struct Baz* base13 = (struct Baz*)((char *)t12 + 4);
  int t14 = base13->j;
  __retval11 = t14;
  int t15 = __retval11;
  return t15;
}

// function: main
int main() {
bb16: ;
  int __retval17;
  struct Bar_int_ bar18;
  int c19 = 0;
  __retval17 = c19;
  int c20 = 1;
  struct Foo_int_* base21 = (struct Foo_int_*)((char *)&(bar18) + 0);
  base21->i = c20;
  int c22 = 2;
  struct Baz* base23 = (struct Baz*)((char *)&(bar18) + 4);
  base23->j = c22;
    int r24 = Bar_int___foo(&bar18);
    int c25 = 1;
    _Bool c26 = ((r24 != c25)) ? 1 : 0;
    if (c26) {
      char* cast27 = (char*)&(_str);
      char* c28 = (char*)_str_1;
      unsigned int c29 = 43;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast27, c28, c29, cast30);
    }
    int r31 = Bar_int___baz(&bar18);
    int c32 = 2;
    _Bool c33 = ((r31 != c32)) ? 1 : 0;
    if (c33) {
      char* cast34 = (char*)&(_str);
      char* c35 = (char*)_str_1;
      unsigned int c36 = 46;
      char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast34, c35, c36, cast37);
    }
  int t38 = __retval17;
  return t38;
}

