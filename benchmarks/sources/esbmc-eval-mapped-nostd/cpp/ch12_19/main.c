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

int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base6eofbitE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[30] = "Before a bad input operation:";
char _str_1[17] = "\ncin.rdstate(): ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[17] = "\n    cin.eof(): ";
char _str_3[17] = "\n   cin.fail(): ";
char _str_4[17] = "\n    cin.bad(): ";
char _str_5[17] = "\n   cin.good(): ";
char _str_6[46] = "\n\nExpects an integer, but enter a character: ";
char _str_7[29] = "After a bad input operation:";
char _str_8[18] = "After cin.clear()";
char _str_9[14] = "\ncin.fail(): ";
char _str_10[14] = "\ncin.good(): ";
int std__operator__2(int p0, int p1);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_bool_(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
int std__operator_(int p0, int p1);
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____bad___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____good___const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
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

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v10, int v11) {
bb12:
  struct std__basic_ios_char__std__char_traits_char__* this13;
  int __state14;
  this13 = v10;
  __state14 = v11;
  struct std__basic_ios_char__std__char_traits_char__* t15 = this13;
  int r16 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t15);
  int t17 = __state14;
  int r18 = std__operator__2(r16, t17);
  std__basic_ios_char__std__char_traits_char_____clear(t15, r18);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb19:
  _Bool __retval20;
    _Bool c21 = 0;
    __retval20 = c21;
    _Bool t22 = __retval20;
    return t22;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v23, char* v24) {
bb25:
  char* __c126;
  char* __c227;
  _Bool __retval28;
  __c126 = v23;
  __c227 = v24;
  char* t29 = __c126;
  char t30 = *t29;
  int cast31 = (int)t30;
  char* t32 = __c227;
  char t33 = *t32;
  int cast34 = (int)t33;
  _Bool c35 = ((cast31 == cast34)) ? 1 : 0;
  __retval28 = c35;
  _Bool t36 = __retval28;
  return t36;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v37) {
bb38:
  char* __p39;
  unsigned long __retval40;
  unsigned long __i41;
  __p39 = v37;
  unsigned long c42 = 0;
  __i41 = c42;
    char ref_tmp043;
    while (1) {
      unsigned long t44 = __i41;
      char* t45 = __p39;
      char* ptr46 = &(t45)[t44];
      char c47 = 0;
      ref_tmp043 = c47;
      _Bool r48 = __gnu_cxx__char_traits_char___eq(ptr46, &ref_tmp043);
      _Bool u49 = !r48;
      if (!u49) break;
      unsigned long t50 = __i41;
      unsigned long u51 = t50 + 1;
      __i41 = u51;
    }
  unsigned long t52 = __i41;
  __retval40 = t52;
  unsigned long t53 = __retval40;
  return t53;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v54) {
bb55:
  char* __s56;
  unsigned long __retval57;
  __s56 = v54;
    _Bool r58 = std____is_constant_evaluated();
    if (r58) {
      char* t59 = __s56;
      unsigned long r60 = __gnu_cxx__char_traits_char___length(t59);
      __retval57 = r60;
      unsigned long t61 = __retval57;
      return t61;
    }
  char* t62 = __s56;
  unsigned long r63 = strlen(t62);
  __retval57 = r63;
  unsigned long t64 = __retval57;
  return t64;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v65, char* v66) {
bb67:
  struct std__basic_ostream_char__std__char_traits_char__* __out68;
  char* __s69;
  struct std__basic_ostream_char__std__char_traits_char__* __retval70;
  __out68 = v65;
  __s69 = v66;
    char* t71 = __s69;
    _Bool cast72 = (_Bool)t71;
    _Bool u73 = !cast72;
    if (u73) {
      struct std__basic_ostream_char__std__char_traits_char__* t74 = __out68;
      void** v75 = (void**)t74;
      void* v76 = *((void**)v75);
      unsigned char* cast77 = (unsigned char*)v76;
      long c78 = -24;
      unsigned char* ptr79 = &(cast77)[c78];
      long* cast80 = (long*)ptr79;
      long t81 = *cast80;
      unsigned char* cast82 = (unsigned char*)t74;
      unsigned char* ptr83 = &(cast82)[t81];
      struct std__basic_ostream_char__std__char_traits_char__* cast84 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr83;
      struct std__basic_ios_char__std__char_traits_char__* cast85 = (struct std__basic_ios_char__std__char_traits_char__*)cast84;
      int t86 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast85, t86);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t87 = __out68;
      char* t88 = __s69;
      char* t89 = __s69;
      unsigned long r90 = std__char_traits_char___length(t89);
      long cast91 = (long)r90;
      struct std__basic_ostream_char__std__char_traits_char__* r92 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t87, t88, cast91);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t93 = __out68;
  __retval70 = t93;
  struct std__basic_ostream_char__std__char_traits_char__* t94 = __retval70;
  return t94;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v95) {
bb96:
  struct std__basic_ios_char__std__char_traits_char__* this97;
  int __retval98;
  this97 = v95;
  struct std__basic_ios_char__std__char_traits_char__* t99 = this97;
  struct std__ios_base* base100 = (struct std__ios_base*)((char *)t99 + 0);
  int t101 = base100->_M_streambuf_state;
  __retval98 = t101;
  int t102 = __retval98;
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

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v134) {
bb135:
  struct std__basic_ios_char__std__char_traits_char__* this136;
  _Bool __retval137;
  this136 = v134;
  struct std__basic_ios_char__std__char_traits_char__* t138 = this136;
  int r139 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t138);
  int t140 = _ZNSt8ios_base6badbitE_const;
  int t141 = _ZNSt8ios_base7failbitE_const;
  int r142 = std__operator__2(t140, t141);
  int r143 = std__operator_(r139, r142);
  int c144 = 0;
  _Bool c145 = ((r143 != c144)) ? 1 : 0;
  __retval137 = c145;
  _Bool t146 = __retval137;
  return t146;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE3badEv
