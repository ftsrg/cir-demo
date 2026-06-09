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
char _str[20] = "\nInterrupt signal (";
char _str_1[13] = ") received.\n";
char _str_2[46] = "Do you wish to continue (1 = yes or 2 = no)? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_3[22] = "(1 = yes or 2 = no)? ";
extern void* signal(int p0, void* p1);
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
extern int rand();
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
  struct std__basic_ostream_char__std__char_traits_char__* r108 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast107);
  int t109 = signalValue105;
  struct std__basic_ostream_char__std__char_traits_char__* r110 = std__ostream__operator__(r108, t109);
  char* cast111 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r112 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r110, cast111);
  char* cast113 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r114 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r112, cast113);
  struct std__basic_istream_char__std__char_traits_char__* r115 = std__istream__operator__(&_ZSt3cin, &response106);
    while (1) {
      int t116 = response106;
      int c117 = 1;
      _Bool c118 = ((t116 != c117)) ? 1 : 0;
      _Bool ternary119;
      if (c118) {
        int t120 = response106;
        int c121 = 2;
        _Bool c122 = ((t120 != c121)) ? 1 : 0;
        ternary119 = (_Bool)c122;
      } else {
        _Bool c123 = 0;
        ternary119 = (_Bool)c123;
      }
      if (!ternary119) break;
        char* cast124 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r125 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast124);
        struct std__basic_istream_char__std__char_traits_char__* r126 = std__istream__operator__(&_ZSt3cin, &response106);
    }
    int t127 = response106;
    int c128 = 1;
    _Bool c129 = ((t127 != c128)) ? 1 : 0;
    if (c129) {
      int c130 = 0;
      exit(c130);
    }
  int c131 = 2;
  void* r132 = signal(c131, &signalHandler);
  int c133 = 2;
  struct std__basic_ostream_char__std__char_traits_char__* r134 = std__ostream__operator__(&_ZSt4cout, c133);
  struct std__basic_ostream_char__std__char_traits_char__* r135 = std__ostream__operator___std__ostream_____(r134, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v136, long v137) {
bb138:
  struct std__ios_base* this139;
  long __wide140;
  long __retval141;
  long __old142;
  this139 = v136;
  __wide140 = v137;
  struct std__ios_base* t143 = this139;
  long t144 = t143->_M_width;
  __old142 = t144;
  long t145 = __wide140;
  t143->_M_width = t145;
  long t146 = __old142;
  __retval141 = t146;
  long t147 = __retval141;
  return t147;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v148, struct std___Setw v149) {
bb150:
  struct std__basic_ostream_char__std__char_traits_char__* __os151;
  struct std___Setw __f152;
  struct std__basic_ostream_char__std__char_traits_char__* __retval153;
  __os151 = v148;
  __f152 = v149;
  struct std__basic_ostream_char__std__char_traits_char__* t154 = __os151;
  void** v155 = (void**)t154;
  void* v156 = *((void**)v155);
  unsigned char* cast157 = (unsigned char*)v156;
  long c158 = -24;
  unsigned char* ptr159 = &(cast157)[c158];
  long* cast160 = (long*)ptr159;
  long t161 = *cast160;
  unsigned char* cast162 = (unsigned char*)t154;
  unsigned char* ptr163 = &(cast162)[t161];
  struct std__basic_ostream_char__std__char_traits_char__* cast164 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr163;
  struct std__ios_base* cast165 = (struct std__ios_base*)cast164;
  int t166 = __f152._M_n;
  long cast167 = (long)t166;
  long r168 = std__ios_base__width(cast165, cast167);
  struct std__basic_ostream_char__std__char_traits_char__* t169 = __os151;
  __retval153 = t169;
  struct std__basic_ostream_char__std__char_traits_char__* t170 = __retval153;
  return t170;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v171) {
bb172:
  int __n173;
  struct std___Setw __retval174;
  __n173 = v171;
  int t175 = __n173;
  __retval174._M_n = t175;
  struct std___Setw t176 = __retval174;
  return t176;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v177, void* v178) {
bb179:
  struct std__basic_ostream_char__std__char_traits_char__* this180;
  void* __pf181;
  struct std__basic_ostream_char__std__char_traits_char__* __retval182;
  this180 = v177;
  __pf181 = v178;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = this180;
  void* t184 = __pf181;
  struct std__basic_ostream_char__std__char_traits_char__* r185 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t184)(t183);
  __retval182 = r185;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __retval182;
  return t186;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v187) {
bb188:
  struct std__basic_ostream_char__std__char_traits_char__* __os189;
  struct std__basic_ostream_char__std__char_traits_char__* __retval190;
  __os189 = v187;
  struct std__basic_ostream_char__std__char_traits_char__* t191 = __os189;
  struct std__basic_ostream_char__std__char_traits_char__* r192 = std__ostream__flush(t191);
  __retval190 = r192;
  struct std__basic_ostream_char__std__char_traits_char__* t193 = __retval190;
  return t193;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v194) {
bb195:
  struct std__ctype_char_* __f196;
  struct std__ctype_char_* __retval197;
  __f196 = v194;
    struct std__ctype_char_* t198 = __f196;
    _Bool cast199 = (_Bool)t198;
    _Bool u200 = !cast199;
    if (u200) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t201 = __f196;
  __retval197 = t201;
  struct std__ctype_char_* t202 = __retval197;
  return t202;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v203, char v204) {
bb205:
  struct std__ctype_char_* this206;
  char __c207;
  char __retval208;
  this206 = v203;
  __c207 = v204;
  struct std__ctype_char_* t209 = this206;
    char t210 = t209->_M_widen_ok;
    _Bool cast211 = (_Bool)t210;
    if (cast211) {
      char t212 = __c207;
      unsigned char cast213 = (unsigned char)t212;
      unsigned long cast214 = (unsigned long)cast213;
      char t215 = t209->_M_widen[cast214];
      __retval208 = t215;
      char t216 = __retval208;
      return t216;
    }
  std__ctype_char____M_widen_init___const(t209);
  char t217 = __c207;
  void** v218 = (void**)t209;
  void* v219 = *((void**)v218);
  char vcall222 = (char)__VERIFIER_virtual_call_char_char(t209, 6, t217);
  __retval208 = vcall222;
  char t223 = __retval208;
  return t223;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v224, char v225) {
bb226:
  struct std__basic_ios_char__std__char_traits_char__* this227;
  char __c228;
  char __retval229;
  this227 = v224;
  __c228 = v225;
  struct std__basic_ios_char__std__char_traits_char__* t230 = this227;
  struct std__ctype_char_* t231 = t230->_M_ctype;
  struct std__ctype_char_* r232 = std__ctype_char__const__std____check_facet_std__ctype_char___(t231);
  char t233 = __c228;
  char r234 = std__ctype_char___widen_char__const(r232, t233);
  __retval229 = r234;
  char t235 = __retval229;
  return t235;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v236) {
bb237:
  struct std__basic_ostream_char__std__char_traits_char__* __os238;
  struct std__basic_ostream_char__std__char_traits_char__* __retval239;
  __os238 = v236;
  struct std__basic_ostream_char__std__char_traits_char__* t240 = __os238;
  struct std__basic_ostream_char__std__char_traits_char__* t241 = __os238;
  void** v242 = (void**)t241;
  void* v243 = *((void**)v242);
  unsigned char* cast244 = (unsigned char*)v243;
  long c245 = -24;
  unsigned char* ptr246 = &(cast244)[c245];
  long* cast247 = (long*)ptr246;
  long t248 = *cast247;
  unsigned char* cast249 = (unsigned char*)t241;
  unsigned char* ptr250 = &(cast249)[t248];
  struct std__basic_ostream_char__std__char_traits_char__* cast251 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr250;
  struct std__basic_ios_char__std__char_traits_char__* cast252 = (struct std__basic_ios_char__std__char_traits_char__*)cast251;
  char c253 = 10;
  char r254 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast252, c253);
  struct std__basic_ostream_char__std__char_traits_char__* r255 = std__ostream__put(t240, r254);
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r255);
  __retval239 = r256;
  struct std__basic_ostream_char__std__char_traits_char__* t257 = __retval239;
  return t257;
}

