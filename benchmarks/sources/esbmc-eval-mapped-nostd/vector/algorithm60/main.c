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
char _str[11] = "max(1,2)==";
char _str_1[14] = "max(1,2) == 2";
char _str_2[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm60/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[11] = "max(2,1)==";
char _str_4[15] = "max('a','z')==";
char _str_5[17] = "max(3.14,2.73)==";
double max_2(double p0, double p1);
int max_3(int p0, int p1);
char max(char p0, char p1);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
long std__ios_base__width___const(struct std__ios_base* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
int main();

// function: _Z3maxdd
double max_2(double v0, double v1) {
bb2:
  double left3;
  double right4;
  double __retval5;
  left3 = v0;
  right4 = v1;
    double t6 = left3;
    double t7 = right4;
    _Bool c8 = ((t6 > t7)) ? 1 : 0;
    if (c8) {
      double t9 = left3;
      __retval5 = t9;
      double t10 = __retval5;
      return t10;
    } else {
      double t11 = right4;
      __retval5 = t11;
      double t12 = __retval5;
      return t12;
    }
  abort();
}

// function: _Z3maxii
int max_3(int v13, int v14) {
bb15:
  int left16;
  int right17;
  int __retval18;
  left16 = v13;
  right17 = v14;
    int t19 = left16;
    int t20 = right17;
    _Bool c21 = ((t19 > t20)) ? 1 : 0;
    if (c21) {
      int t22 = left16;
      __retval18 = t22;
      int t23 = __retval18;
      return t23;
    } else {
      int t24 = right17;
      __retval18 = t24;
      int t25 = __retval18;
      return t25;
    }
  abort();
}

// function: _Z3maxcc
char max(char v26, char v27) {
bb28:
  char left29;
  char right30;
  char __retval31;
  left29 = v26;
  right30 = v27;
    char t32 = left29;
    int cast33 = (int)t32;
    char t34 = right30;
    int cast35 = (int)t34;
    _Bool c36 = ((cast33 > cast35)) ? 1 : 0;
    if (c36) {
      char t37 = left29;
      __retval31 = t37;
      char t38 = __retval31;
      return t38;
    } else {
      char t39 = right30;
      __retval31 = t39;
      char t40 = __retval31;
      return t40;
    }
  abort();
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v41, int v42) {
bb43:
  int __a44;
  int __b45;
  int __retval46;
  __a44 = v41;
  __b45 = v42;
  int t47 = __a44;
  int t48 = __b45;
  int b49 = t47 | t48;
  __retval46 = b49;
  int t50 = __retval46;
  return t50;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v51) {
bb52:
  struct std__basic_ios_char__std__char_traits_char__* this53;
  int __retval54;
  this53 = v51;
  struct std__basic_ios_char__std__char_traits_char__* t55 = this53;
  struct std__ios_base* base56 = (struct std__ios_base*)((char *)t55 + 0);
  int t57 = base56->_M_streambuf_state;
  __retval54 = t57;
  int t58 = __retval54;
  return t58;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v59, int v60) {
bb61:
  struct std__basic_ios_char__std__char_traits_char__* this62;
  int __state63;
  this62 = v59;
  __state63 = v60;
  struct std__basic_ios_char__std__char_traits_char__* t64 = this62;
  int r65 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t64);
  int t66 = __state63;
  int r67 = std__operator_(r65, t66);
  std__basic_ios_char__std__char_traits_char_____clear(t64, r67);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb68:
  _Bool __retval69;
    _Bool c70 = 0;
    __retval69 = c70;
    _Bool t71 = __retval69;
    return t71;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v72, char* v73) {
bb74:
  char* __c175;
  char* __c276;
  _Bool __retval77;
  __c175 = v72;
  __c276 = v73;
  char* t78 = __c175;
  char t79 = *t78;
  int cast80 = (int)t79;
  char* t81 = __c276;
  char t82 = *t81;
  int cast83 = (int)t82;
  _Bool c84 = ((cast80 == cast83)) ? 1 : 0;
  __retval77 = c84;
  _Bool t85 = __retval77;
  return t85;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v86) {
bb87:
  char* __p88;
  unsigned long __retval89;
  unsigned long __i90;
  __p88 = v86;
  unsigned long c91 = 0;
  __i90 = c91;
    char ref_tmp092;
    while (1) {
      unsigned long t93 = __i90;
      char* t94 = __p88;
      char* ptr95 = &(t94)[t93];
      char c96 = 0;
      ref_tmp092 = c96;
      _Bool r97 = __gnu_cxx__char_traits_char___eq(ptr95, &ref_tmp092);
      _Bool u98 = !r97;
      if (!u98) break;
      unsigned long t99 = __i90;
      unsigned long u100 = t99 + 1;
      __i90 = u100;
    }
  unsigned long t101 = __i90;
  __retval89 = t101;
  unsigned long t102 = __retval89;
  return t102;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v103) {
bb104:
  char* __s105;
  unsigned long __retval106;
  __s105 = v103;
    _Bool r107 = std____is_constant_evaluated();
    if (r107) {
      char* t108 = __s105;
      unsigned long r109 = __gnu_cxx__char_traits_char___length(t108);
      __retval106 = r109;
      unsigned long t110 = __retval106;
      return t110;
    }
  char* t111 = __s105;
  unsigned long r112 = strlen(t111);
  __retval106 = r112;
  unsigned long t113 = __retval106;
  return t113;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v114, char* v115) {
bb116:
  struct std__basic_ostream_char__std__char_traits_char__* __out117;
  char* __s118;
  struct std__basic_ostream_char__std__char_traits_char__* __retval119;
  __out117 = v114;
  __s118 = v115;
    char* t120 = __s118;
    _Bool cast121 = (_Bool)t120;
    _Bool u122 = !cast121;
    if (u122) {
      struct std__basic_ostream_char__std__char_traits_char__* t123 = __out117;
      void** v124 = (void**)t123;
      void* v125 = *((void**)v124);
      unsigned char* cast126 = (unsigned char*)v125;
      long c127 = -24;
      unsigned char* ptr128 = &(cast126)[c127];
      long* cast129 = (long*)ptr128;
      long t130 = *cast129;
      unsigned char* cast131 = (unsigned char*)t123;
      unsigned char* ptr132 = &(cast131)[t130];
      struct std__basic_ostream_char__std__char_traits_char__* cast133 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr132;
      struct std__basic_ios_char__std__char_traits_char__* cast134 = (struct std__basic_ios_char__std__char_traits_char__*)cast133;
      int t135 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast134, t135);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t136 = __out117;
      char* t137 = __s118;
      char* t138 = __s118;
      unsigned long r139 = std__char_traits_char___length(t138);
      long cast140 = (long)r139;
      struct std__basic_ostream_char__std__char_traits_char__* r141 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t136, t137, cast140);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t142 = __out117;
  __retval119 = t142;
  struct std__basic_ostream_char__std__char_traits_char__* t143 = __retval119;
  return t143;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v144, void* v145) {
bb146:
  struct std__basic_ostream_char__std__char_traits_char__* this147;
  void* __pf148;
  struct std__basic_ostream_char__std__char_traits_char__* __retval149;
  this147 = v144;
  __pf148 = v145;
  struct std__basic_ostream_char__std__char_traits_char__* t150 = this147;
  void* t151 = __pf148;
  struct std__basic_ostream_char__std__char_traits_char__* r152 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t151)(t150);
  __retval149 = r152;
  struct std__basic_ostream_char__std__char_traits_char__* t153 = __retval149;
  return t153;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v154) {
bb155:
  struct std__basic_ostream_char__std__char_traits_char__* __os156;
  struct std__basic_ostream_char__std__char_traits_char__* __retval157;
  __os156 = v154;
  struct std__basic_ostream_char__std__char_traits_char__* t158 = __os156;
  struct std__basic_ostream_char__std__char_traits_char__* r159 = std__ostream__flush(t158);
  __retval157 = r159;
  struct std__basic_ostream_char__std__char_traits_char__* t160 = __retval157;
  return t160;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v161) {
bb162:
  struct std__ctype_char_* __f163;
  struct std__ctype_char_* __retval164;
  __f163 = v161;
    struct std__ctype_char_* t165 = __f163;
    _Bool cast166 = (_Bool)t165;
    _Bool u167 = !cast166;
    if (u167) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t168 = __f163;
  __retval164 = t168;
  struct std__ctype_char_* t169 = __retval164;
  return t169;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v170, char v171) {
bb172:
  struct std__ctype_char_* this173;
  char __c174;
  char __retval175;
  this173 = v170;
  __c174 = v171;
  struct std__ctype_char_* t176 = this173;
    char t177 = t176->_M_widen_ok;
    _Bool cast178 = (_Bool)t177;
    if (cast178) {
      char t179 = __c174;
      unsigned char cast180 = (unsigned char)t179;
      unsigned long cast181 = (unsigned long)cast180;
      char t182 = t176->_M_widen[cast181];
      __retval175 = t182;
      char t183 = __retval175;
      return t183;
    }
  std__ctype_char____M_widen_init___const(t176);
  char t184 = __c174;
  void** v185 = (void**)t176;
  void* v186 = *((void**)v185);
  char vcall189 = (char)__VERIFIER_virtual_call_char_char(t176, 6, t184);
  __retval175 = vcall189;
  char t190 = __retval175;
  return t190;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v191, char v192) {
bb193:
  struct std__basic_ios_char__std__char_traits_char__* this194;
  char __c195;
  char __retval196;
  this194 = v191;
  __c195 = v192;
  struct std__basic_ios_char__std__char_traits_char__* t197 = this194;
  struct std__ctype_char_* t198 = t197->_M_ctype;
  struct std__ctype_char_* r199 = std__ctype_char__const__std____check_facet_std__ctype_char___(t198);
  char t200 = __c195;
  char r201 = std__ctype_char___widen_char__const(r199, t200);
  __retval196 = r201;
  char t202 = __retval196;
  return t202;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v203) {
bb204:
  struct std__basic_ostream_char__std__char_traits_char__* __os205;
  struct std__basic_ostream_char__std__char_traits_char__* __retval206;
  __os205 = v203;
  struct std__basic_ostream_char__std__char_traits_char__* t207 = __os205;
  struct std__basic_ostream_char__std__char_traits_char__* t208 = __os205;
  void** v209 = (void**)t208;
  void* v210 = *((void**)v209);
  unsigned char* cast211 = (unsigned char*)v210;
  long c212 = -24;
  unsigned char* ptr213 = &(cast211)[c212];
  long* cast214 = (long*)ptr213;
  long t215 = *cast214;
  unsigned char* cast216 = (unsigned char*)t208;
  unsigned char* ptr217 = &(cast216)[t215];
  struct std__basic_ostream_char__std__char_traits_char__* cast218 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr217;
  struct std__basic_ios_char__std__char_traits_char__* cast219 = (struct std__basic_ios_char__std__char_traits_char__*)cast218;
  char c220 = 10;
  char r221 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast219, c220);
  struct std__basic_ostream_char__std__char_traits_char__* r222 = std__ostream__put(t207, r221);
  struct std__basic_ostream_char__std__char_traits_char__* r223 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r222);
  __retval206 = r223;
  struct std__basic_ostream_char__std__char_traits_char__* t224 = __retval206;
  return t224;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v225) {
bb226:
  struct std__ios_base* this227;
  long __retval228;
  this227 = v225;
  struct std__ios_base* t229 = this227;
  long t230 = t229->_M_width;
  __retval228 = t230;
  long t231 = __retval228;
  return t231;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v232, char v233) {
bb234:
  struct std__basic_ostream_char__std__char_traits_char__* __out235;
  char __c236;
  struct std__basic_ostream_char__std__char_traits_char__* __retval237;
  __out235 = v232;
  __c236 = v233;
    struct std__basic_ostream_char__std__char_traits_char__* t238 = __out235;
    void** v239 = (void**)t238;
    void* v240 = *((void**)v239);
    unsigned char* cast241 = (unsigned char*)v240;
    long c242 = -24;
    unsigned char* ptr243 = &(cast241)[c242];
    long* cast244 = (long*)ptr243;
    long t245 = *cast244;
    unsigned char* cast246 = (unsigned char*)t238;
    unsigned char* ptr247 = &(cast246)[t245];
    struct std__basic_ostream_char__std__char_traits_char__* cast248 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr247;
    struct std__ios_base* cast249 = (struct std__ios_base*)cast248;
    long r250 = std__ios_base__width___const(cast249);
    long c251 = 0;
    _Bool c252 = ((r250 != c251)) ? 1 : 0;
    if (c252) {
      struct std__basic_ostream_char__std__char_traits_char__* t253 = __out235;
      long c254 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r255 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t253, &__c236, c254);
      __retval237 = r255;
      struct std__basic_ostream_char__std__char_traits_char__* t256 = __retval237;
      return t256;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t257 = __out235;
  char t258 = __c236;
  struct std__basic_ostream_char__std__char_traits_char__* r259 = std__ostream__put(t257, t258);
  struct std__basic_ostream_char__std__char_traits_char__* t260 = __out235;
  __retval237 = t260;
  struct std__basic_ostream_char__std__char_traits_char__* t261 = __retval237;
  return t261;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v262, double v263) {
bb264:
  struct std__basic_ostream_char__std__char_traits_char__* this265;
  double __f266;
  struct std__basic_ostream_char__std__char_traits_char__* __retval267;
  this265 = v262;
  __f266 = v263;
  struct std__basic_ostream_char__std__char_traits_char__* t268 = this265;
  double t269 = __f266;
  struct std__basic_ostream_char__std__char_traits_char__* r270 = std__ostream__std__ostream___M_insert_double_(t268, t269);
  __retval267 = r270;
  struct std__basic_ostream_char__std__char_traits_char__* t271 = __retval267;
  return t271;
}

