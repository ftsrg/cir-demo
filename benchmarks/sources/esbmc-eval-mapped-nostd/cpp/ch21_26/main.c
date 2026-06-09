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
struct std___Base_bitset_16UL_ { unsigned long _M_w[16]; };
struct std___Setw { int _M_n; };
struct std__bitset_1024UL_ { struct std___Base_bitset_16UL_ __field0; };
struct std__bitset_1024UL___reference { unsigned long* _M_wp; unsigned long _M_bpos; };
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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[47] = "The prime numbers in the range 2 to 1023 are:\n";
char _str_1[44] = "\nEnter a value from 1 to 1023 (-1 to end): ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[20] = " is a prime number\n";
char _str_3[24] = " is not a prime number\n";
char _str_4[44] = "\nEnter a value from 2 to 1023 (-1 to end): ";
char _str_5[13] = "bitset::test";
char _str_6[52] = "%s: __position (which is %zu) >= _Nb (which is %zu)";
char _str_7[14] = "bitset::reset";
void std__bitset_1024ul___bitset(struct std__bitset_1024UL_* p0);
void std___Base_bitset_16ul____M_do_flip(struct std___Base_bitset_16UL_* p0);
void std___Sanitize_0ul____S_do_sanitize(unsigned long p0);
unsigned long* std___Base_bitset_16ul____M_hiword(struct std___Base_bitset_16UL_* p0);
void std__bitset_1024ul____M_do_sanitize(struct std__bitset_1024UL_* p0);
struct std__bitset_1024UL_* std__bitset_1024ul___flip(struct std__bitset_1024UL_* p0);
extern double sqrt(double p0);
unsigned long std__bitset_1024ul___size___const(struct std__bitset_1024UL_* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
void std__bitset_1024ul____M_check_unsigned_long__char_const___const(struct std__bitset_1024UL_* p0, unsigned long p1, char* p2);
unsigned long std___Base_bitset_16ul____S_whichword(unsigned long p0);
unsigned long std___Base_bitset_16ul____M_getword_unsigned_long__const(struct std___Base_bitset_16UL_* p0, unsigned long p1);
unsigned long std___Base_bitset_16ul____S_whichbit(unsigned long p0);
unsigned long std___Base_bitset_16ul____S_maskbit(unsigned long p0);
_Bool std__bitset_1024ul____Unchecked_test_unsigned_long__const(struct std__bitset_1024UL_* p0, unsigned long p1);
_Bool std__bitset_1024ul___test_unsigned_long__const(struct std__bitset_1024UL_* p0, unsigned long p1);
unsigned long* std___Base_bitset_16ul____M_getword(struct std___Base_bitset_16UL_* p0, unsigned long p1);
struct std__bitset_1024UL_* std__bitset_1024ul____Unchecked_reset(struct std__bitset_1024UL_* p0, unsigned long p1);
struct std__bitset_1024UL_* std__bitset_1024ul___reset(struct std__bitset_1024UL_* p0, unsigned long p1);
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
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
void std__bitset_1024ul___reference__reference(struct std__bitset_1024UL___reference* p0, struct std__bitset_1024UL_* p1, unsigned long p2);
struct std__bitset_1024UL___reference std__bitset_1024ul___operator__(struct std__bitset_1024UL_* p0, unsigned long p1);
_Bool std__bitset_1024ul___reference__operator_bool___const(struct std__bitset_1024UL___reference* p0);
void std__bitset_1024ul___reference___reference(struct std__bitset_1024UL___reference* p0);
int main();
void std___Base_bitset_16ul____Base_bitset(struct std___Base_bitset_16UL_* p0);

// function: _ZNSt6bitsetILm1024EEC2Ev
void std__bitset_1024ul___bitset(struct std__bitset_1024UL_* v0) {
bb1:
  struct std__bitset_1024UL_* this2;
  this2 = v0;
  struct std__bitset_1024UL_* t3 = this2;
  struct std___Base_bitset_16UL_* base4 = (struct std___Base_bitset_16UL_*)((char *)t3 + 0);
  std___Base_bitset_16ul____Base_bitset(base4);
  return;
}

// function: _ZNSt12_Base_bitsetILm16EE10_M_do_flipEv
void std___Base_bitset_16ul____M_do_flip(struct std___Base_bitset_16UL_* v5) {
bb6:
  struct std___Base_bitset_16UL_* this7;
  this7 = v5;
  struct std___Base_bitset_16UL_* t8 = this7;
    unsigned long __i9;
    unsigned long c10 = 0;
    __i9 = c10;
    while (1) {
      unsigned long t12 = __i9;
      unsigned long c13 = 16;
      _Bool c14 = ((t12 < c13)) ? 1 : 0;
      if (!c14) break;
      unsigned long t15 = __i9;
      unsigned long t16 = t8->_M_w[t15];
      unsigned long u17 = ~t16;
      unsigned long t18 = __i9;
      t8->_M_w[t18] = u17;
    for_step11: ;
      unsigned long t19 = __i9;
      unsigned long u20 = t19 + 1;
      __i9 = u20;
    }
  return;
}

// function: _ZNSt9_SanitizeILm0EE14_S_do_sanitizeEm
void std___Sanitize_0ul____S_do_sanitize(unsigned long v21) {
bb22:
  unsigned long unnamed23;
  unnamed23 = v21;
  return;
}

// function: _ZNSt12_Base_bitsetILm16EE9_M_hiwordEv
unsigned long* std___Base_bitset_16ul____M_hiword(struct std___Base_bitset_16UL_* v24) {
bb25:
  struct std___Base_bitset_16UL_* this26;
  unsigned long* __retval27;
  this26 = v24;
  struct std___Base_bitset_16UL_* t28 = this26;
  unsigned long c29 = 16;
  unsigned long c30 = 1;
  unsigned long b31 = c29 - c30;
  __retval27 = &t28->_M_w[b31];
  unsigned long* t32 = __retval27;
  return t32;
}

// function: _ZNSt6bitsetILm1024EE14_M_do_sanitizeEv
void std__bitset_1024ul____M_do_sanitize(struct std__bitset_1024UL_* v33) {
bb34:
  struct std__bitset_1024UL_* this35;
  this35 = v33;
  struct std__bitset_1024UL_* t36 = this35;
  struct std___Base_bitset_16UL_* base37 = (struct std___Base_bitset_16UL_*)((char *)t36 + 0);
  unsigned long* r38 = std___Base_bitset_16ul____M_hiword(base37);
  unsigned long t39 = *r38;
  std___Sanitize_0ul____S_do_sanitize(t39);
  return;
}

// function: _ZNSt6bitsetILm1024EE4flipEv
struct std__bitset_1024UL_* std__bitset_1024ul___flip(struct std__bitset_1024UL_* v40) {
bb41:
  struct std__bitset_1024UL_* this42;
  struct std__bitset_1024UL_* __retval43;
  this42 = v40;
  struct std__bitset_1024UL_* t44 = this42;
  struct std___Base_bitset_16UL_* base45 = (struct std___Base_bitset_16UL_*)((char *)t44 + 0);
  std___Base_bitset_16ul____M_do_flip(base45);
  std__bitset_1024ul____M_do_sanitize(t44);
  __retval43 = t44;
  struct std__bitset_1024UL_* t46 = __retval43;
  return t46;
}

// function: _ZNKSt6bitsetILm1024EE4sizeEv
unsigned long std__bitset_1024ul___size___const(struct std__bitset_1024UL_* v47) {
bb48:
  struct std__bitset_1024UL_* this49;
  unsigned long __retval50;
  this49 = v47;
  struct std__bitset_1024UL_* t51 = this49;
  unsigned long c52 = 1024;
  __retval50 = c52;
  unsigned long t53 = __retval50;
  return t53;
}

// function: _ZNKSt6bitsetILm1024EE8_M_checkEmPKc
void std__bitset_1024ul____M_check_unsigned_long__char_const___const(struct std__bitset_1024UL_* v54, unsigned long v55, char* v56) {
bb57:
  struct std__bitset_1024UL_* this58;
  unsigned long __position59;
  char* __s60;
  this58 = v54;
  __position59 = v55;
  __s60 = v56;
  struct std__bitset_1024UL_* t61 = this58;
    unsigned long t62 = __position59;
    unsigned long c63 = 1024;
    _Bool c64 = ((t62 >= c63)) ? 1 : 0;
    if (c64) {
      char* cast65 = (char*)&(_str_6);
      char* t66 = __s60;
      unsigned long t67 = __position59;
      unsigned long c68 = 1024;
      std____throw_out_of_range_fmt(cast65, t66, t67, c68);
    }
  return;
}

// function: _ZNSt12_Base_bitsetILm16EE12_S_whichwordEm
unsigned long std___Base_bitset_16ul____S_whichword(unsigned long v69) {
bb70:
  unsigned long __pos71;
  unsigned long __retval72;
  __pos71 = v69;
  unsigned long t73 = __pos71;
  int c74 = 8;
  int c75 = 8;
  int b76 = c74 * c75;
  unsigned long cast77 = (unsigned long)b76;
  unsigned long b78 = t73 / cast77;
  __retval72 = b78;
  unsigned long t79 = __retval72;
  return t79;
}

// function: _ZNKSt12_Base_bitsetILm16EE10_M_getwordEm
unsigned long std___Base_bitset_16ul____M_getword_unsigned_long__const(struct std___Base_bitset_16UL_* v80, unsigned long v81) {
bb82:
  struct std___Base_bitset_16UL_* this83;
  unsigned long __pos84;
  unsigned long __retval85;
  this83 = v80;
  __pos84 = v81;
  struct std___Base_bitset_16UL_* t86 = this83;
  unsigned long t87 = __pos84;
  unsigned long r88 = std___Base_bitset_16ul____S_whichword(t87);
  unsigned long t89 = t86->_M_w[r88];
  __retval85 = t89;
  unsigned long t90 = __retval85;
  return t90;
}

// function: _ZNSt12_Base_bitsetILm16EE11_S_whichbitEm
unsigned long std___Base_bitset_16ul____S_whichbit(unsigned long v91) {
bb92:
  unsigned long __pos93;
  unsigned long __retval94;
  __pos93 = v91;
  unsigned long t95 = __pos93;
  int c96 = 8;
  int c97 = 8;
  int b98 = c96 * c97;
  unsigned long cast99 = (unsigned long)b98;
  unsigned long b100 = t95 % cast99;
  __retval94 = b100;
  unsigned long t101 = __retval94;
  return t101;
}

// function: _ZNSt12_Base_bitsetILm16EE10_S_maskbitEm
unsigned long std___Base_bitset_16ul____S_maskbit(unsigned long v102) {
bb103:
  unsigned long __pos104;
  unsigned long __retval105;
  __pos104 = v102;
  unsigned long c106 = 1;
  unsigned long t107 = __pos104;
  unsigned long r108 = std___Base_bitset_16ul____S_whichbit(t107);
  unsigned long s109 = c106 << r108;
  __retval105 = s109;
  unsigned long t110 = __retval105;
  return t110;
}

// function: _ZNKSt6bitsetILm1024EE15_Unchecked_testEm
_Bool std__bitset_1024ul____Unchecked_test_unsigned_long__const(struct std__bitset_1024UL_* v111, unsigned long v112) {
bb113:
  struct std__bitset_1024UL_* this114;
  unsigned long __pos115;
  _Bool __retval116;
  this114 = v111;
  __pos115 = v112;
  struct std__bitset_1024UL_* t117 = this114;
  struct std___Base_bitset_16UL_* base118 = (struct std___Base_bitset_16UL_*)((char *)t117 + 0);
  unsigned long t119 = __pos115;
  unsigned long r120 = std___Base_bitset_16ul____M_getword_unsigned_long__const(base118, t119);
  unsigned long t121 = __pos115;
  unsigned long r122 = std___Base_bitset_16ul____S_maskbit(t121);
  unsigned long b123 = r120 & r122;
  unsigned long c124 = 0;
  _Bool c125 = ((b123 != c124)) ? 1 : 0;
  __retval116 = c125;
  _Bool t126 = __retval116;
  return t126;
}

// function: _ZNKSt6bitsetILm1024EE4testEm
_Bool std__bitset_1024ul___test_unsigned_long__const(struct std__bitset_1024UL_* v127, unsigned long v128) {
bb129:
  struct std__bitset_1024UL_* this130;
  unsigned long __position131;
  _Bool __retval132;
  this130 = v127;
  __position131 = v128;
  struct std__bitset_1024UL_* t133 = this130;
  unsigned long t134 = __position131;
  char* cast135 = (char*)&(_str_5);
  std__bitset_1024ul____M_check_unsigned_long__char_const___const(t133, t134, cast135);
  unsigned long t136 = __position131;
  _Bool r137 = std__bitset_1024ul____Unchecked_test_unsigned_long__const(t133, t136);
  __retval132 = r137;
  _Bool t138 = __retval132;
  return t138;
}

// function: _ZNSt12_Base_bitsetILm16EE10_M_getwordEm
unsigned long* std___Base_bitset_16ul____M_getword(struct std___Base_bitset_16UL_* v139, unsigned long v140) {
bb141:
  struct std___Base_bitset_16UL_* this142;
  unsigned long __pos143;
  unsigned long* __retval144;
  this142 = v139;
  __pos143 = v140;
  struct std___Base_bitset_16UL_* t145 = this142;
  unsigned long t146 = __pos143;
  unsigned long r147 = std___Base_bitset_16ul____S_whichword(t146);
  __retval144 = &t145->_M_w[r147];
  unsigned long* t148 = __retval144;
  return t148;
}

// function: _ZNSt6bitsetILm1024EE16_Unchecked_resetEm
struct std__bitset_1024UL_* std__bitset_1024ul____Unchecked_reset(struct std__bitset_1024UL_* v149, unsigned long v150) {
bb151:
  struct std__bitset_1024UL_* this152;
  unsigned long __pos153;
  struct std__bitset_1024UL_* __retval154;
  this152 = v149;
  __pos153 = v150;
  struct std__bitset_1024UL_* t155 = this152;
  unsigned long t156 = __pos153;
  unsigned long r157 = std___Base_bitset_16ul____S_maskbit(t156);
  unsigned long u158 = ~r157;
  struct std___Base_bitset_16UL_* base159 = (struct std___Base_bitset_16UL_*)((char *)t155 + 0);
  unsigned long t160 = __pos153;
  unsigned long* r161 = std___Base_bitset_16ul____M_getword(base159, t160);
  unsigned long t162 = *r161;
  unsigned long b163 = t162 & u158;
  *r161 = b163;
  __retval154 = t155;
  struct std__bitset_1024UL_* t164 = __retval154;
  return t164;
}

// function: _ZNSt6bitsetILm1024EE5resetEm
struct std__bitset_1024UL_* std__bitset_1024ul___reset(struct std__bitset_1024UL_* v165, unsigned long v166) {
bb167:
  struct std__bitset_1024UL_* this168;
  unsigned long __position169;
  struct std__bitset_1024UL_* __retval170;
  this168 = v165;
  __position169 = v166;
  struct std__bitset_1024UL_* t171 = this168;
  unsigned long t172 = __position169;
  char* cast173 = (char*)&(_str_7);
  std__bitset_1024ul____M_check_unsigned_long__char_const___const(t171, t172, cast173);
  unsigned long t174 = __position169;
  struct std__bitset_1024UL_* r175 = std__bitset_1024ul____Unchecked_reset(t171, t174);
  __retval170 = r175;
  struct std__bitset_1024UL_* t176 = __retval170;
  return t176;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v177, int v178) {
bb179:
  int __a180;
  int __b181;
  int __retval182;
  __a180 = v177;
  __b181 = v178;
  int t183 = __a180;
  int t184 = __b181;
  int b185 = t183 | t184;
  __retval182 = b185;
  int t186 = __retval182;
  return t186;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v187) {
bb188:
  struct std__basic_ios_char__std__char_traits_char__* this189;
  int __retval190;
  this189 = v187;
  struct std__basic_ios_char__std__char_traits_char__* t191 = this189;
  struct std__ios_base* base192 = (struct std__ios_base*)((char *)t191 + 0);
  int t193 = base192->_M_streambuf_state;
  __retval190 = t193;
  int t194 = __retval190;
  return t194;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v195, int v196) {
bb197:
  struct std__basic_ios_char__std__char_traits_char__* this198;
  int __state199;
  this198 = v195;
  __state199 = v196;
  struct std__basic_ios_char__std__char_traits_char__* t200 = this198;
  int r201 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t200);
  int t202 = __state199;
  int r203 = std__operator_(r201, t202);
  std__basic_ios_char__std__char_traits_char_____clear(t200, r203);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb204:
  _Bool __retval205;
    _Bool c206 = 0;
    __retval205 = c206;
    _Bool t207 = __retval205;
    return t207;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v208, char* v209) {
bb210:
  char* __c1211;
  char* __c2212;
  _Bool __retval213;
  __c1211 = v208;
  __c2212 = v209;
  char* t214 = __c1211;
  char t215 = *t214;
  int cast216 = (int)t215;
  char* t217 = __c2212;
  char t218 = *t217;
  int cast219 = (int)t218;
  _Bool c220 = ((cast216 == cast219)) ? 1 : 0;
  __retval213 = c220;
  _Bool t221 = __retval213;
  return t221;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v222) {
bb223:
  char* __p224;
  unsigned long __retval225;
  unsigned long __i226;
  __p224 = v222;
  unsigned long c227 = 0;
  __i226 = c227;
    char ref_tmp0228;
    while (1) {
      unsigned long t229 = __i226;
      char* t230 = __p224;
      char* ptr231 = &(t230)[t229];
      char c232 = 0;
      ref_tmp0228 = c232;
      _Bool r233 = __gnu_cxx__char_traits_char___eq(ptr231, &ref_tmp0228);
      _Bool u234 = !r233;
      if (!u234) break;
      unsigned long t235 = __i226;
      unsigned long u236 = t235 + 1;
      __i226 = u236;
    }
  unsigned long t237 = __i226;
  __retval225 = t237;
  unsigned long t238 = __retval225;
  return t238;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v239) {
bb240:
  char* __s241;
  unsigned long __retval242;
  __s241 = v239;
    _Bool r243 = std____is_constant_evaluated();
    if (r243) {
      char* t244 = __s241;
      unsigned long r245 = __gnu_cxx__char_traits_char___length(t244);
      __retval242 = r245;
      unsigned long t246 = __retval242;
      return t246;
    }
  char* t247 = __s241;
  unsigned long r248 = strlen(t247);
  __retval242 = r248;
  unsigned long t249 = __retval242;
  return t249;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v250, char* v251) {
bb252:
  struct std__basic_ostream_char__std__char_traits_char__* __out253;
  char* __s254;
  struct std__basic_ostream_char__std__char_traits_char__* __retval255;
  __out253 = v250;
  __s254 = v251;
    char* t256 = __s254;
    _Bool cast257 = (_Bool)t256;
    _Bool u258 = !cast257;
    if (u258) {
      struct std__basic_ostream_char__std__char_traits_char__* t259 = __out253;
      void** v260 = (void**)t259;
      void* v261 = *((void**)v260);
      unsigned char* cast262 = (unsigned char*)v261;
      long c263 = -24;
      unsigned char* ptr264 = &(cast262)[c263];
      long* cast265 = (long*)ptr264;
      long t266 = *cast265;
      unsigned char* cast267 = (unsigned char*)t259;
      unsigned char* ptr268 = &(cast267)[t266];
      struct std__basic_ostream_char__std__char_traits_char__* cast269 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr268;
      struct std__basic_ios_char__std__char_traits_char__* cast270 = (struct std__basic_ios_char__std__char_traits_char__*)cast269;
      int t271 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast270, t271);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t272 = __out253;
      char* t273 = __s254;
      char* t274 = __s254;
      unsigned long r275 = std__char_traits_char___length(t274);
      long cast276 = (long)r275;
      struct std__basic_ostream_char__std__char_traits_char__* r277 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t272, t273, cast276);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t278 = __out253;
  __retval255 = t278;
  struct std__basic_ostream_char__std__char_traits_char__* t279 = __retval255;
  return t279;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v280, long v281) {
bb282:
  struct std__ios_base* this283;
  long __wide284;
  long __retval285;
  long __old286;
  this283 = v280;
  __wide284 = v281;
  struct std__ios_base* t287 = this283;
  long t288 = t287->_M_width;
  __old286 = t288;
  long t289 = __wide284;
  t287->_M_width = t289;
  long t290 = __old286;
  __retval285 = t290;
  long t291 = __retval285;
  return t291;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v292, struct std___Setw v293) {
bb294:
  struct std__basic_ostream_char__std__char_traits_char__* __os295;
  struct std___Setw __f296;
  struct std__basic_ostream_char__std__char_traits_char__* __retval297;
  __os295 = v292;
  __f296 = v293;
  struct std__basic_ostream_char__std__char_traits_char__* t298 = __os295;
  void** v299 = (void**)t298;
  void* v300 = *((void**)v299);
  unsigned char* cast301 = (unsigned char*)v300;
  long c302 = -24;
  unsigned char* ptr303 = &(cast301)[c302];
  long* cast304 = (long*)ptr303;
  long t305 = *cast304;
  unsigned char* cast306 = (unsigned char*)t298;
  unsigned char* ptr307 = &(cast306)[t305];
  struct std__basic_ostream_char__std__char_traits_char__* cast308 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr307;
  struct std__ios_base* cast309 = (struct std__ios_base*)cast308;
  int t310 = __f296._M_n;
  long cast311 = (long)t310;
  long r312 = std__ios_base__width(cast309, cast311);
  struct std__basic_ostream_char__std__char_traits_char__* t313 = __os295;
  __retval297 = t313;
  struct std__basic_ostream_char__std__char_traits_char__* t314 = __retval297;
  return t314;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v315) {
bb316:
  int __n317;
  struct std___Setw __retval318;
  __n317 = v315;
  int t319 = __n317;
  __retval318._M_n = t319;
  struct std___Setw t320 = __retval318;
  return t320;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v321) {
bb322:
  struct std__ios_base* this323;
  long __retval324;
  this323 = v321;
  struct std__ios_base* t325 = this323;
  long t326 = t325->_M_width;
  __retval324 = t326;
  long t327 = __retval324;
  return t327;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v328, char v329) {
bb330:
  struct std__basic_ostream_char__std__char_traits_char__* __out331;
  char __c332;
  struct std__basic_ostream_char__std__char_traits_char__* __retval333;
  __out331 = v328;
  __c332 = v329;
    struct std__basic_ostream_char__std__char_traits_char__* t334 = __out331;
    void** v335 = (void**)t334;
    void* v336 = *((void**)v335);
    unsigned char* cast337 = (unsigned char*)v336;
    long c338 = -24;
    unsigned char* ptr339 = &(cast337)[c338];
    long* cast340 = (long*)ptr339;
    long t341 = *cast340;
    unsigned char* cast342 = (unsigned char*)t334;
    unsigned char* ptr343 = &(cast342)[t341];
    struct std__basic_ostream_char__std__char_traits_char__* cast344 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr343;
    struct std__ios_base* cast345 = (struct std__ios_base*)cast344;
    long r346 = std__ios_base__width___const(cast345);
    long c347 = 0;
    _Bool c348 = ((r346 != c347)) ? 1 : 0;
    if (c348) {
      struct std__basic_ostream_char__std__char_traits_char__* t349 = __out331;
      long c350 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r351 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t349, &__c332, c350);
      __retval333 = r351;
      struct std__basic_ostream_char__std__char_traits_char__* t352 = __retval333;
      return t352;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t353 = __out331;
  char t354 = __c332;
  struct std__basic_ostream_char__std__char_traits_char__* r355 = std__ostream__put(t353, t354);
  struct std__basic_ostream_char__std__char_traits_char__* t356 = __out331;
  __retval333 = t356;
  struct std__basic_ostream_char__std__char_traits_char__* t357 = __retval333;
  return t357;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v358, void* v359) {
bb360:
  struct std__basic_ostream_char__std__char_traits_char__* this361;
  void* __pf362;
  struct std__basic_ostream_char__std__char_traits_char__* __retval363;
  this361 = v358;
  __pf362 = v359;
  struct std__basic_ostream_char__std__char_traits_char__* t364 = this361;
  void* t365 = __pf362;
  struct std__basic_ostream_char__std__char_traits_char__* r366 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t365)(t364);
  __retval363 = r366;
  struct std__basic_ostream_char__std__char_traits_char__* t367 = __retval363;
  return t367;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v368) {
bb369:
  struct std__basic_ostream_char__std__char_traits_char__* __os370;
  struct std__basic_ostream_char__std__char_traits_char__* __retval371;
  __os370 = v368;
  struct std__basic_ostream_char__std__char_traits_char__* t372 = __os370;
  struct std__basic_ostream_char__std__char_traits_char__* r373 = std__ostream__flush(t372);
  __retval371 = r373;
  struct std__basic_ostream_char__std__char_traits_char__* t374 = __retval371;
  return t374;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v375) {
bb376:
  struct std__ctype_char_* __f377;
  struct std__ctype_char_* __retval378;
  __f377 = v375;
    struct std__ctype_char_* t379 = __f377;
    _Bool cast380 = (_Bool)t379;
    _Bool u381 = !cast380;
    if (u381) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t382 = __f377;
  __retval378 = t382;
  struct std__ctype_char_* t383 = __retval378;
  return t383;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v384, char v385) {
bb386:
  struct std__ctype_char_* this387;
  char __c388;
  char __retval389;
  this387 = v384;
  __c388 = v385;
  struct std__ctype_char_* t390 = this387;
    char t391 = t390->_M_widen_ok;
    _Bool cast392 = (_Bool)t391;
    if (cast392) {
      char t393 = __c388;
      unsigned char cast394 = (unsigned char)t393;
      unsigned long cast395 = (unsigned long)cast394;
      char t396 = t390->_M_widen[cast395];
      __retval389 = t396;
      char t397 = __retval389;
      return t397;
    }
  std__ctype_char____M_widen_init___const(t390);
  char t398 = __c388;
  void** v399 = (void**)t390;
  void* v400 = *((void**)v399);
  char vcall403 = (char)__VERIFIER_virtual_call_char_char(t390, 6, t398);
  __retval389 = vcall403;
  char t404 = __retval389;
  return t404;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v405, char v406) {
bb407:
  struct std__basic_ios_char__std__char_traits_char__* this408;
  char __c409;
  char __retval410;
  this408 = v405;
  __c409 = v406;
  struct std__basic_ios_char__std__char_traits_char__* t411 = this408;
  struct std__ctype_char_* t412 = t411->_M_ctype;
  struct std__ctype_char_* r413 = std__ctype_char__const__std____check_facet_std__ctype_char___(t412);
  char t414 = __c409;
  char r415 = std__ctype_char___widen_char__const(r413, t414);
  __retval410 = r415;
  char t416 = __retval410;
  return t416;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v417) {
bb418:
  struct std__basic_ostream_char__std__char_traits_char__* __os419;
  struct std__basic_ostream_char__std__char_traits_char__* __retval420;
  __os419 = v417;
  struct std__basic_ostream_char__std__char_traits_char__* t421 = __os419;
  struct std__basic_ostream_char__std__char_traits_char__* t422 = __os419;
  void** v423 = (void**)t422;
  void* v424 = *((void**)v423);
  unsigned char* cast425 = (unsigned char*)v424;
  long c426 = -24;
  unsigned char* ptr427 = &(cast425)[c426];
  long* cast428 = (long*)ptr427;
  long t429 = *cast428;
  unsigned char* cast430 = (unsigned char*)t422;
  unsigned char* ptr431 = &(cast430)[t429];
  struct std__basic_ostream_char__std__char_traits_char__* cast432 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr431;
  struct std__basic_ios_char__std__char_traits_char__* cast433 = (struct std__basic_ios_char__std__char_traits_char__*)cast432;
  char c434 = 10;
  char r435 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast433, c434);
  struct std__basic_ostream_char__std__char_traits_char__* r436 = std__ostream__put(t421, r435);
  struct std__basic_ostream_char__std__char_traits_char__* r437 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r436);
  __retval420 = r437;
  struct std__basic_ostream_char__std__char_traits_char__* t438 = __retval420;
  return t438;
}

