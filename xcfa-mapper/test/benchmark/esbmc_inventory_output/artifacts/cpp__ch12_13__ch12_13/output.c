// Struct definitions (auto-parsed)
struct std::_Setfill<char> { char _M_c; };
struct std::_Setw { int _M_n; };
struct std::basic_ios<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[42] = " printed as int right and left justified\\0A";
char _str_1[41] = "and as hex with internal justification.\\0A";
char _str_2[41];
char _str_3[34];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(struct std::basic_ostream<char>*, struct std::_Setw);

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

// function: _ZSt4setwi
struct std::_Setw std__setw(int v44) {
bb45:
  int __n46;
  struct std::_Setw __retval47;
  __n46 = v44;
  int t48 = __n46;
  __retval47._M_n = t48;
  struct std::_Setw t49 = __retval47;
  return t49;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v50, int v51) {
bb52:
  int* __a53;
  int __b54;
  int* __retval55;
  __a53 = v50;
  __b54 = v51;
  int* t56 = __a53;
  int t57 = *t56;
  int t58 = __b54;
  int r59 = _ZStanSt13_Ios_FmtflagsS_(t57, t58);
  int* t60 = __a53;
  *t60 = r59;
  __retval55 = t60;
  int* t61 = __retval55;
  return t61;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v62) {
bb63:
  int __a64;
  int __retval65;
  __a64 = v62;
  int t66 = __a64;
  int u67 = ~t66;
  __retval65 = u67;
  int t68 = __retval65;
  return t68;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v69, int v70) {
bb71:
  int __a72;
  int __b73;
  int __retval74;
  __a72 = v69;
  __b73 = v70;
  int t75 = __a72;
  int t76 = __b73;
  int b77 = t75 & t76;
  __retval74 = b77;
  int t78 = __retval74;
  return t78;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(struct std::ios_base* v79, int v80, int v81) {
bb82:
  int this83[8];
  int __fmtfl84;
  int __mask85;
  int __retval86;
  int __old87;
  this83 = v79;
  __fmtfl84 = v80;
  __mask85 = v81;
  struct std::ios_base* t88 = this83;
  int t89 = *t88->_M_flags;
  __old87 = t89;
  int t90 = __mask85;
  int r91 = _ZStcoSt13_Ios_Fmtflags(t90);
  int* r92 = _ZStaNRSt13_Ios_FmtflagsS_(t88->_M_flags, r91);
  int t93 = __fmtfl84;
  int t94 = __mask85;
  int r95 = _ZStanSt13_Ios_FmtflagsS_(t93, t94);
  int* r96 = _ZStoRRSt13_Ios_FmtflagsS_(t88->_M_flags, r95);
  int t97 = __old87;
  __retval86 = t97;
  int t98 = __retval86;
  return t98;
}

// function: _ZSt4leftRSt8ios_base
struct std::ios_base* std__left(struct std::ios_base* v99) {
bb100:
  int __base101[8];
  int __retval102[8];
  __base101 = v99;
  struct std::ios_base* t103 = __base101;
  int c104 = 32;
  int c105 = 176;
  int r106 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t103, c104, c105);
  struct std::ios_base* t107 = __base101;
  __retval102 = t107;
  struct std::ios_base* t108 = __retval102;
  return t108;
}

// function: _ZSt8internalRSt8ios_base
struct std::ios_base* std__internal(struct std::ios_base* v109) {
bb110:
  int __base111[8];
  int __retval112[8];
  __base111 = v109;
  struct std::ios_base* t113 = __base111;
  int c114 = 16;
  int c115 = 176;
  int r116 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t113, c114, c115);
  struct std::ios_base* t117 = __base111;
  __retval112 = t117;
  struct std::ios_base* t118 = __retval112;
  return t118;
}

// function: _ZSt3hexRSt8ios_base
struct std::ios_base* std__hex(struct std::ios_base* v119) {
bb120:
  int __base121[8];
  int __retval122[8];
  __base121 = v119;
  struct std::ios_base* t123 = __base121;
  int c124 = 8;
  int c125 = 74;
  int r126 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t123, c124, c125);
  struct std::ios_base* t127 = __base121;
  __retval122 = t127;
  struct std::ios_base* t128 = __retval122;
  return t128;
}

// function: _ZSt5rightRSt8ios_base
struct std::ios_base* std__right(struct std::ios_base* v129) {
bb130:
  int __base131[8];
  int __retval132[8];
  __base131 = v129;
  struct std::ios_base* t133 = __base131;
  int c134 = 128;
  int c135 = 176;
  int r136 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t133, c134, c135);
  struct std::ios_base* t137 = __base131;
  __retval132 = t137;
  struct std::ios_base* t138 = __retval132;
  return t138;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE4fillEc
char std__basic_ios_char__std__char_traits_char_____fill(struct std::basic_ios<char>*, char);

