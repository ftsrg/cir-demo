char _str[5] = "a==5";
char _str_1[93] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/if_declaration/main.cpp";
char _str_2[11] = "int main()";
// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int x8;
  int __retval9;
  int a10;
  int c11 = 0;
  a10 = c11;
  goto bb1;
bb1:
  int c12 = 6;
  x8 = c12;
  int t13 = x8;
  _Bool cast14 = (_Bool)t13;
  if (cast14) goto bb2; else goto bb3;
bb2:
  int c15 = 5;
  a10 = c15;
  goto bb3;
bb3:
  goto bb4;
bb4:
  int t16 = a10;
  int c17 = 5;
  _Bool c18 = (t16 == c17) ? 1 : 0;
  if (c18) goto bb5; else goto bb6;
bb5:
  int c19 = 0;
  goto bb7;
bb6:
  char* cast20 = (char*)_str;
