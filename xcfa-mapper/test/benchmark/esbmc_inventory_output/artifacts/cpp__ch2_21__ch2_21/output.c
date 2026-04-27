// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[5] = "x==2";
char _str_1[85] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_21/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[13];
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
  int __retval11;
  int sum12;
  int x13;
  int c14 = 1;
  x13 = c14;
  int c15 = 0;
  sum12 = c15;
  goto bb1;
bb1:
  goto bb2;
bb2:
  int t16 = x13;
  int c17 = 10;
  _Bool c18 = (t16 <= c17) ? 1 : 0;
  if (c18) goto bb3; else goto bb9;
bb3:
  goto bb4;
bb4:
  int t19 = x13;
  int t20 = sum12;
  int b21 = t20 + t19;
  sum12 = b21;
  int t22 = x13;
  int u23 = ++t22;
  x13 = u23;
  int t24 = x13;
  int c25 = 2;
  _Bool c26 = (t24 == c25) ? 1 : 0;
  if (c26) goto bb5; else goto bb6;
bb5:
  int c27 = 0;
  goto bb7;
bb6:
  char* cast28 = (char*)_str;