// function: main
int main() {
bb272:
  int __retval273;
  int c274 = 0;
  __retval273 = c274;
  char* cast275 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r276 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast275);
  int c277 = 1;
  int c278 = 2;
  int r279 = max_3(c277, c278);
  struct std__basic_ostream_char__std__char_traits_char__* r280 = std__ostream__operator___2(r276, r279);
  struct std__basic_ostream_char__std__char_traits_char__* r281 = std__ostream__operator___std__ostream_____(r280, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c282 = 1;
  int c283 = 2;
  int r284 = max_3(c282, c283);
  int c285 = 2;
  _Bool c286 = ((r284 == c285)) ? 1 : 0;
  if (c286) {
  } else {
    char* cast287 = (char*)&(_str_1);
    char* c288 = _str_2;
    unsigned int c289 = 44;
    char* cast290 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast287, c288, c289, cast290);
  }
  char* cast291 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r292 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast291);
  int c293 = 2;
  int c294 = 1;
  int r295 = max_3(c293, c294);
  struct std__basic_ostream_char__std__char_traits_char__* r296 = std__ostream__operator___2(r292, r295);
  struct std__basic_ostream_char__std__char_traits_char__* r297 = std__ostream__operator___std__ostream_____(r296, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast298 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r299 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast298);
  char c300 = 97;
  char c301 = 122;
  char r302 = max(c300, c301);
  struct std__basic_ostream_char__std__char_traits_char__* r303 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r299, r302);
  struct std__basic_ostream_char__std__char_traits_char__* r304 = std__ostream__operator___std__ostream_____(r303, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast305 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r306 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast305);
  double c307 = 0x1.91eb851eb851fp1;
  double c308 = 0x1.5d70a3d70a3d7p1;
  double r309 = max_2(c307, c308);
  struct std__basic_ostream_char__std__char_traits_char__* r310 = std__ostream__operator__(r306, r309);
  struct std__basic_ostream_char__std__char_traits_char__* r311 = std__ostream__operator___std__ostream_____(r310, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c312 = 0;
  __retval273 = c312;
  int t313 = __retval273;
  return t313;
}

