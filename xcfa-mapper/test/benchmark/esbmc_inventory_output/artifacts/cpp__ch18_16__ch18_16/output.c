// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[11] = "1234567abc";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[25] = "The original string is \\22";
char _str_2[26] = "\\22\\0AThe converted value is ";
char _str_3[43] = "\\0AThe remainder of the original string is \\22";
char _str_4[36] = "\\22\\0AThe converted value minus 567 is ";
// function: __isoc23_strtoul
unsigned long long __isoc23_strtoul(char*, char**, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEm
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, unsigned long long);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  unsigned long long x2;
  char* string13;
  char* remainderPtr4;
  char* cast5 = (char*)_str;
  string13 = cast5;
  char* t6 = string13;
  int c7 = 0;
  unsigned long long r8 = __isoc23_strtoul(t6, &remainderPtr4, c7);
  x2 = r8;
  struct std::basic_ostream<char>* g9 = &_ZSt4cout;
  char* cast10 = (char*)_str_1;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g9, cast10);
  char* t12 = string13;
  struct std::basic_ostream<char>* r13 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r11, t12);
  char* cast14 = (char*)_str_2;
  struct std::basic_ostream<char>* r15 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r13, cast14);
  unsigned long long t16 = x2;
  struct std::basic_ostream<char>* r17 = std__ostream__operator__(r15, t16);
  char* cast18 = (char*)_str_3;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r17, cast18);
  char* t20 = remainderPtr4;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r19, t20);
  char* cast22 = (char*)_str_4;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r21, cast22);
  unsigned long long t24 = x2;
  int c25 = 567;
  unsigned long long cast26 = (unsigned long long)c25;
  unsigned long long b27 = t24 - cast26;
  struct std::basic_ostream<char>* r28 = std__ostream__operator__(r23, b27);
  void* g29 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r30 = std__ostream__operator___std__ostream_____(r28, g29);
  int c31 = 0;
  __retval1 = c31;
  int t32 = __retval1;
  return t32;
}