// function: _ZSt3decRSt8ios_base
struct std::ios_base* std__dec(struct std::ios_base* v139) {
bb140:
  int __base141[8];
  int __retval142[8];
  __base141 = v139;
  struct std::ios_base* t143 = __base141;
  int c144 = 2;
  int c145 = 74;
  int r146 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t143, c144, c145);
  struct std::ios_base* t147 = __base141;
  __retval142 = t147;
  struct std::ios_base* t148 = __retval142;
  return t148;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E(struct std::basic_ostream<char>*, struct std::_Setfill<char>);

// function: _ZSt7setfillIcESt8_SetfillIT_ES1_
struct std::_Setfill<char> std___Setfill_char__std__setfill_char_(char v149) {
bb150:
  char __c151;
  struct std::_Setfill<char> __retval152;
  __c151 = v149;
  char t153 = __c151;
  __retval152._M_c = t153;
  struct std::_Setfill<char> t154 = __retval152;
  return t154;
}

// function: main
int main() {
bb155:
  int __retval156;
  int x157;
  struct std::_Setw agg.tmp0158;
  struct std::_Setw agg.tmp1159;
  struct std::_Setw agg.tmp2160;
  struct std::_Setw agg.tmp3161;
  struct std::_Setw agg.tmp4162;
  struct std::_Setfill<char> agg.tmp5163;
  struct std::_Setw agg.tmp6164;
  struct std::_Setfill<char> agg.tmp7165;
  int c166 = 10000;
  x157 = c166;
  struct std::basic_ostream<char>* g167 = &_ZSt4cout;
  int t168 = x157;
  struct std::basic_ostream<char>* r169 = std__ostream__operator__(g167, t168);
  char* cast170 = (char*)_str;
  struct std::basic_ostream<char>* r171 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r169, cast170);
  char* cast172 = (char*)_str_1;
  struct std::basic_ostream<char>* r173 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r171, cast172);
  char* cast174 = (char*)_str_2;
  struct std::basic_ostream<char>* r175 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r173, cast174);
  void* g176 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r177 = std__ostream__operator___std__ostream_____(r175, g176);
  struct std::basic_ostream<char>* g178 = &_ZSt4cout;
  void* g179 = &_ZSt8showbaseRSt8ios_base;
  struct std::basic_ostream<char>* r180 = std__ostream__operator___std__ios_base_____(g178, g179);
  int c181 = 10;
  struct std::_Setw r182 = std__setw(c181);
  agg.tmp0158 = r182;
  struct std::_Setw t183 = agg.tmp0158;
  struct std::basic_ostream<char>* r184 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r180, t183);
  int t185 = x157;
  struct std::basic_ostream<char>* r186 = std__ostream__operator__(r184, t185);
  void* g187 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r188 = std__ostream__operator___std__ostream_____(r186, g187);
  struct std::basic_ostream<char>* g189 = &_ZSt4cout;
  void* g190 = &_ZSt4leftRSt8ios_base;
  struct std::basic_ostream<char>* r191 = std__ostream__operator___std__ios_base_____(g189, g190);
  int c192 = 10;
  struct std::_Setw r193 = std__setw(c192);
  agg.tmp1159 = r193;
  struct std::_Setw t194 = agg.tmp1159;
  struct std::basic_ostream<char>* r195 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r191, t194);
  int t196 = x157;
  struct std::basic_ostream<char>* r197 = std__ostream__operator__(r195, t196);
  void* g198 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r199 = std__ostream__operator___std__ostream_____(r197, g198);
  struct std::basic_ostream<char>* g200 = &_ZSt4cout;
  void* g201 = &_ZSt8internalRSt8ios_base;
  struct std::basic_ostream<char>* r202 = std__ostream__operator___std__ios_base_____(g200, g201);
  int c203 = 10;
  struct std::_Setw r204 = std__setw(c203);
  agg.tmp2160 = r204;
  struct std::_Setw t205 = agg.tmp2160;
  struct std::basic_ostream<char>* r206 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r202, t205);
  void* g207 = &_ZSt3hexRSt8ios_base;
  struct std::basic_ostream<char>* r208 = std__ostream__operator___std__ios_base_____(r206, g207);
  int t209 = x157;
  struct std::basic_ostream<char>* r210 = std__ostream__operator__(r208, t209);
  void* g211 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r212 = std__ostream__operator___std__ostream_____(r210, g211);
  void* g213 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r214 = std__ostream__operator___std__ostream_____(r212, g213);
  struct std::basic_ostream<char>* g215 = &_ZSt4cout;
  char* cast216 = (char*)_str_3;
  struct std::basic_ostream<char>* r217 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g215, cast216);
  void* g218 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r219 = std__ostream__operator___std__ostream_____(r217, g218);
  struct std::basic_ostream<char>* g220 = &_ZSt4cout;
  void* g221 = &_ZSt5rightRSt8ios_base;
  struct std::basic_ostream<char>* r222 = std__ostream__operator___std__ios_base_____(g220, g221);
  struct std::basic_ostream<char>* g223 = &_ZSt4cout;
