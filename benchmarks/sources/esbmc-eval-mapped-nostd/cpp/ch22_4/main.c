extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Base1 { int value; };
struct Base2 { char letter; };
struct Derived { struct Base1 __field0; struct Base2 __field1; double __field2; };
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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[31] = "Object base1 contains integer ";
char _str_1[34] = "\nObject base2 contains character ";
char _str_2[27] = "\nObject derived contains:\n";
char _str_3[3] = "\n\n";
char _str_4[31] = "Data members of Derived can be";
char _str_5[24] = " accessed individually:";
char _str_6[15] = "\n    Integer: ";
char _str_7[15] = "\n  Character: ";
char _str_8[15] = "\nReal number: ";
char _str_9[30] = "Derived can be treated as an ";
char _str_10[30] = "object of either base class:\n";
char _str_11[28] = "base1Ptr->getData() yields ";
char _str_12[28] = "base2Ptr->getData() yields ";
void Base1__Base1(struct Base1* p0, int p1);
void Base2__Base2(struct Base2* p0, char p1);
extern void Derived__Derived(struct Derived* p0, int p1, char p2, double p3);
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
extern struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct Derived* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int Base1__getData___const(struct Base1* p0);
char Base2__getData___const(struct Base2* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
extern double Derived__getReal___const(struct Derived* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
int main();

// function: _ZN5Base1C2Ei
void Base1__Base1(struct Base1* v0, int v1) {
bb2:
  struct Base1* this3;
  int parameterValue4;
  this3 = v0;
  parameterValue4 = v1;
  struct Base1* t5 = this3;
  int t6 = parameterValue4;
  t5->value = t6;
  return;
}

// function: _ZN5Base2C2Ec
void Base2__Base2(struct Base2* v7, char v8) {
bb9:
  struct Base2* this10;
  char characterData11;
  this10 = v7;
  characterData11 = v8;
  struct Base2* t12 = this10;
  char t13 = characterData11;
  t12->letter = t13;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v14, int v15) {
bb16:
  int __a17;
  int __b18;
  int __retval19;
  __a17 = v14;
  __b18 = v15;
  int t20 = __a17;
  int t21 = __b18;
  int b22 = t20 | t21;
  __retval19 = b22;
  int t23 = __retval19;
  return t23;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __retval27;
  this26 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  struct std__ios_base* base29 = (struct std__ios_base*)((char *)t28 + 0);
  int t30 = base29->_M_streambuf_state;
  __retval27 = t30;
  int t31 = __retval27;
  return t31;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v32, int v33) {
bb34:
  struct std__basic_ios_char__std__char_traits_char__* this35;
  int __state36;
  this35 = v32;
  __state36 = v33;
  struct std__basic_ios_char__std__char_traits_char__* t37 = this35;
  int r38 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t37);
  int t39 = __state36;
  int r40 = std__operator_(r38, t39);
  std__basic_ios_char__std__char_traits_char_____clear(t37, r40);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb41:
  _Bool __retval42;
    _Bool c43 = 0;
    __retval42 = c43;
    _Bool t44 = __retval42;
    return t44;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v45, char* v46) {
bb47:
  char* __c148;
  char* __c249;
  _Bool __retval50;
  __c148 = v45;
  __c249 = v46;
  char* t51 = __c148;
  char t52 = *t51;
  int cast53 = (int)t52;
  char* t54 = __c249;
  char t55 = *t54;
  int cast56 = (int)t55;
  _Bool c57 = ((cast53 == cast56)) ? 1 : 0;
  __retval50 = c57;
  _Bool t58 = __retval50;
  return t58;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v59) {
bb60:
  char* __p61;
  unsigned long __retval62;
  unsigned long __i63;
  __p61 = v59;
  unsigned long c64 = 0;
  __i63 = c64;
    char ref_tmp065;
    while (1) {
      unsigned long t66 = __i63;
      char* t67 = __p61;
      char* ptr68 = &(t67)[t66];
      char c69 = 0;
      ref_tmp065 = c69;
      _Bool r70 = __gnu_cxx__char_traits_char___eq(ptr68, &ref_tmp065);
      _Bool u71 = !r70;
      if (!u71) break;
      unsigned long t72 = __i63;
      unsigned long u73 = t72 + 1;
      __i63 = u73;
    }
  unsigned long t74 = __i63;
  __retval62 = t74;
  unsigned long t75 = __retval62;
  return t75;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v76) {
bb77:
  char* __s78;
  unsigned long __retval79;
  __s78 = v76;
    _Bool r80 = std____is_constant_evaluated();
    if (r80) {
      char* t81 = __s78;
      unsigned long r82 = __gnu_cxx__char_traits_char___length(t81);
      __retval79 = r82;
      unsigned long t83 = __retval79;
      return t83;
    }
  char* t84 = __s78;
  unsigned long r85 = strlen(t84);
  __retval79 = r85;
  unsigned long t86 = __retval79;
  return t86;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v87, char* v88) {
bb89:
  struct std__basic_ostream_char__std__char_traits_char__* __out90;
  char* __s91;
  struct std__basic_ostream_char__std__char_traits_char__* __retval92;
  __out90 = v87;
  __s91 = v88;
    char* t93 = __s91;
    _Bool cast94 = (_Bool)t93;
    _Bool u95 = !cast94;
    if (u95) {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out90;
      void** v97 = (void**)t96;
      void* v98 = *((void**)v97);
      unsigned char* cast99 = (unsigned char*)v98;
      long c100 = -24;
      unsigned char* ptr101 = &(cast99)[c100];
      long* cast102 = (long*)ptr101;
      long t103 = *cast102;
      unsigned char* cast104 = (unsigned char*)t96;
      unsigned char* ptr105 = &(cast104)[t103];
      struct std__basic_ostream_char__std__char_traits_char__* cast106 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr105;
      struct std__basic_ios_char__std__char_traits_char__* cast107 = (struct std__basic_ios_char__std__char_traits_char__*)cast106;
      int t108 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast107, t108);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t109 = __out90;
      char* t110 = __s91;
      char* t111 = __s91;
      unsigned long r112 = std__char_traits_char___length(t111);
      long cast113 = (long)r112;
      struct std__basic_ostream_char__std__char_traits_char__* r114 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t109, t110, cast113);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t115 = __out90;
  __retval92 = t115;
  struct std__basic_ostream_char__std__char_traits_char__* t116 = __retval92;
  return t116;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v117) {
bb118:
  struct std__ios_base* this119;
  long __retval120;
  this119 = v117;
  struct std__ios_base* t121 = this119;
  long t122 = t121->_M_width;
  __retval120 = t122;
  long t123 = __retval120;
  return t123;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v124, char v125) {
bb126:
  struct std__basic_ostream_char__std__char_traits_char__* __out127;
  char __c128;
  struct std__basic_ostream_char__std__char_traits_char__* __retval129;
  __out127 = v124;
  __c128 = v125;
    struct std__basic_ostream_char__std__char_traits_char__* t130 = __out127;
    void** v131 = (void**)t130;
    void* v132 = *((void**)v131);
    unsigned char* cast133 = (unsigned char*)v132;
    long c134 = -24;
    unsigned char* ptr135 = &(cast133)[c134];
    long* cast136 = (long*)ptr135;
    long t137 = *cast136;
    unsigned char* cast138 = (unsigned char*)t130;
    unsigned char* ptr139 = &(cast138)[t137];
    struct std__basic_ostream_char__std__char_traits_char__* cast140 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr139;
    struct std__ios_base* cast141 = (struct std__ios_base*)cast140;
    long r142 = std__ios_base__width___const(cast141);
    long c143 = 0;
    _Bool c144 = ((r142 != c143)) ? 1 : 0;
    if (c144) {
      struct std__basic_ostream_char__std__char_traits_char__* t145 = __out127;
      long c146 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r147 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t145, &__c128, c146);
      __retval129 = r147;
      struct std__basic_ostream_char__std__char_traits_char__* t148 = __retval129;
      return t148;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t149 = __out127;
  char t150 = __c128;
  struct std__basic_ostream_char__std__char_traits_char__* r151 = std__ostream__put(t149, t150);
  struct std__basic_ostream_char__std__char_traits_char__* t152 = __out127;
  __retval129 = t152;
  struct std__basic_ostream_char__std__char_traits_char__* t153 = __retval129;
  return t153;
}

