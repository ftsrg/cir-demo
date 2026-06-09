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
struct anon_struct_0 { char __field0; char __field1; char __field2; char __field3; char __field4; char __field5; char __field6[19]; } __attribute__((packed));
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
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "Character value: ";
char _str_1[11] = "C-string: ";
char _str_2[16] = "Integer value: ";
char _str_3[23] = "Floating-point value: ";
char _str_4[15] = "Double value: ";
char _str_5[16] = "Boolean value: ";
char _str_6[5] = "true";
char _str_7[6] = "false";
char _str_8[18] = "Integer value: %d";
char _str_9[22] = "String from sprintf: ";
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
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
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___3(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
double double_std__ostream___S_cast_flt_double__float_(float p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, float p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
extern int sprintf(char* p0, char* p1, ...);
int main();

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v0) {
bb1:
  struct std__ios_base* this2;
  long __retval3;
  this2 = v0;
  struct std__ios_base* t4 = this2;
  long t5 = t4->_M_width;
  __retval3 = t5;
  long t6 = __retval3;
  return t6;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v7, char v8) {
bb9:
  struct std__basic_ostream_char__std__char_traits_char__* __out10;
  char __c11;
  struct std__basic_ostream_char__std__char_traits_char__* __retval12;
  __out10 = v7;
  __c11 = v8;
    struct std__basic_ostream_char__std__char_traits_char__* t13 = __out10;
    void** v14 = (void**)t13;
    void* v15 = *((void**)v14);
    unsigned char* cast16 = (unsigned char*)v15;
    long c17 = -24;
    unsigned char* ptr18 = &(cast16)[c17];
    long* cast19 = (long*)ptr18;
    long t20 = *cast19;
    unsigned char* cast21 = (unsigned char*)t13;
    unsigned char* ptr22 = &(cast21)[t20];
    struct std__basic_ostream_char__std__char_traits_char__* cast23 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr22;
    struct std__ios_base* cast24 = (struct std__ios_base*)cast23;
    long r25 = std__ios_base__width___const(cast24);
    long c26 = 0;
    _Bool c27 = ((r25 != c26)) ? 1 : 0;
    if (c27) {
      struct std__basic_ostream_char__std__char_traits_char__* t28 = __out10;
      long c29 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r30 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t28, &__c11, c29);
      __retval12 = r30;
      struct std__basic_ostream_char__std__char_traits_char__* t31 = __retval12;
      return t31;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t32 = __out10;
  char t33 = __c11;
  struct std__basic_ostream_char__std__char_traits_char__* r34 = std__ostream__put(t32, t33);
  struct std__basic_ostream_char__std__char_traits_char__* t35 = __out10;
  __retval12 = t35;
  struct std__basic_ostream_char__std__char_traits_char__* t36 = __retval12;
  return t36;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v37, int v38) {
bb39:
  int __a40;
  int __b41;
  int __retval42;
  __a40 = v37;
  __b41 = v38;
  int t43 = __a40;
  int t44 = __b41;
  int b45 = t43 | t44;
  __retval42 = b45;
  int t46 = __retval42;
  return t46;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v47) {
bb48:
  struct std__basic_ios_char__std__char_traits_char__* this49;
  int __retval50;
  this49 = v47;
  struct std__basic_ios_char__std__char_traits_char__* t51 = this49;
  struct std__ios_base* base52 = (struct std__ios_base*)((char *)t51 + 0);
  int t53 = base52->_M_streambuf_state;
  __retval50 = t53;
  int t54 = __retval50;
  return t54;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v55, int v56) {
bb57:
  struct std__basic_ios_char__std__char_traits_char__* this58;
  int __state59;
  this58 = v55;
  __state59 = v56;
  struct std__basic_ios_char__std__char_traits_char__* t60 = this58;
  int r61 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t60);
  int t62 = __state59;
  int r63 = std__operator_(r61, t62);
  std__basic_ios_char__std__char_traits_char_____clear(t60, r63);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb64:
  _Bool __retval65;
    _Bool c66 = 0;
    __retval65 = c66;
    _Bool t67 = __retval65;
    return t67;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v68, char* v69) {
bb70:
  char* __c171;
  char* __c272;
  _Bool __retval73;
  __c171 = v68;
  __c272 = v69;
  char* t74 = __c171;
  char t75 = *t74;
  int cast76 = (int)t75;
  char* t77 = __c272;
  char t78 = *t77;
  int cast79 = (int)t78;
  _Bool c80 = ((cast76 == cast79)) ? 1 : 0;
  __retval73 = c80;
  _Bool t81 = __retval73;
  return t81;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v82) {
bb83:
  char* __p84;
  unsigned long __retval85;
  unsigned long __i86;
  __p84 = v82;
  unsigned long c87 = 0;
  __i86 = c87;
    char ref_tmp088;
    while (1) {
      unsigned long t89 = __i86;
      char* t90 = __p84;
      char* ptr91 = &(t90)[t89];
      char c92 = 0;
      ref_tmp088 = c92;
      _Bool r93 = __gnu_cxx__char_traits_char___eq(ptr91, &ref_tmp088);
      _Bool u94 = !r93;
      if (!u94) break;
      unsigned long t95 = __i86;
      unsigned long u96 = t95 + 1;
      __i86 = u96;
    }
  unsigned long t97 = __i86;
  __retval85 = t97;
  unsigned long t98 = __retval85;
  return t98;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v99) {
bb100:
  char* __s101;
  unsigned long __retval102;
  __s101 = v99;
    _Bool r103 = std____is_constant_evaluated();
    if (r103) {
      char* t104 = __s101;
      unsigned long r105 = __gnu_cxx__char_traits_char___length(t104);
      __retval102 = r105;
      unsigned long t106 = __retval102;
      return t106;
    }
  char* t107 = __s101;
  unsigned long r108 = strlen(t107);
  __retval102 = r108;
  unsigned long t109 = __retval102;
  return t109;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v110, char* v111) {
bb112:
  struct std__basic_ostream_char__std__char_traits_char__* __out113;
  char* __s114;
  struct std__basic_ostream_char__std__char_traits_char__* __retval115;
  __out113 = v110;
  __s114 = v111;
    char* t116 = __s114;
    _Bool cast117 = (_Bool)t116;
    _Bool u118 = !cast117;
    if (u118) {
      struct std__basic_ostream_char__std__char_traits_char__* t119 = __out113;
      void** v120 = (void**)t119;
      void* v121 = *((void**)v120);
      unsigned char* cast122 = (unsigned char*)v121;
      long c123 = -24;
      unsigned char* ptr124 = &(cast122)[c123];
      long* cast125 = (long*)ptr124;
      long t126 = *cast125;
      unsigned char* cast127 = (unsigned char*)t119;
      unsigned char* ptr128 = &(cast127)[t126];
      struct std__basic_ostream_char__std__char_traits_char__* cast129 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr128;
      struct std__basic_ios_char__std__char_traits_char__* cast130 = (struct std__basic_ios_char__std__char_traits_char__*)cast129;
      int t131 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast130, t131);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t132 = __out113;
      char* t133 = __s114;
      char* t134 = __s114;
      unsigned long r135 = std__char_traits_char___length(t134);
      long cast136 = (long)r135;
      struct std__basic_ostream_char__std__char_traits_char__* r137 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t132, t133, cast136);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __out113;
  __retval115 = t138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval115;
  return t139;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v140, void* v141) {
bb142:
  struct std__basic_ostream_char__std__char_traits_char__* this143;
  void* __pf144;
  struct std__basic_ostream_char__std__char_traits_char__* __retval145;
  this143 = v140;
  __pf144 = v141;
  struct std__basic_ostream_char__std__char_traits_char__* t146 = this143;
  void* t147 = __pf144;
  struct std__basic_ostream_char__std__char_traits_char__* r148 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t147)(t146);
  __retval145 = r148;
  struct std__basic_ostream_char__std__char_traits_char__* t149 = __retval145;
  return t149;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v150) {
bb151:
  struct std__basic_ostream_char__std__char_traits_char__* __os152;
  struct std__basic_ostream_char__std__char_traits_char__* __retval153;
  __os152 = v150;
  struct std__basic_ostream_char__std__char_traits_char__* t154 = __os152;
  struct std__basic_ostream_char__std__char_traits_char__* r155 = std__ostream__flush(t154);
  __retval153 = r155;
  struct std__basic_ostream_char__std__char_traits_char__* t156 = __retval153;
  return t156;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v157) {
bb158:
  struct std__ctype_char_* __f159;
  struct std__ctype_char_* __retval160;
  __f159 = v157;
    struct std__ctype_char_* t161 = __f159;
    _Bool cast162 = (_Bool)t161;
    _Bool u163 = !cast162;
    if (u163) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t164 = __f159;
  __retval160 = t164;
  struct std__ctype_char_* t165 = __retval160;
  return t165;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v166, char v167) {
bb168:
  struct std__ctype_char_* this169;
  char __c170;
  char __retval171;
  this169 = v166;
  __c170 = v167;
  struct std__ctype_char_* t172 = this169;
    char t173 = t172->_M_widen_ok;
    _Bool cast174 = (_Bool)t173;
    if (cast174) {
      char t175 = __c170;
      unsigned char cast176 = (unsigned char)t175;
      unsigned long cast177 = (unsigned long)cast176;
      char t178 = t172->_M_widen[cast177];
      __retval171 = t178;
      char t179 = __retval171;
      return t179;
    }
  std__ctype_char____M_widen_init___const(t172);
  char t180 = __c170;
  void** v181 = (void**)t172;
  void* v182 = *((void**)v181);
  char vcall185 = (char)__VERIFIER_virtual_call_char_char(t172, 6, t180);
  __retval171 = vcall185;
  char t186 = __retval171;
  return t186;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v187, char v188) {
bb189:
  struct std__basic_ios_char__std__char_traits_char__* this190;
  char __c191;
  char __retval192;
  this190 = v187;
  __c191 = v188;
  struct std__basic_ios_char__std__char_traits_char__* t193 = this190;
  struct std__ctype_char_* t194 = t193->_M_ctype;
  struct std__ctype_char_* r195 = std__ctype_char__const__std____check_facet_std__ctype_char___(t194);
  char t196 = __c191;
  char r197 = std__ctype_char___widen_char__const(r195, t196);
  __retval192 = r197;
  char t198 = __retval192;
  return t198;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v199) {
bb200:
  struct std__basic_ostream_char__std__char_traits_char__* __os201;
  struct std__basic_ostream_char__std__char_traits_char__* __retval202;
  __os201 = v199;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __os201;
  struct std__basic_ostream_char__std__char_traits_char__* t204 = __os201;
  void** v205 = (void**)t204;
  void* v206 = *((void**)v205);
  unsigned char* cast207 = (unsigned char*)v206;
  long c208 = -24;
  unsigned char* ptr209 = &(cast207)[c208];
  long* cast210 = (long*)ptr209;
  long t211 = *cast210;
  unsigned char* cast212 = (unsigned char*)t204;
  unsigned char* ptr213 = &(cast212)[t211];
  struct std__basic_ostream_char__std__char_traits_char__* cast214 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr213;
  struct std__basic_ios_char__std__char_traits_char__* cast215 = (struct std__basic_ios_char__std__char_traits_char__*)cast214;
  char c216 = 10;
  char r217 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast215, c216);
  struct std__basic_ostream_char__std__char_traits_char__* r218 = std__ostream__put(t203, r217);
  struct std__basic_ostream_char__std__char_traits_char__* r219 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r218);
  __retval202 = r219;
  struct std__basic_ostream_char__std__char_traits_char__* t220 = __retval202;
  return t220;
}

