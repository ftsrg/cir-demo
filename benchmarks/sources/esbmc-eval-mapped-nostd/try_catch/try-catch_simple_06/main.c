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
static const char __cir_eh_type__ZTI5CTest[] = "_ZTI5CTest";
static const char __cir_eh_type__ZTIPc[] = "_ZTIPc";

// Struct definitions (auto-parsed)
struct CDtorDemo { unsigned char __field0; };
struct CTest { unsigned char __field0; };
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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI5CTest[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "Constructing CDtorDemo.\n";
char _str_1[24] = "Destructing CDtorDemo.\n";
char _str_2[40] = "In MyFunc(). Throwing CTest exception.\n";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS5CTest[7] = "5CTest";
char _str_3[10] = "In main.\n";
char _str_4[33] = "In try block, calling MyFunc().\n";
static const char _ZTIPc__n_[] = "_ZTIPc";
static void* _ZTIPc[2] = {(void*)0, (void*)_ZTIPc__n_};
char _str_5[19] = "In catch handler.\n";
char _str_6[30] = "Caught CTest exception type: ";
char _str_7[2] = "\n";
char _str_8[30] = "Caught some other exception: ";
char _str_9[39] = "Back in main. Execution resumes here.\n";
char _str_10[26] = "Exception in CTest class.";
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
void CDtorDemo__CDtorDemo_2(struct CDtorDemo* p0);
void CDtorDemo__CDtorDemo(struct CDtorDemo* p0) { CDtorDemo__CDtorDemo_2(p0); }
void CDtorDemo___CDtorDemo_2(struct CDtorDemo* p0);
void CDtorDemo___CDtorDemo(struct CDtorDemo* p0) { CDtorDemo___CDtorDemo_2(p0); }
void CTest__CTest(struct CTest* p0);
void CTest___CTest(struct CTest* p0);
void MyFunc();
extern int __gxx_personality_v0();
char* CTest__ShowReason___const(struct CTest* p0);
int main();

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v0, int v1) {
bb2:
  int __a3;
  int __b4;
  int __retval5;
  __a3 = v0;
  __b4 = v1;
  int t6 = __a3;
  int t7 = __b4;
  int b8 = t6 | t7;
  __retval5 = b8;
  int t9 = __retval5;
  return t9;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  int __retval13;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t14 = this12;
  struct std__ios_base* base15 = (struct std__ios_base*)((char *)t14 + 0);
  int t16 = base15->_M_streambuf_state;
  __retval13 = t16;
  int t17 = __retval13;
  return t17;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v18, int v19) {
bb20:
  struct std__basic_ios_char__std__char_traits_char__* this21;
  int __state22;
  this21 = v18;
  __state22 = v19;
  struct std__basic_ios_char__std__char_traits_char__* t23 = this21;
  int r24 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t23);
  if (__cir_exc_active) {
    return;
  }
  int t25 = __state22;
  int r26 = std__operator_(r24, t25);
  std__basic_ios_char__std__char_traits_char_____clear(t23, r26);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb27:
  _Bool __retval28;
    _Bool c29 = 0;
    __retval28 = c29;
    _Bool t30 = __retval28;
    return t30;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v31, char* v32) {
bb33:
  char* __c134;
  char* __c235;
  _Bool __retval36;
  __c134 = v31;
  __c235 = v32;
  char* t37 = __c134;
  char t38 = *t37;
  int cast39 = (int)t38;
  char* t40 = __c235;
  char t41 = *t40;
  int cast42 = (int)t41;
  _Bool c43 = ((cast39 == cast42)) ? 1 : 0;
  __retval36 = c43;
  _Bool t44 = __retval36;
  return t44;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v45) {
bb46:
  char* __p47;
  unsigned long __retval48;
  unsigned long __i49;
  __p47 = v45;
  unsigned long c50 = 0;
  __i49 = c50;
    char ref_tmp051;
    while (1) {
      unsigned long t52 = __i49;
      char* t53 = __p47;
      char* ptr54 = &(t53)[t52];
      char c55 = 0;
      ref_tmp051 = c55;
      _Bool r56 = __gnu_cxx__char_traits_char___eq(ptr54, &ref_tmp051);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u57 = !r56;
      if (!u57) break;
      unsigned long t58 = __i49;
      unsigned long u59 = t58 + 1;
      __i49 = u59;
    }
  unsigned long t60 = __i49;
  __retval48 = t60;
  unsigned long t61 = __retval48;
  return t61;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v62) {
bb63:
  char* __s64;
  unsigned long __retval65;
  __s64 = v62;
    _Bool r66 = std____is_constant_evaluated();
    if (r66) {
      char* t67 = __s64;
      unsigned long r68 = __gnu_cxx__char_traits_char___length(t67);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval65 = r68;
      unsigned long t69 = __retval65;
      return t69;
    }
  char* t70 = __s64;
  unsigned long r71 = strlen(t70);
  __retval65 = r71;
  unsigned long t72 = __retval65;
  return t72;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v73, char* v74) {
bb75:
  struct std__basic_ostream_char__std__char_traits_char__* __out76;
  char* __s77;
  struct std__basic_ostream_char__std__char_traits_char__* __retval78;
  __out76 = v73;
  __s77 = v74;
    char* t79 = __s77;
    _Bool cast80 = (_Bool)t79;
    _Bool u81 = !cast80;
    if (u81) {
      struct std__basic_ostream_char__std__char_traits_char__* t82 = __out76;
      void** v83 = (void**)t82;
      void* v84 = *((void**)v83);
      unsigned char* cast85 = (unsigned char*)v84;
      long c86 = -24;
      unsigned char* ptr87 = &(cast85)[c86];
      long* cast88 = (long*)ptr87;
      long t89 = *cast88;
      unsigned char* cast90 = (unsigned char*)t82;
      unsigned char* ptr91 = &(cast90)[t89];
      struct std__basic_ostream_char__std__char_traits_char__* cast92 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr91;
      struct std__basic_ios_char__std__char_traits_char__* cast93 = (struct std__basic_ios_char__std__char_traits_char__*)cast92;
      int t94 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast93, t94);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t95 = __out76;
      char* t96 = __s77;
      char* t97 = __s77;
      unsigned long r98 = std__char_traits_char___length(t97);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast99 = (long)r98;
      struct std__basic_ostream_char__std__char_traits_char__* r100 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t95, t96, cast99);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __out76;
  __retval78 = t101;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __retval78;
  return t102;
}

