extern void abort(void);
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
struct std__ios_base { void* __field0; long __field1; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3decE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base9basefieldE_const __attribute__((aligned(4))) = 74;
int _ZNSt8ios_base3hexE_const __attribute__((aligned(4))) = 8;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "Enter a number: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[19] = "You have entered: ";
char _str_2[23] = "(int)cin.gcount() >= 0";
char _str_3[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_operator_long/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[29] = "Enter a hexadecimal number: ";
char _str_5[28] = "Its decimal equivalent is: ";
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_long_(struct std__basic_istream_char__std__char_traits_char__* p0, long* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, long* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, long p1);
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
long std__istream__gcount___const(struct std__basic_istream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___std__ios_base_____(struct std__basic_istream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__hex(struct std__ios_base* p0);
struct std__ios_base* std__dec(struct std__ios_base* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_unsigned_long_(struct std__basic_istream_char__std__char_traits_char__* p0, unsigned long* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, unsigned long* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
int main();

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v0, int v1) {
bb2:
  int __a3;
  int __b4;
  int __retval5;
  __a3 = v0;
  __b4 = v1;
  int t6 = __a3;
  int t7 = __b4;
  int b8 = t6 | t7;
  __retval5 = b8;
  int t9 = __retval5;
  return t9;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  int __retval13;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t14 = this12;
  struct std__ios_base* base15 = (struct std__ios_base*)((char *)t14 + 0);
  int t16 = base15->_M_streambuf_state;
  __retval13 = t16;
  int t17 = __retval13;
  return t17;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v18, int v19) {
bb20:
  struct std__basic_ios_char__std__char_traits_char__* this21;
  int __state22;
  this21 = v18;
  __state22 = v19;
  struct std__basic_ios_char__std__char_traits_char__* t23 = this21;
  int r24 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t23);
  int t25 = __state22;
  int r26 = std__operator__3(r24, t25);
  std__basic_ios_char__std__char_traits_char_____clear(t23, r26);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb27:
  _Bool __retval28;
    _Bool c29 = 0;
    __retval28 = c29;
    _Bool t30 = __retval28;
    return t30;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v31, char* v32) {
bb33:
  char* __c134;
  char* __c235;
  _Bool __retval36;
  __c134 = v31;
  __c235 = v32;
  char* t37 = __c134;
  char t38 = *t37;
  int cast39 = (int)t38;
  char* t40 = __c235;
  char t41 = *t40;
  int cast42 = (int)t41;
  _Bool c43 = ((cast39 == cast42)) ? 1 : 0;
  __retval36 = c43;
  _Bool t44 = __retval36;
  return t44;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v45) {
bb46:
  char* __p47;
  unsigned long __retval48;
  unsigned long __i49;
  __p47 = v45;
  unsigned long c50 = 0;
  __i49 = c50;
    char ref_tmp051;
    while (1) {
      unsigned long t52 = __i49;
      char* t53 = __p47;
      char* ptr54 = &(t53)[t52];
      char c55 = 0;
      ref_tmp051 = c55;
      _Bool r56 = __gnu_cxx__char_traits_char___eq(ptr54, &ref_tmp051);
      _Bool u57 = !r56;
      if (!u57) break;
      unsigned long t58 = __i49;
      unsigned long u59 = t58 + 1;
      __i49 = u59;
    }
  unsigned long t60 = __i49;
  __retval48 = t60;
  unsigned long t61 = __retval48;
  return t61;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v62) {
bb63:
  char* __s64;
  unsigned long __retval65;
  __s64 = v62;
    _Bool r66 = std____is_constant_evaluated();
    if (r66) {
      char* t67 = __s64;
      unsigned long r68 = __gnu_cxx__char_traits_char___length(t67);
      __retval65 = r68;
      unsigned long t69 = __retval65;
      return t69;
    }
  char* t70 = __s64;
  unsigned long r71 = strlen(t70);
  __retval65 = r71;
  unsigned long t72 = __retval65;
  return t72;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v73, char* v74) {
bb75:
  struct std__basic_ostream_char__std__char_traits_char__* __out76;
  char* __s77;
  struct std__basic_ostream_char__std__char_traits_char__* __retval78;
  __out76 = v73;
  __s77 = v74;
    char* t79 = __s77;
    _Bool cast80 = (_Bool)t79;
    _Bool u81 = !cast80;
    if (u81) {
      struct std__basic_ostream_char__std__char_traits_char__* t82 = __out76;
      void** v83 = (void**)t82;
      void* v84 = *((void**)v83);
      unsigned char* cast85 = (unsigned char*)v84;
      long c86 = -24;
      unsigned char* ptr87 = &(cast85)[c86];
      long* cast88 = (long*)ptr87;
      long t89 = *cast88;
      unsigned char* cast90 = (unsigned char*)t82;
      unsigned char* ptr91 = &(cast90)[t89];
      struct std__basic_ostream_char__std__char_traits_char__* cast92 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr91;
      struct std__basic_ios_char__std__char_traits_char__* cast93 = (struct std__basic_ios_char__std__char_traits_char__*)cast92;
      int t94 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast93, t94);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t95 = __out76;
      char* t96 = __s77;
      char* t97 = __s77;
      unsigned long r98 = std__char_traits_char___length(t97);
      long cast99 = (long)r98;
      struct std__basic_ostream_char__std__char_traits_char__* r100 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t95, t96, cast99);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __out76;
  __retval78 = t101;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __retval78;
  return t102;
}

// function: _ZNSirsERl
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v103, long* v104) {
bb105:
  struct std__basic_istream_char__std__char_traits_char__* this106;
  long* __n107;
  struct std__basic_istream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __n107 = v104;
  struct std__basic_istream_char__std__char_traits_char__* t109 = this106;
  long* t110 = __n107;
  struct std__basic_istream_char__std__char_traits_char__* r111 = std__istream__std__istream___M_extract_long_(t109, t110);
  __retval108 = r111;
  struct std__basic_istream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZNSolsEl
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v113, long v114) {
bb115:
  struct std__basic_ostream_char__std__char_traits_char__* this116;
  long __n117;
  struct std__basic_ostream_char__std__char_traits_char__* __retval118;
  this116 = v113;
  __n117 = v114;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = this116;
  long t120 = __n117;
  struct std__basic_ostream_char__std__char_traits_char__* r121 = std__ostream__std__ostream___M_insert_long_(t119, t120);
  __retval118 = r121;
  struct std__basic_ostream_char__std__char_traits_char__* t122 = __retval118;
  return t122;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v123, void* v124) {
bb125:
  struct std__basic_ostream_char__std__char_traits_char__* this126;
  void* __pf127;
  struct std__basic_ostream_char__std__char_traits_char__* __retval128;
  this126 = v123;
  __pf127 = v124;
  struct std__basic_ostream_char__std__char_traits_char__* t129 = this126;
  void* t130 = __pf127;
  struct std__basic_ostream_char__std__char_traits_char__* r131 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t130)(t129);
  __retval128 = r131;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = __retval128;
  return t132;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v133) {
bb134:
  struct std__basic_ostream_char__std__char_traits_char__* __os135;
  struct std__basic_ostream_char__std__char_traits_char__* __retval136;
  __os135 = v133;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __os135;
  struct std__basic_ostream_char__std__char_traits_char__* r138 = std__ostream__flush(t137);
  __retval136 = r138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval136;
  return t139;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v140) {
bb141:
  struct std__ctype_char_* __f142;
  struct std__ctype_char_* __retval143;
  __f142 = v140;
    struct std__ctype_char_* t144 = __f142;
    _Bool cast145 = (_Bool)t144;
    _Bool u146 = !cast145;
    if (u146) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t147 = __f142;
  __retval143 = t147;
  struct std__ctype_char_* t148 = __retval143;
  return t148;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v149, char v150) {
bb151:
  struct std__ctype_char_* this152;
  char __c153;
  char __retval154;
  this152 = v149;
  __c153 = v150;
  struct std__ctype_char_* t155 = this152;
    char t156 = t155->_M_widen_ok;
    _Bool cast157 = (_Bool)t156;
    if (cast157) {
      char t158 = __c153;
      unsigned char cast159 = (unsigned char)t158;
      unsigned long cast160 = (unsigned long)cast159;
      char t161 = t155->_M_widen[cast160];
      __retval154 = t161;
      char t162 = __retval154;
      return t162;
    }
  std__ctype_char____M_widen_init___const(t155);
  char t163 = __c153;
  void** v164 = (void**)t155;
  void* v165 = *((void**)v164);
  char vcall168 = (char)__VERIFIER_virtual_call_char_char(t155, 6, t163);
  __retval154 = vcall168;
  char t169 = __retval154;
  return t169;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v170, char v171) {
bb172:
  struct std__basic_ios_char__std__char_traits_char__* this173;
  char __c174;
  char __retval175;
  this173 = v170;
  __c174 = v171;
  struct std__basic_ios_char__std__char_traits_char__* t176 = this173;
  struct std__ctype_char_* t177 = t176->_M_ctype;
  struct std__ctype_char_* r178 = std__ctype_char__const__std____check_facet_std__ctype_char___(t177);
  char t179 = __c174;
  char r180 = std__ctype_char___widen_char__const(r178, t179);
  __retval175 = r180;
  char t181 = __retval175;
  return t181;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v182) {
bb183:
  struct std__basic_ostream_char__std__char_traits_char__* __os184;
  struct std__basic_ostream_char__std__char_traits_char__* __retval185;
  __os184 = v182;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __os184;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __os184;
  void** v188 = (void**)t187;
  void* v189 = *((void**)v188);
  unsigned char* cast190 = (unsigned char*)v189;
  long c191 = -24;
  unsigned char* ptr192 = &(cast190)[c191];
  long* cast193 = (long*)ptr192;
  long t194 = *cast193;
  unsigned char* cast195 = (unsigned char*)t187;
  unsigned char* ptr196 = &(cast195)[t194];
  struct std__basic_ostream_char__std__char_traits_char__* cast197 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr196;
  struct std__basic_ios_char__std__char_traits_char__* cast198 = (struct std__basic_ios_char__std__char_traits_char__*)cast197;
  char c199 = 10;
  char r200 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast198, c199);
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__ostream__put(t186, r200);
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r201);
  __retval185 = r202;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __retval185;
  return t203;
}

