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
struct myclass { unsigned char __field0; };
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

int __const_main_myints[7] = {3, 7, 2, 5, 6, 4, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct myclass myobj;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "The smallest element is ";
char _str_1[35] = "*min_element(myints,myints+7) == 2";
char _str_2[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm61/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[24] = "The largest element is ";
char _str_4[35] = "*max_element(myints,myints+7) == 9";
char _str_5[40] = "*min_element(myints,myints+7,myfn) == 2";
char _str_6[40] = "*max_element(myints,myints+7,myfn) == 9";
char _str_7[41] = "*min_element(myints,myints+7,myobj) == 2";
char _str_8[41] = "*max_element(myints,myints+7,myobj) == 9";
int* max_element(int* p0, int* p1);
int* min_element(int* p0, int* p1);
_Bool myfn(int p0, int p1);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int* int__min_element_int__bool_____int__int___int___int___bool____(int* p0, int* p1, void* p2);
int* int__max_element_int__bool_____int__int___int___int___bool____(int* p0, int* p1, void* p2);
_Bool myclass__operator__(struct myclass* p0, int p1, int p2);
int* int__min_element_int__myclass_(int* p0, int* p1, struct myclass p2);
int* int__max_element_int__myclass_(int* p0, int* p1, struct myclass p2);
int main();

// function: _Z11max_elementPiS_
int* max_element(int* v0, int* v1) {
bb2:
  int* first3;
  int* last4;
  int* __retval5;
  int* largest6;
  first3 = v0;
  last4 = v1;
  int* t7 = first3;
  largest6 = t7;
    int* t8 = first3;
    int* t9 = last4;
    _Bool c10 = ((t8 == t9)) ? 1 : 0;
    if (c10) {
      int* t11 = last4;
      __retval5 = t11;
      int* t12 = __retval5;
      return t12;
    }
    while (1) {
      int* t13 = first3;
      int c14 = 1;
      int* ptr15 = &(t13)[c14];
      first3 = ptr15;
      int* t16 = last4;
      _Bool c17 = ((ptr15 != t16)) ? 1 : 0;
      if (!c17) break;
        int* t18 = largest6;
        int t19 = *t18;
        int* t20 = first3;
        int t21 = *t20;
        _Bool c22 = ((t19 < t21)) ? 1 : 0;
        if (c22) {
          int* t23 = first3;
          largest6 = t23;
        }
    }
  int* t24 = largest6;
  __retval5 = t24;
  int* t25 = __retval5;
  return t25;
}

// function: _Z11min_elementPiS_
int* min_element(int* v26, int* v27) {
bb28:
  int* first29;
  int* last30;
  int* __retval31;
  int* lowest32;
  first29 = v26;
  last30 = v27;
  int* t33 = first29;
  lowest32 = t33;
    int* t34 = first29;
    int* t35 = last30;
    _Bool c36 = ((t34 == t35)) ? 1 : 0;
    if (c36) {
      int* t37 = last30;
      __retval31 = t37;
      int* t38 = __retval31;
      return t38;
    }
    while (1) {
      int* t39 = first29;
      int c40 = 1;
      int* ptr41 = &(t39)[c40];
      first29 = ptr41;
      int* t42 = last30;
      _Bool c43 = ((ptr41 != t42)) ? 1 : 0;
      if (!c43) break;
        int* t44 = first29;
        int t45 = *t44;
        int* t46 = lowest32;
        int t47 = *t46;
        _Bool c48 = ((t45 < t47)) ? 1 : 0;
        if (c48) {
          int* t49 = first29;
          lowest32 = t49;
        }
    }
  int* t50 = lowest32;
  __retval31 = t50;
  int* t51 = __retval31;
  return t51;
}

// function: _Z4myfnii
_Bool myfn(int v52, int v53) {
bb54:
  int i55;
  int j56;
  _Bool __retval57;
  i55 = v52;
  j56 = v53;
  int t58 = i55;
  int t59 = j56;
  _Bool c60 = ((t58 < t59)) ? 1 : 0;
  __retval57 = c60;
  _Bool t61 = __retval57;
  return t61;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v62, int v63) {
bb64:
  int __a65;
  int __b66;
  int __retval67;
  __a65 = v62;
  __b66 = v63;
  int t68 = __a65;
  int t69 = __b66;
  int b70 = t68 | t69;
  __retval67 = b70;
  int t71 = __retval67;
  return t71;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v72) {
bb73:
  struct std__basic_ios_char__std__char_traits_char__* this74;
  int __retval75;
  this74 = v72;
  struct std__basic_ios_char__std__char_traits_char__* t76 = this74;
  struct std__ios_base* base77 = (struct std__ios_base*)((char *)t76 + 0);
  int t78 = base77->_M_streambuf_state;
  __retval75 = t78;
  int t79 = __retval75;
  return t79;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v80, int v81) {
bb82:
  struct std__basic_ios_char__std__char_traits_char__* this83;
  int __state84;
  this83 = v80;
  __state84 = v81;
  struct std__basic_ios_char__std__char_traits_char__* t85 = this83;
  int r86 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t85);
  int t87 = __state84;
  int r88 = std__operator_(r86, t87);
  std__basic_ios_char__std__char_traits_char_____clear(t85, r88);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb89:
  _Bool __retval90;
    _Bool c91 = 0;
    __retval90 = c91;
    _Bool t92 = __retval90;
    return t92;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v93, char* v94) {
bb95:
  char* __c196;
  char* __c297;
  _Bool __retval98;
  __c196 = v93;
  __c297 = v94;
  char* t99 = __c196;
  char t100 = *t99;
  int cast101 = (int)t100;
  char* t102 = __c297;
  char t103 = *t102;
  int cast104 = (int)t103;
  _Bool c105 = ((cast101 == cast104)) ? 1 : 0;
  __retval98 = c105;
  _Bool t106 = __retval98;
  return t106;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v107) {
bb108:
  char* __p109;
  unsigned long __retval110;
  unsigned long __i111;
  __p109 = v107;
  unsigned long c112 = 0;
  __i111 = c112;
    char ref_tmp0113;
    while (1) {
      unsigned long t114 = __i111;
      char* t115 = __p109;
      char* ptr116 = &(t115)[t114];
      char c117 = 0;
      ref_tmp0113 = c117;
      _Bool r118 = __gnu_cxx__char_traits_char___eq(ptr116, &ref_tmp0113);
      _Bool u119 = !r118;
      if (!u119) break;
      unsigned long t120 = __i111;
      unsigned long u121 = t120 + 1;
      __i111 = u121;
    }
  unsigned long t122 = __i111;
  __retval110 = t122;
  unsigned long t123 = __retval110;
  return t123;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v124) {
bb125:
  char* __s126;
  unsigned long __retval127;
  __s126 = v124;
    _Bool r128 = std____is_constant_evaluated();
    if (r128) {
      char* t129 = __s126;
      unsigned long r130 = __gnu_cxx__char_traits_char___length(t129);
      __retval127 = r130;
      unsigned long t131 = __retval127;
      return t131;
    }
  char* t132 = __s126;
  unsigned long r133 = strlen(t132);
  __retval127 = r133;
  unsigned long t134 = __retval127;
  return t134;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v135, char* v136) {
bb137:
  struct std__basic_ostream_char__std__char_traits_char__* __out138;
  char* __s139;
  struct std__basic_ostream_char__std__char_traits_char__* __retval140;
  __out138 = v135;
  __s139 = v136;
    char* t141 = __s139;
    _Bool cast142 = (_Bool)t141;
    _Bool u143 = !cast142;
    if (u143) {
      struct std__basic_ostream_char__std__char_traits_char__* t144 = __out138;
      void** v145 = (void**)t144;
      void* v146 = *((void**)v145);
      unsigned char* cast147 = (unsigned char*)v146;
      long c148 = -24;
      unsigned char* ptr149 = &(cast147)[c148];
      long* cast150 = (long*)ptr149;
      long t151 = *cast150;
      unsigned char* cast152 = (unsigned char*)t144;
      unsigned char* ptr153 = &(cast152)[t151];
      struct std__basic_ostream_char__std__char_traits_char__* cast154 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr153;
      struct std__basic_ios_char__std__char_traits_char__* cast155 = (struct std__basic_ios_char__std__char_traits_char__*)cast154;
      int t156 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast155, t156);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t157 = __out138;
      char* t158 = __s139;
      char* t159 = __s139;
      unsigned long r160 = std__char_traits_char___length(t159);
      long cast161 = (long)r160;
      struct std__basic_ostream_char__std__char_traits_char__* r162 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t157, t158, cast161);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t163 = __out138;
  __retval140 = t163;
  struct std__basic_ostream_char__std__char_traits_char__* t164 = __retval140;
  return t164;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v165, void* v166) {
bb167:
  struct std__basic_ostream_char__std__char_traits_char__* this168;
  void* __pf169;
  struct std__basic_ostream_char__std__char_traits_char__* __retval170;
  this168 = v165;
  __pf169 = v166;
  struct std__basic_ostream_char__std__char_traits_char__* t171 = this168;
  void* t172 = __pf169;
  struct std__basic_ostream_char__std__char_traits_char__* r173 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t172)(t171);
  __retval170 = r173;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = __retval170;
  return t174;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v175) {
bb176:
  struct std__basic_ostream_char__std__char_traits_char__* __os177;
  struct std__basic_ostream_char__std__char_traits_char__* __retval178;
  __os177 = v175;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __os177;
  struct std__basic_ostream_char__std__char_traits_char__* r180 = std__ostream__flush(t179);
  __retval178 = r180;
  struct std__basic_ostream_char__std__char_traits_char__* t181 = __retval178;
  return t181;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v182) {
bb183:
  struct std__ctype_char_* __f184;
  struct std__ctype_char_* __retval185;
  __f184 = v182;
    struct std__ctype_char_* t186 = __f184;
    _Bool cast187 = (_Bool)t186;
    _Bool u188 = !cast187;
    if (u188) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t189 = __f184;
  __retval185 = t189;
  struct std__ctype_char_* t190 = __retval185;
  return t190;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v191, char v192) {
bb193:
  struct std__ctype_char_* this194;
  char __c195;
  char __retval196;
  this194 = v191;
  __c195 = v192;
  struct std__ctype_char_* t197 = this194;
    char t198 = t197->_M_widen_ok;
    _Bool cast199 = (_Bool)t198;
    if (cast199) {
      char t200 = __c195;
      unsigned char cast201 = (unsigned char)t200;
      unsigned long cast202 = (unsigned long)cast201;
      char t203 = t197->_M_widen[cast202];
      __retval196 = t203;
      char t204 = __retval196;
      return t204;
    }
  std__ctype_char____M_widen_init___const(t197);
  char t205 = __c195;
  void** v206 = (void**)t197;
  void* v207 = *((void**)v206);
  char vcall210 = (char)__VERIFIER_virtual_call_char_char(t197, 6, t205);
  __retval196 = vcall210;
  char t211 = __retval196;
  return t211;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v212, char v213) {
bb214:
  struct std__basic_ios_char__std__char_traits_char__* this215;
  char __c216;
  char __retval217;
  this215 = v212;
  __c216 = v213;
  struct std__basic_ios_char__std__char_traits_char__* t218 = this215;
  struct std__ctype_char_* t219 = t218->_M_ctype;
  struct std__ctype_char_* r220 = std__ctype_char__const__std____check_facet_std__ctype_char___(t219);
  char t221 = __c216;
  char r222 = std__ctype_char___widen_char__const(r220, t221);
  __retval217 = r222;
  char t223 = __retval217;
  return t223;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v224) {
bb225:
  struct std__basic_ostream_char__std__char_traits_char__* __os226;
  struct std__basic_ostream_char__std__char_traits_char__* __retval227;
  __os226 = v224;
  struct std__basic_ostream_char__std__char_traits_char__* t228 = __os226;
  struct std__basic_ostream_char__std__char_traits_char__* t229 = __os226;
  void** v230 = (void**)t229;
  void* v231 = *((void**)v230);
  unsigned char* cast232 = (unsigned char*)v231;
  long c233 = -24;
  unsigned char* ptr234 = &(cast232)[c233];
  long* cast235 = (long*)ptr234;
  long t236 = *cast235;
  unsigned char* cast237 = (unsigned char*)t229;
  unsigned char* ptr238 = &(cast237)[t236];
  struct std__basic_ostream_char__std__char_traits_char__* cast239 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr238;
  struct std__basic_ios_char__std__char_traits_char__* cast240 = (struct std__basic_ios_char__std__char_traits_char__*)cast239;
  char c241 = 10;
  char r242 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast240, c241);
  struct std__basic_ostream_char__std__char_traits_char__* r243 = std__ostream__put(t228, r242);
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r243);
  __retval227 = r244;
  struct std__basic_ostream_char__std__char_traits_char__* t245 = __retval227;
  return t245;
}

