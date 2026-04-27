// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

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
int _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(struct std::ios_base* v51, int v52, int v53) {
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

// function: _ZSt8internalRSt8ios_base
struct std::ios_base* std__internal(struct std::ios_base* v71) {
bb72:
  int __base73[8];
  int __retval74[8];
  __base73 = v71;
  struct std::ios_base* t75 = __base73;
  int c76 = 16;
  int c77 = 176;
  int r78 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t75, c76, c77);
  struct std::ios_base* t79 = __base73;
  __retval74 = t79;
  struct std::ios_base* t80 = __retval74;
  return t80;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int _ZNSt8ios_base4setfESt13_Ios_Fmtflags(struct std::ios_base* v81, int v82) {
bb83:
  int this84[8];
  int __fmtfl85;
  int __retval86;
  int __old87;
  this84 = v81;
  __fmtfl85 = v82;
  struct std::ios_base* t88 = this84;
  int t89 = *t88->_M_flags;
  __old87 = t89;
  int t90 = __fmtfl85;
  int* r91 = _ZStoRRSt13_Ios_FmtflagsS_(t88->_M_flags, t90);
  int t92 = __old87;
  __retval86 = t92;
  int t93 = __retval86;
  return t93;
}

// function: _ZSt7showposRSt8ios_base
struct std::ios_base* std__showpos(struct std::ios_base* v94) {
bb95:
  int __base96[8];
  int __retval97[8];
  __base96 = v94;
  struct std::ios_base* t98 = __base96;
  int c99 = 2048;
  int r100 = _ZNSt8ios_base4setfESt13_Ios_Fmtflags(t98, c99);
  struct std::ios_base* t101 = __base96;
  __retval97 = t101;
  struct std::ios_base* t102 = __retval97;
  return t102;
}

// function: _ZSt4setwi
struct std::_Setw std__setw(int v103) {
bb104:
  int __n105;
  struct std::_Setw __retval106;
  __n105 = v103;
  int t107 = __n105;
  __retval106._M_n = t107;
  struct std::_Setw t108 = __retval106;
  return t108;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb109:
  int __retval110;
  struct std::_Setw agg.tmp0111;
  struct std::basic_ostream<char>* g112 = &_ZSt4cout;
  void* g113 = &_ZSt8internalRSt8ios_base;
  struct std::basic_ostream<char>* r114 = std__ostream__operator___std__ios_base_____(g112, g113);
  void* g115 = &_ZSt7showposRSt8ios_base;
  struct std::basic_ostream<char>* r116 = std__ostream__operator___std__ios_base_____(r114, g115);
  int c117 = 10;
  struct std::_Setw r118 = std__setw(c117);
  agg.tmp0111 = r118;
  struct std::_Setw t119 = agg.tmp0111;
  struct std::basic_ostream<char>* r120 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r116, t119);
  int c121 = 123;
  struct std::basic_ostream<char>* r122 = std__ostream__operator__(r120, c121);
  void* g123 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r124 = std__ostream__operator___std__ostream_____(r122, g123);
  int c125 = 0;
  __retval110 = c125;
  int t126 = __retval110;
  return t126;
}

