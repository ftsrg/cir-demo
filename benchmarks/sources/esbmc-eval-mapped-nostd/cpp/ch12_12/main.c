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
struct std__ios_base { void* __field0; long __field1; long _M_width; int _M_flags; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base7showposE_const __attribute__((aligned(4))) = 2048;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base8internalE_const __attribute__((aligned(4))) = 16;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__3(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf_2(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__internal(struct std__ios_base* p0);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__showpos(struct std__ios_base* p0);
struct std___Setw std__setw(int p0);
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
int std__operator__3(int v75, int v76) {
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
  int r94 = std__operator__3(t92, t93);
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
int std__ios_base__setf_2(struct std__ios_base* v107, int v108, int v109) {
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

// function: _ZSt8internalRSt8ios_base
struct std__ios_base* std__internal(struct std__ios_base* v127) {
bb128:
  struct std__ios_base* __base129;
  struct std__ios_base* __retval130;
  __base129 = v127;
  struct std__ios_base* t131 = __base129;
  int t132 = _ZNSt8ios_base8internalE_const;
  int t133 = _ZNSt8ios_base11adjustfieldE_const;
  int r134 = std__ios_base__setf_2(t131, t132, t133);
  struct std__ios_base* t135 = __base129;
  __retval130 = t135;
  struct std__ios_base* t136 = __retval130;
  return t136;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v137, int v138) {
bb139:
  struct std__ios_base* this140;
  int __fmtfl141;
  int __retval142;
  int __old143;
  this140 = v137;
  __fmtfl141 = v138;
  struct std__ios_base* t144 = this140;
  int t145 = t144->_M_flags;
  __old143 = t145;
  int t146 = __fmtfl141;
  int* r147 = std__operator___2(&t144->_M_flags, t146);
  int t148 = __old143;
  __retval142 = t148;
  int t149 = __retval142;
  return t149;
}

// function: _ZSt7showposRSt8ios_base
struct std__ios_base* std__showpos(struct std__ios_base* v150) {
bb151:
  struct std__ios_base* __base152;
  struct std__ios_base* __retval153;
  __base152 = v150;
  struct std__ios_base* t154 = __base152;
  int t155 = _ZNSt8ios_base7showposE_const;
  int r156 = std__ios_base__setf(t154, t155);
  struct std__ios_base* t157 = __base152;
  __retval153 = t157;
  struct std__ios_base* t158 = __retval153;
  return t158;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v159) {
bb160:
  int __n161;
  struct std___Setw __retval162;
  __n161 = v159;
  int t163 = __n161;
  __retval162._M_n = t163;
  struct std___Setw t164 = __retval162;
  return t164;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v165, void* v166) {
bb167:
  struct std__basic_ostream_char__std__char_traits_char__* this168;
  void* __pf169;
  struct std__basic_ostream_char__std__char_traits_char__* __retval170;
  this168 = v165;
  __pf169 = v166;
  struct std__basic_ostream_char__std__char_traits_char__* t171 = this168;
  void* t172 = __pf169;
  struct std__basic_ostream_char__std__char_traits_char__* r173 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t172)(t171);
  __retval170 = r173;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = __retval170;
  return t174;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v175) {
bb176:
  struct std__basic_ostream_char__std__char_traits_char__* __os177;
  struct std__basic_ostream_char__std__char_traits_char__* __retval178;
  __os177 = v175;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __os177;
  struct std__basic_ostream_char__std__char_traits_char__* r180 = std__ostream__flush(t179);
  __retval178 = r180;
  struct std__basic_ostream_char__std__char_traits_char__* t181 = __retval178;
  return t181;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v182) {
bb183:
  struct std__ctype_char_* __f184;
  struct std__ctype_char_* __retval185;
  __f184 = v182;
    struct std__ctype_char_* t186 = __f184;
    _Bool cast187 = (_Bool)t186;
    _Bool u188 = !cast187;
    if (u188) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t189 = __f184;
  __retval185 = t189;
  struct std__ctype_char_* t190 = __retval185;
  return t190;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v191, char v192) {
bb193:
  struct std__ctype_char_* this194;
  char __c195;
  char __retval196;
  this194 = v191;
  __c195 = v192;
  struct std__ctype_char_* t197 = this194;
    char t198 = t197->_M_widen_ok;
    _Bool cast199 = (_Bool)t198;
    if (cast199) {
      char t200 = __c195;
      unsigned char cast201 = (unsigned char)t200;
      unsigned long cast202 = (unsigned long)cast201;
      char t203 = t197->_M_widen[cast202];
      __retval196 = t203;
      char t204 = __retval196;
      return t204;
    }
  std__ctype_char____M_widen_init___const(t197);
  char t205 = __c195;
  void** v206 = (void**)t197;
  void* v207 = *((void**)v206);
  char vcall210 = (char)__VERIFIER_virtual_call_char_char(t197, 6, t205);
  __retval196 = vcall210;
  char t211 = __retval196;
  return t211;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v212, char v213) {
bb214:
  struct std__basic_ios_char__std__char_traits_char__* this215;
  char __c216;
  char __retval217;
  this215 = v212;
  __c216 = v213;
  struct std__basic_ios_char__std__char_traits_char__* t218 = this215;
  struct std__ctype_char_* t219 = t218->_M_ctype;
  struct std__ctype_char_* r220 = std__ctype_char__const__std____check_facet_std__ctype_char___(t219);
  char t221 = __c216;
  char r222 = std__ctype_char___widen_char__const(r220, t221);
  __retval217 = r222;
  char t223 = __retval217;
  return t223;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v224) {
bb225:
  struct std__basic_ostream_char__std__char_traits_char__* __os226;
  struct std__basic_ostream_char__std__char_traits_char__* __retval227;
  __os226 = v224;
  struct std__basic_ostream_char__std__char_traits_char__* t228 = __os226;
  struct std__basic_ostream_char__std__char_traits_char__* t229 = __os226;
  void** v230 = (void**)t229;
  void* v231 = *((void**)v230);
  unsigned char* cast232 = (unsigned char*)v231;
  long c233 = -24;
  unsigned char* ptr234 = &(cast232)[c233];
  long* cast235 = (long*)ptr234;
  long t236 = *cast235;
  unsigned char* cast237 = (unsigned char*)t229;
  unsigned char* ptr238 = &(cast237)[t236];
  struct std__basic_ostream_char__std__char_traits_char__* cast239 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr238;
  struct std__basic_ios_char__std__char_traits_char__* cast240 = (struct std__basic_ios_char__std__char_traits_char__*)cast239;
  char c241 = 10;
  char r242 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast240, c241);
  struct std__basic_ostream_char__std__char_traits_char__* r243 = std__ostream__put(t228, r242);
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r243);
  __retval227 = r244;
  struct std__basic_ostream_char__std__char_traits_char__* t245 = __retval227;
  return t245;
}

// function: main
int main() {
bb246:
  int __retval247;
  struct std___Setw agg_tmp0248;
  int c249 = 0;
  __retval247 = c249;
  struct std__basic_ostream_char__std__char_traits_char__* r250 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__internal);
  struct std__basic_ostream_char__std__char_traits_char__* r251 = std__ostream__operator___std__ios_base_____(r250, &std__showpos);
  int c252 = 10;
  struct std___Setw r253 = std__setw(c252);
  agg_tmp0248 = r253;
  struct std___Setw t254 = agg_tmp0248;
  struct std__basic_ostream_char__std__char_traits_char__* r255 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r251, t254);
  int c256 = 123;
  struct std__basic_ostream_char__std__char_traits_char__* r257 = std__ostream__operator__(r255, c256);
  struct std__basic_ostream_char__std__char_traits_char__* r258 = std__ostream__operator___std__ostream_____(r257, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c259 = 0;
  __retval247 = c259;
  int t260 = __retval247;
  return t260;
}

