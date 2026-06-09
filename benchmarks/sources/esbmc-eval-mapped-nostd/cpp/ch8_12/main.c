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
struct String { int __field0; char* __field1; };
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
char _str[6] = "happy";
char _str_1[10] = " birthday";
char _str_2[1];
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[8] = "s1 is \"";
char _str_4[11] = "\"; s2 is \"";
char _str_5[11] = "\"; s3 is \"";
char _str_6[38] = "\n\nThe results of comparing s2 and s1:";
char _str_7[18] = "\ns2 == s1 yields ";
char _str_8[5] = "true";
char _str_9[6] = "false";
char _str_10[18] = "\ns2 != s1 yields ";
char _str_11[18] = "\ns2 >  s1 yields ";
char _str_12[18] = "\ns2 <  s1 yields ";
char _str_13[18] = "\ns2 >= s1 yields ";
char _str_14[18] = "\ns2 <= s1 yields ";
char _str_15[16] = "\n\nTesting !s3:\n";
char _str_16[34] = "s3 is empty; assigning s1 to s3;\n";
char _str_17[8] = "s3 is \"";
char _str_18[2] = "\"";
char _str_19[24] = "\n\ns1 += s2 yields s1 = ";
char _str_20[7] = "s1==s2";
char _str_21[98] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch8_12/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_22[26] = "\n\ns1 += \" to you\" yields\n";
char _str_23[8] = " to you";
char _str_24[6] = "s1 = ";
char _str_25[3] = "\n\n";
char _str_26[33] = "The substring of s1 starting at\n";
char _str_27[46] = "location 0 for 14 characters, s1(0, 14), is:\n";
char _str_28[29] = "location 15, s1(15, 0), is: ";
char _str_29[11] = "\n*s4Ptr = ";
char _str_30[28] = "assigning *s4Ptr to *s4Ptr\n";
char _str_31[10] = "*s4Ptr = ";
char _str_32[43] = "\ns1 after s1[0] = 'H' and s1[6] = 'B' is: ";
char _str_33[40] = "Attempt to assign 'd' to s1[30] yields:";
extern void String__String(struct String* p0, char* p1);
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
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct String* p1);
extern _Bool String__operator___String_const___const(struct String* p0, struct String* p1);
_Bool String__operator___String_const___const_4(struct String* p0, struct String* p1);
_Bool String__operator__String_const___const(struct String* p0, struct String* p1);
extern _Bool String__operator__String_const___const_2(struct String* p0, struct String* p1);
_Bool String__operator___String_const___const_2(struct String* p0, struct String* p1);
_Bool String__operator___String_const___const_3(struct String* p0, struct String* p1);
extern _Bool String__operator____const(struct String* p0);
extern struct String* String__operator_(struct String* p0, struct String* p1);
extern struct String* String__operator___3(struct String* p0, struct String* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void String___String(struct String* p0) {}
extern struct String String__operator__(struct String* p0, int p1, int p2);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
extern void String__String_2(struct String* p0, struct String* p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
extern char* String__operator___2(struct String* p0, int p1);
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

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v103) {
bb104:
  struct std__ios_base* this105;
  long __retval106;
  this105 = v103;
  struct std__ios_base* t107 = this105;
  long t108 = t107->_M_width;
  __retval106 = t108;
  long t109 = __retval106;
  return t109;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v110, char v111) {
bb112:
  struct std__basic_ostream_char__std__char_traits_char__* __out113;
  char __c114;
  struct std__basic_ostream_char__std__char_traits_char__* __retval115;
  __out113 = v110;
  __c114 = v111;
    struct std__basic_ostream_char__std__char_traits_char__* t116 = __out113;
    void** v117 = (void**)t116;
    void* v118 = *((void**)v117);
    unsigned char* cast119 = (unsigned char*)v118;
    long c120 = -24;
    unsigned char* ptr121 = &(cast119)[c120];
    long* cast122 = (long*)ptr121;
    long t123 = *cast122;
    unsigned char* cast124 = (unsigned char*)t116;
    unsigned char* ptr125 = &(cast124)[t123];
    struct std__basic_ostream_char__std__char_traits_char__* cast126 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr125;
    struct std__ios_base* cast127 = (struct std__ios_base*)cast126;
    long r128 = std__ios_base__width___const(cast127);
    long c129 = 0;
    _Bool c130 = ((r128 != c129)) ? 1 : 0;
    if (c130) {
      struct std__basic_ostream_char__std__char_traits_char__* t131 = __out113;
      long c132 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r133 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t131, &__c114, c132);
      __retval115 = r133;
      struct std__basic_ostream_char__std__char_traits_char__* t134 = __retval115;
      return t134;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __out113;
  char t136 = __c114;
  struct std__basic_ostream_char__std__char_traits_char__* r137 = std__ostream__put(t135, t136);
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __out113;
  __retval115 = t138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval115;
  return t139;
}

// function: _ZNK6StringneERKS_
_Bool String__operator___String_const___const_4(struct String* v140, struct String* v141) {
bb142:
  struct String* this143;
  struct String* right144;
  _Bool __retval145;
  this143 = v140;
  right144 = v141;
  struct String* t146 = this143;
  struct String* t147 = right144;
  _Bool r148 = String__operator___String_const___const(t146, t147);
  _Bool u149 = !r148;
  __retval145 = u149;
  _Bool t150 = __retval145;
  return t150;
}

// function: _ZNK6StringgtERKS_
_Bool String__operator__String_const___const(struct String* v151, struct String* v152) {
bb153:
  struct String* this154;
  struct String* right155;
  _Bool __retval156;
  this154 = v151;
  right155 = v152;
  struct String* t157 = this154;
  struct String* t158 = right155;
  _Bool r159 = String__operator__String_const___const_2(t158, t157);
  __retval156 = r159;
  _Bool t160 = __retval156;
  return t160;
}

// function: _ZNK6StringgeERKS_
_Bool String__operator___String_const___const_2(struct String* v161, struct String* v162) {
bb163:
  struct String* this164;
  struct String* right165;
  _Bool __retval166;
  this164 = v161;
  right165 = v162;
  struct String* t167 = this164;
  struct String* t168 = right165;
  _Bool r169 = String__operator__String_const___const_2(t167, t168);
  _Bool u170 = !r169;
  __retval166 = u170;
  _Bool t171 = __retval166;
  return t171;
}

// function: _ZNK6StringleERKS_
_Bool String__operator___String_const___const_3(struct String* v172, struct String* v173) {
bb174:
  struct String* this175;
  struct String* right176;
  _Bool __retval177;
  this175 = v172;
  right176 = v173;
  struct String* t178 = this175;
  struct String* t179 = right176;
  _Bool r180 = String__operator__String_const___const_2(t179, t178);
  _Bool u181 = !r180;
  __retval177 = u181;
  _Bool t182 = __retval177;
  return t182;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v183, void* v184) {
bb185:
  struct std__basic_ostream_char__std__char_traits_char__* this186;
  void* __pf187;
  struct std__basic_ostream_char__std__char_traits_char__* __retval188;
  this186 = v183;
  __pf187 = v184;
  struct std__basic_ostream_char__std__char_traits_char__* t189 = this186;
  void* t190 = __pf187;
  struct std__basic_ostream_char__std__char_traits_char__* r191 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t190)(t189);
  __retval188 = r191;
  struct std__basic_ostream_char__std__char_traits_char__* t192 = __retval188;
  return t192;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v193) {
bb194:
  struct std__basic_ostream_char__std__char_traits_char__* __os195;
  struct std__basic_ostream_char__std__char_traits_char__* __retval196;
  __os195 = v193;
  struct std__basic_ostream_char__std__char_traits_char__* t197 = __os195;
  struct std__basic_ostream_char__std__char_traits_char__* r198 = std__ostream__flush(t197);
  __retval196 = r198;
  struct std__basic_ostream_char__std__char_traits_char__* t199 = __retval196;
  return t199;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v200) {
bb201:
  struct std__ctype_char_* __f202;
  struct std__ctype_char_* __retval203;
  __f202 = v200;
    struct std__ctype_char_* t204 = __f202;
    _Bool cast205 = (_Bool)t204;
    _Bool u206 = !cast205;
    if (u206) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t207 = __f202;
  __retval203 = t207;
  struct std__ctype_char_* t208 = __retval203;
  return t208;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v209, char v210) {
bb211:
  struct std__ctype_char_* this212;
  char __c213;
  char __retval214;
  this212 = v209;
  __c213 = v210;
  struct std__ctype_char_* t215 = this212;
    char t216 = t215->_M_widen_ok;
    _Bool cast217 = (_Bool)t216;
    if (cast217) {
      char t218 = __c213;
      unsigned char cast219 = (unsigned char)t218;
      unsigned long cast220 = (unsigned long)cast219;
      char t221 = t215->_M_widen[cast220];
      __retval214 = t221;
      char t222 = __retval214;
      return t222;
    }
  std__ctype_char____M_widen_init___const(t215);
  char t223 = __c213;
  void** v224 = (void**)t215;
  void* v225 = *((void**)v224);
  char vcall228 = (char)__VERIFIER_virtual_call_char_char(t215, 6, t223);
  __retval214 = vcall228;
  char t229 = __retval214;
  return t229;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v230, char v231) {
bb232:
  struct std__basic_ios_char__std__char_traits_char__* this233;
  char __c234;
  char __retval235;
  this233 = v230;
  __c234 = v231;
  struct std__basic_ios_char__std__char_traits_char__* t236 = this233;
  struct std__ctype_char_* t237 = t236->_M_ctype;
  struct std__ctype_char_* r238 = std__ctype_char__const__std____check_facet_std__ctype_char___(t237);
  char t239 = __c234;
  char r240 = std__ctype_char___widen_char__const(r238, t239);
  __retval235 = r240;
  char t241 = __retval235;
  return t241;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v242) {
bb243:
  struct std__basic_ostream_char__std__char_traits_char__* __os244;
  struct std__basic_ostream_char__std__char_traits_char__* __retval245;
  __os244 = v242;
  struct std__basic_ostream_char__std__char_traits_char__* t246 = __os244;
  struct std__basic_ostream_char__std__char_traits_char__* t247 = __os244;
  void** v248 = (void**)t247;
  void* v249 = *((void**)v248);
  unsigned char* cast250 = (unsigned char*)v249;
  long c251 = -24;
  unsigned char* ptr252 = &(cast250)[c251];
  long* cast253 = (long*)ptr252;
  long t254 = *cast253;
  unsigned char* cast255 = (unsigned char*)t247;
  unsigned char* ptr256 = &(cast255)[t254];
  struct std__basic_ostream_char__std__char_traits_char__* cast257 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr256;
  struct std__basic_ios_char__std__char_traits_char__* cast258 = (struct std__basic_ios_char__std__char_traits_char__*)cast257;
  char c259 = 10;
  char r260 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast258, c259);
  struct std__basic_ostream_char__std__char_traits_char__* r261 = std__ostream__put(t246, r260);
  struct std__basic_ostream_char__std__char_traits_char__* r262 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r261);
  __retval245 = r262;
  struct std__basic_ostream_char__std__char_traits_char__* t263 = __retval245;
  return t263;
}