// function: main
int main() {
bb258:
  int __retval259;
  int c260 = 0;
  __retval259 = c260;
  int c261 = 2;
  void* r262 = signal(c261, &signalHandler);
  long* c263 = ((void*)0);
  long r264 = time(c263);
  unsigned int cast265 = (unsigned int)r264;
  srand(cast265);
    int i266;
    int c267 = 1;
    i266 = c267;
    while (1) {
      int t269 = i266;
      int c270 = 100;
      _Bool c271 = ((t269 <= c270)) ? 1 : 0;
      if (!c271) break;
        int x272;
        struct std___Setw agg_tmp0273;
        int c274 = 1;
        int r275 = rand();
        int c276 = 50;
        int b277 = r275 % c276;
        int b278 = c274 + b277;
        x272 = b278;
          int t279 = x272;
          int c280 = 25;
          _Bool c281 = ((t279 == c280)) ? 1 : 0;
          if (c281) {
            int c282 = 2;
            int r283 = raise(c282);
          }
        int c284 = 4;
        struct std___Setw r285 = std__setw(c284);
        agg_tmp0273 = r285;
        struct std___Setw t286 = agg_tmp0273;
        struct std__basic_ostream_char__std__char_traits_char__* r287 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t286);
        int t288 = i266;
        struct std__basic_ostream_char__std__char_traits_char__* r289 = std__ostream__operator__(r287, t288);
          int t290 = i266;
          int c291 = 10;
          int b292 = t290 % c291;
          int c293 = 0;
          _Bool c294 = ((b292 == c293)) ? 1 : 0;
          if (c294) {
            struct std__basic_ostream_char__std__char_traits_char__* r295 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          }
    for_step268: ;
      int t296 = i266;
      int u297 = t296 + 1;
      i266 = u297;
    }
  int c298 = 0;
  __retval259 = c298;
  int t299 = __retval259;
  return t299;
}

