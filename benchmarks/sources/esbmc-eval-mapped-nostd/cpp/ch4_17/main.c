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
struct std___Setprecision { int _M_n; };
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
struct std__ios_base { void* __field0; long _M_precision; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_response[99] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7};
int __const_main_frequency[10];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "********\n  Mean\n********\n";
char _str_1[43] = "The mean is the average value of the data\n";
char _str_2[42] = "items. The mean is equal to the total of\n";
char _str_3[42] = "all the data items divided by the number\n";
char _str_4[16] = "of data items (";
char _str_5[36] = "). The mean value for\nthis run is: ";
char _str_6[4] = " / ";
char _str_7[4] = " = ";
char _str_8[3] = "\n\n";
char _str_9[28] = "\n********\n Median\n********\n";
char _str_10[35] = "The unsorted array of responses is";
char _str_11[22] = "\n\nThe sorted array is";
char _str_12[25] = "\n\nThe median is element ";
char _str_13[16] = " of\nthe sorted ";
char _str_14[44] = " element array.\nFor this run the median is ";
char _str_15[27] = "\n********\n  Mode\n********\n";
char _str_16[9] = "Response";
char _str_17[10] = "Frequency";
char _str_18[12] = "Histogram\n\n";
char _str_19[18] = "1    1    2    2\n";
char _str_20[24] = "5    0    5    0    5\n\n";
char _str_21[11] = "          ";
char _str_22[38] = "The mode is the most frequent value.\n";
char _str_23[26] = "For this run the mode is ";
char _str_24[17] = " which occurred ";
char _str_25[8] = " times.";
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
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
struct std___Setprecision std__setprecision(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
void mean(int* p0, int p1);
void printArray(int* p0, int p1);
void bubbleSort(int* p0, int p1);
void median(int* p0, int p1);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
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
void mode(int* p0, int* p1, int p2);
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

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v103, long v104) {
bb105:
  struct std__ios_base* this106;
  long __prec107;
  long __retval108;
  long __old109;
  this106 = v103;
  __prec107 = v104;
  struct std__ios_base* t110 = this106;
  long t111 = t110->_M_precision;
  __old109 = t111;
  long t112 = __prec107;
  t110->_M_precision = t112;
  long t113 = __old109;
  __retval108 = t113;
  long t114 = __retval108;
  return t114;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v115, struct std___Setprecision v116) {
bb117:
  struct std__basic_ostream_char__std__char_traits_char__* __os118;
  struct std___Setprecision __f119;
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
  long r135 = std__ios_base__precision(cast132, cast134);
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __os118;
  __retval120 = t136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval120;
  return t137;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v138, void* v139) {
bb140:
  struct std__basic_ostream_char__std__char_traits_char__* this141;
  void* __pf142;
  struct std__basic_ostream_char__std__char_traits_char__* __retval143;
  this141 = v138;
  __pf142 = v139;
  struct std__basic_ostream_char__std__char_traits_char__* t144 = this141;
  void* t145 = __pf142;
  void** v146 = (void**)t144;
  void* v147 = *((void**)v146);
  unsigned char* cast148 = (unsigned char*)v147;
  long c149 = -24;
  unsigned char* ptr150 = &(cast148)[c149];
  long* cast151 = (long*)ptr150;
  long t152 = *cast151;
  unsigned char* cast153 = (unsigned char*)t144;
  unsigned char* ptr154 = &(cast153)[t152];
  struct std__basic_ostream_char__std__char_traits_char__* cast155 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr154;
  struct std__ios_base* cast156 = (struct std__ios_base*)cast155;
  struct std__ios_base* r157 = ((struct std__ios_base* (*)(struct std__ios_base*))t145)(cast156);
  __retval143 = t144;
  struct std__basic_ostream_char__std__char_traits_char__* t158 = __retval143;
  return t158;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v159, int v160) {
bb161:
  int* __a162;
  int __b163;
  int* __retval164;
  __a162 = v159;
  __b163 = v160;
  int* t165 = __a162;
  int t166 = *t165;
  int t167 = __b163;
  int r168 = std__operator_(t166, t167);
  int* t169 = __a162;
  *t169 = r168;
  __retval164 = t169;
  int* t170 = __retval164;
  return t170;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v171) {
bb172:
  int __a173;
  int __retval174;
  __a173 = v171;
  int t175 = __a173;
  int u176 = ~t175;
  __retval174 = u176;
  int t177 = __retval174;
  return t177;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v178, int v179) {
bb180:
  int __a181;
  int __b182;
  int __retval183;
  __a181 = v178;
  __b182 = v179;
  int t184 = __a181;
  int t185 = __b182;
  int b186 = t184 | t185;
  __retval183 = b186;
  int t187 = __retval183;
  return t187;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v188, int v189) {
bb190:
  int* __a191;
  int __b192;
  int* __retval193;
  __a191 = v188;
  __b192 = v189;
  int* t194 = __a191;
  int t195 = *t194;
  int t196 = __b192;
  int r197 = std__operator__4(t195, t196);
  int* t198 = __a191;
  *t198 = r197;
  __retval193 = t198;
  int* t199 = __retval193;
  return t199;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v200, int v201) {
bb202:
  int __a203;
  int __b204;
  int __retval205;
  __a203 = v200;
  __b204 = v201;
  int t206 = __a203;
  int t207 = __b204;
  int b208 = t206 & t207;
  __retval205 = b208;
  int t209 = __retval205;
  return t209;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v210, int v211, int v212) {
bb213:
  struct std__ios_base* this214;
  int __fmtfl215;
  int __mask216;
  int __retval217;
  int __old218;
  this214 = v210;
  __fmtfl215 = v211;
  __mask216 = v212;
  struct std__ios_base* t219 = this214;
  int t220 = t219->_M_flags;
  __old218 = t220;
  int t221 = __mask216;
  int r222 = std__operator__2(t221);
  int* r223 = std__operator__(&t219->_M_flags, r222);
  int t224 = __fmtfl215;
  int t225 = __mask216;
  int r226 = std__operator_(t224, t225);
  int* r227 = std__operator___2(&t219->_M_flags, r226);
  int t228 = __old218;
  __retval217 = t228;
  int t229 = __retval217;
  return t229;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v230) {
bb231:
  struct std__ios_base* __base232;
  struct std__ios_base* __retval233;
  __base232 = v230;
  struct std__ios_base* t234 = __base232;
  int t235 = _ZNSt8ios_base5fixedE_const;
  int t236 = _ZNSt8ios_base10floatfieldE_const;
  int r237 = std__ios_base__setf(t234, t235, t236);
  struct std__ios_base* t238 = __base232;
  __retval233 = t238;
  struct std__ios_base* t239 = __retval233;
  return t239;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v240) {
bb241:
  int __n242;
  struct std___Setprecision __retval243;
  __n242 = v240;
  int t244 = __n242;
  __retval243._M_n = t244;
  struct std___Setprecision t245 = __retval243;
  return t245;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v246, double v247) {
bb248:
  struct std__basic_ostream_char__std__char_traits_char__* this249;
  double __f250;
  struct std__basic_ostream_char__std__char_traits_char__* __retval251;
  this249 = v246;
  __f250 = v247;
  struct std__basic_ostream_char__std__char_traits_char__* t252 = this249;
  double t253 = __f250;
  struct std__basic_ostream_char__std__char_traits_char__* r254 = std__ostream__std__ostream___M_insert_double_(t252, t253);
  __retval251 = r254;
  struct std__basic_ostream_char__std__char_traits_char__* t255 = __retval251;
  return t255;
}

