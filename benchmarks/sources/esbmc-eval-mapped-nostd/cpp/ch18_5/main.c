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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[39] = "The result of combining the following\n";
char _str_1[37] = "using the bitwise AND operator & is\n";
char _str_2[40] = "\nThe result of combining the following\n";
char _str_3[46] = "using the bitwise inclusive OR operator | is\n";
char _str_4[46] = "using the bitwise exclusive OR operator ^ is\n";
char _str_5[26] = "\nThe one's complement of\n";
char _str_6[3] = "is";
char _str_7[4] = " = ";
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned int p1);
long std__ios_base__width___const(struct std__ios_base* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
void displayBits(unsigned int p0);
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

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v103, long v104) {
bb105:
  struct std__ios_base* this106;
  long __wide107;
  long __retval108;
  long __old109;
  this106 = v103;
  __wide107 = v104;
  struct std__ios_base* t110 = this106;
  long t111 = t110->_M_width;
  __old109 = t111;
  long t112 = __wide107;
  t110->_M_width = t112;
  long t113 = __old109;
  __retval108 = t113;
  long t114 = __retval108;
  return t114;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v115, struct std___Setw v116) {
bb117:
  struct std__basic_ostream_char__std__char_traits_char__* __os118;
  struct std___Setw __f119;
  struct std__basic_ostream_char__std__char_traits_char__* __retval120;
  __os118 = v115;
  __f119 = v116;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = __os118;
  void** v122 = (void**)t121;
  void* v123 = *((void**)v122);
  unsigned char* cast124 = (unsigned char*)v123;
  long c125 = -24;
  unsigned char* ptr126 = &(cast124)[c125];
  long* cast127 = (long*)ptr126;
  long t128 = *cast127;
  unsigned char* cast129 = (unsigned char*)t121;
  unsigned char* ptr130 = &(cast129)[t128];
  struct std__basic_ostream_char__std__char_traits_char__* cast131 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr130;
  struct std__ios_base* cast132 = (struct std__ios_base*)cast131;
  int t133 = __f119._M_n;
  long cast134 = (long)t133;
  long r135 = std__ios_base__width(cast132, cast134);
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __os118;
  __retval120 = t136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval120;
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

// function: _ZNSolsEj
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v144, unsigned int v145) {
bb146:
  struct std__basic_ostream_char__std__char_traits_char__* this147;
  unsigned int __n148;
  struct std__basic_ostream_char__std__char_traits_char__* __retval149;
  this147 = v144;
  __n148 = v145;
  struct std__basic_ostream_char__std__char_traits_char__* t150 = this147;
  unsigned int t151 = __n148;
  unsigned long cast152 = (unsigned long)t151;
  struct std__basic_ostream_char__std__char_traits_char__* r153 = std__ostream__std__ostream___M_insert_unsigned_long_(t150, cast152);
  __retval149 = r153;
  struct std__basic_ostream_char__std__char_traits_char__* t154 = __retval149;
  return t154;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v155) {
bb156:
  struct std__ios_base* this157;
  long __retval158;
  this157 = v155;
  struct std__ios_base* t159 = this157;
  long t160 = t159->_M_width;
  __retval158 = t160;
  long t161 = __retval158;
  return t161;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v162, char v163) {
bb164:
  struct std__basic_ostream_char__std__char_traits_char__* __out165;
  char __c166;
  struct std__basic_ostream_char__std__char_traits_char__* __retval167;
  __out165 = v162;
  __c166 = v163;
    struct std__basic_ostream_char__std__char_traits_char__* t168 = __out165;
    void** v169 = (void**)t168;
    void* v170 = *((void**)v169);
    unsigned char* cast171 = (unsigned char*)v170;
    long c172 = -24;
    unsigned char* ptr173 = &(cast171)[c172];
    long* cast174 = (long*)ptr173;
    long t175 = *cast174;
    unsigned char* cast176 = (unsigned char*)t168;
    unsigned char* ptr177 = &(cast176)[t175];
    struct std__basic_ostream_char__std__char_traits_char__* cast178 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr177;
    struct std__ios_base* cast179 = (struct std__ios_base*)cast178;
    long r180 = std__ios_base__width___const(cast179);
    long c181 = 0;
    _Bool c182 = ((r180 != c181)) ? 1 : 0;
    if (c182) {
      struct std__basic_ostream_char__std__char_traits_char__* t183 = __out165;
      long c184 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r185 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t183, &__c166, c184);
      __retval167 = r185;
      struct std__basic_ostream_char__std__char_traits_char__* t186 = __retval167;
      return t186;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __out165;
  char t188 = __c166;
  struct std__basic_ostream_char__std__char_traits_char__* r189 = std__ostream__put(t187, t188);
  struct std__basic_ostream_char__std__char_traits_char__* t190 = __out165;
  __retval167 = t190;
  struct std__basic_ostream_char__std__char_traits_char__* t191 = __retval167;
  return t191;
}

