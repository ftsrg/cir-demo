extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_myints[3] = {3, 2, 1};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[47] = "The 3! possible permutations with 3 elements:\n";
char _str_1[2] = " ";
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
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* p0, int* p1, int* p2);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap_int___int__(int* p0, int* p1);
void void_std____reverse_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
_Bool bool_std____prev_permutation_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
_Bool bool_std__prev_permutation_int__(int* p0, int* p1);
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v103, void* v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  void* __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __pf107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  void* t110 = __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t110)(t109);
  __retval108 = r111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v113) {
bb114:
  struct std__basic_ostream_char__std__char_traits_char__* __os115;
  struct std__basic_ostream_char__std__char_traits_char__* __retval116;
  __os115 = v113;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __os115;
  struct std__basic_ostream_char__std__char_traits_char__* r118 = std__ostream__flush(t117);
  __retval116 = r118;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __retval116;
  return t119;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v120) {
bb121:
  struct std__ctype_char_* __f122;
  struct std__ctype_char_* __retval123;
  __f122 = v120;
    struct std__ctype_char_* t124 = __f122;
    _Bool cast125 = (_Bool)t124;
    _Bool u126 = !cast125;
    if (u126) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t127 = __f122;
  __retval123 = t127;
  struct std__ctype_char_* t128 = __retval123;
  return t128;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v129, char v130) {
bb131:
  struct std__ctype_char_* this132;
  char __c133;
  char __retval134;
  this132 = v129;
  __c133 = v130;
  struct std__ctype_char_* t135 = this132;
    char t136 = t135->_M_widen_ok;
    _Bool cast137 = (_Bool)t136;
    if (cast137) {
      char t138 = __c133;
      unsigned char cast139 = (unsigned char)t138;
      unsigned long cast140 = (unsigned long)cast139;
      char t141 = t135->_M_widen[cast140];
      __retval134 = t141;
      char t142 = __retval134;
      return t142;
    }
  std__ctype_char____M_widen_init___const(t135);
  char t143 = __c133;
  void** v144 = (void**)t135;
  void* v145 = *((void**)v144);
  char vcall148 = (char)__VERIFIER_virtual_call_char_char(t135, 6, t143);
  __retval134 = vcall148;
  char t149 = __retval134;
  return t149;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v150, char v151) {
bb152:
  struct std__basic_ios_char__std__char_traits_char__* this153;
  char __c154;
  char __retval155;
  this153 = v150;
  __c154 = v151;
  struct std__basic_ios_char__std__char_traits_char__* t156 = this153;
  struct std__ctype_char_* t157 = t156->_M_ctype;
  struct std__ctype_char_* r158 = std__ctype_char__const__std____check_facet_std__ctype_char___(t157);
  char t159 = __c154;
  char r160 = std__ctype_char___widen_char__const(r158, t159);
  __retval155 = r160;
  char t161 = __retval155;
  return t161;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v162) {
bb163:
  struct std__basic_ostream_char__std__char_traits_char__* __os164;
  struct std__basic_ostream_char__std__char_traits_char__* __retval165;
  __os164 = v162;
  struct std__basic_ostream_char__std__char_traits_char__* t166 = __os164;
  struct std__basic_ostream_char__std__char_traits_char__* t167 = __os164;
  void** v168 = (void**)t167;
  void* v169 = *((void**)v168);
  unsigned char* cast170 = (unsigned char*)v169;
  long c171 = -24;
  unsigned char* ptr172 = &(cast170)[c171];
  long* cast173 = (long*)ptr172;
  long t174 = *cast173;
  unsigned char* cast175 = (unsigned char*)t167;
  unsigned char* ptr176 = &(cast175)[t174];
  struct std__basic_ostream_char__std__char_traits_char__* cast177 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr176;
  struct std__basic_ios_char__std__char_traits_char__* cast178 = (struct std__basic_ios_char__std__char_traits_char__*)cast177;
  char c179 = 10;
  char r180 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast178, c179);
  struct std__basic_ostream_char__std__char_traits_char__* r181 = std__ostream__put(t166, r180);
  struct std__basic_ostream_char__std__char_traits_char__* r182 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r181);
  __retval165 = r182;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __retval165;
  return t183;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* v184, int* v185, int* v186) {
bb187:
  struct __gnu_cxx____ops___Iter_less_iter* this188;
  int* __it1189;
  int* __it2190;
  _Bool __retval191;
  this188 = v184;
  __it1189 = v185;
  __it2190 = v186;
  struct __gnu_cxx____ops___Iter_less_iter* t192 = this188;
  int* t193 = __it1189;
  int t194 = *t193;
  int* t195 = __it2190;
  int t196 = *t195;
  _Bool c197 = ((t194 < t196)) ? 1 : 0;
  __retval191 = c197;
  _Bool t198 = __retval191;
  return t198;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v199, int* v200) {
bb201:
  int* __a202;
  int* __b203;
  int __tmp204;
  __a202 = v199;
  __b203 = v200;
  int* t205 = __a202;
  int t206 = *t205;
  __tmp204 = t206;
  int* t207 = __b203;
  int t208 = *t207;
  int* t209 = __a202;
  *t209 = t208;
  int t210 = __tmp204;
  int* t211 = __b203;
  *t211 = t210;
  return;
}

