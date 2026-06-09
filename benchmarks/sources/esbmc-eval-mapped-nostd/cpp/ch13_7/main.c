extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Integer { int value; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__auto_ptr_Integer_ { struct Integer* _M_ptr; };
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
char _str[47] = "Creating an auto_ptr object that points to an ";
char _str_1[9] = "Integer\n";
char _str_2[47] = "\nUsing the auto_ptr to manipulate the Integer\n";
char _str_3[27] = "Integer after setInteger: ";
char _str_4[22] = "\n\nTerminating program";
char _str_5[25] = "Constructor for Integer ";
char _str_6[24] = "Destructor for Integer ";
char _str_7[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h";
char __PRETTY_FUNCTION____ZNKSt8auto_ptrI7IntegerEptEv[73] = "element_type *std::auto_ptr<Integer>::operator->() const [_Tp = Integer]";
char _str_8[12] = "_M_ptr != 0";
char __PRETTY_FUNCTION____ZNKSt8auto_ptrI7IntegerEdeEv[72] = "element_type &std::auto_ptr<Integer>::operator*() const [_Tp = Integer]";
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
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Integer__Integer(struct Integer* p0, int p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void std__auto_ptr_Integer___auto_ptr(struct std__auto_ptr_Integer_* p0, struct Integer* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct Integer* std__auto_ptr_Integer___operator_____const(struct std__auto_ptr_Integer_* p0);
void Integer__setInteger(struct Integer* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct Integer* std__auto_ptr_Integer___operator____const(struct std__auto_ptr_Integer_* p0);
int Integer__getInteger___const(struct Integer* p0);
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
void std__auto_ptr_Integer____auto_ptr(struct std__auto_ptr_Integer_* p0);
int main();
void Integer___Integer(struct Integer* p0);

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

// function: _ZN7IntegerC2Ei
void Integer__Integer(struct Integer* v103, int v104) {
bb105:
  struct Integer* this106;
  int i107;
  this106 = v103;
  i107 = v104;
  struct Integer* t108 = this106;
  int t109 = i107;
  t108->value = t109;
  char* cast110 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r111 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast110);
  int t112 = t108->value;
  struct std__basic_ostream_char__std__char_traits_char__* r113 = std__ostream__operator__(r111, t112);
  struct std__basic_ostream_char__std__char_traits_char__* r114 = std__ostream__operator___std__ostream_____(r113, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

// function: _ZNSt8auto_ptrI7IntegerEC2EPS0_
void std__auto_ptr_Integer___auto_ptr(struct std__auto_ptr_Integer_* v115, struct Integer* v116) {
bb117:
  struct std__auto_ptr_Integer_* this118;
  struct Integer* __p119;
  this118 = v115;
  __p119 = v116;
  struct std__auto_ptr_Integer_* t120 = this118;
  struct Integer* t121 = __p119;
  t120->_M_ptr = t121;
  return;
}

// function: _ZNKSt8auto_ptrI7IntegerEptEv
struct Integer* std__auto_ptr_Integer___operator_____const(struct std__auto_ptr_Integer_* v122) {
bb123:
  struct std__auto_ptr_Integer_* this124;
  struct Integer* __retval125;
  this124 = v122;
  struct std__auto_ptr_Integer_* t126 = this124;
    do {
          struct Integer* t127 = t126->_M_ptr;
          struct Integer* c128 = ((void*)0);
          _Bool c129 = ((t127 != c128)) ? 1 : 0;
          _Bool u130 = !c129;
          if (u130) {
            char* cast131 = (char*)&(_str_7);
            int c132 = 202;
            char* cast133 = (char*)&(__PRETTY_FUNCTION____ZNKSt8auto_ptrI7IntegerEptEv);
            char* cast134 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast131, c132, cast133, cast134);
          }
      _Bool c135 = 0;
      if (!c135) break;
    } while (1);
  struct Integer* t136 = t126->_M_ptr;
  __retval125 = t136;
  struct Integer* t137 = __retval125;
  return t137;
}

// function: _ZN7Integer10setIntegerEi
void Integer__setInteger(struct Integer* v138, int v139) {
bb140:
  struct Integer* this141;
  int i142;
  this141 = v138;
  i142 = v139;
  struct Integer* t143 = this141;
  int t144 = i142;
  t143->value = t144;
  return;
}

// function: _ZNKSt8auto_ptrI7IntegerEdeEv
struct Integer* std__auto_ptr_Integer___operator____const(struct std__auto_ptr_Integer_* v145) {
bb146:
  struct std__auto_ptr_Integer_* this147;
  struct Integer* __retval148;
  this147 = v145;
  struct std__auto_ptr_Integer_* t149 = this147;
    do {
          struct Integer* t150 = t149->_M_ptr;
          struct Integer* c151 = ((void*)0);
          _Bool c152 = ((t150 != c151)) ? 1 : 0;
          _Bool u153 = !c152;
          if (u153) {
            char* cast154 = (char*)&(_str_7);
            int c155 = 189;
            char* cast156 = (char*)&(__PRETTY_FUNCTION____ZNKSt8auto_ptrI7IntegerEdeEv);
            char* cast157 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast154, c155, cast156, cast157);
          }
      _Bool c158 = 0;
      if (!c158) break;
    } while (1);
  struct Integer* t159 = t149->_M_ptr;
  __retval148 = t159;
  struct Integer* t160 = __retval148;
  return t160;
}

// function: _ZNK7Integer10getIntegerEv
int Integer__getInteger___const(struct Integer* v161) {
bb162:
  struct Integer* this163;
  int __retval164;
  this163 = v161;
  struct Integer* t165 = this163;
  int t166 = t165->value;
  __retval164 = t166;
  int t167 = __retval164;
  return t167;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v168, void* v169) {
bb170:
  struct std__basic_ostream_char__std__char_traits_char__* this171;
  void* __pf172;
  struct std__basic_ostream_char__std__char_traits_char__* __retval173;
  this171 = v168;
  __pf172 = v169;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = this171;
  void* t175 = __pf172;
  struct std__basic_ostream_char__std__char_traits_char__* r176 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t175)(t174);
  __retval173 = r176;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __retval173;
  return t177;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v178) {
bb179:
  struct std__basic_ostream_char__std__char_traits_char__* __os180;
  struct std__basic_ostream_char__std__char_traits_char__* __retval181;
  __os180 = v178;
  struct std__basic_ostream_char__std__char_traits_char__* t182 = __os180;
  struct std__basic_ostream_char__std__char_traits_char__* r183 = std__ostream__flush(t182);
  __retval181 = r183;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = __retval181;
  return t184;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v185) {
bb186:
  struct std__ctype_char_* __f187;
  struct std__ctype_char_* __retval188;
  __f187 = v185;
    struct std__ctype_char_* t189 = __f187;
    _Bool cast190 = (_Bool)t189;
    _Bool u191 = !cast190;
    if (u191) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t192 = __f187;
  __retval188 = t192;
  struct std__ctype_char_* t193 = __retval188;
  return t193;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v194, char v195) {
bb196:
  struct std__ctype_char_* this197;
  char __c198;
  char __retval199;
  this197 = v194;
  __c198 = v195;
  struct std__ctype_char_* t200 = this197;
    char t201 = t200->_M_widen_ok;
    _Bool cast202 = (_Bool)t201;
    if (cast202) {
      char t203 = __c198;
      unsigned char cast204 = (unsigned char)t203;
      unsigned long cast205 = (unsigned long)cast204;
      char t206 = t200->_M_widen[cast205];
      __retval199 = t206;
      char t207 = __retval199;
      return t207;
    }
  std__ctype_char____M_widen_init___const(t200);
  char t208 = __c198;
  void** v209 = (void**)t200;
  void* v210 = *((void**)v209);
  char vcall213 = (char)__VERIFIER_virtual_call_char_char(t200, 6, t208);
  __retval199 = vcall213;
  char t214 = __retval199;
  return t214;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v215, char v216) {
bb217:
  struct std__basic_ios_char__std__char_traits_char__* this218;
  char __c219;
  char __retval220;
  this218 = v215;
  __c219 = v216;
  struct std__basic_ios_char__std__char_traits_char__* t221 = this218;
  struct std__ctype_char_* t222 = t221->_M_ctype;
  struct std__ctype_char_* r223 = std__ctype_char__const__std____check_facet_std__ctype_char___(t222);
  char t224 = __c219;
  char r225 = std__ctype_char___widen_char__const(r223, t224);
  __retval220 = r225;
  char t226 = __retval220;
  return t226;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v227) {
bb228:
  struct std__basic_ostream_char__std__char_traits_char__* __os229;
  struct std__basic_ostream_char__std__char_traits_char__* __retval230;
  __os229 = v227;
  struct std__basic_ostream_char__std__char_traits_char__* t231 = __os229;
  struct std__basic_ostream_char__std__char_traits_char__* t232 = __os229;
  void** v233 = (void**)t232;
  void* v234 = *((void**)v233);
  unsigned char* cast235 = (unsigned char*)v234;
  long c236 = -24;
  unsigned char* ptr237 = &(cast235)[c236];
  long* cast238 = (long*)ptr237;
  long t239 = *cast238;
  unsigned char* cast240 = (unsigned char*)t232;
  unsigned char* ptr241 = &(cast240)[t239];
  struct std__basic_ostream_char__std__char_traits_char__* cast242 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr241;
  struct std__basic_ios_char__std__char_traits_char__* cast243 = (struct std__basic_ios_char__std__char_traits_char__*)cast242;
  char c244 = 10;
  char r245 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast243, c244);
  struct std__basic_ostream_char__std__char_traits_char__* r246 = std__ostream__put(t231, r245);
  struct std__basic_ostream_char__std__char_traits_char__* r247 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r246);
  __retval230 = r247;
  struct std__basic_ostream_char__std__char_traits_char__* t248 = __retval230;
  return t248;
}

// function: _ZNSt8auto_ptrI7IntegerED2Ev
void std__auto_ptr_Integer____auto_ptr(struct std__auto_ptr_Integer_* v249) {
bb250:
  struct std__auto_ptr_Integer_* this251;
  this251 = v249;
  struct std__auto_ptr_Integer_* t252 = this251;
  struct Integer* t253 = t252->_M_ptr;
  struct Integer* c254 = ((void*)0);
  _Bool c255 = ((t253 != c254)) ? 1 : 0;
  if (c255) {
      Integer___Integer(t253);
    {
      void* cast256 = (void*)t253;
      unsigned long c257 = 4;
      operator_delete(cast256, c257);
    }
  }
  return;
}

// function: main
int main() {
bb258:
  int __retval259;
  struct std__auto_ptr_Integer_ ptrToInteger260;
  struct Integer* __new_result261;
  int c262 = 0;
  __retval259 = c262;
  char* cast263 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r264 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast263);
  char* cast265 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r266 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r264, cast265);
  unsigned long c267 = 4;
  void* r268 = operator_new(c267);
    struct Integer* cast269 = (struct Integer*)r268;
    __new_result261 = cast269;
    int c270 = 7;
    Integer__Integer(cast269, c270);
  struct Integer* t271 = __new_result261;
  std__auto_ptr_Integer___auto_ptr(&ptrToInteger260, t271);
    char* cast272 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r273 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast272);
    struct Integer* r274 = std__auto_ptr_Integer___operator_____const(&ptrToInteger260);
    int c275 = 99;
    Integer__setInteger(r274, c275);
    char* cast276 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r277 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast276);
    struct Integer* r278 = std__auto_ptr_Integer___operator____const(&ptrToInteger260);
    int r279 = Integer__getInteger___const(r278);
    struct std__basic_ostream_char__std__char_traits_char__* r280 = std__ostream__operator__(r277, r279);
    char* cast281 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r282 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r280, cast281);
    struct std__basic_ostream_char__std__char_traits_char__* r283 = std__ostream__operator___std__ostream_____(r282, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c284 = 0;
    __retval259 = c284;
    int t285 = __retval259;
    int ret_val286 = t285;
    {
      std__auto_ptr_Integer____auto_ptr(&ptrToInteger260);
    }
    return ret_val286;
  int t287 = __retval259;
  return t287;
}

// function: _ZN7IntegerD2Ev
void Integer___Integer(struct Integer* v288) {
bb289:
  struct Integer* this290;
  this290 = v288;
  struct Integer* t291 = this290;
  char* cast292 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r293 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast292);
  int t294 = t291->value;
  struct std__basic_ostream_char__std__char_traits_char__* r295 = std__ostream__operator__(r293, t294);
  struct std__basic_ostream_char__std__char_traits_char__* r296 = std__ostream__operator___std__ostream_____(r295, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  return;
}

