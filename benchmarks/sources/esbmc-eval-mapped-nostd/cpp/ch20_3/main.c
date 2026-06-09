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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[48] = "Enter 1 to terminate program with function exit";
char _str_1[40] = "\nEnter 2 to terminate program normally\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[41] = "\nTerminating program with function exit\n";
char _str_3[49] = "\nTerminating program by reaching the end of main";
char _str_4[49] = "Executing function print at program termination\n";
char _str_5[19] = "Program terminated";
extern int atexit(void* p0);
void print();
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern void exit(int p0);
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

// function: _Z5printv
void print() {
bb0:
  char* cast1 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r2 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1);
  char* cast3 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r4 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r2, cast3);
  struct std__basic_ostream_char__std__char_traits_char__* r5 = std__ostream__operator___std__ostream_____(r4, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v6, int v7) {
bb8:
  int __a9;
  int __b10;
  int __retval11;
  __a9 = v6;
  __b10 = v7;
  int t12 = __a9;
  int t13 = __b10;
  int b14 = t12 | t13;
  __retval11 = b14;
  int t15 = __retval11;
  return t15;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v16) {
bb17:
  struct std__basic_ios_char__std__char_traits_char__* this18;
  int __retval19;
  this18 = v16;
  struct std__basic_ios_char__std__char_traits_char__* t20 = this18;
  struct std__ios_base* base21 = (struct std__ios_base*)((char *)t20 + 0);
  int t22 = base21->_M_streambuf_state;
  __retval19 = t22;
  int t23 = __retval19;
  return t23;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v24, int v25) {
bb26:
  struct std__basic_ios_char__std__char_traits_char__* this27;
  int __state28;
  this27 = v24;
  __state28 = v25;
  struct std__basic_ios_char__std__char_traits_char__* t29 = this27;
  int r30 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t29);
  int t31 = __state28;
  int r32 = std__operator_(r30, t31);
  std__basic_ios_char__std__char_traits_char_____clear(t29, r32);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb33:
  _Bool __retval34;
    _Bool c35 = 0;
    __retval34 = c35;
    _Bool t36 = __retval34;
    return t36;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v37, char* v38) {
bb39:
  char* __c140;
  char* __c241;
  _Bool __retval42;
  __c140 = v37;
  __c241 = v38;
  char* t43 = __c140;
  char t44 = *t43;
  int cast45 = (int)t44;
  char* t46 = __c241;
  char t47 = *t46;
  int cast48 = (int)t47;
  _Bool c49 = ((cast45 == cast48)) ? 1 : 0;
  __retval42 = c49;
  _Bool t50 = __retval42;
  return t50;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v51) {
bb52:
  char* __p53;
  unsigned long __retval54;
  unsigned long __i55;
  __p53 = v51;
  unsigned long c56 = 0;
  __i55 = c56;
    char ref_tmp057;
    while (1) {
      unsigned long t58 = __i55;
      char* t59 = __p53;
      char* ptr60 = &(t59)[t58];
      char c61 = 0;
      ref_tmp057 = c61;
      _Bool r62 = __gnu_cxx__char_traits_char___eq(ptr60, &ref_tmp057);
      _Bool u63 = !r62;
      if (!u63) break;
      unsigned long t64 = __i55;
      unsigned long u65 = t64 + 1;
      __i55 = u65;
    }
  unsigned long t66 = __i55;
  __retval54 = t66;
  unsigned long t67 = __retval54;
  return t67;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v68) {
bb69:
  char* __s70;
  unsigned long __retval71;
  __s70 = v68;
    _Bool r72 = std____is_constant_evaluated();
    if (r72) {
      char* t73 = __s70;
      unsigned long r74 = __gnu_cxx__char_traits_char___length(t73);
      __retval71 = r74;
      unsigned long t75 = __retval71;
      return t75;
    }
  char* t76 = __s70;
  unsigned long r77 = strlen(t76);
  __retval71 = r77;
  unsigned long t78 = __retval71;
  return t78;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v79, char* v80) {
bb81:
  struct std__basic_ostream_char__std__char_traits_char__* __out82;
  char* __s83;
  struct std__basic_ostream_char__std__char_traits_char__* __retval84;
  __out82 = v79;
  __s83 = v80;
    char* t85 = __s83;
    _Bool cast86 = (_Bool)t85;
    _Bool u87 = !cast86;
    if (u87) {
      struct std__basic_ostream_char__std__char_traits_char__* t88 = __out82;
      void** v89 = (void**)t88;
      void* v90 = *((void**)v89);
      unsigned char* cast91 = (unsigned char*)v90;
      long c92 = -24;
      unsigned char* ptr93 = &(cast91)[c92];
      long* cast94 = (long*)ptr93;
      long t95 = *cast94;
      unsigned char* cast96 = (unsigned char*)t88;
      unsigned char* ptr97 = &(cast96)[t95];
      struct std__basic_ostream_char__std__char_traits_char__* cast98 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr97;
      struct std__basic_ios_char__std__char_traits_char__* cast99 = (struct std__basic_ios_char__std__char_traits_char__*)cast98;
      int t100 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast99, t100);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t101 = __out82;
      char* t102 = __s83;
      char* t103 = __s83;
      unsigned long r104 = std__char_traits_char___length(t103);
      long cast105 = (long)r104;
      struct std__basic_ostream_char__std__char_traits_char__* r106 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t101, t102, cast105);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t107 = __out82;
  __retval84 = t107;
  struct std__basic_ostream_char__std__char_traits_char__* t108 = __retval84;
  return t108;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v109, void* v110) {
bb111:
  struct std__basic_ostream_char__std__char_traits_char__* this112;
  void* __pf113;
  struct std__basic_ostream_char__std__char_traits_char__* __retval114;
  this112 = v109;
  __pf113 = v110;
  struct std__basic_ostream_char__std__char_traits_char__* t115 = this112;
  void* t116 = __pf113;
  struct std__basic_ostream_char__std__char_traits_char__* r117 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t116)(t115);
  __retval114 = r117;
  struct std__basic_ostream_char__std__char_traits_char__* t118 = __retval114;
  return t118;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v119) {
bb120:
  struct std__basic_ostream_char__std__char_traits_char__* __os121;
  struct std__basic_ostream_char__std__char_traits_char__* __retval122;
  __os121 = v119;
  struct std__basic_ostream_char__std__char_traits_char__* t123 = __os121;
  struct std__basic_ostream_char__std__char_traits_char__* r124 = std__ostream__flush(t123);
  __retval122 = r124;
  struct std__basic_ostream_char__std__char_traits_char__* t125 = __retval122;
  return t125;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v126) {
bb127:
  struct std__ctype_char_* __f128;
  struct std__ctype_char_* __retval129;
  __f128 = v126;
    struct std__ctype_char_* t130 = __f128;
    _Bool cast131 = (_Bool)t130;
    _Bool u132 = !cast131;
    if (u132) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t133 = __f128;
  __retval129 = t133;
  struct std__ctype_char_* t134 = __retval129;
  return t134;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v135, char v136) {
bb137:
  struct std__ctype_char_* this138;
  char __c139;
  char __retval140;
  this138 = v135;
  __c139 = v136;
  struct std__ctype_char_* t141 = this138;
    char t142 = t141->_M_widen_ok;
    _Bool cast143 = (_Bool)t142;
    if (cast143) {
      char t144 = __c139;
      unsigned char cast145 = (unsigned char)t144;
      unsigned long cast146 = (unsigned long)cast145;
      char t147 = t141->_M_widen[cast146];
      __retval140 = t147;
      char t148 = __retval140;
      return t148;
    }
  std__ctype_char____M_widen_init___const(t141);
  char t149 = __c139;
  void** v150 = (void**)t141;
  void* v151 = *((void**)v150);
  char vcall154 = (char)__VERIFIER_virtual_call_char_char(t141, 6, t149);
  __retval140 = vcall154;
  char t155 = __retval140;
  return t155;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v156, char v157) {
bb158:
  struct std__basic_ios_char__std__char_traits_char__* this159;
  char __c160;
  char __retval161;
  this159 = v156;
  __c160 = v157;
  struct std__basic_ios_char__std__char_traits_char__* t162 = this159;
  struct std__ctype_char_* t163 = t162->_M_ctype;
  struct std__ctype_char_* r164 = std__ctype_char__const__std____check_facet_std__ctype_char___(t163);
  char t165 = __c160;
  char r166 = std__ctype_char___widen_char__const(r164, t165);
  __retval161 = r166;
  char t167 = __retval161;
  return t167;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v168) {
bb169:
  struct std__basic_ostream_char__std__char_traits_char__* __os170;
  struct std__basic_ostream_char__std__char_traits_char__* __retval171;
  __os170 = v168;
  struct std__basic_ostream_char__std__char_traits_char__* t172 = __os170;
  struct std__basic_ostream_char__std__char_traits_char__* t173 = __os170;
  void** v174 = (void**)t173;
  void* v175 = *((void**)v174);
  unsigned char* cast176 = (unsigned char*)v175;
  long c177 = -24;
  unsigned char* ptr178 = &(cast176)[c177];
  long* cast179 = (long*)ptr178;
  long t180 = *cast179;
  unsigned char* cast181 = (unsigned char*)t173;
  unsigned char* ptr182 = &(cast181)[t180];
  struct std__basic_ostream_char__std__char_traits_char__* cast183 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr182;
  struct std__basic_ios_char__std__char_traits_char__* cast184 = (struct std__basic_ios_char__std__char_traits_char__*)cast183;
  char c185 = 10;
  char r186 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast184, c185);
  struct std__basic_ostream_char__std__char_traits_char__* r187 = std__ostream__put(t172, r186);
  struct std__basic_ostream_char__std__char_traits_char__* r188 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r187);
  __retval171 = r188;
  struct std__basic_ostream_char__std__char_traits_char__* t189 = __retval171;
  return t189;
}

// function: main
int main() {
bb190:
  int __retval191;
  int answer192;
  int c193 = 0;
  __retval191 = c193;
  int r194 = atexit(&print);
  char* cast195 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r196 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast195);
  char* cast197 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r198 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r196, cast197);
  struct std__basic_istream_char__std__char_traits_char__* r199 = std__istream__operator__(&_ZSt3cin, &answer192);
    int t200 = answer192;
    int c201 = 1;
    _Bool c202 = ((t200 == c201)) ? 1 : 0;
    if (c202) {
      char* cast203 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r204 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast203);
      int c205 = 0;
      exit(c205);
    }
  char* cast206 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r207 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast206);
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__ostream__operator___std__ostream_____(r207, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c209 = 0;
  __retval191 = c209;
  int t210 = __retval191;
  return t210;
}

