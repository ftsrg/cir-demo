int a = 0;
int* dev_a;
char _str[14] = "dev_a != NULL";
char _str_1[83] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/new2/main.cpp";
char _str_2[11] = "int main()";
char _str_3[12] = "*dev_a == 0";
char _str_4[13] = "*dev_a == 10";
// function: _Znwm
void* operator_new(unsigned long long);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int __retval10;
  int a11;
  unsigned long long c12 = 4;
  void* r13 = operator_new(c12);
  int* cast14 = (int*)r13;
  int c15 = 0;
  *cast14 = c15;
  dev_a = cast14;
  int* t16 = dev_a;
  int* c17 = NULL;
  _Bool c18 = (t16 != c17) ? 1 : 0;
  if (c18) goto bb1; else goto bb2;
bb1:
  int c19 = 0;
  goto bb3;
bb2:
  char* cast20 = (char*)_str;