// function: _Z11displayBitsj
void displayBits(unsigned int v192) {
bb193:
  unsigned int value194;
  int SHIFT195;
  unsigned int MASK196;
  struct std___Setw agg_tmp0197;
  value194 = v192;
  int c198 = 31;
  SHIFT195 = c198;
  unsigned int c199 = -2147483648;
  MASK196 = c199;
  int c200 = 10;
  struct std___Setw r201 = std__setw(c200);
  agg_tmp0197 = r201;
  struct std___Setw t202 = agg_tmp0197;
  struct std__basic_ostream_char__std__char_traits_char__* r203 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t202);
  unsigned int t204 = value194;
  struct std__basic_ostream_char__std__char_traits_char__* r205 = std__ostream__operator__(r203, t204);
  char* cast206 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r207 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r205, cast206);
    unsigned int i208;
    unsigned int c209 = 1;
    i208 = c209;
    while (1) {
      unsigned int t211 = i208;
      int t212 = SHIFT195;
      int c213 = 1;
      int b214 = t212 + c213;
      unsigned int cast215 = (unsigned int)b214;
      _Bool c216 = ((t211 <= cast215)) ? 1 : 0;
      if (!c216) break;
        unsigned int t217 = value194;
        unsigned int t218 = MASK196;
        unsigned int b219 = t217 & t218;
        _Bool cast220 = (_Bool)b219;
        char c221 = 49;
        char c222 = 48;
        char sel223 = cast220 ? c221 : c222;
        struct std__basic_ostream_char__std__char_traits_char__* r224 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, sel223);
        int c225 = 1;
        unsigned int t226 = value194;
        unsigned int s227 = t226 << c225;
        value194 = s227;
          unsigned int t228 = i208;
          unsigned int c229 = 8;
          unsigned int b230 = t228 % c229;
          unsigned int c231 = 0;
          _Bool c232 = ((b230 == c231)) ? 1 : 0;
          if (c232) {
            char c233 = 32;
            struct std__basic_ostream_char__std__char_traits_char__* r234 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, c233);
          }
    for_step210: ;
      unsigned int t235 = i208;
      unsigned int u236 = t235 + 1;
      i208 = u236;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r237 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v238, void* v239) {
bb240:
  struct std__basic_ostream_char__std__char_traits_char__* this241;
  void* __pf242;
  struct std__basic_ostream_char__std__char_traits_char__* __retval243;
  this241 = v238;
  __pf242 = v239;
  struct std__basic_ostream_char__std__char_traits_char__* t244 = this241;
  void* t245 = __pf242;
  struct std__basic_ostream_char__std__char_traits_char__* r246 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t245)(t244);
  __retval243 = r246;
  struct std__basic_ostream_char__std__char_traits_char__* t247 = __retval243;
  return t247;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v248) {
bb249:
  struct std__basic_ostream_char__std__char_traits_char__* __os250;
  struct std__basic_ostream_char__std__char_traits_char__* __retval251;
  __os250 = v248;
  struct std__basic_ostream_char__std__char_traits_char__* t252 = __os250;
  struct std__basic_ostream_char__std__char_traits_char__* r253 = std__ostream__flush(t252);
  __retval251 = r253;
  struct std__basic_ostream_char__std__char_traits_char__* t254 = __retval251;
  return t254;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v255) {
bb256:
  struct std__ctype_char_* __f257;
  struct std__ctype_char_* __retval258;
  __f257 = v255;
    struct std__ctype_char_* t259 = __f257;
    _Bool cast260 = (_Bool)t259;
    _Bool u261 = !cast260;
    if (u261) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t262 = __f257;
  __retval258 = t262;
  struct std__ctype_char_* t263 = __retval258;
  return t263;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v264, char v265) {
bb266:
  struct std__ctype_char_* this267;
  char __c268;
  char __retval269;
  this267 = v264;
  __c268 = v265;
  struct std__ctype_char_* t270 = this267;
    char t271 = t270->_M_widen_ok;
    _Bool cast272 = (_Bool)t271;
    if (cast272) {
      char t273 = __c268;
      unsigned char cast274 = (unsigned char)t273;
      unsigned long cast275 = (unsigned long)cast274;
      char t276 = t270->_M_widen[cast275];
      __retval269 = t276;
      char t277 = __retval269;
      return t277;
    }
  std__ctype_char____M_widen_init___const(t270);
  char t278 = __c268;
  void** v279 = (void**)t270;
  void* v280 = *((void**)v279);
  char vcall283 = (char)__VERIFIER_virtual_call_char_char(t270, 6, t278);
  __retval269 = vcall283;
  char t284 = __retval269;
  return t284;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v285, char v286) {
bb287:
  struct std__basic_ios_char__std__char_traits_char__* this288;
  char __c289;
  char __retval290;
  this288 = v285;
  __c289 = v286;
  struct std__basic_ios_char__std__char_traits_char__* t291 = this288;
  struct std__ctype_char_* t292 = t291->_M_ctype;
  struct std__ctype_char_* r293 = std__ctype_char__const__std____check_facet_std__ctype_char___(t292);
  char t294 = __c289;
  char r295 = std__ctype_char___widen_char__const(r293, t294);
  __retval290 = r295;
  char t296 = __retval290;
  return t296;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v297) {
bb298:
  struct std__basic_ostream_char__std__char_traits_char__* __os299;
  struct std__basic_ostream_char__std__char_traits_char__* __retval300;
  __os299 = v297;
  struct std__basic_ostream_char__std__char_traits_char__* t301 = __os299;
  struct std__basic_ostream_char__std__char_traits_char__* t302 = __os299;
  void** v303 = (void**)t302;
  void* v304 = *((void**)v303);
  unsigned char* cast305 = (unsigned char*)v304;
  long c306 = -24;
  unsigned char* ptr307 = &(cast305)[c306];
  long* cast308 = (long*)ptr307;
  long t309 = *cast308;
  unsigned char* cast310 = (unsigned char*)t302;
  unsigned char* ptr311 = &(cast310)[t309];
  struct std__basic_ostream_char__std__char_traits_char__* cast312 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr311;
  struct std__basic_ios_char__std__char_traits_char__* cast313 = (struct std__basic_ios_char__std__char_traits_char__*)cast312;
  char c314 = 10;
  char r315 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast313, c314);
  struct std__basic_ostream_char__std__char_traits_char__* r316 = std__ostream__put(t301, r315);
  struct std__basic_ostream_char__std__char_traits_char__* r317 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r316);
  __retval300 = r317;
  struct std__basic_ostream_char__std__char_traits_char__* t318 = __retval300;
  return t318;
}

