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
struct std___Setprecision { int _M_n; };
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
struct std__ios_base { void* __field0; long _M_precision; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_studentGrades[3][4] = {{77, 68, 86, 73}, {96, 87, 89, 78}, {70, 90, 86, 81}};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[15] = "The array is:\n";
int _ZL8students __attribute__((aligned(4))) = 3;
int _ZL5exams __attribute__((aligned(4))) = 4;
char _str_1[17] = "\n\nLowest grade: ";
char _str_2[17] = "\nHighest grade: ";
char _str_3[31] = "The average grade for student ";
char _str_4[5] = " is ";
char _str_5[36] = "                 [0]  [1]  [2]  [3]";
char _str_6[16] = "\nstudentGrades[";
char _str_7[3] = "] ";
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct std__ios_base* std__left(struct std__ios_base* p0);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
void printArray_int_(int* p0, int p1, int p2);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int minimum_int_(int* p0, int p1, int p2);
int maximum_int_(int* p0, int p1, int p2);
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
struct std___Setprecision std__setprecision(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
double average(int* p0, int p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
int main();

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v0, int v1) {
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
  int r26 = std__operator__3(r24, t25);
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

// function: _ZSt4leftRSt8ios_base
struct std__ios_base* std__left(struct std__ios_base* v103) {
bb104:
  struct std__ios_base* __base105;
  struct std__ios_base* __retval106;
  __base105 = v103;
  struct std__ios_base* t107 = __base105;
  int t108 = _ZNSt8ios_base4leftE_const;
  int t109 = _ZNSt8ios_base11adjustfieldE_const;
  int r110 = std__ios_base__setf(t107, t108, t109);
  struct std__ios_base* t111 = __base105;
  __retval106 = t111;
  struct std__ios_base* t112 = __retval106;
  return t112;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v113, long v114) {
bb115:
  struct std__ios_base* this116;
  long __wide117;
  long __retval118;
  long __old119;
  this116 = v113;
  __wide117 = v114;
  struct std__ios_base* t120 = this116;
  long t121 = t120->_M_width;
  __old119 = t121;
  long t122 = __wide117;
  t120->_M_width = t122;
  long t123 = __old119;
  __retval118 = t123;
  long t124 = __retval118;
  return t124;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v125, struct std___Setw v126) {
bb127:
  struct std__basic_ostream_char__std__char_traits_char__* __os128;
  struct std___Setw __f129;
  struct std__basic_ostream_char__std__char_traits_char__* __retval130;
  __os128 = v125;
  __f129 = v126;
  struct std__basic_ostream_char__std__char_traits_char__* t131 = __os128;
  void** v132 = (void**)t131;
  void* v133 = *((void**)v132);
  unsigned char* cast134 = (unsigned char*)v133;
  long c135 = -24;
  unsigned char* ptr136 = &(cast134)[c135];
  long* cast137 = (long*)ptr136;
  long t138 = *cast137;
  unsigned char* cast139 = (unsigned char*)t131;
  unsigned char* ptr140 = &(cast139)[t138];
  struct std__basic_ostream_char__std__char_traits_char__* cast141 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr140;
  struct std__ios_base* cast142 = (struct std__ios_base*)cast141;
  int t143 = __f129._M_n;
  long cast144 = (long)t143;
  long r145 = std__ios_base__width(cast142, cast144);
  struct std__basic_ostream_char__std__char_traits_char__* t146 = __os128;
  __retval130 = t146;
  struct std__basic_ostream_char__std__char_traits_char__* t147 = __retval130;
  return t147;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v148) {
bb149:
  int __n150;
  struct std___Setw __retval151;
  __n150 = v148;
  int t152 = __n150;
  __retval151._M_n = t152;
  struct std___Setw t153 = __retval151;
  return t153;
}

// function: _Z10printArrayPA4_iii
void printArray_int_(int* v154, int v155, int v156) {
bb157:
  int* grades158;
  int pupils159;
  int tests160;
  grades158 = v154;
  pupils159 = v155;
  tests160 = v156;
  struct std__basic_ostream_char__std__char_traits_char__* r161 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__left);
  char* cast162 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r163 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r161, cast162);
    int i164;
    int c165 = 0;
    i164 = c165;
    while (1) {
      int t167 = i164;
      int t168 = pupils159;
      _Bool c169 = ((t167 < t168)) ? 1 : 0;
      if (!c169) break;
        char* cast170 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r171 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast170);
        int t172 = i164;
        struct std__basic_ostream_char__std__char_traits_char__* r173 = std__ostream__operator___2(r171, t172);
        char* cast174 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r175 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r173, cast174);
          int j176;
          struct std___Setw agg_tmp0177;
          int c178 = 0;
          j176 = c178;
          while (1) {
            int t180 = j176;
            int t181 = tests160;
            _Bool c182 = ((t180 < t181)) ? 1 : 0;
            if (!c182) break;
            int c183 = 5;
            struct std___Setw r184 = std__setw(c183);
            agg_tmp0177 = r184;
            struct std___Setw t185 = agg_tmp0177;
            struct std__basic_ostream_char__std__char_traits_char__* r186 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(&_ZSt4cout, t185);
            int t187 = j176;
            long cast188 = (long)t187;
            int t189 = i164;
            long cast190 = (long)t189;
            int* t191 = grades158;
            int* ptr192 = &(t191)[(cast190) * 4];
            int t193 = ptr192[cast188];
            struct std__basic_ostream_char__std__char_traits_char__* r194 = std__ostream__operator___2(r186, t193);
          for_step179: ;
            int t195 = j176;
            int u196 = t195 + 1;
            j176 = u196;
          }
    for_step166: ;
      int t197 = i164;
      int u198 = t197 + 1;
      i164 = u198;
    }
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v199) {
bb200:
  struct std__ios_base* this201;
  long __retval202;
  this201 = v199;
  struct std__ios_base* t203 = this201;
  long t204 = t203->_M_width;
  __retval202 = t204;
  long t205 = __retval202;
  return t205;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v206, char v207) {
bb208:
  struct std__basic_ostream_char__std__char_traits_char__* __out209;
  char __c210;
  struct std__basic_ostream_char__std__char_traits_char__* __retval211;
  __out209 = v206;
  __c210 = v207;
    struct std__basic_ostream_char__std__char_traits_char__* t212 = __out209;
    void** v213 = (void**)t212;
    void* v214 = *((void**)v213);
    unsigned char* cast215 = (unsigned char*)v214;
    long c216 = -24;
    unsigned char* ptr217 = &(cast215)[c216];
    long* cast218 = (long*)ptr217;
    long t219 = *cast218;
    unsigned char* cast220 = (unsigned char*)t212;
    unsigned char* ptr221 = &(cast220)[t219];
    struct std__basic_ostream_char__std__char_traits_char__* cast222 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr221;
    struct std__ios_base* cast223 = (struct std__ios_base*)cast222;
    long r224 = std__ios_base__width___const(cast223);
    long c225 = 0;
    _Bool c226 = ((r224 != c225)) ? 1 : 0;
    if (c226) {
      struct std__basic_ostream_char__std__char_traits_char__* t227 = __out209;
      long c228 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r229 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t227, &__c210, c228);
      __retval211 = r229;
      struct std__basic_ostream_char__std__char_traits_char__* t230 = __retval211;
      return t230;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t231 = __out209;
  char t232 = __c210;
  struct std__basic_ostream_char__std__char_traits_char__* r233 = std__ostream__put(t231, t232);
  struct std__basic_ostream_char__std__char_traits_char__* t234 = __out209;
  __retval211 = t234;
  struct std__basic_ostream_char__std__char_traits_char__* t235 = __retval211;
  return t235;
}

