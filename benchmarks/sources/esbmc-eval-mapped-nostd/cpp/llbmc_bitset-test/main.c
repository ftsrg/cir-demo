// Struct definitions (auto-parsed)
struct std___Base_bitset_2UL_ { unsigned long _M_w[2]; };
struct std__bitset_100UL_ { struct std___Base_bitset_2UL_ __field0; };
struct std__bitset_100UL___reference { unsigned long* _M_wp; unsigned long _M_bpos; };

char _str[26] = "bs.count() == bsf.count()";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_bitset-test/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "!bs.test(i)";
char _str_3[12] = "bsf.test(i)";
char _str_4[11] = "bs.test(i)";
char _str_5[13] = "!bsf.test(i)";
char _str_6[13] = "bitset::test";
char _str_7[52] = "%s: __position (which is %zu) >= _Nb (which is %zu)";
void std__bitset_100ul___bitset(struct std__bitset_100UL_* p0);
void std__bitset_100ul___reference__reference(struct std__bitset_100UL___reference* p0, struct std__bitset_100UL_* p1, unsigned long p2);
struct std__bitset_100UL___reference std__bitset_100ul___operator__(struct std__bitset_100UL_* p0, unsigned long p1);
unsigned long std___Base_bitset_2ul____S_maskbit(unsigned long p0);
struct std__bitset_100UL___reference* std__bitset_100ul___reference__operator_(struct std__bitset_100UL___reference* p0, _Bool p1);
void std__bitset_100ul___reference___reference(struct std__bitset_100UL___reference* p0);
void std___Base_bitset_2ul____M_do_flip(struct std___Base_bitset_2UL_* p0);
void std___Sanitize_36ul____S_do_sanitize(unsigned long* p0);
unsigned long* std___Base_bitset_2ul____M_hiword(struct std___Base_bitset_2UL_* p0);
void std__bitset_100ul____M_do_sanitize(struct std__bitset_100UL_* p0);
struct std__bitset_100UL_* std__bitset_100ul___flip(struct std__bitset_100UL_* p0);
unsigned long std___Base_bitset_2ul____M_do_count___const(struct std___Base_bitset_2UL_* p0);
unsigned long std__bitset_100ul___count___const(struct std__bitset_100UL_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std____throw_out_of_range_fmt(char* p0, ...);
void std__bitset_100ul____M_check_unsigned_long__char_const___const(struct std__bitset_100UL_* p0, unsigned long p1, char* p2);
unsigned long std___Base_bitset_2ul____M_getword_unsigned_long__const(struct std___Base_bitset_2UL_* p0, unsigned long p1);
_Bool std__bitset_100ul____Unchecked_test_unsigned_long__const(struct std__bitset_100UL_* p0, unsigned long p1);
_Bool std__bitset_100ul___test_unsigned_long__const(struct std__bitset_100UL_* p0, unsigned long p1);
int main();
void std___Base_bitset_2ul____Base_bitset(struct std___Base_bitset_2UL_* p0);
unsigned long std___Base_bitset_2ul____S_whichword(unsigned long p0);
unsigned long* std___Base_bitset_2ul____M_getword(struct std___Base_bitset_2UL_* p0, unsigned long p1);
unsigned long std___Base_bitset_2ul____S_whichbit(unsigned long p0);

// function: _ZNSt6bitsetILm100EEC2Ev
void std__bitset_100ul___bitset(struct std__bitset_100UL_* v0) {
bb1:
  struct std__bitset_100UL_* this2;
  this2 = v0;
  struct std__bitset_100UL_* t3 = this2;
  struct std___Base_bitset_2UL_* base4 = (struct std___Base_bitset_2UL_*)((char *)t3 + 0);
  std___Base_bitset_2ul____Base_bitset(base4);
  return;
}

// function: _ZNSt6bitsetILm100EE9referenceC2ERS0_m
void std__bitset_100ul___reference__reference(struct std__bitset_100UL___reference* v5, struct std__bitset_100UL_* v6, unsigned long v7) {
bb8:
  struct std__bitset_100UL___reference* this9;
  struct std__bitset_100UL_* __b10;
  unsigned long __pos11;
  this9 = v5;
  __b10 = v6;
  __pos11 = v7;
  struct std__bitset_100UL___reference* t12 = this9;
  struct std__bitset_100UL_* t13 = __b10;
  struct std___Base_bitset_2UL_* base14 = (struct std___Base_bitset_2UL_*)((char *)t13 + 0);
  unsigned long t15 = __pos11;
  unsigned long* r16 = std___Base_bitset_2ul____M_getword(base14, t15);
  t12->_M_wp = r16;
  unsigned long t17 = __pos11;
  unsigned long r18 = std___Base_bitset_2ul____S_whichbit(t17);
  t12->_M_bpos = r18;
  return;
}

// function: _ZNSt6bitsetILm100EEixEm
struct std__bitset_100UL___reference std__bitset_100ul___operator__(struct std__bitset_100UL_* v19, unsigned long v20) {
bb21:
  struct std__bitset_100UL_* this22;
  unsigned long __position23;
  struct std__bitset_100UL___reference __retval24;
  this22 = v19;
  __position23 = v20;
  struct std__bitset_100UL_* t25 = this22;
  unsigned long t26 = __position23;
  std__bitset_100ul___reference__reference(&__retval24, t25, t26);
  struct std__bitset_100UL___reference t27 = __retval24;
  return t27;
}

// function: _ZNSt12_Base_bitsetILm2EE10_S_maskbitEm
unsigned long std___Base_bitset_2ul____S_maskbit(unsigned long v28) {
bb29:
  unsigned long __pos30;
  unsigned long __retval31;
  __pos30 = v28;
  unsigned long c32 = 1;
  unsigned long t33 = __pos30;
  unsigned long r34 = std___Base_bitset_2ul____S_whichbit(t33);
  unsigned long s35 = c32 << r34;
  __retval31 = s35;
  unsigned long t36 = __retval31;
  return t36;
}

// function: _ZNSt6bitsetILm100EE9referenceaSEb
struct std__bitset_100UL___reference* std__bitset_100ul___reference__operator_(struct std__bitset_100UL___reference* v37, _Bool v38) {
bb39:
  struct std__bitset_100UL___reference* this40;
  _Bool __x41;
  struct std__bitset_100UL___reference* __retval42;
  this40 = v37;
  __x41 = v38;
  struct std__bitset_100UL___reference* t43 = this40;
    _Bool t44 = __x41;
    if (t44) {
      unsigned long t45 = t43->_M_bpos;
      unsigned long r46 = std___Base_bitset_2ul____S_maskbit(t45);
      unsigned long* t47 = t43->_M_wp;
      unsigned long t48 = *t47;
      unsigned long b49 = t48 | r46;
      *t47 = b49;
    } else {
      unsigned long t50 = t43->_M_bpos;
      unsigned long r51 = std___Base_bitset_2ul____S_maskbit(t50);
      unsigned long u52 = ~r51;
      unsigned long* t53 = t43->_M_wp;
      unsigned long t54 = *t53;
      unsigned long b55 = t54 & u52;
      *t53 = b55;
    }
  __retval42 = t43;
  struct std__bitset_100UL___reference* t56 = __retval42;
  return t56;
}

// function: _ZNSt6bitsetILm100EE9referenceD2Ev
void std__bitset_100ul___reference___reference(struct std__bitset_100UL___reference* v57) {
bb58:
  struct std__bitset_100UL___reference* this59;
  this59 = v57;
  struct std__bitset_100UL___reference* t60 = this59;
  return;
}

// function: _ZNSt12_Base_bitsetILm2EE10_M_do_flipEv
void std___Base_bitset_2ul____M_do_flip(struct std___Base_bitset_2UL_* v61) {
bb62:
  struct std___Base_bitset_2UL_* this63;
  this63 = v61;
  struct std___Base_bitset_2UL_* t64 = this63;
    unsigned long __i65;
    unsigned long c66 = 0;
    __i65 = c66;
    while (1) {
      unsigned long t68 = __i65;
      unsigned long c69 = 2;
      _Bool c70 = ((t68 < c69)) ? 1 : 0;
      if (!c70) break;
      unsigned long t71 = __i65;
      unsigned long t72 = t64->_M_w[t71];
      unsigned long u73 = ~t72;
      unsigned long t74 = __i65;
      t64->_M_w[t74] = u73;
    for_step67: ;
      unsigned long t75 = __i65;
      unsigned long u76 = t75 + 1;
      __i65 = u76;
    }
  return;
}

// function: _ZNSt9_SanitizeILm36EE14_S_do_sanitizeERm
void std___Sanitize_36ul____S_do_sanitize(unsigned long* v77) {
bb78:
  unsigned long* __val79;
  __val79 = v77;
  unsigned long c80 = -1;
  unsigned long c81 = 36;
  unsigned long s82 = c80 << c81;
  unsigned long u83 = ~s82;
  unsigned long* t84 = __val79;
  unsigned long t85 = *t84;
  unsigned long b86 = t85 & u83;
  *t84 = b86;
  return;
}

// function: _ZNSt12_Base_bitsetILm2EE9_M_hiwordEv
unsigned long* std___Base_bitset_2ul____M_hiword(struct std___Base_bitset_2UL_* v87) {
bb88:
  struct std___Base_bitset_2UL_* this89;
  unsigned long* __retval90;
  this89 = v87;
  struct std___Base_bitset_2UL_* t91 = this89;
  unsigned long c92 = 2;
  unsigned long c93 = 1;
  unsigned long b94 = c92 - c93;
  __retval90 = &t91->_M_w[b94];
  unsigned long* t95 = __retval90;
  return t95;
}

// function: _ZNSt6bitsetILm100EE14_M_do_sanitizeEv
void std__bitset_100ul____M_do_sanitize(struct std__bitset_100UL_* v96) {
bb97:
  struct std__bitset_100UL_* this98;
  this98 = v96;
  struct std__bitset_100UL_* t99 = this98;
  struct std___Base_bitset_2UL_* base100 = (struct std___Base_bitset_2UL_*)((char *)t99 + 0);
  unsigned long* r101 = std___Base_bitset_2ul____M_hiword(base100);
  std___Sanitize_36ul____S_do_sanitize(r101);
  return;
}

// function: _ZNSt6bitsetILm100EE4flipEv
struct std__bitset_100UL_* std__bitset_100ul___flip(struct std__bitset_100UL_* v102) {
bb103:
  struct std__bitset_100UL_* this104;
  struct std__bitset_100UL_* __retval105;
  this104 = v102;
  struct std__bitset_100UL_* t106 = this104;
  struct std___Base_bitset_2UL_* base107 = (struct std___Base_bitset_2UL_*)((char *)t106 + 0);
  std___Base_bitset_2ul____M_do_flip(base107);
  std__bitset_100ul____M_do_sanitize(t106);
  __retval105 = t106;
  struct std__bitset_100UL_* t108 = __retval105;
  return t108;
}

// function: _ZNKSt12_Base_bitsetILm2EE11_M_do_countEv
unsigned long std___Base_bitset_2ul____M_do_count___const(struct std___Base_bitset_2UL_* v109) {
bb110:
  struct std___Base_bitset_2UL_* this111;
  unsigned long __retval112;
  unsigned long __result113;
  this111 = v109;
  struct std___Base_bitset_2UL_* t114 = this111;
  unsigned long c115 = 0;
  __result113 = c115;
    unsigned long __i116;
    unsigned long c117 = 0;
    __i116 = c117;
    while (1) {
      unsigned long t119 = __i116;
      unsigned long c120 = 2;
      _Bool c121 = ((t119 < c120)) ? 1 : 0;
      if (!c121) break;
      unsigned long t122 = __i116;
      unsigned long t123 = t114->_M_w[t122];
      unsigned long popcnt124 = (unsigned long)__builtin_popcountll((unsigned long)t123);
      int cast125 = (int)popcnt124;
      unsigned long cast126 = (unsigned long)cast125;
      unsigned long t127 = __result113;
      unsigned long b128 = t127 + cast126;
      __result113 = b128;
    for_step118: ;
      unsigned long t129 = __i116;
      unsigned long u130 = t129 + 1;
      __i116 = u130;
    }
  unsigned long t131 = __result113;
  __retval112 = t131;
  unsigned long t132 = __retval112;
  return t132;
}

// function: _ZNKSt6bitsetILm100EE5countEv
unsigned long std__bitset_100ul___count___const(struct std__bitset_100UL_* v133) {
bb134:
  struct std__bitset_100UL_* this135;
  unsigned long __retval136;
  this135 = v133;
  struct std__bitset_100UL_* t137 = this135;
  struct std___Base_bitset_2UL_* base138 = (struct std___Base_bitset_2UL_*)((char *)t137 + 0);
  unsigned long r139 = std___Base_bitset_2ul____M_do_count___const(base138);
  __retval136 = r139;
  unsigned long t140 = __retval136;
  return t140;
}

// function: _ZNKSt6bitsetILm100EE8_M_checkEmPKc
void std__bitset_100ul____M_check_unsigned_long__char_const___const(struct std__bitset_100UL_* v141, unsigned long v142, char* v143) {
bb144:
  struct std__bitset_100UL_* this145;
  unsigned long __position146;
  char* __s147;
  this145 = v141;
  __position146 = v142;
  __s147 = v143;
  struct std__bitset_100UL_* t148 = this145;
    unsigned long t149 = __position146;
    unsigned long c150 = 100;
    _Bool c151 = ((t149 >= c150)) ? 1 : 0;
    if (c151) {
      char* cast152 = (char*)&(_str_7);
      char* t153 = __s147;
      unsigned long t154 = __position146;
      unsigned long c155 = 100;
      std____throw_out_of_range_fmt(cast152, t153, t154, c155);
    }
  return;
}

// function: _ZNKSt12_Base_bitsetILm2EE10_M_getwordEm
unsigned long std___Base_bitset_2ul____M_getword_unsigned_long__const(struct std___Base_bitset_2UL_* v156, unsigned long v157) {
bb158:
  struct std___Base_bitset_2UL_* this159;
  unsigned long __pos160;
  unsigned long __retval161;
  this159 = v156;
  __pos160 = v157;
  struct std___Base_bitset_2UL_* t162 = this159;
  unsigned long t163 = __pos160;
  unsigned long r164 = std___Base_bitset_2ul____S_whichword(t163);
  unsigned long t165 = t162->_M_w[r164];
  __retval161 = t165;
  unsigned long t166 = __retval161;
  return t166;
}

// function: _ZNKSt6bitsetILm100EE15_Unchecked_testEm
_Bool std__bitset_100ul____Unchecked_test_unsigned_long__const(struct std__bitset_100UL_* v167, unsigned long v168) {
bb169:
  struct std__bitset_100UL_* this170;
  unsigned long __pos171;
  _Bool __retval172;
  this170 = v167;
  __pos171 = v168;
  struct std__bitset_100UL_* t173 = this170;
  struct std___Base_bitset_2UL_* base174 = (struct std___Base_bitset_2UL_*)((char *)t173 + 0);
  unsigned long t175 = __pos171;
  unsigned long r176 = std___Base_bitset_2ul____M_getword_unsigned_long__const(base174, t175);
  unsigned long t177 = __pos171;
  unsigned long r178 = std___Base_bitset_2ul____S_maskbit(t177);
  unsigned long b179 = r176 & r178;
  unsigned long c180 = 0;
  _Bool c181 = ((b179 != c180)) ? 1 : 0;
  __retval172 = c181;
  _Bool t182 = __retval172;
  return t182;
}

// function: _ZNKSt6bitsetILm100EE4testEm
_Bool std__bitset_100ul___test_unsigned_long__const(struct std__bitset_100UL_* v183, unsigned long v184) {
bb185:
  struct std__bitset_100UL_* this186;
  unsigned long __position187;
  _Bool __retval188;
  this186 = v183;
  __position187 = v184;
  struct std__bitset_100UL_* t189 = this186;
  unsigned long t190 = __position187;
  char* cast191 = (char*)&(_str_6);
  std__bitset_100ul____M_check_unsigned_long__char_const___const(t189, t190, cast191);
  unsigned long t192 = __position187;
  _Bool r193 = std__bitset_100ul____Unchecked_test_unsigned_long__const(t189, t192);
  __retval188 = r193;
  _Bool t194 = __retval188;
  return t194;
}

// function: main
int main() {
bb195:
  int __retval196;
  struct std__bitset_100UL_ bs197;
  struct std__bitset_100UL_ bsf198;
  int c199 = 0;
  __retval196 = c199;
  std__bitset_100ul___bitset(&bs197);
    int i200;
    int c201 = 0;
    i200 = c201;
    while (1) {
      int t203 = i200;
      int c204 = 100;
      _Bool c205 = ((t203 < c204)) ? 1 : 0;
      if (!c205) break;
          int t206 = i200;
          int c207 = 2;
          int b208 = t206 % c207;
          _Bool cast209 = (_Bool)b208;
          if (cast209) {
            struct std__bitset_100UL___reference ref_tmp0210;
            struct std__bitset_100UL___reference* tmp_exprcleanup211;
            _Bool c212 = 1;
            int t213 = i200;
            unsigned long cast214 = (unsigned long)t213;
            struct std__bitset_100UL___reference r215 = std__bitset_100ul___operator__(&bs197, cast214);
            ref_tmp0210 = r215;
              struct std__bitset_100UL___reference* r216 = std__bitset_100ul___reference__operator_(&ref_tmp0210, c212);
              tmp_exprcleanup211 = r216;
            {
              std__bitset_100ul___reference___reference(&ref_tmp0210);
            }
            struct std__bitset_100UL___reference* t217 = tmp_exprcleanup211;
          }
    for_step202: ;
      int t218 = i200;
      int u219 = t218 + 1;
      i200 = u219;
    }
  bsf198 = bs197; // copy
  struct std__bitset_100UL_* r220 = std__bitset_100ul___flip(&bsf198);
  unsigned long r221 = std__bitset_100ul___count___const(&bs197);
  unsigned long r222 = std__bitset_100ul___count___const(&bsf198);
  _Bool c223 = ((r221 == r222)) ? 1 : 0;
  if (c223) {
  } else {
    char* cast224 = (char*)&(_str);
    char* c225 = _str_1;
    unsigned int c226 = 25;
    char* cast227 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast224, c225, c226, cast227);
  }
    int i228;
    int c229 = 0;
    i228 = c229;
    while (1) {
      int t231 = i228;
      int c232 = 100;
      _Bool c233 = ((t231 < c232)) ? 1 : 0;
      if (!c233) break;
          int t234 = i228;
          int c235 = 2;
          int b236 = t234 % c235;
          _Bool cast237 = (_Bool)b236;
          _Bool u238 = !cast237;
          if (u238) {
            int t239 = i228;
            unsigned long cast240 = (unsigned long)t239;
            _Bool r241 = std__bitset_100ul___test_unsigned_long__const(&bs197, cast240);
            _Bool u242 = !r241;
            if (u242) {
            } else {
              char* cast243 = (char*)&(_str_2);
              char* c244 = _str_1;
              unsigned int c245 = 29;
              char* cast246 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast243, c244, c245, cast246);
            }
            int t247 = i228;
            unsigned long cast248 = (unsigned long)t247;
            _Bool r249 = std__bitset_100ul___test_unsigned_long__const(&bsf198, cast248);
            if (r249) {
            } else {
              char* cast250 = (char*)&(_str_3);
              char* c251 = _str_1;
              unsigned int c252 = 30;
              char* cast253 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast250, c251, c252, cast253);
            }
          } else {
            int t254 = i228;
            unsigned long cast255 = (unsigned long)t254;
            _Bool r256 = std__bitset_100ul___test_unsigned_long__const(&bs197, cast255);
            if (r256) {
            } else {
              char* cast257 = (char*)&(_str_4);
              char* c258 = _str_1;
              unsigned int c259 = 32;
              char* cast260 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast257, c258, c259, cast260);
            }
            int t261 = i228;
            unsigned long cast262 = (unsigned long)t261;
            _Bool r263 = std__bitset_100ul___test_unsigned_long__const(&bsf198, cast262);
            _Bool u264 = !r263;
            if (u264) {
            } else {
              char* cast265 = (char*)&(_str_5);
              char* c266 = _str_1;
              unsigned int c267 = 33;
              char* cast268 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast265, c266, c267, cast268);
            }
          }
    for_step230: ;
      int t269 = i228;
      int u270 = t269 + 1;
      i228 = u270;
    }
  int c271 = 0;
  __retval196 = c271;
  int t272 = __retval196;
  return t272;
}

