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
char _str[43] = "Enter a number between 0 and 2, 3 to end: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[29] = "Program execution completed.";
char _str_2[13] = "You entered ";
char _str_3[27] = " so function1 was called\n\n";
char _str_4[27] = " so function2 was called\n\n";
char _str_5[27] = " so function3 was called\n\n";
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void function1(int p0);
void function2(int p0);
void function3(int p0);
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

void* __const_main_f[3] = {(void*)(&function1), (void*)(&function2), (void*)(&function3)};
// function: _Z9function1i
void function1(int v0) {
bb1:
  int a2;
  a2 = v0;
  char* cast3 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r4 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast3);
  int t5 = a2;
  struct std__basic_ostream_char__std__char_traits_char__* r6 = std__ostream__operator__(r4, t5);
  char* cast7 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r8 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r6, cast7);
  return;
}

// function: _Z9function2i
void function2(int v9) {
bb10:
  int b11;
  b11 = v9;
  char* cast12 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r13 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast12);
  int t14 = b11;
  struct std__basic_ostream_char__std__char_traits_char__* r15 = std__ostream__operator__(r13, t14);
  char* cast16 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r17 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r15, cast16);
  return;
}

// function: _Z9function3i
void function3(int v18) {
bb19:
  int c20;
  c20 = v18;
  char* cast21 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast21);
  int t23 = c20;
  struct std__basic_ostream_char__std__char_traits_char__* r24 = std__ostream__operator__(r22, t23);
  char* cast25 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r24, cast25);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v27, int v28) {
bb29:
  int __a30;
  int __b31;
  int __retval32;
  __a30 = v27;
  __b31 = v28;
  int t33 = __a30;
  int t34 = __b31;
  int b35 = t33 | t34;
  __retval32 = b35;
  int t36 = __retval32;
  return t36;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v37) {
bb38:
  struct std__basic_ios_char__std__char_traits_char__* this39;
  int __retval40;
  this39 = v37;
  struct std__basic_ios_char__std__char_traits_char__* t41 = this39;
  struct std__ios_base* base42 = (struct std__ios_base*)((char *)t41 + 0);
  int t43 = base42->_M_streambuf_state;
  __retval40 = t43;
  int t44 = __retval40;
  return t44;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v45, int v46) {
bb47:
  struct std__basic_ios_char__std__char_traits_char__* this48;
  int __state49;
  this48 = v45;
  __state49 = v46;
  struct std__basic_ios_char__std__char_traits_char__* t50 = this48;
  int r51 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t50);
  int t52 = __state49;
  int r53 = std__operator_(r51, t52);
  std__basic_ios_char__std__char_traits_char_____clear(t50, r53);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb54:
  _Bool __retval55;
    _Bool c56 = 0;
    __retval55 = c56;
    _Bool t57 = __retval55;
    return t57;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v58, char* v59) {
bb60:
  char* __c161;
  char* __c262;
  _Bool __retval63;
  __c161 = v58;
  __c262 = v59;
  char* t64 = __c161;
  char t65 = *t64;
  int cast66 = (int)t65;
  char* t67 = __c262;
  char t68 = *t67;
  int cast69 = (int)t68;
  _Bool c70 = ((cast66 == cast69)) ? 1 : 0;
  __retval63 = c70;
  _Bool t71 = __retval63;
  return t71;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v72) {
bb73:
  char* __p74;
  unsigned long __retval75;
  unsigned long __i76;
  __p74 = v72;
  unsigned long c77 = 0;
  __i76 = c77;
    char ref_tmp078;
    while (1) {
      unsigned long t79 = __i76;
      char* t80 = __p74;
      char* ptr81 = &(t80)[t79];
      char c82 = 0;
      ref_tmp078 = c82;
      _Bool r83 = __gnu_cxx__char_traits_char___eq(ptr81, &ref_tmp078);
      _Bool u84 = !r83;
      if (!u84) break;
      unsigned long t85 = __i76;
      unsigned long u86 = t85 + 1;
      __i76 = u86;
    }
  unsigned long t87 = __i76;
  __retval75 = t87;
  unsigned long t88 = __retval75;
  return t88;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v89) {
bb90:
  char* __s91;
  unsigned long __retval92;
  __s91 = v89;
    _Bool r93 = std____is_constant_evaluated();
    if (r93) {
      char* t94 = __s91;
      unsigned long r95 = __gnu_cxx__char_traits_char___length(t94);
      __retval92 = r95;
      unsigned long t96 = __retval92;
      return t96;
    }
  char* t97 = __s91;
  unsigned long r98 = strlen(t97);
  __retval92 = r98;
  unsigned long t99 = __retval92;
  return t99;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v100, char* v101) {
bb102:
  struct std__basic_ostream_char__std__char_traits_char__* __out103;
  char* __s104;
  struct std__basic_ostream_char__std__char_traits_char__* __retval105;
  __out103 = v100;
  __s104 = v101;
    char* t106 = __s104;
    _Bool cast107 = (_Bool)t106;
    _Bool u108 = !cast107;
    if (u108) {
      struct std__basic_ostream_char__std__char_traits_char__* t109 = __out103;
      void** v110 = (void**)t109;
      void* v111 = *((void**)v110);
      unsigned char* cast112 = (unsigned char*)v111;
      long c113 = -24;
      unsigned char* ptr114 = &(cast112)[c113];
      long* cast115 = (long*)ptr114;
      long t116 = *cast115;
      unsigned char* cast117 = (unsigned char*)t109;
      unsigned char* ptr118 = &(cast117)[t116];
      struct std__basic_ostream_char__std__char_traits_char__* cast119 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr118;
      struct std__basic_ios_char__std__char_traits_char__* cast120 = (struct std__basic_ios_char__std__char_traits_char__*)cast119;
      int t121 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast120, t121);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t122 = __out103;
      char* t123 = __s104;
      char* t124 = __s104;
      unsigned long r125 = std__char_traits_char___length(t124);
      long cast126 = (long)r125;
      struct std__basic_ostream_char__std__char_traits_char__* r127 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t122, t123, cast126);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t128 = __out103;
  __retval105 = t128;
  struct std__basic_ostream_char__std__char_traits_char__* t129 = __retval105;
  return t129;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v130, void* v131) {
bb132:
  struct std__basic_ostream_char__std__char_traits_char__* this133;
  void* __pf134;
  struct std__basic_ostream_char__std__char_traits_char__* __retval135;
  this133 = v130;
  __pf134 = v131;
  struct std__basic_ostream_char__std__char_traits_char__* t136 = this133;
  void* t137 = __pf134;
  struct std__basic_ostream_char__std__char_traits_char__* r138 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t137)(t136);
  __retval135 = r138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval135;
  return t139;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v140) {
bb141:
  struct std__basic_ostream_char__std__char_traits_char__* __os142;
  struct std__basic_ostream_char__std__char_traits_char__* __retval143;
  __os142 = v140;
  struct std__basic_ostream_char__std__char_traits_char__* t144 = __os142;
  struct std__basic_ostream_char__std__char_traits_char__* r145 = std__ostream__flush(t144);
  __retval143 = r145;
  struct std__basic_ostream_char__std__char_traits_char__* t146 = __retval143;
  return t146;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v147) {
bb148:
  struct std__ctype_char_* __f149;
  struct std__ctype_char_* __retval150;
  __f149 = v147;
    struct std__ctype_char_* t151 = __f149;
    _Bool cast152 = (_Bool)t151;
    _Bool u153 = !cast152;
    if (u153) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t154 = __f149;
  __retval150 = t154;
  struct std__ctype_char_* t155 = __retval150;
  return t155;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v156, char v157) {
bb158:
  struct std__ctype_char_* this159;
  char __c160;
  char __retval161;
  this159 = v156;
  __c160 = v157;
  struct std__ctype_char_* t162 = this159;
    char t163 = t162->_M_widen_ok;
    _Bool cast164 = (_Bool)t163;
    if (cast164) {
      char t165 = __c160;
      unsigned char cast166 = (unsigned char)t165;
      unsigned long cast167 = (unsigned long)cast166;
      char t168 = t162->_M_widen[cast167];
      __retval161 = t168;
      char t169 = __retval161;
      return t169;
    }
  std__ctype_char____M_widen_init___const(t162);
  char t170 = __c160;
  void** v171 = (void**)t162;
  void* v172 = *((void**)v171);
  char vcall175 = (char)__VERIFIER_virtual_call_char_char(t162, 6, t170);
  __retval161 = vcall175;
  char t176 = __retval161;
  return t176;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v177, char v178) {
bb179:
  struct std__basic_ios_char__std__char_traits_char__* this180;
  char __c181;
  char __retval182;
  this180 = v177;
  __c181 = v178;
  struct std__basic_ios_char__std__char_traits_char__* t183 = this180;
  struct std__ctype_char_* t184 = t183->_M_ctype;
  struct std__ctype_char_* r185 = std__ctype_char__const__std____check_facet_std__ctype_char___(t184);
  char t186 = __c181;
  char r187 = std__ctype_char___widen_char__const(r185, t186);
  __retval182 = r187;
  char t188 = __retval182;
  return t188;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v189) {
bb190:
  struct std__basic_ostream_char__std__char_traits_char__* __os191;
  struct std__basic_ostream_char__std__char_traits_char__* __retval192;
  __os191 = v189;
  struct std__basic_ostream_char__std__char_traits_char__* t193 = __os191;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __os191;
  void** v195 = (void**)t194;
  void* v196 = *((void**)v195);
  unsigned char* cast197 = (unsigned char*)v196;
  long c198 = -24;
  unsigned char* ptr199 = &(cast197)[c198];
  long* cast200 = (long*)ptr199;
  long t201 = *cast200;
  unsigned char* cast202 = (unsigned char*)t194;
  unsigned char* ptr203 = &(cast202)[t201];
  struct std__basic_ostream_char__std__char_traits_char__* cast204 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr203;
  struct std__basic_ios_char__std__char_traits_char__* cast205 = (struct std__basic_ios_char__std__char_traits_char__*)cast204;
  char c206 = 10;
  char r207 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast205, c206);
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__ostream__put(t193, r207);
  struct std__basic_ostream_char__std__char_traits_char__* r209 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r208);
  __retval192 = r209;
  struct std__basic_ostream_char__std__char_traits_char__* t210 = __retval192;
  return t210;
}

