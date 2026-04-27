// Struct definitions (auto-parsed)
struct std::_Setprecision { int _M_n; };
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[5] = "Year";
char _str_1[18] = "Amount on deposit";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(struct std::basic_ostream<char>*, struct std::_Setw);

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

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision(struct std::basic_ostream<char>*, struct std::_Setprecision);

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v6, int v7) {
bb8:
  int* __a9;
  int __b10;
  int* __retval11;
  __a9 = v6;
  __b10 = v7;
  int* t12 = __a9;
  int t13 = *t12;
  int t14 = __b10;
  int r15 = _ZStanSt13_Ios_FmtflagsS_(t13, t14);
  int* t16 = __a9;
  *t16 = r15;
  __retval11 = t16;
  int* t17 = __retval11;
  return t17;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v18) {
bb19:
  int __a20;
  int __retval21;
  __a20 = v18;
  int t22 = __a20;
  int u23 = ~t22;
  __retval21 = u23;
  int t24 = __retval21;
  return t24;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int _ZStorSt13_Ios_FmtflagsS_(int v25, int v26) {
bb27:
  int __a28;
  int __b29;
  int __retval30;
  __a28 = v25;
  __b29 = v26;
  int t31 = __a28;
  int t32 = __b29;
  int b33 = t31 | t32;
  __retval30 = b33;
  int t34 = __retval30;
  return t34;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* _ZStoRRSt13_Ios_FmtflagsS_(int* v35, int v36) {
bb37:
  int* __a38;
  int __b39;
  int* __retval40;
  __a38 = v35;
  __b39 = v36;
  int* t41 = __a38;
  int t42 = *t41;
  int t43 = __b39;
  int r44 = _ZStorSt13_Ios_FmtflagsS_(t42, t43);
  int* t45 = __a38;
  *t45 = r44;
  __retval40 = t45;
  int* t46 = __retval40;
  return t46;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v47, int v48) {
bb49:
  int __a50;
  int __b51;
  int __retval52;
  __a50 = v47;
  __b51 = v48;
  int t53 = __a50;
  int t54 = __b51;
  int b55 = t53 & t54;
  __retval52 = b55;
  int t56 = __retval52;
  return t56;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std::ios_base* v57, int v58, int v59) {
bb60:
  int this61[8];
  int __fmtfl62;
  int __mask63;
  int __retval64;
  int __old65;
  this61 = v57;
  __fmtfl62 = v58;
  __mask63 = v59;
  struct std::ios_base* t66 = this61;
  int t67 = *t66->_M_flags;
  __old65 = t67;
  int t68 = __mask63;
  int r69 = _ZStcoSt13_Ios_Fmtflags(t68);
  int* r70 = _ZStaNRSt13_Ios_FmtflagsS_(t66->_M_flags, r69);
  int t71 = __fmtfl62;
  int t72 = __mask63;
  int r73 = _ZStanSt13_Ios_FmtflagsS_(t71, t72);
  int* r74 = _ZStoRRSt13_Ios_FmtflagsS_(t66->_M_flags, r73);
  int t75 = __old65;
  __retval64 = t75;
  int t76 = __retval64;
  return t76;
}

// function: _ZSt5fixedRSt8ios_base
struct std::ios_base* std__fixed(struct std::ios_base* v77) {
bb78:
  int __base79[8];
  int __retval80[8];
  __base79 = v77;
  struct std::ios_base* t81 = __base79;
  int c82 = 4;
  int c83 = 260;
  int r84 = std__ios_base__setf(t81, c82, c83);
  struct std::ios_base* t85 = __base79;
  __retval80 = t85;
  struct std::ios_base* t86 = __retval80;
  return t86;
}

// function: _ZSt12setprecisioni
struct std::_Setprecision std__setprecision(int v87) {
bb88:
  int __n89;
  struct std::_Setprecision __retval90;
  __n89 = v87;
  int t91 = __n89;
  __retval90._M_n = t91;
  struct std::_Setprecision t92 = __retval90;
  return t92;
}

// function: pow
double pow(double, double);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: main
int main() {
bb93:
  int year102;
  struct std::_Setw agg.tmp2103;
  struct std::_Setw agg.tmp3104;
  int __retval105;
  double amount106;
  double principal107;
  double rate108;
  struct std::_Setw agg.tmp0109;
  struct std::_Setprecision agg.tmp1110;
  double c111 = 1000;
  principal107 = c111;
  double c112 = 0.050000000000000003;
  rate108 = c112;
  struct std::basic_ostream<char>* g113 = &_ZSt4cout;
  char* cast114 = (char*)_str;
  struct std::basic_ostream<char>* r115 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g113, cast114);
  int c116 = 21;
  struct std::_Setw r117 = std__setw(c116);
  agg.tmp0109 = r117;
  struct std::_Setw t118 = agg.tmp0109;
  struct std::basic_ostream<char>* r119 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r115, t118);
  char* cast120 = (char*)_str_1;
  struct std::basic_ostream<char>* r121 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r119, cast120);
  void* g122 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r123 = std__ostream__operator___std__ostream_____(r121, g122);
  struct std::basic_ostream<char>* g124 = &_ZSt4cout;
  void* g125 = &_ZSt5fixedRSt8ios_base;
  struct std::basic_ostream<char>* r126 = std__ostream__operator___std__ios_base_____(g124, g125);
  int c127 = 2;
  struct std::_Setprecision r128 = std__setprecision(c127);
  agg.tmp1110 = r128;
  struct std::_Setprecision t129 = agg.tmp1110;
  struct std::basic_ostream<char>* r130 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision(r126, t129);
  goto bb94;
bb94:
  int c131 = 1;
  year102 = c131;
  goto bb95;
bb95:
  int t132 = year102;
  int c133 = 10;
  _Bool c134 = (t132 <= c133) ? 1 : 0;
  if (c134) goto bb96; else goto bb100;
bb96:
  goto bb97;
bb97:
  double t135 = principal107;
  double c136 = 1;
  double t137 = rate108;
  double b138 = c136 + t137;
  int t139 = year102;
  double cast140 = (double)t139;
  double r141 = pow(b138, cast140);
  double b142 = t135 * r141;
  amount106 = b142;
  struct std::basic_ostream<char>* g143 = &_ZSt4cout;
  int c144 = 4;
  struct std::_Setw r145 = std__setw(c144);
  agg.tmp2103 = r145;
  struct std::_Setw t146 = agg.tmp2103;
  struct std::basic_ostream<char>* r147 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(g143, t146);
  int t148 = year102;
  struct std::basic_ostream<char>* r149 = _ZNSolsEi(r147, t148);
  int c150 = 21;
  struct std::_Setw r151 = std__setw(c150);
  agg.tmp3104 = r151;
  struct std::_Setw t152 = agg.tmp3104;
  struct std::basic_ostream<char>* r153 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r149, t152);
  double t154 = amount106;
  struct std::basic_ostream<char>* r155 = _ZNSolsEd(r153, t154);
  void* g156 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r157 = std__ostream__operator___std__ostream_____(r155, g156);
  goto bb98;
bb98:
  goto bb99;
bb99:
  int t158 = year102;
  int u159 = ++t158;
  year102 = u159;
  goto bb95;
bb100:
  goto bb101;
bb101:
  int c160 = 0;
  __retval105 = c160;
  int t161 = __retval105;
  return t161;
}

