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
struct std__istream_iterator_int__char__std__char_traits_char___long_ { struct std__basic_istream_char__std__char_traits_char__* _M_stream; int _M_value; _Bool _M_ok; unsigned char __field3[3]; } __attribute__((packed));
struct std__iterator_std__input_iterator_tag__int__long_int___int___ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[21] = "Enter two integers: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[13] = "The sum is: ";
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
void std__istream_iterator_int__char__std__char_traits_char___long___istream_iterator(struct std__istream_iterator_int__char__std__char_traits_char___long_* p0, struct std__basic_istream_char__std__char_traits_char__* p1);
int* std__istream_iterator_int__char__std__char_traits_char___long___operator____const(struct std__istream_iterator_int__char__std__char_traits_char___long_* p0);
struct std__istream_iterator_int__char__std__char_traits_char___long_* std__istream_iterator_int__char__std__char_traits_char___long___operator__(struct std__istream_iterator_int__char__std__char_traits_char___long_* p0);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, int* p1);
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
int std__operator_(int p0, int p1);
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__istream_iterator_int__char__std__char_traits_char___long____M_read(struct std__istream_iterator_int__char__std__char_traits_char___long_* p0);

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v0, int v1) {
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
  int r26 = std__operator__2(r24, t25);
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

// function: _ZNSt16istream_iteratorIicSt11char_traitsIcElEC2ERSi
void std__istream_iterator_int__char__std__char_traits_char___long___istream_iterator(struct std__istream_iterator_int__char__std__char_traits_char___long_* v103, struct std__basic_istream_char__std__char_traits_char__* v104) {
bb105:
  struct std__istream_iterator_int__char__std__char_traits_char___long_* this106;
  struct std__basic_istream_char__std__char_traits_char__* __s107;
  this106 = v103;
  __s107 = v104;
  struct std__istream_iterator_int__char__std__char_traits_char___long_* t108 = this106;
  struct std__iterator_std__input_iterator_tag__int__long_int___int___* base109 = (struct std__iterator_std__input_iterator_tag__int__long_int___int___*)((char *)t108 + 0);
  struct std__basic_istream_char__std__char_traits_char__* t110 = __s107;
  t108->_M_stream = t110;
  _Bool c111 = 1;
  t108->_M_ok = c111;
  std__istream_iterator_int__char__std__char_traits_char___long____M_read(t108);
  return;
}

// function: _ZNKSt16istream_iteratorIicSt11char_traitsIcElEdeEv
int* std__istream_iterator_int__char__std__char_traits_char___long___operator____const(struct std__istream_iterator_int__char__std__char_traits_char___long_* v112) {
bb113:
  struct std__istream_iterator_int__char__std__char_traits_char___long_* this114;
  int* __retval115;
  this114 = v112;
  struct std__istream_iterator_int__char__std__char_traits_char___long_* t116 = this114;
  __retval115 = &t116->_M_value;
  int* t117 = __retval115;
  return t117;
}

// function: _ZNSt16istream_iteratorIicSt11char_traitsIcElEppEv
struct std__istream_iterator_int__char__std__char_traits_char___long_* std__istream_iterator_int__char__std__char_traits_char___long___operator__(struct std__istream_iterator_int__char__std__char_traits_char___long_* v118) {
bb119:
  struct std__istream_iterator_int__char__std__char_traits_char___long_* this120;
  struct std__istream_iterator_int__char__std__char_traits_char___long_* __retval121;
  this120 = v118;
  struct std__istream_iterator_int__char__std__char_traits_char___long_* t122 = this120;
  std__istream_iterator_int__char__std__char_traits_char___long____M_read(t122);
  __retval121 = t122;
  struct std__istream_iterator_int__char__std__char_traits_char___long_* t123 = __retval121;
  return t123;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSo
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* v124, struct std__basic_ostream_char__std__char_traits_char__* v125) {
bb126:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this127;
  struct std__basic_ostream_char__std__char_traits_char__* __s128;
  this127 = v124;
  __s128 = v125;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t129 = this127;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base130 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t129 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t131 = __s128;
  t129->_M_stream = t131;
  char* c132 = ((void*)0);
  t129->_M_string = c132;
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEdeEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* v133) {
bb134:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this135;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval136;
  this135 = v133;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t137 = this135;
  __retval136 = t137;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t138 = __retval136;
  return t138;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEaSERKi
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* v139, int* v140) {
bb141:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this142;
  int* __value143;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval144;
  this142 = v139;
  __value143 = v140;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t145 = this142;
  struct std__basic_ostream_char__std__char_traits_char__* t146 = t145->_M_stream;
  int* t147 = __value143;
  int t148 = *t147;
  struct std__basic_ostream_char__std__char_traits_char__* r149 = std__ostream__operator__(t146, t148);
    char* t150 = t145->_M_string;
    _Bool cast151 = (_Bool)t150;
    if (cast151) {
      struct std__basic_ostream_char__std__char_traits_char__* t152 = t145->_M_stream;
      char* t153 = t145->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r154 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t152, t153);
    }
  __retval144 = t145;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t155 = __retval144;
  return t155;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v156, void* v157) {
bb158:
  struct std__basic_ostream_char__std__char_traits_char__* this159;
  void* __pf160;
  struct std__basic_ostream_char__std__char_traits_char__* __retval161;
  this159 = v156;
  __pf160 = v157;
  struct std__basic_ostream_char__std__char_traits_char__* t162 = this159;
  void* t163 = __pf160;
  struct std__basic_ostream_char__std__char_traits_char__* r164 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t163)(t162);
  __retval161 = r164;
  struct std__basic_ostream_char__std__char_traits_char__* t165 = __retval161;
  return t165;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v166) {
bb167:
  struct std__basic_ostream_char__std__char_traits_char__* __os168;
  struct std__basic_ostream_char__std__char_traits_char__* __retval169;
  __os168 = v166;
  struct std__basic_ostream_char__std__char_traits_char__* t170 = __os168;
  struct std__basic_ostream_char__std__char_traits_char__* r171 = std__ostream__flush(t170);
  __retval169 = r171;
  struct std__basic_ostream_char__std__char_traits_char__* t172 = __retval169;
  return t172;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v173) {
bb174:
  struct std__ctype_char_* __f175;
  struct std__ctype_char_* __retval176;
  __f175 = v173;
    struct std__ctype_char_* t177 = __f175;
    _Bool cast178 = (_Bool)t177;
    _Bool u179 = !cast178;
    if (u179) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t180 = __f175;
  __retval176 = t180;
  struct std__ctype_char_* t181 = __retval176;
  return t181;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v182, char v183) {
bb184:
  struct std__ctype_char_* this185;
  char __c186;
  char __retval187;
  this185 = v182;
  __c186 = v183;
  struct std__ctype_char_* t188 = this185;
    char t189 = t188->_M_widen_ok;
    _Bool cast190 = (_Bool)t189;
    if (cast190) {
      char t191 = __c186;
      unsigned char cast192 = (unsigned char)t191;
      unsigned long cast193 = (unsigned long)cast192;
      char t194 = t188->_M_widen[cast193];
      __retval187 = t194;
      char t195 = __retval187;
      return t195;
    }
  std__ctype_char____M_widen_init___const(t188);
  char t196 = __c186;
  void** v197 = (void**)t188;
  void* v198 = *((void**)v197);
  char vcall201 = (char)__VERIFIER_virtual_call_char_char(t188, 6, t196);
  __retval187 = vcall201;
  char t202 = __retval187;
  return t202;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v203, char v204) {
bb205:
  struct std__basic_ios_char__std__char_traits_char__* this206;
  char __c207;
  char __retval208;
  this206 = v203;
  __c207 = v204;
  struct std__basic_ios_char__std__char_traits_char__* t209 = this206;
  struct std__ctype_char_* t210 = t209->_M_ctype;
  struct std__ctype_char_* r211 = std__ctype_char__const__std____check_facet_std__ctype_char___(t210);
  char t212 = __c207;
  char r213 = std__ctype_char___widen_char__const(r211, t212);
  __retval208 = r213;
  char t214 = __retval208;
  return t214;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v215) {
bb216:
  struct std__basic_ostream_char__std__char_traits_char__* __os217;
  struct std__basic_ostream_char__std__char_traits_char__* __retval218;
  __os217 = v215;
  struct std__basic_ostream_char__std__char_traits_char__* t219 = __os217;
  struct std__basic_ostream_char__std__char_traits_char__* t220 = __os217;
  void** v221 = (void**)t220;
  void* v222 = *((void**)v221);
  unsigned char* cast223 = (unsigned char*)v222;
  long c224 = -24;
  unsigned char* ptr225 = &(cast223)[c224];
  long* cast226 = (long*)ptr225;
  long t227 = *cast226;
  unsigned char* cast228 = (unsigned char*)t220;
  unsigned char* ptr229 = &(cast228)[t227];
  struct std__basic_ostream_char__std__char_traits_char__* cast230 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr229;
  struct std__basic_ios_char__std__char_traits_char__* cast231 = (struct std__basic_ios_char__std__char_traits_char__*)cast230;
  char c232 = 10;
  char r233 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast231, c232);
  struct std__basic_ostream_char__std__char_traits_char__* r234 = std__ostream__put(t219, r233);
  struct std__basic_ostream_char__std__char_traits_char__* r235 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r234);
  __retval218 = r235;
  struct std__basic_ostream_char__std__char_traits_char__* t236 = __retval218;
  return t236;
}

