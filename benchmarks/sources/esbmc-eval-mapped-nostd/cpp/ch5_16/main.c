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
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char __const_main_string4[9] = "Good Bye";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[6] = "Hello";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[11] = "string1 = ";
char _str_2[11] = "string3 = ";
void copy1(char* p0, char* p1);
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
void copy2(char* p0, char* p1);
int main();

// function: _Z5copy1PcPKc
void copy1(char* v0, char* v1) {
bb2:
  char* s13;
  char* s24;
  s13 = v0;
  s24 = v1;
    int i5;
    int c6 = 0;
    i5 = c6;
    while (1) {
      int t8 = i5;
      long cast9 = (long)t8;
      char* t10 = s24;
      char* ptr11 = &(t10)[cast9];
      char t12 = *ptr11;
      int t13 = i5;
      long cast14 = (long)t13;
      char* t15 = s13;
      char* ptr16 = &(t15)[cast14];
      *ptr16 = t12;
      int cast17 = (int)t12;
      int c18 = 0;
      _Bool c19 = ((cast17 != c18)) ? 1 : 0;
      if (!c19) break;
    for_step7: ;
      int t20 = i5;
      int u21 = t20 + 1;
      i5 = u21;
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v22, int v23) {
bb24:
  int __a25;
  int __b26;
  int __retval27;
  __a25 = v22;
  __b26 = v23;
  int t28 = __a25;
  int t29 = __b26;
  int b30 = t28 | t29;
  __retval27 = b30;
  int t31 = __retval27;
  return t31;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v32) {
bb33:
  struct std__basic_ios_char__std__char_traits_char__* this34;
  int __retval35;
  this34 = v32;
  struct std__basic_ios_char__std__char_traits_char__* t36 = this34;
  struct std__ios_base* base37 = (struct std__ios_base*)((char *)t36 + 0);
  int t38 = base37->_M_streambuf_state;
  __retval35 = t38;
  int t39 = __retval35;
  return t39;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v40, int v41) {
bb42:
  struct std__basic_ios_char__std__char_traits_char__* this43;
  int __state44;
  this43 = v40;
  __state44 = v41;
  struct std__basic_ios_char__std__char_traits_char__* t45 = this43;
  int r46 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t45);
  int t47 = __state44;
  int r48 = std__operator_(r46, t47);
  std__basic_ios_char__std__char_traits_char_____clear(t45, r48);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb49:
  _Bool __retval50;
    _Bool c51 = 0;
    __retval50 = c51;
    _Bool t52 = __retval50;
    return t52;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v53, char* v54) {
bb55:
  char* __c156;
  char* __c257;
  _Bool __retval58;
  __c156 = v53;
  __c257 = v54;
  char* t59 = __c156;
  char t60 = *t59;
  int cast61 = (int)t60;
  char* t62 = __c257;
  char t63 = *t62;
  int cast64 = (int)t63;
  _Bool c65 = ((cast61 == cast64)) ? 1 : 0;
  __retval58 = c65;
  _Bool t66 = __retval58;
  return t66;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v67) {
bb68:
  char* __p69;
  unsigned long __retval70;
  unsigned long __i71;
  __p69 = v67;
  unsigned long c72 = 0;
  __i71 = c72;
    char ref_tmp073;
    while (1) {
      unsigned long t74 = __i71;
      char* t75 = __p69;
      char* ptr76 = &(t75)[t74];
      char c77 = 0;
      ref_tmp073 = c77;
      _Bool r78 = __gnu_cxx__char_traits_char___eq(ptr76, &ref_tmp073);
      _Bool u79 = !r78;
      if (!u79) break;
      unsigned long t80 = __i71;
      unsigned long u81 = t80 + 1;
      __i71 = u81;
    }
  unsigned long t82 = __i71;
  __retval70 = t82;
  unsigned long t83 = __retval70;
  return t83;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v84) {
bb85:
  char* __s86;
  unsigned long __retval87;
  __s86 = v84;
    _Bool r88 = std____is_constant_evaluated();
    if (r88) {
      char* t89 = __s86;
      unsigned long r90 = __gnu_cxx__char_traits_char___length(t89);
      __retval87 = r90;
      unsigned long t91 = __retval87;
      return t91;
    }
  char* t92 = __s86;
  unsigned long r93 = strlen(t92);
  __retval87 = r93;
  unsigned long t94 = __retval87;
  return t94;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v95, char* v96) {
bb97:
  struct std__basic_ostream_char__std__char_traits_char__* __out98;
  char* __s99;
  struct std__basic_ostream_char__std__char_traits_char__* __retval100;
  __out98 = v95;
  __s99 = v96;
    char* t101 = __s99;
    _Bool cast102 = (_Bool)t101;
    _Bool u103 = !cast102;
    if (u103) {
      struct std__basic_ostream_char__std__char_traits_char__* t104 = __out98;
      void** v105 = (void**)t104;
      void* v106 = *((void**)v105);
      unsigned char* cast107 = (unsigned char*)v106;
      long c108 = -24;
      unsigned char* ptr109 = &(cast107)[c108];
      long* cast110 = (long*)ptr109;
      long t111 = *cast110;
      unsigned char* cast112 = (unsigned char*)t104;
      unsigned char* ptr113 = &(cast112)[t111];
      struct std__basic_ostream_char__std__char_traits_char__* cast114 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr113;
      struct std__basic_ios_char__std__char_traits_char__* cast115 = (struct std__basic_ios_char__std__char_traits_char__*)cast114;
      int t116 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast115, t116);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t117 = __out98;
      char* t118 = __s99;
      char* t119 = __s99;
      unsigned long r120 = std__char_traits_char___length(t119);
      long cast121 = (long)r120;
      struct std__basic_ostream_char__std__char_traits_char__* r122 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t117, t118, cast121);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t123 = __out98;
  __retval100 = t123;
  struct std__basic_ostream_char__std__char_traits_char__* t124 = __retval100;
  return t124;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v125, void* v126) {
bb127:
  struct std__basic_ostream_char__std__char_traits_char__* this128;
  void* __pf129;
  struct std__basic_ostream_char__std__char_traits_char__* __retval130;
  this128 = v125;
  __pf129 = v126;
  struct std__basic_ostream_char__std__char_traits_char__* t131 = this128;
  void* t132 = __pf129;
  struct std__basic_ostream_char__std__char_traits_char__* r133 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t132)(t131);
  __retval130 = r133;
  struct std__basic_ostream_char__std__char_traits_char__* t134 = __retval130;
  return t134;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v135) {
bb136:
  struct std__basic_ostream_char__std__char_traits_char__* __os137;
  struct std__basic_ostream_char__std__char_traits_char__* __retval138;
  __os137 = v135;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __os137;
  struct std__basic_ostream_char__std__char_traits_char__* r140 = std__ostream__flush(t139);
  __retval138 = r140;
  struct std__basic_ostream_char__std__char_traits_char__* t141 = __retval138;
  return t141;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v142) {
bb143:
  struct std__ctype_char_* __f144;
  struct std__ctype_char_* __retval145;
  __f144 = v142;
    struct std__ctype_char_* t146 = __f144;
    _Bool cast147 = (_Bool)t146;
    _Bool u148 = !cast147;
    if (u148) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t149 = __f144;
  __retval145 = t149;
  struct std__ctype_char_* t150 = __retval145;
  return t150;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v151, char v152) {
bb153:
  struct std__ctype_char_* this154;
  char __c155;
  char __retval156;
  this154 = v151;
  __c155 = v152;
  struct std__ctype_char_* t157 = this154;
    char t158 = t157->_M_widen_ok;
    _Bool cast159 = (_Bool)t158;
    if (cast159) {
      char t160 = __c155;
      unsigned char cast161 = (unsigned char)t160;
      unsigned long cast162 = (unsigned long)cast161;
      char t163 = t157->_M_widen[cast162];
      __retval156 = t163;
      char t164 = __retval156;
      return t164;
    }
  std__ctype_char____M_widen_init___const(t157);
  char t165 = __c155;
  void** v166 = (void**)t157;
  void* v167 = *((void**)v166);
  char vcall170 = (char)__VERIFIER_virtual_call_char_char(t157, 6, t165);
  __retval156 = vcall170;
  char t171 = __retval156;
  return t171;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v172, char v173) {
bb174:
  struct std__basic_ios_char__std__char_traits_char__* this175;
  char __c176;
  char __retval177;
  this175 = v172;
  __c176 = v173;
  struct std__basic_ios_char__std__char_traits_char__* t178 = this175;
  struct std__ctype_char_* t179 = t178->_M_ctype;
  struct std__ctype_char_* r180 = std__ctype_char__const__std____check_facet_std__ctype_char___(t179);
  char t181 = __c176;
  char r182 = std__ctype_char___widen_char__const(r180, t181);
  __retval177 = r182;
  char t183 = __retval177;
  return t183;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v184) {
bb185:
  struct std__basic_ostream_char__std__char_traits_char__* __os186;
  struct std__basic_ostream_char__std__char_traits_char__* __retval187;
  __os186 = v184;
  struct std__basic_ostream_char__std__char_traits_char__* t188 = __os186;
  struct std__basic_ostream_char__std__char_traits_char__* t189 = __os186;
  void** v190 = (void**)t189;
  void* v191 = *((void**)v190);
  unsigned char* cast192 = (unsigned char*)v191;
  long c193 = -24;
  unsigned char* ptr194 = &(cast192)[c193];
  long* cast195 = (long*)ptr194;
  long t196 = *cast195;
  unsigned char* cast197 = (unsigned char*)t189;
  unsigned char* ptr198 = &(cast197)[t196];
  struct std__basic_ostream_char__std__char_traits_char__* cast199 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr198;
  struct std__basic_ios_char__std__char_traits_char__* cast200 = (struct std__basic_ios_char__std__char_traits_char__*)cast199;
  char c201 = 10;
  char r202 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast200, c201);
  struct std__basic_ostream_char__std__char_traits_char__* r203 = std__ostream__put(t188, r202);
  struct std__basic_ostream_char__std__char_traits_char__* r204 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r203);
  __retval187 = r204;
  struct std__basic_ostream_char__std__char_traits_char__* t205 = __retval187;
  return t205;
}

