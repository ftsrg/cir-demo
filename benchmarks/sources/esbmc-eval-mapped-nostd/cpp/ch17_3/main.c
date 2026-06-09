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
struct ListNode_double_ { double data; struct ListNode_double_* nextPtr; };
struct ListNode_int_ { int data; struct ListNode_int_* nextPtr; };
struct List_double_ { struct ListNode_double_* firstPtr; struct ListNode_double_* lastPtr; };
struct List_int_ { struct ListNode_int_* firstPtr; struct ListNode_int_* lastPtr; };
struct Stack_double_ { struct List_double_ stackList; };
struct Stack_int_ { struct List_int_ stackList; };
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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

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
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
void Stack_double____Stack(struct Stack_double_* p0);
void Stack_int____Stack(struct Stack_int_* p0);
int main();
void List_int___List(struct List_int_* p0);
void List_int____List(struct List_int_* p0);
_Bool List_int___isEmpty___const(struct List_int_* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void List_double___List(struct List_double_* p0);
void List_double____List(struct List_double_* p0);
_Bool List_double___isEmpty___const(struct List_double_* p0);

// function: _ZN5StackIiEC2Ev
void Stack_int___Stack(struct Stack_int_* v0) {
bb1:
  struct Stack_int_* this2;
  this2 = v0;
  struct Stack_int_* t3 = this2;
  List_int___List(&t3->stackList);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v4, int v5) {
bb6:
  int __a7;
  int __b8;
  int __retval9;
  __a7 = v4;
  __b8 = v5;
  int t10 = __a7;
  int t11 = __b8;
  int b12 = t10 | t11;
  __retval9 = b12;
  int t13 = __retval9;
  return t13;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v14) {
bb15:
  struct std__basic_ios_char__std__char_traits_char__* this16;
  int __retval17;
  this16 = v14;
  struct std__basic_ios_char__std__char_traits_char__* t18 = this16;
  struct std__ios_base* base19 = (struct std__ios_base*)((char *)t18 + 0);
  int t20 = base19->_M_streambuf_state;
  __retval17 = t20;
  int t21 = __retval17;
  return t21;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v22, int v23) {
bb24:
  struct std__basic_ios_char__std__char_traits_char__* this25;
  int __state26;
  this25 = v22;
  __state26 = v23;
  struct std__basic_ios_char__std__char_traits_char__* t27 = this25;
  int r28 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t27);
  int t29 = __state26;
  int r30 = std__operator_(r28, t29);
  std__basic_ios_char__std__char_traits_char_____clear(t27, r30);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb31:
  _Bool __retval32;
    _Bool c33 = 0;
    __retval32 = c33;
    _Bool t34 = __retval32;
    return t34;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v35, char* v36) {
bb37:
  char* __c138;
  char* __c239;
  _Bool __retval40;
  __c138 = v35;
  __c239 = v36;
  char* t41 = __c138;
  char t42 = *t41;
  int cast43 = (int)t42;
  char* t44 = __c239;
  char t45 = *t44;
  int cast46 = (int)t45;
  _Bool c47 = ((cast43 == cast46)) ? 1 : 0;
  __retval40 = c47;
  _Bool t48 = __retval40;
  return t48;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v49) {
bb50:
  char* __p51;
  unsigned long __retval52;
  unsigned long __i53;
  __p51 = v49;
  unsigned long c54 = 0;
  __i53 = c54;
    char ref_tmp055;
    while (1) {
      unsigned long t56 = __i53;
      char* t57 = __p51;
      char* ptr58 = &(t57)[t56];
      char c59 = 0;
      ref_tmp055 = c59;
      _Bool r60 = __gnu_cxx__char_traits_char___eq(ptr58, &ref_tmp055);
      _Bool u61 = !r60;
      if (!u61) break;
      unsigned long t62 = __i53;
      unsigned long u63 = t62 + 1;
      __i53 = u63;
    }
  unsigned long t64 = __i53;
  __retval52 = t64;
  unsigned long t65 = __retval52;
  return t65;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v66) {
bb67:
  char* __s68;
  unsigned long __retval69;
  __s68 = v66;
    _Bool r70 = std____is_constant_evaluated();
    if (r70) {
      char* t71 = __s68;
      unsigned long r72 = __gnu_cxx__char_traits_char___length(t71);
      __retval69 = r72;
      unsigned long t73 = __retval69;
      return t73;
    }
  char* t74 = __s68;
  unsigned long r75 = strlen(t74);
  __retval69 = r75;
  unsigned long t76 = __retval69;
  return t76;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v77, char* v78) {
bb79:
  struct std__basic_ostream_char__std__char_traits_char__* __out80;
  char* __s81;
  struct std__basic_ostream_char__std__char_traits_char__* __retval82;
  __out80 = v77;
  __s81 = v78;
    char* t83 = __s81;
    _Bool cast84 = (_Bool)t83;
    _Bool u85 = !cast84;
    if (u85) {
      struct std__basic_ostream_char__std__char_traits_char__* t86 = __out80;
      void** v87 = (void**)t86;
      void* v88 = *((void**)v87);
      unsigned char* cast89 = (unsigned char*)v88;
      long c90 = -24;
      unsigned char* ptr91 = &(cast89)[c90];
      long* cast92 = (long*)ptr91;
      long t93 = *cast92;
      unsigned char* cast94 = (unsigned char*)t86;
      unsigned char* ptr95 = &(cast94)[t93];
      struct std__basic_ostream_char__std__char_traits_char__* cast96 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr95;
      struct std__basic_ios_char__std__char_traits_char__* cast97 = (struct std__basic_ios_char__std__char_traits_char__*)cast96;
      int t98 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast97, t98);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t99 = __out80;
      char* t100 = __s81;
      char* t101 = __s81;
      unsigned long r102 = std__char_traits_char___length(t101);
      long cast103 = (long)r102;
      struct std__basic_ostream_char__std__char_traits_char__* r104 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t99, t100, cast103);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t105 = __out80;
  __retval82 = t105;
  struct std__basic_ostream_char__std__char_traits_char__* t106 = __retval82;
  return t106;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v107, void* v108) {
bb109:
  struct std__basic_ostream_char__std__char_traits_char__* this110;
  void* __pf111;
  struct std__basic_ostream_char__std__char_traits_char__* __retval112;
  this110 = v107;
  __pf111 = v108;
  struct std__basic_ostream_char__std__char_traits_char__* t113 = this110;
  void* t114 = __pf111;
  struct std__basic_ostream_char__std__char_traits_char__* r115 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t114)(t113);
  __retval112 = r115;
  struct std__basic_ostream_char__std__char_traits_char__* t116 = __retval112;
  return t116;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v117) {
bb118:
  struct std__basic_ostream_char__std__char_traits_char__* __os119;
  struct std__basic_ostream_char__std__char_traits_char__* __retval120;
  __os119 = v117;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = __os119;
  struct std__basic_ostream_char__std__char_traits_char__* r122 = std__ostream__flush(t121);
  __retval120 = r122;
  struct std__basic_ostream_char__std__char_traits_char__* t123 = __retval120;
  return t123;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v124) {
bb125:
  struct std__ctype_char_* __f126;
  struct std__ctype_char_* __retval127;
  __f126 = v124;
    struct std__ctype_char_* t128 = __f126;
    _Bool cast129 = (_Bool)t128;
    _Bool u130 = !cast129;
    if (u130) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t131 = __f126;
  __retval127 = t131;
  struct std__ctype_char_* t132 = __retval127;
  return t132;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v133, char v134) {
bb135:
  struct std__ctype_char_* this136;
  char __c137;
  char __retval138;
  this136 = v133;
  __c137 = v134;
  struct std__ctype_char_* t139 = this136;
    char t140 = t139->_M_widen_ok;
    _Bool cast141 = (_Bool)t140;
    if (cast141) {
      char t142 = __c137;
      unsigned char cast143 = (unsigned char)t142;
      unsigned long cast144 = (unsigned long)cast143;
      char t145 = t139->_M_widen[cast144];
      __retval138 = t145;
      char t146 = __retval138;
      return t146;
    }
  std__ctype_char____M_widen_init___const(t139);
  char t147 = __c137;
  void** v148 = (void**)t139;
  void* v149 = *((void**)v148);
  char vcall152 = (char)__VERIFIER_virtual_call_char_char(t139, 6, t147);
  __retval138 = vcall152;
  char t153 = __retval138;
  return t153;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v154, char v155) {
bb156:
  struct std__basic_ios_char__std__char_traits_char__* this157;
  char __c158;
  char __retval159;
  this157 = v154;
  __c158 = v155;
  struct std__basic_ios_char__std__char_traits_char__* t160 = this157;
  struct std__ctype_char_* t161 = t160->_M_ctype;
  struct std__ctype_char_* r162 = std__ctype_char__const__std____check_facet_std__ctype_char___(t161);
  char t163 = __c158;
  char r164 = std__ctype_char___widen_char__const(r162, t163);
  __retval159 = r164;
  char t165 = __retval159;
  return t165;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v166) {
bb167:
  struct std__basic_ostream_char__std__char_traits_char__* __os168;
  struct std__basic_ostream_char__std__char_traits_char__* __retval169;
  __os168 = v166;
  struct std__basic_ostream_char__std__char_traits_char__* t170 = __os168;
  struct std__basic_ostream_char__std__char_traits_char__* t171 = __os168;
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
  struct std__basic_ios_char__std__char_traits_char__* cast182 = (struct std__basic_ios_char__std__char_traits_char__*)cast181;
  char c183 = 10;
  char r184 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast182, c183);
  struct std__basic_ostream_char__std__char_traits_char__* r185 = std__ostream__put(t170, r184);
  struct std__basic_ostream_char__std__char_traits_char__* r186 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r185);
  __retval169 = r186;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __retval169;
  return t187;
}

