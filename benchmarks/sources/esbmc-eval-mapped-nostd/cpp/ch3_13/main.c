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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[5] = "! = ";
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
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
unsigned long factorial(unsigned long p0);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v0, int v1) {
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
  int r26 = std__operator_(r24, t25);
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

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v103, long v104) {
bb105:
  struct std__ios_base* this106;
  long __wide107;
  long __retval108;
  long __old109;
  this106 = v103;
  __wide107 = v104;
  struct std__ios_base* t110 = this106;
  long t111 = t110->_M_width;
  __old109 = t111;
  long t112 = __wide107;
  t110->_M_width = t112;
  long t113 = __old109;
  __retval108 = t113;
  long t114 = __retval108;
  return t114;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v115, struct std___Setw v116) {
bb117:
  struct std__basic_ostream_char__std__char_traits_char__* __os118;
  struct std___Setw __f119;
  struct std__basic_ostream_char__std__char_traits_char__* __retval120;
  __os118 = v115;
  __f119 = v116;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = __os118;
  void** v122 = (void**)t121;
  void* v123 = *((void**)v122);
  unsigned char* cast124 = (unsigned char*)v123;
  long c125 = -24;
  unsigned char* ptr126 = &(cast124)[c125];
  long* cast127 = (long*)ptr126;
  long t128 = *cast127;
  unsigned char* cast129 = (unsigned char*)t121;
  unsigned char* ptr130 = &(cast129)[t128];
  struct std__basic_ostream_char__std__char_traits_char__* cast131 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr130;
  struct std__ios_base* cast132 = (struct std__ios_base*)cast131;
  int t133 = __f119._M_n;
  long cast134 = (long)t133;
  long r135 = std__ios_base__width(cast132, cast134);
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __os118;
  __retval120 = t136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval120;
  return t137;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v138) {
bb139:
  int __n140;
  struct std___Setw __retval141;
  __n140 = v138;
  int t142 = __n140;
  __retval141._M_n = t142;
  struct std___Setw t143 = __retval141;
  return t143;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v144, unsigned long v145) {
bb146:
  struct std__basic_ostream_char__std__char_traits_char__* this147;
  unsigned long __n148;
  struct std__basic_ostream_char__std__char_traits_char__* __retval149;
  this147 = v144;
  __n148 = v145;
  struct std__basic_ostream_char__std__char_traits_char__* t150 = this147;
  unsigned long t151 = __n148;
  struct std__basic_ostream_char__std__char_traits_char__* r152 = std__ostream__std__ostream___M_insert_unsigned_long_(t150, t151);
  __retval149 = r152;
  struct std__basic_ostream_char__std__char_traits_char__* t153 = __retval149;
  return t153;
}

