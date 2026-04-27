// Struct definitions (auto-parsed)
struct mypair<int> { int a; int b; };

char _str[25] = "myobject.getmax() == 100";
char _str_1[99] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/llbmc_template_class/main.cpp";
char _str_2[11] = "int main()";
// function: _ZN6mypairIiEC2Eii
void mypair_int___mypair(struct mypair<int>* v0, int v1, int v2) {
bb3:
  struct mypair<int>* this4;
  int first5;
  int second6;
  this4 = v0;
  first5 = v1;
  second6 = v2;
  struct mypair<int>* t7 = this4;
  int t8 = first5;
  *t7->a = t8;
  int t9 = second6;
  *t7->b = t9;
  return;
}

// function: _ZN6mypairIiE6getmaxEv
int mypair_int___getmax(struct mypair<int>* v10) {
  int v11;
bb12:
  struct mypair<int>* this16;
  int __retval17;
  int retval18;
  this16 = v10;
  struct mypair<int>* t19 = this16;
  int t20 = *t19->a;
  int t21 = *t19->b;
  _Bool c22 = (t20 > t21) ? 1 : 0;
  if (c22) goto bb13; else goto bb14;
bb13:
  int t23 = *t19->a;
  v11 = t23;
  goto bb15;
bb14:
  int t24 = *t19->b;
  v11 = t24;
  goto bb15;
bb15:
  retval18 = v11;
  int t25 = retval18;
  __retval17 = t25;
  int t26 = __retval17;
  return t26;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb27:
  int __retval31;
  struct mypair<int> myobject32;
  int c33 = 100;
  int c34 = 75;
  mypair_int___mypair(&myobject32, c33, c34);
  int r35 = mypair_int___getmax(&myobject32);
  int c36 = 100;
  _Bool c37 = (r35 == c36) ? 1 : 0;
  if (c37) goto bb28; else goto bb29;
bb28:
  int c38 = 0;
  goto bb30;
bb29:
  char* cast39 = (char*)_str;
