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
struct std__iterator_std__output_iterator_tag__void__void__void__void_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_a3[5] = {4, 5, 6, 11, 15};
int __const_main_a2[5] = {4, 5, 6, 7, 8};
int __const_main_a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[14] = "a1 contains: ";
char _str_2[15] = "\na2 contains: ";
char _str_3[15] = "\na3 contains: ";
char _str_4[17] = "\n\na1 includes a2";
char _str_5[25] = "\n\na1 does not include a2";
char _str_6[16] = "\na1 includes a3";
char _str_7[24] = "\na1 does not include a3";
char _str_8[35] = "\n\nset_difference of a1 and a2 is: ";
char _str_9[37] = "\n\nset_intersection of a1 and a2 is: ";
char _str_10[45] = "\n\nset_symmetric_difference of a1 and a2 is: ";
char _str_11[30] = "\n\nset_union of a1 and a3 is: ";
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
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
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* p0, int* p1, int* p2);
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____ops___Iter_less_iter p4);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
_Bool bool_std__includes_int___int__(int* p0, int* p1, int* p2, int* p3);
int* int__std____niter_wrap_int__(int** p0, int* p1);
_Bool std____is_constant_evaluated();
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a_false__int___int__(int* p0, int* p1, int* p2);
int* int__std__copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____set_difference_int___int___int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, int* p4, struct __gnu_cxx____ops___Iter_less_iter p5);
int* int__std__set_difference_int___int___int__(int* p0, int* p1, int* p2, int* p3, int* p4);
int* int__std____set_intersection_int___int___int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, int* p4, struct __gnu_cxx____ops___Iter_less_iter p5);
int* int__std__set_intersection_int___int___int__(int* p0, int* p1, int* p2, int* p3, int* p4);
int* int__std____set_symmetric_difference_int___int___int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, int* p4, struct __gnu_cxx____ops___Iter_less_iter p5);
int* int__std__set_symmetric_difference_int___int___int__(int* p0, int* p1, int* p2, int* p3, int* p4);
int* int__std____set_union_int___int___int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, int* p4, struct __gnu_cxx____ops___Iter_less_iter p5);
int* int__std__set_union_int___int___int__(int* p0, int* p1, int* p2, int* p3, int* p4);
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

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v38, char* v39) {
bb40:
  char* __c141;
  char* __c242;
  _Bool __retval43;
  __c141 = v38;
  __c242 = v39;
  char* t44 = __c141;
  char t45 = *t44;
  int cast46 = (int)t45;
  char* t47 = __c242;
  char t48 = *t47;
  int cast49 = (int)t48;
  _Bool c50 = ((cast46 == cast49)) ? 1 : 0;
  __retval43 = c50;
  _Bool t51 = __retval43;
  return t51;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v52) {
bb53:
  char* __p54;
  unsigned long __retval55;
  unsigned long __i56;
  __p54 = v52;
  unsigned long c57 = 0;
  __i56 = c57;
    char ref_tmp058;
    while (1) {
      unsigned long t59 = __i56;
      char* t60 = __p54;
      char* ptr61 = &(t60)[t59];
      char c62 = 0;
      ref_tmp058 = c62;
      _Bool r63 = __gnu_cxx__char_traits_char___eq(ptr61, &ref_tmp058);
      _Bool u64 = !r63;
      if (!u64) break;
      unsigned long t65 = __i56;
      unsigned long u66 = t65 + 1;
      __i56 = u66;
    }
  unsigned long t67 = __i56;
  __retval55 = t67;
  unsigned long t68 = __retval55;
  return t68;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v69) {
bb70:
  char* __s71;
  unsigned long __retval72;
  __s71 = v69;
    _Bool r73 = std____is_constant_evaluated();
    if (r73) {
      char* t74 = __s71;
      unsigned long r75 = __gnu_cxx__char_traits_char___length(t74);
      __retval72 = r75;
      unsigned long t76 = __retval72;
      return t76;
    }
  char* t77 = __s71;
  unsigned long r78 = strlen(t77);
  __retval72 = r78;
  unsigned long t79 = __retval72;
  return t79;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v80, char* v81) {
bb82:
  struct std__basic_ostream_char__std__char_traits_char__* __out83;
  char* __s84;
  struct std__basic_ostream_char__std__char_traits_char__* __retval85;
  __out83 = v80;
  __s84 = v81;
    char* t86 = __s84;
    _Bool cast87 = (_Bool)t86;
    _Bool u88 = !cast87;
    if (u88) {
      struct std__basic_ostream_char__std__char_traits_char__* t89 = __out83;
      void** v90 = (void**)t89;
      void* v91 = *((void**)v90);
      unsigned char* cast92 = (unsigned char*)v91;
      long c93 = -24;
      unsigned char* ptr94 = &(cast92)[c93];
      long* cast95 = (long*)ptr94;
      long t96 = *cast95;
      unsigned char* cast97 = (unsigned char*)t89;
      unsigned char* ptr98 = &(cast97)[t96];
      struct std__basic_ostream_char__std__char_traits_char__* cast99 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr98;
      struct std__basic_ios_char__std__char_traits_char__* cast100 = (struct std__basic_ios_char__std__char_traits_char__*)cast99;
      int t101 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast100, t101);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t102 = __out83;
      char* t103 = __s84;
      char* t104 = __s84;
      unsigned long r105 = std__char_traits_char___length(t104);
      long cast106 = (long)r105;
      struct std__basic_ostream_char__std__char_traits_char__* r107 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t102, t103, cast106);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t108 = __out83;
  __retval85 = t108;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = __retval85;
  return t109;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIicSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* v110, struct std__ostream_iterator_int__char__std__char_traits_char__ v111) {
bb112:
  struct std__ostream_iterator_int__char__std__char_traits_char__* unnamed113;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __res114;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval115;
  unnamed113 = v110;
  __res114 = v111;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval115, &__res114);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t116 = __retval115;
  return t116;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEdeEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* v117) {
bb118:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this119;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval120;
  this119 = v117;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t121 = this119;
  __retval120 = t121;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t122 = __retval120;
  return t122;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEaSERKi
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* v123, int* v124) {
bb125:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this126;
  int* __value127;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval128;
  this126 = v123;
  __value127 = v124;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t129 = this126;
  struct std__basic_ostream_char__std__char_traits_char__* t130 = t129->_M_stream;
  int* t131 = __value127;
  int t132 = *t131;
  struct std__basic_ostream_char__std__char_traits_char__* r133 = std__ostream__operator__(t130, t132);
    char* t134 = t129->_M_string;
    _Bool cast135 = (_Bool)t134;
    if (cast135) {
      struct std__basic_ostream_char__std__char_traits_char__* t136 = t129->_M_stream;
      char* t137 = t129->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r138 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t136, t137);
    }
  __retval128 = t129;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t139 = __retval128;
  return t139;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIicSt11char_traitsIcEEPiEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* v140, int** v141) {
bb142:
  struct std__ostream_iterator_int__char__std__char_traits_char__* __out143;
  int** __in144;
  __out143 = v140;
  __in144 = v141;
    int** t145 = __in144;
    int* t146 = *t145;
    struct std__ostream_iterator_int__char__std__char_traits_char__* t147 = __out143;
    struct std__ostream_iterator_int__char__std__char_traits_char__* r148 = std__ostream_iterator_int__char__std__char_traits_char_____operator__2(t147);
    struct std__ostream_iterator_int__char__std__char_traits_char__* r149 = std__ostream_iterator_int__char__std__char_traits_char_____operator_(r148, t146);
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEppEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* v150) {
bb151:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this152;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval153;
  this152 = v150;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t154 = this152;
  __retval153 = t154;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t155 = __retval153;
  return t155;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_St16ostream_iteratorIicSt11char_traitsIcEEET2_T0_T1_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v156, int* v157, struct std__ostream_iterator_int__char__std__char_traits_char__ v158) {
bb159:
  int* __first160;
  int* __last161;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result162;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval163;
  __first160 = v156;
  __last161 = v157;
  __result162 = v158;
    while (1) {
      int* t165 = __first160;
      int* t166 = __last161;
      _Bool c167 = ((t165 != t166)) ? 1 : 0;
      if (!c167) break;
      void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(&__result162, &__first160);
    for_step164: ;
      struct std__ostream_iterator_int__char__std__char_traits_char__* r168 = std__ostream_iterator_int__char__std__char_traits_char_____operator__(&__result162);
      int* t169 = __first160;
      int c170 = 1;
      int* ptr171 = &(t169)[c170];
      __first160 = ptr171;
    }
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval163, &__result162);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t172 = __retval163;
  return t172;
}