// function: _ZNKSi6gcountEv
long std__istream__gcount___const(struct std__basic_istream_char__std__char_traits_char__* v204) {
bb205:
  struct std__basic_istream_char__std__char_traits_char__* this206;
  long __retval207;
  this206 = v204;
  struct std__basic_istream_char__std__char_traits_char__* t208 = this206;
  long t209 = t208->_M_gcount;
  __retval207 = t209;
  long t210 = __retval207;
  return t210;
}

// function: _ZNSirsEPFRSt8ios_baseS0_E
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___std__ios_base_____(struct std__basic_istream_char__std__char_traits_char__* v211, void* v212) {
bb213:
  struct std__basic_istream_char__std__char_traits_char__* this214;
  void* __pf215;
  struct std__basic_istream_char__std__char_traits_char__* __retval216;
  this214 = v211;
  __pf215 = v212;
  struct std__basic_istream_char__std__char_traits_char__* t217 = this214;
  void* t218 = __pf215;
  void** v219 = (void**)t217;
  void* v220 = *((void**)v219);
  unsigned char* cast221 = (unsigned char*)v220;
  long c222 = -24;
  unsigned char* ptr223 = &(cast221)[c222];
  long* cast224 = (long*)ptr223;
  long t225 = *cast224;
  unsigned char* cast226 = (unsigned char*)t217;
  unsigned char* ptr227 = &(cast226)[t225];
  struct std__basic_istream_char__std__char_traits_char__* cast228 = (struct std__basic_istream_char__std__char_traits_char__*)ptr227;
  struct std__ios_base* cast229 = (struct std__ios_base*)cast228;
  struct std__ios_base* r230 = ((struct std__ios_base* (*)(struct std__ios_base*))t218)(cast229);
  __retval216 = t217;
  struct std__basic_istream_char__std__char_traits_char__* t231 = __retval216;
  return t231;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v232, int v233) {
bb234:
  int* __a235;
  int __b236;
  int* __retval237;
  __a235 = v232;
  __b236 = v233;
  int* t238 = __a235;
  int t239 = *t238;
  int t240 = __b236;
  int r241 = std__operator_(t239, t240);
  int* t242 = __a235;
  *t242 = r241;
  __retval237 = t242;
  int* t243 = __retval237;
  return t243;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v244) {
bb245:
  int __a246;
  int __retval247;
  __a246 = v244;
  int t248 = __a246;
  int u249 = ~t248;
  __retval247 = u249;
  int t250 = __retval247;
  return t250;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v251, int v252) {
bb253:
  int __a254;
  int __b255;
  int __retval256;
  __a254 = v251;
  __b255 = v252;
  int t257 = __a254;
  int t258 = __b255;
  int b259 = t257 | t258;
  __retval256 = b259;
  int t260 = __retval256;
  return t260;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v261, int v262) {
bb263:
  int* __a264;
  int __b265;
  int* __retval266;
  __a264 = v261;
  __b265 = v262;
  int* t267 = __a264;
  int t268 = *t267;
  int t269 = __b265;
  int r270 = std__operator__4(t268, t269);
  int* t271 = __a264;
  *t271 = r270;
  __retval266 = t271;
  int* t272 = __retval266;
  return t272;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v273, int v274) {
bb275:
  int __a276;
  int __b277;
  int __retval278;
  __a276 = v273;
  __b277 = v274;
  int t279 = __a276;
  int t280 = __b277;
  int b281 = t279 & t280;
  __retval278 = b281;
  int t282 = __retval278;
  return t282;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v283, int v284, int v285) {
bb286:
  struct std__ios_base* this287;
  int __fmtfl288;
  int __mask289;
  int __retval290;
  int __old291;
  this287 = v283;
  __fmtfl288 = v284;
  __mask289 = v285;
  struct std__ios_base* t292 = this287;
  int t293 = t292->_M_flags;
  __old291 = t293;
  int t294 = __mask289;
  int r295 = std__operator__2(t294);
  int* r296 = std__operator__(&t292->_M_flags, r295);
  int t297 = __fmtfl288;
  int t298 = __mask289;
  int r299 = std__operator_(t297, t298);
  int* r300 = std__operator___2(&t292->_M_flags, r299);
  int t301 = __old291;
  __retval290 = t301;
  int t302 = __retval290;
  return t302;
}