// function: _Z11min_elementIiPFbiiEEPT_S3_S3_T0_
int* int__min_element_int__bool_____int__int___int___int___bool____(int* v246, int* v247, void* v248) {
bb249:
  int* first250;
  int* last251;
  void* pred252;
  int* __retval253;
  int* lowest254;
  first250 = v246;
  last251 = v247;
  pred252 = v248;
  int* t255 = first250;
  lowest254 = t255;
    int* t256 = first250;
    int* t257 = last251;
    _Bool c258 = ((t256 == t257)) ? 1 : 0;
    if (c258) {
      int* t259 = last251;
      __retval253 = t259;
      int* t260 = __retval253;
      return t260;
    }
    while (1) {
      int* t261 = first250;
      int c262 = 1;
      int* ptr263 = &(t261)[c262];
      first250 = ptr263;
      int* t264 = last251;
      _Bool c265 = ((ptr263 != t264)) ? 1 : 0;
      if (!c265) break;
        void* t266 = pred252;
        int* t267 = first250;
        int t268 = *t267;
        int* t269 = lowest254;
        int t270 = *t269;
        _Bool r271 = ((_Bool (*)(int, int))t266)(t268, t270);
        if (r271) {
          int* t272 = first250;
          lowest254 = t272;
        }
    }
  int* t273 = lowest254;
  __retval253 = t273;
  int* t274 = __retval253;
  return t274;
}

