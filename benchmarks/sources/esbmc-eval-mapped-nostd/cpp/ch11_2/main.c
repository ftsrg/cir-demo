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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[35] = "Pushing elements onto doubleStack\n";
char _str_1[29] = "\nStack is full. Cannot push ";
char _str_2[37] = "\n\nPopping elements from doubleStack\n";
char _str_3[29] = "\nStack is empty. Cannot pop\n";
char _str_4[33] = "\nPushing elements onto intStack\n";
char _str_5[34] = "\n\nPopping elements from intStack\n";
void Stack_double___Stack(struct Stack_double_* p0, int p1);
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
_Bool Stack_double___isFull___const(struct Stack_double_* p0);
_Bool Stack_double___push(struct Stack_double_* p0, double* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
_Bool Stack_double___isEmpty___const(struct Stack_double_* p0);
_Bool Stack_double___pop(struct Stack_double_* p0, double* p1);
void Stack_int___Stack(struct Stack_int_* p0, int p1);
_Bool Stack_int___isFull___const(struct Stack_int_* p0);
_Bool Stack_int___push(struct Stack_int_* p0, int* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
_Bool Stack_int___isEmpty___const(struct Stack_int_* p0);
_Bool Stack_int___pop(struct Stack_int_* p0, int* p1);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v24, int v25) {
bb26:
  int __a27;
  int __b28;
  int __retval29;
  __a27 = v24;
  __b28 = v25;
  int t30 = __a27;
  int t31 = __b28;
  int b32 = t30 | t31;
  __retval29 = b32;
  int t33 = __retval29;
  return t33;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v34) {
bb35:
  struct std__basic_ios_char__std__char_traits_char__* this36;
  int __retval37;
  this36 = v34;
  struct std__basic_ios_char__std__char_traits_char__* t38 = this36;
  struct std__ios_base* base39 = (struct std__ios_base*)((char *)t38 + 0);
  int t40 = base39->_M_streambuf_state;
  __retval37 = t40;
  int t41 = __retval37;
  return t41;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v42, int v43) {
bb44:
  struct std__basic_ios_char__std__char_traits_char__* this45;
  int __state46;
  this45 = v42;
  __state46 = v43;
  struct std__basic_ios_char__std__char_traits_char__* t47 = this45;
  int r48 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t47);
  int t49 = __state46;
  int r50 = std__operator_(r48, t49);
  std__basic_ios_char__std__char_traits_char_____clear(t47, r50);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb51:
  _Bool __retval52;
    _Bool c53 = 0;
    __retval52 = c53;
    _Bool t54 = __retval52;
    return t54;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v55, char* v56) {
bb57:
  char* __c158;
  char* __c259;
  _Bool __retval60;
  __c158 = v55;
  __c259 = v56;
  char* t61 = __c158;
  char t62 = *t61;
  int cast63 = (int)t62;
  char* t64 = __c259;
  char t65 = *t64;
  int cast66 = (int)t65;
  _Bool c67 = ((cast63 == cast66)) ? 1 : 0;
  __retval60 = c67;
  _Bool t68 = __retval60;
  return t68;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v69) {
bb70:
  char* __p71;
  unsigned long __retval72;
  unsigned long __i73;
  __p71 = v69;
  unsigned long c74 = 0;
  __i73 = c74;
    char ref_tmp075;
    while (1) {
      unsigned long t76 = __i73;
      char* t77 = __p71;
      char* ptr78 = &(t77)[t76];
      char c79 = 0;
      ref_tmp075 = c79;
      _Bool r80 = __gnu_cxx__char_traits_char___eq(ptr78, &ref_tmp075);
      _Bool u81 = !r80;
      if (!u81) break;
      unsigned long t82 = __i73;
      unsigned long u83 = t82 + 1;
      __i73 = u83;
    }
  unsigned long t84 = __i73;
  __retval72 = t84;
  unsigned long t85 = __retval72;
  return t85;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v86) {
bb87:
  char* __s88;
  unsigned long __retval89;
  __s88 = v86;
    _Bool r90 = std____is_constant_evaluated();
    if (r90) {
      char* t91 = __s88;
      unsigned long r92 = __gnu_cxx__char_traits_char___length(t91);
      __retval89 = r92;
      unsigned long t93 = __retval89;
      return t93;
    }
  char* t94 = __s88;
  unsigned long r95 = strlen(t94);
  __retval89 = r95;
  unsigned long t96 = __retval89;
  return t96;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v97, char* v98) {
bb99:
  struct std__basic_ostream_char__std__char_traits_char__* __out100;
  char* __s101;
  struct std__basic_ostream_char__std__char_traits_char__* __retval102;
  __out100 = v97;
  __s101 = v98;
    char* t103 = __s101;
    _Bool cast104 = (_Bool)t103;
    _Bool u105 = !cast104;
    if (u105) {
      struct std__basic_ostream_char__std__char_traits_char__* t106 = __out100;
      void** v107 = (void**)t106;
      void* v108 = *((void**)v107);
      unsigned char* cast109 = (unsigned char*)v108;
      long c110 = -24;
      unsigned char* ptr111 = &(cast109)[c110];
      long* cast112 = (long*)ptr111;
      long t113 = *cast112;
      unsigned char* cast114 = (unsigned char*)t106;
      unsigned char* ptr115 = &(cast114)[t113];
      struct std__basic_ostream_char__std__char_traits_char__* cast116 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr115;
      struct std__basic_ios_char__std__char_traits_char__* cast117 = (struct std__basic_ios_char__std__char_traits_char__*)cast116;
      int t118 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast117, t118);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t119 = __out100;
      char* t120 = __s101;
      char* t121 = __s101;
      unsigned long r122 = std__char_traits_char___length(t121);
      long cast123 = (long)r122;
      struct std__basic_ostream_char__std__char_traits_char__* r124 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t119, t120, cast123);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t125 = __out100;
  __retval102 = t125;
  struct std__basic_ostream_char__std__char_traits_char__* t126 = __retval102;
  return t126;
}

