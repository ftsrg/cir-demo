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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base9boolalphaE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "Enter an integer: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[15] = "The result is ";
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_unsigned_int_(struct std__basic_istream_char__std__char_traits_char__* p0, unsigned int* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, unsigned int* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int std__operator__2(int p0, int p1);
int* std__operator__(int* p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__boolalpha(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_bool_(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
_Bool mystery(unsigned int p0);
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

// function: _ZNSirsERj
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v103, unsigned int* v104) {
bb105:
  struct std__basic_istream_char__std__char_traits_char__* this106;
  unsigned int* __n107;
  struct std__basic_istream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __n107 = v104;
  struct std__basic_istream_char__std__char_traits_char__* t109 = this106;
  unsigned int* t110 = __n107;
  struct std__basic_istream_char__std__char_traits_char__* r111 = std__istream__std__istream___M_extract_unsigned_int_(t109, t110);
  __retval108 = r111;
  struct std__basic_istream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v113, void* v114) {
bb115:
  struct std__basic_ostream_char__std__char_traits_char__* this116;
  void* __pf117;
  struct std__basic_ostream_char__std__char_traits_char__* __retval118;
  this116 = v113;
  __pf117 = v114;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = this116;
  void* t120 = __pf117;
  void** v121 = (void**)t119;
  void* v122 = *((void**)v121);
  unsigned char* cast123 = (unsigned char*)v122;
  long c124 = -24;
  unsigned char* ptr125 = &(cast123)[c124];
  long* cast126 = (long*)ptr125;
  long t127 = *cast126;
  unsigned char* cast128 = (unsigned char*)t119;
  unsigned char* ptr129 = &(cast128)[t127];
  struct std__basic_ostream_char__std__char_traits_char__* cast130 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr129;
  struct std__ios_base* cast131 = (struct std__ios_base*)cast130;
  struct std__ios_base* r132 = ((struct std__ios_base* (*)(struct std__ios_base*))t120)(cast131);
  __retval118 = t119;
  struct std__basic_ostream_char__std__char_traits_char__* t133 = __retval118;
  return t133;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__2(int v134, int v135) {
bb136:
  int __a137;
  int __b138;
  int __retval139;
  __a137 = v134;
  __b138 = v135;
  int t140 = __a137;
  int t141 = __b138;
  int b142 = t140 | t141;
  __retval139 = b142;
  int t143 = __retval139;
  return t143;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator__(int* v144, int v145) {
bb146:
  int* __a147;
  int __b148;
  int* __retval149;
  __a147 = v144;
  __b148 = v145;
  int* t150 = __a147;
  int t151 = *t150;
  int t152 = __b148;
  int r153 = std__operator__2(t151, t152);
  int* t154 = __a147;
  *t154 = r153;
  __retval149 = t154;
  int* t155 = __retval149;
  return t155;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v156, int v157) {
bb158:
  struct std__ios_base* this159;
  int __fmtfl160;
  int __retval161;
  int __old162;
  this159 = v156;
  __fmtfl160 = v157;
  struct std__ios_base* t163 = this159;
  int t164 = t163->_M_flags;
  __old162 = t164;
  int t165 = __fmtfl160;
  int* r166 = std__operator__(&t163->_M_flags, t165);
  int t167 = __old162;
  __retval161 = t167;
  int t168 = __retval161;
  return t168;
}

// function: _ZSt9boolalphaRSt8ios_base
struct std__ios_base* std__boolalpha(struct std__ios_base* v169) {
bb170:
  struct std__ios_base* __base171;
  struct std__ios_base* __retval172;
  __base171 = v169;
  struct std__ios_base* t173 = __base171;
  int t174 = _ZNSt8ios_base9boolalphaE_const;
  int r175 = std__ios_base__setf(t173, t174);
  struct std__ios_base* t176 = __base171;
  __retval172 = t176;
  struct std__ios_base* t177 = __retval172;
  return t177;
}

// function: _ZNSolsEb
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v178, _Bool v179) {
bb180:
  struct std__basic_ostream_char__std__char_traits_char__* this181;
  _Bool __n182;
  struct std__basic_ostream_char__std__char_traits_char__* __retval183;
  this181 = v178;
  __n182 = v179;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = this181;
  _Bool t185 = __n182;
  struct std__basic_ostream_char__std__char_traits_char__* r186 = std__ostream__std__ostream___M_insert_bool_(t184, t185);
  __retval183 = r186;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __retval183;
  return t187;
}

// function: _Z7mysteryj
_Bool mystery(unsigned int v188) {
bb189:
  unsigned int bits190;
  _Bool __retval191;
  int SHIFT192;
  unsigned int MASK193;
  unsigned int total194;
  bits190 = v188;
  int c195 = 31;
  SHIFT192 = c195;
  unsigned int c196 = -2147483648;
  MASK193 = c196;
  unsigned int c197 = 0;
  total194 = c197;
    int i198;
    int c199 = 0;
    i198 = c199;
    while (1) {
      int t201 = i198;
      int t202 = SHIFT192;
      int c203 = 1;
      int b204 = t202 + c203;
      _Bool c205 = ((t201 < b204)) ? 1 : 0;
      if (!c205) break;
        unsigned int t206 = bits190;
        unsigned int t207 = MASK193;
        unsigned int b208 = t206 & t207;
        unsigned int t209 = MASK193;
        _Bool c210 = ((b208 == t209)) ? 1 : 0;
        if (c210) {
          unsigned int t211 = total194;
          unsigned int u212 = t211 + 1;
          total194 = u212;
        }
    for_step200: ;
      int t213 = i198;
      int u214 = t213 + 1;
      i198 = u214;
      int c215 = 1;
      unsigned int t216 = bits190;
      unsigned int s217 = t216 << c215;
      bits190 = s217;
    }
  unsigned int t218 = total194;
  unsigned int c219 = 2;
  unsigned int b220 = t218 % c219;
  _Bool cast221 = (_Bool)b220;
  _Bool u222 = !cast221;
  __retval191 = u222;
  _Bool t223 = __retval191;
  return t223;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v224, void* v225) {
bb226:
  struct std__basic_ostream_char__std__char_traits_char__* this227;
  void* __pf228;
  struct std__basic_ostream_char__std__char_traits_char__* __retval229;
  this227 = v224;
  __pf228 = v225;
  struct std__basic_ostream_char__std__char_traits_char__* t230 = this227;
  void* t231 = __pf228;
  struct std__basic_ostream_char__std__char_traits_char__* r232 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t231)(t230);
  __retval229 = r232;
  struct std__basic_ostream_char__std__char_traits_char__* t233 = __retval229;
  return t233;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v234) {
bb235:
  struct std__basic_ostream_char__std__char_traits_char__* __os236;
  struct std__basic_ostream_char__std__char_traits_char__* __retval237;
  __os236 = v234;
  struct std__basic_ostream_char__std__char_traits_char__* t238 = __os236;
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__ostream__flush(t238);
  __retval237 = r239;
  struct std__basic_ostream_char__std__char_traits_char__* t240 = __retval237;
  return t240;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v241) {
bb242:
  struct std__ctype_char_* __f243;
  struct std__ctype_char_* __retval244;
  __f243 = v241;
    struct std__ctype_char_* t245 = __f243;
    _Bool cast246 = (_Bool)t245;
    _Bool u247 = !cast246;
    if (u247) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t248 = __f243;
  __retval244 = t248;
  struct std__ctype_char_* t249 = __retval244;
  return t249;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v250, char v251) {
bb252:
  struct std__ctype_char_* this253;
  char __c254;
  char __retval255;
  this253 = v250;
  __c254 = v251;
  struct std__ctype_char_* t256 = this253;
    char t257 = t256->_M_widen_ok;
    _Bool cast258 = (_Bool)t257;
    if (cast258) {
      char t259 = __c254;
      unsigned char cast260 = (unsigned char)t259;
      unsigned long cast261 = (unsigned long)cast260;
      char t262 = t256->_M_widen[cast261];
      __retval255 = t262;
      char t263 = __retval255;
      return t263;
    }
  std__ctype_char____M_widen_init___const(t256);
  char t264 = __c254;
  void** v265 = (void**)t256;
  void* v266 = *((void**)v265);
  char vcall269 = (char)__VERIFIER_virtual_call_char_char(t256, 6, t264);
  __retval255 = vcall269;
  char t270 = __retval255;
  return t270;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v271, char v272) {
bb273:
  struct std__basic_ios_char__std__char_traits_char__* this274;
  char __c275;
  char __retval276;
  this274 = v271;
  __c275 = v272;
  struct std__basic_ios_char__std__char_traits_char__* t277 = this274;
  struct std__ctype_char_* t278 = t277->_M_ctype;
  struct std__ctype_char_* r279 = std__ctype_char__const__std____check_facet_std__ctype_char___(t278);
  char t280 = __c275;
  char r281 = std__ctype_char___widen_char__const(r279, t280);
  __retval276 = r281;
  char t282 = __retval276;
  return t282;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v283) {
bb284:
  struct std__basic_ostream_char__std__char_traits_char__* __os285;
  struct std__basic_ostream_char__std__char_traits_char__* __retval286;
  __os285 = v283;
  struct std__basic_ostream_char__std__char_traits_char__* t287 = __os285;
  struct std__basic_ostream_char__std__char_traits_char__* t288 = __os285;
  void** v289 = (void**)t288;
  void* v290 = *((void**)v289);
  unsigned char* cast291 = (unsigned char*)v290;
  long c292 = -24;
  unsigned char* ptr293 = &(cast291)[c292];
  long* cast294 = (long*)ptr293;
  long t295 = *cast294;
  unsigned char* cast296 = (unsigned char*)t288;
  unsigned char* ptr297 = &(cast296)[t295];
  struct std__basic_ostream_char__std__char_traits_char__* cast298 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr297;
  struct std__basic_ios_char__std__char_traits_char__* cast299 = (struct std__basic_ios_char__std__char_traits_char__*)cast298;
  char c300 = 10;
  char r301 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast299, c300);
  struct std__basic_ostream_char__std__char_traits_char__* r302 = std__ostream__put(t287, r301);
  struct std__basic_ostream_char__std__char_traits_char__* r303 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r302);
  __retval286 = r303;
  struct std__basic_ostream_char__std__char_traits_char__* t304 = __retval286;
  return t304;
}

// function: main
int main() {
bb305:
  int __retval306;
  unsigned int x307;
  int c308 = 0;
  __retval306 = c308;
  char* cast309 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r310 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast309);
  struct std__basic_istream_char__std__char_traits_char__* r311 = std__istream__operator__(&_ZSt3cin, &x307);
  struct std__basic_ostream_char__std__char_traits_char__* r312 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__boolalpha);
  char* cast313 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r314 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r312, cast313);
  unsigned int t315 = x307;
  _Bool r316 = mystery(t315);
  struct std__basic_ostream_char__std__char_traits_char__* r317 = std__ostream__operator__(r314, r316);
  struct std__basic_ostream_char__std__char_traits_char__* r318 = std__ostream__operator___std__ostream_____(r317, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c319 = 0;
  __retval306 = c319;
  int t320 = __retval306;
  return t320;
}

