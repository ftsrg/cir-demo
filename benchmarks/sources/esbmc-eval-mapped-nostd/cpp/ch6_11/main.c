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
struct Date { int month; int day; int year; };
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
char _str[9] = "date1 = ";
char _str_1[10] = "\ndate2 = ";
char _str_2[48] = "\n\nAfter default memberwise assignment, date2 = ";
void Date__Date_2(struct Date* p0, int p1, int p2, int p3);
void Date__Date(struct Date* p0, int p1, int p2, int p3) { Date__Date_2(p0, p1, p2, p3); }
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void Date__print(struct Date* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct Date* Date__operator_(struct Date* p0, struct Date* p1);
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

// function: _ZN4DateC2Eiii
void Date__Date_2(struct Date* v0, int v1, int v2, int v3) {
bb4:
  struct Date* this5;
  int m6;
  int d7;
  int y8;
  this5 = v0;
  m6 = v1;
  d7 = v2;
  y8 = v3;
  struct Date* t9 = this5;
  int t10 = m6;
  t9->month = t10;
  int t11 = d7;
  t9->day = t11;
  int t12 = y8;
  t9->year = t12;
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v13) {
bb14:
  struct std__ios_base* this15;
  long __retval16;
  this15 = v13;
  struct std__ios_base* t17 = this15;
  long t18 = t17->_M_width;
  __retval16 = t18;
  long t19 = __retval16;
  return t19;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v20, char v21) {
bb22:
  struct std__basic_ostream_char__std__char_traits_char__* __out23;
  char __c24;
  struct std__basic_ostream_char__std__char_traits_char__* __retval25;
  __out23 = v20;
  __c24 = v21;
    struct std__basic_ostream_char__std__char_traits_char__* t26 = __out23;
    void** v27 = (void**)t26;
    void* v28 = *((void**)v27);
    unsigned char* cast29 = (unsigned char*)v28;
    long c30 = -24;
    unsigned char* ptr31 = &(cast29)[c30];
    long* cast32 = (long*)ptr31;
    long t33 = *cast32;
    unsigned char* cast34 = (unsigned char*)t26;
    unsigned char* ptr35 = &(cast34)[t33];
    struct std__basic_ostream_char__std__char_traits_char__* cast36 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr35;
    struct std__ios_base* cast37 = (struct std__ios_base*)cast36;
    long r38 = std__ios_base__width___const(cast37);
    long c39 = 0;
    _Bool c40 = ((r38 != c39)) ? 1 : 0;
    if (c40) {
      struct std__basic_ostream_char__std__char_traits_char__* t41 = __out23;
      long c42 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r43 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t41, &__c24, c42);
      __retval25 = r43;
      struct std__basic_ostream_char__std__char_traits_char__* t44 = __retval25;
      return t44;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t45 = __out23;
  char t46 = __c24;
  struct std__basic_ostream_char__std__char_traits_char__* r47 = std__ostream__put(t45, t46);
  struct std__basic_ostream_char__std__char_traits_char__* t48 = __out23;
  __retval25 = t48;
  struct std__basic_ostream_char__std__char_traits_char__* t49 = __retval25;
  return t49;
}

// function: _ZN4Date5printEv
void Date__print(struct Date* v50) {
bb51:
  struct Date* this52;
  this52 = v50;
  struct Date* t53 = this52;
  int t54 = t53->month;
  struct std__basic_ostream_char__std__char_traits_char__* r55 = std__ostream__operator__(&_ZSt4cout, t54);
  char c56 = 45;
  struct std__basic_ostream_char__std__char_traits_char__* r57 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r55, c56);
  int t58 = t53->day;
  struct std__basic_ostream_char__std__char_traits_char__* r59 = std__ostream__operator__(r57, t58);
  char c60 = 45;
  struct std__basic_ostream_char__std__char_traits_char__* r61 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r59, c60);
  int t62 = t53->year;
  struct std__basic_ostream_char__std__char_traits_char__* r63 = std__ostream__operator__(r61, t62);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v64, int v65) {
bb66:
  int __a67;
  int __b68;
  int __retval69;
  __a67 = v64;
  __b68 = v65;
  int t70 = __a67;
  int t71 = __b68;
  int b72 = t70 | t71;
  __retval69 = b72;
  int t73 = __retval69;
  return t73;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v74) {
bb75:
  struct std__basic_ios_char__std__char_traits_char__* this76;
  int __retval77;
  this76 = v74;
  struct std__basic_ios_char__std__char_traits_char__* t78 = this76;
  struct std__ios_base* base79 = (struct std__ios_base*)((char *)t78 + 0);
  int t80 = base79->_M_streambuf_state;
  __retval77 = t80;
  int t81 = __retval77;
  return t81;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v82, int v83) {
bb84:
  struct std__basic_ios_char__std__char_traits_char__* this85;
  int __state86;
  this85 = v82;
  __state86 = v83;
  struct std__basic_ios_char__std__char_traits_char__* t87 = this85;
  int r88 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t87);
  int t89 = __state86;
  int r90 = std__operator_(r88, t89);
  std__basic_ios_char__std__char_traits_char_____clear(t87, r90);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb91:
  _Bool __retval92;
    _Bool c93 = 0;
    __retval92 = c93;
    _Bool t94 = __retval92;
    return t94;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v95, char* v96) {
bb97:
  char* __c198;
  char* __c299;
  _Bool __retval100;
  __c198 = v95;
  __c299 = v96;
  char* t101 = __c198;
  char t102 = *t101;
  int cast103 = (int)t102;
  char* t104 = __c299;
  char t105 = *t104;
  int cast106 = (int)t105;
  _Bool c107 = ((cast103 == cast106)) ? 1 : 0;
  __retval100 = c107;
  _Bool t108 = __retval100;
  return t108;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v109) {
bb110:
  char* __p111;
  unsigned long __retval112;
  unsigned long __i113;
  __p111 = v109;
  unsigned long c114 = 0;
  __i113 = c114;
    char ref_tmp0115;
    while (1) {
      unsigned long t116 = __i113;
      char* t117 = __p111;
      char* ptr118 = &(t117)[t116];
      char c119 = 0;
      ref_tmp0115 = c119;
      _Bool r120 = __gnu_cxx__char_traits_char___eq(ptr118, &ref_tmp0115);
      _Bool u121 = !r120;
      if (!u121) break;
      unsigned long t122 = __i113;
      unsigned long u123 = t122 + 1;
      __i113 = u123;
    }
  unsigned long t124 = __i113;
  __retval112 = t124;
  unsigned long t125 = __retval112;
  return t125;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v126) {
bb127:
  char* __s128;
  unsigned long __retval129;
  __s128 = v126;
    _Bool r130 = std____is_constant_evaluated();
    if (r130) {
      char* t131 = __s128;
      unsigned long r132 = __gnu_cxx__char_traits_char___length(t131);
      __retval129 = r132;
      unsigned long t133 = __retval129;
      return t133;
    }
  char* t134 = __s128;
  unsigned long r135 = strlen(t134);
  __retval129 = r135;
  unsigned long t136 = __retval129;
  return t136;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v137, char* v138) {
bb139:
  struct std__basic_ostream_char__std__char_traits_char__* __out140;
  char* __s141;
  struct std__basic_ostream_char__std__char_traits_char__* __retval142;
  __out140 = v137;
  __s141 = v138;
    char* t143 = __s141;
    _Bool cast144 = (_Bool)t143;
    _Bool u145 = !cast144;
    if (u145) {
      struct std__basic_ostream_char__std__char_traits_char__* t146 = __out140;
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
      struct std__basic_ios_char__std__char_traits_char__* cast157 = (struct std__basic_ios_char__std__char_traits_char__*)cast156;
      int t158 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast157, t158);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t159 = __out140;
      char* t160 = __s141;
      char* t161 = __s141;
      unsigned long r162 = std__char_traits_char___length(t161);
      long cast163 = (long)r162;
      struct std__basic_ostream_char__std__char_traits_char__* r164 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t159, t160, cast163);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t165 = __out140;
  __retval142 = t165;
  struct std__basic_ostream_char__std__char_traits_char__* t166 = __retval142;
  return t166;
}

