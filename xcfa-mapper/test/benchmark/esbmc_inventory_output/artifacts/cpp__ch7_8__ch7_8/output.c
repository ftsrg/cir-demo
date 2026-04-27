// Struct definitions (auto-parsed)
struct Time { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[17];
char _str_1[17];
char _str_2[22];
// function: _ZN4TimeC1Eiii
void Time__Time(struct Time*, int, int, int);

// function: _ZN4Time7setHourEi
struct Time* Time__setHour(struct Time*, int);

// function: _ZN4Time9setMinuteEi
struct Time* Time__setMinute(struct Time*, int);

// function: _ZN4Time9setSecondEi
struct Time* Time__setSecond(struct Time*, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNK4Time14printUniversalEv
void Time__printUniversal___const(struct Time*);

// function: _ZNK4Time13printStandardEv
void Time__printStandard___const(struct Time*);

// function: _ZN4Time7setTimeEiii
struct Time* Time__setTime(struct Time*, int, int, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  struct Time t2;
  int c3 = 0;
  int c4 = 0;
  int c5 = 0;
  Time__Time(&t2, c3, c4, c5);
  int c6 = 18;
  struct Time* r7 = Time__setHour(&t2, c6);
  int c8 = 30;
  struct Time* r9 = Time__setMinute(r7, c8);
  int c10 = 22;
  struct Time* r11 = Time__setSecond(r9, c10);
  struct std::basic_ostream<char>* g12 = &_ZSt4cout;
  char* cast13 = (char*)_str;
  struct std::basic_ostream<char>* r14 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g12, cast13);
  Time__printUniversal___const(&t2);
  struct std::basic_ostream<char>* g15 = &_ZSt4cout;
  char* cast16 = (char*)_str_1;
  struct std::basic_ostream<char>* r17 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g15, cast16);
  Time__printStandard___const(&t2);
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str_2;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  int c21 = 20;
  int c22 = 20;
  int c23 = 20;
  struct Time* r24 = Time__setTime(&t2, c21, c22, c23);
  Time__printStandard___const(r24);
  struct std::basic_ostream<char>* g25 = &_ZSt4cout;
  void* g26 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r27 = std__ostream__operator___std__ostream_____(g25, g26);
  int c28 = 0;
  __retval1 = c28;
  int t29 = __retval1;
  return t29;
}

