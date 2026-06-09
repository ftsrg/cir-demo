extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Count { int x; };
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
char _str[50] = "Assign 1 to x and print using the object's name: ";
char _str_1[44] = "Assign 2 to x and print using a reference: ";
char _str_2[42] = "Assign 3 to x and print using a pointer: ";
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
void Count__print(struct Count* p0);
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

// function: _ZN5Count5printEv
void Count__print(struct Count* v81) {
bb82:
  struct Count* this83;
  this83 = v81;
  struct Count* t84 = this83;
  int t85 = t84->x;
  struct std__basic_ostream_char__std__char_traits_char__* r86 = std__ostream__operator__(&_ZSt4cout, t85);
  struct std__basic_ostream_char__std__char_traits_char__* r87 = std__ostream__operator___std__ostream_____(r86, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v88, int v89) {
bb90:
  int __a91;
  int __b92;
  int __retval93;
  __a91 = v88;
  __b92 = v89;
  int t94 = __a91;
  int t95 = __b92;
  int b96 = t94 | t95;
  __retval93 = b96;
  int t97 = __retval93;
  return t97;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v98) {
bb99:
  struct std__basic_ios_char__std__char_traits_char__* this100;
  int __retval101;
  this100 = v98;
  struct std__basic_ios_char__std__char_traits_char__* t102 = this100;
  struct std__ios_base* base103 = (struct std__ios_base*)((char *)t102 + 0);
  int t104 = base103->_M_streambuf_state;
  __retval101 = t104;
  int t105 = __retval101;
  return t105;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v106, int v107) {
bb108:
  struct std__basic_ios_char__std__char_traits_char__* this109;
  int __state110;
  this109 = v106;
  __state110 = v107;
  struct std__basic_ios_char__std__char_traits_char__* t111 = this109;
  int r112 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t111);
  int t113 = __state110;
  int r114 = std__operator_(r112, t113);
  std__basic_ios_char__std__char_traits_char_____clear(t111, r114);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb115:
  _Bool __retval116;
    _Bool c117 = 0;
    __retval116 = c117;
    _Bool t118 = __retval116;
    return t118;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v119, char* v120) {
bb121:
  char* __c1122;
  char* __c2123;
  _Bool __retval124;
  __c1122 = v119;
  __c2123 = v120;
  char* t125 = __c1122;
  char t126 = *t125;
  int cast127 = (int)t126;
  char* t128 = __c2123;
  char t129 = *t128;
  int cast130 = (int)t129;
  _Bool c131 = ((cast127 == cast130)) ? 1 : 0;
  __retval124 = c131;
  _Bool t132 = __retval124;
  return t132;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v133) {
bb134:
  char* __p135;
  unsigned long __retval136;
  unsigned long __i137;
  __p135 = v133;
  unsigned long c138 = 0;
  __i137 = c138;
    char ref_tmp0139;
    while (1) {
      unsigned long t140 = __i137;
      char* t141 = __p135;
      char* ptr142 = &(t141)[t140];
      char c143 = 0;
      ref_tmp0139 = c143;
      _Bool r144 = __gnu_cxx__char_traits_char___eq(ptr142, &ref_tmp0139);
      _Bool u145 = !r144;
      if (!u145) break;
      unsigned long t146 = __i137;
      unsigned long u147 = t146 + 1;
      __i137 = u147;
    }
  unsigned long t148 = __i137;
  __retval136 = t148;
  unsigned long t149 = __retval136;
  return t149;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v150) {
bb151:
  char* __s152;
  unsigned long __retval153;
  __s152 = v150;
    _Bool r154 = std____is_constant_evaluated();
    if (r154) {
      char* t155 = __s152;
      unsigned long r156 = __gnu_cxx__char_traits_char___length(t155);
      __retval153 = r156;
      unsigned long t157 = __retval153;
      return t157;
    }
  char* t158 = __s152;
  unsigned long r159 = strlen(t158);
  __retval153 = r159;
  unsigned long t160 = __retval153;
  return t160;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v161, char* v162) {
bb163:
  struct std__basic_ostream_char__std__char_traits_char__* __out164;
  char* __s165;
  struct std__basic_ostream_char__std__char_traits_char__* __retval166;
  __out164 = v161;
  __s165 = v162;
    char* t167 = __s165;
    _Bool cast168 = (_Bool)t167;
    _Bool u169 = !cast168;
    if (u169) {
      struct std__basic_ostream_char__std__char_traits_char__* t170 = __out164;
      void** v171 = (void**)t170;
      void* v172 = *((void**)v171);
      unsigned char* cast173 = (unsigned char*)v172;
      long c174 = -24;
      unsigned char* ptr175 = &(cast173)[c174];
      long* cast176 = (long*)ptr175;
      long t177 = *cast176;
      unsigned char* cast178 = (unsigned char*)t170;
      unsigned char* ptr179 = &(cast178)[t177];
      struct std__basic_ostream_char__std__char_traits_char__* cast180 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr179;
      struct std__basic_ios_char__std__char_traits_char__* cast181 = (struct std__basic_ios_char__std__char_traits_char__*)cast180;
      int t182 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast181, t182);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t183 = __out164;
      char* t184 = __s165;
      char* t185 = __s165;
      unsigned long r186 = std__char_traits_char___length(t185);
      long cast187 = (long)r186;
      struct std__basic_ostream_char__std__char_traits_char__* r188 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t183, t184, cast187);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t189 = __out164;
  __retval166 = t189;
  struct std__basic_ostream_char__std__char_traits_char__* t190 = __retval166;
  return t190;
}

// function: main
int main() {
bb191:
  int __retval192;
  struct Count counter193;
  struct Count* counterPtr194;
  struct Count* counterRef195;
  int c196 = 0;
  __retval192 = c196;
  counterPtr194 = &counter193;
  counterRef195 = &counter193;
  char* cast197 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r198 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast197);
  int c199 = 1;
  counter193.x = c199;
  Count__print(&counter193);
  char* cast200 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast200);
  int c202 = 2;
  struct Count* t203 = counterRef195;
  t203->x = c202;
  struct Count* t204 = counterRef195;
  Count__print(t204);
  char* cast205 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r206 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast205);
  int c207 = 3;
  struct Count* t208 = counterPtr194;
  t208->x = c207;
  struct Count* t209 = counterPtr194;
  Count__print(t209);
  int c210 = 0;
  __retval192 = c210;
  int t211 = __retval192;
  return t211;
}

