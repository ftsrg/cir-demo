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
union anon_0 { int integer1; double double1; char* charPtr; };
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
char _str[10] = "Anonymous";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[6] = "union";
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
int main();

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v0) {
bb1:
  struct std__ios_base* this2;
  long __retval3;
  this2 = v0;
  struct std__ios_base* t4 = this2;
  long t5 = t4->_M_width;
  __retval3 = t5;
  long t6 = __retval3;
  return t6;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v7, char v8) {
bb9:
  struct std__basic_ostream_char__std__char_traits_char__* __out10;
  char __c11;
  struct std__basic_ostream_char__std__char_traits_char__* __retval12;
  __out10 = v7;
  __c11 = v8;
    struct std__basic_ostream_char__std__char_traits_char__* t13 = __out10;
    void** v14 = (void**)t13;
    void* v15 = *((void**)v14);
    unsigned char* cast16 = (unsigned char*)v15;
    long c17 = -24;
    unsigned char* ptr18 = &(cast16)[c17];
    long* cast19 = (long*)ptr18;
    long t20 = *cast19;
    unsigned char* cast21 = (unsigned char*)t13;
    unsigned char* ptr22 = &(cast21)[t20];
    struct std__basic_ostream_char__std__char_traits_char__* cast23 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr22;
    struct std__ios_base* cast24 = (struct std__ios_base*)cast23;
    long r25 = std__ios_base__width___const(cast24);
    long c26 = 0;
    _Bool c27 = ((r25 != c26)) ? 1 : 0;
    if (c27) {
      struct std__basic_ostream_char__std__char_traits_char__* t28 = __out10;
      long c29 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r30 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t28, &__c11, c29);
      __retval12 = r30;
      struct std__basic_ostream_char__std__char_traits_char__* t31 = __retval12;
      return t31;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t32 = __out10;
  char t33 = __c11;
  struct std__basic_ostream_char__std__char_traits_char__* r34 = std__ostream__put(t32, t33);
  struct std__basic_ostream_char__std__char_traits_char__* t35 = __out10;
  __retval12 = t35;
  struct std__basic_ostream_char__std__char_traits_char__* t36 = __retval12;
  return t36;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v37, void* v38) {
bb39:
  struct std__basic_ostream_char__std__char_traits_char__* this40;
  void* __pf41;
  struct std__basic_ostream_char__std__char_traits_char__* __retval42;
  this40 = v37;
  __pf41 = v38;
  struct std__basic_ostream_char__std__char_traits_char__* t43 = this40;
  void* t44 = __pf41;
  struct std__basic_ostream_char__std__char_traits_char__* r45 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t44)(t43);
  __retval42 = r45;
  struct std__basic_ostream_char__std__char_traits_char__* t46 = __retval42;
  return t46;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v47) {
bb48:
  struct std__basic_ostream_char__std__char_traits_char__* __os49;
  struct std__basic_ostream_char__std__char_traits_char__* __retval50;
  __os49 = v47;
  struct std__basic_ostream_char__std__char_traits_char__* t51 = __os49;
  struct std__basic_ostream_char__std__char_traits_char__* r52 = std__ostream__flush(t51);
  __retval50 = r52;
  struct std__basic_ostream_char__std__char_traits_char__* t53 = __retval50;
  return t53;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v54) {
bb55:
  struct std__ctype_char_* __f56;
  struct std__ctype_char_* __retval57;
  __f56 = v54;
    struct std__ctype_char_* t58 = __f56;
    _Bool cast59 = (_Bool)t58;
    _Bool u60 = !cast59;
    if (u60) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t61 = __f56;
  __retval57 = t61;
  struct std__ctype_char_* t62 = __retval57;
  return t62;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v63, char v64) {
bb65:
  struct std__ctype_char_* this66;
  char __c67;
  char __retval68;
  this66 = v63;
  __c67 = v64;
  struct std__ctype_char_* t69 = this66;
    char t70 = t69->_M_widen_ok;
    _Bool cast71 = (_Bool)t70;
    if (cast71) {
      char t72 = __c67;
      unsigned char cast73 = (unsigned char)t72;
      unsigned long cast74 = (unsigned long)cast73;
      char t75 = t69->_M_widen[cast74];
      __retval68 = t75;
      char t76 = __retval68;
      return t76;
    }
  std__ctype_char____M_widen_init___const(t69);
  char t77 = __c67;
  void** v78 = (void**)t69;
  void* v79 = *((void**)v78);
  char vcall82 = (char)__VERIFIER_virtual_call_char_char(t69, 6, t77);
  __retval68 = vcall82;
  char t83 = __retval68;
  return t83;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v84, char v85) {
bb86:
  struct std__basic_ios_char__std__char_traits_char__* this87;
  char __c88;
  char __retval89;
  this87 = v84;
  __c88 = v85;
  struct std__basic_ios_char__std__char_traits_char__* t90 = this87;
  struct std__ctype_char_* t91 = t90->_M_ctype;
  struct std__ctype_char_* r92 = std__ctype_char__const__std____check_facet_std__ctype_char___(t91);
  char t93 = __c88;
  char r94 = std__ctype_char___widen_char__const(r92, t93);
  __retval89 = r94;
  char t95 = __retval89;
  return t95;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v96) {
bb97:
  struct std__basic_ostream_char__std__char_traits_char__* __os98;
  struct std__basic_ostream_char__std__char_traits_char__* __retval99;
  __os98 = v96;
  struct std__basic_ostream_char__std__char_traits_char__* t100 = __os98;
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __os98;
  void** v102 = (void**)t101;
  void* v103 = *((void**)v102);
  unsigned char* cast104 = (unsigned char*)v103;
  long c105 = -24;
  unsigned char* ptr106 = &(cast104)[c105];
  long* cast107 = (long*)ptr106;
  long t108 = *cast107;
  unsigned char* cast109 = (unsigned char*)t101;
  unsigned char* ptr110 = &(cast109)[t108];
  struct std__basic_ostream_char__std__char_traits_char__* cast111 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr110;
  struct std__basic_ios_char__std__char_traits_char__* cast112 = (struct std__basic_ios_char__std__char_traits_char__*)cast111;
  char c113 = 10;
  char r114 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast112, c113);
  struct std__basic_ostream_char__std__char_traits_char__* r115 = std__ostream__put(t100, r114);
  struct std__basic_ostream_char__std__char_traits_char__* r116 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r115);
  __retval99 = r116;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __retval99;
  return t117;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v118, double v119) {
bb120:
  struct std__basic_ostream_char__std__char_traits_char__* this121;
  double __f122;
  struct std__basic_ostream_char__std__char_traits_char__* __retval123;
  this121 = v118;
  __f122 = v119;
  struct std__basic_ostream_char__std__char_traits_char__* t124 = this121;
  double t125 = __f122;
  struct std__basic_ostream_char__std__char_traits_char__* r126 = std__ostream__std__ostream___M_insert_double_(t124, t125);
  __retval123 = r126;
  struct std__basic_ostream_char__std__char_traits_char__* t127 = __retval123;
  return t127;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v128, int v129) {
bb130:
  int __a131;
  int __b132;
  int __retval133;
  __a131 = v128;
  __b132 = v129;
  int t134 = __a131;
  int t135 = __b132;
  int b136 = t134 | t135;
  __retval133 = b136;
  int t137 = __retval133;
  return t137;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v138) {
bb139:
  struct std__basic_ios_char__std__char_traits_char__* this140;
  int __retval141;
  this140 = v138;
  struct std__basic_ios_char__std__char_traits_char__* t142 = this140;
  struct std__ios_base* base143 = (struct std__ios_base*)((char *)t142 + 0);
  int t144 = base143->_M_streambuf_state;
  __retval141 = t144;
  int t145 = __retval141;
  return t145;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v146, int v147) {
bb148:
  struct std__basic_ios_char__std__char_traits_char__* this149;
  int __state150;
  this149 = v146;
  __state150 = v147;
  struct std__basic_ios_char__std__char_traits_char__* t151 = this149;
  int r152 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t151);
  int t153 = __state150;
  int r154 = std__operator_(r152, t153);
  std__basic_ios_char__std__char_traits_char_____clear(t151, r154);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb155:
  _Bool __retval156;
    _Bool c157 = 0;
    __retval156 = c157;
    _Bool t158 = __retval156;
    return t158;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v159, char* v160) {
bb161:
  char* __c1162;
  char* __c2163;
  _Bool __retval164;
  __c1162 = v159;
  __c2163 = v160;
  char* t165 = __c1162;
  char t166 = *t165;
  int cast167 = (int)t166;
  char* t168 = __c2163;
  char t169 = *t168;
  int cast170 = (int)t169;
  _Bool c171 = ((cast167 == cast170)) ? 1 : 0;
  __retval164 = c171;
  _Bool t172 = __retval164;
  return t172;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v173) {
bb174:
  char* __p175;
  unsigned long __retval176;
  unsigned long __i177;
  __p175 = v173;
  unsigned long c178 = 0;
  __i177 = c178;
    char ref_tmp0179;
    while (1) {
      unsigned long t180 = __i177;
      char* t181 = __p175;
      char* ptr182 = &(t181)[t180];
      char c183 = 0;
      ref_tmp0179 = c183;
      _Bool r184 = __gnu_cxx__char_traits_char___eq(ptr182, &ref_tmp0179);
      _Bool u185 = !r184;
      if (!u185) break;
      unsigned long t186 = __i177;
      unsigned long u187 = t186 + 1;
      __i177 = u187;
    }
  unsigned long t188 = __i177;
  __retval176 = t188;
  unsigned long t189 = __retval176;
  return t189;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v190) {
bb191:
  char* __s192;
  unsigned long __retval193;
  __s192 = v190;
    _Bool r194 = std____is_constant_evaluated();
    if (r194) {
      char* t195 = __s192;
      unsigned long r196 = __gnu_cxx__char_traits_char___length(t195);
      __retval193 = r196;
      unsigned long t197 = __retval193;
      return t197;
    }
  char* t198 = __s192;
  unsigned long r199 = strlen(t198);
  __retval193 = r199;
  unsigned long t200 = __retval193;
  return t200;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v201, char* v202) {
bb203:
  struct std__basic_ostream_char__std__char_traits_char__* __out204;
  char* __s205;
  struct std__basic_ostream_char__std__char_traits_char__* __retval206;
  __out204 = v201;
  __s205 = v202;
    char* t207 = __s205;
    _Bool cast208 = (_Bool)t207;
    _Bool u209 = !cast208;
    if (u209) {
      struct std__basic_ostream_char__std__char_traits_char__* t210 = __out204;
      void** v211 = (void**)t210;
      void* v212 = *((void**)v211);
      unsigned char* cast213 = (unsigned char*)v212;
      long c214 = -24;
      unsigned char* ptr215 = &(cast213)[c214];
      long* cast216 = (long*)ptr215;
      long t217 = *cast216;
      unsigned char* cast218 = (unsigned char*)t210;
      unsigned char* ptr219 = &(cast218)[t217];
      struct std__basic_ostream_char__std__char_traits_char__* cast220 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr219;
      struct std__basic_ios_char__std__char_traits_char__* cast221 = (struct std__basic_ios_char__std__char_traits_char__*)cast220;
      int t222 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast221, t222);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t223 = __out204;
      char* t224 = __s205;
      char* t225 = __s205;
      unsigned long r226 = std__char_traits_char___length(t225);
      long cast227 = (long)r226;
      struct std__basic_ostream_char__std__char_traits_char__* r228 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t223, t224, cast227);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t229 = __out204;
  __retval206 = t229;
  struct std__basic_ostream_char__std__char_traits_char__* t230 = __retval206;
  return t230;
}

