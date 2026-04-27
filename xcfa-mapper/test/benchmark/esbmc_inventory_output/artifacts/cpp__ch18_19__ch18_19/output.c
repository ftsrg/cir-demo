// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[15] = "This is a test";
char _str_1[7] = "beware";
struct std::basic_ostream<char> _ZSt4cout;
char _str_2[23] = "Of the characters in \\22";
char _str_3[4] = "\\22\\0A'";
char _str_4[39] = " is the first character to appear in\\0A\\22";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: strpbrk
char* strpbrk(char*, char*);

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
  struct std::basic_ostream<char>* r8 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g6, cast7);
  char* t9 = string23;
  struct std::basic_ostream<char>* r10 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r8, t9);
  char* cast11 = (char*)_str_3;
  struct std::basic_ostream<char>* r12 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r10, cast11);
  char* t13 = string12;
  char* t14 = string23;
  char* r15 = strpbrk(t13, t14);
  char t16 = *r15;
  struct std::basic_ostream<char>* r17 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r12, t16);
  char c18 = 39;
  struct std::basic_ostream<char>* r19 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r17, c18);
  char* cast20 = (char*)_str_4;
  struct std::basic_ostream<char>* r21 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r19, cast20);
  char* t22 = string12;
  struct std::basic_ostream<char>* r23 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r21, t22);
  char c24 = 34;
  struct std::basic_ostream<char>* r25 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r23, c24);
  void* g26 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r27 = std__ostream__operator___std__ostream_____(r25, g26);
  int c28 = 0;
  __retval1 = c28;
  int t29 = __retval1;
  return t29;
}

