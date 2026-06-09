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
struct Time { int hour; int minute; int second; };
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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[24] = "Dinner will be held at ";
char _str_1[27] = " universal time,\nwhich is ";
char _str_2[17] = " standard time.\n";
char _str_3[28] = "\nTime with invalid values: ";
char _str_4[2] = ":";
char _str_5[4] = " AM";
char _str_6[4] = " PM";
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
char std__basic_ios_char__std__char_traits_char_____fill(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setfill_char_ p1);
struct std___Setfill_char_ std___Setfill_char__std__setfill_char_(char p0);
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void printUniversal(struct Time* p0);
void printStandard(struct Time* p0);
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
int std__operator_(int v0, int v1) {
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
  int r26 = std__operator_(r24, t25);
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

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v103, long v104) {
bb105:
  struct std__ios_base* this106;
  long __wide107;
  long __retval108;
  long __old109;
  this106 = v103;
  __wide107 = v104;
  struct std__ios_base* t110 = this106;
  long t111 = t110->_M_width;
  __old109 = t111;
  long t112 = __wide107;
  t110->_M_width = t112;
  long t113 = __old109;
  __retval108 = t113;
  long t114 = __retval108;
  return t114;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v115, struct std___Setw v116) {
bb117:
  struct std__basic_ostream_char__std__char_traits_char__* __os118;
  struct std___Setw __f119;
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
  long r135 = std__ios_base__width(cast132, cast134);
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __os118;
  __retval120 = t136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval120;
  return t137;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE4fillEc
char std__basic_ios_char__std__char_traits_char_____fill(struct std__basic_ios_char__std__char_traits_char__* v138, char v139) {
bb140:
  struct std__basic_ios_char__std__char_traits_char__* this141;
  char __ch142;
  char __retval143;
  char __old144;
  this141 = v138;
  __ch142 = v139;
  struct std__basic_ios_char__std__char_traits_char__* t145 = this141;
  char t146 = t145->_M_fill;
  __old144 = t146;
  char t147 = __ch142;
  t145->_M_fill = t147;
  _Bool c148 = 1;
  t145->_M_fill_init = c148;
  char t149 = __old144;
  __retval143 = t149;
  char t150 = __retval143;
  return t150;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v151, struct std___Setfill_char_ v152) {
bb153:
  struct std__basic_ostream_char__std__char_traits_char__* __os154;
  struct std___Setfill_char_ __f155;
  struct std__basic_ostream_char__std__char_traits_char__* __retval156;
  __os154 = v151;
  __f155 = v152;
  struct std__basic_ostream_char__std__char_traits_char__* t157 = __os154;
  void** v158 = (void**)t157;
  void* v159 = *((void**)v158);
  unsigned char* cast160 = (unsigned char*)v159;
  long c161 = -24;
  unsigned char* ptr162 = &(cast160)[c161];
  long* cast163 = (long*)ptr162;
  long t164 = *cast163;
  unsigned char* cast165 = (unsigned char*)t157;
  unsigned char* ptr166 = &(cast165)[t164];
  struct std__basic_ostream_char__std__char_traits_char__* cast167 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr166;
  struct std__basic_ios_char__std__char_traits_char__* cast168 = (struct std__basic_ios_char__std__char_traits_char__*)cast167;
  char t169 = __f155._M_c;
  char r170 = std__basic_ios_char__std__char_traits_char_____fill(cast168, t169);
  struct std__basic_ostream_char__std__char_traits_char__* t171 = __os154;
  __retval156 = t171;
  struct std__basic_ostream_char__std__char_traits_char__* t172 = __retval156;
  return t172;
}

// function: _ZSt7setfillIcESt8_SetfillIT_ES1_
struct std___Setfill_char_ std___Setfill_char__std__setfill_char_(char v173) {
bb174:
  char __c175;
  struct std___Setfill_char_ __retval176;
  __c175 = v173;
  char t177 = __c175;
  __retval176._M_c = t177;
  struct std___Setfill_char_ t178 = __retval176;
  return t178;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v179) {
bb180:
  int __n181;
  struct std___Setw __retval182;
  __n181 = v179;
  int t183 = __n181;
  __retval182._M_n = t183;
  struct std___Setw t184 = __retval182;
  return t184;
}

// function: _Z14printUniversalRK4Time
void printUniversal(struct Time* v185) {
bb186:
  struct Time* t187;
  struct std___Setfill_char_ agg_tmp0188;
  struct std___Setw agg_tmp1189;
  struct std___Setw agg_tmp2190;
  struct std___Setw agg_tmp3191;
  t187 = v185;
  char c192 = 48;
  struct std___Setfill_char_ r193 = std___Setfill_char__std__setfill_char_(c192);
  agg_tmp0188 = r193;
  struct std___Setfill_char_ t194 = agg_tmp0188;
  struct std__basic_ostream_char__std__char_traits_char__* r195 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(&_ZSt4cout, t194);
  int c196 = 2;
  struct std___Setw r197 = std__setw(c196);
  agg_tmp1189 = r197;
  struct std___Setw t198 = agg_tmp1189;
  struct std__basic_ostream_char__std__char_traits_char__* r199 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r195, t198);
  struct Time* t200 = t187;
  int t201 = t200->hour;
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__ostream__operator__(r199, t201);
  char* cast203 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r204 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r202, cast203);
  int c205 = 2;
  struct std___Setw r206 = std__setw(c205);
  agg_tmp2190 = r206;
  struct std___Setw t207 = agg_tmp2190;
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r204, t207);
  struct Time* t209 = t187;
  int t210 = t209->minute;
  struct std__basic_ostream_char__std__char_traits_char__* r211 = std__ostream__operator__(r208, t210);
  char* cast212 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r213 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r211, cast212);
  int c214 = 2;
  struct std___Setw r215 = std__setw(c214);
  agg_tmp3191 = r215;
  struct std___Setw t216 = agg_tmp3191;
  struct std__basic_ostream_char__std__char_traits_char__* r217 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r213, t216);
  struct Time* t218 = t187;
  int t219 = t218->second;
  struct std__basic_ostream_char__std__char_traits_char__* r220 = std__ostream__operator__(r217, t219);
  return;
}

