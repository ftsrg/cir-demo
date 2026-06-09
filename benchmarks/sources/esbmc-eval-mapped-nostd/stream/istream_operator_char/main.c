extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base9basefieldE_const __attribute__((aligned(4))) = 74;
int _ZNSt8ios_base3hexE_const __attribute__((aligned(4))) = 8;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "Enter character: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[23] = "(int)cin.gcount() >= 0";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_operator_char/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[17] = "Enter a string: ";
char _str_4[40] = "cin.flags() & ios::hex == iostream::hex";
char _str_5[23] = "Enter another string: ";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
long std__istream__gcount___const(struct std__basic_istream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std____istream_extract(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___256ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___std__ios_base_____(struct std__basic_istream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__hex(struct std__ios_base* p0);
int std__ios_base__flags___const(struct std__ios_base* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(struct std__basic_istream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0) {
bb1:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2;
  struct std__allocator_char_ ref_tmp03;
  this2 = v0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t4 = this2;
  char* r5 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t4);
  std__allocator_char___allocator_2(&ref_tmp03);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t4->_M_dataplus, r5, &ref_tmp03);
  {
    std__allocator_char____allocator(&ref_tmp03);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t4);
    unsigned long c6 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t4, c6);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v7, int v8) {
bb9:
  int __a10;
  int __b11;
  int __retval12;
  __a10 = v7;
  __b11 = v8;
  int t13 = __a10;
  int t14 = __b11;
  int b15 = t13 | t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v17) {
bb18:
  struct std__basic_ios_char__std__char_traits_char__* this19;
  int __retval20;
  this19 = v17;
  struct std__basic_ios_char__std__char_traits_char__* t21 = this19;
  struct std__ios_base* base22 = (struct std__ios_base*)((char *)t21 + 0);
  int t23 = base22->_M_streambuf_state;
  __retval20 = t23;
  int t24 = __retval20;
  return t24;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v25, int v26) {
bb27:
  struct std__basic_ios_char__std__char_traits_char__* this28;
  int __state29;
  this28 = v25;
  __state29 = v26;
  struct std__basic_ios_char__std__char_traits_char__* t30 = this28;
  int r31 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t30);
  int t32 = __state29;
  int r33 = std__operator__3(r31, t32);
  std__basic_ios_char__std__char_traits_char_____clear(t30, r33);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v34, char* v35) {
bb36:
  char* __c137;
  char* __c238;
  _Bool __retval39;
  __c137 = v34;
  __c238 = v35;
  char* t40 = __c137;
  char t41 = *t40;
  int cast42 = (int)t41;
  char* t43 = __c238;
  char t44 = *t43;
  int cast45 = (int)t44;
  _Bool c46 = ((cast42 == cast45)) ? 1 : 0;
  __retval39 = c46;
  _Bool t47 = __retval39;
  return t47;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v48) {
bb49:
  char* __p50;
  unsigned long __retval51;
  unsigned long __i52;
  __p50 = v48;
  unsigned long c53 = 0;
  __i52 = c53;
    char ref_tmp054;
    while (1) {
      unsigned long t55 = __i52;
      char* t56 = __p50;
      char* ptr57 = &(t56)[t55];
      char c58 = 0;
      ref_tmp054 = c58;
      _Bool r59 = __gnu_cxx__char_traits_char___eq(ptr57, &ref_tmp054);
      _Bool u60 = !r59;
      if (!u60) break;
      unsigned long t61 = __i52;
      unsigned long u62 = t61 + 1;
      __i52 = u62;
    }
  unsigned long t63 = __i52;
  __retval51 = t63;
  unsigned long t64 = __retval51;
  return t64;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v65) {
bb66:
  char* __s67;
  unsigned long __retval68;
  __s67 = v65;
    _Bool r69 = std____is_constant_evaluated();
    if (r69) {
      char* t70 = __s67;
      unsigned long r71 = __gnu_cxx__char_traits_char___length(t70);
      __retval68 = r71;
      unsigned long t72 = __retval68;
      return t72;
    }
  char* t73 = __s67;
  unsigned long r74 = strlen(t73);
  __retval68 = r74;
  unsigned long t75 = __retval68;
  return t75;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v76, char* v77) {
bb78:
  struct std__basic_ostream_char__std__char_traits_char__* __out79;
  char* __s80;
  struct std__basic_ostream_char__std__char_traits_char__* __retval81;
  __out79 = v76;
  __s80 = v77;
    char* t82 = __s80;
    _Bool cast83 = (_Bool)t82;
    _Bool u84 = !cast83;
    if (u84) {
      struct std__basic_ostream_char__std__char_traits_char__* t85 = __out79;
      void** v86 = (void**)t85;
      void* v87 = *((void**)v86);
      unsigned char* cast88 = (unsigned char*)v87;
      long c89 = -24;
      unsigned char* ptr90 = &(cast88)[c89];
      long* cast91 = (long*)ptr90;
      long t92 = *cast91;
      unsigned char* cast93 = (unsigned char*)t85;
      unsigned char* ptr94 = &(cast93)[t92];
      struct std__basic_ostream_char__std__char_traits_char__* cast95 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr94;
      struct std__basic_ios_char__std__char_traits_char__* cast96 = (struct std__basic_ios_char__std__char_traits_char__*)cast95;
      int t97 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast96, t97);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t98 = __out79;
      char* t99 = __s80;
      char* t100 = __s80;
      unsigned long r101 = std__char_traits_char___length(t100);
      long cast102 = (long)r101;
      struct std__basic_ostream_char__std__char_traits_char__* r103 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t98, t99, cast102);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t104 = __out79;
  __retval81 = t104;
  struct std__basic_ostream_char__std__char_traits_char__* t105 = __retval81;
  return t105;
}

