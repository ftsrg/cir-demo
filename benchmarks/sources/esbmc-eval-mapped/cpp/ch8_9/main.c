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
struct Array { int __field0; int* __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[28] = "Size of array integers1 is ";
char _str_1[30] = "\nArray after initialization:\n";
char _str_2[29] = "\nSize of array integers2 is ";
char _str_3[21] = "\nInput 17 integers:\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_4[35] = "\nAfter input, the arrays contain:\n";
char _str_5[12] = "integers1:\n";
char _str_6[12] = "integers2:\n";
char _str_7[37] = "\nEvaluating: integers1 != integers2\n";
char _str_8[39] = "integers1 and integers2 are not equal\n";
char _str_9[29] = "\nSize of array integers3 is ";
char _str_10[36] = "\nAssigning integers2 to integers1:\n";
char _str_11[37] = "\nEvaluating: integers1 == integers2\n";
char _str_12[35] = "integers1 and integers2 are equal\n";
char _str_13[18] = "\nintegers1[5] is ";
char _str_14[34] = "\n\nAssigning 1000 to integers1[5]\n";
char _str_15[41] = "\nAttempt to assign 1000 to integers1[15]";
extern void Array__Array_2(struct Array* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct Array* p1);
extern int Array__getSize___const(struct Array* p0);
extern struct std__basic_istream_char__std__char_traits_char__* operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, struct Array* p1);
_Bool Array__operator___Array_const___const_2(struct Array* p0, struct Array* p1);
extern void Array__Array(struct Array* p0, struct Array* p1);
extern struct Array* Array__operator_(struct Array* p0, struct Array* p1);
extern _Bool Array__operator___Array_const___const(struct Array* p0, struct Array* p1);
extern int* Array__operator__(struct Array* p0, int p1);
void Array___Array(struct Array* p0) {}
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZNK5ArrayneERKS_
_Bool Array__operator___Array_const___const_2(struct Array* v0, struct Array* v1) {
bb2:
  struct Array* this3;
  struct Array* right4;
  _Bool __retval5;
  this3 = v0;
  right4 = v1;
  struct Array* t6 = this3;
  struct Array* t7 = right4;
  _Bool r8 = Array__operator___Array_const___const(t6, t7);
  _Bool u9 = !r8;
  __retval5 = u9;
  _Bool t10 = __retval5;
  return t10;
}

// function: main
int main() {
bb11:
  int __retval12;
  struct Array integers113;
  struct Array integers214;
  struct Array integers315;
  int c16 = 0;
  __retval12 = c16;
  int c17 = 7;
  Array__Array_2(&integers113, c17);
    int c18 = 10;
    Array__Array_2(&integers214, c18);
      char* cast19 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      int r21 = Array__getSize___const(&integers113);
      struct std__basic_ostream_char__std__char_traits_char__* std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      char* cast23 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      struct std__basic_ostream_char__std__char_traits_char__* r25 = operator__(std24, &integers113);
      char* cast26 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      int r28 = Array__getSize___const(&integers214);
      struct std__basic_ostream_char__std__char_traits_char__* std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      char* cast30 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      struct std__basic_ostream_char__std__char_traits_char__* r32 = operator__(std31, &integers214);
      char* cast33 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      struct std__basic_istream_char__std__char_traits_char__* r35 = operator___2(&_ZSt3cin, &integers113);
      struct std__basic_istream_char__std__char_traits_char__* r36 = operator___2(r35, &integers214);
      char* cast37 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      char* cast39 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
      struct std__basic_ostream_char__std__char_traits_char__* r41 = operator__(std40, &integers113);
      char* cast42 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std43;
      __VERIFIER_nondet_memory(&std43, sizeof(std43));
      struct std__basic_ostream_char__std__char_traits_char__* r44 = operator__(std43, &integers214);
      char* cast45 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
        _Bool r47 = Array__operator___Array_const___const_2(&integers113, &integers214);
        if (r47) {
          char* cast48 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* std49;
          __VERIFIER_nondet_memory(&std49, sizeof(std49));
        }
      Array__Array(&integers315, &integers113);
        char* cast50 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        int r52 = Array__getSize___const(&integers315);
        struct std__basic_ostream_char__std__char_traits_char__* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        char* cast54 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std55;
        __VERIFIER_nondet_memory(&std55, sizeof(std55));
        struct std__basic_ostream_char__std__char_traits_char__* r56 = operator__(std55, &integers315);
        char* cast57 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
        struct Array* r59 = Array__operator_(&integers113, &integers214);
        char* cast60 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        struct std__basic_ostream_char__std__char_traits_char__* r62 = operator__(std61, &integers113);
        char* cast63 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        struct std__basic_ostream_char__std__char_traits_char__* r65 = operator__(std64, &integers214);
        char* cast66 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
          _Bool r68 = Array__operator___Array_const___const(&integers113, &integers214);
          if (r68) {
            char* cast69 = (char*)&(_str_12);
            struct std__basic_ostream_char__std__char_traits_char__* std70;
            __VERIFIER_nondet_memory(&std70, sizeof(std70));
          }
        char* cast71 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        int c73 = 5;
        int* r74 = Array__operator__(&integers113, c73);
        int t75 = *r74;
        struct std__basic_ostream_char__std__char_traits_char__* std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        char* cast77 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        int c79 = 1000;
        int c80 = 5;
        int* r81 = Array__operator__(&integers113, c80);
        *r81 = c79;
        char* cast82 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        struct std__basic_ostream_char__std__char_traits_char__* r84 = operator__(std83, &integers113);
        char* cast85 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        struct std__basic_ostream_char__std__char_traits_char__* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
        int c88 = 1000;
        int c89 = 15;
        int* r90 = Array__operator__(&integers113, c89);
        *r90 = c88;
        int c91 = 0;
        __retval12 = c91;
        int t92 = __retval12;
        int ret_val93 = t92;
        {
          Array___Array(&integers315);
        }
        {
          Array___Array(&integers214);
        }
        {
          Array___Array(&integers113);
        }
        return ret_val93;
  int t94 = __retval12;
  return t94;
}

