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
int main();

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v0, void* v1) {
bb2:
  struct std__basic_ostream_char__std__char_traits_char__* this3;
  void* __pf4;
  struct std__basic_ostream_char__std__char_traits_char__* __retval5;
  this3 = v0;
  __pf4 = v1;
  struct std__basic_ostream_char__std__char_traits_char__* t6 = this3;
  void* t7 = __pf4;
  struct std__basic_ostream_char__std__char_traits_char__* r8 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t7)(t6);
  __retval5 = r8;
  struct std__basic_ostream_char__std__char_traits_char__* t9 = __retval5;
  return t9;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ostream_char__std__char_traits_char__* __os12;
  struct std__basic_ostream_char__std__char_traits_char__* __retval13;
  __os12 = v10;
  struct std__basic_ostream_char__std__char_traits_char__* t14 = __os12;
  struct std__basic_ostream_char__std__char_traits_char__* r15 = std__ostream__flush(t14);
  __retval13 = r15;
  struct std__basic_ostream_char__std__char_traits_char__* t16 = __retval13;
  return t16;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v17) {
bb18:
  struct std__ctype_char_* __f19;
  struct std__ctype_char_* __retval20;
  __f19 = v17;
    struct std__ctype_char_* t21 = __f19;
    _Bool cast22 = (_Bool)t21;
    _Bool u23 = !cast22;
    if (u23) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t24 = __f19;
  __retval20 = t24;
  struct std__ctype_char_* t25 = __retval20;
  return t25;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v26, char v27) {
bb28:
  struct std__ctype_char_* this29;
  char __c30;
  char __retval31;
  this29 = v26;
  __c30 = v27;
  struct std__ctype_char_* t32 = this29;
    char t33 = t32->_M_widen_ok;
    _Bool cast34 = (_Bool)t33;
    if (cast34) {
      char t35 = __c30;
      unsigned char cast36 = (unsigned char)t35;
      unsigned long cast37 = (unsigned long)cast36;
      char t38 = t32->_M_widen[cast37];
      __retval31 = t38;
      char t39 = __retval31;
      return t39;
    }
  std__ctype_char____M_widen_init___const(t32);
  char t40 = __c30;
  void** v41 = (void**)t32;
  void* v42 = *((void**)v41);
  char vcall45 = (char)__VERIFIER_virtual_call_char_char(t32, 6, t40);
  __retval31 = vcall45;
  char t46 = __retval31;
  return t46;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v47, char v48) {
bb49:
  struct std__basic_ios_char__std__char_traits_char__* this50;
  char __c51;
  char __retval52;
  this50 = v47;
  __c51 = v48;
  struct std__basic_ios_char__std__char_traits_char__* t53 = this50;
  struct std__ctype_char_* t54 = t53->_M_ctype;
  struct std__ctype_char_* r55 = std__ctype_char__const__std____check_facet_std__ctype_char___(t54);
  char t56 = __c51;
  char r57 = std__ctype_char___widen_char__const(r55, t56);
  __retval52 = r57;
  char t58 = __retval52;
  return t58;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v59) {
bb60:
  struct std__basic_ostream_char__std__char_traits_char__* __os61;
  struct std__basic_ostream_char__std__char_traits_char__* __retval62;
  __os61 = v59;
  struct std__basic_ostream_char__std__char_traits_char__* t63 = __os61;
  struct std__basic_ostream_char__std__char_traits_char__* t64 = __os61;
  void** v65 = (void**)t64;
  void* v66 = *((void**)v65);
  unsigned char* cast67 = (unsigned char*)v66;
  long c68 = -24;
  unsigned char* ptr69 = &(cast67)[c68];
  long* cast70 = (long*)ptr69;
  long t71 = *cast70;
  unsigned char* cast72 = (unsigned char*)t64;
  unsigned char* ptr73 = &(cast72)[t71];
  struct std__basic_ostream_char__std__char_traits_char__* cast74 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr73;
  struct std__basic_ios_char__std__char_traits_char__* cast75 = (struct std__basic_ios_char__std__char_traits_char__*)cast74;
  char c76 = 10;
  char r77 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast75, c76);
  struct std__basic_ostream_char__std__char_traits_char__* r78 = std__ostream__put(t63, r77);
  struct std__basic_ostream_char__std__char_traits_char__* r79 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r78);
  __retval62 = r79;
  struct std__basic_ostream_char__std__char_traits_char__* t80 = __retval62;
  return t80;
}

// function: main
int main() {
bb81:
  int __retval82;
  int val83;
  int c84 = 0;
  __retval82 = c84;
  int c85 = 65;
  val83 = c85;
  int t86 = val83;
  struct std__basic_ostream_char__std__char_traits_char__* r87 = std__ostream__operator__(&_ZSt4cout, t86);
  struct std__basic_ostream_char__std__char_traits_char__* r88 = std__ostream__operator___std__ostream_____(r87, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c89 = 0;
  __retval82 = c89;
  int t90 = __retval82;
  return t90;
}

