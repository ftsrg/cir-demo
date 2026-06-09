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
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_myints[7] = {3, 7, 2, 5, 6, 4, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct myclass myobj;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "The smallest element is ";
char _str_1[24] = "The largest element is ";
char _str_2[41] = "*max_element(myints,myints+7,myobj) != 9";
char _str_3[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm120/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
_Bool myfn(int p0, int p1);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* p0, int* p1, int* p2);
int* int__std____min_element_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
int* int__std__min_element_int__(int* p0, int* p1);
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
int* int__std____max_element_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
int* int__std__max_element_int__(int* p0, int* p1);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, int* p1, int* p2);
int* int__std____min_element_int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* p0, int* p1, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p2);
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* p0);
int* int__std__min_element_int___bool_____int__int___int___int___bool____(int* p0, int* p1, void* p2);
int* int__std____max_element_int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* p0, int* p1, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p2);
int* int__std__max_element_int___bool_____int__int___int___int___bool____(int* p0, int* p1, void* p2);
_Bool myclass__operator__(struct myclass* p0, int p1, int p2);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator___int___int__(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p0, int* p1, int* p2);
int* int__std____min_element_int_____gnu_cxx____ops___Iter_comp_iter_myclass___(int* p0, int* p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
void __gnu_cxx____ops___Iter_comp_iter_myclass____Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p0, struct myclass p1);
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __gnu_cxx____ops___Iter_comp_iter_myclass____gnu_cxx____ops____iter_comp_iter_myclass_(struct myclass p0);
int* int__std__min_element_int___myclass_(int* p0, int* p1, struct myclass p2);
int* int__std____max_element_int_____gnu_cxx____ops___Iter_comp_iter_myclass___(int* p0, int* p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
int* int__std__max_element_int___myclass_(int* p0, int* p1, struct myclass p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z4myfnii
_Bool myfn(int v0, int v1) {
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v10, int v11) {
bb12:
  int __a13;
  int __b14;
  int __retval15;
  __a13 = v10;
  __b14 = v11;
  int t16 = __a13;
  int t17 = __b14;
  int b18 = t16 | t17;
  __retval15 = b18;
  int t19 = __retval15;
  return t19;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v20) {
bb21:
  struct std__basic_ios_char__std__char_traits_char__* this22;
  int __retval23;
  this22 = v20;
  struct std__basic_ios_char__std__char_traits_char__* t24 = this22;
  struct std__ios_base* base25 = (struct std__ios_base*)((char *)t24 + 0);
  int t26 = base25->_M_streambuf_state;
  __retval23 = t26;
  int t27 = __retval23;
  return t27;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v28, int v29) {
bb30:
  struct std__basic_ios_char__std__char_traits_char__* this31;
  int __state32;
  this31 = v28;
  __state32 = v29;
  struct std__basic_ios_char__std__char_traits_char__* t33 = this31;
  int r34 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t33);
  int t35 = __state32;
  int r36 = std__operator_(r34, t35);
  std__basic_ios_char__std__char_traits_char_____clear(t33, r36);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb37:
  _Bool __retval38;
    _Bool c39 = 0;
    __retval38 = c39;
    _Bool t40 = __retval38;
    return t40;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v41, char* v42) {
bb43:
  char* __c144;
  char* __c245;
  _Bool __retval46;
  __c144 = v41;
  __c245 = v42;
  char* t47 = __c144;
  char t48 = *t47;
  int cast49 = (int)t48;
  char* t50 = __c245;
  char t51 = *t50;
  int cast52 = (int)t51;
  _Bool c53 = ((cast49 == cast52)) ? 1 : 0;
  __retval46 = c53;
  _Bool t54 = __retval46;
  return t54;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v55) {
bb56:
  char* __p57;
  unsigned long __retval58;
  unsigned long __i59;
  __p57 = v55;
  unsigned long c60 = 0;
  __i59 = c60;
    char ref_tmp061;
    while (1) {
      unsigned long t62 = __i59;
      char* t63 = __p57;
      char* ptr64 = &(t63)[t62];
      char c65 = 0;
      ref_tmp061 = c65;
      _Bool r66 = __gnu_cxx__char_traits_char___eq(ptr64, &ref_tmp061);
      _Bool u67 = !r66;
      if (!u67) break;
      unsigned long t68 = __i59;
      unsigned long u69 = t68 + 1;
      __i59 = u69;
    }
  unsigned long t70 = __i59;
  __retval58 = t70;
  unsigned long t71 = __retval58;
  return t71;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v72) {
bb73:
  char* __s74;
  unsigned long __retval75;
  __s74 = v72;
    _Bool r76 = std____is_constant_evaluated();
    if (r76) {
      char* t77 = __s74;
      unsigned long r78 = __gnu_cxx__char_traits_char___length(t77);
      __retval75 = r78;
      unsigned long t79 = __retval75;
      return t79;
    }
  char* t80 = __s74;
  unsigned long r81 = strlen(t80);
  __retval75 = r81;
  unsigned long t82 = __retval75;
  return t82;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v83, char* v84) {
bb85:
  struct std__basic_ostream_char__std__char_traits_char__* __out86;
  char* __s87;
  struct std__basic_ostream_char__std__char_traits_char__* __retval88;
  __out86 = v83;
  __s87 = v84;
    char* t89 = __s87;
    _Bool cast90 = (_Bool)t89;
    _Bool u91 = !cast90;
    if (u91) {
      struct std__basic_ostream_char__std__char_traits_char__* t92 = __out86;
      void** v93 = (void**)t92;
      void* v94 = *((void**)v93);
      unsigned char* cast95 = (unsigned char*)v94;
      long c96 = -24;
      unsigned char* ptr97 = &(cast95)[c96];
      long* cast98 = (long*)ptr97;
      long t99 = *cast98;
      unsigned char* cast100 = (unsigned char*)t92;
      unsigned char* ptr101 = &(cast100)[t99];
      struct std__basic_ostream_char__std__char_traits_char__* cast102 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr101;
      struct std__basic_ios_char__std__char_traits_char__* cast103 = (struct std__basic_ios_char__std__char_traits_char__*)cast102;
      int t104 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast103, t104);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t105 = __out86;
      char* t106 = __s87;
      char* t107 = __s87;
      unsigned long r108 = std__char_traits_char___length(t107);
      long cast109 = (long)r108;
      struct std__basic_ostream_char__std__char_traits_char__* r110 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t105, t106, cast109);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t111 = __out86;
  __retval88 = t111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval88;
  return t112;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* v113, int* v114, int* v115) {
bb116:
  struct __gnu_cxx____ops___Iter_less_iter* this117;
  int* __it1118;
  int* __it2119;
  _Bool __retval120;
  this117 = v113;
  __it1118 = v114;
  __it2119 = v115;
  struct __gnu_cxx____ops___Iter_less_iter* t121 = this117;
  int* t122 = __it1118;
  int t123 = *t122;
  int* t124 = __it2119;
  int t125 = *t124;
  _Bool c126 = ((t123 < t125)) ? 1 : 0;
  __retval120 = c126;
  _Bool t127 = __retval120;
  return t127;
}

