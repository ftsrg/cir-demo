// Struct definitions (auto-parsed)
struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> { void* _M_comp; };
struct __gnu_cxx::__ops::_Iter_less_iter { unsigned char __placeholder; };
struct myclass { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct __gnu_cxx::__ops::_Iter_comp_iter<myclass> { struct myclass _M_comp; };

int __const_main_myints[7];
struct myclass myobj;
struct std::basic_ostream<char> _ZSt4cout;
char _str[25] = "The smallest element is ";
char _str_1[35] = "*min_element(myints,myints+7) == 2";
char _str_2[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm61/main.cpp";
char _str_3[11] = "int main()";
char _str_4[24] = "The largest element is ";
char _str_5[35] = "*max_element(myints,myints+7) == 9";
// function: _Z4myfnii
_Bool myfn(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = (t6 < t7) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx::__ops::_Iter_less_iter* v10, int* v11, int* v12) {
bb13:
  struct __gnu_cxx::__ops::_Iter_less_iter* this14;
  int* __it115;
  int* __it216;
  _Bool __retval17;
  this14 = v10;
  __it115 = v11;
  __it216 = v12;
  struct __gnu_cxx::__ops::_Iter_less_iter* t18 = this14;
  int* t19 = __it115;
  int t20 = *t19;
  int* t21 = __it216;
  int t22 = *t21;
  _Bool c23 = (t20 < t22) ? 1 : 0;
  __retval17 = c23;
  _Bool t24 = __retval17;
  return t24;
}

// function: _ZSt13__min_elementIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_T0_
int* int__std____min_element_int_____gnu_cxx____ops___Iter_less_iter_(int* v25, int* v26, struct __gnu_cxx::__ops::_Iter_less_iter v27) {
bb28:
  int* __first42;
  int* __last43;
  struct __gnu_cxx::__ops::_Iter_less_iter __comp44;
  int* __retval45;
  int* __result46;
  __first42 = v25;
  __last43 = v26;
  __comp44 = v27;
  goto bb29;
bb29:
  int* t47 = __first42;
  int* t48 = __last43;
  _Bool c49 = (t47 == t48) ? 1 : 0;
  if (c49) goto bb30; else goto bb31;
bb30:
  int* t50 = __first42;
  __retval45 = t50;
  int* t51 = __retval45;
  return t51;
bb31:
  goto bb32;
bb32:
  int* t52 = __first42;
  __result46 = t52;
  goto bb33;
bb33:
  goto bb34;
bb34:
  int* t53 = __first42;
  int c54 = 1;
  int* ptr55 = t53 + c54;
  __first42 = ptr55;
  int* t56 = __last43;
  _Bool c57 = (ptr55 != t56) ? 1 : 0;
  if (c57) goto bb35; else goto bb40;
bb35:
  goto bb36;
bb36:
  int* t58 = __first42;
  int* t59 = __result46;
  _Bool r60 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp44, t58, t59);
  if (r60) goto bb37; else goto bb38;
bb37:
  int* t61 = __first42;
  __result46 = t61;
  goto bb38;
bb38:
  goto bb39;
bb39:
  goto bb34;
bb40:
  goto bb41;
bb41:
  int* t62 = __result46;
  __retval45 = t62;
  int* t63 = __retval45;
  return t63;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_less_iterC2Ev
void __gnu_cxx____ops___Iter_less_iter___Iter_less_iter(struct __gnu_cxx::__ops::_Iter_less_iter* v64) {
bb65:
  struct __gnu_cxx::__ops::_Iter_less_iter* this66;
  this66 = v64;
  struct __gnu_cxx::__ops::_Iter_less_iter* t67 = this66;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx::__ops::_Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb68:
  struct __gnu_cxx::__ops::_Iter_less_iter __retval69;
  struct __gnu_cxx::__ops::_Iter_less_iter t70 = __retval69;
  return t70;
}

// function: _ZSt11min_elementIPiET_S1_S1_
int* int__std__min_element_int__(int* v71, int* v72) {
bb73:
  int* __first74;
  int* __last75;
  int* __retval76;
  struct __gnu_cxx::__ops::_Iter_less_iter agg.tmp077;
  __first74 = v71;
  __last75 = v72;
  int* t78 = __first74;
  int* t79 = __last75;
  struct __gnu_cxx::__ops::_Iter_less_iter r80 = __gnu_cxx____ops____iter_less_iter();
  agg.tmp077 = r80;
  struct __gnu_cxx::__ops::_Iter_less_iter t81 = agg.tmp077;
  int* r82 = int__std____min_element_int_____gnu_cxx____ops___Iter_less_iter_(t78, t79, t81);
  __retval76 = r82;
  int* t83 = __retval76;
  return t83;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZSt13__max_elementIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_T0_
int* int__std____max_element_int_____gnu_cxx____ops___Iter_less_iter_(int* v84, int* v85, struct __gnu_cxx::__ops::_Iter_less_iter v86) {
bb87:
  int* __first101;
  int* __last102;
  struct __gnu_cxx::__ops::_Iter_less_iter __comp103;
  int* __retval104;
  int* __result105;
  __first101 = v84;
  __last102 = v85;
  __comp103 = v86;
  goto bb88;
bb88:
  int* t106 = __first101;
  int* t107 = __last102;
  _Bool c108 = (t106 == t107) ? 1 : 0;
  if (c108) goto bb89; else goto bb90;
bb89:
  int* t109 = __first101;
  __retval104 = t109;
  int* t110 = __retval104;
  return t110;
bb90:
  goto bb91;
bb91:
  int* t111 = __first101;
  __result105 = t111;
  goto bb92;
bb92:
  goto bb93;
bb93:
  int* t112 = __first101;
  int c113 = 1;
  int* ptr114 = t112 + c113;
  __first101 = ptr114;
  int* t115 = __last102;
  _Bool c116 = (ptr114 != t115) ? 1 : 0;
  if (c116) goto bb94; else goto bb99;
bb94:
  goto bb95;
bb95:
  int* t117 = __result105;
  int* t118 = __first101;
  _Bool r119 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp103, t117, t118);
  if (r119) goto bb96; else goto bb97;
bb96:
  int* t120 = __first101;
  __result105 = t120;
  goto bb97;
bb97:
  goto bb98;
bb98:
  goto bb93;
bb99:
  goto bb100;
bb100:
  int* t121 = __result105;
  __retval104 = t121;
  int* t122 = __retval104;
  return t122;
}

// function: _ZSt11max_elementIPiET_S1_S1_
int* int__std__max_element_int__(int* v123, int* v124) {
bb125:
  int* __first126;
  int* __last127;
  int* __retval128;
  struct __gnu_cxx::__ops::_Iter_less_iter agg.tmp0129;
  __first126 = v123;
  __last127 = v124;
  int* t130 = __first126;
  int* t131 = __last127;
  struct __gnu_cxx::__ops::_Iter_less_iter r132 = __gnu_cxx____ops____iter_less_iter();
  agg.tmp0129 = r132;
  struct __gnu_cxx::__ops::_Iter_less_iter t133 = agg.tmp0129;
  int* r134 = int__std____max_element_int_____gnu_cxx____ops___Iter_less_iter_(t130, t131, t133);
  __retval128 = r134;
  int* t135 = __retval128;
  return t135;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclIPiS6_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* v136, int* v137, int* v138) {
bb139:
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* this140;
  int* __it1141;
  int* __it2142;
  _Bool __retval143;
  this140 = v136;
  __it1141 = v137;
  __it2142 = v138;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* t144 = this140;
  void* t145 = *t144->_M_comp;
  int* t146 = __it1141;
  int t147 = *t146;
  int* t148 = __it2142;
  int t149 = *t148;
  _Bool r150 = ((_Bool (*)())t145)(t147, t149);
  __retval143 = r150;
  _Bool t151 = __retval143;
  return t151;
}

// function: _ZSt13__min_elementIPiN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEEET_S7_S7_T0_
int* int__std____min_element_int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* v152, int* v153, struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> v154) {
bb155:
  int* __first169;
  int* __last170;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> __comp171;
  int* __retval172;
  int* __result173;
  __first169 = v152;
  __last170 = v153;
  __comp171 = v154;
  goto bb156;
bb156:
  int* t174 = __first169;
  int* t175 = __last170;
  _Bool c176 = (t174 == t175) ? 1 : 0;
  if (c176) goto bb157; else goto bb158;
bb157:
  int* t177 = __first169;
  __retval172 = t177;
  int* t178 = __retval172;
  return t178;
bb158:
  goto bb159;
bb159:
  int* t179 = __first169;
  __result173 = t179;
  goto bb160;
bb160:
  goto bb161;
bb161:
  int* t180 = __first169;
  int c181 = 1;
  int* ptr182 = t180 + c181;
  __first169 = ptr182;
  int* t183 = __last170;
  _Bool c184 = (ptr182 != t183) ? 1 : 0;
  if (c184) goto bb162; else goto bb167;
bb162:
  goto bb163;
bb163:
  int* t185 = __first169;
  int* t186 = __result173;
  _Bool r187 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(&__comp171, t185, t186);
  if (r187) goto bb164; else goto bb165;
bb164:
  int* t188 = __first169;
  __result173 = t188;
  goto bb165;
bb165:
  goto bb166;
bb166:
  goto bb161;
bb167:
  goto bb168;
bb168:
  int* t189 = __result173;
  __retval172 = t189;
  int* t190 = __retval172;
  return t190;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* v191, void* v192) {
bb193:
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* this194;
  void* __comp195;
  this194 = v191;
  __comp195 = v192;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* t196 = this194;
  void* t197 = __comp195;
  *t196->_M_comp = t197;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v198) {
bb199:
  void* __comp200;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> __retval201;
  __comp200 = v198;
  void* t202 = __comp200;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval201, t202);
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> t203 = __retval201;
  return t203;
}

