// Struct definitions (auto-parsed)
struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> { void* _M_comp; };
struct __gnu_cxx::__ops::_Iter_less_iter { unsigned char __field0; };

int __const_main_continent[4];
int __const_main_container[10];
char _str[55] = "includes(container,container+10,continent,continent+4)";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm51/main.cpp";
char _str_2[11] = "int main()";
char _str_3[67] = "includes(container,container+10,continent,continent+4, myfunction)";
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
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

// function: _ZSt10__includesIPiS0_N9__gnu_cxx5__ops15_Iter_less_iterEEbT_S4_T0_S5_T1_
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(int* v25, int* v26, int* v27, int* v28, struct __gnu_cxx::__ops::_Iter_less_iter v29) {
  _Bool v30;
  _Bool v31;
bb32:
  int* __first154;
  int* __last155;
  int* __first256;
  int* __last257;
  struct __gnu_cxx::__ops::_Iter_less_iter __comp58;
  _Bool __retval59;
  __first154 = v25;
  __last155 = v26;
  __first256 = v27;
  __last257 = v28;
  __comp58 = v29;
  goto bb33;
bb33:
  goto bb34;
bb34:
  int* t60 = __first154;
  int* t61 = __last155;
  _Bool c62 = (t60 != t61) ? 1 : 0;
  if (c62) goto bb35; else goto bb39;
bb35:
  int* t63 = __first256;
  int* t64 = __last257;
  _Bool c65 = (t63 != t64) ? 1 : 0;
  if (c65) goto bb36; else goto bb37;
bb36:
  _Bool c66 = 1;
  v30 = c66;
  goto bb38;
bb37:
  _Bool c67 = 0;
  v30 = c67;
  goto bb38;
bb38:
  v31 = v30;
  goto bb40;
bb39:
  _Bool c68 = 0;
  v31 = c68;
  goto bb40;
bb40:
  if (v31) goto bb41; else goto bb52;
bb41:
  goto bb42;
bb42:
  goto bb43;
bb43:
  int* t69 = __first256;
  int* t70 = __first154;
  _Bool r71 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp58, t69, t70);
  if (r71) goto bb44; else goto bb45;
bb44:
  _Bool c72 = 0;
  __retval59 = c72;
  _Bool t73 = __retval59;
  return t73;
bb45:
  goto bb46;
bb46:
  goto bb47;
bb47:
  int* t74 = __first154;
  int* t75 = __first256;
  _Bool r76 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp58, t74, t75);
  _Bool u77 = !r76;
  if (u77) goto bb48; else goto bb49;
bb48:
  int* t78 = __first256;
  int c79 = 1;
  int* ptr80 = t78 + c79;
  __first256 = ptr80;
  goto bb49;
bb49:
  goto bb50;
bb50:
  int* t81 = __first154;
  int c82 = 1;
  int* ptr83 = t81 + c82;
  __first154 = ptr83;
  goto bb51;
bb51:
  goto bb34;
bb52:
  goto bb53;
bb53:
  int* t84 = __first256;
  int* t85 = __last257;
  _Bool c86 = (t84 == t85) ? 1 : 0;
  __retval59 = c86;
  _Bool t87 = __retval59;
  return t87;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_less_iterC2Ev
void __gnu_cxx____ops___Iter_less_iter___Iter_less_iter(struct __gnu_cxx::__ops::_Iter_less_iter* v88) {
bb89:
  struct __gnu_cxx::__ops::_Iter_less_iter* this90;
  this90 = v88;
  struct __gnu_cxx::__ops::_Iter_less_iter* t91 = this90;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx::__ops::_Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb92:
  struct __gnu_cxx::__ops::_Iter_less_iter __retval93;
  struct __gnu_cxx::__ops::_Iter_less_iter t94 = __retval93;
  return t94;
}

// function: _ZSt8includesIPiS0_EbT_S1_T0_S2_
_Bool bool_std__includes_int___int__(int* v95, int* v96, int* v97, int* v98) {
bb99:
  int* __first1100;
  int* __last1101;
  int* __first2102;
  int* __last2103;
  _Bool __retval104;
  struct __gnu_cxx::__ops::_Iter_less_iter agg.tmp0105;
  __first1100 = v95;
  __last1101 = v96;
  __first2102 = v97;
  __last2103 = v98;
  int* t106 = __first1100;
  int* t107 = __last1101;
  int* t108 = __first2102;
  int* t109 = __last2103;
  struct __gnu_cxx::__ops::_Iter_less_iter r110 = __gnu_cxx____ops____iter_less_iter();
  agg.tmp0105 = r110;
  struct __gnu_cxx::__ops::_Iter_less_iter t111 = agg.tmp0105;
  _Bool r112 = bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(t106, t107, t108, t109, t111);
  __retval104 = r112;
  _Bool t113 = __retval104;
  return t113;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclIPiS6_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* v114, int* v115, int* v116) {
bb117:
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* this118;
  int* __it1119;
  int* __it2120;
  _Bool __retval121;
  this118 = v114;
  __it1119 = v115;
  __it2120 = v116;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* t122 = this118;
  void* t123 = t122->_M_comp;
  int* t124 = __it1119;
  int t125 = *t124;
  int* t126 = __it2120;
  int t127 = *t126;
  _Bool r128 = ((_Bool (*)())t123)(t125, t127);
  __retval121 = r128;
  _Bool t129 = __retval121;
  return t129;
}