// function: _ZSt14__copy_move_a1ILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v173, int* v174, struct std__ostream_iterator_int__char__std__char_traits_char__ v175) {
bb176:
  int* __first177;
  int* __last178;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result179;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval180;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0181;
  __first177 = v173;
  __last178 = v174;
  __result179 = v175;
  int* t182 = __first177;
  int* t183 = __last178;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0181, &__result179);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t184 = agg_tmp0181;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r185 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(t182, t183, t184);
  __retval180 = r185;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t186 = __retval180;
  return t186;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v187) {
bb188:
  int* __it189;
  int* __retval190;
  __it189 = v187;
  int* t191 = __it189;
  __retval190 = t191;
  int* t192 = __retval190;
  return t192;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIicSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ v193) {
bb194:
  struct std__ostream_iterator_int__char__std__char_traits_char__ __it195;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval196;
  __it195 = v193;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval196, &__it195);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t197 = __retval196;
  return t197;
}

// function: _ZSt13__copy_move_aILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v198, int* v199, struct std__ostream_iterator_int__char__std__char_traits_char__ v200) {
bb201:
  int* __first202;
  int* __last203;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result204;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval205;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0206;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1207;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2208;
  __first202 = v198;
  __last203 = v199;
  __result204 = v200;
  int* t209 = __first202;
  int* r210 = int__std____niter_base_int__(t209);
  int* t211 = __last203;
  int* r212 = int__std____niter_base_int__(t211);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2208, &__result204);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t213 = agg_tmp2208;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r214 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(t213);
  agg_tmp1207 = r214;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t215 = agg_tmp1207;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r216 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r210, r212, t215);
  agg_tmp0206 = r216;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t217 = agg_tmp0206;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r218 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(&__result204, t217);
  __retval205 = r218;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t219 = __retval205;
  return t219;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v220) {
bb221:
  int* __it222;
  int* __retval223;
  __it222 = v220;
  int* t224 = __it222;
  __retval223 = t224;
  int* t225 = __retval223;
  return t225;
}

// function: _ZSt4copyIPiSt16ostream_iteratorIicSt11char_traitsIcEEET0_T_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v226, int* v227, struct std__ostream_iterator_int__char__std__char_traits_char__ v228) {
bb229:
  int* __first230;
  int* __last231;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result232;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval233;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0234;
  __first230 = v226;
  __last231 = v227;
  __result232 = v228;
  int* t235 = __first230;
  int* r236 = int__std____miter_base_int__(t235);
  int* t237 = __last231;
  int* r238 = int__std____miter_base_int__(t237);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0234, &__result232);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t239 = agg_tmp0234;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r240 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r236, r238, t239);
  __retval233 = r240;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t241 = __retval233;
  return t241;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* v242, struct std__ostream_iterator_int__char__std__char_traits_char__* v243) {
bb244:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this245;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __obj246;
  this245 = v242;
  __obj246 = v243;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t247 = this245;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base248 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t247 + 0);
  struct std__ostream_iterator_int__char__std__char_traits_char__* t249 = __obj246;
  struct std__basic_ostream_char__std__char_traits_char__* t250 = t249->_M_stream;
  t247->_M_stream = t250;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t251 = __obj246;
  char* t252 = t251->_M_string;
  t247->_M_string = t252;
  return;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* v253, int* v254, int* v255) {
bb256:
  struct __gnu_cxx____ops___Iter_less_iter* this257;
  int* __it1258;
  int* __it2259;
  _Bool __retval260;
  this257 = v253;
  __it1258 = v254;
  __it2259 = v255;
  struct __gnu_cxx____ops___Iter_less_iter* t261 = this257;
  int* t262 = __it1258;
  int t263 = *t262;
  int* t264 = __it2259;
  int t265 = *t264;
  _Bool c266 = ((t263 < t265)) ? 1 : 0;
  __retval260 = c266;
  _Bool t267 = __retval260;
  return t267;
}

