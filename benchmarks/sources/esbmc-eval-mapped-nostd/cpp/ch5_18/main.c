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
struct std___Setw { int _M_n; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[37] = "Enter 1 to sort in ascending order,\n";
char _str_1[38] = "Enter 2 to sort in descending order: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[31] = "\nData items in original order\n";
char _str_3[32] = "\nData items in ascending order\n";
char _str_4[33] = "\nData items in descending order\n";
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
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void swap(int* p0, int* p1);
void bubble_int___int__bool____(int* p0, int p1, void* p2);
_Bool ascending(int p0, int p1);
_Bool descending(int p0, int p1);
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

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v103, long v104) {
bb105:
  struct std__ios_base* this106;
  long __wide107;
  long __retval108;
  long __old109;
  this106 = v103;
  __wide107 = v104;
  struct std__ios_base* t110 = this106;
  long t111 = t110->_M_width;
  __old109 = t111;
  long t112 = __wide107;
  t110->_M_width = t112;
  long t113 = __old109;
  __retval108 = t113;
  long t114 = __retval108;
  return t114;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v115, struct std___Setw v116) {
bb117:
  struct std__basic_ostream_char__std__char_traits_char__* __os118;
  struct std___Setw __f119;
  struct std__basic_ostream_char__std__char_traits_char__* __retval120;
  __os118 = v115;
  __f119 = v116;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = __os118;
  void** v122 = (void**)t121;
  void* v123 = *((void**)v122);
  unsigned char* cast124 = (unsigned char*)v123;
  long c125 = -24;
  unsigned char* ptr126 = &(cast124)[c125];
  long* cast127 = (long*)ptr126;
  long t128 = *cast127;
  unsigned char* cast129 = (unsigned char*)t121;
  unsigned char* ptr130 = &(cast129)[t128];
  struct std__basic_ostream_char__std__char_traits_char__* cast131 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr130;
  struct std__ios_base* cast132 = (struct std__ios_base*)cast131;
  int t133 = __f119._M_n;
  long cast134 = (long)t133;
  long r135 = std__ios_base__width(cast132, cast134);
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __os118;
  __retval120 = t136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval120;
  return t137;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v138) {
bb139:
  int __n140;
  struct std___Setw __retval141;
  __n140 = v138;
  int t142 = __n140;
  __retval141._M_n = t142;
  struct std___Setw t143 = __retval141;
  return t143;
}

// function: _Z4swapPiS_
void swap(int* v144, int* v145) {
bb146:
  int* element1Ptr147;
  int* element2Ptr148;
  int hold149;
  element1Ptr147 = v144;
  element2Ptr148 = v145;
  int* t150 = element1Ptr147;
  int t151 = *t150;
  hold149 = t151;
  int* t152 = element2Ptr148;
  int t153 = *t152;
  int* t154 = element1Ptr147;
  *t154 = t153;
  int t155 = hold149;
  int* t156 = element2Ptr148;
  *t156 = t155;
  return;
}

// function: _Z6bubblePiiPFbiiE
void bubble_int___int__bool____(int* v157, int v158, void* v159) {
bb160:
  int* work161;
  int size162;
  void* compare163;
  work161 = v157;
  size162 = v158;
  compare163 = v159;
    int pass164;
    int c165 = 1;
    pass164 = c165;
    while (1) {
      int t167 = pass164;
      int t168 = size162;
      _Bool c169 = ((t167 < t168)) ? 1 : 0;
      if (!c169) break;
        int count170;
        int c171 = 0;
        count170 = c171;
        while (1) {
          int t173 = count170;
          int t174 = size162;
          int c175 = 1;
          int b176 = t174 - c175;
          _Bool c177 = ((t173 < b176)) ? 1 : 0;
          if (!c177) break;
            void* t178 = compare163;
            int t179 = count170;
            long cast180 = (long)t179;
            int* t181 = work161;
            int* ptr182 = &(t181)[cast180];
            int t183 = *ptr182;
            int t184 = count170;
            int c185 = 1;
            int b186 = t184 + c185;
            long cast187 = (long)b186;
            int* t188 = work161;
            int* ptr189 = &(t188)[cast187];
            int t190 = *ptr189;
            _Bool r191 = ((_Bool (*)(int, int))t178)(t183, t190);
            if (r191) {
              int t192 = count170;
              long cast193 = (long)t192;
              int* t194 = work161;
              int* ptr195 = &(t194)[cast193];
              int t196 = count170;
              int c197 = 1;
              int b198 = t196 + c197;
              long cast199 = (long)b198;
              int* t200 = work161;
              int* ptr201 = &(t200)[cast199];
              swap(ptr195, ptr201);
            }
        for_step172: ;
          int t202 = count170;
          int u203 = t202 + 1;
          count170 = u203;
        }
    for_step166: ;
      int t204 = pass164;
      int u205 = t204 + 1;
      pass164 = u205;
    }
  return;
}

