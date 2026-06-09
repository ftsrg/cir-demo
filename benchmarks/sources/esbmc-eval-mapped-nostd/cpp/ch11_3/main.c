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
struct Stack_double_ { int size; int top; double* stackPtr; };
struct Stack_int_ { int size; int top; int* stackPtr; };
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
char _str[12] = "doubleStack";
char _str_1[9] = "intStack";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[24] = "\nPushing elements onto ";
char _str_3[29] = "\nStack is full. Cannot push ";
char _str_4[25] = "\n\nPopping elements from ";
char _str_5[29] = "\nStack is empty. Cannot pop\n";
void Stack_double___Stack(struct Stack_double_* p0, int p1);
void Stack_int___Stack(struct Stack_int_* p0, int p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
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
_Bool Stack_double___isFull___const(struct Stack_double_* p0);
_Bool Stack_double___push(struct Stack_double_* p0, double* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
_Bool Stack_double___isEmpty___const(struct Stack_double_* p0);
_Bool Stack_double___pop(struct Stack_double_* p0, double* p1);
void void_testStack_double_(struct Stack_double_* p0, double p1, double p2, char* p3);
_Bool Stack_int___isFull___const(struct Stack_int_* p0);
_Bool Stack_int___push(struct Stack_int_* p0, int* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
_Bool Stack_int___isEmpty___const(struct Stack_int_* p0);
_Bool Stack_int___pop(struct Stack_int_* p0, int* p1);
void void_testStack_int_(struct Stack_int_* p0, int p1, int p2, char* p3);
void Stack_int____Stack(struct Stack_int_* p0);
void Stack_double____Stack(struct Stack_double_* p0);
int main();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete___2(void* p0, unsigned long p1) { free(p0); }
void operator_delete__(void* p0) { free(p0); }

// function: _ZN5StackIdEC2Ei
void Stack_double___Stack(struct Stack_double_* v0, int v1) {
bb2:
  struct Stack_double_* this3;
  int s4;
  double* __new_result5;
  this3 = v0;
  s4 = v1;
  struct Stack_double_* t6 = this3;
  int t7 = s4;
  int c8 = 0;
  _Bool c9 = ((t7 > c8)) ? 1 : 0;
  int ternary10;
  if (c9) {
    int t11 = s4;
    ternary10 = (int)t11;
  } else {
    int c12 = 10;
    ternary10 = (int)c12;
  }
  t6->size = ternary10;
  int c13 = -1;
  t6->top = c13;
  int t14 = t6->size;
  unsigned long cast15 = (unsigned long)t14;
  unsigned long c16 = 8;
  unsigned long ovr17;
  _Bool ovf18 = __builtin_mul_overflow(cast15, c16, &ovr17);
  unsigned long c19 = -1;
  unsigned long sel20 = ovf18 ? c19 : ovr17;
  void* r21 = operator_new__(sel20);
    double* cast22 = (double*)r21;
    __new_result5 = cast22;
  double* t23 = __new_result5;
  t6->stackPtr = t23;
  return;
}

// function: _ZN5StackIiEC2Ei
void Stack_int___Stack(struct Stack_int_* v24, int v25) {
bb26:
  struct Stack_int_* this27;
  int s28;
  int* __new_result29;
  this27 = v24;
  s28 = v25;
  struct Stack_int_* t30 = this27;
  int t31 = s28;
  int c32 = 0;
  _Bool c33 = ((t31 > c32)) ? 1 : 0;
  int ternary34;
  if (c33) {
    int t35 = s28;
    ternary34 = (int)t35;
  } else {
    int c36 = 10;
    ternary34 = (int)c36;
  }
  t30->size = ternary34;
  int c37 = -1;
  t30->top = c37;
  int t38 = t30->size;
  unsigned long cast39 = (unsigned long)t38;
  unsigned long c40 = 4;
  unsigned long ovr41;
  _Bool ovf42 = __builtin_mul_overflow(cast39, c40, &ovr41);
  unsigned long c43 = -1;
  unsigned long sel44 = ovf42 ? c43 : ovr41;
  void* r45 = operator_new__(sel44);
    int* cast46 = (int*)r45;
    __new_result29 = cast46;
  int* t47 = __new_result29;
  t30->stackPtr = t47;
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v48) {
bb49:
  struct std__ios_base* this50;
  long __retval51;
  this50 = v48;
  struct std__ios_base* t52 = this50;
  long t53 = t52->_M_width;
  __retval51 = t53;
  long t54 = __retval51;
  return t54;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v55, char v56) {
bb57:
  struct std__basic_ostream_char__std__char_traits_char__* __out58;
  char __c59;
  struct std__basic_ostream_char__std__char_traits_char__* __retval60;
  __out58 = v55;
  __c59 = v56;
    struct std__basic_ostream_char__std__char_traits_char__* t61 = __out58;
    void** v62 = (void**)t61;
    void* v63 = *((void**)v62);
    unsigned char* cast64 = (unsigned char*)v63;
    long c65 = -24;
    unsigned char* ptr66 = &(cast64)[c65];
    long* cast67 = (long*)ptr66;
    long t68 = *cast67;
    unsigned char* cast69 = (unsigned char*)t61;
    unsigned char* ptr70 = &(cast69)[t68];
    struct std__basic_ostream_char__std__char_traits_char__* cast71 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr70;
    struct std__ios_base* cast72 = (struct std__ios_base*)cast71;
    long r73 = std__ios_base__width___const(cast72);
    long c74 = 0;
    _Bool c75 = ((r73 != c74)) ? 1 : 0;
    if (c75) {
      struct std__basic_ostream_char__std__char_traits_char__* t76 = __out58;
      long c77 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r78 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t76, &__c59, c77);
      __retval60 = r78;
      struct std__basic_ostream_char__std__char_traits_char__* t79 = __retval60;
      return t79;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t80 = __out58;
  char t81 = __c59;
  struct std__basic_ostream_char__std__char_traits_char__* r82 = std__ostream__put(t80, t81);
  struct std__basic_ostream_char__std__char_traits_char__* t83 = __out58;
  __retval60 = t83;
  struct std__basic_ostream_char__std__char_traits_char__* t84 = __retval60;
  return t84;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v85, int v86) {
bb87:
  int __a88;
  int __b89;
  int __retval90;
  __a88 = v85;
  __b89 = v86;
  int t91 = __a88;
  int t92 = __b89;
  int b93 = t91 | t92;
  __retval90 = b93;
  int t94 = __retval90;
  return t94;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v95) {
bb96:
  struct std__basic_ios_char__std__char_traits_char__* this97;
  int __retval98;
  this97 = v95;
  struct std__basic_ios_char__std__char_traits_char__* t99 = this97;
  struct std__ios_base* base100 = (struct std__ios_base*)((char *)t99 + 0);
  int t101 = base100->_M_streambuf_state;
  __retval98 = t101;
  int t102 = __retval98;
  return t102;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v103, int v104) {
bb105:
  struct std__basic_ios_char__std__char_traits_char__* this106;
  int __state107;
  this106 = v103;
  __state107 = v104;
  struct std__basic_ios_char__std__char_traits_char__* t108 = this106;
  int r109 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t108);
  int t110 = __state107;
  int r111 = std__operator_(r109, t110);
  std__basic_ios_char__std__char_traits_char_____clear(t108, r111);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb112:
  _Bool __retval113;
    _Bool c114 = 0;
    __retval113 = c114;
    _Bool t115 = __retval113;
    return t115;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v116, char* v117) {
bb118:
  char* __c1119;
  char* __c2120;
  _Bool __retval121;
  __c1119 = v116;
  __c2120 = v117;
  char* t122 = __c1119;
  char t123 = *t122;
  int cast124 = (int)t123;
  char* t125 = __c2120;
  char t126 = *t125;
  int cast127 = (int)t126;
  _Bool c128 = ((cast124 == cast127)) ? 1 : 0;
  __retval121 = c128;
  _Bool t129 = __retval121;
  return t129;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v130) {
bb131:
  char* __p132;
  unsigned long __retval133;
  unsigned long __i134;
  __p132 = v130;
  unsigned long c135 = 0;
  __i134 = c135;
    char ref_tmp0136;
    while (1) {
      unsigned long t137 = __i134;
      char* t138 = __p132;
      char* ptr139 = &(t138)[t137];
      char c140 = 0;
      ref_tmp0136 = c140;
      _Bool r141 = __gnu_cxx__char_traits_char___eq(ptr139, &ref_tmp0136);
      _Bool u142 = !r141;
      if (!u142) break;
      unsigned long t143 = __i134;
      unsigned long u144 = t143 + 1;
      __i134 = u144;
    }
  unsigned long t145 = __i134;
  __retval133 = t145;
  unsigned long t146 = __retval133;
  return t146;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v147) {
bb148:
  char* __s149;
  unsigned long __retval150;
  __s149 = v147;
    _Bool r151 = std____is_constant_evaluated();
    if (r151) {
      char* t152 = __s149;
      unsigned long r153 = __gnu_cxx__char_traits_char___length(t152);
      __retval150 = r153;
      unsigned long t154 = __retval150;
      return t154;
    }
  char* t155 = __s149;
  unsigned long r156 = strlen(t155);
  __retval150 = r156;
  unsigned long t157 = __retval150;
  return t157;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v158, char* v159) {
bb160:
  struct std__basic_ostream_char__std__char_traits_char__* __out161;
  char* __s162;
  struct std__basic_ostream_char__std__char_traits_char__* __retval163;
  __out161 = v158;
  __s162 = v159;
    char* t164 = __s162;
    _Bool cast165 = (_Bool)t164;
    _Bool u166 = !cast165;
    if (u166) {
      struct std__basic_ostream_char__std__char_traits_char__* t167 = __out161;
      void** v168 = (void**)t167;
      void* v169 = *((void**)v168);
      unsigned char* cast170 = (unsigned char*)v169;
      long c171 = -24;
      unsigned char* ptr172 = &(cast170)[c171];
      long* cast173 = (long*)ptr172;
      long t174 = *cast173;
      unsigned char* cast175 = (unsigned char*)t167;
      unsigned char* ptr176 = &(cast175)[t174];
      struct std__basic_ostream_char__std__char_traits_char__* cast177 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr176;
      struct std__basic_ios_char__std__char_traits_char__* cast178 = (struct std__basic_ios_char__std__char_traits_char__*)cast177;
      int t179 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast178, t179);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t180 = __out161;
      char* t181 = __s162;
      char* t182 = __s162;
      unsigned long r183 = std__char_traits_char___length(t182);
      long cast184 = (long)r183;
      struct std__basic_ostream_char__std__char_traits_char__* r185 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t180, t181, cast184);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __out161;
  __retval163 = t186;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __retval163;
  return t187;
}

// function: _ZNK5StackIdE6isFullEv
_Bool Stack_double___isFull___const(struct Stack_double_* v188) {
bb189:
  struct Stack_double_* this190;
  _Bool __retval191;
  this190 = v188;
  struct Stack_double_* t192 = this190;
  int t193 = t192->top;
  int t194 = t192->size;
  int c195 = 1;
  int b196 = t194 - c195;
  _Bool c197 = ((t193 == b196)) ? 1 : 0;
  __retval191 = c197;
  _Bool t198 = __retval191;
  return t198;
}

// function: _ZN5StackIdE4pushERKd
_Bool Stack_double___push(struct Stack_double_* v199, double* v200) {
bb201:
  struct Stack_double_* this202;
  double* pushValue203;
  _Bool __retval204;
  this202 = v199;
  pushValue203 = v200;
  struct Stack_double_* t205 = this202;
    _Bool r206 = Stack_double___isFull___const(t205);
    _Bool u207 = !r206;
    if (u207) {
      double* t208 = pushValue203;
      double t209 = *t208;
      int t210 = t205->top;
      int u211 = t210 + 1;
      t205->top = u211;
      long cast212 = (long)u211;
      double* t213 = t205->stackPtr;
      double* ptr214 = &(t213)[cast212];
      *ptr214 = t209;
      _Bool c215 = 1;
      __retval204 = c215;
      _Bool t216 = __retval204;
      return t216;
    }
  _Bool c217 = 0;
  __retval204 = c217;
  _Bool t218 = __retval204;
  return t218;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v219, double v220) {
bb221:
  struct std__basic_ostream_char__std__char_traits_char__* this222;
  double __f223;
  struct std__basic_ostream_char__std__char_traits_char__* __retval224;
  this222 = v219;
  __f223 = v220;
  struct std__basic_ostream_char__std__char_traits_char__* t225 = this222;
  double t226 = __f223;
  struct std__basic_ostream_char__std__char_traits_char__* r227 = std__ostream__std__ostream___M_insert_double_(t225, t226);
  __retval224 = r227;
  struct std__basic_ostream_char__std__char_traits_char__* t228 = __retval224;
  return t228;
}

// function: _ZNK5StackIdE7isEmptyEv
_Bool Stack_double___isEmpty___const(struct Stack_double_* v229) {
bb230:
  struct Stack_double_* this231;
  _Bool __retval232;
  this231 = v229;
  struct Stack_double_* t233 = this231;
  int t234 = t233->top;
  int c235 = -1;
  _Bool c236 = ((t234 == c235)) ? 1 : 0;
  __retval232 = c236;
  _Bool t237 = __retval232;
  return t237;
}

// function: _ZN5StackIdE3popERd
_Bool Stack_double___pop(struct Stack_double_* v238, double* v239) {
bb240:
  struct Stack_double_* this241;
  double* popValue242;
  _Bool __retval243;
  this241 = v238;
  popValue242 = v239;
  struct Stack_double_* t244 = this241;
    _Bool r245 = Stack_double___isEmpty___const(t244);
    _Bool u246 = !r245;
    if (u246) {
      int t247 = t244->top;
      int u248 = t247 - 1;
      t244->top = u248;
      long cast249 = (long)t247;
      double* t250 = t244->stackPtr;
      double* ptr251 = &(t250)[cast249];
      double t252 = *ptr251;
      double* t253 = popValue242;
      *t253 = t252;
      _Bool c254 = 1;
      __retval243 = c254;
      _Bool t255 = __retval243;
      return t255;
    }
  _Bool c256 = 0;
  __retval243 = c256;
  _Bool t257 = __retval243;
  return t257;
}

// function: _Z9testStackIdEvR5StackIT_ES1_S1_PKc
void void_testStack_double_(struct Stack_double_* v258, double v259, double v260, char* v261) {
bb262:
  struct Stack_double_* theStack263;
  double value264;
  double increment265;
  char* stackName266;
  theStack263 = v258;
  value264 = v259;
  increment265 = v260;
  stackName266 = v261;
  char* cast267 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r268 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast267);
  char* t269 = stackName266;
  struct std__basic_ostream_char__std__char_traits_char__* r270 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r268, t269);
  char c271 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r272 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r270, c271);
    while (1) {
      struct Stack_double_* t273 = theStack263;
      _Bool r274 = Stack_double___push(t273, &value264);
      if (!r274) break;
        double t275 = value264;
        struct std__basic_ostream_char__std__char_traits_char__* r276 = std__ostream__operator__(&_ZSt4cout, t275);
        char c277 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r278 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r276, c277);
        double t279 = increment265;
        double t280 = value264;
        double b281 = t280 + t279;
        value264 = b281;
    }
  char* cast282 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r283 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast282);
  double t284 = value264;
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__ostream__operator__(r283, t284);
  char* cast286 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r287 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r285, cast286);
  char* t288 = stackName266;
  struct std__basic_ostream_char__std__char_traits_char__* r289 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r287, t288);
  char c290 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r291 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r289, c290);
    while (1) {
      struct Stack_double_* t292 = theStack263;
      _Bool r293 = Stack_double___pop(t292, &value264);
      if (!r293) break;
      double t294 = value264;
      struct std__basic_ostream_char__std__char_traits_char__* r295 = std__ostream__operator__(&_ZSt4cout, t294);
      char c296 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r295, c296);
    }
  char* cast298 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r299 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast298);
  return;
}