// function: _ZSt13__min_elementIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_T0_
int* int__std____min_element_int_____gnu_cxx____ops___Iter_less_iter_(int* v128, int* v129, struct __gnu_cxx____ops___Iter_less_iter v130) {
bb131:
  int* __first132;
  int* __last133;
  struct __gnu_cxx____ops___Iter_less_iter __comp134;
  int* __retval135;
  int* __result136;
  __first132 = v128;
  __last133 = v129;
  __comp134 = v130;
    int* t137 = __first132;
    int* t138 = __last133;
    _Bool c139 = ((t137 == t138)) ? 1 : 0;
    if (c139) {
      int* t140 = __first132;
      __retval135 = t140;
      int* t141 = __retval135;
      return t141;
    }
  int* t142 = __first132;
  __result136 = t142;
    while (1) {
      int* t143 = __first132;
      int c144 = 1;
      int* ptr145 = &(t143)[c144];
      __first132 = ptr145;
      int* t146 = __last133;
      _Bool c147 = ((ptr145 != t146)) ? 1 : 0;
      if (!c147) break;
        int* t148 = __first132;
        int* t149 = __result136;
        _Bool r150 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp134, t148, t149);
        if (r150) {
          int* t151 = __first132;
          __result136 = t151;
        }
    }
  int* t152 = __result136;
  __retval135 = t152;
  int* t153 = __retval135;
  return t153;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb154:
  struct __gnu_cxx____ops___Iter_less_iter __retval155;
  struct __gnu_cxx____ops___Iter_less_iter t156 = __retval155;
  return t156;
}

