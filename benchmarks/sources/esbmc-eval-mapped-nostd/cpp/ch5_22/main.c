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
char _str[15] = "Happy New Year";
char _str_1[15] = "Happy Holidays";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[6] = "s1 = ";
char _str_3[7] = "\ns2 = ";
char _str_4[7] = "\ns3 = ";
char _str_5[20] = "\n\nstrcmp(s1, s2) = ";
char _str_6[19] = "\nstrcmp(s1, s3) = ";
char _str_7[19] = "\nstrcmp(s3, s1) = ";
char _str_8[24] = "\n\nstrncmp(s1, s3, 6) = ";
char _str_9[23] = "\nstrncmp(s1, s3, 7) = ";
char _str_10[23] = "\nstrncmp(s3, s1, 7) = ";
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
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
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern int strcmp(char* p0, char* p1);
extern int strncmp(char* p0, char* p1, unsigned long p2);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v35, int v36) {
bb37:
  int __a38;
  int __b39;
  int __retval40;
  __a38 = v35;
  __b39 = v36;
  int t41 = __a38;
  int t42 = __b39;
  int b43 = t41 | t42;
  __retval40 = b43;
  int t44 = __retval40;
  return t44;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v45) {
bb46:
  struct std__basic_ios_char__std__char_traits_char__* this47;
  int __retval48;
  this47 = v45;
  struct std__basic_ios_char__std__char_traits_char__* t49 = this47;
  struct std__ios_base* base50 = (struct std__ios_base*)((char *)t49 + 0);
  int t51 = base50->_M_streambuf_state;
  __retval48 = t51;
  int t52 = __retval48;
  return t52;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v53, int v54) {
bb55:
  struct std__basic_ios_char__std__char_traits_char__* this56;
  int __state57;
  this56 = v53;
  __state57 = v54;
  struct std__basic_ios_char__std__char_traits_char__* t58 = this56;
  int r59 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t58);
  int t60 = __state57;
  int r61 = std__operator_(r59, t60);
  std__basic_ios_char__std__char_traits_char_____clear(t58, r61);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb62:
  _Bool __retval63;
    _Bool c64 = 0;
    __retval63 = c64;
    _Bool t65 = __retval63;
    return t65;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v66, char* v67) {
bb68:
  char* __c169;
  char* __c270;
  _Bool __retval71;
  __c169 = v66;
  __c270 = v67;
  char* t72 = __c169;
  char t73 = *t72;
  int cast74 = (int)t73;
  char* t75 = __c270;
  char t76 = *t75;
  int cast77 = (int)t76;
  _Bool c78 = ((cast74 == cast77)) ? 1 : 0;
  __retval71 = c78;
  _Bool t79 = __retval71;
  return t79;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v80) {
bb81:
  char* __p82;
  unsigned long __retval83;
  unsigned long __i84;
  __p82 = v80;
  unsigned long c85 = 0;
  __i84 = c85;
    char ref_tmp086;
    while (1) {
      unsigned long t87 = __i84;
      char* t88 = __p82;
      char* ptr89 = &(t88)[t87];
      char c90 = 0;
      ref_tmp086 = c90;
      _Bool r91 = __gnu_cxx__char_traits_char___eq(ptr89, &ref_tmp086);
      _Bool u92 = !r91;
      if (!u92) break;
      unsigned long t93 = __i84;
      unsigned long u94 = t93 + 1;
      __i84 = u94;
    }
  unsigned long t95 = __i84;
  __retval83 = t95;
  unsigned long t96 = __retval83;
  return t96;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v97) {
bb98:
  char* __s99;
  unsigned long __retval100;
  __s99 = v97;
    _Bool r101 = std____is_constant_evaluated();
    if (r101) {
      char* t102 = __s99;
      unsigned long r103 = __gnu_cxx__char_traits_char___length(t102);
      __retval100 = r103;
      unsigned long t104 = __retval100;
      return t104;
    }
  char* t105 = __s99;
  unsigned long r106 = strlen(t105);
  __retval100 = r106;
  unsigned long t107 = __retval100;
  return t107;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v108, char* v109) {
bb110:
  struct std__basic_ostream_char__std__char_traits_char__* __out111;
  char* __s112;
  struct std__basic_ostream_char__std__char_traits_char__* __retval113;
  __out111 = v108;
  __s112 = v109;
    char* t114 = __s112;
    _Bool cast115 = (_Bool)t114;
    _Bool u116 = !cast115;
    if (u116) {
      struct std__basic_ostream_char__std__char_traits_char__* t117 = __out111;
      void** v118 = (void**)t117;
      void* v119 = *((void**)v118);
      unsigned char* cast120 = (unsigned char*)v119;
      long c121 = -24;
      unsigned char* ptr122 = &(cast120)[c121];
      long* cast123 = (long*)ptr122;
      long t124 = *cast123;
      unsigned char* cast125 = (unsigned char*)t117;
      unsigned char* ptr126 = &(cast125)[t124];
      struct std__basic_ostream_char__std__char_traits_char__* cast127 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr126;
      struct std__basic_ios_char__std__char_traits_char__* cast128 = (struct std__basic_ios_char__std__char_traits_char__*)cast127;
      int t129 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast128, t129);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t130 = __out111;
      char* t131 = __s112;
      char* t132 = __s112;
      unsigned long r133 = std__char_traits_char___length(t132);
      long cast134 = (long)r133;
      struct std__basic_ostream_char__std__char_traits_char__* r135 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t130, t131, cast134);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __out111;
  __retval113 = t136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval113;
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v144, void* v145) {
bb146:
  struct std__basic_ostream_char__std__char_traits_char__* this147;
  void* __pf148;
  struct std__basic_ostream_char__std__char_traits_char__* __retval149;
  this147 = v144;
  __pf148 = v145;
  struct std__basic_ostream_char__std__char_traits_char__* t150 = this147;
  void* t151 = __pf148;
  struct std__basic_ostream_char__std__char_traits_char__* r152 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t151)(t150);
  __retval149 = r152;
  struct std__basic_ostream_char__std__char_traits_char__* t153 = __retval149;
  return t153;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v154) {
bb155:
  struct std__basic_ostream_char__std__char_traits_char__* __os156;
  struct std__basic_ostream_char__std__char_traits_char__* __retval157;
  __os156 = v154;
  struct std__basic_ostream_char__std__char_traits_char__* t158 = __os156;
  struct std__basic_ostream_char__std__char_traits_char__* r159 = std__ostream__flush(t158);
  __retval157 = r159;
  struct std__basic_ostream_char__std__char_traits_char__* t160 = __retval157;
  return t160;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v161) {
bb162:
  struct std__ctype_char_* __f163;
  struct std__ctype_char_* __retval164;
  __f163 = v161;
    struct std__ctype_char_* t165 = __f163;
    _Bool cast166 = (_Bool)t165;
    _Bool u167 = !cast166;
    if (u167) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t168 = __f163;
  __retval164 = t168;
  struct std__ctype_char_* t169 = __retval164;
  return t169;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v170, char v171) {
bb172:
  struct std__ctype_char_* this173;
  char __c174;
  char __retval175;
  this173 = v170;
  __c174 = v171;
  struct std__ctype_char_* t176 = this173;
    char t177 = t176->_M_widen_ok;
    _Bool cast178 = (_Bool)t177;
    if (cast178) {
      char t179 = __c174;
      unsigned char cast180 = (unsigned char)t179;
      unsigned long cast181 = (unsigned long)cast180;
      char t182 = t176->_M_widen[cast181];
      __retval175 = t182;
      char t183 = __retval175;
      return t183;
    }
  std__ctype_char____M_widen_init___const(t176);
  char t184 = __c174;
  void** v185 = (void**)t176;
  void* v186 = *((void**)v185);
  char vcall189 = (char)__VERIFIER_virtual_call_char_char(t176, 6, t184);
  __retval175 = vcall189;
  char t190 = __retval175;
  return t190;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v191, char v192) {
bb193:
  struct std__basic_ios_char__std__char_traits_char__* this194;
  char __c195;
  char __retval196;
  this194 = v191;
  __c195 = v192;
  struct std__basic_ios_char__std__char_traits_char__* t197 = this194;
  struct std__ctype_char_* t198 = t197->_M_ctype;
  struct std__ctype_char_* r199 = std__ctype_char__const__std____check_facet_std__ctype_char___(t198);
  char t200 = __c195;
  char r201 = std__ctype_char___widen_char__const(r199, t200);
  __retval196 = r201;
  char t202 = __retval196;
  return t202;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v203) {
bb204:
  struct std__basic_ostream_char__std__char_traits_char__* __os205;
  struct std__basic_ostream_char__std__char_traits_char__* __retval206;
  __os205 = v203;
  struct std__basic_ostream_char__std__char_traits_char__* t207 = __os205;
  struct std__basic_ostream_char__std__char_traits_char__* t208 = __os205;
  void** v209 = (void**)t208;
  void* v210 = *((void**)v209);
  unsigned char* cast211 = (unsigned char*)v210;
  long c212 = -24;
  unsigned char* ptr213 = &(cast211)[c212];
  long* cast214 = (long*)ptr213;
  long t215 = *cast214;
  unsigned char* cast216 = (unsigned char*)t208;
  unsigned char* ptr217 = &(cast216)[t215];
  struct std__basic_ostream_char__std__char_traits_char__* cast218 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr217;
  struct std__basic_ios_char__std__char_traits_char__* cast219 = (struct std__basic_ios_char__std__char_traits_char__*)cast218;
  char c220 = 10;
  char r221 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast219, c220);
  struct std__basic_ostream_char__std__char_traits_char__* r222 = std__ostream__put(t207, r221);
  struct std__basic_ostream_char__std__char_traits_char__* r223 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r222);
  __retval206 = r223;
  struct std__basic_ostream_char__std__char_traits_char__* t224 = __retval206;
  return t224;
}