// function: _ZSt10__includesIPiS0_N9__gnu_cxx5__ops15_Iter_less_iterEEbT_S4_T0_S5_T1_
_Bool bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(int* v268, int* v269, int* v270, int* v271, struct __gnu_cxx____ops___Iter_less_iter v272) {
bb273:
  int* __first1274;
  int* __last1275;
  int* __first2276;
  int* __last2277;
  struct __gnu_cxx____ops___Iter_less_iter __comp278;
  _Bool __retval279;
  __first1274 = v268;
  __last1275 = v269;
  __first2276 = v270;
  __last2277 = v271;
  __comp278 = v272;
    while (1) {
      int* t280 = __first1274;
      int* t281 = __last1275;
      _Bool c282 = ((t280 != t281)) ? 1 : 0;
      _Bool ternary283;
      if (c282) {
        int* t284 = __first2276;
        int* t285 = __last2277;
        _Bool c286 = ((t284 != t285)) ? 1 : 0;
        ternary283 = (_Bool)c286;
      } else {
        _Bool c287 = 0;
        ternary283 = (_Bool)c287;
      }
      if (!ternary283) break;
          int* t288 = __first2276;
          int* t289 = __first1274;
          _Bool r290 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp278, t288, t289);
          if (r290) {
            _Bool c291 = 0;
            __retval279 = c291;
            _Bool t292 = __retval279;
            _Bool ret_val293 = t292;
            return ret_val293;
          }
          int* t294 = __first1274;
          int* t295 = __first2276;
          _Bool r296 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp278, t294, t295);
          _Bool u297 = !r296;
          if (u297) {
            int* t298 = __first2276;
            int c299 = 1;
            int* ptr300 = &(t298)[c299];
            __first2276 = ptr300;
          }
        int* t301 = __first1274;
        int c302 = 1;
        int* ptr303 = &(t301)[c302];
        __first1274 = ptr303;
    }
  int* t304 = __first2276;
  int* t305 = __last2277;
  _Bool c306 = ((t304 == t305)) ? 1 : 0;
  __retval279 = c306;
  _Bool t307 = __retval279;
  return t307;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb308:
  struct __gnu_cxx____ops___Iter_less_iter __retval309;
  struct __gnu_cxx____ops___Iter_less_iter t310 = __retval309;
  return t310;
}

// function: _ZSt8includesIPiS0_EbT_S1_T0_S2_
_Bool bool_std__includes_int___int__(int* v311, int* v312, int* v313, int* v314) {
bb315:
  int* __first1316;
  int* __last1317;
  int* __first2318;
  int* __last2319;
  _Bool __retval320;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0321;
  __first1316 = v311;
  __last1317 = v312;
  __first2318 = v313;
  __last2319 = v314;
  int* t322 = __first1316;
  int* t323 = __last1317;
  int* t324 = __first2318;
  int* t325 = __last2319;
  struct __gnu_cxx____ops___Iter_less_iter r326 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0321 = r326;
  struct __gnu_cxx____ops___Iter_less_iter t327 = agg_tmp0321;
  _Bool r328 = bool_std____includes_int___int_____gnu_cxx____ops___Iter_less_iter_(t322, t323, t324, t325, t327);
  __retval320 = r328;
  _Bool t329 = __retval320;
  return t329;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v330, int* v331) {
bb332:
  int** unnamed333;
  int* __res334;
  int* __retval335;
  unnamed333 = v330;
  __res334 = v331;
  int* t336 = __res334;
  __retval335 = t336;
  int* t337 = __retval335;
  return t337;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb338:
  _Bool __retval339;
    _Bool c340 = 0;
    __retval339 = c340;
    _Bool t341 = __retval339;
    return t341;
  abort();
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v342, int* v343, struct std__random_access_iterator_tag v344) {
bb345:
  int* __first346;
  int* __last347;
  struct std__random_access_iterator_tag unnamed348;
  long __retval349;
  __first346 = v342;
  __last347 = v343;
  unnamed348 = v344;
  int* t350 = __last347;
  int* t351 = __first346;
  long diff352 = t350 - t351;
  __retval349 = diff352;
  long t353 = __retval349;
  return t353;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v354) {
bb355:
  int** unnamed356;
  struct std__random_access_iterator_tag __retval357;
  unnamed356 = v354;
  struct std__random_access_iterator_tag t358 = __retval357;
  return t358;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v359, int* v360) {
bb361:
  int* __first362;
  int* __last363;
  long __retval364;
  struct std__random_access_iterator_tag agg_tmp0365;
  __first362 = v359;
  __last363 = v360;
  int* t366 = __first362;
  int* t367 = __last363;
  struct std__random_access_iterator_tag r368 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first362);
  agg_tmp0365 = r368;
  struct std__random_access_iterator_tag t369 = agg_tmp0365;
  long r370 = std__iterator_traits_int____difference_type_std____distance_int__(t366, t367, t369);
  __retval364 = r370;
  long t371 = __retval364;
  return t371;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v372, int** v373) {
bb374:
  int** __out375;
  int** __in376;
  __out375 = v372;
  __in376 = v373;
    int** t377 = __in376;
    int* t378 = *t377;
    int t379 = *t378;
    int** t380 = __out375;
    int* t381 = *t380;
    *t381 = t379;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v382, int* v383, int* v384) {
bb385:
  int* __first386;
  int* __last387;
  int* __result388;
  int* __retval389;
  __first386 = v382;
  __last387 = v383;
  __result388 = v384;
      _Bool r390 = std____is_constant_evaluated();
      if (r390) {
      } else {
          long __n391;
          int* t392 = __first386;
          int* t393 = __last387;
          long r394 = std__iterator_traits_int____difference_type_std__distance_int__(t392, t393);
          __n391 = r394;
            long t395 = __n391;
            long c396 = 1;
            _Bool c397 = ((t395 > c396)) ? 1 : 0;
            if (c397) {
              int* t398 = __result388;
              void* cast399 = (void*)t398;
              int* t400 = __first386;
              void* cast401 = (void*)t400;
              long t402 = __n391;
              unsigned long cast403 = (unsigned long)t402;
              unsigned long c404 = 4;
              unsigned long b405 = cast403 * c404;
              void* r406 = memmove(cast399, cast401, b405);
              long t407 = __n391;
              int* t408 = __result388;
              int* ptr409 = &(t408)[t407];
              __result388 = ptr409;
            } else {
                long t410 = __n391;
                long c411 = 1;
                _Bool c412 = ((t410 == c411)) ? 1 : 0;
                if (c412) {
                  void_std____assign_one_false__int___int__(&__result388, &__first386);
                  int* t413 = __result388;
                  int c414 = 1;
                  int* ptr415 = &(t413)[c414];
                  __result388 = ptr415;
                }
            }
          int* t416 = __result388;
          __retval389 = t416;
          int* t417 = __retval389;
          return t417;
      }
    while (1) {
      int* t419 = __first386;
      int* t420 = __last387;
      _Bool c421 = ((t419 != t420)) ? 1 : 0;
      if (!c421) break;
      void_std____assign_one_false__int___int__(&__result388, &__first386);
    for_step418: ;
      int* t422 = __result388;
      int c423 = 1;
      int* ptr424 = &(t422)[c423];
      __result388 = ptr424;
      int* t425 = __first386;
      int c426 = 1;
      int* ptr427 = &(t425)[c426];
      __first386 = ptr427;
    }
  int* t428 = __result388;
  __retval389 = t428;
  int* t429 = __retval389;
  return t429;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v430, int* v431, int* v432) {
bb433:
  int* __first434;
  int* __last435;
  int* __result436;
  int* __retval437;
  __first434 = v430;
  __last435 = v431;
  __result436 = v432;
  int* t438 = __first434;
  int* t439 = __last435;
  int* t440 = __result436;
  int* r441 = int__std____copy_move_a2_false__int___int___int__(t438, t439, t440);
  __retval437 = r441;
  int* t442 = __retval437;
  return t442;
}

