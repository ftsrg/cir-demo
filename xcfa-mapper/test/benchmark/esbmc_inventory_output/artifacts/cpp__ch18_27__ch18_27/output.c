// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_string1[15] = "BBBBBBBBBBBBBB";
struct std::basic_ostream<char> _ZSt4cout;
char _str[11] = "string1 = ";
char _str_1[24] = "string1 after memset = ";
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
  int string12[15];
  // array copy
  for (int i = 0; i < 15; ++i) { __const_main_string1[i] = string12[i]; }
  struct std::basic_ostream<char>* g3 = &_ZSt4cout;
  char* cast4 = (char*)_str;
  struct std::basic_ostream<char>* r5 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g3, cast4);
  char* cast6 = (char*)string12;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r5, cast6);
  void* g8 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r9 = std__ostream__operator___std__ostream_____(r7, g8);
  struct std::basic_ostream<char>* g10 = &_ZSt4cout;
  char* cast11 = (char*)_str_1;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g10, cast11);
  char* cast13 = (char*)string12;
  void* cast14 = (void*)cast13;
  char c15 = 98;
  int cast16 = (int)c15;
  int c17 = 7;
  unsigned long long cast18 = (unsigned long long)c17;
