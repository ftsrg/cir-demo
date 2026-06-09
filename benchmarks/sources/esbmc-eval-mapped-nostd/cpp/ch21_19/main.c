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
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[22] = "Array a contains:\n   ";
char _str_2[39] = "\nArray a after swapping a[0] and a[1] ";
char _str_3[16] = "using swap:\n   ";
char _str_4[21] = "using iter_swap:\n   ";
char _str_5[49] = "\nArray a after swapping the first five elements\n";
char _str_6[33] = "with the last five elements:\n   ";
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
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
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__ostream_iterator_int__char__std__char_traits_char__ p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, int* p1);
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, int** p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
int* int__std____niter_base_int__(int* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
int* int__std____miter_base_int__(int* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__ostream_iterator_int__char__std__char_traits_char__* p1);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap_int___int__(int* p0, int* p1);
int* int__std__swap_ranges_int___int__(int* p0, int* p1, int* p2);
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

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSoPKc
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* v0, struct std__basic_ostream_char__std__char_traits_char__* v1, char* v2) {
bb3:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this4;
  struct std__basic_ostream_char__std__char_traits_char__* __s5;
  char* __c6;
  this4 = v0;
  __s5 = v1;
  __c6 = v2;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t7 = this4;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base8 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t7 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t9 = __s5;
  t7->_M_stream = t9;
  char* t10 = __c6;
  t7->_M_string = t10;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v11, int v12) {
bb13:
  int __a14;
  int __b15;
  int __retval16;
  __a14 = v11;
  __b15 = v12;
  int t17 = __a14;
  int t18 = __b15;
  int b19 = t17 | t18;
  __retval16 = b19;
  int t20 = __retval16;
  return t20;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v21) {
bb22:
  struct std__basic_ios_char__std__char_traits_char__* this23;
  int __retval24;
  this23 = v21;
  struct std__basic_ios_char__std__char_traits_char__* t25 = this23;
  struct std__ios_base* base26 = (struct std__ios_base*)((char *)t25 + 0);
  int t27 = base26->_M_streambuf_state;
  __retval24 = t27;
  int t28 = __retval24;
  return t28;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v29, int v30) {
bb31:
  struct std__basic_ios_char__std__char_traits_char__* this32;
  int __state33;
  this32 = v29;
  __state33 = v30;
  struct std__basic_ios_char__std__char_traits_char__* t34 = this32;
  int r35 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t34);
  int t36 = __state33;
  int r37 = std__operator_(r35, t36);
  std__basic_ios_char__std__char_traits_char_____clear(t34, r37);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb38:
  _Bool __retval39;
    _Bool c40 = 0;
    __retval39 = c40;
    _Bool t41 = __retval39;
    return t41;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v42, char* v43) {
bb44:
  char* __c145;
  char* __c246;
  _Bool __retval47;
  __c145 = v42;
  __c246 = v43;
  char* t48 = __c145;
  char t49 = *t48;
  int cast50 = (int)t49;
  char* t51 = __c246;
  char t52 = *t51;
  int cast53 = (int)t52;
  _Bool c54 = ((cast50 == cast53)) ? 1 : 0;
  __retval47 = c54;
  _Bool t55 = __retval47;
  return t55;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v56) {
bb57:
  char* __p58;
  unsigned long __retval59;
  unsigned long __i60;
  __p58 = v56;
  unsigned long c61 = 0;
  __i60 = c61;
    char ref_tmp062;
    while (1) {
      unsigned long t63 = __i60;
      char* t64 = __p58;
      char* ptr65 = &(t64)[t63];
      char c66 = 0;
      ref_tmp062 = c66;
      _Bool r67 = __gnu_cxx__char_traits_char___eq(ptr65, &ref_tmp062);
      _Bool u68 = !r67;
      if (!u68) break;
      unsigned long t69 = __i60;
      unsigned long u70 = t69 + 1;
      __i60 = u70;
    }
  unsigned long t71 = __i60;
  __retval59 = t71;
  unsigned long t72 = __retval59;
  return t72;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v73) {
bb74:
  char* __s75;
  unsigned long __retval76;
  __s75 = v73;
    _Bool r77 = std____is_constant_evaluated();
    if (r77) {
      char* t78 = __s75;
      unsigned long r79 = __gnu_cxx__char_traits_char___length(t78);
      __retval76 = r79;
      unsigned long t80 = __retval76;
      return t80;
    }
  char* t81 = __s75;
  unsigned long r82 = strlen(t81);
  __retval76 = r82;
  unsigned long t83 = __retval76;
  return t83;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v84, char* v85) {
bb86:
  struct std__basic_ostream_char__std__char_traits_char__* __out87;
  char* __s88;
  struct std__basic_ostream_char__std__char_traits_char__* __retval89;
  __out87 = v84;
  __s88 = v85;
    char* t90 = __s88;
    _Bool cast91 = (_Bool)t90;
    _Bool u92 = !cast91;
    if (u92) {
      struct std__basic_ostream_char__std__char_traits_char__* t93 = __out87;
      void** v94 = (void**)t93;
      void* v95 = *((void**)v94);
      unsigned char* cast96 = (unsigned char*)v95;
      long c97 = -24;
      unsigned char* ptr98 = &(cast96)[c97];
      long* cast99 = (long*)ptr98;
      long t100 = *cast99;
      unsigned char* cast101 = (unsigned char*)t93;
      unsigned char* ptr102 = &(cast101)[t100];
      struct std__basic_ostream_char__std__char_traits_char__* cast103 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr102;
      struct std__basic_ios_char__std__char_traits_char__* cast104 = (struct std__basic_ios_char__std__char_traits_char__*)cast103;
      int t105 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast104, t105);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t106 = __out87;
      char* t107 = __s88;
      char* t108 = __s88;
      unsigned long r109 = std__char_traits_char___length(t108);
      long cast110 = (long)r109;
      struct std__basic_ostream_char__std__char_traits_char__* r111 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t106, t107, cast110);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __out87;
  __retval89 = t112;
  struct std__basic_ostream_char__std__char_traits_char__* t113 = __retval89;
  return t113;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIicSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* v114, struct std__ostream_iterator_int__char__std__char_traits_char__ v115) {
bb116:
  struct std__ostream_iterator_int__char__std__char_traits_char__* unnamed117;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __res118;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval119;
  unnamed117 = v114;
  __res118 = v115;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval119, &__res118);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t120 = __retval119;
  return t120;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEdeEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* v121) {
bb122:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this123;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval124;
  this123 = v121;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t125 = this123;
  __retval124 = t125;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t126 = __retval124;
  return t126;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEaSERKi
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* v127, int* v128) {
bb129:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this130;
  int* __value131;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval132;
  this130 = v127;
  __value131 = v128;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t133 = this130;
  struct std__basic_ostream_char__std__char_traits_char__* t134 = t133->_M_stream;
  int* t135 = __value131;
  int t136 = *t135;
  struct std__basic_ostream_char__std__char_traits_char__* r137 = std__ostream__operator__(t134, t136);
    char* t138 = t133->_M_string;
    _Bool cast139 = (_Bool)t138;
    if (cast139) {
      struct std__basic_ostream_char__std__char_traits_char__* t140 = t133->_M_stream;
      char* t141 = t133->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r142 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t140, t141);
    }
  __retval132 = t133;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t143 = __retval132;
  return t143;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIicSt11char_traitsIcEEPiEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* v144, int** v145) {
bb146:
  struct std__ostream_iterator_int__char__std__char_traits_char__* __out147;
  int** __in148;
  __out147 = v144;
  __in148 = v145;
    int** t149 = __in148;
    int* t150 = *t149;
    struct std__ostream_iterator_int__char__std__char_traits_char__* t151 = __out147;
    struct std__ostream_iterator_int__char__std__char_traits_char__* r152 = std__ostream_iterator_int__char__std__char_traits_char_____operator__2(t151);
    struct std__ostream_iterator_int__char__std__char_traits_char__* r153 = std__ostream_iterator_int__char__std__char_traits_char_____operator_(r152, t150);
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEppEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* v154) {
bb155:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this156;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval157;
  this156 = v154;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t158 = this156;
  __retval157 = t158;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t159 = __retval157;
  return t159;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_St16ostream_iteratorIicSt11char_traitsIcEEET2_T0_T1_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v160, int* v161, struct std__ostream_iterator_int__char__std__char_traits_char__ v162) {
bb163:
  int* __first164;
  int* __last165;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result166;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval167;
  __first164 = v160;
  __last165 = v161;
  __result166 = v162;
    while (1) {
      int* t169 = __first164;
      int* t170 = __last165;
      _Bool c171 = ((t169 != t170)) ? 1 : 0;
      if (!c171) break;
      void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(&__result166, &__first164);
    for_step168: ;
      struct std__ostream_iterator_int__char__std__char_traits_char__* r172 = std__ostream_iterator_int__char__std__char_traits_char_____operator__(&__result166);
      int* t173 = __first164;
      int c174 = 1;
      int* ptr175 = &(t173)[c174];
      __first164 = ptr175;
    }
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval167, &__result166);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t176 = __retval167;
  return t176;
}