// function: _ZSt11min_elementIPiET_S1_S1_
int* int__std__min_element_int__(int* v157, int* v158) {
bb159:
  int* __first160;
  int* __last161;
  int* __retval162;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0163;
  __first160 = v157;
  __last161 = v158;
  int* t164 = __first160;
  int* t165 = __last161;
  struct __gnu_cxx____ops___Iter_less_iter r166 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0163 = r166;
  struct __gnu_cxx____ops___Iter_less_iter t167 = agg_tmp0163;
  int* r168 = int__std____min_element_int_____gnu_cxx____ops___Iter_less_iter_(t164, t165, t167);
  __retval162 = r168;
  int* t169 = __retval162;
  return t169;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v170, void* v171) {
bb172:
  struct std__basic_ostream_char__std__char_traits_char__* this173;
  void* __pf174;
  struct std__basic_ostream_char__std__char_traits_char__* __retval175;
  this173 = v170;
  __pf174 = v171;
  struct std__basic_ostream_char__std__char_traits_char__* t176 = this173;
  void* t177 = __pf174;
  struct std__basic_ostream_char__std__char_traits_char__* r178 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t177)(t176);
  __retval175 = r178;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __retval175;
  return t179;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v180) {
bb181:
  struct std__basic_ostream_char__std__char_traits_char__* __os182;
  struct std__basic_ostream_char__std__char_traits_char__* __retval183;
  __os182 = v180;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = __os182;
  struct std__basic_ostream_char__std__char_traits_char__* r185 = std__ostream__flush(t184);
  __retval183 = r185;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __retval183;
  return t186;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v187) {
bb188:
  struct std__ctype_char_* __f189;
  struct std__ctype_char_* __retval190;
  __f189 = v187;
    struct std__ctype_char_* t191 = __f189;
    _Bool cast192 = (_Bool)t191;
    _Bool u193 = !cast192;
    if (u193) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t194 = __f189;
  __retval190 = t194;
  struct std__ctype_char_* t195 = __retval190;
  return t195;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v196, char v197) {
bb198:
  struct std__ctype_char_* this199;
  char __c200;
  char __retval201;
  this199 = v196;
  __c200 = v197;
  struct std__ctype_char_* t202 = this199;
    char t203 = t202->_M_widen_ok;
    _Bool cast204 = (_Bool)t203;
    if (cast204) {
      char t205 = __c200;
      unsigned char cast206 = (unsigned char)t205;
      unsigned long cast207 = (unsigned long)cast206;
      char t208 = t202->_M_widen[cast207];
      __retval201 = t208;
      char t209 = __retval201;
      return t209;
    }
  std__ctype_char____M_widen_init___const(t202);
  char t210 = __c200;
  void** v211 = (void**)t202;
  void* v212 = *((void**)v211);
  char vcall215 = (char)__VERIFIER_virtual_call_char_char(t202, 6, t210);
  __retval201 = vcall215;
  char t216 = __retval201;
  return t216;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v217, char v218) {
bb219:
  struct std__basic_ios_char__std__char_traits_char__* this220;
  char __c221;
  char __retval222;
  this220 = v217;
  __c221 = v218;
  struct std__basic_ios_char__std__char_traits_char__* t223 = this220;
  struct std__ctype_char_* t224 = t223->_M_ctype;
  struct std__ctype_char_* r225 = std__ctype_char__const__std____check_facet_std__ctype_char___(t224);
  char t226 = __c221;
  char r227 = std__ctype_char___widen_char__const(r225, t226);
  __retval222 = r227;
  char t228 = __retval222;
  return t228;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v229) {
bb230:
  struct std__basic_ostream_char__std__char_traits_char__* __os231;
  struct std__basic_ostream_char__std__char_traits_char__* __retval232;
  __os231 = v229;
  struct std__basic_ostream_char__std__char_traits_char__* t233 = __os231;
  struct std__basic_ostream_char__std__char_traits_char__* t234 = __os231;
  void** v235 = (void**)t234;
  void* v236 = *((void**)v235);
  unsigned char* cast237 = (unsigned char*)v236;
  long c238 = -24;
  unsigned char* ptr239 = &(cast237)[c238];
  long* cast240 = (long*)ptr239;
  long t241 = *cast240;
  unsigned char* cast242 = (unsigned char*)t234;
  unsigned char* ptr243 = &(cast242)[t241];
  struct std__basic_ostream_char__std__char_traits_char__* cast244 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr243;
  struct std__basic_ios_char__std__char_traits_char__* cast245 = (struct std__basic_ios_char__std__char_traits_char__*)cast244;
  char c246 = 10;
  char r247 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast245, c246);
  struct std__basic_ostream_char__std__char_traits_char__* r248 = std__ostream__put(t233, r247);
  struct std__basic_ostream_char__std__char_traits_char__* r249 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r248);
  __retval232 = r249;
  struct std__basic_ostream_char__std__char_traits_char__* t250 = __retval232;
  return t250;
}

