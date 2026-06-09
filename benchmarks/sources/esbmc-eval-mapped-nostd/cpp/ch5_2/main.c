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
char _str[17] = "Enter a string: ";
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
extern void std____istream_extract(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___80ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int mystery2(char* p0);
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

// function: _ZStrsIcSt11char_traitsIcELm80EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___80ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v103, char* v104) {
bb105:
  struct std__basic_istream_char__std__char_traits_char__* __in106;
  char* __s107;
  struct std__basic_istream_char__std__char_traits_char__* __retval108;
  __in106 = v103;
  __s107 = v104;
  struct std__basic_istream_char__std__char_traits_char__* t109 = __in106;
  char* t110 = __s107;
  char* cast111 = (char*)t110;
  long c112 = 80;
  std____istream_extract(t109, cast111, c112);
  struct std__basic_istream_char__std__char_traits_char__* t113 = __in106;
  __retval108 = t113;
  struct std__basic_istream_char__std__char_traits_char__* t114 = __retval108;
  return t114;
}

// function: _Z8mystery2PKc
int mystery2(char* v115) {
bb116:
  char* s117;
  int __retval118;
  int x119;
  s117 = v115;
    int c120 = 0;
    x119 = c120;
    while (1) {
      char* t122 = s117;
      char t123 = *t122;
      int cast124 = (int)t123;
      int c125 = 0;
      _Bool c126 = ((cast124 != c125)) ? 1 : 0;
      if (!c126) break;
      int t127 = x119;
      int u128 = t127 + 1;
      x119 = u128;
    for_step121: ;
      char* t129 = s117;
      int c130 = 1;
      char* ptr131 = &(t129)[c130];
      s117 = ptr131;
    }
  int t132 = x119;
  __retval118 = t132;
  int t133 = __retval118;
  return t133;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v134, void* v135) {
bb136:
  struct std__basic_ostream_char__std__char_traits_char__* this137;
  void* __pf138;
  struct std__basic_ostream_char__std__char_traits_char__* __retval139;
  this137 = v134;
  __pf138 = v135;
  struct std__basic_ostream_char__std__char_traits_char__* t140 = this137;
  void* t141 = __pf138;
  struct std__basic_ostream_char__std__char_traits_char__* r142 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t141)(t140);
  __retval139 = r142;
  struct std__basic_ostream_char__std__char_traits_char__* t143 = __retval139;
  return t143;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v144) {
bb145:
  struct std__basic_ostream_char__std__char_traits_char__* __os146;
  struct std__basic_ostream_char__std__char_traits_char__* __retval147;
  __os146 = v144;
  struct std__basic_ostream_char__std__char_traits_char__* t148 = __os146;
  struct std__basic_ostream_char__std__char_traits_char__* r149 = std__ostream__flush(t148);
  __retval147 = r149;
  struct std__basic_ostream_char__std__char_traits_char__* t150 = __retval147;
  return t150;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v151) {
bb152:
  struct std__ctype_char_* __f153;
  struct std__ctype_char_* __retval154;
  __f153 = v151;
    struct std__ctype_char_* t155 = __f153;
    _Bool cast156 = (_Bool)t155;
    _Bool u157 = !cast156;
    if (u157) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t158 = __f153;
  __retval154 = t158;
  struct std__ctype_char_* t159 = __retval154;
  return t159;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v160, char v161) {
bb162:
  struct std__ctype_char_* this163;
  char __c164;
  char __retval165;
  this163 = v160;
  __c164 = v161;
  struct std__ctype_char_* t166 = this163;
    char t167 = t166->_M_widen_ok;
    _Bool cast168 = (_Bool)t167;
    if (cast168) {
      char t169 = __c164;
      unsigned char cast170 = (unsigned char)t169;
      unsigned long cast171 = (unsigned long)cast170;
      char t172 = t166->_M_widen[cast171];
      __retval165 = t172;
      char t173 = __retval165;
      return t173;
    }
  std__ctype_char____M_widen_init___const(t166);
  char t174 = __c164;
  void** v175 = (void**)t166;
  void* v176 = *((void**)v175);
  char vcall179 = (char)__VERIFIER_virtual_call_char_char(t166, 6, t174);
  __retval165 = vcall179;
  char t180 = __retval165;
  return t180;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v181, char v182) {
bb183:
  struct std__basic_ios_char__std__char_traits_char__* this184;
  char __c185;
  char __retval186;
  this184 = v181;
  __c185 = v182;
  struct std__basic_ios_char__std__char_traits_char__* t187 = this184;
  struct std__ctype_char_* t188 = t187->_M_ctype;
  struct std__ctype_char_* r189 = std__ctype_char__const__std____check_facet_std__ctype_char___(t188);
  char t190 = __c185;
  char r191 = std__ctype_char___widen_char__const(r189, t190);
  __retval186 = r191;
  char t192 = __retval186;
  return t192;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v193) {
bb194:
  struct std__basic_ostream_char__std__char_traits_char__* __os195;
  struct std__basic_ostream_char__std__char_traits_char__* __retval196;
  __os195 = v193;
  struct std__basic_ostream_char__std__char_traits_char__* t197 = __os195;
  struct std__basic_ostream_char__std__char_traits_char__* t198 = __os195;
  void** v199 = (void**)t198;
  void* v200 = *((void**)v199);
  unsigned char* cast201 = (unsigned char*)v200;
  long c202 = -24;
  unsigned char* ptr203 = &(cast201)[c202];
  long* cast204 = (long*)ptr203;
  long t205 = *cast204;
  unsigned char* cast206 = (unsigned char*)t198;
  unsigned char* ptr207 = &(cast206)[t205];
  struct std__basic_ostream_char__std__char_traits_char__* cast208 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr207;
  struct std__basic_ios_char__std__char_traits_char__* cast209 = (struct std__basic_ios_char__std__char_traits_char__*)cast208;
  char c210 = 10;
  char r211 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast209, c210);
  struct std__basic_ostream_char__std__char_traits_char__* r212 = std__ostream__put(t197, r211);
  struct std__basic_ostream_char__std__char_traits_char__* r213 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r212);
  __retval196 = r213;
  struct std__basic_ostream_char__std__char_traits_char__* t214 = __retval196;
  return t214;
}

// function: main
int main() {
bb215:
  int __retval216;
  char string1217[80];
  int c218 = 0;
  __retval216 = c218;
  char* cast219 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r220 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast219);
  struct std__basic_istream_char__std__char_traits_char__* r221 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___80ul__std__basic_istream_char__std__char_traits_char______char_(&_ZSt3cin, string1217);
  char* cast222 = (char*)&(string1217);
  int r223 = mystery2(cast222);
  struct std__basic_ostream_char__std__char_traits_char__* r224 = std__ostream__operator__(&_ZSt4cout, r223);
  struct std__basic_ostream_char__std__char_traits_char__* r225 = std__ostream__operator___std__ostream_____(r224, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c226 = 0;
  __retval216 = c226;
  int t227 = __retval216;
  return t227;
}

