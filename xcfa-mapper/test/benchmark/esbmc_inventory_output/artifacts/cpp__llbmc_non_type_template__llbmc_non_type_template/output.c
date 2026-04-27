// Struct definitions (auto-parsed)
struct mysequence<int, 5> { int memblock[5]; };

char _str[27] = "myints.getmember(0) == 100";
char _str_1[102] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/llbmc_non_type_template/main.cpp";
char _str_2[11] = "int main()";
char _str_3[29] = "myints.getmember(3) == 31416";
// function: _ZN10mysequenceIiLi5EE9setmemberEii
void mysequence_int__5___setmember(struct mysequence<int, 5>* v0, int v1, int v2) {
bb3:
  int this4[5];
  int x5;
  int value6;
  this4 = v0;
  x5 = v1;
  value6 = v2;
  struct mysequence<int, 5>* t7 = this4;
  int t8 = value6;
  int t9 = x5;
  *t7->memblock[t9] = t8;
  return;
}

// function: _ZN10mysequenceIiLi5EE9getmemberEi
int mysequence_int__5___getmember(struct mysequence<int, 5>* v10, int v11) {
bb12:
  int this13[5];
  int x14;
  int __retval15;
  this13 = v10;
  x14 = v11;
  struct mysequence<int, 5>* t16 = this13;
  int t17 = x14;
  int t18 = *t16->memblock[t17];
  __retval15 = t18;
  int t19 = __retval15;
  return t19;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb20:
  int __retval27;
  struct mysequence<int, 5> myints28;
  int c29 = 0;
  int c30 = 100;
  mysequence_int__5___setmember(&myints28, c29, c30);
  int c31 = 3;
  int c32 = 31416;
  mysequence_int__5___setmember(&myints28, c31, c32);
  int c33 = 0;
  int r34 = mysequence_int__5___getmember(&myints28, c33);
  int c35 = 100;
  _Bool c36 = (r34 == c35) ? 1 : 0;
  if (c36) goto bb21; else goto bb22;
bb21:
  int c37 = 0;
  goto bb23;
bb22:
  char* cast38 = (char*)_str;
