// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[13] = "abcdefabcdef";
char _str_1[4] = "def";
struct std::basic_ostream<char> _ZSt4cout;
char _str_2[11] = "string1 = ";
char _str_3[12] = "\\0Astring2 = ";
char _str_4[47] = "\\0A\\0AThe remainder of string1 beginning with the\\0A";
char _str_5[33];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: strstr
char* strstr(char*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  char* string12;
  char* string23;
  char* cast4 = (char*)_str;
  string12 = cast4;
  char* cast5 = (char*)_str_1;
  string23 = cast5;
  struct std::basic_ostream<char>* g6 = &_ZSt4cout;
  char* cast7 = (char*)_str_2;
  struct std::basic_ostream<char>* r8 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g6, cast7);
  char* t9 = string12;
  struct std::basic_ostream<char>* r10 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r8, t9);
  char* cast11 = (char*)_str_3;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r10, cast11);
  char* t13 = string23;
  struct std::basic_ostream<char>* r14 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r12, t13);
  char* cast15 = (char*)_str_4;
  struct std::basic_ostream<char>* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r14, cast15);
  char* cast17 = (char*)_str_5;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r16, cast17);
  char* t19 = string12;
  char* t20 = string23;
  char* r21 = strstr(t19, t20);
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r18, r21);
  void* g23 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r24 = std__ostream__operator___std__ostream_____(r22, g23);
  int c25 = 0;
  __retval1 = c25;
  int t26 = __retval1;
  return t26;
}