// function: main
int main() {
bb237:
  int __retval238;
  struct std__istream_iterator_int__char__std__char_traits_char___long_ inputInt239;
  int number1240;
  int number2241;
  struct std__ostream_iterator_int__char__std__char_traits_char__ outputInt242;
  int ref_tmp0243;
  int c244 = 0;
  __retval238 = c244;
  char* cast245 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r246 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast245);
  std__istream_iterator_int__char__std__char_traits_char___long___istream_iterator(&inputInt239, &_ZSt3cin);
  int* r247 = std__istream_iterator_int__char__std__char_traits_char___long___operator____const(&inputInt239);
  int t248 = *r247;
  number1240 = t248;
  struct std__istream_iterator_int__char__std__char_traits_char___long_* r249 = std__istream_iterator_int__char__std__char_traits_char___long___operator__(&inputInt239);
  int* r250 = std__istream_iterator_int__char__std__char_traits_char___long___operator____const(&inputInt239);
  int t251 = *r250;
  number2241 = t251;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&outputInt242, &_ZSt4cout);
  char* cast252 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r253 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast252);
  int t254 = number1240;
  int t255 = number2241;
  int b256 = t254 + t255;
  ref_tmp0243 = b256;
  struct std__ostream_iterator_int__char__std__char_traits_char__* r257 = std__ostream_iterator_int__char__std__char_traits_char_____operator__2(&outputInt242);
  struct std__ostream_iterator_int__char__std__char_traits_char__* r258 = std__ostream_iterator_int__char__std__char_traits_char_____operator_(r257, &ref_tmp0243);
  struct std__basic_ostream_char__std__char_traits_char__* r259 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c260 = 0;
  __retval238 = c260;
  int t261 = __retval238;
  return t261;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v262, int v263) {
bb264:
  int __a265;
  int __b266;
  int __retval267;
  __a265 = v262;
  __b266 = v263;
  int t268 = __a265;
  int t269 = __b266;
  int b270 = t268 & t269;
  __retval267 = b270;
  int t271 = __retval267;
  return t271;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v272) {
bb273:
  struct std__basic_ios_char__std__char_traits_char__* this274;
  _Bool __retval275;
  this274 = v272;
  struct std__basic_ios_char__std__char_traits_char__* t276 = this274;
  int r277 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t276);
  int t278 = _ZNSt8ios_base6badbitE_const;
  int t279 = _ZNSt8ios_base7failbitE_const;
  int r280 = std__operator__2(t278, t279);
  int r281 = std__operator_(r277, r280);
  int c282 = 0;
  _Bool c283 = ((r281 != c282)) ? 1 : 0;
  __retval275 = c283;
  _Bool t284 = __retval275;
  return t284;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v285) {
bb286:
  struct std__basic_ios_char__std__char_traits_char__* this287;
  _Bool __retval288;
  this287 = v285;
  struct std__basic_ios_char__std__char_traits_char__* t289 = this287;
  _Bool r290 = std__basic_ios_char__std__char_traits_char_____fail___const(t289);
  __retval288 = r290;
  _Bool t291 = __retval288;
  return t291;
}

