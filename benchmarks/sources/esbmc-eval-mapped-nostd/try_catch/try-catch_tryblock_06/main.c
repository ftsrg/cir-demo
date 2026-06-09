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
struct E { char* error; };
struct N__C { unsigned char __field0; };
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
struct N__C _ZN1N4calfE;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[8] = "In main";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1E[3] = "1E";
char _str_1[7] = "In C()";
char _str_2[17] = "Exception in C()";
void N__C__C(struct N__C* p0);
void __cxx_global_var_init();
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
void E__E(struct E* p0, char* p1);
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

// function: _ZN1N1CC2Ev
void N__C__C(struct N__C* v0) {
bb1:
  struct N__C* this2;
  this2 = v0;
  struct N__C* t3 = this2;
  char* cast4 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r5 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast4);
  if (__cir_exc_active) {
    return;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r6 = std__ostream__operator___std__ostream_____(r5, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    return;
  }
  static char exc_buf7[8] = {0};
  struct E* exc8 = (struct E*)exc_buf7;
  char* cast9 = (char*)&(_str_2);
  E__E(exc8, cast9);
  if (__cir_exc_active) {
    return;
  }
  __cir_exc_ptr = (void*)exc8;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTI1E;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI1E;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb10:
  N__C__C(&_ZN1N4calfE);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v11, int v12) {
bb13:
  int __a14;
  int __b15;
  int __retval16;
  __a14 = v11;
  __b15 = v12;
  int t17 = __a14;
  int t18 = __b15;
  int b19 = t17 | t18;
  __retval16 = b19;
  int t20 = __retval16;
  return t20;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v21) {
bb22:
  struct std__basic_ios_char__std__char_traits_char__* this23;
  int __retval24;
  this23 = v21;
  struct std__basic_ios_char__std__char_traits_char__* t25 = this23;
  struct std__ios_base* base26 = (struct std__ios_base*)((char *)t25 + 0);
  int t27 = base26->_M_streambuf_state;
  __retval24 = t27;
  int t28 = __retval24;
  return t28;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v29, int v30) {
bb31:
  struct std__basic_ios_char__std__char_traits_char__* this32;
  int __state33;
  this32 = v29;
  __state33 = v30;
  struct std__basic_ios_char__std__char_traits_char__* t34 = this32;
  int r35 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t34);
  if (__cir_exc_active) {
    return;
  }
  int t36 = __state33;
  int r37 = std__operator_(r35, t36);
  std__basic_ios_char__std__char_traits_char_____clear(t34, r37);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb38:
  _Bool __retval39;
    _Bool c40 = 0;
    __retval39 = c40;
    _Bool t41 = __retval39;
    return t41;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v42, char* v43) {
bb44:
  char* __c145;
  char* __c246;
  _Bool __retval47;
  __c145 = v42;
  __c246 = v43;
  char* t48 = __c145;
  char t49 = *t48;
  int cast50 = (int)t49;
  char* t51 = __c246;
  char t52 = *t51;
  int cast53 = (int)t52;
  _Bool c54 = ((cast50 == cast53)) ? 1 : 0;
  __retval47 = c54;
  _Bool t55 = __retval47;
  return t55;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v56) {
bb57:
  char* __p58;
  unsigned long __retval59;
  unsigned long __i60;
  __p58 = v56;
  unsigned long c61 = 0;
  __i60 = c61;
    char ref_tmp062;
    while (1) {
      unsigned long t63 = __i60;
      char* t64 = __p58;
      char* ptr65 = &(t64)[t63];
      char c66 = 0;
      ref_tmp062 = c66;
      _Bool r67 = __gnu_cxx__char_traits_char___eq(ptr65, &ref_tmp062);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u68 = !r67;
      if (!u68) break;
      unsigned long t69 = __i60;
      unsigned long u70 = t69 + 1;
      __i60 = u70;
    }
  unsigned long t71 = __i60;
  __retval59 = t71;
  unsigned long t72 = __retval59;
  return t72;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v73) {
bb74:
  char* __s75;
  unsigned long __retval76;
  __s75 = v73;
    _Bool r77 = std____is_constant_evaluated();
    if (r77) {
      char* t78 = __s75;
      unsigned long r79 = __gnu_cxx__char_traits_char___length(t78);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval76 = r79;
      unsigned long t80 = __retval76;
      return t80;
    }
  char* t81 = __s75;
  unsigned long r82 = strlen(t81);
  __retval76 = r82;
  unsigned long t83 = __retval76;
  return t83;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v84, char* v85) {
bb86:
  struct std__basic_ostream_char__std__char_traits_char__* __out87;
  char* __s88;
  struct std__basic_ostream_char__std__char_traits_char__* __retval89;
  __out87 = v84;
  __s88 = v85;
    char* t90 = __s88;
    _Bool cast91 = (_Bool)t90;
    _Bool u92 = !cast91;
    if (u92) {
      struct std__basic_ostream_char__std__char_traits_char__* t93 = __out87;
      void** v94 = (void**)t93;
      void* v95 = *((void**)v94);
      unsigned char* cast96 = (unsigned char*)v95;
      long c97 = -24;
      unsigned char* ptr98 = &(cast96)[c97];
      long* cast99 = (long*)ptr98;
      long t100 = *cast99;
      unsigned char* cast101 = (unsigned char*)t93;
      unsigned char* ptr102 = &(cast101)[t100];
      struct std__basic_ostream_char__std__char_traits_char__* cast103 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr102;
      struct std__basic_ios_char__std__char_traits_char__* cast104 = (struct std__basic_ios_char__std__char_traits_char__*)cast103;
      int t105 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast104, t105);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t106 = __out87;
      char* t107 = __s88;
      char* t108 = __s88;
      unsigned long r109 = std__char_traits_char___length(t108);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast110 = (long)r109;
      struct std__basic_ostream_char__std__char_traits_char__* r111 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t106, t107, cast110);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __out87;
  __retval89 = t112;
  struct std__basic_ostream_char__std__char_traits_char__* t113 = __retval89;
  return t113;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v114, void* v115) {
bb116:
  struct std__basic_ostream_char__std__char_traits_char__* this117;
  void* __pf118;
  struct std__basic_ostream_char__std__char_traits_char__* __retval119;
  this117 = v114;
  __pf118 = v115;
  struct std__basic_ostream_char__std__char_traits_char__* t120 = this117;
  void* t121 = __pf118;
  struct std__basic_ostream_char__std__char_traits_char__* r122 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t121)(t120);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval119 = r122;
  struct std__basic_ostream_char__std__char_traits_char__* t123 = __retval119;
  return t123;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v124) {
bb125:
  struct std__basic_ostream_char__std__char_traits_char__* __os126;
  struct std__basic_ostream_char__std__char_traits_char__* __retval127;
  __os126 = v124;
  struct std__basic_ostream_char__std__char_traits_char__* t128 = __os126;
  struct std__basic_ostream_char__std__char_traits_char__* r129 = std__ostream__flush(t128);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval127 = r129;
  struct std__basic_ostream_char__std__char_traits_char__* t130 = __retval127;
  return t130;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v131) {
bb132:
  struct std__ctype_char_* __f133;
  struct std__ctype_char_* __retval134;
  __f133 = v131;
    struct std__ctype_char_* t135 = __f133;
    _Bool cast136 = (_Bool)t135;
    _Bool u137 = !cast136;
    if (u137) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t138 = __f133;
  __retval134 = t138;
  struct std__ctype_char_* t139 = __retval134;
  return t139;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v140, char v141) {
bb142:
  struct std__ctype_char_* this143;
  char __c144;
  char __retval145;
  this143 = v140;
  __c144 = v141;
  struct std__ctype_char_* t146 = this143;
    char t147 = t146->_M_widen_ok;
    _Bool cast148 = (_Bool)t147;
    if (cast148) {
      char t149 = __c144;
      unsigned char cast150 = (unsigned char)t149;
      unsigned long cast151 = (unsigned long)cast150;
      char t152 = t146->_M_widen[cast151];
      __retval145 = t152;
      char t153 = __retval145;
      return t153;
    }
  std__ctype_char____M_widen_init___const(t146);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t154 = __c144;
  void** v155 = (void**)t146;
  void* v156 = *((void**)v155);
  char vcall159 = (char)__VERIFIER_virtual_call_char_char(t146, 6, t154);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval145 = vcall159;
  char t160 = __retval145;
  return t160;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v161, char v162) {
bb163:
  struct std__basic_ios_char__std__char_traits_char__* this164;
  char __c165;
  char __retval166;
  this164 = v161;
  __c165 = v162;
  struct std__basic_ios_char__std__char_traits_char__* t167 = this164;
  struct std__ctype_char_* t168 = t167->_M_ctype;
  struct std__ctype_char_* r169 = std__ctype_char__const__std____check_facet_std__ctype_char___(t168);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t170 = __c165;
  char r171 = std__ctype_char___widen_char__const(r169, t170);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval166 = r171;
  char t172 = __retval166;
  return t172;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v173) {
bb174:
  struct std__basic_ostream_char__std__char_traits_char__* __os175;
  struct std__basic_ostream_char__std__char_traits_char__* __retval176;
  __os175 = v173;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __os175;
  struct std__basic_ostream_char__std__char_traits_char__* t178 = __os175;
  void** v179 = (void**)t178;
  void* v180 = *((void**)v179);
  unsigned char* cast181 = (unsigned char*)v180;
  long c182 = -24;
  unsigned char* ptr183 = &(cast181)[c182];
  long* cast184 = (long*)ptr183;
  long t185 = *cast184;
  unsigned char* cast186 = (unsigned char*)t178;
  unsigned char* ptr187 = &(cast186)[t185];
  struct std__basic_ostream_char__std__char_traits_char__* cast188 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr187;
  struct std__basic_ios_char__std__char_traits_char__* cast189 = (struct std__basic_ios_char__std__char_traits_char__*)cast188;
  char c190 = 10;
  char r191 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast189, c190);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r192 = std__ostream__put(t177, r191);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r193 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r192);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval176 = r193;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __retval176;
  return t194;
}

// function: main
int main() {
bb195:
  int __retval196;
  int c197 = 0;
  __retval196 = c197;
    struct E* e198;
      char* cast200 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r201 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast200);
      if (__cir_exc_active) {
        goto cir_try_dispatch199;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r202 = std__ostream__operator___std__ostream_____(r201, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        goto cir_try_dispatch199;
      }
    cir_try_dispatch199: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok203 = 0;
      void* ca_exn204 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e198 = (struct E*)__cir_exc_ptr;
        struct E* t205 = e198;
        char* t206 = t205->error;
        struct std__basic_ostream_char__std__char_traits_char__* r207 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, t206);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r208 = std__ostream__operator___std__ostream_____(r207, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
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
  int t209 = __retval196;
  return t209;
}

// function: _ZN1EC2EPKc
void E__E(struct E* v210, char* v211) {
bb212:
  struct E* this213;
  char* arg214;
  this213 = v210;
  arg214 = v211;
  struct E* t215 = this213;
  char* t216 = arg214;
  t215->error = t216;
  return;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb217:
  __cxx_global_var_init();
  if (__cir_exc_active) {
    return;
  }
  return;
}

