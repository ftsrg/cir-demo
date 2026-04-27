// Struct definitions (auto-parsed)
struct std::_Setbase { int _M_base; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[25];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[21];
char _str_2[15];
char _str_3[17];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v0, int v1) {
bb2:
  int* __a3;
  int __b4;
  int* __retval5;
  __a3 = v0;
  __b4 = v1;
  int* t6 = __a3;
  int t7 = *t6;
  int t8 = __b4;
  int r9 = _ZStanSt13_Ios_FmtflagsS_(t7, t8);
  int* t10 = __a3;
  *t10 = r9;
  __retval5 = t10;
  int* t11 = __retval5;
  return t11;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v12) {
bb13:
  int __a14;
  int __retval15;
  __a14 = v12;
  int t16 = __a14;
  int u17 = ~t16;
  __retval15 = u17;
  int t18 = __retval15;
  return t18;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int _ZStorSt13_Ios_FmtflagsS_(int v19, int v20) {
bb21:
  int __a22;
  int __b23;
  int __retval24;
  __a22 = v19;
  __b23 = v20;
  int t25 = __a22;
  int t26 = __b23;
  int b27 = t25 | t26;
  __retval24 = b27;
  int t28 = __retval24;
  return t28;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* _ZStoRRSt13_Ios_FmtflagsS_(int* v29, int v30) {
bb31:
  int* __a32;
  int __b33;
  int* __retval34;
  __a32 = v29;
  __b33 = v30;
  int* t35 = __a32;
  int t36 = *t35;
  int t37 = __b33;
  int r38 = _ZStorSt13_Ios_FmtflagsS_(t36, t37);
  int* t39 = __a32;
  *t39 = r38;
  __retval34 = t39;
  int* t40 = __retval34;
  return t40;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v41, int v42) {
bb43:
  int __a44;
  int __b45;
  int __retval46;
  __a44 = v41;
  __b45 = v42;
  int t47 = __a44;
  int t48 = __b45;
  int b49 = t47 & t48;
  __retval46 = b49;
  int t50 = __retval46;
  return t50;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std::ios_base* v51, int v52, int v53) {
bb54:
  int this55[8];
  int __fmtfl56;
  int __mask57;
  int __retval58;
  int __old59;
  this55 = v51;
  __fmtfl56 = v52;
  __mask57 = v53;
  struct std::ios_base* t60 = this55;
  int t61 = *t60->_M_flags;
  __old59 = t61;
  int t62 = __mask57;
  int r63 = _ZStcoSt13_Ios_Fmtflags(t62);
  int* r64 = _ZStaNRSt13_Ios_FmtflagsS_(t60->_M_flags, r63);
  int t65 = __fmtfl56;
  int t66 = __mask57;
  int r67 = _ZStanSt13_Ios_FmtflagsS_(t65, t66);
  int* r68 = _ZStoRRSt13_Ios_FmtflagsS_(t60->_M_flags, r67);
  int t69 = __old59;
  __retval58 = t69;
  int t70 = __retval58;
  return t70;
}

// function: _ZSt3hexRSt8ios_base
struct std::ios_base* std__hex(struct std::ios_base* v71) {
bb72:
  int __base73[8];
  int __retval74[8];
  __base73 = v71;
  struct std::ios_base* t75 = __base73;
  int c76 = 8;
  int c77 = 74;
  int r78 = std__ios_base__setf(t75, c76, c77);
  struct std::ios_base* t79 = __base73;
  __retval74 = t79;
  struct std::ios_base* t80 = __retval74;
  return t80;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZSt3decRSt8ios_base
struct std::ios_base* std__dec(struct std::ios_base* v81) {
bb82:
  int __base83[8];
  int __retval84[8];
  __base83 = v81;
  struct std::ios_base* t85 = __base83;
  int c86 = 2;
  int c87 = 74;
  int r88 = std__ios_base__setf(t85, c86, c87);
  struct std::ios_base* t89 = __base83;
  __retval84 = t89;
  struct std::ios_base* t90 = __retval84;
  return t90;
}

// function: _ZSt3octRSt8ios_base
struct std::ios_base* std__oct(struct std::ios_base* v91) {
bb92:
  int __base93[8];
  int __retval94[8];
  __base93 = v91;
  struct std::ios_base* t95 = __base93;
  int c96 = 64;
  int c97 = 74;
  int r98 = std__ios_base__setf(t95, c96, c97);
  struct std::ios_base* t99 = __base93;
  __retval94 = t99;
  struct std::ios_base* t100 = __retval94;
  return t100;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_Setbase
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setbase);

// function: _ZSt7setbasei
struct std::_Setbase std__setbase(int v101) {
bb102:
  int __base103;
  struct std::_Setbase __retval104;
  __base103 = v101;
  int t105 = __base103;
  __retval104._M_base = t105;
  struct std::_Setbase t106 = __retval104;
  return t106;
}

// function: main
int main() {
bb107:
  int __retval108;
  int number109;
  struct std::_Setbase agg.tmp0110;
  struct std::basic_ostream<char>* g111 = &_ZSt4cout;
  char* cast112 = (char*)_str;
  struct std::basic_ostream<char>* r113 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g111, cast112);
  struct std::basic_istream<char>* g114 = &_ZSt3cin;
  struct std::basic_istream<char>* r115 = std__istream__operator__(g114, &number109);
  struct std::basic_ostream<char>* g116 = &_ZSt4cout;
  int t117 = number109;
  struct std::basic_ostream<char>* r118 = std__ostream__operator__(g116, t117);
  char* cast119 = (char*)_str_1;
  struct std::basic_ostream<char>* r120 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r118, cast119);
  void* g121 = &_ZSt3hexRSt8ios_base;
  struct std::basic_ostream<char>* r122 = std__ostream__operator___std__ios_base_____(r120, g121);
  int t123 = number109;
  struct std::basic_ostream<char>* r124 = std__ostream__operator__(r122, t123);
  void* g125 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r126 = std__ostream__operator___std__ostream_____(r124, g125);
  struct std::basic_ostream<char>* g127 = &_ZSt4cout;
  void* g128 = &_ZSt3decRSt8ios_base;
  struct std::basic_ostream<char>* r129 = std__ostream__operator___std__ios_base_____(g127, g128);
  int t130 = number109;
  struct std::basic_ostream<char>* r131 = std__ostream__operator__(r129, t130);
  char* cast132 = (char*)_str_2;
  struct std::basic_ostream<char>* r133 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r131, cast132);
  void* g134 = &_ZSt3octRSt8ios_base;
  struct std::basic_ostream<char>* r135 = std__ostream__operator___std__ios_base_____(r133, g134);
  int t136 = number109;
  struct std::basic_ostream<char>* r137 = std__ostream__operator__(r135, t136);
  void* g138 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r139 = std__ostream__operator___std__ostream_____(r137, g138);
  struct std::basic_ostream<char>* g140 = &_ZSt4cout;
  int c141 = 10;
  struct std::_Setbase r142 = std__setbase(c141);
  agg.tmp0110 = r142;
  struct std::_Setbase t143 = agg.tmp0110;
  struct std::basic_ostream<char>* r144 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g140, t143);
  int t145 = number109;
  struct std::basic_ostream<char>* r146 = std__ostream__operator__(r144, t145);
  char* cast147 = (char*)_str_3;
  struct std::basic_ostream<char>* r148 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r146, cast147);
  int t149 = number109;
  struct std::basic_ostream<char>* r150 = std__ostream__operator__(r148, t149);
  void* g151 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r152 = std__ostream__operator___std__ostream_____(r150, g151);
  int c153 = 0;
  __retval108 = c153;
  int t154 = __retval108;
  return t154;
}

