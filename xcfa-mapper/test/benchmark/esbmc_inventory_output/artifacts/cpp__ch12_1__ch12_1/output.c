// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[5] = "test";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[19];
char _str_2[44];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEPKv
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, void*);

// function: main
int main() {
bb0:
  int __retval1;
  char* word2;
  char* cast3 = (char*)_str;
  word2 = cast3;
  struct std::basic_ostream<char>* g4 = &_ZSt4cout;
  char* cast5 = (char*)_str_1;
  struct std::basic_ostream<char>* r6 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g4, cast5);
  char* t7 = word2;
  struct std::basic_ostream<char>* r8 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r6, t7);
  void* g9 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r10 = std__ostream__operator___std__ostream_____(r8, g9);
  char* cast11 = (char*)_str_2;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r10, cast11);
  char* t13 = word2;
  void* cast14 = (void*)t13;
  struct std::basic_ostream<char>* r15 = std__ostream__operator__(r12, cast14);
  void* g16 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r17 = std__ostream__operator___std__ostream_____(r15, g16);
  int c18 = 0;
  __retval1 = c18;
  int t19 = __retval1;
  return t19;
}