// function: _Z4meanPKii
void mean(int* v256, int v257) {
bb258:
  int* answer259;
  int arraySize260;
  int total261;
  struct std___Setprecision agg_tmp0262;
  answer259 = v256;
  arraySize260 = v257;
  int c263 = 0;
  total261 = c263;
  char* cast264 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r265 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast264);
    int i266;
    int c267 = 0;
    i266 = c267;
    while (1) {
      int t269 = i266;
      int t270 = arraySize260;
      _Bool c271 = ((t269 < t270)) ? 1 : 0;
      if (!c271) break;
      int t272 = i266;
      long cast273 = (long)t272;
      int* t274 = answer259;
      int* ptr275 = &(t274)[cast273];
      int t276 = *ptr275;
      int t277 = total261;
      int b278 = t277 + t276;
      total261 = b278;
    for_step268: ;
      int t279 = i266;
      int u280 = t279 + 1;
      i266 = u280;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r281 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__fixed);
  int c282 = 4;
  struct std___Setprecision r283 = std__setprecision(c282);
  agg_tmp0262 = r283;
  struct std___Setprecision t284 = agg_tmp0262;
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r281, t284);
  char* cast286 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r287 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast286);
  char* cast288 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r289 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r287, cast288);
  char* cast290 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r291 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r289, cast290);
  char* cast292 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r293 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r291, cast292);
  int t294 = arraySize260;
  struct std__basic_ostream_char__std__char_traits_char__* r295 = std__ostream__operator___2(r293, t294);
  char* cast296 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r295, cast296);
  int t298 = total261;
  struct std__basic_ostream_char__std__char_traits_char__* r299 = std__ostream__operator___2(r297, t298);
  char* cast300 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r301 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r299, cast300);
  int t302 = arraySize260;
  struct std__basic_ostream_char__std__char_traits_char__* r303 = std__ostream__operator___2(r301, t302);
  char* cast304 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r305 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r303, cast304);
  int t306 = total261;
  double cast307 = (double)t306;
  int t308 = arraySize260;
  double cast309 = (double)t308;
  double b310 = cast307 / cast309;
  struct std__basic_ostream_char__std__char_traits_char__* r311 = std__ostream__operator__(r305, b310);
  char* cast312 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r313 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r311, cast312);
  return;
}

