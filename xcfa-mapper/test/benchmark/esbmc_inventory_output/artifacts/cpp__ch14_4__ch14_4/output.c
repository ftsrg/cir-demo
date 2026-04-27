// Struct definitions (auto-parsed)
struct __mbstate_t { unsigned char __placeholder; };
struct std::_Setprecision { int _M_n; };
struct std::_Setw { int _M_n; };
struct std::basic_ifstream<char> { unsigned char __placeholder; };
struct std::basic_ios<char> { unsigned char __placeholder; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::fpos<__mbstate_t> { long long _M_off; struct __mbstate_t _M_state; };
struct std::ios_base { int _M_flags; };

char _str[12] = "clients.dat";
struct std::basic_ostream<char> _ZSt4cerr;
char _str_1[25] = "File could not be opened";
char _str_6[15] = "\\0AEnter request";
char _str_7[38] = " 1 - List accounts with zero balances";
char _str_8[40] = " 2 - List accounts with credit balances";
char _str_9[39] = " 3 - List accounts with debit balances";
char _str_10[16] = " 4 - End of run";
char _str_11[4] = "\\0A? ";
struct std::basic_istream<char> _ZSt3cin;
struct std::basic_ostream<char> _ZSt4cout;
char _str_2[31];
char _str_3[33];
char _str_4[32];
char _str_5[12] = "End of run.";
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

// function: _ZSt5fixedRSt8ios_base
struct std::ios_base* std__fixed(struct std::ios_base* v71) {
bb72:
  int __base73[8];
  int __retval74[8];
  __base73 = v71;
  struct std::ios_base* t75 = __base73;
  int c76 = 4;
  int c77 = 260;
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

// function: _ZSt9showpointRSt8ios_base
struct std::ios_base* std__showpoint(struct std::ios_base* v94) {
bb95:
  int __base96[8];
  int __retval97[8];
  __base96 = v94;
  struct std::ios_base* t98 = __base96;
  int c99 = 1024;
  int r100 = _ZNSt8ios_base4setfESt13_Ios_Fmtflags(t98, c99);
  struct std::ios_base* t101 = __base96;
  __retval97 = t101;
  struct std::ios_base* t102 = __retval97;
  return t102;
}

// function: _Z10getRequestv
int getRequest() {
  _Bool v103;
  _Bool v104;
bb105:
  int __retval119;
  int request120;
  struct std::basic_ostream<char>* g121 = &_ZSt4cout;
  char* cast122 = (char*)_str_6;
  struct std::basic_ostream<char>* r123 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g121, cast122);
  void* g124 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r125 = std__ostream__operator___std__ostream_____(r123, g124);
  char* cast126 = (char*)_str_7;
  struct std::basic_ostream<char>* r127 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r125, cast126);
  void* g128 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r129 = std__ostream__operator___std__ostream_____(r127, g128);
  char* cast130 = (char*)_str_8;
  struct std::basic_ostream<char>* r131 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r129, cast130);
  void* g132 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r133 = std__ostream__operator___std__ostream_____(r131, g132);
  char* cast134 = (char*)_str_9;
  struct std::basic_ostream<char>* r135 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r133, cast134);
  void* g136 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r137 = std__ostream__operator___std__ostream_____(r135, g136);
  char* cast138 = (char*)_str_10;
  struct std::basic_ostream<char>* r139 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r137, cast138);
  void* g140 = &_ZSt5fixedRSt8ios_base;
  struct std::basic_ostream<char>* r141 = std__ostream__operator___std__ios_base_____(r139, g140);
  void* g142 = &_ZSt9showpointRSt8ios_base;
  struct std::basic_ostream<char>* r143 = std__ostream__operator___std__ios_base_____(r141, g142);
  goto bb106;
bb106:
  goto bb114;
bb107:
  int t144 = request120;
  unsigned int c145 = 1;
  int cast146 = (int)c145;
  _Bool c147 = (t144 < cast146) ? 1 : 0;
  if (c147) goto bb108; else goto bb112;
bb108:
  int t148 = request120;
  unsigned int c149 = 4;
  int cast150 = (int)c149;
  _Bool c151 = (t148 > cast150) ? 1 : 0;
  if (c151) goto bb109; else goto bb110;
