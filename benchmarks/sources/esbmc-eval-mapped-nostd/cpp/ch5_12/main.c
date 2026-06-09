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
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[30] = "Data items in original order\n";
char _str_1[32] = "\nData items in ascending order\n";
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
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void swap(int* p0, int* p1);
void bubbleSort(int* p0, int p1);
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

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v103, long v104) {
bb105:
  struct std__ios_base* this106;
  long __wide107;
  long __retval108;
  long __old109;
  this106 = v103;
  __wide107 = v104;
  struct std__ios_base* t110 = this106;
  long t111 = t110->_M_width;
  __old109 = t111;
  long t112 = __wide107;
  t110->_M_width = t112;
  long t113 = __old109;
  __retval108 = t113;
  long t114 = __retval108;
  return t114;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v115, struct std___Setw v116) {
bb117:
  struct std__basic_ostream_char__std__char_traits_char__* __os118;
  struct std___Setw __f119;
  struct std__basic_ostream_char__std__char_traits_char__* __retval120;
  __os118 = v115;
  __f119 = v116;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = __os118;
  void** v122 = (void**)t121;
  void* v123 = *((void**)v122);
  unsigned char* cast124 = (unsigned char*)v123;
  long c125 = -24;
  unsigned char* ptr126 = &(cast124)[c125];
  long* cast127 = (long*)ptr126;
  long t128 = *cast127;
  unsigned char* cast129 = (unsigned char*)t121;
  unsigned char* ptr130 = &(cast129)[t128];
  struct std__basic_ostream_char__std__char_traits_char__* cast131 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr130;
  struct std__ios_base* cast132 = (struct std__ios_base*)cast131;
  int t133 = __f119._M_n;
  long cast134 = (long)t133;
  long r135 = std__ios_base__width(cast132, cast134);
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __os118;
  __retval120 = t136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval120;
  return t137;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v138) {
bb139:
  int __n140;
  struct std___Setw __retval141;
  __n140 = v138;
  int t142 = __n140;
  __retval141._M_n = t142;
  struct std___Setw t143 = __retval141;
  return t143;
}

// function: _Z4swapPiS_
void swap(int* v144, int* v145) {
bb146:
  int* element1Ptr147;
  int* element2Ptr148;
  int hold149;
  element1Ptr147 = v144;
  element2Ptr148 = v145;
  int* t150 = element1Ptr147;
  int t151 = *t150;
  hold149 = t151;
  int* t152 = element2Ptr148;
  int t153 = *t152;
  int* t154 = element1Ptr147;
  *t154 = t153;
  int t155 = hold149;
  int* t156 = element2Ptr148;
  *t156 = t155;
  return;
}

