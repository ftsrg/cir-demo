extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct BitCard { unsigned char face; unsigned char __field1[3]; };
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
char _str[6] = "Card:";
char _str_1[8] = "  Suit:";
char _str_2[9] = "  Color:";
char _str_3[4] = "   ";
void fillDeck(struct BitCard* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned int p1);
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
void deal(struct BitCard* p0);
int main();

// function: _Z8fillDeckP7BitCard
void fillDeck(struct BitCard* v0) {
bb1:
  struct BitCard* wDeck2;
  wDeck2 = v0;
    int i3;
    int c4 = 0;
    i3 = c4;
    while (1) {
      int t6 = i3;
      int c7 = 51;
      _Bool c8 = ((t6 <= c7)) ? 1 : 0;
      if (!c8) break;
        int t9 = i3;
        int c10 = 13;
        int b11 = t9 % c10;
        unsigned int cast12 = (unsigned int)b11;
        int t13 = i3;
        long cast14 = (long)t13;
        struct BitCard* t15 = wDeck2;
        struct BitCard* ptr16 = &(t15)[cast14];
        unsigned long bf_st17 = (unsigned long)(ptr16->face);
        unsigned int bf18 = (unsigned int)(bf_st17 >> 0 & 15ULL);
        bf_st17 = bf_st17 & ~(15ULL << 0) | ((unsigned long)(cast12) & 15ULL) << 0;
        ptr16->face = bf_st17;
        int t19 = i3;
        int c20 = 13;
        int b21 = t19 / c20;
        unsigned int cast22 = (unsigned int)b21;
        int t23 = i3;
        long cast24 = (long)t23;
        struct BitCard* t25 = wDeck2;
        struct BitCard* ptr26 = &(t25)[cast24];
        unsigned long bf_st27 = (unsigned long)(ptr26->face);
        unsigned int bf28 = (unsigned int)(bf_st27 >> 4 & 3ULL);
        bf_st27 = bf_st27 & ~(3ULL << 4) | ((unsigned long)(cast22) & 3ULL) << 4;
        ptr26->face = bf_st27;
        int t29 = i3;
        int c30 = 26;
        int b31 = t29 / c30;
        unsigned int cast32 = (unsigned int)b31;
        int t33 = i3;
        long cast34 = (long)t33;
        struct BitCard* t35 = wDeck2;
        struct BitCard* ptr36 = &(t35)[cast34];
        unsigned long bf_st37 = (unsigned long)(ptr36->face);
        unsigned int bf38 = (unsigned int)(bf_st37 >> 6 & 1ULL);
        bf_st37 = bf_st37 & ~(1ULL << 6) | ((unsigned long)(cast32) & 1ULL) << 6;
        ptr36->face = bf_st37;
    for_step5: ;
      int t39 = i3;
      int u40 = t39 + 1;
      i3 = u40;
    }
  return;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v41, long v42) {
bb43:
  struct std__ios_base* this44;
  long __wide45;
  long __retval46;
  long __old47;
  this44 = v41;
  __wide45 = v42;
  struct std__ios_base* t48 = this44;
  long t49 = t48->_M_width;
  __old47 = t49;
  long t50 = __wide45;
  t48->_M_width = t50;
  long t51 = __old47;
  __retval46 = t51;
  long t52 = __retval46;
  return t52;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v53, struct std___Setw v54) {
bb55:
  struct std__basic_ostream_char__std__char_traits_char__* __os56;
  struct std___Setw __f57;
  struct std__basic_ostream_char__std__char_traits_char__* __retval58;
  __os56 = v53;
  __f57 = v54;
  struct std__basic_ostream_char__std__char_traits_char__* t59 = __os56;
  void** v60 = (void**)t59;
  void* v61 = *((void**)v60);
  unsigned char* cast62 = (unsigned char*)v61;
  long c63 = -24;
  unsigned char* ptr64 = &(cast62)[c63];
  long* cast65 = (long*)ptr64;
  long t66 = *cast65;
  unsigned char* cast67 = (unsigned char*)t59;
  unsigned char* ptr68 = &(cast67)[t66];
  struct std__basic_ostream_char__std__char_traits_char__* cast69 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr68;
  struct std__ios_base* cast70 = (struct std__ios_base*)cast69;
  int t71 = __f57._M_n;
  long cast72 = (long)t71;
  long r73 = std__ios_base__width(cast70, cast72);
  struct std__basic_ostream_char__std__char_traits_char__* t74 = __os56;
  __retval58 = t74;
  struct std__basic_ostream_char__std__char_traits_char__* t75 = __retval58;
  return t75;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v76, int v77) {
bb78:
  int __a79;
  int __b80;
  int __retval81;
  __a79 = v76;
  __b80 = v77;
  int t82 = __a79;
  int t83 = __b80;
  int b84 = t82 | t83;
  __retval81 = b84;
  int t85 = __retval81;
  return t85;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v86) {
bb87:
  struct std__basic_ios_char__std__char_traits_char__* this88;
  int __retval89;
  this88 = v86;
  struct std__basic_ios_char__std__char_traits_char__* t90 = this88;
  struct std__ios_base* base91 = (struct std__ios_base*)((char *)t90 + 0);
  int t92 = base91->_M_streambuf_state;
  __retval89 = t92;
  int t93 = __retval89;
  return t93;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v94, int v95) {
bb96:
  struct std__basic_ios_char__std__char_traits_char__* this97;
  int __state98;
  this97 = v94;
  __state98 = v95;
  struct std__basic_ios_char__std__char_traits_char__* t99 = this97;
  int r100 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t99);
  int t101 = __state98;
  int r102 = std__operator_(r100, t101);
  std__basic_ios_char__std__char_traits_char_____clear(t99, r102);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb103:
  _Bool __retval104;
    _Bool c105 = 0;
    __retval104 = c105;
    _Bool t106 = __retval104;
    return t106;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v107, char* v108) {
bb109:
  char* __c1110;
  char* __c2111;
  _Bool __retval112;
  __c1110 = v107;
  __c2111 = v108;
  char* t113 = __c1110;
  char t114 = *t113;
  int cast115 = (int)t114;
  char* t116 = __c2111;
  char t117 = *t116;
  int cast118 = (int)t117;
  _Bool c119 = ((cast115 == cast118)) ? 1 : 0;
  __retval112 = c119;
  _Bool t120 = __retval112;
  return t120;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v121) {
bb122:
  char* __p123;
  unsigned long __retval124;
  unsigned long __i125;
  __p123 = v121;
  unsigned long c126 = 0;
  __i125 = c126;
    char ref_tmp0127;
    while (1) {
      unsigned long t128 = __i125;
      char* t129 = __p123;
      char* ptr130 = &(t129)[t128];
      char c131 = 0;
      ref_tmp0127 = c131;
      _Bool r132 = __gnu_cxx__char_traits_char___eq(ptr130, &ref_tmp0127);
      _Bool u133 = !r132;
      if (!u133) break;
      unsigned long t134 = __i125;
      unsigned long u135 = t134 + 1;
      __i125 = u135;
    }
  unsigned long t136 = __i125;
  __retval124 = t136;
  unsigned long t137 = __retval124;
  return t137;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v138) {
bb139:
  char* __s140;
  unsigned long __retval141;
  __s140 = v138;
    _Bool r142 = std____is_constant_evaluated();
    if (r142) {
      char* t143 = __s140;
      unsigned long r144 = __gnu_cxx__char_traits_char___length(t143);
      __retval141 = r144;
      unsigned long t145 = __retval141;
      return t145;
    }
  char* t146 = __s140;
  unsigned long r147 = strlen(t146);
  __retval141 = r147;
  unsigned long t148 = __retval141;
  return t148;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v149, char* v150) {
bb151:
  struct std__basic_ostream_char__std__char_traits_char__* __out152;
  char* __s153;
  struct std__basic_ostream_char__std__char_traits_char__* __retval154;
  __out152 = v149;
  __s153 = v150;
    char* t155 = __s153;
    _Bool cast156 = (_Bool)t155;
    _Bool u157 = !cast156;
    if (u157) {
      struct std__basic_ostream_char__std__char_traits_char__* t158 = __out152;
      void** v159 = (void**)t158;
      void* v160 = *((void**)v159);
      unsigned char* cast161 = (unsigned char*)v160;
      long c162 = -24;
      unsigned char* ptr163 = &(cast161)[c162];
      long* cast164 = (long*)ptr163;
      long t165 = *cast164;
      unsigned char* cast166 = (unsigned char*)t158;
      unsigned char* ptr167 = &(cast166)[t165];
      struct std__basic_ostream_char__std__char_traits_char__* cast168 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr167;
      struct std__basic_ios_char__std__char_traits_char__* cast169 = (struct std__basic_ios_char__std__char_traits_char__*)cast168;
      int t170 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast169, t170);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t171 = __out152;
      char* t172 = __s153;
      char* t173 = __s153;
      unsigned long r174 = std__char_traits_char___length(t173);
      long cast175 = (long)r174;
      struct std__basic_ostream_char__std__char_traits_char__* r176 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t171, t172, cast175);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __out152;
  __retval154 = t177;
  struct std__basic_ostream_char__std__char_traits_char__* t178 = __retval154;
  return t178;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v179) {
bb180:
  int __n181;
  struct std___Setw __retval182;
  __n181 = v179;
  int t183 = __n181;
  __retval182._M_n = t183;
  struct std___Setw t184 = __retval182;
  return t184;
}

