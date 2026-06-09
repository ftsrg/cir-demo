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
struct std___Setfill_char_ { char _M_c; };
struct std___Setw { int _M_n; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3decE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
int _ZNSt8ios_base9basefieldE_const __attribute__((aligned(4))) = 74;
int _ZNSt8ios_base3hexE_const __attribute__((aligned(4))) = 8;
int _ZNSt8ios_base8internalE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base8showbaseE_const __attribute__((aligned(4))) = 512;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[42] = " printed as int right and left justified\n";
char _str_1[41] = "and as hex with internal justification.\n";
char _str_2[41] = "Using the default pad character (space):";
char _str_3[34] = "Using various padding characters:";
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__showbase(struct std__ios_base* p0);
struct std___Setw std__setw(int p0);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator_(int p0, int p1);
int std__ios_base__setf_2(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__left(struct std__ios_base* p0);
struct std__ios_base* std__internal(struct std__ios_base* p0);
struct std__ios_base* std__hex(struct std__ios_base* p0);
struct std__ios_base* std__right(struct std__ios_base* p0);
char std__basic_ios_char__std__char_traits_char_____fill(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__ios_base* std__dec(struct std__ios_base* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setfill_char_ p1);
struct std___Setfill_char_ std___Setfill_char__std__setfill_char_(char p0);
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v103, void* v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  void* __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __pf107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  void* t110 = __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t110)(t109);
  __retval108 = r111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v113) {
bb114:
  struct std__basic_ostream_char__std__char_traits_char__* __os115;
  struct std__basic_ostream_char__std__char_traits_char__* __retval116;
  __os115 = v113;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __os115;
  struct std__basic_ostream_char__std__char_traits_char__* r118 = std__ostream__flush(t117);
  __retval116 = r118;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __retval116;
  return t119;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v120) {
bb121:
  struct std__ctype_char_* __f122;
  struct std__ctype_char_* __retval123;
  __f122 = v120;
    struct std__ctype_char_* t124 = __f122;
    _Bool cast125 = (_Bool)t124;
    _Bool u126 = !cast125;
    if (u126) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t127 = __f122;
  __retval123 = t127;
  struct std__ctype_char_* t128 = __retval123;
  return t128;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v129, char v130) {
bb131:
  struct std__ctype_char_* this132;
  char __c133;
  char __retval134;
  this132 = v129;
  __c133 = v130;
  struct std__ctype_char_* t135 = this132;
    char t136 = t135->_M_widen_ok;
    _Bool cast137 = (_Bool)t136;
    if (cast137) {
      char t138 = __c133;
      unsigned char cast139 = (unsigned char)t138;
      unsigned long cast140 = (unsigned long)cast139;
      char t141 = t135->_M_widen[cast140];
      __retval134 = t141;
      char t142 = __retval134;
      return t142;
    }
  std__ctype_char____M_widen_init___const(t135);
  char t143 = __c133;
  void** v144 = (void**)t135;
  void* v145 = *((void**)v144);
  char vcall148 = (char)__VERIFIER_virtual_call_char_char(t135, 6, t143);
  __retval134 = vcall148;
  char t149 = __retval134;
  return t149;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v150, char v151) {
bb152:
  struct std__basic_ios_char__std__char_traits_char__* this153;
  char __c154;
  char __retval155;
  this153 = v150;
  __c154 = v151;
  struct std__basic_ios_char__std__char_traits_char__* t156 = this153;
  struct std__ctype_char_* t157 = t156->_M_ctype;
  struct std__ctype_char_* r158 = std__ctype_char__const__std____check_facet_std__ctype_char___(t157);
  char t159 = __c154;
  char r160 = std__ctype_char___widen_char__const(r158, t159);
  __retval155 = r160;
  char t161 = __retval155;
  return t161;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v162) {
bb163:
  struct std__basic_ostream_char__std__char_traits_char__* __os164;
  struct std__basic_ostream_char__std__char_traits_char__* __retval165;
  __os164 = v162;
  struct std__basic_ostream_char__std__char_traits_char__* t166 = __os164;
  struct std__basic_ostream_char__std__char_traits_char__* t167 = __os164;
  void** v168 = (void**)t167;
  void* v169 = *((void**)v168);
  unsigned char* cast170 = (unsigned char*)v169;
  long c171 = -24;
  unsigned char* ptr172 = &(cast170)[c171];
  long* cast173 = (long*)ptr172;
  long t174 = *cast173;
  unsigned char* cast175 = (unsigned char*)t167;
  unsigned char* ptr176 = &(cast175)[t174];
  struct std__basic_ostream_char__std__char_traits_char__* cast177 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr176;
  struct std__basic_ios_char__std__char_traits_char__* cast178 = (struct std__basic_ios_char__std__char_traits_char__*)cast177;
  char c179 = 10;
  char r180 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast178, c179);
  struct std__basic_ostream_char__std__char_traits_char__* r181 = std__ostream__put(t166, r180);
  struct std__basic_ostream_char__std__char_traits_char__* r182 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r181);
  __retval165 = r182;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __retval165;
  return t183;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v184, long v185) {
bb186:
  struct std__ios_base* this187;
  long __wide188;
  long __retval189;
  long __old190;
  this187 = v184;
  __wide188 = v185;
  struct std__ios_base* t191 = this187;
  long t192 = t191->_M_width;
  __old190 = t192;
  long t193 = __wide188;
  t191->_M_width = t193;
  long t194 = __old190;
  __retval189 = t194;
  long t195 = __retval189;
  return t195;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v196, struct std___Setw v197) {
bb198:
  struct std__basic_ostream_char__std__char_traits_char__* __os199;
  struct std___Setw __f200;
  struct std__basic_ostream_char__std__char_traits_char__* __retval201;
  __os199 = v196;
  __f200 = v197;
  struct std__basic_ostream_char__std__char_traits_char__* t202 = __os199;
  void** v203 = (void**)t202;
  void* v204 = *((void**)v203);
  unsigned char* cast205 = (unsigned char*)v204;
  long c206 = -24;
  unsigned char* ptr207 = &(cast205)[c206];
  long* cast208 = (long*)ptr207;
  long t209 = *cast208;
  unsigned char* cast210 = (unsigned char*)t202;
  unsigned char* ptr211 = &(cast210)[t209];
  struct std__basic_ostream_char__std__char_traits_char__* cast212 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr211;
  struct std__ios_base* cast213 = (struct std__ios_base*)cast212;
  int t214 = __f200._M_n;
  long cast215 = (long)t214;
  long r216 = std__ios_base__width(cast213, cast215);
  struct std__basic_ostream_char__std__char_traits_char__* t217 = __os199;
  __retval201 = t217;
  struct std__basic_ostream_char__std__char_traits_char__* t218 = __retval201;
  return t218;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v219, void* v220) {
bb221:
  struct std__basic_ostream_char__std__char_traits_char__* this222;
  void* __pf223;
  struct std__basic_ostream_char__std__char_traits_char__* __retval224;
  this222 = v219;
  __pf223 = v220;
  struct std__basic_ostream_char__std__char_traits_char__* t225 = this222;
  void* t226 = __pf223;
  void** v227 = (void**)t225;
  void* v228 = *((void**)v227);
  unsigned char* cast229 = (unsigned char*)v228;
  long c230 = -24;
  unsigned char* ptr231 = &(cast229)[c230];
  long* cast232 = (long*)ptr231;
  long t233 = *cast232;
  unsigned char* cast234 = (unsigned char*)t225;
  unsigned char* ptr235 = &(cast234)[t233];
  struct std__basic_ostream_char__std__char_traits_char__* cast236 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr235;
  struct std__ios_base* cast237 = (struct std__ios_base*)cast236;
  struct std__ios_base* r238 = ((struct std__ios_base* (*)(struct std__ios_base*))t226)(cast237);
  __retval224 = t225;
  struct std__basic_ostream_char__std__char_traits_char__* t239 = __retval224;
  return t239;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v240, int v241) {
bb242:
  int __a243;
  int __b244;
  int __retval245;
  __a243 = v240;
  __b244 = v241;
  int t246 = __a243;
  int t247 = __b244;
  int b248 = t246 | t247;
  __retval245 = b248;
  int t249 = __retval245;
  return t249;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v250, int v251) {
bb252:
  int* __a253;
  int __b254;
  int* __retval255;
  __a253 = v250;
  __b254 = v251;
  int* t256 = __a253;
  int t257 = *t256;
  int t258 = __b254;
  int r259 = std__operator__4(t257, t258);
  int* t260 = __a253;
  *t260 = r259;
  __retval255 = t260;
  int* t261 = __retval255;
  return t261;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v262, int v263) {
bb264:
  struct std__ios_base* this265;
  int __fmtfl266;
  int __retval267;
  int __old268;
  this265 = v262;
  __fmtfl266 = v263;
  struct std__ios_base* t269 = this265;
  int t270 = t269->_M_flags;
  __old268 = t270;
  int t271 = __fmtfl266;
  int* r272 = std__operator___2(&t269->_M_flags, t271);
  int t273 = __old268;
  __retval267 = t273;
  int t274 = __retval267;
  return t274;
}