// function: _Z5copy2PcPKc
void copy2(char* v206, char* v207) {
bb208:
  char* s1209;
  char* s2210;
  s1209 = v206;
  s2210 = v207;
    while (1) {
      char* t212 = s2210;
      char t213 = *t212;
      char* t214 = s1209;
      *t214 = t213;
      int cast215 = (int)t213;
      int c216 = 0;
      _Bool c217 = ((cast215 != c216)) ? 1 : 0;
      if (!c217) break;
    for_step211: ;
      char* t218 = s1209;
      int c219 = 1;
      char* ptr220 = &(t218)[c219];
      s1209 = ptr220;
      char* t221 = s2210;
      int c222 = 1;
      char* ptr223 = &(t221)[c222];
      s2210 = ptr223;
    }
  return;
}

// function: main
int main() {
bb224:
  int __retval225;
  char string1226[10];
  char* string2227;
  char string3228[10];
  char string4229[9];
  int c230 = 0;
  __retval225 = c230;
  char* cast231 = (char*)&(_str);
  string2227 = cast231;
  // array copy
  __builtin_memcpy(string4229, __const_main_string4, (unsigned long)9 * sizeof(__const_main_string4[0]));
  char* cast232 = (char*)&(string1226);
  char* t233 = string2227;
  copy1(cast232, t233);
  char* cast234 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r235 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast234);
  char* cast236 = (char*)&(string1226);
  struct std__basic_ostream_char__std__char_traits_char__* r237 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r235, cast236);
  struct std__basic_ostream_char__std__char_traits_char__* r238 = std__ostream__operator___std__ostream_____(r237, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast239 = (char*)&(string3228);
  char* cast240 = (char*)&(string4229);
  copy2(cast239, cast240);
  char* cast241 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r242 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast241);
  char* cast243 = (char*)&(string3228);
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r242, cast243);
  struct std__basic_ostream_char__std__char_traits_char__* r245 = std__ostream__operator___std__ostream_____(r244, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c246 = 0;
  __retval225 = c246;
  int t247 = __retval225;
  return t247;
}

