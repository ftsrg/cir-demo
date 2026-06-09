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
struct std__ios_base { void* __field0; long __field1; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[28] = "Default is right justified:";
char _str_1[36] = "\n\nUse std::left to left justify x:\n";
char _str_2[38] = "\n\nUse std::right to right justify x:\n";
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__left(struct std__ios_base* p0);
struct std__ios_base* std__right(struct std__ios_base* p0);
int main();

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v0, long v1) {
bb2:
  struct std__ios_base* this3;
  long __wide4;
  long __retval5;
  long __old6;
  this3 = v0;
  __wide4 = v1;
  struct std__ios_base* t7 = this3;
  long t8 = t7->_M_width;
  __old6 = t8;
  long t9 = __wide4;
  t7->_M_width = t9;
  long t10 = __old6;
  __retval5 = t10;
  long t11 = __retval5;
  return t11;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v12, struct std___Setw v13) {
bb14:
  struct std__basic_ostream_char__std__char_traits_char__* __os15;
  struct std___Setw __f16;
  struct std__basic_ostream_char__std__char_traits_char__* __retval17;
  __os15 = v12;
  __f16 = v13;
  struct std__basic_ostream_char__std__char_traits_char__* t18 = __os15;
  void** v19 = (void**)t18;
  void* v20 = *((void**)v19);
  unsigned char* cast21 = (unsigned char*)v20;
  long c22 = -24;
  unsigned char* ptr23 = &(cast21)[c22];
  long* cast24 = (long*)ptr23;
  long t25 = *cast24;
  unsigned char* cast26 = (unsigned char*)t18;
  unsigned char* ptr27 = &(cast26)[t25];
  struct std__basic_ostream_char__std__char_traits_char__* cast28 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr27;
  struct std__ios_base* cast29 = (struct std__ios_base*)cast28;
  int t30 = __f16._M_n;
  long cast31 = (long)t30;
  long r32 = std__ios_base__width(cast29, cast31);
  struct std__basic_ostream_char__std__char_traits_char__* t33 = __os15;
  __retval17 = t33;
  struct std__basic_ostream_char__std__char_traits_char__* t34 = __retval17;
  return t34;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v35, int v36) {
bb37:
  int __a38;
  int __b39;
  int __retval40;
  __a38 = v35;
  __b39 = v36;
  int t41 = __a38;
  int t42 = __b39;
  int b43 = t41 | t42;
  __retval40 = b43;
  int t44 = __retval40;
  return t44;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v45) {
bb46:
  struct std__basic_ios_char__std__char_traits_char__* this47;
  int __retval48;
  this47 = v45;
  struct std__basic_ios_char__std__char_traits_char__* t49 = this47;
  struct std__ios_base* base50 = (struct std__ios_base*)((char *)t49 + 0);
  int t51 = base50->_M_streambuf_state;
  __retval48 = t51;
  int t52 = __retval48;
  return t52;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v53, int v54) {
bb55:
  struct std__basic_ios_char__std__char_traits_char__* this56;
  int __state57;
  this56 = v53;
  __state57 = v54;
  struct std__basic_ios_char__std__char_traits_char__* t58 = this56;
  int r59 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t58);
  int t60 = __state57;
  int r61 = std__operator__3(r59, t60);
  std__basic_ios_char__std__char_traits_char_____clear(t58, r61);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb62:
  _Bool __retval63;
    _Bool c64 = 0;
    __retval63 = c64;
    _Bool t65 = __retval63;
    return t65;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v66, char* v67) {
bb68:
  char* __c169;
  char* __c270;
  _Bool __retval71;
  __c169 = v66;
  __c270 = v67;
  char* t72 = __c169;
  char t73 = *t72;
  int cast74 = (int)t73;
  char* t75 = __c270;
  char t76 = *t75;
  int cast77 = (int)t76;
  _Bool c78 = ((cast74 == cast77)) ? 1 : 0;
  __retval71 = c78;
  _Bool t79 = __retval71;
  return t79;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v80) {
bb81:
  char* __p82;
  unsigned long __retval83;
  unsigned long __i84;
  __p82 = v80;
  unsigned long c85 = 0;
  __i84 = c85;
    char ref_tmp086;
    while (1) {
      unsigned long t87 = __i84;
      char* t88 = __p82;
      char* ptr89 = &(t88)[t87];
      char c90 = 0;
      ref_tmp086 = c90;
      _Bool r91 = __gnu_cxx__char_traits_char___eq(ptr89, &ref_tmp086);
      _Bool u92 = !r91;
      if (!u92) break;
      unsigned long t93 = __i84;
      unsigned long u94 = t93 + 1;
      __i84 = u94;
    }
  unsigned long t95 = __i84;
  __retval83 = t95;
  unsigned long t96 = __retval83;
  return t96;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v97) {
bb98:
  char* __s99;
  unsigned long __retval100;
  __s99 = v97;
    _Bool r101 = std____is_constant_evaluated();
    if (r101) {
      char* t102 = __s99;
      unsigned long r103 = __gnu_cxx__char_traits_char___length(t102);
      __retval100 = r103;
      unsigned long t104 = __retval100;
      return t104;
    }
  char* t105 = __s99;
  unsigned long r106 = strlen(t105);
  __retval100 = r106;
  unsigned long t107 = __retval100;
  return t107;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v108, char* v109) {
bb110:
  struct std__basic_ostream_char__std__char_traits_char__* __out111;
  char* __s112;
  struct std__basic_ostream_char__std__char_traits_char__* __retval113;
  __out111 = v108;
  __s112 = v109;
    char* t114 = __s112;
    _Bool cast115 = (_Bool)t114;
    _Bool u116 = !cast115;
    if (u116) {
      struct std__basic_ostream_char__std__char_traits_char__* t117 = __out111;
      void** v118 = (void**)t117;
      void* v119 = *((void**)v118);
      unsigned char* cast120 = (unsigned char*)v119;
      long c121 = -24;
      unsigned char* ptr122 = &(cast120)[c121];
      long* cast123 = (long*)ptr122;
      long t124 = *cast123;
      unsigned char* cast125 = (unsigned char*)t117;
      unsigned char* ptr126 = &(cast125)[t124];
      struct std__basic_ostream_char__std__char_traits_char__* cast127 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr126;
      struct std__basic_ios_char__std__char_traits_char__* cast128 = (struct std__basic_ios_char__std__char_traits_char__*)cast127;
      int t129 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast128, t129);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t130 = __out111;
      char* t131 = __s112;
      char* t132 = __s112;
      unsigned long r133 = std__char_traits_char___length(t132);
      long cast134 = (long)r133;
      struct std__basic_ostream_char__std__char_traits_char__* r135 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t130, t131, cast134);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __out111;
  __retval113 = t136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval113;
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

