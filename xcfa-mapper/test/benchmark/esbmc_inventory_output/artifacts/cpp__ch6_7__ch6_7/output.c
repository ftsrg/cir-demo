// Struct definitions (auto-parsed)
struct Time { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[20];
char _str_1[26];
char _str_2[4] = "\\0A  ";
char _str_3[48];
char _str_4[48];
char _str_5[41];
char _str_6[35];
// function: _ZN4TimeC1Eiii
void Time__Time(struct Time*, int, int, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZN4Time14printUniversalEv
void Time__printUniversal(struct Time*);

// function: _ZN4Time13printStandardEv
void Time__printStandard(struct Time*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  struct Time t12;
  struct Time t23;
  struct Time t34;
  struct Time t45;
  struct Time t56;
  int c7 = 0;
  int c8 = 0;
  int c9 = 0;
  Time__Time(&t12, c7, c8, c9);
  int c10 = 2;
  int c11 = 0;
  int c12 = 0;
  Time__Time(&t23, c10, c11, c12);
  int c13 = 21;
  int c14 = 34;
  int c15 = 0;
  Time__Time(&t34, c13, c14, c15);
  int c16 = 12;
  int c17 = 25;
  int c18 = 42;
  Time__Time(&t45, c16, c17, c18);
  int c19 = 27;
  int c20 = 74;
  int c21 = 99;
  Time__Time(&t56, c19, c20, c21);
  struct std::basic_ostream<char>* g22 = &_ZSt4cout;
  char* cast23 = (char*)_str;
  struct std::basic_ostream<char>* r24 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g22, cast23);
  char* cast25 = (char*)_str_1;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r24, cast25);
  Time__printUniversal(&t12);
  struct std::basic_ostream<char>* g27 = &_ZSt4cout;
  char* cast28 = (char*)_str_2;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g27, cast28);
  Time__printStandard(&t12);
  struct std::basic_ostream<char>* g30 = &_ZSt4cout;
  char* cast31 = (char*)_str_3;
  struct std::basic_ostream<char>* r32 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g30, cast31);
  Time__printUniversal(&t23);
  struct std::basic_ostream<char>* g33 = &_ZSt4cout;
  char* cast34 = (char*)_str_2;
  struct std::basic_ostream<char>* r35 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g33, cast34);
  Time__printStandard(&t23);
  struct std::basic_ostream<char>* g36 = &_ZSt4cout;
  char* cast37 = (char*)_str_4;
  struct std::basic_ostream<char>* r38 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g36, cast37);
  Time__printUniversal(&t34);
  struct std::basic_ostream<char>* g39 = &_ZSt4cout;
  char* cast40 = (char*)_str_2;
  struct std::basic_ostream<char>* r41 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g39, cast40);
  Time__printStandard(&t34);
  struct std::basic_ostream<char>* g42 = &_ZSt4cout;
  char* cast43 = (char*)_str_5;
  struct std::basic_ostream<char>* r44 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g42, cast43);
  Time__printUniversal(&t45);
  struct std::basic_ostream<char>* g45 = &_ZSt4cout;
  char* cast46 = (char*)_str_2;
  struct std::basic_ostream<char>* r47 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g45, cast46);
  Time__printStandard(&t45);
  struct std::basic_ostream<char>* g48 = &_ZSt4cout;
  char* cast49 = (char*)_str_6;
  struct std::basic_ostream<char>* r50 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g48, cast49);
  Time__printUniversal(&t56);
  struct std::basic_ostream<char>* g51 = &_ZSt4cout;
  char* cast52 = (char*)_str_2;
  struct std::basic_ostream<char>* r53 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g51, cast52);
  Time__printStandard(&t56);
  struct std::basic_ostream<char>* g54 = &_ZSt4cout;
  void* g55 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r56 = std__ostream__operator___std__ostream_____(g54, g55);
  int c57 = 0;
  __retval1 = c57;
  int t58 = __retval1;
  return t58;
}

