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
struct HugeInt { short integer[30]; };
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
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[30] = "99999999999999999999999999999";
char _str_1[2] = "1";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[7] = "n1 is ";
char _str_3[8] = "\nn2 is ";
char _str_4[8] = "\nn3 is ";
char _str_5[8] = "\nn4 is ";
char _str_6[8] = "\nn5 is ";
char _str_7[3] = "\n\n";
char _str_8[4] = " + ";
char _str_9[4] = " = ";
char _str_10[4] = "\n= ";
char _str_11[6] = "10000";
extern void HugeInt__HugeInt_2(struct HugeInt* p0, long p1);
extern void HugeInt__HugeInt(struct HugeInt* p0, char* p1);
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
extern struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct HugeInt* p1);
extern struct HugeInt HugeInt__operator__3(struct HugeInt* p0, struct HugeInt* p1);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
struct HugeInt* HugeInt__operator_(struct HugeInt* p0, struct HugeInt* p1);
extern struct HugeInt HugeInt__operator__4(struct HugeInt* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct HugeInt HugeInt__operator__2(struct HugeInt* p0, char* p1);
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

// function: _ZN7HugeIntaSEOS_
struct HugeInt* HugeInt__operator_(struct HugeInt* v103, struct HugeInt* v104) {
bb105:
  struct HugeInt* this106;
  struct HugeInt* unnamed107;
  struct HugeInt* __retval108;
  this106 = v103;
  unnamed107 = v104;
  struct HugeInt* t109 = this106;
  void* cast110 = (void*)&(t109->integer);
  struct HugeInt* t111 = unnamed107;
  void* cast112 = (void*)&(t111->integer);
  unsigned long c113 = 60;
  void* r114 = memcpy(cast110, cast112, c113);
  __retval108 = t109;
  struct HugeInt* t115 = __retval108;
  return t115;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v116, void* v117) {
bb118:
  struct std__basic_ostream_char__std__char_traits_char__* this119;
  void* __pf120;
  struct std__basic_ostream_char__std__char_traits_char__* __retval121;
  this119 = v116;
  __pf120 = v117;
  struct std__basic_ostream_char__std__char_traits_char__* t122 = this119;
  void* t123 = __pf120;
  struct std__basic_ostream_char__std__char_traits_char__* r124 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t123)(t122);
  __retval121 = r124;
  struct std__basic_ostream_char__std__char_traits_char__* t125 = __retval121;
  return t125;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v126) {
bb127:
  struct std__basic_ostream_char__std__char_traits_char__* __os128;
  struct std__basic_ostream_char__std__char_traits_char__* __retval129;
  __os128 = v126;
  struct std__basic_ostream_char__std__char_traits_char__* t130 = __os128;
  struct std__basic_ostream_char__std__char_traits_char__* r131 = std__ostream__flush(t130);
  __retval129 = r131;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = __retval129;
  return t132;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v133) {
bb134:
  struct std__ctype_char_* __f135;
  struct std__ctype_char_* __retval136;
  __f135 = v133;
    struct std__ctype_char_* t137 = __f135;
    _Bool cast138 = (_Bool)t137;
    _Bool u139 = !cast138;
    if (u139) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t140 = __f135;
  __retval136 = t140;
  struct std__ctype_char_* t141 = __retval136;
  return t141;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v142, char v143) {
bb144:
  struct std__ctype_char_* this145;
  char __c146;
  char __retval147;
  this145 = v142;
  __c146 = v143;
  struct std__ctype_char_* t148 = this145;
    char t149 = t148->_M_widen_ok;
    _Bool cast150 = (_Bool)t149;
    if (cast150) {
      char t151 = __c146;
      unsigned char cast152 = (unsigned char)t151;
      unsigned long cast153 = (unsigned long)cast152;
      char t154 = t148->_M_widen[cast153];
      __retval147 = t154;
      char t155 = __retval147;
      return t155;
    }
  std__ctype_char____M_widen_init___const(t148);
  char t156 = __c146;
  void** v157 = (void**)t148;
  void* v158 = *((void**)v157);
  char vcall161 = (char)__VERIFIER_virtual_call_char_char(t148, 6, t156);
  __retval147 = vcall161;
  char t162 = __retval147;
  return t162;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v163, char v164) {
bb165:
  struct std__basic_ios_char__std__char_traits_char__* this166;
  char __c167;
  char __retval168;
  this166 = v163;
  __c167 = v164;
  struct std__basic_ios_char__std__char_traits_char__* t169 = this166;
  struct std__ctype_char_* t170 = t169->_M_ctype;
  struct std__ctype_char_* r171 = std__ctype_char__const__std____check_facet_std__ctype_char___(t170);
  char t172 = __c167;
  char r173 = std__ctype_char___widen_char__const(r171, t172);
  __retval168 = r173;
  char t174 = __retval168;
  return t174;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v175) {
bb176:
  struct std__basic_ostream_char__std__char_traits_char__* __os177;
  struct std__basic_ostream_char__std__char_traits_char__* __retval178;
  __os177 = v175;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __os177;
  struct std__basic_ostream_char__std__char_traits_char__* t180 = __os177;
  void** v181 = (void**)t180;
  void* v182 = *((void**)v181);
  unsigned char* cast183 = (unsigned char*)v182;
  long c184 = -24;
  unsigned char* ptr185 = &(cast183)[c184];
  long* cast186 = (long*)ptr185;
  long t187 = *cast186;
  unsigned char* cast188 = (unsigned char*)t180;
  unsigned char* ptr189 = &(cast188)[t187];
  struct std__basic_ostream_char__std__char_traits_char__* cast190 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr189;
  struct std__basic_ios_char__std__char_traits_char__* cast191 = (struct std__basic_ios_char__std__char_traits_char__*)cast190;
  char c192 = 10;
  char r193 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast191, c192);
  struct std__basic_ostream_char__std__char_traits_char__* r194 = std__ostream__put(t179, r193);
  struct std__basic_ostream_char__std__char_traits_char__* r195 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r194);
  __retval178 = r195;
  struct std__basic_ostream_char__std__char_traits_char__* t196 = __retval178;
  return t196;
}

