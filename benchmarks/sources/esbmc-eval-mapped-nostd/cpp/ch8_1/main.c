extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct PhoneNumber { char areaCode[4]; char exchange[4]; char line[5]; };
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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[2] = "(";
char _str_1[3] = ") ";
char _str_2[2] = "-";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[48] = "Enter phone number in the form (123) 456-7890:\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_4[31] = "The phone number entered was: ";
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
struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct PhoneNumber* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__ignore_2(struct std__basic_istream_char__std__char_traits_char__* p0);
extern void std____istream_extract(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___4ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__ignore(struct std__basic_istream_char__std__char_traits_char__* p0, long p1);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___5ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_istream_char__std__char_traits_char__* operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, struct PhoneNumber* p1);
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

// function: _ZlsRSoRK11PhoneNumber
struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* v103, struct PhoneNumber* v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* output106;
  struct PhoneNumber* num107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  output106 = v103;
  num107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = output106;
  char* cast110 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r111 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t109, cast110);
  struct PhoneNumber* t112 = num107;
  char* cast113 = (char*)&(t112->areaCode);
  struct std__basic_ostream_char__std__char_traits_char__* r114 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r111, cast113);
  char* cast115 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r116 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r114, cast115);
  struct PhoneNumber* t117 = num107;
  char* cast118 = (char*)&(t117->exchange);
  struct std__basic_ostream_char__std__char_traits_char__* r119 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r116, cast118);
  char* cast120 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r121 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r119, cast120);
  struct PhoneNumber* t122 = num107;
  char* cast123 = (char*)&(t122->line);
  struct std__basic_ostream_char__std__char_traits_char__* r124 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r121, cast123);
  struct std__basic_ostream_char__std__char_traits_char__* t125 = output106;
  __retval108 = t125;
  struct std__basic_ostream_char__std__char_traits_char__* t126 = __retval108;
  return t126;
}

// function: _ZStrsIcSt11char_traitsIcELm4EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___4ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v127, char* v128) {
bb129:
  struct std__basic_istream_char__std__char_traits_char__* __in130;
  char* __s131;
  struct std__basic_istream_char__std__char_traits_char__* __retval132;
  __in130 = v127;
  __s131 = v128;
  struct std__basic_istream_char__std__char_traits_char__* t133 = __in130;
  char* t134 = __s131;
  char* cast135 = (char*)t134;
  long c136 = 4;
  std____istream_extract(t133, cast135, c136);
  struct std__basic_istream_char__std__char_traits_char__* t137 = __in130;
  __retval132 = t137;
  struct std__basic_istream_char__std__char_traits_char__* t138 = __retval132;
  return t138;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v139, long v140) {
bb141:
  struct std__ios_base* this142;
  long __wide143;
  long __retval144;
  long __old145;
  this142 = v139;
  __wide143 = v140;
  struct std__ios_base* t146 = this142;
  long t147 = t146->_M_width;
  __old145 = t147;
  long t148 = __wide143;
  t146->_M_width = t148;
  long t149 = __old145;
  __retval144 = t149;
  long t150 = __retval144;
  return t150;
}

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_St5_Setw
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* v151, struct std___Setw v152) {
bb153:
  struct std__basic_istream_char__std__char_traits_char__* __is154;
  struct std___Setw __f155;
  struct std__basic_istream_char__std__char_traits_char__* __retval156;
  __is154 = v151;
  __f155 = v152;
  struct std__basic_istream_char__std__char_traits_char__* t157 = __is154;
  void** v158 = (void**)t157;
  void* v159 = *((void**)v158);
  unsigned char* cast160 = (unsigned char*)v159;
  long c161 = -24;
  unsigned char* ptr162 = &(cast160)[c161];
  long* cast163 = (long*)ptr162;
  long t164 = *cast163;
  unsigned char* cast165 = (unsigned char*)t157;
  unsigned char* ptr166 = &(cast165)[t164];
  struct std__basic_istream_char__std__char_traits_char__* cast167 = (struct std__basic_istream_char__std__char_traits_char__*)ptr166;
  struct std__ios_base* cast168 = (struct std__ios_base*)cast167;
  int t169 = __f155._M_n;
  long cast170 = (long)t169;
  long r171 = std__ios_base__width(cast168, cast170);
  struct std__basic_istream_char__std__char_traits_char__* t172 = __is154;
  __retval156 = t172;
  struct std__basic_istream_char__std__char_traits_char__* t173 = __retval156;
  return t173;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v174) {
bb175:
  int __n176;
  struct std___Setw __retval177;
  __n176 = v174;
  int t178 = __n176;
  __retval177._M_n = t178;
  struct std___Setw t179 = __retval177;
  return t179;
}