// function: _Z11max_elementIiPFbiiEEPT_S3_S3_T0_
int* int__max_element_int__bool_____int__int___int___int___bool____(int* v275, int* v276, void* v277) {
bb278:
  int* first279;
  int* last280;
  void* pred281;
  int* __retval282;
  int* largest283;
  first279 = v275;
  last280 = v276;
  pred281 = v277;
  int* t284 = first279;
  largest283 = t284;
    int* t285 = first279;
    int* t286 = last280;
    _Bool c287 = ((t285 == t286)) ? 1 : 0;
    if (c287) {
      int* t288 = last280;
      __retval282 = t288;
      int* t289 = __retval282;
      return t289;
    }
    while (1) {
      int* t290 = first279;
      int c291 = 1;
      int* ptr292 = &(t290)[c291];
      first279 = ptr292;
      int* t293 = last280;
      _Bool c294 = ((ptr292 != t293)) ? 1 : 0;
      if (!c294) break;
        void* t295 = pred281;
        int* t296 = largest283;
        int t297 = *t296;
        int* t298 = first279;
        int t299 = *t298;
        _Bool r300 = ((_Bool (*)(int, int))t295)(t297, t299);
        if (r300) {
          int* t301 = first279;
          largest283 = t301;
        }
    }
  int* t302 = largest283;
  __retval282 = t302;
  int* t303 = __retval282;
  return t303;
}

