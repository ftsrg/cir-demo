extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct ListNode_double_ { double data; struct ListNode_double_* nextPtr; };
struct ListNode_int_ { int data; struct ListNode_int_* nextPtr; };
struct List_double_ { struct ListNode_double_* firstPtr; struct ListNode_double_* lastPtr; };
struct List_int_ { struct ListNode_int_* firstPtr; struct ListNode_int_* lastPtr; };
struct Stack_double_ { struct List_double_ stackList; };
struct Stack_int_ { struct List_int_ stackList; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[28] = "processing an integer Stack";
char _str_1[19] = " popped from stack";
char _str_2[26] = "processing a double Stack";
char _str_3[22] = "Destroying nodes ...\n";
char _str_4[22] = "All nodes destroyed\n\n";
char _str_5[20] = "The list is empty\n\n";
char _str_6[14] = "The list is: ";
char _str_7[3] = "\n\n";
void Stack_int___Stack(struct Stack_int_* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void ListNode_int___ListNode(struct ListNode_int_* p0, int* p1);
struct ListNode_int_* List_int___getNewNode(struct List_int_* p0, int* p1);
void List_int___insertAtFront(struct List_int_* p0, int* p1);
void Stack_int___push(struct Stack_int_* p0, int* p1);
void List_int___print___const(struct List_int_* p0);
void Stack_int___printStack___const(struct Stack_int_* p0);
_Bool Stack_int___isStackEmpty___const(struct Stack_int_* p0);
_Bool List_int___removeFromFront(struct List_int_* p0, int* p1);
_Bool Stack_int___pop(struct Stack_int_* p0, int* p1);
void Stack_double___Stack(struct Stack_double_* p0);
void ListNode_double___ListNode(struct ListNode_double_* p0, double* p1);
struct ListNode_double_* List_double___getNewNode(struct List_double_* p0, double* p1);
void List_double___insertAtFront(struct List_double_* p0, double* p1);
void Stack_double___push(struct Stack_double_* p0, double* p1);
void List_double___print___const(struct List_double_* p0);
void Stack_double___printStack___const(struct Stack_double_* p0);
_Bool Stack_double___isStackEmpty___const(struct Stack_double_* p0);
_Bool List_double___removeFromFront(struct List_double_* p0, double* p1);
_Bool Stack_double___pop(struct Stack_double_* p0, double* p1);
void Stack_double____Stack(struct Stack_double_* p0);
void Stack_int____Stack(struct Stack_int_* p0);
int main();
void List_int___List(struct List_int_* p0);
void List_int____List(struct List_int_* p0);
_Bool List_int___isEmpty___const(struct List_int_* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void List_double___List(struct List_double_* p0);
void List_double____List(struct List_double_* p0);
_Bool List_double___isEmpty___const(struct List_double_* p0);

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN5StackIiEC2Ev
void Stack_int___Stack(struct Stack_int_* v0) {
bb1:
  struct Stack_int_* this2;
  this2 = v0;
  struct Stack_int_* t3 = this2;
  List_int___List(&t3->stackList);
  return;
}

// function: _ZN8ListNodeIiEC2ERKi
void ListNode_int___ListNode(struct ListNode_int_* v4, int* v5) {
bb6:
  struct ListNode_int_* this7;
  int* info8;
  this7 = v4;
  info8 = v5;
  struct ListNode_int_* t9 = this7;
  int* t10 = info8;
  int t11 = *t10;
  t9->data = t11;
  struct ListNode_int_* c12 = ((void*)0);
  t9->nextPtr = c12;
  return;
}

// function: _ZN4ListIiE10getNewNodeERKi
struct ListNode_int_* List_int___getNewNode(struct List_int_* v13, int* v14) {
bb15:
  struct List_int_* this16;
  int* value17;
  struct ListNode_int_* __retval18;
  struct ListNode_int_* __new_result19;
  this16 = v13;
  value17 = v14;
  struct List_int_* t20 = this16;
  unsigned long c21 = 16;
  void* r22 = operator_new(c21);
    struct ListNode_int_* cast23 = (struct ListNode_int_*)r22;
    __new_result19 = cast23;
    int* t24 = value17;
    ListNode_int___ListNode(cast23, t24);
  struct ListNode_int_* t25 = __new_result19;
  __retval18 = t25;
  struct ListNode_int_* t26 = __retval18;
  return t26;
}

// function: _ZN4ListIiE13insertAtFrontERKi
void List_int___insertAtFront(struct List_int_* v27, int* v28) {
bb29:
  struct List_int_* this30;
  int* value31;
  struct ListNode_int_* newPtr32;
  this30 = v27;
  value31 = v28;
  struct List_int_* t33 = this30;
  int* t34 = value31;
  struct ListNode_int_* r35 = List_int___getNewNode(t33, t34);
  newPtr32 = r35;
    _Bool r36 = List_int___isEmpty___const(t33);
    if (r36) {
      struct ListNode_int_* t37 = newPtr32;
      t33->lastPtr = t37;
      t33->firstPtr = t37;
    } else {
      struct ListNode_int_* t38 = t33->firstPtr;
      struct ListNode_int_* t39 = newPtr32;
      t39->nextPtr = t38;
      struct ListNode_int_* t40 = newPtr32;
      t33->firstPtr = t40;
    }
  return;
}

// function: _ZN5StackIiE4pushERKi
void Stack_int___push(struct Stack_int_* v41, int* v42) {
bb43:
  struct Stack_int_* this44;
  int* data45;
  this44 = v41;
  data45 = v42;
  struct Stack_int_* t46 = this44;
  int* t47 = data45;
  List_int___insertAtFront(&t46->stackList, t47);
  return;
}

// function: _ZNK4ListIiE5printEv
void List_int___print___const(struct List_int_* v48) {
bb49:
  struct List_int_* this50;
  struct ListNode_int_* currentPtr51;
  this50 = v48;
  struct List_int_* t52 = this50;
    _Bool r53 = List_int___isEmpty___const(t52);
    if (r53) {
      char* cast54 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
      return;
    }
  struct ListNode_int_* t56 = t52->firstPtr;
  currentPtr51 = t56;
  char* cast57 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
    while (1) {
      struct ListNode_int_* t59 = currentPtr51;
      struct ListNode_int_* c60 = ((void*)0);
      _Bool c61 = ((t59 != c60)) ? 1 : 0;
      if (!c61) break;
        struct ListNode_int_* t62 = currentPtr51;
        int t63 = t62->data;
        struct std__basic_ostream_char__std__char_traits_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        char c65 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        struct ListNode_int_* t67 = currentPtr51;
        struct ListNode_int_* t68 = t67->nextPtr;
        currentPtr51 = t68;
    }
  char* cast69 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std70;
  __VERIFIER_nondet_memory(&std70, sizeof(std70));
  return;
}

// function: _ZNK5StackIiE10printStackEv
void Stack_int___printStack___const(struct Stack_int_* v71) {
bb72:
  struct Stack_int_* this73;
  this73 = v71;
  struct Stack_int_* t74 = this73;
  List_int___print___const(&t74->stackList);
  return;
}

// function: _ZNK5StackIiE12isStackEmptyEv
_Bool Stack_int___isStackEmpty___const(struct Stack_int_* v75) {
bb76:
  struct Stack_int_* this77;
  _Bool __retval78;
  this77 = v75;
  struct Stack_int_* t79 = this77;
  _Bool r80 = List_int___isEmpty___const(&t79->stackList);
  __retval78 = r80;
  _Bool t81 = __retval78;
  return t81;
}

// function: _ZN4ListIiE15removeFromFrontERi
_Bool List_int___removeFromFront(struct List_int_* v82, int* v83) {
bb84:
  struct List_int_* this85;
  int* value86;
  _Bool __retval87;
  this85 = v82;
  value86 = v83;
  struct List_int_* t88 = this85;
    _Bool r89 = List_int___isEmpty___const(t88);
    if (r89) {
      _Bool c90 = 0;
      __retval87 = c90;
      _Bool t91 = __retval87;
      return t91;
    } else {
      struct ListNode_int_* tempPtr92;
      struct ListNode_int_* t93 = t88->firstPtr;
      tempPtr92 = t93;
        struct ListNode_int_* t94 = t88->firstPtr;
        struct ListNode_int_* t95 = t88->lastPtr;
        _Bool c96 = ((t94 == t95)) ? 1 : 0;
        if (c96) {
          struct ListNode_int_* c97 = ((void*)0);
          t88->lastPtr = c97;
          t88->firstPtr = c97;
        } else {
          struct ListNode_int_* t98 = t88->firstPtr;
          struct ListNode_int_* t99 = t98->nextPtr;
          t88->firstPtr = t99;
        }
      struct ListNode_int_* t100 = tempPtr92;
      int t101 = t100->data;
      int* t102 = value86;
      *t102 = t101;
      struct ListNode_int_* t103 = tempPtr92;
      struct ListNode_int_* c104 = ((void*)0);
      _Bool c105 = ((t103 != c104)) ? 1 : 0;
      if (c105) {
        {
          void* cast106 = (void*)t103;
          unsigned long c107 = 16;
          operator_delete(cast106, c107);
        }
      }
      _Bool c108 = 1;
      __retval87 = c108;
      _Bool t109 = __retval87;
      return t109;
    }
  abort();
}

// function: _ZN5StackIiE3popERi
_Bool Stack_int___pop(struct Stack_int_* v110, int* v111) {
bb112:
  struct Stack_int_* this113;
  int* data114;
  _Bool __retval115;
  this113 = v110;
  data114 = v111;
  struct Stack_int_* t116 = this113;
  int* t117 = data114;
  _Bool r118 = List_int___removeFromFront(&t116->stackList, t117);
  __retval115 = r118;
  _Bool t119 = __retval115;
  return t119;
}

// function: _ZN5StackIdEC2Ev
void Stack_double___Stack(struct Stack_double_* v120) {
bb121:
  struct Stack_double_* this122;
  this122 = v120;
  struct Stack_double_* t123 = this122;
  List_double___List(&t123->stackList);
  return;
}

// function: _ZN8ListNodeIdEC2ERKd
void ListNode_double___ListNode(struct ListNode_double_* v124, double* v125) {
bb126:
  struct ListNode_double_* this127;
  double* info128;
  this127 = v124;
  info128 = v125;
  struct ListNode_double_* t129 = this127;
  double* t130 = info128;
  double t131 = *t130;
  t129->data = t131;
  struct ListNode_double_* c132 = ((void*)0);
  t129->nextPtr = c132;
  return;
}

// function: _ZN4ListIdE10getNewNodeERKd
struct ListNode_double_* List_double___getNewNode(struct List_double_* v133, double* v134) {
bb135:
  struct List_double_* this136;
  double* value137;
  struct ListNode_double_* __retval138;
  struct ListNode_double_* __new_result139;
  this136 = v133;
  value137 = v134;
  struct List_double_* t140 = this136;
  unsigned long c141 = 16;
  void* r142 = operator_new(c141);
    struct ListNode_double_* cast143 = (struct ListNode_double_*)r142;
    __new_result139 = cast143;
    double* t144 = value137;
    ListNode_double___ListNode(cast143, t144);
  struct ListNode_double_* t145 = __new_result139;
  __retval138 = t145;
  struct ListNode_double_* t146 = __retval138;
  return t146;
}

// function: _ZN4ListIdE13insertAtFrontERKd
void List_double___insertAtFront(struct List_double_* v147, double* v148) {
bb149:
  struct List_double_* this150;
  double* value151;
  struct ListNode_double_* newPtr152;
  this150 = v147;
  value151 = v148;
  struct List_double_* t153 = this150;
  double* t154 = value151;
  struct ListNode_double_* r155 = List_double___getNewNode(t153, t154);
  newPtr152 = r155;
    _Bool r156 = List_double___isEmpty___const(t153);
    if (r156) {
      struct ListNode_double_* t157 = newPtr152;
      t153->lastPtr = t157;
      t153->firstPtr = t157;
    } else {
      struct ListNode_double_* t158 = t153->firstPtr;
      struct ListNode_double_* t159 = newPtr152;
      t159->nextPtr = t158;
      struct ListNode_double_* t160 = newPtr152;
      t153->firstPtr = t160;
    }
  return;
}

// function: _ZN5StackIdE4pushERKd
void Stack_double___push(struct Stack_double_* v161, double* v162) {
bb163:
  struct Stack_double_* this164;
  double* data165;
  this164 = v161;
  data165 = v162;
  struct Stack_double_* t166 = this164;
  double* t167 = data165;
  List_double___insertAtFront(&t166->stackList, t167);
  return;
}

// function: _ZNK4ListIdE5printEv
void List_double___print___const(struct List_double_* v168) {
bb169:
  struct List_double_* this170;
  struct ListNode_double_* currentPtr171;
  this170 = v168;
  struct List_double_* t172 = this170;
    _Bool r173 = List_double___isEmpty___const(t172);
    if (r173) {
      char* cast174 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std175;
      __VERIFIER_nondet_memory(&std175, sizeof(std175));
      return;
    }
  struct ListNode_double_* t176 = t172->firstPtr;
  currentPtr171 = t176;
  char* cast177 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std178;
  __VERIFIER_nondet_memory(&std178, sizeof(std178));
    while (1) {
      struct ListNode_double_* t179 = currentPtr171;
      struct ListNode_double_* c180 = ((void*)0);
      _Bool c181 = ((t179 != c180)) ? 1 : 0;
      if (!c181) break;
        struct ListNode_double_* t182 = currentPtr171;
        double t183 = t182->data;
        struct std__basic_ostream_char__std__char_traits_char__* std184;
        __VERIFIER_nondet_memory(&std184, sizeof(std184));
        char c185 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std186;
        __VERIFIER_nondet_memory(&std186, sizeof(std186));
        struct ListNode_double_* t187 = currentPtr171;
        struct ListNode_double_* t188 = t187->nextPtr;
        currentPtr171 = t188;
    }
  char* cast189 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std190;
  __VERIFIER_nondet_memory(&std190, sizeof(std190));
  return;
}

// function: _ZNK5StackIdE10printStackEv
void Stack_double___printStack___const(struct Stack_double_* v191) {
bb192:
  struct Stack_double_* this193;
  this193 = v191;
  struct Stack_double_* t194 = this193;
  List_double___print___const(&t194->stackList);
  return;
}

// function: _ZNK5StackIdE12isStackEmptyEv
_Bool Stack_double___isStackEmpty___const(struct Stack_double_* v195) {
bb196:
  struct Stack_double_* this197;
  _Bool __retval198;
  this197 = v195;
  struct Stack_double_* t199 = this197;
  _Bool r200 = List_double___isEmpty___const(&t199->stackList);
  __retval198 = r200;
  _Bool t201 = __retval198;
  return t201;
}

// function: _ZN4ListIdE15removeFromFrontERd
_Bool List_double___removeFromFront(struct List_double_* v202, double* v203) {
bb204:
  struct List_double_* this205;
  double* value206;
  _Bool __retval207;
  this205 = v202;
  value206 = v203;
  struct List_double_* t208 = this205;
    _Bool r209 = List_double___isEmpty___const(t208);
    if (r209) {
      _Bool c210 = 0;
      __retval207 = c210;
      _Bool t211 = __retval207;
      return t211;
    } else {
      struct ListNode_double_* tempPtr212;
      struct ListNode_double_* t213 = t208->firstPtr;
      tempPtr212 = t213;
        struct ListNode_double_* t214 = t208->firstPtr;
        struct ListNode_double_* t215 = t208->lastPtr;
        _Bool c216 = ((t214 == t215)) ? 1 : 0;
        if (c216) {
          struct ListNode_double_* c217 = ((void*)0);
          t208->lastPtr = c217;
          t208->firstPtr = c217;
        } else {
          struct ListNode_double_* t218 = t208->firstPtr;
          struct ListNode_double_* t219 = t218->nextPtr;
          t208->firstPtr = t219;
        }
      struct ListNode_double_* t220 = tempPtr212;
      double t221 = t220->data;
      double* t222 = value206;
      *t222 = t221;
      struct ListNode_double_* t223 = tempPtr212;
      struct ListNode_double_* c224 = ((void*)0);
      _Bool c225 = ((t223 != c224)) ? 1 : 0;
      if (c225) {
        {
          void* cast226 = (void*)t223;
          unsigned long c227 = 16;
          operator_delete(cast226, c227);
        }
      }
      _Bool c228 = 1;
      __retval207 = c228;
      _Bool t229 = __retval207;
      return t229;
    }
  abort();
}

// function: _ZN5StackIdE3popERd
_Bool Stack_double___pop(struct Stack_double_* v230, double* v231) {
bb232:
  struct Stack_double_* this233;
  double* data234;
  _Bool __retval235;
  this233 = v230;
  data234 = v231;
  struct Stack_double_* t236 = this233;
  double* t237 = data234;
  _Bool r238 = List_double___removeFromFront(&t236->stackList, t237);
  __retval235 = r238;
  _Bool t239 = __retval235;
  return t239;
}

// function: _ZN5StackIdED2Ev
void Stack_double____Stack(struct Stack_double_* v240) {
bb241:
  struct Stack_double_* this242;
  this242 = v240;
  struct Stack_double_* t243 = this242;
  {
    List_double____List(&t243->stackList);
  }
  return;
}

// function: _ZN5StackIiED2Ev
void Stack_int____Stack(struct Stack_int_* v244) {
bb245:
  struct Stack_int_* this246;
  this246 = v244;
  struct Stack_int_* t247 = this246;
  {
    List_int____List(&t247->stackList);
  }
  return;
}

// function: main
int main() {
bb248:
  int __retval249;
  struct Stack_int_ intStack250;
  int popInteger251;
  struct Stack_double_ doubleStack252;
  double value253;
  double popdouble254;
  int c255 = 0;
  __retval249 = c255;
  Stack_int___Stack(&intStack250);
    char* cast256 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std257;
    __VERIFIER_nondet_memory(&std257, sizeof(std257));
    struct std__basic_ostream_char__std__char_traits_char__* std258;
    __VERIFIER_nondet_memory(&std258, sizeof(std258));
      int i259;
      int c260 = 0;
      i259 = c260;
      while (1) {
        int t262 = i259;
        int c263 = 4;
        _Bool c264 = ((t262 < c263)) ? 1 : 0;
        if (!c264) break;
          Stack_int___push(&intStack250, &i259);
          Stack_int___printStack___const(&intStack250);
      for_step261: ;
        int t265 = i259;
        int u266 = t265 + 1;
        i259 = u266;
      }
      while (1) {
        _Bool r267 = Stack_int___isStackEmpty___const(&intStack250);
        _Bool u268 = !r267;
        if (!u268) break;
          _Bool r269 = Stack_int___pop(&intStack250, &popInteger251);
          int t270 = popInteger251;
          struct std__basic_ostream_char__std__char_traits_char__* std271;
          __VERIFIER_nondet_memory(&std271, sizeof(std271));
          char* cast272 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std273;
          __VERIFIER_nondet_memory(&std273, sizeof(std273));
          struct std__basic_ostream_char__std__char_traits_char__* std274;
          __VERIFIER_nondet_memory(&std274, sizeof(std274));
          Stack_int___printStack___const(&intStack250);
      }
    Stack_double___Stack(&doubleStack252);
      double c275 = 0x1.199999999999ap0;
      value253 = c275;
      char* cast276 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std277;
      __VERIFIER_nondet_memory(&std277, sizeof(std277));
      struct std__basic_ostream_char__std__char_traits_char__* std278;
      __VERIFIER_nondet_memory(&std278, sizeof(std278));
        int j279;
        int c280 = 0;
        j279 = c280;
        while (1) {
          int t282 = j279;
          int c283 = 4;
          _Bool c284 = ((t282 < c283)) ? 1 : 0;
          if (!c284) break;
            Stack_double___push(&doubleStack252, &value253);
            Stack_double___printStack___const(&doubleStack252);
            double c285 = 0x1.199999999999ap0;
            double t286 = value253;
            double b287 = t286 + c285;
            value253 = b287;
        for_step281: ;
          int t288 = j279;
          int u289 = t288 + 1;
          j279 = u289;
        }
        while (1) {
          _Bool r290 = Stack_double___isStackEmpty___const(&doubleStack252);
          _Bool u291 = !r290;
          if (!u291) break;
            _Bool r292 = Stack_double___pop(&doubleStack252, &popdouble254);
            double t293 = popdouble254;
            struct std__basic_ostream_char__std__char_traits_char__* std294;
            __VERIFIER_nondet_memory(&std294, sizeof(std294));
            char* cast295 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std296;
            __VERIFIER_nondet_memory(&std296, sizeof(std296));
            struct std__basic_ostream_char__std__char_traits_char__* std297;
            __VERIFIER_nondet_memory(&std297, sizeof(std297));
            Stack_double___printStack___const(&doubleStack252);
        }
      int c298 = 0;
      __retval249 = c298;
      int t299 = __retval249;
      int ret_val300 = t299;
      {
        Stack_double____Stack(&doubleStack252);
      }
      {
        Stack_int____Stack(&intStack250);
      }
      return ret_val300;
  int t301 = __retval249;
  return t301;
}

// function: _ZN4ListIiEC2Ev
void List_int___List(struct List_int_* v302) {
bb303:
  struct List_int_* this304;
  this304 = v302;
  struct List_int_* t305 = this304;
  struct ListNode_int_* c306 = ((void*)0);
  t305->firstPtr = c306;
  struct ListNode_int_* c307 = ((void*)0);
  t305->lastPtr = c307;
  return;
}

// function: _ZN4ListIiED2Ev
void List_int____List(struct List_int_* v308) {
bb309:
  struct List_int_* this310;
  this310 = v308;
  struct List_int_* t311 = this310;
    _Bool r312 = List_int___isEmpty___const(t311);
    _Bool u313 = !r312;
    if (u313) {
      struct ListNode_int_* currentPtr314;
      struct ListNode_int_* tempPtr315;
      char* cast316 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std317;
      __VERIFIER_nondet_memory(&std317, sizeof(std317));
      struct ListNode_int_* t318 = t311->firstPtr;
      currentPtr314 = t318;
        while (1) {
          struct ListNode_int_* t319 = currentPtr314;
          struct ListNode_int_* c320 = ((void*)0);
          _Bool c321 = ((t319 != c320)) ? 1 : 0;
          if (!c321) break;
            struct ListNode_int_* t322 = currentPtr314;
            tempPtr315 = t322;
            struct ListNode_int_* t323 = tempPtr315;
            int t324 = t323->data;
            struct std__basic_ostream_char__std__char_traits_char__* std325;
            __VERIFIER_nondet_memory(&std325, sizeof(std325));
            char c326 = 10;
            struct std__basic_ostream_char__std__char_traits_char__* std327;
            __VERIFIER_nondet_memory(&std327, sizeof(std327));
            struct ListNode_int_* t328 = currentPtr314;
            struct ListNode_int_* t329 = t328->nextPtr;
            currentPtr314 = t329;
            struct ListNode_int_* t330 = tempPtr315;
            struct ListNode_int_* c331 = ((void*)0);
            _Bool c332 = ((t330 != c331)) ? 1 : 0;
            if (c332) {
              {
                void* cast333 = (void*)t330;
                unsigned long c334 = 16;
                operator_delete(cast333, c334);
              }
            }
        }
    }
  char* cast335 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std336;
  __VERIFIER_nondet_memory(&std336, sizeof(std336));
  return;
}

// function: _ZNK4ListIiE7isEmptyEv
_Bool List_int___isEmpty___const(struct List_int_* v337) {
bb338:
  struct List_int_* this339;
  _Bool __retval340;
  this339 = v337;
  struct List_int_* t341 = this339;
  struct ListNode_int_* t342 = t341->firstPtr;
  struct ListNode_int_* c343 = ((void*)0);
  _Bool c344 = ((t342 == c343)) ? 1 : 0;
  __retval340 = c344;
  _Bool t345 = __retval340;
  return t345;
}

// function: _ZN4ListIdEC2Ev
void List_double___List(struct List_double_* v346) {
bb347:
  struct List_double_* this348;
  this348 = v346;
  struct List_double_* t349 = this348;
  struct ListNode_double_* c350 = ((void*)0);
  t349->firstPtr = c350;
  struct ListNode_double_* c351 = ((void*)0);
  t349->lastPtr = c351;
  return;
}

// function: _ZN4ListIdED2Ev
void List_double____List(struct List_double_* v352) {
bb353:
  struct List_double_* this354;
  this354 = v352;
  struct List_double_* t355 = this354;
    _Bool r356 = List_double___isEmpty___const(t355);
    _Bool u357 = !r356;
    if (u357) {
      struct ListNode_double_* currentPtr358;
      struct ListNode_double_* tempPtr359;
      char* cast360 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std361;
      __VERIFIER_nondet_memory(&std361, sizeof(std361));
      struct ListNode_double_* t362 = t355->firstPtr;
      currentPtr358 = t362;
        while (1) {
          struct ListNode_double_* t363 = currentPtr358;
          struct ListNode_double_* c364 = ((void*)0);
          _Bool c365 = ((t363 != c364)) ? 1 : 0;
          if (!c365) break;
            struct ListNode_double_* t366 = currentPtr358;
            tempPtr359 = t366;
            struct ListNode_double_* t367 = tempPtr359;
            double t368 = t367->data;
            struct std__basic_ostream_char__std__char_traits_char__* std369;
            __VERIFIER_nondet_memory(&std369, sizeof(std369));
            char c370 = 10;
            struct std__basic_ostream_char__std__char_traits_char__* std371;
            __VERIFIER_nondet_memory(&std371, sizeof(std371));
            struct ListNode_double_* t372 = currentPtr358;
            struct ListNode_double_* t373 = t372->nextPtr;
            currentPtr358 = t373;
            struct ListNode_double_* t374 = tempPtr359;
            struct ListNode_double_* c375 = ((void*)0);
            _Bool c376 = ((t374 != c375)) ? 1 : 0;
            if (c376) {
              {
                void* cast377 = (void*)t374;
                unsigned long c378 = 16;
                operator_delete(cast377, c378);
              }
            }
        }
    }
  char* cast379 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std380;
  __VERIFIER_nondet_memory(&std380, sizeof(std380));
  return;
}

// function: _ZNK4ListIdE7isEmptyEv
_Bool List_double___isEmpty___const(struct List_double_* v381) {
bb382:
  struct List_double_* this383;
  _Bool __retval384;
  this383 = v381;
  struct List_double_* t385 = this383;
  struct ListNode_double_* t386 = t385->firstPtr;
  struct ListNode_double_* c387 = ((void*)0);
  _Bool c388 = ((t386 == c387)) ? 1 : 0;
  __retval384 = c388;
  _Bool t389 = __retval384;
  return t389;
}