_Bool std__basic_ios_char__std__char_traits_char_____bad___const(struct std__basic_ios_char__std__char_traits_char__* v147) {
bb148:
  struct std__basic_ios_char__std__char_traits_char__* this149;
  _Bool __retval150;
  this149 = v147;
  struct std__basic_ios_char__std__char_traits_char__* t151 = this149;
  int r152 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t151);
  int t153 = _ZNSt8ios_base6badbitE_const;
  int r154 = std__operator_(r152, t153);
  int c155 = 0;
  _Bool c156 = ((r154 != c155)) ? 1 : 0;
  __retval150 = c156;
  _Bool t157 = __retval150;
  return t157;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4goodEv
_Bool std__basic_ios_char__std__char_traits_char_____good___const(struct std__basic_ios_char__std__char_traits_char__* v158) {
bb159:
  struct std__basic_ios_char__std__char_traits_char__* this160;
  _Bool __retval161;
  this160 = v158;
  struct std__basic_ios_char__std__char_traits_char__* t162 = this160;
  int r163 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t162);
  int c164 = 0;
  _Bool c165 = ((r163 == c164)) ? 1 : 0;
  __retval161 = c165;
  _Bool t166 = __retval161;
  return t166;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v167, void* v168) {
bb169:
  struct std__basic_ostream_char__std__char_traits_char__* this170;
  void* __pf171;
  struct std__basic_ostream_char__std__char_traits_char__* __retval172;
  this170 = v167;
  __pf171 = v168;
  struct std__basic_ostream_char__std__char_traits_char__* t173 = this170;
  void* t174 = __pf171;
  struct std__basic_ostream_char__std__char_traits_char__* r175 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t174)(t173);
  __retval172 = r175;
  struct std__basic_ostream_char__std__char_traits_char__* t176 = __retval172;
  return t176;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v177) {
bb178:
  struct std__basic_ostream_char__std__char_traits_char__* __os179;
  struct std__basic_ostream_char__std__char_traits_char__* __retval180;
  __os179 = v177;
  struct std__basic_ostream_char__std__char_traits_char__* t181 = __os179;
  struct std__basic_ostream_char__std__char_traits_char__* r182 = std__ostream__flush(t181);
  __retval180 = r182;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __retval180;
  return t183;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v184) {
bb185:
  struct std__ctype_char_* __f186;
  struct std__ctype_char_* __retval187;
  __f186 = v184;
    struct std__ctype_char_* t188 = __f186;
    _Bool cast189 = (_Bool)t188;
    _Bool u190 = !cast189;
    if (u190) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t191 = __f186;
  __retval187 = t191;
  struct std__ctype_char_* t192 = __retval187;
  return t192;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v193, char v194) {
bb195:
  struct std__ctype_char_* this196;
  char __c197;
  char __retval198;
  this196 = v193;
  __c197 = v194;
  struct std__ctype_char_* t199 = this196;
    char t200 = t199->_M_widen_ok;
    _Bool cast201 = (_Bool)t200;
    if (cast201) {
      char t202 = __c197;
      unsigned char cast203 = (unsigned char)t202;
      unsigned long cast204 = (unsigned long)cast203;
      char t205 = t199->_M_widen[cast204];
      __retval198 = t205;
      char t206 = __retval198;
      return t206;
    }
  std__ctype_char____M_widen_init___const(t199);
  char t207 = __c197;
  void** v208 = (void**)t199;
  void* v209 = *((void**)v208);
  char vcall212 = (char)__VERIFIER_virtual_call_char_char(t199, 6, t207);
  __retval198 = vcall212;
  char t213 = __retval198;
  return t213;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v214, char v215) {
bb216:
  struct std__basic_ios_char__std__char_traits_char__* this217;
  char __c218;
  char __retval219;
  this217 = v214;
  __c218 = v215;
  struct std__basic_ios_char__std__char_traits_char__* t220 = this217;
  struct std__ctype_char_* t221 = t220->_M_ctype;
  struct std__ctype_char_* r222 = std__ctype_char__const__std____check_facet_std__ctype_char___(t221);
  char t223 = __c218;
  char r224 = std__ctype_char___widen_char__const(r222, t223);
  __retval219 = r224;
  char t225 = __retval219;
  return t225;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v226) {
bb227:
  struct std__basic_ostream_char__std__char_traits_char__* __os228;
  struct std__basic_ostream_char__std__char_traits_char__* __retval229;
  __os228 = v226;
  struct std__basic_ostream_char__std__char_traits_char__* t230 = __os228;
  struct std__basic_ostream_char__std__char_traits_char__* t231 = __os228;
  void** v232 = (void**)t231;
  void* v233 = *((void**)v232);
  unsigned char* cast234 = (unsigned char*)v233;
  long c235 = -24;
  unsigned char* ptr236 = &(cast234)[c235];
  long* cast237 = (long*)ptr236;
  long t238 = *cast237;
  unsigned char* cast239 = (unsigned char*)t231;
  unsigned char* ptr240 = &(cast239)[t238];
  struct std__basic_ostream_char__std__char_traits_char__* cast241 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr240;
  struct std__basic_ios_char__std__char_traits_char__* cast242 = (struct std__basic_ios_char__std__char_traits_char__*)cast241;
  char c243 = 10;
  char r244 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast242, c243);
  struct std__basic_ostream_char__std__char_traits_char__* r245 = std__ostream__put(t230, r244);
  struct std__basic_ostream_char__std__char_traits_char__* r246 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r245);
  __retval229 = r246;
  struct std__basic_ostream_char__std__char_traits_char__* t247 = __retval229;
  return t247;
}

