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
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base9boolalphaE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[13] = "   a and b: ";
char _str_1[14] = "\n    a or b: ";
char _str_2[14] = "\n     not a: ";
char _str_3[14] = "\na not_eq b: ";
char _str_4[14] = "\na bitand b: ";
char _str_5[14] = "\na bit_or b: ";
char _str_6[14] = "\n   a xor b: ";
char _str_7[14] = "\n   compl a: ";
char _str_8[14] = "\na and_eq b: ";
char _str_9[14] = "\n a or_eq b: ";
char _str_10[14] = "\na xor_eq b: ";
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
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int std__operator__2(int p0, int p1);
int* std__operator__(int* p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__boolalpha(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_bool_(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v103, void* v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  void* __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __pf107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  void* t110 = __pf107;
  void** v111 = (void**)t109;
  void* v112 = *((void**)v111);
  unsigned char* cast113 = (unsigned char*)v112;
  long c114 = -24;
  unsigned char* ptr115 = &(cast113)[c114];
  long* cast116 = (long*)ptr115;
  long t117 = *cast116;
  unsigned char* cast118 = (unsigned char*)t109;
  unsigned char* ptr119 = &(cast118)[t117];
  struct std__basic_ostream_char__std__char_traits_char__* cast120 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr119;
  struct std__ios_base* cast121 = (struct std__ios_base*)cast120;
  struct std__ios_base* r122 = ((struct std__ios_base* (*)(struct std__ios_base*))t110)(cast121);
  __retval108 = t109;
  struct std__basic_ostream_char__std__char_traits_char__* t123 = __retval108;
  return t123;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__2(int v124, int v125) {
bb126:
  int __a127;
  int __b128;
  int __retval129;
  __a127 = v124;
  __b128 = v125;
  int t130 = __a127;
  int t131 = __b128;
  int b132 = t130 | t131;
  __retval129 = b132;
  int t133 = __retval129;
  return t133;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator__(int* v134, int v135) {
bb136:
  int* __a137;
  int __b138;
  int* __retval139;
  __a137 = v134;
  __b138 = v135;
  int* t140 = __a137;
  int t141 = *t140;
  int t142 = __b138;
  int r143 = std__operator__2(t141, t142);
  int* t144 = __a137;
  *t144 = r143;
  __retval139 = t144;
  int* t145 = __retval139;
  return t145;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v146, int v147) {
bb148:
  struct std__ios_base* this149;
  int __fmtfl150;
  int __retval151;
  int __old152;
  this149 = v146;
  __fmtfl150 = v147;
  struct std__ios_base* t153 = this149;
  int t154 = t153->_M_flags;
  __old152 = t154;
  int t155 = __fmtfl150;
  int* r156 = std__operator__(&t153->_M_flags, t155);
  int t157 = __old152;
  __retval151 = t157;
  int t158 = __retval151;
  return t158;
}

// function: _ZSt9boolalphaRSt8ios_base
struct std__ios_base* std__boolalpha(struct std__ios_base* v159) {
bb160:
  struct std__ios_base* __base161;
  struct std__ios_base* __retval162;
  __base161 = v159;
  struct std__ios_base* t163 = __base161;
  int t164 = _ZNSt8ios_base9boolalphaE_const;
  int r165 = std__ios_base__setf(t163, t164);
  struct std__ios_base* t166 = __base161;
  __retval162 = t166;
  struct std__ios_base* t167 = __retval162;
  return t167;
}

// function: _ZNSolsEb
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v168, _Bool v169) {
bb170:
  struct std__basic_ostream_char__std__char_traits_char__* this171;
  _Bool __n172;
  struct std__basic_ostream_char__std__char_traits_char__* __retval173;
  this171 = v168;
  __n172 = v169;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = this171;
  _Bool t175 = __n172;
  struct std__basic_ostream_char__std__char_traits_char__* r176 = std__ostream__std__ostream___M_insert_bool_(t174, t175);
  __retval173 = r176;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __retval173;
  return t177;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v178, void* v179) {
bb180:
  struct std__basic_ostream_char__std__char_traits_char__* this181;
  void* __pf182;
  struct std__basic_ostream_char__std__char_traits_char__* __retval183;
  this181 = v178;
  __pf182 = v179;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = this181;
  void* t185 = __pf182;
  struct std__basic_ostream_char__std__char_traits_char__* r186 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t185)(t184);
  __retval183 = r186;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __retval183;
  return t187;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v188) {
bb189:
  struct std__basic_ostream_char__std__char_traits_char__* __os190;
  struct std__basic_ostream_char__std__char_traits_char__* __retval191;
  __os190 = v188;
  struct std__basic_ostream_char__std__char_traits_char__* t192 = __os190;
  struct std__basic_ostream_char__std__char_traits_char__* r193 = std__ostream__flush(t192);
  __retval191 = r193;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __retval191;
  return t194;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v195) {
bb196:
  struct std__ctype_char_* __f197;
  struct std__ctype_char_* __retval198;
  __f197 = v195;
    struct std__ctype_char_* t199 = __f197;
    _Bool cast200 = (_Bool)t199;
    _Bool u201 = !cast200;
    if (u201) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t202 = __f197;
  __retval198 = t202;
  struct std__ctype_char_* t203 = __retval198;
  return t203;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v204, char v205) {
bb206:
  struct std__ctype_char_* this207;
  char __c208;
  char __retval209;
  this207 = v204;
  __c208 = v205;
  struct std__ctype_char_* t210 = this207;
    char t211 = t210->_M_widen_ok;
    _Bool cast212 = (_Bool)t211;
    if (cast212) {
      char t213 = __c208;
      unsigned char cast214 = (unsigned char)t213;
      unsigned long cast215 = (unsigned long)cast214;
      char t216 = t210->_M_widen[cast215];
      __retval209 = t216;
      char t217 = __retval209;
      return t217;
    }
  std__ctype_char____M_widen_init___const(t210);
  char t218 = __c208;
  void** v219 = (void**)t210;
  void* v220 = *((void**)v219);
  char vcall223 = (char)__VERIFIER_virtual_call_char_char(t210, 6, t218);
  __retval209 = vcall223;
  char t224 = __retval209;
  return t224;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v225, char v226) {
bb227:
  struct std__basic_ios_char__std__char_traits_char__* this228;
  char __c229;
  char __retval230;
  this228 = v225;
  __c229 = v226;
  struct std__basic_ios_char__std__char_traits_char__* t231 = this228;
  struct std__ctype_char_* t232 = t231->_M_ctype;
  struct std__ctype_char_* r233 = std__ctype_char__const__std____check_facet_std__ctype_char___(t232);
  char t234 = __c229;
  char r235 = std__ctype_char___widen_char__const(r233, t234);
  __retval230 = r235;
  char t236 = __retval230;
  return t236;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v237) {
bb238:
  struct std__basic_ostream_char__std__char_traits_char__* __os239;
  struct std__basic_ostream_char__std__char_traits_char__* __retval240;
  __os239 = v237;
  struct std__basic_ostream_char__std__char_traits_char__* t241 = __os239;
  struct std__basic_ostream_char__std__char_traits_char__* t242 = __os239;
  void** v243 = (void**)t242;
  void* v244 = *((void**)v243);
  unsigned char* cast245 = (unsigned char*)v244;
  long c246 = -24;
  unsigned char* ptr247 = &(cast245)[c246];
  long* cast248 = (long*)ptr247;
  long t249 = *cast248;
  unsigned char* cast250 = (unsigned char*)t242;
  unsigned char* ptr251 = &(cast250)[t249];
  struct std__basic_ostream_char__std__char_traits_char__* cast252 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr251;
  struct std__basic_ios_char__std__char_traits_char__* cast253 = (struct std__basic_ios_char__std__char_traits_char__*)cast252;
  char c254 = 10;
  char r255 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast253, c254);
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__ostream__put(t241, r255);
  struct std__basic_ostream_char__std__char_traits_char__* r257 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r256);
  __retval240 = r257;
  struct std__basic_ostream_char__std__char_traits_char__* t258 = __retval240;
  return t258;
}

