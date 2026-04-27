int a = 0;
int* dev_a;
char _str[14] = "dev_a != NULL";
char _str_1[91] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/operator_new/main.cpp";
char _str_2[11] = "int main()";
char _str_3[12] = "*dev_a == 0";
// function: _Znwm
void* operator_new(unsigned long long);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int __retval7;
  unsigned long long c8 = 4;
  void* r9 = operator_new(c8);
  int* cast10 = (int*)r9;
  dev_a = cast10;
  int* t11 = dev_a;
  int* c12 = NULL;
  _Bool c13 = (t11 != c12) ? 1 : 0;
  if (c13) goto bb1; else goto bb2;
bb1:
  int c14 = 0;
  goto bb3;
bb2:
  char* cast15 = (char*)_str;
