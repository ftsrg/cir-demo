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
char _str[2] = "0";
char _str_1[98] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch20_8/main.cpp";
char __PRETTY_FUNCTION____Z13signalHandleri[24] = "void signalHandler(int)";
char _str_2[20] = "\nInterrupt signal (";
char _str_3[13] = ") received.\n";
char _str_4[46] = "Do you wish to continue (1 = yes or 2 = no)? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_5[22] = "(1 = yes or 2 = no)? ";
extern void* signal(int p0, void* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern void exit(int p0);
void signalHandler(int p0);
extern void srand(unsigned int p0);
extern long time(long* p0);
extern int raise(int p0);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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

// function: _Z13signalHandleri
void signalHandler(int v103) {
bb104:
  int signalValue105;
  int response106;
  signalValue105 = v103;
  char* cast107 = (char*)&(_str);
  char* c108 = _str_1;
  unsigned int c109 = 56;
  char* cast110 = (char*)&(__PRETTY_FUNCTION____Z13signalHandleri);
  __assert_fail(cast107, c108, c109, cast110);
  char* cast111 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r112 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast111);
  int t113 = signalValue105;
  struct std__basic_ostream_char__std__char_traits_char__* r114 = std__ostream__operator__(r112, t113);
  char* cast115 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r116 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r114, cast115);
  char* cast117 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r118 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r116, cast117);
  struct std__basic_istream_char__std__char_traits_char__* r119 = std__istream__operator__(&_ZSt3cin, &response106);
    while (1) {
      int t120 = response106;
      int c121 = 1;
      _Bool c122 = ((t120 != c121)) ? 1 : 0;
      _Bool ternary123;
      if (c122) {
        int t124 = response106;
        int c125 = 2;
        _Bool c126 = ((t124 != c125)) ? 1 : 0;
        ternary123 = (_Bool)c126;
      } else {
        _Bool c127 = 0;
        ternary123 = (_Bool)c127;
      }
      if (!ternary123) break;
        char* cast128 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r129 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast128);
        struct std__basic_istream_char__std__char_traits_char__* r130 = std__istream__operator__(&_ZSt3cin, &response106);
    }
    int t131 = response106;
    int c132 = 1;
    _Bool c133 = ((t131 != c132)) ? 1 : 0;
    if (c133) {
      int c134 = 0;
      exit(c134);
    }
  int c135 = 2;
  void* r136 = signal(c135, &signalHandler);
  int c137 = 2;
  struct std__basic_ostream_char__std__char_traits_char__* r138 = std__ostream__operator__(&_ZSt4cout, c137);
  struct std__basic_ostream_char__std__char_traits_char__* r139 = std__ostream__operator___std__ostream_____(r138, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v140, long v141) {
bb142:
  struct std__ios_base* this143;
  long __wide144;
  long __retval145;
  long __old146;
  this143 = v140;
  __wide144 = v141;
  struct std__ios_base* t147 = this143;
  long t148 = t147->_M_width;
  __old146 = t148;
  long t149 = __wide144;
  t147->_M_width = t149;
  long t150 = __old146;
  __retval145 = t150;
  long t151 = __retval145;
  return t151;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v152, struct std___Setw v153) {
bb154:
  struct std__basic_ostream_char__std__char_traits_char__* __os155;
  struct std___Setw __f156;
  struct std__basic_ostream_char__std__char_traits_char__* __retval157;
  __os155 = v152;
  __f156 = v153;
  struct std__basic_ostream_char__std__char_traits_char__* t158 = __os155;
  void** v159 = (void**)t158;
  void* v160 = *((void**)v159);
  unsigned char* cast161 = (unsigned char*)v160;
  long c162 = -24;
  unsigned char* ptr163 = &(cast161)[c162];
  long* cast164 = (long*)ptr163;
  long t165 = *cast164;
  unsigned char* cast166 = (unsigned char*)t158;
  unsigned char* ptr167 = &(cast166)[t165];
  struct std__basic_ostream_char__std__char_traits_char__* cast168 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr167;
  struct std__ios_base* cast169 = (struct std__ios_base*)cast168;
  int t170 = __f156._M_n;
  long cast171 = (long)t170;
  long r172 = std__ios_base__width(cast169, cast171);
  struct std__basic_ostream_char__std__char_traits_char__* t173 = __os155;
  __retval157 = t173;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = __retval157;
  return t174;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v175) {
bb176:
  int __n177;
  struct std___Setw __retval178;
  __n177 = v175;
  int t179 = __n177;
  __retval178._M_n = t179;
  struct std___Setw t180 = __retval178;
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
  int c264 = 0;
  __retval263 = c264;
  int c265 = 2;
  void* r266 = signal(c265, &signalHandler);
  long* c267 = ((void*)0);
  long r268 = time(c267);
  unsigned int cast269 = (unsigned int)r268;
  srand(cast269);
    int i270;
    int c271 = 1;
    i270 = c271;
    while (1) {
      int t273 = i270;
      int c274 = 100;
      _Bool c275 = ((t273 <= c274)) ? 1 : 0;
      if (!c275) break;
        int x276;
        struct std___Setw agg_tmp0277;
        int c278 = 25;
        x276 = c278;
          int t279 = x276;
          int c280 = 25;
          _Bool c281 = ((t279 == c280)) ? 1 : 0;
          if (c281) {
            int c282 = 2;
            int r283 = raise(c282);
          }
        int c284 = 4;
        struct std___Setw r285 = std__setw(c284);
        agg_tmp0277 = r285;
        struct std___Setw t286 = agg_tmp0277;
        struct std__basic_ostream_char__std__char_traits_char__* r287 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t286);
        int t288 = i270;
        struct std__basic_ostream_char__std__char_traits_char__* r289 = std__ostream__operator__(r287, t288);
          int t290 = i270;
          int c291 = 10;
          int b292 = t290 % c291;
          int c293 = 0;
          _Bool c294 = ((b292 == c293)) ? 1 : 0;
          if (c294) {
            struct std__basic_ostream_char__std__char_traits_char__* r295 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          }
    for_step272: ;
      int t296 = i270;
      int u297 = t296 + 1;
      i270 = u297;
    }
  int c298 = 0;
  __retval263 = c298;
  int t299 = __retval263;
  return t299;
}

