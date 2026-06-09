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
char _str[10] = "Total is ";
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
int main();

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v0, void* v1) {
bb2:
  struct std__basic_ostream_char__std__char_traits_char__* this3;
  void* __pf4;
  struct std__basic_ostream_char__std__char_traits_char__* __retval5;
  this3 = v0;
  __pf4 = v1;
  struct std__basic_ostream_char__std__char_traits_char__* t6 = this3;
  void* t7 = __pf4;
  struct std__basic_ostream_char__std__char_traits_char__* r8 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t7)(t6);
  __retval5 = r8;
  struct std__basic_ostream_char__std__char_traits_char__* t9 = __retval5;
  return t9;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ostream_char__std__char_traits_char__* __os12;
  struct std__basic_ostream_char__std__char_traits_char__* __retval13;
  __os12 = v10;
  struct std__basic_ostream_char__std__char_traits_char__* t14 = __os12;
  struct std__basic_ostream_char__std__char_traits_char__* r15 = std__ostream__flush(t14);
  __retval13 = r15;
  struct std__basic_ostream_char__std__char_traits_char__* t16 = __retval13;
  return t16;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v17) {
bb18:
  struct std__ctype_char_* __f19;
  struct std__ctype_char_* __retval20;
  __f19 = v17;
    struct std__ctype_char_* t21 = __f19;
    _Bool cast22 = (_Bool)t21;
    _Bool u23 = !cast22;
    if (u23) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t24 = __f19;
  __retval20 = t24;
  struct std__ctype_char_* t25 = __retval20;
  return t25;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v26, char v27) {
bb28:
  struct std__ctype_char_* this29;
  char __c30;
  char __retval31;
  this29 = v26;
  __c30 = v27;
  struct std__ctype_char_* t32 = this29;
    char t33 = t32->_M_widen_ok;
    _Bool cast34 = (_Bool)t33;
    if (cast34) {
      char t35 = __c30;
      unsigned char cast36 = (unsigned char)t35;
      unsigned long cast37 = (unsigned long)cast36;
      char t38 = t32->_M_widen[cast37];
      __retval31 = t38;
      char t39 = __retval31;
      return t39;
    }
  std__ctype_char____M_widen_init___const(t32);
  char t40 = __c30;
  void** v41 = (void**)t32;
  void* v42 = *((void**)v41);
  char vcall45 = (char)__VERIFIER_virtual_call_char_char(t32, 6, t40);
  __retval31 = vcall45;
  char t46 = __retval31;
  return t46;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v47, char v48) {
bb49:
  struct std__basic_ios_char__std__char_traits_char__* this50;
  char __c51;
  char __retval52;
  this50 = v47;
  __c51 = v48;
  struct std__basic_ios_char__std__char_traits_char__* t53 = this50;
  struct std__ctype_char_* t54 = t53->_M_ctype;
  struct std__ctype_char_* r55 = std__ctype_char__const__std____check_facet_std__ctype_char___(t54);
  char t56 = __c51;
  char r57 = std__ctype_char___widen_char__const(r55, t56);
  __retval52 = r57;
  char t58 = __retval52;
  return t58;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v59) {
bb60:
  struct std__basic_ostream_char__std__char_traits_char__* __os61;
  struct std__basic_ostream_char__std__char_traits_char__* __retval62;
  __os61 = v59;
  struct std__basic_ostream_char__std__char_traits_char__* t63 = __os61;
  struct std__basic_ostream_char__std__char_traits_char__* t64 = __os61;
  void** v65 = (void**)t64;
  void* v66 = *((void**)v65);
  unsigned char* cast67 = (unsigned char*)v66;
  long c68 = -24;
  unsigned char* ptr69 = &(cast67)[c68];
  long* cast70 = (long*)ptr69;
  long t71 = *cast70;
  unsigned char* cast72 = (unsigned char*)t64;
  unsigned char* ptr73 = &(cast72)[t71];
  struct std__basic_ostream_char__std__char_traits_char__* cast74 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr73;
  struct std__basic_ios_char__std__char_traits_char__* cast75 = (struct std__basic_ios_char__std__char_traits_char__*)cast74;
  char c76 = 10;
  char r77 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast75, c76);
  struct std__basic_ostream_char__std__char_traits_char__* r78 = std__ostream__put(t63, r77);
  struct std__basic_ostream_char__std__char_traits_char__* r79 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r78);
  __retval62 = r79;
  struct std__basic_ostream_char__std__char_traits_char__* t80 = __retval62;
  return t80;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v81, int v82) {
bb83:
  int __a84;
  int __b85;
  int __retval86;
  __a84 = v81;
  __b85 = v82;
  int t87 = __a84;
  int t88 = __b85;
  int b89 = t87 | t88;
  __retval86 = b89;
  int t90 = __retval86;
  return t90;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v91) {
bb92:
  struct std__basic_ios_char__std__char_traits_char__* this93;
  int __retval94;
  this93 = v91;
  struct std__basic_ios_char__std__char_traits_char__* t95 = this93;
  struct std__ios_base* base96 = (struct std__ios_base*)((char *)t95 + 0);
  int t97 = base96->_M_streambuf_state;
  __retval94 = t97;
  int t98 = __retval94;
  return t98;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v99, int v100) {
bb101:
  struct std__basic_ios_char__std__char_traits_char__* this102;
  int __state103;
  this102 = v99;
  __state103 = v100;
  struct std__basic_ios_char__std__char_traits_char__* t104 = this102;
  int r105 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t104);
  int t106 = __state103;
  int r107 = std__operator_(r105, t106);
  std__basic_ios_char__std__char_traits_char_____clear(t104, r107);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb108:
  _Bool __retval109;
    _Bool c110 = 0;
    __retval109 = c110;
    _Bool t111 = __retval109;
    return t111;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v112, char* v113) {
bb114:
  char* __c1115;
  char* __c2116;
  _Bool __retval117;
  __c1115 = v112;
  __c2116 = v113;
  char* t118 = __c1115;
  char t119 = *t118;
  int cast120 = (int)t119;
  char* t121 = __c2116;
  char t122 = *t121;
  int cast123 = (int)t122;
  _Bool c124 = ((cast120 == cast123)) ? 1 : 0;
  __retval117 = c124;
  _Bool t125 = __retval117;
  return t125;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v126) {
bb127:
  char* __p128;
  unsigned long __retval129;
  unsigned long __i130;
  __p128 = v126;
  unsigned long c131 = 0;
  __i130 = c131;
    char ref_tmp0132;
    while (1) {
      unsigned long t133 = __i130;
      char* t134 = __p128;
      char* ptr135 = &(t134)[t133];
      char c136 = 0;
      ref_tmp0132 = c136;
      _Bool r137 = __gnu_cxx__char_traits_char___eq(ptr135, &ref_tmp0132);
      _Bool u138 = !r137;
      if (!u138) break;
      unsigned long t139 = __i130;
      unsigned long u140 = t139 + 1;
      __i130 = u140;
    }
  unsigned long t141 = __i130;
  __retval129 = t141;
  unsigned long t142 = __retval129;
  return t142;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v143) {
bb144:
  char* __s145;
  unsigned long __retval146;
  __s145 = v143;
    _Bool r147 = std____is_constant_evaluated();
    if (r147) {
      char* t148 = __s145;
      unsigned long r149 = __gnu_cxx__char_traits_char___length(t148);
      __retval146 = r149;
      unsigned long t150 = __retval146;
      return t150;
    }
  char* t151 = __s145;
  unsigned long r152 = strlen(t151);
  __retval146 = r152;
  unsigned long t153 = __retval146;
  return t153;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v154, char* v155) {
bb156:
  struct std__basic_ostream_char__std__char_traits_char__* __out157;
  char* __s158;
  struct std__basic_ostream_char__std__char_traits_char__* __retval159;
  __out157 = v154;
  __s158 = v155;
    char* t160 = __s158;
    _Bool cast161 = (_Bool)t160;
    _Bool u162 = !cast161;
    if (u162) {
      struct std__basic_ostream_char__std__char_traits_char__* t163 = __out157;
      void** v164 = (void**)t163;
      void* v165 = *((void**)v164);
      unsigned char* cast166 = (unsigned char*)v165;
      long c167 = -24;
      unsigned char* ptr168 = &(cast166)[c167];
      long* cast169 = (long*)ptr168;
      long t170 = *cast169;
      unsigned char* cast171 = (unsigned char*)t163;
      unsigned char* ptr172 = &(cast171)[t170];
      struct std__basic_ostream_char__std__char_traits_char__* cast173 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr172;
      struct std__basic_ios_char__std__char_traits_char__* cast174 = (struct std__basic_ios_char__std__char_traits_char__*)cast173;
      int t175 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast174, t175);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t176 = __out157;
      char* t177 = __s158;
      char* t178 = __s158;
      unsigned long r179 = std__char_traits_char___length(t178);
      long cast180 = (long)r179;
      struct std__basic_ostream_char__std__char_traits_char__* r181 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t176, t177, cast180);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t182 = __out157;
  __retval159 = t182;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __retval159;
  return t183;
}