bb109:
  _Bool c152 = 1;
  v103 = c152;
  goto bb111;
bb110:
  _Bool c153 = 0;
  v103 = c153;
  goto bb111;
bb111:
  v104 = v103;
  goto bb113;
bb112:
  _Bool c154 = 0;
  v104 = c154;
  goto bb113;
bb113:
  if (v104) goto bb114; else goto bb117;
bb114:
  goto bb115;
bb115:
  struct std::basic_ostream<char>* g155 = &_ZSt4cout;
  char* cast156 = (char*)_str_11;
  struct std::basic_ostream<char>* r157 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g155, cast156);
  struct std::basic_istream<char>* g158 = &_ZSt3cin;
  struct std::basic_istream<char>* r159 = _ZNSirsERi(g158, &request120);
  goto bb116;
bb116:
  goto bb107;
bb117:
  goto bb118;
bb118:
  int t160 = request120;
  __retval119 = t160;
  int t161 = __retval119;
  return t161;
}

// function: _ZSt17__istream_extractRSiPcl
void std____istream_extract(struct std::basic_istream<char>*, char*, long long);

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
struct std::basic_istream<char>* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std::basic_istream<char>* v162, char* v163) {
bb164:
  long long __n167;
  int __in168[8];
  char* __s169;
  int __retval170[8];
  __in168 = v162;
  __s169 = v163;
  goto bb165;
bb165:
  long long c171 = 9223372036854775807;
  __n167 = c171;
  unsigned long long c172 = 1;
  long long t173 = __n167;
  unsigned long long cast174 = (unsigned long long)t173;
  unsigned long long b175 = cast174 / c172;
  long long cast176 = (long long)b175;
  __n167 = cast176;
  struct std::basic_istream<char>* t177 = __in168;
  char* t178 = __s169;
  long long t179 = __n167;
  std____istream_extract(t177, t178, t179);
  goto bb166;
bb166:
  struct std::basic_istream<char>* t180 = __in168;
  __retval170 = t180;
  struct std::basic_istream<char>* t181 = __retval170;
  return t181;
}

// function: _ZNSirsERi
struct std::basic_istream<char>* _ZNSirsERi(struct std::basic_istream<char>*, int*);

// function: _ZNSirsERd
struct std::basic_istream<char>* _ZNSirsERd(struct std::basic_istream<char>*, double*);

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std::basic_ios<char>*);