// function: main
int main() {
bb248:
  int __retval249;
  int integerValue250;
  int c251 = 0;
  __retval249 = c251;
  char* cast252 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r253 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast252);
  char* cast254 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r255 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r253, cast254);
  void** v256 = (void**)&_ZSt3cin;
  void* v257 = *((void**)v256);
  unsigned char* cast258 = (unsigned char*)v257;
  long c259 = -24;
  unsigned char* ptr260 = &(cast258)[c259];
  long* cast261 = (long*)ptr260;
  long t262 = *cast261;
  unsigned char* cast263 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr264 = &(cast263)[t262];
  struct std__basic_istream_char__std__char_traits_char__* cast265 = (struct std__basic_istream_char__std__char_traits_char__*)ptr264;
  struct std__basic_ios_char__std__char_traits_char__* cast266 = (struct std__basic_ios_char__std__char_traits_char__*)cast265;
  int r267 = std__basic_ios_char__std__char_traits_char_____rdstate___const(cast266);
  struct std__basic_ostream_char__std__char_traits_char__* r268 = std__ostream__operator___2(r255, r267);
  char* cast269 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r270 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r268, cast269);
  void** v271 = (void**)&_ZSt3cin;
  void* v272 = *((void**)v271);
  unsigned char* cast273 = (unsigned char*)v272;
  long c274 = -24;
  unsigned char* ptr275 = &(cast273)[c274];
  long* cast276 = (long*)ptr275;
  long t277 = *cast276;
  unsigned char* cast278 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr279 = &(cast278)[t277];
  struct std__basic_istream_char__std__char_traits_char__* cast280 = (struct std__basic_istream_char__std__char_traits_char__*)ptr279;
  struct std__basic_ios_char__std__char_traits_char__* cast281 = (struct std__basic_ios_char__std__char_traits_char__*)cast280;
  _Bool r282 = std__basic_ios_char__std__char_traits_char_____eof___const(cast281);
  struct std__basic_ostream_char__std__char_traits_char__* r283 = std__ostream__operator__(r270, r282);
  char* cast284 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r283, cast284);
  void** v286 = (void**)&_ZSt3cin;
  void* v287 = *((void**)v286);
  unsigned char* cast288 = (unsigned char*)v287;
  long c289 = -24;
  unsigned char* ptr290 = &(cast288)[c289];
  long* cast291 = (long*)ptr290;
  long t292 = *cast291;
  unsigned char* cast293 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr294 = &(cast293)[t292];
  struct std__basic_istream_char__std__char_traits_char__* cast295 = (struct std__basic_istream_char__std__char_traits_char__*)ptr294;
  struct std__basic_ios_char__std__char_traits_char__* cast296 = (struct std__basic_ios_char__std__char_traits_char__*)cast295;
  _Bool r297 = std__basic_ios_char__std__char_traits_char_____fail___const(cast296);
  struct std__basic_ostream_char__std__char_traits_char__* r298 = std__ostream__operator__(r285, r297);
  char* cast299 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r300 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r298, cast299);
  void** v301 = (void**)&_ZSt3cin;
  void* v302 = *((void**)v301);
  unsigned char* cast303 = (unsigned char*)v302;
  long c304 = -24;
  unsigned char* ptr305 = &(cast303)[c304];
  long* cast306 = (long*)ptr305;
  long t307 = *cast306;
  unsigned char* cast308 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr309 = &(cast308)[t307];
  struct std__basic_istream_char__std__char_traits_char__* cast310 = (struct std__basic_istream_char__std__char_traits_char__*)ptr309;
  struct std__basic_ios_char__std__char_traits_char__* cast311 = (struct std__basic_ios_char__std__char_traits_char__*)cast310;
  _Bool r312 = std__basic_ios_char__std__char_traits_char_____bad___const(cast311);
  struct std__basic_ostream_char__std__char_traits_char__* r313 = std__ostream__operator__(r300, r312);
  char* cast314 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r315 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r313, cast314);
  void** v316 = (void**)&_ZSt3cin;
  void* v317 = *((void**)v316);
  unsigned char* cast318 = (unsigned char*)v317;
  long c319 = -24;
  unsigned char* ptr320 = &(cast318)[c319];
  long* cast321 = (long*)ptr320;
  long t322 = *cast321;
  unsigned char* cast323 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr324 = &(cast323)[t322];
  struct std__basic_istream_char__std__char_traits_char__* cast325 = (struct std__basic_istream_char__std__char_traits_char__*)ptr324;
  struct std__basic_ios_char__std__char_traits_char__* cast326 = (struct std__basic_ios_char__std__char_traits_char__*)cast325;
  _Bool r327 = std__basic_ios_char__std__char_traits_char_____good___const(cast326);
  struct std__basic_ostream_char__std__char_traits_char__* r328 = std__ostream__operator__(r315, r327);
  char* cast329 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r330 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r328, cast329);
  struct std__basic_istream_char__std__char_traits_char__* r331 = std__istream__operator__(&_ZSt3cin, &integerValue250);
  struct std__basic_ostream_char__std__char_traits_char__* r332 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast333 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r334 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast333);
  char* cast335 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r336 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r334, cast335);
  void** v337 = (void**)&_ZSt3cin;
  void* v338 = *((void**)v337);
  unsigned char* cast339 = (unsigned char*)v338;
  long c340 = -24;
  unsigned char* ptr341 = &(cast339)[c340];
  long* cast342 = (long*)ptr341;
  long t343 = *cast342;
  unsigned char* cast344 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr345 = &(cast344)[t343];
  struct std__basic_istream_char__std__char_traits_char__* cast346 = (struct std__basic_istream_char__std__char_traits_char__*)ptr345;
  struct std__basic_ios_char__std__char_traits_char__* cast347 = (struct std__basic_ios_char__std__char_traits_char__*)cast346;
  int r348 = std__basic_ios_char__std__char_traits_char_____rdstate___const(cast347);
  struct std__basic_ostream_char__std__char_traits_char__* r349 = std__ostream__operator___2(r336, r348);
  char* cast350 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r351 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r349, cast350);
  void** v352 = (void**)&_ZSt3cin;
  void* v353 = *((void**)v352);
  unsigned char* cast354 = (unsigned char*)v353;
  long c355 = -24;
  unsigned char* ptr356 = &(cast354)[c355];
  long* cast357 = (long*)ptr356;
  long t358 = *cast357;
  unsigned char* cast359 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr360 = &(cast359)[t358];
  struct std__basic_istream_char__std__char_traits_char__* cast361 = (struct std__basic_istream_char__std__char_traits_char__*)ptr360;
  struct std__basic_ios_char__std__char_traits_char__* cast362 = (struct std__basic_ios_char__std__char_traits_char__*)cast361;
  _Bool r363 = std__basic_ios_char__std__char_traits_char_____eof___const(cast362);
  struct std__basic_ostream_char__std__char_traits_char__* r364 = std__ostream__operator__(r351, r363);
  char* cast365 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r366 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r364, cast365);
  void** v367 = (void**)&_ZSt3cin;
  void* v368 = *((void**)v367);
  unsigned char* cast369 = (unsigned char*)v368;
  long c370 = -24;
  unsigned char* ptr371 = &(cast369)[c370];
  long* cast372 = (long*)ptr371;
  long t373 = *cast372;
  unsigned char* cast374 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr375 = &(cast374)[t373];
  struct std__basic_istream_char__std__char_traits_char__* cast376 = (struct std__basic_istream_char__std__char_traits_char__*)ptr375;
  struct std__basic_ios_char__std__char_traits_char__* cast377 = (struct std__basic_ios_char__std__char_traits_char__*)cast376;
  _Bool r378 = std__basic_ios_char__std__char_traits_char_____fail___const(cast377);
  struct std__basic_ostream_char__std__char_traits_char__* r379 = std__ostream__operator__(r366, r378);
  char* cast380 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r381 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r379, cast380);
  void** v382 = (void**)&_ZSt3cin;
  void* v383 = *((void**)v382);
  unsigned char* cast384 = (unsigned char*)v383;
  long c385 = -24;
  unsigned char* ptr386 = &(cast384)[c385];
  long* cast387 = (long*)ptr386;
  long t388 = *cast387;
  unsigned char* cast389 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr390 = &(cast389)[t388];
  struct std__basic_istream_char__std__char_traits_char__* cast391 = (struct std__basic_istream_char__std__char_traits_char__*)ptr390;
  struct std__basic_ios_char__std__char_traits_char__* cast392 = (struct std__basic_ios_char__std__char_traits_char__*)cast391;
  _Bool r393 = std__basic_ios_char__std__char_traits_char_____bad___const(cast392);
  struct std__basic_ostream_char__std__char_traits_char__* r394 = std__ostream__operator__(r381, r393);
  char* cast395 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r396 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r394, cast395);
  void** v397 = (void**)&_ZSt3cin;
  void* v398 = *((void**)v397);
  unsigned char* cast399 = (unsigned char*)v398;
  long c400 = -24;
  unsigned char* ptr401 = &(cast399)[c400];
  long* cast402 = (long*)ptr401;
  long t403 = *cast402;
  unsigned char* cast404 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr405 = &(cast404)[t403];
  struct std__basic_istream_char__std__char_traits_char__* cast406 = (struct std__basic_istream_char__std__char_traits_char__*)ptr405;
  struct std__basic_ios_char__std__char_traits_char__* cast407 = (struct std__basic_ios_char__std__char_traits_char__*)cast406;
  _Bool r408 = std__basic_ios_char__std__char_traits_char_____good___const(cast407);
  struct std__basic_ostream_char__std__char_traits_char__* r409 = std__ostream__operator__(r396, r408);
  struct std__basic_ostream_char__std__char_traits_char__* r410 = std__ostream__operator___std__ostream_____(r409, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct std__basic_ostream_char__std__char_traits_char__* r411 = std__ostream__operator___std__ostream_____(r410, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  void** v412 = (void**)&_ZSt3cin;
  void* v413 = *((void**)v412);
  unsigned char* cast414 = (unsigned char*)v413;
  long c415 = -24;
  unsigned char* ptr416 = &(cast414)[c415];
  long* cast417 = (long*)ptr416;
  long t418 = *cast417;
  unsigned char* cast419 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr420 = &(cast419)[t418];
  struct std__basic_istream_char__std__char_traits_char__* cast421 = (struct std__basic_istream_char__std__char_traits_char__*)ptr420;
  struct std__basic_ios_char__std__char_traits_char__* cast422 = (struct std__basic_ios_char__std__char_traits_char__*)cast421;
  int t423 = _ZNSt8ios_base7goodbitE_const;
  std__basic_ios_char__std__char_traits_char_____clear(cast422, t423);
  char* cast424 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r425 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast424);
  char* cast426 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r427 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r425, cast426);
  void** v428 = (void**)&_ZSt3cin;
  void* v429 = *((void**)v428);
  unsigned char* cast430 = (unsigned char*)v429;
  long c431 = -24;
  unsigned char* ptr432 = &(cast430)[c431];
  long* cast433 = (long*)ptr432;
  long t434 = *cast433;
  unsigned char* cast435 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr436 = &(cast435)[t434];
  struct std__basic_istream_char__std__char_traits_char__* cast437 = (struct std__basic_istream_char__std__char_traits_char__*)ptr436;
  struct std__basic_ios_char__std__char_traits_char__* cast438 = (struct std__basic_ios_char__std__char_traits_char__*)cast437;
  _Bool r439 = std__basic_ios_char__std__char_traits_char_____fail___const(cast438);
  struct std__basic_ostream_char__std__char_traits_char__* r440 = std__ostream__operator__(r427, r439);
  char* cast441 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r442 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r440, cast441);
  void** v443 = (void**)&_ZSt3cin;
  void* v444 = *((void**)v443);
  unsigned char* cast445 = (unsigned char*)v444;
  long c446 = -24;
  unsigned char* ptr447 = &(cast445)[c446];
  long* cast448 = (long*)ptr447;
  long t449 = *cast448;
  unsigned char* cast450 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr451 = &(cast450)[t449];
  struct std__basic_istream_char__std__char_traits_char__* cast452 = (struct std__basic_istream_char__std__char_traits_char__*)ptr451;
  struct std__basic_ios_char__std__char_traits_char__* cast453 = (struct std__basic_ios_char__std__char_traits_char__*)cast452;
  _Bool r454 = std__basic_ios_char__std__char_traits_char_____good___const(cast453);
  struct std__basic_ostream_char__std__char_traits_char__* r455 = std__ostream__operator__(r442, r454);
  struct std__basic_ostream_char__std__char_traits_char__* r456 = std__ostream__operator___std__ostream_____(r455, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c457 = 0;
  __retval249 = c457;
  int t458 = __retval249;
  return t458;
}

