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
struct std___Setbase { int _M_base; };
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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3octE_const __attribute__((aligned(4))) = 64;
int _ZNSt8ios_base3decE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base9basefieldE_const __attribute__((aligned(4))) = 74;
int _ZNSt8ios_base3hexE_const __attribute__((aligned(4))) = 8;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "Enter a decimal number: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[21] = " in hexadecimal is: ";
char _str_2[15] = " in octal is: ";
char _str_3[17] = " in decimal is: ";
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__hex(struct std__ios_base* p0);
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
struct std__ios_base* std__dec(struct std__ios_base* p0);
struct std__ios_base* std__oct(struct std__ios_base* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setbase p1);
struct std___Setbase std__setbase(int p0);
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

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v124, int v125) {
bb126:
  int* __a127;
  int __b128;
  int* __retval129;
  __a127 = v124;
  __b128 = v125;
  int* t130 = __a127;
  int t131 = *t130;
  int t132 = __b128;
  int r133 = std__operator_(t131, t132);
  int* t134 = __a127;
  *t134 = r133;
  __retval129 = t134;
  int* t135 = __retval129;
  return t135;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v136) {
bb137:
  int __a138;
  int __retval139;
  __a138 = v136;
  int t140 = __a138;
  int u141 = ~t140;
  __retval139 = u141;
  int t142 = __retval139;
  return t142;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v143, int v144) {
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

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v153, int v154) {
bb155:
  int* __a156;
  int __b157;
  int* __retval158;
  __a156 = v153;
  __b157 = v154;
  int* t159 = __a156;
  int t160 = *t159;
  int t161 = __b157;
  int r162 = std__operator__4(t160, t161);
  int* t163 = __a156;
  *t163 = r162;
  __retval158 = t163;
  int* t164 = __retval158;
  return t164;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v165, int v166) {
bb167:
  int __a168;
  int __b169;
  int __retval170;
  __a168 = v165;
  __b169 = v166;
  int t171 = __a168;
  int t172 = __b169;
  int b173 = t171 & t172;
  __retval170 = b173;
  int t174 = __retval170;
  return t174;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v175, int v176, int v177) {
bb178:
  struct std__ios_base* this179;
  int __fmtfl180;
  int __mask181;
  int __retval182;
  int __old183;
  this179 = v175;
  __fmtfl180 = v176;
  __mask181 = v177;
  struct std__ios_base* t184 = this179;
  int t185 = t184->_M_flags;
  __old183 = t185;
  int t186 = __mask181;
  int r187 = std__operator__2(t186);
  int* r188 = std__operator__(&t184->_M_flags, r187);
  int t189 = __fmtfl180;
  int t190 = __mask181;
  int r191 = std__operator_(t189, t190);
  int* r192 = std__operator___2(&t184->_M_flags, r191);
  int t193 = __old183;
  __retval182 = t193;
  int t194 = __retval182;
  return t194;
}

