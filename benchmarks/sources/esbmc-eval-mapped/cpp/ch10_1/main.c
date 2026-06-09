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
struct Point { int __field0; int __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setprecision { int _M_n; };
struct Circle { struct Point __field0; double __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[32] = "Print point and circle objects:";
char _str_1[9] = "\nPoint: ";
char _str_2[10] = "\nCircle: ";
char _str_3[44] = "\n\nCalling print with base-class pointer to ";
char _str_4[45] = "\nbase-class object invokes base-class print ";
char _str_5[11] = "function:\n";
char _str_6[47] = "\n\nCalling print with derived-class pointer to ";
char _str_7[45] = "\nderived-class object invokes derived-class ";
char _str_8[17] = "print function:\n";
char _str_9[47] = "derived-class object\ninvokes base-class print ";
char _str_10[39] = "function on that derived-class object\n";
extern void Point__Point(struct Point* p0, int p1, int p2);
extern void Circle__Circle(struct Circle* p0, int p1, int p2, double p3);
extern void Point__print___const(struct Point* p0);
extern void Circle__print___const(struct Circle* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Point point2;
  struct Point* pointPtr3;
  struct Circle circle4;
  struct Circle* circlePtr5;
  struct std___Setprecision agg_tmp06;
  int c7 = 0;
  __retval1 = c7;
  int c8 = 30;
  int c9 = 50;
  Point__Point(&point2, c8, c9);
  struct Point* c10 = ((void*)0);
  pointPtr3 = c10;
  int c11 = 120;
  int c12 = 89;
  double c13 = 0x1.599999999999ap1;
  Circle__Circle(&circle4, c11, c12, c13);
  struct Circle* c14 = ((void*)0);
  circlePtr5 = c14;
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  int c16 = 2;
  struct std___Setprecision std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  agg_tmp06 = std17;
  struct std___Setprecision t18 = agg_tmp06;
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  Point__print___const(&point2);
  char* cast24 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  Circle__print___const(&circle4);
  pointPtr3 = &point2;
  char* cast26 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  char* cast28 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char* cast30 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  struct Point* t32 = pointPtr3;
  Point__print___const(t32);
  circlePtr5 = &circle4;
  char* cast33 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  char* cast35 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  char* cast37 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  struct Circle* t39 = circlePtr5;
  Circle__print___const(t39);
  struct Point* base40 = (struct Point*)((char *)&(circle4) + 0);
  pointPtr3 = base40;
  char* cast41 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  char* cast43 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  char* cast45 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  struct Point* t47 = pointPtr3;
  Point__print___const(t47);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  int c49 = 0;
  __retval1 = c49;
  int t50 = __retval1;
  return t50;
}

