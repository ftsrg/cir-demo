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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char __const_main_phrase[29] = "print characters of a string";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "The string is:\n";
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
long std__ios_base__width___const(struct std__ios_base* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
void printCharacters(char* p0);
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

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v103) {
bb104:
  struct std__ios_base* this105;
  long __retval106;
  this105 = v103;
  struct std__ios_base* t107 = this105;
  long t108 = t107->_M_width;
  __retval106 = t108;
  long t109 = __retval106;
  return t109;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v110, char v111) {
bb112:
  struct std__basic_ostream_char__std__char_traits_char__* __out113;
  char __c114;
  struct std__basic_ostream_char__std__char_traits_char__* __retval115;
  __out113 = v110;
  __c114 = v111;
    struct std__basic_ostream_char__std__char_traits_char__* t116 = __out113;
    void** v117 = (void**)t116;
    void* v118 = *((void**)v117);
    unsigned char* cast119 = (unsigned char*)v118;
    long c120 = -24;
    unsigned char* ptr121 = &(cast119)[c120];
    long* cast122 = (long*)ptr121;
    long t123 = *cast122;
    unsigned char* cast124 = (unsigned char*)t116;
    unsigned char* ptr125 = &(cast124)[t123];
    struct std__basic_ostream_char__std__char_traits_char__* cast126 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr125;
    struct std__ios_base* cast127 = (struct std__ios_base*)cast126;
    long r128 = std__ios_base__width___const(cast127);
    long c129 = 0;
    _Bool c130 = ((r128 != c129)) ? 1 : 0;
    if (c130) {
      struct std__basic_ostream_char__std__char_traits_char__* t131 = __out113;
      long c132 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r133 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t131, &__c114, c132);
      __retval115 = r133;
      struct std__basic_ostream_char__std__char_traits_char__* t134 = __retval115;
      return t134;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __out113;
  char t136 = __c114;
  struct std__basic_ostream_char__std__char_traits_char__* r137 = std__ostream__put(t135, t136);
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __out113;
  __retval115 = t138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval115;
  return t139;
}

