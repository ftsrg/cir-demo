// Struct definitions (auto-parsed)
struct std::_Setprecision { int _M_n; };
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

int __const_main_studentGrades[3];
struct std::basic_ostream<char> _ZSt4cout;
char _str[15];
char _str_5[36] = "                 [0]  [1]  [2]  [3]";
char _str_6[16] = "\\0AstudentGrades[";
char _str_7[3] = "] ";
char _str_1[17];
char _str_2[17];
char _str_3[31] = "The average grade for student ";
char _str_4[5] = " is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZSt4leftRSt8ios_base
struct std::ios_base* std__left(struct std::ios_base* v0) {
bb1:
  int __base2[8];
  int __retval3[8];
  __base2 = v0;
  struct std::ios_base* t4 = __base2;
  int c5 = 32;
  int c6 = 176;
  int r7 = std__ios_base__setf(t4, c5, c6);
  struct std::ios_base* t8 = __base2;
  __retval3 = t8;
  struct std::ios_base* t9 = __retval3;
  return t9;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v10) {
bb11:
  int __n12;
  struct std::_Setw __retval13;
  __n12 = v10;
  int t14 = __n12;
  __retval13._M_n = t14;
  struct std::_Setw t15 = __retval13;
  return t15;
}

// function: _Z10printArrayPA4_iii
void printArray_int_(int* v16, int v17, int v18) {
bb19:
  int i34;
  int j35;
  struct std::_Setw agg.tmp036;
  int grades37[4];
  int pupils38;
  int tests39;
  grades37 = v16;
  pupils38 = v17;
  tests39 = v18;
  struct std::basic_ostream<char>* g40 = &_ZSt4cout;
  void* g41 = &_ZSt4leftRSt8ios_base;
  struct std::basic_ostream<char>* r42 = std__ostream__operator___std__ios_base_____(g40, g41);
  char* cast43 = (char*)_str_5;
  struct std::basic_ostream<char>* r44 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r42, cast43);
  goto bb20;
bb20:
  int c45 = 0;
  i34 = c45;
  goto bb21;
bb21:
  int t46 = i34;
  int t47 = pupils38;
  _Bool c48 = (t46 < t47) ? 1 : 0;
  if (c48) goto bb22; else goto bb32;
bb22:
  goto bb23;
bb23:
  struct std::basic_ostream<char>* g49 = &_ZSt4cout;
  char* cast50 = (char*)_str_6;
  struct std::basic_ostream<char>* r51 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g49, cast50);
  int t52 = i34;
  struct std::basic_ostream<char>* r53 = _ZNSolsEi(r51, t52);
  char* cast54 = (char*)_str_7;
  struct std::basic_ostream<char>* r55 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r53, cast54);
  goto bb24;
bb24:
  int c56 = 0;
  j35 = c56;
  goto bb25;
bb25:
  int t57 = j35;
  int t58 = tests39;
  _Bool c59 = (t57 < t58) ? 1 : 0;
  if (c59) goto bb26; else goto bb28;
bb26:
  struct std::basic_ostream<char>* g60 = &_ZSt4cout;
  int c61 = 5;
  struct std::_Setw r62 = std__setw(c61);
  agg.tmp036 = r62;
  struct std::_Setw t63 = agg.tmp036;
  struct std::basic_ostream<char>* r64 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(g60, t63);
  int* t65 = grades37;
  int t66 = i34;
  int* ptr67 = t65 + t66;
  int t68 = j35;
  int t69 = *ptr67[t68];
  struct std::basic_ostream<char>* r70 = _ZNSolsEi(r64, t69);
  goto bb27;
bb27:
  int t71 = j35;
  int u72 = ++t71;
  j35 = u72;
  goto bb25;
bb28:
  goto bb29;
bb29:
  goto bb30;
bb30:
  goto bb31;
bb31:
  int t73 = i34;
  int u74 = ++t73;
  i34 = u74;
  goto bb21;
bb32:
  goto bb33;
