extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Point3 { int __field0; int __field1; };
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
struct Circle4 { struct Point3 __field0; double __field1; };
struct Cylinder { struct Circle4 __field0; double __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long _M_precision; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "X coordinate is ";
char _str_1[18] = "\nY coordinate is ";
char _str_2[12] = "\nRadius is ";
char _str_3[12] = "\nHeight is ";
char _str_4[45] = "\n\nThe new location and radius of circle are\n";
char _str_5[15] = "\n\nDiameter is ";
char _str_6[19] = "\nCircumference is ";
char _str_7[10] = "\nArea is ";
char _str_8[12] = "\nVolume is ";
extern void Cylinder__Cylinder(struct Cylinder* p0, int p1, int p2, double p3, double p4);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern int Point3__getX___const(struct Point3* p0);
extern int Point3__getY___const(struct Point3* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
extern double Circle4__getRadius___const(struct Circle4* p0);
extern double Cylinder__getHeight___const(struct Cylinder* p0);
extern void Point3__setX(struct Point3* p0, int p1);
extern void Point3__setY(struct Point3* p0, int p1);
extern void Circle4__setRadius(struct Circle4* p0, double p1);
extern void Cylinder__setHeight(struct Cylinder* p0, double p1);
extern void Cylinder__print___const(struct Cylinder* p0);
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
struct std___Setprecision std__setprecision(int p0);
extern double Circle4__getDiameter___const(struct Circle4* p0);
extern double Circle4__getCircumference___const(struct Circle4* p0);
extern double Cylinder__getArea___const(struct Cylinder* p0);
extern double Cylinder__getVolume___const(struct Cylinder* p0);
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

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v103, double v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  double __f107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __f107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  double t110 = __f107;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = std__ostream__std__ostream___M_insert_double_(t109, t110);
  __retval108 = r111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v113, long v114) {
bb115:
  struct std__ios_base* this116;
  long __prec117;
  long __retval118;
  long __old119;
  this116 = v113;
  __prec117 = v114;
  struct std__ios_base* t120 = this116;
  long t121 = t120->_M_precision;
  __old119 = t121;
  long t122 = __prec117;
  t120->_M_precision = t122;
  long t123 = __old119;
  __retval118 = t123;
  long t124 = __retval118;
  return t124;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v125, struct std___Setprecision v126) {
bb127:
  struct std__basic_ostream_char__std__char_traits_char__* __os128;
  struct std___Setprecision __f129;
  struct std__basic_ostream_char__std__char_traits_char__* __retval130;
  __os128 = v125;
  __f129 = v126;
  struct std__basic_ostream_char__std__char_traits_char__* t131 = __os128;
  void** v132 = (void**)t131;
  void* v133 = *((void**)v132);
  unsigned char* cast134 = (unsigned char*)v133;
  long c135 = -24;
  unsigned char* ptr136 = &(cast134)[c135];
  long* cast137 = (long*)ptr136;
  long t138 = *cast137;
  unsigned char* cast139 = (unsigned char*)t131;
  unsigned char* ptr140 = &(cast139)[t138];
  struct std__basic_ostream_char__std__char_traits_char__* cast141 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr140;
  struct std__ios_base* cast142 = (struct std__ios_base*)cast141;
  int t143 = __f129._M_n;
  long cast144 = (long)t143;
  long r145 = std__ios_base__precision(cast142, cast144);
  struct std__basic_ostream_char__std__char_traits_char__* t146 = __os128;
  __retval130 = t146;
  struct std__basic_ostream_char__std__char_traits_char__* t147 = __retval130;
  return t147;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v148, void* v149) {
bb150:
  struct std__basic_ostream_char__std__char_traits_char__* this151;
  void* __pf152;
  struct std__basic_ostream_char__std__char_traits_char__* __retval153;
  this151 = v148;
  __pf152 = v149;
  struct std__basic_ostream_char__std__char_traits_char__* t154 = this151;
  void* t155 = __pf152;
  void** v156 = (void**)t154;
  void* v157 = *((void**)v156);
  unsigned char* cast158 = (unsigned char*)v157;
  long c159 = -24;
  unsigned char* ptr160 = &(cast158)[c159];
  long* cast161 = (long*)ptr160;
  long t162 = *cast161;
  unsigned char* cast163 = (unsigned char*)t154;
  unsigned char* ptr164 = &(cast163)[t162];
  struct std__basic_ostream_char__std__char_traits_char__* cast165 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr164;
  struct std__ios_base* cast166 = (struct std__ios_base*)cast165;
  struct std__ios_base* r167 = ((struct std__ios_base* (*)(struct std__ios_base*))t155)(cast166);
  __retval153 = t154;
  struct std__basic_ostream_char__std__char_traits_char__* t168 = __retval153;
  return t168;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v169, int v170) {
bb171:
  int* __a172;
  int __b173;
  int* __retval174;
  __a172 = v169;
  __b173 = v170;
  int* t175 = __a172;
  int t176 = *t175;
  int t177 = __b173;
  int r178 = std__operator_(t176, t177);
  int* t179 = __a172;
  *t179 = r178;
  __retval174 = t179;
  int* t180 = __retval174;
  return t180;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v181) {
bb182:
  int __a183;
  int __retval184;
  __a183 = v181;
  int t185 = __a183;
  int u186 = ~t185;
  __retval184 = u186;
  int t187 = __retval184;
  return t187;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v188, int v189) {
bb190:
  int __a191;
  int __b192;
  int __retval193;
  __a191 = v188;
  __b192 = v189;
  int t194 = __a191;
  int t195 = __b192;
  int b196 = t194 | t195;
  __retval193 = b196;
  int t197 = __retval193;
  return t197;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v198, int v199) {
bb200:
  int* __a201;
  int __b202;
  int* __retval203;
  __a201 = v198;
  __b202 = v199;
  int* t204 = __a201;
  int t205 = *t204;
  int t206 = __b202;
  int r207 = std__operator__4(t205, t206);
  int* t208 = __a201;
  *t208 = r207;
  __retval203 = t208;
  int* t209 = __retval203;
  return t209;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v210, int v211) {
bb212:
  int __a213;
  int __b214;
  int __retval215;
  __a213 = v210;
  __b214 = v211;
  int t216 = __a213;
  int t217 = __b214;
  int b218 = t216 & t217;
  __retval215 = b218;
  int t219 = __retval215;
  return t219;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v220, int v221, int v222) {
bb223:
  struct std__ios_base* this224;
  int __fmtfl225;
  int __mask226;
  int __retval227;
  int __old228;
  this224 = v220;
  __fmtfl225 = v221;
  __mask226 = v222;
  struct std__ios_base* t229 = this224;
  int t230 = t229->_M_flags;
  __old228 = t230;
  int t231 = __mask226;
  int r232 = std__operator__2(t231);
  int* r233 = std__operator__(&t229->_M_flags, r232);
  int t234 = __fmtfl225;
  int t235 = __mask226;
  int r236 = std__operator_(t234, t235);
  int* r237 = std__operator___2(&t229->_M_flags, r236);
  int t238 = __old228;
  __retval227 = t238;
  int t239 = __retval227;
  return t239;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v240) {
bb241:
  struct std__ios_base* __base242;
  struct std__ios_base* __retval243;
  __base242 = v240;
  struct std__ios_base* t244 = __base242;
  int t245 = _ZNSt8ios_base5fixedE_const;
  int t246 = _ZNSt8ios_base10floatfieldE_const;
  int r247 = std__ios_base__setf(t244, t245, t246);
  struct std__ios_base* t248 = __base242;
  __retval243 = t248;
  struct std__ios_base* t249 = __retval243;
  return t249;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v250) {
bb251:
  int __n252;
  struct std___Setprecision __retval253;
  __n252 = v250;
  int t254 = __n252;
  __retval253._M_n = t254;
  struct std___Setprecision t255 = __retval253;
  return t255;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v256, void* v257) {
bb258:
  struct std__basic_ostream_char__std__char_traits_char__* this259;
  void* __pf260;
  struct std__basic_ostream_char__std__char_traits_char__* __retval261;
  this259 = v256;
  __pf260 = v257;
  struct std__basic_ostream_char__std__char_traits_char__* t262 = this259;
  void* t263 = __pf260;
  struct std__basic_ostream_char__std__char_traits_char__* r264 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t263)(t262);
  __retval261 = r264;
  struct std__basic_ostream_char__std__char_traits_char__* t265 = __retval261;
  return t265;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v266) {
bb267:
  struct std__basic_ostream_char__std__char_traits_char__* __os268;
  struct std__basic_ostream_char__std__char_traits_char__* __retval269;
  __os268 = v266;
  struct std__basic_ostream_char__std__char_traits_char__* t270 = __os268;
  struct std__basic_ostream_char__std__char_traits_char__* r271 = std__ostream__flush(t270);
  __retval269 = r271;
  struct std__basic_ostream_char__std__char_traits_char__* t272 = __retval269;
  return t272;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v273) {
bb274:
  struct std__ctype_char_* __f275;
  struct std__ctype_char_* __retval276;
  __f275 = v273;
    struct std__ctype_char_* t277 = __f275;
    _Bool cast278 = (_Bool)t277;
    _Bool u279 = !cast278;
    if (u279) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t280 = __f275;
  __retval276 = t280;
  struct std__ctype_char_* t281 = __retval276;
  return t281;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v282, char v283) {
bb284:
  struct std__ctype_char_* this285;
  char __c286;
  char __retval287;
  this285 = v282;
  __c286 = v283;
  struct std__ctype_char_* t288 = this285;
    char t289 = t288->_M_widen_ok;
    _Bool cast290 = (_Bool)t289;
    if (cast290) {
      char t291 = __c286;
      unsigned char cast292 = (unsigned char)t291;
      unsigned long cast293 = (unsigned long)cast292;
      char t294 = t288->_M_widen[cast293];
      __retval287 = t294;
      char t295 = __retval287;
      return t295;
    }
  std__ctype_char____M_widen_init___const(t288);
  char t296 = __c286;
  void** v297 = (void**)t288;
  void* v298 = *((void**)v297);
  char vcall301 = (char)__VERIFIER_virtual_call_char_char(t288, 6, t296);
  __retval287 = vcall301;
  char t302 = __retval287;
  return t302;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v303, char v304) {
bb305:
  struct std__basic_ios_char__std__char_traits_char__* this306;
  char __c307;
  char __retval308;
  this306 = v303;
  __c307 = v304;
  struct std__basic_ios_char__std__char_traits_char__* t309 = this306;
  struct std__ctype_char_* t310 = t309->_M_ctype;
  struct std__ctype_char_* r311 = std__ctype_char__const__std____check_facet_std__ctype_char___(t310);
  char t312 = __c307;
  char r313 = std__ctype_char___widen_char__const(r311, t312);
  __retval308 = r313;
  char t314 = __retval308;
  return t314;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v315) {
bb316:
  struct std__basic_ostream_char__std__char_traits_char__* __os317;
  struct std__basic_ostream_char__std__char_traits_char__* __retval318;
  __os317 = v315;
  struct std__basic_ostream_char__std__char_traits_char__* t319 = __os317;
  struct std__basic_ostream_char__std__char_traits_char__* t320 = __os317;
  void** v321 = (void**)t320;
  void* v322 = *((void**)v321);
  unsigned char* cast323 = (unsigned char*)v322;
  long c324 = -24;
  unsigned char* ptr325 = &(cast323)[c324];
  long* cast326 = (long*)ptr325;
  long t327 = *cast326;
  unsigned char* cast328 = (unsigned char*)t320;
  unsigned char* ptr329 = &(cast328)[t327];
  struct std__basic_ostream_char__std__char_traits_char__* cast330 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr329;
  struct std__basic_ios_char__std__char_traits_char__* cast331 = (struct std__basic_ios_char__std__char_traits_char__*)cast330;
  char c332 = 10;
  char r333 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast331, c332);
  struct std__basic_ostream_char__std__char_traits_char__* r334 = std__ostream__put(t319, r333);
  struct std__basic_ostream_char__std__char_traits_char__* r335 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r334);
  __retval318 = r335;
  struct std__basic_ostream_char__std__char_traits_char__* t336 = __retval318;
  return t336;
}

