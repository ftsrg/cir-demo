// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[31];
char _str_1[5] = "is a";
char _str_2[9] = "is not a";
char _str_3[38] = " whitespace character\\0AHorizontal tab ";
char _str_4[23] = " whitespace character\\0A";
char _str_5[7] = "% is a";
char _str_6[11] = "% is not a";
char _str_7[32];
char _str_8[20] = " control character\\0A";
char _str_9[7] = "$ is a";
char _str_10[11] = "$ is not a";
char _str_11[24];
char _str_12[7] = "; is a";
char _str_13[11] = "; is not a";
char _str_14[24] = " punctuation character\\0A";
char _str_15[7] = "Y is a";
char _str_16[11] = "Y is not a";
char _str_17[7] = "# is a";
char _str_18[11] = "# is not a";
char _str_19[24];
char _str_20[27] = " printing character\\0AAlert ";
char _str_21[21] = " printing character\\0A";
char _str_22[24];
char _str_23[7] = "Q is a";
char _str_24[11] = "Q is not a";
char _str_25[46] = " printing character other than a space\\0ASpace ";
char _str_26[39] = " printing character other than a space";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: isspace
int isspace(int);

// function: iscntrl
int iscntrl(int);

// function: ispunct
int ispunct(int);

// function: isprint
int isprint(int);