// function: _ZNK5StackIdE6isFullEv
_Bool Stack_double___isFull___const(struct Stack_double_* v127) {
bb128:
  struct Stack_double_* this129;
  _Bool __retval130;
  this129 = v127;
  struct Stack_double_* t131 = this129;
  int t132 = t131->top;
  int t133 = t131->size;
  int c134 = 1;
  int b135 = t133 - c134;
  _Bool c136 = ((t132 == b135)) ? 1 : 0;
  __retval130 = c136;
  _Bool t137 = __retval130;
  return t137;
}

// function: _ZN5StackIdE4pushERKd
_Bool Stack_double___push(struct Stack_double_* v138, double* v139) {
bb140:
  struct Stack_double_* this141;
  double* pushValue142;
  _Bool __retval143;
  this141 = v138;
  pushValue142 = v139;
  struct Stack_double_* t144 = this141;
    _Bool r145 = Stack_double___isFull___const(t144);
    _Bool u146 = !r145;
    if (u146) {
      double* t147 = pushValue142;
      double t148 = *t147;
      int t149 = t144->top;
      int u150 = t149 + 1;
      t144->top = u150;
      long cast151 = (long)u150;
      double* t152 = t144->stackPtr;
      double* ptr153 = &(t152)[cast151];
      *ptr153 = t148;
      _Bool c154 = 1;
      __retval143 = c154;
      _Bool t155 = __retval143;
      return t155;
    }
  _Bool c156 = 0;
  __retval143 = c156;
  _Bool t157 = __retval143;
  return t157;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v158) {
bb159:
  struct std__ios_base* this160;
  long __retval161;
  this160 = v158;
  struct std__ios_base* t162 = this160;
  long t163 = t162->_M_width;
  __retval161 = t163;
  long t164 = __retval161;
  return t164;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v165, char v166) {
bb167:
  struct std__basic_ostream_char__std__char_traits_char__* __out168;
  char __c169;
  struct std__basic_ostream_char__std__char_traits_char__* __retval170;
  __out168 = v165;
  __c169 = v166;
    struct std__basic_ostream_char__std__char_traits_char__* t171 = __out168;
    void** v172 = (void**)t171;
    void* v173 = *((void**)v172);
    unsigned char* cast174 = (unsigned char*)v173;
    long c175 = -24;
    unsigned char* ptr176 = &(cast174)[c175];
    long* cast177 = (long*)ptr176;
    long t178 = *cast177;
    unsigned char* cast179 = (unsigned char*)t171;
    unsigned char* ptr180 = &(cast179)[t178];
    struct std__basic_ostream_char__std__char_traits_char__* cast181 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr180;
    struct std__ios_base* cast182 = (struct std__ios_base*)cast181;
    long r183 = std__ios_base__width___const(cast182);
    long c184 = 0;
    _Bool c185 = ((r183 != c184)) ? 1 : 0;
    if (c185) {
      struct std__basic_ostream_char__std__char_traits_char__* t186 = __out168;
      long c187 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r188 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t186, &__c169, c187);
      __retval170 = r188;
      struct std__basic_ostream_char__std__char_traits_char__* t189 = __retval170;
      return t189;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t190 = __out168;
  char t191 = __c169;
  struct std__basic_ostream_char__std__char_traits_char__* r192 = std__ostream__put(t190, t191);
  struct std__basic_ostream_char__std__char_traits_char__* t193 = __out168;
  __retval170 = t193;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __retval170;
  return t194;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v195, double v196) {
bb197:
  struct std__basic_ostream_char__std__char_traits_char__* this198;
  double __f199;
  struct std__basic_ostream_char__std__char_traits_char__* __retval200;
  this198 = v195;
  __f199 = v196;
  struct std__basic_ostream_char__std__char_traits_char__* t201 = this198;
  double t202 = __f199;
  struct std__basic_ostream_char__std__char_traits_char__* r203 = std__ostream__std__ostream___M_insert_double_(t201, t202);
  __retval200 = r203;
  struct std__basic_ostream_char__std__char_traits_char__* t204 = __retval200;
  return t204;
}

