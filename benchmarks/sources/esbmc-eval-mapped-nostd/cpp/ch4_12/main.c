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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char __const_main_string2[15] = "string literal";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[33] = "Enter the string \"hello there\": ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[13] = "string1 is: ";
char _str_2[14] = "\nstring2 is: ";
char _str_3[45] = "\nstring1 with spaces between characters is:\n";
char _str_4[14] = "\nstring1 is: ";
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
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___20ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
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

// function: _ZStrsIcSt11char_traitsIcELm20EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___20ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v103, char* v104) {
bb105:
  struct std__basic_istream_char__std__char_traits_char__* __in106;
  char* __s107;
  struct std__basic_istream_char__std__char_traits_char__* __retval108;
  __in106 = v103;
  __s107 = v104;
  struct std__basic_istream_char__std__char_traits_char__* t109 = __in106;
  char* t110 = __s107;
  char* cast111 = (char*)t110;
  long c112 = 20;
  std____istream_extract(t109, cast111, c112);
  struct std__basic_istream_char__std__char_traits_char__* t113 = __in106;
  __retval108 = t113;
  struct std__basic_istream_char__std__char_traits_char__* t114 = __retval108;
  return t114;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v115) {
bb116:
  struct std__ios_base* this117;
  long __retval118;
  this117 = v115;
  struct std__ios_base* t119 = this117;
  long t120 = t119->_M_width;
  __retval118 = t120;
  long t121 = __retval118;
  return t121;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v122, char v123) {
bb124:
  struct std__basic_ostream_char__std__char_traits_char__* __out125;
  char __c126;
  struct std__basic_ostream_char__std__char_traits_char__* __retval127;
  __out125 = v122;
  __c126 = v123;
    struct std__basic_ostream_char__std__char_traits_char__* t128 = __out125;
    void** v129 = (void**)t128;
    void* v130 = *((void**)v129);
    unsigned char* cast131 = (unsigned char*)v130;
    long c132 = -24;
    unsigned char* ptr133 = &(cast131)[c132];
    long* cast134 = (long*)ptr133;
    long t135 = *cast134;
    unsigned char* cast136 = (unsigned char*)t128;
    unsigned char* ptr137 = &(cast136)[t135];
    struct std__basic_ostream_char__std__char_traits_char__* cast138 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr137;
    struct std__ios_base* cast139 = (struct std__ios_base*)cast138;
    long r140 = std__ios_base__width___const(cast139);
    long c141 = 0;
    _Bool c142 = ((r140 != c141)) ? 1 : 0;
    if (c142) {
      struct std__basic_ostream_char__std__char_traits_char__* t143 = __out125;
      long c144 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r145 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t143, &__c126, c144);
      __retval127 = r145;
      struct std__basic_ostream_char__std__char_traits_char__* t146 = __retval127;
      return t146;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t147 = __out125;
  char t148 = __c126;
  struct std__basic_ostream_char__std__char_traits_char__* r149 = std__ostream__put(t147, t148);
  struct std__basic_ostream_char__std__char_traits_char__* t150 = __out125;
  __retval127 = t150;
  struct std__basic_ostream_char__std__char_traits_char__* t151 = __retval127;
  return t151;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v152, void* v153) {
bb154:
  struct std__basic_ostream_char__std__char_traits_char__* this155;
  void* __pf156;
  struct std__basic_ostream_char__std__char_traits_char__* __retval157;
  this155 = v152;
  __pf156 = v153;
  struct std__basic_ostream_char__std__char_traits_char__* t158 = this155;
  void* t159 = __pf156;
  struct std__basic_ostream_char__std__char_traits_char__* r160 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t159)(t158);
  __retval157 = r160;
  struct std__basic_ostream_char__std__char_traits_char__* t161 = __retval157;
  return t161;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v162) {
bb163:
  struct std__basic_ostream_char__std__char_traits_char__* __os164;
  struct std__basic_ostream_char__std__char_traits_char__* __retval165;
  __os164 = v162;
  struct std__basic_ostream_char__std__char_traits_char__* t166 = __os164;
  struct std__basic_ostream_char__std__char_traits_char__* r167 = std__ostream__flush(t166);
  __retval165 = r167;
  struct std__basic_ostream_char__std__char_traits_char__* t168 = __retval165;
  return t168;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v169) {
bb170:
  struct std__ctype_char_* __f171;
  struct std__ctype_char_* __retval172;
  __f171 = v169;
    struct std__ctype_char_* t173 = __f171;
    _Bool cast174 = (_Bool)t173;
    _Bool u175 = !cast174;
    if (u175) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t176 = __f171;
  __retval172 = t176;
  struct std__ctype_char_* t177 = __retval172;
  return t177;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v178, char v179) {
bb180:
  struct std__ctype_char_* this181;
  char __c182;
  char __retval183;
  this181 = v178;
  __c182 = v179;
  struct std__ctype_char_* t184 = this181;
    char t185 = t184->_M_widen_ok;
    _Bool cast186 = (_Bool)t185;
    if (cast186) {
      char t187 = __c182;
      unsigned char cast188 = (unsigned char)t187;
      unsigned long cast189 = (unsigned long)cast188;
      char t190 = t184->_M_widen[cast189];
      __retval183 = t190;
      char t191 = __retval183;
      return t191;
    }
  std__ctype_char____M_widen_init___const(t184);
  char t192 = __c182;
  void** v193 = (void**)t184;
  void* v194 = *((void**)v193);
  char vcall197 = (char)__VERIFIER_virtual_call_char_char(t184, 6, t192);
  __retval183 = vcall197;
  char t198 = __retval183;
  return t198;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v199, char v200) {
bb201:
  struct std__basic_ios_char__std__char_traits_char__* this202;
  char __c203;
  char __retval204;
  this202 = v199;
  __c203 = v200;
  struct std__basic_ios_char__std__char_traits_char__* t205 = this202;
  struct std__ctype_char_* t206 = t205->_M_ctype;
  struct std__ctype_char_* r207 = std__ctype_char__const__std____check_facet_std__ctype_char___(t206);
  char t208 = __c203;
  char r209 = std__ctype_char___widen_char__const(r207, t208);
  __retval204 = r209;
  char t210 = __retval204;
  return t210;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v211) {
bb212:
  struct std__basic_ostream_char__std__char_traits_char__* __os213;
  struct std__basic_ostream_char__std__char_traits_char__* __retval214;
  __os213 = v211;
  struct std__basic_ostream_char__std__char_traits_char__* t215 = __os213;
  struct std__basic_ostream_char__std__char_traits_char__* t216 = __os213;
  void** v217 = (void**)t216;
  void* v218 = *((void**)v217);
  unsigned char* cast219 = (unsigned char*)v218;
  long c220 = -24;
  unsigned char* ptr221 = &(cast219)[c220];
  long* cast222 = (long*)ptr221;
  long t223 = *cast222;
  unsigned char* cast224 = (unsigned char*)t216;
  unsigned char* ptr225 = &(cast224)[t223];
  struct std__basic_ostream_char__std__char_traits_char__* cast226 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr225;
  struct std__basic_ios_char__std__char_traits_char__* cast227 = (struct std__basic_ios_char__std__char_traits_char__*)cast226;
  char c228 = 10;
  char r229 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast227, c228);
  struct std__basic_ostream_char__std__char_traits_char__* r230 = std__ostream__put(t215, r229);
  struct std__basic_ostream_char__std__char_traits_char__* r231 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r230);
  __retval214 = r231;
  struct std__basic_ostream_char__std__char_traits_char__* t232 = __retval214;
  return t232;
}