// function: _ZNSo11_S_cast_fltIdfEET_T0_
double double_std__ostream___S_cast_flt_double__float_(float v221) {
bb222:
  float __f223;
  double __retval224;
  double __d225;
  __f223 = v221;
  float t226 = __f223;
  double cast227 = (double)t226;
  __d225 = cast227;
  double t228 = __d225;
  __retval224 = t228;
  double t229 = __retval224;
  return t229;
}

// function: _ZNSolsEf
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v230, float v231) {
bb232:
  struct std__basic_ostream_char__std__char_traits_char__* this233;
  float __f234;
  struct std__basic_ostream_char__std__char_traits_char__* __retval235;
  this233 = v230;
  __f234 = v231;
  struct std__basic_ostream_char__std__char_traits_char__* t236 = this233;
  float t237 = __f234;
  double r238 = double_std__ostream___S_cast_flt_double__float_(t237);
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__ostream__std__ostream___M_insert_double_(t236, r238);
  __retval235 = r239;
  struct std__basic_ostream_char__std__char_traits_char__* t240 = __retval235;
  return t240;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v241, double v242) {
bb243:
  struct std__basic_ostream_char__std__char_traits_char__* this244;
  double __f245;
  struct std__basic_ostream_char__std__char_traits_char__* __retval246;
  this244 = v241;
  __f245 = v242;
  struct std__basic_ostream_char__std__char_traits_char__* t247 = this244;
  double t248 = __f245;
  struct std__basic_ostream_char__std__char_traits_char__* r249 = std__ostream__std__ostream___M_insert_double_(t247, t248);
  __retval246 = r249;
  struct std__basic_ostream_char__std__char_traits_char__* t250 = __retval246;
  return t250;
}