// function: _ZSt14__copy_move_a1ILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v177, int* v178, struct std__ostream_iterator_int__char__std__char_traits_char__ v179) {
bb180:
  int* __first181;
  int* __last182;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result183;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval184;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0185;
  __first181 = v177;
  __last182 = v178;
  __result183 = v179;
  int* t186 = __first181;
  int* t187 = __last182;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0185, &__result183);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t188 = agg_tmp0185;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r189 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(t186, t187, t188);
  __retval184 = r189;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t190 = __retval184;
  return t190;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v191) {
bb192:
  int* __it193;
  int* __retval194;
  __it193 = v191;
  int* t195 = __it193;
  __retval194 = t195;
  int* t196 = __retval194;
  return t196;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIicSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ v197) {
bb198:
  struct std__ostream_iterator_int__char__std__char_traits_char__ __it199;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval200;
  __it199 = v197;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval200, &__it199);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t201 = __retval200;
  return t201;
}

// function: _ZSt13__copy_move_aILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v202, int* v203, struct std__ostream_iterator_int__char__std__char_traits_char__ v204) {
bb205:
  int* __first206;
  int* __last207;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result208;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval209;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0210;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1211;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2212;
  __first206 = v202;
  __last207 = v203;
  __result208 = v204;
  int* t213 = __first206;
  int* r214 = int__std____niter_base_int__(t213);
  int* t215 = __last207;
  int* r216 = int__std____niter_base_int__(t215);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2212, &__result208);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t217 = agg_tmp2212;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r218 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(t217);
  agg_tmp1211 = r218;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t219 = agg_tmp1211;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r220 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r214, r216, t219);
  agg_tmp0210 = r220;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t221 = agg_tmp0210;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r222 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(&__result208, t221);
  __retval209 = r222;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t223 = __retval209;
  return t223;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v224) {
bb225:
  int* __it226;
  int* __retval227;
  __it226 = v224;
  int* t228 = __it226;
  __retval227 = t228;
  int* t229 = __retval227;
  return t229;
}