// function: _ZSt13__max_elementIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_T0_
int* int__std____max_element_int_____gnu_cxx____ops___Iter_less_iter_(int* v251, int* v252, struct __gnu_cxx____ops___Iter_less_iter v253) {
bb254:
  int* __first255;
  int* __last256;
  struct __gnu_cxx____ops___Iter_less_iter __comp257;
  int* __retval258;
  int* __result259;
  __first255 = v251;
  __last256 = v252;
  __comp257 = v253;
    int* t260 = __first255;
    int* t261 = __last256;
    _Bool c262 = ((t260 == t261)) ? 1 : 0;
    if (c262) {
      int* t263 = __first255;
      __retval258 = t263;
      int* t264 = __retval258;
      return t264;
    }
  int* t265 = __first255;
  __result259 = t265;
    while (1) {
      int* t266 = __first255;
      int c267 = 1;
      int* ptr268 = &(t266)[c267];
      __first255 = ptr268;
      int* t269 = __last256;
      _Bool c270 = ((ptr268 != t269)) ? 1 : 0;
      if (!c270) break;
        int* t271 = __result259;
        int* t272 = __first255;
        _Bool r273 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp257, t271, t272);
        if (r273) {
          int* t274 = __first255;
          __result259 = t274;
        }
    }
  int* t275 = __result259;
  __retval258 = t275;
  int* t276 = __retval258;
  return t276;
}

// function: _ZSt11max_elementIPiET_S1_S1_
int* int__std__max_element_int__(int* v277, int* v278) {
bb279:
  int* __first280;
  int* __last281;
  int* __retval282;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0283;
  __first280 = v277;
  __last281 = v278;
  int* t284 = __first280;
  int* t285 = __last281;
  struct __gnu_cxx____ops___Iter_less_iter r286 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0283 = r286;
  struct __gnu_cxx____ops___Iter_less_iter t287 = agg_tmp0283;
  int* r288 = int__std____max_element_int_____gnu_cxx____ops___Iter_less_iter_(t284, t285, t287);
  __retval282 = r288;
  int* t289 = __retval282;
  return t289;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclIPiS6_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v290, int* v291, int* v292) {
bb293:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this294;
  int* __it1295;
  int* __it2296;
  _Bool __retval297;
  this294 = v290;
  __it1295 = v291;
  __it2296 = v292;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t298 = this294;
  void* t299 = t298->_M_comp;
  int* t300 = __it1295;
  int t301 = *t300;
  int* t302 = __it2296;
  int t303 = *t302;
  _Bool r304 = ((_Bool (*)(int, int))t299)(t301, t303);
  __retval297 = r304;
  _Bool t305 = __retval297;
  return t305;
}