// function: _Z7minimumPA4_iii
int minimum_int_(int* v236, int v237, int v238) {
bb239:
  int* grades240;
  int pupils241;
  int tests242;
  int __retval243;
  int lowGrade244;
  grades240 = v236;
  pupils241 = v237;
  tests242 = v238;
  int c245 = 100;
  lowGrade244 = c245;
    int i246;
    int c247 = 0;
    i246 = c247;
    while (1) {
      int t249 = i246;
      int t250 = pupils241;
      _Bool c251 = ((t249 < t250)) ? 1 : 0;
      if (!c251) break;
        int j252;
        int c253 = 0;
        j252 = c253;
        while (1) {
          int t255 = j252;
          int t256 = tests242;
          _Bool c257 = ((t255 < t256)) ? 1 : 0;
          if (!c257) break;
            int t258 = j252;
            long cast259 = (long)t258;
            int t260 = i246;
            long cast261 = (long)t260;
            int* t262 = grades240;
            int* ptr263 = &(t262)[(cast261) * 4];
            int t264 = ptr263[cast259];
            int t265 = lowGrade244;
            _Bool c266 = ((t264 < t265)) ? 1 : 0;
            if (c266) {
              int t267 = j252;
              long cast268 = (long)t267;
              int t269 = i246;
              long cast270 = (long)t269;
              int* t271 = grades240;
              int* ptr272 = &(t271)[(cast270) * 4];
              int t273 = ptr272[cast268];
              lowGrade244 = t273;
            }
        for_step254: ;
          int t274 = j252;
          int u275 = t274 + 1;
          j252 = u275;
        }
    for_step248: ;
      int t276 = i246;
      int u277 = t276 + 1;
      i246 = u277;
    }
  int t278 = lowGrade244;
  __retval243 = t278;
  int t279 = __retval243;
  return t279;
}

