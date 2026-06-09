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
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_a[5] = {0, 1, 2, 3, 4};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[46] = "Effects of passing entire array by reference:";
char _str_1[41] = "\n\nThe values of the original array are:\n";
char _str_2[39] = "The values of the modified array are:\n";
char _str_3[4] = "\n\n\n";
char _str_4[43] = "Effects of passing array element by value:";
char _str_5[24] = "\n\nThe value of a[3] is ";
char _str_6[22] = "The value of a[3] is ";
char _str_7[27] = "Value in modifyElement is ";
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
struct std___Setw std__setw(int p0);
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
void modifyArray(int* p0, int p1);
long std__ios_base__width___const(struct std__ios_base* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
void modifyElement(int p0);
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

// function: _ZSt4setwi
struct std___Setw std__setw(int v138) {
bb139:
  int __n140;
  struct std___Setw __retval141;
  __n140 = v138;
  int t142 = __n140;
  __retval141._M_n = t142;
  struct std___Setw t143 = __retval141;
  return t143;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v144, void* v145) {
bb146:
  struct std__basic_ostream_char__std__char_traits_char__* this147;
  void* __pf148;
  struct std__basic_ostream_char__std__char_traits_char__* __retval149;
  this147 = v144;
  __pf148 = v145;
  struct std__basic_ostream_char__std__char_traits_char__* t150 = this147;
  void* t151 = __pf148;
  struct std__basic_ostream_char__std__char_traits_char__* r152 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t151)(t150);
  __retval149 = r152;
  struct std__basic_ostream_char__std__char_traits_char__* t153 = __retval149;
  return t153;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v154) {
bb155:
  struct std__basic_ostream_char__std__char_traits_char__* __os156;
  struct std__basic_ostream_char__std__char_traits_char__* __retval157;
  __os156 = v154;
  struct std__basic_ostream_char__std__char_traits_char__* t158 = __os156;
  struct std__basic_ostream_char__std__char_traits_char__* r159 = std__ostream__flush(t158);
  __retval157 = r159;
  struct std__basic_ostream_char__std__char_traits_char__* t160 = __retval157;
  return t160;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v161) {
bb162:
  struct std__ctype_char_* __f163;
  struct std__ctype_char_* __retval164;
  __f163 = v161;
    struct std__ctype_char_* t165 = __f163;
    _Bool cast166 = (_Bool)t165;
    _Bool u167 = !cast166;
    if (u167) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t168 = __f163;
  __retval164 = t168;
  struct std__ctype_char_* t169 = __retval164;
  return t169;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v170, char v171) {
bb172:
  struct std__ctype_char_* this173;
  char __c174;
  char __retval175;
  this173 = v170;
  __c174 = v171;
  struct std__ctype_char_* t176 = this173;
    char t177 = t176->_M_widen_ok;
    _Bool cast178 = (_Bool)t177;
    if (cast178) {
      char t179 = __c174;
      unsigned char cast180 = (unsigned char)t179;
      unsigned long cast181 = (unsigned long)cast180;
      char t182 = t176->_M_widen[cast181];
      __retval175 = t182;
      char t183 = __retval175;
      return t183;
    }
  std__ctype_char____M_widen_init___const(t176);
  char t184 = __c174;
  void** v185 = (void**)t176;
  void* v186 = *((void**)v185);
  char vcall189 = (char)__VERIFIER_virtual_call_char_char(t176, 6, t184);
  __retval175 = vcall189;
  char t190 = __retval175;
  return t190;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v191, char v192) {
bb193:
  struct std__basic_ios_char__std__char_traits_char__* this194;
  char __c195;
  char __retval196;
  this194 = v191;
  __c195 = v192;
  struct std__basic_ios_char__std__char_traits_char__* t197 = this194;
  struct std__ctype_char_* t198 = t197->_M_ctype;
  struct std__ctype_char_* r199 = std__ctype_char__const__std____check_facet_std__ctype_char___(t198);
  char t200 = __c195;
  char r201 = std__ctype_char___widen_char__const(r199, t200);
  __retval196 = r201;
  char t202 = __retval196;
  return t202;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v203) {
bb204:
  struct std__basic_ostream_char__std__char_traits_char__* __os205;
  struct std__basic_ostream_char__std__char_traits_char__* __retval206;
  __os205 = v203;
  struct std__basic_ostream_char__std__char_traits_char__* t207 = __os205;
  struct std__basic_ostream_char__std__char_traits_char__* t208 = __os205;
  void** v209 = (void**)t208;
  void* v210 = *((void**)v209);
  unsigned char* cast211 = (unsigned char*)v210;
  long c212 = -24;
  unsigned char* ptr213 = &(cast211)[c212];
  long* cast214 = (long*)ptr213;
  long t215 = *cast214;
  unsigned char* cast216 = (unsigned char*)t208;
  unsigned char* ptr217 = &(cast216)[t215];
  struct std__basic_ostream_char__std__char_traits_char__* cast218 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr217;
  struct std__basic_ios_char__std__char_traits_char__* cast219 = (struct std__basic_ios_char__std__char_traits_char__*)cast218;
  char c220 = 10;
  char r221 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast219, c220);
  struct std__basic_ostream_char__std__char_traits_char__* r222 = std__ostream__put(t207, r221);
  struct std__basic_ostream_char__std__char_traits_char__* r223 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r222);
  __retval206 = r223;
  struct std__basic_ostream_char__std__char_traits_char__* t224 = __retval206;
  return t224;
}

