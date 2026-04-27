// Struct definitions (auto-parsed)
struct Time { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[31] = "The initial universal time is ";
char _str_1[31] = "\\0AThe initial standard time is ";
char _str_2[35] = "\\0A\\0AUniversal time after setTime is ";
char _str_3[33] = "\\0AStandard time after setTime is ";
char _str_4[37];
char _str_5[18];
char _str_6[17];
// function: _ZN4TimeC1Ev
void Time__Time(struct Time*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZN4Time14printUniversalEv
void Time__printUniversal(struct Time*);

// function: _ZN4Time13printStandardEv
void Time__printStandard(struct Time*);

// function: _ZN4Time7setTimeEiii
void Time__setTime(struct Time*, int, int, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  struct Time t2;
  Time__Time(&t2);
  struct std::basic_ostream<char>* g3 = &_ZSt4cout;
  char* cast4 = (char*)_str;
  struct std::basic_ostream<char>* r5 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g3, cast4);
  Time__printUniversal(&t2);
  struct std::basic_ostream<char>* g6 = &_ZSt4cout;
  char* cast7 = (char*)_str_1;
  struct std::basic_ostream<char>* r8 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g6, cast7);
  Time__printStandard(&t2);
  int c9 = 13;
  int c10 = 27;
  int c11 = 6;
  Time__setTime(&t2, c9, c10, c11);
  struct std::basic_ostream<char>* g12 = &_ZSt4cout;
  char* cast13 = (char*)_str_2;
  struct std::basic_ostream<char>* r14 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g12, cast13);
  Time__printUniversal(&t2);
  struct std::basic_ostream<char>* g15 = &_ZSt4cout;
  char* cast16 = (char*)_str_3;
  struct std::basic_ostream<char>* r17 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g15, cast16);
  Time__printStandard(&t2);
  int c18 = 99;
  int c19 = 99;
  int c20 = 99;
  Time__setTime(&t2, c18, c19, c20);
  struct std::basic_ostream<char>* g21 = &_ZSt4cout;
  char* cast22 = (char*)_str_4;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g21, cast22);
  char* cast24 = (char*)_str_5;
  struct std::basic_ostream<char>* r25 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r23, cast24);
  Time__printUniversal(&t2);
  struct std::basic_ostream<char>* g26 = &_ZSt4cout;
  char* cast27 = (char*)_str_6;
  struct std::basic_ostream<char>* r28 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g26, cast27);
  Time__printStandard(&t2);
  struct std::basic_ostream<char>* g29 = &_ZSt4cout;
  void* g30 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r31 = std__ostream__operator___std__ostream_____(g29, g30);
  int c32 = 0;
  __retval1 = c32;
  int t33 = __retval1;
  return t33;
}

