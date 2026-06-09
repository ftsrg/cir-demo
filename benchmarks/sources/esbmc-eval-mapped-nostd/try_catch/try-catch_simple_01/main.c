extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTIi[] = "_ZTIi";

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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str[12] = "caught int\n";
void myfunction();
extern int __gxx_personality_v0();
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
int main();

// function: _Z10myfunctionv
void myfunction() {
bb0:
  static char exc_buf1[4] = {0};
  int* exc2 = (int*)exc_buf1;
  int c3 = 1;
  *exc2 = c3;
  __cir_exc_ptr = (void*)exc2;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTIi;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIi;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v4, int v5) {
bb6:
  int __a7;
  int __b8;
  int __retval9;
  __a7 = v4;
  __b8 = v5;
  int t10 = __a7;
  int t11 = __b8;
  int b12 = t10 | t11;
  __retval9 = b12;
  int t13 = __retval9;
  return t13;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v14) {
bb15:
  struct std__basic_ios_char__std__char_traits_char__* this16;
  int __retval17;
  this16 = v14;
  struct std__basic_ios_char__std__char_traits_char__* t18 = this16;
  struct std__ios_base* base19 = (struct std__ios_base*)((char *)t18 + 0);
  int t20 = base19->_M_streambuf_state;
  __retval17 = t20;
  int t21 = __retval17;
  return t21;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v22, int v23) {
bb24:
  struct std__basic_ios_char__std__char_traits_char__* this25;
  int __state26;
  this25 = v22;
  __state26 = v23;
  struct std__basic_ios_char__std__char_traits_char__* t27 = this25;
  int r28 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t27);
  if (__cir_exc_active) {
    return;
  }
  int t29 = __state26;
  int r30 = std__operator_(r28, t29);
  std__basic_ios_char__std__char_traits_char_____clear(t27, r30);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb31:
  _Bool __retval32;
    _Bool c33 = 0;
    __retval32 = c33;
    _Bool t34 = __retval32;
    return t34;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v35, char* v36) {
bb37:
  char* __c138;
  char* __c239;
  _Bool __retval40;
  __c138 = v35;
  __c239 = v36;
  char* t41 = __c138;
  char t42 = *t41;
  int cast43 = (int)t42;
  char* t44 = __c239;
  char t45 = *t44;
  int cast46 = (int)t45;
  _Bool c47 = ((cast43 == cast46)) ? 1 : 0;
  __retval40 = c47;
  _Bool t48 = __retval40;
  return t48;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v49) {
bb50:
  char* __p51;
  unsigned long __retval52;
  unsigned long __i53;
  __p51 = v49;
  unsigned long c54 = 0;
  __i53 = c54;
    char ref_tmp055;
    while (1) {
      unsigned long t56 = __i53;
      char* t57 = __p51;
      char* ptr58 = &(t57)[t56];
      char c59 = 0;
      ref_tmp055 = c59;
      _Bool r60 = __gnu_cxx__char_traits_char___eq(ptr58, &ref_tmp055);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u61 = !r60;
      if (!u61) break;
      unsigned long t62 = __i53;
      unsigned long u63 = t62 + 1;
      __i53 = u63;
    }
  unsigned long t64 = __i53;
  __retval52 = t64;
  unsigned long t65 = __retval52;
  return t65;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v66) {
bb67:
  char* __s68;
  unsigned long __retval69;
  __s68 = v66;
    _Bool r70 = std____is_constant_evaluated();
    if (r70) {
      char* t71 = __s68;
      unsigned long r72 = __gnu_cxx__char_traits_char___length(t71);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval69 = r72;
      unsigned long t73 = __retval69;
      return t73;
    }
  char* t74 = __s68;
  unsigned long r75 = strlen(t74);
  __retval69 = r75;
  unsigned long t76 = __retval69;
  return t76;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v77, char* v78) {
bb79:
  struct std__basic_ostream_char__std__char_traits_char__* __out80;
  char* __s81;
  struct std__basic_ostream_char__std__char_traits_char__* __retval82;
  __out80 = v77;
  __s81 = v78;
    char* t83 = __s81;
    _Bool cast84 = (_Bool)t83;
    _Bool u85 = !cast84;
    if (u85) {
      struct std__basic_ostream_char__std__char_traits_char__* t86 = __out80;
      void** v87 = (void**)t86;
      void* v88 = *((void**)v87);
      unsigned char* cast89 = (unsigned char*)v88;
      long c90 = -24;
      unsigned char* ptr91 = &(cast89)[c90];
      long* cast92 = (long*)ptr91;
      long t93 = *cast92;
      unsigned char* cast94 = (unsigned char*)t86;
      unsigned char* ptr95 = &(cast94)[t93];
      struct std__basic_ostream_char__std__char_traits_char__* cast96 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr95;
      struct std__basic_ios_char__std__char_traits_char__* cast97 = (struct std__basic_ios_char__std__char_traits_char__*)cast96;
      int t98 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast97, t98);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t99 = __out80;
      char* t100 = __s81;
      char* t101 = __s81;
      unsigned long r102 = std__char_traits_char___length(t101);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast103 = (long)r102;
      struct std__basic_ostream_char__std__char_traits_char__* r104 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t99, t100, cast103);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t105 = __out80;
  __retval82 = t105;
  struct std__basic_ostream_char__std__char_traits_char__* t106 = __retval82;
  return t106;
}

// function: main
int main() {
bb107:
  int __retval108;
  int c109 = 0;
  __retval108 = c109;
    int unnamed110;
      myfunction();
      if (__cir_exc_active) {
        goto cir_try_dispatch111;
      }
    cir_try_dispatch111: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIi) {
      int ca_tok112 = 0;
      void* ca_exn113 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed110 = *(int*)__cir_exc_ptr;
        char* cast114 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r115 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast114);
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
  int c116 = 0;
  __retval108 = c116;
  int t117 = __retval108;
  return t117;
}