// function: _Z11modifyArrayPii
void modifyArray(int* v225, int v226) {
bb227:
  int* b228;
  int sizeOfArray229;
  b228 = v225;
  sizeOfArray229 = v226;
    int k230;
    int c231 = 0;
    k230 = c231;
    while (1) {
      int t233 = k230;
      int t234 = sizeOfArray229;
      _Bool c235 = ((t233 < t234)) ? 1 : 0;
      if (!c235) break;
      int c236 = 2;
      int t237 = k230;
      long cast238 = (long)t237;
      int* t239 = b228;
      int* ptr240 = &(t239)[cast238];
      int t241 = *ptr240;
      int b242 = t241 * c236;
      *ptr240 = b242;
    for_step232: ;
      int t243 = k230;
      int u244 = t243 + 1;
      k230 = u244;
    }
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v245) {
bb246:
  struct std__ios_base* this247;
  long __retval248;
  this247 = v245;
  struct std__ios_base* t249 = this247;
  long t250 = t249->_M_width;
  __retval248 = t250;
  long t251 = __retval248;
  return t251;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v252, char v253) {
bb254:
  struct std__basic_ostream_char__std__char_traits_char__* __out255;
  char __c256;
  struct std__basic_ostream_char__std__char_traits_char__* __retval257;
  __out255 = v252;
  __c256 = v253;
    struct std__basic_ostream_char__std__char_traits_char__* t258 = __out255;
    void** v259 = (void**)t258;
    void* v260 = *((void**)v259);
    unsigned char* cast261 = (unsigned char*)v260;
    long c262 = -24;
    unsigned char* ptr263 = &(cast261)[c262];
    long* cast264 = (long*)ptr263;
    long t265 = *cast264;
    unsigned char* cast266 = (unsigned char*)t258;
    unsigned char* ptr267 = &(cast266)[t265];
    struct std__basic_ostream_char__std__char_traits_char__* cast268 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr267;
    struct std__ios_base* cast269 = (struct std__ios_base*)cast268;
    long r270 = std__ios_base__width___const(cast269);
    long c271 = 0;
    _Bool c272 = ((r270 != c271)) ? 1 : 0;
    if (c272) {
      struct std__basic_ostream_char__std__char_traits_char__* t273 = __out255;
      long c274 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r275 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t273, &__c256, c274);
      __retval257 = r275;
      struct std__basic_ostream_char__std__char_traits_char__* t276 = __retval257;
      return t276;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t277 = __out255;
  char t278 = __c256;
  struct std__basic_ostream_char__std__char_traits_char__* r279 = std__ostream__put(t277, t278);
  struct std__basic_ostream_char__std__char_traits_char__* t280 = __out255;
  __retval257 = t280;
  struct std__basic_ostream_char__std__char_traits_char__* t281 = __retval257;
  return t281;
}