// function: _Z15printCharactersPKc
void printCharacters(char* v140) {
bb141:
  char* sPtr142;
  sPtr142 = v140;
    while (1) {
      char* t144 = sPtr142;
      char t145 = *t144;
      int cast146 = (int)t145;
      int c147 = 0;
      _Bool c148 = ((cast146 != c147)) ? 1 : 0;
      if (!c148) break;
      char* t149 = sPtr142;
      char t150 = *t149;
      struct std__basic_ostream_char__std__char_traits_char__* r151 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, t150);
    for_step143: ;
      char* t152 = sPtr142;
      int c153 = 1;
      char* ptr154 = &(t152)[c153];
      sPtr142 = ptr154;
    }
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v155, void* v156) {
bb157:
  struct std__basic_ostream_char__std__char_traits_char__* this158;
  void* __pf159;
  struct std__basic_ostream_char__std__char_traits_char__* __retval160;
  this158 = v155;
  __pf159 = v156;
  struct std__basic_ostream_char__std__char_traits_char__* t161 = this158;
  void* t162 = __pf159;
  struct std__basic_ostream_char__std__char_traits_char__* r163 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t162)(t161);
  __retval160 = r163;
  struct std__basic_ostream_char__std__char_traits_char__* t164 = __retval160;
  return t164;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v165) {
bb166:
  struct std__basic_ostream_char__std__char_traits_char__* __os167;
  struct std__basic_ostream_char__std__char_traits_char__* __retval168;
  __os167 = v165;
  struct std__basic_ostream_char__std__char_traits_char__* t169 = __os167;
  struct std__basic_ostream_char__std__char_traits_char__* r170 = std__ostream__flush(t169);
  __retval168 = r170;
  struct std__basic_ostream_char__std__char_traits_char__* t171 = __retval168;
  return t171;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v172) {
bb173:
  struct std__ctype_char_* __f174;
  struct std__ctype_char_* __retval175;
  __f174 = v172;
    struct std__ctype_char_* t176 = __f174;
    _Bool cast177 = (_Bool)t176;
    _Bool u178 = !cast177;
    if (u178) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t179 = __f174;
  __retval175 = t179;
  struct std__ctype_char_* t180 = __retval175;
  return t180;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v181, char v182) {
bb183:
  struct std__ctype_char_* this184;
  char __c185;
  char __retval186;
  this184 = v181;
  __c185 = v182;
  struct std__ctype_char_* t187 = this184;
    char t188 = t187->_M_widen_ok;
    _Bool cast189 = (_Bool)t188;
    if (cast189) {
      char t190 = __c185;
      unsigned char cast191 = (unsigned char)t190;
      unsigned long cast192 = (unsigned long)cast191;
      char t193 = t187->_M_widen[cast192];
      __retval186 = t193;
      char t194 = __retval186;
      return t194;
    }
  std__ctype_char____M_widen_init___const(t187);
  char t195 = __c185;
  void** v196 = (void**)t187;
  void* v197 = *((void**)v196);
  char vcall200 = (char)__VERIFIER_virtual_call_char_char(t187, 6, t195);
  __retval186 = vcall200;
  char t201 = __retval186;
  return t201;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v202, char v203) {
bb204:
  struct std__basic_ios_char__std__char_traits_char__* this205;
  char __c206;
  char __retval207;
  this205 = v202;
  __c206 = v203;
  struct std__basic_ios_char__std__char_traits_char__* t208 = this205;
  struct std__ctype_char_* t209 = t208->_M_ctype;
  struct std__ctype_char_* r210 = std__ctype_char__const__std____check_facet_std__ctype_char___(t209);
  char t211 = __c206;
  char r212 = std__ctype_char___widen_char__const(r210, t211);
  __retval207 = r212;
  char t213 = __retval207;
  return t213;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v214) {
bb215:
  struct std__basic_ostream_char__std__char_traits_char__* __os216;
  struct std__basic_ostream_char__std__char_traits_char__* __retval217;
  __os216 = v214;
  struct std__basic_ostream_char__std__char_traits_char__* t218 = __os216;
  struct std__basic_ostream_char__std__char_traits_char__* t219 = __os216;
  void** v220 = (void**)t219;
  void* v221 = *((void**)v220);
  unsigned char* cast222 = (unsigned char*)v221;
  long c223 = -24;
  unsigned char* ptr224 = &(cast222)[c223];
  long* cast225 = (long*)ptr224;
  long t226 = *cast225;
  unsigned char* cast227 = (unsigned char*)t219;
  unsigned char* ptr228 = &(cast227)[t226];
  struct std__basic_ostream_char__std__char_traits_char__* cast229 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr228;
  struct std__basic_ios_char__std__char_traits_char__* cast230 = (struct std__basic_ios_char__std__char_traits_char__*)cast229;
  char c231 = 10;
  char r232 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast230, c231);
  struct std__basic_ostream_char__std__char_traits_char__* r233 = std__ostream__put(t218, r232);
  struct std__basic_ostream_char__std__char_traits_char__* r234 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r233);
  __retval217 = r234;
  struct std__basic_ostream_char__std__char_traits_char__* t235 = __retval217;
  return t235;
}

// function: main
int main() {
bb236:
  int __retval237;
  char phrase238[29];
  int c239 = 0;
  __retval237 = c239;
  // array copy
  __builtin_memcpy(phrase238, __const_main_phrase, (unsigned long)29 * sizeof(__const_main_phrase[0]));
  char* cast240 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r241 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast240);
  char* cast242 = (char*)&(phrase238);
  printCharacters(cast242);
  struct std__basic_ostream_char__std__char_traits_char__* r243 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c244 = 0;
  __retval237 = c244;
  int t245 = __retval237;
  return t245;
}

