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
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
double double_std__ostream___S_cast_flt_double__float_(float p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, float p1);
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

// function: _ZNSo11_S_cast_fltIdfEET_T0_
double double_std__ostream___S_cast_flt_double__float_(float v0) {
bb1:
  float __f2;
  double __retval3;
  double __d4;
  __f2 = v0;
  float t5 = __f2;
  double cast6 = (double)t5;
  __d4 = cast6;
  double t7 = __d4;
  __retval3 = t7;
  double t8 = __retval3;
  return t8;
}

// function: _ZNSolsEf
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v9, float v10) {
bb11:
  struct std__basic_ostream_char__std__char_traits_char__* this12;
  float __f13;
  struct std__basic_ostream_char__std__char_traits_char__* __retval14;
  this12 = v9;
  __f13 = v10;
  struct std__basic_ostream_char__std__char_traits_char__* t15 = this12;
  float t16 = __f13;
  double r17 = double_std__ostream___S_cast_flt_double__float_(t16);
  struct std__basic_ostream_char__std__char_traits_char__* r18 = std__ostream__std__ostream___M_insert_double_(t15, r17);
  __retval14 = r18;
  struct std__basic_ostream_char__std__char_traits_char__* t19 = __retval14;
  return t19;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v20, void* v21) {
bb22:
  struct std__basic_ostream_char__std__char_traits_char__* this23;
  void* __pf24;
  struct std__basic_ostream_char__std__char_traits_char__* __retval25;
  this23 = v20;
  __pf24 = v21;
  struct std__basic_ostream_char__std__char_traits_char__* t26 = this23;
  void* t27 = __pf24;
  struct std__basic_ostream_char__std__char_traits_char__* r28 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t27)(t26);
  __retval25 = r28;
  struct std__basic_ostream_char__std__char_traits_char__* t29 = __retval25;
  return t29;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v30) {
bb31:
  struct std__basic_ostream_char__std__char_traits_char__* __os32;
  struct std__basic_ostream_char__std__char_traits_char__* __retval33;
  __os32 = v30;
  struct std__basic_ostream_char__std__char_traits_char__* t34 = __os32;
  struct std__basic_ostream_char__std__char_traits_char__* r35 = std__ostream__flush(t34);
  __retval33 = r35;
  struct std__basic_ostream_char__std__char_traits_char__* t36 = __retval33;
  return t36;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v37) {
bb38:
  struct std__ctype_char_* __f39;
  struct std__ctype_char_* __retval40;
  __f39 = v37;
    struct std__ctype_char_* t41 = __f39;
    _Bool cast42 = (_Bool)t41;
    _Bool u43 = !cast42;
    if (u43) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t44 = __f39;
  __retval40 = t44;
  struct std__ctype_char_* t45 = __retval40;
  return t45;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v46, char v47) {
bb48:
  struct std__ctype_char_* this49;
  char __c50;
  char __retval51;
  this49 = v46;
  __c50 = v47;
  struct std__ctype_char_* t52 = this49;
    char t53 = t52->_M_widen_ok;
    _Bool cast54 = (_Bool)t53;
    if (cast54) {
      char t55 = __c50;
      unsigned char cast56 = (unsigned char)t55;
      unsigned long cast57 = (unsigned long)cast56;
      char t58 = t52->_M_widen[cast57];
      __retval51 = t58;
      char t59 = __retval51;
      return t59;
    }
  std__ctype_char____M_widen_init___const(t52);
  char t60 = __c50;
  void** v61 = (void**)t52;
  void* v62 = *((void**)v61);
  char vcall65 = (char)__VERIFIER_virtual_call_char_char(t52, 6, t60);
  __retval51 = vcall65;
  char t66 = __retval51;
  return t66;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v67, char v68) {
bb69:
  struct std__basic_ios_char__std__char_traits_char__* this70;
  char __c71;
  char __retval72;
  this70 = v67;
  __c71 = v68;
  struct std__basic_ios_char__std__char_traits_char__* t73 = this70;
  struct std__ctype_char_* t74 = t73->_M_ctype;
  struct std__ctype_char_* r75 = std__ctype_char__const__std____check_facet_std__ctype_char___(t74);
  char t76 = __c71;
  char r77 = std__ctype_char___widen_char__const(r75, t76);
  __retval72 = r77;
  char t78 = __retval72;
  return t78;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v79) {
bb80:
  struct std__basic_ostream_char__std__char_traits_char__* __os81;
  struct std__basic_ostream_char__std__char_traits_char__* __retval82;
  __os81 = v79;
  struct std__basic_ostream_char__std__char_traits_char__* t83 = __os81;
  struct std__basic_ostream_char__std__char_traits_char__* t84 = __os81;
  void** v85 = (void**)t84;
  void* v86 = *((void**)v85);
  unsigned char* cast87 = (unsigned char*)v86;
  long c88 = -24;
  unsigned char* ptr89 = &(cast87)[c88];
  long* cast90 = (long*)ptr89;
  long t91 = *cast90;
  unsigned char* cast92 = (unsigned char*)t84;
  unsigned char* ptr93 = &(cast92)[t91];
  struct std__basic_ostream_char__std__char_traits_char__* cast94 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr93;
  struct std__basic_ios_char__std__char_traits_char__* cast95 = (struct std__basic_ios_char__std__char_traits_char__*)cast94;
  char c96 = 10;
  char r97 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast95, c96);
  struct std__basic_ostream_char__std__char_traits_char__* r98 = std__ostream__put(t83, r97);
  struct std__basic_ostream_char__std__char_traits_char__* r99 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r98);
  __retval82 = r99;
  struct std__basic_ostream_char__std__char_traits_char__* t100 = __retval82;
  return t100;
}

// function: main
int main() {
bb101:
  int __retval102;
  float val103;
  int c104 = 0;
  __retval102 = c104;
  int c105 = 65;
  float cast106 = (float)c105;
  val103 = cast106;
  float t107 = val103;
  struct std__basic_ostream_char__std__char_traits_char__* r108 = std__ostream__operator__(&_ZSt4cout, t107);
  struct std__basic_ostream_char__std__char_traits_char__* r109 = std__ostream__operator___std__ostream_____(r108, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c110 = 0;
  __retval102 = c110;
  int t111 = __retval102;
  return t111;
}

