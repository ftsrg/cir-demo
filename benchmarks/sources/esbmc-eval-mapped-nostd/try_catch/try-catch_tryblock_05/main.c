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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTI1E[] = "_ZTI1E";

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct B { unsigned char __field0; };
struct D { unsigned char __field0; };
struct E { char* error; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
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

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1E[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "Exception in D()";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1E[3] = "1E";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[39] = "Handler of function try block of D(): ";
char _str_2[12] = "~B() called";
char _str_3[12] = "~D() called";
extern int __gxx_personality_v0();
void B__B(struct B* p0);
void E__E(struct E* p0, char* p1);
void B___B(struct B* p0);
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
void D__D_2(struct D* p0);
void D__D(struct D* p0) { D__D_2(p0); }
void D___D(struct D* p0);
int main();

// function: _ZN1BC2Ev
void B__B(struct B* v0) {
bb1:
  struct B* this2;
  this2 = v0;
  struct B* t3 = this2;
  return;
}

// function: _ZN1EC2EPKc
void E__E(struct E* v4, char* v5) {
bb6:
  struct E* this7;
  char* arg8;
  this7 = v4;
  arg8 = v5;
  struct E* t9 = this7;
  char* t10 = arg8;
  t9->error = t10;
  return;
}

// function: _ZN1BD2Ev
void B___B(struct B* v11) {
bb12:
  struct B* this13;
  this13 = v11;
  struct B* t14 = this13;
  char* cast15 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast15);
  if (__cir_exc_active) {
    return;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r17 = std__ostream__operator___std__ostream_____(r16, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v18, int v19) {
bb20:
  int __a21;
  int __b22;
  int __retval23;
  __a21 = v18;
  __b22 = v19;
  int t24 = __a21;
  int t25 = __b22;
  int b26 = t24 | t25;
  __retval23 = b26;
  int t27 = __retval23;
  return t27;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v28) {
bb29:
  struct std__basic_ios_char__std__char_traits_char__* this30;
  int __retval31;
  this30 = v28;
  struct std__basic_ios_char__std__char_traits_char__* t32 = this30;
  struct std__ios_base* base33 = (struct std__ios_base*)((char *)t32 + 0);
  int t34 = base33->_M_streambuf_state;
  __retval31 = t34;
  int t35 = __retval31;
  return t35;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v36, int v37) {
bb38:
  struct std__basic_ios_char__std__char_traits_char__* this39;
  int __state40;
  this39 = v36;
  __state40 = v37;
  struct std__basic_ios_char__std__char_traits_char__* t41 = this39;
  int r42 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t41);
  if (__cir_exc_active) {
    return;
  }
  int t43 = __state40;
  int r44 = std__operator_(r42, t43);
  std__basic_ios_char__std__char_traits_char_____clear(t41, r44);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb45:
  _Bool __retval46;
    _Bool c47 = 0;
    __retval46 = c47;
    _Bool t48 = __retval46;
    return t48;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v49, char* v50) {
bb51:
  char* __c152;
  char* __c253;
  _Bool __retval54;
  __c152 = v49;
  __c253 = v50;
  char* t55 = __c152;
  char t56 = *t55;
  int cast57 = (int)t56;
  char* t58 = __c253;
  char t59 = *t58;
  int cast60 = (int)t59;
  _Bool c61 = ((cast57 == cast60)) ? 1 : 0;
  __retval54 = c61;
  _Bool t62 = __retval54;
  return t62;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v63) {
bb64:
  char* __p65;
  unsigned long __retval66;
  unsigned long __i67;
  __p65 = v63;
  unsigned long c68 = 0;
  __i67 = c68;
    char ref_tmp069;
    while (1) {
      unsigned long t70 = __i67;
      char* t71 = __p65;
      char* ptr72 = &(t71)[t70];
      char c73 = 0;
      ref_tmp069 = c73;
      _Bool r74 = __gnu_cxx__char_traits_char___eq(ptr72, &ref_tmp069);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u75 = !r74;
      if (!u75) break;
      unsigned long t76 = __i67;
      unsigned long u77 = t76 + 1;
      __i67 = u77;
    }
  unsigned long t78 = __i67;
  __retval66 = t78;
  unsigned long t79 = __retval66;
  return t79;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v80) {
bb81:
  char* __s82;
  unsigned long __retval83;
  __s82 = v80;
    _Bool r84 = std____is_constant_evaluated();
    if (r84) {
      char* t85 = __s82;
      unsigned long r86 = __gnu_cxx__char_traits_char___length(t85);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval83 = r86;
      unsigned long t87 = __retval83;
      return t87;
    }
  char* t88 = __s82;
  unsigned long r89 = strlen(t88);
  __retval83 = r89;
  unsigned long t90 = __retval83;
  return t90;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v91, char* v92) {
bb93:
  struct std__basic_ostream_char__std__char_traits_char__* __out94;
  char* __s95;
  struct std__basic_ostream_char__std__char_traits_char__* __retval96;
  __out94 = v91;
  __s95 = v92;
    char* t97 = __s95;
    _Bool cast98 = (_Bool)t97;
    _Bool u99 = !cast98;
    if (u99) {
      struct std__basic_ostream_char__std__char_traits_char__* t100 = __out94;
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
      int t112 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast111, t112);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t113 = __out94;
      char* t114 = __s95;
      char* t115 = __s95;
      unsigned long r116 = std__char_traits_char___length(t115);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast117 = (long)r116;
      struct std__basic_ostream_char__std__char_traits_char__* r118 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t113, t114, cast117);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __out94;
  __retval96 = t119;
  struct std__basic_ostream_char__std__char_traits_char__* t120 = __retval96;
  return t120;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v121, void* v122) {
bb123:
  struct std__basic_ostream_char__std__char_traits_char__* this124;
  void* __pf125;
  struct std__basic_ostream_char__std__char_traits_char__* __retval126;
  this124 = v121;
  __pf125 = v122;
  struct std__basic_ostream_char__std__char_traits_char__* t127 = this124;
  void* t128 = __pf125;
  struct std__basic_ostream_char__std__char_traits_char__* r129 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t128)(t127);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval126 = r129;
  struct std__basic_ostream_char__std__char_traits_char__* t130 = __retval126;
  return t130;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v131) {
bb132:
  struct std__basic_ostream_char__std__char_traits_char__* __os133;
  struct std__basic_ostream_char__std__char_traits_char__* __retval134;
  __os133 = v131;
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __os133;
  struct std__basic_ostream_char__std__char_traits_char__* r136 = std__ostream__flush(t135);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval134 = r136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval134;
  return t137;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v138) {
bb139:
  struct std__ctype_char_* __f140;
  struct std__ctype_char_* __retval141;
  __f140 = v138;
    struct std__ctype_char_* t142 = __f140;
    _Bool cast143 = (_Bool)t142;
    _Bool u144 = !cast143;
    if (u144) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t145 = __f140;
  __retval141 = t145;
  struct std__ctype_char_* t146 = __retval141;
  return t146;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v147, char v148) {
bb149:
  struct std__ctype_char_* this150;
  char __c151;
  char __retval152;
  this150 = v147;
  __c151 = v148;
  struct std__ctype_char_* t153 = this150;
    char t154 = t153->_M_widen_ok;
    _Bool cast155 = (_Bool)t154;
    if (cast155) {
      char t156 = __c151;
      unsigned char cast157 = (unsigned char)t156;
      unsigned long cast158 = (unsigned long)cast157;
      char t159 = t153->_M_widen[cast158];
      __retval152 = t159;
      char t160 = __retval152;
      return t160;
    }
  std__ctype_char____M_widen_init___const(t153);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t161 = __c151;
  void** v162 = (void**)t153;
  void* v163 = *((void**)v162);
  char vcall166 = (char)__VERIFIER_virtual_call_char_char(t153, 6, t161);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval152 = vcall166;
  char t167 = __retval152;
  return t167;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v168, char v169) {
bb170:
  struct std__basic_ios_char__std__char_traits_char__* this171;
  char __c172;
  char __retval173;
  this171 = v168;
  __c172 = v169;
  struct std__basic_ios_char__std__char_traits_char__* t174 = this171;
  struct std__ctype_char_* t175 = t174->_M_ctype;
  struct std__ctype_char_* r176 = std__ctype_char__const__std____check_facet_std__ctype_char___(t175);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t177 = __c172;
  char r178 = std__ctype_char___widen_char__const(r176, t177);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval173 = r178;
  char t179 = __retval173;
  return t179;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v180) {
bb181:
  struct std__basic_ostream_char__std__char_traits_char__* __os182;
  struct std__basic_ostream_char__std__char_traits_char__* __retval183;
  __os182 = v180;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = __os182;
  struct std__basic_ostream_char__std__char_traits_char__* t185 = __os182;
  void** v186 = (void**)t185;
  void* v187 = *((void**)v186);
  unsigned char* cast188 = (unsigned char*)v187;
  long c189 = -24;
  unsigned char* ptr190 = &(cast188)[c189];
  long* cast191 = (long*)ptr190;
  long t192 = *cast191;
  unsigned char* cast193 = (unsigned char*)t185;
  unsigned char* ptr194 = &(cast193)[t192];
  struct std__basic_ostream_char__std__char_traits_char__* cast195 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr194;
  struct std__basic_ios_char__std__char_traits_char__* cast196 = (struct std__basic_ios_char__std__char_traits_char__*)cast195;
  char c197 = 10;
  char r198 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast196, c197);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r199 = std__ostream__put(t184, r198);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r200 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r199);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval183 = r200;
  struct std__basic_ostream_char__std__char_traits_char__* t201 = __retval183;
  return t201;
}