// function: _ZNK5StackIdE7isEmptyEv
_Bool Stack_double___isEmpty___const(struct Stack_double_* v205) {
bb206:
  struct Stack_double_* this207;
  _Bool __retval208;
  this207 = v205;
  struct Stack_double_* t209 = this207;
  int t210 = t209->top;
  int c211 = -1;
  _Bool c212 = ((t210 == c211)) ? 1 : 0;
  __retval208 = c212;
  _Bool t213 = __retval208;
  return t213;
}

// function: _ZN5StackIdE3popERd
_Bool Stack_double___pop(struct Stack_double_* v214, double* v215) {
bb216:
  struct Stack_double_* this217;
  double* popValue218;
  _Bool __retval219;
  this217 = v214;
  popValue218 = v215;
  struct Stack_double_* t220 = this217;
    _Bool r221 = Stack_double___isEmpty___const(t220);
    _Bool u222 = !r221;
    if (u222) {
      int t223 = t220->top;
      int u224 = t223 - 1;
      t220->top = u224;
      long cast225 = (long)t223;
      double* t226 = t220->stackPtr;
      double* ptr227 = &(t226)[cast225];
      double t228 = *ptr227;
      double* t229 = popValue218;
      *t229 = t228;
      _Bool c230 = 1;
      __retval219 = c230;
      _Bool t231 = __retval219;
      return t231;
    }
  _Bool c232 = 0;
  __retval219 = c232;
  _Bool t233 = __retval219;
  return t233;
}

