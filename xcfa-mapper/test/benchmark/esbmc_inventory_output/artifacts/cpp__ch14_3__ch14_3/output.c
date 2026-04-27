// Struct definitions (auto-parsed)
struct std::_Setprecision { int _M_n; };
struct std::_Setw { int _M_n; };
struct std::basic_ifstream<char> { unsigned char __placeholder; };
struct std::basic_ios<char> { unsigned char __placeholder; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

char _str[12] = "clients.dat";
struct std::basic_ostream<char> _ZSt4cerr;
char _str_1[25] = "File could not be opened";
struct std::basic_ostream<char> _ZSt4cout;
char _str_2[8] = "Account";
char _str_3[5] = "Name";
char _str_4[8] = "Balance";
// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std::basic_ifstream<char>*, char*, int);

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std::basic_ios<char>*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: exit
void exit(int);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(struct std::basic_ostream<char>*, struct std::_Setw);

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

// function: _ZSt4leftRSt8ios_base
struct std::ios_base* std__left(struct std::ios_base* v71) {
bb72:
  int __base73[8];
  int __retval74[8];
  __base73 = v71;
  struct std::ios_base* t75 = __base73;
  int c76 = 32;
  int c77 = 176;
  int r78 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t75, c76, c77);
  struct std::ios_base* t79 = __base73;
  __retval74 = t79;
  struct std::ios_base* t80 = __retval74;
  return t80;
}

// function: _ZSt4setwi
struct std::_Setw std__setw(int v81) {
bb82:
  int __n83;
  struct std::_Setw __retval84;
  __n83 = v81;
  int t85 = __n83;
  __retval84._M_n = t85;
  struct std::_Setw t86 = __retval84;
  return t86;
}

// function: _ZSt5fixedRSt8ios_base
struct std::ios_base* std__fixed(struct std::ios_base* v87) {
bb88:
  int __base89[8];
  int __retval90[8];
  __base89 = v87;
  struct std::ios_base* t91 = __base89;
  int c92 = 4;
  int c93 = 260;
  int r94 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t91, c92, c93);
  struct std::ios_base* t95 = __base89;
  __retval90 = t95;
  struct std::ios_base* t96 = __retval90;
  return t96;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int _ZNSt8ios_base4setfESt13_Ios_Fmtflags(struct std::ios_base* v97, int v98) {
bb99:
  int this100[8];
  int __fmtfl101;
  int __retval102;
  int __old103;
  this100 = v97;
  __fmtfl101 = v98;
  struct std::ios_base* t104 = this100;
  int t105 = *t104->_M_flags;
  __old103 = t105;
  int t106 = __fmtfl101;
  int* r107 = _ZStoRRSt13_Ios_FmtflagsS_(t104->_M_flags, t106);
  int t108 = __old103;
  __retval102 = t108;
  int t109 = __retval102;
  return t109;
}

// function: _ZSt9showpointRSt8ios_base
struct std::ios_base* std__showpoint(struct std::ios_base* v110) {
bb111:
  int __base112[8];
  int __retval113[8];
  __base112 = v110;
  struct std::ios_base* t114 = __base112;
  int c115 = 1024;
  int r116 = _ZNSt8ios_base4setfESt13_Ios_Fmtflags(t114, c115);
  struct std::ios_base* t117 = __base112;
  __retval113 = t117;
  struct std::ios_base* t118 = __retval113;
  return t118;
}

// function: _ZSt17__istream_extractRSiPcl
void std____istream_extract(struct std::basic_istream<char>*, char*, long long);

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
struct std::basic_istream<char>* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std::basic_istream<char>* v119, char* v120) {
bb121:
  long long __n124;
  int __in125[8];
  char* __s126;
  int __retval127[8];
  __in125 = v119;
  __s126 = v120;
  goto bb122;
bb122:
  long long c128 = 9223372036854775807;
  __n124 = c128;
  unsigned long long c129 = 1;
  long long t130 = __n124;
  unsigned long long cast131 = (unsigned long long)t130;
  unsigned long long b132 = cast131 / c129;
  long long cast133 = (long long)b132;
  __n124 = cast133;
  struct std::basic_istream<char>* t134 = __in125;
  char* t135 = __s126;
  long long t136 = __n124;
  std____istream_extract(t134, t135, t136);
  goto bb123;
bb123:
  struct std::basic_istream<char>* t137 = __in125;
  __retval127 = t137;
  struct std::basic_istream<char>* t138 = __retval127;
  return t138;
}

// function: _ZNSirsERi
struct std::basic_istream<char>* _ZNSirsERi(struct std::basic_istream<char>*, int*);

// function: _ZNSirsERd
struct std::basic_istream<char>* _ZNSirsERd(struct std::basic_istream<char>*, double*);

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std::basic_ios<char>*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision(struct std::basic_ostream<char>*, struct std::_Setprecision);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZSt12setprecisioni
struct std::_Setprecision std__setprecision(int v139) {
bb140:
  int __n141;
  struct std::_Setprecision __retval142;
  __n141 = v139;
  int t143 = __n141;
  __retval142._M_n = t143;
  struct std::_Setprecision t144 = __retval142;
  return t144;
}