// function: _Z10printArrayPKii
void printArray(int* v314, int v315) {
bb316:
  int* a317;
  int size318;
  a317 = v314;
  size318 = v315;
    int i319;
    int c320 = 0;
    i319 = c320;
    while (1) {
      int t322 = i319;
      int t323 = size318;
      _Bool c324 = ((t322 < t323)) ? 1 : 0;
      if (!c324) break;
        struct std___Setw agg_tmp0325;
          int t326 = i319;
          int c327 = 20;
          int b328 = t326 % c327;
          int c329 = 0;
          _Bool c330 = ((b328 == c329)) ? 1 : 0;
          if (c330) {
            struct std__basic_ostream_char__std__char_traits_char__* r331 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          }
        int c332 = 2;
        struct std___Setw r333 = std__setw(c332);
        agg_tmp0325 = r333;
        struct std___Setw t334 = agg_tmp0325;
        struct std__basic_ostream_char__std__char_traits_char__* r335 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(&_ZSt4cout, t334);
        int t336 = i319;
        long cast337 = (long)t336;
        int* t338 = a317;
        int* ptr339 = &(t338)[cast337];
        int t340 = *ptr339;
        struct std__basic_ostream_char__std__char_traits_char__* r341 = std__ostream__operator___2(r335, t340);
    for_step321: ;
      int t342 = i319;
      int u343 = t342 + 1;
      i319 = u343;
    }
  return;
}

