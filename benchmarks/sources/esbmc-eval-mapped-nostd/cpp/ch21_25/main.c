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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "The minimum of 12 and 7 is: ";
char _str_1[30] = "\nThe maximum of 12 and 7 is: ";
char _str_2[33] = "\nThe minimum of 'G' and 'Z' is: ";
char _str_3[33] = "\nThe maximum of 'G' and 'Z' is: ";
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* int_const__std__min_int_(int* p0, int* p1);
int* int_const__std__max_int_(int* p0, int* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
char* char_const__std__min_char_(char* p0, char* p1);
char* char_const__std__max_char_(char* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
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

// function: _ZSt3minIiERKT_S2_S2_
int* int_const__std__min_int_(int* v103, int* v104) {
bb105:
  int* __a106;
  int* __b107;
  int* __retval108;
  __a106 = v103;
  __b107 = v104;
    int* t109 = __b107;
    int t110 = *t109;
    int* t111 = __a106;
    int t112 = *t111;
    _Bool c113 = ((t110 < t112)) ? 1 : 0;
    if (c113) {
      int* t114 = __b107;
      __retval108 = t114;
      int* t115 = __retval108;
      return t115;
    }
  int* t116 = __a106;
  __retval108 = t116;
  int* t117 = __retval108;
  return t117;
}

// function: _ZSt3maxIiERKT_S2_S2_
int* int_const__std__max_int_(int* v118, int* v119) {
bb120:
  int* __a121;
  int* __b122;
  int* __retval123;
  __a121 = v118;
  __b122 = v119;
    int* t124 = __a121;
    int t125 = *t124;
    int* t126 = __b122;
    int t127 = *t126;
    _Bool c128 = ((t125 < t127)) ? 1 : 0;
    if (c128) {
      int* t129 = __b122;
      __retval123 = t129;
      int* t130 = __retval123;
      return t130;
    }
  int* t131 = __a121;
  __retval123 = t131;
  int* t132 = __retval123;
  return t132;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v133) {
bb134:
  struct std__ios_base* this135;
  long __retval136;
  this135 = v133;
  struct std__ios_base* t137 = this135;
  long t138 = t137->_M_width;
  __retval136 = t138;
  long t139 = __retval136;
  return t139;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v140, char v141) {
bb142:
  struct std__basic_ostream_char__std__char_traits_char__* __out143;
  char __c144;
  struct std__basic_ostream_char__std__char_traits_char__* __retval145;
  __out143 = v140;
  __c144 = v141;
    struct std__basic_ostream_char__std__char_traits_char__* t146 = __out143;
    void** v147 = (void**)t146;
    void* v148 = *((void**)v147);
    unsigned char* cast149 = (unsigned char*)v148;
    long c150 = -24;
    unsigned char* ptr151 = &(cast149)[c150];
    long* cast152 = (long*)ptr151;
    long t153 = *cast152;
    unsigned char* cast154 = (unsigned char*)t146;
    unsigned char* ptr155 = &(cast154)[t153];
    struct std__basic_ostream_char__std__char_traits_char__* cast156 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr155;
    struct std__ios_base* cast157 = (struct std__ios_base*)cast156;
    long r158 = std__ios_base__width___const(cast157);
    long c159 = 0;
    _Bool c160 = ((r158 != c159)) ? 1 : 0;
    if (c160) {
      struct std__basic_ostream_char__std__char_traits_char__* t161 = __out143;
      long c162 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r163 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t161, &__c144, c162);
      __retval145 = r163;
      struct std__basic_ostream_char__std__char_traits_char__* t164 = __retval145;
      return t164;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t165 = __out143;
  char t166 = __c144;
  struct std__basic_ostream_char__std__char_traits_char__* r167 = std__ostream__put(t165, t166);
  struct std__basic_ostream_char__std__char_traits_char__* t168 = __out143;
  __retval145 = t168;
  struct std__basic_ostream_char__std__char_traits_char__* t169 = __retval145;
  return t169;
}

// function: _ZSt3minIcERKT_S2_S2_
char* char_const__std__min_char_(char* v170, char* v171) {
bb172:
  char* __a173;
  char* __b174;
  char* __retval175;
  __a173 = v170;
  __b174 = v171;
    char* t176 = __b174;
    char t177 = *t176;
    int cast178 = (int)t177;
    char* t179 = __a173;
    char t180 = *t179;
    int cast181 = (int)t180;
    _Bool c182 = ((cast178 < cast181)) ? 1 : 0;
    if (c182) {
      char* t183 = __b174;
      __retval175 = t183;
      char* t184 = __retval175;
      return t184;
    }
  char* t185 = __a173;
  __retval175 = t185;
  char* t186 = __retval175;
  return t186;
}

// function: _ZSt3maxIcERKT_S2_S2_
char* char_const__std__max_char_(char* v187, char* v188) {
bb189:
  char* __a190;
  char* __b191;
  char* __retval192;
  __a190 = v187;
  __b191 = v188;
    char* t193 = __a190;
    char t194 = *t193;
    int cast195 = (int)t194;
    char* t196 = __b191;
    char t197 = *t196;
    int cast198 = (int)t197;
    _Bool c199 = ((cast195 < cast198)) ? 1 : 0;
    if (c199) {
      char* t200 = __b191;
      __retval192 = t200;
      char* t201 = __retval192;
      return t201;
    }
  char* t202 = __a190;
  __retval192 = t202;
  char* t203 = __retval192;
  return t203;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v204, void* v205) {
bb206:
  struct std__basic_ostream_char__std__char_traits_char__* this207;
  void* __pf208;
  struct std__basic_ostream_char__std__char_traits_char__* __retval209;
  this207 = v204;
  __pf208 = v205;
  struct std__basic_ostream_char__std__char_traits_char__* t210 = this207;
  void* t211 = __pf208;
  struct std__basic_ostream_char__std__char_traits_char__* r212 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t211)(t210);
  __retval209 = r212;
  struct std__basic_ostream_char__std__char_traits_char__* t213 = __retval209;
  return t213;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v214) {
bb215:
  struct std__basic_ostream_char__std__char_traits_char__* __os216;
  struct std__basic_ostream_char__std__char_traits_char__* __retval217;
  __os216 = v214;
  struct std__basic_ostream_char__std__char_traits_char__* t218 = __os216;
  struct std__basic_ostream_char__std__char_traits_char__* r219 = std__ostream__flush(t218);
  __retval217 = r219;
  struct std__basic_ostream_char__std__char_traits_char__* t220 = __retval217;
  return t220;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v221) {
bb222:
  struct std__ctype_char_* __f223;
  struct std__ctype_char_* __retval224;
  __f223 = v221;
    struct std__ctype_char_* t225 = __f223;
    _Bool cast226 = (_Bool)t225;
    _Bool u227 = !cast226;
    if (u227) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t228 = __f223;
  __retval224 = t228;
  struct std__ctype_char_* t229 = __retval224;
  return t229;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v230, char v231) {
bb232:
  struct std__ctype_char_* this233;
  char __c234;
  char __retval235;
  this233 = v230;
  __c234 = v231;
  struct std__ctype_char_* t236 = this233;
    char t237 = t236->_M_widen_ok;
    _Bool cast238 = (_Bool)t237;
    if (cast238) {
      char t239 = __c234;
      unsigned char cast240 = (unsigned char)t239;
      unsigned long cast241 = (unsigned long)cast240;
      char t242 = t236->_M_widen[cast241];
      __retval235 = t242;
      char t243 = __retval235;
      return t243;
    }
  std__ctype_char____M_widen_init___const(t236);
  char t244 = __c234;
  void** v245 = (void**)t236;
  void* v246 = *((void**)v245);
  char vcall249 = (char)__VERIFIER_virtual_call_char_char(t236, 6, t244);
  __retval235 = vcall249;
  char t250 = __retval235;
  return t250;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v251, char v252) {
bb253:
  struct std__basic_ios_char__std__char_traits_char__* this254;
  char __c255;
  char __retval256;
  this254 = v251;
  __c255 = v252;
  struct std__basic_ios_char__std__char_traits_char__* t257 = this254;
  struct std__ctype_char_* t258 = t257->_M_ctype;
  struct std__ctype_char_* r259 = std__ctype_char__const__std____check_facet_std__ctype_char___(t258);
  char t260 = __c255;
  char r261 = std__ctype_char___widen_char__const(r259, t260);
  __retval256 = r261;
  char t262 = __retval256;
  return t262;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v263) {
bb264:
  struct std__basic_ostream_char__std__char_traits_char__* __os265;
  struct std__basic_ostream_char__std__char_traits_char__* __retval266;
  __os265 = v263;
  struct std__basic_ostream_char__std__char_traits_char__* t267 = __os265;
  struct std__basic_ostream_char__std__char_traits_char__* t268 = __os265;
  void** v269 = (void**)t268;
  void* v270 = *((void**)v269);
  unsigned char* cast271 = (unsigned char*)v270;
  long c272 = -24;
  unsigned char* ptr273 = &(cast271)[c272];
  long* cast274 = (long*)ptr273;
  long t275 = *cast274;
  unsigned char* cast276 = (unsigned char*)t268;
  unsigned char* ptr277 = &(cast276)[t275];
  struct std__basic_ostream_char__std__char_traits_char__* cast278 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr277;
  struct std__basic_ios_char__std__char_traits_char__* cast279 = (struct std__basic_ios_char__std__char_traits_char__*)cast278;
  char c280 = 10;
  char r281 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast279, c280);
  struct std__basic_ostream_char__std__char_traits_char__* r282 = std__ostream__put(t267, r281);
  struct std__basic_ostream_char__std__char_traits_char__* r283 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r282);
  __retval266 = r283;
  struct std__basic_ostream_char__std__char_traits_char__* t284 = __retval266;
  return t284;
}

