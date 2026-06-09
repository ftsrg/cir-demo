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
char _str[20] = "Enter two strings: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[15] = "The result is ";
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
extern void std____istream_extract(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___80ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_bool_(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
_Bool mystery3(char* p0, char* p1);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v0, int v1) {
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

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  int __retval13;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t14 = this12;
  struct std__ios_base* base15 = (struct std__ios_base*)((char *)t14 + 0);
  int t16 = base15->_M_streambuf_state;
  __retval13 = t16;
  int t17 = __retval13;
  return t17;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v18, int v19) {
bb20:
  struct std__basic_ios_char__std__char_traits_char__* this21;
  int __state22;
  this21 = v18;
  __state22 = v19;
  struct std__basic_ios_char__std__char_traits_char__* t23 = this21;
  int r24 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t23);
  int t25 = __state22;
  int r26 = std__operator_(r24, t25);
  std__basic_ios_char__std__char_traits_char_____clear(t23, r26);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb27:
  _Bool __retval28;
    _Bool c29 = 0;
    __retval28 = c29;
    _Bool t30 = __retval28;
    return t30;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v31, char* v32) {
bb33:
  char* __c134;
  char* __c235;
  _Bool __retval36;
  __c134 = v31;
  __c235 = v32;
  char* t37 = __c134;
  char t38 = *t37;
  int cast39 = (int)t38;
  char* t40 = __c235;
  char t41 = *t40;
  int cast42 = (int)t41;
  _Bool c43 = ((cast39 == cast42)) ? 1 : 0;
  __retval36 = c43;
  _Bool t44 = __retval36;
  return t44;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v45) {
bb46:
  char* __p47;
  unsigned long __retval48;
  unsigned long __i49;
  __p47 = v45;
  unsigned long c50 = 0;
  __i49 = c50;
    char ref_tmp051;
    while (1) {
      unsigned long t52 = __i49;
      char* t53 = __p47;
      char* ptr54 = &(t53)[t52];
      char c55 = 0;
      ref_tmp051 = c55;
      _Bool r56 = __gnu_cxx__char_traits_char___eq(ptr54, &ref_tmp051);
      _Bool u57 = !r56;
      if (!u57) break;
      unsigned long t58 = __i49;
      unsigned long u59 = t58 + 1;
      __i49 = u59;
    }
  unsigned long t60 = __i49;
  __retval48 = t60;
  unsigned long t61 = __retval48;
  return t61;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v62) {
bb63:
  char* __s64;
  unsigned long __retval65;
  __s64 = v62;
    _Bool r66 = std____is_constant_evaluated();
    if (r66) {
      char* t67 = __s64;
      unsigned long r68 = __gnu_cxx__char_traits_char___length(t67);
      __retval65 = r68;
      unsigned long t69 = __retval65;
      return t69;
    }
  char* t70 = __s64;
  unsigned long r71 = strlen(t70);
  __retval65 = r71;
  unsigned long t72 = __retval65;
  return t72;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v73, char* v74) {
bb75:
  struct std__basic_ostream_char__std__char_traits_char__* __out76;
  char* __s77;
  struct std__basic_ostream_char__std__char_traits_char__* __retval78;
  __out76 = v73;
  __s77 = v74;
    char* t79 = __s77;
    _Bool cast80 = (_Bool)t79;
    _Bool u81 = !cast80;
    if (u81) {
      struct std__basic_ostream_char__std__char_traits_char__* t82 = __out76;
      void** v83 = (void**)t82;
      void* v84 = *((void**)v83);
      unsigned char* cast85 = (unsigned char*)v84;
      long c86 = -24;
      unsigned char* ptr87 = &(cast85)[c86];
      long* cast88 = (long*)ptr87;
      long t89 = *cast88;
      unsigned char* cast90 = (unsigned char*)t82;
      unsigned char* ptr91 = &(cast90)[t89];
      struct std__basic_ostream_char__std__char_traits_char__* cast92 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr91;
      struct std__basic_ios_char__std__char_traits_char__* cast93 = (struct std__basic_ios_char__std__char_traits_char__*)cast92;
      int t94 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast93, t94);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t95 = __out76;
      char* t96 = __s77;
      char* t97 = __s77;
      unsigned long r98 = std__char_traits_char___length(t97);
      long cast99 = (long)r98;
      struct std__basic_ostream_char__std__char_traits_char__* r100 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t95, t96, cast99);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __out76;
  __retval78 = t101;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __retval78;
  return t102;
}

