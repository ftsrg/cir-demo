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
char _str[28] = "Enter an unsigned integer: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[4] = " = ";
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
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned int p1);
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
void displayBits(unsigned int p0);
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

// function: _ZNSolsEj
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v154, unsigned int v155) {
bb156:
  struct std__basic_ostream_char__std__char_traits_char__* this157;
  unsigned int __n158;
  struct std__basic_ostream_char__std__char_traits_char__* __retval159;
  this157 = v154;
  __n158 = v155;
  struct std__basic_ostream_char__std__char_traits_char__* t160 = this157;
  unsigned int t161 = __n158;
  unsigned long cast162 = (unsigned long)t161;
  struct std__basic_ostream_char__std__char_traits_char__* r163 = std__ostream__std__ostream___M_insert_unsigned_long_(t160, cast162);
  __retval159 = r163;
  struct std__basic_ostream_char__std__char_traits_char__* t164 = __retval159;
  return t164;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v165) {
bb166:
  struct std__ios_base* this167;
  long __retval168;
  this167 = v165;
  struct std__ios_base* t169 = this167;
  long t170 = t169->_M_width;
  __retval168 = t170;
  long t171 = __retval168;
  return t171;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v172, char v173) {
bb174:
  struct std__basic_ostream_char__std__char_traits_char__* __out175;
  char __c176;
  struct std__basic_ostream_char__std__char_traits_char__* __retval177;
  __out175 = v172;
  __c176 = v173;
    struct std__basic_ostream_char__std__char_traits_char__* t178 = __out175;
    void** v179 = (void**)t178;
    void* v180 = *((void**)v179);
    unsigned char* cast181 = (unsigned char*)v180;
    long c182 = -24;
    unsigned char* ptr183 = &(cast181)[c182];
    long* cast184 = (long*)ptr183;
    long t185 = *cast184;
    unsigned char* cast186 = (unsigned char*)t178;
    unsigned char* ptr187 = &(cast186)[t185];
    struct std__basic_ostream_char__std__char_traits_char__* cast188 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr187;
    struct std__ios_base* cast189 = (struct std__ios_base*)cast188;
    long r190 = std__ios_base__width___const(cast189);
    long c191 = 0;
    _Bool c192 = ((r190 != c191)) ? 1 : 0;
    if (c192) {
      struct std__basic_ostream_char__std__char_traits_char__* t193 = __out175;
      long c194 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r195 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t193, &__c176, c194);
      __retval177 = r195;
      struct std__basic_ostream_char__std__char_traits_char__* t196 = __retval177;
      return t196;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t197 = __out175;
  char t198 = __c176;
  struct std__basic_ostream_char__std__char_traits_char__* r199 = std__ostream__put(t197, t198);
  struct std__basic_ostream_char__std__char_traits_char__* t200 = __out175;
  __retval177 = t200;
  struct std__basic_ostream_char__std__char_traits_char__* t201 = __retval177;
  return t201;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v202, void* v203) {
bb204:
  struct std__basic_ostream_char__std__char_traits_char__* this205;
  void* __pf206;
  struct std__basic_ostream_char__std__char_traits_char__* __retval207;
  this205 = v202;
  __pf206 = v203;
  struct std__basic_ostream_char__std__char_traits_char__* t208 = this205;
  void* t209 = __pf206;
  struct std__basic_ostream_char__std__char_traits_char__* r210 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t209)(t208);
  __retval207 = r210;
  struct std__basic_ostream_char__std__char_traits_char__* t211 = __retval207;
  return t211;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v212) {
bb213:
  struct std__basic_ostream_char__std__char_traits_char__* __os214;
  struct std__basic_ostream_char__std__char_traits_char__* __retval215;
  __os214 = v212;
  struct std__basic_ostream_char__std__char_traits_char__* t216 = __os214;
  struct std__basic_ostream_char__std__char_traits_char__* r217 = std__ostream__flush(t216);
  __retval215 = r217;
  struct std__basic_ostream_char__std__char_traits_char__* t218 = __retval215;
  return t218;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v219) {
bb220:
  struct std__ctype_char_* __f221;
  struct std__ctype_char_* __retval222;
  __f221 = v219;
    struct std__ctype_char_* t223 = __f221;
    _Bool cast224 = (_Bool)t223;
    _Bool u225 = !cast224;
    if (u225) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t226 = __f221;
  __retval222 = t226;
  struct std__ctype_char_* t227 = __retval222;
  return t227;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v228, char v229) {
bb230:
  struct std__ctype_char_* this231;
  char __c232;
  char __retval233;
  this231 = v228;
  __c232 = v229;
  struct std__ctype_char_* t234 = this231;
    char t235 = t234->_M_widen_ok;
    _Bool cast236 = (_Bool)t235;
    if (cast236) {
      char t237 = __c232;
      unsigned char cast238 = (unsigned char)t237;
      unsigned long cast239 = (unsigned long)cast238;
      char t240 = t234->_M_widen[cast239];
      __retval233 = t240;
      char t241 = __retval233;
      return t241;
    }
  std__ctype_char____M_widen_init___const(t234);
  char t242 = __c232;
  void** v243 = (void**)t234;
  void* v244 = *((void**)v243);
  char vcall247 = (char)__VERIFIER_virtual_call_char_char(t234, 6, t242);
  __retval233 = vcall247;
  char t248 = __retval233;
  return t248;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v249, char v250) {
bb251:
  struct std__basic_ios_char__std__char_traits_char__* this252;
  char __c253;
  char __retval254;
  this252 = v249;
  __c253 = v250;
  struct std__basic_ios_char__std__char_traits_char__* t255 = this252;
  struct std__ctype_char_* t256 = t255->_M_ctype;
  struct std__ctype_char_* r257 = std__ctype_char__const__std____check_facet_std__ctype_char___(t256);
  char t258 = __c253;
  char r259 = std__ctype_char___widen_char__const(r257, t258);
  __retval254 = r259;
  char t260 = __retval254;
  return t260;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v261) {
bb262:
  struct std__basic_ostream_char__std__char_traits_char__* __os263;
  struct std__basic_ostream_char__std__char_traits_char__* __retval264;
  __os263 = v261;
  struct std__basic_ostream_char__std__char_traits_char__* t265 = __os263;
  struct std__basic_ostream_char__std__char_traits_char__* t266 = __os263;
  void** v267 = (void**)t266;
  void* v268 = *((void**)v267);
  unsigned char* cast269 = (unsigned char*)v268;
  long c270 = -24;
  unsigned char* ptr271 = &(cast269)[c270];
  long* cast272 = (long*)ptr271;
  long t273 = *cast272;
  unsigned char* cast274 = (unsigned char*)t266;
  unsigned char* ptr275 = &(cast274)[t273];
  struct std__basic_ostream_char__std__char_traits_char__* cast276 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr275;
  struct std__basic_ios_char__std__char_traits_char__* cast277 = (struct std__basic_ios_char__std__char_traits_char__*)cast276;
  char c278 = 10;
  char r279 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast277, c278);
  struct std__basic_ostream_char__std__char_traits_char__* r280 = std__ostream__put(t265, r279);
  struct std__basic_ostream_char__std__char_traits_char__* r281 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r280);
  __retval264 = r281;
  struct std__basic_ostream_char__std__char_traits_char__* t282 = __retval264;
  return t282;
}