// function: _ZN7myclassclEii
_Bool myclass__operator__(struct myclass* v304, int v305, int v306) {
bb307:
  struct myclass* this308;
  int i309;
  int j310;
  _Bool __retval311;
  this308 = v304;
  i309 = v305;
  j310 = v306;
  struct myclass* t312 = this308;
  int t313 = i309;
  int t314 = j310;
  _Bool c315 = ((t313 < t314)) ? 1 : 0;
  __retval311 = c315;
  _Bool t316 = __retval311;
  return t316;
}

// function: _Z11min_elementIi7myclassEPT_S2_S2_T0_
int* int__min_element_int__myclass_(int* v317, int* v318, struct myclass v319) {
bb320:
  int* first321;
  int* last322;
  struct myclass pred323;
  int* __retval324;
  int* lowest325;
  first321 = v317;
  last322 = v318;
  pred323 = v319;
  int* t326 = first321;
  lowest325 = t326;
    int* t327 = first321;
    int* t328 = last322;
    _Bool c329 = ((t327 == t328)) ? 1 : 0;
    if (c329) {
      int* t330 = last322;
      __retval324 = t330;
      int* t331 = __retval324;
      return t331;
    }
    while (1) {
      int* t332 = first321;
      int c333 = 1;
      int* ptr334 = &(t332)[c333];
      first321 = ptr334;
      int* t335 = last322;
      _Bool c336 = ((ptr334 != t335)) ? 1 : 0;
      if (!c336) break;
        int* t337 = first321;
        int t338 = *t337;
        int* t339 = lowest325;
        int t340 = *t339;
        _Bool r341 = myclass__operator__(&pred323, t338, t340);
        if (r341) {
          int* t342 = first321;
          lowest325 = t342;
        }
    }
  int* t343 = lowest325;
  __retval324 = t343;
  int* t344 = __retval324;
  return t344;
}