// function: _ZNSolsEj
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v185, unsigned int v186) {
bb187:
  struct std__basic_ostream_char__std__char_traits_char__* this188;
  unsigned int __n189;
  struct std__basic_ostream_char__std__char_traits_char__* __retval190;
  this188 = v185;
  __n189 = v186;
  struct std__basic_ostream_char__std__char_traits_char__* t191 = this188;
  unsigned int t192 = __n189;
  unsigned long cast193 = (unsigned long)t192;
  struct std__basic_ostream_char__std__char_traits_char__* r194 = std__ostream__std__ostream___M_insert_unsigned_long_(t191, cast193);
  __retval190 = r194;
  struct std__basic_ostream_char__std__char_traits_char__* t195 = __retval190;
  return t195;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v196, void* v197) {
bb198:
  struct std__basic_ostream_char__std__char_traits_char__* this199;
  void* __pf200;
  struct std__basic_ostream_char__std__char_traits_char__* __retval201;
  this199 = v196;
  __pf200 = v197;
  struct std__basic_ostream_char__std__char_traits_char__* t202 = this199;
  void* t203 = __pf200;
  struct std__basic_ostream_char__std__char_traits_char__* r204 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t203)(t202);
  __retval201 = r204;
  struct std__basic_ostream_char__std__char_traits_char__* t205 = __retval201;
  return t205;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v206) {
bb207:
  struct std__basic_ostream_char__std__char_traits_char__* __os208;
  struct std__basic_ostream_char__std__char_traits_char__* __retval209;
  __os208 = v206;
  struct std__basic_ostream_char__std__char_traits_char__* t210 = __os208;
  struct std__basic_ostream_char__std__char_traits_char__* r211 = std__ostream__flush(t210);
  __retval209 = r211;
  struct std__basic_ostream_char__std__char_traits_char__* t212 = __retval209;
  return t212;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v213) {
bb214:
  struct std__ctype_char_* __f215;
  struct std__ctype_char_* __retval216;
  __f215 = v213;
    struct std__ctype_char_* t217 = __f215;
    _Bool cast218 = (_Bool)t217;
    _Bool u219 = !cast218;
    if (u219) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t220 = __f215;
  __retval216 = t220;
  struct std__ctype_char_* t221 = __retval216;
  return t221;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v222, char v223) {
bb224:
  struct std__ctype_char_* this225;
  char __c226;
  char __retval227;
  this225 = v222;
  __c226 = v223;
  struct std__ctype_char_* t228 = this225;
    char t229 = t228->_M_widen_ok;
    _Bool cast230 = (_Bool)t229;
    if (cast230) {
      char t231 = __c226;
      unsigned char cast232 = (unsigned char)t231;
      unsigned long cast233 = (unsigned long)cast232;
      char t234 = t228->_M_widen[cast233];
      __retval227 = t234;
      char t235 = __retval227;
      return t235;
    }
  std__ctype_char____M_widen_init___const(t228);
  char t236 = __c226;
  void** v237 = (void**)t228;
  void* v238 = *((void**)v237);
  char vcall241 = (char)__VERIFIER_virtual_call_char_char(t228, 6, t236);
  __retval227 = vcall241;
  char t242 = __retval227;
  return t242;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v243, char v244) {
bb245:
  struct std__basic_ios_char__std__char_traits_char__* this246;
  char __c247;
  char __retval248;
  this246 = v243;
  __c247 = v244;
  struct std__basic_ios_char__std__char_traits_char__* t249 = this246;
  struct std__ctype_char_* t250 = t249->_M_ctype;
  struct std__ctype_char_* r251 = std__ctype_char__const__std____check_facet_std__ctype_char___(t250);
  char t252 = __c247;
  char r253 = std__ctype_char___widen_char__const(r251, t252);
  __retval248 = r253;
  char t254 = __retval248;
  return t254;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v255) {
bb256:
  struct std__basic_ostream_char__std__char_traits_char__* __os257;
  struct std__basic_ostream_char__std__char_traits_char__* __retval258;
  __os257 = v255;
  struct std__basic_ostream_char__std__char_traits_char__* t259 = __os257;
  struct std__basic_ostream_char__std__char_traits_char__* t260 = __os257;
  void** v261 = (void**)t260;
  void* v262 = *((void**)v261);
  unsigned char* cast263 = (unsigned char*)v262;
  long c264 = -24;
  unsigned char* ptr265 = &(cast263)[c264];
  long* cast266 = (long*)ptr265;
  long t267 = *cast266;
  unsigned char* cast268 = (unsigned char*)t260;
  unsigned char* ptr269 = &(cast268)[t267];
  struct std__basic_ostream_char__std__char_traits_char__* cast270 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr269;
  struct std__basic_ios_char__std__char_traits_char__* cast271 = (struct std__basic_ios_char__std__char_traits_char__*)cast270;
  char c272 = 10;
  char r273 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast271, c272);
  struct std__basic_ostream_char__std__char_traits_char__* r274 = std__ostream__put(t259, r273);
  struct std__basic_ostream_char__std__char_traits_char__* r275 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r274);
  __retval258 = r275;
  struct std__basic_ostream_char__std__char_traits_char__* t276 = __retval258;
  return t276;
}

