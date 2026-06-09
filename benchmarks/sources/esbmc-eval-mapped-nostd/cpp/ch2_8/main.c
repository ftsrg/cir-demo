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
struct std___Setprecision { int _M_n; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long _M_precision; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "Enter grade, -1 to end: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[18] = "Class average is ";
char _str_2[23] = "No grades were entered";
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
struct std___Setprecision std__setprecision(int p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
int main();

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v0, int v1) {
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

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  int __retval13;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t14 = this12;
  struct std__ios_base* base15 = (struct std__ios_base*)((char *)t14 + 0);
  int t16 = base15->_M_streambuf_state;
  __retval13 = t16;
  int t17 = __retval13;
  return t17;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v18, int v19) {
bb20:
  struct std__basic_ios_char__std__char_traits_char__* this21;
  int __state22;
  this21 = v18;
  __state22 = v19;
  struct std__basic_ios_char__std__char_traits_char__* t23 = this21;
  int r24 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t23);
  int t25 = __state22;
  int r26 = std__operator__3(r24, t25);
  std__basic_ios_char__std__char_traits_char_____clear(t23, r26);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb27:
  _Bool __retval28;
    _Bool c29 = 0;
    __retval28 = c29;
    _Bool t30 = __retval28;
    return t30;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v31, char* v32) {
bb33:
  char* __c134;
  char* __c235;
  _Bool __retval36;
  __c134 = v31;
  __c235 = v32;
  char* t37 = __c134;
  char t38 = *t37;
  int cast39 = (int)t38;
  char* t40 = __c235;
  char t41 = *t40;
  int cast42 = (int)t41;
  _Bool c43 = ((cast39 == cast42)) ? 1 : 0;
  __retval36 = c43;
  _Bool t44 = __retval36;
  return t44;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v45) {
bb46:
  char* __p47;
  unsigned long __retval48;
  unsigned long __i49;
  __p47 = v45;
  unsigned long c50 = 0;
  __i49 = c50;
    char ref_tmp051;
    while (1) {
      unsigned long t52 = __i49;
      char* t53 = __p47;
      char* ptr54 = &(t53)[t52];
      char c55 = 0;
      ref_tmp051 = c55;
      _Bool r56 = __gnu_cxx__char_traits_char___eq(ptr54, &ref_tmp051);
      _Bool u57 = !r56;
      if (!u57) break;
      unsigned long t58 = __i49;
      unsigned long u59 = t58 + 1;
      __i49 = u59;
    }
  unsigned long t60 = __i49;
  __retval48 = t60;
  unsigned long t61 = __retval48;
  return t61;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v62) {
bb63:
  char* __s64;
  unsigned long __retval65;
  __s64 = v62;
    _Bool r66 = std____is_constant_evaluated();
    if (r66) {
      char* t67 = __s64;
      unsigned long r68 = __gnu_cxx__char_traits_char___length(t67);
      __retval65 = r68;
      unsigned long t69 = __retval65;
      return t69;
    }
  char* t70 = __s64;
  unsigned long r71 = strlen(t70);
  __retval65 = r71;
  unsigned long t72 = __retval65;
  return t72;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v73, char* v74) {
bb75:
  struct std__basic_ostream_char__std__char_traits_char__* __out76;
  char* __s77;
  struct std__basic_ostream_char__std__char_traits_char__* __retval78;
  __out76 = v73;
  __s77 = v74;
    char* t79 = __s77;
    _Bool cast80 = (_Bool)t79;
    _Bool u81 = !cast80;
    if (u81) {
      struct std__basic_ostream_char__std__char_traits_char__* t82 = __out76;
      void** v83 = (void**)t82;
      void* v84 = *((void**)v83);
      unsigned char* cast85 = (unsigned char*)v84;
      long c86 = -24;
      unsigned char* ptr87 = &(cast85)[c86];
      long* cast88 = (long*)ptr87;
      long t89 = *cast88;
      unsigned char* cast90 = (unsigned char*)t82;
      unsigned char* ptr91 = &(cast90)[t89];
      struct std__basic_ostream_char__std__char_traits_char__* cast92 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr91;
      struct std__basic_ios_char__std__char_traits_char__* cast93 = (struct std__basic_ios_char__std__char_traits_char__*)cast92;
      int t94 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast93, t94);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t95 = __out76;
      char* t96 = __s77;
      char* t97 = __s77;
      unsigned long r98 = std__char_traits_char___length(t97);
      long cast99 = (long)r98;
      struct std__basic_ostream_char__std__char_traits_char__* r100 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t95, t96, cast99);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __out76;
  __retval78 = t101;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __retval78;
  return t102;
}

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v103, long v104) {
bb105:
  struct std__ios_base* this106;
  long __prec107;
  long __retval108;
  long __old109;
  this106 = v103;
  __prec107 = v104;
  struct std__ios_base* t110 = this106;
  long t111 = t110->_M_precision;
  __old109 = t111;
  long t112 = __prec107;
  t110->_M_precision = t112;
  long t113 = __old109;
  __retval108 = t113;
  long t114 = __retval108;
  return t114;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v115, struct std___Setprecision v116) {
bb117:
  struct std__basic_ostream_char__std__char_traits_char__* __os118;
  struct std___Setprecision __f119;
  struct std__basic_ostream_char__std__char_traits_char__* __retval120;
  __os118 = v115;
  __f119 = v116;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = __os118;
  void** v122 = (void**)t121;
  void* v123 = *((void**)v122);
  unsigned char* cast124 = (unsigned char*)v123;
  long c125 = -24;
  unsigned char* ptr126 = &(cast124)[c125];
  long* cast127 = (long*)ptr126;
  long t128 = *cast127;
  unsigned char* cast129 = (unsigned char*)t121;
  unsigned char* ptr130 = &(cast129)[t128];
  struct std__basic_ostream_char__std__char_traits_char__* cast131 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr130;
  struct std__ios_base* cast132 = (struct std__ios_base*)cast131;
  int t133 = __f119._M_n;
  long cast134 = (long)t133;
  long r135 = std__ios_base__precision(cast132, cast134);
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __os118;
  __retval120 = t136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval120;
  return t137;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v138) {
bb139:
  int __n140;
  struct std___Setprecision __retval141;
  __n140 = v138;
  int t142 = __n140;
  __retval141._M_n = t142;
  struct std___Setprecision t143 = __retval141;
  return t143;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v144, void* v145) {
bb146:
  struct std__basic_ostream_char__std__char_traits_char__* this147;
  void* __pf148;
  struct std__basic_ostream_char__std__char_traits_char__* __retval149;
  this147 = v144;
  __pf148 = v145;
  struct std__basic_ostream_char__std__char_traits_char__* t150 = this147;
  void* t151 = __pf148;
  void** v152 = (void**)t150;
  void* v153 = *((void**)v152);
  unsigned char* cast154 = (unsigned char*)v153;
  long c155 = -24;
  unsigned char* ptr156 = &(cast154)[c155];
  long* cast157 = (long*)ptr156;
  long t158 = *cast157;
  unsigned char* cast159 = (unsigned char*)t150;
  unsigned char* ptr160 = &(cast159)[t158];
  struct std__basic_ostream_char__std__char_traits_char__* cast161 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr160;
  struct std__ios_base* cast162 = (struct std__ios_base*)cast161;
  struct std__ios_base* r163 = ((struct std__ios_base* (*)(struct std__ios_base*))t151)(cast162);
  __retval149 = t150;
  struct std__basic_ostream_char__std__char_traits_char__* t164 = __retval149;
  return t164;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v165, int v166) {
bb167:
  int* __a168;
  int __b169;
  int* __retval170;
  __a168 = v165;
  __b169 = v166;
  int* t171 = __a168;
  int t172 = *t171;
  int t173 = __b169;
  int r174 = std__operator_(t172, t173);
  int* t175 = __a168;
  *t175 = r174;
  __retval170 = t175;
  int* t176 = __retval170;
  return t176;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v177) {
bb178:
  int __a179;
  int __retval180;
  __a179 = v177;
  int t181 = __a179;
  int u182 = ~t181;
  __retval180 = u182;
  int t183 = __retval180;
  return t183;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v184, int v185) {
bb186:
  int __a187;
  int __b188;
  int __retval189;
  __a187 = v184;
  __b188 = v185;
  int t190 = __a187;
  int t191 = __b188;
  int b192 = t190 | t191;
  __retval189 = b192;
  int t193 = __retval189;
  return t193;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v194, int v195) {
bb196:
  int* __a197;
  int __b198;
  int* __retval199;
  __a197 = v194;
  __b198 = v195;
  int* t200 = __a197;
  int t201 = *t200;
  int t202 = __b198;
  int r203 = std__operator__4(t201, t202);
  int* t204 = __a197;
  *t204 = r203;
  __retval199 = t204;
  int* t205 = __retval199;
  return t205;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v206, int v207) {
bb208:
  int __a209;
  int __b210;
  int __retval211;
  __a209 = v206;
  __b210 = v207;
  int t212 = __a209;
  int t213 = __b210;
  int b214 = t212 & t213;
  __retval211 = b214;
  int t215 = __retval211;
  return t215;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v216, int v217, int v218) {
bb219:
  struct std__ios_base* this220;
  int __fmtfl221;
  int __mask222;
  int __retval223;
  int __old224;
  this220 = v216;
  __fmtfl221 = v217;
  __mask222 = v218;
  struct std__ios_base* t225 = this220;
  int t226 = t225->_M_flags;
  __old224 = t226;
  int t227 = __mask222;
  int r228 = std__operator__2(t227);
  int* r229 = std__operator__(&t225->_M_flags, r228);
  int t230 = __fmtfl221;
  int t231 = __mask222;
  int r232 = std__operator_(t230, t231);
  int* r233 = std__operator___2(&t225->_M_flags, r232);
  int t234 = __old224;
  __retval223 = t234;
  int t235 = __retval223;
  return t235;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v236) {
bb237:
  struct std__ios_base* __base238;
  struct std__ios_base* __retval239;
  __base238 = v236;
  struct std__ios_base* t240 = __base238;
  int t241 = _ZNSt8ios_base5fixedE_const;
  int t242 = _ZNSt8ios_base10floatfieldE_const;
  int r243 = std__ios_base__setf(t240, t241, t242);
  struct std__ios_base* t244 = __base238;
  __retval239 = t244;
  struct std__ios_base* t245 = __retval239;
  return t245;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v246, double v247) {
bb248:
  struct std__basic_ostream_char__std__char_traits_char__* this249;
  double __f250;
  struct std__basic_ostream_char__std__char_traits_char__* __retval251;
  this249 = v246;
  __f250 = v247;
  struct std__basic_ostream_char__std__char_traits_char__* t252 = this249;
  double t253 = __f250;
  struct std__basic_ostream_char__std__char_traits_char__* r254 = std__ostream__std__ostream___M_insert_double_(t252, t253);
  __retval251 = r254;
  struct std__basic_ostream_char__std__char_traits_char__* t255 = __retval251;
  return t255;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v256, void* v257) {
bb258:
  struct std__basic_ostream_char__std__char_traits_char__* this259;
  void* __pf260;
  struct std__basic_ostream_char__std__char_traits_char__* __retval261;
  this259 = v256;
  __pf260 = v257;
  struct std__basic_ostream_char__std__char_traits_char__* t262 = this259;
  void* t263 = __pf260;
  struct std__basic_ostream_char__std__char_traits_char__* r264 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t263)(t262);
  __retval261 = r264;
  struct std__basic_ostream_char__std__char_traits_char__* t265 = __retval261;
  return t265;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v266) {
bb267:
  struct std__basic_ostream_char__std__char_traits_char__* __os268;
  struct std__basic_ostream_char__std__char_traits_char__* __retval269;
  __os268 = v266;
  struct std__basic_ostream_char__std__char_traits_char__* t270 = __os268;
  struct std__basic_ostream_char__std__char_traits_char__* r271 = std__ostream__flush(t270);
  __retval269 = r271;
  struct std__basic_ostream_char__std__char_traits_char__* t272 = __retval269;
  return t272;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v273) {
bb274:
  struct std__ctype_char_* __f275;
  struct std__ctype_char_* __retval276;
  __f275 = v273;
    struct std__ctype_char_* t277 = __f275;
    _Bool cast278 = (_Bool)t277;
    _Bool u279 = !cast278;
    if (u279) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t280 = __f275;
  __retval276 = t280;
  struct std__ctype_char_* t281 = __retval276;
  return t281;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v282, char v283) {
bb284:
  struct std__ctype_char_* this285;
  char __c286;
  char __retval287;
  this285 = v282;
  __c286 = v283;
  struct std__ctype_char_* t288 = this285;
    char t289 = t288->_M_widen_ok;
    _Bool cast290 = (_Bool)t289;
    if (cast290) {
      char t291 = __c286;
      unsigned char cast292 = (unsigned char)t291;
      unsigned long cast293 = (unsigned long)cast292;
      char t294 = t288->_M_widen[cast293];
      __retval287 = t294;
      char t295 = __retval287;
      return t295;
    }
  std__ctype_char____M_widen_init___const(t288);
  char t296 = __c286;
  void** v297 = (void**)t288;
  void* v298 = *((void**)v297);
  char vcall301 = (char)__VERIFIER_virtual_call_char_char(t288, 6, t296);
  __retval287 = vcall301;
  char t302 = __retval287;
  return t302;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v303, char v304) {
bb305:
  struct std__basic_ios_char__std__char_traits_char__* this306;
  char __c307;
  char __retval308;
  this306 = v303;
  __c307 = v304;
  struct std__basic_ios_char__std__char_traits_char__* t309 = this306;
  struct std__ctype_char_* t310 = t309->_M_ctype;
  struct std__ctype_char_* r311 = std__ctype_char__const__std____check_facet_std__ctype_char___(t310);
  char t312 = __c307;
  char r313 = std__ctype_char___widen_char__const(r311, t312);
  __retval308 = r313;
  char t314 = __retval308;
  return t314;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v315) {
bb316:
  struct std__basic_ostream_char__std__char_traits_char__* __os317;
  struct std__basic_ostream_char__std__char_traits_char__* __retval318;
  __os317 = v315;
  struct std__basic_ostream_char__std__char_traits_char__* t319 = __os317;
  struct std__basic_ostream_char__std__char_traits_char__* t320 = __os317;
  void** v321 = (void**)t320;
  void* v322 = *((void**)v321);
  unsigned char* cast323 = (unsigned char*)v322;
  long c324 = -24;
  unsigned char* ptr325 = &(cast323)[c324];
  long* cast326 = (long*)ptr325;
  long t327 = *cast326;
  unsigned char* cast328 = (unsigned char*)t320;
  unsigned char* ptr329 = &(cast328)[t327];
  struct std__basic_ostream_char__std__char_traits_char__* cast330 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr329;
  struct std__basic_ios_char__std__char_traits_char__* cast331 = (struct std__basic_ios_char__std__char_traits_char__*)cast330;
  char c332 = 10;
  char r333 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast331, c332);
  struct std__basic_ostream_char__std__char_traits_char__* r334 = std__ostream__put(t319, r333);
  struct std__basic_ostream_char__std__char_traits_char__* r335 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r334);
  __retval318 = r335;
  struct std__basic_ostream_char__std__char_traits_char__* t336 = __retval318;
  return t336;
}