// function: _ZSt13__min_elementIPiN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEEET_S7_S7_T0_
int* int__std____min_element_int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* v306, int* v307, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v308) {
bb309:
  int* __first310;
  int* __last311;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __comp312;
  int* __retval313;
  int* __result314;
  __first310 = v306;
  __last311 = v307;
  __comp312 = v308;
    int* t315 = __first310;
    int* t316 = __last311;
    _Bool c317 = ((t315 == t316)) ? 1 : 0;
    if (c317) {
      int* t318 = __first310;
      __retval313 = t318;
      int* t319 = __retval313;
      return t319;
    }
  int* t320 = __first310;
  __result314 = t320;
    while (1) {
      int* t321 = __first310;
      int c322 = 1;
      int* ptr323 = &(t321)[c322];
      __first310 = ptr323;
      int* t324 = __last311;
      _Bool c325 = ((ptr323 != t324)) ? 1 : 0;
      if (!c325) break;
        int* t326 = __first310;
        int* t327 = __result314;
        _Bool r328 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(&__comp312, t326, t327);
        if (r328) {
          int* t329 = __first310;
          __result314 = t329;
        }
    }
  int* t330 = __result314;
  __retval313 = t330;
  int* t331 = __retval313;
  return t331;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v332, void* v333) {
bb334:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this335;
  void* __comp336;
  this335 = v332;
  __comp336 = v333;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t337 = this335;
  void* t338 = __comp336;
  t337->_M_comp = t338;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v339) {
bb340:
  void* __comp341;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __retval342;
  __comp341 = v339;
  void* t343 = __comp341;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval342, t343);
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t344 = __retval342;
  return t344;
}

// function: _ZSt11min_elementIPiPFbiiEET_S3_S3_T0_
int* int__std__min_element_int___bool_____int__int___int___int___bool____(int* v345, int* v346, void* v347) {
bb348:
  int* __first349;
  int* __last350;
  void* __comp351;
  int* __retval352;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp0353;
  __first349 = v345;
  __last350 = v346;
  __comp351 = v347;
  int* t354 = __first349;
  int* t355 = __last350;
  void* t356 = __comp351;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ r357 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t356);
  agg_tmp0353 = r357;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t358 = agg_tmp0353;
  int* r359 = int__std____min_element_int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(t354, t355, t358);
  __retval352 = r359;
  int* t360 = __retval352;
  return t360;
}

// function: _ZSt13__max_elementIPiN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEEET_S7_S7_T0_
int* int__std____max_element_int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(int* v361, int* v362, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v363) {
bb364:
  int* __first365;
  int* __last366;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __comp367;
  int* __retval368;
  int* __result369;
  __first365 = v361;
  __last366 = v362;
  __comp367 = v363;
    int* t370 = __first365;
    int* t371 = __last366;
    _Bool c372 = ((t370 == t371)) ? 1 : 0;
    if (c372) {
      int* t373 = __first365;
      __retval368 = t373;
      int* t374 = __retval368;
      return t374;
    }
  int* t375 = __first365;
  __result369 = t375;
    while (1) {
      int* t376 = __first365;
      int c377 = 1;
      int* ptr378 = &(t376)[c377];
      __first365 = ptr378;
      int* t379 = __last366;
      _Bool c380 = ((ptr378 != t379)) ? 1 : 0;
      if (!c380) break;
        int* t381 = __result369;
        int* t382 = __first365;
        _Bool r383 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator___int___int__(&__comp367, t381, t382);
        if (r383) {
          int* t384 = __first365;
          __result369 = t384;
        }
    }
  int* t385 = __result369;
  __retval368 = t385;
  int* t386 = __retval368;
  return t386;
}