// function: main
int main() {
bb319:
  int __retval320;
  unsigned int number1321;
  unsigned int number2322;
  unsigned int mask323;
  unsigned int setBits324;
  int c325 = 0;
  __retval320 = c325;
  unsigned int c326 = -2115090941;
  number1321 = c326;
  unsigned int c327 = 1;
  mask323 = c327;
  char* cast328 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r329 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast328);
  unsigned int t330 = number1321;
  displayBits(t330);
  unsigned int t331 = mask323;
  displayBits(t331);
  char* cast332 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r333 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast332);
  unsigned int t334 = number1321;
  unsigned int t335 = mask323;
  unsigned int b336 = t334 & t335;
  displayBits(b336);
  unsigned int c337 = 15;
  number1321 = c337;
  unsigned int c338 = 241;
  setBits324 = c338;
  char* cast339 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r340 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast339);
  unsigned int t341 = number1321;
  displayBits(t341);
  unsigned int t342 = setBits324;
  displayBits(t342);
  char* cast343 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r344 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast343);
  unsigned int t345 = number1321;
  unsigned int t346 = setBits324;
  unsigned int b347 = t345 | t346;
  displayBits(b347);
  unsigned int c348 = 139;
  number1321 = c348;
  unsigned int c349 = 199;
  number2322 = c349;
  char* cast350 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r351 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast350);
  unsigned int t352 = number1321;
  displayBits(t352);
  unsigned int t353 = number2322;
  displayBits(t353);
  char* cast354 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r355 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast354);
  unsigned int t356 = number1321;
  unsigned int t357 = number2322;
  unsigned int b358 = t356 ^ t357;
  displayBits(b358);
  unsigned int c359 = 21845;
  number1321 = c359;
  char* cast360 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r361 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast360);
  unsigned int t362 = number1321;
  displayBits(t362);
  char* cast363 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r364 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast363);
  struct std__basic_ostream_char__std__char_traits_char__* r365 = std__ostream__operator___std__ostream_____(r364, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  unsigned int t366 = number1321;
  unsigned int u367 = ~t366;
  displayBits(u367);
  int c368 = 0;
  __retval320 = c368;
  int t369 = __retval320;
  return t369;
}

