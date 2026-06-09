extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Point { int __field0; int __field1; };
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
struct Circle { struct Point __field0; double __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long _M_precision; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[32] = "Print point and circle objects:";
char _str_1[9] = "\nPoint: ";
char _str_2[10] = "\nCircle: ";
char _str_3[44] = "\n\nCalling print with base-class pointer to ";
char _str_4[45] = "\nbase-class object invokes base-class print ";
char _str_5[11] = "function:\n";
char _str_6[47] = "\n\nCalling print with derived-class pointer to ";
char _str_7[45] = "\nderived-class object invokes derived-class ";
char _str_8[17] = "print function:\n";
char _str_9[47] = "derived-class object\ninvokes base-class print ";
char _str_10[39] = "function on that derived-class object\n";
extern void Point__Point(struct Point* p0, int p1, int p2);
extern void Circle__Circle(struct Circle* p0, int p1, int p2, double p3);
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
extern void Point__print___const(struct Point* p0);
extern void Circle__print___const(struct Circle* p0);
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v246, void* v247) {
bb248:
  struct std__basic_ostream_char__std__char_traits_char__* this249;
  void* __pf250;
  struct std__basic_ostream_char__std__char_traits_char__* __retval251;
  this249 = v246;
  __pf250 = v247;
  struct std__basic_ostream_char__std__char_traits_char__* t252 = this249;
  void* t253 = __pf250;
  struct std__basic_ostream_char__std__char_traits_char__* r254 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t253)(t252);
  __retval251 = r254;
  struct std__basic_ostream_char__std__char_traits_char__* t255 = __retval251;
  return t255;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v256) {
bb257:
  struct std__basic_ostream_char__std__char_traits_char__* __os258;
  struct std__basic_ostream_char__std__char_traits_char__* __retval259;
  __os258 = v256;
  struct std__basic_ostream_char__std__char_traits_char__* t260 = __os258;
  struct std__basic_ostream_char__std__char_traits_char__* r261 = std__ostream__flush(t260);
  __retval259 = r261;
  struct std__basic_ostream_char__std__char_traits_char__* t262 = __retval259;
  return t262;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v263) {
bb264:
  struct std__ctype_char_* __f265;
  struct std__ctype_char_* __retval266;
  __f265 = v263;
    struct std__ctype_char_* t267 = __f265;
    _Bool cast268 = (_Bool)t267;
    _Bool u269 = !cast268;
    if (u269) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t270 = __f265;
  __retval266 = t270;
  struct std__ctype_char_* t271 = __retval266;
  return t271;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v272, char v273) {
bb274:
  struct std__ctype_char_* this275;
  char __c276;
  char __retval277;
  this275 = v272;
  __c276 = v273;
  struct std__ctype_char_* t278 = this275;
    char t279 = t278->_M_widen_ok;
    _Bool cast280 = (_Bool)t279;
    if (cast280) {
      char t281 = __c276;
      unsigned char cast282 = (unsigned char)t281;
      unsigned long cast283 = (unsigned long)cast282;
      char t284 = t278->_M_widen[cast283];
      __retval277 = t284;
      char t285 = __retval277;
      return t285;
    }
  std__ctype_char____M_widen_init___const(t278);
  char t286 = __c276;
  void** v287 = (void**)t278;
  void* v288 = *((void**)v287);
  char vcall291 = (char)__VERIFIER_virtual_call_char_char(t278, 6, t286);
  __retval277 = vcall291;
  char t292 = __retval277;
  return t292;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v293, char v294) {
bb295:
  struct std__basic_ios_char__std__char_traits_char__* this296;
  char __c297;
  char __retval298;
  this296 = v293;
  __c297 = v294;
  struct std__basic_ios_char__std__char_traits_char__* t299 = this296;
  struct std__ctype_char_* t300 = t299->_M_ctype;
  struct std__ctype_char_* r301 = std__ctype_char__const__std____check_facet_std__ctype_char___(t300);
  char t302 = __c297;
  char r303 = std__ctype_char___widen_char__const(r301, t302);
  __retval298 = r303;
  char t304 = __retval298;
  return t304;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v305) {
bb306:
  struct std__basic_ostream_char__std__char_traits_char__* __os307;
  struct std__basic_ostream_char__std__char_traits_char__* __retval308;
  __os307 = v305;
  struct std__basic_ostream_char__std__char_traits_char__* t309 = __os307;
  struct std__basic_ostream_char__std__char_traits_char__* t310 = __os307;
  void** v311 = (void**)t310;
  void* v312 = *((void**)v311);
  unsigned char* cast313 = (unsigned char*)v312;
  long c314 = -24;
  unsigned char* ptr315 = &(cast313)[c314];
  long* cast316 = (long*)ptr315;
  long t317 = *cast316;
  unsigned char* cast318 = (unsigned char*)t310;
  unsigned char* ptr319 = &(cast318)[t317];
  struct std__basic_ostream_char__std__char_traits_char__* cast320 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr319;
  struct std__basic_ios_char__std__char_traits_char__* cast321 = (struct std__basic_ios_char__std__char_traits_char__*)cast320;
  char c322 = 10;
  char r323 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast321, c322);
  struct std__basic_ostream_char__std__char_traits_char__* r324 = std__ostream__put(t309, r323);
  struct std__basic_ostream_char__std__char_traits_char__* r325 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r324);
  __retval308 = r325;
  struct std__basic_ostream_char__std__char_traits_char__* t326 = __retval308;
  return t326;
}

