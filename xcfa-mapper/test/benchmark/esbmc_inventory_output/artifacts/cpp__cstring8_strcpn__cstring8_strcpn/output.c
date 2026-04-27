// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_cset[11] = "1234567890";
char __const_main_strtext[6] = "129th";
char _str[5] = "i==3";
char _str_1[94] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[33] = "The length of initial number is ";
// function: strspn
unsigned long long strspn(char*, char*);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval4;
  int i5;
  int strtext6[6];
  int cset7[11];
  // array copy
  for (int i = 0; i < 6; ++i) { __const_main_strtext[i] = strtext6[i]; }
  // array copy
  for (int i = 0; i < 11; ++i) { __const_main_cset[i] = cset7[i]; }
  char* cast8 = (char*)strtext6;
  char* cast9 = (char*)cset7;
  unsigned long long r10 = strspn(cast8, cast9);
  int cast11 = (int)r10;
  i5 = cast11;
  int t12 = i5;
  int c13 = 3;
  _Bool c14 = (t12 == c13) ? 1 : 0;
  if (c14) goto bb1; else goto bb2;
bb1:
  int c15 = 0;
  goto bb3;
bb2:
  char* cast16 = (char*)_str;