// function: _ZNK5Base17getDataEv
int Base1__getData___const(struct Base1* v154) {
bb155:
  struct Base1* this156;
  int __retval157;
  this156 = v154;
  struct Base1* t158 = this156;
  int t159 = t158->value;
  __retval157 = t159;
  int t160 = __retval157;
  return t160;
}

// function: _ZNK5Base27getDataEv
char Base2__getData___const(struct Base2* v161) {
bb162:
  struct Base2* this163;
  char __retval164;
  this163 = v161;
  struct Base2* t165 = this163;
  char t166 = t165->letter;
  __retval164 = t166;
  char t167 = __retval164;
  return t167;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v168, double v169) {
bb170:
  struct std__basic_ostream_char__std__char_traits_char__* this171;
  double __f172;
  struct std__basic_ostream_char__std__char_traits_char__* __retval173;
  this171 = v168;
  __f172 = v169;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = this171;
  double t175 = __f172;
  struct std__basic_ostream_char__std__char_traits_char__* r176 = std__ostream__std__ostream___M_insert_double_(t174, t175);
  __retval173 = r176;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __retval173;
  return t177;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v178, void* v179) {
bb180:
  struct std__basic_ostream_char__std__char_traits_char__* this181;
  void* __pf182;
  struct std__basic_ostream_char__std__char_traits_char__* __retval183;
  this181 = v178;
  __pf182 = v179;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = this181;
  void* t185 = __pf182;
  struct std__basic_ostream_char__std__char_traits_char__* r186 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t185)(t184);
  __retval183 = r186;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __retval183;
  return t187;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v188) {
bb189:
  struct std__basic_ostream_char__std__char_traits_char__* __os190;
  struct std__basic_ostream_char__std__char_traits_char__* __retval191;
  __os190 = v188;
  struct std__basic_ostream_char__std__char_traits_char__* t192 = __os190;
  struct std__basic_ostream_char__std__char_traits_char__* r193 = std__ostream__flush(t192);
  __retval191 = r193;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __retval191;
  return t194;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v195) {
bb196:
  struct std__ctype_char_* __f197;
  struct std__ctype_char_* __retval198;
  __f197 = v195;
    struct std__ctype_char_* t199 = __f197;
    _Bool cast200 = (_Bool)t199;
    _Bool u201 = !cast200;
    if (u201) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t202 = __f197;
  __retval198 = t202;
  struct std__ctype_char_* t203 = __retval198;
  return t203;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v204, char v205) {
bb206:
  struct std__ctype_char_* this207;
  char __c208;
  char __retval209;
  this207 = v204;
  __c208 = v205;
  struct std__ctype_char_* t210 = this207;
    char t211 = t210->_M_widen_ok;
    _Bool cast212 = (_Bool)t211;
    if (cast212) {
      char t213 = __c208;
      unsigned char cast214 = (unsigned char)t213;
      unsigned long cast215 = (unsigned long)cast214;
      char t216 = t210->_M_widen[cast215];
      __retval209 = t216;
      char t217 = __retval209;
      return t217;
    }
  std__ctype_char____M_widen_init___const(t210);
  char t218 = __c208;
  void** v219 = (void**)t210;
  void* v220 = *((void**)v219);
  char vcall223 = (char)__VERIFIER_virtual_call_char_char(t210, 6, t218);
  __retval209 = vcall223;
  char t224 = __retval209;
  return t224;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v225, char v226) {
bb227:
  struct std__basic_ios_char__std__char_traits_char__* this228;
  char __c229;
  char __retval230;
  this228 = v225;
  __c229 = v226;
  struct std__basic_ios_char__std__char_traits_char__* t231 = this228;
  struct std__ctype_char_* t232 = t231->_M_ctype;
  struct std__ctype_char_* r233 = std__ctype_char__const__std____check_facet_std__ctype_char___(t232);
  char t234 = __c229;
  char r235 = std__ctype_char___widen_char__const(r233, t234);
  __retval230 = r235;
  char t236 = __retval230;
  return t236;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v237) {
bb238:
  struct std__basic_ostream_char__std__char_traits_char__* __os239;
  struct std__basic_ostream_char__std__char_traits_char__* __retval240;
  __os239 = v237;
  struct std__basic_ostream_char__std__char_traits_char__* t241 = __os239;
  struct std__basic_ostream_char__std__char_traits_char__* t242 = __os239;
  void** v243 = (void**)t242;
  void* v244 = *((void**)v243);
  unsigned char* cast245 = (unsigned char*)v244;
  long c246 = -24;
  unsigned char* ptr247 = &(cast245)[c246];
  long* cast248 = (long*)ptr247;
  long t249 = *cast248;
  unsigned char* cast250 = (unsigned char*)t242;
  unsigned char* ptr251 = &(cast250)[t249];
  struct std__basic_ostream_char__std__char_traits_char__* cast252 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr251;
  struct std__basic_ios_char__std__char_traits_char__* cast253 = (struct std__basic_ios_char__std__char_traits_char__*)cast252;
  char c254 = 10;
  char r255 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast253, c254);
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__ostream__put(t241, r255);
  struct std__basic_ostream_char__std__char_traits_char__* r257 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r256);
  __retval240 = r257;
  struct std__basic_ostream_char__std__char_traits_char__* t258 = __retval240;
  return t258;
}