// function: main
int main() {
bb211:
  int __retval212;
  void* f213[3];
  int choice214;
  int c215 = 0;
  __retval212 = c215;
  // array copy
  __builtin_memcpy(f213, __const_main_f, (unsigned long)3 * sizeof(__const_main_f[0]));
  char* cast216 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r217 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast216);
  struct std__basic_istream_char__std__char_traits_char__* r218 = std__istream__operator__(&_ZSt3cin, &choice214);
    while (1) {
      int t219 = choice214;
      int c220 = 0;
      _Bool c221 = ((t219 >= c220)) ? 1 : 0;
      _Bool ternary222;
      if (c221) {
        int t223 = choice214;
        int c224 = 3;
        _Bool c225 = ((t223 < c224)) ? 1 : 0;
        ternary222 = (_Bool)c225;
      } else {
        _Bool c226 = 0;
        ternary222 = (_Bool)c226;
      }
      if (!ternary222) break;
        int t227 = choice214;
        long cast228 = (long)t227;
        void* t229 = f213[cast228];
        int t230 = choice214;
        ((void (*)(int))t229)(t230);
        char* cast231 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r232 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast231);
        struct std__basic_istream_char__std__char_traits_char__* r233 = std__istream__operator__(&_ZSt3cin, &choice214);
    }
  char* cast234 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r235 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast234);
  struct std__basic_ostream_char__std__char_traits_char__* r236 = std__ostream__operator___std__ostream_____(r235, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c237 = 0;
  __retval212 = c237;
  int t238 = __retval212;
  return t238;
}