// function: main
int main() {
bb337:
  int __retval338;
  struct Cylinder cylinder339;
  struct std___Setprecision agg_tmp0340;
  int c341 = 0;
  __retval338 = c341;
  int c342 = 12;
  int c343 = 23;
  double c344 = 0x1.4p1;
  double c345 = 0x1.6cccccccccccdp2;
  Cylinder__Cylinder(&cylinder339, c342, c343, c344, c345);
  char* cast346 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r347 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast346);
  struct Point3* base348 = (struct Point3*)((char *)&(cylinder339) + 0);
  int r349 = Point3__getX___const(base348);
  struct std__basic_ostream_char__std__char_traits_char__* r350 = std__ostream__operator___2(r347, r349);
  char* cast351 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r352 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r350, cast351);
  struct Point3* base353 = (struct Point3*)((char *)&(cylinder339) + 0);
  int r354 = Point3__getY___const(base353);
  struct std__basic_ostream_char__std__char_traits_char__* r355 = std__ostream__operator___2(r352, r354);
  char* cast356 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r357 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r355, cast356);
  struct Circle4* base358 = (struct Circle4*)((char *)&(cylinder339) + 0);
  double r359 = Circle4__getRadius___const(base358);
  struct std__basic_ostream_char__std__char_traits_char__* r360 = std__ostream__operator__(r357, r359);
  char* cast361 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r360, cast361);
  double r363 = Cylinder__getHeight___const(&cylinder339);
  struct std__basic_ostream_char__std__char_traits_char__* r364 = std__ostream__operator__(r362, r363);
  struct Point3* base365 = (struct Point3*)((char *)&(cylinder339) + 0);
  int c366 = 2;
  Point3__setX(base365, c366);
  struct Point3* base367 = (struct Point3*)((char *)&(cylinder339) + 0);
  int c368 = 2;
  Point3__setY(base367, c368);
  struct Circle4* base369 = (struct Circle4*)((char *)&(cylinder339) + 0);
  double c370 = 0x1.1p2;
  Circle4__setRadius(base369, c370);
  int c371 = 10;
  double cast372 = (double)c371;
  Cylinder__setHeight(&cylinder339, cast372);
  char* cast373 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r374 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast373);
  Cylinder__print___const(&cylinder339);
  struct std__basic_ostream_char__std__char_traits_char__* r375 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__fixed);
  int c376 = 2;
  struct std___Setprecision r377 = std__setprecision(c376);
  agg_tmp0340 = r377;
  struct std___Setprecision t378 = agg_tmp0340;
  struct std__basic_ostream_char__std__char_traits_char__* r379 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r375, t378);
  char* cast380 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r381 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast380);
  struct Circle4* base382 = (struct Circle4*)((char *)&(cylinder339) + 0);
  double r383 = Circle4__getDiameter___const(base382);
  struct std__basic_ostream_char__std__char_traits_char__* r384 = std__ostream__operator__(r381, r383);
  char* cast385 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r386 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast385);
  struct Circle4* base387 = (struct Circle4*)((char *)&(cylinder339) + 0);
  double r388 = Circle4__getCircumference___const(base387);
  struct std__basic_ostream_char__std__char_traits_char__* r389 = std__ostream__operator__(r386, r388);
  char* cast390 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r391 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast390);
  double r392 = Cylinder__getArea___const(&cylinder339);
  struct std__basic_ostream_char__std__char_traits_char__* r393 = std__ostream__operator__(r391, r392);
  char* cast394 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r395 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast394);
  double r396 = Cylinder__getVolume___const(&cylinder339);
  struct std__basic_ostream_char__std__char_traits_char__* r397 = std__ostream__operator__(r395, r396);
  struct std__basic_ostream_char__std__char_traits_char__* r398 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c399 = 0;
  __retval338 = c399;
  int t400 = __retval338;
  return t400;
}

