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
struct std___Setw { int _M_n; };
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
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern int rand();
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

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v0, long v1) {
bb2:
  struct std__ios_base* this3;
  long __wide4;
  long __retval5;
  long __old6;
  this3 = v0;
  __wide4 = v1;
  struct std__ios_base* t7 = this3;
  long t8 = t7->_M_width;
  __old6 = t8;
  long t9 = __wide4;
  t7->_M_width = t9;
  long t10 = __old6;
  __retval5 = t10;
  long t11 = __retval5;
  return t11;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v12, struct std___Setw v13) {
bb14:
  struct std__basic_ostream_char__std__char_traits_char__* __os15;
  struct std___Setw __f16;
  struct std__basic_ostream_char__std__char_traits_char__* __retval17;
  __os15 = v12;
  __f16 = v13;
  struct std__basic_ostream_char__std__char_traits_char__* t18 = __os15;
  void** v19 = (void**)t18;
  void* v20 = *((void**)v19);
  unsigned char* cast21 = (unsigned char*)v20;
  long c22 = -24;
  unsigned char* ptr23 = &(cast21)[c22];
  long* cast24 = (long*)ptr23;
  long t25 = *cast24;
  unsigned char* cast26 = (unsigned char*)t18;
  unsigned char* ptr27 = &(cast26)[t25];
  struct std__basic_ostream_char__std__char_traits_char__* cast28 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr27;
  struct std__ios_base* cast29 = (struct std__ios_base*)cast28;
  int t30 = __f16._M_n;
  long cast31 = (long)t30;
  long r32 = std__ios_base__width(cast29, cast31);
  struct std__basic_ostream_char__std__char_traits_char__* t33 = __os15;
  __retval17 = t33;
  struct std__basic_ostream_char__std__char_traits_char__* t34 = __retval17;
  return t34;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v35) {
bb36:
  int __n37;
  struct std___Setw __retval38;
  __n37 = v35;
  int t39 = __n37;
  __retval38._M_n = t39;
  struct std___Setw t40 = __retval38;
  return t40;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v41, void* v42) {
bb43:
  struct std__basic_ostream_char__std__char_traits_char__* this44;
  void* __pf45;
  struct std__basic_ostream_char__std__char_traits_char__* __retval46;
  this44 = v41;
  __pf45 = v42;
  struct std__basic_ostream_char__std__char_traits_char__* t47 = this44;
  void* t48 = __pf45;
  struct std__basic_ostream_char__std__char_traits_char__* r49 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t48)(t47);
  __retval46 = r49;
  struct std__basic_ostream_char__std__char_traits_char__* t50 = __retval46;
  return t50;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v51) {
bb52:
  struct std__basic_ostream_char__std__char_traits_char__* __os53;
  struct std__basic_ostream_char__std__char_traits_char__* __retval54;
  __os53 = v51;
  struct std__basic_ostream_char__std__char_traits_char__* t55 = __os53;
  struct std__basic_ostream_char__std__char_traits_char__* r56 = std__ostream__flush(t55);
  __retval54 = r56;
  struct std__basic_ostream_char__std__char_traits_char__* t57 = __retval54;
  return t57;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v58) {
bb59:
  struct std__ctype_char_* __f60;
  struct std__ctype_char_* __retval61;
  __f60 = v58;
    struct std__ctype_char_* t62 = __f60;
    _Bool cast63 = (_Bool)t62;
    _Bool u64 = !cast63;
    if (u64) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t65 = __f60;
  __retval61 = t65;
  struct std__ctype_char_* t66 = __retval61;
  return t66;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v67, char v68) {
bb69:
  struct std__ctype_char_* this70;
  char __c71;
  char __retval72;
  this70 = v67;
  __c71 = v68;
  struct std__ctype_char_* t73 = this70;
    char t74 = t73->_M_widen_ok;
    _Bool cast75 = (_Bool)t74;
    if (cast75) {
      char t76 = __c71;
      unsigned char cast77 = (unsigned char)t76;
      unsigned long cast78 = (unsigned long)cast77;
      char t79 = t73->_M_widen[cast78];
      __retval72 = t79;
      char t80 = __retval72;
      return t80;
    }
  std__ctype_char____M_widen_init___const(t73);
  char t81 = __c71;
  void** v82 = (void**)t73;
  void* v83 = *((void**)v82);
  char vcall86 = (char)__VERIFIER_virtual_call_char_char(t73, 6, t81);
  __retval72 = vcall86;
  char t87 = __retval72;
  return t87;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v88, char v89) {
bb90:
  struct std__basic_ios_char__std__char_traits_char__* this91;
  char __c92;
  char __retval93;
  this91 = v88;
  __c92 = v89;
  struct std__basic_ios_char__std__char_traits_char__* t94 = this91;
  struct std__ctype_char_* t95 = t94->_M_ctype;
  struct std__ctype_char_* r96 = std__ctype_char__const__std____check_facet_std__ctype_char___(t95);
  char t97 = __c92;
  char r98 = std__ctype_char___widen_char__const(r96, t97);
  __retval93 = r98;
  char t99 = __retval93;
  return t99;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v100) {
bb101:
  struct std__basic_ostream_char__std__char_traits_char__* __os102;
  struct std__basic_ostream_char__std__char_traits_char__* __retval103;
  __os102 = v100;
  struct std__basic_ostream_char__std__char_traits_char__* t104 = __os102;
  struct std__basic_ostream_char__std__char_traits_char__* t105 = __os102;
  void** v106 = (void**)t105;
  void* v107 = *((void**)v106);
  unsigned char* cast108 = (unsigned char*)v107;
  long c109 = -24;
  unsigned char* ptr110 = &(cast108)[c109];
  long* cast111 = (long*)ptr110;
  long t112 = *cast111;
  unsigned char* cast113 = (unsigned char*)t105;
  unsigned char* ptr114 = &(cast113)[t112];
  struct std__basic_ostream_char__std__char_traits_char__* cast115 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr114;
  struct std__basic_ios_char__std__char_traits_char__* cast116 = (struct std__basic_ios_char__std__char_traits_char__*)cast115;
  char c117 = 10;
  char r118 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast116, c117);
  struct std__basic_ostream_char__std__char_traits_char__* r119 = std__ostream__put(t104, r118);
  struct std__basic_ostream_char__std__char_traits_char__* r120 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r119);
  __retval103 = r120;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = __retval103;
  return t121;
}

// function: main
int main() {
bb122:
  int __retval123;
  int c124 = 0;
  __retval123 = c124;
    int counter125;
    int c126 = 1;
    counter125 = c126;
    while (1) {
      int t128 = counter125;
      int c129 = 20;
      _Bool c130 = ((t128 <= c129)) ? 1 : 0;
      if (!c130) break;
        struct std___Setw agg_tmp0131;
        int c132 = 10;
        struct std___Setw r133 = std__setw(c132);
        agg_tmp0131 = r133;
        struct std___Setw t134 = agg_tmp0131;
        struct std__basic_ostream_char__std__char_traits_char__* r135 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t134);
        int c136 = 1;
        int r137 = rand();
        int c138 = 6;
        int b139 = r137 % c138;
        int b140 = c136 + b139;
        struct std__basic_ostream_char__std__char_traits_char__* r141 = std__ostream__operator__(r135, b140);
          int t142 = counter125;
          int c143 = 5;
          int b144 = t142 % c143;
          int c145 = 0;
          _Bool c146 = ((b144 == c145)) ? 1 : 0;
          if (c146) {
            struct std__basic_ostream_char__std__char_traits_char__* r147 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          }
    for_step127: ;
      int t148 = counter125;
      int u149 = t148 + 1;
      counter125 = u149;
    }
  int c150 = 0;
  __retval123 = c150;
  int t151 = __retval123;
  return t151;
}

