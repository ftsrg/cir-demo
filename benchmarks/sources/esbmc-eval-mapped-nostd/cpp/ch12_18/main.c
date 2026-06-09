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
struct std__ios_base { void* __field0; long __field1; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base10scientificE_const __attribute__((aligned(4))) = 256;
int _ZNSt8ios_base9basefieldE_const __attribute__((aligned(4))) = 74;
int _ZNSt8ios_base3octE_const __attribute__((aligned(4))) = 64;
int _ZNSt8ios_base8showbaseE_const __attribute__((aligned(4))) = 512;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[37] = "The value of the flags variable is: ";
char _str_1[43] = "\nPrint int and double in original format:\n";
char _str_2[40] = "\nPrint int and double in a new format:\n";
char _str_3[46] = "The restored value of the flags variable is: ";
char _str_4[41] = "\nPrint values in original format again:\n";
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int std__ios_base__flags___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__showbase(struct std__ios_base* p0);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator_(int p0, int p1);
int std__ios_base__setf_2(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__oct(struct std__ios_base* p0);
struct std__ios_base* std__scientific(struct std__ios_base* p0);
int std__ios_base__flags(struct std__ios_base* p0, int p1);
int main();

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v0) {
bb1:
  struct std__ios_base* this2;
  long __retval3;
  this2 = v0;
  struct std__ios_base* t4 = this2;
  long t5 = t4->_M_width;
  __retval3 = t5;
  long t6 = __retval3;
  return t6;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v7, char v8) {
bb9:
  struct std__basic_ostream_char__std__char_traits_char__* __out10;
  char __c11;
  struct std__basic_ostream_char__std__char_traits_char__* __retval12;
  __out10 = v7;
  __c11 = v8;
    struct std__basic_ostream_char__std__char_traits_char__* t13 = __out10;
    void** v14 = (void**)t13;
    void* v15 = *((void**)v14);
    unsigned char* cast16 = (unsigned char*)v15;
    long c17 = -24;
    unsigned char* ptr18 = &(cast16)[c17];
    long* cast19 = (long*)ptr18;
    long t20 = *cast19;
    unsigned char* cast21 = (unsigned char*)t13;
    unsigned char* ptr22 = &(cast21)[t20];
    struct std__basic_ostream_char__std__char_traits_char__* cast23 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr22;
    struct std__ios_base* cast24 = (struct std__ios_base*)cast23;
    long r25 = std__ios_base__width___const(cast24);
    long c26 = 0;
    _Bool c27 = ((r25 != c26)) ? 1 : 0;
    if (c27) {
      struct std__basic_ostream_char__std__char_traits_char__* t28 = __out10;
      long c29 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r30 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t28, &__c11, c29);
      __retval12 = r30;
      struct std__basic_ostream_char__std__char_traits_char__* t31 = __retval12;
      return t31;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t32 = __out10;
  char t33 = __c11;
  struct std__basic_ostream_char__std__char_traits_char__* r34 = std__ostream__put(t32, t33);
  struct std__basic_ostream_char__std__char_traits_char__* t35 = __out10;
  __retval12 = t35;
  struct std__basic_ostream_char__std__char_traits_char__* t36 = __retval12;
  return t36;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v37, int v38) {
bb39:
  int __a40;
  int __b41;
  int __retval42;
  __a40 = v37;
  __b41 = v38;
  int t43 = __a40;
  int t44 = __b41;
  int b45 = t43 | t44;
  __retval42 = b45;
  int t46 = __retval42;
  return t46;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v47) {
bb48:
  struct std__basic_ios_char__std__char_traits_char__* this49;
  int __retval50;
  this49 = v47;
  struct std__basic_ios_char__std__char_traits_char__* t51 = this49;
  struct std__ios_base* base52 = (struct std__ios_base*)((char *)t51 + 0);
  int t53 = base52->_M_streambuf_state;
  __retval50 = t53;
  int t54 = __retval50;
  return t54;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v55, int v56) {
bb57:
  struct std__basic_ios_char__std__char_traits_char__* this58;
  int __state59;
  this58 = v55;
  __state59 = v56;
  struct std__basic_ios_char__std__char_traits_char__* t60 = this58;
  int r61 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t60);
  int t62 = __state59;
  int r63 = std__operator__3(r61, t62);
  std__basic_ios_char__std__char_traits_char_____clear(t60, r63);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb64:
  _Bool __retval65;
    _Bool c66 = 0;
    __retval65 = c66;
    _Bool t67 = __retval65;
    return t67;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v68, char* v69) {
bb70:
  char* __c171;
  char* __c272;
  _Bool __retval73;
  __c171 = v68;
  __c272 = v69;
  char* t74 = __c171;
  char t75 = *t74;
  int cast76 = (int)t75;
  char* t77 = __c272;
  char t78 = *t77;
  int cast79 = (int)t78;
  _Bool c80 = ((cast76 == cast79)) ? 1 : 0;
  __retval73 = c80;
  _Bool t81 = __retval73;
  return t81;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v82) {
bb83:
  char* __p84;
  unsigned long __retval85;
  unsigned long __i86;
  __p84 = v82;
  unsigned long c87 = 0;
  __i86 = c87;
    char ref_tmp088;
    while (1) {
      unsigned long t89 = __i86;
      char* t90 = __p84;
      char* ptr91 = &(t90)[t89];
      char c92 = 0;
      ref_tmp088 = c92;
      _Bool r93 = __gnu_cxx__char_traits_char___eq(ptr91, &ref_tmp088);
      _Bool u94 = !r93;
      if (!u94) break;
      unsigned long t95 = __i86;
      unsigned long u96 = t95 + 1;
      __i86 = u96;
    }
  unsigned long t97 = __i86;
  __retval85 = t97;
  unsigned long t98 = __retval85;
  return t98;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v99) {
bb100:
  char* __s101;
  unsigned long __retval102;
  __s101 = v99;
    _Bool r103 = std____is_constant_evaluated();
    if (r103) {
      char* t104 = __s101;
      unsigned long r105 = __gnu_cxx__char_traits_char___length(t104);
      __retval102 = r105;
      unsigned long t106 = __retval102;
      return t106;
    }
  char* t107 = __s101;
  unsigned long r108 = strlen(t107);
  __retval102 = r108;
  unsigned long t109 = __retval102;
  return t109;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v110, char* v111) {
bb112:
  struct std__basic_ostream_char__std__char_traits_char__* __out113;
  char* __s114;
  struct std__basic_ostream_char__std__char_traits_char__* __retval115;
  __out113 = v110;
  __s114 = v111;
    char* t116 = __s114;
    _Bool cast117 = (_Bool)t116;
    _Bool u118 = !cast117;
    if (u118) {
      struct std__basic_ostream_char__std__char_traits_char__* t119 = __out113;
      void** v120 = (void**)t119;
      void* v121 = *((void**)v120);
      unsigned char* cast122 = (unsigned char*)v121;
      long c123 = -24;
      unsigned char* ptr124 = &(cast122)[c123];
      long* cast125 = (long*)ptr124;
      long t126 = *cast125;
      unsigned char* cast127 = (unsigned char*)t119;
      unsigned char* ptr128 = &(cast127)[t126];
      struct std__basic_ostream_char__std__char_traits_char__* cast129 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr128;
      struct std__basic_ios_char__std__char_traits_char__* cast130 = (struct std__basic_ios_char__std__char_traits_char__*)cast129;
      int t131 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast130, t131);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t132 = __out113;
      char* t133 = __s114;
      char* t134 = __s114;
      unsigned long r135 = std__char_traits_char___length(t134);
      long cast136 = (long)r135;
      struct std__basic_ostream_char__std__char_traits_char__* r137 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t132, t133, cast136);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __out113;
  __retval115 = t138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval115;
  return t139;
}

