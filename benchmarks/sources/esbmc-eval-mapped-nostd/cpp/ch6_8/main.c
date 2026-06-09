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
struct CreateAndDestroy { int __field0; char* __field1; };
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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

long _ZGVZ4mainE5third __attribute__((aligned(8))) = 0;
long _ZGVZ6createvE5sixth __attribute__((aligned(8))) = 0;
extern signed char __dso_handle;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct CreateAndDestroy _ZZ6createvE5sixth __attribute__((aligned(8)));
struct CreateAndDestroy _ZZ4mainE5third __attribute__((aligned(8)));
struct CreateAndDestroy first __attribute__((aligned(8)));
char _str[21] = "(global before main)";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[33] = "\nMAIN FUNCTION: EXECUTION BEGINS";
char _str_2[26] = "(local automatic in main)";
char _str_3[23] = "(local static in main)";
char _str_4[34] = "\nMAIN FUNCTION: EXECUTION RESUMES";
char _str_5[31] = "\nMAIN FUNCTION: EXECUTION ENDS";
char _str_6[35] = "\nCREATE FUNCTION: EXECUTION BEGINS";
char _str_7[28] = "(local automatic in create)";
char _str_8[25] = "(local static in create)";
char _str_9[33] = "\nCREATE FUNCTION: EXECUTION ENDS";
extern void __cxa_guard_release(long* p0);
extern int __cxa_guard_acquire(long* p0);
extern void __cxa_atexit(void* p0, void* p1, signed char* p2);
extern void CreateAndDestroy__CreateAndDestroy(struct CreateAndDestroy* p0, int p1, char* p2);
void CreateAndDestroy___CreateAndDestroy(struct CreateAndDestroy* p0) {}
void __cxx_global_var_init();
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
void create();
int main();
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb0:
  int c1 = 1;
  char* cast2 = (char*)&(_str);
  CreateAndDestroy__CreateAndDestroy(&first, c1, cast2);
  void* cast3 = (void*)&CreateAndDestroy___CreateAndDestroy;
  void* cast4 = (void*)&first;
  __cxa_atexit(cast3, cast4, &__dso_handle);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  int t30 = __state27;
  int r31 = std__operator_(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb32:
  _Bool __retval33;
    _Bool c34 = 0;
    __retval33 = c34;
    _Bool t35 = __retval33;
    return t35;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v36, char* v37) {
bb38:
  char* __c139;
  char* __c240;
  _Bool __retval41;
  __c139 = v36;
  __c240 = v37;
  char* t42 = __c139;
  char t43 = *t42;
  int cast44 = (int)t43;
  char* t45 = __c240;
  char t46 = *t45;
  int cast47 = (int)t46;
  _Bool c48 = ((cast44 == cast47)) ? 1 : 0;
  __retval41 = c48;
  _Bool t49 = __retval41;
  return t49;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v50) {
bb51:
  char* __p52;
  unsigned long __retval53;
  unsigned long __i54;
  __p52 = v50;
  unsigned long c55 = 0;
  __i54 = c55;
    char ref_tmp056;
    while (1) {
      unsigned long t57 = __i54;
      char* t58 = __p52;
      char* ptr59 = &(t58)[t57];
      char c60 = 0;
      ref_tmp056 = c60;
      _Bool r61 = __gnu_cxx__char_traits_char___eq(ptr59, &ref_tmp056);
      _Bool u62 = !r61;
      if (!u62) break;
      unsigned long t63 = __i54;
      unsigned long u64 = t63 + 1;
      __i54 = u64;
    }
  unsigned long t65 = __i54;
  __retval53 = t65;
  unsigned long t66 = __retval53;
  return t66;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v67) {
bb68:
  char* __s69;
  unsigned long __retval70;
  __s69 = v67;
    _Bool r71 = std____is_constant_evaluated();
    if (r71) {
      char* t72 = __s69;
      unsigned long r73 = __gnu_cxx__char_traits_char___length(t72);
      __retval70 = r73;
      unsigned long t74 = __retval70;
      return t74;
    }
  char* t75 = __s69;
  unsigned long r76 = strlen(t75);
  __retval70 = r76;
  unsigned long t77 = __retval70;
  return t77;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v78, char* v79) {
bb80:
  struct std__basic_ostream_char__std__char_traits_char__* __out81;
  char* __s82;
  struct std__basic_ostream_char__std__char_traits_char__* __retval83;
  __out81 = v78;
  __s82 = v79;
    char* t84 = __s82;
    _Bool cast85 = (_Bool)t84;
    _Bool u86 = !cast85;
    if (u86) {
      struct std__basic_ostream_char__std__char_traits_char__* t87 = __out81;
      void** v88 = (void**)t87;
      void* v89 = *((void**)v88);
      unsigned char* cast90 = (unsigned char*)v89;
      long c91 = -24;
      unsigned char* ptr92 = &(cast90)[c91];
      long* cast93 = (long*)ptr92;
      long t94 = *cast93;
      unsigned char* cast95 = (unsigned char*)t87;
      unsigned char* ptr96 = &(cast95)[t94];
      struct std__basic_ostream_char__std__char_traits_char__* cast97 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr96;
      struct std__basic_ios_char__std__char_traits_char__* cast98 = (struct std__basic_ios_char__std__char_traits_char__*)cast97;
      int t99 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast98, t99);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t100 = __out81;
      char* t101 = __s82;
      char* t102 = __s82;
      unsigned long r103 = std__char_traits_char___length(t102);
      long cast104 = (long)r103;
      struct std__basic_ostream_char__std__char_traits_char__* r105 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t100, t101, cast104);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t106 = __out81;
  __retval83 = t106;
  struct std__basic_ostream_char__std__char_traits_char__* t107 = __retval83;
  return t107;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v108, void* v109) {
bb110:
  struct std__basic_ostream_char__std__char_traits_char__* this111;
  void* __pf112;
  struct std__basic_ostream_char__std__char_traits_char__* __retval113;
  this111 = v108;
  __pf112 = v109;
  struct std__basic_ostream_char__std__char_traits_char__* t114 = this111;
  void* t115 = __pf112;
  struct std__basic_ostream_char__std__char_traits_char__* r116 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t115)(t114);
  __retval113 = r116;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __retval113;
  return t117;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v118) {
bb119:
  struct std__basic_ostream_char__std__char_traits_char__* __os120;
  struct std__basic_ostream_char__std__char_traits_char__* __retval121;
  __os120 = v118;
  struct std__basic_ostream_char__std__char_traits_char__* t122 = __os120;
  struct std__basic_ostream_char__std__char_traits_char__* r123 = std__ostream__flush(t122);
  __retval121 = r123;
  struct std__basic_ostream_char__std__char_traits_char__* t124 = __retval121;
  return t124;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v125) {
bb126:
  struct std__ctype_char_* __f127;
  struct std__ctype_char_* __retval128;
  __f127 = v125;
    struct std__ctype_char_* t129 = __f127;
    _Bool cast130 = (_Bool)t129;
    _Bool u131 = !cast130;
    if (u131) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t132 = __f127;
  __retval128 = t132;
  struct std__ctype_char_* t133 = __retval128;
  return t133;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v134, char v135) {
bb136:
  struct std__ctype_char_* this137;
  char __c138;
  char __retval139;
  this137 = v134;
  __c138 = v135;
  struct std__ctype_char_* t140 = this137;
    char t141 = t140->_M_widen_ok;
    _Bool cast142 = (_Bool)t141;
    if (cast142) {
      char t143 = __c138;
      unsigned char cast144 = (unsigned char)t143;
      unsigned long cast145 = (unsigned long)cast144;
      char t146 = t140->_M_widen[cast145];
      __retval139 = t146;
      char t147 = __retval139;
      return t147;
    }
  std__ctype_char____M_widen_init___const(t140);
  char t148 = __c138;
  void** v149 = (void**)t140;
  void* v150 = *((void**)v149);
  char vcall153 = (char)__VERIFIER_virtual_call_char_char(t140, 6, t148);
  __retval139 = vcall153;
  char t154 = __retval139;
  return t154;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v155, char v156) {
bb157:
  struct std__basic_ios_char__std__char_traits_char__* this158;
  char __c159;
  char __retval160;
  this158 = v155;
  __c159 = v156;
  struct std__basic_ios_char__std__char_traits_char__* t161 = this158;
  struct std__ctype_char_* t162 = t161->_M_ctype;
  struct std__ctype_char_* r163 = std__ctype_char__const__std____check_facet_std__ctype_char___(t162);
  char t164 = __c159;
  char r165 = std__ctype_char___widen_char__const(r163, t164);
  __retval160 = r165;
  char t166 = __retval160;
  return t166;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v167) {
bb168:
  struct std__basic_ostream_char__std__char_traits_char__* __os169;
  struct std__basic_ostream_char__std__char_traits_char__* __retval170;
  __os169 = v167;
  struct std__basic_ostream_char__std__char_traits_char__* t171 = __os169;
  struct std__basic_ostream_char__std__char_traits_char__* t172 = __os169;
  void** v173 = (void**)t172;
  void* v174 = *((void**)v173);
  unsigned char* cast175 = (unsigned char*)v174;
  long c176 = -24;
  unsigned char* ptr177 = &(cast175)[c176];
  long* cast178 = (long*)ptr177;
  long t179 = *cast178;
  unsigned char* cast180 = (unsigned char*)t172;
  unsigned char* ptr181 = &(cast180)[t179];
  struct std__basic_ostream_char__std__char_traits_char__* cast182 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr181;
  struct std__basic_ios_char__std__char_traits_char__* cast183 = (struct std__basic_ios_char__std__char_traits_char__*)cast182;
  char c184 = 10;
  char r185 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast183, c184);
  struct std__basic_ostream_char__std__char_traits_char__* r186 = std__ostream__put(t171, r185);
  struct std__basic_ostream_char__std__char_traits_char__* r187 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r186);
  __retval170 = r187;
  struct std__basic_ostream_char__std__char_traits_char__* t188 = __retval170;
  return t188;
}