bb33:
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _Z7minimumPA4_iii
int minimum_int_(int* v75, int v76, int v77) {
bb78:
  int i95;
  int j96;
  int grades97[4];
  int pupils98;
  int tests99;
  int __retval100;
  int lowGrade101;
  grades97 = v75;
  pupils98 = v76;
  tests99 = v77;
  int c102 = 100;
  lowGrade101 = c102;
  goto bb79;
bb79:
  int c103 = 0;
  i95 = c103;
  goto bb80;
bb80:
  int t104 = i95;
  int t105 = pupils98;
  _Bool c106 = (t104 < t105) ? 1 : 0;
  if (c106) goto bb81; else goto bb93;
bb81:
  goto bb82;
bb82:
  int c107 = 0;
  j96 = c107;
  goto bb83;
bb83:
  int t108 = j96;
  int t109 = tests99;
  _Bool c110 = (t108 < t109) ? 1 : 0;
  if (c110) goto bb84; else goto bb90;
bb84:
  goto bb85;
bb85:
  int* t111 = grades97;
  int t112 = i95;
  int* ptr113 = t111 + t112;
  int t114 = j96;
  int t115 = *ptr113[t114];
  int t116 = lowGrade101;
  _Bool c117 = (t115 < t116) ? 1 : 0;
  if (c117) goto bb86; else goto bb87;
bb86:
  int* t118 = grades97;
  int t119 = i95;
  int* ptr120 = t118 + t119;
  int t121 = j96;
  int t122 = *ptr120[t121];
  lowGrade101 = t122;
  goto bb87;
bb87:
  goto bb88;
bb88:
  goto bb89;
bb89:
  int t123 = j96;
  int u124 = ++t123;
  j96 = u124;
  goto bb83;
bb90:
  goto bb91;
bb91:
  goto bb92;
bb92:
  int t125 = i95;
  int u126 = ++t125;
  i95 = u126;
  goto bb80;
bb93:
  goto bb94;
bb94:
  int t127 = lowGrade101;
  __retval100 = t127;
  int t128 = __retval100;
  return t128;
}