// function: main
int main() {
bb259:
  int __retval260;
  int a261;
  int b262;
  int c263 = 0;
  __retval260 = c263;
  int c264 = 2;
  a261 = c264;
  int c265 = 3;
  b262 = c265;
  struct std__basic_ostream_char__std__char_traits_char__* r266 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__boolalpha);
  char* cast267 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r268 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r266, cast267);
  int t269 = a261;
  _Bool cast270 = (_Bool)t269;
  _Bool ternary271;
  if (cast270) {
    int t272 = b262;
    _Bool cast273 = (_Bool)t272;
    ternary271 = (_Bool)cast273;
  } else {
    _Bool c274 = 0;
    ternary271 = (_Bool)c274;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r275 = std__ostream__operator__(r268, ternary271);
  char* cast276 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r277 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r275, cast276);
  int t278 = a261;
  _Bool cast279 = (_Bool)t278;
  _Bool ternary280;
  if (cast279) {
    _Bool c281 = 1;
    ternary280 = (_Bool)c281;
  } else {
    int t282 = b262;
    _Bool cast283 = (_Bool)t282;
    ternary280 = (_Bool)cast283;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r284 = std__ostream__operator__(r277, ternary280);
  char* cast285 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r286 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r284, cast285);
  int t287 = a261;
  _Bool cast288 = (_Bool)t287;
  _Bool u289 = !cast288;
  struct std__basic_ostream_char__std__char_traits_char__* r290 = std__ostream__operator__(r286, u289);
  char* cast291 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r292 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r290, cast291);
  int t293 = a261;
  int t294 = b262;
  _Bool c295 = ((t293 != t294)) ? 1 : 0;
  struct std__basic_ostream_char__std__char_traits_char__* r296 = std__ostream__operator__(r292, c295);
  char* cast297 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r298 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r296, cast297);
  int t299 = a261;
  int t300 = b262;
  int b301 = t299 & t300;
  struct std__basic_ostream_char__std__char_traits_char__* r302 = std__ostream__operator___2(r298, b301);
  char* cast303 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r304 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r302, cast303);
  int t305 = a261;
  int t306 = b262;
  int b307 = t305 | t306;
  struct std__basic_ostream_char__std__char_traits_char__* r308 = std__ostream__operator___2(r304, b307);
  char* cast309 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r310 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r308, cast309);
  int t311 = a261;
  int t312 = b262;
  int b313 = t311 ^ t312;
  struct std__basic_ostream_char__std__char_traits_char__* r314 = std__ostream__operator___2(r310, b313);
  char* cast315 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r316 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r314, cast315);
  int t317 = a261;
  int u318 = ~t317;
  struct std__basic_ostream_char__std__char_traits_char__* r319 = std__ostream__operator___2(r316, u318);
  char* cast320 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r321 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r319, cast320);
  int t322 = b262;
  int t323 = a261;
  int b324 = t323 & t322;
  a261 = b324;
  struct std__basic_ostream_char__std__char_traits_char__* r325 = std__ostream__operator___2(r321, b324);
  char* cast326 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r327 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r325, cast326);
  int t328 = b262;
  int t329 = a261;
  int b330 = t329 | t328;
  a261 = b330;
  struct std__basic_ostream_char__std__char_traits_char__* r331 = std__ostream__operator___2(r327, b330);
  char* cast332 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r333 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r331, cast332);
  int t334 = b262;
  int t335 = a261;
  int b336 = t335 ^ t334;
  a261 = b336;
  struct std__basic_ostream_char__std__char_traits_char__* r337 = std__ostream__operator___2(r333, b336);
  struct std__basic_ostream_char__std__char_traits_char__* r338 = std__ostream__operator___std__ostream_____(r337, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c339 = 0;
  __retval260 = c339;
  int t340 = __retval260;
  return t340;
}

