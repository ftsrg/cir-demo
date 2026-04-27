// Struct definitions (auto-parsed)
struct std::_Setprecision { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; long long _M_precision; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[38] = "Square root of 2 with precisions 0-9.";
char _str_1[43] = "Precision set by ios_base member-function ";
char _str_2[11];
char _str_3[38] = "\\0APrecision set by stream-manipulator ";
char _str_4[14];
// function: sqrt
double sqrt(double);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

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

// function: _ZSt5fixedRSt8ios_base
struct std::ios_base* std__fixed(struct std::ios_base* v71) {
bb72:
  int __base73[8];
  int __retval74[8];
  __base73 = v71;
  struct std::ios_base* t75 = __base73;
  int c76 = 4;
  int c77 = 260;
  int r78 = std__ios_base__setf(t75, c76, c77);
  struct std::ios_base* t79 = __base73;
  __retval74 = t79;
  struct std::ios_base* t80 = __retval74;
  return t80;
}

// function: _ZNSt8ios_base9precisionEl
long long std__ios_base__precision(struct std::ios_base* v81, long long v82) {
bb83:
  int this84[8];
  long long __prec85;
  long long __retval86;
  long long __old87;
  this84 = v81;
  __prec85 = v82;
  struct std::ios_base* t88 = this84;
  long long t89 = *t88->_M_precision;
  __old87 = t89;
  long long t90 = __prec85;
  *t88->_M_precision = t90;
  long long t91 = __old87;
  __retval86 = t91;
  long long t92 = __retval86;
  return t92;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, double);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setprecision);

// function: _ZSt12setprecisioni
struct std::_Setprecision std__setprecision(int v93) {
bb94:
  int __n95;
  struct std::_Setprecision __retval96;
  __n95 = v93;
  int t97 = __n95;
  __retval96._M_n = t97;
  struct std::_Setprecision t98 = __retval96;
  return t98;
}

// function: main
int main() {
bb99:
  struct std::_Setprecision agg.tmp0114;
  int __retval115;
  double root2116;
  int places117;
  double c118 = 2;
  double r119 = sqrt(c118);
  root2116 = r119;
  struct std::basic_ostream<char>* g120 = &_ZSt4cout;
  char* cast121 = (char*)_str;
  struct std::basic_ostream<char>* r122 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g120, cast121);
  void* g123 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r124 = std__ostream__operator___std__ostream_____(r122, g123);
  char* cast125 = (char*)_str_1;
  struct std::basic_ostream<char>* r126 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r124, cast125);
  char* cast127 = (char*)_str_2;
  struct std::basic_ostream<char>* r128 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r126, cast127);
  void* g129 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r130 = std__ostream__operator___std__ostream_____(r128, g129);
  struct std::basic_ostream<char>* g131 = &_ZSt4cout;
  void* g132 = &_ZSt5fixedRSt8ios_base;
  struct std::basic_ostream<char>* r133 = std__ostream__operator___std__ios_base_____(g131, g132);
  goto bb100;
bb100:
  int c134 = 0;
  places117 = c134;
  goto bb101;
bb101:
  int t135 = places117;
  int c136 = 9;
  _Bool c137 = (t135 <= c136) ? 1 : 0;
  if (c137) goto bb102; else goto bb106;
bb102:
  goto bb103;
bb103:
  struct std::basic_ostream<char>* g138 = &_ZSt4cout;