// function: _ZN8ListNodeIiEC2ERKi
void ListNode_int___ListNode(struct ListNode_int_* v188, int* v189) {
bb190:
  struct ListNode_int_* this191;
  int* info192;
  this191 = v188;
  info192 = v189;
  struct ListNode_int_* t193 = this191;
  int* t194 = info192;
  int t195 = *t194;
  t193->data = t195;
  struct ListNode_int_* c196 = ((void*)0);
  t193->nextPtr = c196;
  return;
}

// function: _ZN4ListIiE10getNewNodeERKi
struct ListNode_int_* List_int___getNewNode(struct List_int_* v197, int* v198) {
bb199:
  struct List_int_* this200;
  int* value201;
  struct ListNode_int_* __retval202;
  struct ListNode_int_* __new_result203;
  this200 = v197;
  value201 = v198;
  struct List_int_* t204 = this200;
  unsigned long c205 = 16;
  void* r206 = operator_new(c205);
    struct ListNode_int_* cast207 = (struct ListNode_int_*)r206;
    __new_result203 = cast207;
    int* t208 = value201;
    ListNode_int___ListNode(cast207, t208);
  struct ListNode_int_* t209 = __new_result203;
  __retval202 = t209;
  struct ListNode_int_* t210 = __retval202;
  return t210;
}