// function: _ZNSt6bitsetILm1024EE9referenceC2ERS0_m
void std__bitset_1024ul___reference__reference(struct std__bitset_1024UL___reference* v439, struct std__bitset_1024UL_* v440, unsigned long v441) {
bb442:
  struct std__bitset_1024UL___reference* this443;
  struct std__bitset_1024UL_* __b444;
  unsigned long __pos445;
  this443 = v439;
  __b444 = v440;
  __pos445 = v441;
  struct std__bitset_1024UL___reference* t446 = this443;
  struct std__bitset_1024UL_* t447 = __b444;
  struct std___Base_bitset_16UL_* base448 = (struct std___Base_bitset_16UL_*)((char *)t447 + 0);
  unsigned long t449 = __pos445;
  unsigned long* r450 = std___Base_bitset_16ul____M_getword(base448, t449);
  t446->_M_wp = r450;
  unsigned long t451 = __pos445;
  unsigned long r452 = std___Base_bitset_16ul____S_whichbit(t451);
  t446->_M_bpos = r452;
  return;
}

// function: _ZNSt6bitsetILm1024EEixEm
struct std__bitset_1024UL___reference std__bitset_1024ul___operator__(struct std__bitset_1024UL_* v453, unsigned long v454) {
bb455:
  struct std__bitset_1024UL_* this456;
  unsigned long __position457;
  struct std__bitset_1024UL___reference __retval458;
  this456 = v453;
  __position457 = v454;
  struct std__bitset_1024UL_* t459 = this456;
  unsigned long t460 = __position457;
  std__bitset_1024ul___reference__reference(&__retval458, t459, t460);
  struct std__bitset_1024UL___reference t461 = __retval458;
  return t461;
}