// function: _ZSt9iter_swapIPiS0_EvT_T0_
void void_std__iter_swap_int___int__(int* v212, int* v213) {
bb214:
  int* __a215;
  int* __b216;
  __a215 = v212;
  __b216 = v213;
  int* t217 = __a215;
  int* t218 = __b216;
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(t217, t218);
  return;
}

// function: _ZSt9__reverseIPiEvT_S1_St26random_access_iterator_tag
void void_std____reverse_int__(int* v219, int* v220, struct std__random_access_iterator_tag v221) {
bb222:
  int* __first223;
  int* __last224;
  struct std__random_access_iterator_tag unnamed225;
  __first223 = v219;
  __last224 = v220;
  unnamed225 = v221;
    int* t226 = __first223;
    int* t227 = __last224;
    _Bool c228 = ((t226 == t227)) ? 1 : 0;
    if (c228) {
      return;
    }
  int* t229 = __last224;
  int c230 = -1;
  int* ptr231 = &(t229)[c230];
  __last224 = ptr231;
    while (1) {
      int* t232 = __first223;
      int* t233 = __last224;
      _Bool c234 = ((t232 < t233)) ? 1 : 0;
      if (!c234) break;
        int* t235 = __first223;
        int* t236 = __last224;
        void_std__iter_swap_int___int__(t235, t236);
        int* t237 = __first223;
        int c238 = 1;
        int* ptr239 = &(t237)[c238];
        __first223 = ptr239;
        int* t240 = __last224;
        int c241 = -1;
        int* ptr242 = &(t240)[c241];
        __last224 = ptr242;
    }
  return;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v243) {
bb244:
  int** unnamed245;
  struct std__random_access_iterator_tag __retval246;
  unnamed245 = v243;
  struct std__random_access_iterator_tag t247 = __retval246;
  return t247;
}

