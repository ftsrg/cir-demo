// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[37];
char _str_1[43];
char _str_2[40];
char _str_3[46];
char _str_4[41];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNKSt8ios_base5flagsEv
int std__ios_base__flags___const(struct std::ios_base* v0) {
bb1:
  int this2[8];
  int __retval3;
  this2 = v0;
  struct std::ios_base* t4 = this2;
  int t5 = *t4->_M_flags;
  __retval3 = t5;
  int t6 = __retval3;
  return t6;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStorSt13_Ios_FmtflagsS_
int _ZStorSt13_Ios_FmtflagsS_(int v7, int v8) {
bb9:
  int __a10;
  int __b11;
  int __retval12;
  __a10 = v7;
  __b11 = v8;
  int t13 = __a10;
  int t14 = __b11;
  int b15 = t13 | t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* _ZStoRRSt13_Ios_FmtflagsS_(int* v17, int v18) {
bb19:
  int* __a20;
  int __b21;
  int* __retval22;
  __a20 = v17;
  __b21 = v18;
  int* t23 = __a20;
  int t24 = *t23;
  int t25 = __b21;
  int r26 = _ZStorSt13_Ios_FmtflagsS_(t24, t25);
  int* t27 = __a20;
  *t27 = r26;
  __retval22 = t27;
  int* t28 = __retval22;
  return t28;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int _ZNSt8ios_base4setfESt13_Ios_Fmtflags(struct std::ios_base* v29, int v30) {
bb31:
  int this32[8];
  int __fmtfl33;
  int __retval34;
  int __old35;
  this32 = v29;
  __fmtfl33 = v30;
  struct std::ios_base* t36 = this32;
  int t37 = *t36->_M_flags;
  __old35 = t37;
  int t38 = __fmtfl33;
  int* r39 = _ZStoRRSt13_Ios_FmtflagsS_(t36->_M_flags, t38);
  int t40 = __old35;
  __retval34 = t40;
  int t41 = __retval34;
  return t41;
}

// function: _ZSt8showbaseRSt8ios_base
struct std::ios_base* std__showbase(struct std::ios_base* v42) {
bb43:
  int __base44[8];
  int __retval45[8];
  __base44 = v42;
  struct std::ios_base* t46 = __base44;
  int c47 = 512;
  int r48 = _ZNSt8ios_base4setfESt13_Ios_Fmtflags(t46, c47);
  struct std::ios_base* t49 = __base44;
  __retval45 = t49;
  struct std::ios_base* t50 = __retval45;
  return t50;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v51, int v52) {
bb53:
  int* __a54;
  int __b55;
  int* __retval56;
  __a54 = v51;
  __b55 = v52;
  int* t57 = __a54;
  int t58 = *t57;
  int t59 = __b55;
  int r60 = _ZStanSt13_Ios_FmtflagsS_(t58, t59);
  int* t61 = __a54;
  *t61 = r60;
  __retval56 = t61;
  int* t62 = __retval56;
  return t62;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v63) {
bb64:
  int __a65;
  int __retval66;
  __a65 = v63;
  int t67 = __a65;
  int u68 = ~t67;
  __retval66 = u68;
  int t69 = __retval66;
  return t69;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v70, int v71) {
bb72:
  int __a73;
  int __b74;
  int __retval75;
  __a73 = v70;
  __b74 = v71;
  int t76 = __a73;
  int t77 = __b74;
  int b78 = t76 & t77;
  __retval75 = b78;
  int t79 = __retval75;
  return t79;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(struct std::ios_base* v80, int v81, int v82) {
bb83:
  int this84[8];
  int __fmtfl85;
  int __mask86;
  int __retval87;
  int __old88;
  this84 = v80;
  __fmtfl85 = v81;
  __mask86 = v82;
  struct std::ios_base* t89 = this84;
  int t90 = *t89->_M_flags;
  __old88 = t90;
  int t91 = __mask86;
  int r92 = _ZStcoSt13_Ios_Fmtflags(t91);
  int* r93 = _ZStaNRSt13_Ios_FmtflagsS_(t89->_M_flags, r92);
  int t94 = __fmtfl85;
  int t95 = __mask86;
  int r96 = _ZStanSt13_Ios_FmtflagsS_(t94, t95);
  int* r97 = _ZStoRRSt13_Ios_FmtflagsS_(t89->_M_flags, r96);
  int t98 = __old88;
  __retval87 = t98;
  int t99 = __retval87;
  return t99;
}

// function: _ZSt3octRSt8ios_base
struct std::ios_base* std__oct(struct std::ios_base* v100) {
bb101:
  int __base102[8];
  int __retval103[8];
  __base102 = v100;
  struct std::ios_base* t104 = __base102;
  int c105 = 64;
  int c106 = 74;
  int r107 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t104, c105, c106);
  struct std::ios_base* t108 = __base102;
  __retval103 = t108;
  struct std::ios_base* t109 = __retval103;
  return t109;
}

// function: _ZSt10scientificRSt8ios_base
struct std::ios_base* std__scientific(struct std::ios_base* v110) {
bb111:
  int __base112[8];
  int __retval113[8];
  __base112 = v110;
  struct std::ios_base* t114 = __base112;
  int c115 = 256;
  int c116 = 260;
  int r117 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t114, c115, c116);
  struct std::ios_base* t118 = __base112;
  __retval113 = t118;
  struct std::ios_base* t119 = __retval113;
  return t119;
}

// function: _ZNSt8ios_base5flagsESt13_Ios_Fmtflags
int std__ios_base__flags(struct std::ios_base* v120, int v121) {
bb122:
  int this123[8];
  int __fmtfl124;
  int __retval125;
  int __old126;
  this123 = v120;
  __fmtfl124 = v121;
  struct std::ios_base* t127 = this123;
  int t128 = *t127->_M_flags;
  __old126 = t128;
  int t129 = __fmtfl124;
  *t127->_M_flags = t129;
  int t130 = __old126;
  __retval125 = t130;
  int t131 = __retval125;
  return t131;
}

// function: main
int main() {
bb132:
  int __retval133;
  int integerValue134;
  double doubleValue135;
  int originalFormat136;
  int c137 = 1000;
  integerValue134 = c137;
  double c138 = 0.094762799999999994;
  doubleValue135 = c138;
  struct std::basic_ostream<char>* g139 = &_ZSt4cout;
  char* cast140 = (char*)_str;
  struct std::basic_ostream<char>* r141 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g139, cast140);
  struct std::basic_ostream<char>* g142 = &_ZSt4cout;