// function: _ZSt8showbaseRSt8ios_base
struct std__ios_base* std__showbase(struct std__ios_base* v275) {
bb276:
  struct std__ios_base* __base277;
  struct std__ios_base* __retval278;
  __base277 = v275;
  struct std__ios_base* t279 = __base277;
  int t280 = _ZNSt8ios_base8showbaseE_const;
  int r281 = std__ios_base__setf(t279, t280);
  struct std__ios_base* t282 = __base277;
  __retval278 = t282;
  struct std__ios_base* t283 = __retval278;
  return t283;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v284) {
bb285:
  int __n286;
  struct std___Setw __retval287;
  __n286 = v284;
  int t288 = __n286;
  __retval287._M_n = t288;
  struct std___Setw t289 = __retval287;
  return t289;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v290, int v291) {
bb292:
  int* __a293;
  int __b294;
  int* __retval295;
  __a293 = v290;
  __b294 = v291;
  int* t296 = __a293;
  int t297 = *t296;
  int t298 = __b294;
  int r299 = std__operator_(t297, t298);
  int* t300 = __a293;
  *t300 = r299;
  __retval295 = t300;
  int* t301 = __retval295;
  return t301;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v302) {
bb303:
  int __a304;
  int __retval305;
  __a304 = v302;
  int t306 = __a304;
  int u307 = ~t306;
  __retval305 = u307;
  int t308 = __retval305;
  return t308;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v309, int v310) {
bb311:
  int __a312;
  int __b313;
  int __retval314;
  __a312 = v309;
  __b313 = v310;
  int t315 = __a312;
  int t316 = __b313;
  int b317 = t315 & t316;
  __retval314 = b317;
  int t318 = __retval314;
  return t318;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf_2(struct std__ios_base* v319, int v320, int v321) {
bb322:
  struct std__ios_base* this323;
  int __fmtfl324;
  int __mask325;
  int __retval326;
  int __old327;
  this323 = v319;
  __fmtfl324 = v320;
  __mask325 = v321;
  struct std__ios_base* t328 = this323;
  int t329 = t328->_M_flags;
  __old327 = t329;
  int t330 = __mask325;
  int r331 = std__operator__2(t330);
  int* r332 = std__operator__(&t328->_M_flags, r331);
  int t333 = __fmtfl324;
  int t334 = __mask325;
  int r335 = std__operator_(t333, t334);
  int* r336 = std__operator___2(&t328->_M_flags, r335);
  int t337 = __old327;
  __retval326 = t337;
  int t338 = __retval326;
  return t338;
}

// function: _ZSt4leftRSt8ios_base
struct std__ios_base* std__left(struct std__ios_base* v339) {
bb340:
  struct std__ios_base* __base341;
  struct std__ios_base* __retval342;
  __base341 = v339;
  struct std__ios_base* t343 = __base341;
  int t344 = _ZNSt8ios_base4leftE_const;
  int t345 = _ZNSt8ios_base11adjustfieldE_const;
  int r346 = std__ios_base__setf_2(t343, t344, t345);
  struct std__ios_base* t347 = __base341;
  __retval342 = t347;
  struct std__ios_base* t348 = __retval342;
  return t348;
}

// function: _ZSt8internalRSt8ios_base
struct std__ios_base* std__internal(struct std__ios_base* v349) {
bb350:
  struct std__ios_base* __base351;
  struct std__ios_base* __retval352;
  __base351 = v349;
  struct std__ios_base* t353 = __base351;
  int t354 = _ZNSt8ios_base8internalE_const;
  int t355 = _ZNSt8ios_base11adjustfieldE_const;
  int r356 = std__ios_base__setf_2(t353, t354, t355);
  struct std__ios_base* t357 = __base351;
  __retval352 = t357;
  struct std__ios_base* t358 = __retval352;
  return t358;
}

// function: _ZSt3hexRSt8ios_base
struct std__ios_base* std__hex(struct std__ios_base* v359) {
bb360:
  struct std__ios_base* __base361;
  struct std__ios_base* __retval362;
  __base361 = v359;
  struct std__ios_base* t363 = __base361;
  int t364 = _ZNSt8ios_base3hexE_const;
  int t365 = _ZNSt8ios_base9basefieldE_const;
  int r366 = std__ios_base__setf_2(t363, t364, t365);
  struct std__ios_base* t367 = __base361;
  __retval362 = t367;
  struct std__ios_base* t368 = __retval362;
  return t368;
}

// function: _ZSt5rightRSt8ios_base
struct std__ios_base* std__right(struct std__ios_base* v369) {
bb370:
  struct std__ios_base* __base371;
  struct std__ios_base* __retval372;
  __base371 = v369;
  struct std__ios_base* t373 = __base371;
  int t374 = _ZNSt8ios_base5rightE_const;
  int t375 = _ZNSt8ios_base11adjustfieldE_const;
  int r376 = std__ios_base__setf_2(t373, t374, t375);
  struct std__ios_base* t377 = __base371;
  __retval372 = t377;
  struct std__ios_base* t378 = __retval372;
  return t378;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE4fillEc
char std__basic_ios_char__std__char_traits_char_____fill(struct std__basic_ios_char__std__char_traits_char__* v379, char v380) {
bb381:
  struct std__basic_ios_char__std__char_traits_char__* this382;
  char __ch383;
  char __retval384;
  char __old385;
  this382 = v379;
  __ch383 = v380;
  struct std__basic_ios_char__std__char_traits_char__* t386 = this382;
  char t387 = t386->_M_fill;
  __old385 = t387;
  char t388 = __ch383;
  t386->_M_fill = t388;
  _Bool c389 = 1;
  t386->_M_fill_init = c389;
  char t390 = __old385;
  __retval384 = t390;
  char t391 = __retval384;
  return t391;
}

// function: _ZSt3decRSt8ios_base
struct std__ios_base* std__dec(struct std__ios_base* v392) {
bb393:
  struct std__ios_base* __base394;
  struct std__ios_base* __retval395;
  __base394 = v392;
  struct std__ios_base* t396 = __base394;
  int t397 = _ZNSt8ios_base3decE_const;
  int t398 = _ZNSt8ios_base9basefieldE_const;
  int r399 = std__ios_base__setf_2(t396, t397, t398);
  struct std__ios_base* t400 = __base394;
  __retval395 = t400;
  struct std__ios_base* t401 = __retval395;
  return t401;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v402, struct std___Setfill_char_ v403) {
bb404:
  struct std__basic_ostream_char__std__char_traits_char__* __os405;
  struct std___Setfill_char_ __f406;
  struct std__basic_ostream_char__std__char_traits_char__* __retval407;
  __os405 = v402;
  __f406 = v403;
  struct std__basic_ostream_char__std__char_traits_char__* t408 = __os405;
  void** v409 = (void**)t408;
  void* v410 = *((void**)v409);
  unsigned char* cast411 = (unsigned char*)v410;
  long c412 = -24;
  unsigned char* ptr413 = &(cast411)[c412];
  long* cast414 = (long*)ptr413;
  long t415 = *cast414;
  unsigned char* cast416 = (unsigned char*)t408;
  unsigned char* ptr417 = &(cast416)[t415];
  struct std__basic_ostream_char__std__char_traits_char__* cast418 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr417;
  struct std__basic_ios_char__std__char_traits_char__* cast419 = (struct std__basic_ios_char__std__char_traits_char__*)cast418;
  char t420 = __f406._M_c;
  char r421 = std__basic_ios_char__std__char_traits_char_____fill(cast419, t420);
  struct std__basic_ostream_char__std__char_traits_char__* t422 = __os405;
  __retval407 = t422;
  struct std__basic_ostream_char__std__char_traits_char__* t423 = __retval407;
  return t423;
}

// function: _ZSt7setfillIcESt8_SetfillIT_ES1_
struct std___Setfill_char_ std___Setfill_char__std__setfill_char_(char v424) {
bb425:
  char __c426;
  struct std___Setfill_char_ __retval427;
  __c426 = v424;
  char t428 = __c426;
  __retval427._M_c = t428;
  struct std___Setfill_char_ t429 = __retval427;
  return t429;
}

// function: main
int main() {
bb430:
  int __retval431;
  int x432;
  struct std___Setw agg_tmp0433;
  struct std___Setw agg_tmp1434;
  struct std___Setw agg_tmp2435;
  struct std___Setw agg_tmp3436;
  struct std___Setw agg_tmp4437;
  struct std___Setfill_char_ agg_tmp5438;
  struct std___Setw agg_tmp6439;
  struct std___Setfill_char_ agg_tmp7440;
  int c441 = 0;
  __retval431 = c441;
  int c442 = 10000;
  x432 = c442;
  int t443 = x432;
  struct std__basic_ostream_char__std__char_traits_char__* r444 = std__ostream__operator__(&_ZSt4cout, t443);
  char* cast445 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r446 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r444, cast445);
  char* cast447 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r448 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r446, cast447);
  char* cast449 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r450 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r448, cast449);
  struct std__basic_ostream_char__std__char_traits_char__* r451 = std__ostream__operator___std__ostream_____(r450, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r452 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__showbase);
  int c453 = 10;
  struct std___Setw r454 = std__setw(c453);
  agg_tmp0433 = r454;
  struct std___Setw t455 = agg_tmp0433;
  struct std__basic_ostream_char__std__char_traits_char__* r456 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r452, t455);
  int t457 = x432;
  struct std__basic_ostream_char__std__char_traits_char__* r458 = std__ostream__operator__(r456, t457);
  struct std__basic_ostream_char__std__char_traits_char__* r459 = std__ostream__operator___std__ostream_____(r458, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r460 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__left);
  int c461 = 10;
  struct std___Setw r462 = std__setw(c461);
  agg_tmp1434 = r462;
  struct std___Setw t463 = agg_tmp1434;
  struct std__basic_ostream_char__std__char_traits_char__* r464 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r460, t463);
  int t465 = x432;
  struct std__basic_ostream_char__std__char_traits_char__* r466 = std__ostream__operator__(r464, t465);
  struct std__basic_ostream_char__std__char_traits_char__* r467 = std__ostream__operator___std__ostream_____(r466, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r468 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__internal);
  int c469 = 10;
  struct std___Setw r470 = std__setw(c469);
  agg_tmp2435 = r470;
  struct std___Setw t471 = agg_tmp2435;
  struct std__basic_ostream_char__std__char_traits_char__* r472 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r468, t471);
  struct std__basic_ostream_char__std__char_traits_char__* r473 = std__ostream__operator___std__ios_base_____(r472, &std__hex);
  int t474 = x432;
  struct std__basic_ostream_char__std__char_traits_char__* r475 = std__ostream__operator__(r473, t474);
  struct std__basic_ostream_char__std__char_traits_char__* r476 = std__ostream__operator___std__ostream_____(r475, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r477 = std__ostream__operator___std__ostream_____(r476, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast478 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r479 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast478);
  struct std__basic_ostream_char__std__char_traits_char__* r480 = std__ostream__operator___std__ostream_____(r479, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r481 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__right);
  void** v482 = (void**)&_ZSt4cout;
  void* v483 = *((void**)v482);
  unsigned char* cast484 = (unsigned char*)v483;
  long c485 = -24;
  unsigned char* ptr486 = &(cast484)[c485];
  long* cast487 = (long*)ptr486;
  long t488 = *cast487;
  unsigned char* cast489 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr490 = &(cast489)[t488];
  struct std__basic_ostream_char__std__char_traits_char__* cast491 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr490;
  struct std__basic_ios_char__std__char_traits_char__* cast492 = (struct std__basic_ios_char__std__char_traits_char__*)cast491;
  char c493 = 42;
  char r494 = std__basic_ios_char__std__char_traits_char_____fill(cast492, c493);
  int c495 = 10;
  struct std___Setw r496 = std__setw(c495);
  agg_tmp3436 = r496;
  struct std___Setw t497 = agg_tmp3436;
  struct std__basic_ostream_char__std__char_traits_char__* r498 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t497);
  struct std__basic_ostream_char__std__char_traits_char__* r499 = std__ostream__operator___std__ios_base_____(r498, &std__dec);
  int t500 = x432;
  struct std__basic_ostream_char__std__char_traits_char__* r501 = std__ostream__operator__(r499, t500);
  struct std__basic_ostream_char__std__char_traits_char__* r502 = std__ostream__operator___std__ostream_____(r501, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r503 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__left);
  int c504 = 10;
  struct std___Setw r505 = std__setw(c504);
  agg_tmp4437 = r505;
  struct std___Setw t506 = agg_tmp4437;
  struct std__basic_ostream_char__std__char_traits_char__* r507 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r503, t506);
  char c508 = 37;
  struct std___Setfill_char_ r509 = std___Setfill_char__std__setfill_char_(c508);
  agg_tmp5438 = r509;
  struct std___Setfill_char_ t510 = agg_tmp5438;
  struct std__basic_ostream_char__std__char_traits_char__* r511 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r507, t510);
  int t512 = x432;
  struct std__basic_ostream_char__std__char_traits_char__* r513 = std__ostream__operator__(r511, t512);
  struct std__basic_ostream_char__std__char_traits_char__* r514 = std__ostream__operator___std__ostream_____(r513, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r515 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__internal);
  int c516 = 10;
  struct std___Setw r517 = std__setw(c516);
  agg_tmp6439 = r517;
  struct std___Setw t518 = agg_tmp6439;
  struct std__basic_ostream_char__std__char_traits_char__* r519 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r515, t518);
  char c520 = 94;
  struct std___Setfill_char_ r521 = std___Setfill_char__std__setfill_char_(c520);
  agg_tmp7440 = r521;
  struct std___Setfill_char_ t522 = agg_tmp7440;
  struct std__basic_ostream_char__std__char_traits_char__* r523 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r519, t522);
  struct std__basic_ostream_char__std__char_traits_char__* r524 = std__ostream__operator___std__ios_base_____(r523, &std__hex);
  int t525 = x432;
  struct std__basic_ostream_char__std__char_traits_char__* r526 = std__ostream__operator__(r524, t525);
  struct std__basic_ostream_char__std__char_traits_char__* r527 = std__ostream__operator___std__ostream_____(r526, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c528 = 0;
  __retval431 = c528;
  int t529 = __retval431;
  return t529;
}