// function: _ZN1DC2Ev
void D__D_2(struct D* v202) {
bb203:
  struct D* this204;
  this204 = v202;
  struct D* t205 = this204;
    struct E* e206;
      struct B* base208 = (struct B*)((char *)t205 + 0);
      B__B(base208);
      if (__cir_exc_active) {
        goto cir_try_dispatch207;
      }
        static char exc_buf209[8] = {0};
        struct E* exc210 = (struct E*)exc_buf209;
        char* cast211 = (char*)&(_str);
        E__E(exc210, cast211);
        if (__cir_exc_active) {
          {
            struct B* base212 = (struct B*)((char *)t205 + 0);
            B___B(base212);
          }
          goto cir_try_dispatch207;
        }
        __cir_exc_ptr = (void*)exc210;
        __cir_exc_dtor = (void*)0;
        __cir_exc_type = (const void*)__cir_eh_type__ZTI1E;
        __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI1E;
        __cir_exc_active = 1;
        {
          struct B* base213 = (struct B*)((char *)t205 + 0);
          B___B(base213);
        }
        goto cir_try_dispatch207;
        __builtin_unreachable();
    cir_try_dispatch207: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok214 = 0;
      void* ca_exn215 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e206 = (struct E*)__cir_exc_ptr;
        char* cast216 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r217 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast216);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
        struct E* t218 = e206;
        char* t219 = t218->error;
        struct std__basic_ostream_char__std__char_traits_char__* r220 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r217, t219);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r221 = std__ostream__operator___std__ostream_____(r220, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else {
      __cir_exc_active = 1;
      return;
    return;
    }
    }
  return;
}

// function: _ZN1DD2Ev
void D___D(struct D* v222) {
bb223:
  struct D* this224;
  this224 = v222;
  struct D* t225 = this224;
    char* cast226 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r227 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast226);
    if (__cir_exc_active) {
      {
        struct B* base228 = (struct B*)((char *)t225 + 0);
        B___B(base228);
      }
      return;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r229 = std__ostream__operator___std__ostream_____(r227, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        struct B* base230 = (struct B*)((char *)t225 + 0);
        B___B(base230);
      }
      return;
    }
  {
    struct B* base231 = (struct B*)((char *)t225 + 0);
    B___B(base231);
  }
  return;
}

// function: main
int main() {
bb232:
  int __retval233;
  int c234 = 0;
  __retval233 = c234;
    struct D val235;
      D__D(&val235);
      if (__cir_exc_active) {
        goto cir_try_dispatch236;
      }
      {
        D___D(&val235);
      }
    cir_try_dispatch236: ;
    if (__cir_exc_active) {
    {
      int ca_tok237 = 0;
      void* ca_exn238 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    }
  int t239 = __retval233;
  return t239;
}

