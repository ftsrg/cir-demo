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

int __const__Z18automaticArrayInitv_array2[3] = {1, 2, 3};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZZ15staticArrayInitvE6array1[3] __attribute__((aligned(4)));
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[30] = "First call to each function:\n";
char _str_1[33] = "\n\nSecond call to each function:\n";
char _str_2[38] = "\nValues on entering staticArrayInit:\n";
char _str_3[8] = "array1[";
char _str_4[5] = "] = ";
char _str_5[3] = "  ";
char _str_6[37] = "\nValues on exiting staticArrayInit:\n";
char _str_7[42] = "\n\nValues on entering automaticArrayInit:\n";
char _str_8[8] = "array2[";
char _str_9[40] = "\nValues on exiting automaticArrayInit:\n";
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void staticArrayInit();
void automaticArrayInit();
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

// function: _Z15staticArrayInitv
void staticArrayInit() {
bb103:
  char* cast104 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r105 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast104);
    int i106;
    int c107 = 0;
    i106 = c107;
    while (1) {
      int t109 = i106;
      int c110 = 3;
      _Bool c111 = ((t109 < c110)) ? 1 : 0;
      if (!c111) break;
      char* cast112 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r113 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast112);
      int t114 = i106;
      struct std__basic_ostream_char__std__char_traits_char__* r115 = std__ostream__operator__(r113, t114);
      char* cast116 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r117 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r115, cast116);
      int t118 = i106;
      long cast119 = (long)t118;
      int t120 = _ZZ15staticArrayInitvE6array1[cast119];
      struct std__basic_ostream_char__std__char_traits_char__* r121 = std__ostream__operator__(r117, t120);
      char* cast122 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r123 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r121, cast122);
    for_step108: ;
      int t124 = i106;
      int u125 = t124 + 1;
      i106 = u125;
    }
  char* cast126 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r127 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast126);
    int j128;
    int c129 = 0;
    j128 = c129;
    while (1) {
      int t131 = j128;
      int c132 = 3;
      _Bool c133 = ((t131 < c132)) ? 1 : 0;
      if (!c133) break;
      char* cast134 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r135 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast134);
      int t136 = j128;
      struct std__basic_ostream_char__std__char_traits_char__* r137 = std__ostream__operator__(r135, t136);
      char* cast138 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r139 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r137, cast138);
      int c140 = 5;
      int t141 = j128;
      long cast142 = (long)t141;
      int t143 = _ZZ15staticArrayInitvE6array1[cast142];
      int b144 = t143 + c140;
      _ZZ15staticArrayInitvE6array1[cast142] = b144;
      struct std__basic_ostream_char__std__char_traits_char__* r145 = std__ostream__operator__(r139, b144);
      char* cast146 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r147 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r145, cast146);
    for_step130: ;
      int t148 = j128;
      int u149 = t148 + 1;
      j128 = u149;
    }
  return;
}

