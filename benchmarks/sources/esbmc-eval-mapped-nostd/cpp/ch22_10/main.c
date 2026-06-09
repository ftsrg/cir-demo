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
struct TestMutable { int value; };
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
char _str[16] = "Initial value: ";
char _str_1[18] = "\nModified value: ";
void TestMutable__TestMutable(struct TestMutable* p0, int p1);
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
int TestMutable__getValue___const(struct TestMutable* p0);
void TestMutable__modifyValue___const(struct TestMutable* p0);
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

// function: _ZN11TestMutableC2Ei
void TestMutable__TestMutable(struct TestMutable* v0, int v1) {
bb2:
  struct TestMutable* this3;
  int v4;
  this3 = v0;
  v4 = v1;
  struct TestMutable* t5 = this3;
  int t6 = v4;
  t5->value = t6;
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

// function: _ZNK11TestMutable8getValueEv
int TestMutable__getValue___const(struct TestMutable* v110) {
bb111:
  struct TestMutable* this112;
  int __retval113;
  this112 = v110;
  struct TestMutable* t114 = this112;
  int t115 = t114->value;
  __retval113 = t115;
  int t116 = __retval113;
  return t116;
}

// function: _ZNK11TestMutable11modifyValueEv
void TestMutable__modifyValue___const(struct TestMutable* v117) {
bb118:
  struct TestMutable* this119;
  this119 = v117;
  struct TestMutable* t120 = this119;
  int t121 = t120->value;
  int u122 = t121 + 1;
  t120->value = u122;
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v123, void* v124) {
bb125:
  struct std__basic_ostream_char__std__char_traits_char__* this126;
  void* __pf127;
  struct std__basic_ostream_char__std__char_traits_char__* __retval128;
  this126 = v123;
  __pf127 = v124;
  struct std__basic_ostream_char__std__char_traits_char__* t129 = this126;
  void* t130 = __pf127;
  struct std__basic_ostream_char__std__char_traits_char__* r131 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t130)(t129);
  __retval128 = r131;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = __retval128;
  return t132;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v133) {
bb134:
  struct std__basic_ostream_char__std__char_traits_char__* __os135;
  struct std__basic_ostream_char__std__char_traits_char__* __retval136;
  __os135 = v133;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __os135;
  struct std__basic_ostream_char__std__char_traits_char__* r138 = std__ostream__flush(t137);
  __retval136 = r138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval136;
  return t139;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v140) {
bb141:
  struct std__ctype_char_* __f142;
  struct std__ctype_char_* __retval143;
  __f142 = v140;
    struct std__ctype_char_* t144 = __f142;
    _Bool cast145 = (_Bool)t144;
    _Bool u146 = !cast145;
    if (u146) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t147 = __f142;
  __retval143 = t147;
  struct std__ctype_char_* t148 = __retval143;
  return t148;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v149, char v150) {
bb151:
  struct std__ctype_char_* this152;
  char __c153;
  char __retval154;
  this152 = v149;
  __c153 = v150;
  struct std__ctype_char_* t155 = this152;
    char t156 = t155->_M_widen_ok;
    _Bool cast157 = (_Bool)t156;
    if (cast157) {
      char t158 = __c153;
      unsigned char cast159 = (unsigned char)t158;
      unsigned long cast160 = (unsigned long)cast159;
      char t161 = t155->_M_widen[cast160];
      __retval154 = t161;
      char t162 = __retval154;
      return t162;
    }
  std__ctype_char____M_widen_init___const(t155);
  char t163 = __c153;
  void** v164 = (void**)t155;
  void* v165 = *((void**)v164);
  char vcall168 = (char)__VERIFIER_virtual_call_char_char(t155, 6, t163);
  __retval154 = vcall168;
  char t169 = __retval154;
  return t169;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v170, char v171) {
bb172:
  struct std__basic_ios_char__std__char_traits_char__* this173;
  char __c174;
  char __retval175;
  this173 = v170;
  __c174 = v171;
  struct std__basic_ios_char__std__char_traits_char__* t176 = this173;
  struct std__ctype_char_* t177 = t176->_M_ctype;
  struct std__ctype_char_* r178 = std__ctype_char__const__std____check_facet_std__ctype_char___(t177);
  char t179 = __c174;
  char r180 = std__ctype_char___widen_char__const(r178, t179);
  __retval175 = r180;
  char t181 = __retval175;
  return t181;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v182) {
bb183:
  struct std__basic_ostream_char__std__char_traits_char__* __os184;
  struct std__basic_ostream_char__std__char_traits_char__* __retval185;
  __os184 = v182;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __os184;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __os184;
  void** v188 = (void**)t187;
  void* v189 = *((void**)v188);
  unsigned char* cast190 = (unsigned char*)v189;
  long c191 = -24;
  unsigned char* ptr192 = &(cast190)[c191];
  long* cast193 = (long*)ptr192;
  long t194 = *cast193;
  unsigned char* cast195 = (unsigned char*)t187;
  unsigned char* ptr196 = &(cast195)[t194];
  struct std__basic_ostream_char__std__char_traits_char__* cast197 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr196;
  struct std__basic_ios_char__std__char_traits_char__* cast198 = (struct std__basic_ios_char__std__char_traits_char__*)cast197;
  char c199 = 10;
  char r200 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast198, c199);
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__ostream__put(t186, r200);
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r201);
  __retval185 = r202;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __retval185;
  return t203;
}

// function: main
int main() {
bb204:
  int __retval205;
  struct TestMutable test206;
  int c207 = 0;
  __retval205 = c207;
  int c208 = 99;
  TestMutable__TestMutable(&test206, c208);
  char* cast209 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r210 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast209);
  int r211 = TestMutable__getValue___const(&test206);
  struct std__basic_ostream_char__std__char_traits_char__* r212 = std__ostream__operator__(r210, r211);
  TestMutable__modifyValue___const(&test206);
  char* cast213 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r214 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast213);
  int r215 = TestMutable__getValue___const(&test206);
  struct std__basic_ostream_char__std__char_traits_char__* r216 = std__ostream__operator__(r214, r215);
  struct std__basic_ostream_char__std__char_traits_char__* r217 = std__ostream__operator___std__ostream_____(r216, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c218 = 0;
  __retval205 = c218;
  int t219 = __retval205;
  return t219;
}

