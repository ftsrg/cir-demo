// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[19] = "51.2% are admitted";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[13] = "The string \\22";
char _str_2[36] = "\\22 is converted to the\\0Adouble value ";
char _str_3[18] = " and the string \\22";
char _str_4[2] = "\\22";
// function: strtod
double strtod(char*, char**);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEd
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, double);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  double d2;
  char* string13;
  char* stringPtr4;
  char* cast5 = (char*)_str;
  string13 = cast5;
  char* t6 = string13;
  double r7 = strtod(t6, &stringPtr4);
  d2 = r7;
  struct std::basic_ostream<char>* g8 = &_ZSt4cout;
  char* cast9 = (char*)_str_1;
  struct std::basic_ostream<char>* r10 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g8, cast9);
  char* t11 = string13;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r10, t11);
  char* cast13 = (char*)_str_2;
  struct std::basic_ostream<char>* r14 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r12, cast13);
  double t15 = d2;
  struct std::basic_ostream<char>* r16 = std__ostream__operator__(r14, t15);
  char* cast17 = (char*)_str_3;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r16, cast17);
  char* t19 = stringPtr4;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r18, t19);
  char* cast21 = (char*)_str_4;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r20, cast21);
  void* g23 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r24 = std__ostream__operator___std__ostream_____(r22, g23);
  int c25 = 0;
  __retval1 = c25;
  int t26 = __retval1;
  return t26;
}

