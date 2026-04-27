// Struct definitions (auto-parsed)
struct std::_Setprecision { int _M_n; };
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

int __const_main_response[99];
struct std::basic_ostream<char> _ZSt4cout;
char _str[26] = "********\\0A  Mean\\0A********\\0A";
char _str_1[43] = "The mean is the average value of the data\\0A";
char _str_2[42] = "items. The mean is equal to the total of\\0A";
char _str_3[42] = "all the data items divided by the number\\0A";
char _str_4[16] = "of data items (";
char _str_5[36];
char _str_6[4] = " / ";
char _str_7[4] = " = ";
char _str_8[3] = "\\0A\\0A";
char _str_9[28] = "\\0A********\\0A Median\\0A********\\0A";
char _str_10[35] = "The unsorted array of responses is";
char _str_11[22] = "\\0A\\0AThe sorted array is";
char _str_12[25] = "\\0A\\0AThe median is element ";
char _str_13[16] = " of\\0Athe sorted ";
char _str_14[44] = " element array.\\0AFor this run the median is ";
char _str_15[27] = "\\0A********\\0A  Mode\\0A********\\0A";
char _str_16[9] = "Response";
char _str_17[10] = "Frequency";
char _str_18[12] = "Histogram\\0A\\0A";
char _str_19[18] = "1    1    2    2\\0A";
char _str_20[24] = "5    0    5    0    5\\0A\\0A";
char _str_21[11] = "          ";
char _str_22[38] = "The mode is the most frequent value.\\0A";
char _str_23[26] = "For this run the mode is ";
char _str_24[17] = " which occurred ";
char _str_25[8] = " times.";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision(struct std::basic_ostream<char>*, struct std::_Setprecision);

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

// function: _ZSt12setprecisioni
struct std::_Setprecision std__setprecision(int v81) {
bb82:
  int __n83;
  struct std::_Setprecision __retval84;
  __n83 = v81;
  int t85 = __n83;
  __retval84._M_n = t85;
  struct std::_Setprecision t86 = __retval84;
  return t86;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _Z4meanPKii
void mean(int* v87, int v88) {
bb89:
  int i96;
  int* answer97;
  int arraySize98;
  int total99;
  struct std::_Setprecision agg.tmp0100;
  answer97 = v87;
  arraySize98 = v88;
  int c101 = 0;
  total99 = c101;
  struct std::basic_ostream<char>* g102 = &_ZSt4cout;
  char* cast103 = (char*)_str;
  struct std::basic_ostream<char>* r104 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g102, cast103);
  goto bb90;
bb90:
  int c105 = 0;
  i96 = c105;
  goto bb91;
bb91:
  int t106 = i96;
  int t107 = arraySize98;
  _Bool c108 = (t106 < t107) ? 1 : 0;
  if (c108) goto bb92; else goto bb94;
bb92:
  int* t109 = answer97;
  int t110 = i96;
  int* ptr111 = t109 + t110;
  int t112 = *ptr111;
  int t113 = total99;
  int b114 = t113 + t112;
  total99 = b114;
  goto bb93;
bb93:
  int t115 = i96;
  int u116 = ++t115;
  i96 = u116;
  goto bb91;
bb94:
  goto bb95;
bb95:
  struct std::basic_ostream<char>* g117 = &_ZSt4cout;
  void* g118 = &_ZSt5fixedRSt8ios_base;
  struct std::basic_ostream<char>* r119 = std__ostream__operator___std__ios_base_____(g117, g118);
  int c120 = 4;
  struct std::_Setprecision r121 = std__setprecision(c120);
  agg.tmp0100 = r121;
  struct std::_Setprecision t122 = agg.tmp0100;
  struct std::basic_ostream<char>* r123 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision(r119, t122);
  struct std::basic_ostream<char>* g124 = &_ZSt4cout;
  char* cast125 = (char*)_str_1;
  struct std::basic_ostream<char>* r126 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g124, cast125);
  char* cast127 = (char*)_str_2;
  struct std::basic_ostream<char>* r128 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r126, cast127);
  char* cast129 = (char*)_str_3;
  struct std::basic_ostream<char>* r130 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r128, cast129);
  char* cast131 = (char*)_str_4;
  struct std::basic_ostream<char>* r132 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r130, cast131);
  int t133 = arraySize98;
  struct std::basic_ostream<char>* r134 = _ZNSolsEi(r132, t133);
  char* cast135 = (char*)_str_5;
  struct std::basic_ostream<char>* r136 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r134, cast135);
  int t137 = total99;
  struct std::basic_ostream<char>* r138 = _ZNSolsEi(r136, t137);
  char* cast139 = (char*)_str_6;
  struct std::basic_ostream<char>* r140 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r138, cast139);
  int t141 = arraySize98;
  struct std::basic_ostream<char>* r142 = _ZNSolsEi(r140, t141);
  char* cast143 = (char*)_str_7;
  struct std::basic_ostream<char>* r144 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r142, cast143);
  int t145 = total99;
  double cast146 = (double)t145;
  int t147 = arraySize98;
  double cast148 = (double)t147;
  double b149 = cast146 / cast148;
  struct std::basic_ostream<char>* r150 = _ZNSolsEd(r144, b149);
  char* cast151 = (char*)_str_8;
  struct std::basic_ostream<char>* r152 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r150, cast151);
  return;
}

