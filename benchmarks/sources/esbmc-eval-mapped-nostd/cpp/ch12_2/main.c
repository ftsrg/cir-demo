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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6eofbitE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[28] = "Before input, cin.eof() is ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[42] = "Enter a sentence followed by end-of-file:";
char _str_2[25] = "\nEOF in this system is: ";
char _str_3[27] = "After input, cin.eof() is ";
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_bool_(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
int std__operator_(int p0, int p1);
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern int std__istream__get(struct std__basic_istream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int main();

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v0, int v1) {
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
  int r26 = std__operator__2(r24, t25);
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

// function: _ZNSolsEb
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v103, _Bool v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  _Bool __n107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __n107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  _Bool t110 = __n107;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = std__ostream__std__ostream___M_insert_bool_(t109, t110);
  __retval108 = r111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v113, int v114) {
bb115:
  int __a116;
  int __b117;
  int __retval118;
  __a116 = v113;
  __b117 = v114;
  int t119 = __a116;
  int t120 = __b117;
  int b121 = t119 & t120;
  __retval118 = b121;
  int t122 = __retval118;
  return t122;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* v123) {
bb124:
  struct std__basic_ios_char__std__char_traits_char__* this125;
  _Bool __retval126;
  this125 = v123;
  struct std__basic_ios_char__std__char_traits_char__* t127 = this125;
  int r128 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t127);
  int t129 = _ZNSt8ios_base6eofbitE_const;
  int r130 = std__operator_(r128, t129);
  int c131 = 0;
  _Bool c132 = ((r130 != c131)) ? 1 : 0;
  __retval126 = c132;
  _Bool t133 = __retval126;
  return t133;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v134, void* v135) {
bb136:
  struct std__basic_ostream_char__std__char_traits_char__* this137;
  void* __pf138;
  struct std__basic_ostream_char__std__char_traits_char__* __retval139;
  this137 = v134;
  __pf138 = v135;
  struct std__basic_ostream_char__std__char_traits_char__* t140 = this137;
  void* t141 = __pf138;
  struct std__basic_ostream_char__std__char_traits_char__* r142 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t141)(t140);
  __retval139 = r142;
  struct std__basic_ostream_char__std__char_traits_char__* t143 = __retval139;
  return t143;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v144) {
bb145:
  struct std__basic_ostream_char__std__char_traits_char__* __os146;
  struct std__basic_ostream_char__std__char_traits_char__* __retval147;
  __os146 = v144;
  struct std__basic_ostream_char__std__char_traits_char__* t148 = __os146;
  struct std__basic_ostream_char__std__char_traits_char__* r149 = std__ostream__flush(t148);
  __retval147 = r149;
  struct std__basic_ostream_char__std__char_traits_char__* t150 = __retval147;
  return t150;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v151) {
bb152:
  struct std__ctype_char_* __f153;
  struct std__ctype_char_* __retval154;
  __f153 = v151;
    struct std__ctype_char_* t155 = __f153;
    _Bool cast156 = (_Bool)t155;
    _Bool u157 = !cast156;
    if (u157) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t158 = __f153;
  __retval154 = t158;
  struct std__ctype_char_* t159 = __retval154;
  return t159;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v160, char v161) {
bb162:
  struct std__ctype_char_* this163;
  char __c164;
  char __retval165;
  this163 = v160;
  __c164 = v161;
  struct std__ctype_char_* t166 = this163;
    char t167 = t166->_M_widen_ok;
    _Bool cast168 = (_Bool)t167;
    if (cast168) {
      char t169 = __c164;
      unsigned char cast170 = (unsigned char)t169;
      unsigned long cast171 = (unsigned long)cast170;
      char t172 = t166->_M_widen[cast171];
      __retval165 = t172;
      char t173 = __retval165;
      return t173;
    }
  std__ctype_char____M_widen_init___const(t166);
  char t174 = __c164;
  void** v175 = (void**)t166;
  void* v176 = *((void**)v175);
  char vcall179 = (char)__VERIFIER_virtual_call_char_char(t166, 6, t174);
  __retval165 = vcall179;
  char t180 = __retval165;
  return t180;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v181, char v182) {
bb183:
  struct std__basic_ios_char__std__char_traits_char__* this184;
  char __c185;
  char __retval186;
  this184 = v181;
  __c185 = v182;
  struct std__basic_ios_char__std__char_traits_char__* t187 = this184;
  struct std__ctype_char_* t188 = t187->_M_ctype;
  struct std__ctype_char_* r189 = std__ctype_char__const__std____check_facet_std__ctype_char___(t188);
  char t190 = __c185;
  char r191 = std__ctype_char___widen_char__const(r189, t190);
  __retval186 = r191;
  char t192 = __retval186;
  return t192;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v193) {
bb194:
  struct std__basic_ostream_char__std__char_traits_char__* __os195;
  struct std__basic_ostream_char__std__char_traits_char__* __retval196;
  __os195 = v193;
  struct std__basic_ostream_char__std__char_traits_char__* t197 = __os195;
  struct std__basic_ostream_char__std__char_traits_char__* t198 = __os195;
  void** v199 = (void**)t198;
  void* v200 = *((void**)v199);
  unsigned char* cast201 = (unsigned char*)v200;
  long c202 = -24;
  unsigned char* ptr203 = &(cast201)[c202];
  long* cast204 = (long*)ptr203;
  long t205 = *cast204;
  unsigned char* cast206 = (unsigned char*)t198;
  unsigned char* ptr207 = &(cast206)[t205];
  struct std__basic_ostream_char__std__char_traits_char__* cast208 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr207;
  struct std__basic_ios_char__std__char_traits_char__* cast209 = (struct std__basic_ios_char__std__char_traits_char__*)cast208;
  char c210 = 10;
  char r211 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast209, c210);
  struct std__basic_ostream_char__std__char_traits_char__* r212 = std__ostream__put(t197, r211);
  struct std__basic_ostream_char__std__char_traits_char__* r213 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r212);
  __retval196 = r213;
  struct std__basic_ostream_char__std__char_traits_char__* t214 = __retval196;
  return t214;
}