// function: _Z11displayBitsj
void displayBits(unsigned int v283) {
bb284:
  unsigned int value285;
  int SHIFT286;
  unsigned int MASK287;
  struct std___Setw agg_tmp0288;
  value285 = v283;
  int c289 = 31;
  SHIFT286 = c289;
  unsigned int c290 = -2147483648;
  MASK287 = c290;
  int c291 = 10;
  struct std___Setw r292 = std__setw(c291);
  agg_tmp0288 = r292;
  struct std___Setw t293 = agg_tmp0288;
  struct std__basic_ostream_char__std__char_traits_char__* r294 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t293);
  unsigned int t295 = value285;
  struct std__basic_ostream_char__std__char_traits_char__* r296 = std__ostream__operator__(r294, t295);
  char* cast297 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r298 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r296, cast297);
    unsigned int i299;
    unsigned int c300 = 1;
    i299 = c300;
    while (1) {
      unsigned int t302 = i299;
      int t303 = SHIFT286;
      int c304 = 1;
      int b305 = t303 + c304;
      unsigned int cast306 = (unsigned int)b305;
      _Bool c307 = ((t302 <= cast306)) ? 1 : 0;
      if (!c307) break;
        unsigned int t308 = value285;
        unsigned int t309 = MASK287;
        unsigned int b310 = t308 & t309;
        _Bool cast311 = (_Bool)b310;
        char c312 = 49;
        char c313 = 48;
        char sel314 = cast311 ? c312 : c313;
        struct std__basic_ostream_char__std__char_traits_char__* r315 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, sel314);
        int c316 = 1;
        unsigned int t317 = value285;
        unsigned int s318 = t317 << c316;
        value285 = s318;
          unsigned int t319 = i299;
          unsigned int c320 = 8;
          unsigned int b321 = t319 % c320;
          unsigned int c322 = 0;
          _Bool c323 = ((b321 == c322)) ? 1 : 0;
          if (c323) {
            char c324 = 32;
            struct std__basic_ostream_char__std__char_traits_char__* r325 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, c324);
          }
    for_step301: ;
      unsigned int t326 = i299;
      unsigned int u327 = t326 + 1;
      i299 = u327;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r328 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: main
int main() {
bb329:
  int __retval330;
  unsigned int inputValue331;
  int c332 = 0;
  __retval330 = c332;
  char* cast333 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r334 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast333);
  struct std__basic_istream_char__std__char_traits_char__* r335 = std__istream__operator__(&_ZSt3cin, &inputValue331);
  unsigned int t336 = inputValue331;
  displayBits(t336);
  int c337 = 0;
  __retval330 = c337;
  int t338 = __retval330;
  return t338;
}