// function: _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a_false__int___int__(int* v443, int* v444, int* v445) {
bb446:
  int* __first447;
  int* __last448;
  int* __result449;
  int* __retval450;
  __first447 = v443;
  __last448 = v444;
  __result449 = v445;
  int* t451 = __first447;
  int* r452 = int__std____niter_base_int__(t451);
  int* t453 = __last448;
  int* r454 = int__std____niter_base_int__(t453);
  int* t455 = __result449;
  int* r456 = int__std____niter_base_int__(t455);
  int* r457 = int__std____copy_move_a1_false__int___int__(r452, r454, r456);
  int* r458 = int__std____niter_wrap_int__(&__result449, r457);
  __retval450 = r458;
  int* t459 = __retval450;
  return t459;
}

// function: _ZSt4copyIPiS0_ET0_T_S2_S1_
int* int__std__copy_int___int__(int* v460, int* v461, int* v462) {
bb463:
  int* __first464;
  int* __last465;
  int* __result466;
  int* __retval467;
  __first464 = v460;
  __last465 = v461;
  __result466 = v462;
  int* t468 = __first464;
  int* r469 = int__std____miter_base_int__(t468);
  int* t470 = __last465;
  int* r471 = int__std____miter_base_int__(t470);
  int* t472 = __result466;
  int* r473 = int__std____copy_move_a_false__int___int__(r469, r471, t472);
  __retval467 = r473;
  int* t474 = __retval467;
  return t474;
}

// function: _ZSt16__set_differenceIPiS0_S0_N9__gnu_cxx5__ops15_Iter_less_iterEET1_T_S5_T0_S6_S4_T2_
int* int__std____set_difference_int___int___int_____gnu_cxx____ops___Iter_less_iter_(int* v475, int* v476, int* v477, int* v478, int* v479, struct __gnu_cxx____ops___Iter_less_iter v480) {
bb481:
  int* __first1482;
  int* __last1483;
  int* __first2484;
  int* __last2485;
  int* __result486;
  struct __gnu_cxx____ops___Iter_less_iter __comp487;
  int* __retval488;
  __first1482 = v475;
  __last1483 = v476;
  __first2484 = v477;
  __last2485 = v478;
  __result486 = v479;
  __comp487 = v480;
    while (1) {
      int* t489 = __first1482;
      int* t490 = __last1483;
      _Bool c491 = ((t489 != t490)) ? 1 : 0;
      _Bool ternary492;
      if (c491) {
        int* t493 = __first2484;
        int* t494 = __last2485;
        _Bool c495 = ((t493 != t494)) ? 1 : 0;
        ternary492 = (_Bool)c495;
      } else {
        _Bool c496 = 0;
        ternary492 = (_Bool)c496;
      }
      if (!ternary492) break;
        int* t497 = __first1482;
        int* t498 = __first2484;
        _Bool r499 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp487, t497, t498);
        if (r499) {
          int* t500 = __first1482;
          int t501 = *t500;
          int* t502 = __result486;
          *t502 = t501;
          int* t503 = __first1482;
          int c504 = 1;
          int* ptr505 = &(t503)[c504];
          __first1482 = ptr505;
          int* t506 = __result486;
          int c507 = 1;
          int* ptr508 = &(t506)[c507];
          __result486 = ptr508;
        } else {
            int* t509 = __first2484;
            int* t510 = __first1482;
            _Bool r511 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp487, t509, t510);
            if (r511) {
              int* t512 = __first2484;
              int c513 = 1;
              int* ptr514 = &(t512)[c513];
              __first2484 = ptr514;
            } else {
              int* t515 = __first1482;
              int c516 = 1;
              int* ptr517 = &(t515)[c516];
              __first1482 = ptr517;
              int* t518 = __first2484;
              int c519 = 1;
              int* ptr520 = &(t518)[c519];
              __first2484 = ptr520;
            }
        }
    }
  int* t521 = __first1482;
  int* t522 = __last1483;
  int* t523 = __result486;
  int* r524 = int__std__copy_int___int__(t521, t522, t523);
  __retval488 = r524;
  int* t525 = __retval488;
  return t525;
}