// function: _Z10printArrayPKii
void printArray(int* v153, int v154) {
bb155:
  int i168;
  struct std::_Setw agg.tmp0169;
  int* a170;
  int size171;
  a170 = v153;
  size171 = v154;
  goto bb156;
bb156:
  int c172 = 0;
  i168 = c172;
  goto bb157;
bb157:
  int t173 = i168;
  int t174 = size171;
  _Bool c175 = (t173 < t174) ? 1 : 0;
  if (c175) goto bb158; else goto bb166;
bb158:
  goto bb159;
bb159:
  goto bb160;
bb160:
  int t176 = i168;
  int c177 = 20;
  int b178 = t176 % c177;
  int c179 = 0;
  _Bool c180 = (b178 == c179) ? 1 : 0;
  if (c180) goto bb161; else goto bb162;
bb161:
  struct std::basic_ostream<char>* g181 = &_ZSt4cout;
  void* g182 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r183 = std__ostream__operator___std__ostream_____(g181, g182);
  goto bb162;
bb162:
  goto bb163;
bb163:
  struct std::basic_ostream<char>* g184 = &_ZSt4cout;
  int c185 = 2;
  struct std::_Setw r186 = std__setw(c185);
  agg.tmp0169 = r186;
  struct std::_Setw t187 = agg.tmp0169;
  struct std::basic_ostream<char>* r188 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(g184, t187);
  int* t189 = a170;
  int t190 = i168;
  int* ptr191 = t189 + t190;
  int t192 = *ptr191;
  struct std::basic_ostream<char>* r193 = _ZNSolsEi(r188, t192);
  goto bb164;
bb164:
  goto bb165;
bb165:
  int t194 = i168;
  int u195 = ++t194;
  i168 = u195;
  goto bb157;
bb166:
  goto bb167;
bb167:
  return;
}

