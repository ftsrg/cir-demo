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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[22] = "Type the letter 'a': ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[55] = "!((int)cin.gcount() >= 0) && !((int)cin.gcount() < 10)";
char _str_2[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_gcount_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
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
extern struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__ws_char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__get_2(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2, char p3);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__get(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
long std__istream__gcount___const(struct std__basic_istream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, long p1);
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

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v103) {
bb104:
  struct std__ctype_char_* __f105;
  struct std__ctype_char_* __retval106;
  __f105 = v103;
    struct std__ctype_char_* t107 = __f105;
    _Bool cast108 = (_Bool)t107;
    _Bool u109 = !cast108;
    if (u109) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t110 = __f105;
  __retval106 = t110;
  struct std__ctype_char_* t111 = __retval106;
  return t111;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v112, char v113) {
bb114:
  struct std__ctype_char_* this115;
  char __c116;
  char __retval117;
  this115 = v112;
  __c116 = v113;
  struct std__ctype_char_* t118 = this115;
    char t119 = t118->_M_widen_ok;
    _Bool cast120 = (_Bool)t119;
    if (cast120) {
      char t121 = __c116;
      unsigned char cast122 = (unsigned char)t121;
      unsigned long cast123 = (unsigned long)cast122;
      char t124 = t118->_M_widen[cast123];
      __retval117 = t124;
      char t125 = __retval117;
      return t125;
    }
  std__ctype_char____M_widen_init___const(t118);
  char t126 = __c116;
  void** v127 = (void**)t118;
  void* v128 = *((void**)v127);
  char vcall131 = (char)__VERIFIER_virtual_call_char_char(t118, 6, t126);
  __retval117 = vcall131;
  char t132 = __retval117;
  return t132;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v133, char v134) {
bb135:
  struct std__basic_ios_char__std__char_traits_char__* this136;
  char __c137;
  char __retval138;
  this136 = v133;
  __c137 = v134;
  struct std__basic_ios_char__std__char_traits_char__* t139 = this136;
  struct std__ctype_char_* t140 = t139->_M_ctype;
  struct std__ctype_char_* r141 = std__ctype_char__const__std____check_facet_std__ctype_char___(t140);
  char t142 = __c137;
  char r143 = std__ctype_char___widen_char__const(r141, t142);
  __retval138 = r143;
  char t144 = __retval138;
  return t144;
}

// function: _ZNSi3getEPcl
struct std__basic_istream_char__std__char_traits_char__* std__istream__get(struct std__basic_istream_char__std__char_traits_char__* v145, char* v146, long v147) {
bb148:
  struct std__basic_istream_char__std__char_traits_char__* this149;
  char* __s150;
  long __n151;
  struct std__basic_istream_char__std__char_traits_char__* __retval152;
  this149 = v145;
  __s150 = v146;
  __n151 = v147;
  struct std__basic_istream_char__std__char_traits_char__* t153 = this149;
  char* t154 = __s150;
  long t155 = __n151;
  void** v156 = (void**)t153;
  void* v157 = *((void**)v156);
  unsigned char* cast158 = (unsigned char*)v157;
  long c159 = -24;
  unsigned char* ptr160 = &(cast158)[c159];
  long* cast161 = (long*)ptr160;
  long t162 = *cast161;
  unsigned char* cast163 = (unsigned char*)t153;
  unsigned char* ptr164 = &(cast163)[t162];
  struct std__basic_istream_char__std__char_traits_char__* cast165 = (struct std__basic_istream_char__std__char_traits_char__*)ptr164;
  struct std__basic_ios_char__std__char_traits_char__* cast166 = (struct std__basic_ios_char__std__char_traits_char__*)cast165;
  char c167 = 10;
  char r168 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast166, c167);
  struct std__basic_istream_char__std__char_traits_char__* r169 = std__istream__get_2(t153, t154, t155, r168);
  __retval152 = r169;
  struct std__basic_istream_char__std__char_traits_char__* t170 = __retval152;
  return t170;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v171, void* v172) {
bb173:
  struct std__basic_ostream_char__std__char_traits_char__* this174;
  void* __pf175;
  struct std__basic_ostream_char__std__char_traits_char__* __retval176;
  this174 = v171;
  __pf175 = v172;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = this174;
  void* t178 = __pf175;
  struct std__basic_ostream_char__std__char_traits_char__* r179 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t178)(t177);
  __retval176 = r179;
  struct std__basic_ostream_char__std__char_traits_char__* t180 = __retval176;
  return t180;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v181) {
bb182:
  struct std__basic_ostream_char__std__char_traits_char__* __os183;
  struct std__basic_ostream_char__std__char_traits_char__* __retval184;
  __os183 = v181;
  struct std__basic_ostream_char__std__char_traits_char__* t185 = __os183;
  struct std__basic_ostream_char__std__char_traits_char__* r186 = std__ostream__flush(t185);
  __retval184 = r186;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __retval184;
  return t187;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v188) {
bb189:
  struct std__basic_ostream_char__std__char_traits_char__* __os190;
  struct std__basic_ostream_char__std__char_traits_char__* __retval191;
  __os190 = v188;
  struct std__basic_ostream_char__std__char_traits_char__* t192 = __os190;
  struct std__basic_ostream_char__std__char_traits_char__* t193 = __os190;
  void** v194 = (void**)t193;
  void* v195 = *((void**)v194);
  unsigned char* cast196 = (unsigned char*)v195;
  long c197 = -24;
  unsigned char* ptr198 = &(cast196)[c197];
  long* cast199 = (long*)ptr198;
  long t200 = *cast199;
  unsigned char* cast201 = (unsigned char*)t193;
  unsigned char* ptr202 = &(cast201)[t200];
  struct std__basic_ostream_char__std__char_traits_char__* cast203 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr202;
  struct std__basic_ios_char__std__char_traits_char__* cast204 = (struct std__basic_ios_char__std__char_traits_char__*)cast203;
  char c205 = 10;
  char r206 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast204, c205);
  struct std__basic_ostream_char__std__char_traits_char__* r207 = std__ostream__put(t192, r206);
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r207);
  __retval191 = r208;
  struct std__basic_ostream_char__std__char_traits_char__* t209 = __retval191;
  return t209;
}