// function: main
int main() {
bb259:
  int __retval260;
  struct Base1 base1261;
  struct Base1* base1Ptr262;
  struct Base2 base2263;
  struct Base2* base2Ptr264;
  struct Derived derived265;
  int c266 = 0;
  __retval260 = c266;
  int c267 = 10;
  Base1__Base1(&base1261, c267);
  struct Base1* c268 = ((void*)0);
  base1Ptr262 = c268;
  char c269 = 90;
  Base2__Base2(&base2263, c269);
  struct Base2* c270 = ((void*)0);
  base2Ptr264 = c270;
  int c271 = 7;
  char c272 = 65;
  double c273 = 0x1.cp1;
  Derived__Derived(&derived265, c271, c272, c273);
  char* cast274 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r275 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast274);
  int r276 = Base1__getData___const(&base1261);
  struct std__basic_ostream_char__std__char_traits_char__* r277 = std__ostream__operator___2(r275, r276);
  char* cast278 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r279 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r277, cast278);
  char r280 = Base2__getData___const(&base2263);
  struct std__basic_ostream_char__std__char_traits_char__* r281 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r279, r280);
  char* cast282 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r283 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r281, cast282);
  struct std__basic_ostream_char__std__char_traits_char__* r284 = operator__(r283, &derived265);
  char* cast285 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r286 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r284, cast285);
  char* cast287 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r288 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast287);
  char* cast289 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r290 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r288, cast289);
  char* cast291 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r292 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r290, cast291);
  struct Base1* base293 = (struct Base1*)((char *)&(derived265) + 0);
  int r294 = Base1__getData___const(base293);
  struct std__basic_ostream_char__std__char_traits_char__* r295 = std__ostream__operator___2(r292, r294);
  char* cast296 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r295, cast296);
  struct Base2* base298 = (struct Base2*)((char *)&(derived265) + 4);
  char r299 = Base2__getData___const(base298);
  struct std__basic_ostream_char__std__char_traits_char__* r300 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r297, r299);
  char* cast301 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r302 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r300, cast301);
  double r303 = Derived__getReal___const(&derived265);
  struct std__basic_ostream_char__std__char_traits_char__* r304 = std__ostream__operator__(r302, r303);
  char* cast305 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r306 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r304, cast305);
  char* cast307 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r308 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast307);
  char* cast309 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r310 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r308, cast309);
  struct Base1* base311 = (struct Base1*)((char *)&(derived265) + 0);
  base1Ptr262 = base311;
  char* cast312 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* r313 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast312);
  struct Base1* t314 = base1Ptr262;
  int r315 = Base1__getData___const(t314);
  struct std__basic_ostream_char__std__char_traits_char__* r316 = std__ostream__operator___2(r313, r315);
  char c317 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r318 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r316, c317);
  struct Base2* base319 = ((&(derived265)) ? (struct Base2*)((char *)&(derived265) + 4) : (struct Base2*)0);
  base2Ptr264 = base319;
  char* cast320 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* r321 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast320);
  struct Base2* t322 = base2Ptr264;
  char r323 = Base2__getData___const(t322);
  struct std__basic_ostream_char__std__char_traits_char__* r324 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r321, r323);
  struct std__basic_ostream_char__std__char_traits_char__* r325 = std__ostream__operator___std__ostream_____(r324, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c326 = 0;
  __retval260 = c326;
  int t327 = __retval260;
  return t327;
}