// function: _ZNSt16istream_iteratorIicSt11char_traitsIcElE7_M_readEv
void std__istream_iterator_int__char__std__char_traits_char___long____M_read(struct std__istream_iterator_int__char__std__char_traits_char___long_* v292) {
bb293:
  struct std__istream_iterator_int__char__std__char_traits_char___long_* this294;
  this294 = v292;
  struct std__istream_iterator_int__char__std__char_traits_char___long_* t295 = this294;
    struct std__basic_istream_char__std__char_traits_char__* t296 = t295->_M_stream;
    _Bool cast297 = (_Bool)t296;
    _Bool ternary298;
    if (cast297) {
      struct std__basic_istream_char__std__char_traits_char__* t299 = t295->_M_stream;
      struct std__basic_istream_char__std__char_traits_char__* r300 = std__istream__operator__(t299, &t295->_M_value);
      void** v301 = (void**)r300;
      void* v302 = *((void**)v301);
      unsigned char* cast303 = (unsigned char*)v302;
      long c304 = -24;
      unsigned char* ptr305 = &(cast303)[c304];
      long* cast306 = (long*)ptr305;
      long t307 = *cast306;
      unsigned char* cast308 = (unsigned char*)r300;
      unsigned char* ptr309 = &(cast308)[t307];
      struct std__basic_istream_char__std__char_traits_char__* cast310 = (struct std__basic_istream_char__std__char_traits_char__*)ptr309;
      struct std__basic_ios_char__std__char_traits_char__* cast311 = (struct std__basic_ios_char__std__char_traits_char__*)cast310;
      _Bool r312 = std__basic_ios_char__std__char_traits_char_____operator____const(cast311);
      ternary298 = (_Bool)r312;
    } else {
      _Bool c313 = 0;
      ternary298 = (_Bool)c313;
    }
    if (ternary298) {
      struct std__basic_istream_char__std__char_traits_char__* c314 = ((void*)0);
      t295->_M_stream = c314;
      _Bool c315 = 0;
      t295->_M_ok = c315;
    }
  return;
}

