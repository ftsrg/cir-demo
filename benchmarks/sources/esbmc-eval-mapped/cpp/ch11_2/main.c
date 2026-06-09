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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[35] = "Pushing elements onto doubleStack\n";
char _str_1[29] = "\nStack is full. Cannot push ";
char _str_2[37] = "\n\nPopping elements from doubleStack\n";
char _str_3[29] = "\nStack is empty. Cannot pop\n";
char _str_4[33] = "\nPushing elements onto intStack\n";
char _str_5[34] = "\n\nPopping elements from intStack\n";
void Stack_double___Stack(struct Stack_double_* p0, int p1);
_Bool Stack_double___isFull___const(struct Stack_double_* p0);
_Bool Stack_double___push(struct Stack_double_* p0, double* p1);
_Bool Stack_double___isEmpty___const(struct Stack_double_* p0);
_Bool Stack_double___pop(struct Stack_double_* p0, double* p1);
void Stack_int___Stack(struct Stack_int_* p0, int p1);
_Bool Stack_int___isFull___const(struct Stack_int_* p0);
_Bool Stack_int___push(struct Stack_int_* p0, int* p1);
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

// function: _ZNK5StackIdE6isFullEv
_Bool Stack_double___isFull___const(struct Stack_double_* v24) {
bb25:
  struct Stack_double_* this26;
  _Bool __retval27;
  this26 = v24;
  struct Stack_double_* t28 = this26;
  int t29 = t28->top;
  int t30 = t28->size;
  int c31 = 1;
  int b32 = t30 - c31;
  _Bool c33 = ((t29 == b32)) ? 1 : 0;
  __retval27 = c33;
  _Bool t34 = __retval27;
  return t34;
}

// function: _ZN5StackIdE4pushERKd
_Bool Stack_double___push(struct Stack_double_* v35, double* v36) {
bb37:
  struct Stack_double_* this38;
  double* pushValue39;
  _Bool __retval40;
  this38 = v35;
  pushValue39 = v36;
  struct Stack_double_* t41 = this38;
    _Bool r42 = Stack_double___isFull___const(t41);
    _Bool u43 = !r42;
    if (u43) {
      double* t44 = pushValue39;
      double t45 = *t44;
      int t46 = t41->top;
      int u47 = t46 + 1;
      t41->top = u47;
      long cast48 = (long)u47;
      double* t49 = t41->stackPtr;
      double* ptr50 = &(t49)[cast48];
      *ptr50 = t45;
      _Bool c51 = 1;
      __retval40 = c51;
      _Bool t52 = __retval40;
      return t52;
    }
  _Bool c53 = 0;
  __retval40 = c53;
  _Bool t54 = __retval40;
  return t54;
}

// function: _ZNK5StackIdE7isEmptyEv
_Bool Stack_double___isEmpty___const(struct Stack_double_* v55) {
bb56:
  struct Stack_double_* this57;
  _Bool __retval58;
  this57 = v55;
  struct Stack_double_* t59 = this57;
  int t60 = t59->top;
  int c61 = -1;
  _Bool c62 = ((t60 == c61)) ? 1 : 0;
  __retval58 = c62;
  _Bool t63 = __retval58;
  return t63;
}

// function: _ZN5StackIdE3popERd
_Bool Stack_double___pop(struct Stack_double_* v64, double* v65) {
bb66:
  struct Stack_double_* this67;
  double* popValue68;
  _Bool __retval69;
  this67 = v64;
  popValue68 = v65;
  struct Stack_double_* t70 = this67;
    _Bool r71 = Stack_double___isEmpty___const(t70);
    _Bool u72 = !r71;
    if (u72) {
      int t73 = t70->top;
      int u74 = t73 - 1;
      t70->top = u74;
      long cast75 = (long)t73;
      double* t76 = t70->stackPtr;
      double* ptr77 = &(t76)[cast75];
      double t78 = *ptr77;
      double* t79 = popValue68;
      *t79 = t78;
      _Bool c80 = 1;
      __retval69 = c80;
      _Bool t81 = __retval69;
      return t81;
    }
  _Bool c82 = 0;
  __retval69 = c82;
  _Bool t83 = __retval69;
  return t83;
}

