// Struct definitions (auto-parsed)
struct Date { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[7] = "d1 is ";
char _str_1[8] = "\\0Ad2 is ";
char _str_2[8] = "\\0Ad3 is ";
char _str_3[14] = "\\0A\\0Ad2 += 7 is ";
char _str_4[11] = "\\0A\\0A  d3 is ";
char _str_5[10] = "\\0A++d3 is ";
char _str_6[38];
char _str_7[9] = "  d4 is ";
char _str_8[9] = "++d4 is ";
char _str_9[39];
char _str_10[9] = "d4++ is ";
// function: _ZN4DateC1Eiii
void Date__Date(struct Date*, int, int, int);

// function: _ZlsRSoRK4Date
struct std::basic_ostream<char>* operator__(struct std::basic_ostream<char>*, struct Date*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZN4DatepLEi
struct Date* _ZN4DatepLEi(struct Date*, int);

// function: _ZN4Date7setDateEiii
void Date__setDate(struct Date*, int, int, int);

// function: _ZN4DateppEv
struct Date* _ZN4DateppEv(struct Date*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZN4DateppEi
struct Date _ZN4DateppEi(struct Date*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  struct Date ref.tmp03;
  int __retval4;
  struct Date d15;
  struct Date d26;
  struct Date d37;
  struct Date d48;
  int c9 = 1;
  int c10 = 1;
  int c11 = 1900;
  Date__Date(&d15, c9, c10, c11);
  int c12 = 12;
  int c13 = 27;
  int c14 = 1992;
  Date__Date(&d26, c12, c13, c14);
  int c15 = 0;
  int c16 = 99;
  int c17 = 8045;
  Date__Date(&d37, c15, c16, c17);
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str;
  struct std::basic_ostream<char>* r20 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g18, cast19);
  struct std::basic_ostream<char>* r21 = operator__(r20, &d15);
  char* cast22 = (char*)_str_1;
  struct std::basic_ostream<char>* r23 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r21, cast22);
  struct std::basic_ostream<char>* r24 = operator__(r23, &d26);
  char* cast25 = (char*)_str_2;
  struct std::basic_ostream<char>* r26 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r24, cast25);
  struct std::basic_ostream<char>* r27 = operator__(r26, &d37);
  struct std::basic_ostream<char>* g28 = &_ZSt4cout;
  char* cast29 = (char*)_str_3;
  struct std::basic_ostream<char>* r30 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g28, cast29);
  int c31 = 7;
  struct Date* r32 = _ZN4DatepLEi(&d26, c31);
  struct std::basic_ostream<char>* r33 = operator__(r30, r32);
  int c34 = 2;
  int c35 = 28;
  int c36 = 1992;
  Date__setDate(&d37, c34, c35, c36);
  struct std::basic_ostream<char>* g37 = &_ZSt4cout;
  char* cast38 = (char*)_str_4;
  struct std::basic_ostream<char>* r39 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g37, cast38);
  struct std::basic_ostream<char>* r40 = operator__(r39, &d37);
  struct std::basic_ostream<char>* g41 = &_ZSt4cout;
  char* cast42 = (char*)_str_5;
  struct std::basic_ostream<char>* r43 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g41, cast42);
  struct Date* r44 = _ZN4DateppEv(&d37);
  struct std::basic_ostream<char>* r45 = operator__(r43, r44);
  int c46 = 7;
  int c47 = 13;
  int c48 = 2002;
  Date__Date(&d48, c46, c47, c48);
  struct std::basic_ostream<char>* g49 = &_ZSt4cout;
  char* cast50 = (char*)_str_6;
  struct std::basic_ostream<char>* r51 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g49, cast50);
  char* cast52 = (char*)_str_7;
  struct std::basic_ostream<char>* r53 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r51, cast52);
  struct std::basic_ostream<char>* r54 = operator__(r53, &d48);
  char c55 = 10;
  struct std::basic_ostream<char>* r56 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r54, c55);
  struct std::basic_ostream<char>* g57 = &_ZSt4cout;
  char* cast58 = (char*)_str_8;
  struct std::basic_ostream<char>* r59 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g57, cast58);
  struct Date* r60 = _ZN4DateppEv(&d48);
  struct std::basic_ostream<char>* r61 = operator__(r59, r60);
  char c62 = 10;
  struct std::basic_ostream<char>* r63 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r61, c62);
  struct std::basic_ostream<char>* g64 = &_ZSt4cout;
  char* cast65 = (char*)_str_7;
  struct std::basic_ostream<char>* r66 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g64, cast65);
  struct std::basic_ostream<char>* r67 = operator__(r66, &d48);
  struct std::basic_ostream<char>* g68 = &_ZSt4cout;
  char* cast69 = (char*)_str_9;
  struct std::basic_ostream<char>* r70 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g68, cast69);
  char* cast71 = (char*)_str_7;
  struct std::basic_ostream<char>* r72 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r70, cast71);
  struct std::basic_ostream<char>* r73 = operator__(r72, &d48);
  char c74 = 10;
  struct std::basic_ostream<char>* r75 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r73, c74);
  goto bb1;
bb1:
  struct std::basic_ostream<char>* g76 = &_ZSt4cout;
  char* cast77 = (char*)_str_10;
  struct std::basic_ostream<char>* r78 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g76, cast77);
  int c79 = 0;
  struct Date r80 = _ZN4DateppEi(&d48, c79);
  ref.tmp03 = r80;
  struct std::basic_ostream<char>* r81 = operator__(r78, &ref.tmp03);
  char c82 = 10;
  struct std::basic_ostream<char>* r83 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r81, c82);
  goto bb2;
bb2:
  struct std::basic_ostream<char>* g84 = &_ZSt4cout;
  char* cast85 = (char*)_str_7;
  struct std::basic_ostream<char>* r86 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g84, cast85);
  struct std::basic_ostream<char>* r87 = operator__(r86, &d48);
  void* g88 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r89 = std__ostream__operator___std__ostream_____(r87, g88);
  int c90 = 0;
  __retval4 = c90;
  int t91 = __retval4;
  return t91;
}