// function: main
int main() {
bb337:
  int __retval338;
  int total339;
  int gradeCounter340;
  int grade341;
  double average342;
  int c343 = 0;
  __retval338 = c343;
  int c344 = 0;
  total339 = c344;
  int c345 = 0;
  gradeCounter340 = c345;
  char* cast346 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r347 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast346);
  struct std__basic_istream_char__std__char_traits_char__* r348 = std__istream__operator__(&_ZSt3cin, &grade341);
    while (1) {
      int t349 = grade341;
      int c350 = -1;
      _Bool c351 = ((t349 != c350)) ? 1 : 0;
      if (!c351) break;
        int t352 = total339;
        int t353 = grade341;
        int b354 = t352 + t353;
        total339 = b354;
        int t355 = gradeCounter340;
        int c356 = 1;
        int b357 = t355 + c356;
        gradeCounter340 = b357;
        char* cast358 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r359 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast358);
        struct std__basic_istream_char__std__char_traits_char__* r360 = std__istream__operator__(&_ZSt3cin, &grade341);
    }
    int t361 = gradeCounter340;
    int c362 = 0;
    _Bool c363 = ((t361 != c362)) ? 1 : 0;
    if (c363) {
      struct std___Setprecision agg_tmp0364;
      int t365 = total339;
      double cast366 = (double)t365;
      int t367 = gradeCounter340;
      double cast368 = (double)t367;
      double b369 = cast366 / cast368;
      average342 = b369;
      char* cast370 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r371 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast370);
      int c372 = 2;
      struct std___Setprecision r373 = std__setprecision(c372);
      agg_tmp0364 = r373;
      struct std___Setprecision t374 = agg_tmp0364;
      struct std__basic_ostream_char__std__char_traits_char__* r375 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r371, t374);
      struct std__basic_ostream_char__std__char_traits_char__* r376 = std__ostream__operator___std__ios_base_____(r375, &std__fixed);
      double t377 = average342;
      struct std__basic_ostream_char__std__char_traits_char__* r378 = std__ostream__operator__(r376, t377);
      struct std__basic_ostream_char__std__char_traits_char__* r379 = std__ostream__operator___std__ostream_____(r378, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    } else {
      char* cast380 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r381 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast380);
      struct std__basic_ostream_char__std__char_traits_char__* r382 = std__ostream__operator___std__ostream_____(r381, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    }
  int c383 = 0;
  __retval338 = c383;
  int t384 = __retval338;
  return t384;
}