// function: _ZNK5StackIiE6isFullEv
_Bool Stack_int___isFull___const(struct Stack_int_* v300) {
bb301:
  struct Stack_int_* this302;
  _Bool __retval303;
  this302 = v300;
  struct Stack_int_* t304 = this302;
  int t305 = t304->top;
  int t306 = t304->size;
  int c307 = 1;
  int b308 = t306 - c307;
  _Bool c309 = ((t305 == b308)) ? 1 : 0;
  __retval303 = c309;
  _Bool t310 = __retval303;
  return t310;
}

// function: _ZN5StackIiE4pushERKi
_Bool Stack_int___push(struct Stack_int_* v311, int* v312) {
bb313:
  struct Stack_int_* this314;
  int* pushValue315;
  _Bool __retval316;
  this314 = v311;
  pushValue315 = v312;
  struct Stack_int_* t317 = this314;
    _Bool r318 = Stack_int___isFull___const(t317);
    _Bool u319 = !r318;
    if (u319) {
      int* t320 = pushValue315;
      int t321 = *t320;
      int t322 = t317->top;
      int u323 = t322 + 1;
      t317->top = u323;
      long cast324 = (long)u323;
      int* t325 = t317->stackPtr;
      int* ptr326 = &(t325)[cast324];
      *ptr326 = t321;
      _Bool c327 = 1;
      __retval316 = c327;
      _Bool t328 = __retval316;
      return t328;
    }
  _Bool c329 = 0;
  __retval316 = c329;
  _Bool t330 = __retval316;
  return t330;
}