// function: _ZSt4copyIPiSt16ostream_iteratorIicSt11char_traitsIcEEET0_T_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v230, int* v231, struct std__ostream_iterator_int__char__std__char_traits_char__ v232) {
bb233:
  int* __first234;
  int* __last235;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result236;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval237;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0238;
  __first234 = v230;
  __last235 = v231;
  __result236 = v232;
  int* t239 = __first234;
  int* r240 = int__std____miter_base_int__(t239);
  int* t241 = __last235;
  int* r242 = int__std____miter_base_int__(t241);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0238, &__result236);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t243 = agg_tmp0238;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r244 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r240, r242, t243);
  __retval237 = r244;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t245 = __retval237;
  return t245;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* v246, struct std__ostream_iterator_int__char__std__char_traits_char__* v247) {
bb248:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this249;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __obj250;
  this249 = v246;
  __obj250 = v247;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t251 = this249;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base252 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t251 + 0);
  struct std__ostream_iterator_int__char__std__char_traits_char__* t253 = __obj250;
  struct std__basic_ostream_char__std__char_traits_char__* t254 = t253->_M_stream;
  t251->_M_stream = t254;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t255 = __obj250;
  char* t256 = t255->_M_string;
  t251->_M_string = t256;
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v257, int* v258) {
bb259:
  int* __a260;
  int* __b261;
  int __tmp262;
  __a260 = v257;
  __b261 = v258;
  int* t263 = __a260;
  int t264 = *t263;
  __tmp262 = t264;
  int* t265 = __b261;
  int t266 = *t265;
  int* t267 = __a260;
  *t267 = t266;
  int t268 = __tmp262;
  int* t269 = __b261;
  *t269 = t268;
  return;
}