// function: main
int main() {
bb231:
  int __retval232;
  union anon_0 unnamed233;
  int integer2234;
  double double2235;
  char* char2Ptr236;
  int c237 = 0;
  __retval232 = c237;
  int c238 = 1;
  integer2234 = c238;
  double c239 = 0x1.a666666666666p1;
  double2235 = c239;
  char* cast240 = (char*)&(_str);
  char2Ptr236 = cast240;
  int t241 = integer2234;
  struct std__basic_ostream_char__std__char_traits_char__* r242 = std__ostream__operator___2(&_ZSt4cout, t241);
  char c243 = 32;
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r242, c243);
  int c245 = 2;
  unnamed233.integer1 = c245;
  int t246 = unnamed233.integer1;
  struct std__basic_ostream_char__std__char_traits_char__* r247 = std__ostream__operator___2(&_ZSt4cout, t246);
  struct std__basic_ostream_char__std__char_traits_char__* r248 = std__ostream__operator___std__ostream_____(r247, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  double t249 = double2235;
  struct std__basic_ostream_char__std__char_traits_char__* r250 = std__ostream__operator__(&_ZSt4cout, t249);
  char c251 = 32;
  struct std__basic_ostream_char__std__char_traits_char__* r252 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r250, c251);
  double c253 = 0x1.199999999999ap2;
  unnamed233.double1 = c253;
  double t254 = unnamed233.double1;
  struct std__basic_ostream_char__std__char_traits_char__* r255 = std__ostream__operator__(&_ZSt4cout, t254);
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__ostream__operator___std__ostream_____(r255, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* t257 = char2Ptr236;
  struct std__basic_ostream_char__std__char_traits_char__* r258 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, t257);
  char c259 = 32;
  struct std__basic_ostream_char__std__char_traits_char__* r260 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r258, c259);
  char* cast261 = (char*)&(_str_1);
  unnamed233.charPtr = cast261;
  char* t262 = unnamed233.charPtr;
  struct std__basic_ostream_char__std__char_traits_char__* r263 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, t262);
  struct std__basic_ostream_char__std__char_traits_char__* r264 = std__ostream__operator___std__ostream_____(r263, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c265 = 0;
  __retval232 = c265;
  int t266 = __retval232;
  return t266;
}