// function: main
int main() {
bb327:
  int __retval328;
  struct Point point329;
  struct Point* pointPtr330;
  struct Circle circle331;
  struct Circle* circlePtr332;
  struct std___Setprecision agg_tmp0333;
  int c334 = 0;
  __retval328 = c334;
  int c335 = 30;
  int c336 = 50;
  Point__Point(&point329, c335, c336);
  struct Point* c337 = ((void*)0);
  pointPtr330 = c337;
  int c338 = 120;
  int c339 = 89;
  double c340 = 0x1.599999999999ap1;
  Circle__Circle(&circle331, c338, c339, c340);
  struct Circle* c341 = ((void*)0);
  circlePtr332 = c341;
  struct std__basic_ostream_char__std__char_traits_char__* r342 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__fixed);
  int c343 = 2;
  struct std___Setprecision r344 = std__setprecision(c343);
  agg_tmp0333 = r344;
  struct std___Setprecision t345 = agg_tmp0333;
  struct std__basic_ostream_char__std__char_traits_char__* r346 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r342, t345);
  char* cast347 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r348 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast347);
  char* cast349 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r350 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r348, cast349);
  Point__print___const(&point329);
  char* cast351 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r352 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast351);
  Circle__print___const(&circle331);
  pointPtr330 = &point329;
  char* cast353 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r354 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast353);
  char* cast355 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r356 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r354, cast355);
  char* cast357 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r358 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r356, cast357);
  struct Point* t359 = pointPtr330;
  Point__print___const(t359);
  circlePtr332 = &circle331;
  char* cast360 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r361 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast360);
  char* cast362 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r363 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r361, cast362);
  char* cast364 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r365 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r363, cast364);
  struct Circle* t366 = circlePtr332;
  Circle__print___const(t366);
  struct Point* base367 = (struct Point*)((char *)&(circle331) + 0);
  pointPtr330 = base367;
  char* cast368 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r369 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast368);
  char* cast370 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r371 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r369, cast370);
  char* cast372 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r373 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r371, cast372);
  struct Point* t374 = pointPtr330;
  Point__print___const(t374);
  struct std__basic_ostream_char__std__char_traits_char__* r375 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c376 = 0;
  __retval328 = c376;
  int t377 = __retval328;
  return t377;
}