// function: _ZSt3hexRSt8ios_base
struct std__ios_base* std__hex(struct std__ios_base* v303) {
bb304:
  struct std__ios_base* __base305;
  struct std__ios_base* __retval306;
  __base305 = v303;
  struct std__ios_base* t307 = __base305;
  int t308 = _ZNSt8ios_base3hexE_const;
  int t309 = _ZNSt8ios_base9basefieldE_const;
  int r310 = std__ios_base__setf(t307, t308, t309);
  struct std__ios_base* t311 = __base305;
  __retval306 = t311;
  struct std__ios_base* t312 = __retval306;
  return t312;
}

// function: _ZSt3decRSt8ios_base
struct std__ios_base* std__dec(struct std__ios_base* v313) {
bb314:
  struct std__ios_base* __base315;
  struct std__ios_base* __retval316;
  __base315 = v313;
  struct std__ios_base* t317 = __base315;
  int t318 = _ZNSt8ios_base3decE_const;
  int t319 = _ZNSt8ios_base9basefieldE_const;
  int r320 = std__ios_base__setf(t317, t318, t319);
  struct std__ios_base* t321 = __base315;
  __retval316 = t321;
  struct std__ios_base* t322 = __retval316;
  return t322;
}

// function: _ZNSirsERm
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* v323, unsigned long* v324) {
bb325:
  struct std__basic_istream_char__std__char_traits_char__* this326;
  unsigned long* __n327;
  struct std__basic_istream_char__std__char_traits_char__* __retval328;
  this326 = v323;
  __n327 = v324;
  struct std__basic_istream_char__std__char_traits_char__* t329 = this326;
  unsigned long* t330 = __n327;
  struct std__basic_istream_char__std__char_traits_char__* r331 = std__istream__std__istream___M_extract_unsigned_long_(t329, t330);
  __retval328 = r331;
  struct std__basic_istream_char__std__char_traits_char__* t332 = __retval328;
  return t332;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v333, unsigned long v334) {
bb335:
  struct std__basic_ostream_char__std__char_traits_char__* this336;
  unsigned long __n337;
  struct std__basic_ostream_char__std__char_traits_char__* __retval338;
  this336 = v333;
  __n337 = v334;
  struct std__basic_ostream_char__std__char_traits_char__* t339 = this336;
  unsigned long t340 = __n337;
  struct std__basic_ostream_char__std__char_traits_char__* r341 = std__ostream__std__ostream___M_insert_unsigned_long_(t339, t340);
  __retval338 = r341;
  struct std__basic_ostream_char__std__char_traits_char__* t342 = __retval338;
  return t342;
}