// function: _ZNKSt6bitsetILm1024EE9referencecvbEv
_Bool std__bitset_1024ul___reference__operator_bool___const(struct std__bitset_1024UL___reference* v462) {
bb463:
  struct std__bitset_1024UL___reference* this464;
  _Bool __retval465;
  this464 = v462;
  struct std__bitset_1024UL___reference* t466 = this464;
  unsigned long* t467 = t466->_M_wp;
  unsigned long t468 = *t467;
  unsigned long t469 = t466->_M_bpos;
  unsigned long r470 = std___Base_bitset_16ul____S_maskbit(t469);
  unsigned long b471 = t468 & r470;
  unsigned long c472 = 0;
  _Bool c473 = ((b471 != c472)) ? 1 : 0;
  __retval465 = c473;
  _Bool t474 = __retval465;
  return t474;
}

// function: _ZNSt6bitsetILm1024EE9referenceD2Ev
void std__bitset_1024ul___reference___reference(struct std__bitset_1024UL___reference* v475) {
bb476:
  struct std__bitset_1024UL___reference* this477;
  this477 = v475;
  struct std__bitset_1024UL___reference* t478 = this477;
  return;
}

// function: main
int main() {
bb479:
  int __retval480;
  int size481;
  int value482;
  struct std__bitset_1024UL_ sieve483;
  int finalBit484;
  int c485 = 0;
  __retval480 = c485;
  int c486 = 1024;
  size481 = c486;
  std__bitset_1024ul___bitset(&sieve483);
  struct std__bitset_1024UL_* r487 = std__bitset_1024ul___flip(&sieve483);
  unsigned long r488 = std__bitset_1024ul___size___const(&sieve483);
  double cast489 = (double)r488;
  double r490 = sqrt(cast489);
  int c491 = 1;
  double cast492 = (double)c491;
  double b493 = r490 + cast492;
  int cast494 = (int)b493;
  finalBit484 = cast494;
    int i495;
    int c496 = 2;
    i495 = c496;
    while (1) {
      int t498 = i495;
      int t499 = finalBit484;
      _Bool c500 = ((t498 < t499)) ? 1 : 0;
      if (!c500) break;
        int t501 = i495;
        unsigned long cast502 = (unsigned long)t501;
        _Bool r503 = std__bitset_1024ul___test_unsigned_long__const(&sieve483, cast502);
        if (r503) {
            int j504;
            int c505 = 2;
            int t506 = i495;
            int b507 = c505 * t506;
            j504 = b507;
            while (1) {
              int t509 = j504;
              int t510 = size481;
              _Bool c511 = ((t509 < t510)) ? 1 : 0;
              if (!c511) break;
              int t512 = j504;
              unsigned long cast513 = (unsigned long)t512;
              struct std__bitset_1024UL_* r514 = std__bitset_1024ul___reset(&sieve483, cast513);
            for_step508: ;
              int t515 = i495;
              int t516 = j504;
              int b517 = t516 + t515;
              j504 = b517;
            }
        }
    for_step497: ;
      int t518 = i495;
      int u519 = t518 + 1;
      i495 = u519;
    }
  char* cast520 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r521 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast520);
    int k522;
    int counter523;
    int c524 = 2;
    k522 = c524;
    int c525 = 0;
    counter523 = c525;
    while (1) {
      int t527 = k522;
      int t528 = size481;
      _Bool c529 = ((t527 < t528)) ? 1 : 0;
      if (!c529) break;
        int t530 = k522;
        unsigned long cast531 = (unsigned long)t530;
        _Bool r532 = std__bitset_1024ul___test_unsigned_long__const(&sieve483, cast531);
        if (r532) {
          struct std___Setw agg_tmp0533;
          int c534 = 5;
          struct std___Setw r535 = std__setw(c534);
          agg_tmp0533 = r535;
          struct std___Setw t536 = agg_tmp0533;
          struct std__basic_ostream_char__std__char_traits_char__* r537 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t536);
          int t538 = k522;
          struct std__basic_ostream_char__std__char_traits_char__* r539 = std__ostream__operator__(r537, t538);
            int t540 = counter523;
            int u541 = t540 + 1;
            counter523 = u541;
            int c542 = 12;
            int b543 = u541 % c542;
            int c544 = 0;
            _Bool c545 = ((b543 == c544)) ? 1 : 0;
            if (c545) {
              char c546 = 10;
              struct std__basic_ostream_char__std__char_traits_char__* r547 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, c546);
            }
        }
    for_step526: ;
      int t548 = k522;
      int u549 = t548 + 1;
      k522 = u549;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r550 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast551 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r552 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast551);
  struct std__basic_istream_char__std__char_traits_char__* r553 = std__istream__operator__(&_ZSt3cin, &value482);
    while (1) {
      int t554 = value482;
      int c555 = -1;
      _Bool c556 = ((t554 != c555)) ? 1 : 0;
      if (!c556) break;
          struct std__bitset_1024UL___reference ref_tmp0557;
          _Bool tmp_exprcleanup558;
          int t559 = value482;
          unsigned long cast560 = (unsigned long)t559;
          struct std__bitset_1024UL___reference r561 = std__bitset_1024ul___operator__(&sieve483, cast560);
          ref_tmp0557 = r561;
            _Bool r562 = std__bitset_1024ul___reference__operator_bool___const(&ref_tmp0557);
            tmp_exprcleanup558 = r562;
          {
            std__bitset_1024ul___reference___reference(&ref_tmp0557);
          }
          _Bool t563 = tmp_exprcleanup558;
          if (t563) {
            int t564 = value482;
            struct std__basic_ostream_char__std__char_traits_char__* r565 = std__ostream__operator__(&_ZSt4cout, t564);
            char* cast566 = (char*)&(_str_2);
            struct std__basic_ostream_char__std__char_traits_char__* r567 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r565, cast566);
          } else {
            int t568 = value482;
            struct std__basic_ostream_char__std__char_traits_char__* r569 = std__ostream__operator__(&_ZSt4cout, t568);
            char* cast570 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* r571 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r569, cast570);
          }
        char* cast572 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r573 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast572);
        struct std__basic_istream_char__std__char_traits_char__* r574 = std__istream__operator__(&_ZSt3cin, &value482);
    }
  int c575 = 0;
  __retval480 = c575;
  int t576 = __retval480;
  return t576;
}

// function: _ZNSt12_Base_bitsetILm16EEC2Ev
void std___Base_bitset_16ul____Base_bitset(struct std___Base_bitset_16UL_* v577) {
bb578:
  struct std___Base_bitset_16UL_* this579;
  this579 = v577;
  struct std___Base_bitset_16UL_* t580 = this579;
  unsigned long c581[16] = {0};
  __builtin_memcpy(t580->_M_w, &(c581), sizeof(*t580->_M_w));
  return;
}