// function: _ZSt5rightRSt8ios_base
struct std::ios_base* std__right(struct std::ios_base* v145) {
bb146:
  int __base147[8];
  int __retval148[8];
  __base147 = v145;
  struct std::ios_base* t149 = __base147;
  int c150 = 128;
  int c151 = 176;
  int r152 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t149, c150, c151);
  struct std::ios_base* t153 = __base147;
  __retval148 = t153;
  struct std::ios_base* t154 = __retval148;
  return t154;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _Z10outputLineiPKcd
void outputLine(int v155, char* v156, double v157) {
bb158:
  int account159;
  char* name160;
  double balance161;
  struct std::_Setw agg.tmp0162;
  struct std::_Setw agg.tmp1163;
  struct std::_Setw agg.tmp2164;
  struct std::_Setprecision agg.tmp3165;
  account159 = v155;
  name160 = v156;
  balance161 = v157;
  struct std::basic_ostream<char>* g166 = &_ZSt4cout;
  void* g167 = &_ZSt4leftRSt8ios_base;
  struct std::basic_ostream<char>* r168 = std__ostream__operator___std__ios_base_____(g166, g167);
  int c169 = 10;
  struct std::_Setw r170 = std__setw(c169);
  agg.tmp0162 = r170;
  struct std::_Setw t171 = agg.tmp0162;
  struct std::basic_ostream<char>* r172 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r168, t171);
  int t173 = account159;
  struct std::basic_ostream<char>* r174 = _ZNSolsEi(r172, t173);
  int c175 = 13;
  struct std::_Setw r176 = std__setw(c175);
  agg.tmp1163 = r176;
  struct std::_Setw t177 = agg.tmp1163;
  struct std::basic_ostream<char>* r178 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r174, t177);
  char* t179 = name160;
  struct std::basic_ostream<char>* r180 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r178, t179);
  int c181 = 7;
  struct std::_Setw r182 = std__setw(c181);
  agg.tmp2164 = r182;
  struct std::_Setw t183 = agg.tmp2164;
  struct std::basic_ostream<char>* r184 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r180, t183);
  int c185 = 2;
  struct std::_Setprecision r186 = std__setprecision(c185);
  agg.tmp3165 = r186;
  struct std::_Setprecision t187 = agg.tmp3165;
  struct std::basic_ostream<char>* r188 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision(r184, t187);
  void* g189 = &_ZSt5rightRSt8ios_base;
  struct std::basic_ostream<char>* r190 = std__ostream__operator___std__ios_base_____(r188, g189);
  double t191 = balance161;
  struct std::basic_ostream<char>* r192 = _ZNSolsEd(r190, t191);
  void* g193 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r194 = std__ostream__operator___std__ostream_____(r192, g193);
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std::basic_ifstream<char>*);

// function: main
int main() {
  void* v195;
  unsigned int v196;
  void* v197;
  unsigned int v198;
  void* v199;
  unsigned int v200;
  void* v201;
  unsigned int v202;
  void* v203;
  unsigned int v204;
  void* v205;
  unsigned int v206;
  void* v207;
  unsigned int v208;
  void* v209;
  unsigned int v210;
  void* v211;
  unsigned int v212;
  void* v213;
  unsigned int v214;
  void* v215;
  unsigned int v216;
  void* v217;
  unsigned int v218;
  void* v219;
  unsigned int v220;
  void* v221;
  unsigned int v222;
  void* v223;
  unsigned int v224;
  void* v225;
  unsigned int v226;
  void* v227;
  unsigned int v228;
  void* v229;
  unsigned int v230;
  void* v231;
  unsigned int v232;
bb233:
  _Bool tmp.try.call.res338;
  int tmp.try.call.res339[8];
  int tmp.try.call.res340[8];
  int tmp.try.call.res341[8];
  int tmp.try.call.res342[8];
  int tmp.try.call.res343[8];
  _Bool tmp.try.call.res344;
  int __retval345;
  struct std::basic_ifstream<char> inClientFile346;
  int account347;
  int name348[30];
  double balance349;
  int tmp.try.call.res350[8];
  struct std::_Setw agg.tmp0351;
  int tmp.try.call.res352[8];
  int tmp.try.call.res353[8];
  struct std::_Setw agg.tmp1354;
  int tmp.try.call.res355[8];
  int tmp.try.call.res356[8];
  int tmp.try.call.res357[8];
  int tmp.try.call.res358[8];
  int tmp.try.call.res359[8];
  int tmp.try.call.res360[8];
  char* cast361 = (char*)_str;
  int c362 = 8;
  std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&inClientFile346, cast361, c362);
  goto bb234;
bb234:
