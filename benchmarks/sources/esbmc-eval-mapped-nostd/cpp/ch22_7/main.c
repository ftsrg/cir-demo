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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
int main();

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v0) {
bb1:
  struct std__ios_base* this2;
  long __retval3;
  this2 = v0;
  struct std__ios_base* t4 = this2;
  long t5 = t4->_M_width;
  __retval3 = t5;
  long t6 = __retval3;
  return t6;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v7, char v8) {
bb9:
  struct std__basic_ostream_char__std__char_traits_char__* __out10;
  char __c11;
  struct std__basic_ostream_char__std__char_traits_char__* __retval12;
  __out10 = v7;
  __c11 = v8;
    struct std__basic_ostream_char__std__char_traits_char__* t13 = __out10;
    void** v14 = (void**)t13;
    void* v15 = *((void**)v14);
    unsigned char* cast16 = (unsigned char*)v15;
    long c17 = -24;
    unsigned char* ptr18 = &(cast16)[c17];
    long* cast19 = (long*)ptr18;
    long t20 = *cast19;
    unsigned char* cast21 = (unsigned char*)t13;
    unsigned char* ptr22 = &(cast21)[t20];
    struct std__basic_ostream_char__std__char_traits_char__* cast23 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr22;
    struct std__ios_base* cast24 = (struct std__ios_base*)cast23;
    long r25 = std__ios_base__width___const(cast24);
    long c26 = 0;
    _Bool c27 = ((r25 != c26)) ? 1 : 0;
    if (c27) {
      struct std__basic_ostream_char__std__char_traits_char__* t28 = __out10;
      long c29 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r30 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t28, &__c11, c29);
      __retval12 = r30;
      struct std__basic_ostream_char__std__char_traits_char__* t31 = __retval12;
      return t31;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t32 = __out10;
  char t33 = __c11;
  struct std__basic_ostream_char__std__char_traits_char__* r34 = std__ostream__put(t32, t33);
  struct std__basic_ostream_char__std__char_traits_char__* t35 = __out10;
  __retval12 = t35;
  struct std__basic_ostream_char__std__char_traits_char__* t36 = __retval12;
  return t36;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v37, void* v38) {
bb39:
  struct std__basic_ostream_char__std__char_traits_char__* this40;
  void* __pf41;
  struct std__basic_ostream_char__std__char_traits_char__* __retval42;
  this40 = v37;
  __pf41 = v38;
  struct std__basic_ostream_char__std__char_traits_char__* t43 = this40;
  void* t44 = __pf41;
  struct std__basic_ostream_char__std__char_traits_char__* r45 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t44)(t43);
  __retval42 = r45;
  struct std__basic_ostream_char__std__char_traits_char__* t46 = __retval42;
  return t46;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v47) {
bb48:
  struct std__basic_ostream_char__std__char_traits_char__* __os49;
  struct std__basic_ostream_char__std__char_traits_char__* __retval50;
  __os49 = v47;
  struct std__basic_ostream_char__std__char_traits_char__* t51 = __os49;
  struct std__basic_ostream_char__std__char_traits_char__* r52 = std__ostream__flush(t51);
  __retval50 = r52;
  struct std__basic_ostream_char__std__char_traits_char__* t53 = __retval50;
  return t53;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v54) {
bb55:
  struct std__ctype_char_* __f56;
  struct std__ctype_char_* __retval57;
  __f56 = v54;
    struct std__ctype_char_* t58 = __f56;
    _Bool cast59 = (_Bool)t58;
    _Bool u60 = !cast59;
    if (u60) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t61 = __f56;
  __retval57 = t61;
  struct std__ctype_char_* t62 = __retval57;
  return t62;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v63, char v64) {
bb65:
  struct std__ctype_char_* this66;
  char __c67;
  char __retval68;
  this66 = v63;
  __c67 = v64;
  struct std__ctype_char_* t69 = this66;
    char t70 = t69->_M_widen_ok;
    _Bool cast71 = (_Bool)t70;
    if (cast71) {
      char t72 = __c67;
      unsigned char cast73 = (unsigned char)t72;
      unsigned long cast74 = (unsigned long)cast73;
      char t75 = t69->_M_widen[cast74];
      __retval68 = t75;
      char t76 = __retval68;
      return t76;
    }
  std__ctype_char____M_widen_init___const(t69);
  char t77 = __c67;
  void** v78 = (void**)t69;
  void* v79 = *((void**)v78);
  char vcall82 = (char)__VERIFIER_virtual_call_char_char(t69, 6, t77);
  __retval68 = vcall82;
  char t83 = __retval68;
  return t83;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v84, char v85) {
bb86:
  struct std__basic_ios_char__std__char_traits_char__* this87;
  char __c88;
  char __retval89;
  this87 = v84;
  __c88 = v85;
  struct std__basic_ios_char__std__char_traits_char__* t90 = this87;
  struct std__ctype_char_* t91 = t90->_M_ctype;
  struct std__ctype_char_* r92 = std__ctype_char__const__std____check_facet_std__ctype_char___(t91);
  char t93 = __c88;
  char r94 = std__ctype_char___widen_char__const(r92, t93);
  __retval89 = r94;
  char t95 = __retval89;
  return t95;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v96) {
bb97:
  struct std__basic_ostream_char__std__char_traits_char__* __os98;
  struct std__basic_ostream_char__std__char_traits_char__* __retval99;
  __os98 = v96;
  struct std__basic_ostream_char__std__char_traits_char__* t100 = __os98;
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __os98;
  void** v102 = (void**)t101;
  void* v103 = *((void**)v102);
  unsigned char* cast104 = (unsigned char*)v103;
  long c105 = -24;
  unsigned char* ptr106 = &(cast104)[c105];
  long* cast107 = (long*)ptr106;
  long t108 = *cast107;
  unsigned char* cast109 = (unsigned char*)t101;
  unsigned char* ptr110 = &(cast109)[t108];
  struct std__basic_ostream_char__std__char_traits_char__* cast111 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr110;
  struct std__basic_ios_char__std__char_traits_char__* cast112 = (struct std__basic_ios_char__std__char_traits_char__*)cast111;
  char c113 = 10;
  char r114 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast112, c113);
  struct std__basic_ostream_char__std__char_traits_char__* r115 = std__ostream__put(t100, r114);
  struct std__basic_ostream_char__std__char_traits_char__* r116 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r115);
  __retval99 = r116;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __retval99;
  return t117;
}

// function: main
int main() {
bb118:
  int __retval119;
  int x120;
  int* ptr121;
  int c122 = 0;
  __retval119 = c122;
  int c123 = 120;
  x120 = c123;
  ptr121 = &x120;
  int* t124 = ptr121;
  char* cast125 = (char*)t124;
  char t126 = *cast125;
  struct std__basic_ostream_char__std__char_traits_char__* r127 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, t126);
  struct std__basic_ostream_char__std__char_traits_char__* r128 = std__ostream__operator___std__ostream_____(r127, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c129 = 0;
  __retval119 = c129;
  int t130 = __retval119;
  return t130;
}