// function: _Z10bubbleSortPii
void bubbleSort(int* v196, int v197) {
bb198:
  int pass215;
  int j216;
  int* a217;
  int size218;
  int hold219;
  a217 = v196;
  size218 = v197;
  goto bb199;
bb199:
  int c220 = 1;
  pass215 = c220;
  goto bb200;
bb200:
  int t221 = pass215;
  int t222 = size218;
  _Bool c223 = (t221 < t222) ? 1 : 0;
  if (c223) goto bb201; else goto bb213;
bb201:
  goto bb202;
bb202:
  int c224 = 0;
  j216 = c224;
  goto bb203;
bb203:
  int t225 = j216;
  int t226 = size218;
  int c227 = 1;
  int b228 = t226 - c227;
  _Bool c229 = (t225 < b228) ? 1 : 0;
  if (c229) goto bb204; else goto bb210;
bb204:
  goto bb205;
bb205:
  int* t230 = a217;
  int t231 = j216;
  int* ptr232 = t230 + t231;
  int t233 = *ptr232;
  int* t234 = a217;
  int t235 = j216;
  int c236 = 1;
  int b237 = t235 + c236;
  int* ptr238 = t234 + b237;
  int t239 = *ptr238;
  _Bool c240 = (t233 > t239) ? 1 : 0;
  if (c240) goto bb206; else goto bb207;
bb206:
  int* t241 = a217;
  int t242 = j216;
  int* ptr243 = t241 + t242;
  int t244 = *ptr243;
  hold219 = t244;
  int* t245 = a217;
  int t246 = j216;
  int c247 = 1;
  int b248 = t246 + c247;
  int* ptr249 = t245 + b248;
  int t250 = *ptr249;
  int* t251 = a217;
  int t252 = j216;
  int* ptr253 = t251 + t252;
  *ptr253 = t250;
  int t254 = hold219;
  int* t255 = a217;
  int t256 = j216;
  int c257 = 1;
  int b258 = t256 + c257;
  int* ptr259 = t255 + b258;
  *ptr259 = t254;
  goto bb207;
bb207:
  goto bb208;
bb208:
  goto bb209;
bb209:
  int t260 = j216;
  int u261 = ++t260;
  j216 = u261;
  goto bb203;
bb210:
  goto bb211;
bb211:
  goto bb212;
bb212:
  int t262 = pass215;
  int u263 = ++t262;
  pass215 = u263;
  goto bb200;
bb213:
  goto bb214;
bb214:
  return;
}