// function: _ZSt10__includesIPiS0_N9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEEEbT_S7_T0_S8_T1_
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int___int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* v130, int* v131, int* v132, int* v133, struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> v134) {
  _Bool v135;
  _Bool v136;
bb137:
  int* __first1159;
  int* __last1160;
  int* __first2161;
  int* __last2162;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> __comp163;
  _Bool __retval164;
  __first1159 = v130;
  __last1160 = v131;
  __first2161 = v132;
  __last2162 = v133;
  __comp163 = v134;
  goto bb138;
bb138:
  goto bb139;
bb139:
  int* t165 = __first1159;
  int* t166 = __last1160;
  _Bool c167 = (t165 != t166) ? 1 : 0;
  if (c167) goto bb140; else goto bb144;
bb140:
  int* t168 = __first2161;
  int* t169 = __last2162;
  _Bool c170 = (t168 != t169) ? 1 : 0;
  if (c170) goto bb141; else goto bb142;
bb141:
  _Bool c171 = 1;
  v135 = c171;
  goto bb143;
bb142:
  _Bool c172 = 0;
  v135 = c172;
  goto bb143;
bb143:
  v136 = v135;
  goto bb145;
bb144:
  _Bool c173 = 0;
  v136 = c173;
  goto bb145;
bb145:
  if (v136) goto bb146; else goto bb157;
bb146:
  goto bb147;
bb147:
  goto bb148;
bb148:
  int* t174 = __first2161;
  int* t175 = __first1159;
  _Bool r176 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(&__comp163, t174, t175);
  if (r176) goto bb149; else goto bb150;
bb149:
  _Bool c177 = 0;
  __retval164 = c177;
  _Bool t178 = __retval164;
  return t178;
bb150:
  goto bb151;
bb151:
  goto bb152;
bb152:
  int* t179 = __first1159;
  int* t180 = __first2161;
  _Bool r181 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(&__comp163, t179, t180);
  _Bool u182 = !r181;
  if (u182) goto bb153; else goto bb154;
bb153:
  int* t183 = __first2161;
  int c184 = 1;
  int* ptr185 = t183 + c184;
  __first2161 = ptr185;
  goto bb154;
bb154:
  goto bb155;
bb155:
  int* t186 = __first1159;
  int c187 = 1;
  int* ptr188 = t186 + c187;
  __first1159 = ptr188;
  goto bb156;
bb156:
  goto bb139;
bb157:
  goto bb158;
bb158:
  int* t189 = __first2161;
  int* t190 = __last2162;
  _Bool c191 = (t189 == t190) ? 1 : 0;
  __retval164 = c191;
  _Bool t192 = __retval164;
  return t192;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* v193, void* v194) {
bb195:
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* this196;
  void* __comp197;
  this196 = v193;
  __comp197 = v194;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)>* t198 = this196;
  void* t199 = __comp197;
  t198->_M_comp = t199;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v200) {
bb201:
  void* __comp202;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> __retval203;
  __comp202 = v200;
  void* t204 = __comp202;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval203, t204);
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> t205 = __retval203;
  return t205;
}

// function: _ZSt8includesIPiS0_PFbiiEEbT_S3_T0_S4_T1_
_Bool bool_std__includes_int___int___bool_____int__int___int___int___int___int___bool____(int* v206, int* v207, int* v208, int* v209, void* v210) {
bb211:
  int* __first1212;
  int* __last1213;
  int* __first2214;
  int* __last2215;
  void* __comp216;
  _Bool __retval217;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> agg.tmp0218;
  __first1212 = v206;
  __last1213 = v207;
  __first2214 = v208;
  __last2215 = v209;
  __comp216 = v210;
  int* t219 = __first1212;
  int* t220 = __last1213;
  int* t221 = __first2214;
  int* t222 = __last2215;
  void* t223 = __comp216;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> r224 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t223);
  agg.tmp0218 = r224;
  struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> t225 = agg.tmp0218;
  _Bool r226 = bool_std____includes_int___int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int___int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(t219, t220, t221, t222, t225);
  __retval217 = r226;
  _Bool t227 = __retval217;
  return t227;
}

// function: main
int main() {
bb228:
  int __retval235;
  int container236[10];
  int continent237[4];
  // array copy
  for (int i = 0; i < 10; ++i) { __const_main_container[i] = container236[i]; }
  // array copy
  for (int i = 0; i < 4; ++i) { __const_main_continent[i] = continent237[i]; }
  int* cast238 = (int*)container236;
  int c239 = 10;
  int* cast240 = (int*)continent237;
  int c241 = 4;
  _Bool r242 = bool_std__includes_int___int__(cast238, &container236[c239], cast240, &continent237[c241]);
  if (r242) goto bb229; else goto bb230;
bb229:
  int c243 = 0;
  goto bb231;
bb230:
  char* cast244 = (char*)_str;
  char* c245 = _str_1;
  unsigned int c246 = 23;
  char* cast247 = (char*)_str_2;
  __assert_fail(cast244, c245, c246, cast247);
  goto bb231;
bb231:
  int* cast248 = (int*)container236;
  int c249 = 10;
  int* cast250 = (int*)continent237;
  int c251 = 4;
  void* g252 = &_Z10myfunctionii;
  _Bool r253 = bool_std__includes_int___int___bool_____int__int___int___int___int___int___bool____(cast248, &container236[c249], cast250, &continent237[c251], g252);
  if (r253) goto bb232; else goto bb233;
bb232:
  int c254 = 0;
  goto bb234;
bb233:
  char* cast255 = (char*)_str_3;
  char* c256 = _str_1;
  unsigned int c257 = 24;
  char* cast258 = (char*)_str_2;
  __assert_fail(cast255, c256, c257, cast258);
  goto bb234;
bb234:
  int c259 = 0;
  __retval235 = c259;
  int t260 = __retval235;
  return t260;
}

