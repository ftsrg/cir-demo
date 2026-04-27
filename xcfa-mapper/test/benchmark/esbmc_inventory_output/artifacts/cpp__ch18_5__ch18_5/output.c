// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[39] = "The result of combining the following\\0A";
char _str_7[4] = " = ";
char _str_1[37] = "using the bitwise AND operator & is\\0A";
char _str_2[40] = "\\0AThe result of combining the following\\0A";
char _str_3[46] = "using the bitwise inclusive OR operator | is\\0A";
char _str_4[46] = "using the bitwise exclusive OR operator ^ is\\0A";
char _str_5[26] = "\\0AThe one's complement of\\0A";
char _str_6[3] = "is";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v0) {
bb1:
  int __n2;
  struct std::_Setw __retval3;
  __n2 = v0;
  int t4 = __n2;
  __retval3._M_n = t4;
  struct std::_Setw t5 = __retval3;
  return t5;
}

// function: _ZNSolsEj
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, unsigned int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _Z11displayBitsj
void displayBits(unsigned int v6) {
bb7:
  unsigned int i20;
  unsigned int value21;
  int SHIFT22;
  unsigned int MASK23;
  struct std::_Setw agg.tmp024;
  value21 = v6;
  int c25 = 31;
  SHIFT22 = c25;
  unsigned int c26 = -2147483648;
  MASK23 = c26;
  struct std::basic_ostream<char>* g27 = &_ZSt4cout;
  int c28 = 10;
  struct std::_Setw r29 = std__setw(c28);
  agg.tmp024 = r29;
  struct std::_Setw t30 = agg.tmp024;
  struct std::basic_ostream<char>* r31 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g27, t30);
  unsigned int t32 = value21;
  struct std::basic_ostream<char>* r33 = std__ostream__operator__(r31, t32);
  char* cast34 = (char*)_str_7;
  struct std::basic_ostream<char>* r35 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r33, cast34);
  goto bb8;
bb8:
  int c36 = 1;
  unsigned int cast37 = (unsigned int)c36;
  i20 = cast37;
  goto bb9;
bb9:
  unsigned int t38 = i20;
  int c39 = 31;
  int c40 = 1;
  int b41 = c39 + c40;
  unsigned int cast42 = (unsigned int)b41;
  _Bool c43 = (t38 <= cast42) ? 1 : 0;
  if (c43) goto bb10; else goto bb18;
bb10:
  goto bb11;
bb11:
  struct std::basic_ostream<char>* g44 = &_ZSt4cout;
  unsigned int t45 = value21;
  unsigned int c46 = -2147483648;
  unsigned int b47 = t45 & c46;
  _Bool cast48 = (_Bool)b47;
  char c49 = 49;
  char c50 = 48;
  char sel51 = cast48 ? c49 : c50;
  struct std::basic_ostream<char>* r52 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g44, sel51);
  int c53 = 1;
  unsigned int t54 = value21;
  unsigned int s55 = t54 << c53;
  value21 = s55;
  goto bb12;
bb12:
  unsigned int t56 = i20;
  int c57 = 8;
  unsigned int cast58 = (unsigned int)c57;
  unsigned int b59 = t56 % cast58;
  int c60 = 0;
  unsigned int cast61 = (unsigned int)c60;
  _Bool c62 = (b59 == cast61) ? 1 : 0;
  if (c62) goto bb13; else goto bb14;
bb13:
  struct std::basic_ostream<char>* g63 = &_ZSt4cout;
  char c64 = 32;
  struct std::basic_ostream<char>* r65 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g63, c64);
  goto bb14;
bb14:
  goto bb15;
bb15:
  goto bb16;
bb16:
  goto bb17;
bb17:
  unsigned int t66 = i20;
  unsigned int u67 = ++t66;
  i20 = u67;
  goto bb9;
bb18:
  goto bb19;
bb19:
  struct std::basic_ostream<char>* g68 = &_ZSt4cout;
  void* g69 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r70 = std__ostream__operator___std__ostream_____(g68, g69);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb71:
  int __retval72;
  unsigned int number173;
  unsigned int number274;
  unsigned int mask75;
  unsigned int setBits76;
  long long c77 = 2179876355;
  unsigned int cast78 = (unsigned int)c77;
  number173 = cast78;
  int c79 = 1;
  unsigned int cast80 = (unsigned int)c79;
  mask75 = cast80;
  struct std::basic_ostream<char>* g81 = &_ZSt4cout;
  char* cast82 = (char*)_str;
  struct std::basic_ostream<char>* r83 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g81, cast82);
  unsigned int t84 = number173;
  displayBits(t84);
  unsigned int t85 = mask75;
  displayBits(t85);
  struct std::basic_ostream<char>* g86 = &_ZSt4cout;
  char* cast87 = (char*)_str_1;
  struct std::basic_ostream<char>* r88 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g86, cast87);
  unsigned int t89 = number173;
  unsigned int t90 = mask75;
  unsigned int b91 = t89 & t90;
  displayBits(b91);
  int c92 = 15;
  unsigned int cast93 = (unsigned int)c92;
  number173 = cast93;
  int c94 = 241;
  unsigned int cast95 = (unsigned int)c94;
  setBits76 = cast95;
  struct std::basic_ostream<char>* g96 = &_ZSt4cout;
  char* cast97 = (char*)_str_2;
  struct std::basic_ostream<char>* r98 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g96, cast97);
  unsigned int t99 = number173;
  displayBits(t99);
  unsigned int t100 = setBits76;
  displayBits(t100);
  struct std::basic_ostream<char>* g101 = &_ZSt4cout;
  char* cast102 = (char*)_str_3;
  struct std::basic_ostream<char>* r103 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g101, cast102);
  unsigned int t104 = number173;
  unsigned int t105 = setBits76;
  unsigned int b106 = t104 | t105;
  displayBits(b106);
  int c107 = 139;
  unsigned int cast108 = (unsigned int)c107;
  number173 = cast108;
  int c109 = 199;
  unsigned int cast110 = (unsigned int)c109;
  number274 = cast110;
  struct std::basic_ostream<char>* g111 = &_ZSt4cout;
  char* cast112 = (char*)_str_2;
  struct std::basic_ostream<char>* r113 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g111, cast112);
  unsigned int t114 = number173;
  displayBits(t114);
  unsigned int t115 = number274;
  displayBits(t115);
  struct std::basic_ostream<char>* g116 = &_ZSt4cout;
  char* cast117 = (char*)_str_4;
  struct std::basic_ostream<char>* r118 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g116, cast117);
  unsigned int t119 = number173;
  unsigned int t120 = number274;
  unsigned int b121 = t119 ^ t120;
  displayBits(b121);
  int c122 = 21845;
  unsigned int cast123 = (unsigned int)c122;
  number173 = cast123;
  struct std::basic_ostream<char>* g124 = &_ZSt4cout;
  char* cast125 = (char*)_str_5;
  struct std::basic_ostream<char>* r126 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g124, cast125);
  unsigned int t127 = number173;
  displayBits(t127);
  struct std::basic_ostream<char>* g128 = &_ZSt4cout;
  char* cast129 = (char*)_str_6;
  struct std::basic_ostream<char>* r130 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g128, cast129);
  void* g131 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r132 = std__ostream__operator___std__ostream_____(r130, g131);
  unsigned int t133 = number173;
  unsigned int u134 = ~t133;
  displayBits(u134);
  int c135 = 0;
  __retval72 = c135;
  int t136 = __retval72;
  return t136;
}

