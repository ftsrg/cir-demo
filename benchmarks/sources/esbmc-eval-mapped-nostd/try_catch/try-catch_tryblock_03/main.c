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
struct A { unsigned char __field0; };
struct B { unsigned char __field0; };
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
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1E[3] = "1E";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[20] = "Handler in main(): ";
char _str_1[17] = "Handler in B(): ";
char _str_2[17] = "Exception in A()";
char _str_3[17] = "Handler in A(): ";
extern int __gxx_personality_v0();
void B__B(struct B* p0);
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
void A__A(struct A* p0);

// function: _ZN1BC2Ev
void B__B(struct B* v0) {
bb1:
  struct B* this2;
  this2 = v0;
  struct B* t3 = this2;
    struct E* e4;
      struct A* base6 = (struct A*)((char *)t3 + 0);
      A__A(base6);
      if (__cir_exc_active) {
        goto cir_try_dispatch5;
      }
    cir_try_dispatch5: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok7 = 0;
      void* ca_exn8 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e4 = (struct E*)__cir_exc_ptr;
        char* cast9 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r10 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast9);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
        struct E* t11 = e4;
        char* t12 = t11->error;
        struct std__basic_ostream_char__std__char_traits_char__* r13 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r10, t12);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r14 = std__ostream__operator___std__ostream_____(r13, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v15, int v16) {
bb17:
  int __a18;
  int __b19;
  int __retval20;
  __a18 = v15;
  __b19 = v16;
  int t21 = __a18;
  int t22 = __b19;
  int b23 = t21 | t22;
  __retval20 = b23;
  int t24 = __retval20;
  return t24;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v25) {
bb26:
  struct std__basic_ios_char__std__char_traits_char__* this27;
  int __retval28;
  this27 = v25;
  struct std__basic_ios_char__std__char_traits_char__* t29 = this27;
  struct std__ios_base* base30 = (struct std__ios_base*)((char *)t29 + 0);
  int t31 = base30->_M_streambuf_state;
  __retval28 = t31;
  int t32 = __retval28;
  return t32;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v33, int v34) {
bb35:
  struct std__basic_ios_char__std__char_traits_char__* this36;
  int __state37;
  this36 = v33;
  __state37 = v34;
  struct std__basic_ios_char__std__char_traits_char__* t38 = this36;
  int r39 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t38);
  if (__cir_exc_active) {
    return;
  }
  int t40 = __state37;
  int r41 = std__operator_(r39, t40);
  std__basic_ios_char__std__char_traits_char_____clear(t38, r41);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb42:
  _Bool __retval43;
    _Bool c44 = 0;
    __retval43 = c44;
    _Bool t45 = __retval43;
    return t45;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v46, char* v47) {
bb48:
  char* __c149;
  char* __c250;
  _Bool __retval51;
  __c149 = v46;
  __c250 = v47;
  char* t52 = __c149;
  char t53 = *t52;
  int cast54 = (int)t53;
  char* t55 = __c250;
  char t56 = *t55;
  int cast57 = (int)t56;
  _Bool c58 = ((cast54 == cast57)) ? 1 : 0;
  __retval51 = c58;
  _Bool t59 = __retval51;
  return t59;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v60) {
bb61:
  char* __p62;
  unsigned long __retval63;
  unsigned long __i64;
  __p62 = v60;
  unsigned long c65 = 0;
  __i64 = c65;
    char ref_tmp066;
    while (1) {
      unsigned long t67 = __i64;
      char* t68 = __p62;
      char* ptr69 = &(t68)[t67];
      char c70 = 0;
      ref_tmp066 = c70;
      _Bool r71 = __gnu_cxx__char_traits_char___eq(ptr69, &ref_tmp066);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u72 = !r71;
      if (!u72) break;
      unsigned long t73 = __i64;
      unsigned long u74 = t73 + 1;
      __i64 = u74;
    }
  unsigned long t75 = __i64;
  __retval63 = t75;
  unsigned long t76 = __retval63;
  return t76;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v77) {
bb78:
  char* __s79;
  unsigned long __retval80;
  __s79 = v77;
    _Bool r81 = std____is_constant_evaluated();
    if (r81) {
      char* t82 = __s79;
      unsigned long r83 = __gnu_cxx__char_traits_char___length(t82);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval80 = r83;
      unsigned long t84 = __retval80;
      return t84;
    }
  char* t85 = __s79;
  unsigned long r86 = strlen(t85);
  __retval80 = r86;
  unsigned long t87 = __retval80;
  return t87;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v88, char* v89) {
bb90:
  struct std__basic_ostream_char__std__char_traits_char__* __out91;
  char* __s92;
  struct std__basic_ostream_char__std__char_traits_char__* __retval93;
  __out91 = v88;
  __s92 = v89;
    char* t94 = __s92;
    _Bool cast95 = (_Bool)t94;
    _Bool u96 = !cast95;
    if (u96) {
      struct std__basic_ostream_char__std__char_traits_char__* t97 = __out91;
      void** v98 = (void**)t97;
      void* v99 = *((void**)v98);
      unsigned char* cast100 = (unsigned char*)v99;
      long c101 = -24;
      unsigned char* ptr102 = &(cast100)[c101];
      long* cast103 = (long*)ptr102;
      long t104 = *cast103;
      unsigned char* cast105 = (unsigned char*)t97;
      unsigned char* ptr106 = &(cast105)[t104];
      struct std__basic_ostream_char__std__char_traits_char__* cast107 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr106;
      struct std__basic_ios_char__std__char_traits_char__* cast108 = (struct std__basic_ios_char__std__char_traits_char__*)cast107;
      int t109 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast108, t109);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t110 = __out91;
      char* t111 = __s92;
      char* t112 = __s92;
      unsigned long r113 = std__char_traits_char___length(t112);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast114 = (long)r113;
      struct std__basic_ostream_char__std__char_traits_char__* r115 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t110, t111, cast114);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t116 = __out91;
  __retval93 = t116;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __retval93;
  return t117;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v118, void* v119) {
bb120:
  struct std__basic_ostream_char__std__char_traits_char__* this121;
  void* __pf122;
  struct std__basic_ostream_char__std__char_traits_char__* __retval123;
  this121 = v118;
  __pf122 = v119;
  struct std__basic_ostream_char__std__char_traits_char__* t124 = this121;
  void* t125 = __pf122;
  struct std__basic_ostream_char__std__char_traits_char__* r126 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t125)(t124);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval123 = r126;
  struct std__basic_ostream_char__std__char_traits_char__* t127 = __retval123;
  return t127;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v128) {
bb129:
  struct std__basic_ostream_char__std__char_traits_char__* __os130;
  struct std__basic_ostream_char__std__char_traits_char__* __retval131;
  __os130 = v128;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = __os130;
  struct std__basic_ostream_char__std__char_traits_char__* r133 = std__ostream__flush(t132);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval131 = r133;
  struct std__basic_ostream_char__std__char_traits_char__* t134 = __retval131;
  return t134;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v135) {
bb136:
  struct std__ctype_char_* __f137;
  struct std__ctype_char_* __retval138;
  __f137 = v135;
    struct std__ctype_char_* t139 = __f137;
    _Bool cast140 = (_Bool)t139;
    _Bool u141 = !cast140;
    if (u141) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t142 = __f137;
  __retval138 = t142;
  struct std__ctype_char_* t143 = __retval138;
  return t143;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v144, char v145) {
bb146:
  struct std__ctype_char_* this147;
  char __c148;
  char __retval149;
  this147 = v144;
  __c148 = v145;
  struct std__ctype_char_* t150 = this147;
    char t151 = t150->_M_widen_ok;
    _Bool cast152 = (_Bool)t151;
    if (cast152) {
      char t153 = __c148;
      unsigned char cast154 = (unsigned char)t153;
      unsigned long cast155 = (unsigned long)cast154;
      char t156 = t150->_M_widen[cast155];
      __retval149 = t156;
      char t157 = __retval149;
      return t157;
    }
  std__ctype_char____M_widen_init___const(t150);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t158 = __c148;
  void** v159 = (void**)t150;
  void* v160 = *((void**)v159);
  char vcall163 = (char)__VERIFIER_virtual_call_char_char(t150, 6, t158);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval149 = vcall163;
  char t164 = __retval149;
  return t164;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v165, char v166) {
bb167:
  struct std__basic_ios_char__std__char_traits_char__* this168;
  char __c169;
  char __retval170;
  this168 = v165;
  __c169 = v166;
  struct std__basic_ios_char__std__char_traits_char__* t171 = this168;
  struct std__ctype_char_* t172 = t171->_M_ctype;
  struct std__ctype_char_* r173 = std__ctype_char__const__std____check_facet_std__ctype_char___(t172);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t174 = __c169;
  char r175 = std__ctype_char___widen_char__const(r173, t174);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval170 = r175;
  char t176 = __retval170;
  return t176;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v177) {
bb178:
  struct std__basic_ostream_char__std__char_traits_char__* __os179;
  struct std__basic_ostream_char__std__char_traits_char__* __retval180;
  __os179 = v177;
  struct std__basic_ostream_char__std__char_traits_char__* t181 = __os179;
  struct std__basic_ostream_char__std__char_traits_char__* t182 = __os179;
  void** v183 = (void**)t182;
  void* v184 = *((void**)v183);
  unsigned char* cast185 = (unsigned char*)v184;
  long c186 = -24;
  unsigned char* ptr187 = &(cast185)[c186];
  long* cast188 = (long*)ptr187;
  long t189 = *cast188;
  unsigned char* cast190 = (unsigned char*)t182;
  unsigned char* ptr191 = &(cast190)[t189];
  struct std__basic_ostream_char__std__char_traits_char__* cast192 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr191;
  struct std__basic_ios_char__std__char_traits_char__* cast193 = (struct std__basic_ios_char__std__char_traits_char__*)cast192;
  char c194 = 10;
  char r195 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast193, c194);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r196 = std__ostream__put(t181, r195);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r197 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r196);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval180 = r197;
  struct std__basic_ostream_char__std__char_traits_char__* t198 = __retval180;
  return t198;
}