// function: _ZSt4setwi
struct std___Setw std__setw(int v219) {
bb220:
  int __n221;
  struct std___Setw __retval222;
  __n221 = v219;
  int t223 = __n221;
  __retval222._M_n = t223;
  struct std___Setw t224 = __retval222;
  return t224;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v225, void* v226) {
bb227:
  struct std__basic_ostream_char__std__char_traits_char__* this228;
  void* __pf229;
  struct std__basic_ostream_char__std__char_traits_char__* __retval230;
  this228 = v225;
  __pf229 = v226;
  struct std__basic_ostream_char__std__char_traits_char__* t231 = this228;
  void* t232 = __pf229;
  void** v233 = (void**)t231;
  void* v234 = *((void**)v233);
  unsigned char* cast235 = (unsigned char*)v234;
  long c236 = -24;
  unsigned char* ptr237 = &(cast235)[c236];
  long* cast238 = (long*)ptr237;
  long t239 = *cast238;
  unsigned char* cast240 = (unsigned char*)t231;
  unsigned char* ptr241 = &(cast240)[t239];
  struct std__basic_ostream_char__std__char_traits_char__* cast242 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr241;
  struct std__ios_base* cast243 = (struct std__ios_base*)cast242;
  struct std__ios_base* r244 = ((struct std__ios_base* (*)(struct std__ios_base*))t232)(cast243);
  __retval230 = t231;
  struct std__basic_ostream_char__std__char_traits_char__* t245 = __retval230;
  return t245;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v246, int v247) {
bb248:
  int* __a249;
  int __b250;
  int* __retval251;
  __a249 = v246;
  __b250 = v247;
  int* t252 = __a249;
  int t253 = *t252;
  int t254 = __b250;
  int r255 = std__operator_(t253, t254);
  int* t256 = __a249;
  *t256 = r255;
  __retval251 = t256;
  int* t257 = __retval251;
  return t257;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v258) {
bb259:
  int __a260;
  int __retval261;
  __a260 = v258;
  int t262 = __a260;
  int u263 = ~t262;
  __retval261 = u263;
  int t264 = __retval261;
  return t264;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v265, int v266) {
bb267:
  int __a268;
  int __b269;
  int __retval270;
  __a268 = v265;
  __b269 = v266;
  int t271 = __a268;
  int t272 = __b269;
  int b273 = t271 | t272;
  __retval270 = b273;
  int t274 = __retval270;
  return t274;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v275, int v276) {
bb277:
  int* __a278;
  int __b279;
  int* __retval280;
  __a278 = v275;
  __b279 = v276;
  int* t281 = __a278;
  int t282 = *t281;
  int t283 = __b279;
  int r284 = std__operator__4(t282, t283);
  int* t285 = __a278;
  *t285 = r284;
  __retval280 = t285;
  int* t286 = __retval280;
  return t286;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v287, int v288) {
bb289:
  int __a290;
  int __b291;
  int __retval292;
  __a290 = v287;
  __b291 = v288;
  int t293 = __a290;
  int t294 = __b291;
  int b295 = t293 & t294;
  __retval292 = b295;
  int t296 = __retval292;
  return t296;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v297, int v298, int v299) {
bb300:
  struct std__ios_base* this301;
  int __fmtfl302;
  int __mask303;
  int __retval304;
  int __old305;
  this301 = v297;
  __fmtfl302 = v298;
  __mask303 = v299;
  struct std__ios_base* t306 = this301;
  int t307 = t306->_M_flags;
  __old305 = t307;
  int t308 = __mask303;
  int r309 = std__operator__2(t308);
  int* r310 = std__operator__(&t306->_M_flags, r309);
  int t311 = __fmtfl302;
  int t312 = __mask303;
  int r313 = std__operator_(t311, t312);
  int* r314 = std__operator___2(&t306->_M_flags, r313);
  int t315 = __old305;
  __retval304 = t315;
  int t316 = __retval304;
  return t316;
}