// function: main
int main() {
bb197:
  int __retval198;
  struct HugeInt n1199;
  struct HugeInt n2200;
  struct HugeInt n3201;
  struct HugeInt n4202;
  struct HugeInt n5203;
  struct HugeInt ref_tmp0204;
  struct HugeInt ref_tmp1205;
  struct HugeInt ref_tmp2206;
  struct HugeInt ref_tmp3207;
  int c208 = 0;
  __retval198 = c208;
  long c209 = 7654321;
  HugeInt__HugeInt_2(&n1199, c209);
  long c210 = 7891234;
  HugeInt__HugeInt_2(&n2200, c210);
  char* cast211 = (char*)&(_str);
  HugeInt__HugeInt(&n3201, cast211);
  char* cast212 = (char*)&(_str_1);
  HugeInt__HugeInt(&n4202, cast212);
  long c213 = 0;
  HugeInt__HugeInt_2(&n5203, c213);
  char* cast214 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r215 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast214);
  struct std__basic_ostream_char__std__char_traits_char__* r216 = operator__(r215, &n1199);
  char* cast217 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r218 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r216, cast217);
  struct std__basic_ostream_char__std__char_traits_char__* r219 = operator__(r218, &n2200);
  char* cast220 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r221 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r219, cast220);
  struct std__basic_ostream_char__std__char_traits_char__* r222 = operator__(r221, &n3201);
  char* cast223 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r224 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r222, cast223);
  struct std__basic_ostream_char__std__char_traits_char__* r225 = operator__(r224, &n4202);
  char* cast226 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r227 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r225, cast226);
  struct std__basic_ostream_char__std__char_traits_char__* r228 = operator__(r227, &n5203);
  char* cast229 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r230 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r228, cast229);
  struct HugeInt r231 = HugeInt__operator__3(&n1199, &n2200);
  ref_tmp0204 = r231;
  struct HugeInt* r232 = HugeInt__operator_(&n5203, &ref_tmp0204);
  struct std__basic_ostream_char__std__char_traits_char__* r233 = operator__(&_ZSt4cout, &n1199);
  char* cast234 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r235 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r233, cast234);
  struct std__basic_ostream_char__std__char_traits_char__* r236 = operator__(r235, &n2200);
  char* cast237 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r238 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r236, cast237);
  struct std__basic_ostream_char__std__char_traits_char__* r239 = operator__(r238, &n5203);
  char* cast240 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r241 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r239, cast240);
  struct std__basic_ostream_char__std__char_traits_char__* r242 = operator__(&_ZSt4cout, &n3201);
  char* cast243 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r242, cast243);
  struct std__basic_ostream_char__std__char_traits_char__* r245 = operator__(r244, &n4202);
  char* cast246 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r247 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r245, cast246);
  struct HugeInt r248 = HugeInt__operator__3(&n3201, &n4202);
  ref_tmp1205 = r248;
  struct std__basic_ostream_char__std__char_traits_char__* r249 = operator__(r247, &ref_tmp1205);
  char* cast250 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r251 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r249, cast250);
  int c252 = 9;
  struct HugeInt r253 = HugeInt__operator__4(&n1199, c252);
  ref_tmp2206 = r253;
  struct HugeInt* r254 = HugeInt__operator_(&n5203, &ref_tmp2206);
  struct std__basic_ostream_char__std__char_traits_char__* r255 = operator__(&_ZSt4cout, &n1199);
  char* cast256 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r257 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r255, cast256);
  int c258 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* r259 = std__ostream__operator__(r257, c258);
  char* cast260 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r261 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r259, cast260);
  struct std__basic_ostream_char__std__char_traits_char__* r262 = operator__(r261, &n5203);
  char* cast263 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r264 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r262, cast263);
  char* cast265 = (char*)&(_str_11);
  struct HugeInt r266 = HugeInt__operator__2(&n2200, cast265);
  ref_tmp3207 = r266;
  struct HugeInt* r267 = HugeInt__operator_(&n5203, &ref_tmp3207);
  struct std__basic_ostream_char__std__char_traits_char__* r268 = operator__(&_ZSt4cout, &n2200);
  char* cast269 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r270 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r268, cast269);
  char* cast271 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* r272 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r270, cast271);
  char* cast273 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r274 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r272, cast273);
  struct std__basic_ostream_char__std__char_traits_char__* r275 = operator__(r274, &n5203);
  struct std__basic_ostream_char__std__char_traits_char__* r276 = std__ostream__operator___std__ostream_____(r275, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c277 = 0;
  __retval198 = c277;
  int t278 = __retval198;
  return t278;
}

