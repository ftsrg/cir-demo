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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[23] = "According to isdigit:\n";
char _str_1[7] = "8 is a";
char _str_2[11] = "8 is not a";
char _str_3[8] = " digit\n";
char _str_4[7] = "# is a";
char _str_5[11] = "# is not a";
char _str_6[24] = "\nAccording to isalpha:\n";
char _str_7[7] = "A is a";
char _str_8[11] = "A is not a";
char _str_9[9] = " letter\n";
char _str_10[7] = "b is a";
char _str_11[11] = "b is not a";
char _str_12[7] = "& is a";
char _str_13[11] = "& is not a";
char _str_14[7] = "4 is a";
char _str_15[11] = "4 is not a";
char _str_16[24] = "\nAccording to isalnum:\n";
char _str_17[20] = " digit or a letter\n";
char _str_18[25] = "\nAccording to isxdigit:\n";
char _str_19[7] = "F is a";
char _str_20[11] = "F is not a";
char _str_21[20] = " hexadecimal digit\n";
char _str_22[7] = "J is a";
char _str_23[11] = "J is not a";
char _str_24[7] = "7 is a";
char _str_25[11] = "7 is not a";
char _str_26[7] = "$ is a";
char _str_27[11] = "$ is not a";
char _str_28[7] = "f is a";
char _str_29[11] = "f is not a";
char _str_30[19] = " hexadecimal digit";
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
extern int isdigit(int p0);
extern int isalpha(int p0);
extern int isalnum(int p0);
extern int isxdigit(int p0);
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