// function: _Z10bubbleSortPii
void bubbleSort(int* v344, int v345) {
bb346:
  int* a347;
  int size348;
  int hold349;
  a347 = v344;
  size348 = v345;
    int pass350;
    int c351 = 1;
    pass350 = c351;
    while (1) {
      int t353 = pass350;
      int t354 = size348;
      _Bool c355 = ((t353 < t354)) ? 1 : 0;
      if (!c355) break;
        int j356;
        int c357 = 0;
        j356 = c357;
        while (1) {
          int t359 = j356;
          int t360 = size348;
          int c361 = 1;
          int b362 = t360 - c361;
          _Bool c363 = ((t359 < b362)) ? 1 : 0;
          if (!c363) break;
            int t364 = j356;
            long cast365 = (long)t364;
            int* t366 = a347;
            int* ptr367 = &(t366)[cast365];
            int t368 = *ptr367;
            int t369 = j356;
            int c370 = 1;
            int b371 = t369 + c370;
            long cast372 = (long)b371;
            int* t373 = a347;
            int* ptr374 = &(t373)[cast372];
            int t375 = *ptr374;
            _Bool c376 = ((t368 > t375)) ? 1 : 0;
            if (c376) {
              int t377 = j356;
              long cast378 = (long)t377;
              int* t379 = a347;
              int* ptr380 = &(t379)[cast378];
              int t381 = *ptr380;
              hold349 = t381;
              int t382 = j356;
              int c383 = 1;
              int b384 = t382 + c383;
              long cast385 = (long)b384;
              int* t386 = a347;
              int* ptr387 = &(t386)[cast385];
              int t388 = *ptr387;
              int t389 = j356;
              long cast390 = (long)t389;
              int* t391 = a347;
              int* ptr392 = &(t391)[cast390];
              *ptr392 = t388;
              int t393 = hold349;
              int t394 = j356;
              int c395 = 1;
              int b396 = t394 + c395;
              long cast397 = (long)b396;
              int* t398 = a347;
              int* ptr399 = &(t398)[cast397];
              *ptr399 = t393;
            }
        for_step358: ;
          int t400 = j356;
          int u401 = t400 + 1;
          j356 = u401;
        }
    for_step352: ;
      int t402 = pass350;
      int u403 = t402 + 1;
      pass350 = u403;
    }
  return;
}