// function: _ZN4ListIiE13insertAtFrontERKi
void List_int___insertAtFront(struct List_int_* v211, int* v212) {
bb213:
  struct List_int_* this214;
  int* value215;
  struct ListNode_int_* newPtr216;
  this214 = v211;
  value215 = v212;
  struct List_int_* t217 = this214;
  int* t218 = value215;
  struct ListNode_int_* r219 = List_int___getNewNode(t217, t218);
  newPtr216 = r219;
    _Bool r220 = List_int___isEmpty___const(t217);
    if (r220) {
      struct ListNode_int_* t221 = newPtr216;
      t217->lastPtr = t221;
      t217->firstPtr = t221;
    } else {
      struct ListNode_int_* t222 = t217->firstPtr;
      struct ListNode_int_* t223 = newPtr216;
      t223->nextPtr = t222;
      struct ListNode_int_* t224 = newPtr216;
      t217->firstPtr = t224;
    }
  return;
}

// function: _ZN5StackIiE4pushERKi
void Stack_int___push(struct Stack_int_* v225, int* v226) {
bb227:
  struct Stack_int_* this228;
  int* data229;
  this228 = v225;
  data229 = v226;
  struct Stack_int_* t230 = this228;
  int* t231 = data229;
  List_int___insertAtFront(&t230->stackList, t231);
  return;
}

// function: _ZNK4ListIiE5printEv
void List_int___print___const(struct List_int_* v232) {
bb233:
  struct List_int_* this234;
  struct ListNode_int_* currentPtr235;
  this234 = v232;
  struct List_int_* t236 = this234;
    _Bool r237 = List_int___isEmpty___const(t236);
    if (r237) {
      char* cast238 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r239 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast238);
      return;
    }
  struct ListNode_int_* t240 = t236->firstPtr;
  currentPtr235 = t240;
  char* cast241 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r242 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast241);
    while (1) {
      struct ListNode_int_* t243 = currentPtr235;
      struct ListNode_int_* c244 = ((void*)0);
      _Bool c245 = ((t243 != c244)) ? 1 : 0;
      if (!c245) break;
        struct ListNode_int_* t246 = currentPtr235;
        int t247 = t246->data;
        struct std__basic_ostream_char__std__char_traits_char__* r248 = std__ostream__operator___2(&_ZSt4cout, t247);
        char c249 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r250 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r248, c249);
        struct ListNode_int_* t251 = currentPtr235;
        struct ListNode_int_* t252 = t251->nextPtr;
        currentPtr235 = t252;
    }
  char* cast253 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r254 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast253);
  return;
}

