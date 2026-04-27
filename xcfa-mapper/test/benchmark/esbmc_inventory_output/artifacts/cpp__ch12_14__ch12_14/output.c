// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[42];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStorSt13_Ios_FmtflagsS_
int _ZStorSt13_Ios_FmtflagsS_(int v0, int v1) {
bb2:
  int __a3;
  int __b4;
  int __retval5;
  __a3 = v0;
  __b4 = v1;
  int t6 = __a3;
  int t7 = __b4;
  int b8 = t6 | t7;
  __retval5 = b8;
  int t9 = __retval5;
  return t9;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* _ZStoRRSt13_Ios_FmtflagsS_(int* v10, int v11) {
bb12:
  int* __a13;
  int __b14;
  int* __retval15;
  __a13 = v10;
  __b14 = v11;
  int* t16 = __a13;
  int t17 = *t16;
  int t18 = __b14;
  int r19 = _ZStorSt13_Ios_FmtflagsS_(t17, t18);
  int* t20 = __a13;
  *t20 = r19;
  __retval15 = t20;
  int* t21 = __retval15;
  return t21;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int _ZNSt8ios_base4setfESt13_Ios_Fmtflags(struct std::ios_base* v22, int v23) {
bb24:
  int this25[8];
  int __fmtfl26;
  int __retval27;
  int __old28;
  this25 = v22;
  __fmtfl26 = v23;
  struct std::ios_base* t29 = this25;
  int t30 = *t29->_M_flags;
  __old28 = t30;
  int t31 = __fmtfl26;
  int* r32 = _ZStoRRSt13_Ios_FmtflagsS_(t29->_M_flags, t31);
  int t33 = __old28;
  __retval27 = t33;
  int t34 = __retval27;
  return t34;
}

// function: _ZSt8showbaseRSt8ios_base
struct std::ios_base* std__showbase(struct std::ios_base* v35) {
bb36:
  int __base37[8];
  int __retval38[8];
  __base37 = v35;
  struct std::ios_base* t39 = __base37;
  int c40 = 512;
  int r41 = _ZNSt8ios_base4setfESt13_Ios_Fmtflags(t39, c40);
  struct std::ios_base* t42 = __base37;
  __retval38 = t42;
  struct std::ios_base* t43 = __retval38;
  return t43;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v44, int v45) {
bb46:
  int* __a47;
  int __b48;
  int* __retval49;
  __a47 = v44;
  __b48 = v45;
  int* t50 = __a47;
  int t51 = *t50;
  int t52 = __b48;
  int r53 = _ZStanSt13_Ios_FmtflagsS_(t51, t52);
  int* t54 = __a47;
  *t54 = r53;
  __retval49 = t54;
  int* t55 = __retval49;
  return t55;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v56) {
bb57:
  int __a58;
  int __retval59;
  __a58 = v56;
  int t60 = __a58;
  int u61 = ~t60;
  __retval59 = u61;
  int t62 = __retval59;
  return t62;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v63, int v64) {
bb65:
  int __a66;
  int __b67;
  int __retval68;
  __a66 = v63;
  __b67 = v64;
  int t69 = __a66;
  int t70 = __b67;
  int b71 = t69 & t70;
  __retval68 = b71;
  int t72 = __retval68;
  return t72;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(struct std::ios_base* v73, int v74, int v75) {
bb76:
  int this77[8];
  int __fmtfl78;
  int __mask79;
  int __retval80;
  int __old81;
  this77 = v73;
  __fmtfl78 = v74;
  __mask79 = v75;
  struct std::ios_base* t82 = this77;
  int t83 = *t82->_M_flags;
  __old81 = t83;
  int t84 = __mask79;
  int r85 = _ZStcoSt13_Ios_Fmtflags(t84);
  int* r86 = _ZStaNRSt13_Ios_FmtflagsS_(t82->_M_flags, r85);
  int t87 = __fmtfl78;
  int t88 = __mask79;
  int r89 = _ZStanSt13_Ios_FmtflagsS_(t87, t88);
  int* r90 = _ZStoRRSt13_Ios_FmtflagsS_(t82->_M_flags, r89);
  int t91 = __old81;
  __retval80 = t91;
  int t92 = __retval80;
  return t92;
}

// function: _ZSt3octRSt8ios_base
struct std::ios_base* std__oct(struct std::ios_base* v93) {
bb94:
  int __base95[8];
  int __retval96[8];
  __base95 = v93;
  struct std::ios_base* t97 = __base95;
  int c98 = 64;
  int c99 = 74;
  int r100 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t97, c98, c99);
  struct std::ios_base* t101 = __base95;
  __retval96 = t101;
  struct std::ios_base* t102 = __retval96;
  return t102;
}

// function: _ZSt3hexRSt8ios_base
struct std::ios_base* std__hex(struct std::ios_base* v103) {
bb104:
  int __base105[8];
  int __retval106[8];
  __base105 = v103;
  struct std::ios_base* t107 = __base105;
  int c108 = 8;
  int c109 = 74;
  int r110 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t107, c108, c109);
  struct std::ios_base* t111 = __base105;
  __retval106 = t111;
  struct std::ios_base* t112 = __retval106;
  return t112;
}

// function: main
int main() {
bb113:
  int __retval114;
  int x115;
  int c116 = 100;
  x115 = c116;
  struct std::basic_ostream<char>* g117 = &_ZSt4cout;
  char* cast118 = (char*)_str;
  struct std::basic_ostream<char>* r119 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g117, cast118);
  void* g120 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r121 = std__ostream__operator___std__ostream_____(r119, g120);
  void* g122 = &_ZSt8showbaseRSt8ios_base;
  struct std::basic_ostream<char>* r123 = std__ostream__operator___std__ios_base_____(r121, g122);
  struct std::basic_ostream<char>* g124 = &_ZSt4cout;
  int t125 = x115;
  struct std::basic_ostream<char>* r126 = std__ostream__operator__(g124, t125);
  void* g127 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r128 = std__ostream__operator___std__ostream_____(r126, g127);
  struct std::basic_ostream<char>* g129 = &_ZSt4cout;
  void* g130 = &_ZSt3octRSt8ios_base;
  struct std::basic_ostream<char>* r131 = std__ostream__operator___std__ios_base_____(g129, g130);
  int t132 = x115;
  struct std::basic_ostream<char>* r133 = std__ostream__operator__(r131, t132);
  void* g134 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r135 = std__ostream__operator___std__ostream_____(r133, g134);
  struct std::basic_ostream<char>* g136 = &_ZSt4cout;
  void* g137 = &_ZSt3hexRSt8ios_base;
  struct std::basic_ostream<char>* r138 = std__ostream__operator___std__ios_base_____(g136, g137);
  int t139 = x115;
  struct std::basic_ostream<char>* r140 = std__ostream__operator__(r138, t139);
  void* g141 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r142 = std__ostream__operator___std__ostream_____(r140, g141);
  int c143 = 0;
  __retval114 = c143;
  int t144 = __retval114;
  return t144;
}