// function: _ZSt9iter_swapIPiS0_EvT_T0_
void void_std__iter_swap_int___int__(int* v270, int* v271) {
bb272:
  int* __a273;
  int* __b274;
  __a273 = v270;
  __b274 = v271;
  int* t275 = __a273;
  int* t276 = __b274;
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(t275, t276);
  return;
}

// function: _ZSt11swap_rangesIPiS0_ET0_T_S2_S1_
int* int__std__swap_ranges_int___int__(int* v277, int* v278, int* v279) {
bb280:
  int* __first1281;
  int* __last1282;
  int* __first2283;
  int* __retval284;
  __first1281 = v277;
  __last1282 = v278;
  __first2283 = v279;
    while (1) {
      int* t286 = __first1281;
      int* t287 = __last1282;
      _Bool c288 = ((t286 != t287)) ? 1 : 0;
      if (!c288) break;
      int* t289 = __first1281;
      int* t290 = __first2283;
      void_std__iter_swap_int___int__(t289, t290);
    for_step285: ;
      int* t291 = __first1281;
      int c292 = 1;
      int* ptr293 = &(t291)[c292];
      __first1281 = ptr293;
      int* t294 = __first2283;
      int c295 = 1;
      int* ptr296 = &(t294)[c295];
      __first2283 = ptr296;
    }
  int* t297 = __first2283;
  __retval284 = t297;
  int* t298 = __retval284;
  return t298;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v299, void* v300) {
bb301:
  struct std__basic_ostream_char__std__char_traits_char__* this302;
  void* __pf303;
  struct std__basic_ostream_char__std__char_traits_char__* __retval304;
  this302 = v299;
  __pf303 = v300;
  struct std__basic_ostream_char__std__char_traits_char__* t305 = this302;
  void* t306 = __pf303;
  struct std__basic_ostream_char__std__char_traits_char__* r307 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t306)(t305);
  __retval304 = r307;
  struct std__basic_ostream_char__std__char_traits_char__* t308 = __retval304;
  return t308;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v309) {
bb310:
  struct std__basic_ostream_char__std__char_traits_char__* __os311;
  struct std__basic_ostream_char__std__char_traits_char__* __retval312;
  __os311 = v309;
  struct std__basic_ostream_char__std__char_traits_char__* t313 = __os311;
  struct std__basic_ostream_char__std__char_traits_char__* r314 = std__ostream__flush(t313);
  __retval312 = r314;
  struct std__basic_ostream_char__std__char_traits_char__* t315 = __retval312;
  return t315;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v316) {
bb317:
  struct std__ctype_char_* __f318;
  struct std__ctype_char_* __retval319;
  __f318 = v316;
    struct std__ctype_char_* t320 = __f318;
    _Bool cast321 = (_Bool)t320;
    _Bool u322 = !cast321;
    if (u322) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t323 = __f318;
  __retval319 = t323;
  struct std__ctype_char_* t324 = __retval319;
  return t324;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v325, char v326) {
bb327:
  struct std__ctype_char_* this328;
  char __c329;
  char __retval330;
  this328 = v325;
  __c329 = v326;
  struct std__ctype_char_* t331 = this328;
    char t332 = t331->_M_widen_ok;
    _Bool cast333 = (_Bool)t332;
    if (cast333) {
      char t334 = __c329;
      unsigned char cast335 = (unsigned char)t334;
      unsigned long cast336 = (unsigned long)cast335;
      char t337 = t331->_M_widen[cast336];
      __retval330 = t337;
      char t338 = __retval330;
      return t338;
    }
  std__ctype_char____M_widen_init___const(t331);
  char t339 = __c329;
  void** v340 = (void**)t331;
  void* v341 = *((void**)v340);
  char vcall344 = (char)__VERIFIER_virtual_call_char_char(t331, 6, t339);
  __retval330 = vcall344;
  char t345 = __retval330;
  return t345;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v346, char v347) {
bb348:
  struct std__basic_ios_char__std__char_traits_char__* this349;
  char __c350;
  char __retval351;
  this349 = v346;
  __c350 = v347;
  struct std__basic_ios_char__std__char_traits_char__* t352 = this349;
  struct std__ctype_char_* t353 = t352->_M_ctype;
  struct std__ctype_char_* r354 = std__ctype_char__const__std____check_facet_std__ctype_char___(t353);
  char t355 = __c350;
  char r356 = std__ctype_char___widen_char__const(r354, t355);
  __retval351 = r356;
  char t357 = __retval351;
  return t357;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v358) {
bb359:
  struct std__basic_ostream_char__std__char_traits_char__* __os360;
  struct std__basic_ostream_char__std__char_traits_char__* __retval361;
  __os360 = v358;
  struct std__basic_ostream_char__std__char_traits_char__* t362 = __os360;
  struct std__basic_ostream_char__std__char_traits_char__* t363 = __os360;
  void** v364 = (void**)t363;
  void* v365 = *((void**)v364);
  unsigned char* cast366 = (unsigned char*)v365;
  long c367 = -24;
  unsigned char* ptr368 = &(cast366)[c367];
  long* cast369 = (long*)ptr368;
  long t370 = *cast369;
  unsigned char* cast371 = (unsigned char*)t363;
  unsigned char* ptr372 = &(cast371)[t370];
  struct std__basic_ostream_char__std__char_traits_char__* cast373 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr372;
  struct std__basic_ios_char__std__char_traits_char__* cast374 = (struct std__basic_ios_char__std__char_traits_char__*)cast373;
  char c375 = 10;
  char r376 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast374, c375);
  struct std__basic_ostream_char__std__char_traits_char__* r377 = std__ostream__put(t362, r376);
  struct std__basic_ostream_char__std__char_traits_char__* r378 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r377);
  __retval361 = r378;
  struct std__basic_ostream_char__std__char_traits_char__* t379 = __retval361;
  return t379;
}

