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

char __const_main_c[6] = "HELLO";
double __const_main_b[7] = {0x1.199999999999ap0, 0x1.199999999999ap1, 0x1.a666666666666p1, 0x1.199999999999ap2, 0x1.6p2, 0x1.a666666666666p2, 0x1.ecccccccccccdp2};
int __const_main_a[5] = {1, 2, 3, 4, 5};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "Array a contains:";
char _str_1[18] = "Array b contains:";
char _str_2[18] = "Array c contains:";
char _str_3[2] = "0";
char _str_4[98] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch11_4/main.cpp";
char __PRETTY_FUNCTION____Z10printArrayIiEvPKT_i[48] = "void printArray(const T * int) [T = int]";
char _str_5[2] = " ";
char __PRETTY_FUNCTION____Z10printArrayIdEvPKT_i[51] = "void printArray(const T * int) [T = double]";
char __PRETTY_FUNCTION____Z10printArrayIcEvPKT_i[49] = "void printArray(const T * int) [T = char]";
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void void_printArray_int_(int* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
void void_printArray_double_(double* p0, int p1);
long std__ios_base__width___const(struct std__ios_base* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
void void_printArray_char_(char* p0, int p1);
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v103, void* v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  void* __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __pf107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  void* t110 = __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t110)(t109);
  __retval108 = r111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v113) {
bb114:
  struct std__basic_ostream_char__std__char_traits_char__* __os115;
  struct std__basic_ostream_char__std__char_traits_char__* __retval116;
  __os115 = v113;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __os115;
  struct std__basic_ostream_char__std__char_traits_char__* r118 = std__ostream__flush(t117);
  __retval116 = r118;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __retval116;
  return t119;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v120) {
bb121:
  struct std__ctype_char_* __f122;
  struct std__ctype_char_* __retval123;
  __f122 = v120;
    struct std__ctype_char_* t124 = __f122;
    _Bool cast125 = (_Bool)t124;
    _Bool u126 = !cast125;
    if (u126) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t127 = __f122;
  __retval123 = t127;
  struct std__ctype_char_* t128 = __retval123;
  return t128;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v129, char v130) {
bb131:
  struct std__ctype_char_* this132;
  char __c133;
  char __retval134;
  this132 = v129;
  __c133 = v130;
  struct std__ctype_char_* t135 = this132;
    char t136 = t135->_M_widen_ok;
    _Bool cast137 = (_Bool)t136;
    if (cast137) {
      char t138 = __c133;
      unsigned char cast139 = (unsigned char)t138;
      unsigned long cast140 = (unsigned long)cast139;
      char t141 = t135->_M_widen[cast140];
      __retval134 = t141;
      char t142 = __retval134;
      return t142;
    }
  std__ctype_char____M_widen_init___const(t135);
  char t143 = __c133;
  void** v144 = (void**)t135;
  void* v145 = *((void**)v144);
  char vcall148 = (char)__VERIFIER_virtual_call_char_char(t135, 6, t143);
  __retval134 = vcall148;
  char t149 = __retval134;
  return t149;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v150, char v151) {
bb152:
  struct std__basic_ios_char__std__char_traits_char__* this153;
  char __c154;
  char __retval155;
  this153 = v150;
  __c154 = v151;
  struct std__basic_ios_char__std__char_traits_char__* t156 = this153;
  struct std__ctype_char_* t157 = t156->_M_ctype;
  struct std__ctype_char_* r158 = std__ctype_char__const__std____check_facet_std__ctype_char___(t157);
  char t159 = __c154;
  char r160 = std__ctype_char___widen_char__const(r158, t159);
  __retval155 = r160;
  char t161 = __retval155;
  return t161;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v162) {
bb163:
  struct std__basic_ostream_char__std__char_traits_char__* __os164;
  struct std__basic_ostream_char__std__char_traits_char__* __retval165;
  __os164 = v162;
  struct std__basic_ostream_char__std__char_traits_char__* t166 = __os164;
  struct std__basic_ostream_char__std__char_traits_char__* t167 = __os164;
  void** v168 = (void**)t167;
  void* v169 = *((void**)v168);
  unsigned char* cast170 = (unsigned char*)v169;
  long c171 = -24;
  unsigned char* ptr172 = &(cast170)[c171];
  long* cast173 = (long*)ptr172;
  long t174 = *cast173;
  unsigned char* cast175 = (unsigned char*)t167;
  unsigned char* ptr176 = &(cast175)[t174];
  struct std__basic_ostream_char__std__char_traits_char__* cast177 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr176;
  struct std__basic_ios_char__std__char_traits_char__* cast178 = (struct std__basic_ios_char__std__char_traits_char__*)cast177;
  char c179 = 10;
  char r180 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast178, c179);
  struct std__basic_ostream_char__std__char_traits_char__* r181 = std__ostream__put(t166, r180);
  struct std__basic_ostream_char__std__char_traits_char__* r182 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r181);
  __retval165 = r182;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __retval165;
  return t183;
}