// function: _ZSt3hexRSt8ios_base
struct std__ios_base* std__hex(struct std__ios_base* v195) {
bb196:
  struct std__ios_base* __base197;
  struct std__ios_base* __retval198;
  __base197 = v195;
  struct std__ios_base* t199 = __base197;
  int t200 = _ZNSt8ios_base3hexE_const;
  int t201 = _ZNSt8ios_base9basefieldE_const;
  int r202 = std__ios_base__setf(t199, t200, t201);
  struct std__ios_base* t203 = __base197;
  __retval198 = t203;
  struct std__ios_base* t204 = __retval198;
  return t204;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v205, void* v206) {
bb207:
  struct std__basic_ostream_char__std__char_traits_char__* this208;
  void* __pf209;
  struct std__basic_ostream_char__std__char_traits_char__* __retval210;
  this208 = v205;
  __pf209 = v206;
  struct std__basic_ostream_char__std__char_traits_char__* t211 = this208;
  void* t212 = __pf209;
  struct std__basic_ostream_char__std__char_traits_char__* r213 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t212)(t211);
  __retval210 = r213;
  struct std__basic_ostream_char__std__char_traits_char__* t214 = __retval210;
  return t214;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v215) {
bb216:
  struct std__basic_ostream_char__std__char_traits_char__* __os217;
  struct std__basic_ostream_char__std__char_traits_char__* __retval218;
  __os217 = v215;
  struct std__basic_ostream_char__std__char_traits_char__* t219 = __os217;
  struct std__basic_ostream_char__std__char_traits_char__* r220 = std__ostream__flush(t219);
  __retval218 = r220;
  struct std__basic_ostream_char__std__char_traits_char__* t221 = __retval218;
  return t221;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v222) {
bb223:
  struct std__ctype_char_* __f224;
  struct std__ctype_char_* __retval225;
  __f224 = v222;
    struct std__ctype_char_* t226 = __f224;
    _Bool cast227 = (_Bool)t226;
    _Bool u228 = !cast227;
    if (u228) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t229 = __f224;
  __retval225 = t229;
  struct std__ctype_char_* t230 = __retval225;
  return t230;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v231, char v232) {
bb233:
  struct std__ctype_char_* this234;
  char __c236;
  char __retval237;
  this234 = v231;
  __c236 = v232;
  struct std__ctype_char_* t238 = this234;
    char t239 = t238->_M_widen_ok;
    _Bool cast240 = (_Bool)t239;
    if (cast240) {
      char t241 = __c236;
      unsigned char cast242 = (unsigned char)t241;
      unsigned long cast243 = (unsigned long)cast242;
      char t244 = t238->_M_widen[cast243];
      __retval237 = t244;
      char t245 = __retval237;
      return t245;
    }
  std__ctype_char____M_widen_init___const(t238);
  char t246 = __c236;
  void** v247 = (void**)t238;
  void* v248 = *((void**)v247);
  char vcall251 = (char)__VERIFIER_virtual_call_char_char(t238, 6, t246);
  __retval237 = vcall251;
  char t252 = __retval237;
  return t252;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v253, char v254) {
bb255:
  struct std__basic_ios_char__std__char_traits_char__* this256;
  char __c257;
  char __retval258;
  this256 = v253;
  __c257 = v254;
  struct std__basic_ios_char__std__char_traits_char__* t259 = this256;
  struct std__ctype_char_* t260 = t259->_M_ctype;
  struct std__ctype_char_* r261 = std__ctype_char__const__std____check_facet_std__ctype_char___(t260);
  char t262 = __c257;
  char r263 = std__ctype_char___widen_char__const(r261, t262);
  __retval258 = r263;
  char t264 = __retval258;
  return t264;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v265) {
bb266:
  struct std__basic_ostream_char__std__char_traits_char__* __os267;
  struct std__basic_ostream_char__std__char_traits_char__* __retval268;
  __os267 = v265;
  struct std__basic_ostream_char__std__char_traits_char__* t269 = __os267;
  struct std__basic_ostream_char__std__char_traits_char__* t270 = __os267;
  void** v271 = (void**)t270;
  void* v272 = *((void**)v271);
  unsigned char* cast273 = (unsigned char*)v272;
  long c274 = -24;
  unsigned char* ptr275 = &(cast273)[c274];
  long* cast276 = (long*)ptr275;
  long t277 = *cast276;
  unsigned char* cast278 = (unsigned char*)t270;
  unsigned char* ptr279 = &(cast278)[t277];
  struct std__basic_ostream_char__std__char_traits_char__* cast280 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr279;
  struct std__basic_ios_char__std__char_traits_char__* cast281 = (struct std__basic_ios_char__std__char_traits_char__*)cast280;
  char c282 = 10;
  char r283 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast281, c282);
  struct std__basic_ostream_char__std__char_traits_char__* r284 = std__ostream__put(t269, r283);
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r284);
  __retval268 = r285;
  struct std__basic_ostream_char__std__char_traits_char__* t286 = __retval268;
  return t286;
}

// function: _ZSt3decRSt8ios_base
struct std__ios_base* std__dec(struct std__ios_base* v287) {
bb288:
  struct std__ios_base* __base289;
  struct std__ios_base* __retval290;
  __base289 = v287;
  struct std__ios_base* t291 = __base289;
  int t292 = _ZNSt8ios_base3decE_const;
  int t293 = _ZNSt8ios_base9basefieldE_const;
  int r294 = std__ios_base__setf(t291, t292, t293);
  struct std__ios_base* t295 = __base289;
  __retval290 = t295;
  struct std__ios_base* t296 = __retval290;
  return t296;
}