// function: _ZSt18__prev_permutationIPiN9__gnu_cxx5__ops15_Iter_less_iterEEbT_S4_T0_
_Bool bool_std____prev_permutation_int_____gnu_cxx____ops___Iter_less_iter_(int* v248, int* v249, struct __gnu_cxx____ops___Iter_less_iter v250) {
bb251:
  int* __first252;
  int* __last253;
  struct __gnu_cxx____ops___Iter_less_iter __comp254;
  _Bool __retval255;
  int* __i256;
  __first252 = v248;
  __last253 = v249;
  __comp254 = v250;
    int* t257 = __first252;
    int* t258 = __last253;
    _Bool c259 = ((t257 == t258)) ? 1 : 0;
    if (c259) {
      _Bool c260 = 0;
      __retval255 = c260;
      _Bool t261 = __retval255;
      return t261;
    }
  int* t262 = __first252;
  __i256 = t262;
  int* t263 = __i256;
  int c264 = 1;
  int* ptr265 = &(t263)[c264];
  __i256 = ptr265;
    int* t266 = __i256;
    int* t267 = __last253;
    _Bool c268 = ((t266 == t267)) ? 1 : 0;
    if (c268) {
      _Bool c269 = 0;
      __retval255 = c269;
      _Bool t270 = __retval255;
      return t270;
    }
  int* t271 = __last253;
  __i256 = t271;
  int* t272 = __i256;
  int c273 = -1;
  int* ptr274 = &(t272)[c273];
  __i256 = ptr274;
    while (1) {
      _Bool c276 = 1;
      if (!c276) break;
        int* __ii277;
        int* t278 = __i256;
        __ii277 = t278;
        int* t279 = __i256;
        int c280 = -1;
        int* ptr281 = &(t279)[c280];
        __i256 = ptr281;
          int* t282 = __ii277;
          int* t283 = __i256;
          _Bool r284 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp254, t282, t283);
          if (r284) {
            int* __j285;
            struct std__random_access_iterator_tag agg_tmp0286;
            int* t287 = __last253;
            __j285 = t287;
              while (1) {
                int* t288 = __j285;
                int c289 = -1;
                int* ptr290 = &(t288)[c289];
                __j285 = ptr290;
                int* t291 = __i256;
                _Bool r292 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp254, ptr290, t291);
                _Bool u293 = !r292;
                if (!u293) break;
              }
            int* t294 = __i256;
            int* t295 = __j285;
            void_std__iter_swap_int___int__(t294, t295);
            int* t296 = __ii277;
            int* t297 = __last253;
            struct std__random_access_iterator_tag r298 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first252);
            agg_tmp0286 = r298;
            struct std__random_access_iterator_tag t299 = agg_tmp0286;
            void_std____reverse_int__(t296, t297, t299);
            _Bool c300 = 1;
            __retval255 = c300;
            _Bool t301 = __retval255;
            _Bool ret_val302 = t301;
            return ret_val302;
          }
          int* t303 = __i256;
          int* t304 = __first252;
          _Bool c305 = ((t303 == t304)) ? 1 : 0;
          if (c305) {
            struct std__random_access_iterator_tag agg_tmp1306;
            int* t307 = __first252;
            int* t308 = __last253;
            struct std__random_access_iterator_tag r309 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first252);
            agg_tmp1306 = r309;
            struct std__random_access_iterator_tag t310 = agg_tmp1306;
            void_std____reverse_int__(t307, t308, t310);
            _Bool c311 = 0;
            __retval255 = c311;
            _Bool t312 = __retval255;
            _Bool ret_val313 = t312;
            return ret_val313;
          }
    for_step275: ;
    }
  abort();
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb314:
  struct __gnu_cxx____ops___Iter_less_iter __retval315;
  struct __gnu_cxx____ops___Iter_less_iter t316 = __retval315;
  return t316;
}

// function: _ZSt16prev_permutationIPiEbT_S1_
_Bool bool_std__prev_permutation_int__(int* v317, int* v318) {
bb319:
  int* __first320;
  int* __last321;
  _Bool __retval322;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0323;
  __first320 = v317;
  __last321 = v318;
  int* t324 = __first320;
  int* t325 = __last321;
  struct __gnu_cxx____ops___Iter_less_iter r326 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0323 = r326;
  struct __gnu_cxx____ops___Iter_less_iter t327 = agg_tmp0323;
  _Bool r328 = bool_std____prev_permutation_int_____gnu_cxx____ops___Iter_less_iter_(t324, t325, t327);
  __retval322 = r328;
  _Bool t329 = __retval322;
  return t329;
}

// function: main
int main() {
bb330:
  int __retval331;
  int myints332[3];
  int c333 = 0;
  __retval331 = c333;
  // array copy
  __builtin_memcpy(myints332, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
  char* cast334 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r335 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast334);
    do {
        long c336 = 0;
        int t337 = myints332[c336];
        struct std__basic_ostream_char__std__char_traits_char__* r338 = std__ostream__operator__(&_ZSt4cout, t337);
        char* cast339 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r340 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r338, cast339);
        long c341 = 1;
        int t342 = myints332[c341];
        struct std__basic_ostream_char__std__char_traits_char__* r343 = std__ostream__operator__(r340, t342);
        char* cast344 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r345 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r343, cast344);
        long c346 = 2;
        int t347 = myints332[c346];
        struct std__basic_ostream_char__std__char_traits_char__* r348 = std__ostream__operator__(r345, t347);
        struct std__basic_ostream_char__std__char_traits_char__* r349 = std__ostream__operator___std__ostream_____(r348, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int* cast350 = (int*)&(myints332);
      int* cast351 = (int*)&(myints332);
      int c352 = 3;
      int* ptr353 = &(cast351)[c352];
      _Bool r354 = bool_std__prev_permutation_int__(cast350, ptr353);
      if (!r354) break;
    } while (1);
  int c355 = 0;
  __retval331 = c355;
  int t356 = __retval331;
  return t356;
}