// function: _ZNKSi6gcountEv
long std__istream__gcount___const(struct std__basic_istream_char__std__char_traits_char__* v106) {
bb107:
  struct std__basic_istream_char__std__char_traits_char__* this108;
  long __retval109;
  this108 = v106;
  struct std__basic_istream_char__std__char_traits_char__* t110 = this108;
  long t111 = t110->_M_gcount;
  __retval109 = t111;
  long t112 = __retval109;
  return t112;
}

// function: _ZStrsIcSt11char_traitsIcELm256EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___256ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v113, char* v114) {
bb115:
  struct std__basic_istream_char__std__char_traits_char__* __in116;
  char* __s117;
  struct std__basic_istream_char__std__char_traits_char__* __retval118;
  __in116 = v113;
  __s117 = v114;
  struct std__basic_istream_char__std__char_traits_char__* t119 = __in116;
  char* t120 = __s117;
  char* cast121 = (char*)t120;
  long c122 = 256;
  std____istream_extract(t119, cast121, c122);
  struct std__basic_istream_char__std__char_traits_char__* t123 = __in116;
  __retval118 = t123;
  struct std__basic_istream_char__std__char_traits_char__* t124 = __retval118;
  return t124;
}

// function: _ZNSirsEPFRSt8ios_baseS0_E
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___std__ios_base_____(struct std__basic_istream_char__std__char_traits_char__* v125, void* v126) {
bb127:
  struct std__basic_istream_char__std__char_traits_char__* this128;
  void* __pf129;
  struct std__basic_istream_char__std__char_traits_char__* __retval130;
  this128 = v125;
  __pf129 = v126;
  struct std__basic_istream_char__std__char_traits_char__* t131 = this128;
  void* t132 = __pf129;
  void** v133 = (void**)t131;
  void* v134 = *((void**)v133);
  unsigned char* cast135 = (unsigned char*)v134;
  long c136 = -24;
  unsigned char* ptr137 = &(cast135)[c136];
  long* cast138 = (long*)ptr137;
  long t139 = *cast138;
  unsigned char* cast140 = (unsigned char*)t131;
  unsigned char* ptr141 = &(cast140)[t139];
  struct std__basic_istream_char__std__char_traits_char__* cast142 = (struct std__basic_istream_char__std__char_traits_char__*)ptr141;
  struct std__ios_base* cast143 = (struct std__ios_base*)cast142;
  struct std__ios_base* r144 = ((struct std__ios_base* (*)(struct std__ios_base*))t132)(cast143);
  __retval130 = t131;
  struct std__basic_istream_char__std__char_traits_char__* t145 = __retval130;
  return t145;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v146, int v147) {
bb148:
  int* __a149;
  int __b150;
  int* __retval151;
  __a149 = v146;
  __b150 = v147;
  int* t152 = __a149;
  int t153 = *t152;
  int t154 = __b150;
  int r155 = std__operator_(t153, t154);
  int* t156 = __a149;
  *t156 = r155;
  __retval151 = t156;
  int* t157 = __retval151;
  return t157;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v158) {
bb159:
  int __a160;
  int __retval161;
  __a160 = v158;
  int t162 = __a160;
  int u163 = ~t162;
  __retval161 = u163;
  int t164 = __retval161;
  return t164;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v165, int v166) {
bb167:
  int __a168;
  int __b169;
  int __retval170;
  __a168 = v165;
  __b169 = v166;
  int t171 = __a168;
  int t172 = __b169;
  int b173 = t171 | t172;
  __retval170 = b173;
  int t174 = __retval170;
  return t174;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v175, int v176) {
bb177:
  int* __a178;
  int __b179;
  int* __retval180;
  __a178 = v175;
  __b179 = v176;
  int* t181 = __a178;
  int t182 = *t181;
  int t183 = __b179;
  int r184 = std__operator__4(t182, t183);
  int* t185 = __a178;
  *t185 = r184;
  __retval180 = t185;
  int* t186 = __retval180;
  return t186;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v187, int v188) {
bb189:
  int __a190;
  int __b191;
  int __retval192;
  __a190 = v187;
  __b191 = v188;
  int t193 = __a190;
  int t194 = __b191;
  int b195 = t193 & t194;
  __retval192 = b195;
  int t196 = __retval192;
  return t196;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v197, int v198, int v199) {
bb200:
  struct std__ios_base* this201;
  int __fmtfl202;
  int __mask203;
  int __retval204;
  int __old205;
  this201 = v197;
  __fmtfl202 = v198;
  __mask203 = v199;
  struct std__ios_base* t206 = this201;
  int t207 = t206->_M_flags;
  __old205 = t207;
  int t208 = __mask203;
  int r209 = std__operator__2(t208);
  int* r210 = std__operator__(&t206->_M_flags, r209);
  int t211 = __fmtfl202;
  int t212 = __mask203;
  int r213 = std__operator_(t211, t212);
  int* r214 = std__operator___2(&t206->_M_flags, r213);
  int t215 = __old205;
  __retval204 = t215;
  int t216 = __retval204;
  return t216;
}

