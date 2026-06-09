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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "Enter an integer: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[11] = "Fibonacci(";
char _str_2[5] = ") = ";
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_unsigned_long_(struct std__basic_istream_char__std__char_traits_char__* p0, unsigned long* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, unsigned long* p1);
unsigned long fibonacci(unsigned long p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
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

// function: _ZNSirsERm
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v103, unsigned long* v104) {
bb105:
  struct std__basic_istream_char__std__char_traits_char__* this106;
  unsigned long* __n107;
  struct std__basic_istream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __n107 = v104;
  struct std__basic_istream_char__std__char_traits_char__* t109 = this106;
  unsigned long* t110 = __n107;
  struct std__basic_istream_char__std__char_traits_char__* r111 = std__istream__std__istream___M_extract_unsigned_long_(t109, t110);
  __retval108 = r111;
  struct std__basic_istream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _Z9fibonaccim
unsigned long fibonacci(unsigned long v113) {
bb114:
  unsigned long n115;
  unsigned long __retval116;
  n115 = v113;
    unsigned long t117 = n115;
    unsigned long c118 = 0;
    _Bool c119 = ((t117 == c118)) ? 1 : 0;
    _Bool ternary120;
    if (c119) {
      _Bool c121 = 1;
      ternary120 = (_Bool)c121;
    } else {
      unsigned long t122 = n115;
      unsigned long c123 = 1;
      _Bool c124 = ((t122 == c123)) ? 1 : 0;
      ternary120 = (_Bool)c124;
    }
    if (ternary120) {
      unsigned long t125 = n115;
      __retval116 = t125;
      unsigned long t126 = __retval116;
      return t126;
    } else {
      unsigned long t127 = n115;
      unsigned long c128 = 1;
      unsigned long b129 = t127 - c128;
      unsigned long r130 = fibonacci(b129);
      unsigned long t131 = n115;
      unsigned long c132 = 2;
      unsigned long b133 = t131 - c132;
      unsigned long r134 = fibonacci(b133);
      unsigned long b135 = r130 + r134;
      __retval116 = b135;
      unsigned long t136 = __retval116;
      return t136;
    }
  abort();
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v137, unsigned long v138) {
bb139:
  struct std__basic_ostream_char__std__char_traits_char__* this140;
  unsigned long __n141;
  struct std__basic_ostream_char__std__char_traits_char__* __retval142;
  this140 = v137;
  __n141 = v138;
  struct std__basic_ostream_char__std__char_traits_char__* t143 = this140;
  unsigned long t144 = __n141;
  struct std__basic_ostream_char__std__char_traits_char__* r145 = std__ostream__std__ostream___M_insert_unsigned_long_(t143, t144);
  __retval142 = r145;
  struct std__basic_ostream_char__std__char_traits_char__* t146 = __retval142;
  return t146;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v147, void* v148) {
bb149:
  struct std__basic_ostream_char__std__char_traits_char__* this150;
  void* __pf151;
  struct std__basic_ostream_char__std__char_traits_char__* __retval152;
  this150 = v147;
  __pf151 = v148;
  struct std__basic_ostream_char__std__char_traits_char__* t153 = this150;
  void* t154 = __pf151;
  struct std__basic_ostream_char__std__char_traits_char__* r155 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t154)(t153);
  __retval152 = r155;
  struct std__basic_ostream_char__std__char_traits_char__* t156 = __retval152;
  return t156;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v157) {
bb158:
  struct std__basic_ostream_char__std__char_traits_char__* __os159;
  struct std__basic_ostream_char__std__char_traits_char__* __retval160;
  __os159 = v157;
  struct std__basic_ostream_char__std__char_traits_char__* t161 = __os159;
  struct std__basic_ostream_char__std__char_traits_char__* r162 = std__ostream__flush(t161);
  __retval160 = r162;
  struct std__basic_ostream_char__std__char_traits_char__* t163 = __retval160;
  return t163;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v164) {
bb165:
  struct std__ctype_char_* __f166;
  struct std__ctype_char_* __retval167;
  __f166 = v164;
    struct std__ctype_char_* t168 = __f166;
    _Bool cast169 = (_Bool)t168;
    _Bool u170 = !cast169;
    if (u170) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t171 = __f166;
  __retval167 = t171;
  struct std__ctype_char_* t172 = __retval167;
  return t172;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v173, char v174) {
bb175:
  struct std__ctype_char_* this176;
  char __c177;
  char __retval178;
  this176 = v173;
  __c177 = v174;
  struct std__ctype_char_* t179 = this176;
    char t180 = t179->_M_widen_ok;
    _Bool cast181 = (_Bool)t180;
    if (cast181) {
      char t182 = __c177;
      unsigned char cast183 = (unsigned char)t182;
      unsigned long cast184 = (unsigned long)cast183;
      char t185 = t179->_M_widen[cast184];
      __retval178 = t185;
      char t186 = __retval178;
      return t186;
    }
  std__ctype_char____M_widen_init___const(t179);
  char t187 = __c177;
  void** v188 = (void**)t179;
  void* v189 = *((void**)v188);
  char vcall192 = (char)__VERIFIER_virtual_call_char_char(t179, 6, t187);
  __retval178 = vcall192;
  char t193 = __retval178;
  return t193;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v194, char v195) {
bb196:
  struct std__basic_ios_char__std__char_traits_char__* this197;
  char __c198;
  char __retval199;
  this197 = v194;
  __c198 = v195;
  struct std__basic_ios_char__std__char_traits_char__* t200 = this197;
  struct std__ctype_char_* t201 = t200->_M_ctype;
  struct std__ctype_char_* r202 = std__ctype_char__const__std____check_facet_std__ctype_char___(t201);
  char t203 = __c198;
  char r204 = std__ctype_char___widen_char__const(r202, t203);
  __retval199 = r204;
  char t205 = __retval199;
  return t205;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v206) {
bb207:
  struct std__basic_ostream_char__std__char_traits_char__* __os208;
  struct std__basic_ostream_char__std__char_traits_char__* __retval209;
  __os208 = v206;
  struct std__basic_ostream_char__std__char_traits_char__* t210 = __os208;
  struct std__basic_ostream_char__std__char_traits_char__* t211 = __os208;
  void** v212 = (void**)t211;
  void* v213 = *((void**)v212);
  unsigned char* cast214 = (unsigned char*)v213;
  long c215 = -24;
  unsigned char* ptr216 = &(cast214)[c215];
  long* cast217 = (long*)ptr216;
  long t218 = *cast217;
  unsigned char* cast219 = (unsigned char*)t211;
  unsigned char* ptr220 = &(cast219)[t218];
  struct std__basic_ostream_char__std__char_traits_char__* cast221 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr220;
  struct std__basic_ios_char__std__char_traits_char__* cast222 = (struct std__basic_ios_char__std__char_traits_char__*)cast221;
  char c223 = 10;
  char r224 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast222, c223);
  struct std__basic_ostream_char__std__char_traits_char__* r225 = std__ostream__put(t210, r224);
  struct std__basic_ostream_char__std__char_traits_char__* r226 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r225);
  __retval209 = r226;
  struct std__basic_ostream_char__std__char_traits_char__* t227 = __retval209;
  return t227;
}

// function: main
int main() {
bb228:
  int __retval229;
  unsigned long result230;
  unsigned long number231;
  int c232 = 0;
  __retval229 = c232;
  char* cast233 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r234 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast233);
  struct std__basic_istream_char__std__char_traits_char__* r235 = std__istream__operator__(&_ZSt3cin, &number231);
  unsigned long t236 = number231;
  unsigned long r237 = fibonacci(t236);
  result230 = r237;
  char* cast238 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast238);
  unsigned long t240 = number231;
  struct std__basic_ostream_char__std__char_traits_char__* r241 = std__ostream__operator__(r239, t240);
  char* cast242 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r243 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r241, cast242);
  unsigned long t244 = result230;
  struct std__basic_ostream_char__std__char_traits_char__* r245 = std__ostream__operator__(r243, t244);
  struct std__basic_ostream_char__std__char_traits_char__* r246 = std__ostream__operator___std__ostream_____(r245, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c247 = 0;
  __retval229 = c247;
  int t248 = __retval229;
  return t248;
}