// function: _ZNK5StackIiE10printStackEv
void Stack_int___printStack___const(struct Stack_int_* v255) {
bb256:
  struct Stack_int_* this257;
  this257 = v255;
  struct Stack_int_* t258 = this257;
  List_int___print___const(&t258->stackList);
  return;
}

// function: _ZNK5StackIiE12isStackEmptyEv
_Bool Stack_int___isStackEmpty___const(struct Stack_int_* v259) {
bb260:
  struct Stack_int_* this261;
  _Bool __retval262;
  this261 = v259;
  struct Stack_int_* t263 = this261;
  _Bool r264 = List_int___isEmpty___const(&t263->stackList);
  __retval262 = r264;
  _Bool t265 = __retval262;
  return t265;
}

// function: _ZN4ListIiE15removeFromFrontERi
_Bool List_int___removeFromFront(struct List_int_* v266, int* v267) {
bb268:
  struct List_int_* this269;
  int* value270;
  _Bool __retval271;
  this269 = v266;
  value270 = v267;
  struct List_int_* t272 = this269;
    _Bool r273 = List_int___isEmpty___const(t272);
    if (r273) {
      _Bool c274 = 0;
      __retval271 = c274;
      _Bool t275 = __retval271;
      return t275;
    } else {
      struct ListNode_int_* tempPtr276;
      struct ListNode_int_* t277 = t272->firstPtr;
      tempPtr276 = t277;
        struct ListNode_int_* t278 = t272->firstPtr;
        struct ListNode_int_* t279 = t272->lastPtr;
        _Bool c280 = ((t278 == t279)) ? 1 : 0;
        if (c280) {
          struct ListNode_int_* c281 = ((void*)0);
          t272->lastPtr = c281;
          t272->firstPtr = c281;
        } else {
          struct ListNode_int_* t282 = t272->firstPtr;
          struct ListNode_int_* t283 = t282->nextPtr;
          t272->firstPtr = t283;
        }
      struct ListNode_int_* t284 = tempPtr276;
      int t285 = t284->data;
      int* t286 = value270;
      *t286 = t285;
      struct ListNode_int_* t287 = tempPtr276;
      struct ListNode_int_* c288 = ((void*)0);
      _Bool c289 = ((t287 != c288)) ? 1 : 0;
      if (c289) {
        {
          void* cast290 = (void*)t287;
          unsigned long c291 = 16;
          operator_delete(cast290, c291);
        }
      }
      _Bool c292 = 1;
      __retval271 = c292;
      _Bool t293 = __retval271;
      return t293;
    }
  abort();
}

// function: _ZN5StackIiE3popERi
_Bool Stack_int___pop(struct Stack_int_* v294, int* v295) {
bb296:
  struct Stack_int_* this297;
  int* data298;
  _Bool __retval299;
  this297 = v294;
  data298 = v295;
  struct Stack_int_* t300 = this297;
  int* t301 = data298;
  _Bool r302 = List_int___removeFromFront(&t300->stackList, t301);
  __retval299 = r302;
  _Bool t303 = __retval299;
  return t303;
}

// function: _ZN5StackIdEC2Ev
void Stack_double___Stack(struct Stack_double_* v304) {
bb305:
  struct Stack_double_* this306;
  this306 = v304;
  struct Stack_double_* t307 = this306;
  List_double___List(&t307->stackList);
  return;
}

// function: _ZN8ListNodeIdEC2ERKd
void ListNode_double___ListNode(struct ListNode_double_* v308, double* v309) {
bb310:
  struct ListNode_double_* this311;
  double* info312;
  this311 = v308;
  info312 = v309;
  struct ListNode_double_* t313 = this311;
  double* t314 = info312;
  double t315 = *t314;
  t313->data = t315;
  struct ListNode_double_* c316 = ((void*)0);
  t313->nextPtr = c316;
  return;
}