// function: main
int main() {
bb380:
  int __retval381;
  int SIZE382;
  int a383[10];
  struct std__ostream_iterator_int__char__std__char_traits_char__ output384;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0385;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1386;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2387;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3388;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4389;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp5390;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp6391;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp7392;
  int c393 = 0;
  __retval381 = c393;
  int c394 = 10;
  SIZE382 = c394;
  // array copy
  __builtin_memcpy(a383, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast395 = (char*)&(_str);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output384, &_ZSt4cout, cast395);
  char* cast396 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r397 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast396);
  int* cast398 = (int*)&(a383);
  int* cast399 = (int*)&(a383);
  int t400 = SIZE382;
  int* ptr401 = &(cast399)[t400];
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0385, &output384);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t402 = agg_tmp0385;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r403 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast398, ptr401, t402);
  agg_tmp1386 = r403;
  long c404 = 0;
  long c405 = 1;
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(&a383[c404], &a383[c405]);
  char* cast406 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r407 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast406);
  char* cast408 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r409 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r407, cast408);
  int* cast410 = (int*)&(a383);
  int* cast411 = (int*)&(a383);
  int t412 = SIZE382;
  int* ptr413 = &(cast411)[t412];
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2387, &output384);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t414 = agg_tmp2387;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r415 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast410, ptr413, t414);
  agg_tmp3388 = r415;
  long c416 = 0;
  long c417 = 1;
  void_std__iter_swap_int___int__(&a383[c416], &a383[c417]);
  char* cast418 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r419 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast418);
  char* cast420 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r421 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r419, cast420);
  int* cast422 = (int*)&(a383);
  int* cast423 = (int*)&(a383);
  int t424 = SIZE382;
  int* ptr425 = &(cast423)[t424];
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4389, &output384);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t426 = agg_tmp4389;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r427 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast422, ptr425, t426);
  agg_tmp5390 = r427;
  int* cast428 = (int*)&(a383);
  int* cast429 = (int*)&(a383);
  int c430 = 5;
  int* ptr431 = &(cast429)[c430];
  int* cast432 = (int*)&(a383);
  int c433 = 5;
  int* ptr434 = &(cast432)[c433];
  int* r435 = int__std__swap_ranges_int___int__(cast428, ptr431, ptr434);
  char* cast436 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r437 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast436);
  char* cast438 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r439 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r437, cast438);
  int* cast440 = (int*)&(a383);
  int* cast441 = (int*)&(a383);
  int t442 = SIZE382;
  int* ptr443 = &(cast441)[t442];
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp6391, &output384);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t444 = agg_tmp6391;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r445 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast440, ptr443, t444);
  agg_tmp7392 = r445;
  struct std__basic_ostream_char__std__char_traits_char__* r446 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c447 = 0;
  __retval381 = c447;
  int t448 = __retval381;
  return t448;
}

