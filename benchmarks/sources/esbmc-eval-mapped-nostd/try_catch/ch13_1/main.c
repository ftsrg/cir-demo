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
char _str_3[43] = "\nEnter two integers (end-of-file to end): ";
char _str_4[28] = "attempted to divide by zero";
char _str_5[2] = "0";
char _str_6[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/ch13_1/main.cpp";
char __PRETTY_FUNCTION____ZN21DivideByZeroExceptionC2Ev[47] = "DivideByZeroException::DivideByZeroException()";
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
int main();
void std__exception__exception(struct std__exception* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
    char* cast7 = (char*)&(_str_4);
    t3->message = cast7;
    char* cast8 = (char*)&(_str_5);
    char* c9 = _str_6;
    unsigned int c10 = 20;
    char* cast11 = (char*)&(__PRETTY_FUNCTION____ZN21DivideByZeroExceptionC2Ev);
    __assert_fail(cast8, c9, c10, cast11);
  return;
}

// function: _ZN21DivideByZeroExceptionD2Ev
void DivideByZeroException___DivideByZeroException_2(struct DivideByZeroException* v12) {
bb13:
  struct DivideByZeroException* this14;
  this14 = v12;
  struct DivideByZeroException* t15 = this14;
  {
    struct std__exception* base16 = (struct std__exception*)((char *)t15 + 0);
    std__exception___exception(base16);
  }
  return;
}

// function: _Z8quotientii
double quotient(int v17, int v18) {
bb19:
  int numerator20;
  int denominator21;
  double __retval22;
  numerator20 = v17;
  denominator21 = v18;
    int t23 = denominator21;
    int c24 = 0;
    _Bool c25 = ((t23 == c24)) ? 1 : 0;
    if (c25) {
      static char exc_buf26[16] = {0};
      struct DivideByZeroException* exc27 = (struct DivideByZeroException*)exc_buf26;
      DivideByZeroException__DivideByZeroException(exc27);
      if (__cir_exc_active) {
        double __cir_eh_ret = (double)0;
        return __cir_eh_ret;
      }
      __cir_exc_ptr = (void*)exc27;
      __cir_exc_dtor = (void*)&DivideByZeroException___DivideByZeroException_2;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI21DivideByZeroException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI21DivideByZeroException;
      __cir_exc_active = 1;
      { double __cir_eh_ret = (double)0; return __cir_eh_ret; }
      __builtin_unreachable();
    }
  int t28 = numerator20;
  double cast29 = (double)t28;
  int t30 = denominator21;
  double cast31 = (double)t30;
  double b32 = cast29 / cast31;
  __retval22 = b32;
  double t33 = __retval22;
  return t33;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v34, int v35) {
bb36:
  int __a37;
  int __b38;
  int __retval39;
  __a37 = v34;
  __b38 = v35;
  int t40 = __a37;
  int t41 = __b38;
  int b42 = t40 | t41;
  __retval39 = b42;
  int t43 = __retval39;
  return t43;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v44) {
bb45:
  struct std__basic_ios_char__std__char_traits_char__* this46;
  int __retval47;
  this46 = v44;
  struct std__basic_ios_char__std__char_traits_char__* t48 = this46;
  struct std__ios_base* base49 = (struct std__ios_base*)((char *)t48 + 0);
  int t50 = base49->_M_streambuf_state;
  __retval47 = t50;
  int t51 = __retval47;
  return t51;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v52, int v53) {
bb54:
  struct std__basic_ios_char__std__char_traits_char__* this55;
  int __state56;
  this55 = v52;
  __state56 = v53;
  struct std__basic_ios_char__std__char_traits_char__* t57 = this55;
  int r58 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t57);
  if (__cir_exc_active) {
    return;
  }
  int t59 = __state56;
  int r60 = std__operator__2(r58, t59);
  std__basic_ios_char__std__char_traits_char_____clear(t57, r60);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb61:
  _Bool __retval62;
    _Bool c63 = 0;
    __retval62 = c63;
    _Bool t64 = __retval62;
    return t64;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v65, char* v66) {
bb67:
  char* __c168;
  char* __c269;
  _Bool __retval70;
  __c168 = v65;
  __c269 = v66;
  char* t71 = __c168;
  char t72 = *t71;
  int cast73 = (int)t72;
  char* t74 = __c269;
  char t75 = *t74;
  int cast76 = (int)t75;
  _Bool c77 = ((cast73 == cast76)) ? 1 : 0;
  __retval70 = c77;
  _Bool t78 = __retval70;
  return t78;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v79) {
bb80:
  char* __p81;
  unsigned long __retval82;
  unsigned long __i83;
  __p81 = v79;
  unsigned long c84 = 0;
  __i83 = c84;
    char ref_tmp085;
    while (1) {
      unsigned long t86 = __i83;
      char* t87 = __p81;
      char* ptr88 = &(t87)[t86];
      char c89 = 0;
      ref_tmp085 = c89;
      _Bool r90 = __gnu_cxx__char_traits_char___eq(ptr88, &ref_tmp085);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u91 = !r90;
      if (!u91) break;
      unsigned long t92 = __i83;
      unsigned long u93 = t92 + 1;
      __i83 = u93;
    }
  unsigned long t94 = __i83;
  __retval82 = t94;
  unsigned long t95 = __retval82;
  return t95;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v96) {
bb97:
  char* __s98;
  unsigned long __retval99;
  __s98 = v96;
    _Bool r100 = std____is_constant_evaluated();
    if (r100) {
      char* t101 = __s98;
      unsigned long r102 = __gnu_cxx__char_traits_char___length(t101);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval99 = r102;
      unsigned long t103 = __retval99;
      return t103;
    }
  char* t104 = __s98;
  unsigned long r105 = strlen(t104);
  __retval99 = r105;
  unsigned long t106 = __retval99;
  return t106;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v107, char* v108) {
bb109:
  struct std__basic_ostream_char__std__char_traits_char__* __out110;
  char* __s111;
  struct std__basic_ostream_char__std__char_traits_char__* __retval112;
  __out110 = v107;
  __s111 = v108;
    char* t113 = __s111;
    _Bool cast114 = (_Bool)t113;
    _Bool u115 = !cast114;
    if (u115) {
      struct std__basic_ostream_char__std__char_traits_char__* t116 = __out110;
      void** v117 = (void**)t116;
      void* v118 = *((void**)v117);
      unsigned char* cast119 = (unsigned char*)v118;
      long c120 = -24;
      unsigned char* ptr121 = &(cast119)[c120];
      long* cast122 = (long*)ptr121;
      long t123 = *cast122;
      unsigned char* cast124 = (unsigned char*)t116;
      unsigned char* ptr125 = &(cast124)[t123];
      struct std__basic_ostream_char__std__char_traits_char__* cast126 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr125;
      struct std__basic_ios_char__std__char_traits_char__* cast127 = (struct std__basic_ios_char__std__char_traits_char__*)cast126;
      int t128 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast127, t128);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t129 = __out110;
      char* t130 = __s111;
      char* t131 = __s111;
      unsigned long r132 = std__char_traits_char___length(t131);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast133 = (long)r132;
      struct std__basic_ostream_char__std__char_traits_char__* r134 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t129, t130, cast133);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __out110;
  __retval112 = t135;
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __retval112;
  return t136;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v137, int v138) {
bb139:
  int __a140;
  int __b141;
  int __retval142;
  __a140 = v137;
  __b141 = v138;
  int t143 = __a140;
  int t144 = __b141;
  int b145 = t143 & t144;
  __retval142 = b145;
  int t146 = __retval142;
  return t146;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v147) {
bb148:
  struct std__basic_ios_char__std__char_traits_char__* this149;
  _Bool __retval150;
  this149 = v147;
  struct std__basic_ios_char__std__char_traits_char__* t151 = this149;
  int r152 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t151);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t153 = _ZNSt8ios_base6badbitE_const;
  int t154 = _ZNSt8ios_base7failbitE_const;
  int r155 = std__operator__2(t153, t154);
  int r156 = std__operator_(r152, r155);
  int c157 = 0;
  _Bool c158 = ((r156 != c157)) ? 1 : 0;
  __retval150 = c158;
  _Bool t159 = __retval150;
  return t159;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* v160) {
bb161:
  struct std__basic_ios_char__std__char_traits_char__* this162;
  _Bool __retval163;
  this162 = v160;
  struct std__basic_ios_char__std__char_traits_char__* t164 = this162;
  _Bool r165 = std__basic_ios_char__std__char_traits_char_____fail___const(t164);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool u166 = !r165;
  __retval163 = u166;
  _Bool t167 = __retval163;
  return t167;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v168, void* v169) {
bb170:
  struct std__basic_ostream_char__std__char_traits_char__* this171;
  void* __pf172;
  struct std__basic_ostream_char__std__char_traits_char__* __retval173;
  this171 = v168;
  __pf172 = v169;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = this171;
  void* t175 = __pf172;
  struct std__basic_ostream_char__std__char_traits_char__* r176 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t175)(t174);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval173 = r176;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __retval173;
  return t177;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v178) {
bb179:
  struct std__basic_ostream_char__std__char_traits_char__* __os180;
  struct std__basic_ostream_char__std__char_traits_char__* __retval181;
  __os180 = v178;
  struct std__basic_ostream_char__std__char_traits_char__* t182 = __os180;
  struct std__basic_ostream_char__std__char_traits_char__* r183 = std__ostream__flush(t182);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval181 = r183;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = __retval181;
  return t184;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v185) {
bb186:
  struct std__ctype_char_* __f187;
  struct std__ctype_char_* __retval188;
  __f187 = v185;
    struct std__ctype_char_* t189 = __f187;
    _Bool cast190 = (_Bool)t189;
    _Bool u191 = !cast190;
    if (u191) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t192 = __f187;
  __retval188 = t192;
  struct std__ctype_char_* t193 = __retval188;
  return t193;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v194, char v195) {
bb196:
  struct std__ctype_char_* this197;
  char __c198;
  char __retval199;
  this197 = v194;
  __c198 = v195;
  struct std__ctype_char_* t200 = this197;
    char t201 = t200->_M_widen_ok;
    _Bool cast202 = (_Bool)t201;
    if (cast202) {
      char t203 = __c198;
      unsigned char cast204 = (unsigned char)t203;
      unsigned long cast205 = (unsigned long)cast204;
      char t206 = t200->_M_widen[cast205];
      __retval199 = t206;
      char t207 = __retval199;
      return t207;
    }
  std__ctype_char____M_widen_init___const(t200);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t208 = __c198;
  void** v209 = (void**)t200;
  void* v210 = *((void**)v209);
  char vcall213 = (char)__VERIFIER_virtual_call_char_char(t200, 6, t208);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval199 = vcall213;
  char t214 = __retval199;
  return t214;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v215, char v216) {
bb217:
  struct std__basic_ios_char__std__char_traits_char__* this218;
  char __c219;
  char __retval220;
  this218 = v215;
  __c219 = v216;
  struct std__basic_ios_char__std__char_traits_char__* t221 = this218;
  struct std__ctype_char_* t222 = t221->_M_ctype;
  struct std__ctype_char_* r223 = std__ctype_char__const__std____check_facet_std__ctype_char___(t222);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t224 = __c219;
  char r225 = std__ctype_char___widen_char__const(r223, t224);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval220 = r225;
  char t226 = __retval220;
  return t226;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v227) {
bb228:
  struct std__basic_ostream_char__std__char_traits_char__* __os229;
  struct std__basic_ostream_char__std__char_traits_char__* __retval230;
  __os229 = v227;
  struct std__basic_ostream_char__std__char_traits_char__* t231 = __os229;
  struct std__basic_ostream_char__std__char_traits_char__* t232 = __os229;
  void** v233 = (void**)t232;
  void* v234 = *((void**)v233);
  unsigned char* cast235 = (unsigned char*)v234;
  long c236 = -24;
  unsigned char* ptr237 = &(cast235)[c236];
  long* cast238 = (long*)ptr237;
  long t239 = *cast238;
  unsigned char* cast240 = (unsigned char*)t232;
  unsigned char* ptr241 = &(cast240)[t239];
  struct std__basic_ostream_char__std__char_traits_char__* cast242 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr241;
  struct std__basic_ios_char__std__char_traits_char__* cast243 = (struct std__basic_ios_char__std__char_traits_char__*)cast242;
  char c244 = 10;
  char r245 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast243, c244);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r246 = std__ostream__put(t231, r245);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r247 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r246);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval230 = r247;
  struct std__basic_ostream_char__std__char_traits_char__* t248 = __retval230;
  return t248;
}

