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
char _str[2] = ":";
char _str_1[4] = " AM";
char _str_2[4] = " PM";
char _str_3[31] = "The initial universal time is ";
char _str_4[31] = "\nThe initial standard time is ";
char _str_5[35] = "\n\nUniversal time after setTime is ";
char _str_6[33] = "\nStandard time after setTime is ";
char _str_7[37] = "\n\nAfter attempting invalid settings:";
char _str_8[18] = "\nUniversal time: ";
char _str_9[17] = "\nStandard time: ";
void Time__Time_2(struct Time* p0);
void Time__Time(struct Time* p0) { Time__Time_2(p0); }
void Time__setTime(struct Time* p0, int p1, int p2, int p3);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
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
char std__basic_ios_char__std__char_traits_char_____fill(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setfill_char_ p1);
struct std___Setfill_char_ std___Setfill_char__std__setfill_char_(char p0);
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void Time__printUniversal(struct Time* p0);
void Time__printStandard(struct Time* p0);
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

// function: _ZN4TimeC2Ev
void Time__Time_2(struct Time* v0) {
bb1:
  struct Time* this2;
  this2 = v0;
  struct Time* t3 = this2;
  int c4 = 0;
  t3->second = c4;
  t3->minute = c4;
  t3->hour = c4;
  return;
}