// function: _ZN4DateaSERKS_
struct Date* Date__operator_(struct Date* v167, struct Date* v168) {
bb169:
  struct Date* this170;
  struct Date* unnamed171;
  struct Date* __retval172;
  this170 = v167;
  unnamed171 = v168;
  struct Date* t173 = this170;
  struct Date* t174 = unnamed171;
  int t175 = t174->month;
  t173->month = t175;
  struct Date* t176 = unnamed171;
  int t177 = t176->day;
  t173->day = t177;
  struct Date* t178 = unnamed171;
  int t179 = t178->year;
  t173->year = t179;
  __retval172 = t173;
  struct Date* t180 = __retval172;
  return t180;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v181, void* v182) {
bb183:
  struct std__basic_ostream_char__std__char_traits_char__* this184;
  void* __pf185;
  struct std__basic_ostream_char__std__char_traits_char__* __retval186;
  this184 = v181;
  __pf185 = v182;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = this184;
  void* t188 = __pf185;
  struct std__basic_ostream_char__std__char_traits_char__* r189 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t188)(t187);
  __retval186 = r189;
  struct std__basic_ostream_char__std__char_traits_char__* t190 = __retval186;
  return t190;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v191) {
bb192:
  struct std__basic_ostream_char__std__char_traits_char__* __os193;
  struct std__basic_ostream_char__std__char_traits_char__* __retval194;
  __os193 = v191;
  struct std__basic_ostream_char__std__char_traits_char__* t195 = __os193;
  struct std__basic_ostream_char__std__char_traits_char__* r196 = std__ostream__flush(t195);
  __retval194 = r196;
  struct std__basic_ostream_char__std__char_traits_char__* t197 = __retval194;
  return t197;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v198) {
bb199:
  struct std__ctype_char_* __f200;
  struct std__ctype_char_* __retval201;
  __f200 = v198;
    struct std__ctype_char_* t202 = __f200;
    _Bool cast203 = (_Bool)t202;
    _Bool u204 = !cast203;
    if (u204) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t205 = __f200;
  __retval201 = t205;
  struct std__ctype_char_* t206 = __retval201;
  return t206;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v207, char v208) {
bb209:
  struct std__ctype_char_* this210;
  char __c211;
  char __retval212;
  this210 = v207;
  __c211 = v208;
  struct std__ctype_char_* t213 = this210;
    char t214 = t213->_M_widen_ok;
    _Bool cast215 = (_Bool)t214;
    if (cast215) {
      char t216 = __c211;
      unsigned char cast217 = (unsigned char)t216;
      unsigned long cast218 = (unsigned long)cast217;
      char t219 = t213->_M_widen[cast218];
      __retval212 = t219;
      char t220 = __retval212;
      return t220;
    }
  std__ctype_char____M_widen_init___const(t213);
  char t221 = __c211;
  void** v222 = (void**)t213;
  void* v223 = *((void**)v222);
  char vcall226 = (char)__VERIFIER_virtual_call_char_char(t213, 6, t221);
  __retval212 = vcall226;
  char t227 = __retval212;
  return t227;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v228, char v229) {
bb230:
  struct std__basic_ios_char__std__char_traits_char__* this231;
  char __c232;
  char __retval233;
  this231 = v228;
  __c232 = v229;
  struct std__basic_ios_char__std__char_traits_char__* t234 = this231;
  struct std__ctype_char_* t235 = t234->_M_ctype;
  struct std__ctype_char_* r236 = std__ctype_char__const__std____check_facet_std__ctype_char___(t235);
  char t237 = __c232;
  char r238 = std__ctype_char___widen_char__const(r236, t237);
  __retval233 = r238;
  char t239 = __retval233;
  return t239;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v240) {
bb241:
  struct std__basic_ostream_char__std__char_traits_char__* __os242;
  struct std__basic_ostream_char__std__char_traits_char__* __retval243;
  __os242 = v240;
  struct std__basic_ostream_char__std__char_traits_char__* t244 = __os242;
  struct std__basic_ostream_char__std__char_traits_char__* t245 = __os242;
  void** v246 = (void**)t245;
  void* v247 = *((void**)v246);
  unsigned char* cast248 = (unsigned char*)v247;
  long c249 = -24;
  unsigned char* ptr250 = &(cast248)[c249];
  long* cast251 = (long*)ptr250;
  long t252 = *cast251;
  unsigned char* cast253 = (unsigned char*)t245;
  unsigned char* ptr254 = &(cast253)[t252];
  struct std__basic_ostream_char__std__char_traits_char__* cast255 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr254;
  struct std__basic_ios_char__std__char_traits_char__* cast256 = (struct std__basic_ios_char__std__char_traits_char__*)cast255;
  char c257 = 10;
  char r258 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast256, c257);
  struct std__basic_ostream_char__std__char_traits_char__* r259 = std__ostream__put(t244, r258);
  struct std__basic_ostream_char__std__char_traits_char__* r260 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r259);
  __retval243 = r260;
  struct std__basic_ostream_char__std__char_traits_char__* t261 = __retval243;
  return t261;
}

// function: main
int main() {
bb262:
  int __retval263;
  struct Date date1264;
  struct Date date2265;
  int c266 = 0;
  __retval263 = c266;
  int c267 = 7;
  int c268 = 4;
  int c269 = 2002;
  Date__Date(&date1264, c267, c268, c269);
  int c270 = 1;
  int c271 = 1;
  int c272 = 1990;
  Date__Date(&date2265, c270, c271, c272);
  char* cast273 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r274 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast273);
  Date__print(&date1264);
  char* cast275 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r276 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast275);
  Date__print(&date2265);
  struct Date* r277 = Date__operator_(&date2265, &date1264);
  char* cast278 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r279 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast278);
  Date__print(&date2265);
  struct std__basic_ostream_char__std__char_traits_char__* r280 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c281 = 0;
  __retval263 = c281;
  int t282 = __retval263;
  return t282;
}

