// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_x[16] = "Home Sweet Home";
struct std::basic_ostream<char> _ZSt4cout;
char _str[42];
char _str_1[43];
char _str_2[21] = "x==\\22Sweet Home Home\\22";
char _str_3[86] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_31/main.cpp";
char _str_4[11] = "int main()";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int __retval1;
  int x2[16];
  // array copy
  for (int i = 0; i < 16; ++i) { __const_main_x[i] = x2[i]; }
  struct std::basic_ostream<char>* g3 = &_ZSt4cout;
  char* cast4 = (char*)_str;
  struct std::basic_ostream<char>* r5 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g3, cast4);
  char* cast6 = (char*)x2;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r5, cast6);
  struct std::basic_ostream<char>* g8 = &_ZSt4cout;
  char* cast9 = (char*)_str_1;
  struct std::basic_ostream<char>* r10 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g8, cast9);
  char* cast11 = (char*)x2;
  void* cast12 = (void*)cast11;
  int c13 = 5;
  void* cast14 = (void*)x2[c13];
  int c15 = 10;
  unsigned long long cast16 = (unsigned long long)c15;