// function: _ZSt3hexRSt8ios_base
struct std__ios_base* std__hex(struct std__ios_base* v217) {
bb218:
  struct std__ios_base* __base219;
  struct std__ios_base* __retval220;
  __base219 = v217;
  struct std__ios_base* t221 = __base219;
  int t222 = _ZNSt8ios_base3hexE_const;
  int t223 = _ZNSt8ios_base9basefieldE_const;
  int r224 = std__ios_base__setf(t221, t222, t223);
  struct std__ios_base* t225 = __base219;
  __retval220 = t225;
  struct std__ios_base* t226 = __retval220;
  return t226;
}

// function: _ZNKSt8ios_base5flagsEv
int std__ios_base__flags___const(struct std__ios_base* v227) {
bb228:
  struct std__ios_base* this229;
  int __retval230;
  this229 = v227;
  struct std__ios_base* t231 = this229;
  int t232 = t231->_M_flags;
  __retval230 = t232;
  int t233 = __retval230;
  return t233;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v234) {
bb235:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this236;
  this236 = v234;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t237 = this236;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t237);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t237->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb238:
  int __retval239;
  char n240;
  char n1241[256];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ n2242;
  int c243 = 0;
  __retval239 = c243;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&n2242);
    char* cast244 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r245 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast244);
    struct std__basic_istream_char__std__char_traits_char__* r246 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(&_ZSt3cin, &n240);
    long r247 = std__istream__gcount___const(&_ZSt3cin);
    int cast248 = (int)r247;
    int c249 = 0;
    _Bool c250 = ((cast248 >= c249)) ? 1 : 0;
    if (c250) {
    } else {
      char* cast251 = (char*)&(_str_1);
      char* c252 = _str_2;
      unsigned int c253 = 21;
      char* cast254 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast251, c252, c253, cast254);
    }
    char* cast255 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast255);
    struct std__basic_istream_char__std__char_traits_char__* r257 = std__istream__operator___std__ios_base_____(&_ZSt3cin, &std__hex);
    struct std__basic_istream_char__std__char_traits_char__* r258 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___256ul__std__basic_istream_char__std__char_traits_char______char_(r257, n1241);
    void** v259 = (void**)&_ZSt3cin;
    void* v260 = *((void**)v259);
    unsigned char* cast261 = (unsigned char*)v260;
    long c262 = -24;
    unsigned char* ptr263 = &(cast261)[c262];
    long* cast264 = (long*)ptr263;
    long t265 = *cast264;
    unsigned char* cast266 = (unsigned char*)&_ZSt3cin;
    unsigned char* ptr267 = &(cast266)[t265];
    struct std__basic_istream_char__std__char_traits_char__* cast268 = (struct std__basic_istream_char__std__char_traits_char__*)ptr267;
    struct std__ios_base* cast269 = (struct std__ios_base*)cast268;
    int r270 = std__ios_base__flags___const(cast269);
    int t271 = _ZNSt8ios_base3hexE_const;
    int t272 = _ZNSt8ios_base3hexE_const;
    _Bool c273 = ((t271 == t272)) ? 1 : 0;
    int cast274 = (int)c273;
    int b275 = r270 & cast274;
    _Bool cast276 = (_Bool)b275;
    if (cast276) {
    } else {
      char* cast277 = (char*)&(_str_4);
      char* c278 = _str_2;
      unsigned int c279 = 24;
      char* cast280 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast277, c278, c279, cast280);
    }
    char* cast281 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r282 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast281);
    struct std__basic_istream_char__std__char_traits_char__* r283 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(&_ZSt3cin, &n2242);
    long r284 = std__istream__gcount___const(&_ZSt3cin);
    int cast285 = (int)r284;
    int c286 = 0;
    _Bool c287 = ((cast285 >= c286)) ? 1 : 0;
    if (c287) {
    } else {
      char* cast288 = (char*)&(_str_1);
      char* c289 = _str_2;
      unsigned int c290 = 28;
      char* cast291 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast288, c289, c290, cast291);
    }
    int c292 = 0;
    __retval239 = c292;
    int t293 = __retval239;
    int ret_val294 = t293;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&n2242);
    }
    return ret_val294;
  int t295 = __retval239;
  return t295;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v296) {
bb297:
  char* __r298;
  char* __retval299;
  __r298 = v296;
  char* t300 = __r298;
  __retval299 = t300;
  char* t301 = __retval299;
  return t301;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v302) {
bb303:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this304;
  char* __retval305;
  this304 = v302;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t306 = this304;
  char* cast307 = (char*)&(t306->field2._M_local_buf);
  char* r308 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast307);
  __retval305 = r308;
  char* t309 = __retval305;
  return t309;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v310) {
bb311:
  struct std__allocator_char_* this312;
  this312 = v310;
  struct std__allocator_char_* t313 = this312;
  struct std____new_allocator_char_* base314 = (struct std____new_allocator_char_*)((char *)t313 + 0);
  std____new_allocator_char_____new_allocator_2(base314);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v315, char* v316, struct std__allocator_char_* v317) {
bb318:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this319;
  char* __dat320;
  struct std__allocator_char_* __a321;
  this319 = v315;
  __dat320 = v316;
  __a321 = v317;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t322 = this319;
  struct std__allocator_char_* base323 = (struct std__allocator_char_*)((char *)t322 + 0);
  struct std__allocator_char_* t324 = __a321;
  std__allocator_char___allocator(base323, t324);
    char* t325 = __dat320;
    t322->_M_p = t325;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v326) {
bb327:
  struct std__allocator_char_* this328;
  this328 = v326;
  struct std__allocator_char_* t329 = this328;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb330:
  _Bool __retval331;
    _Bool c332 = 0;
    __retval331 = c332;
    _Bool t333 = __retval331;
    return t333;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v334) {
bb335:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this336;
  this336 = v334;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t337 = this336;
    _Bool r338 = std__is_constant_evaluated();
    if (r338) {
        unsigned long __i339;
        unsigned long c340 = 0;
        __i339 = c340;
        while (1) {
          unsigned long t342 = __i339;
          unsigned long c343 = 15;
          _Bool c344 = ((t342 <= c343)) ? 1 : 0;
          if (!c344) break;
          char c345 = 0;
          unsigned long t346 = __i339;
          t337->field2._M_local_buf[t346] = c345;
        for_step341: ;
          unsigned long t347 = __i339;
          unsigned long u348 = t347 + 1;
          __i339 = u348;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v349, unsigned long v350) {
bb351:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this352;
  unsigned long __length353;
  this352 = v349;
  __length353 = v350;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t354 = this352;
  unsigned long t355 = __length353;
  t354->_M_string_length = t355;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb356:
  _Bool __retval357;
    _Bool c358 = 0;
    __retval357 = c358;
    _Bool t359 = __retval357;
    return t359;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v360, char* v361) {
bb362:
  char* __location363;
  char* __args364;
  char* __retval365;
  void* __loc366;
  __location363 = v360;
  __args364 = v361;
  char* t367 = __location363;
  void* cast368 = (void*)t367;
  __loc366 = cast368;
    void* t369 = __loc366;
    char* cast370 = (char*)t369;
    char* t371 = __args364;
    char t372 = *t371;
    *cast370 = t372;
    __retval365 = cast370;
    char* t373 = __retval365;
    return t373;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v374, char* v375) {
bb376:
  char* __c1377;
  char* __c2378;
  __c1377 = v374;
  __c2378 = v375;
    _Bool r379 = std____is_constant_evaluated();
    if (r379) {
      char* t380 = __c1377;
      char* t381 = __c2378;
      char* r382 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t380, t381);
    } else {
      char* t383 = __c2378;
      char t384 = *t383;
      char* t385 = __c1377;
      *t385 = t384;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v386) {
bb387:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this388;
  char* __retval389;
  this388 = v386;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t390 = this388;
  char* t391 = t390->_M_dataplus._M_p;
  __retval389 = t391;
  char* t392 = __retval389;
  return t392;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v393, unsigned long v394) {
bb395:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this396;
  unsigned long __n397;
  char ref_tmp0398;
  this396 = v393;
  __n397 = v394;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t399 = this396;
  unsigned long t400 = __n397;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t399, t400);
  unsigned long t401 = __n397;
  char* r402 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t399);
  char* ptr403 = &(r402)[t401];
  char c404 = 0;
  ref_tmp0398 = c404;
  std__char_traits_char___assign(ptr403, &ref_tmp0398);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v405) {
bb406:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this407;
  this407 = v405;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t408 = this407;
  {
    struct std__allocator_char_* base409 = (struct std__allocator_char_*)((char *)t408 + 0);
    std__allocator_char____allocator(base409);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v410) {
bb411:
  struct std____new_allocator_char_* this412;
  this412 = v410;
  struct std____new_allocator_char_* t413 = this412;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v414, struct std____new_allocator_char_* v415) {
bb416:
  struct std____new_allocator_char_* this417;
  struct std____new_allocator_char_* unnamed418;
  this417 = v414;
  unnamed418 = v415;
  struct std____new_allocator_char_* t419 = this417;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v420, struct std__allocator_char_* v421) {
bb422:
  struct std__allocator_char_* this423;
  struct std__allocator_char_* __a424;
  this423 = v420;
  __a424 = v421;
  struct std__allocator_char_* t425 = this423;
  struct std____new_allocator_char_* base426 = (struct std____new_allocator_char_*)((char *)t425 + 0);
  struct std__allocator_char_* t427 = __a424;
  struct std____new_allocator_char_* base428 = (struct std____new_allocator_char_*)((char *)t427 + 0);
  std____new_allocator_char_____new_allocator(base426, base428);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v429) {
bb430:
  char* __r431;
  char* __retval432;
  __r431 = v429;
  char* t433 = __r431;
  __retval432 = t433;
  char* t434 = __retval432;
  return t434;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v435) {
bb436:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this437;
  char* __retval438;
  this437 = v435;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t439 = this437;
  char* cast440 = (char*)&(t439->field2._M_local_buf);
  char* r441 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast440);
  __retval438 = r441;
  char* t442 = __retval438;
  return t442;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v443) {
bb444:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this445;
  _Bool __retval446;
  this445 = v443;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t447 = this445;
    char* r448 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t447);
    char* r449 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t447);
    _Bool c450 = ((r448 == r449)) ? 1 : 0;
    if (c450) {
        unsigned long t451 = t447->_M_string_length;
        unsigned long c452 = 15;
        _Bool c453 = ((t451 > c452)) ? 1 : 0;
        if (c453) {
          __builtin_unreachable();
        }
      _Bool c454 = 1;
      __retval446 = c454;
      _Bool t455 = __retval446;
      return t455;
    }
  _Bool c456 = 0;
  __retval446 = c456;
  _Bool t457 = __retval446;
  return t457;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v458, char* v459, unsigned long v460) {
bb461:
  struct std____new_allocator_char_* this462;
  char* __p463;
  unsigned long __n464;
  this462 = v458;
  __p463 = v459;
  __n464 = v460;
  struct std____new_allocator_char_* t465 = this462;
    unsigned long c466 = 1;
    unsigned long c467 = 16;
    _Bool c468 = ((c466 > c467)) ? 1 : 0;
    if (c468) {
      char* t469 = __p463;
      void* cast470 = (void*)t469;
      unsigned long t471 = __n464;
      unsigned long c472 = 1;
      unsigned long b473 = t471 * c472;
      unsigned long c474 = 1;
      operator_delete_3(cast470, b473, c474);
      return;
    }
  char* t475 = __p463;
  void* cast476 = (void*)t475;
  unsigned long t477 = __n464;
  unsigned long c478 = 1;
  unsigned long b479 = t477 * c478;
  operator_delete_2(cast476, b479);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v480, char* v481, unsigned long v482) {
bb483:
  struct std__allocator_char_* this484;
  char* __p485;
  unsigned long __n486;
  this484 = v480;
  __p485 = v481;
  __n486 = v482;
  struct std__allocator_char_* t487 = this484;
    _Bool r488 = std____is_constant_evaluated();
    if (r488) {
      char* t489 = __p485;
      void* cast490 = (void*)t489;
      operator_delete(cast490);
      return;
    }
  struct std____new_allocator_char_* base491 = (struct std____new_allocator_char_*)((char *)t487 + 0);
  char* t492 = __p485;
  unsigned long t493 = __n486;
  std____new_allocator_char___deallocate(base491, t492, t493);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v494, char* v495, unsigned long v496) {
bb497:
  struct std__allocator_char_* __a498;
  char* __p499;
  unsigned long __n500;
  __a498 = v494;
  __p499 = v495;
  __n500 = v496;
  struct std__allocator_char_* t501 = __a498;
  char* t502 = __p499;
  unsigned long t503 = __n500;
  std__allocator_char___deallocate(t501, t502, t503);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v504) {
bb505:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this506;
  struct std__allocator_char_* __retval507;
  this506 = v504;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t508 = this506;
  struct std__allocator_char_* base509 = (struct std__allocator_char_*)((char *)&(t508->_M_dataplus) + 0);
  __retval507 = base509;
  struct std__allocator_char_* t510 = __retval507;
  return t510;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v511, unsigned long v512) {
bb513:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this514;
  unsigned long __size515;
  this514 = v511;
  __size515 = v512;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t516 = this514;
  struct std__allocator_char_* r517 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t516);
  char* r518 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t516);
  unsigned long t519 = __size515;
  unsigned long c520 = 1;
  unsigned long b521 = t519 + c520;
  std__allocator_traits_std__allocator_char_____deallocate(r517, r518, b521);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v522) {
bb523:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this524;
  this524 = v522;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t525 = this524;
    _Bool r526 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t525);
    _Bool u527 = !r526;
    if (u527) {
      unsigned long t528 = t525->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t525, t528);
    }
  return;
}

