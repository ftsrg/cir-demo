// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[40] = "A zoo has many animals including zebras";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[45] = "The remainder of string1 beginning with the\\0A";
char _str_2[31] = "last occurrence of character '";
char _str_3[8];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: strrchr
char* strrchr(char*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  char* string12;
  int c3;
  char* cast4 = (char*)_str;
  string12 = cast4;
  char c5 = 122;
  int cast6 = (int)c5;
  c3 = cast6;
  struct std::basic_ostream<char>* g7 = &_ZSt4cout;
  char* cast8 = (char*)_str_1;
  struct std::basic_ostream<char>* r9 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g7, cast8);
  char* cast10 = (char*)_str_2;
  struct std::basic_ostream<char>* r11 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r9, cast10);
  int t12 = c3;
  char cast13 = (char)t12;
  struct std::basic_ostream<char>* r14 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r11, cast13);
  char* cast15 = (char*)_str_3;
  struct std::basic_ostream<char>* r16 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r14, cast15);
  char* t17 = string12;
  int t18 = c3;
  char* r19 = strrchr(t17, t18);
  struct std::basic_ostream<char>* r20 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r16, r19);
  char c21 = 34;
  struct std::basic_ostream<char>* r22 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r20, c21);
  void* g23 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r24 = std__ostream__operator___std__ostream_____(r22, g23);
  int c25 = 0;
  __retval1 = c25;
  int t26 = __retval1;
  return t26;
}