// function: _ZStrsIcSt11char_traitsIcELm80EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___80ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v103, char* v104) {
bb105:
  struct std__basic_istream_char__std__char_traits_char__* __in106;
  char* __s107;
  struct std__basic_istream_char__std__char_traits_char__* __retval108;
  __in106 = v103;
  __s107 = v104;
  struct std__basic_istream_char__std__char_traits_char__* t109 = __in106;
  char* t110 = __s107;
  char* cast111 = (char*)t110;
  long c112 = 80;
  std____istream_extract(t109, cast111, c112);
  struct std__basic_istream_char__std__char_traits_char__* t113 = __in106;
  __retval108 = t113;
  struct std__basic_istream_char__std__char_traits_char__* t114 = __retval108;
  return t114;
}

// function: _ZNSolsEb
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v115, _Bool v116) {
bb117:
  struct std__basic_ostream_char__std__char_traits_char__* this118;
  _Bool __n119;
  struct std__basic_ostream_char__std__char_traits_char__* __retval120;
  this118 = v115;
  __n119 = v116;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = this118;
  _Bool t122 = __n119;
  struct std__basic_ostream_char__std__char_traits_char__* r123 = std__ostream__std__ostream___M_insert_bool_(t121, t122);
  __retval120 = r123;
  struct std__basic_ostream_char__std__char_traits_char__* t124 = __retval120;
  return t124;
}