// function: _Z7maximumPA4_iii
int maximum_int_(int* v280, int v281, int v282) {
bb283:
  int* grades284;
  int pupils285;
  int tests286;
  int __retval287;
  int highGrade288;
  grades284 = v280;
  pupils285 = v281;
  tests286 = v282;
  int c289 = 0;
  highGrade288 = c289;
    int i290;
    int c291 = 0;
    i290 = c291;
    while (1) {
      int t293 = i290;
      int t294 = pupils285;
      _Bool c295 = ((t293 < t294)) ? 1 : 0;
      if (!c295) break;
        int j296;
        int c297 = 0;
        j296 = c297;
        while (1) {
          int t299 = j296;
          int t300 = tests286;
          _Bool c301 = ((t299 < t300)) ? 1 : 0;
          if (!c301) break;
            int t302 = j296;
            long cast303 = (long)t302;
            int t304 = i290;
            long cast305 = (long)t304;
            int* t306 = grades284;
            int* ptr307 = &(t306)[(cast305) * 4];
            int t308 = ptr307[cast303];
            int t309 = highGrade288;
            _Bool c310 = ((t308 > t309)) ? 1 : 0;
            if (c310) {
              int t311 = j296;
              long cast312 = (long)t311;
              int t313 = i290;
              long cast314 = (long)t313;
              int* t315 = grades284;
              int* ptr316 = &(t315)[(cast314) * 4];
              int t317 = ptr316[cast312];
              highGrade288 = t317;
            }
        for_step298: ;
          int t318 = j296;
          int u319 = t318 + 1;
          j296 = u319;
        }
    for_step292: ;
      int t320 = i290;
      int u321 = t320 + 1;
      i290 = u321;
    }
  int t322 = highGrade288;
  __retval287 = t322;
  int t323 = __retval287;
  return t323;
}

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v324, long v325) {
bb326:
  struct std__ios_base* this327;
  long __prec328;
  long __retval329;
  long __old330;
  this327 = v324;
  __prec328 = v325;
  struct std__ios_base* t331 = this327;
  long t332 = t331->_M_precision;
  __old330 = t332;
  long t333 = __prec328;
  t331->_M_precision = t333;
  long t334 = __old330;
  __retval329 = t334;
  long t335 = __retval329;
  return t335;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v336, struct std___Setprecision v337) {
bb338:
  struct std__basic_ostream_char__std__char_traits_char__* __os339;
  struct std___Setprecision __f340;
  struct std__basic_ostream_char__std__char_traits_char__* __retval341;
  __os339 = v336;
  __f340 = v337;
  struct std__basic_ostream_char__std__char_traits_char__* t342 = __os339;
  void** v343 = (void**)t342;
  void* v344 = *((void**)v343);
  unsigned char* cast345 = (unsigned char*)v344;
  long c346 = -24;
  unsigned char* ptr347 = &(cast345)[c346];
  long* cast348 = (long*)ptr347;
  long t349 = *cast348;
  unsigned char* cast350 = (unsigned char*)t342;
  unsigned char* ptr351 = &(cast350)[t349];
  struct std__basic_ostream_char__std__char_traits_char__* cast352 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr351;
  struct std__ios_base* cast353 = (struct std__ios_base*)cast352;
  int t354 = __f340._M_n;
  long cast355 = (long)t354;
  long r356 = std__ios_base__precision(cast353, cast355);
  struct std__basic_ostream_char__std__char_traits_char__* t357 = __os339;
  __retval341 = t357;
  struct std__basic_ostream_char__std__char_traits_char__* t358 = __retval341;
  return t358;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v359, void* v360) {
bb361:
  struct std__basic_ostream_char__std__char_traits_char__* this362;
  void* __pf363;
  struct std__basic_ostream_char__std__char_traits_char__* __retval364;
  this362 = v359;
  __pf363 = v360;
  struct std__basic_ostream_char__std__char_traits_char__* t365 = this362;
  void* t366 = __pf363;
  void** v367 = (void**)t365;
  void* v368 = *((void**)v367);
  unsigned char* cast369 = (unsigned char*)v368;
  long c370 = -24;
  unsigned char* ptr371 = &(cast369)[c370];
  long* cast372 = (long*)ptr371;
  long t373 = *cast372;
  unsigned char* cast374 = (unsigned char*)t365;
  unsigned char* ptr375 = &(cast374)[t373];
  struct std__basic_ostream_char__std__char_traits_char__* cast376 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr375;
  struct std__ios_base* cast377 = (struct std__ios_base*)cast376;
  struct std__ios_base* r378 = ((struct std__ios_base* (*)(struct std__ios_base*))t366)(cast377);
  __retval364 = t365;
  struct std__basic_ostream_char__std__char_traits_char__* t379 = __retval364;
  return t379;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v380, int v381) {
bb382:
  int* __a383;
  int __b384;
  int* __retval385;
  __a383 = v380;
  __b384 = v381;
  int* t386 = __a383;
  int t387 = *t386;
  int t388 = __b384;
  int r389 = std__operator_(t387, t388);
  int* t390 = __a383;
  *t390 = r389;
  __retval385 = t390;
  int* t391 = __retval385;
  return t391;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v392) {
bb393:
  int __a394;
  int __retval395;
  __a394 = v392;
  int t396 = __a394;
  int u397 = ~t396;
  __retval395 = u397;
  int t398 = __retval395;
  return t398;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v399, int v400) {
bb401:
  int __a402;
  int __b403;
  int __retval404;
  __a402 = v399;
  __b403 = v400;
  int t405 = __a402;
  int t406 = __b403;
  int b407 = t405 | t406;
  __retval404 = b407;
  int t408 = __retval404;
  return t408;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v409, int v410) {
bb411:
  int* __a412;
  int __b413;
  int* __retval414;
  __a412 = v409;
  __b413 = v410;
  int* t415 = __a412;
  int t416 = *t415;
  int t417 = __b413;
  int r418 = std__operator__4(t416, t417);
  int* t419 = __a412;
  *t419 = r418;
  __retval414 = t419;
  int* t420 = __retval414;
  return t420;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v421, int v422) {
bb423:
  int __a424;
  int __b425;
  int __retval426;
  __a424 = v421;
  __b425 = v422;
  int t427 = __a424;
  int t428 = __b425;
  int b429 = t427 & t428;
  __retval426 = b429;
  int t430 = __retval426;
  return t430;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v431, int v432, int v433) {
bb434:
  struct std__ios_base* this435;
  int __fmtfl436;
  int __mask437;
  int __retval438;
  int __old439;
  this435 = v431;
  __fmtfl436 = v432;
  __mask437 = v433;
  struct std__ios_base* t440 = this435;
  int t441 = t440->_M_flags;
  __old439 = t441;
  int t442 = __mask437;
  int r443 = std__operator__2(t442);
  int* r444 = std__operator__(&t440->_M_flags, r443);
  int t445 = __fmtfl436;
  int t446 = __mask437;
  int r447 = std__operator_(t445, t446);
  int* r448 = std__operator___2(&t440->_M_flags, r447);
  int t449 = __old439;
  __retval438 = t449;
  int t450 = __retval438;
  return t450;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v451) {
bb452:
  struct std__ios_base* __base453;
  struct std__ios_base* __retval454;
  __base453 = v451;
  struct std__ios_base* t455 = __base453;
  int t456 = _ZNSt8ios_base5fixedE_const;
  int t457 = _ZNSt8ios_base10floatfieldE_const;
  int r458 = std__ios_base__setf(t455, t456, t457);
  struct std__ios_base* t459 = __base453;
  __retval454 = t459;
  struct std__ios_base* t460 = __retval454;
  return t460;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v461) {
bb462:
  int __n463;
  struct std___Setprecision __retval464;
  __n463 = v461;
  int t465 = __n463;
  __retval464._M_n = t465;
  struct std___Setprecision t466 = __retval464;
  return t466;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v467, double v468) {
bb469:
  struct std__basic_ostream_char__std__char_traits_char__* this470;
  double __f471;
  struct std__basic_ostream_char__std__char_traits_char__* __retval472;
  this470 = v467;
  __f471 = v468;
  struct std__basic_ostream_char__std__char_traits_char__* t473 = this470;
  double t474 = __f471;
  struct std__basic_ostream_char__std__char_traits_char__* r475 = std__ostream__std__ostream___M_insert_double_(t473, t474);
  __retval472 = r475;
  struct std__basic_ostream_char__std__char_traits_char__* t476 = __retval472;
  return t476;
}