// function: _ZNSt12_Base_bitsetILm2EEC2Ev
void std___Base_bitset_2ul____Base_bitset(struct std___Base_bitset_2UL_* v273) {
bb274:
  struct std___Base_bitset_2UL_* this275;
  this275 = v273;
  struct std___Base_bitset_2UL_* t276 = this275;
  unsigned long c277[2] = {0};
  __builtin_memcpy(t276->_M_w, &(c277), sizeof(*t276->_M_w));
  return;
}

// function: _ZNSt12_Base_bitsetILm2EE12_S_whichwordEm
unsigned long std___Base_bitset_2ul____S_whichword(unsigned long v278) {
bb279:
  unsigned long __pos280;
  unsigned long __retval281;
  __pos280 = v278;
  unsigned long t282 = __pos280;
  int c283 = 8;
  int c284 = 8;
  int b285 = c283 * c284;
  unsigned long cast286 = (unsigned long)b285;
  unsigned long b287 = t282 / cast286;
  __retval281 = b287;
  unsigned long t288 = __retval281;
  return t288;
}

// function: _ZNSt12_Base_bitsetILm2EE10_M_getwordEm
unsigned long* std___Base_bitset_2ul____M_getword(struct std___Base_bitset_2UL_* v289, unsigned long v290) {
bb291:
  struct std___Base_bitset_2UL_* this292;
  unsigned long __pos293;
  unsigned long* __retval294;
  this292 = v289;
  __pos293 = v290;
  struct std___Base_bitset_2UL_* t295 = this292;
  unsigned long t296 = __pos293;
  unsigned long r297 = std___Base_bitset_2ul____S_whichword(t296);
  __retval294 = &t295->_M_w[r297];
  unsigned long* t298 = __retval294;
  return t298;
}

// function: _ZNSt12_Base_bitsetILm2EE11_S_whichbitEm
unsigned long std___Base_bitset_2ul____S_whichbit(unsigned long v299) {
bb300:
  unsigned long __pos301;
  unsigned long __retval302;
  __pos301 = v299;
  unsigned long t303 = __pos301;
  int c304 = 8;
  int c305 = 8;
  int b306 = c304 * c305;
  unsigned long cast307 = (unsigned long)b306;
  unsigned long b308 = t303 % cast307;
  __retval302 = b308;
  unsigned long t309 = __retval302;
  return t309;
}