// function: _ZN5StackIiEC2Ei
void Stack_int___Stack(struct Stack_int_* v84, int v85) {
bb86:
  struct Stack_int_* this87;
  int s88;
  int* __new_result89;
  this87 = v84;
  s88 = v85;
  struct Stack_int_* t90 = this87;
  int t91 = s88;
  int c92 = 0;
  _Bool c93 = ((t91 > c92)) ? 1 : 0;
  int ternary94;
  if (c93) {
    int t95 = s88;
    ternary94 = (int)t95;
  } else {
    int c96 = 10;
    ternary94 = (int)c96;
  }
  t90->size = ternary94;
  int c97 = -1;
  t90->top = c97;
  int t98 = t90->size;
  unsigned long cast99 = (unsigned long)t98;
  unsigned long c100 = 4;
  unsigned long ovr101;
  _Bool ovf102 = __builtin_mul_overflow(cast99, c100, &ovr101);
  unsigned long c103 = -1;
  unsigned long sel104 = ovf102 ? c103 : ovr101;
  void* r105 = operator_new__(sel104);
    int* cast106 = (int*)r105;
    __new_result89 = cast106;
  int* t107 = __new_result89;
  t90->stackPtr = t107;
  return;
}

// function: _ZNK5StackIiE6isFullEv
_Bool Stack_int___isFull___const(struct Stack_int_* v108) {
bb109:
  struct Stack_int_* this110;
  _Bool __retval111;
  this110 = v108;
  struct Stack_int_* t112 = this110;
  int t113 = t112->top;
  int t114 = t112->size;
  int c115 = 1;
  int b116 = t114 - c115;
  _Bool c117 = ((t113 == b116)) ? 1 : 0;
  __retval111 = c117;
  _Bool t118 = __retval111;
  return t118;
}

// function: _ZN5StackIiE4pushERKi
_Bool Stack_int___push(struct Stack_int_* v119, int* v120) {
bb121:
  struct Stack_int_* this122;
  int* pushValue123;
  _Bool __retval124;
  this122 = v119;
  pushValue123 = v120;
  struct Stack_int_* t125 = this122;
    _Bool r126 = Stack_int___isFull___const(t125);
    _Bool u127 = !r126;
    if (u127) {
      int* t128 = pushValue123;
      int t129 = *t128;
      int t130 = t125->top;
      int u131 = t130 + 1;
      t125->top = u131;
      long cast132 = (long)u131;
      int* t133 = t125->stackPtr;
      int* ptr134 = &(t133)[cast132];
      *ptr134 = t129;
      _Bool c135 = 1;
      __retval124 = c135;
      _Bool t136 = __retval124;
      return t136;
    }
  _Bool c137 = 0;
  __retval124 = c137;
  _Bool t138 = __retval124;
  return t138;
}

// function: _ZNK5StackIiE7isEmptyEv
_Bool Stack_int___isEmpty___const(struct Stack_int_* v139) {
bb140:
  struct Stack_int_* this141;
  _Bool __retval142;
  this141 = v139;
  struct Stack_int_* t143 = this141;
  int t144 = t143->top;
  int c145 = -1;
  _Bool c146 = ((t144 == c145)) ? 1 : 0;
  __retval142 = c146;
  _Bool t147 = __retval142;
  return t147;
}

// function: _ZN5StackIiE3popERi
_Bool Stack_int___pop(struct Stack_int_* v148, int* v149) {
bb150:
  struct Stack_int_* this151;
  int* popValue152;
  _Bool __retval153;
  this151 = v148;
  popValue152 = v149;
  struct Stack_int_* t154 = this151;
    _Bool r155 = Stack_int___isEmpty___const(t154);
    _Bool u156 = !r155;
    if (u156) {
      int t157 = t154->top;
      int u158 = t157 - 1;
      t154->top = u158;
      long cast159 = (long)t157;
      int* t160 = t154->stackPtr;
      int* ptr161 = &(t160)[cast159];
      int t162 = *ptr161;
      int* t163 = popValue152;
      *t163 = t162;
      _Bool c164 = 1;
      __retval153 = c164;
      _Bool t165 = __retval153;
      return t165;
    }
  _Bool c166 = 0;
  __retval153 = c166;
  _Bool t167 = __retval153;
  return t167;
}

// function: _ZN5StackIiED2Ev
void Stack_int____Stack(struct Stack_int_* v168) {
bb169:
  struct Stack_int_* this170;
  this170 = v168;
  struct Stack_int_* t171 = this170;
  int* t172 = t171->stackPtr;
  int* c173 = ((void*)0);
  _Bool c174 = ((t172 != c173)) ? 1 : 0;
  if (c174) {
    void* cast175 = (void*)t172;
    {
      operator_delete__(cast175);
    }
  }
  return;
}

