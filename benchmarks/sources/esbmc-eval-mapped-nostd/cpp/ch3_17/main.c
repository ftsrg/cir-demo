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
char _str[5] = "x = ";
char _str_1[23] = " before squareByValue\n";
char _str_2[34] = "Value returned by squareByValue: ";
char _str_3[22] = " after squareByValue\n";
char _str_4[5] = "z = ";
char _str_5[26] = " before squareByReference";
char _str_6[25] = " after squareByReference";
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int squareByValue(int p0);
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
void squareByReference(int* p0);
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

// function: _Z13squareByValuei
int squareByValue(int v103) {
bb104:
  int number105;
  int __retval106;
  number105 = v103;
  int t107 = number105;
  int t108 = number105;
  int b109 = t108 * t107;
  number105 = b109;
  __retval106 = b109;
  int t110 = __retval106;
  return t110;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v111, void* v112) {
bb113:
  struct std__basic_ostream_char__std__char_traits_char__* this114;
  void* __pf115;
  struct std__basic_ostream_char__std__char_traits_char__* __retval116;
  this114 = v111;
  __pf115 = v112;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = this114;
  void* t118 = __pf115;
  struct std__basic_ostream_char__std__char_traits_char__* r119 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t118)(t117);
  __retval116 = r119;
  struct std__basic_ostream_char__std__char_traits_char__* t120 = __retval116;
  return t120;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v121) {
bb122:
  struct std__basic_ostream_char__std__char_traits_char__* __os123;
  struct std__basic_ostream_char__std__char_traits_char__* __retval124;
  __os123 = v121;
  struct std__basic_ostream_char__std__char_traits_char__* t125 = __os123;
  struct std__basic_ostream_char__std__char_traits_char__* r126 = std__ostream__flush(t125);
  __retval124 = r126;
  struct std__basic_ostream_char__std__char_traits_char__* t127 = __retval124;
  return t127;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v128) {
bb129:
  struct std__ctype_char_* __f130;
  struct std__ctype_char_* __retval131;
  __f130 = v128;
    struct std__ctype_char_* t132 = __f130;
    _Bool cast133 = (_Bool)t132;
    _Bool u134 = !cast133;
    if (u134) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t135 = __f130;
  __retval131 = t135;
  struct std__ctype_char_* t136 = __retval131;
  return t136;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v137, char v138) {
bb139:
  struct std__ctype_char_* this140;
  char __c141;
  char __retval142;
  this140 = v137;
  __c141 = v138;
  struct std__ctype_char_* t143 = this140;
    char t144 = t143->_M_widen_ok;
    _Bool cast145 = (_Bool)t144;
    if (cast145) {
      char t146 = __c141;
      unsigned char cast147 = (unsigned char)t146;
      unsigned long cast148 = (unsigned long)cast147;
      char t149 = t143->_M_widen[cast148];
      __retval142 = t149;
      char t150 = __retval142;
      return t150;
    }
  std__ctype_char____M_widen_init___const(t143);
  char t151 = __c141;
  void** v152 = (void**)t143;
  void* v153 = *((void**)v152);
  char vcall156 = (char)__VERIFIER_virtual_call_char_char(t143, 6, t151);
  __retval142 = vcall156;
  char t157 = __retval142;
  return t157;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v158, char v159) {
bb160:
  struct std__basic_ios_char__std__char_traits_char__* this161;
  char __c162;
  char __retval163;
  this161 = v158;
  __c162 = v159;
  struct std__basic_ios_char__std__char_traits_char__* t164 = this161;
  struct std__ctype_char_* t165 = t164->_M_ctype;
  struct std__ctype_char_* r166 = std__ctype_char__const__std____check_facet_std__ctype_char___(t165);
  char t167 = __c162;
  char r168 = std__ctype_char___widen_char__const(r166, t167);
  __retval163 = r168;
  char t169 = __retval163;
  return t169;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v170) {
bb171:
  struct std__basic_ostream_char__std__char_traits_char__* __os172;
  struct std__basic_ostream_char__std__char_traits_char__* __retval173;
  __os172 = v170;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = __os172;
  struct std__basic_ostream_char__std__char_traits_char__* t175 = __os172;
  void** v176 = (void**)t175;
  void* v177 = *((void**)v176);
  unsigned char* cast178 = (unsigned char*)v177;
  long c179 = -24;
  unsigned char* ptr180 = &(cast178)[c179];
  long* cast181 = (long*)ptr180;
  long t182 = *cast181;
  unsigned char* cast183 = (unsigned char*)t175;
  unsigned char* ptr184 = &(cast183)[t182];
  struct std__basic_ostream_char__std__char_traits_char__* cast185 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr184;
  struct std__basic_ios_char__std__char_traits_char__* cast186 = (struct std__basic_ios_char__std__char_traits_char__*)cast185;
  char c187 = 10;
  char r188 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast186, c187);
  struct std__basic_ostream_char__std__char_traits_char__* r189 = std__ostream__put(t174, r188);
  struct std__basic_ostream_char__std__char_traits_char__* r190 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r189);
  __retval173 = r190;
  struct std__basic_ostream_char__std__char_traits_char__* t191 = __retval173;
  return t191;
}

// function: _Z17squareByReferenceRi
void squareByReference(int* v192) {
bb193:
  int* numberRef194;
  numberRef194 = v192;
  int* t195 = numberRef194;
  int t196 = *t195;
  int* t197 = numberRef194;
  int t198 = *t197;
  int b199 = t198 * t196;
  *t197 = b199;
  return;
}

// function: main
int main() {
bb200:
  int __retval201;
  int x202;
  int z203;
  int c204 = 0;
  __retval201 = c204;
  int c205 = 2;
  x202 = c205;
  int c206 = 4;
  z203 = c206;
  char* cast207 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast207);
  int t209 = x202;
  struct std__basic_ostream_char__std__char_traits_char__* r210 = std__ostream__operator__(r208, t209);
  char* cast211 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r212 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r210, cast211);
  char* cast213 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r214 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast213);
  int t215 = x202;
  int r216 = squareByValue(t215);
  struct std__basic_ostream_char__std__char_traits_char__* r217 = std__ostream__operator__(r214, r216);
  struct std__basic_ostream_char__std__char_traits_char__* r218 = std__ostream__operator___std__ostream_____(r217, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast219 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r220 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast219);
  int t221 = x202;
  struct std__basic_ostream_char__std__char_traits_char__* r222 = std__ostream__operator__(r220, t221);
  char* cast223 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r224 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r222, cast223);
  struct std__basic_ostream_char__std__char_traits_char__* r225 = std__ostream__operator___std__ostream_____(r224, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast226 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r227 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast226);
  int t228 = z203;
  struct std__basic_ostream_char__std__char_traits_char__* r229 = std__ostream__operator__(r227, t228);
  char* cast230 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r231 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r229, cast230);
  struct std__basic_ostream_char__std__char_traits_char__* r232 = std__ostream__operator___std__ostream_____(r231, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  squareByReference(&z203);
  char* cast233 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r234 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast233);
  int t235 = z203;
  struct std__basic_ostream_char__std__char_traits_char__* r236 = std__ostream__operator__(r234, t235);
  char* cast237 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r238 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r236, cast237);
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__ostream__operator___std__ostream_____(r238, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c240 = 0;
  __retval201 = c240;
  int t241 = __retval201;
  return t241;
}

