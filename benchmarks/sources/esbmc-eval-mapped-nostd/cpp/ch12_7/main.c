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
struct std___Setprecision { int _M_n; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long _M_precision; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[38] = "Square root of 2 with precisions 0-9.";
char _str_1[43] = "Precision set by ios_base member-function ";
char _str_2[11] = "precision:";
char _str_3[38] = "\nPrecision set by stream-manipulator ";
char _str_4[14] = "setprecision:";
extern double sqrt(double p0);
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
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
long std__ios_base__precision(struct std__ios_base* p0, long p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
struct std___Setprecision std__setprecision(int p0);
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v103, void* v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  void* __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __pf107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  void* t110 = __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t110)(t109);
  __retval108 = r111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v113) {
bb114:
  struct std__basic_ostream_char__std__char_traits_char__* __os115;
  struct std__basic_ostream_char__std__char_traits_char__* __retval116;
  __os115 = v113;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __os115;
  struct std__basic_ostream_char__std__char_traits_char__* r118 = std__ostream__flush(t117);
  __retval116 = r118;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __retval116;
  return t119;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v120) {
bb121:
  struct std__ctype_char_* __f122;
  struct std__ctype_char_* __retval123;
  __f122 = v120;
    struct std__ctype_char_* t124 = __f122;
    _Bool cast125 = (_Bool)t124;
    _Bool u126 = !cast125;
    if (u126) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t127 = __f122;
  __retval123 = t127;
  struct std__ctype_char_* t128 = __retval123;
  return t128;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v129, char v130) {
bb131:
  struct std__ctype_char_* this132;
  char __c133;
  char __retval134;
  this132 = v129;
  __c133 = v130;
  struct std__ctype_char_* t135 = this132;
    char t136 = t135->_M_widen_ok;
    _Bool cast137 = (_Bool)t136;
    if (cast137) {
      char t138 = __c133;
      unsigned char cast139 = (unsigned char)t138;
      unsigned long cast140 = (unsigned long)cast139;
      char t141 = t135->_M_widen[cast140];
      __retval134 = t141;
      char t142 = __retval134;
      return t142;
    }
  std__ctype_char____M_widen_init___const(t135);
  char t143 = __c133;
  void** v144 = (void**)t135;
  void* v145 = *((void**)v144);
  char vcall148 = (char)__VERIFIER_virtual_call_char_char(t135, 6, t143);
  __retval134 = vcall148;
  char t149 = __retval134;
  return t149;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v150, char v151) {
bb152:
  struct std__basic_ios_char__std__char_traits_char__* this153;
  char __c154;
  char __retval155;
  this153 = v150;
  __c154 = v151;
  struct std__basic_ios_char__std__char_traits_char__* t156 = this153;
  struct std__ctype_char_* t157 = t156->_M_ctype;
  struct std__ctype_char_* r158 = std__ctype_char__const__std____check_facet_std__ctype_char___(t157);
  char t159 = __c154;
  char r160 = std__ctype_char___widen_char__const(r158, t159);
  __retval155 = r160;
  char t161 = __retval155;
  return t161;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v162) {
bb163:
  struct std__basic_ostream_char__std__char_traits_char__* __os164;
  struct std__basic_ostream_char__std__char_traits_char__* __retval165;
  __os164 = v162;
  struct std__basic_ostream_char__std__char_traits_char__* t166 = __os164;
  struct std__basic_ostream_char__std__char_traits_char__* t167 = __os164;
  void** v168 = (void**)t167;
  void* v169 = *((void**)v168);
  unsigned char* cast170 = (unsigned char*)v169;
  long c171 = -24;
  unsigned char* ptr172 = &(cast170)[c171];
  long* cast173 = (long*)ptr172;
  long t174 = *cast173;
  unsigned char* cast175 = (unsigned char*)t167;
  unsigned char* ptr176 = &(cast175)[t174];
  struct std__basic_ostream_char__std__char_traits_char__* cast177 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr176;
  struct std__basic_ios_char__std__char_traits_char__* cast178 = (struct std__basic_ios_char__std__char_traits_char__*)cast177;
  char c179 = 10;
  char r180 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast178, c179);
  struct std__basic_ostream_char__std__char_traits_char__* r181 = std__ostream__put(t166, r180);
  struct std__basic_ostream_char__std__char_traits_char__* r182 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r181);
  __retval165 = r182;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __retval165;
  return t183;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v184, void* v185) {
bb186:
  struct std__basic_ostream_char__std__char_traits_char__* this187;
  void* __pf188;
  struct std__basic_ostream_char__std__char_traits_char__* __retval189;
  this187 = v184;
  __pf188 = v185;
  struct std__basic_ostream_char__std__char_traits_char__* t190 = this187;
  void* t191 = __pf188;
  void** v192 = (void**)t190;
  void* v193 = *((void**)v192);
  unsigned char* cast194 = (unsigned char*)v193;
  long c195 = -24;
  unsigned char* ptr196 = &(cast194)[c195];
  long* cast197 = (long*)ptr196;
  long t198 = *cast197;
  unsigned char* cast199 = (unsigned char*)t190;
  unsigned char* ptr200 = &(cast199)[t198];
  struct std__basic_ostream_char__std__char_traits_char__* cast201 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr200;
  struct std__ios_base* cast202 = (struct std__ios_base*)cast201;
  struct std__ios_base* r203 = ((struct std__ios_base* (*)(struct std__ios_base*))t191)(cast202);
  __retval189 = t190;
  struct std__basic_ostream_char__std__char_traits_char__* t204 = __retval189;
  return t204;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v205, int v206) {
bb207:
  int* __a208;
  int __b209;
  int* __retval210;
  __a208 = v205;
  __b209 = v206;
  int* t211 = __a208;
  int t212 = *t211;
  int t213 = __b209;
  int r214 = std__operator_(t212, t213);
  int* t215 = __a208;
  *t215 = r214;
  __retval210 = t215;
  int* t216 = __retval210;
  return t216;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v217) {
bb218:
  int __a219;
  int __retval220;
  __a219 = v217;
  int t221 = __a219;
  int u222 = ~t221;
  __retval220 = u222;
  int t223 = __retval220;
  return t223;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v224, int v225) {
bb226:
  int __a227;
  int __b228;
  int __retval229;
  __a227 = v224;
  __b228 = v225;
  int t230 = __a227;
  int t231 = __b228;
  int b232 = t230 | t231;
  __retval229 = b232;
  int t233 = __retval229;
  return t233;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v234, int v235) {
bb236:
  int* __a237;
  int __b238;
  int* __retval239;
  __a237 = v234;
  __b238 = v235;
  int* t240 = __a237;
  int t241 = *t240;
  int t242 = __b238;
  int r243 = std__operator__4(t241, t242);
  int* t244 = __a237;
  *t244 = r243;
  __retval239 = t244;
  int* t245 = __retval239;
  return t245;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v246, int v247) {
bb248:
  int __a249;
  int __b250;
  int __retval251;
  __a249 = v246;
  __b250 = v247;
  int t252 = __a249;
  int t253 = __b250;
  int b254 = t252 & t253;
  __retval251 = b254;
  int t255 = __retval251;
  return t255;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v256, int v257, int v258) {
bb259:
  struct std__ios_base* this260;
  int __fmtfl261;
  int __mask262;
  int __retval263;
  int __old264;
  this260 = v256;
  __fmtfl261 = v257;
  __mask262 = v258;
  struct std__ios_base* t265 = this260;
  int t266 = t265->_M_flags;
  __old264 = t266;
  int t267 = __mask262;
  int r268 = std__operator__2(t267);
  int* r269 = std__operator__(&t265->_M_flags, r268);
  int t270 = __fmtfl261;
  int t271 = __mask262;
  int r272 = std__operator_(t270, t271);
  int* r273 = std__operator___2(&t265->_M_flags, r272);
  int t274 = __old264;
  __retval263 = t274;
  int t275 = __retval263;
  return t275;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v276) {
bb277:
  struct std__ios_base* __base278;
  struct std__ios_base* __retval279;
  __base278 = v276;
  struct std__ios_base* t280 = __base278;
  int t281 = _ZNSt8ios_base5fixedE_const;
  int t282 = _ZNSt8ios_base10floatfieldE_const;
  int r283 = std__ios_base__setf(t280, t281, t282);
  struct std__ios_base* t284 = __base278;
  __retval279 = t284;
  struct std__ios_base* t285 = __retval279;
  return t285;
}

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v286, long v287) {
bb288:
  struct std__ios_base* this289;
  long __prec290;
  long __retval291;
  long __old292;
  this289 = v286;
  __prec290 = v287;
  struct std__ios_base* t293 = this289;
  long t294 = t293->_M_precision;
  __old292 = t294;
  long t295 = __prec290;
  t293->_M_precision = t295;
  long t296 = __old292;
  __retval291 = t296;
  long t297 = __retval291;
  return t297;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v298, double v299) {
bb300:
  struct std__basic_ostream_char__std__char_traits_char__* this301;
  double __f302;
  struct std__basic_ostream_char__std__char_traits_char__* __retval303;
  this301 = v298;
  __f302 = v299;
  struct std__basic_ostream_char__std__char_traits_char__* t304 = this301;
  double t305 = __f302;
  struct std__basic_ostream_char__std__char_traits_char__* r306 = std__ostream__std__ostream___M_insert_double_(t304, t305);
  __retval303 = r306;
  struct std__basic_ostream_char__std__char_traits_char__* t307 = __retval303;
  return t307;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v308, struct std___Setprecision v309) {
bb310:
  struct std__basic_ostream_char__std__char_traits_char__* __os311;
  struct std___Setprecision __f312;
  struct std__basic_ostream_char__std__char_traits_char__* __retval313;
  __os311 = v308;
  __f312 = v309;
  struct std__basic_ostream_char__std__char_traits_char__* t314 = __os311;
  void** v315 = (void**)t314;
  void* v316 = *((void**)v315);
  unsigned char* cast317 = (unsigned char*)v316;
  long c318 = -24;
  unsigned char* ptr319 = &(cast317)[c318];
  long* cast320 = (long*)ptr319;
  long t321 = *cast320;
  unsigned char* cast322 = (unsigned char*)t314;
  unsigned char* ptr323 = &(cast322)[t321];
  struct std__basic_ostream_char__std__char_traits_char__* cast324 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr323;
  struct std__ios_base* cast325 = (struct std__ios_base*)cast324;
  int t326 = __f312._M_n;
  long cast327 = (long)t326;
  long r328 = std__ios_base__precision(cast325, cast327);
  struct std__basic_ostream_char__std__char_traits_char__* t329 = __os311;
  __retval313 = t329;
  struct std__basic_ostream_char__std__char_traits_char__* t330 = __retval313;
  return t330;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v331) {
bb332:
  int __n333;
  struct std___Setprecision __retval334;
  __n333 = v331;
  int t335 = __n333;
  __retval334._M_n = t335;
  struct std___Setprecision t336 = __retval334;
  return t336;
}