// function: main
int main() {
bb199:
  int __retval200;
  int c201 = 0;
  __retval200 = c201;
    struct B cow202;
    struct E* e203;
      B__B(&cow202);
      if (__cir_exc_active) {
        goto cir_try_dispatch204;
      }
    cir_try_dispatch204: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok205 = 0;
      void* ca_exn206 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e203 = (struct E*)__cir_exc_ptr;
        char* cast207 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r208 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast207);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct E* t209 = e203;
        char* t210 = t209->error;
        struct std__basic_ostream_char__std__char_traits_char__* r211 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r208, t210);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r212 = std__ostream__operator___std__ostream_____(r211, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
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
  int t213 = __retval200;
  return t213;
}

// function: _ZN1EC2EPKc
void E__E(struct E* v214, char* v215) {
bb216:
  struct E* this217;
  char* arg218;
  this217 = v214;
  arg218 = v215;
  struct E* t219 = this217;
  char* t220 = arg218;
  t219->error = t220;
  return;
}

// function: _ZN1AC2Ev
void A__A(struct A* v221) {
bb222:
  struct A* this223;
  this223 = v221;
  struct A* t224 = this223;
    struct E* e225;
      static char exc_buf227[8] = {0};
      struct E* exc228 = (struct E*)exc_buf227;
      char* cast229 = (char*)&(_str_2);
      E__E(exc228, cast229);
      if (__cir_exc_active) {
        goto cir_try_dispatch226;
      }
      __cir_exc_ptr = (void*)exc228;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI1E;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI1E;
      __cir_exc_active = 1;
      goto cir_try_dispatch226;
      __builtin_unreachable();
    cir_try_dispatch226: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok230 = 0;
      void* ca_exn231 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e225 = (struct E*)__cir_exc_ptr;
        char* cast232 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r233 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast232);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
        struct E* t234 = e225;
        char* t235 = t234->error;
        struct std__basic_ostream_char__std__char_traits_char__* r236 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r233, t235);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r237 = std__ostream__operator___std__ostream_____(r236, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
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