// function: _Z6medianPii
void median(int* v264, int v265) {
bb266:
  int* answer267;
  int size268;
  answer267 = v264;
  size268 = v265;
  struct std::basic_ostream<char>* g269 = &_ZSt4cout;
  char* cast270 = (char*)_str_9;
  struct std::basic_ostream<char>* r271 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g269, cast270);
  char* cast272 = (char*)_str_10;
  struct std::basic_ostream<char>* r273 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r271, cast272);
  int* t274 = answer267;
  int t275 = size268;
  printArray(t274, t275);
  int* t276 = answer267;
  int t277 = size268;
  bubbleSort(t276, t277);
  struct std::basic_ostream<char>* g278 = &_ZSt4cout;
  char* cast279 = (char*)_str_11;
  struct std::basic_ostream<char>* r280 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g278, cast279);
  int* t281 = answer267;
  int t282 = size268;
  printArray(t281, t282);
  struct std::basic_ostream<char>* g283 = &_ZSt4cout;
  char* cast284 = (char*)_str_12;
  struct std::basic_ostream<char>* r285 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g283, cast284);
  int t286 = size268;
  int c287 = 2;
  int b288 = t286 / c287;
  struct std::basic_ostream<char>* r289 = _ZNSolsEi(r285, b288);
  char* cast290 = (char*)_str_13;
  struct std::basic_ostream<char>* r291 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r289, cast290);
  int t292 = size268;
  struct std::basic_ostream<char>* r293 = _ZNSolsEi(r291, t292);
  char* cast294 = (char*)_str_14;
  struct std::basic_ostream<char>* r295 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r293, cast294);
  int* t296 = answer267;
  int t297 = size268;
  int c298 = 2;
  int b299 = t297 / c298;
  int* ptr300 = t296 + b299;
  int t301 = *ptr300;
  struct std::basic_ostream<char>* r302 = _ZNSolsEi(r295, t301);
  char* cast303 = (char*)_str_8;
  struct std::basic_ostream<char>* r304 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r302, cast303);
  return;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v305) {
bb306:
  int __n307;
  struct std::_Setw __retval308;
  __n307 = v305;
  int t309 = __n307;
  __retval308._M_n = t309;
  struct std::_Setw t310 = __retval308;
  return t310;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z4modePiS_i
void mode(int* v311, int* v312, int v313) {
bb314:
  int i345;
  int j346;
  int rating347;
  struct std::_Setw agg.tmp4348;
  struct std::_Setw agg.tmp5349;
  int k350;
  int* freq351;
  int* answer352;
  int size353;
  int largest354;
  int modeValue355;
  struct std::_Setw agg.tmp0356;
  struct std::_Setw agg.tmp1357;
  struct std::_Setw agg.tmp2358;
  struct std::_Setw agg.tmp3359;
  freq351 = v311;
  answer352 = v312;
  size353 = v313;
  int c360 = 0;
  largest354 = c360;
  int c361 = 0;
  modeValue355 = c361;
  struct std::basic_ostream<char>* g362 = &_ZSt4cout;
  char* cast363 = (char*)_str_15;
  struct std::basic_ostream<char>* r364 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g362, cast363);
  goto bb315;
bb315:
  int c365 = 1;
  i345 = c365;
  goto bb316;
bb316:
  int t366 = i345;
  int c367 = 9;
  _Bool c368 = (t366 <= c367) ? 1 : 0;
  if (c368) goto bb317; else goto bb319;
bb317:
  int c369 = 0;
  int* t370 = freq351;
  int t371 = i345;
  int* ptr372 = t370 + t371;
  *ptr372 = c369;
  goto bb318;
bb318:
  int t373 = i345;
  int u374 = ++t373;
  i345 = u374;
  goto bb316;
bb319:
  goto bb320;
bb320:
  goto bb321;
bb321:
  int c375 = 0;
  j346 = c375;
  goto bb322;
bb322:
  int t376 = j346;
  int t377 = size353;
  _Bool c378 = (t376 < t377) ? 1 : 0;
  if (c378) goto bb323; else goto bb325;
bb323:
  int* t379 = freq351;
  int* t380 = answer352;
  int t381 = j346;
  int* ptr382 = t380 + t381;
  int t383 = *ptr382;
  int* ptr384 = t379 + t383;
  int t385 = *ptr384;
  int u386 = ++t385;
  *ptr384 = u386;
  goto bb324;
bb324:
  int t387 = j346;
  int u388 = ++t387;
  j346 = u388;
  goto bb322;
bb325:
  goto bb326;
bb326:
  struct std::basic_ostream<char>* g389 = &_ZSt4cout;
  char* cast390 = (char*)_str_16;
  struct std::basic_ostream<char>* r391 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g389, cast390);
  int c392 = 11;
  struct std::_Setw r393 = std__setw(c392);
  agg.tmp0356 = r393;
  struct std::_Setw t394 = agg.tmp0356;
  struct std::basic_ostream<char>* r395 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r391, t394);
  char* cast396 = (char*)_str_17;
  struct std::basic_ostream<char>* r397 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r395, cast396);
  int c398 = 19;
  struct std::_Setw r399 = std__setw(c398);
  agg.tmp1357 = r399;
  struct std::_Setw t400 = agg.tmp1357;
  struct std::basic_ostream<char>* r401 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r397, t400);
  char* cast402 = (char*)_str_18;
  struct std::basic_ostream<char>* r403 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r401, cast402);
  int c404 = 55;
  struct std::_Setw r405 = std__setw(c404);
  agg.tmp2358 = r405;
  struct std::_Setw t406 = agg.tmp2358;
  struct std::basic_ostream<char>* r407 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r403, t406);
  char* cast408 = (char*)_str_19;
  struct std::basic_ostream<char>* r409 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r407, cast408);
  int c410 = 56;
  struct std::_Setw r411 = std__setw(c410);
  agg.tmp3359 = r411;
  struct std::_Setw t412 = agg.tmp3359;
  struct std::basic_ostream<char>* r413 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r409, t412);
  char* cast414 = (char*)_str_20;
  struct std::basic_ostream<char>* r415 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r413, cast414);
  goto bb327;
bb327:
  int c416 = 1;
  rating347 = c416;
  goto bb328;
bb328:
  int t417 = rating347;
  int c418 = 9;
  _Bool c419 = (t417 <= c418) ? 1 : 0;
  if (c419) goto bb329; else goto bb343;
bb329:
  goto bb330;