// function: _ZNKSt8ios_base5flagsEv
int std__ios_base__flags___const(struct std__ios_base* v140) {
bb141:
  struct std__ios_base* this142;
  int __retval143;
  this142 = v140;
  struct std__ios_base* t144 = this142;
  int t145 = t144->_M_flags;
  __retval143 = t145;
  int t146 = __retval143;
  return t146;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v147, double v148) {
bb149:
  struct std__basic_ostream_char__std__char_traits_char__* this150;
  double __f151;
  struct std__basic_ostream_char__std__char_traits_char__* __retval152;
  this150 = v147;
  __f151 = v148;
  struct std__basic_ostream_char__std__char_traits_char__* t153 = this150;
  double t154 = __f151;
  struct std__basic_ostream_char__std__char_traits_char__* r155 = std__ostream__std__ostream___M_insert_double_(t153, t154);
  __retval152 = r155;
  struct std__basic_ostream_char__std__char_traits_char__* t156 = __retval152;
  return t156;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v157, void* v158) {
bb159:
  struct std__basic_ostream_char__std__char_traits_char__* this160;
  void* __pf161;
  struct std__basic_ostream_char__std__char_traits_char__* __retval162;
  this160 = v157;
  __pf161 = v158;
  struct std__basic_ostream_char__std__char_traits_char__* t163 = this160;
  void* t164 = __pf161;
  struct std__basic_ostream_char__std__char_traits_char__* r165 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t164)(t163);
  __retval162 = r165;
  struct std__basic_ostream_char__std__char_traits_char__* t166 = __retval162;
  return t166;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v167) {
bb168:
  struct std__basic_ostream_char__std__char_traits_char__* __os169;
  struct std__basic_ostream_char__std__char_traits_char__* __retval170;
  __os169 = v167;
  struct std__basic_ostream_char__std__char_traits_char__* t171 = __os169;
  struct std__basic_ostream_char__std__char_traits_char__* r172 = std__ostream__flush(t171);
  __retval170 = r172;
  struct std__basic_ostream_char__std__char_traits_char__* t173 = __retval170;
  return t173;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v174) {
bb175:
  struct std__ctype_char_* __f176;
  struct std__ctype_char_* __retval177;
  __f176 = v174;
    struct std__ctype_char_* t178 = __f176;
    _Bool cast179 = (_Bool)t178;
    _Bool u180 = !cast179;
    if (u180) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t181 = __f176;
  __retval177 = t181;
  struct std__ctype_char_* t182 = __retval177;
  return t182;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v183, char v184) {
bb185:
  struct std__ctype_char_* this186;
  char __c187;
  char __retval188;
  this186 = v183;
  __c187 = v184;
  struct std__ctype_char_* t189 = this186;
    char t190 = t189->_M_widen_ok;
    _Bool cast191 = (_Bool)t190;
    if (cast191) {
      char t192 = __c187;
      unsigned char cast193 = (unsigned char)t192;
      unsigned long cast194 = (unsigned long)cast193;
      char t195 = t189->_M_widen[cast194];
      __retval188 = t195;
      char t196 = __retval188;
      return t196;
    }
  std__ctype_char____M_widen_init___const(t189);
  char t197 = __c187;
  void** v198 = (void**)t189;
  void* v199 = *((void**)v198);
  char vcall202 = (char)__VERIFIER_virtual_call_char_char(t189, 6, t197);
  __retval188 = vcall202;
  char t203 = __retval188;
  return t203;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v204, char v205) {
bb206:
  struct std__basic_ios_char__std__char_traits_char__* this207;
  char __c208;
  char __retval209;
  this207 = v204;
  __c208 = v205;
  struct std__basic_ios_char__std__char_traits_char__* t210 = this207;
  struct std__ctype_char_* t211 = t210->_M_ctype;
  struct std__ctype_char_* r212 = std__ctype_char__const__std____check_facet_std__ctype_char___(t211);
  char t213 = __c208;
  char r214 = std__ctype_char___widen_char__const(r212, t213);
  __retval209 = r214;
  char t215 = __retval209;
  return t215;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v216) {
bb217:
  struct std__basic_ostream_char__std__char_traits_char__* __os218;
  struct std__basic_ostream_char__std__char_traits_char__* __retval219;
  __os218 = v216;
  struct std__basic_ostream_char__std__char_traits_char__* t220 = __os218;
  struct std__basic_ostream_char__std__char_traits_char__* t221 = __os218;
  void** v222 = (void**)t221;
  void* v223 = *((void**)v222);
  unsigned char* cast224 = (unsigned char*)v223;
  long c225 = -24;
  unsigned char* ptr226 = &(cast224)[c225];
  long* cast227 = (long*)ptr226;
  long t228 = *cast227;
  unsigned char* cast229 = (unsigned char*)t221;
  unsigned char* ptr230 = &(cast229)[t228];
  struct std__basic_ostream_char__std__char_traits_char__* cast231 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr230;
  struct std__basic_ios_char__std__char_traits_char__* cast232 = (struct std__basic_ios_char__std__char_traits_char__*)cast231;
  char c233 = 10;
  char r234 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast232, c233);
  struct std__basic_ostream_char__std__char_traits_char__* r235 = std__ostream__put(t220, r234);
  struct std__basic_ostream_char__std__char_traits_char__* r236 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r235);
  __retval219 = r236;
  struct std__basic_ostream_char__std__char_traits_char__* t237 = __retval219;
  return t237;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v238, void* v239) {
bb240:
  struct std__basic_ostream_char__std__char_traits_char__* this241;
  void* __pf242;
  struct std__basic_ostream_char__std__char_traits_char__* __retval243;
  this241 = v238;
  __pf242 = v239;
  struct std__basic_ostream_char__std__char_traits_char__* t244 = this241;
  void* t245 = __pf242;
  void** v246 = (void**)t244;
  void* v247 = *((void**)v246);
  unsigned char* cast248 = (unsigned char*)v247;
  long c249 = -24;
  unsigned char* ptr250 = &(cast248)[c249];
  long* cast251 = (long*)ptr250;
  long t252 = *cast251;
  unsigned char* cast253 = (unsigned char*)t244;
  unsigned char* ptr254 = &(cast253)[t252];
  struct std__basic_ostream_char__std__char_traits_char__* cast255 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr254;
  struct std__ios_base* cast256 = (struct std__ios_base*)cast255;
  struct std__ios_base* r257 = ((struct std__ios_base* (*)(struct std__ios_base*))t245)(cast256);
  __retval243 = t244;
  struct std__basic_ostream_char__std__char_traits_char__* t258 = __retval243;
  return t258;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v259, int v260) {
bb261:
  int __a262;
  int __b263;
  int __retval264;
  __a262 = v259;
  __b263 = v260;
  int t265 = __a262;
  int t266 = __b263;
  int b267 = t265 | t266;
  __retval264 = b267;
  int t268 = __retval264;
  return t268;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v269, int v270) {
bb271:
  int* __a272;
  int __b273;
  int* __retval274;
  __a272 = v269;
  __b273 = v270;
  int* t275 = __a272;
  int t276 = *t275;
  int t277 = __b273;
  int r278 = std__operator__4(t276, t277);
  int* t279 = __a272;
  *t279 = r278;
  __retval274 = t279;
  int* t280 = __retval274;
  return t280;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v281, int v282) {
bb283:
  struct std__ios_base* this284;
  int __fmtfl285;
  int __retval286;
  int __old287;
  this284 = v281;
  __fmtfl285 = v282;
  struct std__ios_base* t288 = this284;
  int t289 = t288->_M_flags;
  __old287 = t289;
  int t290 = __fmtfl285;
  int* r291 = std__operator___2(&t288->_M_flags, t290);
  int t292 = __old287;
  __retval286 = t292;
  int t293 = __retval286;
  return t293;
}

// function: _ZSt8showbaseRSt8ios_base
struct std__ios_base* std__showbase(struct std__ios_base* v294) {
bb295:
  struct std__ios_base* __base296;
  struct std__ios_base* __retval297;
  __base296 = v294;
  struct std__ios_base* t298 = __base296;
  int t299 = _ZNSt8ios_base8showbaseE_const;
  int r300 = std__ios_base__setf(t298, t299);
  struct std__ios_base* t301 = __base296;
  __retval297 = t301;
  struct std__ios_base* t302 = __retval297;
  return t302;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v303, int v304) {
bb305:
  int* __a306;
  int __b307;
  int* __retval308;
  __a306 = v303;
  __b307 = v304;
  int* t309 = __a306;
  int t310 = *t309;
  int t311 = __b307;
  int r312 = std__operator_(t310, t311);
  int* t313 = __a306;
  *t313 = r312;
  __retval308 = t313;
  int* t314 = __retval308;
  return t314;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v315) {
bb316:
  int __a317;
  int __retval318;
  __a317 = v315;
  int t319 = __a317;
  int u320 = ~t319;
  __retval318 = u320;
  int t321 = __retval318;
  return t321;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v322, int v323) {
bb324:
  int __a325;
  int __b326;
  int __retval327;
  __a325 = v322;
  __b326 = v323;
  int t328 = __a325;
  int t329 = __b326;
  int b330 = t328 & t329;
  __retval327 = b330;
  int t331 = __retval327;
  return t331;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf_2(struct std__ios_base* v332, int v333, int v334) {
bb335:
  struct std__ios_base* this336;
  int __fmtfl337;
  int __mask338;
  int __retval339;
  int __old340;
  this336 = v332;
  __fmtfl337 = v333;
  __mask338 = v334;
  struct std__ios_base* t341 = this336;
  int t342 = t341->_M_flags;
  __old340 = t342;
  int t343 = __mask338;
  int r344 = std__operator__2(t343);
  int* r345 = std__operator__(&t341->_M_flags, r344);
  int t346 = __fmtfl337;
  int t347 = __mask338;
  int r348 = std__operator_(t346, t347);
  int* r349 = std__operator___2(&t341->_M_flags, r348);
  int t350 = __old340;
  __retval339 = t350;
  int t351 = __retval339;
  return t351;
}

// function: _ZSt3octRSt8ios_base
struct std__ios_base* std__oct(struct std__ios_base* v352) {
bb353:
  struct std__ios_base* __base354;
  struct std__ios_base* __retval355;
  __base354 = v352;
  struct std__ios_base* t356 = __base354;
  int t357 = _ZNSt8ios_base3octE_const;
  int t358 = _ZNSt8ios_base9basefieldE_const;
  int r359 = std__ios_base__setf_2(t356, t357, t358);
  struct std__ios_base* t360 = __base354;
  __retval355 = t360;
  struct std__ios_base* t361 = __retval355;
  return t361;
}

// function: _ZSt10scientificRSt8ios_base
struct std__ios_base* std__scientific(struct std__ios_base* v362) {
bb363:
  struct std__ios_base* __base364;
  struct std__ios_base* __retval365;
  __base364 = v362;
  struct std__ios_base* t366 = __base364;
  int t367 = _ZNSt8ios_base10scientificE_const;
  int t368 = _ZNSt8ios_base10floatfieldE_const;
  int r369 = std__ios_base__setf_2(t366, t367, t368);
  struct std__ios_base* t370 = __base364;
  __retval365 = t370;
  struct std__ios_base* t371 = __retval365;
  return t371;
}

// function: _ZNSt8ios_base5flagsESt13_Ios_Fmtflags
int std__ios_base__flags(struct std__ios_base* v372, int v373) {
bb374:
  struct std__ios_base* this375;
  int __fmtfl376;
  int __retval377;
  int __old378;
  this375 = v372;
  __fmtfl376 = v373;
  struct std__ios_base* t379 = this375;
  int t380 = t379->_M_flags;
  __old378 = t380;
  int t381 = __fmtfl376;
  t379->_M_flags = t381;
  int t382 = __old378;
  __retval377 = t382;
  int t383 = __retval377;
  return t383;
}

// function: main
int main() {
bb384:
  int __retval385;
  int integerValue386;
  double doubleValue387;
  int originalFormat388;
  int c389 = 0;
  __retval385 = c389;
  int c390 = 1000;
  integerValue386 = c390;
  double c391 = 0x1.8425ff6e09c8dp-4;
  doubleValue387 = c391;
  char* cast392 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r393 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast392);
  void** v394 = (void**)&_ZSt4cout;
  void* v395 = *((void**)v394);
  unsigned char* cast396 = (unsigned char*)v395;
  long c397 = -24;
  unsigned char* ptr398 = &(cast396)[c397];
  long* cast399 = (long*)ptr398;
  long t400 = *cast399;
  unsigned char* cast401 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr402 = &(cast401)[t400];
  struct std__basic_ostream_char__std__char_traits_char__* cast403 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr402;
  struct std__ios_base* cast404 = (struct std__ios_base*)cast403;
  int r405 = std__ios_base__flags___const(cast404);
  struct std__basic_ostream_char__std__char_traits_char__* r406 = std__ostream__operator___2(r393, r405);
  char* cast407 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r408 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r406, cast407);
  int t409 = integerValue386;
  struct std__basic_ostream_char__std__char_traits_char__* r410 = std__ostream__operator___2(r408, t409);
  char c411 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* r412 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r410, c411);
  double t413 = doubleValue387;
  struct std__basic_ostream_char__std__char_traits_char__* r414 = std__ostream__operator__(r412, t413);
  struct std__basic_ostream_char__std__char_traits_char__* r415 = std__ostream__operator___std__ostream_____(r414, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r416 = std__ostream__operator___std__ostream_____(r415, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  void** v417 = (void**)&_ZSt4cout;
  void* v418 = *((void**)v417);
  unsigned char* cast419 = (unsigned char*)v418;
  long c420 = -24;
  unsigned char* ptr421 = &(cast419)[c420];
  long* cast422 = (long*)ptr421;
  long t423 = *cast422;
  unsigned char* cast424 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr425 = &(cast424)[t423];
  struct std__basic_ostream_char__std__char_traits_char__* cast426 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr425;
  struct std__ios_base* cast427 = (struct std__ios_base*)cast426;
  int r428 = std__ios_base__flags___const(cast427);
  originalFormat388 = r428;
  struct std__basic_ostream_char__std__char_traits_char__* r429 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__showbase);
  struct std__basic_ostream_char__std__char_traits_char__* r430 = std__ostream__operator___std__ios_base_____(r429, &std__oct);
  struct std__basic_ostream_char__std__char_traits_char__* r431 = std__ostream__operator___std__ios_base_____(r430, &std__scientific);
  char* cast432 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r433 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast432);
  void** v434 = (void**)&_ZSt4cout;
  void* v435 = *((void**)v434);
  unsigned char* cast436 = (unsigned char*)v435;
  long c437 = -24;
  unsigned char* ptr438 = &(cast436)[c437];
  long* cast439 = (long*)ptr438;
  long t440 = *cast439;
  unsigned char* cast441 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr442 = &(cast441)[t440];
  struct std__basic_ostream_char__std__char_traits_char__* cast443 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr442;
  struct std__ios_base* cast444 = (struct std__ios_base*)cast443;
  int r445 = std__ios_base__flags___const(cast444);
  struct std__basic_ostream_char__std__char_traits_char__* r446 = std__ostream__operator___2(r433, r445);
  char* cast447 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r448 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r446, cast447);
  int t449 = integerValue386;
  struct std__basic_ostream_char__std__char_traits_char__* r450 = std__ostream__operator___2(r448, t449);
  char c451 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* r452 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r450, c451);
  double t453 = doubleValue387;
  struct std__basic_ostream_char__std__char_traits_char__* r454 = std__ostream__operator__(r452, t453);
  struct std__basic_ostream_char__std__char_traits_char__* r455 = std__ostream__operator___std__ostream_____(r454, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r456 = std__ostream__operator___std__ostream_____(r455, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  void** v457 = (void**)&_ZSt4cout;
  void* v458 = *((void**)v457);
  unsigned char* cast459 = (unsigned char*)v458;
  long c460 = -24;
  unsigned char* ptr461 = &(cast459)[c460];
  long* cast462 = (long*)ptr461;
  long t463 = *cast462;
  unsigned char* cast464 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr465 = &(cast464)[t463];
  struct std__basic_ostream_char__std__char_traits_char__* cast466 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr465;
  struct std__ios_base* cast467 = (struct std__ios_base*)cast466;
  int t468 = originalFormat388;
  int r469 = std__ios_base__flags(cast467, t468);
  char* cast470 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r471 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast470);
  void** v472 = (void**)&_ZSt4cout;
  void* v473 = *((void**)v472);
  unsigned char* cast474 = (unsigned char*)v473;
  long c475 = -24;
  unsigned char* ptr476 = &(cast474)[c475];
  long* cast477 = (long*)ptr476;
  long t478 = *cast477;
  unsigned char* cast479 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr480 = &(cast479)[t478];
  struct std__basic_ostream_char__std__char_traits_char__* cast481 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr480;
  struct std__ios_base* cast482 = (struct std__ios_base*)cast481;
  int r483 = std__ios_base__flags___const(cast482);
  struct std__basic_ostream_char__std__char_traits_char__* r484 = std__ostream__operator___2(r471, r483);
  char* cast485 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r486 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r484, cast485);
  int t487 = integerValue386;
  struct std__basic_ostream_char__std__char_traits_char__* r488 = std__ostream__operator___2(r486, t487);
  char c489 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* r490 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r488, c489);
  double t491 = doubleValue387;
  struct std__basic_ostream_char__std__char_traits_char__* r492 = std__ostream__operator__(r490, t491);
  struct std__basic_ostream_char__std__char_traits_char__* r493 = std__ostream__operator___std__ostream_____(r492, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c494 = 0;
  __retval385 = c494;
  int t495 = __retval385;
  return t495;
}

