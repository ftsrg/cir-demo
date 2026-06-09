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
int current __attribute__((aligned(4))) = 0;
char _str[16] = "myarray[1] == 1";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm89/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[18] = "myarray contains:";
char _str_3[2] = " ";
int UniqueNumber();
int std____size_to_integer(int p0);
int* int__std__generate_n_int___int__int________int___int__int____(int* p0, int p1, void* p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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

// function: _Z12UniqueNumberv
int UniqueNumber() {
bb0:
  int __retval1;
  int t2 = current;
  int u3 = t2 + 1;
  *&current = u3;
  __retval1 = u3;
  int t4 = __retval1;
  return t4;
}

// function: _ZSt17__size_to_integeri
int std____size_to_integer(int v5) {
bb6:
  int __n7;
  int __retval8;
  __n7 = v5;
  int t9 = __n7;
  __retval8 = t9;
  int t10 = __retval8;
  return t10;
}

// function: _ZSt10generate_nIPiiPFivEET_S3_T0_T1_
int* int__std__generate_n_int___int__int________int___int__int____(int* v11, int v12, void* v13) {
bb14:
  int* __first15;
  int __n16;
  void* __gen17;
  int* __retval18;
  __first15 = v11;
  __n16 = v12;
  __gen17 = v13;
    int __niter19;
    int t20 = __n16;
    int r21 = std____size_to_integer(t20);
    __niter19 = r21;
    while (1) {
      int t23 = __niter19;
      int c24 = 0;
      _Bool c25 = ((t23 > c24)) ? 1 : 0;
      if (!c25) break;
      void* t26 = __gen17;
      int r27 = ((int (*)())t26)();
      int* t28 = __first15;
      *t28 = r27;
    for_step22: ;
      int t29 = __niter19;
      int u30 = t29 - 1;
      __niter19 = u30;
      int* t31 = __first15;
      int c32 = 1;
      int* ptr33 = &(t31)[c32];
      __first15 = ptr33;
    }
  int* t34 = __first15;
  __retval18 = t34;
  int* t35 = __retval18;
  return t35;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v36, int v37) {
bb38:
  int __a39;
  int __b40;
  int __retval41;
  __a39 = v36;
  __b40 = v37;
  int t42 = __a39;
  int t43 = __b40;
  int b44 = t42 | t43;
  __retval41 = b44;
  int t45 = __retval41;
  return t45;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v46) {
bb47:
  struct std__basic_ios_char__std__char_traits_char__* this48;
  int __retval49;
  this48 = v46;
  struct std__basic_ios_char__std__char_traits_char__* t50 = this48;
  struct std__ios_base* base51 = (struct std__ios_base*)((char *)t50 + 0);
  int t52 = base51->_M_streambuf_state;
  __retval49 = t52;
  int t53 = __retval49;
  return t53;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v54, int v55) {
bb56:
  struct std__basic_ios_char__std__char_traits_char__* this57;
  int __state58;
  this57 = v54;
  __state58 = v55;
  struct std__basic_ios_char__std__char_traits_char__* t59 = this57;
  int r60 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t59);
  int t61 = __state58;
  int r62 = std__operator_(r60, t61);
  std__basic_ios_char__std__char_traits_char_____clear(t59, r62);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb63:
  _Bool __retval64;
    _Bool c65 = 0;
    __retval64 = c65;
    _Bool t66 = __retval64;
    return t66;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v67, char* v68) {
bb69:
  char* __c170;
  char* __c271;
  _Bool __retval72;
  __c170 = v67;
  __c271 = v68;
  char* t73 = __c170;
  char t74 = *t73;
  int cast75 = (int)t74;
  char* t76 = __c271;
  char t77 = *t76;
  int cast78 = (int)t77;
  _Bool c79 = ((cast75 == cast78)) ? 1 : 0;
  __retval72 = c79;
  _Bool t80 = __retval72;
  return t80;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v81) {
bb82:
  char* __p83;
  unsigned long __retval84;
  unsigned long __i85;
  __p83 = v81;
  unsigned long c86 = 0;
  __i85 = c86;
    char ref_tmp087;
    while (1) {
      unsigned long t88 = __i85;
      char* t89 = __p83;
      char* ptr90 = &(t89)[t88];
      char c91 = 0;
      ref_tmp087 = c91;
      _Bool r92 = __gnu_cxx__char_traits_char___eq(ptr90, &ref_tmp087);
      _Bool u93 = !r92;
      if (!u93) break;
      unsigned long t94 = __i85;
      unsigned long u95 = t94 + 1;
      __i85 = u95;
    }
  unsigned long t96 = __i85;
  __retval84 = t96;
  unsigned long t97 = __retval84;
  return t97;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v98) {
bb99:
  char* __s100;
  unsigned long __retval101;
  __s100 = v98;
    _Bool r102 = std____is_constant_evaluated();
    if (r102) {
      char* t103 = __s100;
      unsigned long r104 = __gnu_cxx__char_traits_char___length(t103);
      __retval101 = r104;
      unsigned long t105 = __retval101;
      return t105;
    }
  char* t106 = __s100;
  unsigned long r107 = strlen(t106);
  __retval101 = r107;
  unsigned long t108 = __retval101;
  return t108;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v109, char* v110) {
bb111:
  struct std__basic_ostream_char__std__char_traits_char__* __out112;
  char* __s113;
  struct std__basic_ostream_char__std__char_traits_char__* __retval114;
  __out112 = v109;
  __s113 = v110;
    char* t115 = __s113;
    _Bool cast116 = (_Bool)t115;
    _Bool u117 = !cast116;
    if (u117) {
      struct std__basic_ostream_char__std__char_traits_char__* t118 = __out112;
      void** v119 = (void**)t118;
      void* v120 = *((void**)v119);
      unsigned char* cast121 = (unsigned char*)v120;
      long c122 = -24;
      unsigned char* ptr123 = &(cast121)[c122];
      long* cast124 = (long*)ptr123;
      long t125 = *cast124;
      unsigned char* cast126 = (unsigned char*)t118;
      unsigned char* ptr127 = &(cast126)[t125];
      struct std__basic_ostream_char__std__char_traits_char__* cast128 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr127;
      struct std__basic_ios_char__std__char_traits_char__* cast129 = (struct std__basic_ios_char__std__char_traits_char__*)cast128;
      int t130 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast129, t130);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t131 = __out112;
      char* t132 = __s113;
      char* t133 = __s113;
      unsigned long r134 = std__char_traits_char___length(t133);
      long cast135 = (long)r134;
      struct std__basic_ostream_char__std__char_traits_char__* r136 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t131, t132, cast135);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __out112;
  __retval114 = t137;
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __retval114;
  return t138;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v139, void* v140) {
bb141:
  struct std__basic_ostream_char__std__char_traits_char__* this142;
  void* __pf143;
  struct std__basic_ostream_char__std__char_traits_char__* __retval144;
  this142 = v139;
  __pf143 = v140;
  struct std__basic_ostream_char__std__char_traits_char__* t145 = this142;
  void* t146 = __pf143;
  struct std__basic_ostream_char__std__char_traits_char__* r147 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t146)(t145);
  __retval144 = r147;
  struct std__basic_ostream_char__std__char_traits_char__* t148 = __retval144;
  return t148;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v149) {
bb150:
  struct std__basic_ostream_char__std__char_traits_char__* __os151;
  struct std__basic_ostream_char__std__char_traits_char__* __retval152;
  __os151 = v149;
  struct std__basic_ostream_char__std__char_traits_char__* t153 = __os151;
  struct std__basic_ostream_char__std__char_traits_char__* r154 = std__ostream__flush(t153);
  __retval152 = r154;
  struct std__basic_ostream_char__std__char_traits_char__* t155 = __retval152;
  return t155;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v156) {
bb157:
  struct std__ctype_char_* __f158;
  struct std__ctype_char_* __retval159;
  __f158 = v156;
    struct std__ctype_char_* t160 = __f158;
    _Bool cast161 = (_Bool)t160;
    _Bool u162 = !cast161;
    if (u162) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t163 = __f158;
  __retval159 = t163;
  struct std__ctype_char_* t164 = __retval159;
  return t164;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v165, char v166) {
bb167:
  struct std__ctype_char_* this168;
  char __c169;
  char __retval170;
  this168 = v165;
  __c169 = v166;
  struct std__ctype_char_* t171 = this168;
    char t172 = t171->_M_widen_ok;
    _Bool cast173 = (_Bool)t172;
    if (cast173) {
      char t174 = __c169;
      unsigned char cast175 = (unsigned char)t174;
      unsigned long cast176 = (unsigned long)cast175;
      char t177 = t171->_M_widen[cast176];
      __retval170 = t177;
      char t178 = __retval170;
      return t178;
    }
  std__ctype_char____M_widen_init___const(t171);
  char t179 = __c169;
  void** v180 = (void**)t171;
  void* v181 = *((void**)v180);
  char vcall184 = (char)__VERIFIER_virtual_call_char_char(t171, 6, t179);
  __retval170 = vcall184;
  char t185 = __retval170;
  return t185;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v186, char v187) {
bb188:
  struct std__basic_ios_char__std__char_traits_char__* this189;
  char __c190;
  char __retval191;
  this189 = v186;
  __c190 = v187;
  struct std__basic_ios_char__std__char_traits_char__* t192 = this189;
  struct std__ctype_char_* t193 = t192->_M_ctype;
  struct std__ctype_char_* r194 = std__ctype_char__const__std____check_facet_std__ctype_char___(t193);
  char t195 = __c190;
  char r196 = std__ctype_char___widen_char__const(r194, t195);
  __retval191 = r196;
  char t197 = __retval191;
  return t197;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v198) {
bb199:
  struct std__basic_ostream_char__std__char_traits_char__* __os200;
  struct std__basic_ostream_char__std__char_traits_char__* __retval201;
  __os200 = v198;
  struct std__basic_ostream_char__std__char_traits_char__* t202 = __os200;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __os200;
  void** v204 = (void**)t203;
  void* v205 = *((void**)v204);
  unsigned char* cast206 = (unsigned char*)v205;
  long c207 = -24;
  unsigned char* ptr208 = &(cast206)[c207];
  long* cast209 = (long*)ptr208;
  long t210 = *cast209;
  unsigned char* cast211 = (unsigned char*)t203;
  unsigned char* ptr212 = &(cast211)[t210];
  struct std__basic_ostream_char__std__char_traits_char__* cast213 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr212;
  struct std__basic_ios_char__std__char_traits_char__* cast214 = (struct std__basic_ios_char__std__char_traits_char__*)cast213;
  char c215 = 10;
  char r216 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast214, c215);
  struct std__basic_ostream_char__std__char_traits_char__* r217 = std__ostream__put(t202, r216);
  struct std__basic_ostream_char__std__char_traits_char__* r218 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r217);
  __retval201 = r218;
  struct std__basic_ostream_char__std__char_traits_char__* t219 = __retval201;
  return t219;
}

