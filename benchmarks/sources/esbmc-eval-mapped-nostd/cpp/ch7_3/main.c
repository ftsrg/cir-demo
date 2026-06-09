extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Increment { int count; int increment; };
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
char _str[9] = "count = ";
char _str_1[15] = ", increment = ";
char _str_2[22] = "Before incrementing: ";
char _str_3[17] = "After increment ";
char _str_4[3] = ": ";
void Increment__Increment_2(struct Increment* p0, int p1, int p2);
void Increment__Increment(struct Increment* p0, int p1, int p2) { Increment__Increment_2(p0, p1, p2); }
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
void Increment__print___const(struct Increment* p0);
void Increment__addIncrement(struct Increment* p0);
int main();

// function: _ZN9IncrementC2Eii
void Increment__Increment_2(struct Increment* v0, int v1, int v2) {
bb3:
  struct Increment* this4;
  int c5;
  int i6;
  this4 = v0;
  c5 = v1;
  i6 = v2;
  struct Increment* t7 = this4;
  int t8 = i6;
  t7->increment = t8;
  int t9 = c5;
  t7->count = t9;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v10, int v11) {
bb12:
  int __a13;
  int __b14;
  int __retval15;
  __a13 = v10;
  __b14 = v11;
  int t16 = __a13;
  int t17 = __b14;
  int b18 = t16 | t17;
  __retval15 = b18;
  int t19 = __retval15;
  return t19;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v20) {
bb21:
  struct std__basic_ios_char__std__char_traits_char__* this22;
  int __retval23;
  this22 = v20;
  struct std__basic_ios_char__std__char_traits_char__* t24 = this22;
  struct std__ios_base* base25 = (struct std__ios_base*)((char *)t24 + 0);
  int t26 = base25->_M_streambuf_state;
  __retval23 = t26;
  int t27 = __retval23;
  return t27;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v28, int v29) {
bb30:
  struct std__basic_ios_char__std__char_traits_char__* this31;
  int __state32;
  this31 = v28;
  __state32 = v29;
  struct std__basic_ios_char__std__char_traits_char__* t33 = this31;
  int r34 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t33);
  int t35 = __state32;
  int r36 = std__operator_(r34, t35);
  std__basic_ios_char__std__char_traits_char_____clear(t33, r36);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb37:
  _Bool __retval38;
    _Bool c39 = 0;
    __retval38 = c39;
    _Bool t40 = __retval38;
    return t40;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v41, char* v42) {
bb43:
  char* __c144;
  char* __c245;
  _Bool __retval46;
  __c144 = v41;
  __c245 = v42;
  char* t47 = __c144;
  char t48 = *t47;
  int cast49 = (int)t48;
  char* t50 = __c245;
  char t51 = *t50;
  int cast52 = (int)t51;
  _Bool c53 = ((cast49 == cast52)) ? 1 : 0;
  __retval46 = c53;
  _Bool t54 = __retval46;
  return t54;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v55) {
bb56:
  char* __p57;
  unsigned long __retval58;
  unsigned long __i59;
  __p57 = v55;
  unsigned long c60 = 0;
  __i59 = c60;
    char ref_tmp061;
    while (1) {
      unsigned long t62 = __i59;
      char* t63 = __p57;
      char* ptr64 = &(t63)[t62];
      char c65 = 0;
      ref_tmp061 = c65;
      _Bool r66 = __gnu_cxx__char_traits_char___eq(ptr64, &ref_tmp061);
      _Bool u67 = !r66;
      if (!u67) break;
      unsigned long t68 = __i59;
      unsigned long u69 = t68 + 1;
      __i59 = u69;
    }
  unsigned long t70 = __i59;
  __retval58 = t70;
  unsigned long t71 = __retval58;
  return t71;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v72) {
bb73:
  char* __s74;
  unsigned long __retval75;
  __s74 = v72;
    _Bool r76 = std____is_constant_evaluated();
    if (r76) {
      char* t77 = __s74;
      unsigned long r78 = __gnu_cxx__char_traits_char___length(t77);
      __retval75 = r78;
      unsigned long t79 = __retval75;
      return t79;
    }
  char* t80 = __s74;
  unsigned long r81 = strlen(t80);
  __retval75 = r81;
  unsigned long t82 = __retval75;
  return t82;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v83, char* v84) {
bb85:
  struct std__basic_ostream_char__std__char_traits_char__* __out86;
  char* __s87;
  struct std__basic_ostream_char__std__char_traits_char__* __retval88;
  __out86 = v83;
  __s87 = v84;
    char* t89 = __s87;
    _Bool cast90 = (_Bool)t89;
    _Bool u91 = !cast90;
    if (u91) {
      struct std__basic_ostream_char__std__char_traits_char__* t92 = __out86;
      void** v93 = (void**)t92;
      void* v94 = *((void**)v93);
      unsigned char* cast95 = (unsigned char*)v94;
      long c96 = -24;
      unsigned char* ptr97 = &(cast95)[c96];
      long* cast98 = (long*)ptr97;
      long t99 = *cast98;
      unsigned char* cast100 = (unsigned char*)t92;
      unsigned char* ptr101 = &(cast100)[t99];
      struct std__basic_ostream_char__std__char_traits_char__* cast102 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr101;
      struct std__basic_ios_char__std__char_traits_char__* cast103 = (struct std__basic_ios_char__std__char_traits_char__*)cast102;
      int t104 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast103, t104);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t105 = __out86;
      char* t106 = __s87;
      char* t107 = __s87;
      unsigned long r108 = std__char_traits_char___length(t107);
      long cast109 = (long)r108;
      struct std__basic_ostream_char__std__char_traits_char__* r110 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t105, t106, cast109);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t111 = __out86;
  __retval88 = t111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval88;
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

