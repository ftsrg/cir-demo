extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct ConstCastTest { int number; };
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
char _str[29] = "\nNumber after modification: ";
char _str_1[26] = "Initial value of number: ";
void ConstCastTest__setNumber(struct ConstCastTest* p0, int p1);
int ConstCastTest__getNumber___const(struct ConstCastTest* p0);
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
void ConstCastTest__printNumber___const(struct ConstCastTest* p0);
int main();

// function: _ZN13ConstCastTest9setNumberEi
void ConstCastTest__setNumber(struct ConstCastTest* v0, int v1) {
bb2:
  struct ConstCastTest* this3;
  int num4;
  this3 = v0;
  num4 = v1;
  struct ConstCastTest* t5 = this3;
  int t6 = num4;
  t5->number = t6;
  return;
}

// function: _ZNK13ConstCastTest9getNumberEv
int ConstCastTest__getNumber___const(struct ConstCastTest* v7) {
bb8:
  struct ConstCastTest* this9;
  int __retval10;
  this9 = v7;
  struct ConstCastTest* t11 = this9;
  int t12 = t11->number;
  __retval10 = t12;
  int t13 = __retval10;
  return t13;
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v117, void* v118) {
bb119:
  struct std__basic_ostream_char__std__char_traits_char__* this120;
  void* __pf121;
  struct std__basic_ostream_char__std__char_traits_char__* __retval122;
  this120 = v117;
  __pf121 = v118;
  struct std__basic_ostream_char__std__char_traits_char__* t123 = this120;
  void* t124 = __pf121;
  struct std__basic_ostream_char__std__char_traits_char__* r125 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t124)(t123);
  __retval122 = r125;
  struct std__basic_ostream_char__std__char_traits_char__* t126 = __retval122;
  return t126;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v127) {
bb128:
  struct std__basic_ostream_char__std__char_traits_char__* __os129;
  struct std__basic_ostream_char__std__char_traits_char__* __retval130;
  __os129 = v127;
  struct std__basic_ostream_char__std__char_traits_char__* t131 = __os129;
  struct std__basic_ostream_char__std__char_traits_char__* r132 = std__ostream__flush(t131);
  __retval130 = r132;
  struct std__basic_ostream_char__std__char_traits_char__* t133 = __retval130;
  return t133;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v134) {
bb135:
  struct std__ctype_char_* __f136;
  struct std__ctype_char_* __retval137;
  __f136 = v134;
    struct std__ctype_char_* t138 = __f136;
    _Bool cast139 = (_Bool)t138;
    _Bool u140 = !cast139;
    if (u140) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t141 = __f136;
  __retval137 = t141;
  struct std__ctype_char_* t142 = __retval137;
  return t142;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v143, char v144) {
bb145:
  struct std__ctype_char_* this146;
  char __c147;
  char __retval148;
  this146 = v143;
  __c147 = v144;
  struct std__ctype_char_* t149 = this146;
    char t150 = t149->_M_widen_ok;
    _Bool cast151 = (_Bool)t150;
    if (cast151) {
      char t152 = __c147;
      unsigned char cast153 = (unsigned char)t152;
      unsigned long cast154 = (unsigned long)cast153;
      char t155 = t149->_M_widen[cast154];
      __retval148 = t155;
      char t156 = __retval148;
      return t156;
    }
  std__ctype_char____M_widen_init___const(t149);
  char t157 = __c147;
  void** v158 = (void**)t149;
  void* v159 = *((void**)v158);
  char vcall162 = (char)__VERIFIER_virtual_call_char_char(t149, 6, t157);
  __retval148 = vcall162;
  char t163 = __retval148;
  return t163;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v164, char v165) {
bb166:
  struct std__basic_ios_char__std__char_traits_char__* this167;
  char __c168;
  char __retval169;
  this167 = v164;
  __c168 = v165;
  struct std__basic_ios_char__std__char_traits_char__* t170 = this167;
  struct std__ctype_char_* t171 = t170->_M_ctype;
  struct std__ctype_char_* r172 = std__ctype_char__const__std____check_facet_std__ctype_char___(t171);
  char t173 = __c168;
  char r174 = std__ctype_char___widen_char__const(r172, t173);
  __retval169 = r174;
  char t175 = __retval169;
  return t175;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v176) {
bb177:
  struct std__basic_ostream_char__std__char_traits_char__* __os178;
  struct std__basic_ostream_char__std__char_traits_char__* __retval179;
  __os178 = v176;
  struct std__basic_ostream_char__std__char_traits_char__* t180 = __os178;
  struct std__basic_ostream_char__std__char_traits_char__* t181 = __os178;
  void** v182 = (void**)t181;
  void* v183 = *((void**)v182);
  unsigned char* cast184 = (unsigned char*)v183;
  long c185 = -24;
  unsigned char* ptr186 = &(cast184)[c185];
  long* cast187 = (long*)ptr186;
  long t188 = *cast187;
  unsigned char* cast189 = (unsigned char*)t181;
  unsigned char* ptr190 = &(cast189)[t188];
  struct std__basic_ostream_char__std__char_traits_char__* cast191 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr190;
  struct std__basic_ios_char__std__char_traits_char__* cast192 = (struct std__basic_ios_char__std__char_traits_char__*)cast191;
  char c193 = 10;
  char r194 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast192, c193);
  struct std__basic_ostream_char__std__char_traits_char__* r195 = std__ostream__put(t180, r194);
  struct std__basic_ostream_char__std__char_traits_char__* r196 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r195);
  __retval179 = r196;
  struct std__basic_ostream_char__std__char_traits_char__* t197 = __retval179;
  return t197;
}

// function: _ZNK13ConstCastTest11printNumberEv
void ConstCastTest__printNumber___const(struct ConstCastTest* v198) {
bb199:
  struct ConstCastTest* this200;
  this200 = v198;
  struct ConstCastTest* t201 = this200;
  char* cast202 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r203 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast202);
  int t204 = t201->number;
  int u205 = t204 - 1;
  t201->number = u205;
  int t206 = t201->number;
  struct std__basic_ostream_char__std__char_traits_char__* r207 = std__ostream__operator__(&_ZSt4cout, t206);
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__ostream__operator___std__ostream_____(r207, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: main
int main() {
bb209:
  int __retval210;
  struct ConstCastTest test211;
  int c212 = 0;
  __retval210 = c212;
  int c213 = 8;
  ConstCastTest__setNumber(&test211, c213);
  char* cast214 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r215 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast214);
  int r216 = ConstCastTest__getNumber___const(&test211);
  struct std__basic_ostream_char__std__char_traits_char__* r217 = std__ostream__operator__(r215, r216);
  ConstCastTest__printNumber___const(&test211);
  int c218 = 0;
  __retval210 = c218;
  int t219 = __retval210;
  return t219;
}

