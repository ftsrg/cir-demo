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
char _str[23] = "According to islower:\n";
char _str_1[7] = "p is a";
char _str_2[11] = "p is not a";
char _str_3[19] = " lowercase letter\n";
char _str_4[7] = "P is a";
char _str_5[11] = "P is not a";
char _str_6[7] = "5 is a";
char _str_7[11] = "5 is not a";
char _str_8[7] = "! is a";
char _str_9[11] = "! is not a";
char _str_10[24] = "\nAccording to isupper:\n";
char _str_11[8] = "D is an";
char _str_12[12] = "D is not an";
char _str_13[19] = " uppercase letter\n";
char _str_14[8] = "d is an";
char _str_15[12] = "d is not an";
char _str_16[8] = "8 is an";
char _str_17[12] = "8 is not an";
char _str_18[8] = "$ is an";
char _str_19[12] = "$ is not an";
char _str_20[30] = "\nu converted to uppercase is ";
char _str_21[30] = "\n7 converted to uppercase is ";
char _str_22[30] = "\n$ converted to uppercase is ";
char _str_23[30] = "\nL converted to lowercase is ";
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
extern int islower(int p0);
extern int isupper(int p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern int toupper(int p0);
extern int tolower(int p0);
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

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v103) {
bb104:
  struct std__ios_base* this105;
  long __retval106;
  this105 = v103;
  struct std__ios_base* t107 = this105;
  long t108 = t107->_M_width;
  __retval106 = t108;
  long t109 = __retval106;
  return t109;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v110, char v111) {
bb112:
  struct std__basic_ostream_char__std__char_traits_char__* __out113;
  char __c114;
  struct std__basic_ostream_char__std__char_traits_char__* __retval115;
  __out113 = v110;
  __c114 = v111;
    struct std__basic_ostream_char__std__char_traits_char__* t116 = __out113;
    void** v117 = (void**)t116;
    void* v118 = *((void**)v117);
    unsigned char* cast119 = (unsigned char*)v118;
    long c120 = -24;
    unsigned char* ptr121 = &(cast119)[c120];
    long* cast122 = (long*)ptr121;
    long t123 = *cast122;
    unsigned char* cast124 = (unsigned char*)t116;
    unsigned char* ptr125 = &(cast124)[t123];
    struct std__basic_ostream_char__std__char_traits_char__* cast126 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr125;
    struct std__ios_base* cast127 = (struct std__ios_base*)cast126;
    long r128 = std__ios_base__width___const(cast127);
    long c129 = 0;
    _Bool c130 = ((r128 != c129)) ? 1 : 0;
    if (c130) {
      struct std__basic_ostream_char__std__char_traits_char__* t131 = __out113;
      long c132 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r133 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t131, &__c114, c132);
      __retval115 = r133;
      struct std__basic_ostream_char__std__char_traits_char__* t134 = __retval115;
      return t134;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __out113;
  char t136 = __c114;
  struct std__basic_ostream_char__std__char_traits_char__* r137 = std__ostream__put(t135, t136);
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __out113;
  __retval115 = t138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval115;
  return t139;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v140, void* v141) {
bb142:
  struct std__basic_ostream_char__std__char_traits_char__* this143;
  void* __pf144;
  struct std__basic_ostream_char__std__char_traits_char__* __retval145;
  this143 = v140;
  __pf144 = v141;
  struct std__basic_ostream_char__std__char_traits_char__* t146 = this143;
  void* t147 = __pf144;
  struct std__basic_ostream_char__std__char_traits_char__* r148 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t147)(t146);
  __retval145 = r148;
  struct std__basic_ostream_char__std__char_traits_char__* t149 = __retval145;
  return t149;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v150) {
bb151:
  struct std__basic_ostream_char__std__char_traits_char__* __os152;
  struct std__basic_ostream_char__std__char_traits_char__* __retval153;
  __os152 = v150;
  struct std__basic_ostream_char__std__char_traits_char__* t154 = __os152;
  struct std__basic_ostream_char__std__char_traits_char__* r155 = std__ostream__flush(t154);
  __retval153 = r155;
  struct std__basic_ostream_char__std__char_traits_char__* t156 = __retval153;
  return t156;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v157) {
bb158:
  struct std__ctype_char_* __f159;
  struct std__ctype_char_* __retval160;
  __f159 = v157;
    struct std__ctype_char_* t161 = __f159;
    _Bool cast162 = (_Bool)t161;
    _Bool u163 = !cast162;
    if (u163) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t164 = __f159;
  __retval160 = t164;
  struct std__ctype_char_* t165 = __retval160;
  return t165;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v166, char v167) {
bb168:
  struct std__ctype_char_* this169;
  char __c170;
  char __retval171;
  this169 = v166;
  __c170 = v167;
  struct std__ctype_char_* t172 = this169;
    char t173 = t172->_M_widen_ok;
    _Bool cast174 = (_Bool)t173;
    if (cast174) {
      char t175 = __c170;
      unsigned char cast176 = (unsigned char)t175;
      unsigned long cast177 = (unsigned long)cast176;
      char t178 = t172->_M_widen[cast177];
      __retval171 = t178;
      char t179 = __retval171;
      return t179;
    }
  std__ctype_char____M_widen_init___const(t172);
  char t180 = __c170;
  void** v181 = (void**)t172;
  void* v182 = *((void**)v181);
  char vcall185 = (char)__VERIFIER_virtual_call_char_char(t172, 6, t180);
  __retval171 = vcall185;
  char t186 = __retval171;
  return t186;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v187, char v188) {
bb189:
  struct std__basic_ios_char__std__char_traits_char__* this190;
  char __c191;
  char __retval192;
  this190 = v187;
  __c191 = v188;
  struct std__basic_ios_char__std__char_traits_char__* t193 = this190;
  struct std__ctype_char_* t194 = t193->_M_ctype;
  struct std__ctype_char_* r195 = std__ctype_char__const__std____check_facet_std__ctype_char___(t194);
  char t196 = __c191;
  char r197 = std__ctype_char___widen_char__const(r195, t196);
  __retval192 = r197;
  char t198 = __retval192;
  return t198;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v199) {
bb200:
  struct std__basic_ostream_char__std__char_traits_char__* __os201;
  struct std__basic_ostream_char__std__char_traits_char__* __retval202;
  __os201 = v199;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __os201;
  struct std__basic_ostream_char__std__char_traits_char__* t204 = __os201;
  void** v205 = (void**)t204;
  void* v206 = *((void**)v205);
  unsigned char* cast207 = (unsigned char*)v206;
  long c208 = -24;
  unsigned char* ptr209 = &(cast207)[c208];
  long* cast210 = (long*)ptr209;
  long t211 = *cast210;
  unsigned char* cast212 = (unsigned char*)t204;
  unsigned char* ptr213 = &(cast212)[t211];
  struct std__basic_ostream_char__std__char_traits_char__* cast214 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr213;
  struct std__basic_ios_char__std__char_traits_char__* cast215 = (struct std__basic_ios_char__std__char_traits_char__*)cast214;
  char c216 = 10;
  char r217 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast215, c216);
  struct std__basic_ostream_char__std__char_traits_char__* r218 = std__ostream__put(t203, r217);
  struct std__basic_ostream_char__std__char_traits_char__* r219 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r218);
  __retval202 = r219;
  struct std__basic_ostream_char__std__char_traits_char__* t220 = __retval202;
  return t220;
}

