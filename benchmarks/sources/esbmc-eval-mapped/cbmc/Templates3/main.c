// Struct definitions (auto-parsed)
struct int_array_3U_ { int array[3]; };

char _str[13] = "a.read(2)==1";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[7] = "x<size";
char __PRETTY_FUNCTION____ZN9int_arrayILj3EE4readEj[48] = "int int_array<3>::read(unsigned int) [size = 3]";
int int_array_3u___read(struct int_array_3U_* p0, unsigned int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN9int_arrayILj3EE4readEj
int int_array_3u___read(struct int_array_3U_* v0, unsigned int v1) {
bb2:
  struct int_array_3U_* this3;
  unsigned int x4;
  int __retval5;
  this3 = v0;
  x4 = v1;
  struct int_array_3U_* t6 = this3;
  unsigned int t7 = x4;
  unsigned int c8 = 3;
  _Bool c9 = ((t7 < c8)) ? 1 : 0;
  if (c9) {
  } else {
    char* cast10 = (char*)&(_str_2);
    char* c11 = _str_1;
    unsigned int c12 = 18;
    char* cast13 = (char*)&(__PRETTY_FUNCTION____ZN9int_arrayILj3EE4readEj);
    __assert_fail(cast10, c11, c12, cast13);
  }
  unsigned int t14 = x4;
  unsigned long cast15 = (unsigned long)t14;
  int t16 = t6->array[cast15];
  __retval5 = t16;
  int t17 = __retval5;
  return t17;
}

// function: main
int main() {
bb18:
  int __retval19;
  struct int_array_3U_ a20;
  int c21 = 0;
  __retval19 = c21;
  int c22 = 1;
  long c23 = 2;
  a20.array[c23] = c22;
  unsigned int c24 = 2;
  int r25 = int_array_3u___read(&a20, c24);
  int c26 = 1;
  _Bool c27 = ((r25 == c26)) ? 1 : 0;
  if (c27) {
  } else {
    char* cast28 = (char*)&(_str);
    char* c29 = _str_1;
    unsigned int c30 = 28;
    char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast28, c29, c30, cast31);
  }
  int t32 = __retval19;
  return t32;
}