// function: _Z10printArrayIiEvPKT_i
void void_printArray_int_(int* v184, int v185) {
bb186:
  int* array187;
  int count188;
  array187 = v184;
  count188 = v185;
    int i189;
    int c190 = 0;
    i189 = c190;
    while (1) {
      int t192 = i189;
      int t193 = count188;
      _Bool c194 = ((t192 <= t193)) ? 1 : 0;
      if (!c194) break;
        char* cast195 = (char*)&(_str_3);
        char* c196 = _str_4;
        unsigned int c197 = 20;
        char* cast198 = (char*)&(__PRETTY_FUNCTION____Z10printArrayIiEvPKT_i);
        __assert_fail(cast195, c196, c197, cast198);
        int t199 = i189;
        long cast200 = (long)t199;
        int* t201 = array187;
        int* ptr202 = &(t201)[cast200];
        int t203 = *ptr202;
        struct std__basic_ostream_char__std__char_traits_char__* r204 = std__ostream__operator___2(&_ZSt4cout, t203);
        char* cast205 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r206 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r204, cast205);
    for_step191: ;
      int t207 = i189;
      int u208 = t207 + 1;
      i189 = u208;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r209 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v210, double v211) {
bb212:
  struct std__basic_ostream_char__std__char_traits_char__* this213;
  double __f214;
  struct std__basic_ostream_char__std__char_traits_char__* __retval215;
  this213 = v210;
  __f214 = v211;
  struct std__basic_ostream_char__std__char_traits_char__* t216 = this213;
  double t217 = __f214;
  struct std__basic_ostream_char__std__char_traits_char__* r218 = std__ostream__std__ostream___M_insert_double_(t216, t217);
  __retval215 = r218;
  struct std__basic_ostream_char__std__char_traits_char__* t219 = __retval215;
  return t219;
}

// function: _Z10printArrayIdEvPKT_i
void void_printArray_double_(double* v220, int v221) {
bb222:
  double* array223;
  int count224;
  array223 = v220;
  count224 = v221;
    int i225;
    int c226 = 0;
    i225 = c226;
    while (1) {
      int t228 = i225;
      int t229 = count224;
      _Bool c230 = ((t228 <= t229)) ? 1 : 0;
      if (!c230) break;
        char* cast231 = (char*)&(_str_3);
        char* c232 = _str_4;
        unsigned int c233 = 20;
        char* cast234 = (char*)&(__PRETTY_FUNCTION____Z10printArrayIdEvPKT_i);
        __assert_fail(cast231, c232, c233, cast234);
        int t235 = i225;
        long cast236 = (long)t235;
        double* t237 = array223;
        double* ptr238 = &(t237)[cast236];
        double t239 = *ptr238;
        struct std__basic_ostream_char__std__char_traits_char__* r240 = std__ostream__operator__(&_ZSt4cout, t239);
        char* cast241 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r242 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r240, cast241);
    for_step227: ;
      int t243 = i225;
      int u244 = t243 + 1;
      i225 = u244;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r245 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v246) {
bb247:
  struct std__ios_base* this248;
  long __retval249;
  this248 = v246;
  struct std__ios_base* t250 = this248;
  long t251 = t250->_M_width;
  __retval249 = t251;
  long t252 = __retval249;
  return t252;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v253, char v254) {
bb255:
  struct std__basic_ostream_char__std__char_traits_char__* __out256;
  char __c257;
  struct std__basic_ostream_char__std__char_traits_char__* __retval258;
  __out256 = v253;
  __c257 = v254;
    struct std__basic_ostream_char__std__char_traits_char__* t259 = __out256;
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
    struct std__ios_base* cast270 = (struct std__ios_base*)cast269;
    long r271 = std__ios_base__width___const(cast270);
    long c272 = 0;
    _Bool c273 = ((r271 != c272)) ? 1 : 0;
    if (c273) {
      struct std__basic_ostream_char__std__char_traits_char__* t274 = __out256;
      long c275 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r276 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t274, &__c257, c275);
      __retval258 = r276;
      struct std__basic_ostream_char__std__char_traits_char__* t277 = __retval258;
      return t277;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t278 = __out256;
  char t279 = __c257;
  struct std__basic_ostream_char__std__char_traits_char__* r280 = std__ostream__put(t278, t279);
  struct std__basic_ostream_char__std__char_traits_char__* t281 = __out256;
  __retval258 = t281;
  struct std__basic_ostream_char__std__char_traits_char__* t282 = __retval258;
  return t282;
}

