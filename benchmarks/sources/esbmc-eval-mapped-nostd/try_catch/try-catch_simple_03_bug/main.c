extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTI21DivideByZeroException[] = "_ZTI21DivideByZeroException";

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
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };
struct anon_struct_1 { unsigned char* __field0[5]; };
struct std__exception { void* __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct DivideByZeroException { struct std__exception __field0; char* message; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVSt9exception[];
extern unsigned char _ZTI21DivideByZeroException[];
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS21DivideByZeroException[24] = "21DivideByZeroException";
static const char _ZTISt9exception__n_[] = "_ZTISt9exception";
static void* _ZTISt9exception[2] = {(void*)0, (void*)_ZTISt9exception__n_};
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[42] = "Enter two integers (end-of-file to end): ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[18] = "The quotient is: ";
char _str_2[21] = "Exception occurred: ";
char _str_3[2] = "0";
char _str_4[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_simple_03_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[43] = "\nEnter two integers (end-of-file to end): ";
char _str_6[28] = "attempted to divide by zero";
extern void *_ZTVSt9exception[];
void DivideByZeroException__DivideByZeroException(struct DivideByZeroException* p0);
void DivideByZeroException___DivideByZeroException_2(struct DivideByZeroException* p0);
double quotient(int p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
int std__operator_(int p0, int p1);
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern int __gxx_personality_v0();
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
char* DivideByZeroException__whato___const(struct DivideByZeroException* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void std__exception__exception(struct std__exception* p0);
void std__exception___exception(struct std__exception* p0) {}
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void DivideByZeroException___DivideByZeroException(struct DivideByZeroException* p0);
extern char* std__exception__what___const(struct std__exception* p0);

void *_ZTV21DivideByZeroException[] = { (void*)0, (void*)0, (void*)&DivideByZeroException___DivideByZeroException_2, (void*)&DivideByZeroException___DivideByZeroException, (void*)&std__exception__what___const };

// function: _ZN21DivideByZeroExceptionC2Ev
void DivideByZeroException__DivideByZeroException(struct DivideByZeroException* v0) {
bb1:
  struct DivideByZeroException* this2;
  this2 = v0;
  struct DivideByZeroException* t3 = this2;
  struct std__exception* base4 = (struct std__exception*)((char *)t3 + 0);
  std__exception__exception(base4);
    void* v5 = (void*)&_ZTV21DivideByZeroException[2];
    void** v6 = (void**)t3;
    *(void**)(v6) = (void*)v5;
    char* cast7 = (char*)&(_str_6);
    t3->message = cast7;
  return;
}

// function: _ZN21DivideByZeroExceptionD2Ev
void DivideByZeroException___DivideByZeroException_2(struct DivideByZeroException* v8) {
bb9:
  struct DivideByZeroException* this10;
  this10 = v8;
  struct DivideByZeroException* t11 = this10;
  {
    struct std__exception* base12 = (struct std__exception*)((char *)t11 + 0);
    std__exception___exception(base12);
  }
  return;
}

// function: _Z8quotientii
double quotient(int v13, int v14) {
bb15:
  int numerator16;
  int denominator17;
  double __retval18;
  numerator16 = v13;
  denominator17 = v14;
    int t19 = denominator17;
    int c20 = 0;
    _Bool c21 = ((t19 == c20)) ? 1 : 0;
    if (c21) {
      static char exc_buf22[16] = {0};
      struct DivideByZeroException* exc23 = (struct DivideByZeroException*)exc_buf22;
      DivideByZeroException__DivideByZeroException(exc23);
      if (__cir_exc_active) {
        double __cir_eh_ret = (double)0;
        return __cir_eh_ret;
      }
      __cir_exc_ptr = (void*)exc23;
      __cir_exc_dtor = (void*)&DivideByZeroException___DivideByZeroException_2;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI21DivideByZeroException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI21DivideByZeroException;
      __cir_exc_active = 1;
      { double __cir_eh_ret = (double)0; return __cir_eh_ret; }
      __builtin_unreachable();
    }
  int t24 = numerator16;
  double cast25 = (double)t24;
  __retval18 = cast25;
  double t26 = __retval18;
  return t26;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v27, int v28) {
bb29:
  int __a30;
  int __b31;
  int __retval32;
  __a30 = v27;
  __b31 = v28;
  int t33 = __a30;
  int t34 = __b31;
  int b35 = t33 | t34;
  __retval32 = b35;
  int t36 = __retval32;
  return t36;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v37) {
bb38:
  struct std__basic_ios_char__std__char_traits_char__* this39;
  int __retval40;
  this39 = v37;
  struct std__basic_ios_char__std__char_traits_char__* t41 = this39;
  struct std__ios_base* base42 = (struct std__ios_base*)((char *)t41 + 0);
  int t43 = base42->_M_streambuf_state;
  __retval40 = t43;
  int t44 = __retval40;
  return t44;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v45, int v46) {
bb47:
  struct std__basic_ios_char__std__char_traits_char__* this48;
  int __state49;
  this48 = v45;
  __state49 = v46;
  struct std__basic_ios_char__std__char_traits_char__* t50 = this48;
  int r51 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t50);
  if (__cir_exc_active) {
    return;
  }
  int t52 = __state49;
  int r53 = std__operator__2(r51, t52);
  std__basic_ios_char__std__char_traits_char_____clear(t50, r53);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb54:
  _Bool __retval55;
    _Bool c56 = 0;
    __retval55 = c56;
    _Bool t57 = __retval55;
    return t57;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v58, char* v59) {
bb60:
  char* __c161;
  char* __c262;
  _Bool __retval63;
  __c161 = v58;
  __c262 = v59;
  char* t64 = __c161;
  char t65 = *t64;
  int cast66 = (int)t65;
  char* t67 = __c262;
  char t68 = *t67;
  int cast69 = (int)t68;
  _Bool c70 = ((cast66 == cast69)) ? 1 : 0;
  __retval63 = c70;
  _Bool t71 = __retval63;
  return t71;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v72) {
bb73:
  char* __p74;
  unsigned long __retval75;
  unsigned long __i76;
  __p74 = v72;
  unsigned long c77 = 0;
  __i76 = c77;
    char ref_tmp078;
    while (1) {
      unsigned long t79 = __i76;
      char* t80 = __p74;
      char* ptr81 = &(t80)[t79];
      char c82 = 0;
      ref_tmp078 = c82;
      _Bool r83 = __gnu_cxx__char_traits_char___eq(ptr81, &ref_tmp078);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u84 = !r83;
      if (!u84) break;
      unsigned long t85 = __i76;
      unsigned long u86 = t85 + 1;
      __i76 = u86;
    }
  unsigned long t87 = __i76;
  __retval75 = t87;
  unsigned long t88 = __retval75;
  return t88;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v89) {
bb90:
  char* __s91;
  unsigned long __retval92;
  __s91 = v89;
    _Bool r93 = std____is_constant_evaluated();
    if (r93) {
      char* t94 = __s91;
      unsigned long r95 = __gnu_cxx__char_traits_char___length(t94);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval92 = r95;
      unsigned long t96 = __retval92;
      return t96;
    }
  char* t97 = __s91;
  unsigned long r98 = strlen(t97);
  __retval92 = r98;
  unsigned long t99 = __retval92;
  return t99;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v100, char* v101) {
bb102:
  struct std__basic_ostream_char__std__char_traits_char__* __out103;
  char* __s104;
  struct std__basic_ostream_char__std__char_traits_char__* __retval105;
  __out103 = v100;
  __s104 = v101;
    char* t106 = __s104;
    _Bool cast107 = (_Bool)t106;
    _Bool u108 = !cast107;
    if (u108) {
      struct std__basic_ostream_char__std__char_traits_char__* t109 = __out103;
      void** v110 = (void**)t109;
      void* v111 = *((void**)v110);
      unsigned char* cast112 = (unsigned char*)v111;
      long c113 = -24;
      unsigned char* ptr114 = &(cast112)[c113];
      long* cast115 = (long*)ptr114;
      long t116 = *cast115;
      unsigned char* cast117 = (unsigned char*)t109;
      unsigned char* ptr118 = &(cast117)[t116];
      struct std__basic_ostream_char__std__char_traits_char__* cast119 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr118;
      struct std__basic_ios_char__std__char_traits_char__* cast120 = (struct std__basic_ios_char__std__char_traits_char__*)cast119;
      int t121 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast120, t121);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t122 = __out103;
      char* t123 = __s104;
      char* t124 = __s104;
      unsigned long r125 = std__char_traits_char___length(t124);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast126 = (long)r125;
      struct std__basic_ostream_char__std__char_traits_char__* r127 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t122, t123, cast126);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t128 = __out103;
  __retval105 = t128;
  struct std__basic_ostream_char__std__char_traits_char__* t129 = __retval105;
  return t129;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v130, int v131) {
bb132:
  int __a133;
  int __b134;
  int __retval135;
  __a133 = v130;
  __b134 = v131;
  int t136 = __a133;
  int t137 = __b134;
  int b138 = t136 & t137;
  __retval135 = b138;
  int t139 = __retval135;
  return t139;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v140) {
bb141:
  struct std__basic_ios_char__std__char_traits_char__* this142;
  _Bool __retval143;
  this142 = v140;
  struct std__basic_ios_char__std__char_traits_char__* t144 = this142;
  int r145 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t144);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t146 = _ZNSt8ios_base6badbitE_const;
  int t147 = _ZNSt8ios_base7failbitE_const;
  int r148 = std__operator__2(t146, t147);
  int r149 = std__operator_(r145, r148);
  int c150 = 0;
  _Bool c151 = ((r149 != c150)) ? 1 : 0;
  __retval143 = c151;
  _Bool t152 = __retval143;
  return t152;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* v153) {
bb154:
  struct std__basic_ios_char__std__char_traits_char__* this155;
  _Bool __retval156;
  this155 = v153;
  struct std__basic_ios_char__std__char_traits_char__* t157 = this155;
  _Bool r158 = std__basic_ios_char__std__char_traits_char_____fail___const(t157);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool u159 = !r158;
  __retval156 = u159;
  _Bool t160 = __retval156;
  return t160;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v161, void* v162) {
bb163:
  struct std__basic_ostream_char__std__char_traits_char__* this164;
  void* __pf165;
  struct std__basic_ostream_char__std__char_traits_char__* __retval166;
  this164 = v161;
  __pf165 = v162;
  struct std__basic_ostream_char__std__char_traits_char__* t167 = this164;
  void* t168 = __pf165;
  struct std__basic_ostream_char__std__char_traits_char__* r169 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t168)(t167);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval166 = r169;
  struct std__basic_ostream_char__std__char_traits_char__* t170 = __retval166;
  return t170;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v171) {
bb172:
  struct std__basic_ostream_char__std__char_traits_char__* __os173;
  struct std__basic_ostream_char__std__char_traits_char__* __retval174;
  __os173 = v171;
  struct std__basic_ostream_char__std__char_traits_char__* t175 = __os173;
  struct std__basic_ostream_char__std__char_traits_char__* r176 = std__ostream__flush(t175);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval174 = r176;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __retval174;
  return t177;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v178) {
bb179:
  struct std__ctype_char_* __f180;
  struct std__ctype_char_* __retval181;
  __f180 = v178;
    struct std__ctype_char_* t182 = __f180;
    _Bool cast183 = (_Bool)t182;
    _Bool u184 = !cast183;
    if (u184) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t185 = __f180;
  __retval181 = t185;
  struct std__ctype_char_* t186 = __retval181;
  return t186;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v187, char v188) {
bb189:
  struct std__ctype_char_* this190;
  char __c191;
  char __retval192;
  this190 = v187;
  __c191 = v188;
  struct std__ctype_char_* t193 = this190;
    char t194 = t193->_M_widen_ok;
    _Bool cast195 = (_Bool)t194;
    if (cast195) {
      char t196 = __c191;
      unsigned char cast197 = (unsigned char)t196;
      unsigned long cast198 = (unsigned long)cast197;
      char t199 = t193->_M_widen[cast198];
      __retval192 = t199;
      char t200 = __retval192;
      return t200;
    }
  std__ctype_char____M_widen_init___const(t193);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t201 = __c191;
  void** v202 = (void**)t193;
  void* v203 = *((void**)v202);
  char vcall206 = (char)__VERIFIER_virtual_call_char_char(t193, 6, t201);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval192 = vcall206;
  char t207 = __retval192;
  return t207;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v208, char v209) {
bb210:
  struct std__basic_ios_char__std__char_traits_char__* this211;
  char __c212;
  char __retval213;
  this211 = v208;
  __c212 = v209;
  struct std__basic_ios_char__std__char_traits_char__* t214 = this211;
  struct std__ctype_char_* t215 = t214->_M_ctype;
  struct std__ctype_char_* r216 = std__ctype_char__const__std____check_facet_std__ctype_char___(t215);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t217 = __c212;
  char r218 = std__ctype_char___widen_char__const(r216, t217);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval213 = r218;
  char t219 = __retval213;
  return t219;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v220) {
bb221:
  struct std__basic_ostream_char__std__char_traits_char__* __os222;
  struct std__basic_ostream_char__std__char_traits_char__* __retval223;
  __os222 = v220;
  struct std__basic_ostream_char__std__char_traits_char__* t224 = __os222;
  struct std__basic_ostream_char__std__char_traits_char__* t225 = __os222;
  void** v226 = (void**)t225;
  void* v227 = *((void**)v226);
  unsigned char* cast228 = (unsigned char*)v227;
  long c229 = -24;
  unsigned char* ptr230 = &(cast228)[c229];
  long* cast231 = (long*)ptr230;
  long t232 = *cast231;
  unsigned char* cast233 = (unsigned char*)t225;
  unsigned char* ptr234 = &(cast233)[t232];
  struct std__basic_ostream_char__std__char_traits_char__* cast235 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr234;
  struct std__basic_ios_char__std__char_traits_char__* cast236 = (struct std__basic_ios_char__std__char_traits_char__*)cast235;
  char c237 = 10;
  char r238 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast236, c237);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__ostream__put(t224, r238);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r240 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r239);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval223 = r240;
  struct std__basic_ostream_char__std__char_traits_char__* t241 = __retval223;
  return t241;
}