// function: _ZNK5StackIiE7isEmptyEv
_Bool Stack_int___isEmpty___const(struct Stack_int_* v331) {
bb332:
  struct Stack_int_* this333;
  _Bool __retval334;
  this333 = v331;
  struct Stack_int_* t335 = this333;
  int t336 = t335->top;
  int c337 = -1;
  _Bool c338 = ((t336 == c337)) ? 1 : 0;
  __retval334 = c338;
  _Bool t339 = __retval334;
  return t339;
}

// function: _ZN5StackIiE3popERi
_Bool Stack_int___pop(struct Stack_int_* v340, int* v341) {
bb342:
  struct Stack_int_* this343;
  int* popValue344;
  _Bool __retval345;
  this343 = v340;
  popValue344 = v341;
  struct Stack_int_* t346 = this343;
    _Bool r347 = Stack_int___isEmpty___const(t346);
    _Bool u348 = !r347;
    if (u348) {
      int t349 = t346->top;
      int u350 = t349 - 1;
      t346->top = u350;
      long cast351 = (long)t349;
      int* t352 = t346->stackPtr;
      int* ptr353 = &(t352)[cast351];
      int t354 = *ptr353;
      int* t355 = popValue344;
      *t355 = t354;
      _Bool c356 = 1;
      __retval345 = c356;
      _Bool t357 = __retval345;
      return t357;
    }
  _Bool c358 = 0;
  __retval345 = c358;
  _Bool t359 = __retval345;
  return t359;
}