// function: _ZNK21DivideByZeroException5whatoEv
char* DivideByZeroException__whato___const(struct DivideByZeroException* v249) {
bb250:
  struct DivideByZeroException* this251;
  char* __retval252;
  this251 = v249;
  struct DivideByZeroException* t253 = this251;
  char* t254 = t253->message;
  __retval252 = t254;
  char* t255 = __retval252;
  return t255;
}

// function: main
int main() {
bb256:
  int __retval257;
  int number1258;
  int number2259;
  int result260;
  int c261 = 0;
  __retval257 = c261;
  char* cast262 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r263 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast262);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    while (1) {
      struct std__basic_istream_char__std__char_traits_char__* r264 = std__istream__operator__(&_ZSt3cin, &number1258);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std__basic_istream_char__std__char_traits_char__* r265 = std__istream__operator__(r264, &number2259);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      void** v266 = (void**)r265;
      void* v267 = *((void**)v266);
      unsigned char* cast268 = (unsigned char*)v267;
      long c269 = -24;
      unsigned char* ptr270 = &(cast268)[c269];
      long* cast271 = (long*)ptr270;
      long t272 = *cast271;
      unsigned char* cast273 = (unsigned char*)r265;
      unsigned char* ptr274 = &(cast273)[t272];
      struct std__basic_istream_char__std__char_traits_char__* cast275 = (struct std__basic_istream_char__std__char_traits_char__*)ptr274;
      struct std__basic_ios_char__std__char_traits_char__* cast276 = (struct std__basic_ios_char__std__char_traits_char__*)cast275;
      _Bool r277 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast276);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (!r277) break;
          struct DivideByZeroException* divideByZeroException278;
            int t280 = number1258;
            result260 = t280;
            int t281 = number1258;
            int t282 = number2259;
            double r283 = quotient(t281, t282);
            if (__cir_exc_active) {
              goto cir_try_dispatch279;
            }
            int cast284 = (int)r283;
            result260 = cast284;
            char* cast285 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* r286 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast285);
            if (__cir_exc_active) {
              goto cir_try_dispatch279;
            }
            int t287 = result260;
            struct std__basic_ostream_char__std__char_traits_char__* r288 = std__ostream__operator__(r286, t287);
            if (__cir_exc_active) {
              goto cir_try_dispatch279;
            }
            struct std__basic_ostream_char__std__char_traits_char__* r289 = std__ostream__operator___std__ostream_____(r288, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            if (__cir_exc_active) {
              goto cir_try_dispatch279;
            }
          cir_try_dispatch279: ;
          if (__cir_exc_active) {
          if (__cir_exc_type == (const void*)__cir_eh_type__ZTI21DivideByZeroException) {
            int ca_tok290 = 0;
            void* ca_exn291 = (void*)__cir_exc_ptr;
            __cir_exc_active = 0;
              divideByZeroException278 = (struct DivideByZeroException*)__cir_exc_ptr;
              char* cast292 = (char*)&(_str_2);
              struct std__basic_ostream_char__std__char_traits_char__* r293 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast292);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct DivideByZeroException* t294 = divideByZeroException278;
              char* r295 = DivideByZeroException__whato___const(t294);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r296 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r293, r295);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r297 = std__ostream__operator___std__ostream_____(r296, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
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
        char* cast298 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r299 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast298);
        if (__cir_exc_active) {
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
    }
  struct std__basic_ostream_char__std__char_traits_char__* r300 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int c301 = 0;
  __retval257 = c301;
  int t302 = __retval257;
  return t302;
}

// function: _ZNSt9exceptionC2Ev
void std__exception__exception(struct std__exception* v303) {
bb304:
  struct std__exception* this305;
  this305 = v303;
  struct std__exception* t306 = this305;
  void* v307 = (void*)&_ZTVSt9exception[2];
  void** v308 = (void**)t306;
  *(void**)(v308) = (void*)v307;
  return;
}

// function: _ZN21DivideByZeroExceptionD0Ev
void DivideByZeroException___DivideByZeroException(struct DivideByZeroException* v309) {
bb310:
  struct DivideByZeroException* this311;
  this311 = v309;
  struct DivideByZeroException* t312 = this311;
    DivideByZeroException___DivideByZeroException_2(t312);
  {
    void* cast313 = (void*)t312;
    unsigned long c314 = 16;
    operator_delete(cast313, c314);
  }
  return;
}