// function: main
int main() {
bb233:
  int __retval234;
  char string1235[20];
  char string2236[15];
  int c237 = 0;
  __retval234 = c237;
  // array copy
  __builtin_memcpy(string2236, __const_main_string2, (unsigned long)15 * sizeof(__const_main_string2[0]));
  char* cast238 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast238);
  struct std__basic_istream_char__std__char_traits_char__* r240 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___20ul__std__basic_istream_char__std__char_traits_char______char_(&_ZSt3cin, string1235);
  char* cast241 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r242 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast241);
  char* cast243 = (char*)&(string1235);
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r242, cast243);
  char* cast245 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r246 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r244, cast245);
  char* cast247 = (char*)&(string2236);
  struct std__basic_ostream_char__std__char_traits_char__* r248 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r246, cast247);
  char* cast249 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r250 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast249);
    int i251;
    int c252 = 0;
    i251 = c252;
    while (1) {
      int t254 = i251;
      long cast255 = (long)t254;
      char t256 = string1235[cast255];
      int cast257 = (int)t256;
      int c258 = 0;
      _Bool c259 = ((cast257 != c258)) ? 1 : 0;
      if (!c259) break;
      int t260 = i251;
      long cast261 = (long)t260;
      char t262 = string1235[cast261];
      struct std__basic_ostream_char__std__char_traits_char__* r263 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, t262);
      char c264 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* r265 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r263, c264);
    for_step253: ;
      int t266 = i251;
      int u267 = t266 + 1;
      i251 = u267;
    }
  struct std__basic_istream_char__std__char_traits_char__* r268 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___20ul__std__basic_istream_char__std__char_traits_char______char_(&_ZSt3cin, string1235);
  char* cast269 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r270 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast269);
  char* cast271 = (char*)&(string1235);
  struct std__basic_ostream_char__std__char_traits_char__* r272 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r270, cast271);
  struct std__basic_ostream_char__std__char_traits_char__* r273 = std__ostream__operator___std__ostream_____(r272, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c274 = 0;
  __retval234 = c274;
  int t275 = __retval234;
  return t275;
}

