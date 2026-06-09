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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[13] = "Enter seed: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_unsigned_int_(struct std__basic_istream_char__std__char_traits_char__* p0, unsigned int* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, unsigned int* p1);
extern void srand(unsigned int p0);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern int rand();
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

// function: _ZNSirsERj
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v103, unsigned int* v104) {
bb105:
  struct std__basic_istream_char__std__char_traits_char__* this106;
  unsigned int* __n107;
  struct std__basic_istream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __n107 = v104;
  struct std__basic_istream_char__std__char_traits_char__* t109 = this106;
  unsigned int* t110 = __n107;
  struct std__basic_istream_char__std__char_traits_char__* r111 = std__istream__std__istream___M_extract_unsigned_int_(t109, t110);
  __retval108 = r111;
  struct std__basic_istream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v113, long v114) {
bb115:
  struct std__ios_base* this116;
  long __wide117;
  long __retval118;
  long __old119;
  this116 = v113;
  __wide117 = v114;
  struct std__ios_base* t120 = this116;
  long t121 = t120->_M_width;
  __old119 = t121;
  long t122 = __wide117;
  t120->_M_width = t122;
  long t123 = __old119;
  __retval118 = t123;
  long t124 = __retval118;
  return t124;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v125, struct std___Setw v126) {
bb127:
  struct std__basic_ostream_char__std__char_traits_char__* __os128;
  struct std___Setw __f129;
  struct std__basic_ostream_char__std__char_traits_char__* __retval130;
  __os128 = v125;
  __f129 = v126;
  struct std__basic_ostream_char__std__char_traits_char__* t131 = __os128;
  void** v132 = (void**)t131;
  void* v133 = *((void**)v132);
  unsigned char* cast134 = (unsigned char*)v133;
  long c135 = -24;
  unsigned char* ptr136 = &(cast134)[c135];
  long* cast137 = (long*)ptr136;
  long t138 = *cast137;
  unsigned char* cast139 = (unsigned char*)t131;
  unsigned char* ptr140 = &(cast139)[t138];
  struct std__basic_ostream_char__std__char_traits_char__* cast141 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr140;
  struct std__ios_base* cast142 = (struct std__ios_base*)cast141;
  int t143 = __f129._M_n;
  long cast144 = (long)t143;
  long r145 = std__ios_base__width(cast142, cast144);
  struct std__basic_ostream_char__std__char_traits_char__* t146 = __os128;
  __retval130 = t146;
  struct std__basic_ostream_char__std__char_traits_char__* t147 = __retval130;
  return t147;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v148) {
bb149:
  int __n150;
  struct std___Setw __retval151;
  __n150 = v148;
  int t152 = __n150;
  __retval151._M_n = t152;
  struct std___Setw t153 = __retval151;
  return t153;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v154, void* v155) {
bb156:
  struct std__basic_ostream_char__std__char_traits_char__* this157;
  void* __pf158;
  struct std__basic_ostream_char__std__char_traits_char__* __retval159;
  this157 = v154;
  __pf158 = v155;
  struct std__basic_ostream_char__std__char_traits_char__* t160 = this157;
  void* t161 = __pf158;
  struct std__basic_ostream_char__std__char_traits_char__* r162 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t161)(t160);
  __retval159 = r162;
  struct std__basic_ostream_char__std__char_traits_char__* t163 = __retval159;
  return t163;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v164) {
bb165:
  struct std__basic_ostream_char__std__char_traits_char__* __os166;
  struct std__basic_ostream_char__std__char_traits_char__* __retval167;
  __os166 = v164;
  struct std__basic_ostream_char__std__char_traits_char__* t168 = __os166;
  struct std__basic_ostream_char__std__char_traits_char__* r169 = std__ostream__flush(t168);
  __retval167 = r169;
  struct std__basic_ostream_char__std__char_traits_char__* t170 = __retval167;
  return t170;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v171) {
bb172:
  struct std__ctype_char_* __f173;
  struct std__ctype_char_* __retval174;
  __f173 = v171;
    struct std__ctype_char_* t175 = __f173;
    _Bool cast176 = (_Bool)t175;
    _Bool u177 = !cast176;
    if (u177) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t178 = __f173;
  __retval174 = t178;
  struct std__ctype_char_* t179 = __retval174;
  return t179;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v180, char v181) {
bb182:
  struct std__ctype_char_* this183;
  char __c184;
  char __retval185;
  this183 = v180;
  __c184 = v181;
  struct std__ctype_char_* t186 = this183;
    char t187 = t186->_M_widen_ok;
    _Bool cast188 = (_Bool)t187;
    if (cast188) {
      char t189 = __c184;
      unsigned char cast190 = (unsigned char)t189;
      unsigned long cast191 = (unsigned long)cast190;
      char t192 = t186->_M_widen[cast191];
      __retval185 = t192;
      char t193 = __retval185;
      return t193;
    }
  std__ctype_char____M_widen_init___const(t186);
  char t194 = __c184;
  void** v195 = (void**)t186;
  void* v196 = *((void**)v195);
  char vcall199 = (char)__VERIFIER_virtual_call_char_char(t186, 6, t194);
  __retval185 = vcall199;
  char t200 = __retval185;
  return t200;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v201, char v202) {
bb203:
  struct std__basic_ios_char__std__char_traits_char__* this204;
  char __c205;
  char __retval206;
  this204 = v201;
  __c205 = v202;
  struct std__basic_ios_char__std__char_traits_char__* t207 = this204;
  struct std__ctype_char_* t208 = t207->_M_ctype;
  struct std__ctype_char_* r209 = std__ctype_char__const__std____check_facet_std__ctype_char___(t208);
  char t210 = __c205;
  char r211 = std__ctype_char___widen_char__const(r209, t210);
  __retval206 = r211;
  char t212 = __retval206;
  return t212;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v213) {
bb214:
  struct std__basic_ostream_char__std__char_traits_char__* __os215;
  struct std__basic_ostream_char__std__char_traits_char__* __retval216;
  __os215 = v213;
  struct std__basic_ostream_char__std__char_traits_char__* t217 = __os215;
  struct std__basic_ostream_char__std__char_traits_char__* t218 = __os215;
  void** v219 = (void**)t218;
  void* v220 = *((void**)v219);
  unsigned char* cast221 = (unsigned char*)v220;
  long c222 = -24;
  unsigned char* ptr223 = &(cast221)[c222];
  long* cast224 = (long*)ptr223;
  long t225 = *cast224;
  unsigned char* cast226 = (unsigned char*)t218;
  unsigned char* ptr227 = &(cast226)[t225];
  struct std__basic_ostream_char__std__char_traits_char__* cast228 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr227;
  struct std__basic_ios_char__std__char_traits_char__* cast229 = (struct std__basic_ios_char__std__char_traits_char__*)cast228;
  char c230 = 10;
  char r231 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast229, c230);
  struct std__basic_ostream_char__std__char_traits_char__* r232 = std__ostream__put(t217, r231);
  struct std__basic_ostream_char__std__char_traits_char__* r233 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r232);
  __retval216 = r233;
  struct std__basic_ostream_char__std__char_traits_char__* t234 = __retval216;
  return t234;
}