// function: _Z7maximumPA4_iii
int maximum_int_(int* v129, int v130, int v131) {
bb132:
  int i149;
  int j150;
  int grades151[4];
  int pupils152;
  int tests153;
  int __retval154;
  int highGrade155;
  grades151 = v129;
  pupils152 = v130;
  tests153 = v131;
  int c156 = 0;
  highGrade155 = c156;
  goto bb133;
bb133:
  int c157 = 0;
  i149 = c157;
  goto bb134;
bb134:
  int t158 = i149;
  int t159 = pupils152;
  _Bool c160 = (t158 < t159) ? 1 : 0;
  if (c160) goto bb135; else goto bb147;
bb135:
  goto bb136;
bb136:
  int c161 = 0;
  j150 = c161;
  goto bb137;
bb137:
  int t162 = j150;
  int t163 = tests153;
  _Bool c164 = (t162 < t163) ? 1 : 0;
  if (c164) goto bb138; else goto bb144;
bb138:
  goto bb139;
bb139:
  int* t165 = grades151;
  int t166 = i149;
  int* ptr167 = t165 + t166;
  int t168 = j150;
  int t169 = *ptr167[t168];
  int t170 = highGrade155;
  _Bool c171 = (t169 > t170) ? 1 : 0;
  if (c171) goto bb140; else goto bb141;
bb140:
  int* t172 = grades151;
  int t173 = i149;
  int* ptr174 = t172 + t173;
  int t175 = j150;
  int t176 = *ptr174[t175];
  highGrade155 = t176;
  goto bb141;
bb141:
  goto bb142;
bb142:
  goto bb143;
bb143:
  int t177 = j150;
  int u178 = ++t177;
  j150 = u178;
  goto bb137;
bb144:
  goto bb145;
bb145:
  goto bb146;
bb146:
  int t179 = i149;
  int u180 = ++t179;
  i149 = u180;
  goto bb134;
bb147:
  goto bb148;
bb148:
  int t181 = highGrade155;
  __retval154 = t181;
  int t182 = __retval154;
  return t182;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision(struct std::basic_ostream<char>*, struct std::_Setprecision);

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v183, int v184) {
bb185:
  int* __a186;
  int __b187;
  int* __retval188;
  __a186 = v183;
  __b187 = v184;
  int* t189 = __a186;
  int t190 = *t189;
  int t191 = __b187;
  int r192 = _ZStanSt13_Ios_FmtflagsS_(t190, t191);
  int* t193 = __a186;
  *t193 = r192;
  __retval188 = t193;
  int* t194 = __retval188;
  return t194;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v195) {
bb196:
  int __a197;
  int __retval198;
  __a197 = v195;
  int t199 = __a197;
  int u200 = ~t199;
  __retval198 = u200;
  int t201 = __retval198;
  return t201;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int _ZStorSt13_Ios_FmtflagsS_(int v202, int v203) {
bb204:
  int __a205;
  int __b206;
  int __retval207;
  __a205 = v202;
  __b206 = v203;
  int t208 = __a205;
  int t209 = __b206;
  int b210 = t208 | t209;
  __retval207 = b210;
  int t211 = __retval207;
  return t211;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* _ZStoRRSt13_Ios_FmtflagsS_(int* v212, int v213) {
bb214:
  int* __a215;
  int __b216;
  int* __retval217;
  __a215 = v212;
  __b216 = v213;
  int* t218 = __a215;
  int t219 = *t218;
  int t220 = __b216;
  int r221 = _ZStorSt13_Ios_FmtflagsS_(t219, t220);
  int* t222 = __a215;
  *t222 = r221;
  __retval217 = t222;
  int* t223 = __retval217;
  return t223;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v224, int v225) {
bb226:
  int __a227;
  int __b228;
  int __retval229;
  __a227 = v224;
  __b228 = v225;
  int t230 = __a227;
  int t231 = __b228;
  int b232 = t230 & t231;
  __retval229 = b232;
  int t233 = __retval229;
  return t233;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std::ios_base* v234, int v235, int v236) {
bb237:
  int this238[8];
  int __fmtfl239;
  int __mask240;
  int __retval241;
  int __old242;
  this238 = v234;
  __fmtfl239 = v235;
  __mask240 = v236;
  struct std::ios_base* t243 = this238;
  int t244 = *t243->_M_flags;
  __old242 = t244;
  int t245 = __mask240;
  int r246 = _ZStcoSt13_Ios_Fmtflags(t245);
  int* r247 = _ZStaNRSt13_Ios_FmtflagsS_(t243->_M_flags, r246);
  int t248 = __fmtfl239;
  int t249 = __mask240;
  int r250 = _ZStanSt13_Ios_FmtflagsS_(t248, t249);
  int* r251 = _ZStoRRSt13_Ios_FmtflagsS_(t243->_M_flags, r250);
  int t252 = __old242;
  __retval241 = t252;
  int t253 = __retval241;
  return t253;
}

// function: _ZSt5fixedRSt8ios_base
struct std::ios_base* std__fixed(struct std::ios_base* v254) {
bb255:
  int __base256[8];
  int __retval257[8];
  __base256 = v254;
  struct std::ios_base* t258 = __base256;
  int c259 = 4;
  int c260 = 260;
  int r261 = std__ios_base__setf(t258, c259, c260);
  struct std::ios_base* t262 = __base256;
  __retval257 = t262;
  struct std::ios_base* t263 = __retval257;
  return t263;
}

// function: _ZSt12setprecisioni
struct std::_Setprecision std__setprecision(int v264) {
bb265:
  int __n266;
  struct std::_Setprecision __retval267;
  __n266 = v264;
  int t268 = __n266;
  __retval267._M_n = t268;
  struct std::_Setprecision t269 = __retval267;
  return t269;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _Z7averagePii
double average(int* v270, int v271) {
bb272:
  int i279;
  int* setOfGrades280;
  int tests281;
  double __retval282;
  int total283;
  setOfGrades280 = v270;
  tests281 = v271;
  int c284 = 0;
  total283 = c284;
  goto bb273;
bb273:
  int c285 = 0;
  i279 = c285;
  goto bb274;
bb274:
  int t286 = i279;
  int t287 = tests281;
  _Bool c288 = (t286 < t287) ? 1 : 0;
  if (c288) goto bb275; else goto bb277;
bb275:
  int* t289 = setOfGrades280;
  int t290 = i279;
  int* ptr291 = t289 + t290;
  int t292 = *ptr291;
  int t293 = total283;
  int b294 = t293 + t292;
  total283 = b294;
  goto bb276;
bb276:
  int t295 = i279;
  int u296 = ++t295;
  i279 = u296;
  goto bb274;
bb277:
  goto bb278;
bb278:
  int t297 = total283;
  double cast298 = (double)t297;
  int t299 = tests281;
  double cast300 = (double)t299;
  double b301 = cast298 / cast300;
  __retval282 = b301;
  double t302 = __retval282;
  return t302;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb303:
  int person310;
  int __retval311;
  int studentGrades312[4];
  struct std::_Setprecision agg.tmp0313;
  // array copy
  for (int i = 0; i < 3; ++i) { __const_main_studentGrades[i] = studentGrades312[i]; }
  struct std::basic_ostream<char>* g314 = &_ZSt4cout;
  char* cast315 = (char*)_str;
  struct std::basic_ostream<char>* r316 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g314, cast315);
  int* cast317 = (int*)studentGrades312;
  int c318 = 3;
  int c319 = 4;
  printArray_int_(cast317, c318, c319);
  struct std::basic_ostream<char>* g320 = &_ZSt4cout;
  char* cast321 = (char*)_str_1;
  struct std::basic_ostream<char>* r322 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g320, cast321);
  int* cast323 = (int*)studentGrades312;
  int c324 = 3;
  int c325 = 4;
  int r326 = minimum_int_(cast323, c324, c325);
  struct std::basic_ostream<char>* r327 = _ZNSolsEi(r322, r326);
  char* cast328 = (char*)_str_2;
  struct std::basic_ostream<char>* r329 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r327, cast328);
  int* cast330 = (int*)studentGrades312;
  int c331 = 3;
  int c332 = 4;
  int r333 = maximum_int_(cast330, c331, c332);
  struct std::basic_ostream<char>* r334 = _ZNSolsEi(r329, r333);
  char c335 = 10;
  struct std::basic_ostream<char>* r336 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r334, c335);
  struct std::basic_ostream<char>* g337 = &_ZSt4cout;
  void* g338 = &_ZSt5fixedRSt8ios_base;
  struct std::basic_ostream<char>* r339 = std__ostream__operator___std__ios_base_____(g337, g338);
  int c340 = 2;
  struct std::_Setprecision r341 = std__setprecision(c340);
  agg.tmp0313 = r341;
  struct std::_Setprecision t342 = agg.tmp0313;
  struct std::basic_ostream<char>* r343 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision(r339, t342);
  goto bb304;