// function: _ZN5StackIiEC2Ei
void Stack_int___Stack(struct Stack_int_* v234, int v235) {
bb236:
  struct Stack_int_* this237;
  int s238;
  int* __new_result239;
  this237 = v234;
  s238 = v235;
  struct Stack_int_* t240 = this237;
  int t241 = s238;
  int c242 = 0;
  _Bool c243 = ((t241 > c242)) ? 1 : 0;
  int ternary244;
  if (c243) {
    int t245 = s238;
    ternary244 = (int)t245;
  } else {
    int c246 = 10;
    ternary244 = (int)c246;
  }
  t240->size = ternary244;
  int c247 = -1;
  t240->top = c247;
  int t248 = t240->size;
  unsigned long cast249 = (unsigned long)t248;
  unsigned long c250 = 4;
  unsigned long ovr251;
  _Bool ovf252 = __builtin_mul_overflow(cast249, c250, &ovr251);
  unsigned long c253 = -1;
  unsigned long sel254 = ovf252 ? c253 : ovr251;
  void* r255 = operator_new__(sel254);
    int* cast256 = (int*)r255;
    __new_result239 = cast256;
  int* t257 = __new_result239;
  t240->stackPtr = t257;
  return;
}

// function: _ZNK5StackIiE6isFullEv
_Bool Stack_int___isFull___const(struct Stack_int_* v258) {
bb259:
  struct Stack_int_* this260;
  _Bool __retval261;
  this260 = v258;
  struct Stack_int_* t262 = this260;
  int t263 = t262->top;
  int t264 = t262->size;
  int c265 = 1;
  int b266 = t264 - c265;
  _Bool c267 = ((t263 == b266)) ? 1 : 0;
  __retval261 = c267;
  _Bool t268 = __retval261;
  return t268;
}

// function: _ZN5StackIiE4pushERKi
_Bool Stack_int___push(struct Stack_int_* v269, int* v270) {
bb271:
  struct Stack_int_* this272;
  int* pushValue273;
  _Bool __retval274;
  this272 = v269;
  pushValue273 = v270;
  struct Stack_int_* t275 = this272;
    _Bool r276 = Stack_int___isFull___const(t275);
    _Bool u277 = !r276;
    if (u277) {
      int* t278 = pushValue273;
      int t279 = *t278;
      int t280 = t275->top;
      int u281 = t280 + 1;
      t275->top = u281;
      long cast282 = (long)u281;
      int* t283 = t275->stackPtr;
      int* ptr284 = &(t283)[cast282];
      *ptr284 = t279;
      _Bool c285 = 1;
      __retval274 = c285;
      _Bool t286 = __retval274;
      return t286;
    }
  _Bool c287 = 0;
  __retval274 = c287;
  _Bool t288 = __retval274;
  return t288;
}

// function: _ZNK5StackIiE7isEmptyEv
_Bool Stack_int___isEmpty___const(struct Stack_int_* v289) {
bb290:
  struct Stack_int_* this291;
  _Bool __retval292;
  this291 = v289;
  struct Stack_int_* t293 = this291;
  int t294 = t293->top;
  int c295 = -1;
  _Bool c296 = ((t294 == c295)) ? 1 : 0;
  __retval292 = c296;
  _Bool t297 = __retval292;
  return t297;
}

// function: _ZN5StackIiE3popERi
_Bool Stack_int___pop(struct Stack_int_* v298, int* v299) {
bb300:
  struct Stack_int_* this301;
  int* popValue302;
  _Bool __retval303;
  this301 = v298;
  popValue302 = v299;
  struct Stack_int_* t304 = this301;
    _Bool r305 = Stack_int___isEmpty___const(t304);
    _Bool u306 = !r305;
    if (u306) {
      int t307 = t304->top;
      int u308 = t307 - 1;
      t304->top = u308;
      long cast309 = (long)t307;
      int* t310 = t304->stackPtr;
      int* ptr311 = &(t310)[cast309];
      int t312 = *ptr311;
      int* t313 = popValue302;
      *t313 = t312;
      _Bool c314 = 1;
      __retval303 = c314;
      _Bool t315 = __retval303;
      return t315;
    }
  _Bool c316 = 0;
  __retval303 = c316;
  _Bool t317 = __retval303;
  return t317;
}

