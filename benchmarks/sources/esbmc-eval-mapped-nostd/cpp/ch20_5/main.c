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

int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__3(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__left(struct std__ios_base* p0);
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

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v41, void* v42) {
bb43:
  struct std__basic_ostream_char__std__char_traits_char__* this44;
  void* __pf45;
  struct std__basic_ostream_char__std__char_traits_char__* __retval46;
  this44 = v41;
  __pf45 = v42;
  struct std__basic_ostream_char__std__char_traits_char__* t47 = this44;
  void* t48 = __pf45;
  void** v49 = (void**)t47;
  void* v50 = *((void**)v49);
  unsigned char* cast51 = (unsigned char*)v50;
  long c52 = -24;
  unsigned char* ptr53 = &(cast51)[c52];
  long* cast54 = (long*)ptr53;
  long t55 = *cast54;
  unsigned char* cast56 = (unsigned char*)t47;
  unsigned char* ptr57 = &(cast56)[t55];
  struct std__basic_ostream_char__std__char_traits_char__* cast58 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr57;
  struct std__ios_base* cast59 = (struct std__ios_base*)cast58;
  struct std__ios_base* r60 = ((struct std__ios_base* (*)(struct std__ios_base*))t48)(cast59);
  __retval46 = t47;
  struct std__basic_ostream_char__std__char_traits_char__* t61 = __retval46;
  return t61;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v62, int v63) {
bb64:
  int* __a65;
  int __b66;
  int* __retval67;
  __a65 = v62;
  __b66 = v63;
  int* t68 = __a65;
  int t69 = *t68;
  int t70 = __b66;
  int r71 = std__operator_(t69, t70);
  int* t72 = __a65;
  *t72 = r71;
  __retval67 = t72;
  int* t73 = __retval67;
  return t73;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v74) {
bb75:
  int __a76;
  int __retval77;
  __a76 = v74;
  int t78 = __a76;
  int u79 = ~t78;
  __retval77 = u79;
  int t80 = __retval77;
  return t80;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__3(int v81, int v82) {
bb83:
  int __a84;
  int __b85;
  int __retval86;
  __a84 = v81;
  __b85 = v82;
  int t87 = __a84;
  int t88 = __b85;
  int b89 = t87 | t88;
  __retval86 = b89;
  int t90 = __retval86;
  return t90;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v91, int v92) {
bb93:
  int* __a94;
  int __b95;
  int* __retval96;
  __a94 = v91;
  __b95 = v92;
  int* t97 = __a94;
  int t98 = *t97;
  int t99 = __b95;
  int r100 = std__operator__3(t98, t99);
  int* t101 = __a94;
  *t101 = r100;
  __retval96 = t101;
  int* t102 = __retval96;
  return t102;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v103, int v104) {
bb105:
  int __a106;
  int __b107;
  int __retval108;
  __a106 = v103;
  __b107 = v104;
  int t109 = __a106;
  int t110 = __b107;
  int b111 = t109 & t110;
  __retval108 = b111;
  int t112 = __retval108;
  return t112;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v113, int v114, int v115) {
bb116:
  struct std__ios_base* this117;
  int __fmtfl118;
  int __mask119;
  int __retval120;
  int __old121;
  this117 = v113;
  __fmtfl118 = v114;
  __mask119 = v115;
  struct std__ios_base* t122 = this117;
  int t123 = t122->_M_flags;
  __old121 = t123;
  int t124 = __mask119;
  int r125 = std__operator__2(t124);
  int* r126 = std__operator__(&t122->_M_flags, r125);
  int t127 = __fmtfl118;
  int t128 = __mask119;
  int r129 = std__operator_(t127, t128);
  int* r130 = std__operator___2(&t122->_M_flags, r129);
  int t131 = __old121;
  __retval120 = t131;
  int t132 = __retval120;
  return t132;
}

// function: _ZSt4leftRSt8ios_base
struct std__ios_base* std__left(struct std__ios_base* v133) {
bb134:
  struct std__ios_base* __base135;
  struct std__ios_base* __retval136;
  __base135 = v133;
  struct std__ios_base* t137 = __base135;
  int t138 = _ZNSt8ios_base4leftE_const;
  int t139 = _ZNSt8ios_base11adjustfieldE_const;
  int r140 = std__ios_base__setf(t137, t138, t139);
  struct std__ios_base* t141 = __base135;
  __retval136 = t141;
  struct std__ios_base* t142 = __retval136;
  return t142;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v143, void* v144) {
bb145:
  struct std__basic_ostream_char__std__char_traits_char__* this146;
  void* __pf147;
  struct std__basic_ostream_char__std__char_traits_char__* __retval148;
  this146 = v143;
  __pf147 = v144;
  struct std__basic_ostream_char__std__char_traits_char__* t149 = this146;
  void* t150 = __pf147;
  struct std__basic_ostream_char__std__char_traits_char__* r151 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t150)(t149);
  __retval148 = r151;
  struct std__basic_ostream_char__std__char_traits_char__* t152 = __retval148;
  return t152;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v153) {
bb154:
  struct std__basic_ostream_char__std__char_traits_char__* __os155;
  struct std__basic_ostream_char__std__char_traits_char__* __retval156;
  __os155 = v153;
  struct std__basic_ostream_char__std__char_traits_char__* t157 = __os155;
  struct std__basic_ostream_char__std__char_traits_char__* r158 = std__ostream__flush(t157);
  __retval156 = r158;
  struct std__basic_ostream_char__std__char_traits_char__* t159 = __retval156;
  return t159;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v160) {
bb161:
  struct std__ctype_char_* __f162;
  struct std__ctype_char_* __retval163;
  __f162 = v160;
    struct std__ctype_char_* t164 = __f162;
    _Bool cast165 = (_Bool)t164;
    _Bool u166 = !cast165;
    if (u166) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t167 = __f162;
  __retval163 = t167;
  struct std__ctype_char_* t168 = __retval163;
  return t168;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v169, char v170) {
bb171:
  struct std__ctype_char_* this172;
  char __c173;
  char __retval174;
  this172 = v169;
  __c173 = v170;
  struct std__ctype_char_* t175 = this172;
    char t176 = t175->_M_widen_ok;
    _Bool cast177 = (_Bool)t176;
    if (cast177) {
      char t178 = __c173;
      unsigned char cast179 = (unsigned char)t178;
      unsigned long cast180 = (unsigned long)cast179;
      char t181 = t175->_M_widen[cast180];
      __retval174 = t181;
      char t182 = __retval174;
      return t182;
    }
  std__ctype_char____M_widen_init___const(t175);
  char t183 = __c173;
  void** v184 = (void**)t175;
  void* v185 = *((void**)v184);
  char vcall188 = (char)__VERIFIER_virtual_call_char_char(t175, 6, t183);
  __retval174 = vcall188;
  char t189 = __retval174;
  return t189;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v190, char v191) {
bb192:
  struct std__basic_ios_char__std__char_traits_char__* this193;
  char __c194;
  char __retval195;
  this193 = v190;
  __c194 = v191;
  struct std__basic_ios_char__std__char_traits_char__* t196 = this193;
  struct std__ctype_char_* t197 = t196->_M_ctype;
  struct std__ctype_char_* r198 = std__ctype_char__const__std____check_facet_std__ctype_char___(t197);
  char t199 = __c194;
  char r200 = std__ctype_char___widen_char__const(r198, t199);
  __retval195 = r200;
  char t201 = __retval195;
  return t201;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v202) {
bb203:
  struct std__basic_ostream_char__std__char_traits_char__* __os204;
  struct std__basic_ostream_char__std__char_traits_char__* __retval205;
  __os204 = v202;
  struct std__basic_ostream_char__std__char_traits_char__* t206 = __os204;
  struct std__basic_ostream_char__std__char_traits_char__* t207 = __os204;
  void** v208 = (void**)t207;
  void* v209 = *((void**)v208);
  unsigned char* cast210 = (unsigned char*)v209;
  long c211 = -24;
  unsigned char* ptr212 = &(cast210)[c211];
  long* cast213 = (long*)ptr212;
  long t214 = *cast213;
  unsigned char* cast215 = (unsigned char*)t207;
  unsigned char* ptr216 = &(cast215)[t214];
  struct std__basic_ostream_char__std__char_traits_char__* cast217 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr216;
  struct std__basic_ios_char__std__char_traits_char__* cast218 = (struct std__basic_ios_char__std__char_traits_char__*)cast217;
  char c219 = 10;
  char r220 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast218, c219);
  struct std__basic_ostream_char__std__char_traits_char__* r221 = std__ostream__put(t206, r220);
  struct std__basic_ostream_char__std__char_traits_char__* r222 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r221);
  __retval205 = r222;
  struct std__basic_ostream_char__std__char_traits_char__* t223 = __retval205;
  return t223;
}

// function: main
int main() {
bb224:
  int __retval227;
  int count228;
  struct std___Setw agg_tmp0229;
  int c230 = 0;
  __retval227 = c230;
  int c231 = 1;
  count228 = c231;
  goto bb225;
bb225:
start: ;
    int t232 = count228;
    int c233 = 10;
    _Bool c234 = ((t232 > c233)) ? 1 : 0;
    if (c234) {
      goto end;
    }
  int c235 = 2;
  struct std___Setw r236 = std__setw(c235);
  agg_tmp0229 = r236;
  struct std___Setw t237 = agg_tmp0229;
  struct std__basic_ostream_char__std__char_traits_char__* r238 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t237);
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__ostream__operator___std__ios_base_____(r238, &std__left);
  int t240 = count228;
  struct std__basic_ostream_char__std__char_traits_char__* r241 = std__ostream__operator__(r239, t240);
  int t242 = count228;
  int u243 = t242 + 1;
  count228 = u243;
  goto start;
bb226:
end: ;
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c245 = 0;
  __retval227 = c245;
  int t246 = __retval227;
  return t246;
}