// function: _Z6createv
void create() {
bb189:
  struct CreateAndDestroy fifth190;
  struct CreateAndDestroy seventh191;
  char* cast192 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r193 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast192);
  struct std__basic_ostream_char__std__char_traits_char__* r194 = std__ostream__operator___std__ostream_____(r193, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c195 = 5;
  char* cast196 = (char*)&(_str_7);
  CreateAndDestroy__CreateAndDestroy(&fifth190, c195, cast196);
    char* cast197 = (char*)&_ZGVZ6createvE5sixth;
    char t198 = *cast197;
    char c199 = 0;
    _Bool c200 = ((t198 == c199)) ? 1 : 0;
    if (c200) {
      int r201 = __cxa_guard_acquire(&_ZGVZ6createvE5sixth);
      int c202 = 0;
      _Bool c203 = ((r201 != c202)) ? 1 : 0;
      if (c203) {
        int c204 = 6;
        char* cast205 = (char*)&(_str_8);
        CreateAndDestroy__CreateAndDestroy(&_ZZ6createvE5sixth, c204, cast205);
        void* cast206 = (void*)&CreateAndDestroy___CreateAndDestroy;
        void* cast207 = (void*)&_ZZ6createvE5sixth;
        __cxa_atexit(cast206, cast207, &__dso_handle);
        __cxa_guard_release(&_ZGVZ6createvE5sixth);
      }
    }
    int c208 = 7;
    char* cast209 = (char*)&(_str_7);
    CreateAndDestroy__CreateAndDestroy(&seventh191, c208, cast209);
      char* cast210 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* r211 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast210);
      struct std__basic_ostream_char__std__char_traits_char__* r212 = std__ostream__operator___std__ostream_____(r211, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    {
      CreateAndDestroy___CreateAndDestroy(&seventh191);
    }
  {
    CreateAndDestroy___CreateAndDestroy(&fifth190);
  }
  return;
}

