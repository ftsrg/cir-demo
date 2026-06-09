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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Testing the tab manipulator:";
char _str_1[50] = "Testing the carriageReturn and bell manipulators:";
char _str_2[11] = "..........";
char _str_3[6] = "-----";
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* bell(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* carriageReturn(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* tab(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* endLine(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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

// function: _Z4bellRSo
struct std__basic_ostream_char__std__char_traits_char__* bell(struct std__basic_ostream_char__std__char_traits_char__* v37) {
bb38:
  struct std__basic_ostream_char__std__char_traits_char__* output39;
  struct std__basic_ostream_char__std__char_traits_char__* __retval40;
  output39 = v37;
  struct std__basic_ostream_char__std__char_traits_char__* t41 = output39;
  char c42 = 7;
  struct std__basic_ostream_char__std__char_traits_char__* r43 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(t41, c42);
  __retval40 = r43;
  struct std__basic_ostream_char__std__char_traits_char__* t44 = __retval40;
  return t44;
}

// function: _Z14carriageReturnRSo
struct std__basic_ostream_char__std__char_traits_char__* carriageReturn(struct std__basic_ostream_char__std__char_traits_char__* v45) {
bb46:
  struct std__basic_ostream_char__std__char_traits_char__* output47;
  struct std__basic_ostream_char__std__char_traits_char__* __retval48;
  output47 = v45;
  struct std__basic_ostream_char__std__char_traits_char__* t49 = output47;
  char c50 = 13;
  struct std__basic_ostream_char__std__char_traits_char__* r51 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(t49, c50);
  __retval48 = r51;
  struct std__basic_ostream_char__std__char_traits_char__* t52 = __retval48;
  return t52;
}

// function: _Z3tabRSo
struct std__basic_ostream_char__std__char_traits_char__* tab(struct std__basic_ostream_char__std__char_traits_char__* v53) {
bb54:
  struct std__basic_ostream_char__std__char_traits_char__* output55;
  struct std__basic_ostream_char__std__char_traits_char__* __retval56;
  output55 = v53;
  struct std__basic_ostream_char__std__char_traits_char__* t57 = output55;
  char c58 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* r59 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(t57, c58);
  __retval56 = r59;
  struct std__basic_ostream_char__std__char_traits_char__* t60 = __retval56;
  return t60;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v61, void* v62) {
bb63:
  struct std__basic_ostream_char__std__char_traits_char__* this64;
  void* __pf65;
  struct std__basic_ostream_char__std__char_traits_char__* __retval66;
  this64 = v61;
  __pf65 = v62;
  struct std__basic_ostream_char__std__char_traits_char__* t67 = this64;
  void* t68 = __pf65;
  struct std__basic_ostream_char__std__char_traits_char__* r69 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t68)(t67);
  __retval66 = r69;
  struct std__basic_ostream_char__std__char_traits_char__* t70 = __retval66;
  return t70;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v71) {
bb72:
  struct std__basic_ostream_char__std__char_traits_char__* __os73;
  struct std__basic_ostream_char__std__char_traits_char__* __retval74;
  __os73 = v71;
  struct std__basic_ostream_char__std__char_traits_char__* t75 = __os73;
  struct std__basic_ostream_char__std__char_traits_char__* r76 = std__ostream__flush(t75);
  __retval74 = r76;
  struct std__basic_ostream_char__std__char_traits_char__* t77 = __retval74;
  return t77;
}

// function: _Z7endLineRSo
struct std__basic_ostream_char__std__char_traits_char__* endLine(struct std__basic_ostream_char__std__char_traits_char__* v78) {
bb79:
  struct std__basic_ostream_char__std__char_traits_char__* output80;
  struct std__basic_ostream_char__std__char_traits_char__* __retval81;
  output80 = v78;
  struct std__basic_ostream_char__std__char_traits_char__* t82 = output80;
  char c83 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r84 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(t82, c83);
  struct std__basic_ostream_char__std__char_traits_char__* r85 = std__ostream__operator___std__ostream_____(r84, &std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___);
  __retval81 = r85;
  struct std__basic_ostream_char__std__char_traits_char__* t86 = __retval81;
  return t86;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v87, int v88) {
bb89:
  int __a90;
  int __b91;
  int __retval92;
  __a90 = v87;
  __b91 = v88;
  int t93 = __a90;
  int t94 = __b91;
  int b95 = t93 | t94;
  __retval92 = b95;
  int t96 = __retval92;
  return t96;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v97) {
bb98:
  struct std__basic_ios_char__std__char_traits_char__* this99;
  int __retval100;
  this99 = v97;
  struct std__basic_ios_char__std__char_traits_char__* t101 = this99;
  struct std__ios_base* base102 = (struct std__ios_base*)((char *)t101 + 0);
  int t103 = base102->_M_streambuf_state;
  __retval100 = t103;
  int t104 = __retval100;
  return t104;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v105, int v106) {
bb107:
  struct std__basic_ios_char__std__char_traits_char__* this108;
  int __state109;
  this108 = v105;
  __state109 = v106;
  struct std__basic_ios_char__std__char_traits_char__* t110 = this108;
  int r111 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t110);
  int t112 = __state109;
  int r113 = std__operator_(r111, t112);
  std__basic_ios_char__std__char_traits_char_____clear(t110, r113);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb114:
  _Bool __retval115;
    _Bool c116 = 0;
    __retval115 = c116;
    _Bool t117 = __retval115;
    return t117;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v118, char* v119) {
bb120:
  char* __c1121;
  char* __c2122;
  _Bool __retval123;
  __c1121 = v118;
  __c2122 = v119;
  char* t124 = __c1121;
  char t125 = *t124;
  int cast126 = (int)t125;
  char* t127 = __c2122;
  char t128 = *t127;
  int cast129 = (int)t128;
  _Bool c130 = ((cast126 == cast129)) ? 1 : 0;
  __retval123 = c130;
  _Bool t131 = __retval123;
  return t131;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v132) {
bb133:
  char* __p134;
  unsigned long __retval135;
  unsigned long __i136;
  __p134 = v132;
  unsigned long c137 = 0;
  __i136 = c137;
    char ref_tmp0138;
    while (1) {
      unsigned long t139 = __i136;
      char* t140 = __p134;
      char* ptr141 = &(t140)[t139];
      char c142 = 0;
      ref_tmp0138 = c142;
      _Bool r143 = __gnu_cxx__char_traits_char___eq(ptr141, &ref_tmp0138);
      _Bool u144 = !r143;
      if (!u144) break;
      unsigned long t145 = __i136;
      unsigned long u146 = t145 + 1;
      __i136 = u146;
    }
  unsigned long t147 = __i136;
  __retval135 = t147;
  unsigned long t148 = __retval135;
  return t148;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v149) {
bb150:
  char* __s151;
  unsigned long __retval152;
  __s151 = v149;
    _Bool r153 = std____is_constant_evaluated();
    if (r153) {
      char* t154 = __s151;
      unsigned long r155 = __gnu_cxx__char_traits_char___length(t154);
      __retval152 = r155;
      unsigned long t156 = __retval152;
      return t156;
    }
  char* t157 = __s151;
  unsigned long r158 = strlen(t157);
  __retval152 = r158;
  unsigned long t159 = __retval152;
  return t159;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v160, char* v161) {
bb162:
  struct std__basic_ostream_char__std__char_traits_char__* __out163;
  char* __s164;
  struct std__basic_ostream_char__std__char_traits_char__* __retval165;
  __out163 = v160;
  __s164 = v161;
    char* t166 = __s164;
    _Bool cast167 = (_Bool)t166;
    _Bool u168 = !cast167;
    if (u168) {
      struct std__basic_ostream_char__std__char_traits_char__* t169 = __out163;
      void** v170 = (void**)t169;
      void* v171 = *((void**)v170);
      unsigned char* cast172 = (unsigned char*)v171;
      long c173 = -24;
      unsigned char* ptr174 = &(cast172)[c173];
      long* cast175 = (long*)ptr174;
      long t176 = *cast175;
      unsigned char* cast177 = (unsigned char*)t169;
      unsigned char* ptr178 = &(cast177)[t176];
      struct std__basic_ostream_char__std__char_traits_char__* cast179 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr178;
      struct std__basic_ios_char__std__char_traits_char__* cast180 = (struct std__basic_ios_char__std__char_traits_char__*)cast179;
      int t181 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast180, t181);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t182 = __out163;
      char* t183 = __s164;
      char* t184 = __s164;
      unsigned long r185 = std__char_traits_char___length(t184);
      long cast186 = (long)r185;
      struct std__basic_ostream_char__std__char_traits_char__* r187 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t182, t183, cast186);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t188 = __out163;
  __retval165 = t188;
  struct std__basic_ostream_char__std__char_traits_char__* t189 = __retval165;
  return t189;
}

// function: main
int main() {
bb190:
  int __retval191;
  int c192 = 0;
  __retval191 = c192;
  char* cast193 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r194 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast193);
  struct std__basic_ostream_char__std__char_traits_char__* r195 = std__ostream__operator___std__ostream_____(r194, &endLine);
  char c196 = 97;
  struct std__basic_ostream_char__std__char_traits_char__* r197 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r195, c196);
  struct std__basic_ostream_char__std__char_traits_char__* r198 = std__ostream__operator___std__ostream_____(r197, &tab);
  char c199 = 98;
  struct std__basic_ostream_char__std__char_traits_char__* r200 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r198, c199);
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__ostream__operator___std__ostream_____(r200, &tab);
  char c202 = 99;
  struct std__basic_ostream_char__std__char_traits_char__* r203 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r201, c202);
  struct std__basic_ostream_char__std__char_traits_char__* r204 = std__ostream__operator___std__ostream_____(r203, &endLine);
  char* cast205 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r206 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast205);
  struct std__basic_ostream_char__std__char_traits_char__* r207 = std__ostream__operator___std__ostream_____(r206, &endLine);
  char* cast208 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r209 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r207, cast208);
  struct std__basic_ostream_char__std__char_traits_char__* r210 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &bell);
  struct std__basic_ostream_char__std__char_traits_char__* r211 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &carriageReturn);
  char* cast212 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r213 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r211, cast212);
  struct std__basic_ostream_char__std__char_traits_char__* r214 = std__ostream__operator___std__ostream_____(r213, &endLine);
  int c215 = 0;
  __retval191 = c215;
  int t216 = __retval191;
  return t216;
}