// function: _ZN5StackIiED2Ev
void Stack_int____Stack(struct Stack_int_* v318) {
bb319:
  struct Stack_int_* this320;
  this320 = v318;
  struct Stack_int_* t321 = this320;
  int* t322 = t321->stackPtr;
  int* c323 = ((void*)0);
  _Bool c324 = ((t322 != c323)) ? 1 : 0;
  if (c324) {
    void* cast325 = (void*)t322;
    {
      operator_delete__(cast325);
    }
  }
  return;
}

// function: _ZN5StackIdED2Ev
void Stack_double____Stack(struct Stack_double_* v326) {
bb327:
  struct Stack_double_* this328;
  this328 = v326;
  struct Stack_double_* t329 = this328;
  double* t330 = t329->stackPtr;
  double* c331 = ((void*)0);
  _Bool c332 = ((t330 != c331)) ? 1 : 0;
  if (c332) {
    void* cast333 = (void*)t330;
    {
      operator_delete__(cast333);
    }
  }
  return;
}

// function: main
int main() {
bb334:
  int __retval335;
  struct Stack_double_ doubleStack336;
  double doubleValue337;
  struct Stack_int_ intStack338;
  int intValue339;
  int c340 = 0;
  __retval335 = c340;
  int c341 = 5;
  Stack_double___Stack(&doubleStack336, c341);
    double c342 = 0x1.199999999999ap0;
    doubleValue337 = c342;
    char* cast343 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r344 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast343);
      while (1) {
        _Bool r345 = Stack_double___push(&doubleStack336, &doubleValue337);
        if (!r345) break;
          double t346 = doubleValue337;
          struct std__basic_ostream_char__std__char_traits_char__* r347 = std__ostream__operator__(&_ZSt4cout, t346);
          char c348 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* r349 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r347, c348);
          double c350 = 0x1.199999999999ap0;
          double t351 = doubleValue337;
          double b352 = t351 + c350;
          doubleValue337 = b352;
      }
    char* cast353 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r354 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast353);
    double t355 = doubleValue337;
    struct std__basic_ostream_char__std__char_traits_char__* r356 = std__ostream__operator__(r354, t355);
    char* cast357 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r358 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r356, cast357);
      while (1) {
        _Bool r359 = Stack_double___pop(&doubleStack336, &doubleValue337);
        if (!r359) break;
        double t360 = doubleValue337;
        struct std__basic_ostream_char__std__char_traits_char__* r361 = std__ostream__operator__(&_ZSt4cout, t360);
        char c362 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r363 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r361, c362);
      }
    char* cast364 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r365 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast364);
    int c366 = 10;
    Stack_int___Stack(&intStack338, c366);
      int c367 = 1;
      intValue339 = c367;
      char* cast368 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r369 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast368);
        while (1) {
          _Bool r370 = Stack_int___push(&intStack338, &intValue339);
          if (!r370) break;
            int t371 = intValue339;
            struct std__basic_ostream_char__std__char_traits_char__* r372 = std__ostream__operator___2(&_ZSt4cout, t371);
            char c373 = 32;
            struct std__basic_ostream_char__std__char_traits_char__* r374 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r372, c373);
            int t375 = intValue339;
            int u376 = t375 + 1;
            intValue339 = u376;
        }
      char* cast377 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r378 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast377);
      int t379 = intValue339;
      struct std__basic_ostream_char__std__char_traits_char__* r380 = std__ostream__operator___2(r378, t379);
      char* cast381 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r382 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r380, cast381);
        while (1) {
          _Bool r383 = Stack_int___pop(&intStack338, &intValue339);
          if (!r383) break;
          int t384 = intValue339;
          struct std__basic_ostream_char__std__char_traits_char__* r385 = std__ostream__operator___2(&_ZSt4cout, t384);
          char c386 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* r387 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r385, c386);
        }
      char* cast388 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r389 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast388);
      int c390 = 0;
      __retval335 = c390;
      int t391 = __retval335;
      int ret_val392 = t391;
      {
        Stack_int____Stack(&intStack338);
      }
      {
        Stack_double____Stack(&doubleStack336);
      }
      return ret_val392;
  int t393 = __retval335;
  return t393;
}