// function: _ZN4ListIdE10getNewNodeERKd
struct ListNode_double_* List_double___getNewNode(struct List_double_* v317, double* v318) {
bb319:
  struct List_double_* this320;
  double* value321;
  struct ListNode_double_* __retval322;
  struct ListNode_double_* __new_result323;
  this320 = v317;
  value321 = v318;
  struct List_double_* t324 = this320;
  unsigned long c325 = 16;
  void* r326 = operator_new(c325);
    struct ListNode_double_* cast327 = (struct ListNode_double_*)r326;
    __new_result323 = cast327;
    double* t328 = value321;
    ListNode_double___ListNode(cast327, t328);
  struct ListNode_double_* t329 = __new_result323;
  __retval322 = t329;
  struct ListNode_double_* t330 = __retval322;
  return t330;
}

// function: _ZN4ListIdE13insertAtFrontERKd
void List_double___insertAtFront(struct List_double_* v331, double* v332) {
bb333:
  struct List_double_* this334;
  double* value335;
  struct ListNode_double_* newPtr336;
  this334 = v331;
  value335 = v332;
  struct List_double_* t337 = this334;
  double* t338 = value335;
  struct ListNode_double_* r339 = List_double___getNewNode(t337, t338);
  newPtr336 = r339;
    _Bool r340 = List_double___isEmpty___const(t337);
    if (r340) {
      struct ListNode_double_* t341 = newPtr336;
      t337->lastPtr = t341;
      t337->firstPtr = t341;
    } else {
      struct ListNode_double_* t342 = t337->firstPtr;
      struct ListNode_double_* t343 = newPtr336;
      t343->nextPtr = t342;
      struct ListNode_double_* t344 = newPtr336;
      t337->firstPtr = t344;
    }
  return;
}

// function: _ZN5StackIdE4pushERKd
void Stack_double___push(struct Stack_double_* v345, double* v346) {
bb347:
  struct Stack_double_* this348;
  double* data349;
  this348 = v345;
  data349 = v346;
  struct Stack_double_* t350 = this348;
  double* t351 = data349;
  List_double___insertAtFront(&t350->stackList, t351);
  return;
}

// function: _ZNK4ListIdE5printEv
void List_double___print___const(struct List_double_* v352) {
bb353:
  struct List_double_* this354;
  struct ListNode_double_* currentPtr355;
  this354 = v352;
  struct List_double_* t356 = this354;
    _Bool r357 = List_double___isEmpty___const(t356);
    if (r357) {
      char* cast358 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r359 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast358);
      return;
    }
  struct ListNode_double_* t360 = t356->firstPtr;
  currentPtr355 = t360;
  char* cast361 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast361);
    while (1) {
      struct ListNode_double_* t363 = currentPtr355;
      struct ListNode_double_* c364 = ((void*)0);
      _Bool c365 = ((t363 != c364)) ? 1 : 0;
      if (!c365) break;
        struct ListNode_double_* t366 = currentPtr355;
        double t367 = t366->data;
        struct std__basic_ostream_char__std__char_traits_char__* r368 = std__ostream__operator__(&_ZSt4cout, t367);
        char c369 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r370 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r368, c369);
        struct ListNode_double_* t371 = currentPtr355;
        struct ListNode_double_* t372 = t371->nextPtr;
        currentPtr355 = t372;
    }
  char* cast373 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r374 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast373);
  return;
}

// function: _ZNK5StackIdE10printStackEv
void Stack_double___printStack___const(struct Stack_double_* v375) {
bb376:
  struct Stack_double_* this377;
  this377 = v375;
  struct Stack_double_* t378 = this377;
  List_double___print___const(&t378->stackList);
  return;
}

// function: _ZNK5StackIdE12isStackEmptyEv
_Bool Stack_double___isStackEmpty___const(struct Stack_double_* v379) {
bb380:
  struct Stack_double_* this381;
  _Bool __retval382;
  this381 = v379;
  struct Stack_double_* t383 = this381;
  _Bool r384 = List_double___isEmpty___const(&t383->stackList);
  __retval382 = r384;
  _Bool t385 = __retval382;
  return t385;
}