// function: isgraph
int isgraph(int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  struct std::basic_ostream<char>* g2 = &_ZSt4cout;
  char* cast3 = (char*)_str;
  struct std::basic_ostream<char>* r4 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g2, cast3);
  char c5 = 10;
  int cast6 = (int)c5;
  int r7 = isspace(cast6);
  _Bool cast8 = (_Bool)r7;
  char* cast9 = (char*)_str_1;
  char* cast10 = (char*)_str_2;
  char* sel11 = cast8 ? cast9 : cast10;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r4, sel11);
  char* cast13 = (char*)_str_3;
  struct std::basic_ostream<char>* r14 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r12, cast13);
  char c15 = 9;
  int cast16 = (int)c15;
  int r17 = isspace(cast16);
  _Bool cast18 = (_Bool)r17;
  char* cast19 = (char*)_str_1;
  char* cast20 = (char*)_str_2;
  char* sel21 = cast18 ? cast19 : cast20;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r14, sel21);
  char* cast23 = (char*)_str_4;
  struct std::basic_ostream<char>* r24 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r22, cast23);
  char c25 = 37;
  int cast26 = (int)c25;
  int r27 = isspace(cast26);
  _Bool cast28 = (_Bool)r27;
  char* cast29 = (char*)_str_5;
  char* cast30 = (char*)_str_6;
  char* sel31 = cast28 ? cast29 : cast30;
  struct std::basic_ostream<char>* r32 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r24, sel31);
  char* cast33 = (char*)_str_4;
  struct std::basic_ostream<char>* r34 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r32, cast33);
  struct std::basic_ostream<char>* g35 = &_ZSt4cout;
  char* cast36 = (char*)_str_7;
  struct std::basic_ostream<char>* r37 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g35, cast36);
  char c38 = 10;
  int cast39 = (int)c38;
  int r40 = iscntrl(cast39);
  _Bool cast41 = (_Bool)r40;
  char* cast42 = (char*)_str_1;
  char* cast43 = (char*)_str_2;
  char* sel44 = cast41 ? cast42 : cast43;
  struct std::basic_ostream<char>* r45 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r37, sel44);
  char* cast46 = (char*)_str_8;
  struct std::basic_ostream<char>* r47 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r45, cast46);
  char c48 = 36;
  int cast49 = (int)c48;
  int r50 = iscntrl(cast49);
  _Bool cast51 = (_Bool)r50;
  char* cast52 = (char*)_str_9;
  char* cast53 = (char*)_str_10;
  char* sel54 = cast51 ? cast52 : cast53;
  struct std::basic_ostream<char>* r55 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r47, sel54);
  char* cast56 = (char*)_str_8;
  struct std::basic_ostream<char>* r57 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r55, cast56);
  struct std::basic_ostream<char>* g58 = &_ZSt4cout;
  char* cast59 = (char*)_str_11;
  struct std::basic_ostream<char>* r60 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g58, cast59);
  char c61 = 59;
  int cast62 = (int)c61;
  int r63 = ispunct(cast62);
  _Bool cast64 = (_Bool)r63;
  char* cast65 = (char*)_str_12;
  char* cast66 = (char*)_str_13;
  char* sel67 = cast64 ? cast65 : cast66;
  struct std::basic_ostream<char>* r68 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r60, sel67);
  char* cast69 = (char*)_str_14;
  struct std::basic_ostream<char>* r70 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r68, cast69);
  char c71 = 89;
  int cast72 = (int)c71;
  int r73 = ispunct(cast72);
  _Bool cast74 = (_Bool)r73;
  char* cast75 = (char*)_str_15;
  char* cast76 = (char*)_str_16;
  char* sel77 = cast74 ? cast75 : cast76;
  struct std::basic_ostream<char>* r78 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r70, sel77);
  char* cast79 = (char*)_str_14;
  struct std::basic_ostream<char>* r80 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r78, cast79);
  char c81 = 35;
  int cast82 = (int)c81;
  int r83 = ispunct(cast82);
  _Bool cast84 = (_Bool)r83;
  char* cast85 = (char*)_str_17;
  char* cast86 = (char*)_str_18;
  char* sel87 = cast84 ? cast85 : cast86;
  struct std::basic_ostream<char>* r88 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r80, sel87);
  char* cast89 = (char*)_str_14;
  struct std::basic_ostream<char>* r90 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r88, cast89);
  struct std::basic_ostream<char>* g91 = &_ZSt4cout;
  char* cast92 = (char*)_str_19;
  struct std::basic_ostream<char>* r93 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g91, cast92);
  char c94 = 36;
  int cast95 = (int)c94;
  int r96 = isprint(cast95);
  _Bool cast97 = (_Bool)r96;
  char* cast98 = (char*)_str_9;
  char* cast99 = (char*)_str_10;
  char* sel100 = cast97 ? cast98 : cast99;
  struct std::basic_ostream<char>* r101 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r93, sel100);
  char* cast102 = (char*)_str_20;
  struct std::basic_ostream<char>* r103 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r101, cast102);
  char c104 = 7;
  int cast105 = (int)c104;
  int r106 = isprint(cast105);
  _Bool cast107 = (_Bool)r106;
  char* cast108 = (char*)_str_1;
  char* cast109 = (char*)_str_2;
  char* sel110 = cast107 ? cast108 : cast109;
  struct std::basic_ostream<char>* r111 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r103, sel110);
  char* cast112 = (char*)_str_21;
  struct std::basic_ostream<char>* r113 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r111, cast112);
  struct std::basic_ostream<char>* g114 = &_ZSt4cout;
  char* cast115 = (char*)_str_22;
  struct std::basic_ostream<char>* r116 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g114, cast115);
  char c117 = 81;
  int cast118 = (int)c117;
  int r119 = isgraph(cast118);
  _Bool cast120 = (_Bool)r119;
  char* cast121 = (char*)_str_23;
  char* cast122 = (char*)_str_24;
  char* sel123 = cast120 ? cast121 : cast122;
  struct std::basic_ostream<char>* r124 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r116, sel123);
  char* cast125 = (char*)_str_25;
  struct std::basic_ostream<char>* r126 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r124, cast125);
  char c127 = 32;
  int cast128 = (int)c127;
  int r129 = isgraph(cast128);
  _Bool cast130 = (_Bool)r129;
  char* cast131 = (char*)_str_1;
  char* cast132 = (char*)_str_2;
  char* sel133 = cast130 ? cast131 : cast132;
  struct std::basic_ostream<char>* r134 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r126, sel133);
  char* cast135 = (char*)_str_26;
  struct std::basic_ostream<char>* r136 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r134, cast135);
  void* g137 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r138 = std__ostream__operator___std__ostream_____(r136, g137);
  int c139 = 0;
  __retval1 = c139;
  int t140 = __retval1;
  return t140;
}