// function: main
int main() {
bb213:
  int __retval214;
  struct CreateAndDestroy second215;
  struct CreateAndDestroy fourth216;
  int c217 = 0;
  __retval214 = c217;
  char* cast218 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r219 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast218);
  struct std__basic_ostream_char__std__char_traits_char__* r220 = std__ostream__operator___std__ostream_____(r219, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c221 = 2;
  char* cast222 = (char*)&(_str_2);
  CreateAndDestroy__CreateAndDestroy(&second215, c221, cast222);
    char* cast223 = (char*)&_ZGVZ4mainE5third;
    char t224 = *cast223;
    char c225 = 0;
    _Bool c226 = ((t224 == c225)) ? 1 : 0;
    if (c226) {
      int r227 = __cxa_guard_acquire(&_ZGVZ4mainE5third);
      int c228 = 0;
      _Bool c229 = ((r227 != c228)) ? 1 : 0;
      if (c229) {
        int c230 = 3;
        char* cast231 = (char*)&(_str_3);
        CreateAndDestroy__CreateAndDestroy(&_ZZ4mainE5third, c230, cast231);
        void* cast232 = (void*)&CreateAndDestroy___CreateAndDestroy;
        void* cast233 = (void*)&_ZZ4mainE5third;
        __cxa_atexit(cast232, cast233, &__dso_handle);
        __cxa_guard_release(&_ZGVZ4mainE5third);
      }
    }
    create();
    char* cast234 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r235 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast234);
    struct std__basic_ostream_char__std__char_traits_char__* r236 = std__ostream__operator___std__ostream_____(r235, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c237 = 4;
    char* cast238 = (char*)&(_str_2);
    CreateAndDestroy__CreateAndDestroy(&fourth216, c237, cast238);
      char* cast239 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r240 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast239);
      struct std__basic_ostream_char__std__char_traits_char__* r241 = std__ostream__operator___std__ostream_____(r240, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c242 = 0;
      __retval214 = c242;
      int t243 = __retval214;
      int ret_val244 = t243;
      {
        CreateAndDestroy___CreateAndDestroy(&fourth216);
      }
      {
        CreateAndDestroy___CreateAndDestroy(&second215);
      }
      return ret_val244;
  int t245 = __retval214;
  return t245;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb246:
  __cxx_global_var_init();
  return;
}