// function: _Z8mystery3PKcS0_
_Bool mystery3(char* v125, char* v126) {
bb127:
  char* s1128;
  char* s2129;
  _Bool __retval130;
  s1128 = v125;
  s2129 = v126;
    while (1) {
      char* t132 = s1128;
      char t133 = *t132;
      int cast134 = (int)t133;
      int c135 = 0;
      _Bool c136 = ((cast134 != c135)) ? 1 : 0;
      _Bool ternary137;
      if (c136) {
        char* t138 = s2129;
        char t139 = *t138;
        int cast140 = (int)t139;
        int c141 = 0;
        _Bool c142 = ((cast140 != c141)) ? 1 : 0;
        ternary137 = (_Bool)c142;
      } else {
        _Bool c143 = 0;
        ternary137 = (_Bool)c143;
      }
      if (!ternary137) break;
        char* t144 = s1128;
        char t145 = *t144;
        int cast146 = (int)t145;
        char* t147 = s2129;
        char t148 = *t147;
        int cast149 = (int)t148;
        _Bool c150 = ((cast146 != cast149)) ? 1 : 0;
        if (c150) {
          _Bool c151 = 0;
          __retval130 = c151;
          _Bool t152 = __retval130;
          _Bool ret_val153 = t152;
          return ret_val153;
        }
    for_step131: ;
      char* t154 = s1128;
      int c155 = 1;
      char* ptr156 = &(t154)[c155];
      s1128 = ptr156;
      char* t157 = s2129;
      int c158 = 1;
      char* ptr159 = &(t157)[c158];
      s2129 = ptr159;
    }
  _Bool c160 = 1;
  __retval130 = c160;
  _Bool t161 = __retval130;
  return t161;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v162, void* v163) {
bb164:
  struct std__basic_ostream_char__std__char_traits_char__* this165;
  void* __pf166;
  struct std__basic_ostream_char__std__char_traits_char__* __retval167;
  this165 = v162;
  __pf166 = v163;
  struct std__basic_ostream_char__std__char_traits_char__* t168 = this165;
  void* t169 = __pf166;
  struct std__basic_ostream_char__std__char_traits_char__* r170 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t169)(t168);
  __retval167 = r170;
  struct std__basic_ostream_char__std__char_traits_char__* t171 = __retval167;
  return t171;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v172) {
bb173:
  struct std__basic_ostream_char__std__char_traits_char__* __os174;
  struct std__basic_ostream_char__std__char_traits_char__* __retval175;
  __os174 = v172;
  struct std__basic_ostream_char__std__char_traits_char__* t176 = __os174;
  struct std__basic_ostream_char__std__char_traits_char__* r177 = std__ostream__flush(t176);
  __retval175 = r177;
  struct std__basic_ostream_char__std__char_traits_char__* t178 = __retval175;
  return t178;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v179) {
bb180:
  struct std__ctype_char_* __f181;
  struct std__ctype_char_* __retval182;
  __f181 = v179;
    struct std__ctype_char_* t183 = __f181;
    _Bool cast184 = (_Bool)t183;
    _Bool u185 = !cast184;
    if (u185) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t186 = __f181;
  __retval182 = t186;
  struct std__ctype_char_* t187 = __retval182;
  return t187;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v188, char v189) {
bb190:
  struct std__ctype_char_* this191;
  char __c192;
  char __retval193;
  this191 = v188;
  __c192 = v189;
  struct std__ctype_char_* t194 = this191;
    char t195 = t194->_M_widen_ok;
    _Bool cast196 = (_Bool)t195;
    if (cast196) {
      char t197 = __c192;
      unsigned char cast198 = (unsigned char)t197;
      unsigned long cast199 = (unsigned long)cast198;
      char t200 = t194->_M_widen[cast199];
      __retval193 = t200;
      char t201 = __retval193;
      return t201;
    }
  std__ctype_char____M_widen_init___const(t194);
  char t202 = __c192;
  void** v203 = (void**)t194;
  void* v204 = *((void**)v203);
  char vcall207 = (char)__VERIFIER_virtual_call_char_char(t194, 6, t202);
  __retval193 = vcall207;
  char t208 = __retval193;
  return t208;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v209, char v210) {
bb211:
  struct std__basic_ios_char__std__char_traits_char__* this212;
  char __c213;
  char __retval214;
  this212 = v209;
  __c213 = v210;
  struct std__basic_ios_char__std__char_traits_char__* t215 = this212;
  struct std__ctype_char_* t216 = t215->_M_ctype;
  struct std__ctype_char_* r217 = std__ctype_char__const__std____check_facet_std__ctype_char___(t216);
  char t218 = __c213;
  char r219 = std__ctype_char___widen_char__const(r217, t218);
  __retval214 = r219;
  char t220 = __retval214;
  return t220;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v221) {
bb222:
  struct std__basic_ostream_char__std__char_traits_char__* __os223;
  struct std__basic_ostream_char__std__char_traits_char__* __retval224;
  __os223 = v221;
  struct std__basic_ostream_char__std__char_traits_char__* t225 = __os223;
  struct std__basic_ostream_char__std__char_traits_char__* t226 = __os223;
  void** v227 = (void**)t226;
  void* v228 = *((void**)v227);
  unsigned char* cast229 = (unsigned char*)v228;
  long c230 = -24;
  unsigned char* ptr231 = &(cast229)[c230];
  long* cast232 = (long*)ptr231;
  long t233 = *cast232;
  unsigned char* cast234 = (unsigned char*)t226;
  unsigned char* ptr235 = &(cast234)[t233];
  struct std__basic_ostream_char__std__char_traits_char__* cast236 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr235;
  struct std__basic_ios_char__std__char_traits_char__* cast237 = (struct std__basic_ios_char__std__char_traits_char__*)cast236;
  char c238 = 10;
  char r239 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast237, c238);
  struct std__basic_ostream_char__std__char_traits_char__* r240 = std__ostream__put(t225, r239);
  struct std__basic_ostream_char__std__char_traits_char__* r241 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r240);
  __retval224 = r241;
  struct std__basic_ostream_char__std__char_traits_char__* t242 = __retval224;
  return t242;
}

// function: main
int main() {
bb243:
  int __retval244;
  char string1245[80];
  char string2246[80];
  int c247 = 0;
  __retval244 = c247;
  char* cast248 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r249 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast248);
  struct std__basic_istream_char__std__char_traits_char__* r250 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___80ul__std__basic_istream_char__std__char_traits_char______char_(&_ZSt3cin, string1245);
  struct std__basic_istream_char__std__char_traits_char__* r251 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___80ul__std__basic_istream_char__std__char_traits_char______char_(r250, string2246);
  char* cast252 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r253 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast252);
  char* cast254 = (char*)&(string1245);
  char* cast255 = (char*)&(string2246);
  _Bool r256 = mystery3(cast254, cast255);
  struct std__basic_ostream_char__std__char_traits_char__* r257 = std__ostream__operator__(r253, r256);
  struct std__basic_ostream_char__std__char_traits_char__* r258 = std__ostream__operator___std__ostream_____(r257, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c259 = 0;
  __retval244 = c259;
  int t260 = __retval244;
  return t260;
}