// function: _Z13shouldDisplayid
_Bool shouldDisplay(int v182, double v183) {
  _Bool v184;
  _Bool v185;
  _Bool v186;
  _Bool v187;
  _Bool v188;
  _Bool v189;
bb190:
  int type221;
  double balance222;
  _Bool __retval223;
  type221 = v182;
  balance222 = v183;
  goto bb191;
bb191:
  int t224 = type221;
  unsigned int c225 = 2;
  int cast226 = (int)c225;
  _Bool c227 = (t224 == cast226) ? 1 : 0;
  if (c227) goto bb192; else goto bb196;
bb192:
  double t228 = balance222;
  int c229 = 0;
  double cast230 = (double)c229;
  _Bool c231 = (t228 < cast230) ? 1 : 0;
  if (c231) goto bb193; else goto bb194;
bb193:
  _Bool c232 = 1;
  v184 = c232;
  goto bb195;
bb194:
  _Bool c233 = 0;
  v184 = c233;
  goto bb195;
bb195:
  v185 = v184;
  goto bb197;
bb196:
  _Bool c234 = 0;
  v185 = c234;
  goto bb197;
bb197:
  if (v185) goto bb198; else goto bb199;
bb198:
  _Bool c235 = 1;
  __retval223 = c235;
  _Bool t236 = __retval223;
  return t236;
bb199:
  goto bb200;
bb200:
  goto bb201;
bb201:
  int t237 = type221;
  unsigned int c238 = 3;
  int cast239 = (int)c238;
  _Bool c240 = (t237 == cast239) ? 1 : 0;
  if (c240) goto bb202; else goto bb206;
bb202:
  double t241 = balance222;
  int c242 = 0;
  double cast243 = (double)c242;
  _Bool c244 = (t241 > cast243) ? 1 : 0;
  if (c244) goto bb203; else goto bb204;
bb203:
  _Bool c245 = 1;
  v186 = c245;
  goto bb205;
bb204:
  _Bool c246 = 0;
  v186 = c246;
  goto bb205;
bb205:
  v187 = v186;
  goto bb207;
bb206:
  _Bool c247 = 0;
  v187 = c247;
  goto bb207;
bb207:
  if (v187) goto bb208; else goto bb209;
bb208:
  _Bool c248 = 1;
  __retval223 = c248;
  _Bool t249 = __retval223;
  return t249;
bb209:
  goto bb210;
bb210:
  goto bb211;
bb211:
  int t250 = type221;
  unsigned int c251 = 1;
  int cast252 = (int)c251;
  _Bool c253 = (t250 == cast252) ? 1 : 0;
  if (c253) goto bb212; else goto bb216;
bb212:
  double t254 = balance222;
  int c255 = 0;
  double cast256 = (double)c255;
  _Bool c257 = (t254 == cast256) ? 1 : 0;
  if (c257) goto bb213; else goto bb214;
bb213:
  _Bool c258 = 1;
  v188 = c258;
  goto bb215;
bb214:
  _Bool c259 = 0;
  v188 = c259;
  goto bb215;
bb215:
  v189 = v188;
  goto bb217;
bb216:
  _Bool c260 = 0;
  v189 = c260;
  goto bb217;
bb217:
  if (v189) goto bb218; else goto bb219;
bb218:
  _Bool c261 = 1;
  __retval223 = c261;
  _Bool t262 = __retval223;
  return t262;
bb219:
  goto bb220;
bb220:
  _Bool c263 = 0;
  __retval223 = c263;
  _Bool t264 = __retval223;
  return t264;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision(struct std::basic_ostream<char>*, struct std::_Setprecision);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4leftRSt8ios_base
struct std::ios_base* std__left(struct std::ios_base* v265) {
bb266:
  int __base267[8];
  int __retval268[8];
  __base267 = v265;
  struct std::ios_base* t269 = __base267;
  int c270 = 32;
  int c271 = 176;
  int r272 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t269, c270, c271);
  struct std::ios_base* t273 = __base267;
  __retval268 = t273;
  struct std::ios_base* t274 = __retval268;
  return t274;
}

// function: _ZSt4setwi
struct std::_Setw std__setw(int v275) {
bb276:
  int __n277;
  struct std::_Setw __retval278;
  __n277 = v275;
  int t279 = __n277;
  __retval278._M_n = t279;
  struct std::_Setw t280 = __retval278;
  return t280;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZSt12setprecisioni
struct std::_Setprecision std__setprecision(int v281) {
bb282:
  int __n283;
  struct std::_Setprecision __retval284;
  __n283 = v281;
  int t285 = __n283;
  __retval284._M_n = t285;
  struct std::_Setprecision t286 = __retval284;
  return t286;
}

// function: _ZSt5rightRSt8ios_base
struct std::ios_base* std__right(struct std::ios_base* v287) {
bb288:
  int __base289[8];
  int __retval290[8];
  __base289 = v287;
  struct std::ios_base* t291 = __base289;
  int c292 = 128;
  int c293 = 176;
  int r294 = _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_(t291, c292, c293);
  struct std::ios_base* t295 = __base289;
  __retval290 = t295;
  struct std::ios_base* t296 = __retval290;
  return t296;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _Z10outputLineiPKcd
void outputLine(int v297, char* v298, double v299) {
bb300:
  int account301;
  char* name302;
  double balance303;
  struct std::_Setw agg.tmp0304;
  struct std::_Setw agg.tmp1305;
  struct std::_Setw agg.tmp2306;
  struct std::_Setprecision agg.tmp3307;
  account301 = v297;
  name302 = v298;
  balance303 = v299;
  struct std::basic_ostream<char>* g308 = &_ZSt4cout;
  void* g309 = &_ZSt4leftRSt8ios_base;
  struct std::basic_ostream<char>* r310 = std__ostream__operator___std__ios_base_____(g308, g309);
  int c311 = 10;
  struct std::_Setw r312 = std__setw(c311);
  agg.tmp0304 = r312;
  struct std::_Setw t313 = agg.tmp0304;
  struct std::basic_ostream<char>* r314 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r310, t313);
  int t315 = account301;
  struct std::basic_ostream<char>* r316 = _ZNSolsEi(r314, t315);
  int c317 = 13;
  struct std::_Setw r318 = std__setw(c317);
  agg.tmp1305 = r318;
  struct std::_Setw t319 = agg.tmp1305;
  struct std::basic_ostream<char>* r320 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r316, t319);
  char* t321 = name302;
  struct std::basic_ostream<char>* r322 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r320, t321);
  int c323 = 7;
  struct std::_Setw r324 = std__setw(c323);
  agg.tmp2306 = r324;
  struct std::_Setw t325 = agg.tmp2306;
  struct std::basic_ostream<char>* r326 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r322, t325);
  int c327 = 2;
  struct std::_Setprecision r328 = std__setprecision(c327);
  agg.tmp3307 = r328;
  struct std::_Setprecision t329 = agg.tmp3307;
  struct std::basic_ostream<char>* r330 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision(r326, t329);
  void* g331 = &_ZSt5rightRSt8ios_base;
  struct std::basic_ostream<char>* r332 = std__ostream__operator___std__ios_base_____(r330, g331);
  double t333 = balance303;
  struct std::basic_ostream<char>* r334 = _ZNSolsEd(r332, t333);
  void* g335 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r336 = std__ostream__operator___std__ostream_____(r334, g335);
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____clear(struct std::basic_ios<char>*, int);

