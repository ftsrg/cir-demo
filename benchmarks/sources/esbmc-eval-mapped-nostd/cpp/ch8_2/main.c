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
struct Array { int __field0; int* __field1; };
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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[28] = "Size of array integers1 is ";
char _str_1[30] = "\nArray after initialization:\n";
char _str_2[29] = "\nSize of array integers2 is ";
char _str_3[21] = "\nInput 17 integers:\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_4[35] = "\nAfter input, the arrays contain:\n";
char _str_5[12] = "integers1:\n";
char _str_6[12] = "integers2:\n";
char _str_7[37] = "\nEvaluating: integers1 != integers2\n";
char _str_8[39] = "integers1 and integers2 are not equal\n";
char _str_9[29] = "\nSize of array integers3 is ";
char _str_10[36] = "\nAssigning integers2 to integers1:\n";
char _str_11[37] = "\nEvaluating: integers1 == integers2\n";
char _str_12[35] = "integers1 and integers2 are equal\n";
char _str_13[18] = "\nintegers1[5] is ";
char _str_14[34] = "\n\nAssigning 1000 to integers1[5]\n";
char _str_15[41] = "\nAttempt to assign 1000 to integers1[15]";
extern void Array__Array_2(struct Array* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct Array* p1);
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
extern int Array__getSize___const(struct Array* p0);
extern struct std__basic_istream_char__std__char_traits_char__* operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, struct Array* p1);
_Bool Array__operator___Array_const___const_2(struct Array* p0, struct Array* p1);
extern void Array__Array(struct Array* p0, struct Array* p1);
extern struct Array* Array__operator_(struct Array* p0, struct Array* p1);
extern _Bool Array__operator___Array_const___const(struct Array* p0, struct Array* p1);
extern int* Array__operator__(struct Array* p0, int p1);
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
void Array___Array(struct Array* p0) {}
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

// function: _ZNK5ArrayneERKS_
_Bool Array__operator___Array_const___const_2(struct Array* v103, struct Array* v104) {
bb105:
  struct Array* this106;
  struct Array* right107;
  _Bool __retval108;
  this106 = v103;
  right107 = v104;
  struct Array* t109 = this106;
  struct Array* t110 = right107;
  _Bool r111 = Array__operator___Array_const___const(t109, t110);
  _Bool u112 = !r111;
  __retval108 = u112;
  _Bool t113 = __retval108;
  return t113;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v114, void* v115) {
bb116:
  struct std__basic_ostream_char__std__char_traits_char__* this117;
  void* __pf118;
  struct std__basic_ostream_char__std__char_traits_char__* __retval119;
  this117 = v114;
  __pf118 = v115;
  struct std__basic_ostream_char__std__char_traits_char__* t120 = this117;
  void* t121 = __pf118;
  struct std__basic_ostream_char__std__char_traits_char__* r122 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t121)(t120);
  __retval119 = r122;
  struct std__basic_ostream_char__std__char_traits_char__* t123 = __retval119;
  return t123;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v124) {
bb125:
  struct std__basic_ostream_char__std__char_traits_char__* __os126;
  struct std__basic_ostream_char__std__char_traits_char__* __retval127;
  __os126 = v124;
  struct std__basic_ostream_char__std__char_traits_char__* t128 = __os126;
  struct std__basic_ostream_char__std__char_traits_char__* r129 = std__ostream__flush(t128);
  __retval127 = r129;
  struct std__basic_ostream_char__std__char_traits_char__* t130 = __retval127;
  return t130;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v131) {
bb132:
  struct std__ctype_char_* __f133;
  struct std__ctype_char_* __retval134;
  __f133 = v131;
    struct std__ctype_char_* t135 = __f133;
    _Bool cast136 = (_Bool)t135;
    _Bool u137 = !cast136;
    if (u137) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t138 = __f133;
  __retval134 = t138;
  struct std__ctype_char_* t139 = __retval134;
  return t139;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v140, char v141) {
bb142:
  struct std__ctype_char_* this143;
  char __c144;
  char __retval145;
  this143 = v140;
  __c144 = v141;
  struct std__ctype_char_* t146 = this143;
    char t147 = t146->_M_widen_ok;
    _Bool cast148 = (_Bool)t147;
    if (cast148) {
      char t149 = __c144;
      unsigned char cast150 = (unsigned char)t149;
      unsigned long cast151 = (unsigned long)cast150;
      char t152 = t146->_M_widen[cast151];
      __retval145 = t152;
      char t153 = __retval145;
      return t153;
    }
  std__ctype_char____M_widen_init___const(t146);
  char t154 = __c144;
  void** v155 = (void**)t146;
  void* v156 = *((void**)v155);
  char vcall159 = (char)__VERIFIER_virtual_call_char_char(t146, 6, t154);
  __retval145 = vcall159;
  char t160 = __retval145;
  return t160;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v161, char v162) {
bb163:
  struct std__basic_ios_char__std__char_traits_char__* this164;
  char __c165;
  char __retval166;
  this164 = v161;
  __c165 = v162;
  struct std__basic_ios_char__std__char_traits_char__* t167 = this164;
  struct std__ctype_char_* t168 = t167->_M_ctype;
  struct std__ctype_char_* r169 = std__ctype_char__const__std____check_facet_std__ctype_char___(t168);
  char t170 = __c165;
  char r171 = std__ctype_char___widen_char__const(r169, t170);
  __retval166 = r171;
  char t172 = __retval166;
  return t172;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v173) {
bb174:
  struct std__basic_ostream_char__std__char_traits_char__* __os175;
  struct std__basic_ostream_char__std__char_traits_char__* __retval176;
  __os175 = v173;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __os175;
  struct std__basic_ostream_char__std__char_traits_char__* t178 = __os175;
  void** v179 = (void**)t178;
  void* v180 = *((void**)v179);
  unsigned char* cast181 = (unsigned char*)v180;
  long c182 = -24;
  unsigned char* ptr183 = &(cast181)[c182];
  long* cast184 = (long*)ptr183;
  long t185 = *cast184;
  unsigned char* cast186 = (unsigned char*)t178;
  unsigned char* ptr187 = &(cast186)[t185];
  struct std__basic_ostream_char__std__char_traits_char__* cast188 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr187;
  struct std__basic_ios_char__std__char_traits_char__* cast189 = (struct std__basic_ios_char__std__char_traits_char__*)cast188;
  char c190 = 10;
  char r191 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast189, c190);
  struct std__basic_ostream_char__std__char_traits_char__* r192 = std__ostream__put(t177, r191);
  struct std__basic_ostream_char__std__char_traits_char__* r193 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r192);
  __retval176 = r193;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __retval176;
  return t194;
}