// function: main
int main() {
bb251:
  int __retval252;
  char val253;
  char cstr254[25];
  int i255;
  float f256;
  double d257;
  _Bool b258;
  char buffer259[100];
  int c260 = 0;
  __retval252 = c260;
  char c261 = 65;
  val253 = c261;
  char* cast262 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r263 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast262);
  char t264 = val253;
  struct std__basic_ostream_char__std__char_traits_char__* r265 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r263, t264);
  struct std__basic_ostream_char__std__char_traits_char__* r266 = std__ostream__operator___std__ostream_____(r265, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  struct anon_struct_0* cast267 = (struct anon_struct_0*)&(cstr254);
  struct anon_struct_0 c268 = {83, 84, 82, 73, 78, 71, {0}};
  *cast267 = c268;
  char* cast269 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r270 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast269);
  char* cast271 = (char*)&(cstr254);
  struct std__basic_ostream_char__std__char_traits_char__* r272 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r270, cast271);
  struct std__basic_ostream_char__std__char_traits_char__* r273 = std__ostream__operator___std__ostream_____(r272, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c274 = 10;
  i255 = c274;
  char* cast275 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r276 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast275);
  int t277 = i255;
  struct std__basic_ostream_char__std__char_traits_char__* r278 = std__ostream__operator___3(r276, t277);
  struct std__basic_ostream_char__std__char_traits_char__* r279 = std__ostream__operator___std__ostream_____(r278, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  float c280 = 0x1.91eb86p1f;
  f256 = c280;
  char* cast281 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r282 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast281);
  float t283 = f256;
  struct std__basic_ostream_char__std__char_traits_char__* r284 = std__ostream__operator___2(r282, t283);
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__ostream__operator___std__ostream_____(r284, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  double c286 = 0x1.5bf0995aaf79p1;
  d257 = c286;
  char* cast287 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r288 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast287);
  double t289 = d257;
  struct std__basic_ostream_char__std__char_traits_char__* r290 = std__ostream__operator__(r288, t289);
  struct std__basic_ostream_char__std__char_traits_char__* r291 = std__ostream__operator___std__ostream_____(r290, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  _Bool c292 = 1;
  b258 = c292;
  char* cast293 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r294 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast293);
  _Bool t295 = b258;
  char* cast296 = (char*)&(_str_6);
  char* cast297 = (char*)&(_str_7);
  char* sel298 = t295 ? cast296 : cast297;
  struct std__basic_ostream_char__std__char_traits_char__* r299 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r294, sel298);
  struct std__basic_ostream_char__std__char_traits_char__* r300 = std__ostream__operator___std__ostream_____(r299, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  char* cast301 = (char*)&(buffer259);
  char* cast302 = (char*)&(_str_8);
  int t303 = i255;
  int r304 = sprintf(cast301, cast302, t303);
  char* cast305 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r306 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast305);
  char* cast307 = (char*)&(buffer259);
  struct std__basic_ostream_char__std__char_traits_char__* r308 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r306, cast307);
  struct std__basic_ostream_char__std__char_traits_char__* r309 = std__ostream__operator___std__ostream_____(r308, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c310 = 0;
  __retval252 = c310;
  int t311 = __retval252;
  return t311;
}