// function: _ZSt14set_differenceIPiS0_S0_ET1_T_S2_T0_S3_S1_
int* int__std__set_difference_int___int___int__(int* v526, int* v527, int* v528, int* v529, int* v530) {
bb531:
  int* __first1532;
  int* __last1533;
  int* __first2534;
  int* __last2535;
  int* __result536;
  int* __retval537;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0538;
  __first1532 = v526;
  __last1533 = v527;
  __first2534 = v528;
  __last2535 = v529;
  __result536 = v530;
  int* t539 = __first1532;
  int* t540 = __last1533;
  int* t541 = __first2534;
  int* t542 = __last2535;
  int* t543 = __result536;
  struct __gnu_cxx____ops___Iter_less_iter r544 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0538 = r544;
  struct __gnu_cxx____ops___Iter_less_iter t545 = agg_tmp0538;
  int* r546 = int__std____set_difference_int___int___int_____gnu_cxx____ops___Iter_less_iter_(t539, t540, t541, t542, t543, t545);
  __retval537 = r546;
  int* t547 = __retval537;
  return t547;
}

// function: _ZSt18__set_intersectionIPiS0_S0_N9__gnu_cxx5__ops15_Iter_less_iterEET1_T_S5_T0_S6_S4_T2_
int* int__std____set_intersection_int___int___int_____gnu_cxx____ops___Iter_less_iter_(int* v548, int* v549, int* v550, int* v551, int* v552, struct __gnu_cxx____ops___Iter_less_iter v553) {
bb554:
  int* __first1555;
  int* __last1556;
  int* __first2557;
  int* __last2558;
  int* __result559;
  struct __gnu_cxx____ops___Iter_less_iter __comp560;
  int* __retval561;
  __first1555 = v548;
  __last1556 = v549;
  __first2557 = v550;
  __last2558 = v551;
  __result559 = v552;
  __comp560 = v553;
    while (1) {
      int* t562 = __first1555;
      int* t563 = __last1556;
      _Bool c564 = ((t562 != t563)) ? 1 : 0;
      _Bool ternary565;
      if (c564) {
        int* t566 = __first2557;
        int* t567 = __last2558;
        _Bool c568 = ((t566 != t567)) ? 1 : 0;
        ternary565 = (_Bool)c568;
      } else {
        _Bool c569 = 0;
        ternary565 = (_Bool)c569;
      }
      if (!ternary565) break;
        int* t570 = __first1555;
        int* t571 = __first2557;
        _Bool r572 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp560, t570, t571);
        if (r572) {
          int* t573 = __first1555;
          int c574 = 1;
          int* ptr575 = &(t573)[c574];
          __first1555 = ptr575;
        } else {
            int* t576 = __first2557;
            int* t577 = __first1555;
            _Bool r578 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp560, t576, t577);
            if (r578) {
              int* t579 = __first2557;
              int c580 = 1;
              int* ptr581 = &(t579)[c580];
              __first2557 = ptr581;
            } else {
              int* t582 = __first1555;
              int t583 = *t582;
              int* t584 = __result559;
              *t584 = t583;
              int* t585 = __first1555;
              int c586 = 1;
              int* ptr587 = &(t585)[c586];
              __first1555 = ptr587;
              int* t588 = __first2557;
              int c589 = 1;
              int* ptr590 = &(t588)[c589];
              __first2557 = ptr590;
              int* t591 = __result559;
              int c592 = 1;
              int* ptr593 = &(t591)[c592];
              __result559 = ptr593;
            }
        }
    }
  int* t594 = __result559;
  __retval561 = t594;
  int* t595 = __retval561;
  return t595;
}

// function: _ZSt16set_intersectionIPiS0_S0_ET1_T_S2_T0_S3_S1_
int* int__std__set_intersection_int___int___int__(int* v596, int* v597, int* v598, int* v599, int* v600) {
bb601:
  int* __first1602;
  int* __last1603;
  int* __first2604;
  int* __last2605;
  int* __result606;
  int* __retval607;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0608;
  __first1602 = v596;
  __last1603 = v597;
  __first2604 = v598;
  __last2605 = v599;
  __result606 = v600;
  int* t609 = __first1602;
  int* t610 = __last1603;
  int* t611 = __first2604;
  int* t612 = __last2605;
  int* t613 = __result606;
  struct __gnu_cxx____ops___Iter_less_iter r614 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0608 = r614;
  struct __gnu_cxx____ops___Iter_less_iter t615 = agg_tmp0608;
  int* r616 = int__std____set_intersection_int___int___int_____gnu_cxx____ops___Iter_less_iter_(t609, t610, t611, t612, t613, t615);
  __retval607 = r616;
  int* t617 = __retval607;
  return t617;
}

