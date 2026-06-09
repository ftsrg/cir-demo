/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_myints[7] = {3, 7, 2, 5, 6, 4, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct myclass myobj;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "The smallest element is ";
char _str_1[35] = "*min_element(myints,myints+7) == 2";
char _str_2[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm61/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[24] = "The largest element is ";
char _str_4[35] = "*max_element(myints,myints+7) == 9";
char _str_5[40] = "*min_element(myints,myints+7,myfn) == 2";
char _str_6[40] = "*max_element(myints,myints+7,myfn) == 9";
char _str_7[41] = "*min_element(myints,myints+7,myobj) == 2";
char _str_8[41] = "*max_element(myints,myints+7,myobj) == 9";
int* max_element(int* p0, int* p1);
int* min_element(int* p0, int* p1);
_Bool myfn(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int* int__min_element_int__bool_____int__int___int___int___bool____(int* p0, int* p1, void* p2);
int* int__max_element_int__bool_____int__int___int___int___bool____(int* p0, int* p1, void* p2);
_Bool myclass__operator__(struct myclass* p0, int p1, int p2);
int* int__min_element_int__myclass_(int* p0, int* p1, struct myclass p2);
int* int__max_element_int__myclass_(int* p0, int* p1, struct myclass p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11max_elementPiS_
int* max_element(int* v0, int* v1) {
bb2:
  int* first3;
  int* last4;
  int* __retval5;
  int* largest6;
  first3 = v0;
  last4 = v1;
  int* t7 = first3;
  largest6 = t7;
    int* t8 = first3;
    int* t9 = last4;
    _Bool c10 = ((t8 == t9)) ? 1 : 0;
    if (c10) {
      int* t11 = last4;
      __retval5 = t11;
      int* t12 = __retval5;
      return t12;
    }
    while (1) {
      int* t13 = first3;
      int c14 = 1;
      int* ptr15 = &(t13)[c14];
      first3 = ptr15;
      int* t16 = last4;
      _Bool c17 = ((ptr15 != t16)) ? 1 : 0;
      if (!c17) break;
        int* t18 = largest6;
        int t19 = *t18;
        int* t20 = first3;
        int t21 = *t20;
        _Bool c22 = ((t19 < t21)) ? 1 : 0;
        if (c22) {
          int* t23 = first3;
          largest6 = t23;
        }
    }
  int* t24 = largest6;
  __retval5 = t24;
  int* t25 = __retval5;
  return t25;
}

// function: _Z11min_elementPiS_
int* min_element(int* v26, int* v27) {
bb28:
  int* first29;
  int* last30;
  int* __retval31;
  int* lowest32;
  first29 = v26;
  last30 = v27;
  int* t33 = first29;
  lowest32 = t33;
    int* t34 = first29;
    int* t35 = last30;
    _Bool c36 = ((t34 == t35)) ? 1 : 0;
    if (c36) {
      int* t37 = last30;
      __retval31 = t37;
      int* t38 = __retval31;
      return t38;
    }
    while (1) {
      int* t39 = first29;
      int c40 = 1;
      int* ptr41 = &(t39)[c40];
      first29 = ptr41;
      int* t42 = last30;
      _Bool c43 = ((ptr41 != t42)) ? 1 : 0;
      if (!c43) break;
        int* t44 = first29;
        int t45 = *t44;
        int* t46 = lowest32;
        int t47 = *t46;
        _Bool c48 = ((t45 < t47)) ? 1 : 0;
        if (c48) {
          int* t49 = first29;
          lowest32 = t49;
        }
    }
  int* t50 = lowest32;
  __retval31 = t50;
  int* t51 = __retval31;
  return t51;
}

// function: _Z4myfnii
_Bool myfn(int v52, int v53) {
bb54:
  int i55;
  int j56;
  _Bool __retval57;
  i55 = v52;
  j56 = v53;
  int t58 = i55;
  int t59 = j56;
  _Bool c60 = ((t58 < t59)) ? 1 : 0;
  __retval57 = c60;
  _Bool t61 = __retval57;
  return t61;
}

// function: _Z11min_elementIiPFbiiEEPT_S3_S3_T0_
int* int__min_element_int__bool_____int__int___int___int___bool____(int* v62, int* v63, void* v64) {
bb65:
  int* first66;
  int* last67;
  void* pred68;
  int* __retval69;
  int* lowest70;
  first66 = v62;
  last67 = v63;
  pred68 = v64;
  int* t71 = first66;
  lowest70 = t71;
    int* t72 = first66;
    int* t73 = last67;
    _Bool c74 = ((t72 == t73)) ? 1 : 0;
    if (c74) {
      int* t75 = last67;
      __retval69 = t75;
      int* t76 = __retval69;
      return t76;
    }
    while (1) {
      int* t77 = first66;
      int c78 = 1;
      int* ptr79 = &(t77)[c78];
      first66 = ptr79;
      int* t80 = last67;
      _Bool c81 = ((ptr79 != t80)) ? 1 : 0;
      if (!c81) break;
        void* t82 = pred68;
        int* t83 = first66;
        int t84 = *t83;
        int* t85 = lowest70;
        int t86 = *t85;
        _Bool r87 = ((_Bool (*)(int, int))t82)(t84, t86);
        if (r87) {
          int* t88 = first66;
          lowest70 = t88;
        }
    }
  int* t89 = lowest70;
  __retval69 = t89;
  int* t90 = __retval69;
  return t90;
}

// function: _Z11max_elementIiPFbiiEEPT_S3_S3_T0_
int* int__max_element_int__bool_____int__int___int___int___bool____(int* v91, int* v92, void* v93) {
bb94:
  int* first95;
  int* last96;
  void* pred97;
  int* __retval98;
  int* largest99;
  first95 = v91;
  last96 = v92;
  pred97 = v93;
  int* t100 = first95;
  largest99 = t100;
    int* t101 = first95;
    int* t102 = last96;
    _Bool c103 = ((t101 == t102)) ? 1 : 0;
    if (c103) {
      int* t104 = last96;
      __retval98 = t104;
      int* t105 = __retval98;
      return t105;
    }
    while (1) {
      int* t106 = first95;
      int c107 = 1;
      int* ptr108 = &(t106)[c107];
      first95 = ptr108;
      int* t109 = last96;
      _Bool c110 = ((ptr108 != t109)) ? 1 : 0;
      if (!c110) break;
        void* t111 = pred97;
        int* t112 = largest99;
        int t113 = *t112;
        int* t114 = first95;
        int t115 = *t114;
        _Bool r116 = ((_Bool (*)(int, int))t111)(t113, t115);
        if (r116) {
          int* t117 = first95;
          largest99 = t117;
        }
    }
  int* t118 = largest99;
  __retval98 = t118;
  int* t119 = __retval98;
  return t119;
}

// function: _ZN7myclassclEii
_Bool myclass__operator__(struct myclass* v120, int v121, int v122) {
bb123:
  struct myclass* this124;
  int i125;
  int j126;
  _Bool __retval127;
  this124 = v120;
  i125 = v121;
  j126 = v122;
  struct myclass* t128 = this124;
  int t129 = i125;
  int t130 = j126;
  _Bool c131 = ((t129 < t130)) ? 1 : 0;
  __retval127 = c131;
  _Bool t132 = __retval127;
  return t132;
}

// function: _Z11min_elementIi7myclassEPT_S2_S2_T0_
int* int__min_element_int__myclass_(int* v133, int* v134, struct myclass v135) {
bb136:
  int* first137;
  int* last138;
  struct myclass pred139;
  int* __retval140;
  int* lowest141;
  first137 = v133;
  last138 = v134;
  pred139 = v135;
  int* t142 = first137;
  lowest141 = t142;
    int* t143 = first137;
    int* t144 = last138;
    _Bool c145 = ((t143 == t144)) ? 1 : 0;
    if (c145) {
      int* t146 = last138;
      __retval140 = t146;
      int* t147 = __retval140;
      return t147;
    }
    while (1) {
      int* t148 = first137;
      int c149 = 1;
      int* ptr150 = &(t148)[c149];
      first137 = ptr150;
      int* t151 = last138;
      _Bool c152 = ((ptr150 != t151)) ? 1 : 0;
      if (!c152) break;
        int* t153 = first137;
        int t154 = *t153;
        int* t155 = lowest141;
        int t156 = *t155;
        _Bool r157 = myclass__operator__(&pred139, t154, t156);
        if (r157) {
          int* t158 = first137;
          lowest141 = t158;
        }
    }
  int* t159 = lowest141;
  __retval140 = t159;
  int* t160 = __retval140;
  return t160;
}

// function: _Z11max_elementIi7myclassEPT_S2_S2_T0_
int* int__max_element_int__myclass_(int* v161, int* v162, struct myclass v163) {
bb164:
  int* first165;
  int* last166;
  struct myclass pred167;
  int* __retval168;
  int* largest169;
  first165 = v161;
  last166 = v162;
  pred167 = v163;
  int* t170 = first165;
  largest169 = t170;
    int* t171 = first165;
    int* t172 = last166;
    _Bool c173 = ((t171 == t172)) ? 1 : 0;
    if (c173) {
      int* t174 = last166;
      __retval168 = t174;
      int* t175 = __retval168;
      return t175;
    }
    while (1) {
      int* t176 = first165;
      int c177 = 1;
      int* ptr178 = &(t176)[c177];
      first165 = ptr178;
      int* t179 = last166;
      _Bool c180 = ((ptr178 != t179)) ? 1 : 0;
      if (!c180) break;
        int* t181 = largest169;
        int t182 = *t181;
        int* t183 = first165;
        int t184 = *t183;
        _Bool r185 = myclass__operator__(&pred167, t182, t184);
        if (r185) {
          int* t186 = first165;
          largest169 = t186;
        }
    }
  int* t187 = largest169;
  __retval168 = t187;
  int* t188 = __retval168;
  return t188;
}

// function: main
int main() {
bb189:
  int __retval190;
  int myints191[7];
  struct myclass agg_tmp0192;
  struct myclass agg_tmp1193;
  struct myclass agg_tmp2194;
  struct myclass agg_tmp3195;
  int c196 = 0;
  __retval190 = c196;
  // array copy
  __builtin_memcpy(myints191, __const_main_myints, (unsigned long)7 * sizeof(__const_main_myints[0]));
  char* cast197 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std198;
  __VERIFIER_nondet_memory(&std198, sizeof(std198));
  int* cast199 = (int*)&(myints191);
  int* cast200 = (int*)&(myints191);
  int c201 = 7;
  int* ptr202 = &(cast200)[c201];
  int* r203 = min_element(cast199, ptr202);
  int t204 = *r203;
  struct std__basic_ostream_char__std__char_traits_char__* std205;
  __VERIFIER_nondet_memory(&std205, sizeof(std205));
  struct std__basic_ostream_char__std__char_traits_char__* std206;
  __VERIFIER_nondet_memory(&std206, sizeof(std206));
  int* cast207 = (int*)&(myints191);
  int* cast208 = (int*)&(myints191);
  int c209 = 7;
  int* ptr210 = &(cast208)[c209];
  int* r211 = min_element(cast207, ptr210);
  int t212 = *r211;
  int c213 = 2;
  _Bool c214 = ((t212 == c213)) ? 1 : 0;
  if (c214) {
  } else {
    char* cast215 = (char*)&(_str_1);
    char* c216 = _str_2;
    unsigned int c217 = 110;
    char* cast218 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast215, c216, c217, cast218);
  }
  char* cast219 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std220;
  __VERIFIER_nondet_memory(&std220, sizeof(std220));
  int* cast221 = (int*)&(myints191);
  int* cast222 = (int*)&(myints191);
  int c223 = 7;
  int* ptr224 = &(cast222)[c223];
  int* r225 = max_element(cast221, ptr224);
  int t226 = *r225;
  struct std__basic_ostream_char__std__char_traits_char__* std227;
  __VERIFIER_nondet_memory(&std227, sizeof(std227));
  struct std__basic_ostream_char__std__char_traits_char__* std228;
  __VERIFIER_nondet_memory(&std228, sizeof(std228));
  int* cast229 = (int*)&(myints191);
  int* cast230 = (int*)&(myints191);
  int c231 = 7;
  int* ptr232 = &(cast230)[c231];
  int* r233 = max_element(cast229, ptr232);
  int t234 = *r233;
  int c235 = 9;
  _Bool c236 = ((t234 == c235)) ? 1 : 0;
  if (c236) {
  } else {
    char* cast237 = (char*)&(_str_4);
    char* c238 = _str_2;
    unsigned int c239 = 112;
    char* cast240 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast237, c238, c239, cast240);
  }
  char* cast241 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std242;
  __VERIFIER_nondet_memory(&std242, sizeof(std242));
  int* cast243 = (int*)&(myints191);
  int* cast244 = (int*)&(myints191);
  int c245 = 7;
  int* ptr246 = &(cast244)[c245];
  int* r247 = int__min_element_int__bool_____int__int___int___int___bool____(cast243, ptr246, &myfn);
  int t248 = *r247;
  struct std__basic_ostream_char__std__char_traits_char__* std249;
  __VERIFIER_nondet_memory(&std249, sizeof(std249));
  struct std__basic_ostream_char__std__char_traits_char__* std250;
  __VERIFIER_nondet_memory(&std250, sizeof(std250));
  int* cast251 = (int*)&(myints191);
  int* cast252 = (int*)&(myints191);
  int c253 = 7;
  int* ptr254 = &(cast252)[c253];
  int* r255 = int__min_element_int__bool_____int__int___int___int___bool____(cast251, ptr254, &myfn);
  int t256 = *r255;
  int c257 = 2;
  _Bool c258 = ((t256 == c257)) ? 1 : 0;
  if (c258) {
  } else {
    char* cast259 = (char*)&(_str_5);
    char* c260 = _str_2;
    unsigned int c261 = 116;
    char* cast262 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast259, c260, c261, cast262);
  }
  char* cast263 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std264;
  __VERIFIER_nondet_memory(&std264, sizeof(std264));
  int* cast265 = (int*)&(myints191);
  int* cast266 = (int*)&(myints191);
  int c267 = 7;
  int* ptr268 = &(cast266)[c267];
  int* r269 = int__max_element_int__bool_____int__int___int___int___bool____(cast265, ptr268, &myfn);
  int t270 = *r269;
  struct std__basic_ostream_char__std__char_traits_char__* std271;
  __VERIFIER_nondet_memory(&std271, sizeof(std271));
  struct std__basic_ostream_char__std__char_traits_char__* std272;
  __VERIFIER_nondet_memory(&std272, sizeof(std272));
  int* cast273 = (int*)&(myints191);
  int* cast274 = (int*)&(myints191);
  int c275 = 7;
  int* ptr276 = &(cast274)[c275];
  int* r277 = int__max_element_int__bool_____int__int___int___int___bool____(cast273, ptr276, &myfn);
  int t278 = *r277;
  int c279 = 9;
  _Bool c280 = ((t278 == c279)) ? 1 : 0;
  if (c280) {
  } else {
    char* cast281 = (char*)&(_str_6);
    char* c282 = _str_2;
    unsigned int c283 = 118;
    char* cast284 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast281, c282, c283, cast284);
  }
  char* cast285 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std286;
  __VERIFIER_nondet_memory(&std286, sizeof(std286));
  int* cast287 = (int*)&(myints191);
  int* cast288 = (int*)&(myints191);
  int c289 = 7;
  int* ptr290 = &(cast288)[c289];
  struct myclass t291 = agg_tmp0192;
  int* r292 = int__min_element_int__myclass_(cast287, ptr290, t291);
  int t293 = *r292;
  struct std__basic_ostream_char__std__char_traits_char__* std294;
  __VERIFIER_nondet_memory(&std294, sizeof(std294));
  struct std__basic_ostream_char__std__char_traits_char__* std295;
  __VERIFIER_nondet_memory(&std295, sizeof(std295));
  int* cast296 = (int*)&(myints191);
  int* cast297 = (int*)&(myints191);
  int c298 = 7;
  int* ptr299 = &(cast297)[c298];
  struct myclass t300 = agg_tmp1193;
  int* r301 = int__min_element_int__myclass_(cast296, ptr299, t300);
  int t302 = *r301;
  int c303 = 2;
  _Bool c304 = ((t302 == c303)) ? 1 : 0;
  if (c304) {
  } else {
    char* cast305 = (char*)&(_str_7);
    char* c306 = _str_2;
    unsigned int c307 = 122;
    char* cast308 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast305, c306, c307, cast308);
  }
  char* cast309 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std310;
  __VERIFIER_nondet_memory(&std310, sizeof(std310));
  int* cast311 = (int*)&(myints191);
  int* cast312 = (int*)&(myints191);
  int c313 = 7;
  int* ptr314 = &(cast312)[c313];
  struct myclass t315 = agg_tmp2194;
  int* r316 = int__max_element_int__myclass_(cast311, ptr314, t315);
  int t317 = *r316;
  struct std__basic_ostream_char__std__char_traits_char__* std318;
  __VERIFIER_nondet_memory(&std318, sizeof(std318));
  struct std__basic_ostream_char__std__char_traits_char__* std319;
  __VERIFIER_nondet_memory(&std319, sizeof(std319));
  int* cast320 = (int*)&(myints191);
  int* cast321 = (int*)&(myints191);
  int c322 = 7;
  int* ptr323 = &(cast321)[c322];
  struct myclass t324 = agg_tmp3195;
  int* r325 = int__max_element_int__myclass_(cast320, ptr323, t324);
  int t326 = *r325;
  int c327 = 9;
  _Bool c328 = ((t326 == c327)) ? 1 : 0;
  if (c328) {
  } else {
    char* cast329 = (char*)&(_str_8);
    char* c330 = _str_2;
    unsigned int c331 = 124;
    char* cast332 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast329, c330, c331, cast332);
  }
  int c333 = 0;
  __retval190 = c333;
  int t334 = __retval190;
  return t334;
}