// function: main
int main() {
bb264:
  int __retval265;
  struct String s1266;
  struct String s2267;
  struct String s3268;
  struct String ref_tmp0269;
  struct String* tmp_exprcleanup270;
  struct String ref_tmp1271;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup272;
  struct String ref_tmp2273;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup274;
  struct String* s4Ptr275;
  struct String* __new_result276;
  int c277 = 0;
  __retval265 = c277;
  char* cast278 = (char*)&(_str);
  String__String(&s1266, cast278);
    char* cast279 = (char*)&(_str_1);
    String__String(&s2267, cast279);
      char* cast280 = (char*)&(_str_2);
      String__String(&s3268, cast280);
        char* cast281 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r282 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast281);
        struct std__basic_ostream_char__std__char_traits_char__* r283 = operator__(r282, &s1266);
        char* cast284 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r285 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r283, cast284);
        struct std__basic_ostream_char__std__char_traits_char__* r286 = operator__(r285, &s2267);
        char* cast287 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r288 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r286, cast287);
        struct std__basic_ostream_char__std__char_traits_char__* r289 = operator__(r288, &s3268);
        char c290 = 34;
        struct std__basic_ostream_char__std__char_traits_char__* r291 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r289, c290);
        char* cast292 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r293 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r291, cast292);
        char* cast294 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r295 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r293, cast294);
        _Bool r296 = String__operator___String_const___const(&s2267, &s1266);
        char* cast297 = (char*)&(_str_8);
        char* cast298 = (char*)&(_str_9);
        char* sel299 = r296 ? cast297 : cast298;
        struct std__basic_ostream_char__std__char_traits_char__* r300 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r295, sel299);
        char* cast301 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* r302 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r300, cast301);
        _Bool r303 = String__operator___String_const___const_4(&s2267, &s1266);
        char* cast304 = (char*)&(_str_8);
        char* cast305 = (char*)&(_str_9);
        char* sel306 = r303 ? cast304 : cast305;
        struct std__basic_ostream_char__std__char_traits_char__* r307 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r302, sel306);
        char* cast308 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r309 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r307, cast308);
        _Bool r310 = String__operator__String_const___const(&s2267, &s1266);
        char* cast311 = (char*)&(_str_8);
        char* cast312 = (char*)&(_str_9);
        char* sel313 = r310 ? cast311 : cast312;
        struct std__basic_ostream_char__std__char_traits_char__* r314 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r309, sel313);
        char* cast315 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* r316 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r314, cast315);
        _Bool r317 = String__operator__String_const___const_2(&s2267, &s1266);
        char* cast318 = (char*)&(_str_8);
        char* cast319 = (char*)&(_str_9);
        char* sel320 = r317 ? cast318 : cast319;
        struct std__basic_ostream_char__std__char_traits_char__* r321 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r316, sel320);
        char* cast322 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* r323 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r321, cast322);
        _Bool r324 = String__operator___String_const___const_2(&s2267, &s1266);
        char* cast325 = (char*)&(_str_8);
        char* cast326 = (char*)&(_str_9);
        char* sel327 = r324 ? cast325 : cast326;
        struct std__basic_ostream_char__std__char_traits_char__* r328 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r323, sel327);
        char* cast329 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r330 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r328, cast329);
        _Bool r331 = String__operator___String_const___const_3(&s2267, &s1266);
        char* cast332 = (char*)&(_str_8);
        char* cast333 = (char*)&(_str_9);
        char* sel334 = r331 ? cast332 : cast333;
        struct std__basic_ostream_char__std__char_traits_char__* r335 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r330, sel334);
        char* cast336 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* r337 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast336);
          _Bool r338 = String__operator____const(&s3268);
          if (r338) {
            char* cast339 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* r340 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast339);
            struct String* r341 = String__operator_(&s3268, &s1266);
            char* cast342 = (char*)&(_str_17);
            struct std__basic_ostream_char__std__char_traits_char__* r343 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast342);
            struct std__basic_ostream_char__std__char_traits_char__* r344 = operator__(r343, &s3268);
            char* cast345 = (char*)&(_str_18);
            struct std__basic_ostream_char__std__char_traits_char__* r346 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r344, cast345);
          }
        char* cast347 = (char*)&(_str_19);
        struct std__basic_ostream_char__std__char_traits_char__* r348 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast347);
        struct String* r349 = String__operator___3(&s1266, &s2267);
        struct std__basic_ostream_char__std__char_traits_char__* r350 = operator__(&_ZSt4cout, &s1266);
        _Bool r351 = String__operator___String_const___const(&s1266, &s2267);
        if (r351) {
        } else {
          char* cast352 = (char*)&(_str_20);
          char* c353 = _str_21;
          unsigned int c354 = 54;
          char* cast355 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast352, c353, c354, cast355);
        }
        char* cast356 = (char*)&(_str_22);
        struct std__basic_ostream_char__std__char_traits_char__* r357 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast356);
        char* cast358 = (char*)&(_str_23);
        String__String(&ref_tmp0269, cast358);
          struct String* r359 = String__operator___3(&s1266, &ref_tmp0269);
          tmp_exprcleanup270 = r359;
        {
          String___String(&ref_tmp0269);
        }
        struct String* t360 = tmp_exprcleanup270;
        char* cast361 = (char*)&(_str_24);
        struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast361);
        struct std__basic_ostream_char__std__char_traits_char__* r363 = operator__(r362, &s1266);
        char* cast364 = (char*)&(_str_25);
        struct std__basic_ostream_char__std__char_traits_char__* r365 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r363, cast364);
        char* cast366 = (char*)&(_str_26);
        struct std__basic_ostream_char__std__char_traits_char__* r367 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast366);
        char* cast368 = (char*)&(_str_27);
        struct std__basic_ostream_char__std__char_traits_char__* r369 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r367, cast368);
        int c370 = 0;
        int c371 = 14;
        struct String r372 = String__operator__(&s1266, c370, c371);
        ref_tmp1271 = r372;
          struct std__basic_ostream_char__std__char_traits_char__* r373 = operator__(r369, &ref_tmp1271);
          char* cast374 = (char*)&(_str_25);
          struct std__basic_ostream_char__std__char_traits_char__* r375 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r373, cast374);
          tmp_exprcleanup272 = r375;
        {
          String___String(&ref_tmp1271);
        }
        struct std__basic_ostream_char__std__char_traits_char__* t376 = tmp_exprcleanup272;
        char* cast377 = (char*)&(_str_26);
        struct std__basic_ostream_char__std__char_traits_char__* r378 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast377);
        char* cast379 = (char*)&(_str_28);
        struct std__basic_ostream_char__std__char_traits_char__* r380 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r378, cast379);
        int c381 = 15;
        int c382 = 0;
        struct String r383 = String__operator__(&s1266, c381, c382);
        ref_tmp2273 = r383;
          struct std__basic_ostream_char__std__char_traits_char__* r384 = operator__(r380, &ref_tmp2273);
          char* cast385 = (char*)&(_str_25);
          struct std__basic_ostream_char__std__char_traits_char__* r386 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r384, cast385);
          tmp_exprcleanup274 = r386;
        {
          String___String(&ref_tmp2273);
        }
        struct std__basic_ostream_char__std__char_traits_char__* t387 = tmp_exprcleanup274;
        unsigned long c388 = 16;
        void* r389 = operator_new(c388);
          struct String* cast390 = (struct String*)r389;
          __new_result276 = cast390;
          String__String_2(cast390, &s1266);
        struct String* t391 = __new_result276;
        s4Ptr275 = t391;
        char* cast392 = (char*)&(_str_29);
        struct std__basic_ostream_char__std__char_traits_char__* r393 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast392);
        struct String* t394 = s4Ptr275;
        struct std__basic_ostream_char__std__char_traits_char__* r395 = operator__(r393, t394);
        char* cast396 = (char*)&(_str_25);
        struct std__basic_ostream_char__std__char_traits_char__* r397 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r395, cast396);
        char* cast398 = (char*)&(_str_30);
        struct std__basic_ostream_char__std__char_traits_char__* r399 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast398);
        struct String* t400 = s4Ptr275;
        struct String* t401 = s4Ptr275;
        struct String* r402 = String__operator_(t401, t400);
        char* cast403 = (char*)&(_str_31);
        struct std__basic_ostream_char__std__char_traits_char__* r404 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast403);
        struct String* t405 = s4Ptr275;
        struct std__basic_ostream_char__std__char_traits_char__* r406 = operator__(r404, t405);
        char c407 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* r408 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r406, c407);
        struct String* t409 = s4Ptr275;
        struct String* c410 = ((void*)0);
        _Bool c411 = ((t409 != c410)) ? 1 : 0;
        if (c411) {
            String___String(t409);
          {
            void* cast412 = (void*)t409;
            unsigned long c413 = 16;
            operator_delete(cast412, c413);
          }
        }
        char c414 = 72;
        int c415 = 0;
        char* r416 = String__operator___2(&s1266, c415);
        *r416 = c414;
        char c417 = 66;
        int c418 = 6;
        char* r419 = String__operator___2(&s1266, c418);
        *r419 = c417;
        char* cast420 = (char*)&(_str_32);
        struct std__basic_ostream_char__std__char_traits_char__* r421 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast420);
        struct std__basic_ostream_char__std__char_traits_char__* r422 = operator__(r421, &s1266);
        char* cast423 = (char*)&(_str_25);
        struct std__basic_ostream_char__std__char_traits_char__* r424 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r422, cast423);
        char* cast425 = (char*)&(_str_33);
        struct std__basic_ostream_char__std__char_traits_char__* r426 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast425);
        struct std__basic_ostream_char__std__char_traits_char__* r427 = std__ostream__operator___std__ostream_____(r426, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        char c428 = 100;
        int c429 = 30;
        char* r430 = String__operator___2(&s1266, c429);
        *r430 = c428;
        int c431 = 0;
        __retval265 = c431;
        int t432 = __retval265;
        int ret_val433 = t432;
        {
          String___String(&s3268);
        }
        {
          String___String(&s2267);
        }
        {
          String___String(&s1266);
        }
        return ret_val433;
  int t434 = __retval265;
  return t434;
}