// function: main
int main() {
bb220:
  int __retval221;
  int myarray222[5];
  int c223 = 0;
  __retval221 = c223;
  int* cast224 = (int*)&(myarray222);
  int c225 = 5;
  int* r226 = int__std__generate_n_int___int__int________int___int__int____(cast224, c225, &UniqueNumber);
  long c227 = 1;
  int t228 = myarray222[c227];
  int c229 = 1;
  _Bool c230 = ((t228 == c229)) ? 1 : 0;
  if (c230) {
  } else {
    char* cast231 = (char*)&(_str);
    char* c232 = _str_1;
    unsigned int c233 = 22;
    char* cast234 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast231, c232, c233, cast234);
  }
  char* cast235 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r236 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast235);
    int i237;
    int c238 = 0;
    i237 = c238;
    while (1) {
      int t240 = i237;
      int c241 = 5;
      _Bool c242 = ((t240 < c241)) ? 1 : 0;
      if (!c242) break;
      char* cast243 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast243);
      int t245 = i237;
      long cast246 = (long)t245;
      int t247 = myarray222[cast246];
      struct std__basic_ostream_char__std__char_traits_char__* r248 = std__ostream__operator__(r244, t247);
    for_step239: ;
      int t249 = i237;
      int u250 = t249 + 1;
      i237 = u250;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r251 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c252 = 0;
  __retval221 = c252;
  int t253 = __retval221;
  return t253;
}