// function: _Z9ascendingii
_Bool ascending(int v206, int v207) {
bb208:
  int a209;
  int b210;
  _Bool __retval211;
  a209 = v206;
  b210 = v207;
  int t212 = b210;
  int t213 = a209;
  _Bool c214 = ((t212 < t213)) ? 1 : 0;
  __retval211 = c214;
  _Bool t215 = __retval211;
  return t215;
}

// function: _Z10descendingii
_Bool descending(int v216, int v217) {
bb218:
  int a219;
  int b220;
  _Bool __retval221;
  a219 = v216;
  b220 = v217;
  int t222 = b220;
  int t223 = a219;
  _Bool c224 = ((t222 > t223)) ? 1 : 0;
  __retval221 = c224;
  _Bool t225 = __retval221;
  return t225;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v226, void* v227) {
bb228:
  struct std__basic_ostream_char__std__char_traits_char__* this229;
  void* __pf230;
  struct std__basic_ostream_char__std__char_traits_char__* __retval231;
  this229 = v226;
  __pf230 = v227;
  struct std__basic_ostream_char__std__char_traits_char__* t232 = this229;
  void* t233 = __pf230;
  struct std__basic_ostream_char__std__char_traits_char__* r234 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t233)(t232);
  __retval231 = r234;
  struct std__basic_ostream_char__std__char_traits_char__* t235 = __retval231;
  return t235;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v236) {
bb237:
  struct std__basic_ostream_char__std__char_traits_char__* __os238;
  struct std__basic_ostream_char__std__char_traits_char__* __retval239;
  __os238 = v236;
  struct std__basic_ostream_char__std__char_traits_char__* t240 = __os238;
  struct std__basic_ostream_char__std__char_traits_char__* r241 = std__ostream__flush(t240);
  __retval239 = r241;
  struct std__basic_ostream_char__std__char_traits_char__* t242 = __retval239;
  return t242;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v243) {
bb244:
  struct std__ctype_char_* __f245;
  struct std__ctype_char_* __retval246;
  __f245 = v243;
    struct std__ctype_char_* t247 = __f245;
    _Bool cast248 = (_Bool)t247;
    _Bool u249 = !cast248;
    if (u249) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t250 = __f245;
  __retval246 = t250;
  struct std__ctype_char_* t251 = __retval246;
  return t251;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v252, char v253) {
bb254:
  struct std__ctype_char_* this255;
  char __c256;
  char __retval257;
  this255 = v252;
  __c256 = v253;
  struct std__ctype_char_* t258 = this255;
    char t259 = t258->_M_widen_ok;
    _Bool cast260 = (_Bool)t259;
    if (cast260) {
      char t261 = __c256;
      unsigned char cast262 = (unsigned char)t261;
      unsigned long cast263 = (unsigned long)cast262;
      char t264 = t258->_M_widen[cast263];
      __retval257 = t264;
      char t265 = __retval257;
      return t265;
    }
  std__ctype_char____M_widen_init___const(t258);
  char t266 = __c256;
  void** v267 = (void**)t258;
  void* v268 = *((void**)v267);
  char vcall271 = (char)__VERIFIER_virtual_call_char_char(t258, 6, t266);
  __retval257 = vcall271;
  char t272 = __retval257;
  return t272;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v273, char v274) {
bb275:
  struct std__basic_ios_char__std__char_traits_char__* this276;
  char __c277;
  char __retval278;
  this276 = v273;
  __c277 = v274;
  struct std__basic_ios_char__std__char_traits_char__* t279 = this276;
  struct std__ctype_char_* t280 = t279->_M_ctype;
  struct std__ctype_char_* r281 = std__ctype_char__const__std____check_facet_std__ctype_char___(t280);
  char t282 = __c277;
  char r283 = std__ctype_char___widen_char__const(r281, t282);
  __retval278 = r283;
  char t284 = __retval278;
  return t284;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v285) {
bb286:
  struct std__basic_ostream_char__std__char_traits_char__* __os287;
  struct std__basic_ostream_char__std__char_traits_char__* __retval288;
  __os287 = v285;
  struct std__basic_ostream_char__std__char_traits_char__* t289 = __os287;
  struct std__basic_ostream_char__std__char_traits_char__* t290 = __os287;
  void** v291 = (void**)t290;
  void* v292 = *((void**)v291);
  unsigned char* cast293 = (unsigned char*)v292;
  long c294 = -24;
  unsigned char* ptr295 = &(cast293)[c294];
  long* cast296 = (long*)ptr295;
  long t297 = *cast296;
  unsigned char* cast298 = (unsigned char*)t290;
  unsigned char* ptr299 = &(cast298)[t297];
  struct std__basic_ostream_char__std__char_traits_char__* cast300 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr299;
  struct std__basic_ios_char__std__char_traits_char__* cast301 = (struct std__basic_ios_char__std__char_traits_char__*)cast300;
  char c302 = 10;
  char r303 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast301, c302);
  struct std__basic_ostream_char__std__char_traits_char__* r304 = std__ostream__put(t289, r303);
  struct std__basic_ostream_char__std__char_traits_char__* r305 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r304);
  __retval288 = r305;
  struct std__basic_ostream_char__std__char_traits_char__* t306 = __retval288;
  return t306;
}