// function: _ZNK21DivideByZeroException5whatoEv
char* DivideByZeroException__whato___const(struct DivideByZeroException* v242) {
bb243:
  struct DivideByZeroException* this244;
  char* __retval245;
  this244 = v242;
  struct DivideByZeroException* t246 = this244;
  char* t247 = t246->message;
  __retval245 = t247;
  char* t248 = __retval245;
  return t248;
}

// function: main
int main() {
bb249:
  int __retval250;
  int number1251;
  int number2252;
  int result253;
  int c254 = 0;
  __retval250 = c254;
  char* cast255 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast255);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    while (1) {
      struct std__basic_istream_char__std__char_traits_char__* r257 = std__istream__operator__(&_ZSt3cin, &number1251);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std__basic_istream_char__std__char_traits_char__* r258 = std__istream__operator__(r257, &number2252);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void** v259 = (void**)r258;
      void* v260 = *((void**)v259);
      unsigned char* cast261 = (unsigned char*)v260;
      long c262 = -24;
      unsigned char* ptr263 = &(cast261)[c262];
      long* cast264 = (long*)ptr263;
      long t265 = *cast264;
      unsigned char* cast266 = (unsigned char*)r258;
      unsigned char* ptr267 = &(cast266)[t265];
      struct std__basic_istream_char__std__char_traits_char__* cast268 = (struct std__basic_istream_char__std__char_traits_char__*)ptr267;
      struct std__basic_ios_char__std__char_traits_char__* cast269 = (struct std__basic_ios_char__std__char_traits_char__*)cast268;
      _Bool r270 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast269);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (!r270) break;
          struct DivideByZeroException* divideByZeroException271;
            int t273 = number1251;
            result253 = t273;
            int t274 = number1251;
            int t275 = number2252;
            double r276 = quotient(t274, t275);
            if (__cir_exc_active) {
              goto cir_try_dispatch272;
            }
            int cast277 = (int)r276;
            result253 = cast277;
            char* cast278 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* r279 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast278);
            if (__cir_exc_active) {
              goto cir_try_dispatch272;
            }
            int t280 = result253;
            struct std__basic_ostream_char__std__char_traits_char__* r281 = std__ostream__operator__(r279, t280);
            if (__cir_exc_active) {
              goto cir_try_dispatch272;
            }
            struct std__basic_ostream_char__std__char_traits_char__* r282 = std__ostream__operator___std__ostream_____(r281, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            if (__cir_exc_active) {
              goto cir_try_dispatch272;
            }
          cir_try_dispatch272: ;
          if (__cir_exc_active) {
          if (__cir_exc_type == (const void*)__cir_eh_type__ZTI21DivideByZeroException) {
            int ca_tok283 = 0;
            void* ca_exn284 = (void*)__cir_exc_ptr;
            __cir_exc_active = 0;
              divideByZeroException271 = (struct DivideByZeroException*)__cir_exc_ptr;
              char* cast285 = (char*)&(_str_2);
              struct std__basic_ostream_char__std__char_traits_char__* r286 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast285);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct DivideByZeroException* t287 = divideByZeroException271;
              char* r288 = DivideByZeroException__whato___const(t287);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r289 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r286, r288);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r290 = std__ostream__operator___std__ostream_____(r289, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast291 = (char*)&(_str_3);
              char* c292 = _str_4;
              unsigned int c293 = 53;
              char* cast294 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast291, c292, c293, cast294);
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
        char* cast295 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r296 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast295);
        if (__cir_exc_active) {
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
    }
  struct std__basic_ostream_char__std__char_traits_char__* r297 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int c298 = 0;
  __retval250 = c298;
  int t299 = __retval250;
  return t299;
}

// function: _ZNSt9exceptionC2Ev
void std__exception__exception(struct std__exception* v300) {
bb301:
  struct std__exception* this302;
  this302 = v300;
  struct std__exception* t303 = this302;
  void* v304 = (void*)&_ZTVSt9exception[2];
  void** v305 = (void**)t303;
  *(void**)(v305) = (void*)v304;
  return;
}

// function: _ZN21DivideByZeroExceptionD0Ev
void DivideByZeroException___DivideByZeroException(struct DivideByZeroException* v306) {
bb307:
  struct DivideByZeroException* this308;
  this308 = v306;
  struct DivideByZeroException* t309 = this308;
    DivideByZeroException___DivideByZeroException_2(t309);
  {
    void* cast310 = (void*)t309;
    unsigned long c311 = 16;
    operator_delete(cast310, c311);
  }
  return;
}