// function: _Z9testStackIiEvR5StackIT_ES1_S1_PKc
void void_testStack_int_(struct Stack_int_* v360, int v361, int v362, char* v363) {
bb364:
  struct Stack_int_* theStack365;
  int value366;
  int increment367;
  char* stackName368;
  theStack365 = v360;
  value366 = v361;
  increment367 = v362;
  stackName368 = v363;
  char* cast369 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r370 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast369);
  char* t371 = stackName368;
  struct std__basic_ostream_char__std__char_traits_char__* r372 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r370, t371);
  char c373 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r374 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r372, c373);
    while (1) {
      struct Stack_int_* t375 = theStack365;
      _Bool r376 = Stack_int___push(t375, &value366);
      if (!r376) break;
        int t377 = value366;
        struct std__basic_ostream_char__std__char_traits_char__* r378 = std__ostream__operator___2(&_ZSt4cout, t377);
        char c379 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r380 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r378, c379);
        int t381 = increment367;
        int t382 = value366;
        int b383 = t382 + t381;
        value366 = b383;
    }
  char* cast384 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r385 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast384);
  int t386 = value366;
  struct std__basic_ostream_char__std__char_traits_char__* r387 = std__ostream__operator___2(r385, t386);
  char* cast388 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r389 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r387, cast388);
  char* t390 = stackName368;
  struct std__basic_ostream_char__std__char_traits_char__* r391 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r389, t390);
  char c392 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r393 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r391, c392);
    while (1) {
      struct Stack_int_* t394 = theStack365;
      _Bool r395 = Stack_int___pop(t394, &value366);
      if (!r395) break;
      int t396 = value366;
      struct std__basic_ostream_char__std__char_traits_char__* r397 = std__ostream__operator___2(&_ZSt4cout, t396);
      char c398 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* r399 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r397, c398);
    }
  char* cast400 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r401 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast400);
  return;
}