// function: _Z18automaticArrayInitv
void automaticArrayInit() {
bb150:
  int array2151[3];
  // array copy
  __builtin_memcpy(array2151, __const__Z18automaticArrayInitv_array2, (unsigned long)3 * sizeof(__const__Z18automaticArrayInitv_array2[0]));
  char* cast152 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r153 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast152);
    int i154;
    int c155 = 0;
    i154 = c155;
    while (1) {
      int t157 = i154;
      int c158 = 3;
      _Bool c159 = ((t157 < c158)) ? 1 : 0;
      if (!c159) break;
      char* cast160 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* r161 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast160);
      int t162 = i154;
      struct std__basic_ostream_char__std__char_traits_char__* r163 = std__ostream__operator__(r161, t162);
      char* cast164 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r165 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r163, cast164);
      int t166 = i154;
      long cast167 = (long)t166;
      int t168 = array2151[cast167];
      struct std__basic_ostream_char__std__char_traits_char__* r169 = std__ostream__operator__(r165, t168);
      char* cast170 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r171 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r169, cast170);
    for_step156: ;
      int t172 = i154;
      int u173 = t172 + 1;
      i154 = u173;
    }
  char* cast174 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r175 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast174);
    int j176;
    int c177 = 0;
    j176 = c177;
    while (1) {
      int t179 = j176;
      int c180 = 3;
      _Bool c181 = ((t179 < c180)) ? 1 : 0;
      if (!c181) break;
      char* cast182 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* r183 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast182);
      int t184 = j176;
      struct std__basic_ostream_char__std__char_traits_char__* r185 = std__ostream__operator__(r183, t184);
      char* cast186 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r187 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r185, cast186);
      int c188 = 5;
      int t189 = j176;
      long cast190 = (long)t189;
      int t191 = array2151[cast190];
      int b192 = t191 + c188;
      array2151[cast190] = b192;
      struct std__basic_ostream_char__std__char_traits_char__* r193 = std__ostream__operator__(r187, b192);
      char* cast194 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r195 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r193, cast194);
    for_step178: ;
      int t196 = j176;
      int u197 = t196 + 1;
      j176 = u197;
    }
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v198, void* v199) {
bb200:
  struct std__basic_ostream_char__std__char_traits_char__* this201;
  void* __pf202;
  struct std__basic_ostream_char__std__char_traits_char__* __retval203;
  this201 = v198;
  __pf202 = v199;
  struct std__basic_ostream_char__std__char_traits_char__* t204 = this201;
  void* t205 = __pf202;
  struct std__basic_ostream_char__std__char_traits_char__* r206 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t205)(t204);
  __retval203 = r206;
  struct std__basic_ostream_char__std__char_traits_char__* t207 = __retval203;
  return t207;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v208) {
bb209:
  struct std__basic_ostream_char__std__char_traits_char__* __os210;
  struct std__basic_ostream_char__std__char_traits_char__* __retval211;
  __os210 = v208;
  struct std__basic_ostream_char__std__char_traits_char__* t212 = __os210;
  struct std__basic_ostream_char__std__char_traits_char__* r213 = std__ostream__flush(t212);
  __retval211 = r213;
  struct std__basic_ostream_char__std__char_traits_char__* t214 = __retval211;
  return t214;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v215) {
bb216:
  struct std__ctype_char_* __f217;
  struct std__ctype_char_* __retval218;
  __f217 = v215;
    struct std__ctype_char_* t219 = __f217;
    _Bool cast220 = (_Bool)t219;
    _Bool u221 = !cast220;
    if (u221) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t222 = __f217;
  __retval218 = t222;
  struct std__ctype_char_* t223 = __retval218;
  return t223;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v224, char v225) {
bb226:
  struct std__ctype_char_* this227;
  char __c228;
  char __retval229;
  this227 = v224;
  __c228 = v225;
  struct std__ctype_char_* t230 = this227;
    char t231 = t230->_M_widen_ok;
    _Bool cast232 = (_Bool)t231;
    if (cast232) {
      char t233 = __c228;
      unsigned char cast234 = (unsigned char)t233;
      unsigned long cast235 = (unsigned long)cast234;
      char t236 = t230->_M_widen[cast235];
      __retval229 = t236;
      char t237 = __retval229;
      return t237;
    }
  std__ctype_char____M_widen_init___const(t230);
  char t238 = __c228;
  void** v239 = (void**)t230;
  void* v240 = *((void**)v239);
  char vcall243 = (char)__VERIFIER_virtual_call_char_char(t230, 6, t238);
  __retval229 = vcall243;
  char t244 = __retval229;
  return t244;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v245, char v246) {
bb247:
  struct std__basic_ios_char__std__char_traits_char__* this248;
  char __c249;
  char __retval250;
  this248 = v245;
  __c249 = v246;
  struct std__basic_ios_char__std__char_traits_char__* t251 = this248;
  struct std__ctype_char_* t252 = t251->_M_ctype;
  struct std__ctype_char_* r253 = std__ctype_char__const__std____check_facet_std__ctype_char___(t252);
  char t254 = __c249;
  char r255 = std__ctype_char___widen_char__const(r253, t254);
  __retval250 = r255;
  char t256 = __retval250;
  return t256;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v257) {
bb258:
  struct std__basic_ostream_char__std__char_traits_char__* __os259;
  struct std__basic_ostream_char__std__char_traits_char__* __retval260;
  __os259 = v257;
  struct std__basic_ostream_char__std__char_traits_char__* t261 = __os259;
  struct std__basic_ostream_char__std__char_traits_char__* t262 = __os259;
  void** v263 = (void**)t262;
  void* v264 = *((void**)v263);
  unsigned char* cast265 = (unsigned char*)v264;
  long c266 = -24;
  unsigned char* ptr267 = &(cast265)[c266];
  long* cast268 = (long*)ptr267;
  long t269 = *cast268;
  unsigned char* cast270 = (unsigned char*)t262;
  unsigned char* ptr271 = &(cast270)[t269];
  struct std__basic_ostream_char__std__char_traits_char__* cast272 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr271;
  struct std__basic_ios_char__std__char_traits_char__* cast273 = (struct std__basic_ios_char__std__char_traits_char__*)cast272;
  char c274 = 10;
  char r275 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast273, c274);
  struct std__basic_ostream_char__std__char_traits_char__* r276 = std__ostream__put(t261, r275);
  struct std__basic_ostream_char__std__char_traits_char__* r277 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r276);
  __retval260 = r277;
  struct std__basic_ostream_char__std__char_traits_char__* t278 = __retval260;
  return t278;
}

// function: main
int main() {
bb279:
  int __retval280;
  int c281 = 0;
  __retval280 = c281;
  char* cast282 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r283 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast282);
  staticArrayInit();
  automaticArrayInit();
  char* cast284 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast284);
  staticArrayInit();
  automaticArrayInit();
  struct std__basic_ostream_char__std__char_traits_char__* r286 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c287 = 0;
  __retval280 = c287;
  int t288 = __retval280;
  return t288;
}