// function: _Z13printStandardRK4Time
void printStandard(struct Time* v221) {
bb222:
  struct Time* t223;
  struct std___Setfill_char_ agg_tmp0224;
  struct std___Setw agg_tmp1225;
  struct std___Setw agg_tmp2226;
  t223 = v221;
  struct Time* t227 = t223;
  int t228 = t227->hour;
  int c229 = 0;
  _Bool c230 = ((t228 == c229)) ? 1 : 0;
  _Bool ternary231;
  if (c230) {
    _Bool c232 = 1;
    ternary231 = (_Bool)c232;
  } else {
    struct Time* t233 = t223;
    int t234 = t233->hour;
    int c235 = 12;
    _Bool c236 = ((t234 == c235)) ? 1 : 0;
    ternary231 = (_Bool)c236;
  }
  int ternary237;
  if (ternary231) {
    int c238 = 12;
    ternary237 = (int)c238;
  } else {
    struct Time* t239 = t223;
    int t240 = t239->hour;
    int c241 = 12;
    int b242 = t240 % c241;
    ternary237 = (int)b242;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r243 = std__ostream__operator__(&_ZSt4cout, ternary237);
  char* cast244 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r245 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r243, cast244);
  char c246 = 48;
  struct std___Setfill_char_ r247 = std___Setfill_char__std__setfill_char_(c246);
  agg_tmp0224 = r247;
  struct std___Setfill_char_ t248 = agg_tmp0224;
  struct std__basic_ostream_char__std__char_traits_char__* r249 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r245, t248);
  int c250 = 2;
  struct std___Setw r251 = std__setw(c250);
  agg_tmp1225 = r251;
  struct std___Setw t252 = agg_tmp1225;
  struct std__basic_ostream_char__std__char_traits_char__* r253 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r249, t252);
  struct Time* t254 = t223;
  int t255 = t254->minute;
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__ostream__operator__(r253, t255);
  char* cast257 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r258 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r256, cast257);
  int c259 = 2;
  struct std___Setw r260 = std__setw(c259);
  agg_tmp2226 = r260;
  struct std___Setw t261 = agg_tmp2226;
  struct std__basic_ostream_char__std__char_traits_char__* r262 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r258, t261);
  struct Time* t263 = t223;
  int t264 = t263->second;
  struct std__basic_ostream_char__std__char_traits_char__* r265 = std__ostream__operator__(r262, t264);
  struct Time* t266 = t223;
  int t267 = t266->hour;
  int c268 = 12;
  _Bool c269 = ((t267 < c268)) ? 1 : 0;
  char* ternary270;
  if (c269) {
    ternary270 = (char*)_str_5;
  } else {
    ternary270 = (char*)_str_6;
  }
  char* cast271 = (char*)ternary270;
  struct std__basic_ostream_char__std__char_traits_char__* r272 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r265, cast271);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v273, void* v274) {
bb275:
  struct std__basic_ostream_char__std__char_traits_char__* this276;
  void* __pf277;
  struct std__basic_ostream_char__std__char_traits_char__* __retval278;
  this276 = v273;
  __pf277 = v274;
  struct std__basic_ostream_char__std__char_traits_char__* t279 = this276;
  void* t280 = __pf277;
  struct std__basic_ostream_char__std__char_traits_char__* r281 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t280)(t279);
  __retval278 = r281;
  struct std__basic_ostream_char__std__char_traits_char__* t282 = __retval278;
  return t282;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v283) {
bb284:
  struct std__basic_ostream_char__std__char_traits_char__* __os285;
  struct std__basic_ostream_char__std__char_traits_char__* __retval286;
  __os285 = v283;
  struct std__basic_ostream_char__std__char_traits_char__* t287 = __os285;
  struct std__basic_ostream_char__std__char_traits_char__* r288 = std__ostream__flush(t287);
  __retval286 = r288;
  struct std__basic_ostream_char__std__char_traits_char__* t289 = __retval286;
  return t289;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v290) {
bb291:
  struct std__ctype_char_* __f292;
  struct std__ctype_char_* __retval293;
  __f292 = v290;
    struct std__ctype_char_* t294 = __f292;
    _Bool cast295 = (_Bool)t294;
    _Bool u296 = !cast295;
    if (u296) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t297 = __f292;
  __retval293 = t297;
  struct std__ctype_char_* t298 = __retval293;
  return t298;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v299, char v300) {
bb301:
  struct std__ctype_char_* this302;
  char __c303;
  char __retval304;
  this302 = v299;
  __c303 = v300;
  struct std__ctype_char_* t305 = this302;
    char t306 = t305->_M_widen_ok;
    _Bool cast307 = (_Bool)t306;
    if (cast307) {
      char t308 = __c303;
      unsigned char cast309 = (unsigned char)t308;
      unsigned long cast310 = (unsigned long)cast309;
      char t311 = t305->_M_widen[cast310];
      __retval304 = t311;
      char t312 = __retval304;
      return t312;
    }
  std__ctype_char____M_widen_init___const(t305);
  char t313 = __c303;
  void** v314 = (void**)t305;
  void* v315 = *((void**)v314);
  char vcall318 = (char)__VERIFIER_virtual_call_char_char(t305, 6, t313);
  __retval304 = vcall318;
  char t319 = __retval304;
  return t319;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v320, char v321) {
bb322:
  struct std__basic_ios_char__std__char_traits_char__* this323;
  char __c324;
  char __retval325;
  this323 = v320;
  __c324 = v321;
  struct std__basic_ios_char__std__char_traits_char__* t326 = this323;
  struct std__ctype_char_* t327 = t326->_M_ctype;
  struct std__ctype_char_* r328 = std__ctype_char__const__std____check_facet_std__ctype_char___(t327);
  char t329 = __c324;
  char r330 = std__ctype_char___widen_char__const(r328, t329);
  __retval325 = r330;
  char t331 = __retval325;
  return t331;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v332) {
bb333:
  struct std__basic_ostream_char__std__char_traits_char__* __os334;
  struct std__basic_ostream_char__std__char_traits_char__* __retval335;
  __os334 = v332;
  struct std__basic_ostream_char__std__char_traits_char__* t336 = __os334;
  struct std__basic_ostream_char__std__char_traits_char__* t337 = __os334;
  void** v338 = (void**)t337;
  void* v339 = *((void**)v338);
  unsigned char* cast340 = (unsigned char*)v339;
  long c341 = -24;
  unsigned char* ptr342 = &(cast340)[c341];
  long* cast343 = (long*)ptr342;
  long t344 = *cast343;
  unsigned char* cast345 = (unsigned char*)t337;
  unsigned char* ptr346 = &(cast345)[t344];
  struct std__basic_ostream_char__std__char_traits_char__* cast347 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr346;
  struct std__basic_ios_char__std__char_traits_char__* cast348 = (struct std__basic_ios_char__std__char_traits_char__*)cast347;
  char c349 = 10;
  char r350 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast348, c349);
  struct std__basic_ostream_char__std__char_traits_char__* r351 = std__ostream__put(t336, r350);
  struct std__basic_ostream_char__std__char_traits_char__* r352 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r351);
  __retval335 = r352;
  struct std__basic_ostream_char__std__char_traits_char__* t353 = __retval335;
  return t353;
}

// function: main
int main() {
bb354:
  int __retval355;
  struct Time dinnerTime356;
  int c357 = 0;
  __retval355 = c357;
  int c358 = 18;
  dinnerTime356.hour = c358;
  int c359 = 30;
  dinnerTime356.minute = c359;
  int c360 = 0;
  dinnerTime356.second = c360;
  char* cast361 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast361);
  printUniversal(&dinnerTime356);
  char* cast363 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r364 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast363);
  printStandard(&dinnerTime356);
  char* cast365 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r366 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast365);
  int c367 = 10;
  dinnerTime356.hour = c367;
  int c368 = 73;
  dinnerTime356.minute = c368;
  char* cast369 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r370 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast369);
  printUniversal(&dinnerTime356);
  struct std__basic_ostream_char__std__char_traits_char__* r371 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c372 = 0;
  __retval355 = c372;
  int t373 = __retval355;
  return t373;
}