// function: _ZN5StackIdED2Ev
void Stack_double____Stack(struct Stack_double_* v176) {
bb177:
  struct Stack_double_* this178;
  this178 = v176;
  struct Stack_double_* t179 = this178;
  double* t180 = t179->stackPtr;
  double* c181 = ((void*)0);
  _Bool c182 = ((t180 != c181)) ? 1 : 0;
  if (c182) {
    void* cast183 = (void*)t180;
    {
      operator_delete__(cast183);
    }
  }
  return;
}

// function: main
int main() {
bb184:
  int __retval185;
  struct Stack_double_ doubleStack186;
  double doubleValue187;
  struct Stack_int_ intStack188;
  int intValue189;
  int c190 = 0;
  __retval185 = c190;
  int c191 = 5;
  Stack_double___Stack(&doubleStack186, c191);
    double c192 = 0x1.199999999999ap0;
    doubleValue187 = c192;
    char* cast193 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std194;
    __VERIFIER_nondet_memory(&std194, sizeof(std194));
      while (1) {
        _Bool r195 = Stack_double___push(&doubleStack186, &doubleValue187);
        if (!r195) break;
          double t196 = doubleValue187;
          struct std__basic_ostream_char__std__char_traits_char__* std197;
          __VERIFIER_nondet_memory(&std197, sizeof(std197));
          char c198 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* std199;
          __VERIFIER_nondet_memory(&std199, sizeof(std199));
          double c200 = 0x1.199999999999ap0;
          double t201 = doubleValue187;
          double b202 = t201 + c200;
          doubleValue187 = b202;
      }
    char* cast203 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std204;
    __VERIFIER_nondet_memory(&std204, sizeof(std204));
    double t205 = doubleValue187;
    struct std__basic_ostream_char__std__char_traits_char__* std206;
    __VERIFIER_nondet_memory(&std206, sizeof(std206));
    char* cast207 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std208;
    __VERIFIER_nondet_memory(&std208, sizeof(std208));
      while (1) {
        _Bool r209 = Stack_double___pop(&doubleStack186, &doubleValue187);
        if (!r209) break;
        double t210 = doubleValue187;
        struct std__basic_ostream_char__std__char_traits_char__* std211;
        __VERIFIER_nondet_memory(&std211, sizeof(std211));
        char c212 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std213;
        __VERIFIER_nondet_memory(&std213, sizeof(std213));
      }
    char* cast214 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std215;
    __VERIFIER_nondet_memory(&std215, sizeof(std215));
    int c216 = 10;
    Stack_int___Stack(&intStack188, c216);
      int c217 = 1;
      intValue189 = c217;
      char* cast218 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std219;
      __VERIFIER_nondet_memory(&std219, sizeof(std219));
        while (1) {
          _Bool r220 = Stack_int___push(&intStack188, &intValue189);
          if (!r220) break;
            int t221 = intValue189;
            struct std__basic_ostream_char__std__char_traits_char__* std222;
            __VERIFIER_nondet_memory(&std222, sizeof(std222));
            char c223 = 32;
            struct std__basic_ostream_char__std__char_traits_char__* std224;
            __VERIFIER_nondet_memory(&std224, sizeof(std224));
            int t225 = intValue189;
            int u226 = t225 + 1;
            intValue189 = u226;
        }
      char* cast227 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std228;
      __VERIFIER_nondet_memory(&std228, sizeof(std228));
      int t229 = intValue189;
      struct std__basic_ostream_char__std__char_traits_char__* std230;
      __VERIFIER_nondet_memory(&std230, sizeof(std230));
      char* cast231 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std232;
      __VERIFIER_nondet_memory(&std232, sizeof(std232));
        while (1) {
          _Bool r233 = Stack_int___pop(&intStack188, &intValue189);
          if (!r233) break;
          int t234 = intValue189;
          struct std__basic_ostream_char__std__char_traits_char__* std235;
          __VERIFIER_nondet_memory(&std235, sizeof(std235));
          char c236 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* std237;
          __VERIFIER_nondet_memory(&std237, sizeof(std237));
        }
      char* cast238 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std239;
      __VERIFIER_nondet_memory(&std239, sizeof(std239));
      int c240 = 0;
      __retval185 = c240;
      int t241 = __retval185;
      int ret_val242 = t241;
      {
        Stack_int____Stack(&intStack188);
      }
      {
        Stack_double____Stack(&doubleStack186);
      }
      return ret_val242;
  int t243 = __retval185;
  return t243;
}

