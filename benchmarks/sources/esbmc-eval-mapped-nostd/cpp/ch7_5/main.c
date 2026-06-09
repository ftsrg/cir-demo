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
char _str[32] = "counter.x after instantiation: ";
char _str_1[47] = "counter.x after call to setX friend function: ";
void setX(struct Count* p0, int p1);
void Count__Count(struct Count* p0);
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
void Count__print___const(struct Count* p0);
int main();

// function: _Z4setXR5Counti
void setX(struct Count* v0, int v1) {
bb2:
  struct Count* c3;
  int val4;
  c3 = v0;
  val4 = v1;
  int t5 = val4;
  struct Count* t6 = c3;
  t6->x = t5;
  return;
}

// function: _ZN5CountC2Ev
void Count__Count(struct Count* v7) {
bb8:
  struct Count* this9;
  this9 = v7;
  struct Count* t10 = this9;
  int c11 = 0;
  t10->x = c11;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v12, int v13) {
bb14:
  int __a15;
  int __b16;
  int __retval17;
  __a15 = v12;
  __b16 = v13;
  int t18 = __a15;
  int t19 = __b16;
  int b20 = t18 | t19;
  __retval17 = b20;
  int t21 = __retval17;
  return t21;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v22) {
bb23:
  struct std__basic_ios_char__std__char_traits_char__* this24;
  int __retval25;
  this24 = v22;
  struct std__basic_ios_char__std__char_traits_char__* t26 = this24;
  struct std__ios_base* base27 = (struct std__ios_base*)((char *)t26 + 0);
  int t28 = base27->_M_streambuf_state;
  __retval25 = t28;
  int t29 = __retval25;
  return t29;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v30, int v31) {
bb32:
  struct std__basic_ios_char__std__char_traits_char__* this33;
  int __state34;
  this33 = v30;
  __state34 = v31;
  struct std__basic_ios_char__std__char_traits_char__* t35 = this33;
  int r36 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t35);
  int t37 = __state34;
  int r38 = std__operator_(r36, t37);
  std__basic_ios_char__std__char_traits_char_____clear(t35, r38);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb39:
  _Bool __retval40;
    _Bool c41 = 0;
    __retval40 = c41;
    _Bool t42 = __retval40;
    return t42;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v43, char* v44) {
bb45:
  char* __c146;
  char* __c247;
  _Bool __retval48;
  __c146 = v43;
  __c247 = v44;
  char* t49 = __c146;
  char t50 = *t49;
  int cast51 = (int)t50;
  char* t52 = __c247;
  char t53 = *t52;
  int cast54 = (int)t53;
  _Bool c55 = ((cast51 == cast54)) ? 1 : 0;
  __retval48 = c55;
  _Bool t56 = __retval48;
  return t56;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v57) {
bb58:
  char* __p59;
  unsigned long __retval60;
  unsigned long __i61;
  __p59 = v57;
  unsigned long c62 = 0;
  __i61 = c62;
    char ref_tmp063;
    while (1) {
      unsigned long t64 = __i61;
      char* t65 = __p59;
      char* ptr66 = &(t65)[t64];
      char c67 = 0;
      ref_tmp063 = c67;
      _Bool r68 = __gnu_cxx__char_traits_char___eq(ptr66, &ref_tmp063);
      _Bool u69 = !r68;
      if (!u69) break;
      unsigned long t70 = __i61;
      unsigned long u71 = t70 + 1;
      __i61 = u71;
    }
  unsigned long t72 = __i61;
  __retval60 = t72;
  unsigned long t73 = __retval60;
  return t73;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v74) {
bb75:
  char* __s76;
  unsigned long __retval77;
  __s76 = v74;
    _Bool r78 = std____is_constant_evaluated();
    if (r78) {
      char* t79 = __s76;
      unsigned long r80 = __gnu_cxx__char_traits_char___length(t79);
      __retval77 = r80;
      unsigned long t81 = __retval77;
      return t81;
    }
  char* t82 = __s76;
  unsigned long r83 = strlen(t82);
  __retval77 = r83;
  unsigned long t84 = __retval77;
  return t84;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v85, char* v86) {
bb87:
  struct std__basic_ostream_char__std__char_traits_char__* __out88;
  char* __s89;
  struct std__basic_ostream_char__std__char_traits_char__* __retval90;
  __out88 = v85;
  __s89 = v86;
    char* t91 = __s89;
    _Bool cast92 = (_Bool)t91;
    _Bool u93 = !cast92;
    if (u93) {
      struct std__basic_ostream_char__std__char_traits_char__* t94 = __out88;
      void** v95 = (void**)t94;
      void* v96 = *((void**)v95);
      unsigned char* cast97 = (unsigned char*)v96;
      long c98 = -24;
      unsigned char* ptr99 = &(cast97)[c98];
      long* cast100 = (long*)ptr99;
      long t101 = *cast100;
      unsigned char* cast102 = (unsigned char*)t94;
      unsigned char* ptr103 = &(cast102)[t101];
      struct std__basic_ostream_char__std__char_traits_char__* cast104 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr103;
      struct std__basic_ios_char__std__char_traits_char__* cast105 = (struct std__basic_ios_char__std__char_traits_char__*)cast104;
      int t106 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast105, t106);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t107 = __out88;
      char* t108 = __s89;
      char* t109 = __s89;
      unsigned long r110 = std__char_traits_char___length(t109);
      long cast111 = (long)r110;
      struct std__basic_ostream_char__std__char_traits_char__* r112 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t107, t108, cast111);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t113 = __out88;
  __retval90 = t113;
  struct std__basic_ostream_char__std__char_traits_char__* t114 = __retval90;
  return t114;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v115, void* v116) {
bb117:
  struct std__basic_ostream_char__std__char_traits_char__* this118;
  void* __pf119;
  struct std__basic_ostream_char__std__char_traits_char__* __retval120;
  this118 = v115;
  __pf119 = v116;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = this118;
  void* t122 = __pf119;
  struct std__basic_ostream_char__std__char_traits_char__* r123 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t122)(t121);
  __retval120 = r123;
  struct std__basic_ostream_char__std__char_traits_char__* t124 = __retval120;
  return t124;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v125) {
bb126:
  struct std__basic_ostream_char__std__char_traits_char__* __os127;
  struct std__basic_ostream_char__std__char_traits_char__* __retval128;
  __os127 = v125;
  struct std__basic_ostream_char__std__char_traits_char__* t129 = __os127;
  struct std__basic_ostream_char__std__char_traits_char__* r130 = std__ostream__flush(t129);
  __retval128 = r130;
  struct std__basic_ostream_char__std__char_traits_char__* t131 = __retval128;
  return t131;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v132) {
bb133:
  struct std__ctype_char_* __f134;
  struct std__ctype_char_* __retval135;
  __f134 = v132;
    struct std__ctype_char_* t136 = __f134;
    _Bool cast137 = (_Bool)t136;
    _Bool u138 = !cast137;
    if (u138) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t139 = __f134;
  __retval135 = t139;
  struct std__ctype_char_* t140 = __retval135;
  return t140;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v141, char v142) {
bb143:
  struct std__ctype_char_* this144;
  char __c145;
  char __retval146;
  this144 = v141;
  __c145 = v142;
  struct std__ctype_char_* t147 = this144;
    char t148 = t147->_M_widen_ok;
    _Bool cast149 = (_Bool)t148;
    if (cast149) {
      char t150 = __c145;
      unsigned char cast151 = (unsigned char)t150;
      unsigned long cast152 = (unsigned long)cast151;
      char t153 = t147->_M_widen[cast152];
      __retval146 = t153;
      char t154 = __retval146;
      return t154;
    }
  std__ctype_char____M_widen_init___const(t147);
  char t155 = __c145;
  void** v156 = (void**)t147;
  void* v157 = *((void**)v156);
  char vcall160 = (char)__VERIFIER_virtual_call_char_char(t147, 6, t155);
  __retval146 = vcall160;
  char t161 = __retval146;
  return t161;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v162, char v163) {
bb164:
  struct std__basic_ios_char__std__char_traits_char__* this165;
  char __c166;
  char __retval167;
  this165 = v162;
  __c166 = v163;
  struct std__basic_ios_char__std__char_traits_char__* t168 = this165;
  struct std__ctype_char_* t169 = t168->_M_ctype;
  struct std__ctype_char_* r170 = std__ctype_char__const__std____check_facet_std__ctype_char___(t169);
  char t171 = __c166;
  char r172 = std__ctype_char___widen_char__const(r170, t171);
  __retval167 = r172;
  char t173 = __retval167;
  return t173;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v174) {
bb175:
  struct std__basic_ostream_char__std__char_traits_char__* __os176;
  struct std__basic_ostream_char__std__char_traits_char__* __retval177;
  __os176 = v174;
  struct std__basic_ostream_char__std__char_traits_char__* t178 = __os176;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __os176;
  void** v180 = (void**)t179;
  void* v181 = *((void**)v180);
  unsigned char* cast182 = (unsigned char*)v181;
  long c183 = -24;
  unsigned char* ptr184 = &(cast182)[c183];
  long* cast185 = (long*)ptr184;
  long t186 = *cast185;
  unsigned char* cast187 = (unsigned char*)t179;
  unsigned char* ptr188 = &(cast187)[t186];
  struct std__basic_ostream_char__std__char_traits_char__* cast189 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr188;
  struct std__basic_ios_char__std__char_traits_char__* cast190 = (struct std__basic_ios_char__std__char_traits_char__*)cast189;
  char c191 = 10;
  char r192 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast190, c191);
  struct std__basic_ostream_char__std__char_traits_char__* r193 = std__ostream__put(t178, r192);
  struct std__basic_ostream_char__std__char_traits_char__* r194 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r193);
  __retval177 = r194;
  struct std__basic_ostream_char__std__char_traits_char__* t195 = __retval177;
  return t195;
}

// function: _ZNK5Count5printEv
void Count__print___const(struct Count* v196) {
bb197:
  struct Count* this198;
  this198 = v196;
  struct Count* t199 = this198;
  int t200 = t199->x;
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__ostream__operator__(&_ZSt4cout, t200);
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__ostream__operator___std__ostream_____(r201, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: main
int main() {
bb203:
  int __retval204;
  struct Count counter205;
  int c206 = 0;
  __retval204 = c206;
  Count__Count(&counter205);
  char* cast207 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast207);
  Count__print___const(&counter205);
  int c209 = 8;
  setX(&counter205, c209);
  char* cast210 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r211 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast210);
  Count__print___const(&counter205);
  int c212 = 0;
  __retval204 = c212;
  int t213 = __retval204;
  return t213;
}