// function: main
int main() {
bb215:
  int __retval216;
  int character217;
  int c218 = 0;
  __retval216 = c218;
  char* cast219 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r220 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast219);
  void** v221 = (void**)&_ZSt3cin;
  void* v222 = *((void**)v221);
  unsigned char* cast223 = (unsigned char*)v222;
  long c224 = -24;
  unsigned char* ptr225 = &(cast223)[c224];
  long* cast226 = (long*)ptr225;
  long t227 = *cast226;
  unsigned char* cast228 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr229 = &(cast228)[t227];
  struct std__basic_istream_char__std__char_traits_char__* cast230 = (struct std__basic_istream_char__std__char_traits_char__*)ptr229;
  struct std__basic_ios_char__std__char_traits_char__* cast231 = (struct std__basic_ios_char__std__char_traits_char__*)cast230;
  _Bool r232 = std__basic_ios_char__std__char_traits_char_____eof___const(cast231);
  struct std__basic_ostream_char__std__char_traits_char__* r233 = std__ostream__operator__(r220, r232);
  struct std__basic_ostream_char__std__char_traits_char__* r234 = std__ostream__operator___std__ostream_____(r233, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast235 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r236 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r234, cast235);
  struct std__basic_ostream_char__std__char_traits_char__* r237 = std__ostream__operator___std__ostream_____(r236, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    while (1) {
      int r238 = std__istream__get(&_ZSt3cin);
      character217 = r238;
      int c239 = -1;
      _Bool c240 = ((r238 != c239)) ? 1 : 0;
      if (!c240) break;
      int t241 = character217;
      char cast242 = (char)t241;
      struct std__basic_ostream_char__std__char_traits_char__* r243 = std__ostream__put(&_ZSt4cout, cast242);
    }
  char* cast244 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r245 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast244);
  int t246 = character217;
  struct std__basic_ostream_char__std__char_traits_char__* r247 = std__ostream__operator___2(r245, t246);
  struct std__basic_ostream_char__std__char_traits_char__* r248 = std__ostream__operator___std__ostream_____(r247, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast249 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r250 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast249);
  void** v251 = (void**)&_ZSt3cin;
  void* v252 = *((void**)v251);
  unsigned char* cast253 = (unsigned char*)v252;
  long c254 = -24;
  unsigned char* ptr255 = &(cast253)[c254];
  long* cast256 = (long*)ptr255;
  long t257 = *cast256;
  unsigned char* cast258 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr259 = &(cast258)[t257];
  struct std__basic_istream_char__std__char_traits_char__* cast260 = (struct std__basic_istream_char__std__char_traits_char__*)ptr259;
  struct std__basic_ios_char__std__char_traits_char__* cast261 = (struct std__basic_ios_char__std__char_traits_char__*)cast260;
  _Bool r262 = std__basic_ios_char__std__char_traits_char_____eof___const(cast261);
  struct std__basic_ostream_char__std__char_traits_char__* r263 = std__ostream__operator__(r250, r262);
  struct std__basic_ostream_char__std__char_traits_char__* r264 = std__ostream__operator___std__ostream_____(r263, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c265 = 0;
  __retval216 = c265;
  int t266 = __retval216;
  return t266;
}