// function: main
int main() {
bb225:
  int __retval226;
  char* s1227;
  char* s2228;
  char* s3229;
  struct std___Setw agg_tmp0230;
  struct std___Setw agg_tmp1231;
  struct std___Setw agg_tmp2232;
  struct std___Setw agg_tmp3233;
  struct std___Setw agg_tmp4234;
  struct std___Setw agg_tmp5235;
  int c236 = 0;
  __retval226 = c236;
  char* cast237 = (char*)&(_str);
  s1227 = cast237;
  char* cast238 = (char*)&(_str);
  s2228 = cast238;
  char* cast239 = (char*)&(_str_1);
  s3229 = cast239;
  char* cast240 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r241 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast240);
  char* t242 = s1227;
  struct std__basic_ostream_char__std__char_traits_char__* r243 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r241, t242);
  char* cast244 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r245 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r243, cast244);
  char* t246 = s2228;
  struct std__basic_ostream_char__std__char_traits_char__* r247 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r245, t246);
  char* cast248 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r249 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r247, cast248);
  char* t250 = s3229;
  struct std__basic_ostream_char__std__char_traits_char__* r251 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r249, t250);
  char* cast252 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r253 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r251, cast252);
  int c254 = 2;
  struct std___Setw r255 = std__setw(c254);
  agg_tmp0230 = r255;
  struct std___Setw t256 = agg_tmp0230;
  struct std__basic_ostream_char__std__char_traits_char__* r257 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r253, t256);
  char* t258 = s1227;
  char* t259 = s2228;
  int r260 = strcmp(t258, t259);
  struct std__basic_ostream_char__std__char_traits_char__* r261 = std__ostream__operator__(r257, r260);
  char* cast262 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r263 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r261, cast262);
  int c264 = 2;
  struct std___Setw r265 = std__setw(c264);
  agg_tmp1231 = r265;
  struct std___Setw t266 = agg_tmp1231;
  struct std__basic_ostream_char__std__char_traits_char__* r267 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r263, t266);
  char* t268 = s1227;
  char* t269 = s3229;
  int r270 = strcmp(t268, t269);
  struct std__basic_ostream_char__std__char_traits_char__* r271 = std__ostream__operator__(r267, r270);
  char* cast272 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r273 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r271, cast272);
  int c274 = 2;
  struct std___Setw r275 = std__setw(c274);
  agg_tmp2232 = r275;
  struct std___Setw t276 = agg_tmp2232;
  struct std__basic_ostream_char__std__char_traits_char__* r277 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r273, t276);
  char* t278 = s3229;
  char* t279 = s1227;
  int r280 = strcmp(t278, t279);
  struct std__basic_ostream_char__std__char_traits_char__* r281 = std__ostream__operator__(r277, r280);
  char* cast282 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r283 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast282);
  int c284 = 2;
  struct std___Setw r285 = std__setw(c284);
  agg_tmp3233 = r285;
  struct std___Setw t286 = agg_tmp3233;
  struct std__basic_ostream_char__std__char_traits_char__* r287 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r283, t286);
  char* t288 = s1227;
  char* t289 = s3229;
  unsigned long c290 = 6;
  int r291 = strncmp(t288, t289, c290);
  struct std__basic_ostream_char__std__char_traits_char__* r292 = std__ostream__operator__(r287, r291);
  char* cast293 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r294 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r292, cast293);
  int c295 = 2;
  struct std___Setw r296 = std__setw(c295);
  agg_tmp4234 = r296;
  struct std___Setw t297 = agg_tmp4234;
  struct std__basic_ostream_char__std__char_traits_char__* r298 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r294, t297);
  char* t299 = s1227;
  char* t300 = s3229;
  unsigned long c301 = 7;
  int r302 = strncmp(t299, t300, c301);
  struct std__basic_ostream_char__std__char_traits_char__* r303 = std__ostream__operator__(r298, r302);
  char* cast304 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r305 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r303, cast304);
  int c306 = 2;
  struct std___Setw r307 = std__setw(c306);
  agg_tmp5235 = r307;
  struct std___Setw t308 = agg_tmp5235;
  struct std__basic_ostream_char__std__char_traits_char__* r309 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r305, t308);
  char* t310 = s3229;
  char* t311 = s1227;
  unsigned long c312 = 7;
  int r313 = strncmp(t310, t311, c312);
  struct std__basic_ostream_char__std__char_traits_char__* r314 = std__ostream__operator__(r309, r313);
  struct std__basic_ostream_char__std__char_traits_char__* r315 = std__ostream__operator___std__ostream_____(r314, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c316 = 0;
  __retval226 = c316;
  int t317 = __retval226;
  return t317;
}

