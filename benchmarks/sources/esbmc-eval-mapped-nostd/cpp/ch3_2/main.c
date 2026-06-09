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
char _str[6] = "sqrt(";
char _str_1[5] = ") = ";
char _str_2[7] = "\nsqrt(";
char _str_3[6] = "\nexp(";
char _str_4[6] = "\nlog(";
char _str_5[8] = "\nlog10(";
char _str_6[7] = "\nfabs(";
char _str_7[7] = "\nceil(";
char _str_8[8] = "\nfloor(";
char _str_9[6] = "\npow(";
char _str_10[3] = ", ";
char _str_11[7] = "\nfmod(";
char _str_12[6] = "\nsin(";
char _str_13[6] = "\ncos(";
char _str_14[6] = "\ntan(";
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
extern double sqrt(double p0);
extern double exp(double p0);
extern double log(double p0);
extern double log10(double p0);
extern double pow(double p0, double p1);
extern double fmod(double p0, double p1);
extern double sin(double p0);
extern double cos(double p0);
extern double tan(double p0);
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

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v0, long v1) {
bb2:
  struct std__ios_base* this3;
  long __prec4;
  long __retval5;
  long __old6;
  this3 = v0;
  __prec4 = v1;
  struct std__ios_base* t7 = this3;
  long t8 = t7->_M_precision;
  __old6 = t8;
  long t9 = __prec4;
  t7->_M_precision = t9;
  long t10 = __old6;
  __retval5 = t10;
  long t11 = __retval5;
  return t11;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v12, struct std___Setprecision v13) {
bb14:
  struct std__basic_ostream_char__std__char_traits_char__* __os15;
  struct std___Setprecision __f16;
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
  long r32 = std__ios_base__precision(cast29, cast31);
  struct std__basic_ostream_char__std__char_traits_char__* t33 = __os15;
  __retval17 = t33;
  struct std__basic_ostream_char__std__char_traits_char__* t34 = __retval17;
  return t34;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v35, void* v36) {
bb37:
  struct std__basic_ostream_char__std__char_traits_char__* this38;
  void* __pf39;
  struct std__basic_ostream_char__std__char_traits_char__* __retval40;
  this38 = v35;
  __pf39 = v36;
  struct std__basic_ostream_char__std__char_traits_char__* t41 = this38;
  void* t42 = __pf39;
  void** v43 = (void**)t41;
  void* v44 = *((void**)v43);
  unsigned char* cast45 = (unsigned char*)v44;
  long c46 = -24;
  unsigned char* ptr47 = &(cast45)[c46];
  long* cast48 = (long*)ptr47;
  long t49 = *cast48;
  unsigned char* cast50 = (unsigned char*)t41;
  unsigned char* ptr51 = &(cast50)[t49];
  struct std__basic_ostream_char__std__char_traits_char__* cast52 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr51;
  struct std__ios_base* cast53 = (struct std__ios_base*)cast52;
  struct std__ios_base* r54 = ((struct std__ios_base* (*)(struct std__ios_base*))t42)(cast53);
  __retval40 = t41;
  struct std__basic_ostream_char__std__char_traits_char__* t55 = __retval40;
  return t55;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v56, int v57) {
bb58:
  int* __a59;
  int __b60;
  int* __retval61;
  __a59 = v56;
  __b60 = v57;
  int* t62 = __a59;
  int t63 = *t62;
  int t64 = __b60;
  int r65 = std__operator_(t63, t64);
  int* t66 = __a59;
  *t66 = r65;
  __retval61 = t66;
  int* t67 = __retval61;
  return t67;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v68) {
bb69:
  int __a70;
  int __retval71;
  __a70 = v68;
  int t72 = __a70;
  int u73 = ~t72;
  __retval71 = u73;
  int t74 = __retval71;
  return t74;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v75, int v76) {
bb77:
  int __a78;
  int __b79;
  int __retval80;
  __a78 = v75;
  __b79 = v76;
  int t81 = __a78;
  int t82 = __b79;
  int b83 = t81 | t82;
  __retval80 = b83;
  int t84 = __retval80;
  return t84;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v85, int v86) {
bb87:
  int* __a88;
  int __b89;
  int* __retval90;
  __a88 = v85;
  __b89 = v86;
  int* t91 = __a88;
  int t92 = *t91;
  int t93 = __b89;
  int r94 = std__operator__4(t92, t93);
  int* t95 = __a88;
  *t95 = r94;
  __retval90 = t95;
  int* t96 = __retval90;
  return t96;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v97, int v98) {
bb99:
  int __a100;
  int __b101;
  int __retval102;
  __a100 = v97;
  __b101 = v98;
  int t103 = __a100;
  int t104 = __b101;
  int b105 = t103 & t104;
  __retval102 = b105;
  int t106 = __retval102;
  return t106;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v107, int v108, int v109) {
bb110:
  struct std__ios_base* this111;
  int __fmtfl112;
  int __mask113;
  int __retval114;
  int __old115;
  this111 = v107;
  __fmtfl112 = v108;
  __mask113 = v109;
  struct std__ios_base* t116 = this111;
  int t117 = t116->_M_flags;
  __old115 = t117;
  int t118 = __mask113;
  int r119 = std__operator__2(t118);
  int* r120 = std__operator__(&t116->_M_flags, r119);
  int t121 = __fmtfl112;
  int t122 = __mask113;
  int r123 = std__operator_(t121, t122);
  int* r124 = std__operator___2(&t116->_M_flags, r123);
  int t125 = __old115;
  __retval114 = t125;
  int t126 = __retval114;
  return t126;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v127) {
bb128:
  struct std__ios_base* __base129;
  struct std__ios_base* __retval130;
  __base129 = v127;
  struct std__ios_base* t131 = __base129;
  int t132 = _ZNSt8ios_base5fixedE_const;
  int t133 = _ZNSt8ios_base10floatfieldE_const;
  int r134 = std__ios_base__setf(t131, t132, t133);
  struct std__ios_base* t135 = __base129;
  __retval130 = t135;
  struct std__ios_base* t136 = __retval130;
  return t136;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v137) {
bb138:
  int __n139;
  struct std___Setprecision __retval140;
  __n139 = v137;
  int t141 = __n139;
  __retval140._M_n = t141;
  struct std___Setprecision t142 = __retval140;
  return t142;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v143, int v144) {
bb145:
  int __a146;
  int __b147;
  int __retval148;
  __a146 = v143;
  __b147 = v144;
  int t149 = __a146;
  int t150 = __b147;
  int b151 = t149 | t150;
  __retval148 = b151;
  int t152 = __retval148;
  return t152;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v153) {
bb154:
  struct std__basic_ios_char__std__char_traits_char__* this155;
  int __retval156;
  this155 = v153;
  struct std__basic_ios_char__std__char_traits_char__* t157 = this155;
  struct std__ios_base* base158 = (struct std__ios_base*)((char *)t157 + 0);
  int t159 = base158->_M_streambuf_state;
  __retval156 = t159;
  int t160 = __retval156;
  return t160;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v161, int v162) {
bb163:
  struct std__basic_ios_char__std__char_traits_char__* this164;
  int __state165;
  this164 = v161;
  __state165 = v162;
  struct std__basic_ios_char__std__char_traits_char__* t166 = this164;
  int r167 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t166);
  int t168 = __state165;
  int r169 = std__operator__3(r167, t168);
  std__basic_ios_char__std__char_traits_char_____clear(t166, r169);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb170:
  _Bool __retval171;
    _Bool c172 = 0;
    __retval171 = c172;
    _Bool t173 = __retval171;
    return t173;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v174, char* v175) {
bb176:
  char* __c1177;
  char* __c2178;
  _Bool __retval179;
  __c1177 = v174;
  __c2178 = v175;
  char* t180 = __c1177;
  char t181 = *t180;
  int cast182 = (int)t181;
  char* t183 = __c2178;
  char t184 = *t183;
  int cast185 = (int)t184;
  _Bool c186 = ((cast182 == cast185)) ? 1 : 0;
  __retval179 = c186;
  _Bool t187 = __retval179;
  return t187;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v188) {
bb189:
  char* __p190;
  unsigned long __retval191;
  unsigned long __i192;
  __p190 = v188;
  unsigned long c193 = 0;
  __i192 = c193;
    char ref_tmp0194;
    while (1) {
      unsigned long t195 = __i192;
      char* t196 = __p190;
      char* ptr197 = &(t196)[t195];
      char c198 = 0;
      ref_tmp0194 = c198;
      _Bool r199 = __gnu_cxx__char_traits_char___eq(ptr197, &ref_tmp0194);
      _Bool u200 = !r199;
      if (!u200) break;
      unsigned long t201 = __i192;
      unsigned long u202 = t201 + 1;
      __i192 = u202;
    }
  unsigned long t203 = __i192;
  __retval191 = t203;
  unsigned long t204 = __retval191;
  return t204;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v205) {
bb206:
  char* __s207;
  unsigned long __retval208;
  __s207 = v205;
    _Bool r209 = std____is_constant_evaluated();
    if (r209) {
      char* t210 = __s207;
      unsigned long r211 = __gnu_cxx__char_traits_char___length(t210);
      __retval208 = r211;
      unsigned long t212 = __retval208;
      return t212;
    }
  char* t213 = __s207;
  unsigned long r214 = strlen(t213);
  __retval208 = r214;
  unsigned long t215 = __retval208;
  return t215;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v216, char* v217) {
bb218:
  struct std__basic_ostream_char__std__char_traits_char__* __out219;
  char* __s220;
  struct std__basic_ostream_char__std__char_traits_char__* __retval221;
  __out219 = v216;
  __s220 = v217;
    char* t222 = __s220;
    _Bool cast223 = (_Bool)t222;
    _Bool u224 = !cast223;
    if (u224) {
      struct std__basic_ostream_char__std__char_traits_char__* t225 = __out219;
      void** v226 = (void**)t225;
      void* v227 = *((void**)v226);
      unsigned char* cast228 = (unsigned char*)v227;
      long c229 = -24;
      unsigned char* ptr230 = &(cast228)[c229];
      long* cast231 = (long*)ptr230;
      long t232 = *cast231;
      unsigned char* cast233 = (unsigned char*)t225;
      unsigned char* ptr234 = &(cast233)[t232];
      struct std__basic_ostream_char__std__char_traits_char__* cast235 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr234;
      struct std__basic_ios_char__std__char_traits_char__* cast236 = (struct std__basic_ios_char__std__char_traits_char__*)cast235;
      int t237 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast236, t237);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t238 = __out219;
      char* t239 = __s220;
      char* t240 = __s220;
      unsigned long r241 = std__char_traits_char___length(t240);
      long cast242 = (long)r241;
      struct std__basic_ostream_char__std__char_traits_char__* r243 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t238, t239, cast242);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t244 = __out219;
  __retval221 = t244;
  struct std__basic_ostream_char__std__char_traits_char__* t245 = __retval221;
  return t245;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v246, double v247) {
bb248:
  struct std__basic_ostream_char__std__char_traits_char__* this249;
  double __f250;
  struct std__basic_ostream_char__std__char_traits_char__* __retval251;
  this249 = v246;
  __f250 = v247;
  struct std__basic_ostream_char__std__char_traits_char__* t252 = this249;
  double t253 = __f250;
  struct std__basic_ostream_char__std__char_traits_char__* r254 = std__ostream__std__ostream___M_insert_double_(t252, t253);
  __retval251 = r254;
  struct std__basic_ostream_char__std__char_traits_char__* t255 = __retval251;
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
  struct std___Setprecision agg_tmp0339;
  struct std___Setprecision agg_tmp1340;
  struct std___Setprecision agg_tmp2341;
  struct std___Setprecision agg_tmp3342;
  struct std___Setprecision agg_tmp4343;
  struct std___Setprecision agg_tmp5344;
  struct std___Setprecision agg_tmp6345;
  struct std___Setprecision agg_tmp7346;
  struct std___Setprecision agg_tmp8347;
  int c348 = 0;
  __retval338 = c348;
  struct std__basic_ostream_char__std__char_traits_char__* r349 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__fixed);
  int c350 = 1;
  struct std___Setprecision r351 = std__setprecision(c350);
  agg_tmp0339 = r351;
  struct std___Setprecision t352 = agg_tmp0339;
  struct std__basic_ostream_char__std__char_traits_char__* r353 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r349, t352);
  char* cast354 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r355 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast354);
  double c356 = 0x1.c2p9;
  struct std__basic_ostream_char__std__char_traits_char__* r357 = std__ostream__operator__(r355, c356);
  char* cast358 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r359 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r357, cast358);
  double c360 = 0x1.c2p9;
  double r361 = sqrt(c360);
  struct std__basic_ostream_char__std__char_traits_char__* r362 = std__ostream__operator__(r359, r361);
  char* cast363 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r364 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r362, cast363);
  double c365 = 0x1.2p3;
  struct std__basic_ostream_char__std__char_traits_char__* r366 = std__ostream__operator__(r364, c365);
  char* cast367 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r368 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r366, cast367);
  double c369 = 0x1.2p3;
  double r370 = sqrt(c369);
  struct std__basic_ostream_char__std__char_traits_char__* r371 = std__ostream__operator__(r368, r370);
  char* cast372 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r373 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast372);
  double c374 = 0x1p0;
  struct std__basic_ostream_char__std__char_traits_char__* r375 = std__ostream__operator__(r373, c374);
  char* cast376 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r377 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r375, cast376);
  int c378 = 6;
  struct std___Setprecision r379 = std__setprecision(c378);
  agg_tmp1340 = r379;
  struct std___Setprecision t380 = agg_tmp1340;
  struct std__basic_ostream_char__std__char_traits_char__* r381 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r377, t380);
  double c382 = 0x1p0;
  double r383 = exp(c382);
  struct std__basic_ostream_char__std__char_traits_char__* r384 = std__ostream__operator__(r381, r383);
  char* cast385 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r386 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r384, cast385);
  int c387 = 1;
  struct std___Setprecision r388 = std__setprecision(c387);
  agg_tmp2341 = r388;
  struct std___Setprecision t389 = agg_tmp2341;
  struct std__basic_ostream_char__std__char_traits_char__* r390 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r386, t389);
  double c391 = 0x1p1;
  struct std__basic_ostream_char__std__char_traits_char__* r392 = std__ostream__operator__(r390, c391);
  char* cast393 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r394 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r392, cast393);
  int c395 = 6;
  struct std___Setprecision r396 = std__setprecision(c395);
  agg_tmp3342 = r396;
  struct std___Setprecision t397 = agg_tmp3342;
  struct std__basic_ostream_char__std__char_traits_char__* r398 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r394, t397);
  double c399 = 0x1p1;
  double r400 = exp(c399);
  struct std__basic_ostream_char__std__char_traits_char__* r401 = std__ostream__operator__(r398, r400);
  char* cast402 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r403 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast402);
  double c404 = 0x1.5bf0aa21a719bp1;
  struct std__basic_ostream_char__std__char_traits_char__* r405 = std__ostream__operator__(r403, c404);
  char* cast406 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r407 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r405, cast406);
  int c408 = 1;
  struct std___Setprecision r409 = std__setprecision(c408);
  agg_tmp4343 = r409;
  struct std___Setprecision t410 = agg_tmp4343;
  struct std__basic_ostream_char__std__char_traits_char__* r411 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r407, t410);
  double c412 = 0x1.5bf0aa21a719bp1;
  double r413 = log(c412);
  struct std__basic_ostream_char__std__char_traits_char__* r414 = std__ostream__operator__(r411, r413);
  char* cast415 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r416 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r414, cast415);
  int c417 = 6;
  struct std___Setprecision r418 = std__setprecision(c417);
  agg_tmp5344 = r418;
  struct std___Setprecision t419 = agg_tmp5344;
  struct std__basic_ostream_char__std__char_traits_char__* r420 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r416, t419);
  double c421 = 0x1.d8e64b2314014p2;
  struct std__basic_ostream_char__std__char_traits_char__* r422 = std__ostream__operator__(r420, c421);
  char* cast423 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r424 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r422, cast423);
  int c425 = 1;
  struct std___Setprecision r426 = std__setprecision(c425);
  agg_tmp6345 = r426;
  struct std___Setprecision t427 = agg_tmp6345;
  struct std__basic_ostream_char__std__char_traits_char__* r428 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r424, t427);
  double c429 = 0x1.d8e64b2314014p2;
  double r430 = log(c429);
  struct std__basic_ostream_char__std__char_traits_char__* r431 = std__ostream__operator__(r428, r430);
  char* cast432 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r433 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast432);
  double c434 = 0x1p0;
  struct std__basic_ostream_char__std__char_traits_char__* r435 = std__ostream__operator__(r433, c434);
  char* cast436 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r437 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r435, cast436);
  double c438 = 0x1p0;
  double r439 = log10(c438);
  struct std__basic_ostream_char__std__char_traits_char__* r440 = std__ostream__operator__(r437, r439);
  char* cast441 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r442 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r440, cast441);
  double c443 = 0x1.4p3;
  struct std__basic_ostream_char__std__char_traits_char__* r444 = std__ostream__operator__(r442, c443);
  char* cast445 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r446 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r444, cast445);
  double c447 = 0x1.4p3;
  double r448 = log10(c447);
  struct std__basic_ostream_char__std__char_traits_char__* r449 = std__ostream__operator__(r446, r448);
  char* cast450 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r451 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r449, cast450);
  double c452 = 0x1.9p6;
  struct std__basic_ostream_char__std__char_traits_char__* r453 = std__ostream__operator__(r451, c452);
  char* cast454 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r455 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r453, cast454);
  double c456 = 0x1.9p6;
  double r457 = log10(c456);
  struct std__basic_ostream_char__std__char_traits_char__* r458 = std__ostream__operator__(r455, r457);
  char* cast459 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r460 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast459);
  double c461 = 0x1.bp3;
  struct std__basic_ostream_char__std__char_traits_char__* r462 = std__ostream__operator__(r460, c461);
  char* cast463 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r464 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r462, cast463);
  double c465 = 0x1.bp3;
  double fabs466 = __builtin_fabs(c465);
  struct std__basic_ostream_char__std__char_traits_char__* r467 = std__ostream__operator__(r464, fabs466);
  char* cast468 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r469 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r467, cast468);
  double c470 = 0x0p0;
  struct std__basic_ostream_char__std__char_traits_char__* r471 = std__ostream__operator__(r469, c470);
  char* cast472 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r473 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r471, cast472);
  double c474 = 0x0p0;
  double fabs475 = __builtin_fabs(c474);
  struct std__basic_ostream_char__std__char_traits_char__* r476 = std__ostream__operator__(r473, fabs475);
  char* cast477 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r478 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r476, cast477);
  double c479 = -0x1.bp3;
  struct std__basic_ostream_char__std__char_traits_char__* r480 = std__ostream__operator__(r478, c479);
  char* cast481 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r482 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r480, cast481);
  double c483 = -0x1.bp3;
  double fabs484 = __builtin_fabs(c483);
  struct std__basic_ostream_char__std__char_traits_char__* r485 = std__ostream__operator__(r482, fabs484);
  char* cast486 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r487 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast486);
  double c488 = 0x1.2666666666666p3;
  struct std__basic_ostream_char__std__char_traits_char__* r489 = std__ostream__operator__(r487, c488);
  char* cast490 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r491 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r489, cast490);
  double c492 = 0x1.2666666666666p3;
  double ceil493 = __builtin_ceil(c492);
  struct std__basic_ostream_char__std__char_traits_char__* r494 = std__ostream__operator__(r491, ceil493);
  char* cast495 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r496 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r494, cast495);
  double c497 = -0x1.399999999999ap3;
  struct std__basic_ostream_char__std__char_traits_char__* r498 = std__ostream__operator__(r496, c497);
  char* cast499 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r500 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r498, cast499);
  double c501 = -0x1.399999999999ap3;
  double ceil502 = __builtin_ceil(c501);
  struct std__basic_ostream_char__std__char_traits_char__* r503 = std__ostream__operator__(r500, ceil502);
  char* cast504 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r505 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast504);
  double c506 = 0x1.2666666666666p3;
  struct std__basic_ostream_char__std__char_traits_char__* r507 = std__ostream__operator__(r505, c506);
  char* cast508 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r509 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r507, cast508);
  double c510 = 0x1.2666666666666p3;
  double floor511 = __builtin_floor(c510);
  struct std__basic_ostream_char__std__char_traits_char__* r512 = std__ostream__operator__(r509, floor511);
  char* cast513 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r514 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r512, cast513);
  double c515 = -0x1.399999999999ap3;
  struct std__basic_ostream_char__std__char_traits_char__* r516 = std__ostream__operator__(r514, c515);
  char* cast517 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r518 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r516, cast517);
  double c519 = -0x1.399999999999ap3;
  double floor520 = __builtin_floor(c519);
  struct std__basic_ostream_char__std__char_traits_char__* r521 = std__ostream__operator__(r518, floor520);
  char* cast522 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r523 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast522);
  double c524 = 0x1p1;
  struct std__basic_ostream_char__std__char_traits_char__* r525 = std__ostream__operator__(r523, c524);
  char* cast526 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r527 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r525, cast526);
  double c528 = 0x1.cp2;
  struct std__basic_ostream_char__std__char_traits_char__* r529 = std__ostream__operator__(r527, c528);
  char* cast530 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r531 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r529, cast530);
  double c532 = 0x1p1;
  double c533 = 0x1.cp2;
  double r534 = pow(c532, c533);
  struct std__basic_ostream_char__std__char_traits_char__* r535 = std__ostream__operator__(r531, r534);
  char* cast536 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r537 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r535, cast536);
  double c538 = 0x1.2p3;
  struct std__basic_ostream_char__std__char_traits_char__* r539 = std__ostream__operator__(r537, c538);
  char* cast540 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r541 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r539, cast540);
  double c542 = 0x1p-1;
  struct std__basic_ostream_char__std__char_traits_char__* r543 = std__ostream__operator__(r541, c542);
  char* cast544 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r545 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r543, cast544);
  double c546 = 0x1.2p3;
  double c547 = 0x1p-1;
  double r548 = pow(c546, c547);
  struct std__basic_ostream_char__std__char_traits_char__* r549 = std__ostream__operator__(r545, r548);
  int c550 = 3;
  struct std___Setprecision r551 = std__setprecision(c550);
  agg_tmp7346 = r551;
  struct std___Setprecision t552 = agg_tmp7346;
  struct std__basic_ostream_char__std__char_traits_char__* r553 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t552);
  char* cast554 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* r555 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r553, cast554);
  double c556 = 0x1.b59999999999ap3;
  struct std__basic_ostream_char__std__char_traits_char__* r557 = std__ostream__operator__(r555, c556);
  char* cast558 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r559 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r557, cast558);
  double c560 = 0x1.2a9fbe76c8b44p1;
  struct std__basic_ostream_char__std__char_traits_char__* r561 = std__ostream__operator__(r559, c560);
  char* cast562 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r563 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r561, cast562);
  double c564 = 0x1.b59999999999ap3;
  double c565 = 0x1.2a9fbe76c8b44p1;
  double r566 = fmod(c564, c565);
  struct std__basic_ostream_char__std__char_traits_char__* r567 = std__ostream__operator__(r563, r566);
  int c568 = 1;
  struct std___Setprecision r569 = std__setprecision(c568);
  agg_tmp8347 = r569;
  struct std___Setprecision t570 = agg_tmp8347;
  struct std__basic_ostream_char__std__char_traits_char__* r571 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r567, t570);
  char* cast572 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* r573 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast572);
  double c574 = 0x0p0;
  struct std__basic_ostream_char__std__char_traits_char__* r575 = std__ostream__operator__(r573, c574);
  char* cast576 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r577 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r575, cast576);
  double c578 = 0x0p0;
  double r579 = sin(c578);
  struct std__basic_ostream_char__std__char_traits_char__* r580 = std__ostream__operator__(r577, r579);
  char* cast581 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* r582 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast581);
  double c583 = 0x0p0;
  struct std__basic_ostream_char__std__char_traits_char__* r584 = std__ostream__operator__(r582, c583);
  char* cast585 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r586 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r584, cast585);
  double c587 = 0x0p0;
  double r588 = cos(c587);
  struct std__basic_ostream_char__std__char_traits_char__* r589 = std__ostream__operator__(r586, r588);
  char* cast590 = (char*)&(_str_14);
  struct std__basic_ostream_char__std__char_traits_char__* r591 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast590);
  double c592 = 0x0p0;
  struct std__basic_ostream_char__std__char_traits_char__* r593 = std__ostream__operator__(r591, c592);
  char* cast594 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r595 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r593, cast594);
  double c596 = 0x0p0;
  double r597 = tan(c596);
  struct std__basic_ostream_char__std__char_traits_char__* r598 = std__ostream__operator__(r595, r597);
  struct std__basic_ostream_char__std__char_traits_char__* r599 = std__ostream__operator___std__ostream_____(r598, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c600 = 0;
  __retval338 = c600;
  int t601 = __retval338;
  return t601;
}