// function: _ZSt26__set_symmetric_differenceIPiS0_S0_N9__gnu_cxx5__ops15_Iter_less_iterEET1_T_S5_T0_S6_S4_T2_
int* int__std____set_symmetric_difference_int___int___int_____gnu_cxx____ops___Iter_less_iter_(int* v618, int* v619, int* v620, int* v621, int* v622, struct __gnu_cxx____ops___Iter_less_iter v623) {
bb624:
  int* __first1625;
  int* __last1626;
  int* __first2627;
  int* __last2628;
  int* __result629;
  struct __gnu_cxx____ops___Iter_less_iter __comp630;
  int* __retval631;
  __first1625 = v618;
  __last1626 = v619;
  __first2627 = v620;
  __last2628 = v621;
  __result629 = v622;
  __comp630 = v623;
    while (1) {
      int* t632 = __first1625;
      int* t633 = __last1626;
      _Bool c634 = ((t632 != t633)) ? 1 : 0;
      _Bool ternary635;
      if (c634) {
        int* t636 = __first2627;
        int* t637 = __last2628;
        _Bool c638 = ((t636 != t637)) ? 1 : 0;
        ternary635 = (_Bool)c638;
      } else {
        _Bool c639 = 0;
        ternary635 = (_Bool)c639;
      }
      if (!ternary635) break;
        int* t640 = __first1625;
        int* t641 = __first2627;
        _Bool r642 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp630, t640, t641);
        if (r642) {
          int* t643 = __first1625;
          int t644 = *t643;
          int* t645 = __result629;
          *t645 = t644;
          int* t646 = __first1625;
          int c647 = 1;
          int* ptr648 = &(t646)[c647];
          __first1625 = ptr648;
          int* t649 = __result629;
          int c650 = 1;
          int* ptr651 = &(t649)[c650];
          __result629 = ptr651;
        } else {
            int* t652 = __first2627;
            int* t653 = __first1625;
            _Bool r654 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp630, t652, t653);
            if (r654) {
              int* t655 = __first2627;
              int t656 = *t655;
              int* t657 = __result629;
              *t657 = t656;
              int* t658 = __first2627;
              int c659 = 1;
              int* ptr660 = &(t658)[c659];
              __first2627 = ptr660;
              int* t661 = __result629;
              int c662 = 1;
              int* ptr663 = &(t661)[c662];
              __result629 = ptr663;
            } else {
              int* t664 = __first1625;
              int c665 = 1;
              int* ptr666 = &(t664)[c665];
              __first1625 = ptr666;
              int* t667 = __first2627;
              int c668 = 1;
              int* ptr669 = &(t667)[c668];
              __first2627 = ptr669;
            }
        }
    }
  int* t670 = __first2627;
  int* t671 = __last2628;
  int* t672 = __first1625;
  int* t673 = __last1626;
  int* t674 = __result629;
  int* r675 = int__std__copy_int___int__(t672, t673, t674);
  int* r676 = int__std__copy_int___int__(t670, t671, r675);
  __retval631 = r676;
  int* t677 = __retval631;
  return t677;
}

// function: _ZSt24set_symmetric_differenceIPiS0_S0_ET1_T_S2_T0_S3_S1_
int* int__std__set_symmetric_difference_int___int___int__(int* v678, int* v679, int* v680, int* v681, int* v682) {
bb683:
  int* __first1684;
  int* __last1685;
  int* __first2686;
  int* __last2687;
  int* __result688;
  int* __retval689;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0690;
  __first1684 = v678;
  __last1685 = v679;
  __first2686 = v680;
  __last2687 = v681;
  __result688 = v682;
  int* t691 = __first1684;
  int* t692 = __last1685;
  int* t693 = __first2686;
  int* t694 = __last2687;
  int* t695 = __result688;
  struct __gnu_cxx____ops___Iter_less_iter r696 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0690 = r696;
  struct __gnu_cxx____ops___Iter_less_iter t697 = agg_tmp0690;
  int* r698 = int__std____set_symmetric_difference_int___int___int_____gnu_cxx____ops___Iter_less_iter_(t691, t692, t693, t694, t695, t697);
  __retval689 = r698;
  int* t699 = __retval689;
  return t699;
}

// function: _ZSt11__set_unionIPiS0_S0_N9__gnu_cxx5__ops15_Iter_less_iterEET1_T_S5_T0_S6_S4_T2_
int* int__std____set_union_int___int___int_____gnu_cxx____ops___Iter_less_iter_(int* v700, int* v701, int* v702, int* v703, int* v704, struct __gnu_cxx____ops___Iter_less_iter v705) {
bb706:
  int* __first1707;
  int* __last1708;
  int* __first2709;
  int* __last2710;
  int* __result711;
  struct __gnu_cxx____ops___Iter_less_iter __comp712;
  int* __retval713;
  __first1707 = v700;
  __last1708 = v701;
  __first2709 = v702;
  __last2710 = v703;
  __result711 = v704;
  __comp712 = v705;
    while (1) {
      int* t714 = __first1707;
      int* t715 = __last1708;
      _Bool c716 = ((t714 != t715)) ? 1 : 0;
      _Bool ternary717;
      if (c716) {
        int* t718 = __first2709;
        int* t719 = __last2710;
        _Bool c720 = ((t718 != t719)) ? 1 : 0;
        ternary717 = (_Bool)c720;
      } else {
        _Bool c721 = 0;
        ternary717 = (_Bool)c721;
      }
      if (!ternary717) break;
          int* t722 = __first1707;
          int* t723 = __first2709;
          _Bool r724 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp712, t722, t723);
          if (r724) {
            int* t725 = __first1707;
            int t726 = *t725;
            int* t727 = __result711;
            *t727 = t726;
            int* t728 = __first1707;
            int c729 = 1;
            int* ptr730 = &(t728)[c729];
            __first1707 = ptr730;
          } else {
              int* t731 = __first2709;
              int* t732 = __first1707;
              _Bool r733 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp712, t731, t732);
              if (r733) {
                int* t734 = __first2709;
                int t735 = *t734;
                int* t736 = __result711;
                *t736 = t735;
                int* t737 = __first2709;
                int c738 = 1;
                int* ptr739 = &(t737)[c738];
                __first2709 = ptr739;
              } else {
                int* t740 = __first1707;
                int t741 = *t740;
                int* t742 = __result711;
                *t742 = t741;
                int* t743 = __first1707;
                int c744 = 1;
                int* ptr745 = &(t743)[c744];
                __first1707 = ptr745;
                int* t746 = __first2709;
                int c747 = 1;
                int* ptr748 = &(t746)[c747];
                __first2709 = ptr748;
              }
          }
        int* t749 = __result711;
        int c750 = 1;
        int* ptr751 = &(t749)[c750];
        __result711 = ptr751;
    }
  int* t752 = __first2709;
  int* t753 = __last2710;
  int* t754 = __first1707;
  int* t755 = __last1708;
  int* t756 = __result711;
  int* r757 = int__std__copy_int___int__(t754, t755, t756);
  int* r758 = int__std__copy_int___int__(t752, t753, r757);
  __retval713 = r758;
  int* t759 = __retval713;
  return t759;
}

