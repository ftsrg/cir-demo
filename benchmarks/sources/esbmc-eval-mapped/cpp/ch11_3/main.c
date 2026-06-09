extern void abort(void);
// Struct definitions (auto-parsed)
struct Stack_double_ { int size; int top; double* stackPtr; };
struct Stack_int_ { int size; int top; int* stackPtr; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

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
_Bool Stack_double___isFull___const(struct Stack_double_* p0);
_Bool Stack_double___push(struct Stack_double_* p0, double* p1);
_Bool Stack_double___isEmpty___const(struct Stack_double_* p0);
_Bool Stack_double___pop(struct Stack_double_* p0, double* p1);
void void_testStack_double_(struct Stack_double_* p0, double p1, double p2, char* p3);
_Bool Stack_int___isFull___const(struct Stack_int_* p0);
_Bool Stack_int___push(struct Stack_int_* p0, int* p1);
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

extern void __VERIFIER_nondet_memory(void*, unsigned long);
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

// function: _ZNK5StackIdE6isFullEv
_Bool Stack_double___isFull___const(struct Stack_double_* v48) {
bb49:
  struct Stack_double_* this50;
  _Bool __retval51;
  this50 = v48;
  struct Stack_double_* t52 = this50;
  int t53 = t52->top;
  int t54 = t52->size;
  int c55 = 1;
  int b56 = t54 - c55;
  _Bool c57 = ((t53 == b56)) ? 1 : 0;
  __retval51 = c57;
  _Bool t58 = __retval51;
  return t58;
}

// function: _ZN5StackIdE4pushERKd
_Bool Stack_double___push(struct Stack_double_* v59, double* v60) {
bb61:
  struct Stack_double_* this62;
  double* pushValue63;
  _Bool __retval64;
  this62 = v59;
  pushValue63 = v60;
  struct Stack_double_* t65 = this62;
    _Bool r66 = Stack_double___isFull___const(t65);
    _Bool u67 = !r66;
    if (u67) {
      double* t68 = pushValue63;
      double t69 = *t68;
      int t70 = t65->top;
      int u71 = t70 + 1;
      t65->top = u71;
      long cast72 = (long)u71;
      double* t73 = t65->stackPtr;
      double* ptr74 = &(t73)[cast72];
      *ptr74 = t69;
      _Bool c75 = 1;
      __retval64 = c75;
      _Bool t76 = __retval64;
      return t76;
    }
  _Bool c77 = 0;
  __retval64 = c77;
  _Bool t78 = __retval64;
  return t78;
}

// function: _ZNK5StackIdE7isEmptyEv
_Bool Stack_double___isEmpty___const(struct Stack_double_* v79) {
bb80:
  struct Stack_double_* this81;
  _Bool __retval82;
  this81 = v79;
  struct Stack_double_* t83 = this81;
  int t84 = t83->top;
  int c85 = -1;
  _Bool c86 = ((t84 == c85)) ? 1 : 0;
  __retval82 = c86;
  _Bool t87 = __retval82;
  return t87;
}

// function: _ZN5StackIdE3popERd
_Bool Stack_double___pop(struct Stack_double_* v88, double* v89) {
bb90:
  struct Stack_double_* this91;
  double* popValue92;
  _Bool __retval93;
  this91 = v88;
  popValue92 = v89;
  struct Stack_double_* t94 = this91;
    _Bool r95 = Stack_double___isEmpty___const(t94);
    _Bool u96 = !r95;
    if (u96) {
      int t97 = t94->top;
      int u98 = t97 - 1;
      t94->top = u98;
      long cast99 = (long)t97;
      double* t100 = t94->stackPtr;
      double* ptr101 = &(t100)[cast99];
      double t102 = *ptr101;
      double* t103 = popValue92;
      *t103 = t102;
      _Bool c104 = 1;
      __retval93 = c104;
      _Bool t105 = __retval93;
      return t105;
    }
  _Bool c106 = 0;
  __retval93 = c106;
  _Bool t107 = __retval93;
  return t107;
}

// function: _Z9testStackIdEvR5StackIT_ES1_S1_PKc
void void_testStack_double_(struct Stack_double_* v108, double v109, double v110, char* v111) {
bb112:
  struct Stack_double_* theStack113;
  double value114;
  double increment115;
  char* stackName116;
  theStack113 = v108;
  value114 = v109;
  increment115 = v110;
  stackName116 = v111;
  char* cast117 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std118;
  __VERIFIER_nondet_memory(&std118, sizeof(std118));
  char* t119 = stackName116;
  struct std__basic_ostream_char__std__char_traits_char__* std120;
  __VERIFIER_nondet_memory(&std120, sizeof(std120));
  char c121 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std122;
  __VERIFIER_nondet_memory(&std122, sizeof(std122));
    while (1) {
      struct Stack_double_* t123 = theStack113;
      _Bool r124 = Stack_double___push(t123, &value114);
      if (!r124) break;
        double t125 = value114;
        struct std__basic_ostream_char__std__char_traits_char__* std126;
        __VERIFIER_nondet_memory(&std126, sizeof(std126));
        char c127 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std128;
        __VERIFIER_nondet_memory(&std128, sizeof(std128));
        double t129 = increment115;
        double t130 = value114;
        double b131 = t130 + t129;
        value114 = b131;
    }
  char* cast132 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std133;
  __VERIFIER_nondet_memory(&std133, sizeof(std133));
  double t134 = value114;
  struct std__basic_ostream_char__std__char_traits_char__* std135;
  __VERIFIER_nondet_memory(&std135, sizeof(std135));
  char* cast136 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std137;
  __VERIFIER_nondet_memory(&std137, sizeof(std137));
  char* t138 = stackName116;
  struct std__basic_ostream_char__std__char_traits_char__* std139;
  __VERIFIER_nondet_memory(&std139, sizeof(std139));
  char c140 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std141;
  __VERIFIER_nondet_memory(&std141, sizeof(std141));
    while (1) {
      struct Stack_double_* t142 = theStack113;
      _Bool r143 = Stack_double___pop(t142, &value114);
      if (!r143) break;
      double t144 = value114;
      struct std__basic_ostream_char__std__char_traits_char__* std145;
      __VERIFIER_nondet_memory(&std145, sizeof(std145));
      char c146 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* std147;
      __VERIFIER_nondet_memory(&std147, sizeof(std147));
    }
  char* cast148 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std149;
  __VERIFIER_nondet_memory(&std149, sizeof(std149));
  return;
}

// function: _ZNK5StackIiE6isFullEv
_Bool Stack_int___isFull___const(struct Stack_int_* v150) {
bb151:
  struct Stack_int_* this152;
  _Bool __retval153;
  this152 = v150;
  struct Stack_int_* t154 = this152;
  int t155 = t154->top;
  int t156 = t154->size;
  int c157 = 1;
  int b158 = t156 - c157;
  _Bool c159 = ((t155 == b158)) ? 1 : 0;
  __retval153 = c159;
  _Bool t160 = __retval153;
  return t160;
}

// function: _ZN5StackIiE4pushERKi
_Bool Stack_int___push(struct Stack_int_* v161, int* v162) {
bb163:
  struct Stack_int_* this164;
  int* pushValue165;
  _Bool __retval166;
  this164 = v161;
  pushValue165 = v162;
  struct Stack_int_* t167 = this164;
    _Bool r168 = Stack_int___isFull___const(t167);
    _Bool u169 = !r168;
    if (u169) {
      int* t170 = pushValue165;
      int t171 = *t170;
      int t172 = t167->top;
      int u173 = t172 + 1;
      t167->top = u173;
      long cast174 = (long)u173;
      int* t175 = t167->stackPtr;
      int* ptr176 = &(t175)[cast174];
      *ptr176 = t171;
      _Bool c177 = 1;
      __retval166 = c177;
      _Bool t178 = __retval166;
      return t178;
    }
  _Bool c179 = 0;
  __retval166 = c179;
  _Bool t180 = __retval166;
  return t180;
}

// function: _ZNK5StackIiE7isEmptyEv
_Bool Stack_int___isEmpty___const(struct Stack_int_* v181) {
bb182:
  struct Stack_int_* this183;
  _Bool __retval184;
  this183 = v181;
  struct Stack_int_* t185 = this183;
  int t186 = t185->top;
  int c187 = -1;
  _Bool c188 = ((t186 == c187)) ? 1 : 0;
  __retval184 = c188;
  _Bool t189 = __retval184;
  return t189;
}

// function: _ZN5StackIiE3popERi
_Bool Stack_int___pop(struct Stack_int_* v190, int* v191) {
bb192:
  struct Stack_int_* this193;
  int* popValue194;
  _Bool __retval195;
  this193 = v190;
  popValue194 = v191;
  struct Stack_int_* t196 = this193;
    _Bool r197 = Stack_int___isEmpty___const(t196);
    _Bool u198 = !r197;
    if (u198) {
      int t199 = t196->top;
      int u200 = t199 - 1;
      t196->top = u200;
      long cast201 = (long)t199;
      int* t202 = t196->stackPtr;
      int* ptr203 = &(t202)[cast201];
      int t204 = *ptr203;
      int* t205 = popValue194;
      *t205 = t204;
      _Bool c206 = 1;
      __retval195 = c206;
      _Bool t207 = __retval195;
      return t207;
    }
  _Bool c208 = 0;
  __retval195 = c208;
  _Bool t209 = __retval195;
  return t209;
}

// function: _Z9testStackIiEvR5StackIT_ES1_S1_PKc
void void_testStack_int_(struct Stack_int_* v210, int v211, int v212, char* v213) {
bb214:
  struct Stack_int_* theStack215;
  int value216;
  int increment217;
  char* stackName218;
  theStack215 = v210;
  value216 = v211;
  increment217 = v212;
  stackName218 = v213;
  char* cast219 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std220;
  __VERIFIER_nondet_memory(&std220, sizeof(std220));
  char* t221 = stackName218;
  struct std__basic_ostream_char__std__char_traits_char__* std222;
  __VERIFIER_nondet_memory(&std222, sizeof(std222));
  char c223 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std224;
  __VERIFIER_nondet_memory(&std224, sizeof(std224));
    while (1) {
      struct Stack_int_* t225 = theStack215;
      _Bool r226 = Stack_int___push(t225, &value216);
      if (!r226) break;
        int t227 = value216;
        struct std__basic_ostream_char__std__char_traits_char__* std228;
        __VERIFIER_nondet_memory(&std228, sizeof(std228));
        char c229 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std230;
        __VERIFIER_nondet_memory(&std230, sizeof(std230));
        int t231 = increment217;
        int t232 = value216;
        int b233 = t232 + t231;
        value216 = b233;
    }
  char* cast234 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std235;
  __VERIFIER_nondet_memory(&std235, sizeof(std235));
  int t236 = value216;
  struct std__basic_ostream_char__std__char_traits_char__* std237;
  __VERIFIER_nondet_memory(&std237, sizeof(std237));
  char* cast238 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std239;
  __VERIFIER_nondet_memory(&std239, sizeof(std239));
  char* t240 = stackName218;
  struct std__basic_ostream_char__std__char_traits_char__* std241;
  __VERIFIER_nondet_memory(&std241, sizeof(std241));
  char c242 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std243;
  __VERIFIER_nondet_memory(&std243, sizeof(std243));
    while (1) {
      struct Stack_int_* t244 = theStack215;
      _Bool r245 = Stack_int___pop(t244, &value216);
      if (!r245) break;
      int t246 = value216;
      struct std__basic_ostream_char__std__char_traits_char__* std247;
      __VERIFIER_nondet_memory(&std247, sizeof(std247));
      char c248 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* std249;
      __VERIFIER_nondet_memory(&std249, sizeof(std249));
    }
  char* cast250 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std251;
  __VERIFIER_nondet_memory(&std251, sizeof(std251));
  return;
}

// function: _ZN5StackIiED2Ev
void Stack_int____Stack(struct Stack_int_* v252) {
bb253:
  struct Stack_int_* this254;
  this254 = v252;
  struct Stack_int_* t255 = this254;
  int* t256 = t255->stackPtr;
  int* c257 = ((void*)0);
  _Bool c258 = ((t256 != c257)) ? 1 : 0;
  if (c258) {
    void* cast259 = (void*)t256;
    {
      operator_delete__(cast259);
    }
  }
  return;
}

// function: _ZN5StackIdED2Ev
void Stack_double____Stack(struct Stack_double_* v260) {
bb261:
  struct Stack_double_* this262;
  this262 = v260;
  struct Stack_double_* t263 = this262;
  double* t264 = t263->stackPtr;
  double* c265 = ((void*)0);
  _Bool c266 = ((t264 != c265)) ? 1 : 0;
  if (c266) {
    void* cast267 = (void*)t264;
    {
      operator_delete__(cast267);
    }
  }
  return;
}

// function: main
int main() {
bb268:
  int __retval269;
  struct Stack_double_ doubleStack270;
  struct Stack_int_ intStack271;
  int c272 = 0;
  __retval269 = c272;
  int c273 = 5;
  Stack_double___Stack(&doubleStack270, c273);
    int c274 = 10;
    Stack_int___Stack(&intStack271, c274);
      double c275 = 0x1.199999999999ap0;
      double c276 = 0x1.199999999999ap0;
      char* cast277 = (char*)&(_str);
      void_testStack_double_(&doubleStack270, c275, c276, cast277);
      int c278 = 1;
      int c279 = 1;
      char* cast280 = (char*)&(_str_1);
      void_testStack_int_(&intStack271, c278, c279, cast280);
      int c281 = 0;
      __retval269 = c281;
      int t282 = __retval269;
      int ret_val283 = t282;
      {
        Stack_int____Stack(&intStack271);
      }
      {
        Stack_double____Stack(&doubleStack270);
      }
      return ret_val283;
  int t284 = __retval269;
  return t284;
}