// function: _ZSt11min_elementIPiPFbiiEET_S3_S3_T0_
int* int__std__min_element_int___bool_____int__int___int___int___bool____(int* v204, int* v205, void* v206) {
bb207:
  int* __first208;
  int* __last209;
  void* __comp210;
  int* __retval211;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> agg.tmp0212;
  __first208 = v204;
  __last209 = v205;
  __comp210 = v206;
  int* t213 = __first208;
  int* t214 = __last209;
  void* t215 = __comp210;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> r216 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t215);
  agg.tmp0212 = r216;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> t217 = agg.tmp0212;
  int* r218 = int__std____min_element_int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(t213, t214, t217);
  __retval211 = r218;
  int* t219 = __retval211;
  return t219;
}

// function: _ZSt13__max_elementIPiN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEEET_S7_S7_T0_
int* int__std____max_element_int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* v220, int* v221, struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> v222) {
bb223:
  int* __first237;
  int* __last238;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> __comp239;
  int* __retval240;
  int* __result241;
  __first237 = v220;
  __last238 = v221;
  __comp239 = v222;
  goto bb224;
bb224:
  int* t242 = __first237;
  int* t243 = __last238;
  _Bool c244 = (t242 == t243) ? 1 : 0;
  if (c244) goto bb225; else goto bb226;
bb225:
  int* t245 = __first237;
  __retval240 = t245;
  int* t246 = __retval240;
  return t246;
bb226:
  goto bb227;
bb227:
  int* t247 = __first237;
  __result241 = t247;
  goto bb228;
bb228:
  goto bb229;
bb229:
  int* t248 = __first237;
  int c249 = 1;
  int* ptr250 = t248 + c249;
  __first237 = ptr250;
  int* t251 = __last238;
  _Bool c252 = (ptr250 != t251) ? 1 : 0;
  if (c252) goto bb230; else goto bb235;
bb230:
  goto bb231;
bb231:
  int* t253 = __result241;
  int* t254 = __first237;
  _Bool r255 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(&__comp239, t253, t254);
  if (r255) goto bb232; else goto bb233;
bb232:
  int* t256 = __first237;
  __result241 = t256;
  goto bb233;
bb233:
  goto bb234;
bb234:
  goto bb229;
bb235:
  goto bb236;
bb236:
  int* t257 = __result241;
  __retval240 = t257;
  int* t258 = __retval240;
  return t258;
}