// function: _ZN4Time7setTimeEiii
void Time__setTime(struct Time* v5, int v6, int v7, int v8) {
bb9:
  struct Time* this10;
  int h11;
  int m12;
  int s13;
  this10 = v5;
  h11 = v6;
  m12 = v7;
  s13 = v8;
  struct Time* t14 = this10;
  int t15 = h11;
  int c16 = 0;
  _Bool c17 = ((t15 >= c16)) ? 1 : 0;
  _Bool ternary18;
  if (c17) {
    int t19 = h11;
    int c20 = 24;
    _Bool c21 = ((t19 < c20)) ? 1 : 0;
    ternary18 = (_Bool)c21;
  } else {
    _Bool c22 = 0;
    ternary18 = (_Bool)c22;
  }
  int ternary23;
  if (ternary18) {
    int t24 = h11;
    ternary23 = (int)t24;
  } else {
    int c25 = 0;
    ternary23 = (int)c25;
  }
  t14->hour = ternary23;
  int t26 = m12;
  int c27 = 0;
  _Bool c28 = ((t26 >= c27)) ? 1 : 0;
  _Bool ternary29;
  if (c28) {
    int t30 = m12;
    int c31 = 60;
    _Bool c32 = ((t30 < c31)) ? 1 : 0;
    ternary29 = (_Bool)c32;
  } else {
    _Bool c33 = 0;
    ternary29 = (_Bool)c33;
  }
  int ternary34;
  if (ternary29) {
    int t35 = m12;
    ternary34 = (int)t35;
  } else {
    int c36 = 0;
    ternary34 = (int)c36;
  }
  t14->minute = ternary34;
  int t37 = s13;
  int c38 = 0;
  _Bool c39 = ((t37 >= c38)) ? 1 : 0;
  _Bool ternary40;
  if (c39) {
    int t41 = s13;
    int c42 = 60;
    _Bool c43 = ((t41 < c42)) ? 1 : 0;
    ternary40 = (_Bool)c43;
  } else {
    _Bool c44 = 0;
    ternary40 = (_Bool)c44;
  }
  int ternary45;
  if (ternary40) {
    int t46 = s13;
    ternary45 = (int)t46;
  } else {
    int c47 = 0;
    ternary45 = (int)c47;
  }
  t14->second = ternary45;
  return;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v48, long v49) {
bb50:
  struct std__ios_base* this51;
  long __wide52;
  long __retval53;
  long __old54;
  this51 = v48;
  __wide52 = v49;
  struct std__ios_base* t55 = this51;
  long t56 = t55->_M_width;
  __old54 = t56;
  long t57 = __wide52;
  t55->_M_width = t57;
  long t58 = __old54;
  __retval53 = t58;
  long t59 = __retval53;
  return t59;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v60, struct std___Setw v61) {
bb62:
  struct std__basic_ostream_char__std__char_traits_char__* __os63;
  struct std___Setw __f64;
  struct std__basic_ostream_char__std__char_traits_char__* __retval65;
  __os63 = v60;
  __f64 = v61;
  struct std__basic_ostream_char__std__char_traits_char__* t66 = __os63;
  void** v67 = (void**)t66;
  void* v68 = *((void**)v67);
  unsigned char* cast69 = (unsigned char*)v68;
  long c70 = -24;
  unsigned char* ptr71 = &(cast69)[c70];
  long* cast72 = (long*)ptr71;
  long t73 = *cast72;
  unsigned char* cast74 = (unsigned char*)t66;
  unsigned char* ptr75 = &(cast74)[t73];
  struct std__basic_ostream_char__std__char_traits_char__* cast76 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr75;
  struct std__ios_base* cast77 = (struct std__ios_base*)cast76;
  int t78 = __f64._M_n;
  long cast79 = (long)t78;
  long r80 = std__ios_base__width(cast77, cast79);
  struct std__basic_ostream_char__std__char_traits_char__* t81 = __os63;
  __retval65 = t81;
  struct std__basic_ostream_char__std__char_traits_char__* t82 = __retval65;
  return t82;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v83, int v84) {
bb85:
  int __a86;
  int __b87;
  int __retval88;
  __a86 = v83;
  __b87 = v84;
  int t89 = __a86;
  int t90 = __b87;
  int b91 = t89 | t90;
  __retval88 = b91;
  int t92 = __retval88;
  return t92;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v93) {
bb94:
  struct std__basic_ios_char__std__char_traits_char__* this95;
  int __retval96;
  this95 = v93;
  struct std__basic_ios_char__std__char_traits_char__* t97 = this95;
  struct std__ios_base* base98 = (struct std__ios_base*)((char *)t97 + 0);
  int t99 = base98->_M_streambuf_state;
  __retval96 = t99;
  int t100 = __retval96;
  return t100;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v101, int v102) {
bb103:
  struct std__basic_ios_char__std__char_traits_char__* this104;
  int __state105;
  this104 = v101;
  __state105 = v102;
  struct std__basic_ios_char__std__char_traits_char__* t106 = this104;
  int r107 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t106);
  int t108 = __state105;
  int r109 = std__operator_(r107, t108);
  std__basic_ios_char__std__char_traits_char_____clear(t106, r109);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb110:
  _Bool __retval111;
    _Bool c112 = 0;
    __retval111 = c112;
    _Bool t113 = __retval111;
    return t113;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v114, char* v115) {
bb116:
  char* __c1117;
  char* __c2118;
  _Bool __retval119;
  __c1117 = v114;
  __c2118 = v115;
  char* t120 = __c1117;
  char t121 = *t120;
  int cast122 = (int)t121;
  char* t123 = __c2118;
  char t124 = *t123;
  int cast125 = (int)t124;
  _Bool c126 = ((cast122 == cast125)) ? 1 : 0;
  __retval119 = c126;
  _Bool t127 = __retval119;
  return t127;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v128) {
bb129:
  char* __p130;
  unsigned long __retval131;
  unsigned long __i132;
  __p130 = v128;
  unsigned long c133 = 0;
  __i132 = c133;
    char ref_tmp0134;
    while (1) {
      unsigned long t135 = __i132;
      char* t136 = __p130;
      char* ptr137 = &(t136)[t135];
      char c138 = 0;
      ref_tmp0134 = c138;
      _Bool r139 = __gnu_cxx__char_traits_char___eq(ptr137, &ref_tmp0134);
      _Bool u140 = !r139;
      if (!u140) break;
      unsigned long t141 = __i132;
      unsigned long u142 = t141 + 1;
      __i132 = u142;
    }
  unsigned long t143 = __i132;
  __retval131 = t143;
  unsigned long t144 = __retval131;
  return t144;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v145) {
bb146:
  char* __s147;
  unsigned long __retval148;
  __s147 = v145;
    _Bool r149 = std____is_constant_evaluated();
    if (r149) {
      char* t150 = __s147;
      unsigned long r151 = __gnu_cxx__char_traits_char___length(t150);
      __retval148 = r151;
      unsigned long t152 = __retval148;
      return t152;
    }
  char* t153 = __s147;
  unsigned long r154 = strlen(t153);
  __retval148 = r154;
  unsigned long t155 = __retval148;
  return t155;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v156, char* v157) {
bb158:
  struct std__basic_ostream_char__std__char_traits_char__* __out159;
  char* __s160;
  struct std__basic_ostream_char__std__char_traits_char__* __retval161;
  __out159 = v156;
  __s160 = v157;
    char* t162 = __s160;
    _Bool cast163 = (_Bool)t162;
    _Bool u164 = !cast163;
    if (u164) {
      struct std__basic_ostream_char__std__char_traits_char__* t165 = __out159;
      void** v166 = (void**)t165;
      void* v167 = *((void**)v166);
      unsigned char* cast168 = (unsigned char*)v167;
      long c169 = -24;
      unsigned char* ptr170 = &(cast168)[c169];
      long* cast171 = (long*)ptr170;
      long t172 = *cast171;
      unsigned char* cast173 = (unsigned char*)t165;
      unsigned char* ptr174 = &(cast173)[t172];
      struct std__basic_ostream_char__std__char_traits_char__* cast175 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr174;
      struct std__basic_ios_char__std__char_traits_char__* cast176 = (struct std__basic_ios_char__std__char_traits_char__*)cast175;
      int t177 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast176, t177);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t178 = __out159;
      char* t179 = __s160;
      char* t180 = __s160;
      unsigned long r181 = std__char_traits_char___length(t180);
      long cast182 = (long)r181;
      struct std__basic_ostream_char__std__char_traits_char__* r183 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t178, t179, cast182);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t184 = __out159;
  __retval161 = t184;
  struct std__basic_ostream_char__std__char_traits_char__* t185 = __retval161;
  return t185;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE4fillEc