// function: _ZSt11max_elementIPiPFbiiEET_S3_S3_T0_
int* int__std__max_element_int___bool_____int__int___int___int___bool____(int* v387, int* v388, void* v389) {
bb390:
  int* __first391;
  int* __last392;
  void* __comp393;
  int* __retval394;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp0395;
  __first391 = v387;
  __last392 = v388;
  __comp393 = v389;
  int* t396 = __first391;
  int* t397 = __last392;
  void* t398 = __comp393;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ r399 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t398);
  agg_tmp0395 = r399;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t400 = agg_tmp0395;
  int* r401 = int__std____max_element_int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____int___int_____gnu_cxx____ops___Iter_comp_iter_bool____(t396, t397, t400);
  __retval394 = r401;
  int* t402 = __retval394;
  return t402;
}

// function: _ZN7myclassclEii
_Bool myclass__operator__(struct myclass* v403, int v404, int v405) {
bb406:
  struct myclass* this407;
  int i408;
  int j409;
  _Bool __retval410;
  this407 = v403;
  i408 = v404;
  j409 = v405;
  struct myclass* t411 = this407;
  int t412 = i408;
  int t413 = j409;
  _Bool c414 = ((t412 < t413)) ? 1 : 0;
  __retval410 = c414;
  _Bool t415 = __retval410;
  return t415;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI7myclassEclIPiS5_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator___int___int__(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v416, int* v417, int* v418) {
bb419:
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* this420;
  int* __it1421;
  int* __it2422;
  _Bool __retval423;
  this420 = v416;
  __it1421 = v417;
  __it2422 = v418;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* t424 = this420;
  struct myclass* cast425 = (struct myclass*)t424;
  int* t426 = __it1421;
  int t427 = *t426;
  int* t428 = __it2422;
  int t429 = *t428;
  _Bool r430 = myclass__operator__(cast425, t427, t429);
  __retval423 = r430;
  _Bool t431 = __retval423;
  return t431;
}

// function: _ZSt13__min_elementIPiN9__gnu_cxx5__ops15_Iter_comp_iterI7myclassEEET_S6_S6_T0_
int* int__std____min_element_int_____gnu_cxx____ops___Iter_comp_iter_myclass___(int* v432, int* v433, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v434) {
bb435:
  int* __first436;
  int* __last437;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp438;
  int* __retval439;
  int* __result440;
  __first436 = v432;
  __last437 = v433;
  __comp438 = v434;
    int* t441 = __first436;
    int* t442 = __last437;
    _Bool c443 = ((t441 == t442)) ? 1 : 0;
    if (c443) {
      int* t444 = __first436;
      __retval439 = t444;
      int* t445 = __retval439;
      return t445;
    }
  int* t446 = __first436;
  __result440 = t446;
    while (1) {
      int* t447 = __first436;
      int c448 = 1;
      int* ptr449 = &(t447)[c448];
      __first436 = ptr449;
      int* t450 = __last437;
      _Bool c451 = ((ptr449 != t450)) ? 1 : 0;
      if (!c451) break;
        int* t452 = __first436;
        int* t453 = __result440;
        _Bool r454 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator___int___int__(&__comp438, t452, t453);
        if (r454) {
          int* t455 = __first436;
          __result440 = t455;
        }
    }
  int* t456 = __result440;
  __retval439 = t456;
  int* t457 = __retval439;
  return t457;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI7myclassEC2ES2_
void __gnu_cxx____ops___Iter_comp_iter_myclass____Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v458, struct myclass v459) {
bb460:
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* this461;
  struct myclass __comp462;
  this461 = v458;
  __comp462 = v459;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterI7myclassEENS0_15_Iter_comp_iterIT_EES4_
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __gnu_cxx____ops___Iter_comp_iter_myclass____gnu_cxx____ops____iter_comp_iter_myclass_(struct myclass v463) {
bb464:
  struct myclass __comp465;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __retval466;
  struct myclass agg_tmp0467;
  __comp465 = v463;
  struct myclass t468 = agg_tmp0467;
  __gnu_cxx____ops___Iter_comp_iter_myclass____Iter_comp_iter(&__retval466, t468);
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t469 = __retval466;
  return t469;
}

// function: _ZSt11min_elementIPi7myclassET_S2_S2_T0_
int* int__std__min_element_int___myclass_(int* v470, int* v471, struct myclass v472) {
bb473:
  int* __first474;
  int* __last475;
  struct myclass __comp476;
  int* __retval477;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp0478;
  struct myclass agg_tmp1479;
  __first474 = v470;
  __last475 = v471;
  __comp476 = v472;
  int* t480 = __first474;
  int* t481 = __last475;
  struct myclass t482 = agg_tmp1479;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ r483 = __gnu_cxx____ops___Iter_comp_iter_myclass____gnu_cxx____ops____iter_comp_iter_myclass_(t482);
  agg_tmp0478 = r483;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t484 = agg_tmp0478;
  int* r485 = int__std____min_element_int_____gnu_cxx____ops___Iter_comp_iter_myclass___(t480, t481, t484);
  __retval477 = r485;
  int* t486 = __retval477;
  return t486;
}

// function: _ZSt13__max_elementIPiN9__gnu_cxx5__ops15_Iter_comp_iterI7myclassEEET_S6_S6_T0_
int* int__std____max_element_int_____gnu_cxx____ops___Iter_comp_iter_myclass___(int* v487, int* v488, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v489) {
bb490:
  int* __first491;
  int* __last492;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp493;
  int* __retval494;
  int* __result495;
  __first491 = v487;
  __last492 = v488;
  __comp493 = v489;
    int* t496 = __first491;
    int* t497 = __last492;
    _Bool c498 = ((t496 == t497)) ? 1 : 0;
    if (c498) {
      int* t499 = __first491;
      __retval494 = t499;
      int* t500 = __retval494;
      return t500;
    }
  int* t501 = __first491;
  __result495 = t501;
    while (1) {
      int* t502 = __first491;
      int c503 = 1;
      int* ptr504 = &(t502)[c503];
      __first491 = ptr504;
      int* t505 = __last492;
      _Bool c506 = ((ptr504 != t505)) ? 1 : 0;
      if (!c506) break;
        int* t507 = __result495;
        int* t508 = __first491;
        _Bool r509 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator___int___int__(&__comp493, t507, t508);
        if (r509) {
          int* t510 = __first491;
          __result495 = t510;
        }
    }
  int* t511 = __result495;
  __retval494 = t511;
  int* t512 = __retval494;
  return t512;
}

// function: _ZSt11max_elementIPi7myclassET_S2_S2_T0_
int* int__std__max_element_int___myclass_(int* v513, int* v514, struct myclass v515) {
bb516:
  int* __first517;
  int* __last518;
  struct myclass __comp519;
  int* __retval520;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp0521;
  struct myclass agg_tmp1522;
  __first517 = v513;
  __last518 = v514;
  __comp519 = v515;
  int* t523 = __first517;
  int* t524 = __last518;
  struct myclass t525 = agg_tmp1522;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ r526 = __gnu_cxx____ops___Iter_comp_iter_myclass____gnu_cxx____ops____iter_comp_iter_myclass_(t525);
  agg_tmp0521 = r526;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t527 = agg_tmp0521;
  int* r528 = int__std____max_element_int_____gnu_cxx____ops___Iter_comp_iter_myclass___(t523, t524, t527);
  __retval520 = r528;
  int* t529 = __retval520;
  return t529;
}

// function: main
int main() {
bb530:
  int __retval531;
  int myints532[7];
  struct myclass agg_tmp0533;
  struct myclass agg_tmp1534;
  struct myclass agg_tmp2535;
  int c536 = 0;
  __retval531 = c536;
  // array copy
  __builtin_memcpy(myints532, __const_main_myints, (unsigned long)7 * sizeof(__const_main_myints[0]));
  char* cast537 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r538 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast537);
  int* cast539 = (int*)&(myints532);
  int* cast540 = (int*)&(myints532);
  int c541 = 7;
  int* ptr542 = &(cast540)[c541];
  int* r543 = int__std__min_element_int__(cast539, ptr542);
  int t544 = *r543;
  struct std__basic_ostream_char__std__char_traits_char__* r545 = std__ostream__operator__(r538, t544);
  struct std__basic_ostream_char__std__char_traits_char__* r546 = std__ostream__operator___std__ostream_____(r545, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast547 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r548 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast547);
  int* cast549 = (int*)&(myints532);
  int* cast550 = (int*)&(myints532);
  int c551 = 7;
  int* ptr552 = &(cast550)[c551];
  int* r553 = int__std__max_element_int__(cast549, ptr552);
  int t554 = *r553;
  struct std__basic_ostream_char__std__char_traits_char__* r555 = std__ostream__operator__(r548, t554);
  struct std__basic_ostream_char__std__char_traits_char__* r556 = std__ostream__operator___std__ostream_____(r555, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast557 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r558 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast557);
  int* cast559 = (int*)&(myints532);
  int* cast560 = (int*)&(myints532);
  int c561 = 7;
  int* ptr562 = &(cast560)[c561];
  int* r563 = int__std__min_element_int___bool_____int__int___int___int___bool____(cast559, ptr562, &myfn);
  int t564 = *r563;
  struct std__basic_ostream_char__std__char_traits_char__* r565 = std__ostream__operator__(r558, t564);
  struct std__basic_ostream_char__std__char_traits_char__* r566 = std__ostream__operator___std__ostream_____(r565, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast567 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r568 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast567);
  int* cast569 = (int*)&(myints532);
  int* cast570 = (int*)&(myints532);
  int c571 = 7;
  int* ptr572 = &(cast570)[c571];
  int* r573 = int__std__max_element_int___bool_____int__int___int___int___bool____(cast569, ptr572, &myfn);
  int t574 = *r573;
  struct std__basic_ostream_char__std__char_traits_char__* r575 = std__ostream__operator__(r568, t574);
  struct std__basic_ostream_char__std__char_traits_char__* r576 = std__ostream__operator___std__ostream_____(r575, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast577 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r578 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast577);
  int* cast579 = (int*)&(myints532);
  int* cast580 = (int*)&(myints532);
  int c581 = 7;
  int* ptr582 = &(cast580)[c581];
  struct myclass t583 = agg_tmp0533;
  int* r584 = int__std__min_element_int___myclass_(cast579, ptr582, t583);
  int t585 = *r584;
  struct std__basic_ostream_char__std__char_traits_char__* r586 = std__ostream__operator__(r578, t585);
  struct std__basic_ostream_char__std__char_traits_char__* r587 = std__ostream__operator___std__ostream_____(r586, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int* cast588 = (int*)&(myints532);
  int* cast589 = (int*)&(myints532);
  int c590 = 7;
  int* ptr591 = &(cast589)[c590];
  struct myclass t592 = agg_tmp1534;
  int* r593 = int__std__max_element_int___myclass_(cast588, ptr591, t592);
  int t594 = *r593;
  int c595 = 9;
  _Bool c596 = ((t594 != c595)) ? 1 : 0;
  if (c596) {
  } else {
    char* cast597 = (char*)&(_str_2);
    char* c598 = _str_3;
    unsigned int c599 = 33;
    char* cast600 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast597, c598, c599, cast600);
  }
  char* cast601 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r602 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast601);
  int* cast603 = (int*)&(myints532);
  int* cast604 = (int*)&(myints532);
  int c605 = 7;
  int* ptr606 = &(cast604)[c605];
  struct myclass t607 = agg_tmp2535;
  int* r608 = int__std__max_element_int___myclass_(cast603, ptr606, t607);
  int t609 = *r608;
  struct std__basic_ostream_char__std__char_traits_char__* r610 = std__ostream__operator__(r602, t609);
  struct std__basic_ostream_char__std__char_traits_char__* r611 = std__ostream__operator___std__ostream_____(r610, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c612 = 0;
  __retval531 = c612;
  int t613 = __retval531;
  return t613;
}

