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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "Point is ";
char _str_1[12] = "Player wins";
char _str_2[13] = "Player loses";
char _str_3[15] = "Player rolled ";
char _str_4[4] = " + ";
char _str_5[4] = " = ";
extern void srand(unsigned int p0);
extern long time(long* p0);
extern int rand();
int rollDice();
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

// function: _Z8rollDicev
int rollDice() {
bb0:
  int __retval1;
  int die12;
  int die23;
  int workSum4;
  int c5 = 1;
  int r6 = rand();
  int c7 = 6;
  int b8 = r6 % c7;
  int b9 = c5 + b8;
  die12 = b9;
  int c10 = 1;
  int r11 = rand();
  int c12 = 6;
  int b13 = r11 % c12;
  int b14 = c10 + b13;
  die23 = b14;
  int t15 = die12;
  int t16 = die23;
  int b17 = t15 + t16;
  workSum4 = b17;
  char* cast18 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast18);
  int t20 = die12;
  struct std__basic_ostream_char__std__char_traits_char__* r21 = std__ostream__operator__(r19, t20);
  char* cast22 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r21, cast22);
  int t24 = die23;
  struct std__basic_ostream_char__std__char_traits_char__* r25 = std__ostream__operator__(r23, t24);
  char* cast26 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r27 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r25, cast26);
  int t28 = workSum4;
  struct std__basic_ostream_char__std__char_traits_char__* r29 = std__ostream__operator__(r27, t28);
  struct std__basic_ostream_char__std__char_traits_char__* r30 = std__ostream__operator___std__ostream_____(r29, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int t31 = workSum4;
  __retval1 = t31;
  int t32 = __retval1;
  return t32;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v33, int v34) {
bb35:
  int __a36;
  int __b37;
  int __retval38;
  __a36 = v33;
  __b37 = v34;
  int t39 = __a36;
  int t40 = __b37;
  int b41 = t39 | t40;
  __retval38 = b41;
  int t42 = __retval38;
  return t42;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v43) {
bb44:
  struct std__basic_ios_char__std__char_traits_char__* this45;
  int __retval46;
  this45 = v43;
  struct std__basic_ios_char__std__char_traits_char__* t47 = this45;
  struct std__ios_base* base48 = (struct std__ios_base*)((char *)t47 + 0);
  int t49 = base48->_M_streambuf_state;
  __retval46 = t49;
  int t50 = __retval46;
  return t50;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v51, int v52) {
bb53:
  struct std__basic_ios_char__std__char_traits_char__* this54;
  int __state55;
  this54 = v51;
  __state55 = v52;
  struct std__basic_ios_char__std__char_traits_char__* t56 = this54;
  int r57 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t56);
  int t58 = __state55;
  int r59 = std__operator_(r57, t58);
  std__basic_ios_char__std__char_traits_char_____clear(t56, r59);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb60:
  _Bool __retval61;
    _Bool c62 = 0;
    __retval61 = c62;
    _Bool t63 = __retval61;
    return t63;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v64, char* v65) {
bb66:
  char* __c167;
  char* __c268;
  _Bool __retval69;
  __c167 = v64;
  __c268 = v65;
  char* t70 = __c167;
  char t71 = *t70;
  int cast72 = (int)t71;
  char* t73 = __c268;
  char t74 = *t73;
  int cast75 = (int)t74;
  _Bool c76 = ((cast72 == cast75)) ? 1 : 0;
  __retval69 = c76;
  _Bool t77 = __retval69;
  return t77;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v78) {
bb79:
  char* __p80;
  unsigned long __retval81;
  unsigned long __i82;
  __p80 = v78;
  unsigned long c83 = 0;
  __i82 = c83;
    char ref_tmp084;
    while (1) {
      unsigned long t85 = __i82;
      char* t86 = __p80;
      char* ptr87 = &(t86)[t85];
      char c88 = 0;
      ref_tmp084 = c88;
      _Bool r89 = __gnu_cxx__char_traits_char___eq(ptr87, &ref_tmp084);
      _Bool u90 = !r89;
      if (!u90) break;
      unsigned long t91 = __i82;
      unsigned long u92 = t91 + 1;
      __i82 = u92;
    }
  unsigned long t93 = __i82;
  __retval81 = t93;
  unsigned long t94 = __retval81;
  return t94;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v95) {
bb96:
  char* __s97;
  unsigned long __retval98;
  __s97 = v95;
    _Bool r99 = std____is_constant_evaluated();
    if (r99) {
      char* t100 = __s97;
      unsigned long r101 = __gnu_cxx__char_traits_char___length(t100);
      __retval98 = r101;
      unsigned long t102 = __retval98;
      return t102;
    }
  char* t103 = __s97;
  unsigned long r104 = strlen(t103);
  __retval98 = r104;
  unsigned long t105 = __retval98;
  return t105;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v106, char* v107) {
bb108:
  struct std__basic_ostream_char__std__char_traits_char__* __out109;
  char* __s110;
  struct std__basic_ostream_char__std__char_traits_char__* __retval111;
  __out109 = v106;
  __s110 = v107;
    char* t112 = __s110;
    _Bool cast113 = (_Bool)t112;
    _Bool u114 = !cast113;
    if (u114) {
      struct std__basic_ostream_char__std__char_traits_char__* t115 = __out109;
      void** v116 = (void**)t115;
      void* v117 = *((void**)v116);
      unsigned char* cast118 = (unsigned char*)v117;
      long c119 = -24;
      unsigned char* ptr120 = &(cast118)[c119];
      long* cast121 = (long*)ptr120;
      long t122 = *cast121;
      unsigned char* cast123 = (unsigned char*)t115;
      unsigned char* ptr124 = &(cast123)[t122];
      struct std__basic_ostream_char__std__char_traits_char__* cast125 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr124;
      struct std__basic_ios_char__std__char_traits_char__* cast126 = (struct std__basic_ios_char__std__char_traits_char__*)cast125;
      int t127 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast126, t127);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t128 = __out109;
      char* t129 = __s110;
      char* t130 = __s110;
      unsigned long r131 = std__char_traits_char___length(t130);
      long cast132 = (long)r131;
      struct std__basic_ostream_char__std__char_traits_char__* r133 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t128, t129, cast132);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t134 = __out109;
  __retval111 = t134;
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __retval111;
  return t135;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v136, void* v137) {
bb138:
  struct std__basic_ostream_char__std__char_traits_char__* this139;
  void* __pf140;
  struct std__basic_ostream_char__std__char_traits_char__* __retval141;
  this139 = v136;
  __pf140 = v137;
  struct std__basic_ostream_char__std__char_traits_char__* t142 = this139;
  void* t143 = __pf140;
  struct std__basic_ostream_char__std__char_traits_char__* r144 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t143)(t142);
  __retval141 = r144;
  struct std__basic_ostream_char__std__char_traits_char__* t145 = __retval141;
  return t145;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v146) {
bb147:
  struct std__basic_ostream_char__std__char_traits_char__* __os148;
  struct std__basic_ostream_char__std__char_traits_char__* __retval149;
  __os148 = v146;
  struct std__basic_ostream_char__std__char_traits_char__* t150 = __os148;
  struct std__basic_ostream_char__std__char_traits_char__* r151 = std__ostream__flush(t150);
  __retval149 = r151;
  struct std__basic_ostream_char__std__char_traits_char__* t152 = __retval149;
  return t152;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v153) {
bb154:
  struct std__ctype_char_* __f155;
  struct std__ctype_char_* __retval156;
  __f155 = v153;
    struct std__ctype_char_* t157 = __f155;
    _Bool cast158 = (_Bool)t157;
    _Bool u159 = !cast158;
    if (u159) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t160 = __f155;
  __retval156 = t160;
  struct std__ctype_char_* t161 = __retval156;
  return t161;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v162, char v163) {
bb164:
  struct std__ctype_char_* this165;
  char __c166;
  char __retval167;
  this165 = v162;
  __c166 = v163;
  struct std__ctype_char_* t168 = this165;
    char t169 = t168->_M_widen_ok;
    _Bool cast170 = (_Bool)t169;
    if (cast170) {
      char t171 = __c166;
      unsigned char cast172 = (unsigned char)t171;
      unsigned long cast173 = (unsigned long)cast172;
      char t174 = t168->_M_widen[cast173];
      __retval167 = t174;
      char t175 = __retval167;
      return t175;
    }
  std__ctype_char____M_widen_init___const(t168);
  char t176 = __c166;
  void** v177 = (void**)t168;
  void* v178 = *((void**)v177);
  char vcall181 = (char)__VERIFIER_virtual_call_char_char(t168, 6, t176);
  __retval167 = vcall181;
  char t182 = __retval167;
  return t182;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v183, char v184) {
bb185:
  struct std__basic_ios_char__std__char_traits_char__* this186;
  char __c187;
  char __retval188;
  this186 = v183;
  __c187 = v184;
  struct std__basic_ios_char__std__char_traits_char__* t189 = this186;
  struct std__ctype_char_* t190 = t189->_M_ctype;
  struct std__ctype_char_* r191 = std__ctype_char__const__std____check_facet_std__ctype_char___(t190);
  char t192 = __c187;
  char r193 = std__ctype_char___widen_char__const(r191, t192);
  __retval188 = r193;
  char t194 = __retval188;
  return t194;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v195) {
bb196:
  struct std__basic_ostream_char__std__char_traits_char__* __os197;
  struct std__basic_ostream_char__std__char_traits_char__* __retval198;
  __os197 = v195;
  struct std__basic_ostream_char__std__char_traits_char__* t199 = __os197;
  struct std__basic_ostream_char__std__char_traits_char__* t200 = __os197;
  void** v201 = (void**)t200;
  void* v202 = *((void**)v201);
  unsigned char* cast203 = (unsigned char*)v202;
  long c204 = -24;
  unsigned char* ptr205 = &(cast203)[c204];
  long* cast206 = (long*)ptr205;
  long t207 = *cast206;
  unsigned char* cast208 = (unsigned char*)t200;
  unsigned char* ptr209 = &(cast208)[t207];
  struct std__basic_ostream_char__std__char_traits_char__* cast210 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr209;
  struct std__basic_ios_char__std__char_traits_char__* cast211 = (struct std__basic_ios_char__std__char_traits_char__*)cast210;
  char c212 = 10;
  char r213 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast211, c212);
  struct std__basic_ostream_char__std__char_traits_char__* r214 = std__ostream__put(t199, r213);
  struct std__basic_ostream_char__std__char_traits_char__* r215 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r214);
  __retval198 = r215;
  struct std__basic_ostream_char__std__char_traits_char__* t216 = __retval198;
  return t216;
}