// function: _Z10printArrayIcEvPKT_i
void void_printArray_char_(char* v283, int v284) {
bb285:
  char* array286;
  int count287;
  array286 = v283;
  count287 = v284;
    int i288;
    int c289 = 0;
    i288 = c289;
    while (1) {
      int t291 = i288;
      int t292 = count287;
      _Bool c293 = ((t291 <= t292)) ? 1 : 0;
      if (!c293) break;
        char* cast294 = (char*)&(_str_3);
        char* c295 = _str_4;
        unsigned int c296 = 20;
        char* cast297 = (char*)&(__PRETTY_FUNCTION____Z10printArrayIcEvPKT_i);
        __assert_fail(cast294, c295, c296, cast297);
        int t298 = i288;
        long cast299 = (long)t298;
        char* t300 = array286;
        char* ptr301 = &(t300)[cast299];
        char t302 = *ptr301;
        struct std__basic_ostream_char__std__char_traits_char__* r303 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, t302);
        char* cast304 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r305 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r303, cast304);
    for_step290: ;
      int t306 = i288;
      int u307 = t306 + 1;
      i288 = u307;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r308 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: main
int main() {
bb309:
  int __retval310;
  int aCount311;
  int bCount312;
  int cCount313;
  int a314[5];
  double b315[7];
  char c316[6];
  int c317 = 0;
  __retval310 = c317;
  int c318 = 5;
  aCount311 = c318;
  int c319 = 7;
  bCount312 = c319;
  int c320 = 6;
  cCount313 = c320;
  // array copy
  __builtin_memcpy(a314, __const_main_a, (unsigned long)5 * sizeof(__const_main_a[0]));
  // array copy
  __builtin_memcpy(b315, __const_main_b, (unsigned long)7 * sizeof(__const_main_b[0]));
  // array copy
  __builtin_memcpy(c316, __const_main_c, (unsigned long)6 * sizeof(__const_main_c[0]));
  char* cast321 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r322 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast321);
  struct std__basic_ostream_char__std__char_traits_char__* r323 = std__ostream__operator___std__ostream_____(r322, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int* cast324 = (int*)&(a314);
  int t325 = aCount311;
  void_printArray_int_(cast324, t325);
  char* cast326 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r327 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast326);
  struct std__basic_ostream_char__std__char_traits_char__* r328 = std__ostream__operator___std__ostream_____(r327, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  double* cast329 = (double*)&(b315);
  int t330 = bCount312;
  void_printArray_double_(cast329, t330);
  char* cast331 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r332 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast331);
  struct std__basic_ostream_char__std__char_traits_char__* r333 = std__ostream__operator___std__ostream_____(r332, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast334 = (char*)&(c316);
  int t335 = cCount313;
  void_printArray_char_(cast334, t335);
  int c336 = 0;
  __retval310 = c336;
  int t337 = __retval310;
  return t337;
}

