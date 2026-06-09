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

int __const_main_frequency[7];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[5] = "Face";
char _str_1[10] = "Frequency";
extern void srand(unsigned int p0);
extern long time(long* p0);
extern int rand();
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
  int arraySize227;
  int frequency228[7];
  struct std___Setw agg_tmp0229;
  int c230 = 0;
  __retval226 = c230;
  int c231 = 7;
  arraySize227 = c231;
  // array copy
  __builtin_memcpy(frequency228, __const_main_frequency, (unsigned long)7 * sizeof(__const_main_frequency[0]));
  long* c232 = ((void*)0);
  long r233 = time(c232);
  unsigned int cast234 = (unsigned int)r233;
  srand(cast234);
    int roll235;
    int c236 = 1;
    roll235 = c236;
    while (1) {
      int t238 = roll235;
      int c239 = 60;
      _Bool c240 = ((t238 <= c239)) ? 1 : 0;
      if (!c240) break;
      int c241 = 1;
      int r242 = rand();
      int c243 = 6;
      int b244 = r242 % c243;
      int b245 = c241 + b244;
      long cast246 = (long)b245;
      int t247 = frequency228[cast246];
      int u248 = t247 + 1;
      frequency228[cast246] = u248;
    for_step237: ;
      int t249 = roll235;
      int u250 = t249 + 1;
      roll235 = u250;
    }
  char* cast251 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r252 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast251);
  int c253 = 13;
  struct std___Setw r254 = std__setw(c253);
  agg_tmp0229 = r254;
  struct std___Setw t255 = agg_tmp0229;
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r252, t255);
  char* cast257 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r258 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r256, cast257);
  struct std__basic_ostream_char__std__char_traits_char__* r259 = std__ostream__operator___std__ostream_____(r258, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int face260;
    struct std___Setw agg_tmp1261;
    struct std___Setw agg_tmp2262;
    int c263 = 1;
    face260 = c263;
    while (1) {
      int t265 = face260;
      int t266 = arraySize227;
      _Bool c267 = ((t265 < t266)) ? 1 : 0;
      if (!c267) break;
      int c268 = 4;
      struct std___Setw r269 = std__setw(c268);
      agg_tmp1261 = r269;
      struct std___Setw t270 = agg_tmp1261;
      struct std__basic_ostream_char__std__char_traits_char__* r271 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t270);
      int t272 = face260;
      struct std__basic_ostream_char__std__char_traits_char__* r273 = std__ostream__operator__(r271, t272);
      int c274 = 13;
      struct std___Setw r275 = std__setw(c274);
      agg_tmp2262 = r275;
      struct std___Setw t276 = agg_tmp2262;
      struct std__basic_ostream_char__std__char_traits_char__* r277 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r273, t276);
      int t278 = face260;
      long cast279 = (long)t278;
      int t280 = frequency228[cast279];
      struct std__basic_ostream_char__std__char_traits_char__* r281 = std__ostream__operator__(r277, t280);
      struct std__basic_ostream_char__std__char_traits_char__* r282 = std__ostream__operator___std__ostream_____(r281, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    for_step264: ;
      int t283 = face260;
      int u284 = t283 + 1;
      face260 = u284;
    }
  int c285 = 0;
  __retval226 = c285;
  int t286 = __retval226;
  return t286;
}

