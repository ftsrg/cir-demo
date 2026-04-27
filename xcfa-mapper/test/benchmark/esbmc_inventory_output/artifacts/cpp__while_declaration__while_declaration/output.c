char _str[5] = "a==5";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp";
char _str_2[11] = "int main()";
// function: _Znwm
void* operator_new(unsigned long long);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int* x15;
  int __retval16;
  int a17;
  int c18 = 0;
  a17 = c18;
  goto bb1;
bb1:
  goto bb2;
bb2:
  unsigned long long c19 = 4;
  void* r20 = operator_new(c19);
  int* cast21 = (int*)r20;
  x15 = cast21;
  int* t22 = x15;
  _Bool cast23 = (_Bool)t22;
  if (cast23) goto bb3; else goto bb10;
bb3:
  goto bb4;
bb4:
  int t24 = a17;
  int u25 = ++t24;
  a17 = u25;
  goto bb5;
bb5:
  int t26 = a17;
  int c27 = 5;
  _Bool c28 = (t26 == c27) ? 1 : 0;
  if (c28) goto bb6; else goto bb7;
bb6:
  goto bb10;
bb7:
  goto bb8;
bb8:
  goto bb9;
bb9:
  goto bb2;
bb10:
  goto bb11;
bb11:
  int t29 = a17;
  int c30 = 5;
  _Bool c31 = (t29 == c30) ? 1 : 0;
  if (c31) goto bb12; else goto bb13;
bb12:
  int c32 = 0;
  goto bb14;
bb13:
  char* cast33 = (char*)_str;