// function: _ZNK9Increment5printEv
void Increment__print___const(struct Increment* v194) {
bb195:
  struct Increment* this196;
  this196 = v194;
  struct Increment* t197 = this196;
  char* cast198 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r199 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast198);
  int t200 = t197->count;
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__ostream__operator__(r199, t200);
  char* cast202 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r203 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r201, cast202);
  int t204 = t197->increment;
  struct std__basic_ostream_char__std__char_traits_char__* r205 = std__ostream__operator__(r203, t204);
  struct std__basic_ostream_char__std__char_traits_char__* r206 = std__ostream__operator___std__ostream_____(r205, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: _ZN9Increment12addIncrementEv
void Increment__addIncrement(struct Increment* v207) {
bb208:
  struct Increment* this209;
  this209 = v207;
  struct Increment* t210 = this209;
  int t211 = t210->increment;
  int t212 = t210->count;
  int b213 = t212 + t211;
  t210->count = b213;
  return;
}

// function: main
int main() {
bb214:
  int __retval215;
  struct Increment value216;
  int c217 = 0;
  __retval215 = c217;
  int c218 = 10;
  int c219 = 5;
  Increment__Increment(&value216, c218, c219);
  char* cast220 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r221 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast220);
  Increment__print___const(&value216);
    int j222;
    int c223 = 0;
    j222 = c223;
    while (1) {
      int t225 = j222;
      int c226 = 3;
      _Bool c227 = ((t225 < c226)) ? 1 : 0;
      if (!c227) break;
        Increment__addIncrement(&value216);
        char* cast228 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r229 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast228);
        int t230 = j222;
        int c231 = 1;
        int b232 = t230 + c231;
        struct std__basic_ostream_char__std__char_traits_char__* r233 = std__ostream__operator__(r229, b232);
        char* cast234 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r235 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r233, cast234);
        Increment__print___const(&value216);
    for_step224: ;
      int t236 = j222;
      int u237 = t236 + 1;
      j222 = u237;
    }
  int c238 = 0;
  __retval215 = c238;
  int t239 = __retval215;
  return t239;
}