// function: main
int main() {
bb235:
  int __retval236;
  unsigned int seed237;
  int c238 = 0;
  __retval236 = c238;
  char* cast239 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r240 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast239);
  struct std__basic_istream_char__std__char_traits_char__* r241 = std__istream__operator__(&_ZSt3cin, &seed237);
  unsigned int t242 = seed237;
  srand(t242);
    int counter243;
    int c244 = 1;
    counter243 = c244;
    while (1) {
      int t246 = counter243;
      int c247 = 10;
      _Bool c248 = ((t246 <= c247)) ? 1 : 0;
      if (!c248) break;
        struct std___Setw agg_tmp0249;
        int c250 = 10;
        struct std___Setw r251 = std__setw(c250);
        agg_tmp0249 = r251;
        struct std___Setw t252 = agg_tmp0249;
        struct std__basic_ostream_char__std__char_traits_char__* r253 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t252);
        int c254 = 1;
        int r255 = rand();
        int c256 = 6;
        int b257 = r255 % c256;
        int b258 = c254 + b257;
        struct std__basic_ostream_char__std__char_traits_char__* r259 = std__ostream__operator__(r253, b258);
          int t260 = counter243;
          int c261 = 5;
          int b262 = t260 % c261;
          int c263 = 0;
          _Bool c264 = ((b262 == c263)) ? 1 : 0;
          if (c264) {
            struct std__basic_ostream_char__std__char_traits_char__* r265 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          }
    for_step245: ;
      int t266 = counter243;
      int u267 = t266 + 1;
      counter243 = u267;
    }
  int c268 = 0;
  __retval236 = c268;
  int t269 = __retval236;
  return t269;
}