bb304:
  int c344 = 0;
  person310 = c344;
  goto bb305;
bb305:
  int t345 = person310;
  int c346 = 3;
  _Bool c347 = (t345 < c346) ? 1 : 0;
  if (c347) goto bb306; else goto bb308;
bb306:
  struct std::basic_ostream<char>* g348 = &_ZSt4cout;
  char* cast349 = (char*)_str_3;
  struct std::basic_ostream<char>* r350 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g348, cast349);
  int t351 = person310;
  struct std::basic_ostream<char>* r352 = _ZNSolsEi(r350, t351);
  char* cast353 = (char*)_str_4;
  struct std::basic_ostream<char>* r354 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r352, cast353);
  int t355 = person310;
  int* cast356 = (int*)studentGrades312[t355];
  int c357 = 4;
  double r358 = average(cast356, c357);
  struct std::basic_ostream<char>* r359 = _ZNSolsEd(r354, r358);
  void* g360 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r361 = std__ostream__operator___std__ostream_____(r359, g360);
  goto bb307;
bb307:
  int t362 = person310;
  int u363 = ++t362;
  person310 = u363;
  goto bb305;
bb308:
  goto bb309;
bb309:
  int c364 = 0;
  __retval311 = c364;
  int t365 = __retval311;
  return t365;
}