// function: _ZN4ListIdE15removeFromFrontERd
_Bool List_double___removeFromFront(struct List_double_* v386, double* v387) {
bb388:
  struct List_double_* this389;
  double* value390;
  _Bool __retval391;
  this389 = v386;
  value390 = v387;
  struct List_double_* t392 = this389;
    _Bool r393 = List_double___isEmpty___const(t392);
    if (r393) {
      _Bool c394 = 0;
      __retval391 = c394;
      _Bool t395 = __retval391;
      return t395;
    } else {
      struct ListNode_double_* tempPtr396;
      struct ListNode_double_* t397 = t392->firstPtr;
      tempPtr396 = t397;
        struct ListNode_double_* t398 = t392->firstPtr;
        struct ListNode_double_* t399 = t392->lastPtr;
        _Bool c400 = ((t398 == t399)) ? 1 : 0;
        if (c400) {
          struct ListNode_double_* c401 = ((void*)0);
          t392->lastPtr = c401;
          t392->firstPtr = c401;
        } else {
          struct ListNode_double_* t402 = t392->firstPtr;
          struct ListNode_double_* t403 = t402->nextPtr;
          t392->firstPtr = t403;
        }
      struct ListNode_double_* t404 = tempPtr396;
      double t405 = t404->data;
      double* t406 = value390;
      *t406 = t405;
      struct ListNode_double_* t407 = tempPtr396;
      struct ListNode_double_* c408 = ((void*)0);
      _Bool c409 = ((t407 != c408)) ? 1 : 0;
      if (c409) {
        {
          void* cast410 = (void*)t407;
          unsigned long c411 = 16;
          operator_delete(cast410, c411);
        }
      }
      _Bool c412 = 1;
      __retval391 = c412;
      _Bool t413 = __retval391;
      return t413;
    }
  abort();
}

// function: _ZN5StackIdE3popERd
_Bool Stack_double___pop(struct Stack_double_* v414, double* v415) {
bb416:
  struct Stack_double_* this417;
  double* data418;
  _Bool __retval419;
  this417 = v414;
  data418 = v415;
  struct Stack_double_* t420 = this417;
  double* t421 = data418;
  _Bool r422 = List_double___removeFromFront(&t420->stackList, t421);
  __retval419 = r422;
  _Bool t423 = __retval419;
  return t423;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v424, double v425) {
bb426:
  struct std__basic_ostream_char__std__char_traits_char__* this427;
  double __f428;
  struct std__basic_ostream_char__std__char_traits_char__* __retval429;
  this427 = v424;
  __f428 = v425;
  struct std__basic_ostream_char__std__char_traits_char__* t430 = this427;
  double t431 = __f428;
  struct std__basic_ostream_char__std__char_traits_char__* r432 = std__ostream__std__ostream___M_insert_double_(t430, t431);
  __retval429 = r432;
  struct std__basic_ostream_char__std__char_traits_char__* t433 = __retval429;
  return t433;
}

// function: _ZN5StackIdED2Ev
void Stack_double____Stack(struct Stack_double_* v434) {
bb435:
  struct Stack_double_* this436;
  this436 = v434;
  struct Stack_double_* t437 = this436;
  {
    List_double____List(&t437->stackList);
  }
  return;
}

// function: _ZN5StackIiED2Ev
void Stack_int____Stack(struct Stack_int_* v438) {
bb439:
  struct Stack_int_* this440;
  this440 = v438;
  struct Stack_int_* t441 = this440;
  {
    List_int____List(&t441->stackList);
  }
  return;
}

// function: main
int main() {
bb442:
  int __retval443;
  struct Stack_int_ intStack444;
  int popInteger445;
  struct Stack_double_ doubleStack446;
  double value447;
  double popdouble448;
  int c449 = 0;
  __retval443 = c449;
  Stack_int___Stack(&intStack444);
    char* cast450 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r451 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast450);
    struct std__basic_ostream_char__std__char_traits_char__* r452 = std__ostream__operator___std__ostream_____(r451, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int i453;
      int c454 = 0;
      i453 = c454;
      while (1) {
        int t456 = i453;
        int c457 = 4;
        _Bool c458 = ((t456 < c457)) ? 1 : 0;
        if (!c458) break;
          Stack_int___push(&intStack444, &i453);
          Stack_int___printStack___const(&intStack444);
      for_step455: ;
        int t459 = i453;
        int u460 = t459 + 1;
        i453 = u460;
      }
      while (1) {
        _Bool r461 = Stack_int___isStackEmpty___const(&intStack444);
        _Bool u462 = !r461;
        if (!u462) break;
          _Bool r463 = Stack_int___pop(&intStack444, &popInteger445);
          int t464 = popInteger445;
          struct std__basic_ostream_char__std__char_traits_char__* r465 = std__ostream__operator___2(&_ZSt4cout, t464);
          char* cast466 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* r467 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r465, cast466);
          struct std__basic_ostream_char__std__char_traits_char__* r468 = std__ostream__operator___std__ostream_____(r467, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          Stack_int___printStack___const(&intStack444);
      }
    Stack_double___Stack(&doubleStack446);
      double c469 = 0x1.199999999999ap0;
      value447 = c469;
      char* cast470 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r471 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast470);
      struct std__basic_ostream_char__std__char_traits_char__* r472 = std__ostream__operator___std__ostream_____(r471, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int j473;
        int c474 = 0;
        j473 = c474;
        while (1) {
          int t476 = j473;
          int c477 = 4;
          _Bool c478 = ((t476 < c477)) ? 1 : 0;
          if (!c478) break;
            Stack_double___push(&doubleStack446, &value447);
            Stack_double___printStack___const(&doubleStack446);
            double c479 = 0x1.199999999999ap0;
            double t480 = value447;
            double b481 = t480 + c479;
            value447 = b481;
        for_step475: ;
          int t482 = j473;
          int u483 = t482 + 1;
          j473 = u483;
        }
        while (1) {
          _Bool r484 = Stack_double___isStackEmpty___const(&doubleStack446);
          _Bool u485 = !r484;
          if (!u485) break;
            _Bool r486 = Stack_double___pop(&doubleStack446, &popdouble448);
            double t487 = popdouble448;
            struct std__basic_ostream_char__std__char_traits_char__* r488 = std__ostream__operator__(&_ZSt4cout, t487);
            char* cast489 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* r490 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r488, cast489);
            struct std__basic_ostream_char__std__char_traits_char__* r491 = std__ostream__operator___std__ostream_____(r490, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            Stack_double___printStack___const(&doubleStack446);
        }
      int c492 = 0;
      __retval443 = c492;
      int t493 = __retval443;
      int ret_val494 = t493;
      {
        Stack_double____Stack(&doubleStack446);
      }
      {
        Stack_int____Stack(&intStack444);
      }
      return ret_val494;
  int t495 = __retval443;
  return t495;
}

