// Struct definitions (auto-parsed)
struct mysequence_int__5_ { int memblock[5]; };

char _str[27] = "myints.getmember(0) == 100";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_non_type_template/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[29] = "myints.getmember(3) == 31416";
void mysequence_int__5___setmember(struct mysequence_int__5_* p0, int p1, int p2);
int mysequence_int__5___getmember(struct mysequence_int__5_* p0, int p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN10mysequenceIiLi5EE9setmemberEii
void mysequence_int__5___setmember(struct mysequence_int__5_* v0, int v1, int v2) {
bb3: ;
  struct mysequence_int__5_* this4;
  int x5;
  int value6;
  this4 = v0;
  x5 = v1;
  value6 = v2;
  struct mysequence_int__5_* t7 = this4;
  int t8 = value6;
  int t9 = x5;
  long cast10 = (long)t9;
  t7->memblock[cast10] = t8;
  return;
}

// function: _ZN10mysequenceIiLi5EE9getmemberEi
int mysequence_int__5___getmember(struct mysequence_int__5_* v11, int v12) {
bb13: ;
  struct mysequence_int__5_* this14;
  int x15;
  int __retval16;
  this14 = v11;
  x15 = v12;
  struct mysequence_int__5_* t17 = this14;
  int t18 = x15;
  long cast19 = (long)t18;
  int t20 = t17->memblock[cast19];
  __retval16 = t20;
  int t21 = __retval16;
  return t21;
}

// function: main
int main() {
bb22: ;
  int __retval23;
  struct mysequence_int__5_ myints24;
  int c25 = 0;
  __retval23 = c25;
  int c26 = 0;
  int c27 = 100;
  mysequence_int__5___setmember(&myints24, c26, c27);
  int c28 = 3;
  int c29 = 31416;
  mysequence_int__5___setmember(&myints24, c28, c29);
  int c30 = 0;
  int r31 = mysequence_int__5___getmember(&myints24, c30);
  int c32 = 100;
  _Bool c33 = ((r31 == c32)) ? 1 : 0;
  if (c33) {
  } else {
    char* cast34 = (char*)&(_str);
    char* c35 = (char*)_str_1;
    unsigned int c36 = 36;
    char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast34, c35, c36, cast37);
  }
  int c38 = 3;
  int r39 = mysequence_int__5___getmember(&myints24, c38);
  int c40 = 31416;
  _Bool c41 = ((r39 == c40)) ? 1 : 0;
  if (c41) {
  } else {
    char* cast42 = (char*)&(_str_2);
    char* c43 = (char*)_str_1;
    unsigned int c44 = 37;
    char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast42, c43, c44, cast45);
  }
  int c46 = 0;
  __retval23 = c46;
  int t47 = __retval23;
  return t47;
}