// function: _ZNKSi6gcountEv
long std__istream__gcount___const(struct std__basic_istream_char__std__char_traits_char__* v210) {
bb211:
  struct std__basic_istream_char__std__char_traits_char__* this212;
  long __retval213;
  this212 = v210;
  struct std__basic_istream_char__std__char_traits_char__* t214 = this212;
  long t215 = t214->_M_gcount;
  __retval213 = t215;
  long t216 = __retval213;
  return t216;
}

// function: _ZNSolsEl
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v217, long v218) {
bb219:
  struct std__basic_ostream_char__std__char_traits_char__* this220;
  long __n221;
  struct std__basic_ostream_char__std__char_traits_char__* __retval222;
  this220 = v217;
  __n221 = v218;
  struct std__basic_ostream_char__std__char_traits_char__* t223 = this220;
  long t224 = __n221;
  struct std__basic_ostream_char__std__char_traits_char__* r225 = std__ostream__std__ostream___M_insert_long_(t223, t224);
  __retval222 = r225;
  struct std__basic_ostream_char__std__char_traits_char__* t226 = __retval222;
  return t226;
}

// function: main
int main() {
bb227:
  int __retval228;
  char c229[10];
  int c230 = 0;
  __retval228 = c230;
  char* cast231 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r232 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast231);
  struct std__basic_istream_char__std__char_traits_char__* r233 = std__basic_istream_char__std__char_traits_char_____std__ws_char__std__char_traits_char___(&_ZSt3cin);
  long c234 = 0;
  long c235 = 9;
  struct std__basic_istream_char__std__char_traits_char__* r236 = std__istream__get(&_ZSt3cin, &c229[c234], c235);
  char* cast237 = (char*)&(c229);
  struct std__basic_ostream_char__std__char_traits_char__* r238 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast237);
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__ostream__operator___std__ostream_____(r238, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  long r240 = std__istream__gcount___const(&_ZSt3cin);
  int cast241 = (int)r240;
  int c242 = 0;
  _Bool c243 = ((cast241 >= c242)) ? 1 : 0;
  _Bool u244 = !c243;
  _Bool ternary245;
  if (u244) {
    long r246 = std__istream__gcount___const(&_ZSt3cin);
    int cast247 = (int)r246;
    int c248 = 10;
    _Bool c249 = ((cast247 < c248)) ? 1 : 0;
    _Bool u250 = !c249;
    ternary245 = (_Bool)u250;
  } else {
    _Bool c251 = 0;
    ternary245 = (_Bool)c251;
  }
  if (ternary245) {
  } else {
    char* cast252 = (char*)&(_str_1);
    char* c253 = _str_2;
    unsigned int c254 = 24;
    char* cast255 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast252, c253, c254, cast255);
  }
  long r256 = std__istream__gcount___const(&_ZSt3cin);
  struct std__basic_ostream_char__std__char_traits_char__* r257 = std__ostream__operator__(&_ZSt4cout, r256);
  struct std__basic_ostream_char__std__char_traits_char__* r258 = std__ostream__operator___std__ostream_____(r257, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int t259 = __retval228;
  return t259;
}