// function: _ZNSi5seekgESt4fposI11__mbstate_tE
struct std::basic_istream<char>* std__istream__seekg(struct std::basic_istream<char>*, struct std::fpos<__mbstate_t>);

// function: _ZNSt4fposI11__mbstate_tEC2El
void std__fpos___mbstate_t___fpos(struct std::fpos<__mbstate_t>* v337, long long v338) {
bb339:
  int this340[4];
  long long __off341;
  this340 = v337;
  __off341 = v338;
  struct std::fpos<__mbstate_t>* t342 = this340;
  long long t343 = __off341;
  *t342->_M_off = t343;
  struct __mbstate_t c344 = {0};
  *t342->_M_state = c344;
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std::basic_ifstream<char>*);

// function: main
int main() {
  void* v345;
  unsigned int v346;
  void* v347;
  unsigned int v348;
  void* v349;
  unsigned int v350;
  void* v351;
  unsigned int v352;
  void* v353;
  unsigned int v354;
  void* v355;
  unsigned int v356;
  void* v357;
  unsigned int v358;
  void* v359;
  unsigned int v360;
  void* v361;
  unsigned int v362;
  void* v363;
  unsigned int v364;
  void* v365;
  unsigned int v366;
  void* v367;
  unsigned int v368;
  void* v369;
  unsigned int v370;
  void* v371;
  unsigned int v372;
  void* v373;
  unsigned int v374;
  void* v375;
  unsigned int v376;
  void* v377;
  unsigned int v378;
  void* v379;
  unsigned int v380;
  void* v381;
  unsigned int v382;
  void* v383;
  unsigned int v384;
  void* v385;
  unsigned int v386;
  void* v387;
  unsigned int v388;
bb389:
  _Bool tmp.try.call.res530;
  int tmp.try.call.res531[8];
  int tmp.try.call.res532[8];
  int tmp.try.call.res533[8];
  int tmp.try.call.res534[8];
  int tmp.try.call.res535[8];
  struct std::fpos<__mbstate_t> agg.tmp0536;
  int tmp.try.call.res537[8];
  int tmp.try.call.res538;
  int tmp.try.call.res539[8];
  int tmp.try.call.res540[8];
  int tmp.try.call.res541[8];
  _Bool tmp.try.call.res542;
  int tmp.try.call.res543[8];
  int tmp.try.call.res544[8];
  int tmp.try.call.res545[8];
  _Bool tmp.try.call.res546;
  int __retval547;
  struct std::basic_ifstream<char> inClientFile548;
  int request549;
  int account550;
  int name551[30];
  double balance552;
  int tmp.try.call.res553;
  int tmp.try.call.res554[8];
  int tmp.try.call.res555[8];
  char* cast556 = (char*)_str;
  int c557 = 8;
  std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&inClientFile548, cast556, c557);
  goto bb390;
bb390:
