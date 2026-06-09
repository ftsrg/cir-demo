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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Input three integer values: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[31] = "The maximum integer value is: ";
char _str_2[30] = "\n\nInput three double values: ";
char _str_3[30] = "The maximum double value is: ";
char _str_4[27] = "\n\nInput three characters: ";
char _str_5[33] = "The maximum character value is: ";
int int_maximum_int_(int p0, int p1, int p2);
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
double double_maximum_double_(double p0, double p1, double p2);
extern struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
char char_maximum_char_(char p0, char p1, char p2);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
int main();

// function: _Z7maximumIiET_S0_S0_S0_
int int_maximum_int_(int v0, int v1, int v2) {
bb3:
  int value14;
  int value25;
  int value36;
  int __retval7;
  int max8;
  value14 = v0;
  value25 = v1;
  value36 = v2;
  int t9 = value14;
  max8 = t9;
    int t10 = value25;
    int t11 = max8;
    _Bool c12 = ((t10 > t11)) ? 1 : 0;
    if (c12) {
      int t13 = value25;
      max8 = t13;
    }
    int t14 = value36;
    int t15 = max8;
    _Bool c16 = ((t14 > t15)) ? 1 : 0;
    if (c16) {
      int t17 = value36;
      max8 = t17;
    }
  int t18 = max8;
  __retval7 = t18;
  int t19 = __retval7;
  return t19;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v20, int v21) {
bb22:
  int __a23;
  int __b24;
  int __retval25;
  __a23 = v20;
  __b24 = v21;
  int t26 = __a23;
  int t27 = __b24;
  int b28 = t26 | t27;
  __retval25 = b28;
  int t29 = __retval25;
  return t29;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v30) {
bb31:
  struct std__basic_ios_char__std__char_traits_char__* this32;
  int __retval33;
  this32 = v30;
  struct std__basic_ios_char__std__char_traits_char__* t34 = this32;
  struct std__ios_base* base35 = (struct std__ios_base*)((char *)t34 + 0);
  int t36 = base35->_M_streambuf_state;
  __retval33 = t36;
  int t37 = __retval33;
  return t37;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v38, int v39) {
bb40:
  struct std__basic_ios_char__std__char_traits_char__* this41;
  int __state42;
  this41 = v38;
  __state42 = v39;
  struct std__basic_ios_char__std__char_traits_char__* t43 = this41;
  int r44 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t43);
  int t45 = __state42;
  int r46 = std__operator_(r44, t45);
  std__basic_ios_char__std__char_traits_char_____clear(t43, r46);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb47:
  _Bool __retval48;
    _Bool c49 = 0;
    __retval48 = c49;
    _Bool t50 = __retval48;
    return t50;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v51, char* v52) {
bb53:
  char* __c154;
  char* __c255;
  _Bool __retval56;
  __c154 = v51;
  __c255 = v52;
  char* t57 = __c154;
  char t58 = *t57;
  int cast59 = (int)t58;
  char* t60 = __c255;
  char t61 = *t60;
  int cast62 = (int)t61;
  _Bool c63 = ((cast59 == cast62)) ? 1 : 0;
  __retval56 = c63;
  _Bool t64 = __retval56;
  return t64;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v65) {
bb66:
  char* __p67;
  unsigned long __retval68;
  unsigned long __i69;
  __p67 = v65;
  unsigned long c70 = 0;
  __i69 = c70;
    char ref_tmp071;
    while (1) {
      unsigned long t72 = __i69;
      char* t73 = __p67;
      char* ptr74 = &(t73)[t72];
      char c75 = 0;
      ref_tmp071 = c75;
      _Bool r76 = __gnu_cxx__char_traits_char___eq(ptr74, &ref_tmp071);
      _Bool u77 = !r76;
      if (!u77) break;
      unsigned long t78 = __i69;
      unsigned long u79 = t78 + 1;
      __i69 = u79;
    }
  unsigned long t80 = __i69;
  __retval68 = t80;
  unsigned long t81 = __retval68;
  return t81;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v82) {
bb83:
  char* __s84;
  unsigned long __retval85;
  __s84 = v82;
    _Bool r86 = std____is_constant_evaluated();
    if (r86) {
      char* t87 = __s84;
      unsigned long r88 = __gnu_cxx__char_traits_char___length(t87);
      __retval85 = r88;
      unsigned long t89 = __retval85;
      return t89;
    }
  char* t90 = __s84;
  unsigned long r91 = strlen(t90);
  __retval85 = r91;
  unsigned long t92 = __retval85;
  return t92;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v93, char* v94) {
bb95:
  struct std__basic_ostream_char__std__char_traits_char__* __out96;
  char* __s97;
  struct std__basic_ostream_char__std__char_traits_char__* __retval98;
  __out96 = v93;
  __s97 = v94;
    char* t99 = __s97;
    _Bool cast100 = (_Bool)t99;
    _Bool u101 = !cast100;
    if (u101) {
      struct std__basic_ostream_char__std__char_traits_char__* t102 = __out96;
      void** v103 = (void**)t102;
      void* v104 = *((void**)v103);
      unsigned char* cast105 = (unsigned char*)v104;
      long c106 = -24;
      unsigned char* ptr107 = &(cast105)[c106];
      long* cast108 = (long*)ptr107;
      long t109 = *cast108;
      unsigned char* cast110 = (unsigned char*)t102;
      unsigned char* ptr111 = &(cast110)[t109];
      struct std__basic_ostream_char__std__char_traits_char__* cast112 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr111;
      struct std__basic_ios_char__std__char_traits_char__* cast113 = (struct std__basic_ios_char__std__char_traits_char__*)cast112;
      int t114 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast113, t114);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t115 = __out96;
      char* t116 = __s97;
      char* t117 = __s97;
      unsigned long r118 = std__char_traits_char___length(t117);
      long cast119 = (long)r118;
      struct std__basic_ostream_char__std__char_traits_char__* r120 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t115, t116, cast119);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t121 = __out96;
  __retval98 = t121;
  struct std__basic_ostream_char__std__char_traits_char__* t122 = __retval98;
  return t122;
}

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v123, double* v124) {
bb125:
  struct std__basic_istream_char__std__char_traits_char__* this126;
  double* __f127;
  struct std__basic_istream_char__std__char_traits_char__* __retval128;
  this126 = v123;
  __f127 = v124;
  struct std__basic_istream_char__std__char_traits_char__* t129 = this126;
  double* t130 = __f127;
  struct std__basic_istream_char__std__char_traits_char__* r131 = std__istream__std__istream___M_extract_double_(t129, t130);
  __retval128 = r131;
  struct std__basic_istream_char__std__char_traits_char__* t132 = __retval128;
  return t132;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v133, double v134) {
bb135:
  struct std__basic_ostream_char__std__char_traits_char__* this136;
  double __f137;
  struct std__basic_ostream_char__std__char_traits_char__* __retval138;
  this136 = v133;
  __f137 = v134;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = this136;
  double t140 = __f137;
  struct std__basic_ostream_char__std__char_traits_char__* r141 = std__ostream__std__ostream___M_insert_double_(t139, t140);
  __retval138 = r141;
  struct std__basic_ostream_char__std__char_traits_char__* t142 = __retval138;
  return t142;
}

// function: _Z7maximumIdET_S0_S0_S0_
double double_maximum_double_(double v143, double v144, double v145) {
bb146:
  double value1147;
  double value2148;
  double value3149;
  double __retval150;
  double max151;
  value1147 = v143;
  value2148 = v144;
  value3149 = v145;
  double t152 = value1147;
  max151 = t152;
    double t153 = value2148;
    double t154 = max151;
    _Bool c155 = ((t153 > t154)) ? 1 : 0;
    if (c155) {
      double t156 = value2148;
      max151 = t156;
    }
    double t157 = value3149;
    double t158 = max151;
    _Bool c159 = ((t157 > t158)) ? 1 : 0;
    if (c159) {
      double t160 = value3149;
      max151 = t160;
    }
  double t161 = max151;
  __retval150 = t161;
  double t162 = __retval150;
  return t162;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v163) {
bb164:
  struct std__ios_base* this165;
  long __retval166;
  this165 = v163;
  struct std__ios_base* t167 = this165;
  long t168 = t167->_M_width;
  __retval166 = t168;
  long t169 = __retval166;
  return t169;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v170, char v171) {
bb172:
  struct std__basic_ostream_char__std__char_traits_char__* __out173;
  char __c174;
  struct std__basic_ostream_char__std__char_traits_char__* __retval175;
  __out173 = v170;
  __c174 = v171;
    struct std__basic_ostream_char__std__char_traits_char__* t176 = __out173;
    void** v177 = (void**)t176;
    void* v178 = *((void**)v177);
    unsigned char* cast179 = (unsigned char*)v178;
    long c180 = -24;
    unsigned char* ptr181 = &(cast179)[c180];
    long* cast182 = (long*)ptr181;
    long t183 = *cast182;
    unsigned char* cast184 = (unsigned char*)t176;
    unsigned char* ptr185 = &(cast184)[t183];
    struct std__basic_ostream_char__std__char_traits_char__* cast186 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr185;
    struct std__ios_base* cast187 = (struct std__ios_base*)cast186;
    long r188 = std__ios_base__width___const(cast187);
    long c189 = 0;
    _Bool c190 = ((r188 != c189)) ? 1 : 0;
    if (c190) {
      struct std__basic_ostream_char__std__char_traits_char__* t191 = __out173;
      long c192 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r193 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t191, &__c174, c192);
      __retval175 = r193;
      struct std__basic_ostream_char__std__char_traits_char__* t194 = __retval175;
      return t194;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t195 = __out173;
  char t196 = __c174;
  struct std__basic_ostream_char__std__char_traits_char__* r197 = std__ostream__put(t195, t196);
  struct std__basic_ostream_char__std__char_traits_char__* t198 = __out173;
  __retval175 = t198;
  struct std__basic_ostream_char__std__char_traits_char__* t199 = __retval175;
  return t199;
}

// function: _Z7maximumIcET_S0_S0_S0_
char char_maximum_char_(char v200, char v201, char v202) {
bb203:
  char value1204;
  char value2205;
  char value3206;
  char __retval207;
  char max208;
  value1204 = v200;
  value2205 = v201;
  value3206 = v202;
  char t209 = value1204;
  max208 = t209;
    char t210 = value2205;
    int cast211 = (int)t210;
    char t212 = max208;
    int cast213 = (int)t212;
    _Bool c214 = ((cast211 > cast213)) ? 1 : 0;
    if (c214) {
      char t215 = value2205;
      max208 = t215;
    }
    char t216 = value3206;
    int cast217 = (int)t216;
    char t218 = max208;
    int cast219 = (int)t218;
    _Bool c220 = ((cast217 > cast219)) ? 1 : 0;
    if (c220) {
      char t221 = value3206;
      max208 = t221;
    }
  char t222 = max208;
  __retval207 = t222;
  char t223 = __retval207;
  return t223;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v224, void* v225) {
bb226:
  struct std__basic_ostream_char__std__char_traits_char__* this227;
  void* __pf228;
  struct std__basic_ostream_char__std__char_traits_char__* __retval229;
  this227 = v224;
  __pf228 = v225;
  struct std__basic_ostream_char__std__char_traits_char__* t230 = this227;
  void* t231 = __pf228;
  struct std__basic_ostream_char__std__char_traits_char__* r232 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t231)(t230);
  __retval229 = r232;
  struct std__basic_ostream_char__std__char_traits_char__* t233 = __retval229;
  return t233;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v234) {
bb235:
  struct std__basic_ostream_char__std__char_traits_char__* __os236;
  struct std__basic_ostream_char__std__char_traits_char__* __retval237;
  __os236 = v234;
  struct std__basic_ostream_char__std__char_traits_char__* t238 = __os236;
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__ostream__flush(t238);
  __retval237 = r239;
  struct std__basic_ostream_char__std__char_traits_char__* t240 = __retval237;
  return t240;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v241) {
bb242:
  struct std__ctype_char_* __f243;
  struct std__ctype_char_* __retval244;
  __f243 = v241;
    struct std__ctype_char_* t245 = __f243;
    _Bool cast246 = (_Bool)t245;
    _Bool u247 = !cast246;
    if (u247) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t248 = __f243;
  __retval244 = t248;
  struct std__ctype_char_* t249 = __retval244;
  return t249;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v250, char v251) {
bb252:
  struct std__ctype_char_* this253;
  char __c254;
  char __retval255;
  this253 = v250;
  __c254 = v251;
  struct std__ctype_char_* t256 = this253;
    char t257 = t256->_M_widen_ok;
    _Bool cast258 = (_Bool)t257;
    if (cast258) {
      char t259 = __c254;
      unsigned char cast260 = (unsigned char)t259;
      unsigned long cast261 = (unsigned long)cast260;
      char t262 = t256->_M_widen[cast261];
      __retval255 = t262;
      char t263 = __retval255;
      return t263;
    }
  std__ctype_char____M_widen_init___const(t256);
  char t264 = __c254;
  void** v265 = (void**)t256;
  void* v266 = *((void**)v265);
  char vcall269 = (char)__VERIFIER_virtual_call_char_char(t256, 6, t264);
  __retval255 = vcall269;
  char t270 = __retval255;
  return t270;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v271, char v272) {
bb273:
  struct std__basic_ios_char__std__char_traits_char__* this274;
  char __c275;
  char __retval276;
  this274 = v271;
  __c275 = v272;
  struct std__basic_ios_char__std__char_traits_char__* t277 = this274;
  struct std__ctype_char_* t278 = t277->_M_ctype;
  struct std__ctype_char_* r279 = std__ctype_char__const__std____check_facet_std__ctype_char___(t278);
  char t280 = __c275;
  char r281 = std__ctype_char___widen_char__const(r279, t280);
  __retval276 = r281;
  char t282 = __retval276;
  return t282;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v283) {
bb284:
  struct std__basic_ostream_char__std__char_traits_char__* __os285;
  struct std__basic_ostream_char__std__char_traits_char__* __retval286;
  __os285 = v283;
  struct std__basic_ostream_char__std__char_traits_char__* t287 = __os285;
  struct std__basic_ostream_char__std__char_traits_char__* t288 = __os285;
  void** v289 = (void**)t288;
  void* v290 = *((void**)v289);
  unsigned char* cast291 = (unsigned char*)v290;
  long c292 = -24;
  unsigned char* ptr293 = &(cast291)[c292];
  long* cast294 = (long*)ptr293;
  long t295 = *cast294;
  unsigned char* cast296 = (unsigned char*)t288;
  unsigned char* ptr297 = &(cast296)[t295];
  struct std__basic_ostream_char__std__char_traits_char__* cast298 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr297;
  struct std__basic_ios_char__std__char_traits_char__* cast299 = (struct std__basic_ios_char__std__char_traits_char__*)cast298;
  char c300 = 10;
  char r301 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast299, c300);
  struct std__basic_ostream_char__std__char_traits_char__* r302 = std__ostream__put(t287, r301);
  struct std__basic_ostream_char__std__char_traits_char__* r303 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r302);
  __retval286 = r303;
  struct std__basic_ostream_char__std__char_traits_char__* t304 = __retval286;
  return t304;
}

// function: main
int main() {
bb305:
  int __retval306;
  int int1307;
  int int2308;
  int int3309;
  double double1310;
  double double2311;
  double double3312;
  char char1313;
  char char2314;
  char char3315;
  int c316 = 0;
  __retval306 = c316;
  int c317 = 2;
  int c318 = 3;
  int c319 = 4;
  int r320 = int_maximum_int_(c317, c318, c319);
  char* cast321 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r322 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast321);
  struct std__basic_istream_char__std__char_traits_char__* r323 = std__istream__operator___2(&_ZSt3cin, &int1307);
  struct std__basic_istream_char__std__char_traits_char__* r324 = std__istream__operator___2(r323, &int2308);
  struct std__basic_istream_char__std__char_traits_char__* r325 = std__istream__operator___2(r324, &int3309);
  char* cast326 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r327 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast326);
  int t328 = int1307;
  int t329 = int2308;
  int t330 = int3309;
  int r331 = int_maximum_int_(t328, t329, t330);
  struct std__basic_ostream_char__std__char_traits_char__* r332 = std__ostream__operator___2(r327, r331);
  char* cast333 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r334 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast333);
  struct std__basic_istream_char__std__char_traits_char__* r335 = std__istream__operator__(&_ZSt3cin, &double1310);
  struct std__basic_istream_char__std__char_traits_char__* r336 = std__istream__operator__(r335, &double2311);
  struct std__basic_istream_char__std__char_traits_char__* r337 = std__istream__operator__(r336, &double3312);
  char* cast338 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r339 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast338);
  double t340 = double1310;
  double t341 = double2311;
  double t342 = double3312;
  double r343 = double_maximum_double_(t340, t341, t342);
  struct std__basic_ostream_char__std__char_traits_char__* r344 = std__ostream__operator__(r339, r343);
  char* cast345 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r346 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast345);
  struct std__basic_istream_char__std__char_traits_char__* r347 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(&_ZSt3cin, &char1313);
  struct std__basic_istream_char__std__char_traits_char__* r348 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(r347, &char2314);
  struct std__basic_istream_char__std__char_traits_char__* r349 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(r348, &char3315);
  char* cast350 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r351 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast350);
  char t352 = char1313;
  char t353 = char2314;
  char t354 = char3315;
  char r355 = char_maximum_char_(t352, t353, t354);
  struct std__basic_ostream_char__std__char_traits_char__* r356 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r351, r355);
  struct std__basic_ostream_char__std__char_traits_char__* r357 = std__ostream__operator___std__ostream_____(r356, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c358 = 0;
  __retval306 = c358;
  int t359 = __retval306;
  return t359;
}