// function: _ZSt9set_unionIPiS0_S0_ET1_T_S2_T0_S3_S1_
int* int__std__set_union_int___int___int__(int* v760, int* v761, int* v762, int* v763, int* v764) {
bb765:
  int* __first1766;
  int* __last1767;
  int* __first2768;
  int* __last2769;
  int* __result770;
  int* __retval771;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0772;
  __first1766 = v760;
  __last1767 = v761;
  __first2768 = v762;
  __last2769 = v763;
  __result770 = v764;
  int* t773 = __first1766;
  int* t774 = __last1767;
  int* t775 = __first2768;
  int* t776 = __last2769;
  int* t777 = __result770;
  struct __gnu_cxx____ops___Iter_less_iter r778 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0772 = r778;
  struct __gnu_cxx____ops___Iter_less_iter t779 = agg_tmp0772;
  int* r780 = int__std____set_union_int___int___int_____gnu_cxx____ops___Iter_less_iter_(t773, t774, t775, t776, t777, t779);
  __retval771 = r780;
  int* t781 = __retval771;
  return t781;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v782, void* v783) {
bb784:
  struct std__basic_ostream_char__std__char_traits_char__* this785;
  void* __pf786;
  struct std__basic_ostream_char__std__char_traits_char__* __retval787;
  this785 = v782;
  __pf786 = v783;
  struct std__basic_ostream_char__std__char_traits_char__* t788 = this785;
  void* t789 = __pf786;
  struct std__basic_ostream_char__std__char_traits_char__* r790 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t789)(t788);
  __retval787 = r790;
  struct std__basic_ostream_char__std__char_traits_char__* t791 = __retval787;
  return t791;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v792) {
bb793:
  struct std__basic_ostream_char__std__char_traits_char__* __os794;
  struct std__basic_ostream_char__std__char_traits_char__* __retval795;
  __os794 = v792;
  struct std__basic_ostream_char__std__char_traits_char__* t796 = __os794;
  struct std__basic_ostream_char__std__char_traits_char__* r797 = std__ostream__flush(t796);
  __retval795 = r797;
  struct std__basic_ostream_char__std__char_traits_char__* t798 = __retval795;
  return t798;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v799) {
bb800:
  struct std__ctype_char_* __f801;
  struct std__ctype_char_* __retval802;
  __f801 = v799;
    struct std__ctype_char_* t803 = __f801;
    _Bool cast804 = (_Bool)t803;
    _Bool u805 = !cast804;
    if (u805) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t806 = __f801;
  __retval802 = t806;
  struct std__ctype_char_* t807 = __retval802;
  return t807;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v808, char v809) {
bb810:
  struct std__ctype_char_* this811;
  char __c812;
  char __retval813;
  this811 = v808;
  __c812 = v809;
  struct std__ctype_char_* t814 = this811;
    char t815 = t814->_M_widen_ok;
    _Bool cast816 = (_Bool)t815;
    if (cast816) {
      char t817 = __c812;
      unsigned char cast818 = (unsigned char)t817;
      unsigned long cast819 = (unsigned long)cast818;
      char t820 = t814->_M_widen[cast819];
      __retval813 = t820;
      char t821 = __retval813;
      return t821;
    }
  std__ctype_char____M_widen_init___const(t814);
  char t822 = __c812;
  void** v823 = (void**)t814;
  void* v824 = *((void**)v823);
  char vcall827 = (char)__VERIFIER_virtual_call_char_char(t814, 6, t822);
  __retval813 = vcall827;
  char t828 = __retval813;
  return t828;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v829, char v830) {
bb831:
  struct std__basic_ios_char__std__char_traits_char__* this832;
  char __c833;
  char __retval834;
  this832 = v829;
  __c833 = v830;
  struct std__basic_ios_char__std__char_traits_char__* t835 = this832;
  struct std__ctype_char_* t836 = t835->_M_ctype;
  struct std__ctype_char_* r837 = std__ctype_char__const__std____check_facet_std__ctype_char___(t836);
  char t838 = __c833;
  char r839 = std__ctype_char___widen_char__const(r837, t838);
  __retval834 = r839;
  char t840 = __retval834;
  return t840;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v841) {
bb842:
  struct std__basic_ostream_char__std__char_traits_char__* __os843;
  struct std__basic_ostream_char__std__char_traits_char__* __retval844;
  __os843 = v841;
  struct std__basic_ostream_char__std__char_traits_char__* t845 = __os843;
  struct std__basic_ostream_char__std__char_traits_char__* t846 = __os843;
  void** v847 = (void**)t846;
  void* v848 = *((void**)v847);
  unsigned char* cast849 = (unsigned char*)v848;
  long c850 = -24;
  unsigned char* ptr851 = &(cast849)[c850];
  long* cast852 = (long*)ptr851;
  long t853 = *cast852;
  unsigned char* cast854 = (unsigned char*)t846;
  unsigned char* ptr855 = &(cast854)[t853];
  struct std__basic_ostream_char__std__char_traits_char__* cast856 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr855;
  struct std__basic_ios_char__std__char_traits_char__* cast857 = (struct std__basic_ios_char__std__char_traits_char__*)cast856;
  char c858 = 10;
  char r859 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast857, c858);
  struct std__basic_ostream_char__std__char_traits_char__* r860 = std__ostream__put(t845, r859);
  struct std__basic_ostream_char__std__char_traits_char__* r861 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r860);
  __retval844 = r861;
  struct std__basic_ostream_char__std__char_traits_char__* t862 = __retval844;
  return t862;
}