// function: _Z4dealPK7BitCard
void deal(struct BitCard* v277) {
bb278:
  struct BitCard* wDeck279;
  wDeck279 = v277;
    int k1280;
    int k2281;
    int c282 = 0;
    k1280 = c282;
    int t283 = k1280;
    int c284 = 26;
    int b285 = t283 + c284;
    k2281 = b285;
    while (1) {
      int t287 = k1280;
      int c288 = 25;
      _Bool c289 = ((t287 <= c288)) ? 1 : 0;
      if (!c289) break;
        struct std___Setw agg_tmp0290;
        struct std___Setw agg_tmp1291;
        struct std___Setw agg_tmp2292;
        struct std___Setw agg_tmp3293;
        struct std___Setw agg_tmp4294;
        struct std___Setw agg_tmp5295;
        char* cast296 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast296);
        int c298 = 3;
        struct std___Setw r299 = std__setw(c298);
        agg_tmp0290 = r299;
        struct std___Setw t300 = agg_tmp0290;
        struct std__basic_ostream_char__std__char_traits_char__* r301 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r297, t300);
        int t302 = k1280;
        long cast303 = (long)t302;
        struct BitCard* t304 = wDeck279;
        struct BitCard* ptr305 = &(t304)[cast303];
        unsigned long bf_st306 = (unsigned long)(ptr305->face);
        unsigned int bf307 = (unsigned int)(bf_st306 >> 0 & 15ULL);
        struct std__basic_ostream_char__std__char_traits_char__* r308 = std__ostream__operator__(r301, bf307);
        char* cast309 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r310 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r308, cast309);
        int c311 = 2;
        struct std___Setw r312 = std__setw(c311);
        agg_tmp1291 = r312;
        struct std___Setw t313 = agg_tmp1291;
        struct std__basic_ostream_char__std__char_traits_char__* r314 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r310, t313);
        int t315 = k1280;
        long cast316 = (long)t315;
        struct BitCard* t317 = wDeck279;
        struct BitCard* ptr318 = &(t317)[cast316];
        unsigned long bf_st319 = (unsigned long)(ptr318->face);
        unsigned int bf320 = (unsigned int)(bf_st319 >> 4 & 3ULL);
        struct std__basic_ostream_char__std__char_traits_char__* r321 = std__ostream__operator__(r314, bf320);
        char* cast322 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r323 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r321, cast322);
        int c324 = 2;
        struct std___Setw r325 = std__setw(c324);
        agg_tmp2292 = r325;
        struct std___Setw t326 = agg_tmp2292;
        struct std__basic_ostream_char__std__char_traits_char__* r327 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r323, t326);
        int t328 = k1280;
        long cast329 = (long)t328;
        struct BitCard* t330 = wDeck279;
        struct BitCard* ptr331 = &(t330)[cast329];
        unsigned long bf_st332 = (unsigned long)(ptr331->face);
        unsigned int bf333 = (unsigned int)(bf_st332 >> 6 & 1ULL);
        struct std__basic_ostream_char__std__char_traits_char__* r334 = std__ostream__operator__(r327, bf333);
        char* cast335 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r336 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r334, cast335);
        char* cast337 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r338 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r336, cast337);
        int c339 = 3;
        struct std___Setw r340 = std__setw(c339);
        agg_tmp3293 = r340;
        struct std___Setw t341 = agg_tmp3293;
        struct std__basic_ostream_char__std__char_traits_char__* r342 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r338, t341);
        int t343 = k2281;
        long cast344 = (long)t343;
        struct BitCard* t345 = wDeck279;
        struct BitCard* ptr346 = &(t345)[cast344];
        unsigned long bf_st347 = (unsigned long)(ptr346->face);
        unsigned int bf348 = (unsigned int)(bf_st347 >> 0 & 15ULL);
        struct std__basic_ostream_char__std__char_traits_char__* r349 = std__ostream__operator__(r342, bf348);
        char* cast350 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r351 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r349, cast350);
        int c352 = 2;
        struct std___Setw r353 = std__setw(c352);
        agg_tmp4294 = r353;
        struct std___Setw t354 = agg_tmp4294;
        struct std__basic_ostream_char__std__char_traits_char__* r355 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r351, t354);
        int t356 = k2281;
        long cast357 = (long)t356;
        struct BitCard* t358 = wDeck279;
        struct BitCard* ptr359 = &(t358)[cast357];
        unsigned long bf_st360 = (unsigned long)(ptr359->face);
        unsigned int bf361 = (unsigned int)(bf_st360 >> 4 & 3ULL);
        struct std__basic_ostream_char__std__char_traits_char__* r362 = std__ostream__operator__(r355, bf361);
        char* cast363 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r364 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r362, cast363);
        int c365 = 2;
        struct std___Setw r366 = std__setw(c365);
        agg_tmp5295 = r366;
        struct std___Setw t367 = agg_tmp5295;
        struct std__basic_ostream_char__std__char_traits_char__* r368 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r364, t367);
        int t369 = k2281;
        long cast370 = (long)t369;
        struct BitCard* t371 = wDeck279;
        struct BitCard* ptr372 = &(t371)[cast370];
        unsigned long bf_st373 = (unsigned long)(ptr372->face);
        unsigned int bf374 = (unsigned int)(bf_st373 >> 6 & 1ULL);
        struct std__basic_ostream_char__std__char_traits_char__* r375 = std__ostream__operator__(r368, bf374);
        struct std__basic_ostream_char__std__char_traits_char__* r376 = std__ostream__operator___std__ostream_____(r375, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    for_step286: ;
      int t377 = k1280;
      int u378 = t377 + 1;
      k1280 = u378;
      int t379 = k2281;
      int u380 = t379 + 1;
      k2281 = u380;
    }
  return;
}

// function: main
int main() {
bb381:
  int __retval382;
  struct BitCard deck383[52];
  int c384 = 0;
  __retval382 = c384;
  struct BitCard* cast385 = (struct BitCard*)&(deck383);
  fillDeck(cast385);
  struct BitCard* cast386 = (struct BitCard*)&(deck383);
  deal(cast386);
  int c387 = 0;
  __retval382 = c387;
  int t388 = __retval382;
  return t388;
}

