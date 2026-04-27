char _str[2] = "0";
char _str_1[99] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/switch_declaration_2/main.cpp";
char _str_2[11] = "int main()";
// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int x9;
  int __retval10;
  goto bb1;
bb1:
  int c11 = 5;
  x9 = c11;
  int t12 = x9;
  goto bb2;
bb2:
  switch (t12) {
    default: goto bb6;
  }
bb3:
  goto bb4;
bb4:
  char* cast13 = (char*)_str;
