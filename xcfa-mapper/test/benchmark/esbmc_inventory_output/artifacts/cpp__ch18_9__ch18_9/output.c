// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[23];
char _str_1[7] = "p is a";
char _str_2[11] = "p is not a";
char _str_3[19] = " lowercase letter\\0A";
char _str_4[7] = "P is a";
char _str_5[11] = "P is not a";
char _str_6[7] = "5 is a";
char _str_7[11] = "5 is not a";
char _str_8[7] = "! is a";
char _str_9[11] = "! is not a";
char _str_10[24];
char _str_11[8] = "D is an";
char _str_12[12] = "D is not an";
char _str_13[19] = " uppercase letter\\0A";
char _str_14[8] = "d is an";
char _str_15[12] = "d is not an";
char _str_16[8] = "8 is an";
char _str_17[12] = "8 is not an";
char _str_18[8] = "$ is an";
char _str_19[12] = "$ is not an";
char _str_20[30] = "\\0Au converted to uppercase is ";
char _str_21[30] = "\\0A7 converted to uppercase is ";
char _str_22[30] = "\\0A$ converted to uppercase is ";
char _str_23[30] = "\\0AL converted to lowercase is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: islower
int islower(int);

// function: isupper
int isupper(int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: toupper
int toupper(int);

// function: tolower
int tolower(int);

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
  struct std::basic_ostream<char>* r4 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g2, cast3);
  char c5 = 112;
  int cast6 = (int)c5;
  int r7 = islower(cast6);
  _Bool cast8 = (_Bool)r7;
  char* cast9 = (char*)_str_1;
  char* cast10 = (char*)_str_2;
  char* sel11 = cast8 ? cast9 : cast10;
  struct std::basic_ostream<char>* r12 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r4, sel11);
  char* cast13 = (char*)_str_3;
  struct std::basic_ostream<char>* r14 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r12, cast13);
  char c15 = 80;
  int cast16 = (int)c15;
  int r17 = islower(cast16);
  _Bool cast18 = (_Bool)r17;
  char* cast19 = (char*)_str_4;
  char* cast20 = (char*)_str_5;
  char* sel21 = cast18 ? cast19 : cast20;
  struct std::basic_ostream<char>* r22 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r14, sel21);
  char* cast23 = (char*)_str_3;
  struct std::basic_ostream<char>* r24 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r22, cast23);
  char c25 = 53;
  int cast26 = (int)c25;
  int r27 = islower(cast26);
  _Bool cast28 = (_Bool)r27;
  char* cast29 = (char*)_str_6;
  char* cast30 = (char*)_str_7;
  char* sel31 = cast28 ? cast29 : cast30;
  struct std::basic_ostream<char>* r32 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r24, sel31);
  char* cast33 = (char*)_str_3;
  struct std::basic_ostream<char>* r34 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r32, cast33);
  char c35 = 33;
  int cast36 = (int)c35;
  int r37 = islower(cast36);
  _Bool cast38 = (_Bool)r37;
  char* cast39 = (char*)_str_8;
  char* cast40 = (char*)_str_9;
  char* sel41 = cast38 ? cast39 : cast40;
  struct std::basic_ostream<char>* r42 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r34, sel41);
  char* cast43 = (char*)_str_3;
  struct std::basic_ostream<char>* r44 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r42, cast43);
  struct std::basic_ostream<char>* g45 = &_ZSt4cout;
  char* cast46 = (char*)_str_10;
  struct std::basic_ostream<char>* r47 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g45, cast46);
  char c48 = 68;
  int cast49 = (int)c48;
  int r50 = isupper(cast49);
  _Bool cast51 = (_Bool)r50;
  char* cast52 = (char*)_str_11;
  char* cast53 = (char*)_str_12;
  char* sel54 = cast51 ? cast52 : cast53;
  struct std::basic_ostream<char>* r55 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r47, sel54);
  char* cast56 = (char*)_str_13;
  struct std::basic_ostream<char>* r57 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r55, cast56);
  char c58 = 100;
  int cast59 = (int)c58;
  int r60 = isupper(cast59);
  _Bool cast61 = (_Bool)r60;
  char* cast62 = (char*)_str_14;
  char* cast63 = (char*)_str_15;
  char* sel64 = cast61 ? cast62 : cast63;
  struct std::basic_ostream<char>* r65 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r57, sel64);
  char* cast66 = (char*)_str_13;
  struct std::basic_ostream<char>* r67 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r65, cast66);
  char c68 = 56;
  int cast69 = (int)c68;
  int r70 = isupper(cast69);
  _Bool cast71 = (_Bool)r70;
  char* cast72 = (char*)_str_16;
  char* cast73 = (char*)_str_17;
  char* sel74 = cast71 ? cast72 : cast73;
  struct std::basic_ostream<char>* r75 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r67, sel74);
  char* cast76 = (char*)_str_13;
  struct std::basic_ostream<char>* r77 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r75, cast76);
  char c78 = 36;
  int cast79 = (int)c78;
  int r80 = isupper(cast79);
  _Bool cast81 = (_Bool)r80;
  char* cast82 = (char*)_str_18;
  char* cast83 = (char*)_str_19;
  char* sel84 = cast81 ? cast82 : cast83;
  struct std::basic_ostream<char>* r85 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r77, sel84);
  char* cast86 = (char*)_str_13;
  struct std::basic_ostream<char>* r87 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r85, cast86);
  struct std::basic_ostream<char>* g88 = &_ZSt4cout;
  char* cast89 = (char*)_str_20;
  struct std::basic_ostream<char>* r90 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g88, cast89);
  char c91 = 117;
  int cast92 = (int)c91;
  int r93 = toupper(cast92);
  char cast94 = (char)r93;
  struct std::basic_ostream<char>* r95 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r90, cast94);
  char* cast96 = (char*)_str_21;
  struct std::basic_ostream<char>* r97 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r95, cast96);
  char c98 = 55;
  int cast99 = (int)c98;
  int r100 = toupper(cast99);
  char cast101 = (char)r100;
  struct std::basic_ostream<char>* r102 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r97, cast101);
  char* cast103 = (char*)_str_22;
  struct std::basic_ostream<char>* r104 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r102, cast103);
  char c105 = 36;
  int cast106 = (int)c105;
  int r107 = toupper(cast106);
  char cast108 = (char)r107;
  struct std::basic_ostream<char>* r109 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r104, cast108);
  char* cast110 = (char*)_str_23;
  struct std::basic_ostream<char>* r111 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r109, cast110);
  char c112 = 76;
  int cast113 = (int)c112;
  int r114 = tolower(cast113);
  char cast115 = (char)r114;
  struct std::basic_ostream<char>* r116 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r111, cast115);
  void* g117 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r118 = std__ostream__operator___std__ostream_____(r116, g117);
  int c119 = 0;
  __retval1 = c119;
  int t120 = __retval1;
  return t120;
}

