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
struct ListNode_double_ { double data; struct ListNode_double_* nextPtr; };
struct ListNode_int_ { int data; struct ListNode_int_* nextPtr; };
struct List_double_ { struct ListNode_double_* firstPtr; struct ListNode_double_* lastPtr; };
struct List_int_ { struct ListNode_int_* firstPtr; struct ListNode_int_* lastPtr; };
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Enter one of the following:\n";
char _str_1[36] = "  1 to insert at beginning of list\n";
char _str_2[30] = "  2 to insert at end of list\n";
char _str_3[38] = "  3 to delete from beginning of list\n";
char _str_4[32] = "  4 to delete from end of list\n";
char _str_5[28] = "  5 to end list processing\n";
char _str_6[8] = "integer";
char _str_7[7] = "double";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
char _str_10[22] = "Destroying nodes ...\n";
char _str_11[22] = "All nodes destroyed\n\n";
char _str_12[19] = "Testing a List of ";
char _str_13[9] = " values\n";
char _str_14[3] = "? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_15[7] = "Enter ";
char _str_16[3] = ": ";
char _str_17[20] = " removed from list\n";
char _str_18[16] = "End list test\n\n";
char _str_19[20] = "The list is empty\n\n";
char _str_20[14] = "The list is: ";
char _str_21[3] = "\n\n";
void instructions();
void List_int___List(struct List_int_* p0);
void ListNode_int___ListNode(struct ListNode_int_* p0, int* p1);
struct ListNode_int_* List_int___getNewNode(struct List_int_* p0, int* p1);
void List_int___insertAtFront(struct List_int_* p0, int* p1);
void List_int___print___const(struct List_int_* p0);
void List_int___insertAtBack(struct List_int_* p0, int* p1);
_Bool List_int___removeFromFront(struct List_int_* p0, int* p1);
_Bool List_int___removeFromBack(struct List_int_* p0, int* p1);
void void_testList_int_(struct List_int_* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void List_double___List(struct List_double_* p0);
void ListNode_double___ListNode(struct ListNode_double_* p0, double* p1);
struct ListNode_double_* List_double___getNewNode(struct List_double_* p0, double* p1);
void List_double___insertAtFront(struct List_double_* p0, double* p1);
void List_double___print___const(struct List_double_* p0);
void List_double___insertAtBack(struct List_double_* p0, double* p1);
_Bool List_double___removeFromFront(struct List_double_* p0, double* p1);
_Bool List_double___removeFromBack(struct List_double_* p0, double* p1);
void void_testList_double_(struct List_double_* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void List_double____List(struct List_double_* p0);
void List_int____List(struct List_int_* p0);
int main();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
_Bool List_int___isEmpty___const(struct List_int_* p0);
_Bool List_double___isEmpty___const(struct List_double_* p0);

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z12instructionsv
void instructions() {
bb0:
  char* cast1 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std2;
  __VERIFIER_nondet_memory(&std2, sizeof(std2));
  char* cast3 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  char* cast5 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  char* cast7 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  char* cast9 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  char* cast11 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  return;
}

// function: _ZN4ListIiEC2Ev
void List_int___List(struct List_int_* v13) {
bb14:
  struct List_int_* this15;
  this15 = v13;
  struct List_int_* t16 = this15;
  struct ListNode_int_* c17 = ((void*)0);
  t16->firstPtr = c17;
  struct ListNode_int_* c18 = ((void*)0);
  t16->lastPtr = c18;
  return;
}

// function: _ZN8ListNodeIiEC2ERKi
void ListNode_int___ListNode(struct ListNode_int_* v19, int* v20) {
bb21:
  struct ListNode_int_* this22;
  int* info23;
  this22 = v19;
  info23 = v20;
  struct ListNode_int_* t24 = this22;
  int* t25 = info23;
  int t26 = *t25;
  t24->data = t26;
  struct ListNode_int_* c27 = ((void*)0);
  t24->nextPtr = c27;
  return;
}

// function: _ZN4ListIiE10getNewNodeERKi
struct ListNode_int_* List_int___getNewNode(struct List_int_* v28, int* v29) {
bb30:
  struct List_int_* this31;
  int* value32;
  struct ListNode_int_* __retval33;
  struct ListNode_int_* __new_result34;
  this31 = v28;
  value32 = v29;
  struct List_int_* t35 = this31;
  unsigned long c36 = 16;
  void* r37 = operator_new(c36);
    struct ListNode_int_* cast38 = (struct ListNode_int_*)r37;
    __new_result34 = cast38;
    int* t39 = value32;
    ListNode_int___ListNode(cast38, t39);
  struct ListNode_int_* t40 = __new_result34;
  __retval33 = t40;
  struct ListNode_int_* t41 = __retval33;
  return t41;
}

// function: _ZN4ListIiE13insertAtFrontERKi
void List_int___insertAtFront(struct List_int_* v42, int* v43) {
bb44:
  struct List_int_* this45;
  int* value46;
  struct ListNode_int_* newPtr47;
  this45 = v42;
  value46 = v43;
  struct List_int_* t48 = this45;
  int* t49 = value46;
  struct ListNode_int_* r50 = List_int___getNewNode(t48, t49);
  newPtr47 = r50;
    _Bool r51 = List_int___isEmpty___const(t48);
    if (r51) {
      struct ListNode_int_* t52 = newPtr47;
      t48->lastPtr = t52;
      t48->firstPtr = t52;
    } else {
      struct ListNode_int_* t53 = t48->firstPtr;
      struct ListNode_int_* t54 = newPtr47;
      t54->nextPtr = t53;
      struct ListNode_int_* t55 = newPtr47;
      t48->firstPtr = t55;
    }
  return;
}

// function: _ZNK4ListIiE5printEv
void List_int___print___const(struct List_int_* v56) {
bb57:
  struct List_int_* this58;
  struct ListNode_int_* currentPtr59;
  this58 = v56;
  struct List_int_* t60 = this58;
    _Bool r61 = List_int___isEmpty___const(t60);
    if (r61) {
      char* cast62 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
      return;
    }
  struct ListNode_int_* t64 = t60->firstPtr;
  currentPtr59 = t64;
  char* cast65 = (char*)&(_str_20);
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
    while (1) {
      struct ListNode_int_* t67 = currentPtr59;
      struct ListNode_int_* c68 = ((void*)0);
      _Bool c69 = ((t67 != c68)) ? 1 : 0;
      if (!c69) break;
        struct ListNode_int_* t70 = currentPtr59;
        int t71 = t70->data;
        struct std__basic_ostream_char__std__char_traits_char__* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        char c73 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        struct ListNode_int_* t75 = currentPtr59;
        struct ListNode_int_* t76 = t75->nextPtr;
        currentPtr59 = t76;
    }
  char* cast77 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* std78;
  __VERIFIER_nondet_memory(&std78, sizeof(std78));
  return;
}

// function: _ZN4ListIiE12insertAtBackERKi
void List_int___insertAtBack(struct List_int_* v79, int* v80) {
bb81:
  struct List_int_* this82;
  int* value83;
  struct ListNode_int_* newPtr84;
  this82 = v79;
  value83 = v80;
  struct List_int_* t85 = this82;
  int* t86 = value83;
  struct ListNode_int_* r87 = List_int___getNewNode(t85, t86);
  newPtr84 = r87;
    _Bool r88 = List_int___isEmpty___const(t85);
    if (r88) {
      struct ListNode_int_* t89 = newPtr84;
      t85->lastPtr = t89;
      t85->firstPtr = t89;
    } else {
      struct ListNode_int_* t90 = newPtr84;
      struct ListNode_int_* t91 = t85->lastPtr;
      t91->nextPtr = t90;
      struct ListNode_int_* t92 = newPtr84;
      t85->lastPtr = t92;
    }
  return;
}

// function: _ZN4ListIiE15removeFromFrontERi
_Bool List_int___removeFromFront(struct List_int_* v93, int* v94) {
bb95:
  struct List_int_* this96;
  int* value97;
  _Bool __retval98;
  this96 = v93;
  value97 = v94;
  struct List_int_* t99 = this96;
    _Bool r100 = List_int___isEmpty___const(t99);
    if (r100) {
      _Bool c101 = 0;
      __retval98 = c101;
      _Bool t102 = __retval98;
      return t102;
    } else {
      struct ListNode_int_* tempPtr103;
      struct ListNode_int_* t104 = t99->firstPtr;
      tempPtr103 = t104;
        struct ListNode_int_* t105 = t99->firstPtr;
        struct ListNode_int_* t106 = t99->lastPtr;
        _Bool c107 = ((t105 == t106)) ? 1 : 0;
        if (c107) {
          struct ListNode_int_* c108 = ((void*)0);
          t99->lastPtr = c108;
          t99->firstPtr = c108;
        } else {
          struct ListNode_int_* t109 = t99->firstPtr;
          struct ListNode_int_* t110 = t109->nextPtr;
          t99->firstPtr = t110;
        }
      struct ListNode_int_* t111 = tempPtr103;
      int t112 = t111->data;
      int* t113 = value97;
      *t113 = t112;
      struct ListNode_int_* t114 = tempPtr103;
      struct ListNode_int_* c115 = ((void*)0);
      _Bool c116 = ((t114 != c115)) ? 1 : 0;
      if (c116) {
        {
          void* cast117 = (void*)t114;
          unsigned long c118 = 16;
          operator_delete_2(cast117, c118);
        }
      }
      _Bool c119 = 1;
      __retval98 = c119;
      _Bool t120 = __retval98;
      return t120;
    }
  abort();
}

// function: _ZN4ListIiE14removeFromBackERi
_Bool List_int___removeFromBack(struct List_int_* v121, int* v122) {
bb123:
  struct List_int_* this124;
  int* value125;
  _Bool __retval126;
  this124 = v121;
  value125 = v122;
  struct List_int_* t127 = this124;
    _Bool r128 = List_int___isEmpty___const(t127);
    if (r128) {
      _Bool c129 = 0;
      __retval126 = c129;
      _Bool t130 = __retval126;
      return t130;
    } else {
      struct ListNode_int_* tempPtr131;
      struct ListNode_int_* t132 = t127->lastPtr;
      tempPtr131 = t132;
        struct ListNode_int_* t133 = t127->firstPtr;
        struct ListNode_int_* t134 = t127->lastPtr;
        _Bool c135 = ((t133 == t134)) ? 1 : 0;
        if (c135) {
          struct ListNode_int_* c136 = ((void*)0);
          t127->lastPtr = c136;
          t127->firstPtr = c136;
        } else {
          struct ListNode_int_* currentPtr137;
          struct ListNode_int_* t138 = t127->firstPtr;
          currentPtr137 = t138;
            while (1) {
              struct ListNode_int_* t139 = currentPtr137;
              struct ListNode_int_* t140 = t139->nextPtr;
              struct ListNode_int_* t141 = t127->lastPtr;
              _Bool c142 = ((t140 != t141)) ? 1 : 0;
              if (!c142) break;
              struct ListNode_int_* t143 = currentPtr137;
              struct ListNode_int_* t144 = t143->nextPtr;
              currentPtr137 = t144;
            }
          struct ListNode_int_* t145 = currentPtr137;
          t127->lastPtr = t145;
          struct ListNode_int_* c146 = ((void*)0);
          struct ListNode_int_* t147 = currentPtr137;
          t147->nextPtr = c146;
        }
      struct ListNode_int_* t148 = tempPtr131;
      int t149 = t148->data;
      int* t150 = value125;
      *t150 = t149;
      struct ListNode_int_* t151 = tempPtr131;
      struct ListNode_int_* c152 = ((void*)0);
      _Bool c153 = ((t151 != c152)) ? 1 : 0;
      if (c153) {
        {
          void* cast154 = (void*)t151;
          unsigned long c155 = 16;
          operator_delete_2(cast154, c155);
        }
      }
      _Bool c156 = 1;
      __retval126 = c156;
      _Bool t157 = __retval126;
      return t157;
    }
  abort();
}

// function: _Z8testListIiEvR4ListIT_ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
void void_testList_int_(struct List_int_* v158, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v159) {
bb160:
  struct List_int_* listObject161;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* typeName162;
  int choice163;
  int value164;
  listObject161 = v158;
  typeName162 = v159;
  char* cast165 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* std166;
  __VERIFIER_nondet_memory(&std166, sizeof(std166));
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t167 = typeName162;
  struct std__basic_ostream_char__std__char_traits_char__* std168;
  __VERIFIER_nondet_memory(&std168, sizeof(std168));
  char* cast169 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* std170;
  __VERIFIER_nondet_memory(&std170, sizeof(std170));
  instructions();
    do {
        char* cast171 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std172;
        __VERIFIER_nondet_memory(&std172, sizeof(std172));
        struct std__basic_istream_char__std__char_traits_char__* std173;
        __VERIFIER_nondet_memory(&std173, sizeof(std173));
          int t174 = choice163;
          switch (t174) {
          case 1:
            char* cast175 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* std176;
            __VERIFIER_nondet_memory(&std176, sizeof(std176));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t177 = typeName162;
            struct std__basic_ostream_char__std__char_traits_char__* std178;
            __VERIFIER_nondet_memory(&std178, sizeof(std178));
            char* cast179 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* std180;
            __VERIFIER_nondet_memory(&std180, sizeof(std180));
            struct std__basic_istream_char__std__char_traits_char__* std181;
            __VERIFIER_nondet_memory(&std181, sizeof(std181));
            struct List_int_* t182 = listObject161;
            List_int___insertAtFront(t182, &value164);
            struct List_int_* t183 = listObject161;
            List_int___print___const(t183);
            break;
          case 2:
            char* cast184 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* std185;
            __VERIFIER_nondet_memory(&std185, sizeof(std185));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t186 = typeName162;
            struct std__basic_ostream_char__std__char_traits_char__* std187;
            __VERIFIER_nondet_memory(&std187, sizeof(std187));
            char* cast188 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* std189;
            __VERIFIER_nondet_memory(&std189, sizeof(std189));
            struct std__basic_istream_char__std__char_traits_char__* std190;
            __VERIFIER_nondet_memory(&std190, sizeof(std190));
            struct List_int_* t191 = listObject161;
            List_int___insertAtBack(t191, &value164);
            struct List_int_* t192 = listObject161;
            List_int___print___const(t192);
            break;
          case 3:
              struct List_int_* t193 = listObject161;
              _Bool r194 = List_int___removeFromFront(t193, &value164);
              if (r194) {
                int t195 = value164;
                struct std__basic_ostream_char__std__char_traits_char__* std196;
                __VERIFIER_nondet_memory(&std196, sizeof(std196));
                char* cast197 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* std198;
                __VERIFIER_nondet_memory(&std198, sizeof(std198));
              }
            struct List_int_* t199 = listObject161;
            List_int___print___const(t199);
            break;
          case 4:
              struct List_int_* t200 = listObject161;
              _Bool r201 = List_int___removeFromBack(t200, &value164);
              if (r201) {
                int t202 = value164;
                struct std__basic_ostream_char__std__char_traits_char__* std203;
                __VERIFIER_nondet_memory(&std203, sizeof(std203));
                char* cast204 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* std205;
                __VERIFIER_nondet_memory(&std205, sizeof(std205));
              }
            struct List_int_* t206 = listObject161;
            List_int___print___const(t206);
            break;
          }
      int t207 = choice163;
      int c208 = 5;
      _Bool c209 = ((t207 != c208)) ? 1 : 0;
      if (!c209) break;
    } while (1);
  char* cast210 = (char*)&(_str_18);
  struct std__basic_ostream_char__std__char_traits_char__* std211;
  __VERIFIER_nondet_memory(&std211, sizeof(std211));
  return;
}

// function: _ZN4ListIdEC2Ev
void List_double___List(struct List_double_* v212) {
bb213:
  struct List_double_* this214;
  this214 = v212;
  struct List_double_* t215 = this214;
  struct ListNode_double_* c216 = ((void*)0);
  t215->firstPtr = c216;
  struct ListNode_double_* c217 = ((void*)0);
  t215->lastPtr = c217;
  return;
}

// function: _ZN8ListNodeIdEC2ERKd
void ListNode_double___ListNode(struct ListNode_double_* v218, double* v219) {
bb220:
  struct ListNode_double_* this221;
  double* info222;
  this221 = v218;
  info222 = v219;
  struct ListNode_double_* t223 = this221;
  double* t224 = info222;
  double t225 = *t224;
  t223->data = t225;
  struct ListNode_double_* c226 = ((void*)0);
  t223->nextPtr = c226;
  return;
}

// function: _ZN4ListIdE10getNewNodeERKd
struct ListNode_double_* List_double___getNewNode(struct List_double_* v227, double* v228) {
bb229:
  struct List_double_* this230;
  double* value231;
  struct ListNode_double_* __retval232;
  struct ListNode_double_* __new_result233;
  this230 = v227;
  value231 = v228;
  struct List_double_* t234 = this230;
  unsigned long c235 = 16;
  void* r236 = operator_new(c235);
    struct ListNode_double_* cast237 = (struct ListNode_double_*)r236;
    __new_result233 = cast237;
    double* t238 = value231;
    ListNode_double___ListNode(cast237, t238);
  struct ListNode_double_* t239 = __new_result233;
  __retval232 = t239;
  struct ListNode_double_* t240 = __retval232;
  return t240;
}

// function: _ZN4ListIdE13insertAtFrontERKd
void List_double___insertAtFront(struct List_double_* v241, double* v242) {
bb243:
  struct List_double_* this244;
  double* value245;
  struct ListNode_double_* newPtr246;
  this244 = v241;
  value245 = v242;
  struct List_double_* t247 = this244;
  double* t248 = value245;
  struct ListNode_double_* r249 = List_double___getNewNode(t247, t248);
  newPtr246 = r249;
    _Bool r250 = List_double___isEmpty___const(t247);
    if (r250) {
      struct ListNode_double_* t251 = newPtr246;
      t247->lastPtr = t251;
      t247->firstPtr = t251;
    } else {
      struct ListNode_double_* t252 = t247->firstPtr;
      struct ListNode_double_* t253 = newPtr246;
      t253->nextPtr = t252;
      struct ListNode_double_* t254 = newPtr246;
      t247->firstPtr = t254;
    }
  return;
}

// function: _ZNK4ListIdE5printEv
void List_double___print___const(struct List_double_* v255) {
bb256:
  struct List_double_* this257;
  struct ListNode_double_* currentPtr258;
  this257 = v255;
  struct List_double_* t259 = this257;
    _Bool r260 = List_double___isEmpty___const(t259);
    if (r260) {
      char* cast261 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* std262;
      __VERIFIER_nondet_memory(&std262, sizeof(std262));
      return;
    }
  struct ListNode_double_* t263 = t259->firstPtr;
  currentPtr258 = t263;
  char* cast264 = (char*)&(_str_20);
  struct std__basic_ostream_char__std__char_traits_char__* std265;
  __VERIFIER_nondet_memory(&std265, sizeof(std265));
    while (1) {
      struct ListNode_double_* t266 = currentPtr258;
      struct ListNode_double_* c267 = ((void*)0);
      _Bool c268 = ((t266 != c267)) ? 1 : 0;
      if (!c268) break;
        struct ListNode_double_* t269 = currentPtr258;
        double t270 = t269->data;
        struct std__basic_ostream_char__std__char_traits_char__* std271;
        __VERIFIER_nondet_memory(&std271, sizeof(std271));
        char c272 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std273;
        __VERIFIER_nondet_memory(&std273, sizeof(std273));
        struct ListNode_double_* t274 = currentPtr258;
        struct ListNode_double_* t275 = t274->nextPtr;
        currentPtr258 = t275;
    }
  char* cast276 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* std277;
  __VERIFIER_nondet_memory(&std277, sizeof(std277));
  return;
}

// function: _ZN4ListIdE12insertAtBackERKd
void List_double___insertAtBack(struct List_double_* v278, double* v279) {
bb280:
  struct List_double_* this281;
  double* value282;
  struct ListNode_double_* newPtr283;
  this281 = v278;
  value282 = v279;
  struct List_double_* t284 = this281;
  double* t285 = value282;
  struct ListNode_double_* r286 = List_double___getNewNode(t284, t285);
  newPtr283 = r286;
    _Bool r287 = List_double___isEmpty___const(t284);
    if (r287) {
      struct ListNode_double_* t288 = newPtr283;
      t284->lastPtr = t288;
      t284->firstPtr = t288;
    } else {
      struct ListNode_double_* t289 = newPtr283;
      struct ListNode_double_* t290 = t284->lastPtr;
      t290->nextPtr = t289;
      struct ListNode_double_* t291 = newPtr283;
      t284->lastPtr = t291;
    }
  return;
}

// function: _ZN4ListIdE15removeFromFrontERd
_Bool List_double___removeFromFront(struct List_double_* v292, double* v293) {
bb294:
  struct List_double_* this295;
  double* value296;
  _Bool __retval297;
  this295 = v292;
  value296 = v293;
  struct List_double_* t298 = this295;
    _Bool r299 = List_double___isEmpty___const(t298);
    if (r299) {
      _Bool c300 = 0;
      __retval297 = c300;
      _Bool t301 = __retval297;
      return t301;
    } else {
      struct ListNode_double_* tempPtr302;
      struct ListNode_double_* t303 = t298->firstPtr;
      tempPtr302 = t303;
        struct ListNode_double_* t304 = t298->firstPtr;
        struct ListNode_double_* t305 = t298->lastPtr;
        _Bool c306 = ((t304 == t305)) ? 1 : 0;
        if (c306) {
          struct ListNode_double_* c307 = ((void*)0);
          t298->lastPtr = c307;
          t298->firstPtr = c307;
        } else {
          struct ListNode_double_* t308 = t298->firstPtr;
          struct ListNode_double_* t309 = t308->nextPtr;
          t298->firstPtr = t309;
        }
      struct ListNode_double_* t310 = tempPtr302;
      double t311 = t310->data;
      double* t312 = value296;
      *t312 = t311;
      struct ListNode_double_* t313 = tempPtr302;
      struct ListNode_double_* c314 = ((void*)0);
      _Bool c315 = ((t313 != c314)) ? 1 : 0;
      if (c315) {
        {
          void* cast316 = (void*)t313;
          unsigned long c317 = 16;
          operator_delete_2(cast316, c317);
        }
      }
      _Bool c318 = 1;
      __retval297 = c318;
      _Bool t319 = __retval297;
      return t319;
    }
  abort();
}

// function: _ZN4ListIdE14removeFromBackERd
_Bool List_double___removeFromBack(struct List_double_* v320, double* v321) {
bb322:
  struct List_double_* this323;
  double* value324;
  _Bool __retval325;
  this323 = v320;
  value324 = v321;
  struct List_double_* t326 = this323;
    _Bool r327 = List_double___isEmpty___const(t326);
    if (r327) {
      _Bool c328 = 0;
      __retval325 = c328;
      _Bool t329 = __retval325;
      return t329;
    } else {
      struct ListNode_double_* tempPtr330;
      struct ListNode_double_* t331 = t326->lastPtr;
      tempPtr330 = t331;
        struct ListNode_double_* t332 = t326->firstPtr;
        struct ListNode_double_* t333 = t326->lastPtr;
        _Bool c334 = ((t332 == t333)) ? 1 : 0;
        if (c334) {
          struct ListNode_double_* c335 = ((void*)0);
          t326->lastPtr = c335;
          t326->firstPtr = c335;
        } else {
          struct ListNode_double_* currentPtr336;
          struct ListNode_double_* t337 = t326->firstPtr;
          currentPtr336 = t337;
            while (1) {
              struct ListNode_double_* t338 = currentPtr336;
              struct ListNode_double_* t339 = t338->nextPtr;
              struct ListNode_double_* t340 = t326->lastPtr;
              _Bool c341 = ((t339 != t340)) ? 1 : 0;
              if (!c341) break;
              struct ListNode_double_* t342 = currentPtr336;
              struct ListNode_double_* t343 = t342->nextPtr;
              currentPtr336 = t343;
            }
          struct ListNode_double_* t344 = currentPtr336;
          t326->lastPtr = t344;
          struct ListNode_double_* c345 = ((void*)0);
          struct ListNode_double_* t346 = currentPtr336;
          t346->nextPtr = c345;
        }
      struct ListNode_double_* t347 = tempPtr330;
      double t348 = t347->data;
      double* t349 = value324;
      *t349 = t348;
      struct ListNode_double_* t350 = tempPtr330;
      struct ListNode_double_* c351 = ((void*)0);
      _Bool c352 = ((t350 != c351)) ? 1 : 0;
      if (c352) {
        {
          void* cast353 = (void*)t350;
          unsigned long c354 = 16;
          operator_delete_2(cast353, c354);
        }
      }
      _Bool c355 = 1;
      __retval325 = c355;
      _Bool t356 = __retval325;
      return t356;
    }
  abort();
}

// function: _Z8testListIdEvR4ListIT_ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
void void_testList_double_(struct List_double_* v357, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v358) {
bb359:
  struct List_double_* listObject360;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* typeName361;
  int choice362;
  double value363;
  listObject360 = v357;
  typeName361 = v358;
  char* cast364 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* std365;
  __VERIFIER_nondet_memory(&std365, sizeof(std365));
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t366 = typeName361;
  struct std__basic_ostream_char__std__char_traits_char__* std367;
  __VERIFIER_nondet_memory(&std367, sizeof(std367));
  char* cast368 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* std369;
  __VERIFIER_nondet_memory(&std369, sizeof(std369));
  instructions();
    do {
        char* cast370 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std371;
        __VERIFIER_nondet_memory(&std371, sizeof(std371));
        struct std__basic_istream_char__std__char_traits_char__* std372;
        __VERIFIER_nondet_memory(&std372, sizeof(std372));
          int t373 = choice362;
          switch (t373) {
          case 1:
            char* cast374 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* std375;
            __VERIFIER_nondet_memory(&std375, sizeof(std375));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t376 = typeName361;
            struct std__basic_ostream_char__std__char_traits_char__* std377;
            __VERIFIER_nondet_memory(&std377, sizeof(std377));
            char* cast378 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* std379;
            __VERIFIER_nondet_memory(&std379, sizeof(std379));
            struct std__basic_istream_char__std__char_traits_char__* std380;
            __VERIFIER_nondet_memory(&std380, sizeof(std380));
            struct List_double_* t381 = listObject360;
            List_double___insertAtFront(t381, &value363);
            struct List_double_* t382 = listObject360;
            List_double___print___const(t382);
            break;
          case 2:
            char* cast383 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* std384;
            __VERIFIER_nondet_memory(&std384, sizeof(std384));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t385 = typeName361;
            struct std__basic_ostream_char__std__char_traits_char__* std386;
            __VERIFIER_nondet_memory(&std386, sizeof(std386));
            char* cast387 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* std388;
            __VERIFIER_nondet_memory(&std388, sizeof(std388));
            struct std__basic_istream_char__std__char_traits_char__* std389;
            __VERIFIER_nondet_memory(&std389, sizeof(std389));
            struct List_double_* t390 = listObject360;
            List_double___insertAtBack(t390, &value363);
            struct List_double_* t391 = listObject360;
            List_double___print___const(t391);
            break;
          case 3:
              struct List_double_* t392 = listObject360;
              _Bool r393 = List_double___removeFromFront(t392, &value363);
              if (r393) {
                double t394 = value363;
                struct std__basic_ostream_char__std__char_traits_char__* std395;
                __VERIFIER_nondet_memory(&std395, sizeof(std395));
                char* cast396 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* std397;
                __VERIFIER_nondet_memory(&std397, sizeof(std397));
              }
            struct List_double_* t398 = listObject360;
            List_double___print___const(t398);
            break;
          case 4:
              struct List_double_* t399 = listObject360;
              _Bool r400 = List_double___removeFromBack(t399, &value363);
              if (r400) {
                double t401 = value363;
                struct std__basic_ostream_char__std__char_traits_char__* std402;
                __VERIFIER_nondet_memory(&std402, sizeof(std402));
                char* cast403 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* std404;
                __VERIFIER_nondet_memory(&std404, sizeof(std404));
              }
            struct List_double_* t405 = listObject360;
            List_double___print___const(t405);
            break;
          }
      int t406 = choice362;
      int c407 = 5;
      _Bool c408 = ((t406 != c407)) ? 1 : 0;
      if (!c408) break;
    } while (1);
  char* cast409 = (char*)&(_str_18);
  struct std__basic_ostream_char__std__char_traits_char__* std410;
  __VERIFIER_nondet_memory(&std410, sizeof(std410));
  return;
}

// function: _ZN4ListIdED2Ev
void List_double____List(struct List_double_* v411) {
bb412:
  struct List_double_* this413;
  this413 = v411;
  struct List_double_* t414 = this413;
    _Bool r415 = List_double___isEmpty___const(t414);
    _Bool u416 = !r415;
    if (u416) {
      struct ListNode_double_* currentPtr417;
      struct ListNode_double_* tempPtr418;
      char* cast419 = (char*)&(_str_10);
      struct std__basic_ostream_char__std__char_traits_char__* std420;
      __VERIFIER_nondet_memory(&std420, sizeof(std420));
      struct ListNode_double_* t421 = t414->firstPtr;
      currentPtr417 = t421;
        while (1) {
          struct ListNode_double_* t422 = currentPtr417;
          struct ListNode_double_* c423 = ((void*)0);
          _Bool c424 = ((t422 != c423)) ? 1 : 0;
          if (!c424) break;
            struct ListNode_double_* t425 = currentPtr417;
            tempPtr418 = t425;
            struct ListNode_double_* t426 = tempPtr418;
            double t427 = t426->data;
            struct std__basic_ostream_char__std__char_traits_char__* std428;
            __VERIFIER_nondet_memory(&std428, sizeof(std428));
            char c429 = 10;
            struct std__basic_ostream_char__std__char_traits_char__* std430;
            __VERIFIER_nondet_memory(&std430, sizeof(std430));
            struct ListNode_double_* t431 = currentPtr417;
            struct ListNode_double_* t432 = t431->nextPtr;
            currentPtr417 = t432;
            struct ListNode_double_* t433 = tempPtr418;
            struct ListNode_double_* c434 = ((void*)0);
            _Bool c435 = ((t433 != c434)) ? 1 : 0;
            if (c435) {
              {
                void* cast436 = (void*)t433;
                unsigned long c437 = 16;
                operator_delete_2(cast436, c437);
              }
            }
        }
    }
  char* cast438 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std439;
  __VERIFIER_nondet_memory(&std439, sizeof(std439));
  return;
}

// function: _ZN4ListIiED2Ev
void List_int____List(struct List_int_* v440) {
bb441:
  struct List_int_* this442;
  this442 = v440;
  struct List_int_* t443 = this442;
    _Bool r444 = List_int___isEmpty___const(t443);
    _Bool u445 = !r444;
    if (u445) {
      struct ListNode_int_* currentPtr446;
      struct ListNode_int_* tempPtr447;
      char* cast448 = (char*)&(_str_10);
      struct std__basic_ostream_char__std__char_traits_char__* std449;
      __VERIFIER_nondet_memory(&std449, sizeof(std449));
      struct ListNode_int_* t450 = t443->firstPtr;
      currentPtr446 = t450;
        while (1) {
          struct ListNode_int_* t451 = currentPtr446;
          struct ListNode_int_* c452 = ((void*)0);
          _Bool c453 = ((t451 != c452)) ? 1 : 0;
          if (!c453) break;
            struct ListNode_int_* t454 = currentPtr446;
            tempPtr447 = t454;
            struct ListNode_int_* t455 = tempPtr447;
            int t456 = t455->data;
            struct std__basic_ostream_char__std__char_traits_char__* std457;
            __VERIFIER_nondet_memory(&std457, sizeof(std457));
            char c458 = 10;
            struct std__basic_ostream_char__std__char_traits_char__* std459;
            __VERIFIER_nondet_memory(&std459, sizeof(std459));
            struct ListNode_int_* t460 = currentPtr446;
            struct ListNode_int_* t461 = t460->nextPtr;
            currentPtr446 = t461;
            struct ListNode_int_* t462 = tempPtr447;
            struct ListNode_int_* c463 = ((void*)0);
            _Bool c464 = ((t462 != c463)) ? 1 : 0;
            if (c464) {
              {
                void* cast465 = (void*)t462;
                unsigned long c466 = 16;
                operator_delete_2(cast465, c466);
              }
            }
        }
    }
  char* cast467 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std468;
  __VERIFIER_nondet_memory(&std468, sizeof(std468));
  return;
}

// function: main
int main() {
bb469:
  int __retval470;
  struct List_int_ integerList471;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0472;
  struct std__allocator_char_ ref_tmp1473;
  struct List_double_ doubleList474;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2475;
  struct std__allocator_char_ ref_tmp3476;
  int c477 = 0;
  __retval470 = c477;
  List_int___List(&integerList471);
    char* cast478 = (char*)&(_str_6);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp1473, sizeof(ref_tmp1473));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&ref_tmp0472, sizeof(ref_tmp0472));
      __VERIFIER_nondet_memory(cast478, sizeof(*cast478));
      __VERIFIER_nondet_memory(&ref_tmp1473, sizeof(ref_tmp1473));
        void_testList_int_(&integerList471, &ref_tmp0472);
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp0472, sizeof(ref_tmp0472));
      }
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp1473, sizeof(ref_tmp1473));
    }
    List_double___List(&doubleList474);
      char* cast479 = (char*)&(_str_7);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp3476, sizeof(ref_tmp3476));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ref_tmp2475, sizeof(ref_tmp2475));
        __VERIFIER_nondet_memory(cast479, sizeof(*cast479));
        __VERIFIER_nondet_memory(&ref_tmp3476, sizeof(ref_tmp3476));
          void_testList_double_(&doubleList474, &ref_tmp2475);
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp2475, sizeof(ref_tmp2475));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp3476, sizeof(ref_tmp3476));
      }
      int c480 = 0;
      __retval470 = c480;
      int t481 = __retval470;
      int ret_val482 = t481;
      {
        List_double____List(&doubleList474);
      }
      {
        List_int____List(&integerList471);
      }
      return ret_val482;
  int t483 = __retval470;
  return t483;
}

// function: _ZNK4ListIiE7isEmptyEv
_Bool List_int___isEmpty___const(struct List_int_* v484) {
bb485:
  struct List_int_* this486;
  _Bool __retval487;
  this486 = v484;
  struct List_int_* t488 = this486;
  struct ListNode_int_* t489 = t488->firstPtr;
  struct ListNode_int_* c490 = ((void*)0);
  _Bool c491 = ((t489 == c490)) ? 1 : 0;
  __retval487 = c491;
  _Bool t492 = __retval487;
  return t492;
}

// function: _ZNK4ListIdE7isEmptyEv
_Bool List_double___isEmpty___const(struct List_double_* v493) {
bb494:
  struct List_double_* this495;
  _Bool __retval496;
  this495 = v493;
  struct List_double_* t497 = this495;
  struct ListNode_double_* t498 = t497->firstPtr;
  struct ListNode_double_* c499 = ((void*)0);
  _Bool c500 = ((t498 == c499)) ? 1 : 0;
  __retval496 = c500;
  _Bool t501 = __retval496;
  return t501;
}