// function: _Z7averagePii
double average(int* v477, int v478) {
bb479:
  int* setOfGrades480;
  int tests481;
  double __retval482;
  int total483;
  setOfGrades480 = v477;
  tests481 = v478;
  int c484 = 0;
  total483 = c484;
    int i485;
    int c486 = 0;
    i485 = c486;
    while (1) {
      int t488 = i485;
      int t489 = tests481;
      _Bool c490 = ((t488 < t489)) ? 1 : 0;
      if (!c490) break;
      int t491 = i485;
      long cast492 = (long)t491;
      int* t493 = setOfGrades480;
      int* ptr494 = &(t493)[cast492];
      int t495 = *ptr494;
      int t496 = total483;
      int b497 = t496 + t495;
      total483 = b497;
    for_step487: ;
      int t498 = i485;
      int u499 = t498 + 1;
      i485 = u499;
    }
  int t500 = total483;
  double cast501 = (double)t500;
  int t502 = tests481;
  double cast503 = (double)t502;
  double b504 = cast501 / cast503;
  __retval482 = b504;
  double t505 = __retval482;
  return t505;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v506, void* v507) {
bb508:
  struct std__basic_ostream_char__std__char_traits_char__* this509;
  void* __pf510;
  struct std__basic_ostream_char__std__char_traits_char__* __retval511;
  this509 = v506;
  __pf510 = v507;
  struct std__basic_ostream_char__std__char_traits_char__* t512 = this509;
  void* t513 = __pf510;
  struct std__basic_ostream_char__std__char_traits_char__* r514 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t513)(t512);
  __retval511 = r514;
  struct std__basic_ostream_char__std__char_traits_char__* t515 = __retval511;
  return t515;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v516) {
bb517:
  struct std__basic_ostream_char__std__char_traits_char__* __os518;
  struct std__basic_ostream_char__std__char_traits_char__* __retval519;
  __os518 = v516;
  struct std__basic_ostream_char__std__char_traits_char__* t520 = __os518;
  struct std__basic_ostream_char__std__char_traits_char__* r521 = std__ostream__flush(t520);
  __retval519 = r521;
  struct std__basic_ostream_char__std__char_traits_char__* t522 = __retval519;
  return t522;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v523) {
bb524:
  struct std__ctype_char_* __f525;
  struct std__ctype_char_* __retval526;
  __f525 = v523;
    struct std__ctype_char_* t527 = __f525;
    _Bool cast528 = (_Bool)t527;
    _Bool u529 = !cast528;
    if (u529) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t530 = __f525;
  __retval526 = t530;
  struct std__ctype_char_* t531 = __retval526;
  return t531;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v532, char v533) {
bb534:
  struct std__ctype_char_* this535;
  char __c536;
  char __retval537;
  this535 = v532;
  __c536 = v533;
  struct std__ctype_char_* t538 = this535;
    char t539 = t538->_M_widen_ok;
    _Bool cast540 = (_Bool)t539;
    if (cast540) {
      char t541 = __c536;
      unsigned char cast542 = (unsigned char)t541;
      unsigned long cast543 = (unsigned long)cast542;
      char t544 = t538->_M_widen[cast543];
      __retval537 = t544;
      char t545 = __retval537;
      return t545;
    }
  std__ctype_char____M_widen_init___const(t538);
  char t546 = __c536;
  void** v547 = (void**)t538;
  void* v548 = *((void**)v547);
  char vcall551 = (char)__VERIFIER_virtual_call_char_char(t538, 6, t546);
  __retval537 = vcall551;
  char t552 = __retval537;
  return t552;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v553, char v554) {
bb555:
  struct std__basic_ios_char__std__char_traits_char__* this556;
  char __c557;
  char __retval558;
  this556 = v553;
  __c557 = v554;
  struct std__basic_ios_char__std__char_traits_char__* t559 = this556;
  struct std__ctype_char_* t560 = t559->_M_ctype;
  struct std__ctype_char_* r561 = std__ctype_char__const__std____check_facet_std__ctype_char___(t560);
  char t562 = __c557;
  char r563 = std__ctype_char___widen_char__const(r561, t562);
  __retval558 = r563;
  char t564 = __retval558;
  return t564;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v565) {
bb566:
  struct std__basic_ostream_char__std__char_traits_char__* __os567;
  struct std__basic_ostream_char__std__char_traits_char__* __retval568;
  __os567 = v565;
  struct std__basic_ostream_char__std__char_traits_char__* t569 = __os567;
  struct std__basic_ostream_char__std__char_traits_char__* t570 = __os567;
  void** v571 = (void**)t570;
  void* v572 = *((void**)v571);
  unsigned char* cast573 = (unsigned char*)v572;
  long c574 = -24;
  unsigned char* ptr575 = &(cast573)[c574];
  long* cast576 = (long*)ptr575;
  long t577 = *cast576;
  unsigned char* cast578 = (unsigned char*)t570;
  unsigned char* ptr579 = &(cast578)[t577];
  struct std__basic_ostream_char__std__char_traits_char__* cast580 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr579;
  struct std__basic_ios_char__std__char_traits_char__* cast581 = (struct std__basic_ios_char__std__char_traits_char__*)cast580;
  char c582 = 10;
  char r583 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast581, c582);
  struct std__basic_ostream_char__std__char_traits_char__* r584 = std__ostream__put(t569, r583);
  struct std__basic_ostream_char__std__char_traits_char__* r585 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r584);
  __retval568 = r585;
  struct std__basic_ostream_char__std__char_traits_char__* t586 = __retval568;
  return t586;
}

