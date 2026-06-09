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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int current __attribute__((aligned(4))) = 0;
char _str[18] = "myarray[i] == i+1";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm26/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
int UniqueNumber();
int std____size_to_integer(int p0);
int* int__std__generate_n_int___int__int________int___int__int____(int* p0, int p1, void* p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
int main();

// function: _Z12UniqueNumberv
int UniqueNumber() {
bb0:
  int __retval1;
  int t2 = current;
  int u3 = t2 + 1;
  *&current = u3;
  __retval1 = u3;
  int t4 = __retval1;
  return t4;
}

// function: _ZSt17__size_to_integeri
int std____size_to_integer(int v5) {
bb6:
  int __n7;
  int __retval8;
  __n7 = v5;
  int t9 = __n7;
  __retval8 = t9;
  int t10 = __retval8;
  return t10;
}

// function: _ZSt10generate_nIPiiPFivEET_S3_T0_T1_
int* int__std__generate_n_int___int__int________int___int__int____(int* v11, int v12, void* v13) {
bb14:
  int* __first15;
  int __n16;
  void* __gen17;
  int* __retval18;
  __first15 = v11;
  __n16 = v12;
  __gen17 = v13;
    int __niter19;
    int t20 = __n16;
    int r21 = std____size_to_integer(t20);
    __niter19 = r21;
    while (1) {
      int t23 = __niter19;
      int c24 = 0;
      _Bool c25 = ((t23 > c24)) ? 1 : 0;
      if (!c25) break;
      void* t26 = __gen17;
      int r27 = ((int (*)())t26)();
      int* t28 = __first15;
      *t28 = r27;
    for_step22: ;
      int t29 = __niter19;
      int u30 = t29 - 1;
      __niter19 = u30;
      int* t31 = __first15;
      int c32 = 1;
      int* ptr33 = &(t31)[c32];
      __first15 = ptr33;
    }
  int* t34 = __first15;
  __retval18 = t34;
  int* t35 = __retval18;
  return t35;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v36, void* v37) {
bb38:
  struct std__basic_ostream_char__std__char_traits_char__* this39;
  void* __pf40;
  struct std__basic_ostream_char__std__char_traits_char__* __retval41;
  this39 = v36;
  __pf40 = v37;
  struct std__basic_ostream_char__std__char_traits_char__* t42 = this39;
  void* t43 = __pf40;
  struct std__basic_ostream_char__std__char_traits_char__* r44 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t43)(t42);
  __retval41 = r44;
  struct std__basic_ostream_char__std__char_traits_char__* t45 = __retval41;
  return t45;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v46) {
bb47:
  struct std__basic_ostream_char__std__char_traits_char__* __os48;
  struct std__basic_ostream_char__std__char_traits_char__* __retval49;
  __os48 = v46;
  struct std__basic_ostream_char__std__char_traits_char__* t50 = __os48;
  struct std__basic_ostream_char__std__char_traits_char__* r51 = std__ostream__flush(t50);
  __retval49 = r51;
  struct std__basic_ostream_char__std__char_traits_char__* t52 = __retval49;
  return t52;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v53) {
bb54:
  struct std__ctype_char_* __f55;
  struct std__ctype_char_* __retval56;
  __f55 = v53;
    struct std__ctype_char_* t57 = __f55;
    _Bool cast58 = (_Bool)t57;
    _Bool u59 = !cast58;
    if (u59) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t60 = __f55;
  __retval56 = t60;
  struct std__ctype_char_* t61 = __retval56;
  return t61;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v62, char v63) {
bb64:
  struct std__ctype_char_* this65;
  char __c66;
  char __retval67;
  this65 = v62;
  __c66 = v63;
  struct std__ctype_char_* t68 = this65;
    char t69 = t68->_M_widen_ok;
    _Bool cast70 = (_Bool)t69;
    if (cast70) {
      char t71 = __c66;
      unsigned char cast72 = (unsigned char)t71;
      unsigned long cast73 = (unsigned long)cast72;
      char t74 = t68->_M_widen[cast73];
      __retval67 = t74;
      char t75 = __retval67;
      return t75;
    }
  std__ctype_char____M_widen_init___const(t68);
  char t76 = __c66;
  void** v77 = (void**)t68;
  void* v78 = *((void**)v77);
  char vcall81 = (char)__VERIFIER_virtual_call_char_char(t68, 6, t76);
  __retval67 = vcall81;
  char t82 = __retval67;
  return t82;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v83, char v84) {
bb85:
  struct std__basic_ios_char__std__char_traits_char__* this86;
  char __c87;
  char __retval88;
  this86 = v83;
  __c87 = v84;
  struct std__basic_ios_char__std__char_traits_char__* t89 = this86;
  struct std__ctype_char_* t90 = t89->_M_ctype;
  struct std__ctype_char_* r91 = std__ctype_char__const__std____check_facet_std__ctype_char___(t90);
  char t92 = __c87;
  char r93 = std__ctype_char___widen_char__const(r91, t92);
  __retval88 = r93;
  char t94 = __retval88;
  return t94;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v95) {
bb96:
  struct std__basic_ostream_char__std__char_traits_char__* __os97;
  struct std__basic_ostream_char__std__char_traits_char__* __retval98;
  __os97 = v95;
  struct std__basic_ostream_char__std__char_traits_char__* t99 = __os97;
  struct std__basic_ostream_char__std__char_traits_char__* t100 = __os97;
  void** v101 = (void**)t100;
  void* v102 = *((void**)v101);
  unsigned char* cast103 = (unsigned char*)v102;
  long c104 = -24;
  unsigned char* ptr105 = &(cast103)[c104];
  long* cast106 = (long*)ptr105;
  long t107 = *cast106;
  unsigned char* cast108 = (unsigned char*)t100;
  unsigned char* ptr109 = &(cast108)[t107];
  struct std__basic_ostream_char__std__char_traits_char__* cast110 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr109;
  struct std__basic_ios_char__std__char_traits_char__* cast111 = (struct std__basic_ios_char__std__char_traits_char__*)cast110;
  char c112 = 10;
  char r113 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast111, c112);
  struct std__basic_ostream_char__std__char_traits_char__* r114 = std__ostream__put(t99, r113);
  struct std__basic_ostream_char__std__char_traits_char__* r115 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r114);
  __retval98 = r115;
  struct std__basic_ostream_char__std__char_traits_char__* t116 = __retval98;
  return t116;
}

// function: main
int main() {
bb117:
  int __retval118;
  int myarray119[9];
  int c120 = 0;
  __retval118 = c120;
  int* cast121 = (int*)&(myarray119);
  int c122 = 9;
  int* r123 = int__std__generate_n_int___int__int________int___int__int____(cast121, c122, &UniqueNumber);
    int i124;
    int c125 = 0;
    i124 = c125;
    while (1) {
      int t127 = i124;
      int c128 = 9;
      _Bool c129 = ((t127 < c128)) ? 1 : 0;
      if (!c129) break;
      int t130 = i124;
      long cast131 = (long)t130;
      int t132 = myarray119[cast131];
      int t133 = i124;
      int c134 = 1;
      int b135 = t133 + c134;
      _Bool c136 = ((t132 == b135)) ? 1 : 0;
      if (c136) {
      } else {
        char* cast137 = (char*)&(_str);
        char* c138 = _str_1;
        unsigned int c139 = 24;
        char* cast140 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast137, c138, c139, cast140);
      }
    for_step126: ;
      int t141 = i124;
      int u142 = t141 + 1;
      i124 = u142;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r143 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c144 = 0;
  __retval118 = c144;
  int t145 = __retval118;
  return t145;
}