// function: _ZSt4leftRSt8ios_base
struct std__ios_base* std__left(struct std__ios_base* v317) {
bb318:
  struct std__ios_base* __base319;
  struct std__ios_base* __retval320;
  __base319 = v317;
  struct std__ios_base* t321 = __base319;
  int t322 = _ZNSt8ios_base4leftE_const;
  int t323 = _ZNSt8ios_base11adjustfieldE_const;
  int r324 = std__ios_base__setf(t321, t322, t323);
  struct std__ios_base* t325 = __base319;
  __retval320 = t325;
  struct std__ios_base* t326 = __retval320;
  return t326;
}

// function: _ZSt5rightRSt8ios_base
struct std__ios_base* std__right(struct std__ios_base* v327) {
bb328:
  struct std__ios_base* __base329;
  struct std__ios_base* __retval330;
  __base329 = v327;
  struct std__ios_base* t331 = __base329;
  int t332 = _ZNSt8ios_base5rightE_const;
  int t333 = _ZNSt8ios_base11adjustfieldE_const;
  int r334 = std__ios_base__setf(t331, t332, t333);
  struct std__ios_base* t335 = __base329;
  __retval330 = t335;
  struct std__ios_base* t336 = __retval330;
  return t336;
}

// function: main
int main() {
bb337:
  int __retval338;
  int x339;
  struct std___Setw agg_tmp0340;
  struct std___Setw agg_tmp1341;
  struct std___Setw agg_tmp2342;
  int c343 = 0;
  __retval338 = c343;
  int c344 = 12345;
  x339 = c344;
  char* cast345 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r346 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast345);
  struct std__basic_ostream_char__std__char_traits_char__* r347 = std__ostream__operator___std__ostream_____(r346, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c348 = 10;
  struct std___Setw r349 = std__setw(c348);
  agg_tmp0340 = r349;
  struct std___Setw t350 = agg_tmp0340;
  struct std__basic_ostream_char__std__char_traits_char__* r351 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r347, t350);
  int t352 = x339;
  struct std__basic_ostream_char__std__char_traits_char__* r353 = std__ostream__operator__(r351, t352);
  char* cast354 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r355 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast354);
  struct std__basic_ostream_char__std__char_traits_char__* r356 = std__ostream__operator___std__ios_base_____(r355, &std__left);
  int c357 = 10;
  struct std___Setw r358 = std__setw(c357);
  agg_tmp1341 = r358;
  struct std___Setw t359 = agg_tmp1341;
  struct std__basic_ostream_char__std__char_traits_char__* r360 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r356, t359);
  int t361 = x339;
  struct std__basic_ostream_char__std__char_traits_char__* r362 = std__ostream__operator__(r360, t361);
  char* cast363 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r364 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast363);
  struct std__basic_ostream_char__std__char_traits_char__* r365 = std__ostream__operator___std__ios_base_____(r364, &std__right);
  int c366 = 10;
  struct std___Setw r367 = std__setw(c366);
  agg_tmp2342 = r367;
  struct std___Setw t368 = agg_tmp2342;
  struct std__basic_ostream_char__std__char_traits_char__* r369 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r365, t368);
  int t370 = x339;
  struct std__basic_ostream_char__std__char_traits_char__* r371 = std__ostream__operator__(r369, t370);
  struct std__basic_ostream_char__std__char_traits_char__* r372 = std__ostream__operator___std__ostream_____(r371, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c373 = 0;
  __retval338 = c373;
  int t374 = __retval338;
  return t374;
}