// function: main
int main() {
bb343:
  int __retval344;
  long n345;
  unsigned long n1346;
  int c347 = 0;
  __retval344 = c347;
  char* cast348 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r349 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast348);
  struct std__basic_istream_char__std__char_traits_char__* r350 = std__istream__operator__(&_ZSt3cin, &n345);
  char* cast351 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r352 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast351);
  long t353 = n345;
  struct std__basic_ostream_char__std__char_traits_char__* r354 = std__ostream__operator__(r352, t353);
  struct std__basic_ostream_char__std__char_traits_char__* r355 = std__ostream__operator___std__ostream_____(r354, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  long r356 = std__istream__gcount___const(&_ZSt3cin);
  int cast357 = (int)r356;
  int c358 = 0;
  _Bool c359 = ((cast357 >= c358)) ? 1 : 0;
  if (c359) {
  } else {
    char* cast360 = (char*)&(_str_2);
    char* c361 = _str_3;
    unsigned int c362 = 19;
    char* cast363 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast360, c361, c362, cast363);
  }
  char* cast364 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r365 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast364);
  struct std__basic_istream_char__std__char_traits_char__* r366 = std__istream__operator___std__ios_base_____(&_ZSt3cin, &std__hex);
  struct std__basic_istream_char__std__char_traits_char__* r367 = std__istream__operator__(r366, &n345);
  char* cast368 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r369 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast368);
  long t370 = n345;
  struct std__basic_ostream_char__std__char_traits_char__* r371 = std__ostream__operator__(r369, t370);
  struct std__basic_ostream_char__std__char_traits_char__* r372 = std__ostream__operator___std__ostream_____(r371, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast373 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r374 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast373);
  struct std__basic_istream_char__std__char_traits_char__* r375 = std__istream__operator___std__ios_base_____(&_ZSt3cin, &std__dec);
  struct std__basic_istream_char__std__char_traits_char__* r376 = std__istream__operator___2(r375, &n1346);
  char* cast377 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r378 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast377);
  unsigned long t379 = n1346;
  struct std__basic_ostream_char__std__char_traits_char__* r380 = std__ostream__operator___2(r378, t379);
  struct std__basic_ostream_char__std__char_traits_char__* r381 = std__ostream__operator___std__ostream_____(r380, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  long r382 = std__istream__gcount___const(&_ZSt3cin);
  int cast383 = (int)r382;
  int c384 = 0;
  _Bool c385 = ((cast383 >= c384)) ? 1 : 0;
  if (c385) {
  } else {
    char* cast386 = (char*)&(_str_2);
    char* c387 = _str_3;
    unsigned int c388 = 28;
    char* cast389 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast386, c387, c388, cast389);
  }
  char* cast390 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r391 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast390);
  struct std__basic_istream_char__std__char_traits_char__* r392 = std__istream__operator___std__ios_base_____(&_ZSt3cin, &std__hex);
  struct std__basic_istream_char__std__char_traits_char__* r393 = std__istream__operator___2(r392, &n1346);
  char* cast394 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r395 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast394);
  unsigned long t396 = n1346;
  struct std__basic_ostream_char__std__char_traits_char__* r397 = std__ostream__operator___2(r395, t396);
  struct std__basic_ostream_char__std__char_traits_char__* r398 = std__ostream__operator___std__ostream_____(r397, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  long r399 = std__istream__gcount___const(&_ZSt3cin);
  int cast400 = (int)r399;
  int c401 = 0;
  _Bool c402 = ((cast400 >= c401)) ? 1 : 0;
  if (c402) {
  } else {
    char* cast403 = (char*)&(_str_2);
    char* c404 = _str_3;
    unsigned int c405 = 34;
    char* cast406 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast403, c404, c405, cast406);
  }
  int c407 = 0;
  __retval344 = c407;
  int t408 = __retval344;
  return t408;
}

