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
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

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

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN9CDtorDemoC2Ev
void CDtorDemo__CDtorDemo_2(struct CDtorDemo* v0) {
bb1:
  struct CDtorDemo* this2;
  this2 = v0;
  struct CDtorDemo* t3 = this2;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  return;
}

// function: _ZN9CDtorDemoD2Ev
void CDtorDemo___CDtorDemo_2(struct CDtorDemo* v6) {
bb7:
  struct CDtorDemo* this8;
  this8 = v6;
  struct CDtorDemo* t9 = this8;
  char* cast10 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  return;
}

// function: _ZN5CTestC2Ev
void CTest__CTest(struct CTest* v12) {
bb13:
  struct CTest* this14;
  this14 = v12;
  struct CTest* t15 = this14;
  return;
}

// function: _ZN5CTestD2Ev
void CTest___CTest(struct CTest* v16) {
bb17:
  struct CTest* this18;
  this18 = v16;
  struct CTest* t19 = this18;
  return;
}

// function: _Z6MyFuncv
void MyFunc() {
bb20:
  struct CDtorDemo D21;
  CDtorDemo__CDtorDemo(&D21);
  if (__cir_exc_active) {
    return;
  }
    char* cast22 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    static char exc_buf24[1] = {0};
    struct CTest* exc25 = (struct CTest*)exc_buf24;
    CTest__CTest(exc25);
    if (__cir_exc_active) {
      {
        CDtorDemo___CDtorDemo(&D21);
      }
      return;
    }
    __cir_exc_ptr = (void*)exc25;
    __cir_exc_dtor = (void*)&CTest___CTest;
    __cir_exc_type = (const void*)__cir_eh_type__ZTI5CTest;
    __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI5CTest;
    __cir_exc_active = 1;
    {
      CDtorDemo___CDtorDemo(&D21);
    }
    return;
    __builtin_unreachable();
  return;
}

// function: _ZNK5CTest10ShowReasonEv
char* CTest__ShowReason___const(struct CTest* v26) {
bb27:
  struct CTest* this28;
  char* __retval29;
  this28 = v26;
  struct CTest* t30 = this28;
  char* cast31 = (char*)&(_str_10);
  __retval29 = cast31;
  char* t32 = __retval29;
  return t32;
}

// function: main
int main() {
bb33:
  int __retval34;
  int c35 = 0;
  __retval34 = c35;
  char* cast36 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
    struct CTest E38;
    char* str39;
      char* cast41 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      MyFunc();
      if (__cir_exc_active) {
        goto cir_try_dispatch40;
      }
    cir_try_dispatch40: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI5CTest) {
      int ca_tok43 = 0;
      void* ca_exn44 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        E38 = *(struct CTest*)__cir_exc_ptr;
          char* cast45 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std46;
          __VERIFIER_nondet_memory(&std46, sizeof(std46));
          char* cast47 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std48;
          __VERIFIER_nondet_memory(&std48, sizeof(std48));
          char* r49 = CTest__ShowReason___const(&E38);
          if (__cir_exc_active) {
            {
              CTest___CTest(&E38);
            }
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_ostream_char__std__char_traits_char__* std50;
          __VERIFIER_nondet_memory(&std50, sizeof(std50));
          char* cast51 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std52;
          __VERIFIER_nondet_memory(&std52, sizeof(std52));
        {
          CTest___CTest(&E38);
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPc) {
      int ca_tok53 = 0;
      void* ca_exn54 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        str39 = *(char**)__cir_exc_ptr;
        char* cast55 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        char* t57 = str39;
        struct std__basic_ostream_char__std__char_traits_char__* std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
        char* cast59 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
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
  char* cast61 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std62;
  __VERIFIER_nondet_memory(&std62, sizeof(std62));
  int t63 = __retval34;
  return t63;
}