bb330:
  struct std::basic_ostream<char>* g420 = &_ZSt4cout;
  int c421 = 8;
  struct std::_Setw r422 = std__setw(c421);
  agg.tmp4348 = r422;
  struct std::_Setw t423 = agg.tmp4348;
  struct std::basic_ostream<char>* r424 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(g420, t423);
  int t425 = rating347;
  struct std::basic_ostream<char>* r426 = _ZNSolsEi(r424, t425);
  int c427 = 11;
  struct std::_Setw r428 = std__setw(c427);
  agg.tmp5349 = r428;
  struct std::_Setw t429 = agg.tmp5349;
  struct std::basic_ostream<char>* r430 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r426, t429);
  int* t431 = freq351;
  int t432 = rating347;
  int* ptr433 = t431 + t432;
  int t434 = *ptr433;
  struct std::basic_ostream<char>* r435 = _ZNSolsEi(r430, t434);
  char* cast436 = (char*)_str_21;
  struct std::basic_ostream<char>* r437 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r435, cast436);
  goto bb331;
bb331:
  int* t438 = freq351;
  int t439 = rating347;
  int* ptr440 = t438 + t439;
  int t441 = *ptr440;
  int t442 = largest354;
  _Bool c443 = (t441 > t442) ? 1 : 0;
  if (c443) goto bb332; else goto bb333;
bb332:
  int* t444 = freq351;
  int t445 = rating347;
  int* ptr446 = t444 + t445;
  int t447 = *ptr446;
  largest354 = t447;
  int t448 = rating347;
  modeValue355 = t448;
  goto bb333;
bb333:
  goto bb334;
bb334:
  goto bb335;
bb335:
  int c449 = 1;
  k350 = c449;
  goto bb336;
bb336:
  int t450 = k350;
  int* t451 = freq351;
  int t452 = rating347;
  int* ptr453 = t451 + t452;
  int t454 = *ptr453;
  _Bool c455 = (t450 <= t454) ? 1 : 0;
  if (c455) goto bb337; else goto bb339;
bb337:
  struct std::basic_ostream<char>* g456 = &_ZSt4cout;
  char c457 = 42;
  struct std::basic_ostream<char>* r458 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g456, c457);
  goto bb338;
bb338:
  int t459 = k350;
  int u460 = ++t459;
  k350 = u460;
  goto bb336;
bb339:
  goto bb340;
bb340:
  struct std::basic_ostream<char>* g461 = &_ZSt4cout;
  char c462 = 10;
  struct std::basic_ostream<char>* r463 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g461, c462);
  goto bb341;
bb341:
  goto bb342;
bb342:
  int t464 = rating347;
  int u465 = ++t464;
  rating347 = u465;
  goto bb328;
bb343:
  goto bb344;
bb344:
  struct std::basic_ostream<char>* g466 = &_ZSt4cout;
  char* cast467 = (char*)_str_22;
  struct std::basic_ostream<char>* r468 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g466, cast467);
  char* cast469 = (char*)_str_23;
  struct std::basic_ostream<char>* r470 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r468, cast469);
  int t471 = modeValue355;
  struct std::basic_ostream<char>* r472 = _ZNSolsEi(r470, t471);
  char* cast473 = (char*)_str_24;
  struct std::basic_ostream<char>* r474 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r472, cast473);
  int t475 = largest354;
  struct std::basic_ostream<char>* r476 = _ZNSolsEi(r474, t475);
  char* cast477 = (char*)_str_25;
  struct std::basic_ostream<char>* r478 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r476, cast477);
  void* g479 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r480 = std__ostream__operator___std__ostream_____(r478, g479);
  return;
}

// function: main
int main() {
bb481:
  int __retval482;
  int responseSize483;
  int frequency484[10];
  int response485[99];
  int c486 = 99;
  responseSize483 = c486;
  int c487 = {0};
  frequency484 = c487;
  // array copy
  for (int i = 0; i < 99; ++i) { __const_main_response[i] = response485[i]; }
  int* cast488 = (int*)response485;
  int c489 = 99;
  mean(cast488, c489);
  int* cast490 = (int*)response485;
  int c491 = 99;
  median(cast490, c491);
  int* cast492 = (int*)frequency484;
  int* cast493 = (int*)response485;
  int c494 = 99;
  mode(cast492, cast493, c494);
  int c495 = 0;
  __retval482 = c495;
  int t496 = __retval482;
  return t496;
}