// function: _ZSt11max_elementIPiPFbiiEET_S3_S3_T0_
int* int__std__max_element_int___bool_____int__int___int___int___bool____(int* v259, int* v260, void* v261) {
bb262:
  int* __first263;
  int* __last264;
  void* __comp265;
  int* __retval266;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> agg.tmp0267;
  __first263 = v259;
  __last264 = v260;
  __comp265 = v261;
  int* t268 = __first263;
  int* t269 = __last264;
  void* t270 = __comp265;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> r271 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t270);
  agg.tmp0267 = r271;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> t272 = agg.tmp0267;
  int* r273 = int__std____max_element_int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(t268, t269, t272);
  __retval266 = r273;
  int* t274 = __retval266;
  return t274;
}

// function: _ZN7myclassclEii
_Bool myclass__operator__(struct myclass* v275, int v276, int v277) {
bb278:
  struct myclass* this279;
  int i280;
  int j281;
  _Bool __retval282;
  this279 = v275;
  i280 = v276;
  j281 = v277;
  struct myclass* t283 = this279;
  int t284 = i280;
  int t285 = j281;
  _Bool c286 = (t284 < t285) ? 1 : 0;
  __retval282 = c286;
  _Bool t287 = __retval282;
  return t287;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI7myclassEclIPiS5_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator___int___int__(struct __gnu_cxx::__ops::_Iter_comp_iter<myclass>* v288, int* v289, int* v290) {
bb291:
  struct __gnu_cxx::__ops::_Iter_comp_iter<myclass>* this292;
  int* __it1293;
  int* __it2294;
  _Bool __retval295;
  this292 = v288;
  __it1293 = v289;
  __it2294 = v290;
  struct __gnu_cxx::__ops::_Iter_comp_iter<myclass>* t296 = this292;
  int* t297 = __it1293;
  int t298 = *t297;
  int* t299 = __it2294;
  int t300 = *t299;
  _Bool r301 = myclass__operator__(t296->_M_comp, t298, t300);
  __retval295 = r301;
  _Bool t302 = __retval295;
  return t302;
}

// function: _ZSt13__min_elementIPiN9__gnu_cxx5__ops15_Iter_comp_iterI7myclassEEET_S6_S6_T0_
int* int__std____min_element_int_____gnu_cxx____ops___Iter_comp_iter_myclass___(int* v303, int* v304, struct __gnu_cxx::__ops::_Iter_comp_iter<myclass> v305) {
bb306:
  int* __first320;
  int* __last321;
  struct __gnu_cxx::__ops::_Iter_comp_iter<myclass> __comp322;
  int* __retval323;
  int* __result324;
  __first320 = v303;
  __last321 = v304;
  __comp322 = v305;
  goto bb307;
bb307:
  int* t325 = __first320;
  int* t326 = __last321;
  _Bool c327 = (t325 == t326) ? 1 : 0;
  if (c327) goto bb308; else goto bb309;
bb308:
  int* t328 = __first320;
  __retval323 = t328;
  int* t329 = __retval323;
  return t329;
bb309:
  goto bb310;
bb310:
  int* t330 = __first320;
  __result324 = t330;
  goto bb311;
bb311:
  goto bb312;
bb312:
  int* t331 = __first320;
  int c332 = 1;
  int* ptr333 = t331 + c332;
  __first320 = ptr333;
  int* t334 = __last321;
  _Bool c335 = (ptr333 != t334) ? 1 : 0;
  if (c335) goto bb313; else goto bb318;
bb313:
  goto bb314;
bb314:
  int* t336 = __first320;
  int* t337 = __result324;
  _Bool r338 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator___int___int__(&__comp322, t336, t337);
  if (r338) goto bb315; else goto bb316;
bb315:
  int* t339 = __first320;
  __result324 = t339;
  goto bb316;
bb316:
  goto bb317;
bb317:
  goto bb312;
bb318:
  goto bb319;
bb319:
  int* t340 = __result324;
  __retval323 = t340;
  int* t341 = __retval323;
  return t341;
}

// function: _ZN7myclassC2EOS_
void _ZN7myclassC2EOS_(struct myclass* v342, struct myclass* v343) {
bb344:
  struct myclass* this345;