// function: main
int main() {
bb217:
  int __retval218;
  int sum219;
  int myPoint220;
  unsigned int gameStatus221;
  int c222 = 0;
  __retval218 = c222;
  long* c223 = ((void*)0);
  long r224 = time(c223);
  unsigned int cast225 = (unsigned int)r224;
  srand(cast225);
  int r226 = rollDice();
  sum219 = r226;
    int t227 = sum219;
    switch (t227) {
    case 7:
    case 11:
      unsigned int c228 = 1;
      gameStatus221 = c228;
      break;
    case 2:
    case 3:
    case 12:
      unsigned int c229 = 2;
      gameStatus221 = c229;
      break;
    default:
      unsigned int c230 = 0;
      gameStatus221 = c230;
      int t231 = sum219;
      myPoint220 = t231;
      char* cast232 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r233 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast232);
      int t234 = myPoint220;
      struct std__basic_ostream_char__std__char_traits_char__* r235 = std__ostream__operator__(r233, t234);
      struct std__basic_ostream_char__std__char_traits_char__* r236 = std__ostream__operator___std__ostream_____(r235, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      break;
    }
    while (1) {
      unsigned int t237 = gameStatus221;
      int cast238 = (int)t237;
      int c239 = 0;
      _Bool c240 = ((cast238 == c239)) ? 1 : 0;
      if (!c240) break;
        int r241 = rollDice();
        sum219 = r241;
          int t242 = sum219;
          int t243 = myPoint220;
          _Bool c244 = ((t242 == t243)) ? 1 : 0;
          if (c244) {
            unsigned int c245 = 1;
            gameStatus221 = c245;
          } else {
              int t246 = sum219;
              int c247 = 7;
              _Bool c248 = ((t246 == c247)) ? 1 : 0;
              if (c248) {
                unsigned int c249 = 2;
                gameStatus221 = c249;
              }
          }
    }
    unsigned int t250 = gameStatus221;
    int cast251 = (int)t250;
    int c252 = 1;
    _Bool c253 = ((cast251 == c252)) ? 1 : 0;
    if (c253) {
      char* cast254 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r255 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast254);
      struct std__basic_ostream_char__std__char_traits_char__* r256 = std__ostream__operator___std__ostream_____(r255, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    } else {
      char* cast257 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r258 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast257);
      struct std__basic_ostream_char__std__char_traits_char__* r259 = std__ostream__operator___std__ostream_____(r258, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    }
  int c260 = 0;
  __retval218 = c260;
  int t261 = __retval218;
  return t261;
}