// function: _Z10bubbleSortPii
void bubbleSort(int* v157, int v158) {
bb159:
  int* array160;
  int size161;
  array160 = v157;
  size161 = v158;
    int pass162;
    int c163 = 0;
    pass162 = c163;
    while (1) {
      int t165 = pass162;
      int t166 = size161;
      int c167 = 1;
      int b168 = t166 - c167;
      _Bool c169 = ((t165 < b168)) ? 1 : 0;
      if (!c169) break;
        int k170;
        int c171 = 0;
        k170 = c171;
        while (1) {
          int t173 = k170;
          int t174 = size161;
          int c175 = 1;
          int b176 = t174 - c175;
          _Bool c177 = ((t173 < b176)) ? 1 : 0;
          if (!c177) break;
            int t178 = k170;
            long cast179 = (long)t178;
            int* t180 = array160;
            int* ptr181 = &(t180)[cast179];
            int t182 = *ptr181;
            int t183 = k170;
            int c184 = 1;
            int b185 = t183 + c184;
            long cast186 = (long)b185;
            int* t187 = array160;
            int* ptr188 = &(t187)[cast186];
            int t189 = *ptr188;
            _Bool c190 = ((t182 > t189)) ? 1 : 0;
            if (c190) {
              int t191 = k170;
              long cast192 = (long)t191;
              int* t193 = array160;
              int* ptr194 = &(t193)[cast192];
              int t195 = k170;
              int c196 = 1;
              int b197 = t195 + c196;
              long cast198 = (long)b197;
              int* t199 = array160;
              int* ptr200 = &(t199)[cast198];
              swap(ptr194, ptr200);
            }
        for_step172: ;
          int t201 = k170;
          int u202 = t201 + 1;
          k170 = u202;
        }
    for_step164: ;
      int t203 = pass162;
      int u204 = t203 + 1;
      pass162 = u204;
    }
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v205, void* v206) {
bb207:
  struct std__basic_ostream_char__std__char_traits_char__* this208;
  void* __pf209;
  struct std__basic_ostream_char__std__char_traits_char__* __retval210;
  this208 = v205;
  __pf209 = v206;
  struct std__basic_ostream_char__std__char_traits_char__* t211 = this208;
  void* t212 = __pf209;
  struct std__basic_ostream_char__std__char_traits_char__* r213 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t212)(t211);
  __retval210 = r213;
  struct std__basic_ostream_char__std__char_traits_char__* t214 = __retval210;
  return t214;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v215) {
bb216:
  struct std__basic_ostream_char__std__char_traits_char__* __os217;
  struct std__basic_ostream_char__std__char_traits_char__* __retval218;
  __os217 = v215;
  struct std__basic_ostream_char__std__char_traits_char__* t219 = __os217;
  struct std__basic_ostream_char__std__char_traits_char__* r220 = std__ostream__flush(t219);
  __retval218 = r220;
  struct std__basic_ostream_char__std__char_traits_char__* t221 = __retval218;
  return t221;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v222) {
bb223:
  struct std__ctype_char_* __f224;
  struct std__ctype_char_* __retval225;
  __f224 = v222;
    struct std__ctype_char_* t226 = __f224;
    _Bool cast227 = (_Bool)t226;
    _Bool u228 = !cast227;
    if (u228) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t229 = __f224;
  __retval225 = t229;
  struct std__ctype_char_* t230 = __retval225;
  return t230;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v231, char v232) {
bb233:
  struct std__ctype_char_* this234;
  char __c236;
  char __retval237;
  this234 = v231;
  __c236 = v232;
  struct std__ctype_char_* t238 = this234;
    char t239 = t238->_M_widen_ok;
    _Bool cast240 = (_Bool)t239;
    if (cast240) {
      char t241 = __c236;
      unsigned char cast242 = (unsigned char)t241;
      unsigned long cast243 = (unsigned long)cast242;
      char t244 = t238->_M_widen[cast243];
      __retval237 = t244;
      char t245 = __retval237;
      return t245;
    }
  std__ctype_char____M_widen_init___const(t238);
  char t246 = __c236;
  void** v247 = (void**)t238;
  void* v248 = *((void**)v247);
  char vcall251 = (char)__VERIFIER_virtual_call_char_char(t238, 6, t246);
  __retval237 = vcall251;
  char t252 = __retval237;
  return t252;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v253, char v254) {
bb255:
  struct std__basic_ios_char__std__char_traits_char__* this256;
  char __c257;
  char __retval258;
  this256 = v253;
  __c257 = v254;
  struct std__basic_ios_char__std__char_traits_char__* t259 = this256;
  struct std__ctype_char_* t260 = t259->_M_ctype;
  struct std__ctype_char_* r261 = std__ctype_char__const__std____check_facet_std__ctype_char___(t260);
  char t262 = __c257;
  char r263 = std__ctype_char___widen_char__const(r261, t262);
  __retval258 = r263;
  char t264 = __retval258;
  return t264;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v265) {
bb266:
  struct std__basic_ostream_char__std__char_traits_char__* __os267;
  struct std__basic_ostream_char__std__char_traits_char__* __retval268;
  __os267 = v265;
  struct std__basic_ostream_char__std__char_traits_char__* t269 = __os267;
  struct std__basic_ostream_char__std__char_traits_char__* t270 = __os267;
  void** v271 = (void**)t270;
  void* v272 = *((void**)v271);
  unsigned char* cast273 = (unsigned char*)v272;
  long c274 = -24;
  unsigned char* ptr275 = &(cast273)[c274];
  long* cast276 = (long*)ptr275;
  long t277 = *cast276;
  unsigned char* cast278 = (unsigned char*)t270;
  unsigned char* ptr279 = &(cast278)[t277];
  struct std__basic_ostream_char__std__char_traits_char__* cast280 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr279;
  struct std__basic_ios_char__std__char_traits_char__* cast281 = (struct std__basic_ios_char__std__char_traits_char__*)cast280;
  char c282 = 10;
  char r283 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast281, c282);
  struct std__basic_ostream_char__std__char_traits_char__* r284 = std__ostream__put(t269, r283);
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r284);
  __retval268 = r285;
  struct std__basic_ostream_char__std__char_traits_char__* t286 = __retval268;
  return t286;
}

// function: main
int main() {
bb287:
  int __retval288;
  int arraySize289;
  int a290[10];
  int c291 = 0;
  __retval288 = c291;
  int c292 = 10;
  arraySize289 = c292;
  // array copy
  __builtin_memcpy(a290, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast293 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r294 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast293);
    int i295;
    struct std___Setw agg_tmp0296;
    int c297 = 0;
    i295 = c297;
    while (1) {
      int t299 = i295;
      int t300 = arraySize289;
      _Bool c301 = ((t299 < t300)) ? 1 : 0;
      if (!c301) break;
      int c302 = 4;
      struct std___Setw r303 = std__setw(c302);
      agg_tmp0296 = r303;
      struct std___Setw t304 = agg_tmp0296;
      struct std__basic_ostream_char__std__char_traits_char__* r305 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t304);
      int t306 = i295;
      long cast307 = (long)t306;
      int t308 = a290[cast307];
      struct std__basic_ostream_char__std__char_traits_char__* r309 = std__ostream__operator__(r305, t308);
    for_step298: ;
      int t310 = i295;
      int u311 = t310 + 1;
      i295 = u311;
    }
  int* cast312 = (int*)&(a290);
  int t313 = arraySize289;
  bubbleSort(cast312, t313);
  char* cast314 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r315 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast314);
    int j316;
    struct std___Setw agg_tmp1317;
    int c318 = 0;
    j316 = c318;
    while (1) {
      int t320 = j316;
      int t321 = arraySize289;
      _Bool c322 = ((t320 < t321)) ? 1 : 0;
      if (!c322) break;
      int c323 = 4;
      struct std___Setw r324 = std__setw(c323);
      agg_tmp1317 = r324;
      struct std___Setw t325 = agg_tmp1317;
      struct std__basic_ostream_char__std__char_traits_char__* r326 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t325);
      int t327 = j316;
      long cast328 = (long)t327;
      int t329 = a290[cast328];
      struct std__basic_ostream_char__std__char_traits_char__* r330 = std__ostream__operator__(r326, t329);
    for_step319: ;
      int t331 = j316;
      int u332 = t331 + 1;
      j316 = u332;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r333 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c334 = 0;
  __retval288 = c334;
  int t335 = __retval288;
  return t335;
}