// function: _Z11max_elementIi7myclassEPT_S2_S2_T0_
int* int__max_element_int__myclass_(int* v345, int* v346, struct myclass v347) {
bb348:
  int* first349;
  int* last350;
  struct myclass pred351;
  int* __retval352;
  int* largest353;
  first349 = v345;
  last350 = v346;
  pred351 = v347;
  int* t354 = first349;
  largest353 = t354;
    int* t355 = first349;
    int* t356 = last350;
    _Bool c357 = ((t355 == t356)) ? 1 : 0;
    if (c357) {
      int* t358 = last350;
      __retval352 = t358;
      int* t359 = __retval352;
      return t359;
    }
    while (1) {
      int* t360 = first349;
      int c361 = 1;
      int* ptr362 = &(t360)[c361];
      first349 = ptr362;
      int* t363 = last350;
      _Bool c364 = ((ptr362 != t363)) ? 1 : 0;
      if (!c364) break;
        int* t365 = largest353;
        int t366 = *t365;
        int* t367 = first349;
        int t368 = *t367;
        _Bool r369 = myclass__operator__(&pred351, t366, t368);
        if (r369) {
          int* t370 = first349;
          largest353 = t370;
        }
    }
  int* t371 = largest353;
  __retval352 = t371;
  int* t372 = __retval352;
  return t372;
}