// function: _ZN4ListIiEC2Ev
void List_int___List(struct List_int_* v496) {
bb497:
  struct List_int_* this498;
  this498 = v496;
  struct List_int_* t499 = this498;
  struct ListNode_int_* c500 = ((void*)0);
  t499->firstPtr = c500;
  struct ListNode_int_* c501 = ((void*)0);
  t499->lastPtr = c501;
  return;
}

// function: _ZN4ListIiED2Ev
void List_int____List(struct List_int_* v502) {
bb503:
  struct List_int_* this504;
  this504 = v502;
  struct List_int_* t505 = this504;
    _Bool r506 = List_int___isEmpty___const(t505);
    _Bool u507 = !r506;
    if (u507) {
      struct ListNode_int_* currentPtr508;
      struct ListNode_int_* tempPtr509;
      char* cast510 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r511 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast510);
      struct ListNode_int_* t512 = t505->firstPtr;
      currentPtr508 = t512;
        while (1) {
          struct ListNode_int_* t513 = currentPtr508;
          struct ListNode_int_* c514 = ((void*)0);
          _Bool c515 = ((t513 != c514)) ? 1 : 0;
          if (!c515) break;
            struct ListNode_int_* t516 = currentPtr508;
            tempPtr509 = t516;
            struct ListNode_int_* t517 = tempPtr509;
            int t518 = t517->data;
            struct std__basic_ostream_char__std__char_traits_char__* r519 = std__ostream__operator___2(&_ZSt4cout, t518);
            char c520 = 10;
            struct std__basic_ostream_char__std__char_traits_char__* r521 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r519, c520);
            struct ListNode_int_* t522 = currentPtr508;
            struct ListNode_int_* t523 = t522->nextPtr;
            currentPtr508 = t523;
            struct ListNode_int_* t524 = tempPtr509;
            struct ListNode_int_* c525 = ((void*)0);
            _Bool c526 = ((t524 != c525)) ? 1 : 0;
            if (c526) {
              {
                void* cast527 = (void*)t524;
                unsigned long c528 = 16;
                operator_delete(cast527, c528);
              }
            }
        }
    }
  char* cast529 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r530 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast529);
  return;
}

