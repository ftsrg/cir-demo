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
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_continent[4] = {40, 30, 20, 10};
int __const_main_container[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[30] = "container includes continent!";
char _str_1[58] = "!(includes(container,container+10,continent,continent+4))";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm110-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[70] = "!(includes(container,container+10,continent,continent+4, myfunction))";
_Bool myfunction(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int container12[10];
  int continent13[4];
  int c14 = 0;
  __retval11 = c14;
  // array copy
  __builtin_memcpy(container12, __const_main_container, (unsigned long)10 * sizeof(__const_main_container[0]));
  // array copy
  __builtin_memcpy(continent13, __const_main_continent, (unsigned long)4 * sizeof(__const_main_continent[0]));
  int* cast15 = (int*)&(container12);
  int* cast16 = (int*)&(container12);
  int c17 = 10;
  int* ptr18 = &(cast16)[c17];
  // externalized std:: op: void std::sort<int*>(int*, int*)
  __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
  __VERIFIER_nondet_memory(ptr18, sizeof(*ptr18));
  int* cast19 = (int*)&(continent13);
  int* cast20 = (int*)&(continent13);
  int c21 = 4;
  int* ptr22 = &(cast20)[c21];
  // externalized std:: op: void std::sort<int*>(int*, int*)
  __VERIFIER_nondet_memory(cast19, sizeof(*cast19));
  __VERIFIER_nondet_memory(ptr22, sizeof(*ptr22));
    int* cast23 = (int*)&(container12);
    int* cast24 = (int*)&(container12);
    int c25 = 10;
    int* ptr26 = &(cast24)[c25];
    int* cast27 = (int*)&(continent13);
    int* cast28 = (int*)&(continent13);
    int c29 = 4;
    int* ptr30 = &(cast28)[c29];
    _Bool std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    if (std31) {
      char* cast32 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
    }
  int* cast35 = (int*)&(container12);
  int* cast36 = (int*)&(container12);
  int c37 = 10;
  int* ptr38 = &(cast36)[c37];
  int* cast39 = (int*)&(continent13);
  int* cast40 = (int*)&(continent13);
  int c41 = 4;
  int* ptr42 = &(cast40)[c41];
  _Bool std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  _Bool u44 = !std43;
  if (u44) {
  } else {
    char* cast45 = (char*)&(_str_1);
    char* c46 = _str_2;
    unsigned int c47 = 27;
    char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast45, c46, c47, cast48);
  }
    int* cast49 = (int*)&(container12);
    int* cast50 = (int*)&(container12);
    int c51 = 10;
    int* ptr52 = &(cast50)[c51];
    int* cast53 = (int*)&(continent13);
    int* cast54 = (int*)&(continent13);
    int c55 = 4;
    int* ptr56 = &(cast54)[c55];
    _Bool std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    if (std57) {
      char* cast58 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std59;
      __VERIFIER_nondet_memory(&std59, sizeof(std59));
      struct std__basic_ostream_char__std__char_traits_char__* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
    }
  int* cast61 = (int*)&(container12);
  int* cast62 = (int*)&(container12);
  int c63 = 10;
  int* ptr64 = &(cast62)[c63];
  int* cast65 = (int*)&(continent13);
  int* cast66 = (int*)&(continent13);
  int c67 = 4;
  int* ptr68 = &(cast66)[c67];
  _Bool std69;
  __VERIFIER_nondet_memory(&std69, sizeof(std69));
  _Bool u70 = !std69;
  if (u70) {
  } else {
    char* cast71 = (char*)&(_str_3);
    char* c72 = _str_2;
    unsigned int c73 = 33;
    char* cast74 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast71, c72, c73, cast74);
  }
  int c75 = 0;
  __retval11 = c75;
  int t76 = __retval11;
  return t76;
}