// function: main
int main() {
bb285:
  int __retval286;
  int ref_tmp0287;
  int ref_tmp1288;
  int ref_tmp2289;
  int ref_tmp3290;
  char ref_tmp4291;
  char ref_tmp5292;
  char ref_tmp6293;
  char ref_tmp7294;
  int c295 = 0;
  __retval286 = c295;
  char* cast296 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast296);
  int c298 = 12;
  ref_tmp0287 = c298;
  int c299 = 7;
  ref_tmp1288 = c299;
  int* r300 = int_const__std__min_int_(&ref_tmp0287, &ref_tmp1288);
  int t301 = *r300;
  struct std__basic_ostream_char__std__char_traits_char__* r302 = std__ostream__operator__(r297, t301);
  char* cast303 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r304 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast303);
  int c305 = 12;
  ref_tmp2289 = c305;
  int c306 = 7;
  ref_tmp3290 = c306;
  int* r307 = int_const__std__max_int_(&ref_tmp2289, &ref_tmp3290);
  int t308 = *r307;
  struct std__basic_ostream_char__std__char_traits_char__* r309 = std__ostream__operator__(r304, t308);
  char* cast310 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r311 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast310);
  char c312 = 71;
  ref_tmp4291 = c312;
  char c313 = 90;
  ref_tmp5292 = c313;
  char* r314 = char_const__std__min_char_(&ref_tmp4291, &ref_tmp5292);
  char t315 = *r314;
  struct std__basic_ostream_char__std__char_traits_char__* r316 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r311, t315);
  char* cast317 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r318 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast317);
  char c319 = 71;
  ref_tmp6293 = c319;
  char c320 = 90;
  ref_tmp7294 = c320;
  char* r321 = char_const__std__max_char_(&ref_tmp6293, &ref_tmp7294);
  char t322 = *r321;
  struct std__basic_ostream_char__std__char_traits_char__* r323 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r318, t322);
  struct std__basic_ostream_char__std__char_traits_char__* r324 = std__ostream__operator___std__ostream_____(r323, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c325 = 0;
  __retval286 = c325;
  int t326 = __retval286;
  return t326;
}