// function: _ZSt3octRSt8ios_base
struct std__ios_base* std__oct(struct std__ios_base* v297) {
bb298:
  struct std__ios_base* __base299;
  struct std__ios_base* __retval300;
  __base299 = v297;
  struct std__ios_base* t301 = __base299;
  int t302 = _ZNSt8ios_base3octE_const;
  int t303 = _ZNSt8ios_base9basefieldE_const;
  int r304 = std__ios_base__setf(t301, t302, t303);
  struct std__ios_base* t305 = __base299;
  __retval300 = t305;
  struct std__ios_base* t306 = __retval300;
  return t306;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_Setbase
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v307, struct std___Setbase v308) {
bb309:
  struct std__basic_ostream_char__std__char_traits_char__* __os310;
  struct std___Setbase __f311;
  struct std__basic_ostream_char__std__char_traits_char__* __retval312;
  __os310 = v307;
  __f311 = v308;
  struct std__basic_ostream_char__std__char_traits_char__* t313 = __os310;
  void** v314 = (void**)t313;
  void* v315 = *((void**)v314);
  unsigned char* cast316 = (unsigned char*)v315;
  long c317 = -24;
  unsigned char* ptr318 = &(cast316)[c317];
  long* cast319 = (long*)ptr318;
  long t320 = *cast319;
  unsigned char* cast321 = (unsigned char*)t313;
  unsigned char* ptr322 = &(cast321)[t320];
  struct std__basic_ostream_char__std__char_traits_char__* cast323 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr322;
  struct std__ios_base* cast324 = (struct std__ios_base*)cast323;
  int t325 = __f311._M_base;
  int c326 = 8;
  _Bool c327 = ((t325 == c326)) ? 1 : 0;
  int ternary328;
  if (c327) {
    int t329 = _ZNSt8ios_base3octE_const;
    ternary328 = (int)t329;
  } else {
    int t330 = __f311._M_base;
    int c331 = 10;
    _Bool c332 = ((t330 == c331)) ? 1 : 0;
    int ternary333;
    if (c332) {
      int t334 = _ZNSt8ios_base3decE_const;
      ternary333 = (int)t334;
    } else {
      int t335 = __f311._M_base;
      int c336 = 16;
      _Bool c337 = ((t335 == c336)) ? 1 : 0;
      int t338 = _ZNSt8ios_base3hexE_const;
      int c339 = 0;
      int sel340 = c337 ? t338 : c339;
      ternary333 = (int)sel340;
    }
    ternary328 = (int)ternary333;
  }
  int t341 = _ZNSt8ios_base9basefieldE_const;
  int r342 = std__ios_base__setf(cast324, ternary328, t341);
  struct std__basic_ostream_char__std__char_traits_char__* t343 = __os310;
  __retval312 = t343;
  struct std__basic_ostream_char__std__char_traits_char__* t344 = __retval312;
  return t344;
}

// function: _ZSt7setbasei
struct std___Setbase std__setbase(int v345) {
bb346:
  int __base347;
  struct std___Setbase __retval348;
  __base347 = v345;
  int t349 = __base347;
  __retval348._M_base = t349;
  struct std___Setbase t350 = __retval348;
  return t350;
}

// function: main
int main() {
bb351:
  int __retval352;
  int number353;
  struct std___Setbase agg_tmp0354;
  int c355 = 0;
  __retval352 = c355;
  char* cast356 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r357 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast356);
  struct std__basic_istream_char__std__char_traits_char__* r358 = std__istream__operator__(&_ZSt3cin, &number353);
  int t359 = number353;
  struct std__basic_ostream_char__std__char_traits_char__* r360 = std__ostream__operator__(&_ZSt4cout, t359);
  char* cast361 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r360, cast361);
  struct std__basic_ostream_char__std__char_traits_char__* r363 = std__ostream__operator___std__ios_base_____(r362, &std__hex);
  int t364 = number353;
  struct std__basic_ostream_char__std__char_traits_char__* r365 = std__ostream__operator__(r363, t364);
  struct std__basic_ostream_char__std__char_traits_char__* r366 = std__ostream__operator___std__ostream_____(r365, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r367 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__dec);
  int t368 = number353;
  struct std__basic_ostream_char__std__char_traits_char__* r369 = std__ostream__operator__(r367, t368);
  char* cast370 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r371 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r369, cast370);
  struct std__basic_ostream_char__std__char_traits_char__* r372 = std__ostream__operator___std__ios_base_____(r371, &std__oct);
  int t373 = number353;
  struct std__basic_ostream_char__std__char_traits_char__* r374 = std__ostream__operator__(r372, t373);
  struct std__basic_ostream_char__std__char_traits_char__* r375 = std__ostream__operator___std__ostream_____(r374, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c376 = 10;
  struct std___Setbase r377 = std__setbase(c376);
  agg_tmp0354 = r377;
  struct std___Setbase t378 = agg_tmp0354;
  struct std__basic_ostream_char__std__char_traits_char__* r379 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t378);
  int t380 = number353;
  struct std__basic_ostream_char__std__char_traits_char__* r381 = std__ostream__operator__(r379, t380);
  char* cast382 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r383 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r381, cast382);
  int t384 = number353;
  struct std__basic_ostream_char__std__char_traits_char__* r385 = std__ostream__operator__(r383, t384);
  struct std__basic_ostream_char__std__char_traits_char__* r386 = std__ostream__operator___std__ostream_____(r385, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c387 = 0;
  __retval352 = c387;
  int t388 = __retval352;
  return t388;
}