// function: main
int main() {
bb587:
  int __retval588;
  int studentGrades589[3][4];
  struct std___Setprecision agg_tmp0590;
  int c591 = 0;
  __retval588 = c591;
  // array copy
  __builtin_memcpy(studentGrades589, __const_main_studentGrades, (unsigned long)3 * sizeof(__const_main_studentGrades[0]));
  char* cast592 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r593 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast592);
  int* cast594 = (int*)&(studentGrades589);
  int t595 = _ZL8students;
  int t596 = _ZL5exams;
  printArray_int_(cast594, t595, t596);
  char* cast597 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r598 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast597);
  int* cast599 = (int*)&(studentGrades589);
  int t600 = _ZL8students;
  int t601 = _ZL5exams;
  int r602 = minimum_int_(cast599, t600, t601);
  struct std__basic_ostream_char__std__char_traits_char__* r603 = std__ostream__operator___2(r598, r602);
  char* cast604 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r605 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r603, cast604);
  int* cast606 = (int*)&(studentGrades589);
  int t607 = _ZL8students;
  int t608 = _ZL5exams;
  int r609 = maximum_int_(cast606, t607, t608);
  struct std__basic_ostream_char__std__char_traits_char__* r610 = std__ostream__operator___2(r605, r609);
  char c611 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r612 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r610, c611);
  struct std__basic_ostream_char__std__char_traits_char__* r613 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__fixed);
  int c614 = 2;
  struct std___Setprecision r615 = std__setprecision(c614);
  agg_tmp0590 = r615;
  struct std___Setprecision t616 = agg_tmp0590;
  struct std__basic_ostream_char__std__char_traits_char__* r617 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r613, t616);
    int person618;
    int c619 = 0;
    person618 = c619;
    while (1) {
      int t621 = person618;
      int t622 = _ZL8students;
      _Bool c623 = ((t621 < t622)) ? 1 : 0;
      if (!c623) break;
      char* cast624 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r625 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast624);
      int t626 = person618;
      struct std__basic_ostream_char__std__char_traits_char__* r627 = std__ostream__operator___2(r625, t626);
      char* cast628 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r629 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r627, cast628);
      int t630 = person618;
      long cast631 = (long)t630;
      int* cast632 = (int*)&(studentGrades589[cast631]);
      int t633 = _ZL5exams;
      double r634 = average(cast632, t633);
      struct std__basic_ostream_char__std__char_traits_char__* r635 = std__ostream__operator__(r629, r634);
      struct std__basic_ostream_char__std__char_traits_char__* r636 = std__ostream__operator___std__ostream_____(r635, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    for_step620: ;
      int t637 = person618;
      int u638 = t637 + 1;
      person618 = u638;
    }
  int c639 = 0;
  __retval588 = c639;
  int t640 = __retval588;
  return t640;
}

