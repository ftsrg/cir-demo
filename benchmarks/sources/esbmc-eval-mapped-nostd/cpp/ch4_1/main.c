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

int __const_main_a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[11] = "Result is ";
int whatIsThis(int* p0, int p1);
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
int main();

// function: _Z10whatIsThisPii
int whatIsThis(int* v0, int v1) {
bb2:
  int* b3;
  int size4;
  int __retval5;
  b3 = v0;
  size4 = v1;
    int t6 = size4;
    int c7 = 1;
    _Bool c8 = ((t6 == c7)) ? 1 : 0;
    if (c8) {
      long c9 = 0;
      int* t10 = b3;
      int* ptr11 = &(t10)[c9];
      int t12 = *ptr11;
      __retval5 = t12;
      int t13 = __retval5;
      return t13;
    } else {
      int t14 = size4;
      int c15 = 1;
      int b16 = t14 - c15;
      long cast17 = (long)b16;
      int* t18 = b3;
      int* ptr19 = &(t18)[cast17];
      int t20 = *ptr19;
      int* t21 = b3;
      int t22 = size4;
      int c23 = 1;
      int b24 = t22 - c23;
      int r25 = whatIsThis(t21, b24);
      int b26 = t20 + r25;
      __retval5 = b26;
      int t27 = __retval5;
      return t27;
    }
  abort();
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v28, int v29) {
bb30:
  int __a31;
  int __b32;
  int __retval33;
  __a31 = v28;
  __b32 = v29;
  int t34 = __a31;
  int t35 = __b32;
  int b36 = t34 | t35;
  __retval33 = b36;
  int t37 = __retval33;
  return t37;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v38) {
bb39:
  struct std__basic_ios_char__std__char_traits_char__* this40;
  int __retval41;
  this40 = v38;
  struct std__basic_ios_char__std__char_traits_char__* t42 = this40;
  struct std__ios_base* base43 = (struct std__ios_base*)((char *)t42 + 0);
  int t44 = base43->_M_streambuf_state;
  __retval41 = t44;
  int t45 = __retval41;
  return t45;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v46, int v47) {
bb48:
  struct std__basic_ios_char__std__char_traits_char__* this49;
  int __state50;
  this49 = v46;
  __state50 = v47;
  struct std__basic_ios_char__std__char_traits_char__* t51 = this49;
  int r52 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t51);
  int t53 = __state50;
  int r54 = std__operator_(r52, t53);
  std__basic_ios_char__std__char_traits_char_____clear(t51, r54);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb55:
  _Bool __retval56;
    _Bool c57 = 0;
    __retval56 = c57;
    _Bool t58 = __retval56;
    return t58;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v59, char* v60) {
bb61:
  char* __c162;
  char* __c263;
  _Bool __retval64;
  __c162 = v59;
  __c263 = v60;
  char* t65 = __c162;
  char t66 = *t65;
  int cast67 = (int)t66;
  char* t68 = __c263;
  char t69 = *t68;
  int cast70 = (int)t69;
  _Bool c71 = ((cast67 == cast70)) ? 1 : 0;
  __retval64 = c71;
  _Bool t72 = __retval64;
  return t72;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v73) {
bb74:
  char* __p75;
  unsigned long __retval76;
  unsigned long __i77;
  __p75 = v73;
  unsigned long c78 = 0;
  __i77 = c78;
    char ref_tmp079;
    while (1) {
      unsigned long t80 = __i77;
      char* t81 = __p75;
      char* ptr82 = &(t81)[t80];
      char c83 = 0;
      ref_tmp079 = c83;
      _Bool r84 = __gnu_cxx__char_traits_char___eq(ptr82, &ref_tmp079);
      _Bool u85 = !r84;
      if (!u85) break;
      unsigned long t86 = __i77;
      unsigned long u87 = t86 + 1;
      __i77 = u87;
    }
  unsigned long t88 = __i77;
  __retval76 = t88;
  unsigned long t89 = __retval76;
  return t89;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v90) {
bb91:
  char* __s92;
  unsigned long __retval93;
  __s92 = v90;
    _Bool r94 = std____is_constant_evaluated();
    if (r94) {
      char* t95 = __s92;
      unsigned long r96 = __gnu_cxx__char_traits_char___length(t95);
      __retval93 = r96;
      unsigned long t97 = __retval93;
      return t97;
    }
  char* t98 = __s92;
  unsigned long r99 = strlen(t98);
  __retval93 = r99;
  unsigned long t100 = __retval93;
  return t100;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v101, char* v102) {
bb103:
  struct std__basic_ostream_char__std__char_traits_char__* __out104;
  char* __s105;
  struct std__basic_ostream_char__std__char_traits_char__* __retval106;
  __out104 = v101;
  __s105 = v102;
    char* t107 = __s105;
    _Bool cast108 = (_Bool)t107;
    _Bool u109 = !cast108;
    if (u109) {
      struct std__basic_ostream_char__std__char_traits_char__* t110 = __out104;
      void** v111 = (void**)t110;
      void* v112 = *((void**)v111);
      unsigned char* cast113 = (unsigned char*)v112;
      long c114 = -24;
      unsigned char* ptr115 = &(cast113)[c114];
      long* cast116 = (long*)ptr115;
      long t117 = *cast116;
      unsigned char* cast118 = (unsigned char*)t110;
      unsigned char* ptr119 = &(cast118)[t117];
      struct std__basic_ostream_char__std__char_traits_char__* cast120 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr119;
      struct std__basic_ios_char__std__char_traits_char__* cast121 = (struct std__basic_ios_char__std__char_traits_char__*)cast120;
      int t122 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast121, t122);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t123 = __out104;
      char* t124 = __s105;
      char* t125 = __s105;
      unsigned long r126 = std__char_traits_char___length(t125);
      long cast127 = (long)r126;
      struct std__basic_ostream_char__std__char_traits_char__* r128 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t123, t124, cast127);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t129 = __out104;
  __retval106 = t129;
  struct std__basic_ostream_char__std__char_traits_char__* t130 = __retval106;
  return t130;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v131, void* v132) {
bb133:
  struct std__basic_ostream_char__std__char_traits_char__* this134;
  void* __pf135;
  struct std__basic_ostream_char__std__char_traits_char__* __retval136;
  this134 = v131;
  __pf135 = v132;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = this134;
  void* t138 = __pf135;
  struct std__basic_ostream_char__std__char_traits_char__* r139 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t138)(t137);
  __retval136 = r139;
  struct std__basic_ostream_char__std__char_traits_char__* t140 = __retval136;
  return t140;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v141) {
bb142:
  struct std__basic_ostream_char__std__char_traits_char__* __os143;
  struct std__basic_ostream_char__std__char_traits_char__* __retval144;
  __os143 = v141;
  struct std__basic_ostream_char__std__char_traits_char__* t145 = __os143;
  struct std__basic_ostream_char__std__char_traits_char__* r146 = std__ostream__flush(t145);
  __retval144 = r146;
  struct std__basic_ostream_char__std__char_traits_char__* t147 = __retval144;
  return t147;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v148) {
bb149:
  struct std__ctype_char_* __f150;
  struct std__ctype_char_* __retval151;
  __f150 = v148;
    struct std__ctype_char_* t152 = __f150;
    _Bool cast153 = (_Bool)t152;
    _Bool u154 = !cast153;
    if (u154) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t155 = __f150;
  __retval151 = t155;
  struct std__ctype_char_* t156 = __retval151;
  return t156;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v157, char v158) {
bb159:
  struct std__ctype_char_* this160;
  char __c161;
  char __retval162;
  this160 = v157;
  __c161 = v158;
  struct std__ctype_char_* t163 = this160;
    char t164 = t163->_M_widen_ok;
    _Bool cast165 = (_Bool)t164;
    if (cast165) {
      char t166 = __c161;
      unsigned char cast167 = (unsigned char)t166;
      unsigned long cast168 = (unsigned long)cast167;
      char t169 = t163->_M_widen[cast168];
      __retval162 = t169;
      char t170 = __retval162;
      return t170;
    }
  std__ctype_char____M_widen_init___const(t163);
  char t171 = __c161;
  void** v172 = (void**)t163;
  void* v173 = *((void**)v172);
  char vcall176 = (char)__VERIFIER_virtual_call_char_char(t163, 6, t171);
  __retval162 = vcall176;
  char t177 = __retval162;
  return t177;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v178, char v179) {
bb180:
  struct std__basic_ios_char__std__char_traits_char__* this181;
  char __c182;
  char __retval183;
  this181 = v178;
  __c182 = v179;
  struct std__basic_ios_char__std__char_traits_char__* t184 = this181;
  struct std__ctype_char_* t185 = t184->_M_ctype;
  struct std__ctype_char_* r186 = std__ctype_char__const__std____check_facet_std__ctype_char___(t185);
  char t187 = __c182;
  char r188 = std__ctype_char___widen_char__const(r186, t187);
  __retval183 = r188;
  char t189 = __retval183;
  return t189;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v190) {
bb191:
  struct std__basic_ostream_char__std__char_traits_char__* __os192;
  struct std__basic_ostream_char__std__char_traits_char__* __retval193;
  __os192 = v190;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __os192;
  struct std__basic_ostream_char__std__char_traits_char__* t195 = __os192;
  void** v196 = (void**)t195;
  void* v197 = *((void**)v196);
  unsigned char* cast198 = (unsigned char*)v197;
  long c199 = -24;
  unsigned char* ptr200 = &(cast198)[c199];
  long* cast201 = (long*)ptr200;
  long t202 = *cast201;
  unsigned char* cast203 = (unsigned char*)t195;
  unsigned char* ptr204 = &(cast203)[t202];
  struct std__basic_ostream_char__std__char_traits_char__* cast205 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr204;
  struct std__basic_ios_char__std__char_traits_char__* cast206 = (struct std__basic_ios_char__std__char_traits_char__*)cast205;
  char c207 = 10;
  char r208 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast206, c207);
  struct std__basic_ostream_char__std__char_traits_char__* r209 = std__ostream__put(t194, r208);
  struct std__basic_ostream_char__std__char_traits_char__* r210 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r209);
  __retval193 = r210;
  struct std__basic_ostream_char__std__char_traits_char__* t211 = __retval193;
  return t211;
}

// function: main
int main() {
bb212:
  int __retval213;
  int arraySize214;
  int a215[10];
  int result216;
  int c217 = 0;
  __retval213 = c217;
  int c218 = 10;
  arraySize214 = c218;
  // array copy
  __builtin_memcpy(a215, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  int* cast219 = (int*)&(a215);
  int t220 = arraySize214;
  int r221 = whatIsThis(cast219, t220);
  result216 = r221;
  char* cast222 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r223 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast222);
  int t224 = result216;
  struct std__basic_ostream_char__std__char_traits_char__* r225 = std__ostream__operator__(r223, t224);
  struct std__basic_ostream_char__std__char_traits_char__* r226 = std__ostream__operator___std__ostream_____(r225, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c227 = 0;
  __retval213 = c227;
  int t228 = __retval213;
  return t228;
}