char std__basic_ios_char__std__char_traits_char_____fill(struct std__basic_ios_char__std__char_traits_char__* v186, char v187) {
bb188:
  struct std__basic_ios_char__std__char_traits_char__* this189;
  char __ch190;
  char __retval191;
  char __old192;
  this189 = v186;
  __ch190 = v187;
  struct std__basic_ios_char__std__char_traits_char__* t193 = this189;
  char t194 = t193->_M_fill;
  __old192 = t194;
  char t195 = __ch190;
  t193->_M_fill = t195;
  _Bool c196 = 1;
  t193->_M_fill_init = c196;
  char t197 = __old192;
  __retval191 = t197;
  char t198 = __retval191;
  return t198;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v199, struct std___Setfill_char_ v200) {
bb201:
  struct std__basic_ostream_char__std__char_traits_char__* __os202;
  struct std___Setfill_char_ __f203;
  struct std__basic_ostream_char__std__char_traits_char__* __retval204;
  __os202 = v199;
  __f203 = v200;
  struct std__basic_ostream_char__std__char_traits_char__* t205 = __os202;
  void** v206 = (void**)t205;
  void* v207 = *((void**)v206);
  unsigned char* cast208 = (unsigned char*)v207;
  long c209 = -24;
  unsigned char* ptr210 = &(cast208)[c209];
  long* cast211 = (long*)ptr210;
  long t212 = *cast211;
  unsigned char* cast213 = (unsigned char*)t205;
  unsigned char* ptr214 = &(cast213)[t212];
  struct std__basic_ostream_char__std__char_traits_char__* cast215 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr214;
  struct std__basic_ios_char__std__char_traits_char__* cast216 = (struct std__basic_ios_char__std__char_traits_char__*)cast215;
  char t217 = __f203._M_c;
  char r218 = std__basic_ios_char__std__char_traits_char_____fill(cast216, t217);
  struct std__basic_ostream_char__std__char_traits_char__* t219 = __os202;
  __retval204 = t219;
  struct std__basic_ostream_char__std__char_traits_char__* t220 = __retval204;
  return t220;
}

// function: _ZSt7setfillIcESt8_SetfillIT_ES1_
struct std___Setfill_char_ std___Setfill_char__std__setfill_char_(char v221) {
bb222:
  char __c223;
  struct std___Setfill_char_ __retval224;
  __c223 = v221;
  char t225 = __c223;
  __retval224._M_c = t225;
  struct std___Setfill_char_ t226 = __retval224;
  return t226;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v227) {
bb228:
  int __n229;
  struct std___Setw __retval230;
  __n229 = v227;
  int t231 = __n229;
  __retval230._M_n = t231;
  struct std___Setw t232 = __retval230;
  return t232;
}

// function: _ZN4Time14printUniversalEv
void Time__printUniversal(struct Time* v233) {
bb234:
  struct Time* this235;
  struct std___Setfill_char_ agg_tmp0236;
  struct std___Setw agg_tmp1237;
  struct std___Setw agg_tmp2238;
  struct std___Setw agg_tmp3239;
  this235 = v233;
  struct Time* t240 = this235;
  char c241 = 48;
  struct std___Setfill_char_ r242 = std___Setfill_char__std__setfill_char_(c241);
  agg_tmp0236 = r242;
  struct std___Setfill_char_ t243 = agg_tmp0236;
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(&_ZSt4cout, t243);
  int c245 = 2;
  struct std___Setw r246 = std__setw(c245);
  agg_tmp1237 = r246;
  struct std___Setw t247 = agg_tmp1237;
  struct std__basic_ostream_char__std__char_traits_char__* r248 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r244, t247);
  int t249 = t240->hour;
  struct std__basic_ostream_char__std__char_traits_char__* r250 = std__ostream__operator__(r248, t249);
  char* cast251 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r252 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r250, cast251);
  int c253 = 2;
  struct std___Setw r254 = std__setw(c253);
  agg_tmp2238 = r254;
  struct std___Setw t255 = agg_tmp2238;
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r252, t255);
  int t257 = t240->minute;
  struct std__basic_ostream_char__std__char_traits_char__* r258 = std__ostream__operator__(r256, t257);
  char* cast259 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r260 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r258, cast259);
  int c261 = 2;
  struct std___Setw r262 = std__setw(c261);
  agg_tmp3239 = r262;
  struct std___Setw t263 = agg_tmp3239;
  struct std__basic_ostream_char__std__char_traits_char__* r264 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r260, t263);
  int t265 = t240->second;
  struct std__basic_ostream_char__std__char_traits_char__* r266 = std__ostream__operator__(r264, t265);
  return;
}