// function: main
int main() {
bb373:
  int __retval374;
  int myints375[7];
  struct myclass agg_tmp0376;
  struct myclass agg_tmp1377;
  struct myclass agg_tmp2378;
  struct myclass agg_tmp3379;
  int c380 = 0;
  __retval374 = c380;
  // array copy
  __builtin_memcpy(myints375, __const_main_myints, (unsigned long)7 * sizeof(__const_main_myints[0]));
  char* cast381 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r382 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast381);
  int* cast383 = (int*)&(myints375);
  int* cast384 = (int*)&(myints375);
  int c385 = 7;
  int* ptr386 = &(cast384)[c385];
  int* r387 = min_element(cast383, ptr386);
  int t388 = *r387;
  struct std__basic_ostream_char__std__char_traits_char__* r389 = std__ostream__operator__(r382, t388);
  struct std__basic_ostream_char__std__char_traits_char__* r390 = std__ostream__operator___std__ostream_____(r389, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int* cast391 = (int*)&(myints375);
  int* cast392 = (int*)&(myints375);
  int c393 = 7;
  int* ptr394 = &(cast392)[c393];
  int* r395 = min_element(cast391, ptr394);
  int t396 = *r395;
  int c397 = 2;
  _Bool c398 = ((t396 == c397)) ? 1 : 0;
  if (c398) {
  } else {
    char* cast399 = (char*)&(_str_1);
    char* c400 = _str_2;
    unsigned int c401 = 110;
    char* cast402 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast399, c400, c401, cast402);
  }
  char* cast403 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r404 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast403);
  int* cast405 = (int*)&(myints375);
  int* cast406 = (int*)&(myints375);
  int c407 = 7;
  int* ptr408 = &(cast406)[c407];
  int* r409 = max_element(cast405, ptr408);
  int t410 = *r409;
  struct std__basic_ostream_char__std__char_traits_char__* r411 = std__ostream__operator__(r404, t410);
  struct std__basic_ostream_char__std__char_traits_char__* r412 = std__ostream__operator___std__ostream_____(r411, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int* cast413 = (int*)&(myints375);
  int* cast414 = (int*)&(myints375);
  int c415 = 7;
  int* ptr416 = &(cast414)[c415];
  int* r417 = max_element(cast413, ptr416);
  int t418 = *r417;
  int c419 = 9;
  _Bool c420 = ((t418 == c419)) ? 1 : 0;
  if (c420) {
  } else {
    char* cast421 = (char*)&(_str_4);
    char* c422 = _str_2;
    unsigned int c423 = 112;
    char* cast424 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast421, c422, c423, cast424);
  }
  char* cast425 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r426 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast425);
  int* cast427 = (int*)&(myints375);
  int* cast428 = (int*)&(myints375);
  int c429 = 7;
  int* ptr430 = &(cast428)[c429];
  int* r431 = int__min_element_int__bool_____int__int___int___int___bool____(cast427, ptr430, &myfn);
  int t432 = *r431;
  struct std__basic_ostream_char__std__char_traits_char__* r433 = std__ostream__operator__(r426, t432);
  struct std__basic_ostream_char__std__char_traits_char__* r434 = std__ostream__operator___std__ostream_____(r433, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int* cast435 = (int*)&(myints375);
  int* cast436 = (int*)&(myints375);
  int c437 = 7;
  int* ptr438 = &(cast436)[c437];
  int* r439 = int__min_element_int__bool_____int__int___int___int___bool____(cast435, ptr438, &myfn);
  int t440 = *r439;
  int c441 = 2;
  _Bool c442 = ((t440 == c441)) ? 1 : 0;
  if (c442) {
  } else {
    char* cast443 = (char*)&(_str_5);
    char* c444 = _str_2;
    unsigned int c445 = 116;
    char* cast446 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast443, c444, c445, cast446);
  }
  char* cast447 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r448 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast447);
  int* cast449 = (int*)&(myints375);
  int* cast450 = (int*)&(myints375);
  int c451 = 7;
  int* ptr452 = &(cast450)[c451];
  int* r453 = int__max_element_int__bool_____int__int___int___int___bool____(cast449, ptr452, &myfn);
  int t454 = *r453;
  struct std__basic_ostream_char__std__char_traits_char__* r455 = std__ostream__operator__(r448, t454);
  struct std__basic_ostream_char__std__char_traits_char__* r456 = std__ostream__operator___std__ostream_____(r455, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int* cast457 = (int*)&(myints375);
  int* cast458 = (int*)&(myints375);
  int c459 = 7;
  int* ptr460 = &(cast458)[c459];
  int* r461 = int__max_element_int__bool_____int__int___int___int___bool____(cast457, ptr460, &myfn);
  int t462 = *r461;
  int c463 = 9;
  _Bool c464 = ((t462 == c463)) ? 1 : 0;
  if (c464) {
  } else {
    char* cast465 = (char*)&(_str_6);
    char* c466 = _str_2;
    unsigned int c467 = 118;
    char* cast468 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast465, c466, c467, cast468);
  }
  char* cast469 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r470 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast469);
  int* cast471 = (int*)&(myints375);
  int* cast472 = (int*)&(myints375);
  int c473 = 7;
  int* ptr474 = &(cast472)[c473];
  struct myclass t475 = agg_tmp0376;
  int* r476 = int__min_element_int__myclass_(cast471, ptr474, t475);
  int t477 = *r476;
  struct std__basic_ostream_char__std__char_traits_char__* r478 = std__ostream__operator__(r470, t477);
  struct std__basic_ostream_char__std__char_traits_char__* r479 = std__ostream__operator___std__ostream_____(r478, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int* cast480 = (int*)&(myints375);
  int* cast481 = (int*)&(myints375);
  int c482 = 7;
  int* ptr483 = &(cast481)[c482];
  struct myclass t484 = agg_tmp1377;
  int* r485 = int__min_element_int__myclass_(cast480, ptr483, t484);
  int t486 = *r485;
  int c487 = 2;
  _Bool c488 = ((t486 == c487)) ? 1 : 0;
  if (c488) {
  } else {
    char* cast489 = (char*)&(_str_7);
    char* c490 = _str_2;
    unsigned int c491 = 122;
    char* cast492 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast489, c490, c491, cast492);
  }
  char* cast493 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r494 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast493);
  int* cast495 = (int*)&(myints375);
  int* cast496 = (int*)&(myints375);
  int c497 = 7;
  int* ptr498 = &(cast496)[c497];
  struct myclass t499 = agg_tmp2378;
  int* r500 = int__max_element_int__myclass_(cast495, ptr498, t499);
  int t501 = *r500;
  struct std__basic_ostream_char__std__char_traits_char__* r502 = std__ostream__operator__(r494, t501);
  struct std__basic_ostream_char__std__char_traits_char__* r503 = std__ostream__operator___std__ostream_____(r502, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int* cast504 = (int*)&(myints375);
  int* cast505 = (int*)&(myints375);
  int c506 = 7;
  int* ptr507 = &(cast505)[c506];
  struct myclass t508 = agg_tmp3379;
  int* r509 = int__max_element_int__myclass_(cast504, ptr507, t508);
  int t510 = *r509;
  int c511 = 9;
  _Bool c512 = ((t510 == c511)) ? 1 : 0;
  if (c512) {
  } else {
    char* cast513 = (char*)&(_str_8);
    char* c514 = _str_2;
    unsigned int c515 = 124;
    char* cast516 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast513, c514, c515, cast516);
  }
  int c517 = 0;
  __retval374 = c517;
  int t518 = __retval374;
  return t518;
}