// function: main
int main() {
bb337:
  int __retval338;
  double root2339;
  int places340;
  int c341 = 0;
  __retval338 = c341;
  double c342 = 0x1p1;
  double r343 = sqrt(c342);
  root2339 = r343;
  char* cast344 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r345 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast344);
  struct std__basic_ostream_char__std__char_traits_char__* r346 = std__ostream__operator___std__ostream_____(r345, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast347 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r348 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r346, cast347);
  char* cast349 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r350 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r348, cast349);
  struct std__basic_ostream_char__std__char_traits_char__* r351 = std__ostream__operator___std__ostream_____(r350, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r352 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__fixed);
    int c353 = 0;
    places340 = c353;
    while (1) {
      int t355 = places340;
      int c356 = 9;
      _Bool c357 = ((t355 <= c356)) ? 1 : 0;
      if (!c357) break;
        void** v358 = (void**)&_ZSt4cout;
        void* v359 = *((void**)v358);
        unsigned char* cast360 = (unsigned char*)v359;
        long c361 = -24;
        unsigned char* ptr362 = &(cast360)[c361];
        long* cast363 = (long*)ptr362;
        long t364 = *cast363;
        unsigned char* cast365 = (unsigned char*)&_ZSt4cout;
        unsigned char* ptr366 = &(cast365)[t364];
        struct std__basic_ostream_char__std__char_traits_char__* cast367 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr366;
        struct std__ios_base* cast368 = (struct std__ios_base*)cast367;
        int t369 = places340;
        long cast370 = (long)t369;
        long r371 = std__ios_base__precision(cast368, cast370);
        double t372 = root2339;
        struct std__basic_ostream_char__std__char_traits_char__* r373 = std__ostream__operator__(&_ZSt4cout, t372);
        struct std__basic_ostream_char__std__char_traits_char__* r374 = std__ostream__operator___std__ostream_____(r373, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    for_step354: ;
      int t375 = places340;
      int u376 = t375 + 1;
      places340 = u376;
    }
  char* cast377 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r378 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast377);
  char* cast379 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r380 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r378, cast379);
  struct std__basic_ostream_char__std__char_traits_char__* r381 = std__ostream__operator___std__ostream_____(r380, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct std___Setprecision agg_tmp0382;
    int c383 = 0;
    places340 = c383;
    while (1) {
      int t385 = places340;
      int c386 = 9;
      _Bool c387 = ((t385 <= c386)) ? 1 : 0;
      if (!c387) break;
      int t388 = places340;
      struct std___Setprecision r389 = std__setprecision(t388);
      agg_tmp0382 = r389;
      struct std___Setprecision t390 = agg_tmp0382;
      struct std__basic_ostream_char__std__char_traits_char__* r391 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t390);
      double t392 = root2339;
      struct std__basic_ostream_char__std__char_traits_char__* r393 = std__ostream__operator__(r391, t392);
      struct std__basic_ostream_char__std__char_traits_char__* r394 = std__ostream__operator___std__ostream_____(r393, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    for_step384: ;
      int t395 = places340;
      int u396 = t395 + 1;
      places340 = u396;
    }
  int c397 = 0;
  __retval338 = c397;
  int t398 = __retval338;
  return t398;
}

