// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_s2[17] = "Copy this string";
struct std::basic_ostream<char> _ZSt4cout;
char _str[41] = "After s2 is copied into s1 with memcpy,\\0A";
char _str_1[14] = "s1 contains \\22";
char _str_2[7] = "s1==s2";
char _str_3[86] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp";
char _str_4[11] = "int main()";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

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
  int s12[17];
  int s23[17];
  // array copy
  for (int i = 0; i < 17; ++i) { __const_main_s2[i] = s23[i]; }
  char* cast4 = (char*)s12;
  void* cast5 = (void*)cast4;
  char* cast6 = (char*)s23;
  void* cast7 = (void*)cast6;
  int c8 = 17;
  unsigned long long cast9 = (unsigned long long)c8;