// function: main
int main() {
bb195:
  int __retval196;
  struct Array integers1197;
  struct Array integers2198;
  struct Array integers3199;
  int c200 = 0;
  __retval196 = c200;
  int c201 = 7;
  Array__Array_2(&integers1197, c201);
    int c202 = 10;
    Array__Array_2(&integers2198, c202);
      char* cast203 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r204 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast203);
      int r205 = Array__getSize___const(&integers1197);
      struct std__basic_ostream_char__std__char_traits_char__* r206 = std__ostream__operator__(r204, r205);
      char* cast207 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r208 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r206, cast207);
      struct std__basic_ostream_char__std__char_traits_char__* r209 = operator__(r208, &integers1197);
      char* cast210 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r211 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast210);
      int r212 = Array__getSize___const(&integers2198);
      struct std__basic_ostream_char__std__char_traits_char__* r213 = std__ostream__operator__(r211, r212);
      char* cast214 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r215 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r213, cast214);
      struct std__basic_ostream_char__std__char_traits_char__* r216 = operator__(r215, &integers2198);
      char* cast217 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r218 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast217);
      struct std__basic_istream_char__std__char_traits_char__* r219 = operator___2(&_ZSt3cin, &integers1197);
      struct std__basic_istream_char__std__char_traits_char__* r220 = operator___2(r219, &integers2198);
      char* cast221 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r222 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast221);
      char* cast223 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r224 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r222, cast223);
      struct std__basic_ostream_char__std__char_traits_char__* r225 = operator__(r224, &integers1197);
      char* cast226 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* r227 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r225, cast226);
      struct std__basic_ostream_char__std__char_traits_char__* r228 = operator__(r227, &integers2198);
      char* cast229 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r230 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast229);
        _Bool r231 = Array__operator___Array_const___const_2(&integers1197, &integers2198);
        if (r231) {
          char* cast232 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* r233 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast232);
        }
      Array__Array(&integers3199, &integers1197);
        char* cast234 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* r235 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast234);
        int r236 = Array__getSize___const(&integers3199);
        struct std__basic_ostream_char__std__char_traits_char__* r237 = std__ostream__operator__(r235, r236);
        char* cast238 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r239 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r237, cast238);
        struct std__basic_ostream_char__std__char_traits_char__* r240 = operator__(r239, &integers3199);
        char* cast241 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* r242 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast241);
        struct Array* r243 = Array__operator_(&integers1197, &integers2198);
        char* cast244 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r245 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast244);
        struct std__basic_ostream_char__std__char_traits_char__* r246 = operator__(r245, &integers1197);
        char* cast247 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r248 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r246, cast247);
        struct std__basic_ostream_char__std__char_traits_char__* r249 = operator__(r248, &integers2198);
        char* cast250 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r251 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast250);
          _Bool r252 = Array__operator___Array_const___const(&integers1197, &integers2198);
          if (r252) {
            char* cast253 = (char*)&(_str_12);
            struct std__basic_ostream_char__std__char_traits_char__* r254 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast253);
          }
        char* cast255 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast255);
        int c257 = 5;
        int* r258 = Array__operator__(&integers1197, c257);
        int t259 = *r258;
        struct std__basic_ostream_char__std__char_traits_char__* r260 = std__ostream__operator__(r256, t259);
        char* cast261 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r262 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast261);
        int c263 = 1000;
        int c264 = 5;
        int* r265 = Array__operator__(&integers1197, c264);
        *r265 = c263;
        char* cast266 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r267 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast266);
        struct std__basic_ostream_char__std__char_traits_char__* r268 = operator__(r267, &integers1197);
        char* cast269 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* r270 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast269);
        struct std__basic_ostream_char__std__char_traits_char__* r271 = std__ostream__operator___std__ostream_____(r270, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c272 = 1000;
        int c273 = 15;
        int* r274 = Array__operator__(&integers1197, c273);
        *r274 = c272;
        int c275 = 0;
        __retval196 = c275;
        int t276 = __retval196;
        int ret_val277 = t276;
        {
          Array___Array(&integers3199);
        }
        {
          Array___Array(&integers2198);
        }
        {
          Array___Array(&integers1197);
        }
        return ret_val277;
  int t278 = __retval196;
  return t278;
}