// function: main
int main() {
bb184:
  int __retval185;
  int c186 = 0;
  __retval185 = c186;
  char* cast187 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r188 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast187);
  int c189 = 56;
  int r190 = isdigit(c189);
  _Bool cast191 = (_Bool)r190;
  char* cast192 = (char*)&(_str_1);
  char* cast193 = (char*)&(_str_2);
  char* sel194 = cast191 ? cast192 : cast193;
  struct std__basic_ostream_char__std__char_traits_char__* r195 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r188, sel194);
  char* cast196 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r197 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r195, cast196);
  int c198 = 35;
  int r199 = isdigit(c198);
  _Bool cast200 = (_Bool)r199;
  char* cast201 = (char*)&(_str_4);
  char* cast202 = (char*)&(_str_5);
  char* sel203 = cast200 ? cast201 : cast202;
  struct std__basic_ostream_char__std__char_traits_char__* r204 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r197, sel203);
  char* cast205 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r206 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r204, cast205);
  char* cast207 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast207);
  int c209 = 65;
  int r210 = isalpha(c209);
  _Bool cast211 = (_Bool)r210;
  char* cast212 = (char*)&(_str_7);
  char* cast213 = (char*)&(_str_8);
  char* sel214 = cast211 ? cast212 : cast213;
  struct std__basic_ostream_char__std__char_traits_char__* r215 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r208, sel214);
  char* cast216 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r217 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r215, cast216);
  int c218 = 98;
  int r219 = isalpha(c218);
  _Bool cast220 = (_Bool)r219;
  char* cast221 = (char*)&(_str_10);
  char* cast222 = (char*)&(_str_11);
  char* sel223 = cast220 ? cast221 : cast222;
  struct std__basic_ostream_char__std__char_traits_char__* r224 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r217, sel223);
  char* cast225 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r226 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r224, cast225);
  int c227 = 38;
  int r228 = isalpha(c227);
  _Bool cast229 = (_Bool)r228;
  char* cast230 = (char*)&(_str_12);
  char* cast231 = (char*)&(_str_13);
  char* sel232 = cast229 ? cast230 : cast231;
  struct std__basic_ostream_char__std__char_traits_char__* r233 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r226, sel232);
  char* cast234 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r235 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r233, cast234);
  int c236 = 52;
  int r237 = isalpha(c236);
  _Bool cast238 = (_Bool)r237;
  char* cast239 = (char*)&(_str_14);
  char* cast240 = (char*)&(_str_15);
  char* sel241 = cast238 ? cast239 : cast240;
  struct std__basic_ostream_char__std__char_traits_char__* r242 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r235, sel241);
  char* cast243 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r242, cast243);
  char* cast245 = (char*)&(_str_16);
  struct std__basic_ostream_char__std__char_traits_char__* r246 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast245);
  int c247 = 65;
  int r248 = isalnum(c247);
  _Bool cast249 = (_Bool)r248;
  char* cast250 = (char*)&(_str_7);
  char* cast251 = (char*)&(_str_8);
  char* sel252 = cast249 ? cast250 : cast251;
  struct std__basic_ostream_char__std__char_traits_char__* r253 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r246, sel252);
  char* cast254 = (char*)&(_str_17);
  struct std__basic_ostream_char__std__char_traits_char__* r255 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r253, cast254);
  int c256 = 56;
  int r257 = isalnum(c256);
  _Bool cast258 = (_Bool)r257;
  char* cast259 = (char*)&(_str_1);
  char* cast260 = (char*)&(_str_2);
  char* sel261 = cast258 ? cast259 : cast260;
  struct std__basic_ostream_char__std__char_traits_char__* r262 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r255, sel261);
  char* cast263 = (char*)&(_str_17);
  struct std__basic_ostream_char__std__char_traits_char__* r264 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r262, cast263);
  int c265 = 35;
  int r266 = isalnum(c265);
  _Bool cast267 = (_Bool)r266;
  char* cast268 = (char*)&(_str_4);
  char* cast269 = (char*)&(_str_5);
  char* sel270 = cast267 ? cast268 : cast269;
  struct std__basic_ostream_char__std__char_traits_char__* r271 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r264, sel270);
  char* cast272 = (char*)&(_str_17);
  struct std__basic_ostream_char__std__char_traits_char__* r273 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r271, cast272);
  char* cast274 = (char*)&(_str_18);
  struct std__basic_ostream_char__std__char_traits_char__* r275 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast274);
  int c276 = 70;
  int r277 = isxdigit(c276);
  _Bool cast278 = (_Bool)r277;
  char* cast279 = (char*)&(_str_19);
  char* cast280 = (char*)&(_str_20);
  char* sel281 = cast278 ? cast279 : cast280;
  struct std__basic_ostream_char__std__char_traits_char__* r282 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r275, sel281);
  char* cast283 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* r284 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r282, cast283);
  int c285 = 74;
  int r286 = isxdigit(c285);
  _Bool cast287 = (_Bool)r286;
  char* cast288 = (char*)&(_str_22);
  char* cast289 = (char*)&(_str_23);
  char* sel290 = cast287 ? cast288 : cast289;
  struct std__basic_ostream_char__std__char_traits_char__* r291 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r284, sel290);
  char* cast292 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* r293 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r291, cast292);
  int c294 = 55;
  int r295 = isxdigit(c294);
  _Bool cast296 = (_Bool)r295;
  char* cast297 = (char*)&(_str_24);
  char* cast298 = (char*)&(_str_25);
  char* sel299 = cast296 ? cast297 : cast298;
  struct std__basic_ostream_char__std__char_traits_char__* r300 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r293, sel299);
  char* cast301 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* r302 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r300, cast301);
  int c303 = 36;
  int r304 = isxdigit(c303);
  _Bool cast305 = (_Bool)r304;
  char* cast306 = (char*)&(_str_26);
  char* cast307 = (char*)&(_str_27);
  char* sel308 = cast305 ? cast306 : cast307;
  struct std__basic_ostream_char__std__char_traits_char__* r309 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r302, sel308);
  char* cast310 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* r311 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r309, cast310);
  int c312 = 102;
  int r313 = isxdigit(c312);
  _Bool cast314 = (_Bool)r313;
  char* cast315 = (char*)&(_str_28);
  char* cast316 = (char*)&(_str_29);
  char* sel317 = cast314 ? cast315 : cast316;
  struct std__basic_ostream_char__std__char_traits_char__* r318 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r311, sel317);
  char* cast319 = (char*)&(_str_30);
  struct std__basic_ostream_char__std__char_traits_char__* r320 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r318, cast319);
  struct std__basic_ostream_char__std__char_traits_char__* r321 = std__ostream__operator___std__ostream_____(r320, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c322 = 0;
  __retval185 = c322;
  int t323 = __retval185;
  return t323;
}