// function: main
int main() {
bb863:
  int __retval864;
  int SIZE1865;
  int SIZE2866;
  int SIZE3867;
  int a1868[10];
  int a2869[5];
  int a3870[5];
  struct std__ostream_iterator_int__char__std__char_traits_char__ output871;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0872;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1873;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2874;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3875;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4876;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp5877;
  int difference878[10];
  int* ptr879;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp6880;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp7881;
  int intersection882[10];
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp8883;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp9884;
  int symmetric_difference885[10];
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp10886;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp11887;
  int unionSet888[20];
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp12889;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp13890;
  int c891 = 0;
  __retval864 = c891;
  int c892 = 10;
  SIZE1865 = c892;
  int c893 = 5;
  SIZE2866 = c893;
  int c894 = 20;
  SIZE3867 = c894;
  // array copy
  __builtin_memcpy(a1868, __const_main_a1, (unsigned long)10 * sizeof(__const_main_a1[0]));
  // array copy
  __builtin_memcpy(a2869, __const_main_a2, (unsigned long)5 * sizeof(__const_main_a2[0]));
  // array copy
  __builtin_memcpy(a3870, __const_main_a3, (unsigned long)5 * sizeof(__const_main_a3[0]));
  char* cast895 = (char*)&(_str);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output871, &_ZSt4cout, cast895);
  char* cast896 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r897 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast896);
  int* cast898 = (int*)&(a1868);
  int* cast899 = (int*)&(a1868);
  int t900 = SIZE1865;
  int* ptr901 = &(cast899)[t900];
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0872, &output871);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t902 = agg_tmp0872;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r903 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast898, ptr901, t902);
  agg_tmp1873 = r903;
  char* cast904 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r905 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast904);
  int* cast906 = (int*)&(a2869);
  int* cast907 = (int*)&(a2869);
  int t908 = SIZE2866;
  int* ptr909 = &(cast907)[t908];
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2874, &output871);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t910 = agg_tmp2874;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r911 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast906, ptr909, t910);
  agg_tmp3875 = r911;
  char* cast912 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r913 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast912);
  int* cast914 = (int*)&(a3870);
  int* cast915 = (int*)&(a3870);
  int t916 = SIZE2866;
  int* ptr917 = &(cast915)[t916];
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4876, &output871);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t918 = agg_tmp4876;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r919 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast914, ptr917, t918);
  agg_tmp5877 = r919;
    int* cast920 = (int*)&(a1868);
    int* cast921 = (int*)&(a1868);
    int t922 = SIZE1865;
    int* ptr923 = &(cast921)[t922];
    int* cast924 = (int*)&(a2869);
    int* cast925 = (int*)&(a2869);
    int t926 = SIZE2866;
    int* ptr927 = &(cast925)[t926];
    _Bool r928 = bool_std__includes_int___int__(cast920, ptr923, cast924, ptr927);
    if (r928) {
      char* cast929 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r930 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast929);
    } else {
      char* cast931 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r932 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast931);
    }
    int* cast933 = (int*)&(a1868);
    int* cast934 = (int*)&(a1868);
    int t935 = SIZE1865;
    int* ptr936 = &(cast934)[t935];
    int* cast937 = (int*)&(a3870);
    int* cast938 = (int*)&(a3870);
    int t939 = SIZE2866;
    int* ptr940 = &(cast938)[t939];
    _Bool r941 = bool_std__includes_int___int__(cast933, ptr936, cast937, ptr940);
    if (r941) {
      char* cast942 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* r943 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast942);
    } else {
      char* cast944 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r945 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast944);
    }
  int* cast946 = (int*)&(a1868);
  int* cast947 = (int*)&(a1868);
  int t948 = SIZE1865;
  int* ptr949 = &(cast947)[t948];
  int* cast950 = (int*)&(a2869);
  int* cast951 = (int*)&(a2869);
  int t952 = SIZE2866;
  int* ptr953 = &(cast951)[t952];
  int* cast954 = (int*)&(difference878);
  int* r955 = int__std__set_difference_int___int___int__(cast946, ptr949, cast950, ptr953, cast954);
  ptr879 = r955;
  char* cast956 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r957 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast956);
  int* cast958 = (int*)&(difference878);
  int* t959 = ptr879;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp6880, &output871);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t960 = agg_tmp6880;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r961 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast958, t959, t960);
  agg_tmp7881 = r961;
  int* cast962 = (int*)&(a1868);
  int* cast963 = (int*)&(a1868);
  int t964 = SIZE1865;
  int* ptr965 = &(cast963)[t964];
  int* cast966 = (int*)&(a2869);
  int* cast967 = (int*)&(a2869);
  int t968 = SIZE2866;
  int* ptr969 = &(cast967)[t968];
  int* cast970 = (int*)&(intersection882);
  int* r971 = int__std__set_intersection_int___int___int__(cast962, ptr965, cast966, ptr969, cast970);
  ptr879 = r971;
  char* cast972 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r973 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast972);
  int* cast974 = (int*)&(intersection882);
  int* t975 = ptr879;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp8883, &output871);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t976 = agg_tmp8883;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r977 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast974, t975, t976);
  agg_tmp9884 = r977;
  int* cast978 = (int*)&(a1868);
  int* cast979 = (int*)&(a1868);
  int t980 = SIZE1865;
  int* ptr981 = &(cast979)[t980];
  int* cast982 = (int*)&(a2869);
  int* cast983 = (int*)&(a2869);
  int t984 = SIZE2866;
  int* ptr985 = &(cast983)[t984];
  int* cast986 = (int*)&(symmetric_difference885);
  int* r987 = int__std__set_symmetric_difference_int___int___int__(cast978, ptr981, cast982, ptr985, cast986);
  ptr879 = r987;
  char* cast988 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r989 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast988);
  int* cast990 = (int*)&(symmetric_difference885);
  int* t991 = ptr879;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp10886, &output871);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t992 = agg_tmp10886;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r993 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast990, t991, t992);
  agg_tmp11887 = r993;
  int* cast994 = (int*)&(a1868);
  int* cast995 = (int*)&(a1868);
  int t996 = SIZE1865;
  int* ptr997 = &(cast995)[t996];
  int* cast998 = (int*)&(a3870);
  int* cast999 = (int*)&(a3870);
  int t1000 = SIZE2866;
  int* ptr1001 = &(cast999)[t1000];
  int* cast1002 = (int*)&(unionSet888);
  int* r1003 = int__std__set_union_int___int___int__(cast994, ptr997, cast998, ptr1001, cast1002);
  ptr879 = r1003;
  char* cast1004 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* r1005 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1004);
  int* cast1006 = (int*)&(unionSet888);
  int* t1007 = ptr879;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp12889, &output871);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t1008 = agg_tmp12889;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r1009 = std__ostream_iterator_int__char__std__char_traits_char____std__copy_int___std__ostream_iterator_int__char__std__char_traits_char_____(cast1006, t1007, t1008);
  agg_tmp13890 = r1009;
  struct std__basic_ostream_char__std__char_traits_char__* r1010 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c1011 = 0;
  __retval864 = c1011;
  int t1012 = __retval864;
  return t1012;
}

