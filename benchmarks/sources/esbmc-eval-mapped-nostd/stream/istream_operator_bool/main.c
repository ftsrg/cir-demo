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
struct std__ios_base { void* __field0; long __field1; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base9boolalphaE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[21] = "Enter a bool value: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[47] = "cin.flags() & ios::boolalpha == ios::boolalpha";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_operator_bool/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[19] = "You have entered: ";
char _str_4[27] = "Enter another bool value: ";
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
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___std__ios_base_____(struct std__basic_istream_char__std__char_traits_char__* p0, void* p1);
int std__operator__2(int p0, int p1);
int* std__operator__(int* p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__boolalpha(struct std__ios_base* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_bool_(struct std__basic_istream_char__std__char_traits_char__* p0, _Bool* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, _Bool* p1);
int std__ios_base__flags___const(struct std__ios_base* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_bool_(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
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

// function: _ZNSirsEPFRSt8ios_baseS0_E
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___std__ios_base_____(struct std__basic_istream_char__std__char_traits_char__* v103, void* v104) {
bb105:
  struct std__basic_istream_char__std__char_traits_char__* this106;
  void* __pf107;
  struct std__basic_istream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __pf107 = v104;
  struct std__basic_istream_char__std__char_traits_char__* t109 = this106;
  void* t110 = __pf107;
  void** v111 = (void**)t109;
  void* v112 = *((void**)v111);
  unsigned char* cast113 = (unsigned char*)v112;
  long c114 = -24;
  unsigned char* ptr115 = &(cast113)[c114];
  long* cast116 = (long*)ptr115;
  long t117 = *cast116;
  unsigned char* cast118 = (unsigned char*)t109;
  unsigned char* ptr119 = &(cast118)[t117];
  struct std__basic_istream_char__std__char_traits_char__* cast120 = (struct std__basic_istream_char__std__char_traits_char__*)ptr119;
  struct std__ios_base* cast121 = (struct std__ios_base*)cast120;
  struct std__ios_base* r122 = ((struct std__ios_base* (*)(struct std__ios_base*))t110)(cast121);
  __retval108 = t109;
  struct std__basic_istream_char__std__char_traits_char__* t123 = __retval108;
  return t123;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__2(int v124, int v125) {
bb126:
  int __a127;
  int __b128;
  int __retval129;
  __a127 = v124;
  __b128 = v125;
  int t130 = __a127;
  int t131 = __b128;
  int b132 = t130 | t131;
  __retval129 = b132;
  int t133 = __retval129;
  return t133;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator__(int* v134, int v135) {
bb136:
  int* __a137;
  int __b138;
  int* __retval139;
  __a137 = v134;
  __b138 = v135;
  int* t140 = __a137;
  int t141 = *t140;
  int t142 = __b138;
  int r143 = std__operator__2(t141, t142);
  int* t144 = __a137;
  *t144 = r143;
  __retval139 = t144;
  int* t145 = __retval139;
  return t145;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v146, int v147) {
bb148:
  struct std__ios_base* this149;
  int __fmtfl150;
  int __retval151;
  int __old152;
  this149 = v146;
  __fmtfl150 = v147;
  struct std__ios_base* t153 = this149;
  int t154 = t153->_M_flags;
  __old152 = t154;
  int t155 = __fmtfl150;
  int* r156 = std__operator__(&t153->_M_flags, t155);
  int t157 = __old152;
  __retval151 = t157;
  int t158 = __retval151;
  return t158;
}

// function: _ZSt9boolalphaRSt8ios_base
struct std__ios_base* std__boolalpha(struct std__ios_base* v159) {
bb160:
  struct std__ios_base* __base161;
  struct std__ios_base* __retval162;
  __base161 = v159;
  struct std__ios_base* t163 = __base161;
  int t164 = _ZNSt8ios_base9boolalphaE_const;
  int r165 = std__ios_base__setf(t163, t164);
  struct std__ios_base* t166 = __base161;
  __retval162 = t166;
  struct std__ios_base* t167 = __retval162;
  return t167;
}

// function: _ZNSirsERb
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v168, _Bool* v169) {
bb170:
  struct std__basic_istream_char__std__char_traits_char__* this171;
  _Bool* __n172;
  struct std__basic_istream_char__std__char_traits_char__* __retval173;
  this171 = v168;
  __n172 = v169;
  struct std__basic_istream_char__std__char_traits_char__* t174 = this171;
  _Bool* t175 = __n172;
  struct std__basic_istream_char__std__char_traits_char__* r176 = std__istream__std__istream___M_extract_bool_(t174, t175);
  __retval173 = r176;
  struct std__basic_istream_char__std__char_traits_char__* t177 = __retval173;
  return t177;
}

// function: _ZNKSt8ios_base5flagsEv
int std__ios_base__flags___const(struct std__ios_base* v178) {
bb179:
  struct std__ios_base* this180;
  int __retval181;
  this180 = v178;
  struct std__ios_base* t182 = this180;
  int t183 = t182->_M_flags;
  __retval181 = t183;
  int t184 = __retval181;
  return t184;
}

// function: _ZNSolsEb
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v185, _Bool v186) {
bb187:
  struct std__basic_ostream_char__std__char_traits_char__* this188;
  _Bool __n189;
  struct std__basic_ostream_char__std__char_traits_char__* __retval190;
  this188 = v185;
  __n189 = v186;
  struct std__basic_ostream_char__std__char_traits_char__* t191 = this188;
  _Bool t192 = __n189;
  struct std__basic_ostream_char__std__char_traits_char__* r193 = std__ostream__std__ostream___M_insert_bool_(t191, t192);
  __retval190 = r193;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __retval190;
  return t194;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v195, void* v196) {
bb197:
  struct std__basic_ostream_char__std__char_traits_char__* this198;
  void* __pf199;
  struct std__basic_ostream_char__std__char_traits_char__* __retval200;
  this198 = v195;
  __pf199 = v196;
  struct std__basic_ostream_char__std__char_traits_char__* t201 = this198;
  void* t202 = __pf199;
  struct std__basic_ostream_char__std__char_traits_char__* r203 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t202)(t201);
  __retval200 = r203;
  struct std__basic_ostream_char__std__char_traits_char__* t204 = __retval200;
  return t204;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v205) {
bb206:
  struct std__basic_ostream_char__std__char_traits_char__* __os207;
  struct std__basic_ostream_char__std__char_traits_char__* __retval208;
  __os207 = v205;
  struct std__basic_ostream_char__std__char_traits_char__* t209 = __os207;
  struct std__basic_ostream_char__std__char_traits_char__* r210 = std__ostream__flush(t209);
  __retval208 = r210;
  struct std__basic_ostream_char__std__char_traits_char__* t211 = __retval208;
  return t211;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v212) {
bb213:
  struct std__ctype_char_* __f214;
  struct std__ctype_char_* __retval215;
  __f214 = v212;
    struct std__ctype_char_* t216 = __f214;
    _Bool cast217 = (_Bool)t216;
    _Bool u218 = !cast217;
    if (u218) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t219 = __f214;
  __retval215 = t219;
  struct std__ctype_char_* t220 = __retval215;
  return t220;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v221, char v222) {
bb223:
  struct std__ctype_char_* this224;
  char __c225;
  char __retval226;
  this224 = v221;
  __c225 = v222;
  struct std__ctype_char_* t227 = this224;
    char t228 = t227->_M_widen_ok;
    _Bool cast229 = (_Bool)t228;
    if (cast229) {
      char t230 = __c225;
      unsigned char cast231 = (unsigned char)t230;
      unsigned long cast232 = (unsigned long)cast231;
      char t233 = t227->_M_widen[cast232];
      __retval226 = t233;
      char t234 = __retval226;
      return t234;
    }
  std__ctype_char____M_widen_init___const(t227);
  char t235 = __c225;
  void** v236 = (void**)t227;
  void* v237 = *((void**)v236);
  char vcall240 = (char)__VERIFIER_virtual_call_char_char(t227, 6, t235);
  __retval226 = vcall240;
  char t241 = __retval226;
  return t241;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v242, char v243) {
bb244:
  struct std__basic_ios_char__std__char_traits_char__* this245;
  char __c246;
  char __retval247;
  this245 = v242;
  __c246 = v243;
  struct std__basic_ios_char__std__char_traits_char__* t248 = this245;
  struct std__ctype_char_* t249 = t248->_M_ctype;
  struct std__ctype_char_* r250 = std__ctype_char__const__std____check_facet_std__ctype_char___(t249);
  char t251 = __c246;
  char r252 = std__ctype_char___widen_char__const(r250, t251);
  __retval247 = r252;
  char t253 = __retval247;
  return t253;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v254) {
bb255:
  struct std__basic_ostream_char__std__char_traits_char__* __os256;
  struct std__basic_ostream_char__std__char_traits_char__* __retval257;
  __os256 = v254;
  struct std__basic_ostream_char__std__char_traits_char__* t258 = __os256;
  struct std__basic_ostream_char__std__char_traits_char__* t259 = __os256;
  void** v260 = (void**)t259;
  void* v261 = *((void**)v260);
  unsigned char* cast262 = (unsigned char*)v261;
  long c263 = -24;
  unsigned char* ptr264 = &(cast262)[c263];
  long* cast265 = (long*)ptr264;
  long t266 = *cast265;
  unsigned char* cast267 = (unsigned char*)t259;
  unsigned char* ptr268 = &(cast267)[t266];
  struct std__basic_ostream_char__std__char_traits_char__* cast269 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr268;
  struct std__basic_ios_char__std__char_traits_char__* cast270 = (struct std__basic_ios_char__std__char_traits_char__*)cast269;
  char c271 = 10;
  char r272 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast270, c271);
  struct std__basic_ostream_char__std__char_traits_char__* r273 = std__ostream__put(t258, r272);
  struct std__basic_ostream_char__std__char_traits_char__* r274 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r273);
  __retval257 = r274;
  struct std__basic_ostream_char__std__char_traits_char__* t275 = __retval257;
  return t275;
}

// function: main
int main() {
bb276:
  int __retval277;
  _Bool n278;
  int c279 = 0;
  __retval277 = c279;
  char* cast280 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r281 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast280);
  struct std__basic_istream_char__std__char_traits_char__* r282 = std__istream__operator___std__ios_base_____(&_ZSt3cin, &std__boolalpha);
  struct std__basic_istream_char__std__char_traits_char__* r283 = std__istream__operator__(r282, &n278);
  void** v284 = (void**)&_ZSt3cin;
  void* v285 = *((void**)v284);
  unsigned char* cast286 = (unsigned char*)v285;
  long c287 = -24;
  unsigned char* ptr288 = &(cast286)[c287];
  long* cast289 = (long*)ptr288;
  long t290 = *cast289;
  unsigned char* cast291 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr292 = &(cast291)[t290];
  struct std__basic_istream_char__std__char_traits_char__* cast293 = (struct std__basic_istream_char__std__char_traits_char__*)ptr292;
  struct std__ios_base* cast294 = (struct std__ios_base*)cast293;
  int r295 = std__ios_base__flags___const(cast294);
  int t296 = _ZNSt8ios_base9boolalphaE_const;
  int t297 = _ZNSt8ios_base9boolalphaE_const;
  _Bool c298 = ((t296 == t297)) ? 1 : 0;
  int cast299 = (int)c298;
  int b300 = r295 & cast299;
  _Bool cast301 = (_Bool)b300;
  if (cast301) {
  } else {
    char* cast302 = (char*)&(_str_1);
    char* c303 = _str_2;
    unsigned int c304 = 18;
    char* cast305 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast302, c303, c304, cast305);
  }
  char* cast306 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r307 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast306);
  _Bool t308 = n278;
  struct std__basic_ostream_char__std__char_traits_char__* r309 = std__ostream__operator__(r307, t308);
  struct std__basic_ostream_char__std__char_traits_char__* r310 = std__ostream__operator___std__ostream_____(r309, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast311 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r312 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast311);
  struct std__basic_istream_char__std__char_traits_char__* r313 = std__istream__operator___std__ios_base_____(&_ZSt3cin, &std__boolalpha);
  struct std__basic_istream_char__std__char_traits_char__* r314 = std__istream__operator__(r313, &n278);
  void** v315 = (void**)&_ZSt3cin;
  void* v316 = *((void**)v315);
  unsigned char* cast317 = (unsigned char*)v316;
  long c318 = -24;
  unsigned char* ptr319 = &(cast317)[c318];
  long* cast320 = (long*)ptr319;
  long t321 = *cast320;
  unsigned char* cast322 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr323 = &(cast322)[t321];
  struct std__basic_istream_char__std__char_traits_char__* cast324 = (struct std__basic_istream_char__std__char_traits_char__*)ptr323;
  struct std__ios_base* cast325 = (struct std__ios_base*)cast324;
  int r326 = std__ios_base__flags___const(cast325);
  int t327 = _ZNSt8ios_base9boolalphaE_const;
  int t328 = _ZNSt8ios_base9boolalphaE_const;
  _Bool c329 = ((t327 == t328)) ? 1 : 0;
  int cast330 = (int)c329;
  int b331 = r326 & cast330;
  _Bool cast332 = (_Bool)b331;
  if (cast332) {
  } else {
    char* cast333 = (char*)&(_str_1);
    char* c334 = _str_2;
    unsigned int c335 = 23;
    char* cast336 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast333, c334, c335, cast336);
  }
  char* cast337 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r338 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast337);
  _Bool t339 = n278;
  struct std__basic_ostream_char__std__char_traits_char__* r340 = std__ostream__operator__(r338, t339);
  struct std__basic_ostream_char__std__char_traits_char__* r341 = std__ostream__operator___std__ostream_____(r340, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c342 = 0;
  __retval277 = c342;
  int t343 = __retval277;
  return t343;
}