// function: main
int main() {
bb307:
  int __retval308;
  int arraySize309;
  int order310;
  int counter311;
  int a312[10];
  int c313 = 0;
  __retval308 = c313;
  int c314 = 10;
  arraySize309 = c314;
  // array copy
  __builtin_memcpy(a312, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast315 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r316 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast315);
  char* cast317 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r318 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r316, cast317);
  struct std__basic_istream_char__std__char_traits_char__* r319 = std__istream__operator__(&_ZSt3cin, &order310);
  char* cast320 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r321 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast320);
    struct std___Setw agg_tmp0322;
    int c323 = 0;
    counter311 = c323;
    while (1) {
      int t325 = counter311;
      int t326 = arraySize309;
      _Bool c327 = ((t325 < t326)) ? 1 : 0;
      if (!c327) break;
      int c328 = 4;
      struct std___Setw r329 = std__setw(c328);
      agg_tmp0322 = r329;
      struct std___Setw t330 = agg_tmp0322;
      struct std__basic_ostream_char__std__char_traits_char__* r331 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t330);
      int t332 = counter311;
      long cast333 = (long)t332;
      int t334 = a312[cast333];
      struct std__basic_ostream_char__std__char_traits_char__* r335 = std__ostream__operator__(r331, t334);
    for_step324: ;
      int t336 = counter311;
      int u337 = t336 + 1;
      counter311 = u337;
    }
    int t338 = order310;
    int c339 = 1;
    _Bool c340 = ((t338 == c339)) ? 1 : 0;
    if (c340) {
      int* cast341 = (int*)&(a312);
      int t342 = arraySize309;
      bubble_int___int__bool____(cast341, t342, &ascending);
      char* cast343 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r344 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast343);
    } else {
      int* cast345 = (int*)&(a312);
      int t346 = arraySize309;
      bubble_int___int__bool____(cast345, t346, &descending);
      char* cast347 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r348 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast347);
    }
    struct std___Setw agg_tmp1349;
    int c350 = 0;
    counter311 = c350;
    while (1) {
      int t352 = counter311;
      int t353 = arraySize309;
      _Bool c354 = ((t352 < t353)) ? 1 : 0;
      if (!c354) break;
      int c355 = 4;
      struct std___Setw r356 = std__setw(c355);
      agg_tmp1349 = r356;
      struct std___Setw t357 = agg_tmp1349;
      struct std__basic_ostream_char__std__char_traits_char__* r358 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t357);
      int t359 = counter311;
      long cast360 = (long)t359;
      int t361 = a312[cast360];
      struct std__basic_ostream_char__std__char_traits_char__* r362 = std__ostream__operator__(r358, t361);
    for_step351: ;
      int t363 = counter311;
      int u364 = t363 + 1;
      counter311 = u364;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r365 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c366 = 0;
  __retval308 = c366;
  int t367 = __retval308;
  return t367;
}