// function: _ZNK4ListIiE7isEmptyEv
_Bool List_int___isEmpty___const(struct List_int_* v531) {
bb532:
  struct List_int_* this533;
  _Bool __retval534;
  this533 = v531;
  struct List_int_* t535 = this533;
  struct ListNode_int_* t536 = t535->firstPtr;
  struct ListNode_int_* c537 = ((void*)0);
  _Bool c538 = ((t536 == c537)) ? 1 : 0;
  __retval534 = c538;
  _Bool t539 = __retval534;
  return t539;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v540) {
bb541:
  struct std__ios_base* this542;
  long __retval543;
  this542 = v540;
  struct std__ios_base* t544 = this542;
  long t545 = t544->_M_width;
  __retval543 = t545;
  long t546 = __retval543;
  return t546;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v547, char v548) {
bb549:
  struct std__basic_ostream_char__std__char_traits_char__* __out550;
  char __c551;
  struct std__basic_ostream_char__std__char_traits_char__* __retval552;
  __out550 = v547;
  __c551 = v548;
    struct std__basic_ostream_char__std__char_traits_char__* t553 = __out550;
    void** v554 = (void**)t553;
    void* v555 = *((void**)v554);
    unsigned char* cast556 = (unsigned char*)v555;
    long c557 = -24;
    unsigned char* ptr558 = &(cast556)[c557];
    long* cast559 = (long*)ptr558;
    long t560 = *cast559;
    unsigned char* cast561 = (unsigned char*)t553;
    unsigned char* ptr562 = &(cast561)[t560];
    struct std__basic_ostream_char__std__char_traits_char__* cast563 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr562;
    struct std__ios_base* cast564 = (struct std__ios_base*)cast563;
    long r565 = std__ios_base__width___const(cast564);
    long c566 = 0;
    _Bool c567 = ((r565 != c566)) ? 1 : 0;
    if (c567) {
      struct std__basic_ostream_char__std__char_traits_char__* t568 = __out550;
      long c569 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r570 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t568, &__c551, c569);
      __retval552 = r570;
      struct std__basic_ostream_char__std__char_traits_char__* t571 = __retval552;
      return t571;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t572 = __out550;
  char t573 = __c551;
  struct std__basic_ostream_char__std__char_traits_char__* r574 = std__ostream__put(t572, t573);
  struct std__basic_ostream_char__std__char_traits_char__* t575 = __out550;
  __retval552 = t575;
  struct std__basic_ostream_char__std__char_traits_char__* t576 = __retval552;
  return t576;
}

// function: _ZN4ListIdEC2Ev
void List_double___List(struct List_double_* v577) {
bb578:
  struct List_double_* this579;
  this579 = v577;
  struct List_double_* t580 = this579;
  struct ListNode_double_* c581 = ((void*)0);
  t580->firstPtr = c581;
  struct ListNode_double_* c582 = ((void*)0);
  t580->lastPtr = c582;
  return;
}

// function: _ZN4ListIdED2Ev
void List_double____List(struct List_double_* v583) {
bb584:
  struct List_double_* this585;
  this585 = v583;
  struct List_double_* t586 = this585;
    _Bool r587 = List_double___isEmpty___const(t586);
    _Bool u588 = !r587;
    if (u588) {
      struct ListNode_double_* currentPtr589;
      struct ListNode_double_* tempPtr590;
      char* cast591 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r592 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast591);
      struct ListNode_double_* t593 = t586->firstPtr;
      currentPtr589 = t593;
        while (1) {
          struct ListNode_double_* t594 = currentPtr589;
          struct ListNode_double_* c595 = ((void*)0);
          _Bool c596 = ((t594 != c595)) ? 1 : 0;
          if (!c596) break;
            struct ListNode_double_* t597 = currentPtr589;
            tempPtr590 = t597;
            struct ListNode_double_* t598 = tempPtr590;
            double t599 = t598->data;
            struct std__basic_ostream_char__std__char_traits_char__* r600 = std__ostream__operator__(&_ZSt4cout, t599);
            char c601 = 10;
            struct std__basic_ostream_char__std__char_traits_char__* r602 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r600, c601);
            struct ListNode_double_* t603 = currentPtr589;
            struct ListNode_double_* t604 = t603->nextPtr;
            currentPtr589 = t604;
            struct ListNode_double_* t605 = tempPtr590;
            struct ListNode_double_* c606 = ((void*)0);
            _Bool c607 = ((t605 != c606)) ? 1 : 0;
            if (c607) {
              {
                void* cast608 = (void*)t605;
                unsigned long c609 = 16;
                operator_delete(cast608, c609);
              }
            }
        }
    }
  char* cast610 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r611 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast610);
  return;
}

// function: _ZNK4ListIdE7isEmptyEv
_Bool List_double___isEmpty___const(struct List_double_* v612) {
bb613:
  struct List_double_* this614;
  _Bool __retval615;
  this614 = v612;
  struct List_double_* t616 = this614;
  struct ListNode_double_* t617 = t616->firstPtr;
  struct ListNode_double_* c618 = ((void*)0);
  _Bool c619 = ((t617 == c618)) ? 1 : 0;
  __retval615 = c619;
  _Bool t620 = __retval615;
  return t620;
}