// function: main
int main() {
bb184:
  int __retval185;
  int y186;
  int x187;
  int total188;
  int c189 = 0;
  __retval185 = c189;
  int c190 = 1;
  x187 = c190;
  int c191 = 0;
  total188 = c191;
    while (1) {
      int t192 = x187;
      int c193 = 10;
      _Bool c194 = ((t192 <= c193)) ? 1 : 0;
      if (!c194) break;
        int t195 = x187;
        int t196 = x187;
        int b197 = t195 * t196;
        y186 = b197;
        int t198 = y186;
        struct std__basic_ostream_char__std__char_traits_char__* r199 = std__ostream__operator__(&_ZSt4cout, t198);
        struct std__basic_ostream_char__std__char_traits_char__* r200 = std__ostream__operator___std__ostream_____(r199, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int t201 = y186;
        int t202 = total188;
        int b203 = t202 + t201;
        total188 = b203;
        int t204 = x187;
        int u205 = t204 + 1;
        x187 = u205;
    }
  char* cast206 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r207 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast206);
  int t208 = total188;
  struct std__basic_ostream_char__std__char_traits_char__* r209 = std__ostream__operator__(r207, t208);
  struct std__basic_ostream_char__std__char_traits_char__* r210 = std__ostream__operator___std__ostream_____(r209, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c211 = 0;
  __retval185 = c211;
  int t212 = __retval185;
  return t212;
}

