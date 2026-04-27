// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_str[24] = "This is a simple string";
char _str[7] = "simple";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[10];
// function: strstr
char* strstr(char*, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  int str2[24];
  char* pch3;
  // array copy
  for (int i = 0; i < 24; ++i) { __const_main_str[i] = str2[i]; }
  char* cast4 = (char*)str2;
  char* cast5 = (char*)_str;
  char* r6 = strstr(cast4, cast5);
  pch3 = r6;
  struct std::basic_ostream<char>* g7 = &_ZSt4cout;
  char* cast8 = (char*)str2;
  struct std::basic_ostream<char>* r9 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g7, cast8);
  char* cast10 = (char*)_str_1;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r9, cast10);
  char* t12 = pch3;
  struct std::basic_ostream<char>* r13 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r11, t12);
  void* g14 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r15 = std__ostream__operator___std__ostream_____(r13, g14);
  int c16 = 0;
  __retval1 = c16;
  int t17 = __retval1;
  return t17;
}

