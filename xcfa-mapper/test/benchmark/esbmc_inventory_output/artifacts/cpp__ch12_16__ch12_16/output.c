// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[41] = "Printing uppercase letters in scientific";
char _str_1[43];
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

// function: _ZSt9uppercaseRSt8ios_base
struct std::ios_base* std__uppercase(struct std::ios_base* v35) {
bb36:
  int __base37[8];
  int __retval38[8];
  __base37 = v35;
  struct std::ios_base* t39 = __base37;
  int c40 = 16384;
  int r41 = _ZNSt8ios_base4setfESt13_Ios_Fmtflags(t39, c40);
  struct std::ios_base* t42 = __base37;
  __retval38 = t42;
  struct std::ios_base* t43 = __retval38;
  return t43;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

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

// function: _ZSt3hexRSt8ios_base
struct std::ios_base* std__hex(struct std::ios_base* v93) {
bb94:
  int __base95[8];
  int __retval96[8];
  __base95 = v93;
  struct std::ios_base* t97 = __base95;
  int c98 = 8;
  int c99 = 74;
  int r100 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t97, c98, c99);
  struct std::ios_base* t101 = __base95;
  __retval96 = t101;
  struct std::ios_base* t102 = __retval96;
  return t102;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: main
int main() {
bb103:
  int __retval104;
  struct std::basic_ostream<char>* g105 = &_ZSt4cout;
  char* cast106 = (char*)_str;
  struct std::basic_ostream<char>* r107 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g105, cast106);
  void* g108 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r109 = std__ostream__operator___std__ostream_____(r107, g108);
  char* cast110 = (char*)_str_1;
  struct std::basic_ostream<char>* r111 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r109, cast110);
  void* g112 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r113 = std__ostream__operator___std__ostream_____(r111, g112);
  struct std::basic_ostream<char>* g114 = &_ZSt4cout;
  void* g115 = &_ZSt9uppercaseRSt8ios_base;
  struct std::basic_ostream<char>* r116 = std__ostream__operator___std__ios_base_____(g114, g115);
  double c117 = 4.345E+10;
  struct std::basic_ostream<char>* r118 = _ZNSolsEd(r116, c117);
  void* g119 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r120 = std__ostream__operator___std__ostream_____(r118, g119);
  void* g121 = &_ZSt3hexRSt8ios_base;
  struct std::basic_ostream<char>* r122 = std__ostream__operator___std__ios_base_____(r120, g121);
  int c123 = 123456789;
  struct std::basic_ostream<char>* r124 = _ZNSolsEi(r122, c123);
  void* g125 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r126 = std__ostream__operator___std__ostream_____(r124, g125);
  int c127 = 0;
  __retval104 = c127;
  int t128 = __retval104;
  return t128;
}