// function: _Z6medianPii
void median(int* v404, int v405) {
bb406:
  int* answer407;
  int size408;
  answer407 = v404;
  size408 = v405;
  char* cast409 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r410 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast409);
  char* cast411 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r412 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r410, cast411);
  int* t413 = answer407;
  int t414 = size408;
  printArray(t413, t414);
  int* t415 = answer407;
  int t416 = size408;
  bubbleSort(t415, t416);
  char* cast417 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* r418 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast417);
  int* t419 = answer407;
  int t420 = size408;
  printArray(t419, t420);
  char* cast421 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* r422 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast421);
  int t423 = size408;
  int c424 = 2;
  int b425 = t423 / c424;
  struct std__basic_ostream_char__std__char_traits_char__* r426 = std__ostream__operator___2(r422, b425);
  char* cast427 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* r428 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r426, cast427);
  int t429 = size408;
  struct std__basic_ostream_char__std__char_traits_char__* r430 = std__ostream__operator___2(r428, t429);
  char* cast431 = (char*)&(_str_14);
  struct std__basic_ostream_char__std__char_traits_char__* r432 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r430, cast431);
  int t433 = size408;
  int c434 = 2;
  int b435 = t433 / c434;
  long cast436 = (long)b435;
  int* t437 = answer407;
  int* ptr438 = &(t437)[cast436];
  int t439 = *ptr438;
  struct std__basic_ostream_char__std__char_traits_char__* r440 = std__ostream__operator___2(r432, t439);
  char* cast441 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r442 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r440, cast441);
  return;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v443, long v444) {
bb445:
  struct std__ios_base* this446;
  long __wide447;
  long __retval448;
  long __old449;
  this446 = v443;
  __wide447 = v444;
  struct std__ios_base* t450 = this446;
  long t451 = t450->_M_width;
  __old449 = t451;
  long t452 = __wide447;
  t450->_M_width = t452;
  long t453 = __old449;
  __retval448 = t453;
  long t454 = __retval448;
  return t454;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v455, struct std___Setw v456) {
bb457:
  struct std__basic_ostream_char__std__char_traits_char__* __os458;
  struct std___Setw __f459;
  struct std__basic_ostream_char__std__char_traits_char__* __retval460;
  __os458 = v455;
  __f459 = v456;
  struct std__basic_ostream_char__std__char_traits_char__* t461 = __os458;
  void** v462 = (void**)t461;
  void* v463 = *((void**)v462);
  unsigned char* cast464 = (unsigned char*)v463;
  long c465 = -24;
  unsigned char* ptr466 = &(cast464)[c465];
  long* cast467 = (long*)ptr466;
  long t468 = *cast467;
  unsigned char* cast469 = (unsigned char*)t461;
  unsigned char* ptr470 = &(cast469)[t468];
  struct std__basic_ostream_char__std__char_traits_char__* cast471 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr470;
  struct std__ios_base* cast472 = (struct std__ios_base*)cast471;
  int t473 = __f459._M_n;
  long cast474 = (long)t473;
  long r475 = std__ios_base__width(cast472, cast474);
  struct std__basic_ostream_char__std__char_traits_char__* t476 = __os458;
  __retval460 = t476;
  struct std__basic_ostream_char__std__char_traits_char__* t477 = __retval460;
  return t477;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v478) {
bb479:
  int __n480;
  struct std___Setw __retval481;
  __n480 = v478;
  int t482 = __n480;
  __retval481._M_n = t482;
  struct std___Setw t483 = __retval481;
  return t483;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v484) {
bb485:
  struct std__ios_base* this486;
  long __retval487;
  this486 = v484;
  struct std__ios_base* t488 = this486;
  long t489 = t488->_M_width;
  __retval487 = t489;
  long t490 = __retval487;
  return t490;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v491, char v492) {
bb493:
  struct std__basic_ostream_char__std__char_traits_char__* __out494;
  char __c495;
  struct std__basic_ostream_char__std__char_traits_char__* __retval496;
  __out494 = v491;
  __c495 = v492;
    struct std__basic_ostream_char__std__char_traits_char__* t497 = __out494;
    void** v498 = (void**)t497;
    void* v499 = *((void**)v498);
    unsigned char* cast500 = (unsigned char*)v499;
    long c501 = -24;
    unsigned char* ptr502 = &(cast500)[c501];
    long* cast503 = (long*)ptr502;
    long t504 = *cast503;
    unsigned char* cast505 = (unsigned char*)t497;
    unsigned char* ptr506 = &(cast505)[t504];
    struct std__basic_ostream_char__std__char_traits_char__* cast507 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr506;
    struct std__ios_base* cast508 = (struct std__ios_base*)cast507;
    long r509 = std__ios_base__width___const(cast508);
    long c510 = 0;
    _Bool c511 = ((r509 != c510)) ? 1 : 0;
    if (c511) {
      struct std__basic_ostream_char__std__char_traits_char__* t512 = __out494;
      long c513 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r514 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t512, &__c495, c513);
      __retval496 = r514;
      struct std__basic_ostream_char__std__char_traits_char__* t515 = __retval496;
      return t515;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t516 = __out494;
  char t517 = __c495;
  struct std__basic_ostream_char__std__char_traits_char__* r518 = std__ostream__put(t516, t517);
  struct std__basic_ostream_char__std__char_traits_char__* t519 = __out494;
  __retval496 = t519;
  struct std__basic_ostream_char__std__char_traits_char__* t520 = __retval496;
  return t520;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v521, void* v522) {
bb523:
  struct std__basic_ostream_char__std__char_traits_char__* this524;
  void* __pf525;
  struct std__basic_ostream_char__std__char_traits_char__* __retval526;
  this524 = v521;
  __pf525 = v522;
  struct std__basic_ostream_char__std__char_traits_char__* t527 = this524;
  void* t528 = __pf525;
  struct std__basic_ostream_char__std__char_traits_char__* r529 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t528)(t527);
  __retval526 = r529;
  struct std__basic_ostream_char__std__char_traits_char__* t530 = __retval526;
  return t530;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v531) {
bb532:
  struct std__basic_ostream_char__std__char_traits_char__* __os533;
  struct std__basic_ostream_char__std__char_traits_char__* __retval534;
  __os533 = v531;
  struct std__basic_ostream_char__std__char_traits_char__* t535 = __os533;
  struct std__basic_ostream_char__std__char_traits_char__* r536 = std__ostream__flush(t535);
  __retval534 = r536;
  struct std__basic_ostream_char__std__char_traits_char__* t537 = __retval534;
  return t537;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v538) {
bb539:
  struct std__ctype_char_* __f540;
  struct std__ctype_char_* __retval541;
  __f540 = v538;
    struct std__ctype_char_* t542 = __f540;
    _Bool cast543 = (_Bool)t542;
    _Bool u544 = !cast543;
    if (u544) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t545 = __f540;
  __retval541 = t545;
  struct std__ctype_char_* t546 = __retval541;
  return t546;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v547, char v548) {
bb549:
  struct std__ctype_char_* this550;
  char __c551;
  char __retval552;
  this550 = v547;
  __c551 = v548;
  struct std__ctype_char_* t553 = this550;
    char t554 = t553->_M_widen_ok;
    _Bool cast555 = (_Bool)t554;
    if (cast555) {
      char t556 = __c551;
      unsigned char cast557 = (unsigned char)t556;
      unsigned long cast558 = (unsigned long)cast557;
      char t559 = t553->_M_widen[cast558];
      __retval552 = t559;
      char t560 = __retval552;
      return t560;
    }
  std__ctype_char____M_widen_init___const(t553);
  char t561 = __c551;
  void** v562 = (void**)t553;
  void* v563 = *((void**)v562);
  char vcall566 = (char)__VERIFIER_virtual_call_char_char(t553, 6, t561);
  __retval552 = vcall566;
  char t567 = __retval552;
  return t567;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v568, char v569) {
bb570:
  struct std__basic_ios_char__std__char_traits_char__* this571;
  char __c572;
  char __retval573;
  this571 = v568;
  __c572 = v569;
  struct std__basic_ios_char__std__char_traits_char__* t574 = this571;
  struct std__ctype_char_* t575 = t574->_M_ctype;
  struct std__ctype_char_* r576 = std__ctype_char__const__std____check_facet_std__ctype_char___(t575);
  char t577 = __c572;
  char r578 = std__ctype_char___widen_char__const(r576, t577);
  __retval573 = r578;
  char t579 = __retval573;
  return t579;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v580) {
bb581:
  struct std__basic_ostream_char__std__char_traits_char__* __os582;
  struct std__basic_ostream_char__std__char_traits_char__* __retval583;
  __os582 = v580;
  struct std__basic_ostream_char__std__char_traits_char__* t584 = __os582;
  struct std__basic_ostream_char__std__char_traits_char__* t585 = __os582;
  void** v586 = (void**)t585;
  void* v587 = *((void**)v586);
  unsigned char* cast588 = (unsigned char*)v587;
  long c589 = -24;
  unsigned char* ptr590 = &(cast588)[c589];
  long* cast591 = (long*)ptr590;
  long t592 = *cast591;
  unsigned char* cast593 = (unsigned char*)t585;
  unsigned char* ptr594 = &(cast593)[t592];
  struct std__basic_ostream_char__std__char_traits_char__* cast595 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr594;
  struct std__basic_ios_char__std__char_traits_char__* cast596 = (struct std__basic_ios_char__std__char_traits_char__*)cast595;
  char c597 = 10;
  char r598 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast596, c597);
  struct std__basic_ostream_char__std__char_traits_char__* r599 = std__ostream__put(t584, r598);
  struct std__basic_ostream_char__std__char_traits_char__* r600 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r599);
  __retval583 = r600;
  struct std__basic_ostream_char__std__char_traits_char__* t601 = __retval583;
  return t601;
}