// function: _ZStrsIcSt11char_traitsIcELm5EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___5ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v180, char* v181) {
bb182:
  struct std__basic_istream_char__std__char_traits_char__* __in183;
  char* __s184;
  struct std__basic_istream_char__std__char_traits_char__* __retval185;
  __in183 = v180;
  __s184 = v181;
  struct std__basic_istream_char__std__char_traits_char__* t186 = __in183;
  char* t187 = __s184;
  char* cast188 = (char*)t187;
  long c189 = 5;
  std____istream_extract(t186, cast188, c189);
  struct std__basic_istream_char__std__char_traits_char__* t190 = __in183;
  __retval185 = t190;
  struct std__basic_istream_char__std__char_traits_char__* t191 = __retval185;
  return t191;
}

// function: _ZrsRSiR11PhoneNumber
struct std__basic_istream_char__std__char_traits_char__* operator___2(struct std__basic_istream_char__std__char_traits_char__* v192, struct PhoneNumber* v193) {
bb194:
  struct std__basic_istream_char__std__char_traits_char__* input195;
  struct PhoneNumber* num196;
  struct std__basic_istream_char__std__char_traits_char__* __retval197;
  struct std___Setw agg_tmp0198;
  struct std___Setw agg_tmp1199;
  struct std___Setw agg_tmp2200;
  input195 = v192;
  num196 = v193;
  struct std__basic_istream_char__std__char_traits_char__* t201 = input195;
  struct std__basic_istream_char__std__char_traits_char__* r202 = std__istream__ignore_2(t201);
  struct std__basic_istream_char__std__char_traits_char__* t203 = input195;
  int c204 = 4;
  struct std___Setw r205 = std__setw(c204);
  agg_tmp0198 = r205;
  struct std___Setw t206 = agg_tmp0198;
  struct std__basic_istream_char__std__char_traits_char__* r207 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(t203, t206);
  struct PhoneNumber* t208 = num196;
  struct std__basic_istream_char__std__char_traits_char__* r209 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___4ul__std__basic_istream_char__std__char_traits_char______char_(r207, t208->areaCode);
  struct std__basic_istream_char__std__char_traits_char__* t210 = input195;
  long c211 = 2;
  struct std__basic_istream_char__std__char_traits_char__* r212 = std__istream__ignore(t210, c211);
  struct std__basic_istream_char__std__char_traits_char__* t213 = input195;
  int c214 = 4;
  struct std___Setw r215 = std__setw(c214);
  agg_tmp1199 = r215;
  struct std___Setw t216 = agg_tmp1199;
  struct std__basic_istream_char__std__char_traits_char__* r217 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(t213, t216);
  struct PhoneNumber* t218 = num196;
  struct std__basic_istream_char__std__char_traits_char__* r219 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___4ul__std__basic_istream_char__std__char_traits_char______char_(r217, t218->exchange);
  struct std__basic_istream_char__std__char_traits_char__* t220 = input195;
  struct std__basic_istream_char__std__char_traits_char__* r221 = std__istream__ignore_2(t220);
  struct std__basic_istream_char__std__char_traits_char__* t222 = input195;
  int c223 = 5;
  struct std___Setw r224 = std__setw(c223);
  agg_tmp2200 = r224;
  struct std___Setw t225 = agg_tmp2200;
  struct std__basic_istream_char__std__char_traits_char__* r226 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(t222, t225);
  struct PhoneNumber* t227 = num196;
  struct std__basic_istream_char__std__char_traits_char__* r228 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___5ul__std__basic_istream_char__std__char_traits_char______char_(r226, t227->line);
  struct std__basic_istream_char__std__char_traits_char__* t229 = input195;
  __retval197 = t229;
  struct std__basic_istream_char__std__char_traits_char__* t230 = __retval197;
  return t230;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v231, void* v232) {
bb233:
  struct std__basic_ostream_char__std__char_traits_char__* this234;
  void* __pf235;
  struct std__basic_ostream_char__std__char_traits_char__* __retval236;
  this234 = v231;
  __pf235 = v232;
  struct std__basic_ostream_char__std__char_traits_char__* t237 = this234;
  void* t238 = __pf235;
  struct std__basic_ostream_char__std__char_traits_char__* r239 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t238)(t237);
  __retval236 = r239;
  struct std__basic_ostream_char__std__char_traits_char__* t240 = __retval236;
  return t240;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v241) {
bb242:
  struct std__basic_ostream_char__std__char_traits_char__* __os243;
  struct std__basic_ostream_char__std__char_traits_char__* __retval244;
  __os243 = v241;
  struct std__basic_ostream_char__std__char_traits_char__* t245 = __os243;
  struct std__basic_ostream_char__std__char_traits_char__* r246 = std__ostream__flush(t245);
  __retval244 = r246;
  struct std__basic_ostream_char__std__char_traits_char__* t247 = __retval244;
  return t247;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v248) {
bb249:
  struct std__ctype_char_* __f250;
  struct std__ctype_char_* __retval251;
  __f250 = v248;
    struct std__ctype_char_* t252 = __f250;
    _Bool cast253 = (_Bool)t252;
    _Bool u254 = !cast253;
    if (u254) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t255 = __f250;
  __retval251 = t255;
  struct std__ctype_char_* t256 = __retval251;
  return t256;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v257, char v258) {
bb259:
  struct std__ctype_char_* this260;
  char __c261;
  char __retval262;
  this260 = v257;
  __c261 = v258;
  struct std__ctype_char_* t263 = this260;
    char t264 = t263->_M_widen_ok;
    _Bool cast265 = (_Bool)t264;
    if (cast265) {
      char t266 = __c261;
      unsigned char cast267 = (unsigned char)t266;
      unsigned long cast268 = (unsigned long)cast267;
      char t269 = t263->_M_widen[cast268];
      __retval262 = t269;
      char t270 = __retval262;
      return t270;
    }
  std__ctype_char____M_widen_init___const(t263);
  char t271 = __c261;
  void** v272 = (void**)t263;
  void* v273 = *((void**)v272);
  char vcall276 = (char)__VERIFIER_virtual_call_char_char(t263, 6, t271);
  __retval262 = vcall276;
  char t277 = __retval262;
  return t277;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v278, char v279) {
bb280:
  struct std__basic_ios_char__std__char_traits_char__* this281;
  char __c282;
  char __retval283;
  this281 = v278;
  __c282 = v279;
  struct std__basic_ios_char__std__char_traits_char__* t284 = this281;
  struct std__ctype_char_* t285 = t284->_M_ctype;
  struct std__ctype_char_* r286 = std__ctype_char__const__std____check_facet_std__ctype_char___(t285);
  char t287 = __c282;
  char r288 = std__ctype_char___widen_char__const(r286, t287);
  __retval283 = r288;
  char t289 = __retval283;
  return t289;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v290) {
bb291:
  struct std__basic_ostream_char__std__char_traits_char__* __os292;
  struct std__basic_ostream_char__std__char_traits_char__* __retval293;
  __os292 = v290;
  struct std__basic_ostream_char__std__char_traits_char__* t294 = __os292;
  struct std__basic_ostream_char__std__char_traits_char__* t295 = __os292;
  void** v296 = (void**)t295;
  void* v297 = *((void**)v296);
  unsigned char* cast298 = (unsigned char*)v297;
  long c299 = -24;
  unsigned char* ptr300 = &(cast298)[c299];
  long* cast301 = (long*)ptr300;
  long t302 = *cast301;
  unsigned char* cast303 = (unsigned char*)t295;
  unsigned char* ptr304 = &(cast303)[t302];
  struct std__basic_ostream_char__std__char_traits_char__* cast305 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr304;
  struct std__basic_ios_char__std__char_traits_char__* cast306 = (struct std__basic_ios_char__std__char_traits_char__*)cast305;
  char c307 = 10;
  char r308 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast306, c307);
  struct std__basic_ostream_char__std__char_traits_char__* r309 = std__ostream__put(t294, r308);
  struct std__basic_ostream_char__std__char_traits_char__* r310 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r309);
  __retval293 = r310;
  struct std__basic_ostream_char__std__char_traits_char__* t311 = __retval293;
  return t311;
}

// function: main
int main() {
bb312:
  int __retval313;
  struct PhoneNumber phone314;
  int c315 = 0;
  __retval313 = c315;
  char* cast316 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r317 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast316);
  struct std__basic_istream_char__std__char_traits_char__* r318 = operator___2(&_ZSt3cin, &phone314);
  char* cast319 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r320 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast319);
  struct std__basic_ostream_char__std__char_traits_char__* r321 = operator__(&_ZSt4cout, &phone314);
  struct std__basic_ostream_char__std__char_traits_char__* r322 = std__ostream__operator___std__ostream_____(r321, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c323 = 0;
  __retval313 = c323;
  int t324 = __retval313;
  return t324;
}

