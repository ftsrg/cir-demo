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
struct Test { int x; };
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
char _str[13] = "        x = ";
char _str_1[14] = "\n  this->x = ";
char _str_2[14] = "\n(*this).x = ";
void Test__Test_2(struct Test* p0, int p1);
void Test__Test(struct Test* p0, int p1) { Test__Test_2(p0, p1); }
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
void Test__print___const(struct Test* p0);
int main();

// function: _ZN4TestC2Ei
void Test__Test_2(struct Test* v0, int v1) {
bb2:
  struct Test* this3;
  int value4;
  this3 = v0;
  value4 = v1;
  struct Test* t5 = this3;
  int t6 = value4;
  t5->x = t6;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v7, int v8) {
bb9:
  int __a10;
  int __b11;
  int __retval12;
  __a10 = v7;
  __b11 = v8;
  int t13 = __a10;
  int t14 = __b11;
  int b15 = t13 | t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v17) {
bb18:
  struct std__basic_ios_char__std__char_traits_char__* this19;
  int __retval20;
  this19 = v17;
  struct std__basic_ios_char__std__char_traits_char__* t21 = this19;
  struct std__ios_base* base22 = (struct std__ios_base*)((char *)t21 + 0);
  int t23 = base22->_M_streambuf_state;
  __retval20 = t23;
  int t24 = __retval20;
  return t24;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v25, int v26) {
bb27:
  struct std__basic_ios_char__std__char_traits_char__* this28;
  int __state29;
  this28 = v25;
  __state29 = v26;
  struct std__basic_ios_char__std__char_traits_char__* t30 = this28;
  int r31 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t30);
  int t32 = __state29;
  int r33 = std__operator_(r31, t32);
  std__basic_ios_char__std__char_traits_char_____clear(t30, r33);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb34:
  _Bool __retval35;
    _Bool c36 = 0;
    __retval35 = c36;
    _Bool t37 = __retval35;
    return t37;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v38, char* v39) {
bb40:
  char* __c141;
  char* __c242;
  _Bool __retval43;
  __c141 = v38;
  __c242 = v39;
  char* t44 = __c141;
  char t45 = *t44;
  int cast46 = (int)t45;
  char* t47 = __c242;
  char t48 = *t47;
  int cast49 = (int)t48;
  _Bool c50 = ((cast46 == cast49)) ? 1 : 0;
  __retval43 = c50;
  _Bool t51 = __retval43;
  return t51;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v52) {
bb53:
  char* __p54;
  unsigned long __retval55;
  unsigned long __i56;
  __p54 = v52;
  unsigned long c57 = 0;
  __i56 = c57;
    char ref_tmp058;
    while (1) {
      unsigned long t59 = __i56;
      char* t60 = __p54;
      char* ptr61 = &(t60)[t59];
      char c62 = 0;
      ref_tmp058 = c62;
      _Bool r63 = __gnu_cxx__char_traits_char___eq(ptr61, &ref_tmp058);
      _Bool u64 = !r63;
      if (!u64) break;
      unsigned long t65 = __i56;
      unsigned long u66 = t65 + 1;
      __i56 = u66;
    }
  unsigned long t67 = __i56;
  __retval55 = t67;
  unsigned long t68 = __retval55;
  return t68;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v69) {
bb70:
  char* __s71;
  unsigned long __retval72;
  __s71 = v69;
    _Bool r73 = std____is_constant_evaluated();
    if (r73) {
      char* t74 = __s71;
      unsigned long r75 = __gnu_cxx__char_traits_char___length(t74);
      __retval72 = r75;
      unsigned long t76 = __retval72;
      return t76;
    }
  char* t77 = __s71;
  unsigned long r78 = strlen(t77);
  __retval72 = r78;
  unsigned long t79 = __retval72;
  return t79;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v80, char* v81) {
bb82:
  struct std__basic_ostream_char__std__char_traits_char__* __out83;
  char* __s84;
  struct std__basic_ostream_char__std__char_traits_char__* __retval85;
  __out83 = v80;
  __s84 = v81;
    char* t86 = __s84;
    _Bool cast87 = (_Bool)t86;
    _Bool u88 = !cast87;
    if (u88) {
      struct std__basic_ostream_char__std__char_traits_char__* t89 = __out83;
      void** v90 = (void**)t89;
      void* v91 = *((void**)v90);
      unsigned char* cast92 = (unsigned char*)v91;
      long c93 = -24;
      unsigned char* ptr94 = &(cast92)[c93];
      long* cast95 = (long*)ptr94;
      long t96 = *cast95;
      unsigned char* cast97 = (unsigned char*)t89;
      unsigned char* ptr98 = &(cast97)[t96];
      struct std__basic_ostream_char__std__char_traits_char__* cast99 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr98;
      struct std__basic_ios_char__std__char_traits_char__* cast100 = (struct std__basic_ios_char__std__char_traits_char__*)cast99;
      int t101 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast100, t101);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t102 = __out83;
      char* t103 = __s84;
      char* t104 = __s84;
      unsigned long r105 = std__char_traits_char___length(t104);
      long cast106 = (long)r105;
      struct std__basic_ostream_char__std__char_traits_char__* r107 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t102, t103, cast106);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t108 = __out83;
  __retval85 = t108;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = __retval85;
  return t109;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v110, void* v111) {
bb112:
  struct std__basic_ostream_char__std__char_traits_char__* this113;
  void* __pf114;
  struct std__basic_ostream_char__std__char_traits_char__* __retval115;
  this113 = v110;
  __pf114 = v111;
  struct std__basic_ostream_char__std__char_traits_char__* t116 = this113;
  void* t117 = __pf114;
  struct std__basic_ostream_char__std__char_traits_char__* r118 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t117)(t116);
  __retval115 = r118;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __retval115;
  return t119;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v120) {
bb121:
  struct std__basic_ostream_char__std__char_traits_char__* __os122;
  struct std__basic_ostream_char__std__char_traits_char__* __retval123;
  __os122 = v120;
  struct std__basic_ostream_char__std__char_traits_char__* t124 = __os122;
  struct std__basic_ostream_char__std__char_traits_char__* r125 = std__ostream__flush(t124);
  __retval123 = r125;
  struct std__basic_ostream_char__std__char_traits_char__* t126 = __retval123;
  return t126;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v127) {
bb128:
  struct std__ctype_char_* __f129;
  struct std__ctype_char_* __retval130;
  __f129 = v127;
    struct std__ctype_char_* t131 = __f129;
    _Bool cast132 = (_Bool)t131;
    _Bool u133 = !cast132;
    if (u133) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t134 = __f129;
  __retval130 = t134;
  struct std__ctype_char_* t135 = __retval130;
  return t135;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v136, char v137) {
bb138:
  struct std__ctype_char_* this139;
  char __c140;
  char __retval141;
  this139 = v136;
  __c140 = v137;
  struct std__ctype_char_* t142 = this139;
    char t143 = t142->_M_widen_ok;
    _Bool cast144 = (_Bool)t143;
    if (cast144) {
      char t145 = __c140;
      unsigned char cast146 = (unsigned char)t145;
      unsigned long cast147 = (unsigned long)cast146;
      char t148 = t142->_M_widen[cast147];
      __retval141 = t148;
      char t149 = __retval141;
      return t149;
    }
  std__ctype_char____M_widen_init___const(t142);
  char t150 = __c140;
  void** v151 = (void**)t142;
  void* v152 = *((void**)v151);
  char vcall155 = (char)__VERIFIER_virtual_call_char_char(t142, 6, t150);
  __retval141 = vcall155;
  char t156 = __retval141;
  return t156;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v157, char v158) {
bb159:
  struct std__basic_ios_char__std__char_traits_char__* this160;
  char __c161;
  char __retval162;
  this160 = v157;
  __c161 = v158;
  struct std__basic_ios_char__std__char_traits_char__* t163 = this160;
  struct std__ctype_char_* t164 = t163->_M_ctype;
  struct std__ctype_char_* r165 = std__ctype_char__const__std____check_facet_std__ctype_char___(t164);
  char t166 = __c161;
  char r167 = std__ctype_char___widen_char__const(r165, t166);
  __retval162 = r167;
  char t168 = __retval162;
  return t168;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v169) {
bb170:
  struct std__basic_ostream_char__std__char_traits_char__* __os171;
  struct std__basic_ostream_char__std__char_traits_char__* __retval172;
  __os171 = v169;
  struct std__basic_ostream_char__std__char_traits_char__* t173 = __os171;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = __os171;
  void** v175 = (void**)t174;
  void* v176 = *((void**)v175);
  unsigned char* cast177 = (unsigned char*)v176;
  long c178 = -24;
  unsigned char* ptr179 = &(cast177)[c178];
  long* cast180 = (long*)ptr179;
  long t181 = *cast180;
  unsigned char* cast182 = (unsigned char*)t174;
  unsigned char* ptr183 = &(cast182)[t181];
  struct std__basic_ostream_char__std__char_traits_char__* cast184 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr183;
  struct std__basic_ios_char__std__char_traits_char__* cast185 = (struct std__basic_ios_char__std__char_traits_char__*)cast184;
  char c186 = 10;
  char r187 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast185, c186);
  struct std__basic_ostream_char__std__char_traits_char__* r188 = std__ostream__put(t173, r187);
  struct std__basic_ostream_char__std__char_traits_char__* r189 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r188);
  __retval172 = r189;
  struct std__basic_ostream_char__std__char_traits_char__* t190 = __retval172;
  return t190;
}

// function: _ZNK4Test5printEv
void Test__print___const(struct Test* v191) {
bb192:
  struct Test* this193;
  this193 = v191;
  struct Test* t194 = this193;
  char* cast195 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r196 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast195);
  int t197 = t194->x;
  struct std__basic_ostream_char__std__char_traits_char__* r198 = std__ostream__operator__(r196, t197);
  char* cast199 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r200 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast199);
  int t201 = t194->x;
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__ostream__operator__(r200, t201);
  char* cast203 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r204 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast203);
  int t205 = t194->x;
  struct std__basic_ostream_char__std__char_traits_char__* r206 = std__ostream__operator__(r204, t205);
  struct std__basic_ostream_char__std__char_traits_char__* r207 = std__ostream__operator___std__ostream_____(r206, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: main
int main() {
bb208:
  int __retval209;
  struct Test testObject210;
  int c211 = 0;
  __retval209 = c211;
  int c212 = 12;
  Test__Test(&testObject210, c212);
  Test__print___const(&testObject210);
  int c213 = 0;
  __retval209 = c213;
  int t214 = __retval209;
  return t214;
}

