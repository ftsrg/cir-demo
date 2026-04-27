// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[5] = "i<50";
char _str_1[86] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_10/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[35] = "Memory allocation failed for ptr[ ";
char _str_4[4] = " ]\\0A";
char _str_5[35] = "Allocated 5000000 doubles in ptr[ ";
// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _Znam
void* operator_new__(unsigned long long);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: main
int main() {
bb0:
  int i17;
  int __retval18;
  double ptr19[50];
  goto bb1;
bb1:
  int c20 = 0;
  i17 = c20;
  goto bb2;
bb2:
  int t21 = i17;
  int c22 = 100;
  _Bool c23 = (t21 < c22) ? 1 : 0;
  if (c23) goto bb3; else goto bb15;
bb3:
  goto bb4;
bb4:
  int t24 = i17;
  int c25 = 50;
  _Bool c26 = (t24 < c25) ? 1 : 0;
  if (c26) goto bb5; else goto bb6;
bb5:
  int c27 = 0;
  goto bb7;
bb6:
  char* cast28 = (char*)_str;