// function: _Z9factorialm
unsigned long factorial(unsigned long v154) {
bb155:
  unsigned long number156;
  unsigned long __retval157;
  number156 = v154;
    unsigned long t158 = number156;
    unsigned long c159 = 1;
    _Bool c160 = ((t158 <= c159)) ? 1 : 0;
    if (c160) {
      unsigned long c161 = 1;
      __retval157 = c161;
      unsigned long t162 = __retval157;
      return t162;
    } else {
      unsigned long t163 = number156;
      unsigned long t164 = number156;
      unsigned long c165 = 1;
      unsigned long b166 = t164 - c165;
      unsigned long r167 = factorial(b166);
      unsigned long b168 = t163 * r167;
      __retval157 = b168;
      unsigned long t169 = __retval157;
      return t169;
    }
  abort();
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v170, void* v171) {
bb172:
  struct std__basic_ostream_char__std__char_traits_char__* this173;
  void* __pf174;
  struct std__basic_ostream_char__std__char_traits_char__* __retval175;
  this173 = v170;
  __pf174 = v171;
  struct std__basic_ostream_char__std__char_traits_char__* t176 = this173;
  void* t177 = __pf174;
  struct std__basic_ostream_char__std__char_traits_char__* r178 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t177)(t176);
  __retval175 = r178;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __retval175;
  return t179;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v180) {
bb181:
  struct std__basic_ostream_char__std__char_traits_char__* __os182;
  struct std__basic_ostream_char__std__char_traits_char__* __retval183;
  __os182 = v180;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = __os182;
  struct std__basic_ostream_char__std__char_traits_char__* r185 = std__ostream__flush(t184);
  __retval183 = r185;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __retval183;
  return t186;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v187) {
bb188:
  struct std__ctype_char_* __f189;
  struct std__ctype_char_* __retval190;
  __f189 = v187;
    struct std__ctype_char_* t191 = __f189;
    _Bool cast192 = (_Bool)t191;
    _Bool u193 = !cast192;
    if (u193) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t194 = __f189;
  __retval190 = t194;
  struct std__ctype_char_* t195 = __retval190;
  return t195;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v196, char v197) {
bb198:
  struct std__ctype_char_* this199;
  char __c200;
  char __retval201;
  this199 = v196;
  __c200 = v197;
  struct std__ctype_char_* t202 = this199;
    char t203 = t202->_M_widen_ok;
    _Bool cast204 = (_Bool)t203;
    if (cast204) {
      char t205 = __c200;
      unsigned char cast206 = (unsigned char)t205;
      unsigned long cast207 = (unsigned long)cast206;
      char t208 = t202->_M_widen[cast207];
      __retval201 = t208;
      char t209 = __retval201;
      return t209;
    }
  std__ctype_char____M_widen_init___const(t202);
  char t210 = __c200;
  void** v211 = (void**)t202;
  void* v212 = *((void**)v211);
  char vcall215 = (char)__VERIFIER_virtual_call_char_char(t202, 6, t210);
  __retval201 = vcall215;
  char t216 = __retval201;
  return t216;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v217, char v218) {
bb219:
  struct std__basic_ios_char__std__char_traits_char__* this220;
  char __c221;
  char __retval222;
  this220 = v217;
  __c221 = v218;
  struct std__basic_ios_char__std__char_traits_char__* t223 = this220;
  struct std__ctype_char_* t224 = t223->_M_ctype;
  struct std__ctype_char_* r225 = std__ctype_char__const__std____check_facet_std__ctype_char___(t224);
  char t226 = __c221;
  char r227 = std__ctype_char___widen_char__const(r225, t226);
  __retval222 = r227;
  char t228 = __retval222;
  return t228;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v229) {
bb230:
  struct std__basic_ostream_char__std__char_traits_char__* __os231;
  struct std__basic_ostream_char__std__char_traits_char__* __retval232;
  __os231 = v229;
  struct std__basic_ostream_char__std__char_traits_char__* t233 = __os231;
  struct std__basic_ostream_char__std__char_traits_char__* t234 = __os231;
  void** v235 = (void**)t234;
  void* v236 = *((void**)v235);
  unsigned char* cast237 = (unsigned char*)v236;
  long c238 = -24;
  unsigned char* ptr239 = &(cast237)[c238];
  long* cast240 = (long*)ptr239;
  long t241 = *cast240;
  unsigned char* cast242 = (unsigned char*)t234;
  unsigned char* ptr243 = &(cast242)[t241];
  struct std__basic_ostream_char__std__char_traits_char__* cast244 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr243;
  struct std__basic_ios_char__std__char_traits_char__* cast245 = (struct std__basic_ios_char__std__char_traits_char__*)cast244;
  char c246 = 10;
  char r247 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast245, c246);
  struct std__basic_ostream_char__std__char_traits_char__* r248 = std__ostream__put(t233, r247);
  struct std__basic_ostream_char__std__char_traits_char__* r249 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r248);
  __retval232 = r249;
  struct std__basic_ostream_char__std__char_traits_char__* t250 = __retval232;
  return t250;
}

// function: main
int main() {
bb251:
  int __retval252;
  int c253 = 0;
  __retval252 = c253;
    int i254;
    struct std___Setw agg_tmp0255;
    int c256 = 0;
    i254 = c256;
    while (1) {
      int t258 = i254;
      int c259 = 10;
      _Bool c260 = ((t258 <= c259)) ? 1 : 0;
      if (!c260) break;
      int c261 = 2;
      struct std___Setw r262 = std__setw(c261);
      agg_tmp0255 = r262;
      struct std___Setw t263 = agg_tmp0255;
      struct std__basic_ostream_char__std__char_traits_char__* r264 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t263);
      int t265 = i254;
      struct std__basic_ostream_char__std__char_traits_char__* r266 = std__ostream__operator__(r264, t265);
      char* cast267 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r268 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r266, cast267);
      int t269 = i254;
      unsigned long cast270 = (unsigned long)t269;
      unsigned long r271 = factorial(cast270);
      struct std__basic_ostream_char__std__char_traits_char__* r272 = std__ostream__operator___2(r268, r271);
      struct std__basic_ostream_char__std__char_traits_char__* r273 = std__ostream__operator___std__ostream_____(r272, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    for_step257: ;
      int t274 = i254;
      int u275 = t274 + 1;
      i254 = u275;
    }
  int c276 = 0;
  __retval252 = c276;
  int t277 = __retval252;
  return t277;
}