// function: _ZN9CDtorDemoC2Ev
void CDtorDemo__CDtorDemo_2(struct CDtorDemo* v103) {
bb104:
  struct CDtorDemo* this105;
  this105 = v103;
  struct CDtorDemo* t106 = this105;
  char* cast107 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r108 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast107);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9CDtorDemoD2Ev
void CDtorDemo___CDtorDemo_2(struct CDtorDemo* v109) {
bb110:
  struct CDtorDemo* this111;
  this111 = v109;
  struct CDtorDemo* t112 = this111;
  char* cast113 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r114 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast113);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN5CTestC2Ev
void CTest__CTest(struct CTest* v115) {
bb116:
  struct CTest* this117;
  this117 = v115;
  struct CTest* t118 = this117;
  return;
}

// function: _ZN5CTestD2Ev
void CTest___CTest(struct CTest* v119) {
bb120:
  struct CTest* this121;
  this121 = v119;
  struct CTest* t122 = this121;
  return;
}

// function: _Z6MyFuncv
void MyFunc() {
bb123:
  struct CDtorDemo D124;
  CDtorDemo__CDtorDemo(&D124);
  if (__cir_exc_active) {
    return;
  }
    char* cast125 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r126 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast125);
    if (__cir_exc_active) {
      {
        CDtorDemo___CDtorDemo(&D124);
      }
      return;
    }
    static char exc_buf127[1] = {0};
    struct CTest* exc128 = (struct CTest*)exc_buf127;
    CTest__CTest(exc128);
    if (__cir_exc_active) {
      {
        CDtorDemo___CDtorDemo(&D124);
      }
      return;
    }
    __cir_exc_ptr = (void*)exc128;
    __cir_exc_dtor = (void*)&CTest___CTest;
    __cir_exc_type = (const void*)__cir_eh_type__ZTI5CTest;
    __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI5CTest;
    __cir_exc_active = 1;
    {
      CDtorDemo___CDtorDemo(&D124);
    }
    return;
    __builtin_unreachable();
  return;
}

// function: _ZNK5CTest10ShowReasonEv
char* CTest__ShowReason___const(struct CTest* v129) {
bb130:
  struct CTest* this131;
  char* __retval132;
  this131 = v129;
  struct CTest* t133 = this131;
  char* cast134 = (char*)&(_str_10);
  __retval132 = cast134;
  char* t135 = __retval132;
  return t135;
}

// function: main
int main() {
bb136:
  int __retval137;
  int c138 = 0;
  __retval137 = c138;
  char* cast139 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r140 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast139);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct CTest E141;
    char* str142;
      char* cast144 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r145 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast144);
      if (__cir_exc_active) {
        goto cir_try_dispatch143;
      }
      MyFunc();
      if (__cir_exc_active) {
        goto cir_try_dispatch143;
      }
    cir_try_dispatch143: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI5CTest) {
      int ca_tok146 = 0;
      void* ca_exn147 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        E141 = *(struct CTest*)__cir_exc_ptr;
          char* cast148 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r149 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast148);
          if (__cir_exc_active) {
            {
              CTest___CTest(&E141);
            }
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* cast150 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r151 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast150);
          if (__cir_exc_active) {
            {
              CTest___CTest(&E141);
            }
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* r152 = CTest__ShowReason___const(&E141);
          if (__cir_exc_active) {
            {
              CTest___CTest(&E141);
            }
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_ostream_char__std__char_traits_char__* r153 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, r152);
          if (__cir_exc_active) {
            {
              CTest___CTest(&E141);
            }
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* cast154 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r155 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r153, cast154);
          if (__cir_exc_active) {
            {
              CTest___CTest(&E141);
            }
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        {
          CTest___CTest(&E141);
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPc) {
      int ca_tok156 = 0;
      void* ca_exn157 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        str142 = *(char**)__cir_exc_ptr;
        char* cast158 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* r159 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast158);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* t160 = str142;
        struct std__basic_ostream_char__std__char_traits_char__* r161 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r159, t160);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast162 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r163 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r161, cast162);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else {
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    }
    }
  char* cast164 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r165 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast164);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int t166 = __retval137;
  return t166;
}

