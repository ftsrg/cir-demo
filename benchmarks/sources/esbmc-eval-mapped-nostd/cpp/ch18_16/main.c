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
char _str[11] = "1234567abc";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[25] = "The original string is \"";
char _str_2[26] = "\"\nThe converted value is ";
char _str_3[43] = "\nThe remainder of the original string is \"";
char _str_4[36] = "\"\nThe converted value minus 567 is ";
extern unsigned long __isoc23_strtoul(char* p0, char** p1, int p2);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
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

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v103, unsigned long v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  unsigned long __n107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __n107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  unsigned long t110 = __n107;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = std__ostream__std__ostream___M_insert_unsigned_long_(t109, t110);
  __retval108 = r111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v113, void* v114) {
bb115:
  struct std__basic_ostream_char__std__char_traits_char__* this116;
  void* __pf117;
  struct std__basic_ostream_char__std__char_traits_char__* __retval118;
  this116 = v113;
  __pf117 = v114;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = this116;
  void* t120 = __pf117;
  struct std__basic_ostream_char__std__char_traits_char__* r121 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t120)(t119);
  __retval118 = r121;
  struct std__basic_ostream_char__std__char_traits_char__* t122 = __retval118;
  return t122;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v123) {
bb124:
  struct std__basic_ostream_char__std__char_traits_char__* __os125;
  struct std__basic_ostream_char__std__char_traits_char__* __retval126;
  __os125 = v123;
  struct std__basic_ostream_char__std__char_traits_char__* t127 = __os125;
  struct std__basic_ostream_char__std__char_traits_char__* r128 = std__ostream__flush(t127);
  __retval126 = r128;
  struct std__basic_ostream_char__std__char_traits_char__* t129 = __retval126;
  return t129;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v130) {
bb131:
  struct std__ctype_char_* __f132;
  struct std__ctype_char_* __retval133;
  __f132 = v130;
    struct std__ctype_char_* t134 = __f132;
    _Bool cast135 = (_Bool)t134;
    _Bool u136 = !cast135;
    if (u136) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t137 = __f132;
  __retval133 = t137;
  struct std__ctype_char_* t138 = __retval133;
  return t138;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v139, char v140) {
bb141:
  struct std__ctype_char_* this142;
  char __c143;
  char __retval144;
  this142 = v139;
  __c143 = v140;
  struct std__ctype_char_* t145 = this142;
    char t146 = t145->_M_widen_ok;
    _Bool cast147 = (_Bool)t146;
    if (cast147) {
      char t148 = __c143;
      unsigned char cast149 = (unsigned char)t148;
      unsigned long cast150 = (unsigned long)cast149;
      char t151 = t145->_M_widen[cast150];
      __retval144 = t151;
      char t152 = __retval144;
      return t152;
    }
  std__ctype_char____M_widen_init___const(t145);
  char t153 = __c143;
  void** v154 = (void**)t145;
  void* v155 = *((void**)v154);
  char vcall158 = (char)__VERIFIER_virtual_call_char_char(t145, 6, t153);
  __retval144 = vcall158;
  char t159 = __retval144;
  return t159;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v160, char v161) {
bb162:
  struct std__basic_ios_char__std__char_traits_char__* this163;
  char __c164;
  char __retval165;
  this163 = v160;
  __c164 = v161;
  struct std__basic_ios_char__std__char_traits_char__* t166 = this163;
  struct std__ctype_char_* t167 = t166->_M_ctype;
  struct std__ctype_char_* r168 = std__ctype_char__const__std____check_facet_std__ctype_char___(t167);
  char t169 = __c164;
  char r170 = std__ctype_char___widen_char__const(r168, t169);
  __retval165 = r170;
  char t171 = __retval165;
  return t171;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v172) {
bb173:
  struct std__basic_ostream_char__std__char_traits_char__* __os174;
  struct std__basic_ostream_char__std__char_traits_char__* __retval175;
  __os174 = v172;
  struct std__basic_ostream_char__std__char_traits_char__* t176 = __os174;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __os174;
  void** v178 = (void**)t177;
  void* v179 = *((void**)v178);
  unsigned char* cast180 = (unsigned char*)v179;
  long c181 = -24;
  unsigned char* ptr182 = &(cast180)[c181];
  long* cast183 = (long*)ptr182;
  long t184 = *cast183;
  unsigned char* cast185 = (unsigned char*)t177;
  unsigned char* ptr186 = &(cast185)[t184];
  struct std__basic_ostream_char__std__char_traits_char__* cast187 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr186;
  struct std__basic_ios_char__std__char_traits_char__* cast188 = (struct std__basic_ios_char__std__char_traits_char__*)cast187;
  char c189 = 10;
  char r190 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast188, c189);
  struct std__basic_ostream_char__std__char_traits_char__* r191 = std__ostream__put(t176, r190);
  struct std__basic_ostream_char__std__char_traits_char__* r192 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r191);
  __retval175 = r192;
  struct std__basic_ostream_char__std__char_traits_char__* t193 = __retval175;
  return t193;
}

// function: main
int main() {
bb194:
  int __retval195;
  unsigned long x196;
  char* string1197;
  char* remainderPtr198;
  int c199 = 0;
  __retval195 = c199;
  char* cast200 = (char*)&(_str);
  string1197 = cast200;
  char* t201 = string1197;
  int c202 = 0;
  unsigned long r203 = __isoc23_strtoul(t201, &remainderPtr198, c202);
  x196 = r203;
  char* cast204 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r205 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast204);
  char* t206 = string1197;
  struct std__basic_ostream_char__std__char_traits_char__* r207 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r205, t206);
  char* cast208 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r209 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r207, cast208);
  unsigned long t210 = x196;
  struct std__basic_ostream_char__std__char_traits_char__* r211 = std__ostream__operator__(r209, t210);
  char* cast212 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r213 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r211, cast212);
  char* t214 = remainderPtr198;
  struct std__basic_ostream_char__std__char_traits_char__* r215 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r213, t214);
  char* cast216 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r217 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r215, cast216);
  unsigned long t218 = x196;
  unsigned long c219 = 567;
  unsigned long b220 = t218 - c219;
  struct std__basic_ostream_char__std__char_traits_char__* r221 = std__ostream__operator__(r217, b220);
  struct std__basic_ostream_char__std__char_traits_char__* r222 = std__ostream__operator___std__ostream_____(r221, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c223 = 0;
  __retval195 = c223;
  int t224 = __retval195;
  return t224;
}