// function: _ZN5StackIiED2Ev
void Stack_int____Stack(struct Stack_int_* v402) {
bb403:
  struct Stack_int_* this404;
  this404 = v402;
  struct Stack_int_* t405 = this404;
  int* t406 = t405->stackPtr;
  int* c407 = ((void*)0);
  _Bool c408 = ((t406 != c407)) ? 1 : 0;
  if (c408) {
    void* cast409 = (void*)t406;
    {
      operator_delete__(cast409);
    }
  }
  return;
}

// function: _ZN5StackIdED2Ev
void Stack_double____Stack(struct Stack_double_* v410) {
bb411:
  struct Stack_double_* this412;
  this412 = v410;
  struct Stack_double_* t413 = this412;
  double* t414 = t413->stackPtr;
  double* c415 = ((void*)0);
  _Bool c416 = ((t414 != c415)) ? 1 : 0;
  if (c416) {
    void* cast417 = (void*)t414;
    {
      operator_delete__(cast417);
    }
  }
  return;
}

// function: main
int main() {
bb418:
  int __retval419;
  struct Stack_double_ doubleStack420;
  struct Stack_int_ intStack421;
  int c422 = 0;
  __retval419 = c422;
  int c423 = 5;
  Stack_double___Stack(&doubleStack420, c423);
    int c424 = 10;
    Stack_int___Stack(&intStack421, c424);
      double c425 = 0x1.199999999999ap0;
      double c426 = 0x1.199999999999ap0;
      char* cast427 = (char*)&(_str);
      void_testStack_double_(&doubleStack420, c425, c426, cast427);
      int c428 = 1;
      int c429 = 1;
      char* cast430 = (char*)&(_str_1);
      void_testStack_int_(&intStack421, c428, c429, cast430);
      int c431 = 0;
      __retval419 = c431;
      int t432 = __retval419;
      int ret_val433 = t432;
      {
        Stack_int____Stack(&intStack421);
      }
      {
        Stack_double____Stack(&doubleStack420);
      }
      return ret_val433;
  int t434 = __retval419;
  return t434;
}