// function: _ZN4Time13printStandardEv
void Time__printStandard(struct Time* v267) {
bb268:
  struct Time* this269;
  struct std___Setfill_char_ agg_tmp0270;
  struct std___Setw agg_tmp1271;
  struct std___Setw agg_tmp2272;
  this269 = v267;
  struct Time* t273 = this269;
  int t274 = t273->hour;
  int c275 = 0;
  _Bool c276 = ((t274 == c275)) ? 1 : 0;
  _Bool ternary277;
  if (c276) {
    _Bool c278 = 1;
    ternary277 = (_Bool)c278;
  } else {
    int t279 = t273->hour;
    int c280 = 12;
    _Bool c281 = ((t279 == c280)) ? 1 : 0;
    ternary277 = (_Bool)c281;
  }
  int ternary282;
  if (ternary277) {
    int c283 = 12;
    ternary282 = (int)c283;
  } else {
    int t284 = t273->hour;
    int c285 = 12;
    int b286 = t284 % c285;
    ternary282 = (int)b286;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r287 = std__ostream__operator__(&_ZSt4cout, ternary282);
  char* cast288 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r289 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r287, cast288);
  char c290 = 48;
  struct std___Setfill_char_ r291 = std___Setfill_char__std__setfill_char_(c290);
  agg_tmp0270 = r291;
  struct std___Setfill_char_ t292 = agg_tmp0270;
  struct std__basic_ostream_char__std__char_traits_char__* r293 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r289, t292);
  int c294 = 2;
  struct std___Setw r295 = std__setw(c294);
  agg_tmp1271 = r295;
  struct std___Setw t296 = agg_tmp1271;
  struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r293, t296);
  int t298 = t273->minute;
  struct std__basic_ostream_char__std__char_traits_char__* r299 = std__ostream__operator__(r297, t298);
  char* cast300 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r301 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r299, cast300);
  int c302 = 2;
  struct std___Setw r303 = std__setw(c302);
  agg_tmp2272 = r303;
  struct std___Setw t304 = agg_tmp2272;
  struct std__basic_ostream_char__std__char_traits_char__* r305 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r301, t304);
  int t306 = t273->second;
  struct std__basic_ostream_char__std__char_traits_char__* r307 = std__ostream__operator__(r305, t306);
  int t308 = t273->hour;
  int c309 = 12;
  _Bool c310 = ((t308 < c309)) ? 1 : 0;
  char* ternary311;
  if (c310) {
    ternary311 = (char*)_str_1;
  } else {
    ternary311 = (char*)_str_2;
  }
  char* cast312 = (char*)ternary311;
  struct std__basic_ostream_char__std__char_traits_char__* r313 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r307, cast312);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v314, void* v315) {
bb316:
  struct std__basic_ostream_char__std__char_traits_char__* this317;
  void* __pf318;
  struct std__basic_ostream_char__std__char_traits_char__* __retval319;
  this317 = v314;
  __pf318 = v315;
  struct std__basic_ostream_char__std__char_traits_char__* t320 = this317;
  void* t321 = __pf318;
  struct std__basic_ostream_char__std__char_traits_char__* r322 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t321)(t320);
  __retval319 = r322;
  struct std__basic_ostream_char__std__char_traits_char__* t323 = __retval319;
  return t323;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v324) {
bb325:
  struct std__basic_ostream_char__std__char_traits_char__* __os326;
  struct std__basic_ostream_char__std__char_traits_char__* __retval327;
  __os326 = v324;
  struct std__basic_ostream_char__std__char_traits_char__* t328 = __os326;
  struct std__basic_ostream_char__std__char_traits_char__* r329 = std__ostream__flush(t328);
  __retval327 = r329;
  struct std__basic_ostream_char__std__char_traits_char__* t330 = __retval327;
  return t330;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v331) {
bb332:
  struct std__ctype_char_* __f333;
  struct std__ctype_char_* __retval334;
  __f333 = v331;
    struct std__ctype_char_* t335 = __f333;
    _Bool cast336 = (_Bool)t335;
    _Bool u337 = !cast336;
    if (u337) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t338 = __f333;
  __retval334 = t338;
  struct std__ctype_char_* t339 = __retval334;
  return t339;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v340, char v341) {
bb342:
  struct std__ctype_char_* this343;
  char __c344;
  char __retval345;
  this343 = v340;
  __c344 = v341;
  struct std__ctype_char_* t346 = this343;
    char t347 = t346->_M_widen_ok;
    _Bool cast348 = (_Bool)t347;
    if (cast348) {
      char t349 = __c344;
      unsigned char cast350 = (unsigned char)t349;
      unsigned long cast351 = (unsigned long)cast350;
      char t352 = t346->_M_widen[cast351];
      __retval345 = t352;
      char t353 = __retval345;
      return t353;
    }
  std__ctype_char____M_widen_init___const(t346);
  char t354 = __c344;
  void** v355 = (void**)t346;
  void* v356 = *((void**)v355);
  char vcall359 = (char)__VERIFIER_virtual_call_char_char(t346, 6, t354);
  __retval345 = vcall359;
  char t360 = __retval345;
  return t360;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v361, char v362) {
bb363:
  struct std__basic_ios_char__std__char_traits_char__* this364;
  char __c365;
  char __retval366;
  this364 = v361;
  __c365 = v362;
  struct std__basic_ios_char__std__char_traits_char__* t367 = this364;
  struct std__ctype_char_* t368 = t367->_M_ctype;
  struct std__ctype_char_* r369 = std__ctype_char__const__std____check_facet_std__ctype_char___(t368);
  char t370 = __c365;
  char r371 = std__ctype_char___widen_char__const(r369, t370);
  __retval366 = r371;
  char t372 = __retval366;
  return t372;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v373) {
bb374:
  struct std__basic_ostream_char__std__char_traits_char__* __os375;
  struct std__basic_ostream_char__std__char_traits_char__* __retval376;
  __os375 = v373;
  struct std__basic_ostream_char__std__char_traits_char__* t377 = __os375;
  struct std__basic_ostream_char__std__char_traits_char__* t378 = __os375;
  void** v379 = (void**)t378;
  void* v380 = *((void**)v379);
  unsigned char* cast381 = (unsigned char*)v380;
  long c382 = -24;
  unsigned char* ptr383 = &(cast381)[c382];
  long* cast384 = (long*)ptr383;
  long t385 = *cast384;
  unsigned char* cast386 = (unsigned char*)t378;
  unsigned char* ptr387 = &(cast386)[t385];
  struct std__basic_ostream_char__std__char_traits_char__* cast388 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr387;
  struct std__basic_ios_char__std__char_traits_char__* cast389 = (struct std__basic_ios_char__std__char_traits_char__*)cast388;
  char c390 = 10;
  char r391 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast389, c390);
  struct std__basic_ostream_char__std__char_traits_char__* r392 = std__ostream__put(t377, r391);
  struct std__basic_ostream_char__std__char_traits_char__* r393 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r392);
  __retval376 = r393;
  struct std__basic_ostream_char__std__char_traits_char__* t394 = __retval376;
  return t394;
}

// function: main
int main() {
bb395:
  int __retval396;
  struct Time t397;
  int c398 = 0;
  __retval396 = c398;
  Time__Time(&t397);
  char* cast399 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r400 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast399);
  Time__printUniversal(&t397);
  char* cast401 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r402 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast401);
  Time__printStandard(&t397);
  int c403 = 13;
  int c404 = 27;
  int c405 = 6;
  Time__setTime(&t397, c403, c404, c405);
  char* cast406 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r407 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast406);
  Time__printUniversal(&t397);
  char* cast408 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r409 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast408);
  Time__printStandard(&t397);
  int c410 = 99;
  int c411 = 99;
  int c412 = 99;
  Time__setTime(&t397, c410, c411, c412);
  char* cast413 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r414 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast413);
  char* cast415 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r416 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r414, cast415);
  Time__printUniversal(&t397);
  char* cast417 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r418 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast417);
  Time__printStandard(&t397);
  struct std__basic_ostream_char__std__char_traits_char__* r419 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c420 = 0;
  __retval396 = c420;
  int t421 = __retval396;
  return t421;
}

