extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Test { int value; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct anon_struct_0 { long __field0; long __field1; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "function\n";
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
void Test__function(struct Test* p0);
void arrowStar(struct Test* p0);
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
void dotStar(struct Test* p0);
int main();

struct anon_struct_0 __const__Z9arrowStarP4Test_memPtr = {(long)&Test__function, 0};
// function: _ZStorSt12_Ios_IostateS_
__attribute__((aligned(2))) int std__operator_(int v0, int v1) {
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
__attribute__((aligned(2))) int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v10) {
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
__attribute__((aligned(2))) void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v18, int v19) {
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
__attribute__((aligned(2))) _Bool std____is_constant_evaluated() {
bb27:
  _Bool __retval28;
    _Bool c29 = 0;
    __retval28 = c29;
    _Bool t30 = __retval28;
    return t30;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
__attribute__((aligned(2))) _Bool __gnu_cxx__char_traits_char___eq(char* v31, char* v32) {
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
__attribute__((aligned(2))) unsigned long __gnu_cxx__char_traits_char___length(char* v45) {
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
__attribute__((aligned(2))) unsigned long std__char_traits_char___length(char* v62) {
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
__attribute__((aligned(2))) struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v73, char* v74) {
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

// function: _ZN4Test8functionEv
__attribute__((aligned(2))) void Test__function(struct Test* v103) {
bb104:
  struct Test* this105;
  this105 = v103;
  struct Test* t106 = this105;
  char* cast107 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r108 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast107);
  return;
}

// function: _Z9arrowStarP4Test
__attribute__((aligned(2))) void arrowStar(struct Test* v109) {
bb110:
  struct Test* testPtr111;
  struct anon_struct_0 memPtr112;
  testPtr111 = v109;
  memPtr112 = *&__const__Z9arrowStarP4Test_memPtr; // copy
  struct Test* t113 = testPtr111;
  struct anon_struct_0 t114 = memPtr112;
  long c115 = 1;
  long v116 = t114.__field1;
  void* cast117 = (void*)t113;
  void* ptr118 = cast117 + v116;
  long v119 = t114.__field0;
  long b120 = v119 & c115;
  _Bool c121 = ((b120 == c115)) ? 1 : 0;
  void* ternary122;
  if (c121) {
    char** cast123 = (char**)ptr118;
    char* t124 = *cast123;
    long b125 = v119 - c115;
    char* ptr126 = &(t124)[b125];
    void** cast127 = (void**)ptr126;
    void* t128 = *cast127;
    ternary122 = (void*)t128;
  } else {
    void* cast129 = (void*)v119;
    ternary122 = (void*)cast129;
  }
  ((void (*)(void*))ternary122)(ptr118);
  return;
}

// function: _ZNSolsEPFRSoS_E
__attribute__((aligned(2))) struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v130, void* v131) {
bb132:
  struct std__basic_ostream_char__std__char_traits_char__* this133;
  void* __pf134;
  struct std__basic_ostream_char__std__char_traits_char__* __retval135;
  this133 = v130;
  __pf134 = v131;
  struct std__basic_ostream_char__std__char_traits_char__* t136 = this133;
  void* t137 = __pf134;
  struct std__basic_ostream_char__std__char_traits_char__* r138 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t137)(t136);
  __retval135 = r138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval135;
  return t139;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
__attribute__((aligned(2))) struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v140) {
bb141:
  struct std__basic_ostream_char__std__char_traits_char__* __os142;
  struct std__basic_ostream_char__std__char_traits_char__* __retval143;
  __os142 = v140;
  struct std__basic_ostream_char__std__char_traits_char__* t144 = __os142;
  struct std__basic_ostream_char__std__char_traits_char__* r145 = std__ostream__flush(t144);
  __retval143 = r145;
  struct std__basic_ostream_char__std__char_traits_char__* t146 = __retval143;
  return t146;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
__attribute__((aligned(2))) struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v147) {
bb148:
  struct std__ctype_char_* __f149;
  struct std__ctype_char_* __retval150;
  __f149 = v147;
    struct std__ctype_char_* t151 = __f149;
    _Bool cast152 = (_Bool)t151;
    _Bool u153 = !cast152;
    if (u153) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t154 = __f149;
  __retval150 = t154;
  struct std__ctype_char_* t155 = __retval150;
  return t155;
}

// function: _ZNKSt5ctypeIcE5widenEc
__attribute__((aligned(2))) char std__ctype_char___widen_char__const(struct std__ctype_char_* v156, char v157) {
bb158:
  struct std__ctype_char_* this159;
  char __c160;
  char __retval161;
  this159 = v156;
  __c160 = v157;
  struct std__ctype_char_* t162 = this159;
    char t163 = t162->_M_widen_ok;
    _Bool cast164 = (_Bool)t163;
    if (cast164) {
      char t165 = __c160;
      unsigned char cast166 = (unsigned char)t165;
      unsigned long cast167 = (unsigned long)cast166;
      char t168 = t162->_M_widen[cast167];
      __retval161 = t168;
      char t169 = __retval161;
      return t169;
    }
  std__ctype_char____M_widen_init___const(t162);
  char t170 = __c160;
  void** v171 = (void**)t162;
  void* v172 = *((void**)v171);
  char vcall175 = (char)__VERIFIER_virtual_call_char_char(t162, 6, t170);
  __retval161 = vcall175;
  char t176 = __retval161;
  return t176;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
__attribute__((aligned(2))) char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v177, char v178) {
bb179:
  struct std__basic_ios_char__std__char_traits_char__* this180;
  char __c181;
  char __retval182;
  this180 = v177;
  __c181 = v178;
  struct std__basic_ios_char__std__char_traits_char__* t183 = this180;
  struct std__ctype_char_* t184 = t183->_M_ctype;
  struct std__ctype_char_* r185 = std__ctype_char__const__std____check_facet_std__ctype_char___(t184);
  char t186 = __c181;
  char r187 = std__ctype_char___widen_char__const(r185, t186);
  __retval182 = r187;
  char t188 = __retval182;
  return t188;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
__attribute__((aligned(2))) struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v189) {
bb190:
  struct std__basic_ostream_char__std__char_traits_char__* __os191;
  struct std__basic_ostream_char__std__char_traits_char__* __retval192;
  __os191 = v189;
  struct std__basic_ostream_char__std__char_traits_char__* t193 = __os191;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __os191;
  void** v195 = (void**)t194;
  void* v196 = *((void**)v195);
  unsigned char* cast197 = (unsigned char*)v196;
  long c198 = -24;
  unsigned char* ptr199 = &(cast197)[c198];
  long* cast200 = (long*)ptr199;
  long t201 = *cast200;
  unsigned char* cast202 = (unsigned char*)t194;
  unsigned char* ptr203 = &(cast202)[t201];
  struct std__basic_ostream_char__std__char_traits_char__* cast204 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr203;
  struct std__basic_ios_char__std__char_traits_char__* cast205 = (struct std__basic_ios_char__std__char_traits_char__*)cast204;
  char c206 = 10;
  char r207 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast205, c206);
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__ostream__put(t193, r207);
  struct std__basic_ostream_char__std__char_traits_char__* r209 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r208);
  __retval192 = r209;
  struct std__basic_ostream_char__std__char_traits_char__* t210 = __retval192;
  return t210;
}

// function: _Z7dotStarP4Test
__attribute__((aligned(2))) void dotStar(struct Test* v211) {
bb212:
  struct Test* testPtr2213;
  long vPtr214;
  testPtr2213 = v211;
  long c215 = 0;
  vPtr214 = c215;
  struct Test* t216 = testPtr2213;
  long t217 = vPtr214;
  char* cast218 = (char*)t216;
  char* ptr219 = &(cast218)[t217];
  int* cast220 = (int*)ptr219;
  int t221 = *cast220;
  struct std__basic_ostream_char__std__char_traits_char__* r222 = std__ostream__operator__(&_ZSt4cout, t221);
  struct std__basic_ostream_char__std__char_traits_char__* r223 = std__ostream__operator___std__ostream_____(r222, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: main
__attribute__((aligned(2))) int main() {
bb224:
  int __retval225;
  struct Test test226;
  int c227 = 0;
  __retval225 = c227;
  int c228 = 8;
  test226.value = c228;
  arrowStar(&test226);
  dotStar(&test226);
  int c229 = 0;
  __retval225 = c229;
  int t230 = __retval225;
  return t230;
}