// function: main
int main() {
bb221:
  int __retval222;
  int c223 = 0;
  __retval222 = c223;
  char* cast224 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r225 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast224);
  int c226 = 112;
  int r227 = islower(c226);
  _Bool cast228 = (_Bool)r227;
  char* cast229 = (char*)&(_str_1);
  char* cast230 = (char*)&(_str_2);
  char* sel231 = cast228 ? cast229 : cast230;
  struct std__basic_ostream_char__std__char_traits_char__* r232 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r225, sel231);
  char* cast233 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r234 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r232, cast233);
  int c235 = 80;
  int r236 = islower(c235);
  _Bool cast237 = (_Bool)r236;
  char* cast238 = (char*)&(_str_4);
  char* cast239 = (char*)&(_str_5);
  char* sel240 = cast237 ? cast238 : cast239;
  struct std__basic_ostream_char__std__char_traits_char__* r241 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r234, sel240);
  char* cast242 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r243 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r241, cast242);
  int c244 = 53;
  int r245 = islower(c244);
  _Bool cast246 = (_Bool)r245;
  char* cast247 = (char*)&(_str_6);
  char* cast248 = (char*)&(_str_7);
  char* sel249 = cast246 ? cast247 : cast248;
  struct std__basic_ostream_char__std__char_traits_char__* r250 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r243, sel249);
  char* cast251 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r252 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r250, cast251);
  int c253 = 33;
  int r254 = islower(c253);
  _Bool cast255 = (_Bool)r254;
  char* cast256 = (char*)&(_str_8);
  char* cast257 = (char*)&(_str_9);
  char* sel258 = cast255 ? cast256 : cast257;
  struct std__basic_ostream_char__std__char_traits_char__* r259 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r252, sel258);
  char* cast260 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r261 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r259, cast260);
  char* cast262 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r263 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast262);
  int c264 = 68;
  int r265 = isupper(c264);
  _Bool cast266 = (_Bool)r265;
  char* cast267 = (char*)&(_str_11);
  char* cast268 = (char*)&(_str_12);
  char* sel269 = cast266 ? cast267 : cast268;
  struct std__basic_ostream_char__std__char_traits_char__* r270 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r263, sel269);
  char* cast271 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* r272 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r270, cast271);
  int c273 = 100;
  int r274 = isupper(c273);
  _Bool cast275 = (_Bool)r274;
  char* cast276 = (char*)&(_str_14);
  char* cast277 = (char*)&(_str_15);
  char* sel278 = cast275 ? cast276 : cast277;
  struct std__basic_ostream_char__std__char_traits_char__* r279 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r272, sel278);
  char* cast280 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* r281 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r279, cast280);
  int c282 = 56;
  int r283 = isupper(c282);
  _Bool cast284 = (_Bool)r283;
  char* cast285 = (char*)&(_str_16);
  char* cast286 = (char*)&(_str_17);
  char* sel287 = cast284 ? cast285 : cast286;
  struct std__basic_ostream_char__std__char_traits_char__* r288 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r281, sel287);
  char* cast289 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* r290 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r288, cast289);
  int c291 = 36;
  int r292 = isupper(c291);
  _Bool cast293 = (_Bool)r292;
  char* cast294 = (char*)&(_str_18);
  char* cast295 = (char*)&(_str_19);
  char* sel296 = cast293 ? cast294 : cast295;
  struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r290, sel296);
  char* cast298 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* r299 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r297, cast298);
  char* cast300 = (char*)&(_str_20);
  struct std__basic_ostream_char__std__char_traits_char__* r301 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast300);
  int c302 = 117;
  int r303 = toupper(c302);
  char cast304 = (char)r303;
  struct std__basic_ostream_char__std__char_traits_char__* r305 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r301, cast304);
  char* cast306 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* r307 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r305, cast306);
  int c308 = 55;
  int r309 = toupper(c308);
  char cast310 = (char)r309;
  struct std__basic_ostream_char__std__char_traits_char__* r311 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r307, cast310);
  char* cast312 = (char*)&(_str_22);
  struct std__basic_ostream_char__std__char_traits_char__* r313 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r311, cast312);
  int c314 = 36;
  int r315 = toupper(c314);
  char cast316 = (char)r315;
  struct std__basic_ostream_char__std__char_traits_char__* r317 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r313, cast316);
  char* cast318 = (char*)&(_str_23);
  struct std__basic_ostream_char__std__char_traits_char__* r319 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r317, cast318);
  int c320 = 76;
  int r321 = tolower(c320);
  char cast322 = (char)r321;
  struct std__basic_ostream_char__std__char_traits_char__* r323 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r319, cast322);
  struct std__basic_ostream_char__std__char_traits_char__* r324 = std__ostream__operator___std__ostream_____(r323, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c325 = 0;
  __retval222 = c325;
  int t326 = __retval222;
  return t326;
}