// function: _Z13modifyElementi
void modifyElement(int v282) {
bb283:
  int e284;
  e284 = v282;
  char* cast285 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r286 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast285);
  int c287 = 2;
  int t288 = e284;
  int b289 = t288 * c287;
  e284 = b289;
  struct std__basic_ostream_char__std__char_traits_char__* r290 = std__ostream__operator__(r286, b289);
  struct std__basic_ostream_char__std__char_traits_char__* r291 = std__ostream__operator___std__ostream_____(r290, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: main
int main() {
bb292:
  int __retval293;
  int arraySize294;
  int a295[5];
  int c296 = 0;
  __retval293 = c296;
  int c297 = 5;
  arraySize294 = c297;
  // array copy
  __builtin_memcpy(a295, __const_main_a, (unsigned long)5 * sizeof(__const_main_a[0]));
  char* cast298 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r299 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast298);
  char* cast300 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r301 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r299, cast300);
    int i302;
    struct std___Setw agg_tmp0303;
    int c304 = 0;
    i302 = c304;
    while (1) {
      int t306 = i302;
      int t307 = arraySize294;
      _Bool c308 = ((t306 < t307)) ? 1 : 0;
      if (!c308) break;
      int c309 = 3;
      struct std___Setw r310 = std__setw(c309);
      agg_tmp0303 = r310;
      struct std___Setw t311 = agg_tmp0303;
      struct std__basic_ostream_char__std__char_traits_char__* r312 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t311);
      int t313 = i302;
      long cast314 = (long)t313;
      int t315 = a295[cast314];
      struct std__basic_ostream_char__std__char_traits_char__* r316 = std__ostream__operator__(r312, t315);
    for_step305: ;
      int t317 = i302;
      int u318 = t317 + 1;
      i302 = u318;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r319 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int* cast320 = (int*)&(a295);
  int t321 = arraySize294;
  modifyArray(cast320, t321);
  char* cast322 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r323 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast322);
    int j324;
    struct std___Setw agg_tmp1325;
    int c326 = 0;
    j324 = c326;
    while (1) {
      int t328 = j324;
      int t329 = arraySize294;
      _Bool c330 = ((t328 < t329)) ? 1 : 0;
      if (!c330) break;
      int c331 = 3;
      struct std___Setw r332 = std__setw(c331);
      agg_tmp1325 = r332;
      struct std___Setw t333 = agg_tmp1325;
      struct std__basic_ostream_char__std__char_traits_char__* r334 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t333);
      int t335 = j324;
      long cast336 = (long)t335;
      int t337 = a295[cast336];
      struct std__basic_ostream_char__std__char_traits_char__* r338 = std__ostream__operator__(r334, t337);
    for_step327: ;
      int t339 = j324;
      int u340 = t339 + 1;
      j324 = u340;
    }
  char* cast341 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r342 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast341);
  char* cast343 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r344 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r342, cast343);
  char* cast345 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r346 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r344, cast345);
  long c347 = 3;
  int t348 = a295[c347];
  struct std__basic_ostream_char__std__char_traits_char__* r349 = std__ostream__operator__(r346, t348);
  char c350 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r351 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r349, c350);
  long c352 = 3;
  int t353 = a295[c352];
  modifyElement(t353);
  char* cast354 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r355 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast354);
  long c356 = 3;
  int t357 = a295[c356];
  struct std__basic_ostream_char__std__char_traits_char__* r358 = std__ostream__operator__(r355, t357);
  struct std__basic_ostream_char__std__char_traits_char__* r359 = std__ostream__operator___std__ostream_____(r358, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c360 = 0;
  __retval293 = c360;
  int t361 = __retval293;
  return t361;
}

