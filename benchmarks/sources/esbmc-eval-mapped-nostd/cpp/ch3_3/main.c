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
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[48] = "Enter the length of the radius of your sphere: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[30] = "Volume of sphere with radius ";
char _str_2[5] = " is ";
double _ZL2PI __attribute__((aligned(8))) = 0x1.921f9f01b866ep1;
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
extern double pow(double p0, double p1);
double sphereVolume(double p0);
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

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v103, double* v104) {
bb105:
  struct std__basic_istream_char__std__char_traits_char__* this106;
  double* __f107;
  struct std__basic_istream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __f107 = v104;
  struct std__basic_istream_char__std__char_traits_char__* t109 = this106;
  double* t110 = __f107;
  struct std__basic_istream_char__std__char_traits_char__* r111 = std__istream__std__istream___M_extract_double_(t109, t110);
  __retval108 = r111;
  struct std__basic_istream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v113, double v114) {
bb115:
  struct std__basic_ostream_char__std__char_traits_char__* this116;
  double __f117;
  struct std__basic_ostream_char__std__char_traits_char__* __retval118;
  this116 = v113;
  __f117 = v114;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = this116;
  double t120 = __f117;
  struct std__basic_ostream_char__std__char_traits_char__* r121 = std__ostream__std__ostream___M_insert_double_(t119, t120);
  __retval118 = r121;
  struct std__basic_ostream_char__std__char_traits_char__* t122 = __retval118;
  return t122;
}

// function: _Z12sphereVolumed
double sphereVolume(double v123) {
bb124:
  double radius125;
  double __retval126;
  radius125 = v123;
  double c127 = 0x1p2;
  double c128 = 0x1.8p1;
  double b129 = c127 / c128;
  double t130 = _ZL2PI;
  double b131 = b129 * t130;
  double t132 = radius125;
  int c133 = 3;
  double cast134 = (double)c133;
  double r135 = pow(t132, cast134);
  double b136 = b131 * r135;
  __retval126 = b136;
  double t137 = __retval126;
  return t137;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v138, void* v139) {
bb140:
  struct std__basic_ostream_char__std__char_traits_char__* this141;
  void* __pf142;
  struct std__basic_ostream_char__std__char_traits_char__* __retval143;
  this141 = v138;
  __pf142 = v139;
  struct std__basic_ostream_char__std__char_traits_char__* t144 = this141;
  void* t145 = __pf142;
  struct std__basic_ostream_char__std__char_traits_char__* r146 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t145)(t144);
  __retval143 = r146;
  struct std__basic_ostream_char__std__char_traits_char__* t147 = __retval143;
  return t147;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v148) {
bb149:
  struct std__basic_ostream_char__std__char_traits_char__* __os150;
  struct std__basic_ostream_char__std__char_traits_char__* __retval151;
  __os150 = v148;
  struct std__basic_ostream_char__std__char_traits_char__* t152 = __os150;
  struct std__basic_ostream_char__std__char_traits_char__* r153 = std__ostream__flush(t152);
  __retval151 = r153;
  struct std__basic_ostream_char__std__char_traits_char__* t154 = __retval151;
  return t154;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v155) {
bb156:
  struct std__ctype_char_* __f157;
  struct std__ctype_char_* __retval158;
  __f157 = v155;
    struct std__ctype_char_* t159 = __f157;
    _Bool cast160 = (_Bool)t159;
    _Bool u161 = !cast160;
    if (u161) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t162 = __f157;
  __retval158 = t162;
  struct std__ctype_char_* t163 = __retval158;
  return t163;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v164, char v165) {
bb166:
  struct std__ctype_char_* this167;
  char __c168;
  char __retval169;
  this167 = v164;
  __c168 = v165;
  struct std__ctype_char_* t170 = this167;
    char t171 = t170->_M_widen_ok;
    _Bool cast172 = (_Bool)t171;
    if (cast172) {
      char t173 = __c168;
      unsigned char cast174 = (unsigned char)t173;
      unsigned long cast175 = (unsigned long)cast174;
      char t176 = t170->_M_widen[cast175];
      __retval169 = t176;
      char t177 = __retval169;
      return t177;
    }
  std__ctype_char____M_widen_init___const(t170);
  char t178 = __c168;
  void** v179 = (void**)t170;
  void* v180 = *((void**)v179);
  char vcall183 = (char)__VERIFIER_virtual_call_char_char(t170, 6, t178);
  __retval169 = vcall183;
  char t184 = __retval169;
  return t184;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v185, char v186) {
bb187:
  struct std__basic_ios_char__std__char_traits_char__* this188;
  char __c189;
  char __retval190;
  this188 = v185;
  __c189 = v186;
  struct std__basic_ios_char__std__char_traits_char__* t191 = this188;
  struct std__ctype_char_* t192 = t191->_M_ctype;
  struct std__ctype_char_* r193 = std__ctype_char__const__std____check_facet_std__ctype_char___(t192);
  char t194 = __c189;
  char r195 = std__ctype_char___widen_char__const(r193, t194);
  __retval190 = r195;
  char t196 = __retval190;
  return t196;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v197) {
bb198:
  struct std__basic_ostream_char__std__char_traits_char__* __os199;
  struct std__basic_ostream_char__std__char_traits_char__* __retval200;
  __os199 = v197;
  struct std__basic_ostream_char__std__char_traits_char__* t201 = __os199;
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
  struct std__basic_ios_char__std__char_traits_char__* cast213 = (struct std__basic_ios_char__std__char_traits_char__*)cast212;
  char c214 = 10;
  char r215 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast213, c214);
  struct std__basic_ostream_char__std__char_traits_char__* r216 = std__ostream__put(t201, r215);
  struct std__basic_ostream_char__std__char_traits_char__* r217 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r216);
  __retval200 = r217;
  struct std__basic_ostream_char__std__char_traits_char__* t218 = __retval200;
  return t218;
}

// function: main
int main() {
bb219:
  int __retval220;
  double radiusValue221;
  int c222 = 0;
  __retval220 = c222;
  char* cast223 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r224 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast223);
  struct std__basic_istream_char__std__char_traits_char__* r225 = std__istream__operator__(&_ZSt3cin, &radiusValue221);
  char* cast226 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r227 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast226);
  double t228 = radiusValue221;
  struct std__basic_ostream_char__std__char_traits_char__* r229 = std__ostream__operator__(r227, t228);
  char* cast230 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r231 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r229, cast230);
  double t232 = radiusValue221;
  double r233 = sphereVolume(t232);
  struct std__basic_ostream_char__std__char_traits_char__* r234 = std__ostream__operator__(r231, r233);
  struct std__basic_ostream_char__std__char_traits_char__* r235 = std__ostream__operator___std__ostream_____(r234, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c236 = 0;
  __retval220 = c236;
  int t237 = __retval220;
  return t237;
}