// function: _Z4modePiS_i
void mode(int* v602, int* v603, int v604) {
bb605:
  int* freq606;
  int* answer607;
  int size608;
  int largest609;
  int modeValue610;
  struct std___Setw agg_tmp0611;
  struct std___Setw agg_tmp1612;
  struct std___Setw agg_tmp2613;
  struct std___Setw agg_tmp3614;
  freq606 = v602;
  answer607 = v603;
  size608 = v604;
  int c615 = 0;
  largest609 = c615;
  int c616 = 0;
  modeValue610 = c616;
  char* cast617 = (char*)&(_str_15);
  struct std__basic_ostream_char__std__char_traits_char__* r618 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast617);
    int i619;
    int c620 = 1;
    i619 = c620;
    while (1) {
      int t622 = i619;
      int c623 = 9;
      _Bool c624 = ((t622 <= c623)) ? 1 : 0;
      if (!c624) break;
      int c625 = 0;
      int t626 = i619;
      long cast627 = (long)t626;
      int* t628 = freq606;
      int* ptr629 = &(t628)[cast627];
      *ptr629 = c625;
    for_step621: ;
      int t630 = i619;
      int u631 = t630 + 1;
      i619 = u631;
    }
    int j632;
    int c633 = 0;
    j632 = c633;
    while (1) {
      int t635 = j632;
      int t636 = size608;
      _Bool c637 = ((t635 < t636)) ? 1 : 0;
      if (!c637) break;
      int t638 = j632;
      long cast639 = (long)t638;
      int* t640 = answer607;
      int* ptr641 = &(t640)[cast639];
      int t642 = *ptr641;
      long cast643 = (long)t642;
      int* t644 = freq606;
      int* ptr645 = &(t644)[cast643];
      int t646 = *ptr645;
      int u647 = t646 + 1;
      *ptr645 = u647;
    for_step634: ;
      int t648 = j632;
      int u649 = t648 + 1;
      j632 = u649;
    }
  char* cast650 = (char*)&(_str_16);
  struct std__basic_ostream_char__std__char_traits_char__* r651 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast650);
  int c652 = 11;
  struct std___Setw r653 = std__setw(c652);
  agg_tmp0611 = r653;
  struct std___Setw t654 = agg_tmp0611;
  struct std__basic_ostream_char__std__char_traits_char__* r655 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r651, t654);
  char* cast656 = (char*)&(_str_17);
  struct std__basic_ostream_char__std__char_traits_char__* r657 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r655, cast656);
  int c658 = 19;
  struct std___Setw r659 = std__setw(c658);
  agg_tmp1612 = r659;
  struct std___Setw t660 = agg_tmp1612;
  struct std__basic_ostream_char__std__char_traits_char__* r661 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r657, t660);
  char* cast662 = (char*)&(_str_18);
  struct std__basic_ostream_char__std__char_traits_char__* r663 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r661, cast662);
  int c664 = 55;
  struct std___Setw r665 = std__setw(c664);
  agg_tmp2613 = r665;
  struct std___Setw t666 = agg_tmp2613;
  struct std__basic_ostream_char__std__char_traits_char__* r667 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r663, t666);
  char* cast668 = (char*)&(_str_19);
  struct std__basic_ostream_char__std__char_traits_char__* r669 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r667, cast668);
  int c670 = 56;
  struct std___Setw r671 = std__setw(c670);
  agg_tmp3614 = r671;
  struct std___Setw t672 = agg_tmp3614;
  struct std__basic_ostream_char__std__char_traits_char__* r673 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r669, t672);
  char* cast674 = (char*)&(_str_20);
  struct std__basic_ostream_char__std__char_traits_char__* r675 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r673, cast674);
    int rating676;
    int c677 = 1;
    rating676 = c677;
    while (1) {
      int t679 = rating676;
      int c680 = 9;
      _Bool c681 = ((t679 <= c680)) ? 1 : 0;
      if (!c681) break;
        struct std___Setw agg_tmp4682;
        struct std___Setw agg_tmp5683;
        int c684 = 8;
        struct std___Setw r685 = std__setw(c684);
        agg_tmp4682 = r685;
        struct std___Setw t686 = agg_tmp4682;
        struct std__basic_ostream_char__std__char_traits_char__* r687 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(&_ZSt4cout, t686);
        int t688 = rating676;
        struct std__basic_ostream_char__std__char_traits_char__* r689 = std__ostream__operator___2(r687, t688);
        int c690 = 11;
        struct std___Setw r691 = std__setw(c690);
        agg_tmp5683 = r691;
        struct std___Setw t692 = agg_tmp5683;
        struct std__basic_ostream_char__std__char_traits_char__* r693 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r689, t692);
        int t694 = rating676;
        long cast695 = (long)t694;
        int* t696 = freq606;
        int* ptr697 = &(t696)[cast695];
        int t698 = *ptr697;
        struct std__basic_ostream_char__std__char_traits_char__* r699 = std__ostream__operator___2(r693, t698);
        char* cast700 = (char*)&(_str_21);
        struct std__basic_ostream_char__std__char_traits_char__* r701 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r699, cast700);
          int t702 = rating676;
          long cast703 = (long)t702;
          int* t704 = freq606;
          int* ptr705 = &(t704)[cast703];
          int t706 = *ptr705;
          int t707 = largest609;
          _Bool c708 = ((t706 > t707)) ? 1 : 0;
          if (c708) {
            int t709 = rating676;
            long cast710 = (long)t709;
            int* t711 = freq606;
            int* ptr712 = &(t711)[cast710];
            int t713 = *ptr712;
            largest609 = t713;
            int t714 = rating676;
            modeValue610 = t714;
          }
          int k715;
          int c716 = 1;
          k715 = c716;
          while (1) {
            int t718 = k715;
            int t719 = rating676;
            long cast720 = (long)t719;
            int* t721 = freq606;
            int* ptr722 = &(t721)[cast720];
            int t723 = *ptr722;
            _Bool c724 = ((t718 <= t723)) ? 1 : 0;
            if (!c724) break;
            char c725 = 42;
            struct std__basic_ostream_char__std__char_traits_char__* r726 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, c725);
          for_step717: ;
            int t727 = k715;
            int u728 = t727 + 1;
            k715 = u728;
          }
        char c729 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* r730 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, c729);
    for_step678: ;
      int t731 = rating676;
      int u732 = t731 + 1;
      rating676 = u732;
    }
  char* cast733 = (char*)&(_str_22);
  struct std__basic_ostream_char__std__char_traits_char__* r734 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast733);
  char* cast735 = (char*)&(_str_23);
  struct std__basic_ostream_char__std__char_traits_char__* r736 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r734, cast735);
  int t737 = modeValue610;
  struct std__basic_ostream_char__std__char_traits_char__* r738 = std__ostream__operator___2(r736, t737);
  char* cast739 = (char*)&(_str_24);
  struct std__basic_ostream_char__std__char_traits_char__* r740 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r738, cast739);
  int t741 = largest609;
  struct std__basic_ostream_char__std__char_traits_char__* r742 = std__ostream__operator___2(r740, t741);
  char* cast743 = (char*)&(_str_25);
  struct std__basic_ostream_char__std__char_traits_char__* r744 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r742, cast743);
  struct std__basic_ostream_char__std__char_traits_char__* r745 = std__ostream__operator___std__ostream_____(r744, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: main
int main() {
bb746:
  int __retval747;
  int responseSize748;
  int frequency749[10];
  int response750[99];
  int c751 = 0;
  __retval747 = c751;
  int c752 = 99;
  responseSize748 = c752;
  // array copy
  __builtin_memcpy(frequency749, __const_main_frequency, (unsigned long)10 * sizeof(__const_main_frequency[0]));
  // array copy
  __builtin_memcpy(response750, __const_main_response, (unsigned long)99 * sizeof(__const_main_response[0]));
  int* cast753 = (int*)&(response750);
  int t754 = responseSize748;
  mean(cast753, t754);
  int* cast755 = (int*)&(response750);
  int t756 = responseSize748;
  median(cast755, t756);
  int* cast757 = (int*)&(frequency749);
  int* cast758 = (int*)&(response750);
  int t759 = responseSize748;
  mode(cast757, cast758, t759);
  int c760 = 0;
  __retval747 = c760;
  int t761 = __retval747;
  return t761;
}

